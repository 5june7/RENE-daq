#!/bin/bash

run=$1 # ex) 000111
subrun=$2 # ex) 1

pwDir=`pwd`
CodeDir=$pwDir/../Code
DataDir=$pwDir/../../Data/RAW/$run

PRDDir=$DataDir/PRD; mkdir -p $PRDDir

TCBLOG=$pwDir/../../Data/LOG/TCB_$run.log


UseLog=$PRDDir/Run${run}_DLY_THR.log


cat $TCBLOG | grep WJ > $UseLog

cd $CodeDir
run_num=$(echo $run | sed 's/^0*//')

LOG=$pwDir/../LOG/log_production_run${run_num}_subrun${subrun}.txt




date > $LOG

root -l -b -q production_from_merged.cc\($run_num,$subrun\)  >> $LOG 

date >>$LOG

