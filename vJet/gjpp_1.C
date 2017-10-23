#include "TFile.h"
#include "TH1.h"
#include "TGraphErrors.h"

#include "TStyle.h"
#include "TLine.h"
#include "TColor.h"

#include <string>
#include <vector>
#include <fstream>

#include "tiling.h"

#define PROJ_UNC_COLOUR (TColor::GetColor("#ad33ff"))
#define CURRENT_UNC_COLOUR (TColor::GetColor("#a09f93"))

static float save_stat[16] = {0};

void set_histogram_style(TH1* h1, int style, std::vector<std::string>& option_strings);
void set_graph_style(TGraph* g1, int style, std::vector<std::string>& option_strings);

void save_stat_unc(TH1* h1);
void clear_stat_unc(TH1* h1);
void draw_current_unc(TGraph* gr, TH1* h1, TH1* h1_sys);
void draw_projected_unc(TGraph* gr, TH1* h1, TH1* h1_sys);
void draw_sys_unc(TGraph* gr, TH1* h1, TH1* h1_sys);

int gammaJetPlot(const std::string input_file, const std::string sys_file, const std::string hist_list) {
    gStyle->SetOptTitle(0);
    gStyle->SetOptStat(0);
    gStyle->SetHatchesLineWidth(3);

    TFile* input = new TFile(input_file.c_str(), "read");
    TFile* sys = new TFile(sys_file.c_str(), "read");

    int rows = 1;
    int columns = 1;

    std::vector<float> margins = {0.3, 0.04, 0.1, 0.2};
    std::vector<float> title_offsets = {1.25, 1.9};
    std::vector<float> label_offsets = {0.02, 0.015};
    std::vector<float> latex_sizes = {0.06, 0.045, 0.045, 0.042};
    std::vector<float> title_sizes = {0.064, 0.06};
    std::vector<float> label_sizes = {0.05, 0.05};
    std::vector<float> tick_sizes = {0.025, 0.025};
    std::vector<int> cover_options = {0, 0};

    float cms_latex_size = latex_sizes[0];
    float legend_latex_size = latex_sizes[1];
    float info_latex_size = latex_sizes[2];
    float canvas_latex_size = latex_sizes[3];

    std::vector<int> set_log_scale = {0};
    std::vector<float> y_min = {-0.05};
    std::vector<float> y_max = {1.6};

    std::vector<int> draw_sys = {4};
    std::vector<int> clear_entries = {3};

    std::vector<int> l_panel = {1};
    std::vector<float> l_x1 = {0.04};
    std::vector<float> l_y1 = {0.70};
    std::vector<float> l_x2 = {0.96};
    std::vector<float> l_y2 = {0.88};

    std::vector<float> i_x = {0.95};
    std::vector<float> i_y = {0.60};

    std::vector<std::string> x_titles = {"x_{j#gamma} = p^{jet}_{T}/p^{#gamma}_{T}"};
    std::vector<std::string> y_titles = {"#frac{1}{N_{#gamma}} #frac{dN_{j#gamma}}{dx_{j#gamma}}"};

    std::string hist_type = "xjg";
    std::string canvas_title = "xjg_projection";

    std::vector<std::string> config_lines;
    std::ifstream file_stream(hist_list);
    if (!file_stream) { printf("bad input list\n"); return 1; }
    std::string line;
    while (std::getline(file_stream, line))
        config_lines.push_back(line);

    std::vector<std::string> histogram_names[rows][columns];
    std::vector<int> styles[rows][columns];

    std::vector<std::string> legend_labels[l_panel.size()];

    std::size_t i = 0;

    int r = 0;
    int c = 0;
    for (; i<config_lines.size(); ++i) {
        if (r >= rows) { printf("error: not enough panels\n"); return 1; }

        if (config_lines[i] == "+") {
            c = (c + 1) % columns;
            r += !c;
        } else if (config_lines[i] == "=") {
            ++i;
            break;
        } else {
            std::size_t pos = config_lines[i].find(" ");
            histogram_names[r][c].push_back(config_lines[i].substr(0, pos));
            styles[r][c].push_back(std::stol(config_lines[i].substr(pos + 1)));
        }
    }

    std::size_t n = 0;
    for (; i<config_lines.size(); ++i) {
        if (config_lines[i] == "+") { ++n; }
        else { legend_labels[n].push_back(config_lines[i]); }
    }

    tiling* tiler = new tiling(columns, rows, 400, 400,
        margins[0], margins[1], margins[2], margins[3]);

    TCanvas* c1 = tiler->create_canvas("c1", "");
    for (int r=0; r<rows; ++r) {
        for (int c=0; c<columns; ++c) {
            c1->cd(r*columns + c+1);
            if (set_log_scale[r]) { gPad->SetLogy(); }

            TObject* generic[histogram_names[r][c].size()] = {0};
            TH1D* histograms[histogram_names[r][c].size()] = {0};
            TGraphErrors* graphs[histogram_names[r][c].size()] = {0};
            std::vector< std::vector< std::string > > option_strings(
                histogram_names[r][c].size(), std::vector< std::string >(0)
            );

            for (std::size_t l=0; l<histogram_names[r][c].size(); ++l) {
                if ((int)l == clear_entries[r*columns + c]) { gPad->Clear(); }

                TH1D* systematics = 0;
                systematics = (TH1D*)sys->Get((histogram_names[r][c][l] + "_diff_total").c_str());

                TGraph* gr = new TGraph();

                generic[l] = input->Get(histogram_names[r][c][l].c_str());

                if (generic[l]->InheritsFrom(TH1D::Class())) {
                    histograms[l] = (TH1D*)generic[l];
                    tiler->set_sizes(
                        histograms[l], 4,
                        title_sizes[0], title_sizes[1],
                        label_sizes[0], label_sizes[1],
                        tick_sizes[0], tick_sizes[1],
                        title_offsets[0], title_offsets[1],
                        label_offsets[0], label_offsets[1],
                        c, r
                    );

                    float smooth[2][16] = {
                        {2, -0.05, -0.2, 0.05, 2, 2, 2, 2, 2, 2, 0.03, 2, 2, 0.035, 0.03, 2},
                        {2, 2, -0.12, 0.04, 0.25, 2, 2, 0.25, -0.05, 2, 0.04, 2, 2, 2, 0.015, 0.01}
                    };
                    if (l > 0 && l < 4)
                        for (int b = 1; b <= histograms[l]->GetNbinsX(); ++b)
                            if (smooth[c][b - 1] < 1)
                                histograms[l]->SetBinContent(b, histograms[l]->GetBinContent(b) + smooth[c][b - 1]);

                    set_histogram_style(histograms[l], styles[r][c][l], option_strings[l]);
                    histograms[l]->GetXaxis()->SetTitle(x_titles[0].c_str());
                    histograms[l]->GetYaxis()->SetTitle(y_titles[r].c_str());

                    histograms[l]->SetAxisRange(y_min[r], y_max[r], "Y");
                    histograms[l]->SetMinimum(y_min[r]);
                    histograms[l]->SetMaximum(y_max[r]);

                    histograms[l]->SetNdivisions(504, "X");

                    /* draw systematic uncertainties */
                    if (systematics && (int)l < draw_sys[r*columns + c]) {
                        /* draw frame for systematics */
                        histograms[l]->Draw("same p x0");
                        if (l == 0) {
                            save_stat_unc(histograms[l]);
                        } else {
                            gr->SetFillStyle(1001);
                            gr->SetFillColorAlpha(CURRENT_UNC_COLOUR, 0.7);
                            draw_current_unc(gr, histograms[l], systematics);

                            gr->SetFillStyle(3254);
                            gr->SetFillColorAlpha(PROJ_UNC_COLOUR, 0.7);
                            draw_projected_unc(gr, histograms[l], systematics);
                        }
                        clear_stat_unc(histograms[l]);
                    }

                    /* draw histogram */
                    histograms[l] = (TH1D*)histograms[l]->DrawCopy(option_strings[l][0].c_str());
                    histograms[l]->ResetBit(kCanDelete);
                } else if (generic[l]->InheritsFrom(TGraphErrors::Class())) {
                    graphs[l] = (TGraphErrors*)generic[l];
                    tiler->set_sizes(
                        graphs[l], 4,
                        title_sizes[0], title_sizes[1],
                        label_sizes[0], label_sizes[1],
                        tick_sizes[0], tick_sizes[1],
                        title_offsets[0], title_offsets[1],
                        label_offsets[0], label_offsets[1],
                        c, r
                    );

                    set_graph_style(graphs[l], styles[r][c][l], option_strings[l]);
                    graphs[l]->GetXaxis()->SetTitle(x_titles[0].c_str());
                    graphs[l]->GetYaxis()->SetTitle(y_titles[r].c_str());

                    /* draw graph */
                    graphs[l]->Draw(option_strings[l][0].c_str());
                } else {
                    printf("unknown object type!\n");
                    return 1;
                }
            }

            for (std::size_t s=0; s<l_panel.size(); ++s) {
                if (r*columns + c+1 == l_panel[s]) {
                    TLegend* l1 = tiler->create_legend_on_frame(
                        l_x1[s], l_y1[s], l_x2[s], l_y2[s],
                        4, legend_latex_size, c, r
                    );

                    l1->SetNColumns(2);

                    int legend_order[7] = {0, 4, 1, 5, 2, 6, 3};

                    for (std::size_t t0=0; t0<legend_labels[s].size(); ++t0) {
                        int t = legend_order[t0];
                        if (legend_labels[s][t] == "@@") { continue; }

                        if (histograms[t]) {
                            l1->AddEntry(histograms[t], legend_labels[s][t].c_str(),
                                option_strings[t][1].c_str());
                        } else if (graphs[t]) {
                            l1->AddEntry(graphs[t], legend_labels[s][t].c_str(),
                                option_strings[t][1].c_str());
                        }
                    }

                    l1->Draw();
                }
            }

            if (!histograms[0]) { continue; }

            if (hist_type == "xjg") {
                TLine* line = new TLine();
                line->SetLineStyle(kDashed);
                line->SetLineWidth(2);
                gPad->Update();
                double xMin = gPad->GetUxmin();
                double xMax = gPad->GetUxmax();
                double yMin = gPad->GetUymin();
                double yMax = gPad->GetUymax();
                if (yMin < 0 && 0 < yMax)
                    line->DrawLine(xMin, 0, xMax, 0);
            }

            if (c == 0) {
                tiler->draw_latex_on_frame(0.04, 0.925, "CMS", 6, cms_latex_size, 11, c, r);
                tiler->draw_latex_on_frame(0.17, 0.925, "Projection", 5, cms_latex_size * 0.84, 11, c, r);
            }

            // draw latex info
            std::vector<std::string> plotInfo;

            if (histogram_names[r][c][0].find("ptBinAll") == std::string::npos) {
                int bins_pt[2][8] = {
                    {40, 60, 40, 50, 60, 80, 80, 100},
                    {9999, 9999, 50, 60, 80, 9999, 100, 9999}
                };

                std::size_t pos = histogram_names[r][c][0].find("ptBin") + 5;
                int pt_index = std::strtol(histogram_names[r][c][0].c_str() + pos, nullptr, 10);

                if (bins_pt[1][pt_index] < 9999) {
                    plotInfo.push_back(Form("p_{T}^{#gamma} #in (%d,%d) GeV/c", bins_pt[0][pt_index], bins_pt[1][pt_index]));
                } else {
                    plotInfo.push_back(Form("p_{T}^{#gamma} > %d GeV/c", bins_pt[0][pt_index]));
                }
            }

            if (c == 0) {
                plotInfo.push_back("#left|#eta^{#gamma}#right| < 1.44");
                plotInfo.push_back("#Delta#phi_{j#gamma} > #frac{7#pi}{8}");

                if (columns == 1) {
                    plotInfo.push_back("anti-k_{T} jet R = 0.3");
                    plotInfo.push_back("p_{T}^{jet} > 30 GeV/c");
                    plotInfo.push_back("#left|#eta^{jet}#right| < 1.6");
                }
            } else {
                plotInfo.clear();
                plotInfo.push_back("anti-k_{T} jet R = 0.3");
                plotInfo.push_back("p_{T}^{jet} > 30 GeV/c");
                plotInfo.push_back("#left|#eta^{jet}#right| < 1.6");
            }

            float line_pos = i_y[r*columns + c];
            int latex_align = (i_x[r*columns + c] > 0.8) ? 33 : 11;
            for (std::size_t q=0; q<plotInfo.size(); ++q) {
                tiler->draw_latex_on_frame(i_x[r*columns + c], line_pos + info_latex_size * 0.45 * (q == 2 || q == 4), plotInfo[q].c_str(), 4, info_latex_size, latex_align, c, r);
                line_pos -= info_latex_size * 1.5;
            }

            gPad->RedrawAxis();
        }
    }

    // Draw energy, lumi info, jet cuts on top
    c1->cd();

    // Cover cut-off axis labels
    tiler->cover_axis_labels(
        cover_options[0], cover_options[1],
        label_sizes[0], label_sizes[1],
        label_offsets[0], label_offsets[1]
    );

    float canvas_margin_left = tiler->get_canvas_margin_left();
    float canvas_margin_right = tiler->get_canvas_margin_right();
    float canvas_margin_top = tiler->get_canvas_margin_top();

    // draw common information
    std::string snnInfo = "#sqrt{s_{NN}} = 5.02 TeV";
    tiler->draw_latex_on_canvas(canvas_margin_left + 0.006, 1.0 - canvas_margin_top, snnInfo.c_str(), 4, canvas_latex_size, 11);

    std::string lumiInfo = "PbPb 10 nb^{-1}";
    tiler->draw_latex_on_canvas(1 - canvas_margin_right - 0.006, 1.0 - canvas_margin_top, lumiInfo.c_str(), 4, canvas_latex_size, 31);

    c1->SaveAs((canvas_title + ".pdf").c_str());

    return 0;
}

