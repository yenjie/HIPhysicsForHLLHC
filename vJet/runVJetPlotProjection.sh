#!/bin/bash

# run this script under directory ./vJet
set -x
g++ vJetPlotProjection.C -Wall -Werror -Wextra -O2 `root-config --cflags --libs` -lTMVA -lRooFitCore -lRooFit -o vJetPlotProjection.exe || exit 1

progPath="./vJetPlotProjection.exe"
inputFiles=(
"./zJet_Data_pbpb_cent_030_0100.root"
"./zJet_Data_pbpb_cent_030_0100.root"
"./zJet_Data_pbpb_cent_030_0100.root"
"./photonJetFF_Data_xijet_cent010.root"
"./photonJetFF_Data_xigamma_cent010.root"
"./photonJetFF_Data_xijet_cent010.root"
"./photonJetFF_Data_xigamma_cent010.root"
"./photonJetFF_Data_xijet_cent010.root"
"./photonJetFF_Data_xigamma_cent010.root"
"./photonJetFF_Data_xijet_cent010.root"
"./photonJetFF_Data_xigamma_cent010.root"
);

figureIndices=(0 1 2 3 4 5 6 7 8 9 10)

arrayIndices=${!figureIndices[*]}
for i1 in $arrayIndices
do
    figureIndex=${figureIndices[i1]}
    inputFile=${inputFiles[i1]}
    $progPath $figureIndex $inputFile 0
    $progPath $figureIndex $inputFile -1
    $progPath $figureIndex $inputFile 0.5
    wait
done

g++ gjpp_1.C -Wall -Werror -Wextra -O2 `root-config --cflags --libs` -o gjpp_1.exe || exit 1
g++ gjpp_2.C -Wall -Werror -Wextra -O2 `root-config --cflags --libs` -o gjpp_2.exe || exit 1

./gjpp_1.exe xjg_projection.root xjg_projection.root xjg_projection_1.list
./gjpp_2.exe xjg_projection.root xjg_projection.root xjg_projection_2.list
