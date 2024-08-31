#!/bin/sh 

pwDir=`pwd` # ex) /home/frontend/DAQ/DAQ_cup
dataDir="/Data"
cfg="test_wj.config"
cfg1="test_fadc_wj.config"
cfg2="test_sadc_wj.config"
cfg3="test_wj_2FADC.config"

cd $pwDir
mkdir $pwDir/build
mkdir $pwDir/install

rm -rf ./build/* ./install/*

cd $pwDir/build

cmake ../CUPDAQ -DCMAKE_INSTALL_PREFIX=../install
make -j20
make install

mkdir -p $dataDir
mkdir $dataDir/LOG
mkdir $dataDir/CONFIG
mkdir $dataDir/RAW
#
#cp -rvp $pwDir/$cfg $dataDir
#cp -rvp $pwDir/$cfg1 $dataDir
#cp -rvp $pwDir/$cfg2 $dataDir

