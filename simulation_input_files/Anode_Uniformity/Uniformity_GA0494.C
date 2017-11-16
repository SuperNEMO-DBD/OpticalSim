 
void Uniformity_GA0494()
{
  gStyle->SetOptStat(0);
   Double_t w = 1350;
   Double_t h = 500;

   TH2F* histo = new TH2F("UniformityPMT", "UniformityPMT", 10 , -5, 95, 37, -5, 365);
   TH2F* his = new TH2F("UniformityPM", "UniformityPM", 10 , -5, 95, 37, -5, 365);

   for (int i =1; i<=37; i++)
     {
       histo->SetBinContent(1,i,0.88);
     }
  
   //X axis
   histo->SetBinContent(10,19, 0.01); //-90
   histo->SetBinContent(9,19, 0.54); //-80
   histo->SetBinContent(8,19, 0.74); //-70
   histo->SetBinContent(7,19, 0.80); //-60
   histo->SetBinContent(6,19, 0.86); //-50
   histo->SetBinContent(5,19, 0.92); //-40
   histo->SetBinContent(4,19, 0.98); //-30
   histo->SetBinContent(3,19, 0.98); //-20
   histo->SetBinContent(2,19, 0.94); //-10
   histo->SetBinContent(1,19, 0.88);
   histo->SetBinContent(1,1, 0.88);
   histo->SetBinContent(2,1, 0.96);
   histo->SetBinContent(3,1, 0.96);
   histo->SetBinContent(4,1, 0.96);
   histo->SetBinContent(5,1, 0.84);
   histo->SetBinContent(6,1, 0.80);
   histo->SetBinContent(7,1, 0.74);
   histo->SetBinContent(8,1, 0.50);
   histo->SetBinContent(9,1, 0.44);
   histo->SetBinContent(10,1, 0.01);
   histo->SetBinContent(1,37, 0.88);
   histo->SetBinContent(2,37, 0.96);
   histo->SetBinContent(3,37, 0.96);
   histo->SetBinContent(4,37, 0.96);
   histo->SetBinContent(5,37, 0.84);
   histo->SetBinContent(6,37, 0.80);
   histo->SetBinContent(7,37, 0.74);
   histo->SetBinContent(8,37, 0.50);
   histo->SetBinContent(9,37, 0.44);
   histo->SetBinContent(10,37, 0.01);

   
   //Y axis
   histo->SetBinContent(10,28, 0.01); //-90
   histo->SetBinContent(9,28, 0.22); //-80
   histo->SetBinContent(8,28, 0.86); //-70
   histo->SetBinContent(7,28, 0.84); //-60
   histo->SetBinContent(6,28, 0.84); //-50
   histo->SetBinContent(5,28, 0.88); //-40
   histo->SetBinContent(4,28, 0.88); //-30
   histo->SetBinContent(3,28, 0.82); //-20
   histo->SetBinContent(2,28, 0.86); //-10
   histo->SetBinContent(1,10, 0.88);
   histo->SetBinContent(2,10, 0.88);
   histo->SetBinContent(3,10, 0.94);
   histo->SetBinContent(4,10, 0.94);
   histo->SetBinContent(5,10, 0.90);
   histo->SetBinContent(6,10, 0.84);
   histo->SetBinContent(7,10, 0.82);
   histo->SetBinContent(8,10, 0.48);
   histo->SetBinContent(9,10, 0.08);
   histo->SetBinContent(10,10, 0.01);
   
   
   //Z-1 axis
   histo->SetBinContent(10,23, 0.01); //-90
   histo->SetBinContent(9,23, 0.16); //-80
   histo->SetBinContent(8,23, 0.62); //-70
   histo->SetBinContent(7,23, 0.80); //-60
   histo->SetBinContent(6,23, 0.78); //-50
   histo->SetBinContent(5,23, 0.82); //-40
   histo->SetBinContent(4,23, 0.92); //-30
   histo->SetBinContent(3,23, 0.92); //-20
   histo->SetBinContent(2,23, 0.94); //-10
   histo->SetBinContent(10,24, 0.01); //-90
   histo->SetBinContent(9,24, 0.16); //-80
   histo->SetBinContent(8,24, 0.62); //-70
   histo->SetBinContent(7,24, 0.80); //-60
   histo->SetBinContent(6,24, 0.78); //-50
   histo->SetBinContent(5,24, 0.82); //-40
   histo->SetBinContent(4,24, 0.92); //-30
   histo->SetBinContent(3,24, 0.92); //-20
   histo->SetBinContent(2,24, 0.94); //-10
   histo->SetBinContent(1,10, 0.88);
   histo->SetBinContent(2,5, 0.86);
   histo->SetBinContent(3,5, 0.90);
   histo->SetBinContent(4,5, 0.92);
   histo->SetBinContent(5,5, 0.90);
   histo->SetBinContent(6,5, 0.86);
   histo->SetBinContent(7,5, 0.84);
   histo->SetBinContent(8,5, 0.50);
   histo->SetBinContent(9,5, 0.06);
   histo->SetBinContent(10,5, 0.01);
   histo->SetBinContent(2,6, 0.86);
   histo->SetBinContent(3,6, 0.90);
   histo->SetBinContent(4,6, 0.92);
   histo->SetBinContent(5,6, 0.90);
   histo->SetBinContent(6,6, 0.86);
   histo->SetBinContent(7,6, 0.84);
   histo->SetBinContent(8,6, 0.50);
   histo->SetBinContent(9,6, 0.06);
   histo->SetBinContent(10,6, 0.01);

   
   //Z-2 axis
   histo->SetBinContent(10,14, 0.01); //-90
   histo->SetBinContent(9,14, 0.06); //-80
   histo->SetBinContent(8,14, 0.46); //-70
   histo->SetBinContent(7,14, 0.78); //-60
   histo->SetBinContent(6,14, 0.86); //-50
   histo->SetBinContent(5,14, 0.90); //-40
   histo->SetBinContent(4,14, 0.92); //-30
   histo->SetBinContent(3,14, 0.96); //-20
   histo->SetBinContent(2,14, 0.88); //-10
   histo->SetBinContent(10,15, 0.01); //-90
   histo->SetBinContent(9,15, 0.06); //-80
   histo->SetBinContent(8,15, 0.46); //-70
   histo->SetBinContent(7,15, 0.78); //-60
   histo->SetBinContent(6,15, 0.86); //-50
   histo->SetBinContent(5,15, 0.90); //-40
   histo->SetBinContent(4,15, 0.92); //-30
   histo->SetBinContent(3,15, 0.96); //-20
   histo->SetBinContent(2,15, 0.88); //-10
   histo->SetBinContent(1,10, 0.88);
   histo->SetBinContent(2,32, 0.86);
   histo->SetBinContent(3,32, 0.92);
   histo->SetBinContent(4,32, 1.00);
   histo->SetBinContent(5,32, 0.90);
   histo->SetBinContent(6,32, 0.78);
   histo->SetBinContent(7,32, 0.76);
   histo->SetBinContent(8,32, 0.84);
   histo->SetBinContent(9,32, 0.36);
   histo->SetBinContent(10,32, 0.01);
   histo->SetBinContent(2,33, 0.86);
   histo->SetBinContent(3,33, 0.92);
   histo->SetBinContent(4,33, 1.00);
   histo->SetBinContent(5,33, 0.90);
   histo->SetBinContent(6,33, 0.78);
   histo->SetBinContent(7,33, 0.76);
   histo->SetBinContent(8,33, 0.84);
   histo->SetBinContent(9,33, 0.36);
   histo->SetBinContent(10,33, 0.01);
   




   //histo->SetBinContent(11,12, Value);

   
   





   TGraph2D* hist = new TGraph2D( 89);
   //hist->SetPoint(0, 0, 0, 0.96);
   //hist->SetPoint(1, 0, 10, 0.94);
   hist->SetPoint(0, 0, 0, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(1, 0, 315, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(2, 0, 270, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(3, 0, 225, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(4, 0, 180, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(5, 0, 135, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(6, 0, 90, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(7, 0, 45, 0.88);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(8, 10, 0, 0.96);      //X +
   hist->SetPoint(9, 10, 360, 0.96);      //X +
   hist->SetPoint(10, 10, 315, 0.86);    //Z-2 +
   hist->SetPoint(11, 10, 270, 0.86);     //Y -
   hist->SetPoint(12, 10, 225, 0.94);   //Z-1 -
   hist->SetPoint(13, 10, 180, 0.94);     //X -
   hist->SetPoint(14, 10, 135, 0.88);    //Z-2 -
   hist->SetPoint(15, 10, 90, 0.88);      //Y +
   hist->SetPoint(16, 10, 45, 0.86);     //Z-1 +

   hist->SetPoint(17, 20, 0, 0.96);      //X +
   hist->SetPoint(18, 20, 360, 0.96);      //X +
   hist->SetPoint(19, 20, 315, 0.92);    //Z-2 +
   hist->SetPoint(20, 2, 270, 0.82);     //Y -
   hist->SetPoint(21, 20, 225, 0.92);   //Z-1 -
   hist->SetPoint(22, 20, 180, 0.98);     //X -
   hist->SetPoint(23, 20, 135, 0.96);    //Z-2 +
   hist->SetPoint(24, 20, 90, 0.94);      //Y +
   hist->SetPoint(25, 20, 45, 0.90);     //Z-1 +

   hist->SetPoint(26, 30, 0, 0.96);      //X +
   hist->SetPoint(27, 30, 360, 0.96);      //X +
   hist->SetPoint(28, 30, 315, 1.00);    //Z-2 +
   hist->SetPoint(29, 30, 270, 0.88);     //Y -
   hist->SetPoint(30, 30, 225, 0.92);   //Z-1 -
   hist->SetPoint(31, 30, 180, 0.98);     //X -
   hist->SetPoint(32, 30, 135, 0.92);    //Z-2 +
   hist->SetPoint(33, 30, 90, 0.94);      //Y +
   hist->SetPoint(34, 30, 45, 0.92);     //Z-1 +

   hist->SetPoint(35, 40, 0, 0.84);      //X +
   hist->SetPoint(36, 40, 360, 0.84);      //X +
   hist->SetPoint(37, 40, 315, 0.90);    //Z-2 +
   hist->SetPoint(38, 40, 270, 0.88);     //Y -
   hist->SetPoint(39, 40, 225, 0.82);   //Z-1 -
   hist->SetPoint(40, 40, 180, 0.92);     //X -
   hist->SetPoint(41, 40, 135, 0.90);    //Z-2 +
   hist->SetPoint(42, 40, 90, 0.90);      //Y +
   hist->SetPoint(43, 40, 45, 0.90);     //Z-1 +

   hist->SetPoint(44, 50, 0, 0.80);      //X +
   hist->SetPoint(45, 50, 360, 0.80);      //X +
   hist->SetPoint(46, 50, 315, 0.78);    //Z-2 +
   hist->SetPoint(47, 50, 270, 0.84);     //Y -
   hist->SetPoint(48, 50, 225, 0.78);   //Z-1 -
   hist->SetPoint(49, 50, 180, 0.86);     //X -
   hist->SetPoint(50, 50, 135, 0.86);    //Z-2 +
   hist->SetPoint(51, 50, 90, 0.84);      //Y +
   hist->SetPoint(52, 50, 45, 0.86);     //Z-1 +

   hist->SetPoint(53, 60, 0, 0.74);      //X +
   hist->SetPoint(54, 60, 360, 0.74);      //X +
   hist->SetPoint(55, 60, 315, 0.76);    //Z-2 +
   hist->SetPoint(56, 60, 270, 0.84);     //Y -
   hist->SetPoint(57, 60, 225, 0.80);   //Z-1 -
   hist->SetPoint(58, 60, 180, 0.80);     //X -
   hist->SetPoint(59, 60, 135, 0.78);    //Z-2 +
   hist->SetPoint(60, 60, 90, 0.82);      //Y +
   hist->SetPoint(61, 60, 45, 0.84);     //Z-1 +

   hist->SetPoint(62, 70, 0, 0.50);      //X +
   hist->SetPoint(63, 70, 360, 0.50);      //X +
   hist->SetPoint(64, 70, 315, 0.84);    //Z-2 +
   hist->SetPoint(65, 70, 270, 0.86);     //Y -
   hist->SetPoint(66, 70, 225, 0.62);   //Z-1 -
   hist->SetPoint(67, 70, 180, 0.74);     //X -
   hist->SetPoint(68, 70, 135, 0.46);    //Z-2 +
   hist->SetPoint(69, 70, 90, 0.48);      //Y +
   hist->SetPoint(70, 70, 45, 0.50);     //Z-1 +

   hist->SetPoint(71, 80, 0, 0.44);      //X +
   hist->SetPoint(72, 80, 360, 0.44);      //X +
   hist->SetPoint(73, 80, 315, 0.36);    //Z-2 +
   hist->SetPoint(74, 80, 270, 0.22);     //Y -
   hist->SetPoint(75, 80, 225, 0.16);   //Z-1 -
   hist->SetPoint(76, 80, 180, 0.54);     //X -
   hist->SetPoint(77, 80, 135, 0.06);    //Z-2 +
   hist->SetPoint(78, 80, 90, 0.08);      //Y +
   hist->SetPoint(79, 80, 45, 0.06);     //Z-1 +

   hist->SetPoint(80, 90, 0, 0.001);      //X +
   hist->SetPoint(81, 90, 360, 0.001);      //X +
   hist->SetPoint(82, 90, 315, 0.001);    //Z-2 +
   hist->SetPoint(83, 90, 270, 0.001);     //Y -
   hist->SetPoint(84, 90, 225, 0.001);   //Z-1 -
   hist->SetPoint(85, 90, 180, 0.001);     //X -
   hist->SetPoint(86, 90, 135, 0.001);    //Z-2 +
   hist->SetPoint(87, 90, 90, 0.001);      //Y +
   hist->SetPoint(88, 90, 45, 0.001);     //Z-1 +

   hist->SetPoint(89, 0, 360, 0.88);       //Origine et sens des aiguilles d'une montre








   TCanvas * canvas8 = new TCanvas("canvas8", "RESULTS ",0,0, 600, 400);
   canvas8->cd();
   hist->Draw("colz");

   double V=0;
   V = hist->Interpolate(24.8502, 33.9843);
   //V = hist->Interpolate(70, 83);
   //V = hist->Interpolate(83, 70);
   //V = hist->Interpolate(83, -70);
   //V = hist->Interpolate(70, -85);
   //V = hist->Interpolate(-80, -83);
   cout << "V = " << V << endl;

   double x = 0;
   double y = 0;
   int nx =1;
   int ny =1;




   his = (TH2F*)hist->GetHistogram("fHistogram");





   TH2F *Plot_2D(const char *filename, const char * title)
{
  TFile *File = new TFile(filename);
  TTree *Tree = (TTree*)File->Get("theRunTree_bis");
  TLeaf *Leaf_Theta = Tree->GetLeaf("Photocathode_Information","Theta");
  TLeaf *Leaf_Phi = Tree->GetLeaf("Photocathode_Information","Phi");

  int Entries = Tree->GetEntries();

  float theta =0;
  float phi =0;

  TH2F* h = new TH2F(title, title, 500, 0, 2.*TMath::Pi(), 500 , 0, 100);
  
  for (int i =0; i<= Entries; i++)
    {
      Tree->GetEntry(i);
      theta = Leaf_Theta->GetValue();
      phi = Leaf_Phi->GetValue() *2.*TMath::Pi()/360;


      h->Fill(phi, theta);

      cout << "theta = " << theta << endl;
      cout << "Phi = " << phi << endl;

    }


  return h;
}


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

  TH2D* dummy_his = new TH2D("dummy", "GA0494", 100, -100, 100, 100, -100, 100);

  TCanvas * canvas7 = new TCanvas("GA0494", "AU GA0494",0,0, 1000, 1000);
   canvas7->cd();
   //AU->Draw("colz");
   dummy_his->Draw();
   AU->Draw("col POL SAME");
   //TH2F* Test = Plot_2D("../../Resultats/Mean_AU_Bi207_Dessus_0-.root", "Test");
   TH2F* Test = Plot_2D("/nemo243/Optical_Simulation_Arnaud/Resultats/Haut_0+.root", "Test");

   Test->SetMarkerStyle(20);
   Test->SetMarkerSize(0.7);
   Test->Draw("POL col SAME");

   AU->Draw("col POL SAME");
   AU->SetMinimum(0);
   AU->SetMaximum(1);









   // TCanvas * canvas7 = new TCanvas("canvas7", "AU GA0494 ",12,12, w, h);
   // canvas7->cd();
   // //gCU_124->Draw("");
   // AU->Draw("colz");
   // //histo->Write();
   // //TFile f("AU_GA0494_TH2.root", "recreate");
   // //AU->Write();
   // //Test->Draw("same");


   // TCanvas * canvas1 = new TCanvas("canvas1", "RESULTS ",12,12, 1000, 900);
   // canvas1->cd();
   // his->Draw("colz");




   float Value = his->Interpolate(11,12);
   cout << "Value = " << his->Interpolate(24.8502, 33.9843) << endl;


   float Set_y(float r, float theta)
   {
     float y = r*sin(theta);
     return y;
   }

   float Set_x(float r,float theta)
   {
     float x = r*cos(theta);
     return x;
   }
     
     





   TGraph2D* hista = new TGraph2D( 82);
   //hist->SetPoint(0, 0, 0, 0.96);
   //hist->SetPoint(1, 0, 10, 0.94);
   hista->SetPoint(0, 0, 0, 0.88);       //Origine et sens des aiguilles d'une montre
   hista->SetPoint(1, Set_x(10,0), Set_y(10,0), 0.96);      //X +
   hista->SetPoint(2, Set_x(10,360), Set_y(10,360), 0.96);      //X +
   hista->SetPoint(3, Set_x(10,315), Set_y(10,315), 0.86);    //Z-2 +
   hista->SetPoint(4, Set_x(10,270), Set_y(10,270), 0.86);     //Y -
   hista->SetPoint(5, Set_x(10,225), Set_y(10,225), 0.94);   //Z-1 -
   hista->SetPoint(6, Set_x(10,180), Set_y(10,180), 0.94);     //X -
   hista->SetPoint(7, Set_x(10,135), Set_y(10,135), 0.88);    //Z-2 -
   hista->SetPoint(8, Set_x(10,90), Set_y(10,90), 0.88);      //Y +
   hista->SetPoint(9, Set_x(10,45), Set_y(10,45), 0.86);     //Z-1 +

   

   hista->SetPoint(10, Set_x(20,0), Set_y(20,0), 0.96);      //X +
   hista->SetPoint(11, Set_x(20,360), Set_y(20,360), 0.96);      //X +
   hista->SetPoint(12, Set_x(20,315), Set_y(20,315), 0.92);    //Z-2 +
   hista->SetPoint(13, Set_x(20,270), Set_y(20,270), 0.82);     //Y -
   hista->SetPoint(14, Set_x(20,225), Set_y(20,225), 0.92);   //Z-1 -
   hista->SetPoint(15, Set_x(20,180), Set_y(20,180), 0.98);     //X -
   hista->SetPoint(16, Set_x(20,135), Set_y(20,135), 0.96);    //Z-2 +
   hista->SetPoint(17, Set_x(20,90), Set_y(20,90), 0.94);      //Y +
   hista->SetPoint(18, Set_x(20,45), Set_y(20,45), 0.90);     //Z-1 +

   hista->SetPoint(19, Set_x(30,0), Set_y(30,0), 0.96);      //X +
   hista->SetPoint(20, Set_x(30,360), Set_y(30,360), 0.96);      //X +
   hista->SetPoint(21, Set_x(30,315), Set_y(30,315), 1.00);    //Z-2 +
   hista->SetPoint(22, Set_x(30,270), Set_y(30,270), 0.88);     //Y -
   hista->SetPoint(23, Set_x(30,225), Set_y(30,225), 0.92);   //Z-1 -
   hista->SetPoint(24, Set_x(30,180), Set_y(30,180), 0.98);     //X -
   hista->SetPoint(25, Set_x(30,135), Set_y(30,135), 0.92);    //Z-2 +
   hista->SetPoint(26, Set_x(30,90), Set_y(30,90), 0.94);      //Y +
   hista->SetPoint(27, Set_x(30,45), Set_y(30,45), 0.92);     //Z-1 +

   
   hista->SetPoint(28, Set_x(40,0), Set_y(40,0), 0.84);      //X +
   hista->SetPoint(29, Set_x(40,360), Set_y(40,360), 0.84);      //X +
   hista->SetPoint(30, Set_x(40,315), Set_y(40,315), 0.90);    //Z-2 +
   hista->SetPoint(31, Set_x(40,270), Set_y(40,270), 0.88);     //Y -
   hista->SetPoint(32, Set_x(40,225), Set_y(40,225), 0.82);   //Z-1 -
   hista->SetPoint(33, Set_x(40,180), Set_y(40,180), 0.92);     //X -
   hista->SetPoint(34, Set_x(40,135), Set_y(40,135), 0.90);    //Z-2 +
   hista->SetPoint(35, Set_x(40,90), Set_y(40,90), 0.90);      //Y +
   hista->SetPoint(36, Set_x(40,45), Set_y(40,45), 0.90);     //Z-1 +
   
   hista->SetPoint(37, Set_x(50,0), Set_y(50,0), 0.80);      //X +
   hista->SetPoint(38, Set_x(50,360), Set_y(50,360), 0.80);      //X +
   hista->SetPoint(39, Set_x(50,315), Set_y(50,315), 0.78);    //Z-2 +
   hista->SetPoint(40, Set_x(50,270), Set_y(50,270), 0.84);     //Y -
   hista->SetPoint(41, Set_x(50,225), Set_y(50,225), 0.78);   //Z-1 -
   hista->SetPoint(42, Set_x(50,180), Set_y(50,180), 0.86);     //X -
   hista->SetPoint(43, Set_x(50,135), Set_y(50,135), 0.86);    //Z-2 +
   hista->SetPoint(44, Set_x(50,90), Set_y(50,90), 0.84);      //Y +
   hista->SetPoint(45, Set_x(50,45), Set_y(50,45), 0.86);     //Z-1 +
   
   hista->SetPoint(46, Set_x(60,0), Set_y(60,0), 0.74);      //X +
   hista->SetPoint(47, Set_x(60,360), Set_y(60,360), 0.74);      //X +
   hista->SetPoint(48, Set_x(60,315), Set_y(60,315), 0.76);    //Z-2 +
   hista->SetPoint(49, Set_x(60,270), Set_y(60,270), 0.84);     //Y -
   hista->SetPoint(50, Set_x(60,225), Set_y(60,225), 0.80);   //Z-1 -
   hista->SetPoint(51, Set_x(60,180), Set_y(60,180), 0.80);     //X -
   hista->SetPoint(52, Set_x(60,135), Set_y(60,135), 0.78);    //Z-2 +
   hista->SetPoint(53, Set_x(60,90), Set_y(60,90), 0.82);      //Y +
   hista->SetPoint(54, Set_x(60,45), Set_y(60,45), 0.84);     //Z-1 +
   

   hista->SetPoint(55, Set_x(70,0), Set_y(70,0), 0.50);      //X +
   hista->SetPoint(56, Set_x(70,360), Set_y(70,360), 0.50);      //X +
   hista->SetPoint(57, Set_x(70,315), Set_y(70,315), 0.84);    //Z-2 +
   hista->SetPoint(58, Set_x(70,270), Set_y(70,270), 0.86);     //Y -
   hista->SetPoint(59, Set_x(70,225), Set_y(70,225), 0.62);   //Z-1 -
   hista->SetPoint(60, Set_x(70,180), Set_y(70,180), 0.74);     //X -
   hista->SetPoint(61, Set_x(70,135), Set_y(70,135), 0.46);    //Z-2 +
   hista->SetPoint(62, Set_x(70,90), Set_y(70,90), 0.48);      //Y +
   hista->SetPoint(63, Set_x(70,45), Set_y(70,45), 0.50);     //Z-1 +

   hista->SetPoint(64, Set_x(80,0), Set_y(80,0), 0.44);      //X +
   hista->SetPoint(65, Set_x(80,360), Set_y(80,360), 0.44);      //X +
   hista->SetPoint(66, Set_x(80,315), Set_y(80,315), 0.36);    //Z-2 +
   hista->SetPoint(67, Set_x(80,270), Set_y(80,270), 0.22);     //Y -
   hista->SetPoint(68, Set_x(80,225), Set_y(80,225), 0.16);   //Z-1 -
   hista->SetPoint(69, Set_x(80,180), Set_y(80,180), 0.54);     //X -
   hista->SetPoint(70, Set_x(80,135), Set_y(80,135), 0.06);    //Z-2 +
   hista->SetPoint(71, Set_x(80,90), Set_y(80,90), 0.08);      //Y +
   hista->SetPoint(72, Set_x(80,45), Set_y(80,45), 0.06);     //Z-1 +

   hista->SetPoint(73, Set_x(90,0), Set_y(90,0), 0.001);      //X +
   hista->SetPoint(74, Set_x(90,360), Set_y(90,360), 0.001);      //X +
   hista->SetPoint(75, Set_x(90,315), Set_y(90,315), 0.001);    //Z-2 +
   hista->SetPoint(76, Set_x(90,270), Set_y(90,270), 0.001);     //Y -
   hista->SetPoint(77, Set_x(90,225), Set_y(90,225), 0.001);   //Z-1 -
   hista->SetPoint(78, Set_x(90,180), Set_y(90,180), 0.001);     //X -
   hista->SetPoint(79, Set_x(90,135), Set_y(90,135), 0.001);    //Z-2 +
   hista->SetPoint(80, Set_x(90,90), Set_y(90,90), 0.001);      //Y +
   hista->SetPoint(81, Set_x(90,45), Set_y(90,45), 0.001);     //Z-1 +
   

   //hist->SetPoint(89, 0, 360, 0.88);       //Origine et sens des aiguilles d'une montre



   //TCanvas * canvas2 = new TCanvas("canvas2", "RESULTS ",12,12, 1000, 900);
   //canvas2->cd();
   //hista->Draw("colz");
   //Test->Draw("same");




  // TH2F *Scanning; // interpolated histo with fine binning


  // Scanning = new TH2F("Scanning", "", 400, -95, 95, 600, 0, 300);

  // for (int binx=1; binx<=Scanning->GetNbinsX(); ++binx) {
  //   for (int biny=1; biny<=Scanning->GetNbinsY(); ++biny) {
  //     double x = Scanning->GetXaxis()->GetBinCenter(binx);
  //     double y = Scanning->GetYaxis()->GetBinCenter(biny);
  //     double value = Correction_rho_z->Interpolate(x, y);
  //     Scanning->SetBinContent(binx, biny, value);
  //   }
  //} 
   
 }
