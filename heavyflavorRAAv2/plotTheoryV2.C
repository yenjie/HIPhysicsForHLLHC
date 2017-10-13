#include "xjjrootuti.h"
#include "plotTheoryV2.h"

void plotTheoryV2()
{

  std::cout<<std::endl;
  std::cout<<"  ------------------ Theory V2 -------------------"<<std::endl;
  std::cout<<std::endl;

  TGraph** gv2Dmeson5TeV_PHSD = new TGraph*[3];
  TFile* inputPHSD = new TFile("theorypoints/TheoryCalculation/PHSD/PHSD_v2v3_interpolation_from0p5.root");
  gv2Dmeson5TeV_PHSD[0] = (TGraph*)inputPHSD->Get("gv2Dmeson5TeV_PHSD_cent0to10");
  gv2Dmeson5TeV_PHSD[1] = (TGraph*)inputPHSD->Get("gv2Dmeson5TeV_PHSD_cent10to30");
  gv2Dmeson5TeV_PHSD[2] = (TGraph*)inputPHSD->Get("gv2Dmeson5TeV_PHSD_cent30to50");

  TGraph** gv2Dmeson5TeV_SUBATECH = new TGraph*[3];
  gv2Dmeson5TeV_SUBATECH[0] = new TGraph("theorypoints/TheoryCalculation/SUBATECH_updated/5TeV0-10v2D_CMS.dat");
  gv2Dmeson5TeV_SUBATECH[1] = new TGraph("theorypoints/TheoryCalculation/SUBATECH_updated/5TeV10-30v2D_CMS.dat");
  gv2Dmeson5TeV_SUBATECH[2] = new TGraph("theorypoints/TheoryCalculation/SUBATECH_updated/5TeV30-50v2D_CMS.dat");
  gv2Dmeson5TeV_SUBATECH[0]->SetName("gv2Dmeson5TeV_SUBATECH_cent0to10");
  gv2Dmeson5TeV_SUBATECH[1]->SetName("gv2Dmeson5TeV_SUBATECH_cent10to30");
  gv2Dmeson5TeV_SUBATECH[2]->SetName("gv2Dmeson5TeV_SUBATECH_cent30to50");

  TGraph** gv2Dmeson5TeV_LBT = new TGraph*[3];
  gv2Dmeson5TeV_LBT[0] = new TGraph("theorypoints/TheoryCalculation/LBT/v2_cen-00-10.dat");
  gv2Dmeson5TeV_LBT[1] = new TGraph("theorypoints/TheoryCalculation/LBT/v2_cen-10-30.dat");
  gv2Dmeson5TeV_LBT[2] = new TGraph("theorypoints/TheoryCalculation/LBT/v2_cen-30-50.dat");
  gv2Dmeson5TeV_LBT[0]->SetName("gv2Dmeson5TeV_LBT_cent0to10");
  gv2Dmeson5TeV_LBT[1]->SetName("gv2Dmeson5TeV_LBT_cent10to30");
  gv2Dmeson5TeV_LBT[2]->SetName("gv2Dmeson5TeV_LBT_cent30to50");

  TGraphAsymmErrors** gv2Dmeson5TeV_TAMU = new TGraphAsymmErrors*[3];
  TFile* inputTAMU = new TFile("theorypoints/TheoryCalculation/TAMU/PredictionsTAMU_Dv2_pt.root");
  gv2Dmeson5TeV_TAMU[0] = (TGraphAsymmErrors*)inputTAMU->Get("gv2Dmeson5TeV_TAMU_cent0to10");
  gv2Dmeson5TeV_TAMU[1] = (TGraphAsymmErrors*)inputTAMU->Get("gv2Dmeson5TeV_TAMU_cent10to30");
  gv2Dmeson5TeV_TAMU[2] = (TGraphAsymmErrors*)inputTAMU->Get("gv2Dmeson5TeV_TAMU_cent30to50");

  TGraphErrors** gv2Dmeson5TeV_CUJET3 = new TGraphErrors*[3];
  TFile * inputCUJET3 = new TFile("theorypoints/TheoryCalculation/CUJET3_updated/CUJET_v2.root");
  gv2Dmeson5TeV_CUJET3[0] = (TGraphErrors*)inputCUJET3->Get("gv2Dmeson5TeV_CUJET_cent0to10");
  gv2Dmeson5TeV_CUJET3[1] = (TGraphErrors*)inputCUJET3->Get("gv2Dmeson5TeV_CUJET_cent10to30");
  gv2Dmeson5TeV_CUJET3[2] = (TGraphErrors*)inputCUJET3->Get("gv2Dmeson5TeV_CUJET_cent30to50");

  //

  for(int i=0;i<3;i++) setplotD0theory(gv2Dmeson5TeV_PHSD[i], gv2Dmeson5TeV_SUBATECH[i], gv2Dmeson5TeV_LBT[i], gv2Dmeson5TeV_TAMU[i], gv2Dmeson5TeV_CUJET3[i]);

  //

  Float_t pti = 0.;
  Float_t pte = 40;
  
  TH2F* hempty = new TH2F("hempty", ";p_{T} (GeV/c);v_{2}", 50, pti, pte, 10., -0.1, 0.35);
  xjjroot::sethempty(hempty, 0, 0, 0.05, 0.04);
  TLine* line = new TLine(pti, 0, pte, 0);
  xjjroot::setline(line, kBlack, 2, 2);
  TLatex* texcms = new TLatex(0.16, 0.90, "CMS");
  xjjroot::settex(texcms, 0.06, 13, 62);
  TLatex* texpre = new TLatex(0.15, 0.84, "Theory");
  xjjroot::settex(texpre, 0.05, 13, 52);
  TLatex* texdata = new TLatex(0.16, 0.78, "#bar{D^{0}} + D^{0}");
  xjjroot::settex(texdata, 0.05, 13);
  TLatex* texlumi = new TLatex(0.13, 0.936, "(5.02 TeV PbPb)");
  xjjroot::settex(texlumi, 0.038);
  Float_t acentrality[4] = {0, 10, 30, 50};
  TLatex** atexcent = new TLatex*[3];
  for(int i=0;i<3;i++)
    {
      atexcent[i] = new TLatex(0.70, 0.18, Form("Cent. %.0f-%.0f%s", acentrality[i], acentrality[i+1], "%"));
      xjjroot::settex(atexcent[i], 0.043);
    }

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

  TCanvas* c3 = new TCanvas("c3", "", 1800, 600);
  c3->Divide(3, 1);

  for(int i=0;i<3;i++)
    {
      c3->cd(i+1);
      hempty->Draw();
      line->Draw();
      gv2Dmeson5TeV_TAMU[i]->Draw("4 same");
      gv2Dmeson5TeV_CUJET3[i]->Draw("4 same");
      gv2Dmeson5TeV_LBT[i]->Draw("c same");
      gv2Dmeson5TeV_PHSD[i]->Draw("c same");
      gv2Dmeson5TeV_SUBATECH[i]->Draw("c same");
      texcms->Draw();
      texpre->Draw();
      texdata->Draw();
      texlumi->Draw();
      atexcent[i]->Draw();
      TLegend* legV2 = new TLegend(0.52, 0.62, 0.92, 0.91);
      xjjroot::setleg(legV2, 0.043);
      legV2->AddEntry(gv2Dmeson5TeV_CUJET3[i], "CUJET 3.0", "f");
      legV2->AddEntry(gv2Dmeson5TeV_LBT[i], "LBT", "l");
      legV2->AddEntry(gv2Dmeson5TeV_PHSD[i], "PHSD", "l");
      legV2->AddEntry(gv2Dmeson5TeV_TAMU[i], "TAMU", "f");
      legV2->AddEntry(gv2Dmeson5TeV_SUBATECH[i], "SUBATECH", "l");
      legV2->Draw();
    }

  c3->SaveAs("plots/cTheoryV2_D_v1.pdf");

  //

}

int main(int argc, char* argv[])
{
  if(argc==1)
    {
      plotTheoryV2();
      return 0;
    }
  return 1;
}
