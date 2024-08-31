
#include "../../production/Code/variables_for_production.hh"
#include "../Base/src/ChargeSum.cc"
#include "../Base/src/Format.cc"


void setbranch(TTree* t);


// [V] * [ns] / [ohm] * nano->pico / electron charge
// [C] = [A] * [s], [A] = [V] / [ohm]
const double convertADCtoQ = 1;
//const double convertADCtoQ = 1;// (2.5 / pow(2, 12)) * 2. / 50. * 1e3 / 1.6;

void SourceData_Qsum(int run){

    gStyle->SetOptStat(111111);


    char run_str[1000000];
    sprintf(run_str, "%06d", run);

    TChain* chain = new TChain("Event");
    chain->Add(Form("../../../DAQ_cup/Data/RAW/%s/PRD/PRD_%s.*.root", run_str, run_str));
    setbranch(chain);

    TH1D* h_wave[4];
    for( int i = 0; i < 4; i++ ) { h_wave[i] = new TH1D(Form("h_%d", i), "", 496, 0, 496); }



    /// HISTOGRAM SETTING THAT WILL BE DRAWN ///
    int maxbin = 10000;//120000;
    int Nbins = 2000;
    ///////////////////////////////////////////

    TH1D* h_Qsum = new TH1D("h_Qsum", "", Nbins, 0, maxbin);
    TH1D* h_Qsum_each[4];
    for( int ich = 0; ich < nchFADC; ich++ ){
        h_Qsum_each[ich] = new TH1D(Form("h_Qsum_%d", ich), "", Nbins, 0, maxbin);
    }


    string inputC;

    for( int iEntry = 0; iEntry < chain->GetEntries(); iEntry++ ){
        initializing();

        if( iEntry % (chain->GetEntries()/10) == 0 )
            cout<<iEntry<<" / "<<chain->GetEntries()<<" processing ..."<<endl;

        chain->GetEntry(iEntry);



        // Main part //
       

        // 1. Remove noise events.

        bool flag_noise = false;
        ChargeSum* CS_wave[nchFADC];
        for(int ich = 0; ich < nchFADC; ich++){
            CS_wave[ich] = new ChargeSum();
            CS_wave[ich]->SetChargeSumClass(FFwaveform[ich], Fthr[ich]);

            //flag_noise = CS_wave[ich]->NoiseFiltering(Fpedestal[ich], 10);

            //if( flag_noise ) break;
        }
        if( flag_noise ){ 
            //cout<<"TRG num = "<<trgNumber<<endl; 
            //continue; 
        }


        // 2. Waveform shift. - not prepared

        int bin_fired[nchFADC] = { 0, };
        for(int ich = 0; ich < nchFADC; ich++){

            if(Fbit[ich] == 0) continue;

            for(int iWave = 0; iWave < Fndp[ich]; iWave++ ){
                if( FFwaveform[ich]->at(iWave) - Fpedestal[ich] >= Fthr[ich] ){
                    bin_fired[ich] = iWave; break; 
                }
            }
        }


        // 3. Calculate pedestal and charge sum.

        double pedCal = 0;
        double Qsum = 0; bool flag_hist = false;
        double Qsum_each[nchFADC] = { 0, };
        for(int ich = 0; ich < nchFADC; ich++){

            //////////////////////////////
            int pedRange1 = 0; int pedRange2 = 100;
            int prevBin = 7; int binInterval = 250;
            int sigRange1 = 100; //bin_fired[ich] - prevBin; 
            int sigRange2 = 480; //bin_fired[ich] + (binInterval-prevBin);
            //////////////////////////////

            //if(Fbit[ich] == 0) continue;
            if(sigRange1 < 0) continue;

            CS_wave[ich]->SetPed(pedRange1, pedRange2);
            CS_wave[ich]->SetQsum(sigRange1, sigRange2);
            
            Qsum += CS_wave[ich]->GetQsum();
            
            Qsum_each[ich] = CS_wave[ich]->GetQsum();
            /*if(Qsum_each[ich] != 0)*/ h_Qsum_each[ich]->Fill(Qsum_each[ich] * convertADCtoQ);
            //cout<<"Ped = "<<Fpedestal[ich]<<", CS_PED = "<<CS_wave[ich]->GetPed()<<", Qsum = "<<Qsum<<", CS_QSUM = "<<CS_wave[ich]->GetQsum()<<endl;
 
        }

        //if(Qsum == 0) continue;
        h_Qsum->Fill(Qsum * convertADCtoQ);

        //cout<<"[]TRG Num = "<<trgNumber<<", Qsum = "<<Qsum<<", Qsum_adcToQ = "<<Qsum_adcToQ<<", coeff = "<<2.5 / pow(2, 12) * 2. * (waveSumForPreWindow + waveSumForPostWindow) / 50.<<endl;
 

    }


    TCanvas* c = new TCanvas("c", "", 800, 600);
    c->cd();
    //h_Qsum->Draw();
    h_Qsum->GetXaxis()->SetRangeUser(0, maxbin);

    hist_label_format(h_Qsum);

    h_Qsum->GetXaxis()->SetTitle("NPE");
    h_Qsum->GetYaxis()->SetTitle("Number of Events");


    TCanvas* c2 = new TCanvas("c2", "", 800, 600);
    c2->cd();
    
    TLegend* leg = new TLegend(0.4, 0.7, 0.7, 0.9);

    for(int ich = 0; ich < nchFADC; ich++){
        h_Qsum_each[ich]->Draw("hist same");
        h_Qsum_each[ich]->SetLineColor(ich+1);

        hist_label_format(h_Qsum_each[ich]);

        h_Qsum_each[ich]->GetXaxis()->SetTitle("NPE");
        h_Qsum_each[ich]->GetYaxis()->SetTitle("Number of Events");

        if(ich == 0) leg->AddEntry(h_Qsum_each[ich], "PMT B (KNU)");
        if(ich == 1) leg->AddEntry(h_Qsum_each[ich], "PMT A (GIST)");
    }

    leg->Draw("same");


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


