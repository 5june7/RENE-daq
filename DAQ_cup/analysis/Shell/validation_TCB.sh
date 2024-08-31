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

    MERGELOG=$pwDir/../LOG/log_merge_FADC_SADC_run${run_num}_subrun${fadcSubrun}.txt
    LOG=$pwDir/../LOG/log_validation_TCB_run${run_num}_subrun${fadcSubrun}.txt
    

    # Merging
    date > $LOG

    root -l -b -q  validation_TCB.C\($run_num,$maxsubrun,$fadcSubrun,$sadcSubrun,$sadcEvent,$sadcTrgnum\) >> $LOG

    date >> $LOG
 

    fadcSubrun=`cat $MERGELOG | grep final | grep FADC\ | awk '{print $4}'`
    sadcSubrun=`cat $MERGELOG | grep final | grep SADC\ | awk '{print $4}'`
    sadcEvent=`cat $MERGELOG | grep final | grep SADC_evt | awk '{print $4}'`
    sadcTrgnum=`cat $MERGELOG | grep final | grep before_SADC_trgnum | awk '{print $4}'`

done

