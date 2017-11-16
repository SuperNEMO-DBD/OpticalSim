{

   Double_t w = 1350;
   Double_t h = 500;

  //-------------------------------------------------------------------
  // Nombre de lignes du fichier data
  //-------------------------------------------------------------------
  /*ifstream ff("full_popop_emission.cfg");
  float col1, col2;
  float collast=0;
  for(Int_t i=0;i<100;i++) {
  ff>>col1 >> col2;
  if(col1 != collast) { Int_t nL=i; collast=col1;}
cout << col1 << "  " << col2 << endl;
  }*/
  int nL=501;

cout << "nL = " << nL <<endl;

   float WL[nL],R[nL], PST[nL], POPOP[nL], pTP[51], Cargille[400], Boro[51], Grease[51], PMMA[131];
float WL_124[nL];
float WL_154[nL];
float WL_190[nL];
float WL_192[nL];
float WL_205[nL];

cout << "Fichier emission POPOP !!!!!!" << endl;

   //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("full_popop_emission.cfg");
	string drop;
   for(Int_t i=0;i<nL;i++) 
     {ff>>WL[i]>>drop>>R[i];
cout << WL[i] << "    " << R[i] << endl;}


cout << "Fichier emission pTP !!!!!!" << endl;

   //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("pTP_emission.dat");
	string drop;
   for(Int_t i=0;i<51;i++) 
     {ff>>WL[i]>>drop>>pTP[i];
cout << WL[i] << "    " << pTP[i] << endl;}


  Emission = new TGraph(nL, WL, R);
  Emission->SetName("emission");
  Emission->SetTitle("Emission ");
  Emission->GetXaxis()->SetTitle("Wavelength (nm)");
  Emission->GetYaxis()->SetTitle("Emission (arbitrary unit)");
  Emission->SetLineColor(kBlue);
  Emission->SetLineWidth(2);
  Emission->SetMarkerColor(kBlue);


  gpTP = new TGraph(51, WL, pTP);
  gpTP->GetXaxis()->SetTitle("Wavelength (nm)");
  gpTP->GetYaxis()->SetTitle("Emission (arbitrary unit)");
  gpTP->SetLineColor(kBlack);
  gpTP->SetMarkerColor(kBlack);



   TCanvas * canvas1 = new TCanvas("canvas1", "RESULTS ",12,12,w,h);
  canvas1->cd(); 
  Emission->Draw("");
  gpTP->Draw("same");
  //canvas1->SaveAs("Emission.png");

  // Plot de la légende
  leg1 = new TLegend(0.75,0.65,0.85,0.85);
  leg1->SetFillColor(0);
  leg1->AddEntry(Emission, "POPOP","l");
  leg1->AddEntry(gpTP,"pTP","l");
  leg1->Draw();



cout << "Fichier Absorption PS pur !!!!!" << endl;



 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("PSTBulkAbsorb.cfg");
	string drop;
   for(Int_t i=0;i<nL;i++) 
     {ff>>WL[i]>>drop>>PST[i];
cout << WL[i] << "    " << PST[i] <<endl;}


cout << "Fichier Absorption PS avec POPOP !!!!!" << endl;


   ifstream ff("UPS923.cfg");
	string drop;
   for(Int_t i=0;i<nL;i++) 
     {ff>>WL[i]>>drop>>POPOP[i];
cout << WL[i] << "    " << POPOP[i] <<endl;}



  gPST = new TGraph(nL, WL, PST);
  gPST->SetName("");
  gPST->SetTitle("Longueur d'attenuation du PS avec et sans agents ");
  gPST->GetXaxis()->SetTitle("Longueur d'onde (nm)");
  gPST->GetYaxis()->SetTitle("Longueur d'attenuation (m)");
  gPST->SetLineColor(kGreen);
  gPST->SetMarkerColor(kGreen);


  gPOPOP = new TGraph(nL, WL, POPOP);
  gPOPOP->SetLineColor(kRed);
  gPOPOP->SetMarkerColor(kRed);
  gPOPOP->SetLineWidth(2);



 TCanvas *c2 = new TCanvas("c2","transparent pad",200,10,700,500);
 TPad *pad1 = new TPad("pad1","",0,0,1,1);
   TPad *pad2 = new TPad("pad2","",0,0,1,1);
   pad2->SetFillStyle(4000); //will be transparent
   pad1->Draw();
   pad1->cd();
//pad1->SetLogy();
Emission->Draw();
//gpTP->Draw();
pad1->Modified();
c2->cd();
//compute the pad range with suitable margins
   Double_t ymin = 0;
   Double_t ymax = 5;
   Double_t dy = (ymax-ymin)/0.8; //10 per cent margins top and bottom
   Double_t xmin =150;
   Double_t xmax = 750;
   Double_t dx = (xmax-xmin)/0.8; //10 per cent margins left and right
   pad2->Range(xmin-0.1*dx,ymin-0.1*dy,xmax+0.1*dx,ymax+0.1*dy);
pad2->Draw();
pad2->cd();
gPOPOP->Draw("LP");
//gPST->Draw("same");

 // draw axis on the right side of the pad
   TGaxis *axis = new TGaxis(xmax,ymin,xmax,ymax,ymin,ymax,510,"+L");
   axis->SetLabelColor(kRed);
   axis->SetTitle("Length absorption (m)");
   axis->SetTitleColor(kRed);
   axis->Draw();

  // Plot de la légende
  leg1 = new TLegend(0.75,0.65,0.85,0.85);
  leg1->SetFillColor(0);
  leg1->AddEntry(Emission,"POPOP emission","l");
  leg1->AddEntry(gPOPOP, "PS + pTP + POPOP absorption","l");
  leg1->Draw();


/*
   TCanvas * canvas2 = new TCanvas("canvas2", "RESULTS ",12,1200, w, h);
canvas2->cd();
gPST->Draw("");
gPOPOP->Draw("same");

  // Plot de la légende
  leg = new TLegend(0.15,0.65,0.25,0.85);
  leg->SetFillColor(0);
  leg->AddEntry(gPST, "PS pur","l");
  leg->AddEntry(gPOPOP,"PS + pTP + POPOP","l");
  leg->Draw();


  canvas2->SaveAs("Attenuation_PS.png");

*/

//********************************************************************
//Differents fichiers d absorption ===> CANVAS 3**********************
//********************************************************************


cout << "Fichier Cargille !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("CargilleBulkAbsorb.cfg");
	string drop;
   for(Int_t i=0;i<400;i++) 
     {ff>>WL[i]>>drop>>Cargille[i];
cout << WL[i] << "    " << Cargille[i] <<endl;}

  gCargille = new TGraph(400, WL, Cargille);
  gCargille->SetName("");
  gCargille->SetTitle("Materials length absoprtion ");
  gCargille->GetYaxis()->SetRangeUser(0,70);
  gCargille->GetXaxis()->SetTitle("Wavelength (nm)");
  gCargille->GetYaxis()->SetTitle("Length absorption (m)");
  gCargille->SetLineColor(kRed);
  gCargille->SetMarkerColor(kRed);


cout << "Fichier Boro !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("Borosilicate_GlassBulkAbsorb.cfg");
	string drop;
   for(Int_t i=0;i<51;i++) 
     {ff>>WL[i]>>drop>>Boro[i];
cout << WL[i] << "    " << Boro[i] <<endl;}

  gBoro = new TGraph(51, WL, Boro);
  gBoro->SetLineColor(kYellow);
  gBoro->SetMarkerColor(kYellow);



cout << "Fichier Grease !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("GreaseBulkAbsorb.cfg");
	string drop;
   for(Int_t i=0;i<51;i++) 
     {ff>>WL[i]>>drop>>Grease[i];
cout << WL[i] << "    " << Grease[i] <<endl;}

  gGrease = new TGraph(51, WL, Grease);
  gGrease->SetLineColor(kBlue);
  gGrease->SetMarkerColor(kBlue);



cout << "Fichier PMMA !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("PMMABulkAbsorb.dat");
	string drop;
   for(Int_t i=0;i<131;i++) 
     {ff>>WL[i]>>drop>>PMMA[i];
cout << WL[i] << "    " << PMMA[i] <<endl;}

  gPMMA = new TGraph(131, WL, PMMA);
  gPMMA->SetLineColor(kGreen);
  gPMMA->SetMarkerColor(kGreen);




   TCanvas * canvas3 = new TCanvas("canvas3", "RESULTS ",12,1200, w, h);
canvas3->cd();
gCargille->Draw("");
gBoro->Draw("same");
gPOPOP->Draw("same");
gPMMA->Draw("same");

  // Plot de la légende
  leg2 = new TLegend(0.15,0.65,0.25,0.85);
  leg2->SetFillColor(0);
  leg2->AddEntry(gCargille, "Glue ","l");
  leg2->AddEntry(gBoro,"PMT Glass","l");
  leg2->AddEntry(gPOPOP,"Scintillator ","l");
  leg2->AddEntry(gPMMA,"PMMA","l");
  leg2->Draw();


  //canvas3->SaveAs("Attenuation_global.png");




//********************************************************************
//Differents fichiers d indice optique ===> CANVAS 4**********************
//********************************************************************


cout << "Fichier indice BSG !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("BSG_ref_index.dat");
	string drop;
	float BSG_ind[18];
   for(Int_t i=0;i<18;i++) 
     {ff>>WL[i]>>drop>>BSG_ind[i];
cout << WL[i] << "    " << BSG_ind[i] <<endl;}

  gBSG_ind = new TGraph(18, WL, BSG_ind);
  gBSG_ind->SetName("");
  //gBSG_ind->SetTitle("Indice de refraction de differents materiaux en fonction de differentes longueurs d'ondes");
  gBSG_ind->GetYaxis()->SetRangeUser(0.8,1.8);
  gBSG_ind->GetXaxis()->SetTitle("Wavelength (nm)");
  gBSG_ind->GetYaxis()->SetTitle("Refraction index");
  gBSG_ind->SetLineColor(kYellow);
  gBSG_ind->SetMarkerColor(kYellow);


cout << "Fichier indice Cargille !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("Cargille_ref_index.dat");
	string drop;
	float Cargille_ind[11];
   for(Int_t i=0;i<11;i++) 
     {ff>>WL[i]>>drop>>Cargille_ind[i];
cout << WL[i] << "    " << Cargille_ind[i] <<endl;}

  gCargille_ind = new TGraph(11, WL, Cargille_ind);
  gCargille_ind->SetLineColor(kRed);
  gCargille_ind->SetMarkerColor(kRed);


cout << "Fichier indice Isopro !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("Isopro_ref_index.dat");
	string drop;
	float Isopro_ind[42];
   for(Int_t i=0;i<42;i++) 
     {ff>>WL[i]>>drop>>Isopro_ind[i];
cout << WL[i] << "    " << Isopro_ind[i] <<endl;}

  gIsopro_ind = new TGraph(42, WL, Isopro_ind);
  gIsopro_ind->SetLineColor(kViolet);
  gIsopro_ind->SetMarkerColor(kViolet);




cout << "Fichier indice Air !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
 ifstream ff("Isopro_ref_index.dat"); //Just to have WL !!!
	string drop;
	float Air_ind[42];
   for(Int_t i=0;i<42;i++) 
     {ff>>WL[i]>>drop>>Air_ind[i];
cout << WL[i] << "    " << Isopro_ind[i] <<endl;
 Air_ind[i]=1;}

  gAir_ind = new TGraph(42, WL, Air_ind);
  gAir_ind->SetLineColor(kViolet);
  gAir_ind->SetMarkerColor(kViolet);



cout << "Fichier indice PMMA !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("PMMA_ref_index.dat");
	string drop;
	float PMMA_ind[11];
   for(Int_t i=0;i<11;i++) 
     {ff>>WL[i]>>drop>>PMMA_ind[i];
cout << WL[i] << "    " << PMMA_ind[i] <<endl;}

  gPMMA_ind = new TGraph(11, WL, PMMA_ind);
  gPMMA_ind->SetLineColor(kGreen);
  gPMMA_ind->SetMarkerColor(kGreen);



cout << "Fichier indice PS MANU !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("PST_ref_index.dat");
	string drop;
	float PST_ind[11];
   for(Int_t i=0;i<11;i++) 
     {ff>>WL[i]>>drop>>PST_ind[i];
cout << WL[i] << "    " << PST_ind[i] <<endl;}

  gPST_ind = new TGraph(11, WL, PST_ind);
  gPST_ind->SetLineColor(kCyan);
  gPST_ind->SetMarkerColor(kCyan);



cout << "Fichier indice PS !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("PS_index_geant.dat");
	string drop;
	float PS_ind[80];
   for(Int_t i=0;i<80;i++) 
     {ff>>WL[i]>>drop>>PS_ind[i];
cout << WL[i] << "    " << PS_ind[i] <<endl;}

  gPS_ind = new TGraph(80, WL, PS_ind);
  gPS_ind->SetLineColor(kBlue);
  gPS_ind->SetMarkerColor(kBlue);




cout << "Fichier indice PMMA internet !!!!!" << endl;


   ifstream ff("PMMA_ref_index_geant.dat");
	string drop;
	float PMMA_g_ind[80];
   for(Int_t i=0;i<80;i++) 
     {ff>>WL[i]>>drop>>PMMA_g_ind[i];
cout << WL[i] << "    " << PMMA_g_ind[i] <<endl;}

  gPMMA_g_ind = new TGraph(80, WL, PMMA_g_ind);
  gPMMA_g_ind->SetLineColor(kOrange);
  gPMMA_g_ind->SetMarkerColor(kOrange);




   TCanvas * canvas4 = new TCanvas("canvas4", "RESULTS ",12,12, w, h);
canvas4->cd();
gBSG_ind->Draw("");
//gPST_ind->Draw("same");
gPS_ind->Draw("same");
//gPMMA_ind->Draw("same");
gPMMA_g_ind->Draw("same");
gCargille_ind->Draw("same");
gIsopro_ind->Draw("same");
gAir_ind->Draw("same");

  // Plot de la légende
  leg3 = new TLegend(0.7,0.35,0.85,0.55);
  leg3->SetFillColor(0);
  //leg3->AddEntry(gPST_ind, "Polystyrene Manu","l");
  leg3->AddEntry(gPS_ind, "Polystyrene ","l");
  leg3->AddEntry(gBSG_ind,"Verre borosilicate","l");
  leg3->AddEntry(gCargille_ind,"RTV615","l");
  //leg3->AddEntry(gPMMA_ind,"PMMA Manu","l");
  leg3->AddEntry(gPMMA_g_ind,"PMMA","l");
  leg3->AddEntry(gIsopro_ind,"Isopropanol","l");
  leg3->AddEntry(gAir_ind,"Air","l");
  leg3->Draw();


  //canvas4->SaveAs("indice_optique.png");






//********************************************************************
//Differents fichiers d indice optique ===> CANVAS 4**********************
//********************************************************************


cout << "Fichier TEFLON !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("teflon.dat");
	string drop;
	float Teflon[202];
   for(Int_t i=0;i<202;i++) 
     {ff>>WL[i]>>drop>>Teflon[i];
cout << WL[i] << "    " << Teflon[i] <<endl;}

  gTeflon = new TGraph(202, WL, Teflon);
  gTeflon->SetName("");
  gTeflon->SetTitle("");
  //gTeflon->GetYaxis()->SetRangeUser(0.8,1.8);
  gTeflon->GetXaxis()->SetTitle("Wavelength (nm)");
  gTeflon->GetYaxis()->SetTitle("Reflectivity");
  gTeflon->SetLineColor(kBlue);
  gTeflon->SetMarkerColor(kBlue);




cout << "Fichier Mylar !!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("mylar.dat");
	string drop;
	float Mylar[18];
   for(Int_t i=0;i<18;i++) 
     {ff>>WL[i]>>drop>>Mylar[i];
cout << WL[i] << "    " << Mylar[i] <<endl;}


  gMylar = new TGraph(18, WL, Mylar);
  gMylar->SetLineColor(kRed);
  gMylar->SetMarkerColor(kRed);


   TCanvas * canvas5 = new TCanvas("canvas5", "RESULTS ",12,12, w, h);
canvas5->cd();
gTeflon->Draw("");
gMylar->Draw("same");
//gPMMA_ind->Draw("same");
//gCargille_ind->Draw("same");


  // Plot de la légende
  leg3 = new TLegend(0.7,0.35,0.85,0.55);
  leg3->SetFillColor(0);
  leg3->AddEntry(gTeflon, "Teflon","l");
  leg3->AddEntry(gMylar,"Mylar","l");
  leg3->Draw();





//********************************************************************
//Differents fichiers d indice optique ===> CANVAS 4**********************
//********************************************************************


cout << "Fichier Efficacite quantique PM!!!!!" << endl;

 //-------------------------------------------------------------------
   // Lecture du fichier data
   //-------------------------------------------------------------------
   ifstream ff("qe_ham_sba43.txt");
	string drop;
	float test[44];
	float QE[44];
	float QE_8inch[44];
   for(Int_t i=0;i<44;i++) 
     {ff>>WL[i]>>drop>>test[i];
QE[i] = 0.6125*test[i];
QE_8inch[i] = 0.79*test[i];
cout << WL[i] << "    " << 0.79*QE[i] <<endl;}





   ifstream ff("QE_ham_GA0205.txt");
	string drop;
	float test[51];
	float GA0205[51];
   for(Int_t i=0;i<51;i++) 
     {ff>>WL_205[i]>>drop>>GA0205[i];
       cout << "205 = " << WL_205[i] << "    " << GA0205[i] <<endl;}


   ifstream ff("QE_ham_GA0124.txt");
	string drop;
	float test[53];
	float GA0124[53];
   for(Int_t i=0;i<53;i++) 
     {ff>>WL_124[i]>>drop>>GA0124[i];
       cout << "124 = " <<   WL_124[i] << "    " << GA0124[i] <<endl;}


   ifstream ff("QE_ham_GA0154.txt");
	string drop;
	float test[52];
	float GA0154[52];
	float out[52];
   for(Int_t i=0;i<52;i++) 
     {ff>>WL_154[i]>>drop>>GA0154[i];
out[i] = 0.67*GA0154[i];
 cout << " 154 = " << WL_154[i] << "    " << GA0154[i] <<endl;}



   ifstream ff("QE_ham_GA0190.txt");
	string drop;
	float test[53];
	float GA0190[53];
   for(Int_t i=0;i<53;i++) 
     {ff>>WL_190[i]>>drop>>GA0190[i];
       cout << "190 = " << WL_190[i] << "    " << GA0190[i] <<endl;}



   ifstream ff("QE_ham_GA0192.txt");
	string drop;
	float test[52];
	float GA0192[52];
   for(Int_t i=0;i<52;i++) 
     {ff>>WL_192[i]>>drop>>GA0192[i];
       cout << "192 = " << WL_192[i] << "    " << GA0192[i] <<endl;}

  gQE = new TGraph(44, WL,QE);
  gQE->SetName("");
  gQE->SetTitle("");
  //gQE->GetYaxis()->SetRangeUser(0.8,1.8);
  gQE->GetXaxis()->SetTitle("Wavelength (nm)");
  gQE->GetYaxis()->SetTitle("Quantum efficiency");
  gQE->SetLineColor(kGray);
  gQE->SetMarkerColor(kGray);


  gQE_b = new TGraph(44, WL,QE_8inch);
  gQE_b->SetLineColor(kBlack);
  gQE_b->SetMarkerColor(kBlack);

  gGA0205 = new TGraph(51, WL_205, GA0205);
  gGA0205->SetLineColor(kOrange);
  gGA0205->SetMarkerColor(kOrange);

  gGA0124 = new TGraph(53, WL_124, GA0124);
  gGA0124->SetLineColor(kBlack);
  gGA0124->SetMarkerColor(kBlack);

  gGA0154 = new TGraph(52, WL_154, GA0154);
  gGA0154->SetLineColor(kRed);
  gGA0154->SetMarkerColor(kRed);

  gGA0190 = new TGraph(53, WL_190, GA0190);
  gGA0190->SetLineColor(kCyan);
  gGA0190->SetMarkerColor(kCyan);

  gGA0192 = new TGraph(52, WL_192, GA0192);
  gGA0192->SetLineColor(kGreen);
  gGA0192->SetMarkerColor(kGreen);



   TCanvas * canvas6 = new TCanvas("canvas6", "RESULTS ",12,12, w, h);
canvas6->cd();
//gQE->Draw("");
//gQE_b->Draw("");
gGA0205->Draw("");
gGA0124->Draw("same");
gGA0154->Draw("same");
gGA0190->Draw("same");
gGA0192->Draw("same");


  // Plot de la légende
  leg4 = new TLegend(0.7,0.35,0.85,0.55);
  leg4->SetFillColor(0);
  //leg4->AddEntry(gQE_b, "First input (Photonis)","lp");
  //leg4->AddEntry(gQE, "First input (Photonis)","lp");
  leg4->AddEntry(gGA0124, "GA0124","lp");
  leg4->AddEntry(gGA0154, "GA0154","lp");
  leg4->AddEntry(gGA0190, "GA0190","lp");
  leg4->AddEntry(gGA0192, "GA0192","lp");
  leg4->AddEntry(gGA0205, "GA0205","lp");
  leg4->Draw();





   //ifstream ff("CathodeUnif_ham_GA0124.txt");
   ifstream ff("AnodeUnif_ham_GA0124.txt");
	string drop;
	float CU_GA0124[19];
	float angle_124[19];
   for(Int_t i=0;i<19;i++) 
     {ff>>angle_124[i]>>drop>>CU_GA0124[i];
cout << angle_124[i] << "    " << CU_GA0124[i] <<endl;}

   //ifstream ff("CathodeUnif_ham_GA0154.txt");
   ifstream ff("AnodeUnif_ham_GA0154.txt");
	string drop;
	float CU_GA0154[19];
	float angle_154[19];
   for(Int_t i=0;i<19;i++) 
     {ff>>angle_154[i]>>drop>>CU_GA0154[i];
cout << angle_154[i] << "    " << CU_GA0154[i] <<endl;}

   //ifstream ff("CathodeUnif_ham_GA0190.txt");
   ifstream ff("AnodeUnif_ham_GA0190.txt");
	string drop;
	float CU_GA0190[19];
	float angle_190[19];
   for(Int_t i=0;i<19;i++) 
     {ff>>angle_190[i]>>drop>>CU_GA0190[i];
cout << angle_190[i] << "    " << CU_GA0190[i] <<endl;}

   //ifstream ff("CathodeUnif_ham_GA0192.txt");
   ifstream ff("AnodeUnif_ham_GA0192.txt");
	string drop;
	float CU_GA0192[19];
	float angle_192[19];
   for(Int_t i=0;i<19;i++) 
     {ff>>angle_192[i]>>drop>>CU_GA0192[i];
cout << angle_192[i] << "    " << CU_GA0192[i] <<endl;}

   ifstream ff("AnodeUnif_ham_GA0154_yaxis.txt");
   //ifstream ff("AnodeUnif_ham_GA0205.txt");
	string drop;
	float CU_GA0205[19];
	float angle_205[19];
   for(Int_t i=0;i<19;i++) 
     {ff>>angle_205[i]>>drop>>CU_GA0205[i];
cout << angle_205[i] << "    " << CU_GA0205[i] <<endl;}


  TH1F* histo = new TH1F("UniformityPMT", "UniformityPMT", 19 , -95, 95);
  
  for (int i =0; i< 19; i++)
    {
      histo->SetBinContent(i+1, CU_GA0205[i]);
      cout << "angle[" << i << "] = " << angle_205[i] << endl;
      cout << "CU[" << i << "] = " << CU_GA0205[i] << endl;
    }


  //histo->SetBinContent(1, 0.90);


  gCU_124 = new TGraph(19, angle_124, CU_GA0124 );
  gCU_124->SetName("");
  gCU_124->SetTitle("");
  //gCU_124->GetYaxis()->SetRangeUser(0.8,1.8);
  gCU_124->GetXaxis()->SetTitle("Position angle (degree)");
  gCU_124->GetYaxis()->SetTitle("Relative output");
  gCU_124->SetLineColor(kBlack);
  gCU_124->SetMarkerColor(kBlack);



  gCU_154 = new TGraph(19, angle_154, CU_GA0154 );
  gCU_154->GetXaxis()->SetTitle("Position angle (degree)");
  gCU_154->GetYaxis()->SetTitle("Relative output");
  gCU_154->SetLineColor(kRed);
  gCU_154->SetMarkerColor(kRed);


  gCU_190 = new TGraph(19, angle_190, CU_GA0190 );
  gCU_190->GetXaxis()->SetTitle("Position angle (degree)");
  gCU_190->GetYaxis()->SetTitle("Relative output");
  gCU_190->SetLineColor(kCyan);
  gCU_190->SetMarkerColor(kCyan);


  gCU_192 = new TGraph(19, angle_192, CU_GA0192 );
  gCU_192->GetXaxis()->SetTitle("Position angle (degree)");
  gCU_192->GetYaxis()->SetTitle("Relative output");
  gCU_192->SetLineColor(kGreen);
  gCU_192->SetMarkerColor(kGreen);


  gCU_205 = new TGraph(19, angle_205, CU_GA0205 );
  gCU_205->GetXaxis()->SetTitle("Position angle (degree)");
  gCU_205->GetYaxis()->SetTitle("Relative output");
  gCU_205->SetLineColor(kOrange);
  gCU_205->SetMarkerColor(kOrange);


   TCanvas * canvas7 = new TCanvas("canvas7", "RESULTS ",12,12, w, h);
canvas7->cd();
//gCU_124->Draw("");
  TFile f("AU_GA0154_yaxis.root", "recreate");
histo->Draw("");
 histo->Write();

//gCU_154->Draw("same");
//gCU_190->Draw("same");
//gCU_192->Draw("same");


  // Plot de la légende
  leg5 = new TLegend(0.7,0.35,0.85,0.55);
  leg5->SetFillColor(0);
  leg5->AddEntry(gCU_124, "GA0124","lp");
  leg5->AddEntry(gCU_154, "GA0154","lp");
  leg5->AddEntry(gCU_190, "GA0190","lp");
  leg5->AddEntry(gCU_192, "GA0192","lp");
  leg5->AddEntry(gCU_205, "GA0205","lp");
  leg5->Draw();


/*

 TCanvas *c8 = new TCanvas("c8","transparent pad",200,10,700,500);
 TPad *pad1 = new TPad("pad1","",0,0,1,1);
   TPad *pad2 = new TPad("pad2","",0,0,1,1);
   pad2->SetFillStyle(4000); //will be transparent
   pad1->Draw();
   pad1->cd();
//pad1->SetLogy();
gQE->Draw("");
gGA0154->Draw("same");
  gQE->SetLineColor(kBlack);
  gQE->SetLineWidth(3);
  gGA0154->SetLineWidth(3);
//gpTP->Draw();
pad1->Modified();
c8->cd();
//compute the pad range with suitable margins
   Double_t ymin = 0;
   Double_t ymax = 5;
   Double_t dy = (ymax-ymin)/0.8; //10 per cent margins top and bottom
   Double_t xmin =200;
   Double_t xmax = 750;
   Double_t dx = (xmax-xmin)/0.8; //10 per cent margins left and right
   pad2->Range(xmin-0.1*dx,ymin-0.1*dy,xmax+0.1*dx,ymax+0.1*dy);
pad2->Draw();
pad2->cd();
gPOPOP->Draw("LP");
  gPOPOP->SetLineColor(kCyan);
  gPOPOP->SetMarkerColor(kCyan);
//gPST->Draw("same");

 // draw axis on the right side of the pad
   TGaxis *axis1 = new TGaxis(xmax,ymin,xmax,ymax,ymin,ymax,510,"+L");
   axis1->SetLabelColor(kCyan);
   axis1->SetTitle("Longueur d'attenuation (m)");
   axis1->SetTitleColor(kCyan);
   axis1->Draw();
*/
}
