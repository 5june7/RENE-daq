#!/usr/bin/env bash 

export MALLOC_CHECK_=0

OPTS=`getopt -o r:o:n:dmt --long onldaqdir:,rawdatadir: -n 'executedaq.sh' -- "$@"`

echo "0"
if [ $? != 0 ]; then
    echo "Terminating..." >&2; exit 1;
fi
echo "1"

eval set -- "$OPTS"

RUNNUM=
ONLDAQDIR=
RAWDATADIR=
EXE=
ADCOPT=
DAQID=
DAQNAME=

echo "2"
while true; do
    case "$1" in
    -r) RUNNUM="$2"
        shift 2;;
    -o) DAQOPT="$2"
        shift 2;;
    -n) DAQNAME="$2"
        shift 2;;
    -d) EXE="nulldaq"
        shift ;;
    -m) EXE="nullmerger"
        shift ;;
    -t) EXE="nulltcb"
        shift ;;
    --onldaqdir) ONLDAQDIR="$2"
        shift 2;;
    --rawdatadir) RAWDATADIR="$2"
        shift 2;;
    --) shift;
        break ;;
    *) break ;;
    esac
done

echo "3"
if [ "$ONLDAQDIR" ]
then
    export ONLDAQ_DIR="$ONLDAQDIR"
fi

echo "4"
if [ "$RAWDATADIR" ]
then
    export RAWDATA_DIR="$RAWDATADIR"
fi

echo "5"
# plz setting modules (like root, ...), here ...!!!
export LD_LIBRARY_PATH=${ONLDAQ_DIR}/lib:$LD_LIBRARY_PATH

echo "6"
RUNNUMSTR=`printf "%06d" $RUNNUM`

echo "7"
${ONLDAQ_DIR}/bin/$EXE $DAQOPT > ${RAWDATA_DIR}/LOG/${DAQNAME}_${RUNNUMSTR}.log 2>&1 &

echo "8"
exit
