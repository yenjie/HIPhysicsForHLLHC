void xjg_projection()
{
//=========Macro generated from canvas: c1/
//=========  (Fri Oct 13 13:04:38 2017) by ROOT version6.02/13
   TCanvas *c1 = new TCanvas("c1", "",0,0,980,560);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   c1->SetHighLightColor(2);
   c1->Range(0,0,1,1);
   c1->SetFillColor(0);
   c1->SetBorderMode(0);
   c1->SetBorderSize(2);
   c1->SetFrameBorderMode(0);
  
// ------------>Primitives in pad: tile_0_0
   TPad *tile_0_0 = new TPad("tile_0_0", "",0,0,0.5714285,1);
   tile_0_0->Draw();
   tile_0_0->cd();
   tile_0_0->Range(-0.8,-0.4875,2,1.9625);
   tile_0_0->SetFillColor(0);
   tile_0_0->SetBorderMode(0);
   tile_0_0->SetBorderSize(2);
   tile_0_0->SetTickx(1);
   tile_0_0->SetTicky(1);
   tile_0_0->SetLeftMargin(0.2857143);
   tile_0_0->SetRightMargin(0);
   tile_0_0->SetBottomMargin(0.1785714);
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
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(1,0.001987351);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(2,0.01672124);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(3,0.02823782);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(4,0.02009964);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(5,0.02031015);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(6,0.0196475);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(7,0.01989274);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(8,0.01897332);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(9,0.01522975);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(10,0.01261801);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(11,0.009353204);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(12,0.008422991);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(13,0.00607769);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(14,0.004522946);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(15,0.003274979);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(16,0.002955945);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetBinError(17,0.009840026);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMaximum(1.7);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetEntries(364.3781);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMarkerStyle(20);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetLabelOffset(0.01928571);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetLabelSize(0.05714286);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitleSize(0.06428573);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitleOffset(1.1);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetLabelOffset(0.01428572);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetLabelSize(0.05142858);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTitleSize(0.05714286);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm1->GetYaxis()->SetTitleOffset(1.7);
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
   -0.00208751,
   -0.00208751,
   0.02474733,
   0.02474733};
   TGraph *graph = new TGraph(4,_fx1,_fy1);
   graph->SetName("");
   graph->SetTitle("");

   Int_t ci;      // for color index setting
   TColor *color; // for color definition with alpha
   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph1 = new TH1F("Graph_Graph1","",100,0,0.1375);
   Graph_Graph1->SetMinimum(-0.004770994);
   Graph_Graph1->SetMaximum(0.02743082);
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
   0.2048214,
   0.2048214,
   0.2381795,
   0.2381795};
   graph = new TGraph(4,_fx2,_fy2);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph2 = new TH1F("Graph_Graph2","",100,0.1125,0.2625);
   Graph_Graph2->SetMinimum(0.2014856);
   Graph_Graph2->SetMaximum(0.2415153);
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
   0.6246519,
   0.6246519,
   0.7923064,
   0.7923064};
   graph = new TGraph(4,_fx3,_fy3);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph3 = new TH1F("Graph_Graph3","",100,0.2375,0.3875);
   Graph_Graph3->SetMinimum(0.6078864);
   Graph_Graph3->SetMaximum(0.8090719);
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
   0.6595221,
   0.6595221,
   0.7940873,
   0.7940873};
   graph = new TGraph(4,_fx4,_fy4);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph4 = new TH1F("Graph_Graph4","",100,0.3625,0.5125);
   Graph_Graph4->SetMinimum(0.6460656);
   Graph_Graph4->SetMaximum(0.8075438);
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
   0.757394,
   0.757394,
   0.8388024,
   0.8388024};
   graph = new TGraph(4,_fx5,_fy5);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph5 = new TH1F("Graph_Graph5","",100,0.4875,0.6375);
   Graph_Graph5->SetMinimum(0.7492532);
   Graph_Graph5->SetMaximum(0.8469432);
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
   0.7978337,
   0.7978337,
   0.89991,
   0.89991};
   graph = new TGraph(4,_fx6,_fy6);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph6 = new TH1F("Graph_Graph6","",100,0.6125,0.7625);
   Graph_Graph6->SetMinimum(0.7876261);
   Graph_Graph6->SetMaximum(0.9101176);
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
   0.8230258,
   0.8230258,
   0.8734768,
   0.8734768};
   graph = new TGraph(4,_fx7,_fy7);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph7 = new TH1F("Graph_Graph7","",100,0.7375,0.8875);
   Graph_Graph7->SetMinimum(0.8179807);
   Graph_Graph7->SetMaximum(0.8785219);
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
   0.6232557,
   0.6232557,
   0.7030845,
   0.7030845};
   graph = new TGraph(4,_fx8,_fy8);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph8 = new TH1F("Graph_Graph8","",100,0.8625,1.0125);
   Graph_Graph8->SetMinimum(0.6152728);
   Graph_Graph8->SetMaximum(0.7110674);
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
   0.3325934,
   0.3325934,
   0.4557705,
   0.4557705};
   graph = new TGraph(4,_fx9,_fy9);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph9 = new TH1F("Graph_Graph9","",100,0.9875,1.1375);
   Graph_Graph9->SetMinimum(0.3202757);
   Graph_Graph9->SetMaximum(0.4680882);
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
   0.1628947,
   0.1628947,
   0.2939095,
   0.2939095};
   graph = new TGraph(4,_fx10,_fy10);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph10 = new TH1F("Graph_Graph10","",100,1.1125,1.2625);
   Graph_Graph10->SetMinimum(0.1497932);
   Graph_Graph10->SetMaximum(0.3070109);
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
   0.04619783,
   0.04619783,
   0.1074003,
   0.1074003};
   graph = new TGraph(4,_fx11,_fy11);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph11 = new TH1F("Graph_Graph11","",100,1.2375,1.3875);
   Graph_Graph11->SetMinimum(0.04007758);
   Graph_Graph11->SetMaximum(0.1135206);
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
   0.02278675,
   0.02278675,
   0.06720265,
   0.06720265};
   graph = new TGraph(4,_fx12,_fy12);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph12 = new TH1F("Graph_Graph12","",100,1.3625,1.5125);
   Graph_Graph12->SetMinimum(0.01834516);
   Graph_Graph12->SetMaximum(0.07164424);
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
   0.005815431,
   0.005815431,
   0.03062086,
   0.03062086};
   graph = new TGraph(4,_fx13,_fy13);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph13 = new TH1F("Graph_Graph13","",100,1.4875,1.6375);
   Graph_Graph13->SetMinimum(0.003334888);
   Graph_Graph13->SetMaximum(0.0331014);
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
   -0.000492652,
   -0.000492652,
   0.0266497,
   0.0266497};
   graph = new TGraph(4,_fx14,_fy14);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph14 = new TH1F("Graph_Graph14","",100,1.6125,1.7625);
   Graph_Graph14->SetMinimum(-0.003206887);
   Graph_Graph14->SetMaximum(0.02936393);
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
   -0.001071839,
   -0.001071839,
   0.02363509,
   0.02363509};
   graph = new TGraph(4,_fx15,_fy15);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph15 = new TH1F("Graph_Graph15","",100,1.7375,1.8875);
   Graph_Graph15->SetMinimum(-0.003542532);
   Graph_Graph15->SetMaximum(0.02610578);
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
   0.009826272,
   0.009826272,
   0.01479807,
   0.01479807};
   graph = new TGraph(4,_fx16,_fy16);
   graph->SetName("");
   graph->SetTitle("");

   ci = 928;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph16 = new TH1F("Graph_Graph16","",100,1.8625,2.0125);
   Graph_Graph16->SetMinimum(0.009329092);
   Graph_Graph16->SetMaximum(0.01529525);
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
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(1,0.001987351);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(2,0.01672124);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(3,0.02823782);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(4,0.02009964);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(5,0.02031015);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(6,0.0196475);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(7,0.01989274);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(8,0.01897332);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(9,0.01522975);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(10,0.01261801);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(11,0.009353204);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(12,0.008422991);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(13,0.00607769);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(14,0.004522946);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(15,0.003274979);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(16,0.002955945);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetBinError(17,0.009840026);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMaximum(1.7);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetEntries(364.3781);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetDirectory(0);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMarkerStyle(20);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetLabelOffset(0.01928571);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetLabelSize(0.05714286);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitleSize(0.06428573);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitleOffset(1.1);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetLabelOffset(0.01428572);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetLabelSize(0.05142858);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTitleSize(0.05714286);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy2->GetYaxis()->SetTitleOffset(1.7);
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

   ci = 930;
   color = new TColor(ci, 0, 0.8, 0.2, " ", 0.7);
   gre->SetFillColor(ci);

   ci = 929;
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
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetLabelOffset(0.01928571);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetLabelSize(0.05714286);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTitleSize(0.06428573);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTickLength(0.025);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTitleOffset(1.1);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetXaxis()->SetTitleFont(42);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->CenterTitle(true);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetLabelFont(42);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetLabelOffset(0.01428572);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetLabelSize(0.05142858);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTitleSize(0.05714286);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTickLength(0.025);
   Graph_h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid1001->GetYaxis()->SetTitleOffset(1.7);
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
   Graph_Graph1002->GetXaxis()->SetLabelOffset(0.01928571);
   Graph_Graph1002->GetXaxis()->SetLabelSize(0.05714286);
   Graph_Graph1002->GetXaxis()->SetTitleSize(0.06428573);
   Graph_Graph1002->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1002->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1002->GetXaxis()->SetTitleFont(42);
   Graph_Graph1002->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_Graph1002->GetYaxis()->CenterTitle(true);
   Graph_Graph1002->GetYaxis()->SetLabelFont(42);
   Graph_Graph1002->GetYaxis()->SetLabelOffset(0.01428572);
   Graph_Graph1002->GetYaxis()->SetLabelSize(0.05142858);
   Graph_Graph1002->GetYaxis()->SetTitleSize(0.05714286);
   Graph_Graph1002->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1002->GetYaxis()->SetTitleOffset(1.7);
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
   Graph_Graph1003->GetXaxis()->SetLabelOffset(0.01928571);
   Graph_Graph1003->GetXaxis()->SetLabelSize(0.05714286);
   Graph_Graph1003->GetXaxis()->SetTitleSize(0.06428573);
   Graph_Graph1003->GetXaxis()->SetTickLength(0.025);
   Graph_Graph1003->GetXaxis()->SetTitleOffset(1.1);
   Graph_Graph1003->GetXaxis()->SetTitleFont(42);
   Graph_Graph1003->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_Graph1003->GetYaxis()->CenterTitle(true);
   Graph_Graph1003->GetYaxis()->SetLabelFont(42);
   Graph_Graph1003->GetYaxis()->SetLabelOffset(0.01428572);
   Graph_Graph1003->GetYaxis()->SetLabelSize(0.05142858);
   Graph_Graph1003->GetYaxis()->SetTitleSize(0.05714286);
   Graph_Graph1003->GetYaxis()->SetTickLength(0.025);
   Graph_Graph1003->GetYaxis()->SetTitleOffset(1.7);
   Graph_Graph1003->GetYaxis()->SetTitleFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelFont(42);
   Graph_Graph1003->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1003->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1003);
   
   gre->Draw(" l z");
   
   TLegend *leg = new TLegend(0.3142857,0.6428571,0.6571429,0.8714286,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.05142858);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy","PbPb 0 - 30%","pf");

   ci = 927;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 926;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(20);
   entry->SetMarkerSize(1.2);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h1D_xjg_ptBin7_hiBin1_PbPb_Data_Hybrid","Hybrid","f");

   ci = 930;
   color = new TColor(ci, 0, 0.8, 0.2, " ", 0.7);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 929;
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
   TLatex *   tex = new TLatex(0.9714286,0.6357143,"p_{T}^{#gamma} > 100 GeV/c");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04285715);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9714286,0.574,"#left|#eta^{#gamma}#right| < 1.44");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04285715);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9714286,0.5122857,"#Delta#phi_{j#gamma} > #frac{7#pi}{8}");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.04285715);
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
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(1,0.001987351);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(2,0.01672124);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(3,0.02823782);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(4,0.02009964);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(5,0.02031015);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(6,0.0196475);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(7,0.01989274);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(8,0.01897332);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(9,0.01522975);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(10,0.01261801);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(11,0.009353204);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(12,0.008422991);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(13,0.00607769);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(14,0.004522946);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(15,0.003274979);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(16,0.002955945);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetBinError(17,0.009840026);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMaximum(1.7);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetEntries(364.3781);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetDirectory(0);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMarkerStyle(20);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetLabelOffset(0.01928571);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetLabelSize(0.05714286);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitleSize(0.06428573);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitleOffset(1.1);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetLabelOffset(0.01428572);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetLabelSize(0.05142858);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitleSize(0.05714286);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTickLength(0.025);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitleOffset(1.7);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetYaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetLabelSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetTitleSize(0.035);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->GetZaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin1_phoSIG_jetSIG_final_norm_copy3->Draw("sameaxis");
   tile_0_0->Modified();
   c1->cd();
  
