#!/bin/bash

run=$1 # ex) 000111
subrun=$2 # ex) 1

pwDir=`pwd`
CodeDir=$pwDir/../Code
DataDir=$3

PRDDir=$DataDir/PRD; mkdir -p $PRDDir

TCBLOG=$DataDir/../../LOG/TCB_$run.log


UseLog=$PRDDir/Run${run}_DLY_THR.log


cat $TCBLOG | grep WJ > $UseLog

cd $CodeDir
run_num=$(echo $run | sed 's/^0*//')

LOG=$pwDir/../LOG/log_production_run${run_num}_subrun${subrun}.txt




date > $LOG

root -l -b -q production_from_merged.cc\($run_num,$subrun,\"${DataDir}\"\)  >> $LOG 

date >>$LOG

