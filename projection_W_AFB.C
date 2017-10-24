void projection_W_AFB()
{
//=========Macro generated from canvas: A3/
//=========  (Mon Oct 23 17:09:20 2017) by ROOT version6.08/06
   TCanvas *A3 = new TCanvas("A3", "",24,148,800,854);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   A3->SetHighLightColor(2);
   A3->Range(-0.6078947,0.5955696,2.286842,1.291772);
   A3->SetFillColor(0);
   A3->SetBorderMode(0);
   A3->SetBorderSize(0);
   A3->SetTickx(1);
   A3->SetTicky(1);
   A3->SetLeftMargin(0.21);
   A3->SetRightMargin(0.03);
   A3->SetTopMargin(0.06);
   A3->SetBottomMargin(0.15);
   A3->SetFrameLineColor(0);
   A3->SetFrameBorderMode(0);
   A3->SetFrameLineColor(0);
   A3->SetFrameBorderMode(0);
   
   Double_t ha1p_pomsdbid_pdf_fx3001[10] = {
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
   Double_t ha1p_pomsdbid_pdf_fy3001[10] = {
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
   Double_t ha1p_pomsdbid_pdf_felx3001[10] = {
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
   Double_t ha1p_pomsdbid_pdf_fely3001[10] = {
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
   Double_t ha1p_pomsdbid_pdf_fehx3001[10] = {
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
   Double_t ha1p_pomsdbid_pdf_fehy3001[10] = {
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
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(10,ha1p_pomsdbid_pdf_fx3001,ha1p_pomsdbid_pdf_fy3001,ha1p_pomsdbid_pdf_felx3001,ha1p_pomsdbid_pdf_fehx3001,ha1p_pomsdbid_pdf_fely3001,ha1p_pomsdbid_pdf_fehy3001);
   grae->SetName("ha1p_pomsdbid_pdf");
   grae->SetTitle("Graph");
   grae->SetFillColor(2);
   grae->SetFillStyle(3004);
   grae->SetLineColor(2);
   grae->SetMarkerColor(2);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001 = new TH1F("Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001","Graph",100,0,2.2);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->SetMinimum(0.7);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->SetMaximum(1.25);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->SetStats(0);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->SetLineStyle(0);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->SetLineWidth(0);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->SetMarkerStyle(20);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetTitle("|#eta_{cm}|");
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->CenterTitle(true);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetNdivisions(509);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetTitleSize(0.0525);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->SetTitle("N (+#eta_{cm}) / N (-#eta_{cm})");
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->CenterTitle(true);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->SetLabelOffset(0.01);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->SetTitleSize(0.0525);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->SetTitleOffset(1.5);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_ha1p_pomsdbid_pdf301630013001);
   
   grae->Draw("a5");
   
   Double_t ha1p_sfyrbzpk_pdf_fx3002[10] = {
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
   Double_t ha1p_sfyrbzpk_pdf_fy3002[10] = {
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
   Double_t ha1p_sfyrbzpk_pdf_felx3002[10] = {
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
   Double_t ha1p_sfyrbzpk_pdf_fely3002[10] = {
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
   Double_t ha1p_sfyrbzpk_pdf_fehx3002[10] = {
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
   Double_t ha1p_sfyrbzpk_pdf_fehy3002[10] = {
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
   grae = new TGraphAsymmErrors(10,ha1p_sfyrbzpk_pdf_fx3002,ha1p_sfyrbzpk_pdf_fy3002,ha1p_sfyrbzpk_pdf_felx3002,ha1p_sfyrbzpk_pdf_fehx3002,ha1p_sfyrbzpk_pdf_fely3002,ha1p_sfyrbzpk_pdf_fehy3002);
   grae->SetName("ha1p_sfyrbzpk_pdf");
   grae->SetTitle("Graph");
   grae->SetFillColor(4);
   grae->SetFillStyle(3005);
   grae->SetLineColor(4);
   grae->SetMarkerColor(4);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002 = new TH1F("Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002","Graph",100,0,2.2);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->SetMinimum(0.7545475);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->SetMaximum(1.019892);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->SetDirectory(0);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->SetStats(0);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->SetLineStyle(0);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->SetMarkerStyle(20);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_ha1p_sfyrbzpk_pdf301730023002);
   
   grae->Draw("5");
   
   Double_t ha1p_unhibnbh_graph_fx3003[10] = {
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
   Double_t ha1p_unhibnbh_graph_fy3003[10] = {
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
   Double_t ha1p_unhibnbh_graph_felx3003[10] = {
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
   Double_t ha1p_unhibnbh_graph_fely3003[10] = {
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
   Double_t ha1p_unhibnbh_graph_fehx3003[10] = {
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
   Double_t ha1p_unhibnbh_graph_fehy3003[10] = {
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
   grae = new TGraphAsymmErrors(10,ha1p_unhibnbh_graph_fx3003,ha1p_unhibnbh_graph_fy3003,ha1p_unhibnbh_graph_felx3003,ha1p_unhibnbh_graph_fehx3003,ha1p_unhibnbh_graph_fely3003,ha1p_unhibnbh_graph_fehy3003);
   grae->SetName("ha1p_unhibnbh_graph");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   grae->SetMarkerStyle(20);
   
   TH1F *Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003 = new TH1F("Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003","Graph",100,0,2.2);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->SetMinimum(0.8579849);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->SetMaximum(1.012583);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->SetDirectory(0);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->SetStats(0);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->SetLineStyle(0);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->SetMarkerStyle(20);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetXaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetXaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetXaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetXaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetXaxis()->SetTitleOffset(0.9);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetXaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetYaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetYaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetYaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetYaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetYaxis()->SetTitleOffset(1.25);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetYaxis()->SetTitleFont(42);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetZaxis()->SetLabelFont(42);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetZaxis()->SetLabelOffset(0.007);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetZaxis()->SetLabelSize(0.05);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetZaxis()->SetTitleSize(0.06);
   Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_Graph_Graph_ha1p_unhibnbh_graph301830033003);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.6077694,0.6727494,0.9385965,0.9038929,NULL,"brNDC");
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
   entry=leg->AddEntry("ha1p_pomsdbid_pdf","CT14nlo","lf");
   entry->SetFillColor(2);
   entry->SetFillStyle(3004);
   entry->SetLineColor(2);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(2);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ha1p_sfyrbzpk_pdf","EPPS16nlo","lf");
   entry->SetFillColor(4);
   entry->SetFillStyle(3005);
   entry->SetLineColor(4);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(4);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   entry=leg->AddEntry("ha1p_unhibnbh_graph","Data","lp");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1);
   entry->SetTextFont(62);
   leg->Draw();
   TLatex *   tex = new TLatex(0.22,0.9596354,"#sqrt{s_{NN}} = 8.16 TeV");
tex->SetNDC();
   tex->SetTextFont(43);
   tex->SetTextSize(30);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.96,0.96,"pPb 2000 nb^{-1}");
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
   A3->Modified();
   A3->cd();
   A3->SetSelected(A3);
}