// ------------>Primitives in pad: tile_0_1
   TPad *tile_0_1 = new TPad("tile_0_1", "",0.5714285,0,1,1);
   tile_0_1->Draw();
   tile_0_1->cd();
   tile_0_1->Range(0,-0.4875,2.1,1.9625);
   tile_0_1->SetFillColor(0);
   tile_0_1->SetBorderMode(0);
   tile_0_1->SetBorderSize(2);
   tile_0_1->SetTickx(1);
   tile_0_1->SetTicky(1);
   tile_0_1->SetLeftMargin(0);
   tile_0_1->SetRightMargin(0.04761905);
   tile_0_1->SetBottomMargin(0.1785714);
   tile_0_1->SetFrameBorderMode(0);
   tile_0_1->SetFrameBorderMode(0);
   
   TH1D *h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4 = new TH1D("h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4","HI , p^{#gamma}_{T} > 100 GeV/c, 30-100 % ",16,0,2);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(1,-0.003813998);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(2,0.1456204);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(3,0.6436817);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(4,0.6432249);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(5,0.6814699);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(6,0.9807594);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(7,1.102366);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(8,0.9891727);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(9,0.7206683);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(10,0.4360201);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(11,0.1364539);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(12,0.09251954);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(13,0.06299114);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(14,0.03051199);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(15,0.015);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(16,0.01);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinContent(17,0.06102397);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(1,0.0003411344);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(2,0.01724113);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(3,0.03796012);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(4,0.03100849);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(5,0.0308906);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(6,0.04030385);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(7,0.04036184);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(8,0.03739728);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(9,0.03883184);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(10,0.03421106);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(11,0.02173245);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(12,0.01355854);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(13,0.01478889);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(14,0.006102397);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetBinError(17,0.04315046);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetMaximum(1.7);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetEntries(139.4101);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetMarkerStyle(21);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetLabelOffset(0.004047622);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetLabelSize(0.07619047);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetTitleSize(0.08571429);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetTickLength(0.01875);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetTitleOffset(0.825);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetLabelOffset(999);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetLabelSize(0.06857142);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetTitleSize(0.07619047);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetTickLength(0.03333333);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetTitleOffset(999);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetYaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetZaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetZaxis()->SetLabelSize(0.035);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetZaxis()->SetTitleSize(0.035);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->GetZaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm4->Draw(" e x0");
   
   Double_t _fx17[4] = {
   0,
   0.125,
   0.125,
   0};
   Double_t _fy17[4] = {
   -0.03119647,
   -0.03119647,
   0.02356847,
   0.02356847};
   graph = new TGraph(4,_fx17,_fy17);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph17 = new TH1F("Graph_Graph17","",100,0,0.1375);
   Graph_Graph17->SetMinimum(-0.03667296);
   Graph_Graph17->SetMaximum(0.02904497);
   Graph_Graph17->SetDirectory(0);
   Graph_Graph17->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph17->SetLineColor(ci);
   Graph_Graph17->GetXaxis()->SetLabelFont(42);
   Graph_Graph17->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetXaxis()->SetTitleFont(42);
   Graph_Graph17->GetYaxis()->SetLabelFont(42);
   Graph_Graph17->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetYaxis()->SetTitleFont(42);
   Graph_Graph17->GetZaxis()->SetLabelFont(42);
   Graph_Graph17->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph17->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph17);
   
   graph->Draw("f");
   
   Double_t _fx18[4] = {
   0.125,
   0.25,
   0.25,
   0.125};
   Double_t _fy18[4] = {
   0.1181102,
   0.1181102,
   0.1731307,
   0.1731307};
   graph = new TGraph(4,_fx18,_fy18);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph18 = new TH1F("Graph_Graph18","",100,0.1125,0.2625);
   Graph_Graph18->SetMinimum(0.1126082);
   Graph_Graph18->SetMaximum(0.1786327);
   Graph_Graph18->SetDirectory(0);
   Graph_Graph18->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph18->SetLineColor(ci);
   Graph_Graph18->GetXaxis()->SetLabelFont(42);
   Graph_Graph18->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetXaxis()->SetTitleFont(42);
   Graph_Graph18->GetYaxis()->SetLabelFont(42);
   Graph_Graph18->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetYaxis()->SetTitleFont(42);
   Graph_Graph18->GetZaxis()->SetLabelFont(42);
   Graph_Graph18->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph18->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph18);
   
   graph->Draw("f");
   
   Double_t _fx19[4] = {
   0.25,
   0.375,
   0.375,
   0.25};
   Double_t _fy19[4] = {
   0.5796742,
   0.5796742,
   0.7076893,
   0.7076893};
   graph = new TGraph(4,_fx19,_fy19);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph19 = new TH1F("Graph_Graph19","",100,0.2375,0.3875);
   Graph_Graph19->SetMinimum(0.5668727);
   Graph_Graph19->SetMaximum(0.7204908);
   Graph_Graph19->SetDirectory(0);
   Graph_Graph19->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph19->SetLineColor(ci);
   Graph_Graph19->GetXaxis()->SetLabelFont(42);
   Graph_Graph19->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetXaxis()->SetTitleFont(42);
   Graph_Graph19->GetYaxis()->SetLabelFont(42);
   Graph_Graph19->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetYaxis()->SetTitleFont(42);
   Graph_Graph19->GetZaxis()->SetLabelFont(42);
   Graph_Graph19->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph19->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph19);
   
   graph->Draw("f");
   
   Double_t _fx20[4] = {
   0.375,
   0.5,
   0.5,
   0.375};
   Double_t _fy20[4] = {
   0.5834928,
   0.5834928,
   0.702957,
   0.702957};
   graph = new TGraph(4,_fx20,_fy20);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph20 = new TH1F("Graph_Graph20","",100,0.3625,0.5125);
   Graph_Graph20->SetMinimum(0.5715463);
   Graph_Graph20->SetMaximum(0.7149034);
   Graph_Graph20->SetDirectory(0);
   Graph_Graph20->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph20->SetLineColor(ci);
   Graph_Graph20->GetXaxis()->SetLabelFont(42);
   Graph_Graph20->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetXaxis()->SetTitleFont(42);
   Graph_Graph20->GetYaxis()->SetLabelFont(42);
   Graph_Graph20->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetYaxis()->SetTitleFont(42);
   Graph_Graph20->GetZaxis()->SetLabelFont(42);
   Graph_Graph20->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph20->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph20);
   
   graph->Draw("f");
   
   Double_t _fx21[4] = {
   0.5,
   0.625,
   0.625,
   0.5};
   Double_t _fy21[4] = {
   0.649019,
   0.649019,
   0.7139209,
   0.7139209};
   graph = new TGraph(4,_fx21,_fy21);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph21 = new TH1F("Graph_Graph21","",100,0.4875,0.6375);
   Graph_Graph21->SetMinimum(0.6425288);
   Graph_Graph21->SetMaximum(0.7204111);
   Graph_Graph21->SetDirectory(0);
   Graph_Graph21->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph21->SetLineColor(ci);
   Graph_Graph21->GetXaxis()->SetLabelFont(42);
   Graph_Graph21->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetXaxis()->SetTitleFont(42);
   Graph_Graph21->GetYaxis()->SetLabelFont(42);
   Graph_Graph21->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetYaxis()->SetTitleFont(42);
   Graph_Graph21->GetZaxis()->SetLabelFont(42);
   Graph_Graph21->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph21->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph21);
   
   graph->Draw("f");
   
   Double_t _fx22[4] = {
   0.625,
   0.75,
   0.75,
   0.625};
   Double_t _fy22[4] = {
   0.9467795,
   0.9467795,
   1.014739,
   1.014739};
   graph = new TGraph(4,_fx22,_fy22);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph22 = new TH1F("Graph_Graph22","",100,0.6125,0.7625);
   Graph_Graph22->SetMinimum(0.9399836);
   Graph_Graph22->SetMaximum(1.021535);
   Graph_Graph22->SetDirectory(0);
   Graph_Graph22->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph22->SetLineColor(ci);
   Graph_Graph22->GetXaxis()->SetLabelFont(42);
   Graph_Graph22->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetXaxis()->SetTitleFont(42);
   Graph_Graph22->GetYaxis()->SetLabelFont(42);
   Graph_Graph22->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetYaxis()->SetTitleFont(42);
   Graph_Graph22->GetZaxis()->SetLabelFont(42);
   Graph_Graph22->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph22->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph22);
   
   graph->Draw("f");
   
   Double_t _fx23[4] = {
   0.75,
   0.875,
   0.875,
   0.75};
   Double_t _fy23[4] = {
   1.057874,
   1.057874,
   1.146857,
   1.146857};
   graph = new TGraph(4,_fx23,_fy23);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph23 = new TH1F("Graph_Graph23","",100,0.7375,0.8875);
   Graph_Graph23->SetMinimum(1.048976);
   Graph_Graph23->SetMaximum(1.155756);
   Graph_Graph23->SetDirectory(0);
   Graph_Graph23->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph23->SetLineColor(ci);
   Graph_Graph23->GetXaxis()->SetLabelFont(42);
   Graph_Graph23->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetXaxis()->SetTitleFont(42);
   Graph_Graph23->GetYaxis()->SetLabelFont(42);
   Graph_Graph23->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetYaxis()->SetTitleFont(42);
   Graph_Graph23->GetZaxis()->SetLabelFont(42);
   Graph_Graph23->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph23->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph23);
   
   graph->Draw("f");
   
   Double_t _fx24[4] = {
   0.875,
   1,
   1,
   0.875};
   Double_t _fy24[4] = {
   0.9486199,
   0.9486199,
   1.029726,
   1.029726};
   graph = new TGraph(4,_fx24,_fy24);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph24 = new TH1F("Graph_Graph24","",100,0.8625,1.0125);
   Graph_Graph24->SetMinimum(0.9405093);
   Graph_Graph24->SetMaximum(1.037836);
   Graph_Graph24->SetDirectory(0);
   Graph_Graph24->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph24->SetLineColor(ci);
   Graph_Graph24->GetXaxis()->SetLabelFont(42);
   Graph_Graph24->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetXaxis()->SetTitleFont(42);
   Graph_Graph24->GetYaxis()->SetLabelFont(42);
   Graph_Graph24->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetYaxis()->SetTitleFont(42);
   Graph_Graph24->GetZaxis()->SetLabelFont(42);
   Graph_Graph24->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph24->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph24);
   
   graph->Draw("f");
   
   Double_t _fx25[4] = {
   1,
   1.125,
   1.125,
   1};
   Double_t _fy25[4] = {
   0.6830231,
   0.6830231,
   0.7583135,
   0.7583135};
   graph = new TGraph(4,_fx25,_fy25);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph25 = new TH1F("Graph_Graph25","",100,0.9875,1.1375);
   Graph_Graph25->SetMinimum(0.675494);
   Graph_Graph25->SetMaximum(0.7658426);
   Graph_Graph25->SetDirectory(0);
   Graph_Graph25->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph25->SetLineColor(ci);
   Graph_Graph25->GetXaxis()->SetLabelFont(42);
   Graph_Graph25->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetXaxis()->SetTitleFont(42);
   Graph_Graph25->GetYaxis()->SetLabelFont(42);
   Graph_Graph25->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetYaxis()->SetTitleFont(42);
   Graph_Graph25->GetZaxis()->SetLabelFont(42);
   Graph_Graph25->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph25->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph25);
   
   graph->Draw("f");
   
   Double_t _fx26[4] = {
   1.125,
   1.25,
   1.25,
   1.125};
   Double_t _fy26[4] = {
   0.3943609,
   0.3943609,
   0.4776792,
   0.4776792};
   graph = new TGraph(4,_fx26,_fy26);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph26 = new TH1F("Graph_Graph26","",100,1.1125,1.2625);
   Graph_Graph26->SetMinimum(0.3860291);
   Graph_Graph26->SetMaximum(0.486011);
   Graph_Graph26->SetDirectory(0);
   Graph_Graph26->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph26->SetLineColor(ci);
   Graph_Graph26->GetXaxis()->SetLabelFont(42);
   Graph_Graph26->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetXaxis()->SetTitleFont(42);
   Graph_Graph26->GetYaxis()->SetLabelFont(42);
   Graph_Graph26->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetYaxis()->SetTitleFont(42);
   Graph_Graph26->GetZaxis()->SetLabelFont(42);
   Graph_Graph26->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph26->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph26);
   
   graph->Draw("f");
   
   Double_t _fx27[4] = {
   1.25,
   1.375,
   1.375,
   1.25};
   Double_t _fy27[4] = {
   0.1034247,
   0.1034247,
   0.169483,
   0.169483};
   graph = new TGraph(4,_fx27,_fy27);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph27 = new TH1F("Graph_Graph27","",100,1.2375,1.3875);
   Graph_Graph27->SetMinimum(0.09681888);
   Graph_Graph27->SetMaximum(0.1760889);
   Graph_Graph27->SetDirectory(0);
   Graph_Graph27->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph27->SetLineColor(ci);
   Graph_Graph27->GetXaxis()->SetLabelFont(42);
   Graph_Graph27->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetXaxis()->SetTitleFont(42);
   Graph_Graph27->GetYaxis()->SetLabelFont(42);
   Graph_Graph27->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetYaxis()->SetTitleFont(42);
   Graph_Graph27->GetZaxis()->SetLabelFont(42);
   Graph_Graph27->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph27->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph27);
   
   graph->Draw("f");
   
   Double_t _fx28[4] = {
   1.375,
   1.5,
   1.5,
   1.375};
   Double_t _fy28[4] = {
   0.05746695,
   0.05746695,
   0.1275721,
   0.1275721};
   graph = new TGraph(4,_fx28,_fy28);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph28 = new TH1F("Graph_Graph28","",100,1.3625,1.5125);
   Graph_Graph28->SetMinimum(0.05045643);
   Graph_Graph28->SetMaximum(0.1345826);
   Graph_Graph28->SetDirectory(0);
   Graph_Graph28->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph28->SetLineColor(ci);
   Graph_Graph28->GetXaxis()->SetLabelFont(42);
   Graph_Graph28->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetXaxis()->SetTitleFont(42);
   Graph_Graph28->GetYaxis()->SetLabelFont(42);
   Graph_Graph28->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetYaxis()->SetTitleFont(42);
   Graph_Graph28->GetZaxis()->SetLabelFont(42);
   Graph_Graph28->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph28->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph28);
   
   graph->Draw("f");
   
   Double_t _fx29[4] = {
   1.5,
   1.625,
   1.625,
   1.5};
   Double_t _fy29[4] = {
   0.03760762,
   0.03760762,
   0.08837466,
   0.08837466};
   graph = new TGraph(4,_fx29,_fy29);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph29 = new TH1F("Graph_Graph29","",100,1.4875,1.6375);
   Graph_Graph29->SetMinimum(0.03253091);
   Graph_Graph29->SetMaximum(0.09345137);
   Graph_Graph29->SetDirectory(0);
   Graph_Graph29->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph29->SetLineColor(ci);
   Graph_Graph29->GetXaxis()->SetLabelFont(42);
   Graph_Graph29->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph29->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph29->GetXaxis()->SetTitleFont(42);
   Graph_Graph29->GetYaxis()->SetLabelFont(42);
   Graph_Graph29->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph29->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph29->GetYaxis()->SetTitleFont(42);
   Graph_Graph29->GetZaxis()->SetLabelFont(42);
   Graph_Graph29->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph29->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph29->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph29);
   
   graph->Draw("f");
   
   Double_t _fx30[4] = {
   1.625,
   1.75,
   1.75,
   1.625};
   Double_t _fy30[4] = {
   0.005643769,
   0.005643769,
   0.0553802,
   0.0553802};
   graph = new TGraph(4,_fx30,_fy30);
   graph->SetName("");
   graph->SetTitle("");

   ci = 934;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   graph->SetFillColor(ci);
   
   TH1F *Graph_Graph30 = new TH1F("Graph_Graph30","",100,1.6125,1.7625);
   Graph_Graph30->SetMinimum(0.0006701259);
   Graph_Graph30->SetMaximum(0.06035385);
   Graph_Graph30->SetDirectory(0);
   Graph_Graph30->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph30->SetLineColor(ci);
   Graph_Graph30->GetXaxis()->SetLabelFont(42);
   Graph_Graph30->GetXaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetXaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetXaxis()->SetTitleFont(42);
   Graph_Graph30->GetYaxis()->SetLabelFont(42);
   Graph_Graph30->GetYaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetYaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetYaxis()->SetTitleFont(42);
   Graph_Graph30->GetZaxis()->SetLabelFont(42);
   Graph_Graph30->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph30->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph30->GetZaxis()->SetTitleFont(42);
   graph->SetHistogram(Graph_Graph30);
   
   graph->Draw("f");
   
   TH1D *h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5 = new TH1D("h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5","HI , p^{#gamma}_{T} > 100 GeV/c, 30-100 % ",16,0,2);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(1,-0.003813998);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(2,0.1456204);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(3,0.6436817);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(4,0.6432249);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(5,0.6814699);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(6,0.9807594);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(7,1.102366);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(8,0.9891727);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(9,0.7206683);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(10,0.4360201);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(11,0.1364539);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(12,0.09251954);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(13,0.06299114);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(14,0.03051199);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(15,0.015);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(16,0.01);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinContent(17,0.06102397);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(1,0.0003411344);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(2,0.01724113);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(3,0.03796012);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(4,0.03100849);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(5,0.0308906);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(6,0.04030385);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(7,0.04036184);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(8,0.03739728);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(9,0.03883184);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(10,0.03421106);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(11,0.02173245);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(12,0.01355854);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(13,0.01478889);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(14,0.006102397);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetBinError(17,0.04315046);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetMaximum(1.7);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetEntries(139.4101);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetDirectory(0);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetMarkerStyle(21);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetLabelOffset(0.004047622);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetLabelSize(0.07619047);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetTitleSize(0.08571429);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetTickLength(0.01875);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetTitleOffset(0.825);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetLabelOffset(999);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetLabelSize(0.06857142);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetTitleSize(0.07619047);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetTickLength(0.03333333);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetTitleOffset(999);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetYaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetZaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetZaxis()->SetLabelSize(0.035);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetZaxis()->SetTitleSize(0.035);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->GetZaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy5->Draw("same e x0");
   
   Double_t Graph0_fx1004[16] = {
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
   Double_t Graph0_fy1004[16] = {
   6.200137e-05,
   0.1173074,
   0.6563424,
   0.821268,
   0.9529136,
   1.041712,
   1.101066,
   0.851312,
   0.4232137,
   0.144321,
   0.04532802,
   0.0185301,
   0.009706616,
   0.004270374,
   0.001727414,
   0.0009754904};
   Double_t Graph0_fex1004[16] = {
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
   Double_t Graph0_fey1004[16] = {
   3.43777e-05,
   0.004876769,
   0.02392801,
   0.02810638,
   0.02824915,
   0.01826579,
   0.0169294,
   0.01370916,
   0.009290577,
   0.005191914,
   0.002719223,
   0.001546971,
   0.001157072,
   0.0006150062,
   0.0003489756,
   0.0002799195};
   gre = new TGraphErrors(16,Graph0_fx1004,Graph0_fy1004,Graph0_fex1004,Graph0_fey1004);
   gre->SetName("Graph0");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);
   gre->SetLineColor(9);
   gre->SetLineWidth(2);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_Graph1004 = new TH1F("Graph_Graph1004","Graph",100,0,2.125);
   Graph_Graph1004->SetMinimum(0);
   Graph_Graph1004->SetMaximum(1.229792);
   Graph_Graph1004->SetDirectory(0);
   Graph_Graph1004->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1004->SetLineColor(ci);
   Graph_Graph1004->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   Graph_Graph1004->GetXaxis()->CenterTitle(true);
   Graph_Graph1004->GetXaxis()->SetLabelFont(42);
   Graph_Graph1004->GetXaxis()->SetLabelOffset(0.004047622);
   Graph_Graph1004->GetXaxis()->SetLabelSize(0.07619047);
   Graph_Graph1004->GetXaxis()->SetTitleSize(0.08571429);
   Graph_Graph1004->GetXaxis()->SetTickLength(0.01875);
   Graph_Graph1004->GetXaxis()->SetTitleOffset(0.825);
   Graph_Graph1004->GetXaxis()->SetTitleFont(42);
   Graph_Graph1004->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_Graph1004->GetYaxis()->SetLabelFont(42);
   Graph_Graph1004->GetYaxis()->SetLabelOffset(999);
   Graph_Graph1004->GetYaxis()->SetLabelSize(0.06857142);
   Graph_Graph1004->GetYaxis()->SetTitleSize(0.07619047);
   Graph_Graph1004->GetYaxis()->SetTickLength(0.03333333);
   Graph_Graph1004->GetYaxis()->SetTitleOffset(999);
   Graph_Graph1004->GetYaxis()->SetTitleFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelFont(42);
   Graph_Graph1004->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1004->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1004);
   
   gre->Draw(" l z");
   
   Double_t Graph1_fx1005[16] = {
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
   Double_t Graph1_fy1005[16] = {
   0.00645542,
   0.174225,
   0.610952,
   0.630033,
   0.680276,
   0.863096,
   1.11555,
   1.09251,
   0.40171,
   0.116854,
   0.042202,
   0.0189323,
   0.0089978,
   0.00518111,
   0.00312707,
   0.00127437};
   Double_t Graph1_fex1005[16] = {
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
   Double_t Graph1_fey1005[16] = {
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
   gre = new TGraphErrors(16,Graph1_fx1005,Graph1_fy1005,Graph1_fex1005,Graph1_fey1005);
   gre->SetName("Graph1");
   gre->SetTitle("Graph");
   gre->SetFillColor(1);

   ci = TColor::GetColor("#ff9900");
   gre->SetLineColor(ci);
   gre->SetLineWidth(2);
   gre->SetMarkerSize(0);
   
   TH1F *Graph_Graph1005 = new TH1F("Graph_Graph1005","Graph",100,0,2.125);
   Graph_Graph1005->SetMinimum(0);
   Graph_Graph1005->SetMaximum(1.226978);
   Graph_Graph1005->SetDirectory(0);
   Graph_Graph1005->SetStats(0);

   ci = TColor::GetColor("#000099");
   Graph_Graph1005->SetLineColor(ci);
   Graph_Graph1005->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   Graph_Graph1005->GetXaxis()->CenterTitle(true);
   Graph_Graph1005->GetXaxis()->SetLabelFont(42);
   Graph_Graph1005->GetXaxis()->SetLabelOffset(0.004047622);
   Graph_Graph1005->GetXaxis()->SetLabelSize(0.07619047);
   Graph_Graph1005->GetXaxis()->SetTitleSize(0.08571429);
   Graph_Graph1005->GetXaxis()->SetTickLength(0.01875);
   Graph_Graph1005->GetXaxis()->SetTitleOffset(0.825);
   Graph_Graph1005->GetXaxis()->SetTitleFont(42);
   Graph_Graph1005->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   Graph_Graph1005->GetYaxis()->SetLabelFont(42);
   Graph_Graph1005->GetYaxis()->SetLabelOffset(999);
   Graph_Graph1005->GetYaxis()->SetLabelSize(0.06857142);
   Graph_Graph1005->GetYaxis()->SetTitleSize(0.07619047);
   Graph_Graph1005->GetYaxis()->SetTickLength(0.03333333);
   Graph_Graph1005->GetYaxis()->SetTitleOffset(999);
   Graph_Graph1005->GetYaxis()->SetTitleFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelFont(42);
   Graph_Graph1005->GetZaxis()->SetLabelSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleSize(0.035);
   Graph_Graph1005->GetZaxis()->SetTitleFont(42);
   gre->SetHistogram(Graph_Graph1005);
   
   gre->Draw(" l z");
   
   leg = new TLegend(0.03809524,0.7,0.4952381,0.8714286,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.06857142);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy","PbPb 30 - 100%","pf");

   ci = 933;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   entry->SetFillColor(ci);
   entry->SetFillStyle(1001);

   ci = 932;
   color = new TColor(ci, 0.9058824, 0.2980392, 0.2352941, " ", 0.7);
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1.2);
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
   line = new TLine(0,0,2,0);
   line->SetLineStyle(2);
   line->SetLineWidth(2);
   line->Draw();
      tex = new TLatex(0.9142857,0.6357143,"anti-k_{T} jet R = 0.3");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05714285);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9142857,0.574,"p_{T}^{jet} > 30 GeV/c");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05714285);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9142857,0.5122857,"#left|#eta^{jet}#right| < 1.6");
