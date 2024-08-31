
#include "../../production/Code/variables_for_production.hh"

void setbranch(TTree* t);



void Cs137_draft_easyIntegral(int run, int ch=-99, int waveLog=0){

    char run_str[1000000];
    sprintf(run_str, "%06d", run);


    /*TFile* inf = new TFile(Form("../../../DAQ_cup/Data/RAW/%s/PRD/PRD_%s.%s.root", run_str, run_str, subrun_str), "read");
    TTree* t_tree = (TTree*) inf->Get("Event");
    setbranch(t_tree);*/

    TChain* chain = new TChain("Event");
    chain->Add(Form("../../../DAQ_cup/Data/RAW/%s/PRD/PRD_%s.*.root", run_str, run_str));
    setbranch(chain);

    TCanvas* c = new TCanvas("c", "", 1000, 600);
    c->Divide(2, 2);

    TH1D* h_wave[4];
    for( int i = 0; i < 4; i++ ) { h_wave[i] = new TH1D(Form("h_%d", i), "", 496, 0, 496); }


    //////////////////////////////
    int pedRange1 = 0; int pedRange2 = 100;
    int sigRange1 = 100; int sigRange2 = 150;
    //////////////////////////////

    int maxbin = 120000;    
    TH1D* h_Qsum = new TH1D("h_Qsum", "", 1000, 0, maxbin);


    string inputC;

    for( int iEntry = 0; iEntry < /*t_tree*/chain->GetEntries(); iEntry++ ){
        initializing();

        if( iEntry % (/*t_tree*/chain->GetEntries()/10) == 0 )
            cout<<iEntry<<" / "<</*t_tree*/chain->GetEntries()<<" processing ..."<<endl;

        /*t_tree*/chain->GetEntry(iEntry);



        // Main part //

        double pedCal = 0;
        double Qsum = 0; bool flag_hist = false;
        for(int ich = 0; ich < 4; ich++){

            if(Fbit[ich] == 0) continue;

            if(ich != ch && ch != -99) continue; // only specific channel.

            int jjj = 0;
            bool flag_Sum = false;
            pedCal = 0;
            for( int iWave=0; iWave<Fndp[ich]; iWave++){
                int waveVal = FFwaveform[ich]->at(iWave);

                //cout<<"TRGNUM = "<<trgNumber<<", CH = "<<ich<<", iWave = "<<iWave<<", pedCal = "<<pedCal<<", Qsum = "<<Qsum<<", waveVal = "<<waveVal<<", W - P = "<<waveVal-pedCal/200.<<endl;

                if( iWave>=pedRange1 && iWave<pedRange2 ){
                    pedCal = pedCal + waveVal;
                }

                if( iWave>=sigRange1 && iWave<sigRange2 ){
                    Qsum = Qsum + waveVal - pedCal/(double)(pedRange1+pedRange2);//Fpedestal[ich]; 
                }

            }
      
        }

        if(Qsum == 0) continue;
        double Qsum_adcToQ = Qsum * 2.5 / pow(2, 12) * 2. * (1) / 50.; 
        h_Qsum->Fill(Qsum);//_adcToQ);
        //cout<<"[]TRG Num = "<<trgNumber<<", Qsum = "<<Qsum<<", Qsum_adcToQ = "<<Qsum_adcToQ<<", coeff = "<<2.5 / pow(2, 12) * 2. * (waveSumForPreWindow + waveSumForPostWindow) / 50.<<endl;
    }

    h_Qsum->Draw();
    h_Qsum->GetXaxis()->SetRangeUser(0, maxbin);


    return;

}




void setbranch(TTree* t){

    t->SetBranchAddress("TrgNum", &trgNumber);
    t->SetBranchAddress("EventType", &eventType);
    t->SetBranchAddress("TCBTRGTime", &tcbtrgTime);
    
    // FADC
    int nchFADCi = -99;
    t->SetBranchAddress("nCH_FADC", &nchFADCi);
    t->SetBranchAddress("F_PmtID", &Fpid);
    t->SetBranchAddress("F_THR", &Fthr); // unsigned short
    t->SetBranchAddress("F_Triggered", &Fbit);
    t->SetBranchAddress("F_WaveStartTime", &FstartTime);
    t->SetBranchAddress("F_Pedestal", &Fpedestal);
    t->SetBranchAddress("F_NDP", &Fndp);
    for(int ich=0; ich<nchFADC; ich++){
        FFwaveform[ich] = new std::vector<unsigned short>;
        t->SetBranchAddress(Form("F_Waveform_%d", ich), &FFwaveform[ich]);
    }

    // SADC
    int nchSADCi = -99;
    t->SetBranchAddress("nCH_SADC", &nchSADCi);
    t->SetBranchAddress("S_PmtID", &Spid);
    t->SetBranchAddress("S_THR", &Sthr); // unsigned short
    t->SetBranchAddress("S_Triggered", &Sbit);
    t->SetBranchAddress("S_WaveStartTime", &SstartTime);
    t->SetBranchAddress("S_PeakTime", &SpeakTime);
    t->SetBranchAddress("S_ADC", &Sadc);

    return;

}


