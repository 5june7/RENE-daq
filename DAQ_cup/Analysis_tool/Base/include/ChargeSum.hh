#ifndef CHARGESUM_HH
#define CHARGESUM_HH 

class ChargeSum{

    // functions
    public:
        ChargeSum() : Wave_(nullptr), Threshold(0), Qsum(0.0), Pedestal(0.0) {};
        ~ChargeSum();
       
        void SetQsum(int, int); // range1, range2
        void SetPed(int, int); // range1, range2
        void SetChargeSumClass(std::vector<unsigned short>* w, int t){ // waveform, threshold
            Wave_ = w;
            Threshold = t;
        }

        bool NoiseFiltering(int, int); // If the height of waveform is lower than ref val, then it will be removed
        
        double ChargeSummation(int, int); // range1, range2
        double PedestalCal(int, int); // range1, range2
        
        double GetPed() { return Pedestal; }
        double GetQsum() { return Qsum; }


    // variables
    protected:
        std::vector<unsigned short> * Wave_;
        int Threshold;
        double Qsum;
        double Pedestal;

};


#endif
