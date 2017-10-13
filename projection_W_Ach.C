void chasym()
{
//=========Macro generated from canvas: chasym/
//=========  (Fri Oct 13 14:32:17 2017) by ROOT version6.04/02
   TCanvas *chasym = new TCanvas("chasym", "",0,0,600,600);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   chasym->SetHighLightColor(2);
   chasym->Range(-4.028,-0.2792683,2.272,0.3304878);
   chasym->SetFillColor(0);
   chasym->SetBorderMode(0);
   chasym->SetBorderSize(2);
   chasym->SetTickx(1);
   chasym->SetTicky(1);
   chasym->SetLeftMargin(0.16);
   chasym->SetRightMargin(0.04);
   chasym->SetTopMargin(0.05);
   chasym->SetBottomMargin(0.13);
   chasym->SetFrameFillStyle(0);
   chasym->SetFrameBorderMode(0);
   chasym->SetFrameFillStyle(0);
   chasym->SetFrameBorderMode(0);
   
   Double_t hasym_bqsqscsc_pdf_fx3007[25] = {
   -2.9,
   -2.7,
   -2.5,
   -2.3,
   -2.1,
   -1.9,
   -1.7,
   -1.5,
   -1.3,
   -1.1,
   -0.9,
   -0.7,
   -0.5,
   -0.3,
   -0.1,
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
   Double_t hasym_bqsqscsc_pdf_fy3007[25] = {
   -0.1227756,
   -0.06318444,
   -0.01589522,
   0.01801727,
   0.03760057,
   0.0540266,
   0.06399921,
   0.06582614,
   0.0700032,
   0.07114337,
   0.07349624,
   0.07562229,
   0.08150449,
   0.08281747,
   0.08880372,
   0.09735126,
   0.1017338,
   0.1153689,
   0.1297958,
   0.1439889,
   0.1592921,
   0.1800363,
   0.2008518,
   0.2178251,
   0.2375786};
   Double_t hasym_bqsqscsc_pdf_felx3007[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t hasym_bqsqscsc_pdf_fely3007[25] = {
   0.01805578,
   0.01680792,
   0.01658499,
   0.01543082,
   0.01442566,
   0.009589367,
   0.01272259,
   0.006582693,
   0.006930171,
   0.004457429,
   0.006841331,
   0.002607321,
   0.004965829,
   0.00156294,
   0.001624078,
   0.005968516,
   0.002533848,
   0.004694472,
   0.006004452,
   0.003363451,
   0.005703923,
   0.005508519,
   0.007976167,
   0.007577457,
   0.009239419};
   Double_t hasym_bqsqscsc_pdf_fehx3007[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t hasym_bqsqscsc_pdf_fehy3007[25] = {
   0.0152876,
   0.01483065,
   0.01386152,
   0.01171673,
   0.01118697,
   0.01201898,
   0.006355976,
   0.009515319,
   0.006857597,
   0.007316453,
   0.003131979,
   0.005291729,
   0.002133361,
   0.006010987,
   0.005527225,
   0.00254681,
   0.006326125,
   0.00465452,
   0.004094828,
   0.006283891,
   0.008817832,
   0.008130568,
   0.008118411,
   0.008238215,
   0.007873712};
   TGraphAsymmErrors *grae = new TGraphAsymmErrors(25,hasym_bqsqscsc_pdf_fx3007,hasym_bqsqscsc_pdf_fy3007,hasym_bqsqscsc_pdf_felx3007,hasym_bqsqscsc_pdf_fehx3007,hasym_bqsqscsc_pdf_fely3007,hasym_bqsqscsc_pdf_fehy3007);
   grae->SetName("hasym_bqsqscsc_pdf");
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
   
   TH1F *Graph_hasym_bqsqscsc_pdf3007 = new TH1F("Graph_hasym_bqsqscsc_pdf3007","Graph",100,-3.5,2.5);
   Graph_hasym_bqsqscsc_pdf3007->SetMinimum(-0.2);
   Graph_hasym_bqsqscsc_pdf3007->SetMaximum(0.3);
   Graph_hasym_bqsqscsc_pdf3007->SetDirectory(0);
   Graph_hasym_bqsqscsc_pdf3007->SetStats(0);
   Graph_hasym_bqsqscsc_pdf3007->SetLineStyle(0);
   Graph_hasym_bqsqscsc_pdf3007->SetMarkerStyle(20);
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetTitle("#eta_{cm}");
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetRange(9,92);
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetLabelFont(42);
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetLabelOffset(0.007);
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetLabelSize(0.05);
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetTitleSize(0.06);
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetTitleOffset(0.9);
   Graph_hasym_bqsqscsc_pdf3007->GetXaxis()->SetTitleFont(42);
   Graph_hasym_bqsqscsc_pdf3007->GetYaxis()->SetTitle("(N^{+} - N^{-}) / (N^{+} + N^{-})");
   Graph_hasym_bqsqscsc_pdf3007->GetYaxis()->SetLabelFont(42);
   Graph_hasym_bqsqscsc_pdf3007->GetYaxis()->SetLabelOffset(0.007);
   Graph_hasym_bqsqscsc_pdf3007->GetYaxis()->SetLabelSize(0.05);
   Graph_hasym_bqsqscsc_pdf3007->GetYaxis()->SetTitleSize(0.06);
   Graph_hasym_bqsqscsc_pdf3007->GetYaxis()->SetTitleOffset(1.25);
   Graph_hasym_bqsqscsc_pdf3007->GetYaxis()->SetTitleFont(42);
   Graph_hasym_bqsqscsc_pdf3007->GetZaxis()->SetLabelFont(42);
   Graph_hasym_bqsqscsc_pdf3007->GetZaxis()->SetLabelOffset(0.007);
   Graph_hasym_bqsqscsc_pdf3007->GetZaxis()->SetLabelSize(0.05);
   Graph_hasym_bqsqscsc_pdf3007->GetZaxis()->SetTitleSize(0.06);
   Graph_hasym_bqsqscsc_pdf3007->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_hasym_bqsqscsc_pdf3007);
   
   grae->Draw("a5");
   
   Double_t hasym_zjnghkjm_pdf_fx3008[25] = {
   -2.9,
   -2.7,
   -2.5,
   -2.3,
   -2.1,
   -1.9,
   -1.7,
   -1.5,
   -1.3,
   -1.1,
   -0.9,
   -0.7,
   -0.5,
   -0.3,
   -0.1,
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
   Double_t hasym_zjnghkjm_pdf_fy3008[25] = {
   -0.1406475,
   -0.07715488,
   -0.0274006,
   0.009630932,
   0.03442881,
   0.05189469,
   0.06475345,
   0.06939717,
   0.0740324,
   0.07401791,
   0.07812037,
   0.08038257,
   0.08285706,
   0.08521026,
   0.09016129,
   0.09226631,
   0.1004347,
   0.1135672,
   0.1264558,
   0.1389774,
   0.1535248,
   0.1763894,
   0.1928174,
   0.2091115,
   0.2324755};
   Double_t hasym_zjnghkjm_pdf_felx3008[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t hasym_zjnghkjm_pdf_fely3008[25] = {
   0.02497926,
   0.0287873,
   0.02307633,
   0.02690066,
   0.02286983,
   0.01490786,
   0.02003321,
   0.01327702,
   0.01197747,
   0.009692388,
   0.006975796,
   0.005877983,
   0.008416217,
   0.003460386,
   0.01025355,
   0.009060446,
   0.001385985,
   0.00591794,
   0.006955472,
   0.01124878,
   0.006777241,
   0.01525298,
   0.009718967,
   0.007990946,
   0.0138091};
   Double_t hasym_zjnghkjm_pdf_fehx3008[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t hasym_zjnghkjm_pdf_fehy3008[25] = {
   0.02349659,
   0.01953938,
   0.02216871,
   0.01755173,
   0.01707928,
   0.02023037,
   0.01238888,
   0.01473403,
   0.01022396,
   0.008334403,
   0.008575086,
   0.006205467,
   0.003732557,
   0.008513096,
   0.00332226,
   0.005309982,
   0.01811566,
   0.007196856,
   0.01019247,
   0.008370687,
   0.01093576,
   0.006046738,
   0.01494573,
   0.01505394,
   0.01024053};
   grae = new TGraphAsymmErrors(25,hasym_zjnghkjm_pdf_fx3008,hasym_zjnghkjm_pdf_fy3008,hasym_zjnghkjm_pdf_felx3008,hasym_zjnghkjm_pdf_fehx3008,hasym_zjnghkjm_pdf_fely3008,hasym_zjnghkjm_pdf_fehy3008);
   grae->SetName("hasym_zjnghkjm_pdf");
   grae->SetTitle("Graph");

   ci = TColor::GetColor("#0000ff");
   grae->SetFillColor(ci);
   grae->SetFillStyle(3005);

   ci = TColor::GetColor("#0000ff");
   grae->SetLineColor(ci);

   ci = TColor::GetColor("#0000ff");
   grae->SetMarkerColor(ci);
   
   TH1F *Graph_hasym_zjnghkjm_pdf3008 = new TH1F("Graph_hasym_zjnghkjm_pdf3008","Graph",100,-3.5,2.5);
   Graph_hasym_zjnghkjm_pdf3008->SetMinimum(-0.2064611);
   Graph_hasym_zjnghkjm_pdf3008->SetMaximum(0.2835503);
   Graph_hasym_zjnghkjm_pdf3008->SetDirectory(0);
   Graph_hasym_zjnghkjm_pdf3008->SetStats(0);
   Graph_hasym_zjnghkjm_pdf3008->SetLineStyle(0);
   Graph_hasym_zjnghkjm_pdf3008->SetMarkerStyle(20);
   Graph_hasym_zjnghkjm_pdf3008->GetXaxis()->SetLabelFont(42);
   Graph_hasym_zjnghkjm_pdf3008->GetXaxis()->SetLabelOffset(0.007);
   Graph_hasym_zjnghkjm_pdf3008->GetXaxis()->SetLabelSize(0.05);
   Graph_hasym_zjnghkjm_pdf3008->GetXaxis()->SetTitleSize(0.06);
   Graph_hasym_zjnghkjm_pdf3008->GetXaxis()->SetTitleOffset(0.9);
   Graph_hasym_zjnghkjm_pdf3008->GetXaxis()->SetTitleFont(42);
   Graph_hasym_zjnghkjm_pdf3008->GetYaxis()->SetLabelFont(42);
   Graph_hasym_zjnghkjm_pdf3008->GetYaxis()->SetLabelOffset(0.007);
   Graph_hasym_zjnghkjm_pdf3008->GetYaxis()->SetLabelSize(0.05);
   Graph_hasym_zjnghkjm_pdf3008->GetYaxis()->SetTitleSize(0.06);
   Graph_hasym_zjnghkjm_pdf3008->GetYaxis()->SetTitleOffset(1.25);
   Graph_hasym_zjnghkjm_pdf3008->GetYaxis()->SetTitleFont(42);
   Graph_hasym_zjnghkjm_pdf3008->GetZaxis()->SetLabelFont(42);
   Graph_hasym_zjnghkjm_pdf3008->GetZaxis()->SetLabelOffset(0.007);
   Graph_hasym_zjnghkjm_pdf3008->GetZaxis()->SetLabelSize(0.05);
   Graph_hasym_zjnghkjm_pdf3008->GetZaxis()->SetTitleSize(0.06);
   Graph_hasym_zjnghkjm_pdf3008->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_hasym_zjnghkjm_pdf3008);
   
   grae->Draw("5");
   
   Double_t hasym_gqjyonwt_graph_fx3009[25] = {
   -2.9,
   -2.7,
   -2.5,
   -2.3,
   -2.1,
   -1.9,
   -1.7,
   -1.5,
   -1.3,
   -1.1,
   -0.9,
   -0.7,
   -0.5,
   -0.3,
   -0.1,
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
   Double_t hasym_gqjyonwt_graph_fy3009[25] = {
   -0.1406475,
   -0.07715488,
   -0.02740058,
   0.009630937,
   0.03442881,
   0.0518947,
   0.06475346,
   0.06939717,
   0.07403238,
   0.0740179,
   0.07812039,
   0.08038256,
   0.08285706,
   0.08521024,
   0.09016126,
   0.09226628,
   0.1004347,
   0.1135673,
   0.1264558,
   0.1389773,
   0.1535247,
   0.1763894,
   0.1928174,
   0.2091115,
   0.2324755};
   Double_t hasym_gqjyonwt_graph_felx3009[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t hasym_gqjyonwt_graph_fely3009[25] = {
   0.01013005,
   0.01011997,
   0.01011178,
   0.01010587,
   0.01010202,
   0.01009885,
   0.01009695,
   0.01009586,
   0.01009526,
   0.01009529,
   0.01009533,
   0.01009551,
   0.01009598,
   0.01009687,
   0.01009749,
   0.01009848,
   0.01009925,
   0.01010021,
   0.01010091,
   0.01010177,
   0.01010275,
   0.01010326,
   0.01010428,
   0.01010556,
   0.01010638};
   Double_t hasym_gqjyonwt_graph_fehx3009[25] = {
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
   0.1,
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
   Double_t hasym_gqjyonwt_graph_fehy3009[25] = {
   0.01013005,
   0.01011997,
   0.01011178,
   0.01010587,
   0.01010202,
   0.01009885,
   0.01009695,
   0.01009586,
   0.01009526,
   0.01009529,
   0.01009533,
   0.01009551,
   0.01009598,
   0.01009687,
   0.01009749,
   0.01009848,
   0.01009925,
   0.01010021,
   0.01010091,
   0.01010177,
   0.01010275,
   0.01010326,
   0.01010428,
   0.01010556,
   0.01010638};
   grae = new TGraphAsymmErrors(25,hasym_gqjyonwt_graph_fx3009,hasym_gqjyonwt_graph_fy3009,hasym_gqjyonwt_graph_felx3009,hasym_gqjyonwt_graph_fehx3009,hasym_gqjyonwt_graph_fely3009,hasym_gqjyonwt_graph_fehy3009);
   grae->SetName("hasym_gqjyonwt_graph");
   grae->SetTitle("Graph");
   grae->SetFillColor(1);
   grae->SetFillStyle(0);
   
   TH1F *Graph_hasym_gqjyonwt_graph3009 = new TH1F("Graph_hasym_gqjyonwt_graph3009","Graph",100,-3.5,2.5);
   Graph_hasym_gqjyonwt_graph3009->SetMinimum(-0.1901135);
   Graph_hasym_gqjyonwt_graph3009->SetMaximum(0.2819178);
   Graph_hasym_gqjyonwt_graph3009->SetDirectory(0);
   Graph_hasym_gqjyonwt_graph3009->SetStats(0);
   Graph_hasym_gqjyonwt_graph3009->SetLineStyle(0);
   Graph_hasym_gqjyonwt_graph3009->SetMarkerStyle(20);
   Graph_hasym_gqjyonwt_graph3009->GetXaxis()->SetLabelFont(42);
   Graph_hasym_gqjyonwt_graph3009->GetXaxis()->SetLabelOffset(0.007);
   Graph_hasym_gqjyonwt_graph3009->GetXaxis()->SetLabelSize(0.05);
   Graph_hasym_gqjyonwt_graph3009->GetXaxis()->SetTitleSize(0.06);
   Graph_hasym_gqjyonwt_graph3009->GetXaxis()->SetTitleOffset(0.9);
   Graph_hasym_gqjyonwt_graph3009->GetXaxis()->SetTitleFont(42);
   Graph_hasym_gqjyonwt_graph3009->GetYaxis()->SetLabelFont(42);
   Graph_hasym_gqjyonwt_graph3009->GetYaxis()->SetLabelOffset(0.007);
   Graph_hasym_gqjyonwt_graph3009->GetYaxis()->SetLabelSize(0.05);
   Graph_hasym_gqjyonwt_graph3009->GetYaxis()->SetTitleSize(0.06);
   Graph_hasym_gqjyonwt_graph3009->GetYaxis()->SetTitleOffset(1.25);
   Graph_hasym_gqjyonwt_graph3009->GetYaxis()->SetTitleFont(42);
   Graph_hasym_gqjyonwt_graph3009->GetZaxis()->SetLabelFont(42);
   Graph_hasym_gqjyonwt_graph3009->GetZaxis()->SetLabelOffset(0.007);
   Graph_hasym_gqjyonwt_graph3009->GetZaxis()->SetLabelSize(0.05);
   Graph_hasym_gqjyonwt_graph3009->GetZaxis()->SetTitleSize(0.06);
   Graph_hasym_gqjyonwt_graph3009->GetZaxis()->SetTitleFont(42);
   grae->SetHistogram(Graph_hasym_gqjyonwt_graph3009);
   
   grae->Draw("p");
   
   TLegend *leg = new TLegend(0.55,0.17,0.88,0.4,NULL,"brNDC");
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
   entry=leg->AddEntry("hasym_bqsqscsc_pdf","CT14nlo","lpf");

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
   entry=leg->AddEntry("hasym_zjnghkjm_pdf","EPPS16nlo","lpf");

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
   entry=leg->AddEntry("hasym_gqjyonwt_graph","Data","lp");
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
   chasym->Modified();
   chasym->cd();
   chasym->SetSelected(chasym);
}
