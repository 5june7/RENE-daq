#!/bin/bash 


run=$1 # 000070
run_num=$(echo $run | sed 's/^0*//')


pwDir=`pwd`
logDir=$pwDir/../LOG
DataDir=$pwDir/../../Data/RAW/$run

maxsubrun=`ls -l $DataDir/ | grep root | grep FADC | grep -v grep | wc -l`
maxsubrun=$(( $maxsubrun - 1 ))
echo "maxsubrun = "$maxsubrun


finalLOG=$logDir/log_validation_TCB_run${run_num}.txt

subrun=0

tot=0
missing=0

while [ 1 ]; do

    if [ $subrun -gt $maxsubrun ]; then 
        break 
    fi
 

    LOG=$logDir/log_validation_TCB_run${run_num}_subrun${subrun}.txt



    if [ $subrun -eq 0  ]; then
        cat $LOG | grep "F-S" > $finalLOG
    else
        cat $LOG | grep "F-S" >> $finalLOG
    fi


    subrun=$(( $subrun + 1 ))


    add=`cat $LOG | grep Total\ merged | awk -F= '{print $2}'`
    add_miss=`cat $LOG | grep Check | awk -F= '{print $2}'`

    tot=$(( $tot + $add ))
    missing=$(( $missing + $add_miss ))

done

echo "Missing rate"
echo $missing" / "$tot
