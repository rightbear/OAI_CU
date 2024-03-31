#!/bin/bash

if [ "$1" == "" ]
then
   echo Usage : run_oai_cu.sh [normal] [gdb] [nos1]
fi

if [ "$1" == "normal" ]
then
    cd ran_build/build
    sudo RFSIMULATOR=server ./nr-softmodem --rfsim --sa -O ../../../ci-scripts/conf_files/cu.band66.tm1.106PRB.usrpb210.conf
fi

if [ "$1" == "gdb" ]
then
    cd ran_build/build
    sudo RFSIMULATOR=server gdb --args ./nr-softmodem --rfsim --sa -O ../../../ci-scripts/conf_files/cu.band66.tm1.106PRB.usrpb210.conf
fi

if [ "$1" == "nos1" ]
then
    cd ran_build/build
    sudo RFSIMULATOR=server gdb --args ./nr-softmodem --rfsim --sa --nos1 -O ../../../ci-scripts/conf_files/cu.band66.tm1.106PRB.usrpb210.conf
fi
