#
# DAQ Server where tcb is supposed to be runnig
# (WJ) PORT must be same with that of a config file for tcb.
#
kDAQSERVER_IP = 'localhost'
kDAQSERVER_PORT = 7809
kDAQSERVER_ADDR = (kDAQSERVER_IP, kDAQSERVER_PORT)

# if RC is running on same server with DAQ
kISREMOTEDAQ = False

# kONLDAQ_DIR and kRAWDATA_DIR at DAQ server
# (WJ) kONLDAQ_DIR: install dir, kRAWDATA_DIR: data dir.
#       kRAWDATA_DIR has CONFIG & LOG dir, master cfg file, runcatalog.db, and raw files
kONLDAQ_DIR = '/home/frontend/DAQ/DAQ_cup/install'
kRAWDATA_DIR = '/Data'

kSPLIT_TIME = 3*60 # WJ: [Xm * 60s/1m] (put the values in second).

# run catalog db file should be in same server with RC
# (WJ) You should move "runcatalog.db" to the below "kRUNCATALOGDBFILE" dir,
#      after you run ` python create_runcatalog_db.py `.
kRUNCATALOGDBFILE = '/Data/runcatalog.db'
kDEFAULTCONFIGDIR = '/Data'

#
# Add more run type
#
kRUNTYPELIST = ['', 'physics', 'calibration', 'test']

# ===========================================================
#
# Do not modify from here!!!
#
kEXESCRIPT = 'executedaq.sh'
kMESSLEN = 32

# Commands
kCONFIGRUN = 1
kSTARTRUN = 2
kENDRUN = 3
kEXIT = 4
kQUERYDAQSTATUS = 10
kQUERYRUNINFO = 12
kQUERYTRGINFO = 14
kQUERYMONITOR = 21

# RUN Status
kDOWN = 0
kBOOTED = 1
kCONFIGURED = 2
kRUNNING = 3
kRUNENDED = 4
kPROCENDED = 5
kWARNING = 6
kERROR = 7

kDAQSTATE = ['Down', 'Booted', 'Configured',
             'Running', 'RunEnd', 'RunEnd', '', 'Error']
