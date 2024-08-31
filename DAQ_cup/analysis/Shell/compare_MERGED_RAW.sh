#!/bin/bash 


run=$1 # 70
run_long=$(printf "%06d" $run)

interval=$2 # 2 -> subrun 0, 1
interval=$(( $interval - 1 ))

pwDir=`pwd`
BaseDir=$pwDir/..

CodeDir=$BaseDir/Code

DataDir=$BaseDir/../Data/RAW/$run_long

maxsubrun=`ls -l $DataDir/ | grep root | grep FADC | grep -v grep | wc -l`
maxsubrun=$(( $maxsubrun - 1 ))
echo "Max subrun # = "$maxsubrun

subrun1=0
subrun2=$(( $interval ))


LOG=$BaseDir/LOG/log_compare_M_R_FADC_SADC_run${run}_Interval${interval}.txt

date > $LOG

while [ 1 ]; do

    echo "Run "$run" Subrun "$subrun1" "$subrun2 >>$LOG

    PNGDir=$BaseDir/PNG_compare_M_R_run${run}_subrun${subrun1}_${subrun2}


    cd $BaseDir
    mkdir -p $PNGDir

    cd $CodeDir
    root -l -b -q compare_MERGED_RAW.C\($run,$subrun1,$subrun2\) >>$LOG

    date >>$LOG

    mv c_Raw*_run${run}_subrun${subrun1}_${subrun2}.png $PNGDir/

    subrun1=$(( $subrun2 + 1 ))
    subrun2=$(( $subrun1 + $interval ))
   
    if [ $subrun1 -gt $maxsubrun ]; then
        break
    fi

    if [ $subrun2 -gt $maxsubrun ]; then
        subrun2=$(( $maxsubrun ))
    fi

done
