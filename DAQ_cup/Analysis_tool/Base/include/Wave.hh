#ifndef WAVE_HH
#define WAVE_HH 

#include "/home/wonjun/daq/DAQ_cup/Analysis_tool/Base/include/ChargeSum.hh"

class Wave : ChargeSum {

    // functions
    public:
        Wave();
        ~Wave(); 

        std::vector<unsigned short>* AlignWaveform(std::vector<unsigned short>*, std::vector<unsigned short>*); // wave1
        std::vector<unsigned short>* AddWaveforms(std::vector<unsigned short>*, std::vector<unsigned short>*); // wave1, wave2

    // variables
    private:



};


#endif
