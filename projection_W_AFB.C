void projection_W_AFB()
{
//=========Macro generated from canvas: A3/
//=========  (Fri Oct 13 14:32:17 2017) by ROOT version6.04/02
   TCanvas *A3 = new TCanvas("A3", "",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   A3->SetHighLightColor(2);
   A3->Range(-0.44,0.6128049,2.31,1.283537);
   A3->SetFillColor(0);
   A3->SetBorderMode(0);
   A3->SetBorderSize(2);
   A3->SetTickx(1);
   A3->SetTicky(1);
   A3->SetLeftMargin(0.16);
   A3->SetRightMargin(0.04);
   A3->SetTopMargin(0.05);
   A3->SetBottomMargin(0.13);
   A3->SetFrameFillStyle(0);
   A3->SetFrameBorderMode(0);
   A3->SetFrameFillStyle(0);
   A3->SetFrameBorderMode(0);
   
   Double_t ha1p_pomsdbid_pdf_fx3016[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9};
   Double_t ha1p_pomsdbid_pdf_fy3016[10] = {
   1.007122,
   1.004488,
   1.00971,
   1.011673,
   1.020019,
   1.023663,
   1.026357,
   1.033182,
   1.035446,
   1.045119};
   Double_t ha1p_pomsdbid_pdf_felx3016[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t ha1p_pomsdbid_pdf_fely3016[10] = {
   0.0121506,
   0.002825037,
   0.00841702,
   0.002801617,
   0.003531626,
   0.006806855,
   0.007219975,
   0.006234271,
   0.001928135,
   0.008652858};
   Double_t ha1p_pomsdbid_pdf_fehx3016[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t ha1p_pomsdbid_pdf_fehy3016[10] = {
   0.001439843,
   0.005944936,
   0.001609753,
   0.008931219,
   0.007629101,
   0.004315419,
   0.004578535,
   0.004656317,
   0.008376574,
   0.003227793};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,ha1p_pomsdbid_pdf_fx3016,ha1p_pomsdbid_pdf_fy3016,ha1p_pomsdbid_pdf_felx3016,ha1p_pomsdbid_pdf_fehx3016,ha1p_pomsdbid_pdf_fely3016,ha1p_pomsdbid_pdf_fehy3016);
   grae->SetName("ha1p_pomsdbid_pdf");
   grae->SetTitle("Graph");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = TColor::GetColor("#ff0000");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#ff0000");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_ha1p_pomsdbid_pdf3016 = new TH1F("Graph_ha1p_pomsdbid_pdf3016","Graph",100,0,2.2);
   Graph_ha1p_pomsdbid_pdf3016->SetMinimum(0.7);
   Graph_ha1p_pomsdbid_pdf3016->SetMaximum(1.25);
   Graph_ha1p_pomsdbid_pdf3016->SetDirectory(0);
   Graph_ha1p_pomsdbid_pdf3016->SetStats(0);
   Graph_ha1p_pomsdbid_pdf3016->SetLineStyle(0);
   Graph_ha1p_pomsdbid_pdf3016->SetMarkerStyle(20);
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetTitle("|#eta_{cm}|");
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetRange(1,100);
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetLabelFont(42);
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetLabelOffset(0.007);
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetLabelSize(0.05);
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetTitleSize(0.06);
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetTitleOffset(0.9);
   Graph_ha1p_pomsdbid_pdf3016->GetXaxis()->SetTitleFont(42);
   Graph_ha1p_pomsdbid_pdf3016->GetYaxis()->SetTitle("N (+#eta_{cm}) / N (-#eta_{cm})");
   Graph_ha1p_pomsdbid_pdf3016->GetYaxis()->SetLabelFont(42);
   Graph_ha1p_pomsdbid_pdf3016->GetYaxis()->SetLabelOffset(0.007);
   Graph_ha1p_pomsdbid_pdf3016->GetYaxis()->SetLabelSize(0.05);
   Graph_ha1p_pomsdbid_pdf3016->GetYaxis()->SetTitleSize(0.06);
   Graph_ha1p_pomsdbid_pdf3016->GetYaxis()->SetTitleOffset(1.25);
   Graph_ha1p_pomsdbid_pdf3016->GetYaxis()->SetTitleFont(42);
   Graph_ha1p_pomsdbid_pdf3016->GetZaxis()->SetLabelFont(42);
   Graph_ha1p_pomsdbid_pdf3016->GetZaxis()->SetLabelOffset(0.007);
   Graph_ha1p_pomsdbid_pdf3016->GetZaxis()->SetLabelSize(0.05);
   Graph_ha1p_pomsdbid_pdf3016->GetZaxis()->SetTitleSize(0.06);
   Graph_ha1p_pomsdbid_pdf3016->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_ha1p_pomsdbid_pdf3016);
   
   grae->Draw("a5");
   
   Double_t ha1p_sfyrbzpk_pdf_fx3017[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9};
   Double_t ha1p_sfyrbzpk_pdf_fy3017[10] = {
   0.9895072,
   0.9731542,
   0.9517868,
   0.9371233,
   0.924061,
   0.9102142,
   0.8983585,
   0.888922,
   0.881615,
   0.8810318};
   Double_t ha1p_sfyrbzpk_pdf_felx3017[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t ha1p_sfyrbzpk_pdf_fely3017[10] = {
   0.01190879,
   0.02653635,
   0.03751298,
   0.05070551,
   0.07491405,
   0.07343944,
   0.0897199,
   0.08711617,
   0.09626995,
   0.1043723};
   Double_t ha1p_sfyrbzpk_pdf_fehx3017[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t ha1p_sfyrbzpk_pdf_fehy3017[10] = {
   0.008272484,
   0.02432328,
   0.04243488,
   0.05477887,
   0.06250275,
   0.0735815,
   0.08120085,
   0.0830651,
   0.09917915,
   0.09368992};
   grae = new TGraphAsymmErrors(10,ha1p_sfyrbzpk_pdf_fx3017,ha1p_sfyrbzpk_pdf_fy3017,ha1p_sfyrbzpk_pdf_felx3017,ha1p_sfyrbzpk_pdf_fehx3017,ha1p_sfyrbzpk_pdf_fely3017,ha1p_sfyrbzpk_pdf_fehy3017);
   grae->SetName("ha1p_sfyrbzpk_pdf");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_ha1p_sfyrbzpk_pdf3017 = new TH1F("Graph_ha1p_sfyrbzpk_pdf3017","Graph",100,0,2.2);
   Graph_ha1p_sfyrbzpk_pdf3017->SetMinimum(0.7545475);
   Graph_ha1p_sfyrbzpk_pdf3017->SetMaximum(1.019892);
   Graph_ha1p_sfyrbzpk_pdf3017->SetDirectory(0);
   Graph_ha1p_sfyrbzpk_pdf3017->SetStats(0);
   Graph_ha1p_sfyrbzpk_pdf3017->SetLineStyle(0);
   Graph_ha1p_sfyrbzpk_pdf3017->SetMarkerStyle(20);
   Graph_ha1p_sfyrbzpk_pdf3017->GetXaxis()->SetLabelFont(42);
   Graph_ha1p_sfyrbzpk_pdf3017->GetXaxis()->SetLabelOffset(0.007);
   Graph_ha1p_sfyrbzpk_pdf3017->GetXaxis()->SetLabelSize(0.05);
   Graph_ha1p_sfyrbzpk_pdf3017->GetXaxis()->SetTitleSize(0.06);
   Graph_ha1p_sfyrbzpk_pdf3017->GetXaxis()->SetTitleOffset(0.9);
   Graph_ha1p_sfyrbzpk_pdf3017->GetXaxis()->SetTitleFont(42);
   Graph_ha1p_sfyrbzpk_pdf3017->GetYaxis()->SetLabelFont(42);
   Graph_ha1p_sfyrbzpk_pdf3017->GetYaxis()->SetLabelOffset(0.007);
   Graph_ha1p_sfyrbzpk_pdf3017->GetYaxis()->SetLabelSize(0.05);
   Graph_ha1p_sfyrbzpk_pdf3017->GetYaxis()->SetTitleSize(0.06);
   Graph_ha1p_sfyrbzpk_pdf3017->GetYaxis()->SetTitleOffset(1.25);
   Graph_ha1p_sfyrbzpk_pdf3017->GetYaxis()->SetTitleFont(42);
   Graph_ha1p_sfyrbzpk_pdf3017->GetZaxis()->SetLabelFont(42);
   Graph_ha1p_sfyrbzpk_pdf3017->GetZaxis()->SetLabelOffset(0.007);
   Graph_ha1p_sfyrbzpk_pdf3017->GetZaxis()->SetLabelSize(0.05);
   Graph_ha1p_sfyrbzpk_pdf3017->GetZaxis()->SetTitleSize(0.06);
   Graph_ha1p_sfyrbzpk_pdf3017->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_ha1p_sfyrbzpk_pdf3017);
   
   grae->Draw("5");
   
   Double_t ha1p_unhibnbh_graph_fx3018[10] = {
   0.1,
   0.3,
   0.5,
   0.7,
   0.9,
   1.1,
   1.3,
   1.5,
   1.7,
   1.9};
   Double_t ha1p_unhibnbh_graph_fy3018[10] = {
   0.9895073,
   0.9731542,
   0.9517869,
   0.9371233,
   0.924061,
   0.9102142,
   0.8983586,
   0.888922,
   0.881615,
   0.8810318};
   Double_t ha1p_unhibnbh_graph_felx3018[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t ha1p_unhibnbh_graph_fely3018[10] = {
   0.01019258,
   0.01018654,
   0.01017879,
   0.01017383,
   0.01016991,
   0.01016602,
   0.0101628,
   0.01016121,
   0.01016099,
   0.01016373};
   Double_t ha1p_unhibnbh_graph_fehx3018[10] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1};
   Double_t ha1p_unhibnbh_graph_fehy3018[10] = {
   0.01019258,
   0.01018654,
   0.01017879,
   0.01017383,
   0.01016991,
   0.01016602,
   0.0101628,
   0.01016121,
   0.01016099,
   0.01016373};
   grae = new TGraphAsymmErrors(10,ha1p_unhibnbh_graph_fx3018,ha1p_unhibnbh_graph_fy3018,ha1p_unhibnbh_graph_felx3018,ha1p_unhibnbh_graph_fehx3018,ha1p_unhibnbh_graph_fely3018,ha1p_unhibnbh_graph_fehy3018);
   grae->SetName("ha1p_unhibnbh_graph");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   
   TH1F *Graph_ha1p_unhibnbh_graph3018 = new TH1F("Graph_ha1p_unhibnbh_graph3018","Graph",100,0,2.2);
   Graph_ha1p_unhibnbh_graph3018->SetMinimum(0.8579849);
   Graph_ha1p_unhibnbh_graph3018->SetMaximum(1.012583);
   Graph_ha1p_unhibnbh_graph3018->SetDirectory(0);
   Graph_ha1p_unhibnbh_graph3018->SetStats(0);
   Graph_ha1p_unhibnbh_graph3018->SetLineStyle(0);
   Graph_ha1p_unhibnbh_graph3018->SetMarkerStyle(20);
   Graph_ha1p_unhibnbh_graph3018->GetXaxis()->SetLabelFont(42);
   Graph_ha1p_unhibnbh_graph3018->GetXaxis()->SetLabelOffset(0.007);
   Graph_ha1p_unhibnbh_graph3018->GetXaxis()->SetLabelSize(0.05);
   Graph_ha1p_unhibnbh_graph3018->GetXaxis()->SetTitleSize(0.06);
   Graph_ha1p_unhibnbh_graph3018->GetXaxis()->SetTitleOffset(0.9);
   Graph_ha1p_unhibnbh_graph3018->GetXaxis()->SetTitleFont(42);
   Graph_ha1p_unhibnbh_graph3018->GetYaxis()->SetLabelFont(42);
   Graph_ha1p_unhibnbh_graph3018->GetYaxis()->SetLabelOffset(0.007);
   Graph_ha1p_unhibnbh_graph3018->GetYaxis()->SetLabelSize(0.05);
   Graph_ha1p_unhibnbh_graph3018->GetYaxis()->SetTitleSize(0.06);
   Graph_ha1p_unhibnbh_graph3018->GetYaxis()->SetTitleOffset(1.25);
   Graph_ha1p_unhibnbh_graph3018->GetYaxis()->SetTitleFont(42);
   Graph_ha1p_unhibnbh_graph3018->GetZaxis()->SetLabelFont(42);
   Graph_ha1p_unhibnbh_graph3018->GetZaxis()->SetLabelOffset(0.007);
   Graph_ha1p_unhibnbh_graph3018->GetZaxis()->SetLabelSize(0.05);
   Graph_ha1p_unhibnbh_graph3018->GetZaxis()->SetTitleSize(0.06);
   Graph_ha1p_unhibnbh_graph3018->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_ha1p_unhibnbh_graph3018);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.55,0.68,0.88,0.91,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextFont(62);
   leg->SetTextSize(0.04);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(1001);
   TLegendEntry *entry=leg->AddEntry("NULL","MCFM nlo","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ha1p_pomsdbid_pdf","CT14nlo","lpf");

   ci = TColor::GetColor("#ff0000");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3004);

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#ff0000");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ha1p_sfyrbzpk_pdf","EPPS16nlo","lpf");

   ci = TColor::GetColor("#0000ff");
   entry->SetFillColor(ci);
   entry->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);

   ci = TColor::GetColor("#0000ff");
   entry->SetMarkerColor(ci);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ha1p_unhibnbh_graph","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(1);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.96,0.96,"pPb (2000 nb^{-1}, #sqrt{s_{NN}} = 8.16 TeV)");
tex->SetNDC();
   tex->SetTextAlign(31);
   tex->SetTextFont(42);
   tex->SetTextSize(0.0375);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.228,0.9213,"CMS");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(61);
   tex->SetTextSize(0.0475);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.228,0.8643,"Projection");
tex->SetNDC();
   tex->SetTextAlign(13);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0361);
   tex->SetLineWidth(2);
   tex->Draw();
   A3->Modified();
   A3->cd();
   A3->SetSelected(A3);
}
