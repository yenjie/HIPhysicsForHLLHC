g++ MakeSummaryPlotsPostApproval.cpp -o RunPlots `root-config --glibs --cflags`
mkdir -p Plots
mkdir -p PDFPlots/
./RunPlots
