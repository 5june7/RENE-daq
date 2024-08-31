#!/bin/bash 

echo "-- Enter run number --"
echo "-- ex) 000111 --"
read run
#read run=$1 # ex) 000111


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
   
#   fadcSubrun=44
#   sadcSubrun=44
#   sadcEvent=1011
#   sadcTrgnum=636847

    LOG=$pwDir/../LOG/log_merge_FADC_SADC_run${run_num}_subrun${fadcSubrun}.txt
    RealtimeLOG=$pwDir/../LOG/log_merge_prod_run${run_num}_subrun${fadcSubrun}.txt
    
    date > $RealtimeLOG
   
    # Merging
    date > $LOG

    root -l -b -q  merge_FADC_SADC.cc\($run_num,$maxsubrun,$fadcSubrun,$sadcSubrun,$sadcEvent,$sadcTrgnum\) >> $LOG
    
    date >> $LOG
    echo " Merging Done : Run"$run_num"."$fadcSubrun >> $RealtimeLOG
#if [ $fadcSubrun -ge 2 ]; then
#exit
#fi


    # Producing
    cd $CodeDir/../Shell
    echo "["`date`"] Producing ... "
    ./production_from_merged.sh $run $fadcSubrun

    echo " Producing Done : Run"$run_num"."$fadcSubrun >> $RealtimeLOG
    date >> $RealtimeLOG
 

    fadcSubrun=`cat $LOG | grep final | grep FADC\ | awk '{print $4}'`
    sadcSubrun=`cat $LOG | grep final | grep SADC\ | awk '{print $4}'`
    sadcEvent=`cat $LOG | grep final | grep SADC_evt | awk '{print $4}'`
    sadcTrgnum=`cat $LOG | grep final | grep before_SADC_trgnum | awk '{print $4}'`

done

