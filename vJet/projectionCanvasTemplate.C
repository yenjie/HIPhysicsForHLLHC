// empty canvas to be used as template for sqrt(s_NN), lumi, "CMS Projection" info style
void projectionCanvasTemplate()
{
   TCanvas *projectionCanvasTemplate = new TCanvas("projectionCanvasTemplate", "",0,0,800,800);
   projectionCanvasTemplate->SetHighLightColor(2);
   projectionCanvasTemplate->Range(-0.5526315,-0.2278481,2.078947,1.291139);
   projectionCanvasTemplate->SetFillColor(0);
   projectionCanvasTemplate->SetBorderMode(0);
   projectionCanvasTemplate->SetBorderSize(0);
   projectionCanvasTemplate->SetTickx(1);
   projectionCanvasTemplate->SetTicky(1);
   projectionCanvasTemplate->SetLeftMargin(0.21);
   projectionCanvasTemplate->SetRightMargin(0.03);
   projectionCanvasTemplate->SetTopMargin(0.06);
   projectionCanvasTemplate->SetBottomMargin(0.15);
   projectionCanvasTemplate->SetFrameLineColor(0);
   projectionCanvasTemplate->SetFrameBorderMode(0);
   projectionCanvasTemplate->SetFrameLineColor(0);
   projectionCanvasTemplate->SetFrameBorderMode(0);
   
   TH1D *h1D = new TH1D("h1D","",10,0,2);
   h1D->Reset();
   h1D->SetMinimum(0);
   h1D->SetMaximum(1.2);
   h1D->SetStats(0);

   h1D->SetLineWidth(0);
   h1D->GetXaxis()->SetTitle("x_{jZ} = p^{jet}_{T}/p^{Z}_{T}");
   h1D->GetXaxis()->CenterTitle(true);
   h1D->GetXaxis()->SetLabelFont(42);
   h1D->GetXaxis()->SetLabelSize(0.035);
   h1D->GetXaxis()->SetTitleSize(0.0525);
   h1D->GetXaxis()->SetTitleOffset(1.25);
   h1D->GetXaxis()->SetTitleFont(42);
   h1D->GetYaxis()->SetTitle("#frac{1}{N_{Z}} #frac{dN_{jZ}}{dx_{jZ}}");
   h1D->GetYaxis()->CenterTitle(true);
   h1D->GetYaxis()->SetLabelFont(42);
   h1D->GetYaxis()->SetLabelSize(0.035);
   h1D->GetYaxis()->SetTitleSize(0.0525);
   h1D->GetYaxis()->SetTitleOffset(1.5);
   h1D->GetYaxis()->SetTitleFont(42);
   h1D->GetZaxis()->SetLabelFont(42);
   h1D->GetZaxis()->SetLabelSize(0.035);
   h1D->GetZaxis()->SetTitleSize(0.035);
   h1D->GetZaxis()->SetTitleFont(42);
   h1D->Draw("e");

   TLatex* tex = 0;
   tex = new TLatex(0.22,0.96,"#sqrt{s_{NN}} = 5.02 TeV");
   tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(30);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.96,0.96,"PbPb 10 nb^{-1}");
   tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(43);
   tex->SetTextSize(30);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.25,0.86,"CMS");
   tex->SetNDC();
   tex->SetTextFont(61);
   tex->SetTextSize(0.06);
   tex->SetLineWidth(2);
   tex->Draw();
   tex = new TLatex(0.38,0.86,"Projection");
   tex->SetNDC();
   tex->SetTextFont(52);
   tex->SetLineWidth(2);
   tex->Draw();
 
   projectionCanvasTemplate->Modified();
   projectionCanvasTemplate->cd();
   projectionCanvasTemplate->SetSelected(projectionCanvasTemplate);
   projectionCanvasTemplate->Update();
   projectionCanvasTemplate->SaveAs("projectionCanvasTemplate.png");
}
