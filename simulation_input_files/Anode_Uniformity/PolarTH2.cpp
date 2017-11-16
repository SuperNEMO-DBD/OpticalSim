void PolarTH2()
{
	gStyle->SetOptStat(0);

	Double_t rmax(1.);

	TH2D* pol_his = new TH2D("polarHist", "polarHist", 20, 0., 2.*TMath::Pi(), 20, 0., rmax); // the polar data. X maps to theta, Y maps to R

	Double_t theta, r;
	//fill the histogram with something nice.
	for(Int_t i=1; i<=pol_his->GetNbinsX(); i++)
	{
		theta = pol_his->GetXaxis()->GetBinCenter(i);
		for(Int_t j=1; j<=pol_his->GetNbinsY(); j++)
		{
			r = pol_his->GetYaxis()->GetBinCenter(j);
			pol_his->SetBinContent(i, j, r*cos(2.*theta) );
		}
	}

	//make a dummy histogram to set the axis range from -rmax to rmax in both directions
	TH2D* dummy_his = new TH2D("dummy", "histo title", 100, -rmax, rmax, 100, -rmax, rmax);

	TCanvas* c1 = new TCanvas("theCanvas", "theCanvas", 600, 600);
	dummy_his->Draw("COL"); // draw the dummy histogram first
	pol_his->Draw("COL POL SAME"); // now draw the data histogram. If it has "SAME" it will use the first histogram ranges
}
