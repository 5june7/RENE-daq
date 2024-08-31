#!/bin/bash 

maxsubrun=10000

pwDir=`pwd`
CodeDir=$pwDir/../Code


fadcSubrun=0
sadcSubrun=0
sadcEvent=0
sadcTrgnum=0


startFlag=1
while [ 1 ]; do

    cd $CodeDir
    
    if [ $startFlag -eq 1 ]; then
        run=`ps -elf | grep frontend | grep tcb | grep -v grep | awk -FCONFIG\/ '{print $2}' | awk -F. '{print $1}'`

        DataDir=/Data/RAW/$run
        MergedDir=$DataDir/Merged; mkdir -p $MergedDir

        PNGDir=$DataDir/PNG; mkdir -p $PNGDir

        DAQLOG=$DataDir/../../LOG/FADCDAQ_$run.log # 1 module
        #DAQLOG=$DataDir/../../LOG/FADCMERGER_$run.log # several module 

        startFlag=0
    fi

    runEndFlag=0
    runningCheck=`ps -elf | grep frontend | grep $run | grep -v grep | grep -v ${run}.root | wc -l`
    if [ $runningCheck -eq 0 ]; then # Work when "exit" command comes.
        runEndFlag=1
        maxsubrun=$(( $(ls -l $DataDir/ | grep FADC | wc -l) - 1 ))
    fi
   
    if [ $fadcSubrun -gt $maxsubrun ] || [ $sadcSubrun -gt $maxsubrun ]; then 
		echo " Merging + Producing DONE "
        break 
    fi

 
    run_num=$(echo $run | sed 's/^0*//')
    LOG=$pwDir/../LOG/log_merge_FADC_SADC_run${run_num}_subrun${fadcSubrun}_realtime.txt
    RealtimeLOG=$pwDir/../LOG/log_Realtime_run${run_num}_subrun${fadcSubrun}.txt

    while [ 1 ]; do 
        subrunCheck=`cat $DAQLOG | grep split | wc -l`
        subrunCheck=$(( $subrunCheck - $fadcSubrun ))

        runningCheck=`ps -elf | grep frontend | grep $run | grep -v grep | wc -l`
        if [ $runningCheck -eq 0 ]; then # Work when "exit" command comes.
            runEndFlag=1
            maxsubrun=$(( $(ls -l $DataDir/ | grep FADC | wc -l) - 1 ))
        fi

        # The condition, $subrunCheck -gt 1, prevents the merge process from using the incomplete output file.
        if [ $subrunCheck -gt 1 ] || [ $runEndFlag -eq 1 ]; then
            echo "["`date`"] -RUN"$run"- Go to merge run : subrun #"$run_num" : "$fadcSubrun" ... "
#            sleep 3s
            break
        fi
        
        echo "["`date`"] -RUN"$run"- Waiting the end of subrun ... "
        sleep 1m

    done


    date > $RealtimeLOG
   
    # Merging
    date > $LOG

	flag_zombie=0
	while [ 1 ]
	do
		root -l -b -q  merge_FADC_SADC.cc\($run_num,$maxsubrun,$fadcSubrun,$sadcSubrun,$sadcEvent,$sadcTrgnum,\"$DataDir\"\) >> $LOG

		if [ $? -eq 0 ]; then
			break
		fi

		((flag_zombie++))

		if [ $flag_zombie -gt 5 ]; then
            echo " ZOMBIE FILE DETECTED "
			exit
		fi

		echo " Zombie file check: "$flag_zombie" / 5 -> sleep 1m "
		sleep 1m
	done    

    date >> $LOG
    echo " Merging Done : Run"$run_num"."$fadcSubrun >> $RealtimeLOG

    date >> $RealtimeLOG

    # Producing
    cd $CodeDir/../Shell
    echo "["`date`"] Producing ... "
    ./production_from_merged.sh $run $fadcSubrun $DataDir

    echo " Producing Done : Run"$run_num"."$fadcSubrun >> $RealtimeLOG
    date >> $RealtimeLOG
   

    fadcSubrun=`cat $LOG | grep final | grep FADC\ | awk '{print $4}'`
    sadcSubrun=`cat $LOG | grep final | grep SADC\ | awk '{print $4}'`
    sadcEvent=`cat $LOG | grep final | grep SADC_evt | awk '{print $4}'`
    sadcTrgnum=`cat $LOG | grep final | grep before_SADC_trgnum | awk '{print $4}'`


    if [ $subrunCheck -eq 0 ] && [ $runEndFlag -eq 1 ]; then
        break
    fi

#    echo "["`date`"] Sleep 10s ... "; sleep 10s

done

echo "["`date`"] Run #"$run" ends ~ "


