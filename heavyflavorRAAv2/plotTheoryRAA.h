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

void setplotD0theory(TGraphAsymmErrors* gCUJETD5TeV, TGraph* gShanshanD5TeV, TGraph* gMagdalenaD5TeV)
{
  gCUJETD5TeV->SetLineWidth(1);
  gCUJETD5TeV->SetLineColor(0);
  gCUJETD5TeV->SetFillColor(kAzure);
  gCUJETD5TeV->SetFillColorAlpha(kAzure, 0.5);
  gCUJETD5TeV->SetFillStyle(3344);

  gShanshanD5TeV->SetLineWidth(linewidth);
  gShanshanD5TeV->SetLineColor(kRed+1);

  gMagdalenaD5TeV->SetLineWidth(linewidth);
  gMagdalenaD5TeV->SetLineColor(kGreen+4);
  gMagdalenaD5TeV->SetFillColor(kGreen+4);
  gMagdalenaD5TeV->SetFillStyle(3004);
}

void setplotD0theory010(TGraphAsymmErrors* gCUJETD5TeV, TGraphErrors* gPHSDWOShadowing, TGraphErrors* gPHSDWShadowing,  TGraph *gMagdalenaD5TeV, TGraph *gShanshanD5TeV, TGraph *gIvanD5TeV)
{
  gCUJETD5TeV->SetLineWidth(1);
  gCUJETD5TeV->SetLineColor(0);
  gCUJETD5TeV->SetFillColor(kAzure);
  gCUJETD5TeV->SetFillColorAlpha(kAzure, 0.5);
  gCUJETD5TeV->SetFillStyle(3344);

  gPHSDWShadowing->SetLineColor(kCyan+2);
  gPHSDWShadowing->SetLineWidth(linewidth);

  gPHSDWOShadowing->SetLineColor(kCyan+2);
  gPHSDWOShadowing->SetLineWidth(linewidth);
  gPHSDWOShadowing->SetLineStyle(2);

  gMagdalenaD5TeV->SetLineWidth(linewidth);
  gMagdalenaD5TeV->SetLineColor(kGreen+4);
  gMagdalenaD5TeV->SetFillColor(kGreen+4);
  gMagdalenaD5TeV->SetFillStyle(3004);

  gShanshanD5TeV->SetLineWidth(linewidth);
  gShanshanD5TeV->SetLineColor(kRed+1);

  gIvanD5TeV->SetLineColor(kMagenta+2);
  gIvanD5TeV->SetFillColor(kMagenta+2);
  gIvanD5TeV->SetFillStyle(3011);
  gIvanD5TeV->SetLineWidth(linewidth);

}

void setplotBptheory(TGraph* gMagdalenaB5TeV, TGraphErrors* gTAMUB5TeV, TGraphAsymmErrors* gCUJETB5TeV, TGraphErrors* gADSCFT1B5TeV,  TGraphErrors* gADSCFT2B5TeV)
{
  gTAMUB5TeV->SetLineColor(kOrange+8);
  gTAMUB5TeV->SetFillColor(kOrange+8);
  gTAMUB5TeV->SetFillStyle(1001);

  gCUJETB5TeV->SetLineWidth(1);
  gCUJETB5TeV->SetLineColor(0);
  gCUJETB5TeV->SetFillColor(kAzure);
  gCUJETB5TeV->SetFillColorAlpha(kAzure, 0.5);
  gCUJETB5TeV->SetFillStyle(3344);

  gADSCFT1B5TeV->SetLineColor(0);
  gADSCFT1B5TeV->SetFillColor(kGreen-2);
  gADSCFT1B5TeV->SetFillColorAlpha(kGreen-2,0.5);
  gADSCFT1B5TeV->SetFillStyle(3325);

  gADSCFT2B5TeV->SetLineColor(0);
  gADSCFT2B5TeV->SetFillColor(kViolet-8);
  gADSCFT2B5TeV->SetFillColorAlpha(kViolet-8,0.5);
  gADSCFT2B5TeV->SetFillStyle(3352);

  gMagdalenaB5TeV->SetLineColor(kGreen+4);
  gMagdalenaB5TeV->SetLineWidth(linewidth);
  gMagdalenaB5TeV->SetLineStyle(1);

}
