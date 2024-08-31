//
// -----------------------
// Wave class.
// -----------------------
//
// wrote by WJ Lee.
//

#include "/home/wonjun/daq/DAQ_cup/Analysis_tool/Base/include/Wave.hh"


std::vector<unsigned short>* AlignWaveform(std::vector<unsigned short> * w, int b){

    std::vector<unsigned short>* w2;


    int bins = w->size();
    for( int i = 0; i < b + bins; i++ ){
        
        double val = 0;
        if( i < bins ) val = (double)w->at(i);
        else val = this->GetPed();
       
        w2->push_back(val);

    }

    return w2;

}

std::vector<unsigned short>* AddWaveform(std::vector<unsigned short>* w1, std::vector<unsigned short>* w2){

    std::vector<unsigned short>* w3;


    int b = w1->size();
    for( int i=0; i<b; i++){

        w3->push_back(w1->at(i) + w2->at(i) - );

    }
 



    return w3;

}


