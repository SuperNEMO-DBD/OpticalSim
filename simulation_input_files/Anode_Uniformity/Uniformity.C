 
void Uniformity()
{
   Double_t w = 1350;
   Double_t h = 500;

   TH2F* histo = new TH2F("UniformityPMT", "UniformityPMT", 19 , -95, 95, 19, -95, 95);
   TH2F* his = new TH2F("UniformityPM", "UniformityPM", 19 , -95, 95, 19, -95, 95);
  
   //X axis
   histo->SetBinContent(1,10, 0.01); //-90
   histo->SetBinContent(2,10, 0.38); //-80
   histo->SetBinContent(3,10, 0.56); //-70
   histo->SetBinContent(4,10, 0.62); //-60
   histo->SetBinContent(5,10, 0.70); //-50
   histo->SetBinContent(6,10, 0.72); //-40
   histo->SetBinContent(7,10, 0.80); //-30
   histo->SetBinContent(8,10, 0.88); //-20
   histo->SetBinContent(9,10, 0.94); //-10
   histo->SetBinContent(10,10, 0.96);
   histo->SetBinContent(11,10, 1.00);
   histo->SetBinContent(12,10, 0.98);
   histo->SetBinContent(13,10, 0.90);
   histo->SetBinContent(14,10, 0.86);
   histo->SetBinContent(15,10, 0.78);
   histo->SetBinContent(16,10, 0.74);
   histo->SetBinContent(17,10, 0.60);
   histo->SetBinContent(18,10, 0.52);
   histo->SetBinContent(19,10, 0.01);

   //Y axis
   histo->SetBinContent(10,1, 0.01); //-90
   histo->SetBinContent(10,2, 0.12); //-80
   histo->SetBinContent(10,3, 0.56); //-70
   histo->SetBinContent(10,4, 0.76); //-60
   histo->SetBinContent(10,5, 0.78); //-50
   histo->SetBinContent(10,6, 0.76); //-40
   histo->SetBinContent(10,7, 0.76); //-30
   histo->SetBinContent(10,8, 0.90); //-20
   histo->SetBinContent(10,9, 0.96); //-10
   histo->SetBinContent(10,10, 0.96);
   histo->SetBinContent(10,11, 0.94);
   histo->SetBinContent(10,12, 0.86);
   histo->SetBinContent(10,13, 0.72);
   histo->SetBinContent(10,14, 0.64);
   histo->SetBinContent(10,15, 0.60);
   histo->SetBinContent(10,16, 0.62);
   histo->SetBinContent(10,17, 0.54);
   histo->SetBinContent(10,18, 0.08);
   histo->SetBinContent(10,19, 0.01);


   //Z-1 axis
   histo->SetBinContent(1,1, 0.01); //-90
   histo->SetBinContent(2,2, 0.14); //-80
   histo->SetBinContent(3,3, 0.56); //-70
   histo->SetBinContent(4,4, 0.76); //-60
   histo->SetBinContent(5,5, 0.76); //-50
   histo->SetBinContent(6,6, 0.78); //-40
   histo->SetBinContent(7,7, 0.80); //-30
   histo->SetBinContent(8,8, 0.88); //-20
   histo->SetBinContent(9,9, 0.98); //-10
   histo->SetBinContent(10,10, 0.96);
   histo->SetBinContent(11,11, 1.00);
   histo->SetBinContent(12,12, 0.94);
   histo->SetBinContent(13,13, 0.80);
   histo->SetBinContent(14,14, 0.78);
   histo->SetBinContent(15,15, 0.76);
   histo->SetBinContent(16,16, 0.72);
   histo->SetBinContent(17,17, 0.54);
   histo->SetBinContent(18,18, 0.14);
   histo->SetBinContent(19,19, 0.01);


   //Z-2 axis
   histo->SetBinContent(1,19, 0.01); //-90
   histo->SetBinContent(2,18, 0.13); //-80
   histo->SetBinContent(3,17, 0.60); //-70
   histo->SetBinContent(4,16, 0.70); //-60
   histo->SetBinContent(5,15, 0.70); //-50
   histo->SetBinContent(6,14, 0.72); //-40
   histo->SetBinContent(7,13, 0.76); //-30
   histo->SetBinContent(8,12, 0.85); //-20
   histo->SetBinContent(9,11, 0.92); //-10
   histo->SetBinContent(10,10, 0.96);
   histo->SetBinContent(11,9, 0.94);
   histo->SetBinContent(12,8, 0.92);
   histo->SetBinContent(13,7, 0.85);
   histo->SetBinContent(14,6, 0.74);
   histo->SetBinContent(15,5, 0.74);
   histo->SetBinContent(16,4, 0.74);
   histo->SetBinContent(17,3, 0.62);
   histo->SetBinContent(18,2, 0.18);
   histo->SetBinContent(19,1, 0.01);




   float Value = histo->Interpolate(11,12);
   cout << "Value = " << histo->Interpolate(11,12) << endl;
   //histo->SetBinContent(11,12, Value);

   
   





   TGraph2D* hist = new TGraph2D( 72);
   //hist->SetPoint(0, 0, 0, 0.96);
   //hist->SetPoint(1, 0, 10, 0.94);
   hist->SetPoint(0, 0, 0, 0.96);       //Origine et sens des aiguilles d'une montre
   hist->SetPoint(1, 10, 0, 1.00);      //X +
   hist->SetPoint(2, 10, -10, 0.94);    //Z-2 +
   hist->SetPoint(3, 0, -10, 0.96);     //Y -
   hist->SetPoint(4, -10, -10, 0.98);   //Z-1 -
   hist->SetPoint(5, -10, 0, 0.94);     //X -
   hist->SetPoint(6, -10, 10, 0.92);    //Z-2 +
   hist->SetPoint(7, 0, 10, 0.94);      //Y +
   hist->SetPoint(8, 10, 10, 1.00);     //Z-1 +

   hist->SetPoint(9, 20, 0, 0.98);      //X +
   hist->SetPoint(10, 20, -20, 0.92);    //Z-2 +
   hist->SetPoint(11, 0, -20, 0.90);     //Y -
   hist->SetPoint(12, -20, -20, 0.88);   //Z-1 -
   hist->SetPoint(13, -20, 0, 0.88);     //X -
   hist->SetPoint(14, -20, 20, 0.85);    //Z-2 +
   hist->SetPoint(15, 0, 20, 0.86);      //Y +
   hist->SetPoint(16, 20, 20, 0.94);     //Z-1 +

   hist->SetPoint(17, 30, 0, 0.90);      //X +
   hist->SetPoint(18, 30, -30, 0.85);    //Z-2 +
   hist->SetPoint(19, 0, -30, 0.76);     //Y -
   hist->SetPoint(20, -30, -30, 0.80);   //Z-1 -
   hist->SetPoint(21, -30, 0, 0.80);     //X -
   hist->SetPoint(22, -30, 30, 0.76);    //Z-2 +
   hist->SetPoint(23, 0, 30, 0.72);      //Y +
   hist->SetPoint(24, 30, 30, 0.80);     //Z-1 +

   hist->SetPoint(25, 40, 0, 0.86);      //X +
   hist->SetPoint(26, 40, -40, 0.74);    //Z-2 +
   hist->SetPoint(27, 0, -40, 0.76);     //Y -
   hist->SetPoint(28, -40, -40, 0.78);   //Z-1 -
   hist->SetPoint(29, -40, 0, 0.72);     //X -
   hist->SetPoint(30, -40, 40, 0.72);    //Z-2 +
   hist->SetPoint(31, 0, 40, 0.64);      //Y +
   hist->SetPoint(32, 40, 40, 0.78);     //Z-1 +

   hist->SetPoint(33, 50, 0, 0.78);      //X +
   hist->SetPoint(34, 50, -50, 0.74);    //Z-2 +
   hist->SetPoint(35, 0, -50, 0.78);     //Y -
   hist->SetPoint(36, -50, -50, 0.76);   //Z-1 -
   hist->SetPoint(37, -50, 0, 0.70);     //X -
   hist->SetPoint(38, -50, 50, 0.70);    //Z-2 +
   hist->SetPoint(39, 0, 50, 0.60);      //Y +
   hist->SetPoint(40, 50, 50, 0.76);     //Z-1 +

   hist->SetPoint(41, 60, 0, 0.74);      //X +
   hist->SetPoint(42, 60, -60, 0.74);    //Z-2 +
   hist->SetPoint(43, 0, -60, 0.76);     //Y -
   hist->SetPoint(44, -60, -60, 0.76);   //Z-1 -
   hist->SetPoint(45, -60, 0, 0.62);     //X -
   hist->SetPoint(46, -60, 60, 0.70);    //Z-2 +
   hist->SetPoint(47, 0, 60, 0.62);      //Y +
   hist->SetPoint(48, 60, 60, 0.72);     //Z-1 +

   hist->SetPoint(49, 70, 0, 0.60);      //X +
   hist->SetPoint(50, 70, -70, 0.62);    //Z-2 +
   hist->SetPoint(51, 0, -70, 0.56);     //Y -
   hist->SetPoint(52, -70, -70, 0.56);   //Z-1 -
   hist->SetPoint(53, -70, 0, 0.57);     //X -
   hist->SetPoint(54, -70, 70, 0.58);    //Z-2 +
   hist->SetPoint(55, 0, 70, 0.54);      //Y +
   hist->SetPoint(56, 70, 70, 0.54);     //Z-1 +

   hist->SetPoint(57, 80, 0, 0.52);      //X +
   hist->SetPoint(58, 80, -80, 0.18);    //Z-2 +
   hist->SetPoint(59, 0, -80, 0.12);     //Y -
   hist->SetPoint(60, -80, -80, 0.14);   //Z-1 -
   hist->SetPoint(61, -80, 0, 0.38);     //X -
   hist->SetPoint(62, -80, 80, 0.13);    //Z-2 +
   hist->SetPoint(63, 0, 80, 0.08);      //Y +
   hist->SetPoint(64, 80, 80, 0.14);     //Z-1 +

   hist->SetPoint(65, 90, 0, 0.001);      //X +
   hist->SetPoint(66, 90, -90, 0.001);    //Z-2 +
   hist->SetPoint(67, 0, -90, 0.001);     //Y -
   hist->SetPoint(68, -90, -90, 0.001);   //Z-1 -
   hist->SetPoint(69, -90, 0, 0.001);     //X -
   hist->SetPoint(70, -90, 90, 0.001);    //Z-2 +
   hist->SetPoint(71, 0, 90, 0.001);      //Y +
   hist->SetPoint(72, 90, 90, 0.001);     //Z-1 +




   //X axis
   his->SetBinContent(1,10, 0.01); //-90
   his->SetBinContent(2,10, 0.38); //-80
   his->SetBinContent(3,10, 0.56); //-70
   his->SetBinContent(4,10, 0.62); //-60
   his->SetBinContent(5,10, 0.70); //-50
   his->SetBinContent(6,10, 0.72); //-40
   his->SetBinContent(7,10, 0.80); //-30
   his->SetBinContent(8,10, 0.88); //-20
   his->SetBinContent(9,10, 0.94); //-10
   his->SetBinContent(10,10, 0.96);
   his->SetBinContent(11,10, 1.00);
   his->SetBinContent(12,10, 0.98);
   his->SetBinContent(13,10, 0.90);
   his->SetBinContent(14,10, 0.86);
   his->SetBinContent(15,10, 0.78);
   his->SetBinContent(16,10, 0.74);
   his->SetBinContent(17,10, 0.60);
   his->SetBinContent(18,10, 0.52);
   his->SetBinContent(19,10, 0.01);

   //Y axis
   his->SetBinContent(10,1, 0.01); //-90
   his->SetBinContent(10,2, 0.12); //-80
   his->SetBinContent(10,3, 0.56); //-70
   his->SetBinContent(10,4, 0.76); //-60
   his->SetBinContent(10,5, 0.78); //-50
   his->SetBinContent(10,6, 0.76); //-40
   his->SetBinContent(10,7, 0.76); //-30
   his->SetBinContent(10,8, 0.90); //-20
   his->SetBinContent(10,9, 0.96); //-10
   his->SetBinContent(10,10, 0.96);
   his->SetBinContent(10,11, 0.94);
   his->SetBinContent(10,12, 0.86);
   his->SetBinContent(10,13, 0.72);
   his->SetBinContent(10,14, 0.64);
   his->SetBinContent(10,15, 0.60);
   his->SetBinContent(10,16, 0.62);
   his->SetBinContent(10,17, 0.54);
   his->SetBinContent(10,18, 0.08);
   his->SetBinContent(10,19, 0.01);


   //Z-1 axis
   his->SetBinContent(1,1, 0.01); //-90
   his->SetBinContent(2,2, 0.14); //-80
   his->SetBinContent(3,3, 0.56); //-70
   his->SetBinContent(4,4, 0.76); //-60
   his->SetBinContent(5,5, 0.76); //-50
   his->SetBinContent(6,6, 0.78); //-40
   his->SetBinContent(7,7, 0.80); //-30
   his->SetBinContent(8,8, 0.88); //-20
   his->SetBinContent(9,9, 0.98); //-10
   his->SetBinContent(10,10, 0.96);
   his->SetBinContent(11,11, 1.00);
   his->SetBinContent(12,12, 0.94);
   his->SetBinContent(13,13, 0.80);
   his->SetBinContent(14,14, 0.78);
   his->SetBinContent(15,15, 0.76);
   his->SetBinContent(16,16, 0.72);
   his->SetBinContent(17,17, 0.54);
   his->SetBinContent(18,18, 0.14);
   his->SetBinContent(19,19, 0.01);


   //Z-2 axis
   his->SetBinContent(1,19, 0.01); //-90
   his->SetBinContent(2,18, 0.13); //-80
   his->SetBinContent(3,17, 0.60); //-70
   his->SetBinContent(4,16, 0.70); //-60
   his->SetBinContent(5,15, 0.70); //-50
   his->SetBinContent(6,14, 0.72); //-40
   his->SetBinContent(7,13, 0.76); //-30
   his->SetBinContent(8,12, 0.85); //-20
   his->SetBinContent(9,11, 0.92); //-10
   his->SetBinContent(10,10, 0.96);
   his->SetBinContent(11,9, 0.94);
   his->SetBinContent(12,8, 0.92);
   his->SetBinContent(13,7, 0.85);
   his->SetBinContent(14,6, 0.74);
   his->SetBinContent(15,5, 0.74);
   his->SetBinContent(16,4, 0.74);
   his->SetBinContent(17,3, 0.62);
   his->SetBinContent(18,2, 0.18);
   his->SetBinContent(19,1, 0.01);


   double V=0;
   V = hist->Interpolate(-70, 83);
   V = hist->Interpolate(70, 83);
   V = hist->Interpolate(83, 70);
   V = hist->Interpolate(83, -70);
   //V = hist->Interpolate(70, -85);
   //V = hist->Interpolate(-80, -83);
   cout << "V = " << V << endl;

   double x = -90;
   double y = -90;
   int nx =1;
   int ny =1;


   for (int i =1; i<20; i++)
     {
       for (int j=1; j<20; j++)
	 {
	   V = hist->Interpolate(x, y);
	   if(i!=10 && j!=10)
	     {
	       if(V==0)
		 {
		   his->SetBinContent(i, j, 0.001);
		 }
	       if(V!=0)
		 {
		   his->SetBinContent(i, j, V);
		 }

	       //cout << " x = " << x << endl;
	       //cout << " y = " << y << endl;
	       //cout << " V = " << V << endl;
	     }
	   y = y+10;
	 }
       x = x+10;
       y=-90;
     }
       

   TCanvas * canvas8 = new TCanvas("canvas8", "RESULTS ",0,0, 600, 400);
   canvas8->cd();
   hist->Draw("surf2");



   histo->SetBinContent(11,12, 0.90);
   histo->SetBinContent(12,11, 0.96);
   histo->SetBinContent(12,9, 0.95);
   histo->SetBinContent(11,8, 0.91);
   histo->SetBinContent(9,8, 0.88);
   histo->SetBinContent(9,12, 0.855);
   histo->SetBinContent(8,9, 0.88);
   histo->SetBinContent(8,11, 0.865);
   histo->SetBinContent(13,11, 0.899838);
   histo->SetBinContent(13,12, 0.849838);
   histo->SetBinContent(13,9, 0.88991);
   histo->SetBinContent(13,8, 0.86991);
   histo->SetBinContent(12,7, 0.845009);
   histo->SetBinContent(11,7, 0.840009);
   histo->SetBinContent(9,7, 0.819892);
   histo->SetBinContent(8,7, 0.810018);
   histo->SetBinContent(7,8, 0.800144);
   histo->SetBinContent(7,9, 0.800144);
   histo->SetBinContent(7,11, 0.785144);
   histo->SetBinContent(7,12, 0.77264);
   histo->SetBinContent(9,13, 0.744955);
   histo->SetBinContent(8,13, 0.752487);
   histo->SetBinContent(11,13, 0.790009);
   histo->SetBinContent(12,13, 0.795009);
   histo->SetBinContent(14,11, 0.813333);
   histo->SetBinContent(14,12, 0.788);
   histo->SetBinContent(14,13, 0.784);
   histo->SetBinContent(14,9, 0.83);
   histo->SetBinContent(14,8, 0.8);
   histo->SetBinContent(14,7, 0.77);
   histo->SetBinContent(11,6, 0.77);
   histo->SetBinContent(12,6, 0.8);
   histo->SetBinContent(13,6, 0.77);
   histo->SetBinContent(9,6, 0.78);
   histo->SetBinContent(8,6, 0.788);
   histo->SetBinContent(7,6, 0.784);
   histo->SetBinContent(6,9, 0.74);
   histo->SetBinContent(6,8, 0.756);

   histo->SetBinContent(6,7, 0.768);
   histo->SetBinContent(6,11, 0.726667);
   histo->SetBinContent(6,12, 0.728);
   histo->SetBinContent(6,13, 0.724);
   histo->SetBinContent(9,14, 0.666667);
   histo->SetBinContent(8,14, 0.688);
   histo->SetBinContent(7,14, 0.704);
   histo->SetBinContent(11,14, 0.68);
   histo->SetBinContent(12,14, 0.716);
   histo->SetBinContent(13,14, 0.748);
   histo->SetBinContent(11,15, 0.65);
   histo->SetBinContent(12,15, 0.7);
   histo->SetBinContent(13,15, 0.720036);
   histo->SetBinContent(14,15, 0.740036);
   histo->SetBinContent(11,16, 0.632);
   histo->SetBinContent(12,16, 0.644022);
   histo->SetBinContent(13,16, 0.579748);
   histo->SetBinContent(14,16, 0.58);
   histo->SetBinContent(15,16, 0.65);
   histo->SetBinContent(15,11, 0.77);
   histo->SetBinContent(15,12, 0.76);
   histo->SetBinContent(15,13, 0.759964);
   histo->SetBinContent(15,14, 0.759964);
   histo->SetBinContent(16,11, 0.716);
   histo->SetBinContent(16,12, 0.691748);
   histo->SetBinContent(16,13, 0.679856);
   histo->SetBinContent(16,14, 0.69);
   histo->SetBinContent(16,15, 0.705);
   histo->SetBinContent(17,11, 0.6);
   histo->SetBinContent(17,12, 0.604901);
   histo->SetBinContent(17,13, 0.62);
   histo->SetBinContent(17,16, 0.520111);
   histo->SetBinContent(17,15, 0.500222);
   histo->SetBinContent(17,14, 0.480333);
   histo->SetBinContent(11,17, 0.399748);
   histo->SetBinContent(12,17, 0.330126);
   histo->SetBinContent(13,17, 0.4);
   histo->SetBinContent(14,17, 0.480333);
   histo->SetBinContent(15,17, 0.500222);
   histo->SetBinContent(16,17, 0.500111);
   histo->SetBinContent(11,18, 0.160333);
   histo->SetBinContent(12,18, 0.240667);
   histo->SetBinContent(13,18, 0.260556);
   histo->SetBinContent(14,18, 0.256);
   histo->SetBinContent(15,18, 0.227);
   histo->SetBinContent(16,18, 0.198);
   histo->SetBinContent(17,18, 0.169);
   histo->SetBinContent(18,17, 0.169);
   histo->SetBinContent(18,16, 0.198);
   histo->SetBinContent(18,15, 0.227);
   histo->SetBinContent(18,14, 0.256);
   histo->SetBinContent(18,13, 0.260556);
   histo->SetBinContent(18,12, 0.240667);
   histo->SetBinContent(18,11, 0.379399);
   histo->SetBinContent(19,11, 0.001);
   histo->SetBinContent(19,12, 0.001);
   histo->SetBinContent(19,13, 0.001);
   histo->SetBinContent(19,14, 0.001);
   histo->SetBinContent(19,15, 0.001);
   histo->SetBinContent(19,16, 0.001);
   histo->SetBinContent(19,17, 0.001);
   histo->SetBinContent(19,18, 0.001);
   histo->SetBinContent(11,19, 0.001);
   histo->SetBinContent(12,19, 0.001);
   histo->SetBinContent(13,19, 0.001);
   histo->SetBinContent(14,19, 0.001);
   histo->SetBinContent(15,19, 0.001);
   histo->SetBinContent(16,19, 0.001);
   histo->SetBinContent(17,19, 0.001);
   histo->SetBinContent(18,19, 0.001);
   histo->SetBinContent(15,9, 0.76);
   histo->SetBinContent(15,8, 0.74);
   histo->SetBinContent(15,7, 0.74);
   histo->SetBinContent(15,6, 0.74);
   histo->SetBinContent(16,9, 0.712);
   histo->SetBinContent(16,8, 0.683748);
   histo->SetBinContent(16,7, 0.668);
   histo->SetBinContent(16,6, 0.685);
   histo->SetBinContent(16,5, 0.7125);
   histo->SetBinContent(17,9, 0.596);
   histo->SetBinContent(17,8, 0.6025);
   histo->SetBinContent(17,7, 0.63);
   histo->SetBinContent(17,6, 0.493667);
   histo->SetBinContent(17,5, 0.535778);
   histo->SetBinContent(17,4, 0.577889);
   histo->SetBinContent(18,9, 0.383667);
   histo->SetBinContent(18,8, 0.247333);
   histo->SetBinContent(18,7, 0.289444);
   histo->SetBinContent(18,6, 0.296);
   histo->SetBinContent(18,5, 0.267);
   histo->SetBinContent(18,4, 0.238);
   histo->SetBinContent(18,3, 0.209);
   histo->SetBinContent(19,9, 0.001);
   histo->SetBinContent(19,8, 0.001);
   histo->SetBinContent(19,7, 0.001);
   histo->SetBinContent(19,6, 0.001);
   histo->SetBinContent(19,5, 0.001);
   histo->SetBinContent(19,4, 0.001);
   histo->SetBinContent(19,3, 0.001);
   histo->SetBinContent(19,2, 0.001);
   histo->SetBinContent(11,5, 0.765);
   histo->SetBinContent(12,5, 0.75);
   histo->SetBinContent(13,5, 0.746661);
   histo->SetBinContent(14,5, 0.743333);
   histo->SetBinContent(11,4, 0.716);
   histo->SetBinContent(12,4, 0.671921);
   histo->SetBinContent(13,4, 0.58);
   histo->SetBinContent(14,4, 0.585);
   histo->SetBinContent(15,4, 0.6625);
   histo->SetBinContent(11,3, 0.42);
   histo->SetBinContent(12,3, 0.3525);
   histo->SetBinContent(13,3, 0.43);
   histo->SetBinContent(14,3, 0.493667);
   histo->SetBinContent(15,3, 0.535778);
   histo->SetBinContent(16,3, 0.577889);
   histo->SetBinContent(11,2, 0.183667);
   histo->SetBinContent(12,2, 0.247333);
   histo->SetBinContent(13,2, 0.289444);
   histo->SetBinContent(14,2, 0.296);
   histo->SetBinContent(15,2, 0.267);
   histo->SetBinContent(16,2, 0.238);
   histo->SetBinContent(17,2, 0.209);
   histo->SetBinContent(11,1, 0.001);
   histo->SetBinContent(12,1, 0.001);
   histo->SetBinContent(13,1, 0.001);
   histo->SetBinContent(14,1, 0.001);
   histo->SetBinContent(15,1, 0.001);
   histo->SetBinContent(16,1, 0.001);
   histo->SetBinContent(17,1, 0.001);
   histo->SetBinContent(18,1, 0.001);
   histo->SetBinContent(9,1, 0.001);
   histo->SetBinContent(8,1, 0.001);
   histo->SetBinContent(7,1, 0.001);
   histo->SetBinContent(6,1, 0.001);
   histo->SetBinContent(5,1, 0.001);   
   histo->SetBinContent(4,1, 0.001);
   histo->SetBinContent(3,1, 0.001);
   histo->SetBinContent(2,1, 0.001);
   histo->SetBinContent(1,2, 0.001);
   histo->SetBinContent(1,3, 0.001);
   histo->SetBinContent(1,4, 0.001);
   histo->SetBinContent(1,5, 0.001);
   histo->SetBinContent(1,6, 0.001);
   histo->SetBinContent(1,7, 0.001);
   histo->SetBinContent(1,8, 0.001);
   histo->SetBinContent(1,9, 0.001);
   histo->SetBinContent(1,11, 0.001);
   histo->SetBinContent(1,12, 0.001);
   histo->SetBinContent(1,13, 0.001);
   histo->SetBinContent(1,14, 0.001);
   histo->SetBinContent(1,15, 0.001);
   histo->SetBinContent(1,16, 0.001);
   histo->SetBinContent(1,17, 0.001);
   histo->SetBinContent(1,18, 0.001);
   histo->SetBinContent(2,19, 0.001);
   histo->SetBinContent(3,19, 0.001);
   histo->SetBinContent(4,19, 0.001);
   histo->SetBinContent(5,19, 0.001);
   histo->SetBinContent(6,19, 0.001);
   histo->SetBinContent(7,19, 0.001);
   histo->SetBinContent(8,19, 0.001);
   histo->SetBinContent(9,19, 0.001);
   histo->SetBinContent(9,15, 0.635);
   histo->SetBinContent(8,15, 0.67);
   histo->SetBinContent(7,15, 0.679982);
   histo->SetBinContent(6,15, 0.69);
   histo->SetBinContent(9,16, 0.62);
   histo->SetBinContent(8,16, 0.62);
   histo->SetBinContent(7,16, 0.544);
   histo->SetBinContent(6,16, 0.545);
   histo->SetBinContent(5,16, 0.6225);
   histo->SetBinContent(9,17, 0.388);
   histo->SetBinContent(8,17, 0.3125);
   histo->SetBinContent(7,17, 0.39);
   histo->SetBinContent(6,17, 0.467);
   histo->SetBinContent(5,17, 0.504667);
   histo->SetBinContent(4,17, 0.542333);
   histo->SetBinContent(9,18, 0.157);
   histo->SetBinContent(8,18, 0.234);
   histo->SetBinContent(7,18, 0.271667);
   histo->SetBinContent(6,18, 0.272667);
   histo->SetBinContent(5,18, 0.237);
   histo->SetBinContent(4,18, 0.201333);
   histo->SetBinContent(3,18, 0.165667);
   histo->SetBinContent(5,11, 0.685);
   histo->SetBinContent(5,12, 0.67);
   histo->SetBinContent(5,13, 0.680054);
   histo->SetBinContent(5,14, 0.69);
   histo->SetBinContent(4,11, 0.626);
   histo->SetBinContent(4,12, 0.63209);
   histo->SetBinContent(4,13, 0.61);
   histo->SetBinContent(4,14, 0.62);
   histo->SetBinContent(4,15, 0.66);
   histo->SetBinContent(3,11, 0.52);
   histo->SetBinContent(3,12, 0.5);
   histo->SetBinContent(3,13, 0.54);
   histo->SetBinContent(3,14, 0.467);
   histo->SetBinContent(3,15, 0.504667);
   histo->SetBinContent(3,16, 0.542333);
   histo->SetBinContent(2,11, 0.307);
   histo->SetBinContent(2,12, 0.234);
   histo->SetBinContent(2,13, 0.271667);
   histo->SetBinContent(2,14, 0.272667);
   histo->SetBinContent(2,15, 0.237);
   histo->SetBinContent(2,16, 0.201333);
   histo->SetBinContent(2,17, 0.165667);
   histo->SetBinContent(5,9, 0.7);
   histo->SetBinContent(5,8, 0.7);
   histo->SetBinContent(5,7, 0.720072);
   histo->SetBinContent(5,6, 0.74);
   histo->SetBinContent(4,9, 0.638);
   histo->SetBinContent(4,8, 0.65609);
   histo->SetBinContent(4,7, 0.646);
   histo->SetBinContent(4,6, 0.665);
   histo->SetBinContent(4,5, 0.7125);
   histo->SetBinContent(3,9, 0.532);
   histo->SetBinContent(3,8, 0.5225);
   histo->SetBinContent(3,7, 0.57);
   histo->SetBinContent(3,6, 0.507);
   histo->SetBinContent(3,5, 0.524667);
   histo->SetBinContent(3,4, 0.542333);
   histo->SetBinContent(2,9, 0.317);
   histo->SetBinContent(2,8, 0.254);
   histo->SetBinContent(2,7, 0.271667);
   histo->SetBinContent(2,6, 0.264889);
   histo->SetBinContent(2,5, 0.233667);
   histo->SetBinContent(2,4, 0.202444);
   histo->SetBinContent(2,3, 0.171222);
   histo->SetBinContent(9,5, 0.775);
   histo->SetBinContent(9,4, 0.72);
   histo->SetBinContent(9,3, 0.424);
   histo->SetBinContent(9,2, 0.187);
   histo->SetBinContent(8,5, 0.77);
   histo->SetBinContent(8,4, 0.680072);
   histo->SetBinContent(8,3, 0.36);
   histo->SetBinContent(8,2, 0.254);
   histo->SetBinContent(7,5, 0.766673);
   histo->SetBinContent(6,5, 0.763333);
   histo->SetBinContent(7,4, 0.592);
   histo->SetBinContent(6,4, 0.6);
   histo->SetBinContent(5,4, 0.68);
   histo->SetBinContent(7,3, 0.44);
   histo->SetBinContent(6,3, 0.507);
   histo->SetBinContent(5,3, 0.524667);
   histo->SetBinContent(4,3, 0.542333);
   histo->SetBinContent(7,2, 0.271667);
   histo->SetBinContent(6,2, 0.264889);
   histo->SetBinContent(5,2, 0.233667);
   histo->SetBinContent(4,2, 0.202444);
   histo->SetBinContent(3,2, 0.171222);



   TCanvas * canvas7 = new TCanvas("canvas7", "RESULTS ",12,12, w, h);
   canvas7->cd();
   //gCU_124->Draw("");
   TFile f("AU_GA0154_TH2.root", "recreate");
   histo->Draw("colz");
   histo->Write();

   TCanvas * canvas1 = new TCanvas("canvas1", "RESULTS ",12,12, w, h);
   canvas1->cd();
   his->Draw("colz");



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