void set_histogram_style(TH1* h1, int style, std::vector<std::string>& option_strings) {
    switch (style) {
        case 0:     /* PbPb data 0-30% legend */
            h1->SetLineColor(1);
            h1->SetLineWidth(0);
            h1->SetMarkerColor(1);
            h1->SetMarkerStyle(20);
            h1->SetMarkerSize(1.2);
            option_strings.push_back("same p x0");
            option_strings.push_back("p");
            break;
        case 1:     /* PbPb data 0-30% */
            h1->SetLineColor(1);
            h1->SetLineWidth(0);
            h1->SetMarkerColor(1);
            h1->SetMarkerStyle(20);
            h1->SetMarkerSize(1.0);
            option_strings.push_back("same p x0");
            option_strings.push_back("p");
            break;
        case 2:     /* PbPb data 30-100% legend */
            h1->SetLineColor(1);
            h1->SetLineWidth(0);
            h1->SetMarkerColor(1);
            h1->SetMarkerStyle(21);
            h1->SetMarkerSize(1.2);
            option_strings.push_back("same p x0");
            option_strings.push_back("p");
            break;
        case 3:     /* PbPb data 30-100% */
            h1->SetLineColor(1);
            h1->SetLineWidth(0);
            h1->SetMarkerColor(1);
            h1->SetMarkerStyle(21);
            h1->SetMarkerSize(1.2);
            option_strings.push_back("same p x0");
            option_strings.push_back("p");
            break;
        case 4:     /* current unc. */
            h1->SetLineColorAlpha(CURRENT_UNC_COLOUR, 0.7);
            h1->SetLineWidth(0);
            h1->SetFillStyle(1001);
            h1->SetFillColorAlpha(CURRENT_UNC_COLOUR, 0.7);
            option_strings.push_back("same p x0");
            option_strings.push_back("f");
            break;
        case 5:     /* projected unc. */
            h1->SetLineColorAlpha(PROJ_UNC_COLOUR, 0);
            h1->SetLineWidth(0);
            h1->SetFillStyle(3254);
            h1->SetFillColorAlpha(PROJ_UNC_COLOUR, 0.7);
            option_strings.push_back("same p x0");
            option_strings.push_back("f");
            break;
        default:
            h1->SetLineColor(1);
            h1->SetLineWidth(0);
            option_strings.push_back("same p x0");
            option_strings.push_back("p");
            break;
    }
}

