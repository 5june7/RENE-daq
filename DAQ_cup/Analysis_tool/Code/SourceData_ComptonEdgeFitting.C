
#include "../Base/src/Format.cc"


void SourceData_ComptonEdgeFitting(const char* source){

    TFile* inf = new TFile(Form("../Data/SourceData_%s_20m.root", source), "read");
    TH1D* h_bkg = (TH1D*) inf->Get("BKG");
    TH1D* h_source = (TH1D*) inf->Get("Source");
    TH1D* h_sub = (TH1D*) inf->Get("Subtracted");


    TF1* f_err = new TF1("f_err", "[0] * ( 1 - TMath::Erf( (x-[1]) / [2] ) )", 0, 2000);
    f_err->SetParameter(0, 1);
    f_err->SetParameter(1, 0);
    f_err->SetParameter(2, 1);


    TCanvas* c = new TCanvas("c", "", 800, 600);
    c->SetLogy();


    //h_bkg->Rebin(2);
    //h_source->Rebin(2);

    h_source->Add(h_bkg, -1);
    h_source->Fit("f_err", "", "", 10, 60);

    //f_err->Draw();



}
