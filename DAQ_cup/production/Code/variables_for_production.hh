#ifndef VARIABLES_HH
#define VARIABLES_HH 

#include <vector>

// Constants
const int nFADC = 1;
const int nSADC = 1;
const int nchFADC = 4 * nFADC;//2;
const int nchSADC = 32 * nSADC;

// TCB trigger time const
const unsigned long TimeConst_fine = (0b01111100 * 8.);
const unsigned long TimeConst_coarse = (0xFFFFFF * 1000.);
const unsigned long TimeConst = TimeConst_fine + TimeConst_coarse;

const unsigned int TrgNumConst = (0xFFFFFFFF * 1);


// Flags
bool FevtTypeFlag;
bool SevtTypeFlag;

int eventType; // 1: FADC, 2: SADC, 3: FADC + SADC
unsigned int trgNumber;
double tcbtrgTime;

// Variables 
// FADC
unsigned long Fdelay[nchFADC];
unsigned short Fthr[nchFADC];
int Fpid[nchFADC];
int Fbit[nchFADC];
//unsigned long FstartTime[nchFADC];
double FstartTime[nchFADC];
int Fndp[nchFADC];
std::vector<unsigned short> Fwaveform[nchFADC]; 
std::vector<std::vector<unsigned short>*> FFwaveform(nchFADC);
unsigned short Fpedestal[nchFADC];

// SADC
unsigned long Sdelay[nchSADC];
unsigned short Sthr[nchSADC];
int Spid[nchSADC];
int Sbit[nchSADC];
//unsigned long SstartTime[nchSADC];
double SstartTime[nchSADC];
//unsigned long SpeakTime[nchSADC];
double SpeakTime[nchSADC];
unsigned int Sadc[nchSADC];


typedef struct RegisteredValue{
    std::vector<int> fadcPID;
    std::vector<int> fadcDLY;
    std::vector<int> fadcTHR;

    std::vector<int> sadcPID;
    std::vector<int> sadcDLY;
    std::vector<int> sadcTHR;
} RV;



// Function
void initializing(){

    FevtTypeFlag = false;
    SevtTypeFlag = false;

    eventType = 0;
    trgNumber = -99;
    tcbtrgTime = -99;

    // FADC
    for(int ich=0; ich<nchFADC; ich++){
        Fpid[ich] = -99;
        Fbit[ich] = -99;
        FstartTime[ich] = -99;
        Fndp[ich] = -99;
        Fpedestal[ich] = -99;
        Fwaveform[ich].clear();
    }
    FFwaveform.clear();

    // SADC
    for(int ich=0; ich<nchSADC; ich++){
        Spid[ich] = -99;
        Sbit[ich] = -99;
        SpeakTime[ich] = -99;
        Sadc[ich] = -99;
    }
    
}

void reading_DLY_THR(char* run_str, const char* DataDir){

    RV run;

    bool flag_fadc;
    bool flag_sadc;

    bool flag_nadc;
    bool flag_pid;
    bool flag_dly;
    bool flag_thr;


    int nadc = 0;
    int channel = 0;

    int val = 0;

    ifstream inf_txt;
    inf_txt.open(Form("%s/PRD/Run%s_DLY_THR.log", DataDir, run_str));

    string line;

  while ( inf_txt.good() ) {
    getline(inf_txt, line);

    if ( line.empty() ) continue;

    istringstream iss(line);

    string key;


    iss >> key;
    if (iss.fail() || key.length() == 0 ) { continue; }
   
    if ( !strcmp(key.data(), "WJ") ){ 
        flag_fadc = false;
        flag_sadc = false;

        flag_nadc = false;
        flag_pid = false;
        flag_dly = false;
        flag_thr = false;

    }

    iss >> key;
    if ( !strcmp(key.data(), "FADC") ) { flag_fadc = true; }
    else { flag_sadc = true; }

    iss >> key;
    if ( !strcmp(key.data(), "NADC") ) { flag_nadc = true; }
    else if ( !strcmp(key.data(), "PID") ) { flag_pid = true; }
    else if ( !strcmp(key.data(), "DLY") ) { flag_dly = true; }
    else if ( !strcmp(key.data(), "THR") ) { flag_thr = true; }

    //cout<<key<<endl;

    iss >> key;
    if ( !strcmp(key.data(), "(registered)") ) { iss >> key; }


    // module
    if ( flag_nadc ) { iss >> nadc; }
    
    if ( flag_fadc ) { channel = nchFADC; }
    else if ( flag_sadc ) { channel = nchSADC; }


    // pid 
    if ( flag_pid ) {
        for(int inum = 0; inum < channel; inum++){ 
            if ( flag_fadc ) { iss >> val; run.fadcPID.push_back(val); }
            else if ( flag_sadc ) { iss >> val; run.sadcPID.push_back(val); }

            //if ( flag_fadc ) { cout<<inum<<" "<<run.fadcPID[inum]<<endl; }
            //else if ( flag_sadc ) { cout<<inum<<" "<<run.sadcPID[inum]<<endl; }

        }
    }

    // dly 
    if ( flag_dly ) {
        for(int inum = 0; inum < channel; inum++){
            if ( flag_fadc ) { iss >> val; run.fadcDLY.push_back(val); }
            else if ( flag_sadc ) { iss >> val; run.sadcDLY.push_back(val); }
            
            //if ( flag_fadc ) { cout<<inum<<" "<<run.fadcDLY[inum]<<endl; }
            //else if ( flag_sadc ) { cout<<inum<<" "<<run.sadcDLY[inum]<<endl; }

        }
    }


    // thr 
    if ( flag_thr ) {
        for(int inum = 0; inum < channel; inum++){
            if ( flag_fadc ) { iss >> val; run.fadcTHR.push_back(val); }
            else if ( flag_sadc ) { iss >> val; run.sadcTHR.push_back(val); }

            //if ( flag_fadc ) { cout<<inum<<" "<<run.fadcTHR[inum]<<endl; }
            //else if ( flag_sadc ) { cout<<inum<<" "<<run.sadcTHR[inum]<<endl; }

        }
    }


  }


  inf_txt.close();



  // assigning ~
  for(int ich=0; ich<nchFADC; ich++){ 
      Fdelay[ich] = (unsigned long)run.fadcDLY.at(ich); 
      Fthr[ich] = (unsigned long)run.fadcTHR.at(ich); 
  }
  for(int ich=0; ich<nchSADC; ich++){ 
      Sdelay[ich] = (unsigned long)run.sadcDLY.at(ich); 
      Sthr[ich] = (unsigned long)run.sadcTHR.at(ich); 
  }



  return;

}

#endif
