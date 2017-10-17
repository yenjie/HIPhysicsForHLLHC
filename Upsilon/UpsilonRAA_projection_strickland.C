#include "SONGKYO.h"
#include "tdrstyle.C"
#include "CMS_lumi_raaCent_projection.C"
#include "cutsAndBin.h"
#include "commonUtility.h"

void UpsilonRAA_projection_strickland(bool isArrow =false)
{
  setTDRStyle();
  writeExtraText = true;       // if extra text
  int iPeriod = 10001; // 1: pp, 2: pPb, 3: PbPb, 100: RAA vs cent, 101: RAA vs pt or rap
  int iPos = 33;
  
  const int nState = 3; // Y(1S), Y(2S), and Y(3S)
  double xmax = 420.0;
  double xmin_int = 0.6;
  double xmax_int = 1.8;
  double boxw = 6.5; // for syst. box (vs cent)
  double boxw_int = 0.09;
//  double relsys = 0.1;

  int npoint[nState] = {9,9,2};
  Int_t npoint_int = 1;
  Double_t nPoint_int = 1;

  double curve_data_point1S[9] = {0.9444855307976373, 0.7756919370125858, 0.6631531040232671, 0.5497777940835198,0.4599626399047238,0.38473797701815454,0.322228431941944,0.28126371744798295,0.2556237682323664};
  double curve_data_point2S[9] = {0.9249023680162078, 0.5509748031244619, 0.38098856913287965, 0.26007934396316174, 0.18228662784710636, 0.1311491630257772, 0.09583905225574078, 0.07510321635373833, 0.062122384188450626};
  double curve_data_point3S[2] = {0.19252511713061085, 0.03840673937957297};

  double curve_data_int1S = 0.3215572599929854;
  double curve_data_int2S = 0.095122984743628;
  double curve_data_int3S = 0.03917023347065865;


  double RAA_point_1S_int = 0.363634;
  double RAA_point_2S_int = 0.104263;
  double RAA_point_3S_int =0.03917023347065865;
  
  double RAA_stat_1S_int = 0.0138524;
  double RAA_stat_2S_int = 0.021486;
  double RAA_stat_3S_int = RAA_point_3S_int*4.565;

  double RAA_sys_1S_int = 0.0476457;
  double RAA_sys_2S_int = 0.0143265;
  double RAA_sys_3S_int = RAA_stat_2S_int/RAA_sys_2S_int*RAA_stat_3S_int; 

  double RAA_point_1S[9] = {0.799781, 0.932551, 0.616232, 0.523214, 0.487305, 0.406427, 0.32951, 0.32312, 0.323092}; 
  double RAA_point_2S[9] = {0.523316, 0.526785, 0.199678, 0.218377, 0.178999, 0.148637, 0.093804, 0.117635, 0.0257067}; 
  double RAA_point_3S[2] = {0.19252511713061085, 0.03840673937957297}; 

  double RAA_stat_1S[9] = {0.132, 0.0902256, 0.0538254, 0.0365479, 0.0280983, 0.0220778, 0.0179416, 0.0219812, 0.0195714};
  double RAA_stat_2S[9] = {0.319203, 0.17292, 0.107219, 0.0783393, 0.0604491, 0.083968, 0.0430219, 0.0523789, 0.0458323};
  double RAA_stat_3S[2] = {0.19252511713061085*0.7256, 0.03840673937957297*20.3017};

  double RAA_sys_1S[9] = {0.159183, 0.125144, 0.0700169, 0.050805, 0.0435077, 0.0314787, 0.0264651, 0.0247458, 0.0264865};
  double RAA_sys_2S[9] = {0.157761, 0.127932, 0.0366789, 0.0244695, 0.019422, 0.0132188, 0.00768777, 0.00917921, 0.0107326};
  double RAA_sys_3S[2];

  double max_sys_stat_2S = 0.127932/0.17292;

  for(int ierr=0;ierr<npoint[2];ierr++)
  {
    RAA_sys_3S[ierr] =  max_sys_stat_2S*RAA_stat_3S[ierr];
    cout << "RAA sys 3S : " << RAA_sys_3S[ierr] << endl;
  }
  

  ////////////////////////////////////////////////////////////////
  //// read input file : value & stat.
  TFile* fIn[nState];
	TGraphErrors* gRAA[nState]; // vs centrality
  TGraphAsymmErrors* gRAA_sys[nState];
	TGraphErrors* gRAA_int[nState]; // centrality-integrated
  TGraphAsymmErrors* gRAA_int_sys[nState];

  for (int is=0; is<nState; is++)
  {
    if(is==0) {
      gRAA[is]=new TGraphErrors(npoint[is], nPart1s, RAA_point_1S, 0, RAA_stat_1S);
      gRAA_int[is]=new TGraphErrors(npoint_int, &nPoint_int, &RAA_point_1S_int, 0, &RAA_stat_1S_int);
      gRAA_sys[is] = new TGraphAsymmErrors(npoint[is], nPart1s, RAA_point_1S, 0, 0, RAA_sys_1S, RAA_sys_1S);
      gRAA_int_sys[is] = new TGraphAsymmErrors(npoint_int, &nPoint_int, &RAA_point_1S_int, 0, 0, &RAA_sys_1S_int, &RAA_sys_1S_int);
    }
    else if(is==1) {
      gRAA[is]=new TGraphErrors(npoint[is], nPart2s, RAA_point_2S, 0, RAA_stat_2S); 
      gRAA_int[is]=new TGraphErrors(npoint_int, &nPoint_int, &RAA_point_2S_int, 0, &RAA_stat_2S_int); 
      gRAA_sys[is] = new TGraphAsymmErrors(npoint[is], nPart2s, RAA_point_2S, 0, 0, RAA_sys_2S, RAA_sys_2S);
      gRAA_int_sys[is] = new TGraphAsymmErrors(npoint_int, &nPoint_int, &RAA_point_2S_int, 0, 0, &RAA_sys_2S_int, &RAA_sys_2S_int);
    }
    else if(is==2) {
      gRAA[is]=new TGraphErrors(npoint[is], nPart3s, RAA_point_3S, 0, RAA_stat_3S); 
      gRAA_int[is]=new TGraphErrors(npoint_int, &nPoint_int, &RAA_point_3S_int, 0, &RAA_stat_3S_int);
      gRAA_sys[is] = new TGraphAsymmErrors(npoint[is], nPart3s, RAA_point_3S, 0, 0, RAA_sys_3S, RAA_sys_3S);
      gRAA_int_sys[is] = new TGraphAsymmErrors(npoint_int, &nPoint_int, &RAA_point_3S_int, 0, 0, &RAA_sys_3S_int, &RAA_sys_3S_int);
    }
  }
  //// set bin width and calculate systematic uncertainties
  double pxtmp, pytmp, extmp, eytmp;
  double relsys_Lo, relsys_Hi;
  double xshift = 0.2;
  //// --- vs centrality
  cout << " " << endl;
  cout << "Centrality : " << endl;
  for (int is=0; is<nState; is++){
    cout << is+1 <<"th state***************" << endl;
    if (npoint[is] != gRAA[is]->GetN()) {cout << "Error!! data file and syst. file have different binnig!" << endl; return; }
    for (int ipt=0; ipt< npoint[is] ; ipt++) { //bin by bin
      pxtmp=0; pytmp=0; extmp=0; eytmp=0; relsys_Lo =0; relsys_Hi=0;
      gRAA[is]->GetPoint(ipt, pxtmp, pytmp);
      extmp=gRAA[is]->GetErrorX(ipt);
      eytmp=gRAA[is]->GetErrorY(ipt);
      relsys_Lo = gRAA_sys[is]->GetErrorYlow(ipt);
      relsys_Hi = gRAA_sys[is]->GetErrorYhigh(ipt);
      //// 1) remove ex from gRAA
      /// 2) set ey for gRAA_sys 
      if(is==0) 
      { 
        gRAA_sys[is]->SetPoint(ipt, pxtmp,curve_data_point1S[ipt]); 
        gRAA[is]->SetPoint(ipt, pxtmp,curve_data_point1S[ipt]);
        gRAA[is]->SetPointError(ipt, 0, (curve_data_point1S[ipt]*eytmp/pytmp)/TMath::Sqrt(27));
        gRAA_sys[is]->SetPointError(ipt, boxw, boxw, curve_data_point1S[ipt]*relsys_Lo/pytmp/3.,curve_data_point1S[ipt]*relsys_Hi/pytmp/3.);
      }
      else if(is==1) 
      { 
        gRAA_sys[is]->SetPoint(ipt, pxtmp,curve_data_point2S[ipt]); 
        gRAA[is]->SetPoint(ipt, pxtmp,curve_data_point2S[ipt]);
        gRAA[is]->SetPointError(ipt, 0, (curve_data_point2S[ipt]*eytmp/pytmp)/TMath::Sqrt(27));
        gRAA_sys[is]->SetPointError(ipt, boxw, boxw, curve_data_point2S[ipt]*relsys_Lo/pytmp/3.,curve_data_point2S[ipt]*relsys_Hi/pytmp/3.);
      }
      else if(is==2) 
      { 
        gRAA_sys[is]->SetPoint(ipt, pxtmp,curve_data_point3S[ipt]); 
        gRAA[is]->SetPoint(ipt, pxtmp,curve_data_point3S[ipt]);
        gRAA[is]->SetPointError(ipt, 0, (curve_data_point3S[ipt]*eytmp/pytmp)/TMath::Sqrt(27));
        gRAA_sys[is]->SetPointError(ipt, boxw, boxw, curve_data_point3S[ipt]*relsys_Lo/pytmp/3.,curve_data_point3S[ipt]*relsys_Hi/pytmp/3.);
      }
      gRAA[is]->GetPoint(ipt, pxtmp, pytmp);
      eytmp=gRAA[is]->GetErrorY(ipt);
      relsys_Lo = gRAA_sys[is]->GetErrorYlow(ipt);
      relsys_Hi = gRAA_sys[is]->GetErrorYhigh(ipt);
      cout << ipt <<"th bin RAA value = " << pytmp << endl;
      cout << ipt <<"th bin stat. = " << eytmp << endl;
      //cout << ipt <<"th bin rel. syst. = " << relsys << endl;
      cout << ipt <<"th bin Hi syst. = " << pytmp*relsys_Hi << endl; 
      cout << ipt <<"th bin Lo syst. = " << pytmp*relsys_Lo << endl; 
    }
  }

  //// --- centrality-integrated
  cout << " " << endl;
  cout << " INTEGRATED" << endl;
  for (int is=0; is<nState; is++){
    cout << is+1 <<"th state***************" << endl;
    if (npoint_int != gRAA_int[is]->GetN()) {cout << "Error!! data file and syst. file have different binnig!" << endl; return; }    
    for (int ipt=0; ipt< npoint_int ; ipt++) {
      pxtmp=0; pytmp=0; extmp=0; eytmp=0;
      gRAA_int[is]->GetPoint(ipt, pxtmp, pytmp);
      extmp=gRAA_int[is]->GetErrorX(ipt);
      eytmp=gRAA_int[is]->GetErrorY(ipt);
      relsys_Hi = gRAA_int_sys[is]->GetErrorYhigh(ipt);
      relsys_Hi = TMath::Sqrt(relsys_Hi*relsys_Hi+lumi_unc_pp*lumi_unc_pp + nMB_unc*nMB_unc);
      relsys_Lo = gRAA_int_sys[is]->GetErrorYlow(ipt);
      relsys_Lo = TMath::Sqrt(relsys_Lo*relsys_Lo+lumi_unc_pp*lumi_unc_pp + nMB_unc*nMB_unc);
      //// 1) remove ex from gRAA
      if(is==0) 
      { 
        gRAA_int[is]->SetPoint(ipt, pxtmp+xshift*is, curve_data_int1S);  
        gRAA_int_sys[is]->SetPoint(ipt, pxtmp+xshift*is, curve_data_int1S);
        gRAA_int[is]->SetPointError(ipt, 0, (curve_data_int1S*eytmp/pytmp)/TMath::Sqrt(27));
        gRAA_int_sys[is]->SetPointError(ipt, boxw_int,boxw_int, curve_data_int1S*relsys_Lo/3.,curve_data_int1S*relsys_Hi/3.);
      }
      else if(is==1) 
      { 
        gRAA_int[is]->SetPoint(ipt, pxtmp+xshift*is, curve_data_int2S);  
        gRAA_int_sys[is]->SetPoint(ipt, pxtmp+xshift*is, curve_data_int2S);
        gRAA_int[is]->SetPointError(ipt, 0, (curve_data_int2S*eytmp/pytmp)/TMath::Sqrt(27));
        gRAA_int_sys[is]->SetPointError(ipt, boxw_int,boxw_int, curve_data_int2S*relsys_Lo/3.,curve_data_int2S*relsys_Hi/3.);
      }
      else if(is==2) 
      { 
        gRAA_int[is]->SetPoint(ipt, pxtmp+xshift*is, curve_data_int3S);  
        gRAA_int_sys[is]->SetPoint(ipt, pxtmp+xshift*is, curve_data_int3S);
        gRAA_int[is]->SetPointError(ipt, 0, (curve_data_int3S*eytmp/pytmp)/TMath::Sqrt(27));
        gRAA_int_sys[is]->SetPointError(ipt, boxw_int,boxw_int, curve_data_int3S*relsys_Lo/3.,curve_data_int3S*relsys_Hi/3.);
      }
      cout << ipt <<"th bin RAA value = " << pytmp << endl;
      cout << ipt <<"th bin stat. = " << eytmp << endl;
      //cout << ipt <<"th bin rel. syst. = " << relsys << endl;
      cout << ipt <<"th bin Hi syst. = " << pytmp*relsys_Hi << endl; 
      cout << ipt <<"th bin Lo syst. = " << pytmp*relsys_Lo << endl; 
    }
  }

  ////////////////////////////////////////////////////////////////
  //// 3S upper limit (arrow)
  int ulstate = 2; //3S
  static const int n3s = 2;
  double lower68[n3s] = {lower68_c1,lower68_c2};
  double upper68[n3s] = {upper68_c1,upper68_c2};
  double lower95[n3s] = {lower95_c1,lower95_c2};
  double upper95[n3s] = {upper95_c1,upper95_c2};
  static const int n3s_int = 1;
  double lower68_int[n3s_int] = {lower68_cint};
  double upper68_int[n3s_int] = {upper68_cint};
  double lower95_int[n3s_int] = {lower95_cint};
  double upper95_int[n3s_int] = {upper95_cint};


  //// --- vs centrality
  TBox *box68per[n3s];
  TArrow *arr95per[n3s];
  for (int ipt=0; ipt< n3s ; ipt++) { //bin by bin
    pxtmp=0; pytmp=0; extmp=0; eytmp=0; 
    //lower68=0; upper68=0; lower95=0; upper95=0; 
    gRAA[ulstate]->GetPoint(ipt, pxtmp, pytmp);
    box68per[ipt] = new TBox(pxtmp-boxw,lower68[ipt],pxtmp+boxw,upper68[ipt]);
    arr95per[ipt] = new TArrow(pxtmp,lower95[ipt],pxtmp,upper95[ipt],0.027,"<-|"); //95%    box68per[ipt]->SetLineColor(kGreen+2);
    box68per[ipt]->SetFillColorAlpha(kGreen-10,0.5);
    box68per[ipt]->SetLineWidth(1);
    arr95per[ipt]->SetLineColor(kGreen+2);
    arr95per[ipt]->SetLineWidth(2);
  }
  //// --- centrality-integrated
  TBox *box68per_int[n3s_int];
  TArrow *arr95per_int[n3s_int];
  for (int ipt=0; ipt< n3s_int ; ipt++) { //bin by bin
    pxtmp=0; pytmp=0; extmp=0; eytmp=0; 
    gRAA_int[ulstate]->GetPoint(ipt, pxtmp, pytmp);
    box68per_int[ipt] = new TBox(pxtmp-boxw_int,lower68_int[ipt],pxtmp+boxw_int,upper68_int[ipt]);
    arr95per_int[ipt] = new TArrow(pxtmp,lower95_int[ipt],pxtmp,upper95_int[ipt],0.02,"<-|"); //95%
    box68per_int[ipt]->SetLineColor(kGreen+2);
    box68per_int[ipt]->SetFillColorAlpha(kGreen-10,0.5);
    box68per_int[ipt]->SetLineWidth(1);
    arr95per_int[ipt]->SetLineColor(kGreen+2);
    arr95per_int[ipt]->SetLineWidth(2);
  }
  
  ////////////////////////////////////////////////////////////////
  
  //// graph style 
  for (int is=0; is<nState; is++){
    SetGraphStyle(gRAA[is], is, is); 
    SetGraphStyleSys(gRAA_sys[is], is); 
    SetGraphStyle(gRAA_int[is], is, is); 
    SetGraphStyleSys(gRAA_int_sys[is], is); 
	}
  
  double xlonger = 120;
  //// latex for text
  TLatex* globtex = new TLatex();
  globtex->SetNDC();
  globtex->SetTextAlign(12); //left-center
  globtex->SetTextFont(42);
  globtex->SetTextSize(0.0387);
  
  //// axis et. al
  gRAA_sys[0]->GetXaxis()->SetTitle("N_{part}");
  gRAA_sys[0]->GetXaxis()->CenterTitle();
  gRAA_sys[0]->GetYaxis()->SetTitle("R_{AA}");
  gRAA_sys[0]->GetYaxis()->CenterTitle();
  gRAA_sys[0]->GetXaxis()->SetLimits(0.,xmax);
  gRAA_sys[0]->SetMinimum(0.0);
  gRAA_sys[0]->SetMaximum(1.3);
  //// for cent
  gRAA_sys[0]->GetXaxis()->SetTitleSize(0.06*1.0);
  gRAA_sys[0]->GetYaxis()->SetTitleSize(0.06*1.0);
  gRAA_sys[0]->GetXaxis()->SetLabelSize(0.05*1.0);
  gRAA_sys[0]->GetYaxis()->SetLabelSize(0.05*1.0);
  
  //// draw  
  TCanvas* c1 = new TCanvas("c1","c1",600+xlonger,600);
  TPad* pad_diff = new TPad("pad_diff", "",0, 0, 600/(600.+xlonger), 1.0); // vs centrality
  pad_diff->SetRightMargin(0);
  pad_diff->SetBottomMargin(0.14);
  pad_diff->SetTopMargin(0.067);
  TPad* pad_int = new TPad("pad_int", "",600/(600.+xlonger), 0, 1.0, 1.0); // centrality-integrated
  pad_int->SetBottomMargin(0.14);
  pad_int->SetTopMargin(0.067);
  pad_int->SetLeftMargin(0);
  pad_int->SetRightMargin(0.032*600/xlonger);

  //// --- 1st pad!!!   
  c1->cd();
  pad_diff->Draw(); 
  pad_diff->cd(); 
  //// syst
  for (int is=0; is<nState; is++){
    if ( is==0) { gRAA_sys[is]->Draw("A5"); }
    else if (is==ulstate && isArrow==true) { 
      for (int ipt=0; ipt< n3s ; ipt++) { //bin by bin
        box68per[ipt]->Draw("l"); 
      }
    }
    else { gRAA_sys[is]->Draw("5"); }
	}
  //// point
  for (int is=0; is<nState; is++){
    if (is==ulstate && isArrow==true) {
      for (int ipt=0; ipt< n3s ; ipt++) { //bin by bin
        arr95per[ipt]->Draw();
      }
    }
    else { gRAA[is]->Draw("P"); }
	}
  dashedLine(0.,1.,xmax,1.,1,1);
  
  //// legend
  //TLegend *leg= new TLegend(0.75, 0.50, 0.95, 0.70);
  TLegend *leg= new TLegend(0.68, 0.51, 0.88, 0.76);
  SetLegendStyle(leg);
  leg->SetTextSize(0.0387);
  TArrow *arrLeg = new TArrow(270.,0.62,270.,0.67,0.025,"<-|");
  arrLeg->SetLineColor(kGreen+2);
  arrLeg->SetLineWidth(2);
  
  if (isArrow==false) { 
    for (int is=0; is<nState; is++){
      leg -> AddEntry(gRAA[is],Form(" #Upsilon(%dS)",is+1),"lp");
    }
  }
  else {
    leg -> AddEntry(gRAA[0]," #Upsilon(1S)","lp");
    leg -> AddEntry(gRAA[1]," #Upsilon(2S)","lp");
    TLegendEntry *ent=leg->AddEntry("ent"," #Upsilon(3S) 68\% CL","f");
    ent->SetLineColor(kGreen+2);
    ent->SetFillColorAlpha(kGreen-10,0.5);
    ent->SetFillStyle(1001);
    ent=leg->AddEntry("ent"," #Upsilon(3S) 95\% CL","f");
    ent->SetLineColor(kWhite);
  }
  leg->Draw("same");
//  arrLeg->Draw();
  
  //// draw text
  double sz_init = 0.874; double sz_step = 0.0558;
//  globtex->DrawLatex(0.22+0.04, sz_init, "p_{T}^{#mu} > 4 GeV/c");
  globtex->DrawLatex(0.22+0.1, sz_init, "p_{T}^{#mu#mu} < 30 GeV/c");
//  globtex->DrawLatex(0.46+0.04, sz_init+0.002, "|#eta|^{#mu} < 2.4");
  globtex->DrawLatex(0.22+0.1, sz_init-sz_step, "|y^{#mu#mu}| < 2.4");
/*
  TLatex* centtex = new TLatex();
  centtex->SetNDC();
  centtex->SetTextAlign(12); //left-center
  centtex->SetTextFont(42);
  centtex->SetTextSize(0.029);

  centtex->DrawLatex(0.908,0.37,"0-5%");
  centtex->DrawLatex(0.802,0.37,"5-10%");
  centtex->DrawLatex(0.666,0.37,"10-20%");
  centtex->DrawLatex(0.518,0.421,"20-30%");
  centtex->DrawLatex(0.403,0.465,"30-40%");
  centtex->DrawLatex(0.318,0.495,"40-50%");
  centtex->DrawLatex(0.258,0.555,"50-60%");
  centtex->DrawLatex(0.242,0.698,"60-70%");
  centtex->DrawLatex(0.181,0.781,"70-100%");
*/

//  globtex->DrawLatex(0.22, sz_init-sz_step*2, "Centrality 0-100%");

  TFile *fstrickland = new TFile("StrickLand_RAA_5023.root","READ");
  
  TGraphErrors *gRAA_1S_strickland[3]; 
  TGraphErrors *gRAA_2S_strickland[3]; 
  TGraphErrors *gRAA_3S_strickland[3]; 
  
  for(int i=0;i<3;i++)
  {
    gRAA_1S_strickland[i] = (TGraphErrors*) fstrickland-> Get(Form("RAA_strick_nPart_1S_%d",i));
    gRAA_2S_strickland[i] = (TGraphErrors*) fstrickland-> Get(Form("RAA_strick_nPart_2S_%d",i));
    gRAA_3S_strickland[i] = (TGraphErrors*) fstrickland-> Get(Form("RAA_strick_nPart_3S_%d",i));
    gRAA_1S_strickland[i] -> SetLineWidth(3.);
    gRAA_2S_strickland[i] -> SetLineWidth(3.0);
    gRAA_3S_strickland[i] -> SetLineWidth(3);
  }
  gRAA_1S_strickland[0]->SetLineColor(kRed+3);
  gRAA_1S_strickland[1]->SetLineColor(kRed+3);
  gRAA_1S_strickland[2]->SetLineColor(kRed+3);
  gRAA_1S_strickland[0]->SetLineStyle(3);
  gRAA_1S_strickland[1]->SetLineStyle(1);
  gRAA_1S_strickland[2]->SetLineStyle(8);
  
  gRAA_2S_strickland[0]->SetLineColor(kBlue+3);
  gRAA_2S_strickland[1]->SetLineColor(kBlue+3);
  gRAA_2S_strickland[2]->SetLineColor(kBlue+3);
  gRAA_2S_strickland[0]->SetLineStyle(3);
  gRAA_2S_strickland[1]->SetLineStyle(1);
  gRAA_2S_strickland[2]->SetLineStyle(8);
  
  gRAA_3S_strickland[0]->SetLineColor(kGreen+2);
  gRAA_3S_strickland[1]->SetLineColor(kGreen+2);
  gRAA_3S_strickland[2]->SetLineColor(kGreen+2);
  gRAA_3S_strickland[0]->SetLineStyle(3);
  gRAA_3S_strickland[1]->SetLineStyle(1);
  gRAA_3S_strickland[2]->SetLineStyle(8);
  

  for(int i=0;i<3;i++){
    gRAA_1S_strickland[i]->Draw("same");
    gRAA_2S_strickland[i]->Draw("same");
    gRAA_3S_strickland[i]->Draw("same");
  }
   
  TLegend *leg_strick= new TLegend(0.29, 0.586, 0.46, 0.716);
  SetLegendStyle(leg_strick);
  leg_strick->SetTextSize(0.040);
  leg_strick->AddEntry(gRAA_1S_strickland[2],"Y(1S)","l");
  leg_strick->AddEntry(gRAA_2S_strickland[2],"Y(2S)","l");
//  leg_strick->Draw("same");

  double line_y = 0.91;
  double line_y_diff = 0.07;
  double line_y_diff_in = 0.02;
  double line_x_end = 107;//122
  double line_x_start = 80;//97
  TLine* t1 = new TLine(line_x_start,line_y,line_x_end,line_y);
  t1->SetLineStyle(3);
  t1->SetLineWidth(2);
  t1->SetLineColor(kRed+3);
  t1->Draw("same");

  TLine* t11 = new TLine(line_x_start,line_y-line_y_diff_in,line_x_end,line_y-line_y_diff_in);
  t11->SetLineStyle(3);
  t11->SetLineWidth(2);
  t11->SetLineColor(kBlue-3);
  t11->Draw("same");

  TLine* t111 = new TLine(line_x_start,line_y-line_y_diff_in*2,line_x_end,line_y-line_y_diff_in*2);
  t111->SetLineStyle(3);
  t111->SetLineWidth(2);
  t111->SetLineColor(kGreen+2);
  t111->Draw("same");

  TLine* t2 = new TLine(line_x_start,line_y-line_y_diff-line_y_diff_in,line_x_end,line_y-line_y_diff-line_y_diff_in);
  t2->SetLineStyle(1);
  t2->SetLineWidth(2);
  t2->SetLineColor(kRed+3);
  t2->Draw("same");

  TLine* t22 = new TLine(line_x_start,line_y-line_y_diff-line_y_diff_in*2,line_x_end,line_y-line_y_diff-line_y_diff_in*2);
  t22->SetLineStyle(1);
  t22->SetLineWidth(2);
  t22->SetLineColor(kBlue-3);
  t22->Draw("same");

  TLine* t222 = new TLine(line_x_start,line_y-line_y_diff-line_y_diff_in*3,line_x_end,line_y-line_y_diff-line_y_diff_in*3);
  t222->SetLineStyle(1);
  t222->SetLineWidth(2);
  t222->SetLineColor(kGreen+2);
  t222->Draw("same");

  TLine* t3 = new TLine(line_x_start,line_y-line_y_diff*2-line_y_diff_in*2,line_x_end,line_y-line_y_diff*2-line_y_diff_in*2);
  t3->SetLineStyle(8);
  t3->SetLineWidth(2);
  t3->SetLineColor(kRed+3);
  t3->Draw("same");

  TLine* t33 = new TLine(line_x_start,line_y-line_y_diff*2-line_y_diff_in*3,line_x_end,line_y-line_y_diff*2-line_y_diff_in*3);
  t33->SetLineStyle(8);
  t33->SetLineWidth(2);
  t33->SetLineColor(kBlue-3);
  t33->Draw("same");

  TLine* t333 = new TLine(line_x_start,line_y-line_y_diff*2-line_y_diff_in*4,line_x_end,line_y-line_y_diff*2-line_y_diff_in*4);
  t333->SetLineStyle(8);
  t333->SetLineWidth(2);
  t333->SetLineColor(kGreen+2);
  t333->Draw("same");


  drawText2("4#pi #eta/s=1", line_x_end+7, line_y-0.038, 22);
  drawText2("4#pi #eta/s=2", line_x_end+7, line_y-line_y_diff*1-0.038 - line_y_diff_in, 22);
  drawText2("4#pi #eta/s=3", line_x_end+7, line_y-line_y_diff*2-0.038 - line_y_diff_in*2, 22);

  drawText2("Krouppa, Strickland",line_x_start,line_y+0.034,22);

  //Global Unc.
  TH1D* hSys_glb[nState];
  double sys_global_pp[nState];
  double sys_global_val;
  double sys_pp_merged[nState] = {0.0343670, 0.0496190, 0.0539803}; 
  double accept_sys[nState] = {0.00378586, 0.000346161,4.21493e-05};
  TFile* f_acc[nState]; 
  TH1D* hSys_glb_acc[nState];
  for(int is=0; is<nState; is++){
    sys_global_pp[is] = TMath::Sqrt(sys_pp_merged[is]*sys_pp_merged[is]+accept_sys[is]*accept_sys[is]);
  } 
  
  sys_global_val = TMath::Sqrt(lumi_unc_pp*lumi_unc_pp + nMB_unc*nMB_unc);
  double sys_global_y = sys_global_val; 
  double sys_global_x = 15;
  double sys_pp_1S = sys_global_pp[0];
  double sys_pp_2S = sys_global_pp[1];
 
  TBox *globalUncBox = new TBox(xmax-sys_global_x*3,1-sys_global_y,xmax-sys_global_x*2,1+sys_global_y);
  globalUncBox -> SetFillColorAlpha(kGray+2,0);
  globalUncBox -> SetLineColor(kBlack);
  globalUncBox -> SetLineWidth(2);
  globalUncBox -> Draw("l same");


  sys_pp_1S = TMath::Sqrt(sys_pp_1S*sys_pp_1S + 0.0106916*0.0106916); 
  sys_pp_2S = TMath::Sqrt(sys_pp_2S*sys_pp_2S + 0.0182454*0.0182454); 
  TBox *ppRefUncBox1S = new TBox(xmax-sys_global_x*2,1-sys_pp_1S,xmax-sys_global_x+1,1+sys_pp_1S);
  ppRefUncBox1S -> SetFillColor(kPink-6);
  ppRefUncBox1S -> Draw("same");

  TBox *ppRefUncBox2S = new TBox(xmax-sys_global_x,1-sys_pp_2S,xmax,1+sys_pp_2S);
  ppRefUncBox2S -> SetFillColor(kBlue-3);
  ppRefUncBox2S -> Draw("same");

  pad_diff->Update();
//  CMS_lumi( c1, iPeriod, iPos );
  CMS_lumi_raaCent_projection( pad_diff, iPeriod, iPos );
  pad_diff->Update();
  //// --- 2nd pad!!!   
  c1->cd();
  pad_int->Draw(); 
  pad_int->cd(); 
  
  //// for int
  gRAA_int_sys[0]->GetXaxis()->SetLimits(xmin_int,xmax_int);
  gRAA_int_sys[0]->SetMinimum(0.0);
  gRAA_int_sys[0]->SetMaximum(1.3);
  gRAA_int_sys[0]->GetXaxis()->SetNdivisions(101);
  gRAA_int_sys[0]->GetXaxis()->SetLabelSize(0);
  gRAA_int_sys[0]->GetYaxis()->SetTickLength(0.03*600/xlonger);
  gRAA_int_sys[0]->GetYaxis()->SetLabelSize(0);
  
  //// syst
  for (int is=0; is<nState; is++){
    if ( is==0) { gRAA_int_sys[is]->Draw("A5"); }
    else if (is==ulstate && isArrow==true) { 
      for (int ipt=0; ipt< n3s_int ; ipt++) { //bin by bin
        box68per_int[ipt]->Draw("l"); 
      }
    }
    else { gRAA_int_sys[is]->Draw("5"); }
	}
  //// point
  for (int is=0; is<nState; is++){
    if (is==ulstate && isArrow==true) {
      for (int ipt=0; ipt< n3s_int ; ipt++) { //bin by bin
        arr95per_int[ipt]->Draw();
      }
    }
    else { gRAA_int[is]->Draw("P"); }
	}
  dashedLine(0.,1.,xmax_int,1.,1,1);
  
  pad_int->Update();
  //// draw text
  double sz_allign = 0.034;
  globtex->SetTextAlign(22); //center-center
  globtex->SetTextSize(0.038*600./xlonger);
  globtex->DrawLatex(0.5*(1-0.032*600/xlonger), sz_init-sz_step-sz_allign, "Cent.");
  globtex->DrawLatex(0.5*(1-0.032*600/xlonger), sz_init-sz_step*2-sz_allign, "0-100%");

	c1->Update();
  c1->SaveAs("Projection_Strickland_RAA_vs_cent.png");

  c1->SaveAs("Projection_Strickland_RAA_vs_cent.pdf");
/*
	///////////////////////////////////////////////////////////////////
	//// save as a root file
	TFile *outFile = new TFile("RAA_vs_cent.root", "RECREATE");
	outFile->cd();
	for (int is=0; is<nState; is++){
		gRAA_sys[is]->Write();	
		gRAA[is]->Write();	
	}
	outFile->Close();
*/	
	return;

} // end of main func.

