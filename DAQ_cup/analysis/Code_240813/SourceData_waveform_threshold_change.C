
#include "../../production/Code/variables_for_production.hh"
#include "../Base/src/ChargeSum.cc"

void setbranch(TTree* t);



void SourceData_waveform_threshold_change(int run){

    char run_str[1000000];
    sprintf(run_str, "%06d", run);
    /*char subrun_str[1000000];
    sprintf(subrun_str, "%05d", subrun);*/


    TFile* inf = new TFile(Form("../../../DAQ_cup/Data/RAW/%s/PRD/PRD_%s.00000.root", run_str, run_str), "read");
    TTree* t_tree = (TTree*) inf->Get("Event");
    setbranch(t_tree);


    TCanvas* c = new TCanvas("c", "", 1000, 600);
    c->Divide(2, 2);

    TH1D* h_wave[4];
    for( int i = 0; i < 4; i++ ) { h_wave[i] = new TH1D(Form("h_%d", i), "", 9000, 0, 9000); }


    string inputC;

    int numEvent = 0;
    for( int iEntry = 0; iEntry < t_tree->GetEntries(); iEntry++ ){
        initializing();

        if( iEntry % (t_tree->GetEntries()/10) == 0 )
            cout<<iEntry<<" / "<<t_tree->GetEntries()<<" processing ..."<<endl;

        t_tree->GetEntry(iEntry);

        //if(trgNumber<1390) continue; // Cs data (run 24): By CW, one (1399) of waves is shifted!


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

        // Threshold check.
        
        int check_num = 0;
        for(int ich = 0; ich < nchFADC; ich++){

            if(Fbit[ich] == 0) continue;

            for(int iWave = 0; iWave < Fndp[ich]; iWave++ ){
                if( FFwaveform[ich]->at(iWave) - Fpedestal[ich] >= 246){
                    check_num += 1; break; 
                }
            }
        }

        if(check_num != 2) continue;


        int bin_fired[nchFADC] = { 0, };
        for(int ich = 0; ich < nchFADC; ich++){

            if(Fbit[ich] == 0) continue;

            for(int iWave = 0; iWave < Fndp[ich]; iWave++ ){
                if( FFwaveform[ich]->at(iWave) - Fpedestal[ich] >= Fthr[ich] ){
                    bin_fired[ich] = iWave; break; 
                }
            }
        }


        //cin >> inputC;
        getline(cin, inputC);

        cout<<"TRG NUM = "<<trgNumber<<endl;

        TLine* line[nchFADC]; TLine* line2[nchFADC];
        TLine* line_ped[nchFADC]; TLine* line2_ped[nchFADC];
        
        for(int ich = 0; ich < nchFADC; ich++){

            //////////////////////////////
            int pedRange1 = 0; int pedRange2 = 100;
            int prevBin = 7; int binInterval = 50;
            int sigRange1 = bin_fired[ich] - prevBin; 
            int sigRange2 = bin_fired[ich] + (binInterval-prevBin);
            //////////////////////////////

            for( int j = 0; j < Fndp[ich] ; j++ ){
                h_wave[ich]->SetBinContent(j+1, FFwaveform[ich]->at(j));

            }

            line[ich] = new TLine(sigRange1, Fpedestal[ich]-10, sigRange1, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin()));
            line2[ich] = new TLine(sigRange2, Fpedestal[ich]-10, sigRange2, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin()));
            line_ped[ich] = new TLine(pedRange1, Fpedestal[ich]-10, pedRange1, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin()));
            line2_ped[ich] = new TLine(pedRange2, Fpedestal[ich]-10, pedRange2, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin()));


            c->cd(ich+1);
            h_wave[ich]->Draw();
            h_wave[ich]->GetXaxis()->SetRangeUser(0, Fndp[ich]);
            h_wave[ich]->GetYaxis()->SetRangeUser(Fpedestal[ich]-10, Fpedestal[ich]+80);

            line[ich]->Draw("same"); line[ich]->SetLineColor(2);
            line2[ich]->Draw("same"); line2[ich]->SetLineColor(2);
            line_ped[ich]->Draw("same"); line_ped[ich]->SetLineColor(2);
            line2_ped[ich]->Draw("same"); line2_ped[ich]->SetLineColor(2);
            
        }
        
        if( inputC == 'q' ) break;

        c->Modified();
        c->Update();


    }



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


