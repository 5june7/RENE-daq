#!/bin/bash 

run=$1 # ex) 000111


pwDir=`pwd`
CodeDir=$pwDir/../Code
DataDir=$pwDir/../../Data/RAW/$run
MergedDir=$DataDir/Merged; mkdir -p $MergedDir

PNGDir=$DataDir/PNG; mkdir -p $PNGDir

maxsubrun=`ls -l $DataDir/ | grep root | grep FADC | grep -v grep | wc -l`
maxsubrun=$(( $maxsubrun - 1 ))
echo "Max subrun # = "$maxsubrun


run_num=$(echo $run | sed 's/^0*//')



fadcSubrun=0
sadcSubrun=0
sadcEvent=0
sadcTrgnum=0

while [ 1 ]; do

    cd $CodeDir

    if [ $fadcSubrun -gt $maxsubrun ]; then 
        break 
    fi
   
#   fadcSubrun=6
#   sadcSubrun=6
#   sadcEvent=105
#   sadcTrgnum=11156061

    LOG=$pwDir/../LOG/log_merge_FADC_SADC_run${run_num}_subrun${fadcSubrun}.txt
    
   
    # Merging
    date 

    root -l -b -q reduction_for_TriggerTimeInterval.C\($run_num,$maxsubrun,$fadcSubrun,$sadcSubrun,$sadcEvent,$sadcTrgnum\)
    
    date
    echo " Reducing Done : Run"$run_num"."$fadcSubrun
#if [ $fadcSubrun -ge 2 ]; then
#exit
#fi


    fadcSubrun=`cat $LOG | grep final | grep FADC\ | awk '{print $4}'`
    sadcSubrun=`cat $LOG | grep final | grep SADC\ | awk '{print $4}'`
    sadcEvent=`cat $LOG | grep final | grep SADC_evt | awk '{print $4}'`
    sadcTrgnum=`cat $LOG | grep final | grep before_SADC_trgnum | awk '{print $4}'`

done