void set_graph_style(TGraph* g1, int style, std::vector<std::string>& option_strings) {
    switch (style) {
        case 6:    /* Hybrid */
            g1->SetLineColorAlpha(kTeal+9, 0.7);
            g1->SetLineStyle(1);
            g1->SetMarkerSize(0);
            g1->SetFillColorAlpha(kTeal+9, 0.7);
            option_strings.push_back("same l e3");
            option_strings.push_back("f");
            break;
        case 7:     /* JEWEL */
            g1->SetLineColor(9);
            g1->SetLineStyle(1);
            g1->SetLineWidth(2);
            g1->SetMarkerSize(0);
            option_strings.push_back("same l z");
            option_strings.push_back("l");
            break;
        case 8:    /* LBT */
            g1->SetLineColor(kOrange-3);
            g1->SetLineStyle(1);
            g1->SetLineWidth(2);
            g1->SetMarkerSize(0);
            option_strings.push_back("same l z");
            option_strings.push_back("l");
            break;
        default:
            option_strings.push_back("same l z");
            option_strings.push_back("l");
            break;
    }
}

void draw_sys_unc(TGraph* gr, TH1* h1, TH1* h1_sys) {
    for (int i=1; i<=h1->GetNbinsX(); ++i) {
        if (h1->GetBinError(i) == 0) continue;

        double x = h1->GetBinCenter(i);
        int sys_bin = h1_sys->FindBin(x);
        double bin_width = h1->GetBinLowEdge(i+1) - h1->GetBinLowEdge(i);

        double val = h1->GetBinContent(i);
        double error = TMath::Abs(h1_sys->GetBinContent(sys_bin)) / 2.;

        gr->SetPoint(0, x - (bin_width/2), std::max(val - error, h1->GetMinimum()));
        gr->SetPoint(1, x + (bin_width/2), std::max(val - error, h1->GetMinimum()));
        gr->SetPoint(2, x + (bin_width/2), std::min(val + error, h1->GetMaximum()));
        gr->SetPoint(3, x - (bin_width/2), std::min(val + error, h1->GetMaximum()));

        gr->DrawClone("f");
    }
}

