#include "TCanvas.h"
#include "TProfile.h"
#include "TH1F.h"
#include "TFile.h"
#include <iostream>    
#include <fstream>     
#include "Plot_QE.hh"

void Plot_QE()
{
  TCanvas *c1 = new TCanvas ("c1", "c1");
  TProfile * Profile = new TProfile ("Profile", "Profile", 56, 200, 760,"s");
  TH1F* Histo = new TH1F("Histo", "Histo", 50, 260, 760);

  int n =50;

  int File[19] = {124, 154, 190, 192, 205, 245, 261, 297, 365, 369, 371, 408, 429, 463, 494, 510, 522, 556, 569}; 

  for (int k=0; k<19; k++)
    {

      string drop;
      float Wavelength[n];
      float QE[n];
      char filename[100];
      sprintf(filename, "QE_ham_GA0%d.txt", File[k]);
      cout << "filename = " << filename << endl;
      int count =Line_File(filename);
      ifstream file(filename);
      
      for(int i=1;i<=count;i++) 
	{
	  file>>Wavelength[i]>>drop>>QE[i];
	  cout << Wavelength[i] << "    " << QE[i] <<endl;
	  Histo->SetBinContent(i, QE[i]);
	  Profile->Fill(Wavelength[i], QE[i]);
      Profile->Fill(200, 0.0001);
      Profile->Fill(210, 0.0001);
      Profile->Fill(220, 0.0001);
      Profile->Fill(230, 0.0001);
      Profile->Fill(240, 0.0001);
      Profile->Fill(250, 0.0001);

	}
      

      c1->cd();
      //Histo->Draw("lsames");
      Profile->Draw("same");
      c1->Update();
      //getchar();
    }
    

  ofstream f ("QE_Mean.txt");

  for (int i=0; i<51; i++)
    {
      cout << "Wavelength : " << 260+i*10 << " => QE = " << Profile->GetBinContent(i) << endl;
      f << 260+i*10 << ", " << Profile->GetBinContent(i) << endl;
    }
    

    
    
}
