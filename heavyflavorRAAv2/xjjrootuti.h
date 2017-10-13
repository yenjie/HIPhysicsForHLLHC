#ifndef _XJJROOT_UTI_H_
#define _XJJROOT_UTI_H_

/* xjjrootuti.h */

#include <TLatex.h>
#include <TLegend.h>
#include <TLine.h>
#include <TStyle.h>

namespace xjjroot
{
  void setgstyle();
  template <class T> void sethempty(T* hempty, Float_t xoffset=0, Float_t yoffset=0, Float_t titlesize=0.05, Float_t labelsize=0.045);
  void settex(TLatex* tex, Float_t tsize=0.04, Short_t align=11, Font_t tfont=42);
  void setleg(TLegend* leg, Float_t tsize=0.04, Font_t tfont=42);
  void setline(TLine* l, Color_t lcolor=kBlack, Style_t lstyle=1, Width_t lwidth=2);
}

/* ---------- */

template <class T>
void xjjroot::sethempty(T* hempty, Float_t xoffset/*=0*/, Float_t yoffset/*=0*/, Float_t titlesize/*=0.05*/, Float_t labelsize/*=0.045*/)
{
  hempty->GetXaxis()->CenterTitle();
  hempty->GetYaxis()->CenterTitle();
  hempty->GetXaxis()->SetTitleOffset(1.10+xoffset);
  hempty->GetYaxis()->SetTitleOffset(1.30+yoffset);
  hempty->GetXaxis()->SetTitleSize(titlesize);
  hempty->GetYaxis()->SetTitleSize(titlesize);
  hempty->GetXaxis()->SetTitleFont(42);
  hempty->GetYaxis()->SetTitleFont(42);
  hempty->GetXaxis()->SetLabelFont(42);
  hempty->GetYaxis()->SetLabelFont(42);
  hempty->GetXaxis()->SetLabelSize(labelsize);
  hempty->GetYaxis()->SetLabelSize(labelsize);
  hempty->SetStats(0);
}

void xjjroot::settex(TLatex* tex, Float_t tsize/*=0.04*/, Short_t align/*=11*/, Font_t tfont/*=42*/)
{
  tex->SetNDC();
  tex->SetTextFont(tfont);
  tex->SetTextAlign(align);
  tex->SetTextSize(tsize);
}

void xjjroot::setleg(TLegend* leg, Float_t tsize/*=0.04*/, Font_t tfont/*=42*/)
{
  leg->SetBorderSize(0);
  leg->SetFillStyle(0);
  leg->SetTextFont(tfont);
  leg->SetTextSize(tsize);
}

void xjjroot::setline(TLine* l, Color_t lcolor/*=kBlack*/, Style_t lstyle/*=1*/, Width_t lwidth/*=2*/)
{
  l->SetLineColor(lcolor);
  l->SetLineStyle(lstyle);
  l->SetLineWidth(lwidth);
}

#endif
