
#include "../../production/Code/variables_for_production.hh"
#include "../Base/src/ChargeSum.cc"
#include "../Base/src/Format.cc"


void setbranch(TTree* t);


void SourceData_waveform_veto(int run){

    gStyle->SetOptStat(0);


    char run_str[1000000];
    sprintf(run_str, "%06d", run);
    /*char subrun_str[1000000];
    sprintf(subrun_str, "%05d", subrun);*/


    TFile* inf = new TFile(Form("/Data/RAW/%s/PRD/PRD_%s.00000.root", run_str, run_str), "read");
    TTree* t_tree = (TTree*) inf->Get("Event");
    setbranch(t_tree);


    TCanvas* c = new TCanvas("c", "", 2400, 600);
    c->Divide(3, 1);

    TH1D* h_wave[4];
    for( int i = 0; i < 4; i++ ) { h_wave[i] = new TH1D(Form("h_%d", i), "", 9000, 0, 9000); }


    string inputC;

    for( int iEntry = 0; iEntry < t_tree->GetEntries(); iEntry++ ){
        initializing();

        if( iEntry % (t_tree->GetEntries()/10) == 0 )
            cout<<iEntry<<" / "<<t_tree->GetEntries()<<" processing ..."<<endl;

        cout<<iEntry<<endl;

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
        if( !flag_noise ){ 
            //cout<<"TRG num = "<<trgNumber<<endl; 
//            continue; 
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


        TLine* line[nchFADC]; TLine* line2[nchFADC];
        TLine* line_ped[nchFADC]; TLine* line2_ped[nchFADC];
       
        double Qsum = 0; 
        double Qsum_each[nchFADC] = { 0, };
        double ped_each[nchFADC] = { 0, };
        for(int ich = 0; ich < 3/*nchFADC*/; ich++){

            //////////////////////////////
            int pedRange1 = 0; int pedRange2 = 100;
            int prevBin = 7; int binInterval = 250;
            int sigRange1 = 100; //bin_fired[ich] - prevBin; 
            int sigRange2 = 400; //bin_fired[ich] + (binInterval-prevBin);
            //////////////////////////////

            //if(Fbit[ich] == 0) continue;
            if(sigRange1 < 0) continue;

            CS_wave[ich]->SetPed(pedRange1, pedRange2);
            CS_wave[ich]->SetQsum(sigRange1, sigRange2);
 
            for( int j = 0; j < Fndp[ich] ; j++ ){
                h_wave[ich]->SetBinContent(j+1, FFwaveform[ich]->at(j));

            }

            ped_each[ich] = CS_wave[ich]->GetPed();

            Qsum_each[ich] = CS_wave[ich]->GetQsum();
            Qsum += CS_wave[ich]->GetQsum();

	    cout<<"TRIGGERED "<<ich<<" = "<<Fbit[ich]<<endl;



/*            line[ich] = new TLine(sigRange1, Fpedestal[ich]-10, sigRange1, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);
            line2[ich] = new TLine(sigRange2, Fpedestal[ich]-10, sigRange2, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);
            line_ped[ich] = new TLine(pedRange1, Fpedestal[ich]-10, pedRange1, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);
            line2_ped[ich] = new TLine(pedRange2, Fpedestal[ich]-10, pedRange2, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);*/

            line[ich] = new TLine(sigRange1, Fpedestal[ich]-10, sigRange1, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);
            line2[ich] = new TLine(sigRange2, Fpedestal[ich]-10, sigRange2, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);
            line_ped[ich] = new TLine(pedRange1, Fpedestal[ich]-10, pedRange1, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);
            line2_ped[ich] = new TLine(pedRange2, Fpedestal[ich]-10, pedRange2, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);



            c->cd(ich+1);
            h_wave[ich]->Draw();
            h_wave[ich]->GetXaxis()->SetRangeUser(0, Fndp[ich]);
            h_wave[ich]->GetYaxis()->SetRangeUser(Fpedestal[ich]-10, h_wave[ich]->GetBinContent(h_wave[ich]->GetMaximumBin())+10);//Fpedestal[ich]+100);
            hist_label_format(h_wave[ich]);
            h_wave[ich]->GetXaxis()->SetTitle("Sample (2 ns / sample)");
            h_wave[ich]->GetYaxis()->SetTitle("ADC (12-bit)");
            h_wave[ich]->SetLineColor(1);
            
            if(ich == 0) h_wave[ich]->SetTitle("CH 1");
            if(ich == 1) h_wave[ich]->SetTitle("CH 2");



            line[ich]->Draw("same"); line[ich]->SetLineColor(2);
            line2[ich]->Draw("same"); line2[ich]->SetLineColor(2);
            line_ped[ich]->Draw("same"); line_ped[ich]->SetLineColor(4);
            line2_ped[ich]->Draw("same"); line2_ped[ich]->SetLineColor(4);
            
        }


        //cin >> inputC;
        getline(cin, inputC);

        cout<<"TRG NUM = "<<trgNumber<<endl;


        if( inputC == 'q' ) break;

        c->Modified();
        c->Update();

        cout<<"Q1 = "<<Qsum_each[0]<<", Q2 = "<<Qsum_each[1]<<", Qtot = "<<Qsum<<endl;
        cout<<"Ped1 = "<<ped_each[0]<<", Ped2 = "<<ped_each[1]<<endl<<endl;

    }



    return;

}



//////////////////////////////////////////

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


