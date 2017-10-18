void xjg_projection()
{
//=========Macro generated from canvas: c1/
//=========  (Wed Oct 18 16:45:31 2017) by ROOT version6.02/13
   TCanvas *c1 = new TCanvas("c1", "",0,0,535,520);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: tile_0_0
   TPad *tile_0_0 = new TPad("tile_0_0", "",0,0,1,1);
   tile_0_0->Draw();
   tile_0_0->cd();
   tile_0_0->Range(-0.6000001,-0.38,2.08,1.765);
   tile_0_0->SetFillColor(0);
   tile_0_0->SetBorderMode(0);
   tile_0_0->SetBorderSize(2);
   tile_0_0->SetTickx(1);
   tile_0_0->SetTicky(1);
   tile_0_0->SetLeftMargin(0.2238806);
   tile_0_0->SetRightMargin(0.02985075);
   tile_0_0->SetTopMargin(0.07692307);
   tile_0_0->SetBottomMargin(0.1538461);
   tile_0_0->SetFrameBorderMode(0);
   tile_0_0->SetFrameBorderMode(0);
   
   TH1D *h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1 = new TH1D("h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1","HI , p^{#gamma}_{T} > 100 GeV/c, 0-30 % ",16,0,2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(1,0.01132991);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(2,0.2215005);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(3,0.7084791);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(4,0.7268047);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(5,0.7980982);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(6,0.8488719);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(7,0.8482513);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(8,0.6631701);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(9,0.394182);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(10,0.2284021);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(11,0.07679907);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(12,0.0449947);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(13,0.01821814);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(14,0.01307852);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(15,0.01128162);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(16,0.01231217);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinContent(17,0.0137398);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(1,0.02423299);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(2,0.0343648);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(3,0.1535086);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(4,0.1227653);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(5,0.07603044);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(6,0.09394609);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(7,0.04957239);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(8,0.07430899);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(9,0.1119006);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(10,0.1185865);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(11,0.05587069);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(12,0.04085208);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(13,0.02313739);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(14,0.02484331);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(15,0.02247611);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(16,0.005362822);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(17,0.009840026);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMaximum(1.6);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetEntries(364.3781);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMarkerStyle(21);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetLabelOffset(0.01807692);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetLabelSize(0.04615384);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitleSize(0.04923077);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTickLength(0.02656212);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitleOffset(1.1);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetLabelOffset(0.01492537);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetLabelSize(0.04153846);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTitleSize(0.04615384);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTitleOffset(1.649254);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetZaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetZaxis()->SetLabelSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetZaxis()->SetTitleSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetZaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->Draw(" e x0");
   
   Double_t _fx1[4] = {
   0,
   0.125,
   0.125,
   0};
   Double_t _fy1[4] = {
   -0.002233892,
   -0.002233892,
   0.02489372,
   0.02489372};
   TGraph *graph = new TGraph(4,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,0.1375);
   Graph_Graph1->SetMinimum(-0.004946652);
   Graph_Graph1->SetMaximum(0.02760648);
   Graph_Graph1->SetDirectory(0);
   Graph_Graph1->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1->SetLineColor(ci);
   Graph_Graph1->GetXaxis()->SetLabelFont(42);
   Graph_Graph1->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetXaxis()->SetTitleFont(42);
   Graph_Graph1->GetYaxis()->SetLabelFont(42);
   Graph_Graph1->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetYaxis()->SetTitleFont(42);
   Graph_Graph1->GetZaxis()->SetLabelFont(42);
   Graph_Graph1->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph1);
   
   graph->Draw("f");
   
   Double_t _fx2[4] = {
   0.125,
   0.25,
   0.25,
   0.125};
   Double_t _fy2[4] = {
   0.1978829,
   0.1978829,
   0.2451181,
   0.2451181};
   graph = new TGraph(4,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.1125,0.2625);
   Graph_Graph2->SetMinimum(0.1931593);
   Graph_Graph2->SetMaximum(0.2498416);
   Graph_Graph2->SetDirectory(0);
   Graph_Graph2->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph2->SetLineColor(ci);
   Graph_Graph2->GetXaxis()->SetLabelFont(42);
   Graph_Graph2->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetXaxis()->SetTitleFont(42);
   Graph_Graph2->GetYaxis()->SetLabelFont(42);
   Graph_Graph2->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetYaxis()->SetTitleFont(42);
   Graph_Graph2->GetZaxis()->SetLabelFont(42);
   Graph_Graph2->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph2->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph2);
   
   graph->Draw("f");
   
   Double_t _fx3[4] = {
   0.25,
   0.375,
   0.375,
   0.25};
   Double_t _fy3[4] = {
   0.6200236,
   0.6200236,
   0.7969347,
   0.7969347};
   graph = new TGraph(4,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0.2375,0.3875);
   Graph_Graph3->SetMinimum(0.6023325);
   Graph_Graph3->SetMaximum(0.8146258);
   Graph_Graph3->SetDirectory(0);
   Graph_Graph3->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph3->SetLineColor(ci);
   Graph_Graph3->GetXaxis()->SetLabelFont(42);
   Graph_Graph3->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetXaxis()->SetTitleFont(42);
   Graph_Graph3->GetYaxis()->SetLabelFont(42);
   Graph_Graph3->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetYaxis()->SetTitleFont(42);
   Graph_Graph3->GetZaxis()->SetLabelFont(42);
   Graph_Graph3->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph3->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph3);
   
   graph->Draw("f");
   
   Double_t _fx4[4] = {
   0.375,
   0.5,
   0.5,
   0.375};
   Double_t _fy4[4] = {
   0.656584,
   0.656584,
   0.7970254,
   0.7970254};
   graph = new TGraph(4,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,0.3625,0.5125);
   Graph_Graph4->SetMinimum(0.6425399);
   Graph_Graph4->SetMaximum(0.8110695);
   Graph_Graph4->SetDirectory(0);
   Graph_Graph4->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph4->SetLineColor(ci);
   Graph_Graph4->GetXaxis()->SetLabelFont(42);
   Graph_Graph4->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetXaxis()->SetTitleFont(42);
   Graph_Graph4->GetYaxis()->SetLabelFont(42);
   Graph_Graph4->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetYaxis()->SetTitleFont(42);
   Graph_Graph4->GetZaxis()->SetLabelFont(42);
   Graph_Graph4->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph4->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph4);
   
   graph->Draw("f");
   
   Double_t _fx5[4] = {
   0.5,
   0.625,
   0.625,
   0.5};
   Double_t _fy5[4] = {
   0.7526083,
   0.7526083,
   0.8435881,
   0.8435881};
   graph = new TGraph(4,_fx5,_fy5);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,0.4875,0.6375);
   Graph_Graph5->SetMinimum(0.7435103);
   Graph_Graph5->SetMaximum(0.8526861);
   Graph_Graph5->SetDirectory(0);
   Graph_Graph5->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph5->SetLineColor(ci);
   Graph_Graph5->GetXaxis()->SetLabelFont(42);
   Graph_Graph5->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetXaxis()->SetTitleFont(42);
   Graph_Graph5->GetYaxis()->SetLabelFont(42);
   Graph_Graph5->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetYaxis()->SetTitleFont(42);
   Graph_Graph5->GetZaxis()->SetLabelFont(42);
   Graph_Graph5->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph5->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph5);
   
   graph->Draw("f");
   
   Double_t _fx6[4] = {
   0.625,
   0.75,
   0.75,
   0.625};
   Double_t _fy6[4] = {
   0.7941826,
   0.7941826,
   0.9035611,
   0.9035611};
   graph = new TGraph(4,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,0.6125,0.7625);
   Graph_Graph6->SetMinimum(0.7832448);
   Graph_Graph6->SetMaximum(0.914499);
   Graph_Graph6->SetDirectory(0);
   Graph_Graph6->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph6->SetLineColor(ci);
   Graph_Graph6->GetXaxis()->SetLabelFont(42);
   Graph_Graph6->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetXaxis()->SetTitleFont(42);
   Graph_Graph6->GetYaxis()->SetLabelFont(42);
   Graph_Graph6->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetYaxis()->SetTitleFont(42);
   Graph_Graph6->GetZaxis()->SetLabelFont(42);
   Graph_Graph6->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph6->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph6);
   
   graph->Draw("f");
   
   Double_t _fx7[4] = {
   0.75,
   0.875,
   0.875,
   0.75};
   Double_t _fy7[4] = {
   0.8161258,
   0.8161258,
   0.8803768,
   0.8803768};
   graph = new TGraph(4,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,0.7375,0.8875);
   Graph_Graph7->SetMinimum(0.8097007);
   Graph_Graph7->SetMaximum(0.8868019);
   Graph_Graph7->SetDirectory(0);
   Graph_Graph7->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph7->SetLineColor(ci);
   Graph_Graph7->GetXaxis()->SetLabelFont(42);
   Graph_Graph7->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetXaxis()->SetTitleFont(42);
   Graph_Graph7->GetYaxis()->SetLabelFont(42);
   Graph_Graph7->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetYaxis()->SetTitleFont(42);
   Graph_Graph7->GetZaxis()->SetLabelFont(42);
   Graph_Graph7->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph7->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph7);
   
   graph->Draw("f");
   
   Double_t _fx8[4] = {
   0.875,
   1,
   1,
   0.875};
   Double_t _fy8[4] = {
   0.6189757,
   0.6189757,
   0.7073645,
   0.7073645};
   graph = new TGraph(4,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,0.8625,1.0125);
   Graph_Graph8->SetMinimum(0.6101368);
   Graph_Graph8->SetMaximum(0.7162034);
   Graph_Graph8->SetDirectory(0);
   Graph_Graph8->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph8->SetLineColor(ci);
   Graph_Graph8->GetXaxis()->SetLabelFont(42);
   Graph_Graph8->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetXaxis()->SetTitleFont(42);
   Graph_Graph8->GetYaxis()->SetLabelFont(42);
   Graph_Graph8->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetYaxis()->SetTitleFont(42);
   Graph_Graph8->GetZaxis()->SetLabelFont(42);
   Graph_Graph8->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph8->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph8);
   
   graph->Draw("f");
   
   Double_t _fx9[4] = {
   1,
   1.125,
   1.125,
   1};
   Double_t _fy9[4] = {
   0.3307384,
   0.3307384,
   0.4576256,
   0.4576256};
   graph = new TGraph(4,_fx9,_fy9);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","",100,0.9875,1.1375);
   Graph_Graph9->SetMinimum(0.3180496);
   Graph_Graph9->SetMaximum(0.4703143);
   Graph_Graph9->SetDirectory(0);
   Graph_Graph9->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph9->SetLineColor(ci);
   Graph_Graph9->GetXaxis()->SetLabelFont(42);
   Graph_Graph9->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetXaxis()->SetTitleFont(42);
   Graph_Graph9->GetYaxis()->SetLabelFont(42);
   Graph_Graph9->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetYaxis()->SetTitleFont(42);
   Graph_Graph9->GetZaxis()->SetLabelFont(42);
   Graph_Graph9->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph9->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph9);
   
   graph->Draw("f");
   
   Double_t _fx10[4] = {
   1.125,
   1.25,
   1.25,
   1.125};
   Double_t _fy10[4] = {
   0.1616905,
   0.1616905,
   0.2951136,
   0.2951136};
   graph = new TGraph(4,_fx10,_fy10);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","",100,1.1125,1.2625);
   Graph_Graph10->SetMinimum(0.1483482);
   Graph_Graph10->SetMaximum(0.3084559);
   Graph_Graph10->SetDirectory(0);
   Graph_Graph10->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph10->SetLineColor(ci);
   Graph_Graph10->GetXaxis()->SetLabelFont(42);
   Graph_Graph10->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetXaxis()->SetTitleFont(42);
   Graph_Graph10->GetYaxis()->SetLabelFont(42);
   Graph_Graph10->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetYaxis()->SetTitleFont(42);
   Graph_Graph10->GetZaxis()->SetLabelFont(42);
   Graph_Graph10->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph10->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph10);
   
   graph->Draw("f");
   
   Double_t _fx11[4] = {
   1.25,
   1.375,
   1.375,
   1.25};
   Double_t _fy11[4] = {
   0.04480034,
   0.04480034,
   0.1087978,
   0.1087978};
   graph = new TGraph(4,_fx11,_fy11);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","",100,1.2375,1.3875);
   Graph_Graph11->SetMinimum(0.0384006);
   Graph_Graph11->SetMaximum(0.1151975);
   Graph_Graph11->SetDirectory(0);
   Graph_Graph11->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph11->SetLineColor(ci);
   Graph_Graph11->GetXaxis()->SetLabelFont(42);
   Graph_Graph11->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetXaxis()->SetTitleFont(42);
   Graph_Graph11->GetYaxis()->SetLabelFont(42);
   Graph_Graph11->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetYaxis()->SetTitleFont(42);
   Graph_Graph11->GetZaxis()->SetLabelFont(42);
   Graph_Graph11->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph11->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph11);
   
   graph->Draw("f");
   
   Double_t _fx12[4] = {
   1.375,
   1.5,
   1.5,
   1.375};
   Double_t _fy12[4] = {
   0.02124307,
   0.02124307,
   0.06874633,
   0.06874633};
   graph = new TGraph(4,_fx12,_fy12);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","",100,1.3625,1.5125);
   Graph_Graph12->SetMinimum(0.01649274);
   Graph_Graph12->SetMaximum(0.07349666);
   Graph_Graph12->SetDirectory(0);
   Graph_Graph12->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph12->SetLineColor(ci);
   Graph_Graph12->GetXaxis()->SetLabelFont(42);
   Graph_Graph12->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetXaxis()->SetTitleFont(42);
   Graph_Graph12->GetYaxis()->SetLabelFont(42);
   Graph_Graph12->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetYaxis()->SetTitleFont(42);
   Graph_Graph12->GetZaxis()->SetLabelFont(42);
   Graph_Graph12->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph12->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph12);
   
   graph->Draw("f");
   
   Double_t _fx13[4] = {
   1.5,
   1.625,
   1.625,
   1.5};
   Double_t _fy13[4] = {
   0.004406352,
   0.004406352,
   0.03202994,
   0.03202994};
   graph = new TGraph(4,_fx13,_fy13);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","",100,1.4875,1.6375);
   Graph_Graph13->SetMinimum(0.001643993);
   Graph_Graph13->SetMaximum(0.03479229);
   Graph_Graph13->SetDirectory(0);
   Graph_Graph13->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph13->SetLineColor(ci);
   Graph_Graph13->GetXaxis()->SetLabelFont(42);
   Graph_Graph13->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetXaxis()->SetTitleFont(42);
   Graph_Graph13->GetYaxis()->SetLabelFont(42);
   Graph_Graph13->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetYaxis()->SetTitleFont(42);
   Graph_Graph13->GetZaxis()->SetLabelFont(42);
   Graph_Graph13->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph13->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph13);
   
   graph->Draw("f");
   
   Double_t _fx14[4] = {
   1.625,
   1.75,
   1.75,
   1.625};
   Double_t _fy14[4] = {
   -0.001226505,
   -0.001226505,
   0.02738355,
   0.02738355};
   graph = new TGraph(4,_fx14,_fy14);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,1.6125,1.7625);
   Graph_Graph14->SetMinimum(-0.004087511);
   Graph_Graph14->SetMaximum(0.03024456);
   Graph_Graph14->SetDirectory(0);
   Graph_Graph14->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph14->SetLineColor(ci);
   Graph_Graph14->GetXaxis()->SetLabelFont(42);
   Graph_Graph14->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetXaxis()->SetTitleFont(42);
   Graph_Graph14->GetYaxis()->SetLabelFont(42);
   Graph_Graph14->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetYaxis()->SetTitleFont(42);
   Graph_Graph14->GetZaxis()->SetLabelFont(42);
   Graph_Graph14->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph14->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph14);
   
   graph->Draw("f");
   
   Double_t _fx15[4] = {
   1.75,
   1.875,
   1.875,
   1.75};
   Double_t _fy15[4] = {
   -0.001498577,
   -0.001498577,
   0.02406182,
   0.02406182};
   graph = new TGraph(4,_fx15,_fy15);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","",100,1.7375,1.8875);
   Graph_Graph15->SetMinimum(-0.004054617);
   Graph_Graph15->SetMaximum(0.02661786);
   Graph_Graph15->SetDirectory(0);
   Graph_Graph15->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph15->SetLineColor(ci);
   Graph_Graph15->GetXaxis()->SetLabelFont(42);
   Graph_Graph15->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetXaxis()->SetTitleFont(42);
   Graph_Graph15->GetYaxis()->SetLabelFont(42);
   Graph_Graph15->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetYaxis()->SetTitleFont(42);
   Graph_Graph15->GetZaxis()->SetLabelFont(42);
   Graph_Graph15->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph15->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph15);
   
   graph->Draw("f");
   
   Double_t _fx16[4] = {
   1.875,
   2,
   2,
   1.875};
   Double_t _fy16[4] = {
   0.008449879,
   0.008449879,
   0.01617447,
   0.01617447};
   graph = new TGraph(4,_fx16,_fy16);
   graph->SetName("");
   graph->SetTitle("");

   ci = 930;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","",100,1.8625,2.0125);
   Graph_Graph16->SetMinimum(0.007677421);
   Graph_Graph16->SetMaximum(0.01694693);
   Graph_Graph16->SetDirectory(0);
   Graph_Graph16->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph16->SetLineColor(ci);
   Graph_Graph16->GetXaxis()->SetLabelFont(42);
   Graph_Graph16->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetXaxis()->SetTitleFont(42);
   Graph_Graph16->GetYaxis()->SetLabelFont(42);
   Graph_Graph16->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetYaxis()->SetTitleFont(42);
   Graph_Graph16->GetZaxis()->SetLabelFont(42);
   Graph_Graph16->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph16->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph16);
   
   graph->Draw("f");
   
   TH1D *h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2 = new TH1D("h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2","HI , p^{#gamma}_{T} > 100 GeV/c, 0-30 % ",16,0,2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(1,0.01132991);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(2,0.2215005);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(3,0.7084791);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(4,0.7268047);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(5,0.7980982);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(6,0.8488719);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(7,0.8482513);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(8,0.6631701);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(9,0.394182);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(10,0.2284021);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(11,0.07679907);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(12,0.0449947);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(13,0.01821814);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(14,0.01307852);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(15,0.01128162);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(16,0.01231217);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinContent(17,0.0137398);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(1,0.02423299);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(2,0.0343648);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(3,0.1535086);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(4,0.1227653);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(5,0.07603044);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(6,0.09394609);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(7,0.04957239);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(8,0.07430899);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(9,0.1119006);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(10,0.1185865);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(11,0.05587069);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(12,0.04085208);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(13,0.02313739);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(14,0.02484331);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(15,0.02247611);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(16,0.005362822);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(17,0.009840026);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMaximum(1.6);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetEntries(364.3781);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetDirectory(0);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMarkerStyle(21);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetLabelOffset(0.01807692);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetLabelSize(0.04615384);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitleSize(0.04923077);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTickLength(0.02656212);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitleOffset(1.1);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetLabelOffset(0.01492537);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetLabelSize(0.04153846);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTitleSize(0.04615384);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTitleOffset(1.649254);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetZaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetZaxis()->SetLabelSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetZaxis()->SetTitleSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetZaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->Draw("same e x0");
   
   Double_t h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fx1001[16] = {
   0.0625,
   0.1875,
   0.3125,
   0.4375,
   0.5625,
   0.6875,
   0.8125,
   0.9375,
   1.0625,
   1.1875,
   1.3125,
   1.4375,
   1.5625,
   1.6875,
   1.8125,
   1.9375};
   Double_t h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fy1001[16] = {
   0.006049785,
   0.1387175,
   0.6155565,
   0.6846065,
   0.7572025,
   0.823318,
   0.8393135,
   0.687001,
   0.409855,
   0.1917825,
   0.0912497,
   0.04831545,
   0.0304073,
   0.02068575,
   0.01430845,
   0.01114953};
   Double_t h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fex1001[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fey1001[16] = {
   0.002087275,
   0.0089685,
   0.0142075,
   0.0184645,
   0.0207025,
   0.031802,
   0.0577415,
   0.059171,
   0.038591,
   0.0237545,
   0.0083238,
   0.00453385,
   0.0049712,
   0.00434305,
   0.00376325,
   0.001829575};
   gre = new TGraphErrors(16,h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fx1001,h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fy1001,h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fex1001,h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid_fey1001);
   gre->SetName("h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid");
   gre->SetTitle("Graph");

   ci = 932;
   color = new TColor(ci, 0, 0.8, 0.2, " ", 0.7);
   gre->SetFillColor(ci);

   ci = 931;
   color = new TColor(ci, 0, 0.8, 0.2, " ", 0.7);
   gre->SetLineColor(ci);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001 = new TH1F("Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001","Graph",100,0,2.125);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->SetMinimum(0);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->SetMaximum(0.9863642);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->SetDirectory(0);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->SetLineColor(ci);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->CenterTitle(true);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetLabelFont(42);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetLabelOffset(0.01807692);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetLabelSize(0.04615384);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTitleSize(0.04923077);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTickLength(0.02656212);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTitleFont(42);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->CenterTitle(true);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetLabelFont(42);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetLabelOffset(0.01492537);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetLabelSize(0.04153846);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTitleSize(0.04615384);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTickLength(0.025);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTitleOffset(1.649254);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTitleFont(42);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetZaxis()->SetLabelFont(42);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetZaxis()->SetLabelSize(0.035);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetZaxis()->SetTitleSize(0.035);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001);
   
   gre->Draw(" l e3");
   
   Double_t Graph0_fx1002[16] = {
   0.0625,
   0.1875,
   0.3125,
   0.4375,
   0.5625,
   0.6875,
   0.8125,
   0.9375,
   1.0625,
   1.1875,
   1.3125,
   1.4375,
   1.5625,
   1.6875,
   1.8125,
   1.9375};
   Double_t Graph0_fy1002[16] = {
   5.245782e-05,
   0.130819,
   0.7467652,
   0.960328,
   1.014661,
   1.024019,
   0.8586152,
   0.5666874,
   0.258995,
   0.07708322,
   0.02566851,
   0.01046518,
   0.004733726,
   0.001967284,
   0.0009777896,
   0.0004454933};
   Double_t Graph0_fex1002[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph0_fey1002[16] = {
   2.338676e-05,
   0.004950168,
   0.02278538,
   0.02557496,
   0.02308914,
   0.01770588,
   0.01475934,
   0.01155569,
   0.007356447,
   0.003698602,
   0.001865439,
   0.001152776,
   0.0007233593,
   0.0003834714,
   0.000233868,
   0.000146882};
   gre = new TGraphErrors(16,Graph0_fx1002,Graph0_fy1002,Graph0_fex1002,Graph0_fey1002);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(9);
   gre->SetLineWidth(2);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_Graph1002 = new TH1F("Graph_Graph1002","Graph",100,0,2.125);
   Graph_Graph1002->SetMinimum(0);
   Graph_Graph1002->SetMaximum(1.145894);
   Graph_Graph1002->SetDirectory(0);
   Graph_Graph1002->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1002->SetLineColor(ci);
   Graph_Graph1002->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   Graph_Graph1002->GetXaxis()->CenterTitle(true);
   Graph_Graph1002->GetXaxis()->SetLabelFont(42);
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.01807692);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.04615384);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.04923077);
   Graph_Graph1002->GetXaxis()->SetTickLength(0.02656212);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.01492537);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.04153846);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.04615384);
   Graph_Graph1002->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.649254);
   Graph_Graph1002->GetYaxis()->SetTitleFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelFont(42);
   Graph_Graph1002->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1002->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1002);
   
   gre->Draw(" l z");
   
   Double_t Graph1_fx1003[16] = {
   0.0625,
   0.1875,
   0.3125,
   0.4375,
   0.5625,
   0.6875,
   0.8125,
   0.9375,
   1.0625,
   1.1875,
   1.3125,
   1.4375,
   1.5625,
   1.6875,
   1.8125,
   1.9375};
   Double_t Graph1_fy1003[16] = {
   0.00960452,
   0.216462,
   0.820543,
   0.850356,
   0.894116,
   0.905249,
   0.788204,
   0.434406,
   0.132265,
   0.0477457,
   0.018886,
   0.00781631,
   0.00397002,
   0.00167359,
   0.000513471,
   0.000768573};
   Double_t Graph1_fex1003[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   Double_t Graph1_fey1003[16] = {
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0,
   0};
   gre = new TGraphErrors(16,Graph1_fx1003,Graph1_fy1003,Graph1_fex1003,Graph1_fey1003);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_Graph1003 = new TH1F("Graph_Graph1003","Graph",100,0,2.125);
   Graph_Graph1003->SetMinimum(0);
   Graph_Graph1003->SetMaximum(0.9957226);
   Graph_Graph1003->SetDirectory(0);
   Graph_Graph1003->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1003->SetLineColor(ci);
   Graph_Graph1003->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   Graph_Graph1003->GetXaxis()->CenterTitle(true);
   Graph_Graph1003->GetXaxis()->SetLabelFont(42);
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.01807692);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.04615384);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.04923077);
   Graph_Graph1003->GetXaxis()->SetTickLength(0.02656212);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.01492537);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.04153846);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.04615384);
   Graph_Graph1003->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.649254);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw(" l z");
   
   TLegend *leg = new TLegend(0.2537314,0.6923077,0.6119403,0.9,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.04153846);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy","PbPb 0 - 30%","pf");

   ci = 929;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid","Hybrid","f");

   ci = 932;
   color = new TColor(ci, 0, 0.8, 0.2, " ", 0.7);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 931;
   color = new TColor(ci, 0, 0.8, 0.2, " ", 0.7);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph0","J#scale[0.8]{EWEL} + P#scale[0.8]{YTHIA}","l");
   entry->SetLineColor(9);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("Graph1","#scale[0.9]{LBT (2017)}","l");

   ci = TColor::GetColor("#ff9900");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   TLine *line = new TLine(0,0,2,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
   TLatex *   tex = new TLatex(0.9402985,0.7076923,"p_{T}^{#gamma} > 100 GeV/c");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03846154);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9402985,0.6461539,"#left|#eta^{#gamma}#right| < 1.44");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03846154);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9402985,0.5961539,"#Delta#phi_{j#gamma} > #frac{7#pi}{8}");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03846154);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9402985,0.523077,"anti-k_{T} jet R = 0.3");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03846154);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9402985,0.4615385,"p_{T}^{jet} > 30 GeV/c");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03846154);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9402985,0.4,"#left|#eta^{jet}#right| < 1.6");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03846154);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3 = new TH1D("h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3","HI , p^{#gamma}_{T} > 100 GeV/c, 0-30 % ",16,0,2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(1,0.01132991);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(2,0.2215005);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(3,0.7084791);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(4,0.7268047);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(5,0.7980982);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(6,0.8488719);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(7,0.8482513);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(8,0.6631701);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(9,0.394182);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(10,0.2284021);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(11,0.07679907);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(12,0.0449947);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(13,0.01821814);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(14,0.01307852);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(15,0.01128162);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(16,0.01231217);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinContent(17,0.0137398);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(1,0.02423299);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(2,0.0343648);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(3,0.1535086);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(4,0.1227653);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(5,0.07603044);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(6,0.09394609);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(7,0.04957239);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(8,0.07430899);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(9,0.1119006);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(10,0.1185865);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(11,0.05587069);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(12,0.04085208);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(13,0.02313739);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(14,0.02484331);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(15,0.02247611);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(16,0.005362822);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(17,0.009840026);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMaximum(1.6);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetEntries(364.3781);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetDirectory(0);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMarkerStyle(21);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetLabelOffset(0.01807692);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetLabelSize(0.04615384);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitleSize(0.04923077);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTickLength(0.02656212);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitleOffset(1.1);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetLabelOffset(0.01492537);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetLabelSize(0.04153846);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitleSize(0.04615384);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitleOffset(1.649254);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetLabelSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetTitleSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->Draw("sameaxis");
   tile_0_0->Modified();
   c1->cd();
  
// ------------>Primitives in pad: x_cover_left_33
   TPad *x_cover_left_33 = new TPad("x_cover_left_33", "x_cover_left_33",0.1343284,0.08846159,0.2686567,0.1346154);
   x_cover_left_33->Draw();
   x_cover_left_33->cd();
   x_cover_left_33->Range(0,0,1,1);
   x_cover_left_33->SetFillColor(0);
   x_cover_left_33->SetBorderMode(0);
   x_cover_left_33->SetBorderSize(2);
   x_cover_left_33->SetFrameBorderMode(0);
   x_cover_left_33->Modified();
   c1->cd();
  
// ------------>Primitives in pad: x_cover_right_33
   TPad *x_cover_right_33 = new TPad("x_cover_right_33", "x_cover_right_33",0.9287314,0.08846159,1,0.1346154);
   x_cover_right_33->Draw();
   x_cover_right_33->cd();
   x_cover_right_33->Range(0,0,1,1);
   x_cover_right_33->SetFillColor(0);
   x_cover_right_33->SetBorderMode(0);
   x_cover_right_33->SetBorderSize(2);
   x_cover_right_33->SetFrameBorderMode(0);
   x_cover_right_33->Modified();
   c1->cd();
      tex = new TLatex(0.2298806,0.9615384,"CMS");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.04615385);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.3228806,0.9570385,"Projection");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(52);
   tex->SetTextSize(0.03692308);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9641493,0.9615384,"#sqrt{s_{NN}} = 5.02 TeV, PbPb 10 nb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03692308);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5570149,0.9615384,"");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetTextSize(0.03692308);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);

   c1->SaveAs("xjg_projection.pdf");
}
