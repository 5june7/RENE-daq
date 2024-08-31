#!/bin/bash

echo `ps -elf  | grep frontend | grep merge| grep -v realtime | grep -v grep | awk '{print $4}'`

procnumber=`ps -elf  | grep frontend | grep merge | grep -v realtime | grep -v grep | awk '{printf $4" "}'`

kill -9 $procnumber