void save_stat_unc(TH1* h1) {
    for (int i=1; i<=h1->GetNbinsX(); ++i) {
        save_stat[i-1] = h1->GetBinError(i);
    }
}

void clear_stat_unc(TH1* h1) {
    for (int i=1; i<=h1->GetNbinsX(); ++i) {
        h1->SetBinError(i, 0);
    }
}

void draw_current_unc(TGraph* gr, TH1* h1, TH1* h1_sys) {
    for (int i=1; i<=h1->GetNbinsX(); ++i) {
        double x = h1->GetBinCenter(i);
        int sys_bin = h1_sys->FindBin(x);
        double bin_width = h1->GetBinLowEdge(i+1) - h1->GetBinLowEdge(i);

        double val = h1->GetBinContent(i);
        double sys_error = TMath::Abs(h1_sys->GetBinContent(sys_bin));
        double stat_error = save_stat[i-1];
        double error = sqrt(sys_error * sys_error + stat_error * stat_error);

        gr->SetPoint(0, x - (bin_width/2), std::max(val - error, h1->GetMinimum()));
        gr->SetPoint(1, x + (bin_width/2), std::max(val - error, h1->GetMinimum()));
        gr->SetPoint(2, x + (bin_width/2), std::min(val + error, h1->GetMaximum()));
        gr->SetPoint(3, x - (bin_width/2), std::min(val + error, h1->GetMaximum()));

        gr->DrawClone("f");
    }
}

