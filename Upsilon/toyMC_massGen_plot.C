#include "rootFitHeaders.h"
#include "commonUtility.h"
#include <RooGaussian.h>
#include <RooCBShape.h>
#include <RooWorkspace.h>
#include <RooChebychev.h>
#include <RooPolynomial.h>
#include "RooPlot.h"
#include "TText.h"
#include "TArrow.h"
#include "TFile.h"
#include "cutsAndBin.h"
#include "PsetCollection.h"
#include "RooRandom.h"
#include "CMS_lumi_overlay_projection.C"
#include "tdrstyle.C"
#include "SONGKYO.h"

using namespace std;
using namespace RooFit;
void toyMC_massGen_plot(
	   int collId = kAADATA,
	   float ptLow=0, float ptHigh=30,
	   float yLow=0, float yHigh=2.4,
	   int cLow=0, int cHigh=200,
	   float muPtCut=4.0,
	   int nGen = 10000,
     int rdmseed = 111,
     bool doFit = false
	    ) 
{
  using namespace RooFit;
  RooRandom::randomGenerator()->SetSeed(rdmseed);
  gStyle->SetEndErrorSize(0);
  
  TString optFit;

  float dphiEp2Low = 0 ;
  float dphiEp2High = 100 ;

  if(collId == kAADATAPeri) collId =2; 
  
  TString kineLabel = getKineLabel (collId, ptLow, ptHigh, yLow, yHigh, muPtCut, cLow, cHigh, dphiEp2Low, dphiEp2High) ;
  TString fcoll;
  TString finput;
  
  float massLow = 8. ;
  float massHigh = 14.;
  int   nMassBin  = (massHigh-massLow)*10;
  
  RooWorkspace *ws = new RooWorkspace("ws");
  RooWorkspace *wsinp = new RooWorkspace("wsinp");

  RooRealVar mass("mass","mass", massLow, massHigh);
  
  RooRealVar mean1s("m_{#Upsilon(1S)}","mean of the signal gaussian mass PDF",pdgMass.Y1S, pdgMass.Y1S -0.1, pdgMass.Y1S + 0.1 ) ;
  RooRealVar mRatio21("mRatio21","mRatio21",pdgMass.Y2S / pdgMass.Y1S );
  RooRealVar mRatio31("mRatio31","mRatio31",pdgMass.Y3S / pdgMass.Y1S );
  RooFormulaVar mean2s("mean2s","m_{#Upsilon(1S)}*mRatio21", RooArgSet(mean1s,mRatio21) );
  RooFormulaVar mean3s("mean3s","m_{#Upsilon(1S)}*mRatio31", RooArgSet(mean1s,mRatio31) );
          
  PSetUpsAndBkg initPset = getUpsilonPsets( collId, ptLow, ptHigh, yLow, yHigh, cLow, cHigh, muPtCut) ; 
  initPset.SetMCSgl();

  RooRealVar sigma1s_1("sigma1s_1","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma2s_1("sigma2s_1","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma3s_1("sigma3s_1","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma1s_2("sigma1s_2","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma2s_2("sigma2s_2","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma3s_2("sigma3s_2","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);

  RooRealVar alpha1s_1("alpha1s_1","tail shift", 5. , 1.5, 9.8);
  RooRealVar alpha2s_1("alpha2s_1","tail shift", 5. , 1.5, 9.2);  
  RooRealVar alpha3s_1("alpha3s_1","tail shift", 5. , 1.5, 9.8);
  RooRealVar alpha1s_2("alpha1s_2","tail shift", 5. , 1.5, 9.8);
  RooRealVar alpha2s_2("alpha2s_2","tail shift", 5. , 1.5, 9.2);  
  RooRealVar alpha3s_2("alpha3s_2","tail shift", 5. , 1.5, 9.8);

  RooRealVar n1s_1("n1s_1","power order", 5. , 1.5, 9.8);
  RooRealVar n2s_1("n2s_1","power order", 5. , 1.5, 10.);
  RooRealVar n3s_1("n3s_1","power order", 4. , 1.5, 9.8);
  RooRealVar n1s_2("n1s_2","power order", 5. , 1.5, 9.8);
  RooRealVar n2s_2("n2s_2","power order", 5. , 1.5, 10.);
  RooRealVar n3s_2("n3s_2","power order", 4. , 1.5, 9.8);
  RooRealVar *f1s = new RooRealVar("f1s","1S CB fraction", 0.5, 0, 1);
  RooRealVar *f2s = new RooRealVar("f1s","1S CB fraction", 0.5, 0, 1);
  RooRealVar *f3s = new RooRealVar("f1s","1S CB fraction", 0.5, 0, 1);

  RooRealVar sigma1s_1Out("sigma1s_1Out","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma2s_1Out("sigma2s_1Out","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma3s_1Out("sigma3s_1Out","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma1s_2Out("sigma1s_2Out","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma2s_2Out("sigma2s_2Out","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);
  RooRealVar sigma3s_2Out("sigma3s_2Out","width/sigma of the signal gaussian mass PDF",0.05, 0.05, 0.3);

  RooRealVar alpha1s_1Out("alpha1s_1Out","tail shift", 5. , 1.5, 9.8);
  RooRealVar alpha2s_1Out("alpha2s_1Out","tail shift", 5. , 1.5, 9.2);  
  RooRealVar alpha3s_1Out("alpha3s_1Out","tail shift", 5. , 1.5, 9.8);
  RooRealVar alpha1s_2Out("alpha1s_2Out","tail shift", 5. , 1.5, 9.8);
  RooRealVar alpha2s_2Out("alpha2s_2Out","tail shift", 5. , 1.5, 9.2);  
  RooRealVar alpha3s_2Out("alpha3s_2Out","tail shift", 5. , 1.5, 9.8);

  RooRealVar n1s_1Out("n1s_1Out","power order", 5. , 1.5, 9.8);
  RooRealVar n2s_1Out("n2s_1Out","power order", 5. , 1.5, 10.);
  RooRealVar n3s_1Out("n3s_1Out","power order", 4. , 1.5, 9.8);
  RooRealVar n1s_2Out("n1s_2Out","power order", 5. , 1.5, 9.8);
  RooRealVar n2s_2Out("n2s_2Out","power order", 5. , 1.5, 10.);
  RooRealVar n3s_2Out("n3s_2Out","power order", 4. , 1.5, 9.8);
  RooRealVar *f1sOut = new RooRealVar("f1s","1S CB fraction", 0.5, 0, 1);
  RooRealVar *f2sOut = new RooRealVar("f1s","1S CB fraction", 0.5, 0, 1);
  RooRealVar *f3sOut = new RooRealVar("f1s","1S CB fraction", 0.5, 0, 1);

  if ( initPset.n1s_1 == -1 )
  {
    cout << endl << endl << endl << "#########################  ERROR!!!! ##################" << endl;
    cout << "Fitting macro is stopped!" << endl << endl << endl;
    return;
  }
  else { 
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << endl << "Fixing the parameters..." << endl << endl;
    cout << "$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$" << endl;
    cout << "initPset.n1s_1 = " << initPset.n1s_1 << endl;
    n1s_1.setVal(3.56395);  n1s_1.setConstant(); 
    n2s_1.setVal(3.56395);  n2s_1.setConstant();  
    n3s_1.setVal(3.56395);  n3s_1.setConstant();  
    n1s_2.setVal(3.56395);  n1s_2.setConstant(); 
    n2s_2.setVal(3.56395);  n2s_2.setConstant();  
    n3s_2.setVal(3.56395);  n3s_2.setConstant();  
    alpha1s_1.setVal(1.53540);  alpha1s_1.setConstant();  
    alpha2s_1.setVal(1.53540);  alpha2s_1.setConstant();  
    alpha3s_1.setVal(1.53540);  alpha3s_1.setConstant();  
    alpha1s_2.setVal(1.53540);  alpha1s_2.setConstant();  
    alpha2s_2.setVal(1.53540);  alpha2s_2.setConstant();  
    alpha3s_2.setVal(1.53540);  alpha3s_2.setConstant();  
    sigma1s_1.setVal(0.0852719);  sigma1s_1.setConstant();  
    sigma2s_1.setVal(pdgMass.Y2S / pdgMass.Y1S * 0.0852719);  sigma2s_1.setConstant();  
    sigma3s_1.setVal(pdgMass.Y3S / pdgMass.Y1S * 0.0852719);  sigma3s_1.setConstant();  
    sigma1s_2.setVal(2.68841*0.0852719);  sigma1s_2.setConstant();  
    sigma2s_2.setVal(pdgMass.Y2S / pdgMass.Y1S * 2.68841*0.0852719);  sigma2s_2.setConstant();  
    sigma3s_2.setVal(pdgMass.Y3S / pdgMass.Y1S * 2.68841*0.0852719);  sigma3s_2.setConstant();  
    f1s->setVal(0.993955);  f1s->setConstant();  
    f2s->setVal(0.993955);  f2s->setConstant();  
    f3s->setVal(0.993955);  f3s->setConstant();  
  } 

  RooCBShape* cb1s_1 = new RooCBShape("cball1s_1", "cystal Ball", mass, mean1s, sigma1s_1, alpha1s_1, n1s_1);
  RooCBShape* cb2s_1 = new RooCBShape("cball2s_1", "cystal Ball", mass, mean2s, sigma2s_1, alpha2s_1, n2s_1);
  RooCBShape* cb3s_1 = new RooCBShape("cball3s_1", "cystal Ball", mass, mean3s, sigma3s_1, alpha3s_1, n3s_1);
  RooCBShape* cb1s_2 = new RooCBShape("cball1s_2", "cystal Ball", mass, mean1s, sigma1s_2, alpha1s_2, n1s_2);
  RooCBShape* cb2s_2 = new RooCBShape("cball2s_2", "cystal Ball", mass,mean2s, sigma2s_2, alpha2s_2, n2s_2);
  RooCBShape* cb3s_2 = new RooCBShape("cball3s_2", "cystal Ball", mass,mean3s, sigma3s_2, alpha3s_2, n3s_2);

  RooAddPdf*  cb1s = new RooAddPdf("cb1s","Signal 1S",RooArgList(*cb1s_1,*cb1s_2), RooArgList(*f1s) );
  RooAddPdf*  cb2s = new RooAddPdf("cb2s","Signal 2S",RooArgList(*cb2s_1,*cb2s_2), RooArgList(*f1s) );
  RooAddPdf*  cb3s = new RooAddPdf("cb3s","Signal 3S",RooArgList(*cb3s_1,*cb3s_2), RooArgList(*f1s) );

  
  RooCBShape* cb1s_1Out = new RooCBShape("cball1s_1Out", "cystal Ball", mass, mean1s, sigma1s_1Out, alpha1s_1Out, n1s_1Out);
  RooCBShape* cb2s_1Out = new RooCBShape("cball2s_1Out", "cystal Ball", mass, mean2s, sigma2s_1Out, alpha2s_1Out, n2s_1Out);
  RooCBShape* cb3s_1Out = new RooCBShape("cball3s_1Out", "cystal Ball", mass, mean3s, sigma3s_1Out, alpha3s_1Out, n3s_1Out);
  RooCBShape* cb1s_2Out = new RooCBShape("cball1s_2Out", "cystal Ball", mass, mean1s, sigma1s_2Out, alpha1s_2Out, n1s_2Out);
  RooCBShape* cb2s_2Out = new RooCBShape("cball2s_2Out", "cystal Ball", mass, mean2s, sigma2s_2Out, alpha2s_2Out, n2s_2Out);
  RooCBShape* cb3s_2Out = new RooCBShape("cball3s_2Out", "cystal Ball", mass, mean3s, sigma3s_2Out, alpha3s_2Out, n3s_2Out);

  RooAddPdf*  cb1sOut = new RooAddPdf("cb1sOut","Signal 1S",RooArgList(*cb1s_1Out,*cb1s_2Out), RooArgList(*f1sOut) );
  RooAddPdf*  cb2sOut = new RooAddPdf("cb2sOut","Signal 2S",RooArgList(*cb2s_1Out,*cb2s_2Out), RooArgList(*f1sOut) );
  RooAddPdf*  cb3sOut = new RooAddPdf("cb3sOut","Signal 3S",RooArgList(*cb3s_1Out,*cb3s_2Out), RooArgList(*f1sOut) );


  //----------------------------------------------------------------------------------------
  //Generating function from nominal fit
  PSetUpsAndBkg bkgParm = getUpsilonPsets( collId, ptLow, ptHigh, yLow, yHigh, cLow, cHigh, muPtCut) ; 

  float _bkg_mu_res = 7.97149;
  float _bkg_sigma_res = 1.06989;
  float _bkg_mdecay_res = 5.98079;

  RooRealVar err_mu_out("err_mu_out","err_mu_out", _bkg_mu_res, 0, 30) ;
  RooRealVar err_sigma_out("err_sigma_out","err_sigma_out", _bkg_sigma_res, 0, 30);
  RooRealVar m_decay_out("err_lambda_out","m_decay_out", _bkg_mdecay_res, 0 ,30);

  RooRealVar err_mu_gen("err_mu_gen","err_mu_gen",  _bkg_mu_res) ;
  RooRealVar err_sigma_gen("err_sigma_gen","err_sigma_gen", _bkg_sigma_res);
  RooRealVar m_decay_gen("err_lambda_gen","m_decay_gen", _bkg_mdecay_res);

  err_mu_gen.setVal(_bkg_mu_res); err_mu_gen.setConstant();
  err_sigma_gen.setVal(_bkg_sigma_res); err_sigma_gen.setConstant();
  m_decay_gen.setVal(_bkg_mdecay_res); m_decay_gen.setConstant();
  
  RooGenericPdf* bkgInp_gen;
  RooGenericPdf *bkgInp_in;
  if ( ptLow < 6)  { 
    bkgInp_gen = new RooGenericPdf("bkgInp_gen","Background Gen","(TMath::Erf((@0-@1)/(TMath::Sqrt(2)*@2))+1)*0.5*TMath::Exp(-@0/@3)",RooArgList(mass,err_mu_gen,err_sigma_gen,m_decay_gen));
  }
  else {
    bkgInp_gen = new RooGenericPdf("bkgInp_gen","Background Gen","TMath::Exp(-@0/@1)",RooArgList(mass,m_decay_gen));
  }
  
  RooGenericPdf* bkgFitOut;
  if ( ptLow < 6)  { 
    bkgFitOut = new RooGenericPdf("bkgFitOut","Background Out","(TMath::Erf((@0-@1)/(TMath::Sqrt(2)*@2))+1)*0.5*TMath::Exp(-@0/@3)",RooArgList(mass,err_mu_out,err_sigma_out,m_decay_out));
  }
  else {
    bkgFitOut = new RooGenericPdf("bkgFitOut","Background Out","TMath::Exp(-@0/@1)",RooArgList(mass,m_decay_out));
  }

  
  float num_sig_1s = 5210.859;
  float num_sig_2s = 463.3855;
  float num_sig_3s = 101.6993;
  float num_bkg = 104618.;

  float r1S_overTot = num_sig_1s / ( num_sig_1s + num_sig_2s + num_sig_3s + num_bkg) ; // Numbers obtained from the real data
  float r2S_overTot = num_sig_2s / ( num_sig_1s + num_sig_2s + num_sig_3s + num_bkg) ; // Numbers obtained from the real data
  float r3S_overTot = num_sig_3s / ( num_sig_1s + num_sig_2s + num_sig_3s + num_bkg) ; // Numbers obtained from the real data
  float rBkg_overTot = num_bkg / ( num_sig_1s + num_sig_2s + num_sig_3s + num_bkg) ; // Numbers obtained from the real data
 
  nGen = (num_sig_1s + num_sig_2s + num_sig_3s + num_bkg) * 27;

  RooRealVar *nSig1sInp  = new RooRealVar("nSig1sInp","nSig1sInp", nGen * r1S_overTot,  0,   nGen);
  RooRealVar *nSig2sInp  = new RooRealVar("nSig2sInp","nSig2sInp", nGen * r2S_overTot, 0,   nGen);
  RooRealVar *nSig3sInp  = new RooRealVar("nSig3sInp","nSig3sInp", nGen * r3S_overTot, 0,   nGen);
  RooRealVar *nBkgInp  = new RooRealVar("nBkgInp","n_bkgInp",      nGen * rBkg_overTot,  0,   nGen);

  nSig1sInp->setVal(nGen * r1S_overTot); nSig1sInp->setConstant();
  nSig2sInp->setVal(nGen * r2S_overTot); nSig2sInp->setConstant();
  nSig3sInp->setVal(nGen * r3S_overTot); nSig3sInp->setConstant();
  nBkgInp->setVal(nGen * rBkg_overTot); nBkgInp->setConstant();


  RooRealVar *nSig1sOut  = new RooRealVar("nSig1sOut","nSig1sOut", nGen * r1S_overTot,  0,   nGen);
  RooRealVar *nSig2sOut  = new RooRealVar("nSig2sOut","nSig2sOut", nGen * r2S_overTot, 0,   nGen);
  RooRealVar *nSig3sOut  = new RooRealVar("nSig3sOut","nSig3sOut", nGen * r3S_overTot, 0,   nGen);
  RooRealVar *nBkgOut  = new RooRealVar("nBkgOut","n_bkgOut",      nGen * rBkg_overTot,  0,   nGen);
  
  RooAddPdf* modelInput_gen; 
  RooAddPdf* modelInput_out; 
  modelInput_gen = new RooAddPdf("modelInput_gen","1S+2S + Bkg",RooArgList(*cb1s, *cb2s, *cb3s, *bkgInp_gen),RooArgList(*nSig1sInp,*nSig2sInp,*nSig3sInp,*nBkgInp));
  modelInput_out = new RooAddPdf("modelOutput","1S+2S + Bkg",RooArgList(*cb1sOut, *cb2sOut, *cb3sOut, *bkgFitOut),RooArgList(*nSig1sOut,*nSig2sOut,*nSig3sOut,*nBkgOut));
 
  ws->import(*modelInput_out); 
  
  RooDataSet *data = modelInput_gen->generate(mass,nGen) ;

  RooPlot* xframe  = ws->var("mass")->frame(nMassBin); // bins
  xframe->SetXTitle("mass (Gev/c^{2})");
  xframe->GetXaxis()->CenterTitle();
  xframe->GetYaxis()->CenterTitle();
  RooPlot* myPlot2 = (RooPlot*)xframe->Clone();

  data->plotOn(myPlot2,Name("dataHist2"),MarkerSize(0.8)) ;

  
  RooFitResult* fitRes;
  if(doFit)
  {
    fitRes = ws->pdf("modelOutput")->fitTo(*data,Save(), Hesse(kTRUE),Range(massLow, massHigh),Minos(0), SumW2Error(kTRUE));
    ws->pdf("modelOutput")->plotOn(myPlot2, Name("outputModelHist"));
    ws->pdf("modelOutput")->plotOn(myPlot2, Components(RooArgSet(*bkgFitOut)),LineColor(kBlack),LineStyle(kDashed));
    optFit = "Fit";
  }
  else if(!doFit) {optFit = "Plot";}

  // DRAW! 
  TCanvas* c1 =  new TCanvas("canvas2","My plots",600,600);
  c1->cd();
  TPad *pad1 = new TPad("pad1", "pad1", 0, 0, 1, 1.0);
  pad1->SetTicks(1,1);
  pad1->Draw(); pad1->cd();

  myPlot2->SetFillStyle(4000);
  myPlot2->SetAxisRange(massLow, massHigh,"X");
  myPlot2->GetYaxis()->SetTitleOffset(1.77);
  myPlot2->GetYaxis()->CenterTitle();
  myPlot2->GetYaxis()->SetTitleSize(0.05);
  myPlot2->GetYaxis()->SetLabelSize(0.045) ;
  myPlot2->GetXaxis()->SetRangeUser(8,14);
  myPlot2->GetXaxis()->SetTitleSize(0);
  myPlot2->GetXaxis()->SetTitle("m_{#mu^{+}#mu^{-}} (GeV/c^{2})");
  myPlot2->GetXaxis()->SetTitleOffset(1.22) ;
  myPlot2->GetXaxis()->SetLabelOffset(0.018) ;
  myPlot2->GetXaxis()->SetLabelSize(0.045) ;
  myPlot2->GetXaxis()->SetTitleSize(0.057) ;
  myPlot2->GetXaxis()->CenterTitle();
  myPlot2->SetTitle(" ");
  myPlot2->Draw();
 
  TString perc = "%";
  
  float pos_text_x = 0.41;
  float pos_text_y = 0.852;
  float pos_y_diff = 0.052;
  float text_size = 17;
  int text_color = 1;
  if(ptLow==0) drawText(Form("p_{T}^{#mu#mu} < %.f GeV/c",ptHigh ),pos_text_x,pos_text_y,text_color,text_size);
  else if(ptLow == 2.5 && ptHigh==5) drawText(Form("%.1f < p_{T}^{#mu#mu} < %.f GeV/c",ptLow,ptHigh ),pos_text_x,pos_text_y,text_color,text_size);
  else drawText(Form("%.f < p_{T}^{#mu#mu} < %.f GeV/c",ptLow,ptHigh ),pos_text_x,pos_text_y,text_color,text_size);
  if(yLow==0) drawText(Form("|y^{#mu#mu}| < %.1f",yHigh ), pos_text_x,pos_text_y-pos_y_diff,text_color,text_size);
  else if(yLow!=0) drawText(Form("%.1f < |y^{#mu#mu}| < %.1f",yLow,yHigh ), pos_text_x,pos_text_y-pos_y_diff,text_color,text_size);
  if(collId != kPPDATA && collId != kPPMCUps1S && collId != kPPMCUps2S) 
  {
      drawText(Form("p_{T}^{#mu} > %.f GeV/c", muPtCut ), pos_text_x,pos_text_y-pos_y_diff*2,text_color,text_size);
      drawText("|#eta^{#mu}| < 2.4 GeV/c", pos_text_x,pos_text_y-pos_y_diff*3,text_color,text_size);
      drawText(Form("Centrality %d-%d%s",cLow/2,cHigh/2,perc.Data()),pos_text_x,pos_text_y-pos_y_diff*4,text_color,text_size);
  }
  else {
    drawText(Form("p_{T}^{#mu} > %.f GeV/c", muPtCut ), pos_text_x,pos_text_y-pos_y_diff*2,text_color,text_size);
    drawText("|#eta^{#mu}| < 2.4 GeV/c", pos_text_x,pos_text_y-pos_y_diff*3,text_color,text_size);
  }  

  TLegend* fitleg = new TLegend(0.63,0.69,0.73,0.74); fitleg->SetTextSize(17);
  fitleg->SetTextFont(43);
  fitleg->SetBorderSize(0);
  fitleg->AddEntry(data,"PbPb 10nb^{-1} projection","pe");
  fitleg->Draw("same");



 /* TPad *pad2 = new TPad("pad2", "pad2", 0, 0.005, 0.98, 0.295);
  pad2->SetTopMargin(0); // Upper and lower plot are joined
  pad2->SetBottomMargin(0.56); 
  pad1->SetLeftMargin(0.18);
  pad1->SetBottomMargin(0.17);
  pad1->SetTopMargin(0.067);
  pad1->SetRightMargin(0.05);
  pad2->SetTicks(1,1);
  pad2->cd();
  
  RooPlot* pullFrame = ws->var("mass")->frame(Title("Pull Distribution")) ;
  pullFrame->SetTitleSize(0);
  pullFrame->GetYaxis()->SetTitleOffset(0.520) ;
  pullFrame->GetYaxis()->SetTitle("Pull") ;
  pullFrame->GetYaxis()->SetTitleSize(0.155) ;
  pullFrame->GetYaxis()->SetLabelSize(0.134) ;
  pullFrame->GetYaxis()->SetRangeUser(-3.8,3.8) ;
//  pullFrame->GetYaxis()->SetLimits(-6,6) ;
  pullFrame->GetYaxis()->CenterTitle();

  pullFrame->GetXaxis()->SetTitle("m_{#mu^{+}#mu^{-}} (GeV/c^{2})");
  pullFrame->GetXaxis()->SetTitleOffset(1.22) ;
  pullFrame->GetXaxis()->SetLabelOffset(0.04) ;
  pullFrame->GetXaxis()->SetLabelSize(0.16) ;
  pullFrame->GetXaxis()->SetTitleSize(0.19) ;
  pullFrame->GetXaxis()->CenterTitle();
 // pullFrame->GetXaxis()->SetTitleFont(43);
 // pullFrame->GetYaxis()->SetTitleFont(43);
  
  pullFrame->GetYaxis()->SetTickSize(0.04);
  pullFrame->GetYaxis()->SetNdivisions(404);
  pullFrame->GetXaxis()->SetTickSize(0.03);
*/
  TH1D* outh = new TH1D("fitResults","fit result",20,0,20);

  outh->GetXaxis()->SetBinLabel(1,"Upsilon1S");
  outh->GetXaxis()->SetBinLabel(2,"Upsilon2S");
  outh->GetXaxis()->SetBinLabel(3,"Upsilon3S");
  
  float temp1 = ws->var("nSig1sOut")->getVal();  
  float temp1err = ws->var("nSig1sOut")->getError();  
  float temp2 = ws->var("nSig2sOut")->getVal();  
  float temp2err = ws->var("nSig2sOut")->getError();  
  float temp3 = ws->var("nSig3sOut")->getVal();  
  float temp3err = ws->var("nSig3sOut")->getError();  
  
  outh->SetBinContent(1,  temp1 ) ;
  outh->SetBinError  (1,  temp1err ) ;
  outh->SetBinContent(2,  temp2 ) ;
  outh->SetBinError  (2,  temp2err ) ;
  outh->SetBinContent(3,  temp3 ) ;
  outh->SetBinError  (3,  temp3err ) ;

  pad1->Update();
  setTDRStyle();
  writeExtraText = true;
  extraText = "Projection";

  TString label;
  label="";
  if(collId == kPPDATA) CMS_lumi_overlay_projection(pad1, 10001, 33);
  else if(collId == kAADATA && cLow < 60) CMS_lumi_overlay_projection(pad1,10001,33);
  else if(collId == kAADATA && cLow>=60) CMS_lumi_overlay_projection(pad1, 10001,33);


  pad1->Update();

  c1->cd();
  pad1->Draw();
  pad1->Update();
  c1->Modified();
  TFile* outf = new TFile(Form("projection_%sresults_upsilon_DoubleCB_%s.root",optFit.Data(),kineLabel.Data()),"recreate");
  outh->Write();
  c1->Write();
  ws->Write();
  c1->SaveAs(Form("projection_int_mass_%s.pdf",optFit.Data()));
  
} 

