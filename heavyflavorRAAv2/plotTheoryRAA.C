#include "xjjrootuti.h"
#include "plotTheoryRAA.h"

void plotTheoryRAA()
{

  std::cout<<std::endl;
  std::cout<<"  ------------------ Theory RAA ------------------"<<std::endl;
  std::cout<<std::endl;

  // D0

  TFile* infCUJETD5TeV = new TFile("theorypoints/CUJET_D0_RAA_0_100.root");  
  TGraphAsymmErrors* gCUJETD5TeV = (TGraphAsymmErrors*)infCUJETD5TeV->Get("gRAADmeson5TeV");
  gCUJETD5TeV->SetName("gCUJETD5TeV");
  TGraph* gShanshanD5TeV = new TGraph("theorypoints/Shanshan-D-RAA_PbPb5020_00-80.dat");
  gShanshanD5TeV->SetName("gShanshanD5TeV");
  TGraph* gMagdalenaD5TeV = new TGraph("theorypoints/Magdalena-5TeV-0100-plot2.txt");
  gMagdalenaD5TeV->SetName("gMagdalenaD5TeV");

  // D0 0-10%

  TFile* infCUJETD0105TeV = new TFile("theorypoints/CUJET_D0_RAA_0_10.root");
  TGraphAsymmErrors* gCUJETD0105TeV = (TGraphAsymmErrors*)infCUJETD0105TeV->Get("gRAADmeson5TeV");
  gCUJETD0105TeV->SetName("gCUJETD0105TeV");
  TGraphErrors* gPHSDWOShadowingD0105TeV = new TGraphErrors("theorypoints/phsd502TeVWoShadowing.txt");
  gPHSDWOShadowingD0105TeV->SetName("gPHSDWOShadowingD0105TeV");
  TGraphErrors* gPHSDWShadowingD0105TeV = new TGraphErrors("theorypoints/phsd502TeVWShadowing.txt");
  gPHSDWShadowingD0105TeV->SetName("gPHSDWShadowingD0105TeV");
  TGraph *gMagdalenaD0105TeV = new TGraph("theorypoints/Magdalena-5TeV-plot2.txt");
  gMagdalenaD0105TeV->SetName("gMagdalenaD0105TeV");
  TGraph *gShanshanD0105TeV = new TGraph("theorypoints/Shanshan-D-RAA_PbPb5020_00-10.dat");
  gShanshanD0105TeV->SetName("gShanshanD0105TeV");
  TGraph *gIvanD0105TeV = new TGraph("theorypoints/R-PbPb_cen_cron1.5_eloss1.5.5100GeVD0.txt");
  gIvanD0105TeV->SetName("gIvanD0105TeV");

  // Bp

  const int n = 1000;
  Float_t aCx[n],aCy[n],aCyl[n],aCyh[n];
  Float_t bCx[n],bCy[n],bCye[n],bDummy[n];
  Int_t nbin=0;
  Float_t temp;
  Float_t cCx[n],cCy[n],cCye[n],cDummy[n];
  //
  TGraph* gMagdalenaB5TeV = new TGraph("theorypoints/Magdalena.dat");
  gMagdalenaB5TeV->SetName("gMagdalenaB5TeV");
  //
  std::ifstream getdata("theorypoints/TAMUminbiasB.txt");
  if(!getdata.is_open()) std::cout<<"Opening the file fails: TAMU"<<std::endl;
  nbin=0;
  while(!getdata.eof())
    {
      getdata>>aCx[nbin]>>aCyh[nbin]>>aCyl[nbin];
     nbin++;
    }
  Float_t* aTAMUB5TeVx = new Float_t[nbin];
  Float_t* aTAMUB5TeVxe = new Float_t[nbin];
  Float_t* aTAMUB5TeVy = new Float_t[nbin];
  Float_t* aTAMUB5TeVye = new Float_t[nbin];
  for(int i=0;i<nbin;i++)
    {
      aTAMUB5TeVx[i] = aCx[i];
      aTAMUB5TeVxe[i] = 0;
      aTAMUB5TeVy[i] = (aCyh[i]+aCyl[i])/2.;
      aTAMUB5TeVye[i] = abs(aCyh[i]-aCyl[i])/2.;
    }
  getdata.close();
  getdata.clear();
  TGraphErrors* gTAMUB5TeV = new TGraphErrors(nbin, aTAMUB5TeVx, aTAMUB5TeVy, aTAMUB5TeVxe, aTAMUB5TeVye);
  gTAMUB5TeV->SetName("gTAMUB5TeV");
  //
  std::ifstream countlines("theorypoints/CUJET_5.02TeV_B0_RAA_0-100.dat");
  int counter=0;
  while(!countlines.eof())
    {
      countlines>>temp>>temp>>temp;
      counter++;
    }
  countlines.close();
  countlines.clear();
  std::ifstream getcujet("theorypoints/CUJET_5.02TeV_B0_RAA_0-100.dat");
  const int size = counter;
  double pt[size],RAAhigh[size],RAAlow[size],RAA[size],RAAerr[size];
  double zero[size];
  double width[size];
  for(int i=0;i<size;i++)
    {
      getcujet>>pt[i]>>RAAhigh[i]>>RAAlow[i];
      RAA[i] = (RAAhigh[i]+RAAlow[i])/2.;
      RAAerr[i] = (RAAhigh[i]-RAAlow[i])/2.;
      width[i]=0.5;
    }
  getcujet.close();
  getcujet.clear();
  TGraphAsymmErrors* gCUJETB5TeV = new TGraphAsymmErrors(size,pt,RAA,width,width,RAAerr,RAAerr);
  gCUJETB5TeV->SetName("gCUJETB5TeV");
  //
  std::ifstream getadscft1("theorypoints/RAA_5TeV_0080_B0_DiffusionConstant_band.dat");
  if(!getadscft1.is_open()) std::cout<<"Opening the file fails: ADS/CFT DiffusionConstant"<<std::endl;
  nbin=0;
  while(!getadscft1.eof())
    {
      getadscft1>>bCx[nbin]>>bCy[nbin]>>bDummy[nbin]>>bCye[nbin];
      nbin++;
    }
  bCx[nbin] = bCx[nbin-1];
  bCy[nbin] = bCy[nbin-1];
  bCye[nbin] = bCye[nbin-1];
  nbin++;
  Float_t* aADSCFT1B5TeVx = new Float_t[nbin];
  Float_t* aADSCFT1B5TeVxe = new Float_t[nbin];
  Float_t* aADSCFT1B5TeVy = new Float_t[nbin];
  Float_t* aADSCFT1B5TeVye = new Float_t[nbin];
  for(int i=0;i<nbin;i++)
    {
      aADSCFT1B5TeVx[i] = bCx[i];
      aADSCFT1B5TeVxe[i] = 0;
      aADSCFT1B5TeVy[i] = bCy[i];
      aADSCFT1B5TeVye[i] = bCye[i];
    }
  TGraphErrors* gADSCFT1B5TeV = new TGraphErrors(nbin, aADSCFT1B5TeVx, aADSCFT1B5TeVy, aADSCFT1B5TeVxe, aADSCFT1B5TeVye);
  gADSCFT1B5TeV->SetName("gADSCFT1B5TeV");
  //
  std::ifstream getadscft2("theorypoints/RAA_5TeV_0080_B0_DiffusionDynamic_band.dat");
  if(!getadscft2.is_open()) std::cout<<"Opening the file fails: ADS/CFT DiffusionDynamic"<<std::endl;
  nbin=0;
  while(!getadscft2.eof())
    {
      getadscft2>>cCx[nbin]>>cCy[nbin]>>bDummy[nbin]>>cCye[nbin];
      nbin++;
    }
  cCx[nbin] = cCx[nbin-1];
  cCy[nbin] = cCy[nbin-1];
  cCye[nbin] = cCye[nbin-1];
  nbin++;
  Float_t* aADSCFT2B5TeVx = new Float_t[nbin];
  Float_t* aADSCFT2B5TeVxe = new Float_t[nbin];
  Float_t* aADSCFT2B5TeVy = new Float_t[nbin];
  Float_t* aADSCFT2B5TeVye = new Float_t[nbin];
  for(int i=0;i<nbin;i++)
    {
      aADSCFT2B5TeVx[i] = cCx[i];
      aADSCFT2B5TeVxe[i] = 0;
      aADSCFT2B5TeVy[i] = cCy[i];
      aADSCFT2B5TeVye[i] = cCye[i];
    }
  TGraphErrors* gADSCFT2B5TeV = new TGraphErrors(nbin, aADSCFT2B5TeVx, aADSCFT2B5TeVy, aADSCFT2B5TeVxe, aADSCFT2B5TeVye);
  gADSCFT2B5TeV->SetName("gADSCFT2B5TeV");

  //

  setplotD0theory(gCUJETD5TeV, gShanshanD5TeV, gMagdalenaD5TeV);
  setplotD0theory010(gCUJETD0105TeV, gPHSDWOShadowingD0105TeV, gPHSDWShadowingD0105TeV, gMagdalenaD0105TeV, gShanshanD0105TeV, gIvanD0105TeV);
  setplotBptheory(gMagdalenaB5TeV, gTAMUB5TeV, gCUJETB5TeV, gADSCFT1B5TeV, gADSCFT2B5TeV);

  //

  Float_t pti = 0.5;
  Float_t pte = 300;
  
  TH2F* hempty = new TH2F("hempty", ";p_{T} (GeV/c);R_{AA}", 50, pti, pte, 10., 0, 1.9);
  xjjroot::sethempty(hempty, 0, -0.2, 0.05, 0.04);
  TLine* line = new TLine(pti, 1, pte, 1);
  xjjroot::setline(line, kBlack, 2, 2);
  TLatex* texcms = new TLatex(0.16, 0.90, "CMS");
  xjjroot::settex(texcms, 0.06, 13, 62);
  TLatex* texpre = new TLatex(0.15, 0.84, "Theory");
  xjjroot::settex(texpre, 0.05, 13, 52);
  TLatex* texpreafter = new TLatex(0.15, 0.84, "Theory");
  xjjroot::settex(texpreafter, 0.05, 13, 52);
  TLatex* texdata = new TLatex(0.16, 0.78, "#bar{D^{0}} + D^{0}");
  xjjroot::settex(texdata, 0.05, 13);
  TLatex* texdataafter = new TLatex(0.16, 0.78, "B^{+} + B^{-}");
  xjjroot::settex(texdataafter, 0.05, 13);
  TLatex* texlumi = new TLatex(0.13, 0.936, "(5.02 TeV pp) + (5.02 TeV PbPb)");
  xjjroot::settex(texlumi, 0.038);
  TLatex* texlumiafter = new TLatex(0.13, 0.936, "(5.02 TeV pp) + (5.02 TeV PbPb)");
  xjjroot::settex(texlumiafter, 0.038);
  TLatex* texcent = new TLatex(0.70, 0.18, Form("Cent. 0-100%s", "%"));
  xjjroot::settex(texcent, 0.043);
  TLatex* texcent010 = new TLatex(0.70, 0.18, Form("Cent. 0-10%s", "%"));
  xjjroot::settex(texcent010, 0.043);

  //

  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetEndErrorSize(0);
  gStyle->SetMarkerStyle(20);
  gStyle->SetPadRightMargin(0.03);
  gStyle->SetPadLeftMargin(0.12);
  gStyle->SetPadTopMargin(0.075);
  gStyle->SetPadBottomMargin(0.12);
  //gStyle->SetHatchesLineWidth(3);

  //

  TCanvas* c2 = new TCanvas("c2", "", 1200, 600);
  c2->Divide(2, 1);

  c2->cd(1);
  gPad->SetLogx();
  hempty->Draw();
  line->Draw();
  gShanshanD5TeV->Draw("c same");
  gMagdalenaD5TeV->Draw("f same");
  gMagdalenaD5TeV->Draw("l same");
  gCUJETD5TeV->Draw("4 same");
  texcms->Draw();
  texpre->Draw();
  texdata->Draw();
  texlumi->Draw();
  texcent->Draw();
  TLegend* legRAAbefore = new TLegend(0.45, 0.73, 0.92, 0.91);
  xjjroot::setleg(legRAAbefore, 0.043);
  legRAAbefore->AddEntry(gMagdalenaD5TeV, "M. Djordjevic", "f");
  legRAAbefore->AddEntry(gCUJETD5TeV, "CUJET 3.0", "f");
  legRAAbefore->AddEntry(gShanshanD5TeV, "S. Cao et al.", "l");
  legRAAbefore->Draw();

  c2->cd(2);
  gPad->SetLogx();
  hempty->Draw();
  line->Draw();
  gMagdalenaB5TeV->Draw("c same");
  gTAMUB5TeV->Draw("4 same");
  gCUJETB5TeV->Draw("3 same");
  gADSCFT1B5TeV->Draw("4 same");
  gADSCFT2B5TeV->Draw("4 same");
  texcms->Draw();
  texpreafter->Draw();
  texdataafter->Draw();
  texlumiafter->Draw();
  texcent->Draw();
  TLegend* legRAAafter = new TLegend(0.45, 0.58, 0.92, 0.91);
  xjjroot::setleg(legRAAafter, 0.043);
  legRAAafter->AddEntry(gMagdalenaB5TeV, "M. Djordjevic", "l");
  legRAAafter->AddEntry(gCUJETB5TeV, "CUJET 3.0", "f");
  legRAAafter->AddEntry(gTAMUB5TeV, "TAMU", "f");
  legRAAafter->AddEntry((TObject*)0, "AdS/CFT", NULL);  
  legRAAafter->AddEntry(gADSCFT1B5TeV, "HH D(p)", "f");  
  legRAAafter->AddEntry(gADSCFT2B5TeV, "HH D = const", "f");  
  legRAAafter->Draw();

  c2->SaveAs("plots/cTheoryRAA_BD_v2.pdf");

  //

  TCanvas* c3 = new TCanvas("c3", "", 1800, 600);
  c3->Divide(3, 1);

  c3->cd(1);
  gPad->SetLogx();
  hempty->Draw();
  line->Draw();
  gShanshanD5TeV->Draw("c same");
  gIvanD0105TeV->Draw("f same");
  gIvanD0105TeV->Draw("l same");
  gMagdalenaD0105TeV->Draw("f same");
  gMagdalenaD0105TeV->Draw("l same");
  gCUJETD0105TeV->Draw("4 same");
  gPHSDWOShadowingD0105TeV->Draw("c same");
  gPHSDWShadowingD0105TeV->Draw("c same");
  texcms->Draw();
  texpre->Draw();
  texdata->Draw();
  texlumi->Draw();
  texcent010->Draw();
  TLegend* legRAAbeforebefore = new TLegend(0.45, 0.58, 0.92, 0.91);
  xjjroot::setleg(legRAAbeforebefore, 0.043);
  legRAAbeforebefore->AddEntry(gMagdalenaD0105TeV, "M. Djordjevic", "f");
  legRAAbeforebefore->AddEntry(gCUJETD0105TeV, "CUJET 3.0", "f");
  legRAAbeforebefore->AddEntry(gShanshanD0105TeV, "S. Cao et al.", "l");
  legRAAbeforebefore->AddEntry(gPHSDWShadowingD0105TeV, "PHSD w/ shadowing ", "l");
  legRAAbeforebefore->AddEntry(gPHSDWOShadowingD0105TeV, "PHSD w/o shadowing ", "l");
  legRAAbeforebefore->AddEntry(gIvanD0105TeV, "I.Vitev (g=1.8-2.0)", "f");
  legRAAbeforebefore->Draw();

  c3->cd(2);
  gPad->SetLogx();
  hempty->Draw();
  line->Draw();
  gShanshanD5TeV->Draw("c same");
  gCUJETD5TeV->Draw("4 same");
  gMagdalenaD5TeV->Draw("f same");
  gMagdalenaD5TeV->Draw("l same");
  texcms->Draw();
  texpre->Draw();
  texdata->Draw();
  texlumi->Draw();
  texcent->Draw();
  legRAAbefore->Draw();

  c3->cd(3);
  gPad->SetLogx();
  hempty->Draw();
  line->Draw();
  gMagdalenaB5TeV->Draw("c same");
  gTAMUB5TeV->Draw("4 same");
  gCUJETB5TeV->Draw("3 same");
  gADSCFT1B5TeV->Draw("4 same");
  gADSCFT2B5TeV->Draw("4 same");
  texcms->Draw();
  texpreafter->Draw();
  texdataafter->Draw();
  texlumiafter->Draw();
  texcent->Draw();
  legRAAafter->Draw();

  c3->SaveAs("plots/cTheoryRAA_BD_v1.pdf");
}

int main(int argc, char* argv[])
{
  if(argc==1)
    {
      plotTheoryRAA();
      return 0;
    }
  return 1;
}

