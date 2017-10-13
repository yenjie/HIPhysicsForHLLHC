#include "xjjrootuti.h"
#include "plotV2.h"
#include "datapoints/V2_CMS_Charged_30_50.h"

Double_t errorD0lowpt = 0.30; // 30%
Double_t errorsystD0lowpt = 0.137405/0.722896; // lowest pt bin
Float_t trkerr = 1.00; //minimum tracking syst (per)

void plotV2(Float_t lumiMB_D0_before, Float_t lumiMB_Charged_before, Float_t lumiMB_after)
{

  std::cout<<std::endl;
  std::cout<<"  -------------------- Before --------------------"<<std::endl;
  std::cout<<std::setiosflags(std::ios::left)<<std::setw(37)<<"   lumi (D0 MB): "<<std::setw(7)<<lumiMB_D0_before<<" nb-1"<<std::endl;
  std::cout<<std::setiosflags(std::ios::left)<<std::setw(37)<<"   lumi (charged hadron MB): "<<std::setw(7)<<lumiMB_Charged_before<<" nb-1"<<std::endl;
  std::cout<<"  -------------------- after ---------------------"<<std::endl;
  std::cout<<std::setiosflags(std::ios::left)<<std::setw(37)<<"   lumi (MB): "<<std::setw(7)<<lumiMB_after<<" nb-1"<<std::endl;
  std::cout<<"  ------------------------------------------------"<<std::endl;
  std::cout<<std::endl;

  Float_t lumiweightMB_D0 = TMath::Sqrt(lumiMB_after/lumiMB_D0_before);
  Float_t lumiweightMB_Charged = TMath::Sqrt(lumiMB_after/lumiMB_Charged_before);

  // Dzero

  const int nxD0 = 10;
  Double_t xD0[nxD0+1] = {1.,2.,3.,4.,5.,6.,8.,10.,15.,20.,40.};
  TH1D* hV2_D0_before = new TH1D("hV2_D0_before","",nxD0,xD0);
  TH1D* hV2_D0_after = new TH1D("hV2_D0_after","",nxD0,xD0);
  Double_t axD0[nxD0],exD0[nxD0],ayD0before[nxD0],eyD0before[nxD0],eyNPD0before[nxD0],ayD0after[nxD0],eyD0after[nxD0],eyNPD0after[nxD0];
  std::ifstream getD0_CMS("datapoints/V2_CMS_D0_30_50.dat");
  for(int i=0;i<nxD0;i++)
    {
      Double_t centervalue,centervalueafter,staterror,systNPerror,systerror,tem;
      getD0_CMS>>tem>>tem>>centervalue>>centervalueafter>>staterror>>systNPerror>>systerror;
      hV2_D0_before->SetBinContent(i+1,centervalue);
      hV2_D0_before->SetBinError(i+1,staterror);
      hV2_D0_after->SetBinContent(i+1,centervalueafter);
      hV2_D0_after->SetBinError(i+1,staterror/lumiweightMB_D0);
      axD0[i] = (xD0[i+1]+xD0[i])/2.;
      exD0[i] = 0.5;
      ayD0before[i] = centervalue;
      eyD0before[i] = systerror;
      eyNPD0before[i] = systNPerror;
      ayD0after[i] = centervalueafter;
      eyD0after[i] = systerror/lumiweightMB_D0;
      eyNPD0after[i] = systNPerror/lumiweightMB_D0;
    }
  getD0_CMS.close();
  getD0_CMS.clear();
  TGraphErrors* gV2_D0_before = new TGraphErrors(nxD0,axD0,ayD0before,exD0,eyD0before);
  gV2_D0_before->SetName("gV2_D0_before");
  TGraphErrors* gV2_D0_after = new TGraphErrors(nxD0,axD0,ayD0after,exD0,eyD0after);
  gV2_D0_after->SetName("gV2_D0_after");
  TGraphErrors* gV2_D0_NP_before = new TGraphErrors(nxD0,axD0,ayD0before,exD0,eyNPD0before);
  gV2_D0_NP_before->SetName("gV2_D0_NP_before");
  TGraphErrors* gV2_D0_NP_after = new TGraphErrors(nxD0,axD0,ayD0after,exD0,eyNPD0after);
  gV2_D0_NP_after->SetName("gV2_D0_NP_after");

  // charged hadron

  const int nxCharged = 21;
  Double_t xCharged[nxCharged];
  Double_t axCharged[nxCharged],exCharged[nxCharged],exstatCharged[nxCharged],ayChargedbefore[nxCharged],eyChargedbefore[nxCharged],eystatChargedbefore[nxCharged],ayChargedafter[nxCharged],eyChargedafter[nxCharged],eystatChargedafter[nxCharged];
  for(int i=0;i<nxCharged;i++)
    {
      axCharged[i] = SteveSPv2_30_50x[i];
      exCharged[i] = 0.5;
      exstatCharged[i] = 0;
      Double_t systotal = TMath::Sqrt(SteveSPv2_30_50y[i]*v2SP_sysPt[i]*SteveSPv2_30_50y[i]*v2SP_sysPt[i]+tabSysv2_gap[i]*tabSysv2_gap[i]);
      ayChargedbefore[i] = SteveSPv2_30_50y[i];
      eyChargedbefore[i] = systotal;
      eystatChargedbefore[i] = SteveSPv2_30_50e[i];
      ayChargedafter[i] = SteveSPv2_30_50y[i];
      eyChargedafter[i] = systotal/lumiweightMB_Charged;
      eystatChargedafter[i] = SteveSPv2_30_50e[i]/lumiweightMB_Charged;
    }
  TGraphErrors* gV2_Charged_before = new TGraphErrors(nxCharged,axCharged,ayChargedbefore,exCharged,eyChargedbefore);
  gV2_Charged_before->SetName("gV2_Charged_before");
  TGraphErrors* gV2_Charged_after = new TGraphErrors(nxCharged,axCharged,ayChargedafter,exCharged,eyChargedafter);
  gV2_Charged_after->SetName("gV2_Charged_after");
  TGraphErrors* gV2_Charged_stat_before = new TGraphErrors(nxCharged,axCharged,ayChargedbefore,exstatCharged,eystatChargedbefore);
  gV2_Charged_stat_before->SetName("gV2_Charged_stat_before");
  TGraphErrors* gV2_Charged_stat_after = new TGraphErrors(nxCharged,axCharged,ayChargedafter,exstatCharged,eystatChargedafter);
  gV2_Charged_stat_after->SetName("gV2_Charged_stat_after");

  // Dsubs

  const int nxDs = 5;
  Double_t xDs[nxDs+1] = {2.,4.,6.,8.,12.,16.};
  TH1D* hV2_Ds_before = new TH1D("hV2_Ds_before","",nxDs,xDs);
  TH1D* hV2_Ds_after = new TH1D("hV2_Ds_after","",nxDs,xDs);
  Double_t axDs[nxDs],exDs[nxDs],ayDsbefore[nxDs],eyDsbefore[nxDs],eyNPDsbefore[nxDs],ayDsafter[nxDs],eyDsafter[nxDs],eyNPDsafter[nxDs];
  std::ifstream getDs_Theory("datapoints/V2_PHSD_Ds_30_50.dat");
  for(int i=0;i<nxDs;i++)
    {
      Double_t centervalue,tem;
      getDs_Theory>>tem>>centervalue;
      if(i<nxDs-1) hV2_Ds_before->SetBinContent(i+1,centervalue);
      else hV2_Ds_before->SetBinContent(i+1,-1);
      hV2_Ds_after->SetBinContent(i+1,centervalue);
      if(i<nxDs-1) ayDsbefore[i] = centervalue;
      else ayDsbefore[i] = -1;
      ayDsafter[i] = centervalue;
    }
  getDs_Theory.close();
  getDs_Theory.clear();
  std::ifstream getDs_Alice("datapoints/V2_Alice_Ds_30_50.dat");
  for(int i=0;i<nxDs;i++)
    {
      Double_t centervalue,staterror,systerror,systNPerror,tem;
      getDs_Alice>>tem>>centervalue>>tem>>staterror>>tem>>systerror>>tem>>systNPerror;
      hV2_Ds_before->SetBinError(i+1,(staterror-centervalue)/centervalue);
      hV2_Ds_after->SetBinError(i+1,(staterror-centervalue)/centervalue);
      axDs[i] = (xDs[i+1]+xDs[i])/2.;
      exDs[i] = 0.5;
      eyDsbefore[i] = (systerror - centervalue)/centervalue;
      eyDsafter[i] = (systerror - centervalue)/centervalue;
      eyNPDsbefore[i] = (systNPerror - centervalue)/centervalue;
      eyNPDsafter[i] = (systNPerror - centervalue)/centervalue;
    }
  getDs_Alice.close();
  getDs_Alice.clear();
  std::ifstream getDs_AliceD0("datapoints/V2_Alice_D0forDs_30_50.dat");
  for(int i=0;i<nxDs;i++)
    {
      Double_t centervalue,staterror,systerror,systNPerror,centervalue2,staterror2,systerror2,systNPerror2,tem;
      getDs_AliceD0>>tem>>centervalue>>tem>>staterror>>tem>>systerror>>tem>>systNPerror;
      staterror = staterror-centervalue;
      systerror = systerror-centervalue;
      systNPerror = systNPerror-centervalue;
      if(i<nxDs-1) 
        {
          getDs_AliceD0>>tem>>centervalue2>>tem>>staterror2>>tem>>systerror2>>tem>>systNPerror2;
          staterror2 = staterror2-centervalue2;
          systerror2 = systerror2-centervalue2;
          systNPerror2 = systNPerror2-centervalue2;
          centervalue = (centervalue+centervalue2)/2.;
          staterror = TMath::Sqrt(staterror*staterror+staterror2*staterror2)/2.;
          systerror = TMath::Sqrt(systerror*systerror+systerror2*systerror2)/2.;
          systNPerror = TMath::Sqrt(systNPerror*systNPerror+systNPerror2*systNPerror2)/2.;
        }
      staterror/=centervalue;
      systerror/=centervalue;
      systNPerror/=centervalue;

      hV2_Ds_before->SetBinError(i+1,hV2_Ds_before->GetBinError(i+1)/staterror);
      hV2_Ds_after->SetBinError(i+1,hV2_Ds_after->GetBinError(i+1)/staterror);
      eyDsbefore[i]/=systerror;
      eyDsafter[i]/=systerror;
      eyNPDsbefore[i]/=systNPerror;
      eyNPDsafter[i]/=systNPerror;
    }
  getDs_AliceD0.close();
  getDs_AliceD0.clear();
  std::ifstream getDs_CMS("datapoints/V2_CMS_D0forDs_30_50.dat");
  for(int i=0;i<nxDs;i++)
    {
      Double_t centervalue,staterror,systerror,systNPerror,tem;
      getDs_CMS>>tem>>tem>>centervalue>>staterror>>systNPerror>>systerror;
      hV2_Ds_before->SetBinError(i+1,ayDsbefore[i]*(staterror/centervalue)*hV2_Ds_before->GetBinError(i+1));
      hV2_Ds_after->SetBinError(i+1,ayDsafter[i]*(staterror/centervalue)*hV2_Ds_after->GetBinError(i+1)/lumiweightMB_D0);
      eyDsbefore[i] = ayDsbefore[i]*(systerror/centervalue)*eyDsbefore[i];
      eyDsafter[i] = ayDsafter[i]*(systerror/centervalue)*eyDsafter[i]/lumiweightMB_D0;
      eyNPDsbefore[i] = ayDsbefore[i]*(systNPerror/centervalue)*eyNPDsbefore[i];
      eyNPDsafter[i] = ayDsafter[i]*(systNPerror/centervalue)*eyNPDsafter[i]/lumiweightMB_D0;
    }
  getDs_CMS.close();
  getDs_CMS.clear();
  TGraphErrors* gV2_Ds_before = new TGraphErrors(nxDs,axDs,ayDsbefore,exDs,eyDsbefore);
  gV2_Ds_before->SetName("gV2_Ds_before");
  TGraphErrors* gV2_Ds_after = new TGraphErrors(nxDs,axDs,ayDsafter,exDs,eyDsafter);
  gV2_Ds_after->SetName("gV2_Ds_after");
  TGraphErrors* gV2_Ds_NP_before = new TGraphErrors(nxDs,axDs,ayDsbefore,exDs,eyNPDsbefore);
  gV2_Ds_NP_before->SetName("gV2_Ds_NP_before");
  TGraphErrors* gV2_Ds_NP_after = new TGraphErrors(nxDs,axDs,ayDsafter,exDs,eyNPDsafter);
  gV2_Ds_NP_after->SetName("gV2_Ds_NP_after");

  // All graphs ready

  SetPlotStyle(hV2_D0_before, gV2_D0_before, gV2_D0_NP_before, gV2_Charged_stat_before, gV2_Charged_before, hV2_Ds_before, gV2_Ds_before, gV2_Ds_NP_before);
  SetPlotStyle(hV2_D0_after, gV2_D0_after, gV2_D0_NP_after, gV2_Charged_stat_after, gV2_Charged_after, hV2_Ds_after, gV2_Ds_after, gV2_Ds_NP_after);

  //

  Float_t pti = 0.;
  Float_t pte = 41;
  
  TH2F* hempty = new TH2F("hempty", ";p_{T} (GeV/c);v_{2}", 50, pti, pte, 10., -0.1, 0.50);
  xjjroot::sethempty(hempty, -0.1, -0.2, 0.05, 0.04);
  TLine* line = new TLine(pti, 0, pte, 0);
  xjjroot::setline(line, kBlack, 2, 2);
  TLatex* texcms = new TLatex(0.16, 0.90, "CMS");
  xjjroot::settex(texcms, 0.06, 13, 62);
  TLatex* texpre = new TLatex(0.15, 0.84, "Performance");
  xjjroot::settex(texpre, 0.05, 13, 52);
  TLatex* texpreafter = new TLatex(0.15, 0.84, "Projection");
  xjjroot::settex(texpreafter, 0.05, 13, 52);
  TLatex* texdata = new TLatex(0.15, 0.78, "2015 Data");
  xjjroot::settex(texdata, 0.05, 13);
  TLatex* texlumi = new TLatex(0.13, 0.936, "(5.02 TeV PbPb)");
  xjjroot::settex(texlumi, 0.038);
  TLatex* texlumiafter = new TLatex(0.13, 0.936, "(5.02 TeV PbPb)");
  xjjroot::settex(texlumiafter, 0.038);
  TLatex* texcent = new TLatex(0.70, 0.18, Form("Cent. 30-50%s", "%"));
  xjjroot::settex(texcent, 0.043);

  //

  gStyle->SetOptTitle(0);
  gStyle->SetOptStat(0);
  gStyle->SetEndErrorSize(0);
  gStyle->SetMarkerStyle(20);
  gStyle->SetPadRightMargin(0.03);
  gStyle->SetPadLeftMargin(0.12);
  gStyle->SetPadTopMargin(0.075);
  gStyle->SetPadBottomMargin(0.12);

  //

  TCanvas* c2 = new TCanvas("c2", "", 1200, 600);
  c2->Divide(2, 1);

  c2->cd(1);
  hempty->Draw();
  line->Draw();
  gV2_Charged_before->Draw("2same");
  gV2_Charged_stat_before->Draw("pesame");
  gV2_D0_NP_before->Draw("2same");
  gV2_D0_before->Draw("5same");
  hV2_D0_before->Draw("plsame");
  // gV2_Ds_NP_before->Draw("2same");
  // gV2_Ds_before->Draw("5same");
  // hV2_Ds_before->Draw("plsame");
  texcms->Draw();
  texpre->Draw();
  texdata->Draw();
  texlumi->Draw();
  texcent->Draw();
  TLegend* legV2before = new TLegend(0.47, 0.67, 0.92, 0.91);
  xjjroot::setleg(legV2before, 0.04);
  legV2before->AddEntry((TObject*)0, "0.02 nb^{-1}", NULL);
  legV2before->AddEntry(gV2_Charged_before, "Charged hadrons", "pf");
  legV2before->AddEntry(gV2_D0_NP_before, "D^{0}", "pf");
  // legV2before->AddEntry(gV2_Ds_NP_before, "D_{s}", "pf");
  legV2before->Draw();

  c2->cd(2);
  hempty->Draw();
  line->Draw();
  gV2_Charged_after->Draw("2same");
  gV2_Charged_stat_after->Draw("pesame");
  gV2_D0_NP_after->Draw("2same");
  gV2_D0_after->Draw("5same");
  hV2_D0_after->Draw("plsame");
  // gV2_Ds_NP_after->Draw("2same");
  // gV2_Ds_after->Draw("5same");
  // hV2_Ds_after->Draw("plsame");
  texcms->Draw();
  texpreafter->Draw();
  texlumiafter->Draw();
  texcent->Draw();
  TLegend* legV2after = new TLegend(0.47, 0.67, 0.92, 0.91);
  xjjroot::setleg(legV2after, 0.04);
  legV2after->AddEntry((TObject*)0, Form("%.1f nb^{-1}", lumiMB_after), NULL);
  legV2after->AddEntry(gV2_Charged_after, "Charged hadrons", "pf");
  legV2after->AddEntry(gV2_D0_NP_after, "D^{0}", "pf");
  // legV2after->AddEntry(gV2_Ds_NP_after, "D_{s}", "pf");
  legV2after->Draw();

  c2->SaveAs(Form("plots/cV2_lumiMB_%.0f.pdf", lumiMB_after));

}

int main(int argc, char* argv[])
{
  if(argc==4)
    {
      plotV2(atof(argv[1]), atof(argv[2]), atof(argv[3]));
      return 0;
    }
  return 1;
}
