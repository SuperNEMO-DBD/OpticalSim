#include "Mean_AU.hh"

void Mean_AU()
{
  gStyle->SetOptStat(0);
  TCanvas *Graph1 = new TCanvas("Graph1", "Graph1", 5, 5, 1000, 800);
  TH2F* Mean_Uniformity = new TH2F("Mean_Uniformity", "Mean_Uniformity",  40, 0, 2.*TMath::Pi(), 40 , 0, 90);
  TH2F* RMS_Uniformity = new TH2F("RMS_Uniformity", "RMS_Uniformity",  40, 0, 2.*TMath::Pi(), 40 , 0, 90);

  TH2F* GA0124 = Plot_2D("AU_GA0124_TH2.root", "GA0124");
  TH2F* GA0154 = Plot_2D("AU_GA0154_TH2.root", "GA0154");
  TH2F* GA0190 = Plot_2D("AU_GA0190_TH2.root", "GA0190");
  TH2F* GA0192 = Plot_2D("AU_GA0192_TH2.root", "GA0192");
  TH2F* GA0205 = Plot_2D("AU_GA0205_TH2.root", "GA0205");
  TH2F* GA0494 = Plot_2D("AU_GA0494_TH2.root", "GA0494");
  TH2F* GA0510 = Plot_2D("AU_GA0510_TH2.root", "GA0510");
  TH2F* GA0522 = Plot_2D("AU_GA0522_TH2.root", "GA0522");
  TH2F* GA0556 = Plot_2D("AU_GA0556_TH2.root", "GA0556");
  TH2F* GA0569 = Plot_2D("AU_GA0569_TH2.root", "GA0569");
  TH2F* GA0245 = Plot_2D("AU_GA0245_TH2.root", "GA0245");
  TH2F* GA0261 = Plot_2D("AU_GA0261_TH2.root", "GA0261");
  TH2F* GA0297 = Plot_2D("AU_GA0297_TH2.root", "GA0297");
  TH2F* GA0365 = Plot_2D("AU_GA0365_TH2.root", "GA0365");
  TH2F* GA0369 = Plot_2D("AU_GA0369_TH2.root", "GA0369");
  TH2F* GA0371 = Plot_2D("AU_GA0371_TH2.root", "GA0371");
  TH2F* GA0408 = Plot_2D("AU_GA0408_TH2.root", "GA0408");
  TH2F* GA0429 = Plot_2D("AU_GA0429_TH2.root", "GA0429");
  TH2F* GA0463 = Plot_2D("AU_GA0463_TH2.root", "GA0463");

  float Mean = 0;
  double RMS = 0;

  float Value_GA0124 =0;
  float Value_GA0154 =0;
  float Value_GA0190 =0;
  float Value_GA0192 =0;
  float Value_GA0205 =0;
  float Value_GA0494 =0;
  float Value_GA0510 =0;
  float Value_GA0522 =0;
  float Value_GA0556 =0;
  float Value_GA0569 =0;
  float Value_GA0245 =0;
  float Value_GA0261 =0;
  float Value_GA0297 =0;
  float Value_GA0365 =0;
  float Value_GA0369 =0;
  float Value_GA0371 =0;
  float Value_GA0408 =0;
  float Value_GA0429 =0;
  float Value_GA0463 =0;

  float Err_GA0124 =0;
  float Err_GA0154 =0;
  float Err_GA0190 =0;
  float Err_GA0192 =0;
  float Err_GA0205 =0;
  float Err_GA0494 =0;
  float Err_GA0510 =0;
  float Err_GA0522 =0;
  float Err_GA0556 =0;
  float Err_GA0569 =0;
  float Err_GA0245 =0;
  float Err_GA0261 =0;
  float Err_GA0297 =0;
  float Err_GA0365 =0;
  float Err_GA0369 =0;
  float Err_GA0371 =0;
  float Err_GA0408 =0;
  float Err_GA0429 =0;
  float Err_GA0463 =0;

  for (int i = 1; i<= 40; i++)
    {
      for (int j =1; j<=40; j++)
	{
	  Value_GA0124 = GA0124->GetBinContent(i,j);
	  Value_GA0154 = GA0154->GetBinContent(i,j);
	  Value_GA0190 = GA0190->GetBinContent(i,j);
	  Value_GA0192 = GA0192->GetBinContent(i,j);
	  Value_GA0205 = GA0205->GetBinContent(i,j);
	  Value_GA0494 = GA0494->GetBinContent(i,j);
	  Value_GA0510 = GA0510->GetBinContent(i,j);
	  Value_GA0522 = GA0522->GetBinContent(i,j);
	  Value_GA0556 = GA0556->GetBinContent(i,j);
	  Value_GA0569 = GA0569->GetBinContent(i,j);
	  Value_GA0245 = GA0245->GetBinContent(i,j);
	  Value_GA0261 = GA0261->GetBinContent(i,j);
	  Value_GA0297 = GA0297->GetBinContent(i,j);
	  Value_GA0365 = GA0365->GetBinContent(i,j);
	  Value_GA0369 = GA0369->GetBinContent(i,j);
	  Value_GA0371 = GA0371->GetBinContent(i,j);
	  Value_GA0408 = GA0408->GetBinContent(i,j);
	  Value_GA0429 = GA0429->GetBinContent(i,j);
	  Value_GA0463 = GA0463->GetBinContent(i,j);

	  Mean = (Value_GA0124 + Value_GA0154 + Value_GA0190 + Value_GA0192 + Value_GA0205 + Value_GA0494 + Value_GA0510 + Value_GA0522 + Value_GA0556 + Value_GA0569 + Value_GA0245 + Value_GA0261 + Value_GA0297 + Value_GA0365 + Value_GA0369 + Value_GA0371 + Value_GA0408 + Value_GA0429 + Value_GA0463) /19;
	  
	  Err_GA0124 = pow(100*(Value_GA0124 - Mean) , 2) /100;
	  //cout << "Err GA0124 = " << Err_GA0124 << endl;
	  Err_GA0154 = pow((Value_GA0154 - Mean) , 2) ;
	  Err_GA0190 = pow((Value_GA0190 - Mean) , 2) ;
	  Err_GA0192 = pow((Value_GA0192 - Mean) , 2) ;
	  Err_GA0205 = pow((Value_GA0205 - Mean) , 2) ;
	  Err_GA0494 = pow((Value_GA0494 - Mean) , 2) ;
	  Err_GA0510 = pow((Value_GA0510 - Mean) , 2) ;
	  Err_GA0522 = pow((Value_GA0522 - Mean) , 2) ;
	  Err_GA0556 = pow((Value_GA0556 - Mean) , 2) ;
	  Err_GA0569 = pow((Value_GA0569 - Mean) , 2) ;
	  Err_GA0245 = pow((Value_GA0245 - Mean) , 2) ;
	  Err_GA0261 = pow((Value_GA0261 - Mean) , 2) ;
	  Err_GA0297 = pow((Value_GA0297 - Mean) , 2) ;
	  Err_GA0365 = pow((Value_GA0365 - Mean) , 2) ;
	  //cout << "Err GA0365 = " << Err_GA0365 << endl;
	  Err_GA0369 = pow((Value_GA0369 - Mean) , 2) ;
	  Err_GA0371 = pow((Value_GA0371 - Mean) , 2) ;
	  Err_GA0408 = pow((Value_GA0408 - Mean) , 2) ;
	  Err_GA0429 = pow((Value_GA0429 - Mean) , 2) ;
	  Err_GA0463 = pow((Value_GA0463 - Mean) , 2) ;

	  RMS = sqrt((1./19.)*(Err_GA0124 + Err_GA0154 + Err_GA0190 + Err_GA0192 + Err_GA0205 + Err_GA0494 + Err_GA0510 + Err_GA0522 + Err_GA0556 + Err_GA0569 + Err_GA0245 + Err_GA0261 + Err_GA0297 + Err_GA0365 + Err_GA0369 + Err_GA0371 + Err_GA0408 + Err_GA0429 + Err_GA0463)) ;
	  

	  Mean_Uniformity->SetBinContent(j,i, Mean);
	  RMS_Uniformity->SetBinContent(j,i, RMS);

	  
	  cout << "GA0124 = " << GA0124->GetBinContent(i,j) << endl;
	  cout << "GA0154 = " << GA0154->GetBinContent(i,j) << endl;
	  cout << "GA0190 = " << GA0190->GetBinContent(i,j) << endl;
	  cout << "GA0192 = " << GA0192->GetBinContent(i,j) << endl;
	  cout << "GA0205 = " << GA0205->GetBinContent(i,j) << endl;
	  cout << "GA0494 = " << GA0494->GetBinContent(i,j) << endl;
	  cout << "GA0510 = " << GA0510->GetBinContent(i,j) << endl;
	  cout << "GA0522 = " << GA0522->GetBinContent(i,j) << endl;
	  cout << "GA0556 = " << GA0556->GetBinContent(i,j) << endl;
	  cout << "GA0569 = " << GA0569->GetBinContent(i,j) << endl;
	  cout << "GA0245 = " << GA0245->GetBinContent(i,j) << endl;
	  cout << "GA0261 = " << GA0261->GetBinContent(i,j) << endl;
	  cout << "GA0297 = " << GA0297->GetBinContent(i,j) << endl;
	  cout << "GA0365 = " << GA0365->GetBinContent(i,j) << endl;
	  cout << "GA0369 = " << GA0369->GetBinContent(i,j) << endl;
	  cout << "GA0371 = " << GA0371->GetBinContent(i,j) << endl;
	  cout << "GA0408 = " << GA0408->GetBinContent(i,j) << endl;
	  cout << "GA0429 = " << GA0429->GetBinContent(i,j) << endl;
	  cout << "GA0463 = " << GA0463->GetBinContent(i,j) << endl;
	  
	  cout << "MEAN = " << Mean << endl;
	  cout << "RMS = " << RMS << endl;
	}
    }

  TH2D* dummy_his = new TH2D("dummy", "Mean Anode Uniformity", 100, -100, 100, 100, -100, 100);
   TCanvas * canvas7 = new TCanvas("Mean Anode Uniformity", "Mean Anode Uniformity",0,0, 1000, 1000);
   canvas7->cd();
   dummy_his->Draw();
   Mean_Uniformity->Draw("colz POL SAME");
   Mean_Uniformity->SetMinimum(0);
   Mean_Uniformity->SetMaximum(1);

  // Mean_Uniformity->Draw("cont4");
  // TFile f("Mean_AU.root", "recreate");
  // Mean_Uniformity->Write();





  TCanvas *Graph2 = new TCanvas("RMS Mean Anode Uniformity", "RMS Mean Anode Uniformity", 5, 5, 1000, 800);
  TH2D* dummy_hist = new TH2D("dummy", "RMS Mean Anode Uniformity", 100, -100, 100, 100, -100, 100);
  dummy_hist->Draw();
  RMS_Uniformity->Draw("colz POL SAME");
  RMS_Uniformity->SetMinimum(0);
  RMS_Uniformity->SetMaximum(0.3);
  //RMS_Uniformity->Draw("cont4");

}
