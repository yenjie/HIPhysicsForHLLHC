#include <iostream>
#include <iomanip>
#include <fstream>
#include <TFile.h>
#include <TH2F.h>
#include <TGraph.h>
#include <TGraphErrors.h>
#include <TGraphAsymmErrors.h>
#include <TCanvas.h>
#include <TPad.h>
#include <TLatex.h>
#include <TLegend.h>
#include <TLine.h>
#include <TStyle.h>

Float_t linewidth=2;

void setplotD0theory(TGraph* gv2Dmeson5TeV_PHSD, TGraph* gv2Dmeson5TeV_SUBATECH, TGraph* gv2Dmeson5TeV_LBT, TGraphAsymmErrors* gv2Dmeson5TeV_TAMU, TGraphErrors* gv2Dmeson5TeV_CUJET3)
{
  gv2Dmeson5TeV_CUJET3->SetLineWidth(1);
  gv2Dmeson5TeV_CUJET3->SetLineColor(0);
  gv2Dmeson5TeV_CUJET3->SetFillColor(kAzure);
  gv2Dmeson5TeV_CUJET3->SetFillColorAlpha(kAzure, 0.5);
  gv2Dmeson5TeV_CUJET3->SetFillStyle(3344);

  gv2Dmeson5TeV_LBT->SetLineWidth(linewidth);
  gv2Dmeson5TeV_LBT->SetLineColor(kRed+1);

  gv2Dmeson5TeV_PHSD->SetLineColor(kCyan+2);
  gv2Dmeson5TeV_PHSD->SetLineWidth(linewidth);

  gv2Dmeson5TeV_TAMU->SetLineColor(kOrange+8);
  gv2Dmeson5TeV_TAMU->SetFillColor(kOrange+8);
  gv2Dmeson5TeV_TAMU->SetFillStyle(1001);

  gv2Dmeson5TeV_SUBATECH->SetLineStyle(8);
  gv2Dmeson5TeV_SUBATECH->SetLineColor(kMagenta-2);
  gv2Dmeson5TeV_SUBATECH->SetLineWidth(linewidth);

}
