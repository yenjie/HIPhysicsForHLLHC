#!/bin/bash

# Projection (nb-1)
LUMIPbPbTGafter=10 
LUMIPbPbMBafter=0.2217 

##

# 2015 Performance (nb-1)
LUMIPbPbTG_D0_before=0.531 # GJ + TO (no prescale)
LUMIPbPbMB_D0_before=0.0433 # GJ + TO (MinBias)
LUMIPbPbTG_Bp_before=0.351 # GJ (dimuon)
LUMIPbPbTG_Charged_before=0.404  # GJ (no prescale)
LUMIPbPbMB_Charged_before=0.0219 # GJ (MinBias)

#

FOLDERS=("plots")
for i in ${FOLDERS[@]}
do
    if [ ! -d $i ]; then
        mkdir $i
    fi
done

#
g++ plotRAA.C $(root-config --cflags --libs) -g -o plotRAA.exe
g++ plotV2.C $(root-config --cflags --libs) -g -o plotV2.exe

#
./plotRAA.exe ${LUMIPbPbTG_D0_before} ${LUMIPbPbMB_D0_before} ${LUMIPbPbTG_Bp_before} ${LUMIPbPbTG_Charged_before} ${LUMIPbPbMB_Charged_before} ${LUMIPbPbTGafter} ${LUMIPbPbMBafter}
./plotV2.exe ${LUMIPbPbMB_Charged_before} ${LUMIPbPbMB_Charged_before} ${LUMIPbPbMBafter}


