#include <iostream>
#include <iomanip>
#include <fstream>
#include <TH1D.h>
#include <TH2F.h>
#include <TGraphErrors.h>
#include <TCanvas.h>
#include <TPad.h>
#include <TLatex.h>
#include <TLegend.h>
#include <TLine.h>
#include <TStyle.h>
#include <TMath.h>
#include <TColor.h>

void SetPlotStyle(TH1D* hD0, TGraphErrors* gD0, TGraphErrors* gNPD0, TGraphErrors* gstatCharged, TGraphErrors* gCharged, TH1D* hDs, TGraphErrors* gDs, TGraphErrors* gNPDs)
{
  hD0->SetLineWidth(3);
  hD0->SetLineColor(kBlack);
  hD0->SetMarkerStyle(21);
  hD0->SetMarkerSize(1.2);
  hD0->SetMarkerColor(kGreen+3);
  gD0->SetFillStyle(0);
  gD0->SetFillColor(0);
  gD0->SetLineStyle(1);
  gD0->SetLineColor(kBlack);
  gNPD0->SetMarkerStyle(21);
  gNPD0->SetMarkerSize(1.2);
  gNPD0->SetMarkerColor(kGreen+3);
  gNPD0->SetFillColor(kGreen-9);
  gNPD0->SetFillColorAlpha(kGreen-9, 0.5);
  gNPD0->SetLineColor(kBlack);

  gCharged->SetMarkerStyle(20);
  gCharged->SetMarkerSize(1.3);
  gCharged->SetMarkerColor(kBlack);
  gCharged->SetFillColor(TColor::GetColor("#ffcc00"));
  gCharged->SetLineWidth(0);
  gCharged->SetLineColor(0);
  gstatCharged->SetLineWidth(2);
  gstatCharged->SetLineColor(kBlack);
  gstatCharged->SetMarkerStyle(20);
  gstatCharged->SetMarkerSize(1.3);
  gstatCharged->SetMarkerColor(kBlack);

  hDs->SetLineWidth(3);
  hDs->SetMarkerStyle(34);
  hDs->SetMarkerSize(1.3);
  hDs->SetMarkerColor(kRed+1);
  gDs->SetFillStyle(0);
  gDs->SetFillColor(0);
  gDs->SetLineStyle(1);
  gDs->SetLineColor(kRed+1);
  gNPDs->SetMarkerStyle(34);
  gNPDs->SetMarkerSize(1.3);
  gNPDs->SetMarkerColor(kRed+1);
  gNPDs->SetFillColor(kRed-7);
  gNPDs->SetFillColorAlpha(kRed-7, 0.5);
  gNPDs->SetLineColor(kRed+1);

}
