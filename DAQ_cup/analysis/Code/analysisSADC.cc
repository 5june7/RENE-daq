R__LOAD_LIBRARY(libRawObjs)

void hist_format1(int i, TH1D* h, int k){
    //h->SetLineColor(k);
    h->GetXaxis()->SetTitle("ADC Value");
    h->GetYaxis()->SetTitle("Entry");
    h->GetXaxis()->SetLabelFont(62);
    h->GetXaxis()->SetTitleFont(62);
    h->GetYaxis()->SetLabelFont(62);
    h->GetYaxis()->SetTitleFont(62);
    h->GetXaxis()->SetRangeUser(0,h->GetBinCenter(h->GetNbinsX()));
    //h->SetLineWidth(2);
};
void hist_format2(int i, TH1D* h, int k){
    h->SetLineColor(k);
    h->SetTitle(Form("Event %d: Waveform",i));
    h->GetXaxis()->SetTitle("Time [ns]");
    h->GetYaxis()->SetTitle("ADC Count");
    h->GetYaxis()->SetRangeUser(0,5000);
};

void analysisSADC(int run, bool logOnOff=0){

    //TFile * inf = new TFile(Form("../install/bin/test_sadc.00000"),"read");
    TFile * inf;
    if(run<10) inf = new TFile(Form("/Data/RAW/00000%d/SADC_00000%d.root.00000", run, run),"read");
    else if(run<100) inf = new TFile(Form("/Data/RAW/0000%d/SADC_0000%d.root.00000", run, run),"read");
    else if(run<1000) inf = new TFile(Form("/Data/RAW/000%d/SADC_000%d.root.00000", run, run),"read");

    TTree* t_tree = (TTree*)inf->Get("AbsEvent");
    
    EventInfo* eventinfo = new EventInfo(); 
    AChannelData* achanneldata = new AChannelData();
    t_tree->SetBranchAddress("EventInfo",&eventinfo);
    t_tree->SetBranchAddress("AChannelData",&achanneldata);

    int TotalNum = t_tree->GetEntries();
    cout<<" Total events = "<<TotalNum<<endl;
    const int channels = 32; TH1D* h_Q_distribution[channels]; // maximum channel
    for(int j=0; j<channels; j++) 
        h_Q_distribution[j]=new TH1D(Form("h_Q_distribution_%d",j),Form("h_Q_distribution_%d",j),30000,0,30000);

    int nch = 0;
    for(int i=0; i<10000/*t_tree->GetEntries()*/; i++){
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
       
        // AChannelData
        nch = achanneldata->GetN();
        if(logOnOff){
            cout<<"---- AChannelData ----"<<endl;
            cout<<"How many channels = "<<nch<<endl;
            cout<<endl;
        }

        // AChannelData - for each channels
        AChannel* achannel[(const int)nch];
        int pedestal[nch];
        for(int ich=0; ich<nch; ich++){
            cout<<"HHH"<<endl;
            achannel[ich] = achanneldata->Get(ich);
            if(logOnOff){
                cout<<"---- AChannelData - "<<ich+1<<" channel ----"<<endl;
                cout<<"Time = "<<achannel[ich]->GetTime()<<", ADC = "<<achannel[ich]->GetADC()<<endl;
            }

            unsigned short fID = achannel[ich]->GetID(); // channel id
            unsigned short fBit = achannel[ich]->GetBit(); // trigger bit
            unsigned int fADC = achannel[ich]->GetADC(); 

            cout<<"fID = "<<fID<<", fBit = "<<fBit<<", fADC = "<<fADC<<endl;

            h_Q_distribution[ich]->Fill(fADC);
        }
        if(logOnOff) cout<<endl;

    }


    gStyle->SetOptStat(0); 
    gStyle->SetTitleFont(62);
    gStyle->SetTitleX(.5);

    TCanvas* c = new TCanvas("c","c",3200,1600);
    c->Divide(8,4);
    TLegend* leg[channels];
    for(int k=0; k<nch; k++){
        c->cd(k+1); c->SetLogy();
        h_Q_distribution[k]->Draw("hist same");
        hist_format1(k, h_Q_distribution[k], k+1);
        
        leg[k] = new TLegend(0.5,0.6,0.9,0.9);
        leg[k]->AddEntry(h_Q_distribution[k],Form("Ch %d",k+1),"l");
        leg[k]->Draw("same");
        leg[k]->SetTextFont(62); leg[k]->SetFillStyle(0);
        leg[k]->SetBorderSize(0);

        cout<<"LLL"<<endl;
    }

    return;
}
