export NKHOME=/home/frontend/DAQ/DAQ_cup/install

export LIBUSB_INC=/usr/include/libusb-1.0
export LIBUSB_LIB=/usr/lib64
#export LIBUSB_LIB=/usr/lib/x86_64-linux-gnu

#ROOTHOME=/home/frontend/Softwares/root/V6_28/builddir/
#. $ROOTHOME/bin/thisroot.sh

if [ -z "${PATH}" ]; then
   PATH=$NKHOME/bin; export PATH
else
   PATH=$NKHOME/bin:$PATH; export PATH
fi

if [ -z "${LD_LIBRARY_PATH}" ]; then
   LD_LIBRARY_PATH=$NKHOME/lib; export LD_LIBRARY_PATH
else
   LD_LIBRARY_PATH=$NKHOME/lib:$LD_LIBRARY_PATH; export LD_LIBRARY_PATH
fi