tex->SetNDC();
   tex->SetTextAlign(33);
   tex->SetTextFont(42);
   tex->SetTextSize(0.05714285);
   tex->SetLineWidth(2);
   tex->Draw();
   
   TH1D *h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6 = new TH1D("h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6","HI , p^{#gamma}_{T} > 100 GeV/c, 30-100 % ",16,0,2);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(1,-0.003813998);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(2,0.1456204);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(3,0.6436817);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(4,0.6432249);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(5,0.6814699);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(6,0.9807594);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(7,1.102366);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(8,0.9891727);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(9,0.7206683);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(10,0.4360201);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(11,0.1364539);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(12,0.09251954);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(13,0.06299114);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(14,0.03051199);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(15,0.015);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(16,0.01);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinContent(17,0.06102397);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(1,0.0003411344);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(2,0.01724113);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(3,0.03796012);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(4,0.03100849);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(5,0.0308906);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(6,0.04030385);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(7,0.04036184);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(8,0.03739728);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(9,0.03883184);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(10,0.03421106);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(11,0.02173245);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(12,0.01355854);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(13,0.01478889);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(14,0.006102397);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetBinError(17,0.04315046);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetMinimum(-0.05);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetMaximum(1.7);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetEntries(139.4101);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetDirectory(0);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetMarkerStyle(21);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->SetMarkerSize(1.2);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetTitle("x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}");
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->CenterTitle(true);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetNdivisions(504);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetLabelOffset(0.004047622);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetLabelSize(0.07619047);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetTitleSize(0.08571429);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetTickLength(0.01875);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetTitleOffset(0.825);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetXaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetTitle("#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}");
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetLabelOffset(999);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetLabelSize(0.06857142);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetTitleSize(0.07619047);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetTickLength(0.03333333);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetTitleOffset(999);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetYaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetZaxis()->SetLabelFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetZaxis()->SetLabelSize(0.035);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetZaxis()->SetTitleSize(0.035);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->GetZaxis()->SetTitleFont(42);
   h1D_xjg_ptBin7_hiBin2_phoSIG_jetSIG_final_norm_copy6->Draw("sameaxis");
   tile_0_1->Modified();
   c1->cd();
  
