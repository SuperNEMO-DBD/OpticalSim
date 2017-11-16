/// SN_OpticalSim.cc
/// Author: Benton Pahlka <pahlka@physics.utexas.edu>
/// Copyright: 2010 (C) NEMO3/SuperNEMO - University of Texas at Austin


#include "G4LogicalSkinSurface.hh"
#include "G4OpticalSurface.hh"
#include "G4ThreeVector.hh"
#include "G4MaterialPropertiesTable.hh"
#include "Randomize.hh"
#include "time.h"
 #include "G4Timer.hh"
#include "G4UIterminal.hh"
#include "SN_OpticalSimSteppingAction.hh"
#include "G4RunManager.hh"
#include "G4UImanager.hh"
#include "G4UIGAG.hh"
#include "SN_OpticalSimGeometry.hh"
#include "SN_OpticalSimPhysics.hh"
#include "SN_OpticalSimPrimaryGeneratorAction.hh"
#include "SN_OpticalSimRunAction.hh"
#include "SN_OpticalSimEventAction.hh"
#include "SN_OpticalSimTrackingAction.hh"
#include "G4StepLimiterPhysics.hh"
#ifdef G4VIS_USE
#include "SN_OpticalSimVisManager.hh"
#endif

int main(int argc,char** argv){

  char* suff = argv[3];


  // Construct the default run manager
  G4RunManager* runManager = new G4RunManager;


  // set mandatory initialization classes
  SN_OpticalSimGeometry* OptGeom = new SN_OpticalSimGeometry;

  G4cout<<"Geometry given to SN_OpticalSim.cc"<<G4endl;

  // initialize the geometry
  runManager->SetUserInitialization(OptGeom);
  G4cout<<"Geometry set in SN_OpticalSim.cc given to Runman"<<G4endl;

  // initialize the physics
  SN_OpticalSimPhysics* physicsList = new SN_OpticalSimPhysics;
  physicsList->RegisterPhysics(new G4StepLimiterPhysics());
  runManager->SetUserInitialization(physicsList);

#ifdef G4VIS_USE
  // visualization manager
  G4VisManager* visManager = new SN_OpticalSimVisManager;
  visManager->Initialize();
#endif

  // set mandatory user action class
  runManager->SetUserAction(new SN_OpticalSimPrimaryGeneratorAction);


  // set Run Event and Stepping action classes 
  runManager->SetUserAction(new SN_OpticalSimRunAction(suff));
  G4cout<<"Initialized new Run Action"<<G4endl;

  runManager->SetUserAction(new SN_OpticalSimEventAction(suff));
  G4cout<<"Initialized new EventAction"<<G4endl;
  runManager->SetUserAction(new SN_OpticalSimSteppingAction);
  G4cout<<"Initialized new SteppingAction"<<G4endl;
  runManager->SetUserAction(new SN_OpticalSimTrackingAction);
  G4cout<<"Initialized new Tracking Action"<<G4endl;

  // Initialize G4 kernel
  runManager->Initialize();

  G4cout<<"Initialized new Run Manager"<<G4endl;

  // get the pointer to the User Interface manager 
  G4UImanager* UI = G4UImanager::GetUIpointer();

  //execute visualization macro
  G4String command = "/control/execute ";
  G4String fileName = argv[2];
  UI->ApplyCommand(command+fileName);
  //UI->ApplyCommand("/control/execute vrml.mac");
  UI->ApplyCommand("/control/suppressAbortion");
  G4UIsession *session = new G4UIterminal();
  if(argc == 1)
    //starts G4Terminal
    session->SessionStart();
  
  else if(argc == 4){
    //automatically executes the specified number of runs and saves to output
    char writefile[100],startcommand[100], movefile[100];
    sprintf(startcommand,"/run/beamOn %s",argv[1]);
      UI->ApplyCommand(startcommand);
      sprintf(writefile,"/control/shell mv %s.root ../Resultats/",argv[3]);
      UI->ApplyCommand(writefile);
      //sprintf(movefile,"/control/shell mv %s.root ../Resultats", argv[2]);
      //UI->ApplyCommand(movefile);
      G4cout << "Output saved to file " << argv[3] << ".root" << G4endl;
  }

  delete session;

  delete runManager;
  return 0;
}

