
#include "../../production/Code/variables_for_production.hh"
#include "../Base/src/ChargeSum.cc"
#include "../Base/src/Format.cc"


void setbranch(TTree* t);


// [V] * [ns] / [ohm] * nano->pico / electron charge
// [C] = [A] * [s], [A] = [V] / [ohm]
const double convertADCtoQ = (2. / pow(2, 12)) * 16. / 50. * 1e3;

void SourceData_Qsum_veto_SADC(int run, int subrun){

    gStyle->SetOptStat(111111);


    char run_str[1000000];
    sprintf(run_str, "%06d", run);
    char subrun_str[1000000];
    sprintf(subrun_str, "%05d", subrun);



    TChain* chain = new TChain("Event");
    if(subrun < 0) chain->Add(Form("/Data/RAW/%s/PRD/PRD_%s.*.root", run_str, run_str));
    else chain->Add(Form("/Data/RAW/%s/PRD/PRD_%s.%s.root", run_str, run_str, subrun_str));
    setbranch(chain);


    /// HISTOGRAM SETTING THAT WILL BE DRAWN ///
    int maxbin = 9000;//120000;
    int Nbins = 2000;
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
       


        // 3. Calculate pedestal and charge sum.
	double Qsum_each[32] = { 0, };
        double Qsum = 0; bool flag_hist = false;
        for(int ich = 0; ich < 2/*nchFADC*/; ich++){
            Qsum_each[ich] = Sadc[ich];
	    h_Qsum_each[ich]->Fill(Qsum_each[ich]);
            Qsum += Qsum_each[ich];
        }
        h_Qsum->Fill(Qsum * convertADCtoQ);

    }


    TCanvas* c = new TCanvas("c", "", 800, 600);
    c->cd();
    h_Qsum->Draw();
    h_Qsum->GetXaxis()->SetRangeUser(0, maxbin);

    hist_label_format(h_Qsum);

    h_Qsum->GetXaxis()->SetTitle("pC");
    h_Qsum->GetYaxis()->SetTitle("Number of Events");


    TCanvas* c2 = new TCanvas("c2", "", 800, 600);
    c2->cd();
    
    TLegend* leg = new TLegend(0.4, 0.7, 0.7, 0.9);

    for(int ich = 0; ich < 2/*nchFADC*/; ich++){
        h_Qsum_each[ich]->Draw("hist same");
        h_Qsum_each[ich]->SetLineColor(ich+1);

        hist_label_format(h_Qsum_each[ich]);

        h_Qsum_each[ich]->GetXaxis()->SetTitle("pC");
        h_Qsum_each[ich]->GetXaxis()->SetRangeUser(0, maxbin);
        h_Qsum_each[ich]->GetYaxis()->SetTitle("Number of Events");

        if(ich == 0) leg->AddEntry(h_Qsum_each[ich], "Near");
        if(ich == 1) leg->AddEntry(h_Qsum_each[ich], "Far");
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


