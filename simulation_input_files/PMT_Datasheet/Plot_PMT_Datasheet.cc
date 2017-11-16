#include "TCanvas.h"
#include "TProfile.h"
#include "TH1F.h"
#include "TH2F.h"
#include "TFile.h"
#include <iostream>    
#include <fstream>     
#include "Plot_PMT_Datasheet.hh"

void Plot_PMT_Datasheet()
{
  TCanvas *c1 = new TCanvas ("c1", "c1");
  TCanvas *c2 = new TCanvas ("c2", "c2");
  TCanvas *c3 = new TCanvas ("c3", "c3");
  TCanvas *c4 = new TCanvas ("c4", "c4");
  TCanvas *c5 = new TCanvas ("c5", "c5");
  TCanvas *c6 = new TCanvas ("c6", "c6");
  TCanvas *c7 = new TCanvas ("c7", "c7");
  TCanvas *c8 = new TCanvas ("c8", "c8");
  TCanvas *c9 = new TCanvas ("c9", "c9");
  TCanvas *c10 = new TCanvas ("c10", "c10");

  int n =Line_File("8in_PMTs_Datasheet_Integrated.txt");
  string drop;

  int Serial_Number[n];
  float Cathode_Lum[n];
  float Anode_Lum[n];
  float Anode_Dark_Current[n];
  float Cathode_Blue_Sens[n];
  float Voltage_1[n];
  float Voltage_2[n];
  float P_V[n];
  float TTS[n];
  float Dark_Count[n];

  TH1F* h_Serial_Number = new TH1F("Serial_Number", "Serial_Number", 700, 0, 700);
  TH1F* h_Cathode_Lum = new TH1F("Cathode_Lum", "Cathode_Lum", 300, 0, 300);
  TH1F* h_Anode_Lum = new TH1F("Anode_Lum", "Anode_Lum", 100, 0, 100);
  TH1F* h_Anode_Dark_Current = new TH1F("Anode_Dark_Current", "Anode_Dark_Current", 1000, 0, 100);
  TH1F* h_Cathode_Blue_Sens = new TH1F("Cathode_Blue_Sens", "Cathode_Blue_Sens", 200, 0, 20);
  TH1F* h_Voltage_1 = new TH1F("Voltage_1", "Voltage_1", 200, 0, 2000);
  TH1F* h_Voltage_2 = new TH1F("Voltage_2", "Voltage_2", 220, 0, 2200);
  TH1F* h_P_V = new TH1F("P_V", "P_V", 400, 0, 4);
  TH1F* h_TTS = new TH1F("TTS", "TTS", 300, 0, 3);
  TH1F* h_Dark_Count = new TH1F("Dark_Count", "Dark_Count", 120, 0, 12000);

  TH2F* Test = new TH2F("Test", "Test", 1000,0,100, 1200,0,12000);

    
  ifstream file("8in_PMTs_Datasheet_Integrated.txt");
  string junk;
  getline(file, junk);
  for(int i=1;i<n;i++) 
    {
      file >> Serial_Number[i] >> Cathode_Lum[i]  >> Anode_Lum[i]  >> Anode_Dark_Current[i]  >> Cathode_Blue_Sens[i]  >> Voltage_1[i]  >> Voltage_2[i]  >> P_V[i]  >> TTS[i]  >> Dark_Count[i];

      h_Serial_Number->Fill(Serial_Number[i]);
      h_Cathode_Lum->Fill(Cathode_Lum[i]);
      h_Anode_Lum->Fill(Anode_Lum[i]);
      h_Anode_Dark_Current->Fill(Anode_Dark_Current[i]);
      h_Cathode_Blue_Sens->Fill(Cathode_Blue_Sens[i]);
      h_Voltage_1->Fill(Voltage_1[i]);
      h_Voltage_2->Fill(Voltage_2[i]);
      h_P_V->Fill(P_V[i]);
      h_TTS->Fill(TTS[i]);
      h_Dark_Count->Fill(Dark_Count[i]);
      Test->Fill(Anode_Dark_Current[i], Dark_Count[i]);

      // cout << "Serial Number = " << Serial_Number[i] << endl;
      // cout << "Cathode Lum = " << Cathode_Lum[i] << endl;
      // cout << "Anode Lum = " << Anode_Lum[i] << endl;
      // cout << "Anode Dark Current = " << Anode_Dark_Current[i] << endl;
      // cout << "Cathode Blue Sens = " << Cathode_Blue_Sens[i] << endl;
      // cout << "Voltage 1 = " << Voltage_1[i] << endl;
      // cout << "Voltage 2 = " << Voltage_2[i] << endl;
      // cout << "P/V = " << P_V[i] << endl;
      // cout << "TTS = " << TTS[i] << endl;
      // cout << "Dark Count = " << Dark_Count[i] << endl;
    }


  c1->cd();
  h_Serial_Number->Draw();
  //Test->Draw("colz");

  c2->cd();
  h_Cathode_Lum->Draw();

  c3->cd();
  h_Anode_Lum->Draw();

  c4->cd();
  h_Anode_Dark_Current->Draw();

  c5->cd();
  h_Cathode_Blue_Sens->Draw();

  c6->cd();
  h_Voltage_1->Draw();

  c7->cd();
  h_Voltage_2->Draw();

  c8->cd();
  h_P_V->Draw();

  c9->cd();
  h_TTS->Draw();

  c10->cd();
  h_Dark_Count->Draw();
  


}
