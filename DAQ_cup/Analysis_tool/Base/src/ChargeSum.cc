//
// -----------------------
// Charge Summation class.
// -----------------------
//
// wrote by WJ Lee.
//

#include "../include/ChargeSum.hh"


double ChargeSum::ChargeSummation(int range1, int range2){

    double chargeSum = 0;

    int b = Wave_->size();
    for(int i=range1; i<range2; i++){

        double q = Wave_->at(i) - Pedestal;

        chargeSum += q;

    }

    return chargeSum;

}

double ChargeSum::PedestalCal(int range1, int range2){

    double ped = 0;

    int b = Wave_->size();
    for(int i=range1; i<range2; i++){

        double q = Wave_->at(i);

        ped += q;

    }

    return (double)ped / (range2 - range1);

}

void ChargeSum::SetQsum(int range1, int range2){

    this->Qsum = this->ChargeSum::ChargeSummation(range1, range2);

    return;

}

void ChargeSum::SetPed(int range1, int range2){

    this->Pedestal = this->ChargeSum::PedestalCal(range1, range2);

    return;

}

bool ChargeSum::NoiseFiltering(int p, int ref){

    bool flag = false;

    int b = Wave_->size();
    //cout<<"ped = "<<p<<", ref = "<<ref<<", size = "<<b<<endl;
    for(int i=0; i<b; i++){

        if( (Wave_->at(i) - p) < ((-1) * ref) ){ flag = true; }

        if( flag ) break;

    }

    return flag;

}


