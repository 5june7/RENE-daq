
#include "../../production/Code/variables_for_production.hh"
#include "../Base/src/ChargeSum.cc"
#include "../Base/src/Format.cc"

void setbranch(TTree* t);


// [V] * [ns] / [ohm] * nano->pico / electron charge
// [C] = [A] * [s], [A] = [V] / [ohm]
const double convertADCtoQ = (2.5 / pow(2, 12)) * 2. / 50. * 1e3;

void SourceData_Qsum_veto_fitting_v2(int run, int subrun){

    ////////////////////////////////////////////////////////////
    // Search CORRECT and then correct it as a proper value!!!!!
    ////////////////////////////////////////////////////////////


    gStyle->SetOptStat(111111);


    char run_str[1000000];
    sprintf(run_str, "%06d", run);
    char subrun_str[1000000];
    sprintf(subrun_str, "%05d", subrun);



    TChain* chain = new TChain("Event");
    if(subrun < 0) chain->Add(Form("/Data/RAW/%s/PRD/PRD_%s.*.root", run_str, run_str));
    else chain->Add(Form("/Data/RAW/%s/PRD/PRD_%s.%s.root", run_str, run_str, subrun_str));
    setbranch(chain);

    TH1D* h_wave[4];
    for( int i = 0; i < 4; i++ ) { h_wave[i] = new TH1D(Form("h_%d", i), "", 496, 0, 496); }



    /// HISTOGRAM SETTING THAT WILL BE DRAWN ///
    int maxbin = 9000;//120000;
    int Nbins = 1000;
    
    double fitExpS[2] = { 50, 50 };//95;//50; // CORRECT
    double fitExpF[2] = { 120/*130*/, 130 };//95;//50; // CORRECT

    double fitLanS[2] = { 120/*130*/, 130 };//95;//50; // CORRECT
    double fitLanF[2] = { 1000, 1000 };//95;//50; // CORRECT
 
    ///////////////////////////////////////////

    TH1D* h_Qsum = new TH1D("h_Qsum", "", Nbins, -1000, maxbin);
    TH1D* h_Qsum_each[4];
    for( int ich = 0; ich < nchFADC; ich++ ){
        h_Qsum_each[ich] = new TH1D(Form("h_Qsum_%d", ich), "", Nbins, -1000, maxbin);
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

            //if(Fbit[ich] == 0) continue;

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
            int sigRange2 = 400; //bin_fired[ich] + (binInterval-prevBin);
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


    // fitting
    const int nch_fit = 2;
    
    TCanvas* c = new TCanvas("c", "", 1600, 600);
    c->Divide(2, 1);

    TLegend* leg[nch_fit];

    TString name[nch_fit] = { "Near", "Far" };


    double ini1[nch_fit][2]; double ini2[nch_fit][3];
    double par[nch_fit][5]; double par_result[nch_fit][5]; 

    TF1* f_fitting[nch_fit]; TF1* f_expo[nch_fit]; TF1* f_landau[nch_fit];
    TF1* f_expo_final[nch_fit]; TF1* f_landau_final[nch_fit];

    double ref_pC[nch_fit];
    TLine* line[nch_fit];
    
    for(int ich = 0; ich < nch_fit; ich++){
       
        leg[ich] = new TLegend(0.4, 0.7, 0.7, 0.9);

        ini1[ich][0] = 10; ini1[ich][1] = 10;
        ini2[0][0] = 1; ini2[0][1] = 200; ini2[0][2] = 1; // CORRECT: MPV = ini2[ich][1]
        ini2[1][0] = 1; ini2[1][1] = 200; ini2[1][2] = 1; // CORRECT: MPV = ini2[ich][1]

        c->cd(ich+1);
       

        f_fitting[ich] = new TF1(Form("f_fitting_%d", ich), "[0]*exp(-x/[1]) + [2]*TMath::Landau(x,[3],[4])", fitExpS[ich], maxbin);

        f_expo[ich] = new TF1(Form("f_expo_%d", ich), "[0]*exp(-x/[1])", fitExpS[ich], fitExpF[ich]); // CORRECT
        f_expo[ich]->SetParameters(ini1[ich]);
        f_landau[ich] = new TF1(Form("f_landau_%d", ich), "[0]*TMath::Landau(x,[1],[2])", fitLanS[ich], fitLanF[ich]); // CORRECT
        f_landau[ich]->SetParameters(ini2[ich]);

        h_Qsum_each[ich]->Fit(f_expo[ich], "R");
        f_expo[ich]->GetParameters(&par[ich][0]);
        h_Qsum_each[ich]->Fit(f_landau[ich],"R");
        f_landau[ich]->GetParameters(&par[ich][2]);


        f_fitting[ich]->SetParameters(par[ich]);
        h_Qsum_each[ich]->Fit(f_fitting[ich], "R");
        f_fitting[ich]->GetParameters(&par_result[ich][0]);



        // drawing
        hist_label_format(h_Qsum_each[ich]);

        h_Qsum_each[ich]->GetXaxis()->SetTitle("pC");
        h_Qsum_each[ich]->GetYaxis()->SetTitle("Number of Events");

        h_Qsum_each[ich]->Draw();
        h_Qsum_each[ich]->GetXaxis()->SetRangeUser(fitExpS[ich], 1000); // CORRECT
        h_Qsum_each[ich]->GetYaxis()
            ->SetRangeUser(0, 2*h_Qsum_each[ich]->GetBinContent(h_Qsum_each[ich]->FindBin(par_result[ich][3])));
        f_fitting[ich]->Draw("same");

        leg[ich]->AddEntry((TObject*)0, Form("%s", name[ich].Data()), "");
        leg[ich]->AddEntry((TObject*)0, Form("MPV = %.2lf pC", par_result[ich][3]), "");
        leg[ich]->SetTextFont(72); leg[ich]->SetTextSize(0.035);
        leg[ich]->Draw("same");


        // counting

        // exponential
        double par_check0[2] = { par_result[ich][0], par_result[ich][1] };
        f_expo_final[ich] = new TF1(Form("f_expo_final_%d", ich), "[0]*exp(-x/[1])", 0, maxbin);
        f_expo_final[ich]->SetParameters(par_check0);
        f_expo_final[ich]->Draw("same"); 
        f_expo_final[ich]->SetLineStyle(2); f_expo_final[ich]->SetLineColor(4);

        // Landau
        double par_check[3] = { par_result[ich][2], par_result[ich][3], par_result[ich][4] };
        f_landau_final[ich] = new TF1(Form("f_landau_final_%d", ich), "[0]*TMath::Landau(x,[1],[2])", 0, maxbin);
        f_landau_final[ich]->SetParameters(par_check);
        f_landau_final[ich]->Draw("same"); 
        f_landau_final[ich]->SetLineStyle(2); f_landau_final[ich]->SetLineColor(4);

        ref_pC[ich] = maxbin; double prev = 1e8;
        for(int ibin = fitExpS[ich]; ibin < Nbins; ibin++){
            if( !(f_fitting[ich]->Eval(ibin) - prev < 0) ) { ref_pC[ich] = ibin; break; } // minimum of the fitting function
            //if( (f_landau_final[ich]->Eval(ibin) == f_expo_final[ich]->Eval(ibin)) ) { ref_pC[ich] = ibin; break; }
            prev = f_fitting[ich]->Eval(ibin);
        }

        line[ich] = new TLine(ref_pC[ich], 0, 
                              ref_pC[ich], 2*h_Qsum_each[ich]->GetBinContent(h_Qsum_each[ich]->FindBin(par_result[ich][3])));
        line[ich]->Draw("same");
        line[ich]->SetLineStyle(9); line[ich]->SetLineColor(1); line[ich]->SetLineWidth(2);


    }

    cout<<"---------------"<<endl;
    cout<<" Muon counting "<<endl;
    cout<<"---------------"<<endl;
    cout<<" Minimum position of the fitting functionm (RED) "<<endl;
    cout<<"---------------"<<endl;
    for(int ich = 0; ich < nch_fit; ich++){
        cout<<" - CH "<<ich<<": Entries (from "<<ref_pC[ich]<<" pC) = "
            <<h_Qsum_each[ich]->Integral(h_Qsum_each[ich]->FindBin(ref_pC[ich]), maxbin)
            <<endl;
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


