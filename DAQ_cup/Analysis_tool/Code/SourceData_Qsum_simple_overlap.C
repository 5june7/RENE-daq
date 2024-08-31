
#include "../../production/Code/variables_for_production.hh"
#include "../Base/src/ChargeSum.cc"
#include "../Base/src/Format.cc"


void setbranch(TTree* t);


// [V] * [ns] / [ohm] * nano->pico / electron charge
// [C] = [A] * [s], [A] = [V] / [ohm]
const double convertADCtoQ = (2.5 / pow(2, 12)) * 2. / 50. * 1e3 / 1.6;



void SourceData_Qsum_simple_overlap(int run, int run2, int run3){
// BKG, data1, data2

    gStyle->SetOptStat(0);


    char run_str[1000000];
    sprintf(run_str, "%06d", run);

    char run_str2[1000000];
    sprintf(run_str2, "%06d", run2);

    char run_str3[1000000];
    sprintf(run_str3, "%06d", run3);


    TChain* chain = new TChain("Event");
    chain->Add(Form("../../../DAQ_cup/Data/RAW/%s/PRD/PRD_%s.00000.root", run_str, run_str));
    setbranch(chain);

    TChain* chain2 = new TChain("Event");
    chain2->Add(Form("../../../DAQ_cup/Data/RAW/%s/PRD/PRD_%s.00000.root", run_str2, run_str2));
    setbranch(chain2);

    TChain* chain3 = new TChain("Event");
    chain3->Add(Form("../../../DAQ_cup/Data/RAW/%s/PRD/PRD_%s.00000.root", run_str3, run_str3));
    setbranch(chain3);



    TH1D* h_wave[4];
    for( int i = 0; i < 4; i++ ) { h_wave[i] = new TH1D(Form("h_%d", i), "", 496, 0, 496); }



    /// HISTOGRAM SETTING THAT WILL BE DRAWN ///
    int maxbin = 2000; //120000;
    int Nbins = 1000; //500;
    ///////////////////////////////////////////

    TH1D* h_Qsum = new TH1D("h_Qsum", "", Nbins, 0, maxbin);
    TH1D* h_Qsum2 = new TH1D("h_Qsum2", "", Nbins, 0, maxbin);
    TH1D* h_Qsum3 = new TH1D("h_Qsum3", "", Nbins, 0, maxbin);


    string inputC;

    for( int iEntry = 0; iEntry < chain->GetEntries(); iEntry++ ){
        initializing();

        if( iEntry % (chain->GetEntries()/10) == 0 )
            cout<<"File 1: "<<iEntry<<" / "<<chain->GetEntries()<<" processing ..."<<endl;

        chain->GetEntry(iEntry);



        // Main part //
       

        // 1. Remove noise events.

        bool flag_noise = false;
        ChargeSum* CS_wave[nchFADC];
        for(int ich = 0; ich < nchFADC; ich++){
            CS_wave[ich] = new ChargeSum();
            CS_wave[ich]->SetChargeSumClass(FFwaveform[ich], Fthr[ich]);

            flag_noise = CS_wave[ich]->NoiseFiltering(Fpedestal[ich], 10);

            if( flag_noise ) break;
        }
        if( flag_noise ){ 
            //cout<<"TRG num = "<<trgNumber<<endl; 
            continue; 
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

        for(int ich = 0; ich < nchFADC; ich++){

            //////////////////////////////
            int pedRange1 = 0; int pedRange2 = 100;
            int prevBin = 7; int binInterval = 50;
            int sigRange1 = bin_fired[ich] - prevBin; 
            int sigRange2 = bin_fired[ich] + (binInterval-prevBin);
            //////////////////////////////

            if(Fbit[ich] == 0) continue;
            if(sigRange1 < 0) continue;

            CS_wave[ich]->SetPed(pedRange1, pedRange2);
            CS_wave[ich]->SetQsum(sigRange1, sigRange2);
            
            Qsum += CS_wave[ich]->GetQsum();
            
            //cout<<"Ped = "<<Fpedestal[ich]<<", CS_PED = "<<CS_wave[ich]->GetPed()<<", Qsum = "<<Qsum<<", CS_QSUM = "<<CS_wave[ich]->GetQsum()<<endl;
 
        }

        if(Qsum == 0) continue;
        h_Qsum->Fill(Qsum * convertADCtoQ);

        //cout<<"[]TRG Num = "<<trgNumber<<", Qsum = "<<Qsum<<", Qsum_adcToQ = "<<Qsum_adcToQ<<", coeff = "<<2.5 / pow(2, 12) * 2. * (waveSumForPreWindow + waveSumForPostWindow) / 50.<<endl;


    }


    // chain2
    for( int iEntry = 0; iEntry < chain2->GetEntries(); iEntry++ ){
        initializing();

        if( iEntry % (chain2->GetEntries()/10) == 0 )
            cout<<"File 2: "<<iEntry<<" / "<<chain2->GetEntries()<<" processing ..."<<endl;

        chain2->GetEntry(iEntry);



        // Main part //
       

        // 1. Remove noise events.

        bool flag_noise = false;
        ChargeSum* CS_wave[nchFADC];
        for(int ich = 0; ich < nchFADC; ich++){
            CS_wave[ich] = new ChargeSum();
            CS_wave[ich]->SetChargeSumClass(FFwaveform[ich], Fthr[ich]);

            flag_noise = CS_wave[ich]->NoiseFiltering(Fpedestal[ich], 10);

            if( flag_noise ) break;
        }
        if( flag_noise ){ 
            //cout<<"TRG num = "<<trgNumber<<endl; 
            continue; 
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

        for(int ich = 0; ich < nchFADC; ich++){

            //////////////////////////////
            int pedRange1 = 0; int pedRange2 = 100;
            int prevBin = 7; int binInterval = 50;
            int sigRange1 = bin_fired[ich] - prevBin; 
            int sigRange2 = bin_fired[ich] + (binInterval-prevBin);
            //////////////////////////////

            if(Fbit[ich] == 0) continue;
            if(sigRange1 < 0) continue;

            CS_wave[ich]->SetPed(pedRange1, pedRange2);
            CS_wave[ich]->SetQsum(sigRange1, sigRange2);
            
            Qsum += CS_wave[ich]->GetQsum();
            
            //cout<<"Ped = "<<Fpedestal[ich]<<", CS_PED = "<<CS_wave[ich]->GetPed()<<", Qsum = "<<Qsum<<", CS_QSUM = "<<CS_wave[ich]->GetQsum()<<endl;
 
        }

        if(Qsum == 0) continue;
        h_Qsum2->Fill(Qsum * convertADCtoQ);

    }

    // chain3
    for( int iEntry = 0; iEntry < chain3->GetEntries(); iEntry++ ){
        initializing();

        if( iEntry % (chain3->GetEntries()/10) == 0 )
            cout<<"File 3: "<<iEntry<<" / "<<chain3->GetEntries()<<" processing ..."<<endl;

        chain3->GetEntry(iEntry);



        // Main part //
       

        // 1. Remove noise events.

        bool flag_noise = false;
        ChargeSum* CS_wave[nchFADC];
        for(int ich = 0; ich < nchFADC; ich++){
            CS_wave[ich] = new ChargeSum();
            CS_wave[ich]->SetChargeSumClass(FFwaveform[ich], Fthr[ich]);

            flag_noise = CS_wave[ich]->NoiseFiltering(Fpedestal[ich], 10);

            if( flag_noise ) break;
        }
        if( flag_noise ){ 
            //cout<<"TRG num = "<<trgNumber<<endl; 
            continue; 
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

        for(int ich = 0; ich < nchFADC; ich++){

            //////////////////////////////
            int pedRange1 = 0; int pedRange2 = 100;
            int prevBin = 7; int binInterval = 50;
            int sigRange1 = bin_fired[ich] - prevBin; 
            int sigRange2 = bin_fired[ich] + (binInterval-prevBin);
            //////////////////////////////

            if(Fbit[ich] == 0) continue;
            if(sigRange1 < 0) continue;

            CS_wave[ich]->SetPed(pedRange1, pedRange2);
            CS_wave[ich]->SetQsum(sigRange1, sigRange2);
            
            Qsum += CS_wave[ich]->GetQsum();
            
            //cout<<"Ped = "<<Fpedestal[ich]<<", CS_PED = "<<CS_wave[ich]->GetPed()<<", Qsum = "<<Qsum<<", CS_QSUM = "<<CS_wave[ich]->GetQsum()<<endl;
 
        }

        if(Qsum == 0) continue;
        h_Qsum3->Fill(Qsum * convertADCtoQ);

    }


    TCanvas* c2 = new TCanvas("c2", "", 1000, 600);
    
    h_Qsum3->Draw("hist same");
    h_Qsum2->Draw("hist same");
    h_Qsum->Draw("hist same");

    hist_label_format(h_Qsum);
    hist_label_format(h_Qsum2);
    hist_label_format(h_Qsum3);

    h_Qsum2->SetLineColor(2);
    h_Qsum3->SetLineColor(4);
    h_Qsum->SetLineColor(1);

    h_Qsum->GetXaxis()->SetRangeUser(0, maxbin);
    h_Qsum2->GetXaxis()->SetRangeUser(0, maxbin);
    h_Qsum3->GetXaxis()->SetRangeUser(0, maxbin);

    h_Qsum->GetXaxis()->SetTitle("NPE");
    h_Qsum->GetYaxis()->SetTitle("Number of Events");
    h_Qsum2->GetXaxis()->SetTitle("NPE");
    h_Qsum2->GetYaxis()->SetTitle("Number of Events");
    h_Qsum3->GetXaxis()->SetTitle("NPE");
    h_Qsum3->GetYaxis()->SetTitle("Number of Events");


    TLegend* leg = new TLegend(0.4, 0.7, 0.7, 0.9);
    leg->AddEntry(h_Qsum3, "Na22 + BKG");
    leg->AddEntry(h_Qsum2, "Cs137 + BKG");
    leg->AddEntry(h_Qsum, "BKG");
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