void draw_projected_unc(TGraph* gr, TH1* h1, TH1* h1_sys) {
    for (int i=1; i<=h1->GetNbinsX(); ++i) {
        double x = h1->GetBinCenter(i);
        int sys_bin = h1_sys->FindBin(x);
        double bin_width = h1->GetBinLowEdge(i+1) - h1->GetBinLowEdge(i);

        double val = h1->GetBinContent(i);
        double sys_error = TMath::Abs(h1_sys->GetBinContent(sys_bin)) / 2.;
        double stat_error = save_stat[i-1] / 5.;
        double error = sqrt(sys_error * sys_error + stat_error * stat_error);

        gr->SetPoint(0, x - (bin_width/2), std::max(val - error, h1->GetMinimum()));
        gr->SetPoint(1, x + (bin_width/2), std::max(val - error, h1->GetMinimum()));
        gr->SetPoint(2, x + (bin_width/2), std::min(val + error, h1->GetMaximum()));
        gr->SetPoint(3, x - (bin_width/2), std::min(val + error, h1->GetMaximum()));

        gr->DrawClone("f");
    }
}

int main(int argc, char* argv[]) {
    if (argc == 4) {
        return gammaJetPlot(argv[1], argv[2], argv[3]);
    } else {
        printf("Usage: ./Plotting/gammaJetPlot.exe [input file] [systematics file] [histogram list]\n");
        return 1;
    }
}
