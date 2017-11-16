void Uniformity_GA0429()
{  
  gStyle->SetOptStat(0);
  
  TGraph2D* hist = new TGraph2D( 89);
  //hist->SetPoint(0, 0, 0, 0.96);
  //hist->SetPoint(1, 0, 10, 0.94);
  hist->SetPoint(0, 0, 0, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(1, 0, 315, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(2, 0, 270, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(3, 0, 225, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(4, 0, 180, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(5, 0, 135, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(6, 0, 90, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(7, 0, 45, 0.96);       //Origine et sens des aiguilles d'une montre
  hist->SetPoint(8, 10, 0, 0.94);      //X +
  hist->SetPoint(9, 10, 360, 0.94);      //X +
  hist->SetPoint(10, 10, 315, 0.92);    //Z-2 +
  hist->SetPoint(11, 10, 270, 0.92);     //Y -
  hist->SetPoint(12, 10, 225, 0.92);   //Z-1 -
  hist->SetPoint(13, 10, 180, 0.96);     //X -
  hist->SetPoint(14, 10, 135, 0.98);    //Z-2 -
  hist->SetPoint(15, 10, 90, 0.88);      //Y +
  hist->SetPoint(16, 10, 45, 0.94);     //Z-1 +

  hist->SetPoint(17, 20, 0, 0.98);      //X +
  hist->SetPoint(18, 20, 360, 0.98);      //X +
  hist->SetPoint(19, 20, 315, 0.98);    //Z-2 +
  hist->SetPoint(20, 2, 270, 0.88);     //Y -
  hist->SetPoint(21, 20, 225, 0.90);   //Z-1 -
  hist->SetPoint(22, 20, 180, 0.98);     //X -
  hist->SetPoint(23, 20, 135, 1.00);    //Z-2 -
  hist->SetPoint(24, 20, 90, 0.92);      //Y +
  hist->SetPoint(25, 20, 45, 0.98);     //Z-1 +

  hist->SetPoint(26, 30, 0, 0.90);      //X +
  hist->SetPoint(27, 30, 360, 0.90);      //X +
  hist->SetPoint(28, 30, 315, 0.92);    //Z-2 +
  hist->SetPoint(29, 30, 270, 0.82);     //Y -
  hist->SetPoint(30, 30, 225, 0.90);   //Z-1 -
  hist->SetPoint(31, 30, 180, 0.96);     //X -
  hist->SetPoint(32, 30, 135, 0.94);    //Z-2 -
  hist->SetPoint(33, 30, 90, 0.82);      //Y +
  hist->SetPoint(34, 30, 45, 0.88);     //Z-1 +

  hist->SetPoint(35, 40, 0, 0.86);      //X +
  hist->SetPoint(36, 40, 360, 0.86);      //X +
  hist->SetPoint(37, 40, 315, 0.84);    //Z-2 +
  hist->SetPoint(38, 40, 270, 0.82);     //Y -
  hist->SetPoint(39, 40, 225, 0.86);   //Z-1 -
  hist->SetPoint(40, 40, 180, 0.90);     //X -
  hist->SetPoint(41, 40, 135, 0.90);    //Z-2 -
  hist->SetPoint(42, 40, 90, 0.80);      //Y +
  hist->SetPoint(43, 40, 45, 0.84);     //Z-1 +

  hist->SetPoint(44, 50, 0, 0.82);      //X +
  hist->SetPoint(45, 50, 360, 0.82);      //X +
  hist->SetPoint(46, 50, 315, 0.82);    //Z-2 +
  hist->SetPoint(47, 50, 270, 0.82);     //Y -
  hist->SetPoint(48, 50, 225, 0.78);   //Z-1 -
  hist->SetPoint(49, 50, 180, 0.86);     //X -
  hist->SetPoint(50, 50, 135, 0.86);    //Z-2 -
  hist->SetPoint(51, 50, 90, 0.75);      //Y +
  hist->SetPoint(52, 50, 45, 0.82);     //Z-1 +

  hist->SetPoint(53, 60, 0, 0.78);      //X +
  hist->SetPoint(54, 60, 360, 0.78);      //X +
  hist->SetPoint(55, 60, 315, 0.76);    //Z-2 +
  hist->SetPoint(56, 60, 270, 0.79);     //Y -
  hist->SetPoint(57, 60, 225, 0.79);   //Z-1 -
  hist->SetPoint(58, 60, 180, 0.76);     //X -
  hist->SetPoint(59, 60, 135, 0.86);    //Z-2 -
  hist->SetPoint(60, 60, 90, 0.69);      //Y +
  hist->SetPoint(61, 60, 45, 0.76);     //Z-1 +

  hist->SetPoint(62, 70, 0, 0.68);      //X +
  hist->SetPoint(63, 70, 360, 0.68);      //X +
  hist->SetPoint(64, 70, 315, 0.64);    //Z-2 +
  hist->SetPoint(65, 70, 270, 0.56);     //Y -
  hist->SetPoint(66, 70, 225, 0.65);   //Z-1 -
  hist->SetPoint(67, 70, 180, 0.76);     //X -
  hist->SetPoint(68, 70, 135, 0.66);    //Z-2 -
  hist->SetPoint(69, 70, 90, 0.63);      //Y +
  hist->SetPoint(70, 70, 45, 0.72);     //Z-1 +

  hist->SetPoint(71, 80, 0, 0.34);      //X +
  hist->SetPoint(72, 80, 360, 0.34);      //X +
  hist->SetPoint(73, 80, 315, 0.20);    //Z-2 +
  hist->SetPoint(74, 80, 270, 0.12);     //Y -
  hist->SetPoint(75, 80, 225, 0.16);   //Z-1 -
  hist->SetPoint(76, 80, 180, 0.62);     //X -
  hist->SetPoint(77, 80, 135, 0.20);    //Z-2 -
  hist->SetPoint(78, 80, 90, 0.09);      //Y +
  hist->SetPoint(79, 80, 45, 0.17);     //Z-1 +

  hist->SetPoint(80, 90, 0, 0.001);      //X +
  hist->SetPoint(81, 90, 360, 0.001);      //X +
  hist->SetPoint(82, 90, 315, 0.001);    //Z-2 +
  hist->SetPoint(83, 90, 270, 0.001);     //Y -
  hist->SetPoint(84, 90, 225, 0.001);   //Z-1 -
  hist->SetPoint(85, 90, 180, 0.001);     //X -
  hist->SetPoint(86, 90, 135, 0.001);    //Z-2 -
  hist->SetPoint(87, 90, 90, 0.001);      //Y +
  hist->SetPoint(88, 90, 45, 0.001);     //Z-1 +

  hist->SetPoint(89, 0, 360, 0.96);       //Origine et sens des aiguilles d'une montre






  TCanvas * canvas8 = new TCanvas("canvas8", "AU GA0429 ",0,0, 600, 400);
  canvas8->cd();
  hist->Draw("colz");



  his = (TH2F*)hist->GetHistogram("fHistogram");

 

  int NbinsX = his->GetNbinsX();
  int NbinsY = his->GetNbinsY();


  cout << "Nbin X = " << his->GetNbinsX() << endl;
  cout << "Nbin Y = " << his->GetNbinsY() << endl;



  //TH2F* AU = new TH2F("UniformityPM", "UniformityPM", 40 , 0, 90, 40, 0, 360);
  TH2F* AU = new TH2F("UniformityPM", "UniformityPM",  40, 0, 2.*TMath::Pi(), 40 , 0, 90);


  for (int i =1; i<=40; i++)
    {
      for(int j =1; j<= 40; j++)
	{
	  float temp = his->GetBinContent(i,j);
	  //AU->SetBinContent(i,j, temp);
	  AU->SetBinContent(j,i, temp);
	}
    }

  TH2D* dummy_his = new TH2D("dummy", "GA0429", 100, -100, 100, 100, -100, 100);

  TCanvas * canvas7 = new TCanvas("GA0429", "AU GA0429",0,0, 1000, 1000);
   canvas7->cd();
   //AU->Draw("colz");
   dummy_his->Draw();
   AU->Draw("colz POL SAME");
   AU->SetMinimum(0);
   AU->SetMaximum(1);

   // TFile f("AU_GA0429_TH2.root", "recreate");
   // AU->Write();


}
