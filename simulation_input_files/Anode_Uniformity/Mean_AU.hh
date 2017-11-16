TH2F *Plot_2D(const char *filename, const char * title)
{
  TFile *File = new TFile(filename);
  TH2F* h = new TH2F(title, title, 40 , 0, 90, 40, 0, 360);

  h = (TH2F*) File->Get("UniformityPM");

  return h;
}
