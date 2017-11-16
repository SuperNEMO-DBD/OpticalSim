//#include "Correction_energie.hh"
//#include "../Comparaison_Spectre/Comparaison_Spectre.hh"
//#include "../Plot_Edep_Evisible/Plot.hh"
#include "TH3F.h"

void Parse_Scan_3D()
{
  //string File = "Scan_3D.root";
  TFile *file = new TFile("/nemo243/Optical_Simulation_Arnaud/simulation_input_files/Scan_3D.root");
  TH3F *Map;
  Map = (TH3F*) file->Get("Correction_3D");
  
  int Entries = Map->GetEntries();
  int NbinsX = Map->GetNbinsX();
  int NbinsY = Map->GetNbinsY();
  int NbinsZ = Map->GetNbinsZ();

  cout << "Number of entries = " << Entries << endl;
  cout << "Number of bins X = " << NbinsX << endl;
  cout << "Number of bins Y = " << NbinsY << endl;
  cout << "Number of bins Z = " << NbinsZ << endl;

  cout << "Content 1 = " << Map->GetBinContent(31,31,1) << endl;
  cout << "Content 2 = " << Map->GetBinContent(30,31,1) << endl;
  cout << "Content 3 = " << Map->GetBinContent(31,30,1) << endl;
  cout << "Content 4 = " << Map->GetBinContent(30,30,1) << endl;
  cout << "Interpolate = " << Map->Interpolate(0,9,120.5) << endl;

  float X = -128;
  float Y = -128;
  float Z = 0;

ofstream fichier("test.txt", ios::out | ios::trunc);

 if (fichier)
   {
     fichier << "X\t" << "Y\t" << "Z\t" << "Correction_factor" << endl;
     for (int k =0; k<=256; k++) // Axe z
       {
	 Y=-128;
	 Z=0;
	 X++;
	 for (int i=0; i<= 256; i++) // Axe x
	   {
	     Z=0;
	     Y++;
	     for (int j=0; j<= 195; j++) // Axe y
	       {
		 fichier << X << "\t" << Y << "\t" << Z << "\t" << Map->Interpolate(X,Y,Z+2.5) << endl;
		 Z++;
	       }
	   }
       }
   }

 else

   cout << "Impossible d'ouvrir le fichier !! " << endl;

}