// ------------>Primitives in pad: x_cover_left_33
   TPad *x_cover_left_33 = new TPad("x_cover_left_33", "x_cover_left_33",0.5714285,0.1035714,0.6040816,0.1607143);
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
   TPad *x_cover_right_33 = new TPad("x_cover_right_33", "x_cover_right_33",0.9493877,0.1035714,1,0.1607143);
   x_cover_right_33->Draw();
   x_cover_right_33->cd();
   x_cover_right_33->Range(0,0,1,1);
   x_cover_right_33->SetFillColor(0);
   x_cover_right_33->SetBorderMode(0);
   x_cover_right_33->SetBorderSize(2);
   x_cover_right_33->SetFrameBorderMode(0);
   x_cover_right_33->Modified();
   c1->cd();
  
// ------------>Primitives in pad: x_cover_left_3
   TPad *x_cover_left_3 = new TPad("x_cover_left_3", "x_cover_left_3",0.09795918,0.1035714,0.1959184,0.1607143);
   x_cover_left_3->Draw();
   x_cover_left_3->cd();
   x_cover_left_3->Range(0,0,1,1);
   x_cover_left_3->SetFillColor(0);
   x_cover_left_3->SetBorderMode(0);
   x_cover_left_3->SetBorderSize(2);
   x_cover_left_3->SetFrameBorderMode(0);
   x_cover_left_3->Modified();
   c1->cd();
  
