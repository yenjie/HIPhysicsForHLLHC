# Four panel plots

# g++ MakeSummaryPlotsPostApproval.cpp -o RunPlots `root-config --glibs --cflags`
# mkdir -p Plots
# mkdir -p PDFPlots/
# ./RunPlots


# First version of two panel ratio-only plots (Oct 19)

# g++ MakeZGSummaryPlot.cpp -o RunZG `root-config --glibs --cflags`
# g++ MakeZGSummaryPlot.cpp -o RunMG `root-config --glibs --cflags`
# 
# ./RunZG
# ./RunMG 0
# ./RunMG 7


# Second version of two panel ratio-only plots (Oct 21)

g++ MakeZGSummaryPlotPart2.cpp -o RunZG `root-config --glibs --cflags`
g++ MakeMGSummaryPlotPart2.cpp -o RunMG `root-config --glibs --cflags`

./RunZG
./RunMG 0
./RunMG 7

