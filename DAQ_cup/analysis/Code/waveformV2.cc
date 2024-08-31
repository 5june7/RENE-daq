R__LOAD_LIBRARY(libRawObjs)

void hist_format1(int i, TH1D* h, int k){
    h->SetLineColor(k);
    h->SetTitle(Form("Event %d: Waveform",i));
    h->GetXaxis()->SetTitle("Sample");
    h->GetYaxis()->SetTitle("ADC counts");
    h->GetXaxis()->SetLabelFont(62);
    h->GetXaxis()->SetTitleFont(62);
    h->GetYaxis()->SetLabelFont(62);
    h->GetYaxis()->SetTitleFont(62);
    h->GetYaxis()->SetRangeUser(-200,4300);
    //h->GetYaxis()->SetRangeUser(809,3286); // for KPS spring
    // (2^12/2.)+-((2^14/2.-2000)*2/2^14*2^12/2.5)
    h->SetLineWidth(2);
};
void hist_format2(int i, TH1D* h, int k){
    h->SetLineColor(k);
    h->SetTitle(Form("Event %d: Waveform",i));
    h->GetXaxis()->SetTitle("Time [ns]");
    h->GetYaxis()->SetTitle("ADC Count");
    h->GetYaxis()->SetRangeUser(-200,4300);
};

void waveformV2(int run, int chan=8, bool logOnOff=0){

    // KPS spring ---
    //TFile* inf = new TFile("./test.root.00000","read");
    //TFile* inf = new TFile("./test_posi_pol.root.00000","read");
    // KPS spring ---

    TFile * inf;
    if(run<10) inf = new TFile(Form("/Data/RAW/00000%d/FADC_00000%d.root.00000", run, run),"read");
    else if(run<100) inf = new TFile(Form("/Data/RAW/0000%d/FADC_0000%d.root.00000", run, run),"read");
    else if(run<1000) inf = new TFile(Form("/Data/RAW/000%d/FADC_000%d.root.00000", run, run),"read");

 
    TTree* t_tree = (TTree*)inf->Get("AbsEvent");
    
    EventInfo* eventinfo = new EventInfo(); 
    FChannelData* fchanneldata = new FChannelData();
    t_tree->SetBranchAddress("EventInfo",&eventinfo);
    t_tree->SetBranchAddress("FChannelData",&fchanneldata);

    int TotalNum = t_tree->GetEntries();
    cout<<" Total events = "<<TotalNum<<endl;
    const int channels = 4; TH1D* h_waveform_test[channels];
    const unsigned short * wave_array = 0;


    TCanvas* c = new TCanvas("c","c",1000,600);

    string inputC;

    int nch = 0; int ich_ff = 0;
    for(int i=0; i<t_tree->GetEntries(); i++){
        t_tree->GetEntry(i);
        if(logOnOff){
            cout<<"++++++++++++++++"<<endl;
            cout<<"  Event = "<<i<<endl;
            cout<<"++++++++++++++++"<<endl;
        }

        // EventInfo
        if(logOnOff){
            cout<<"---- EventInfo ----"<<endl;
            cout<<"TrggerType = "<<eventinfo->GetTriggerType()<<endl;
            cout<<"TriggerNumber = "<<eventinfo->GetTriggerNumber()<<endl;
            cout<<"TriggerTime = "<<eventinfo->GetTriggerTime()<<endl;
            cout<<endl;
        }
       
        // FChannelData
        nch = fchanneldata->GetN();
        if(logOnOff){
            cout<<"---- FChannelData ----"<<endl;
            cout<<"How many channels = "<<nch<<endl;
            cout<<endl;
        }

        getline(cin, inputC);
        
        // FChannelData - for each channels
        FChannel* fchannel[(const int)nch];
        int pedestal[nch];
        for(int ich=0; ich<nch; ich++){
            fchannel[ich] = fchanneldata->Get(ich);
            pedestal[ich] = 0;
            pedestal[ich] = fchannel[ich]->GetPedestal();
            if(logOnOff){
                cout<<"---- FChannelData - "<<ich+1<<" channel ----"<<endl;
                cout<<"Pedestal = "<<pedestal[ich]<<endl;
            }


            //if(i==chan && ich==0){
                ich_ff = ich;
                int ndp = fchannel[ich]->GetSize();
                int fID = fchannel[ich]->GetID();

                h_waveform_test[ich] = (TH1D*) fchannel[ich]->GetWaveformHist(1);
                wave_array = fchannel[ich]->GetWaveform();

                if(fchannel[ich]->GetBit()) cout<<"CH" <<fID<<" is triggered!"<<endl;
                cout<<"fBit = "<<fchannel[ich]->GetBit()<<endl;

                if(logOnOff){
                    cout<<endl;
                    cout<<"----------"<<endl;
                    for(int p=0; p<ndp; p++)
                        cout<<"ADC = "<<wave_array[p]<<endl;

                    cout<<"----------"<<endl;
                }
            //}
            
            h_waveform_test[ich]->Draw("same");
            h_waveform_test[ich]->SetLineColor(ich+1);
            h_waveform_test[ich]->GetYaxis()->SetRangeUser(0, 4400);

        }

        if( inputC == 'q' ) break;

        c->Modified();
        c->Update();
    
        if(logOnOff) cout<<endl;
    }

/*
    gStyle->SetOptStat(0); 
    gStyle->SetTitleFont(62);
    gStyle->SetTitleX(.5);

    TCanvas* c = new TCanvas("c","c",1000,600);
    c->cd();
    c->SetGridx(); c->SetGridy();
    TLegend* leg = new TLegend(0.8,0.8,0.9,0.9);
    leg->SetTextFont(62); leg->SetFillStyle(0);
    leg->SetBorderSize(0);
    for(int k=0; k<nch; k++){
        if( !(k == ich_ff) ) continue;
        h_waveform_test[k]->Draw("hist same");
        hist_format1(chan, h_waveform_test[k], k+1);
        leg->AddEntry(h_waveform_test[k],Form("Ch %d",k+1),"l");
        leg->Draw("same");
        cout<<"LLL"<<endl;
    }
*/

    return;
}