// ------------>Primitives in pad: x_cover_right_3
   TPad *x_cover_right_3 = new TPad("x_cover_right_3", "x_cover_right_3",0.5412245,0.1035714,0.5714285,0.1607143);
   x_cover_right_3->Draw();
   x_cover_right_3->cd();
   x_cover_right_3->Range(0,0,1,1);
   x_cover_right_3->SetFillColor(0);
   x_cover_right_3->SetBorderMode(0);
   x_cover_right_3->SetBorderSize(2);
   x_cover_right_3->SetFrameBorderMode(0);
   x_cover_right_3->Modified();
   c1->cd();
      tex = new TLatex(0.1692653,0.9464285,"CMS");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextSize(0.06857143);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.2592653,0.9416286,"Projection");
tex->SetNDC();
   tex->SetTextAlign(12);
   tex->SetTextFont(52);
   tex->SetTextSize(0.0576);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.9735919,0.9464285,"#sqrt{s_{NN}} = 5.02 TeV, PbPb 10 nb^{-1}");
tex->SetNDC();
   tex->SetTextAlign(32);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
      tex = new TLatex(0.5314286,0.9464285,"");
tex->SetNDC();
   tex->SetTextAlign(22);
   tex->SetTextFont(42);
   tex->SetLineWidth(2);
   tex->Draw();
   c1->Modified();
   c1->cd();
   c1->SetSelected(c1);

   c1->SaveAs("xjg_projection.pdf");
}
