
void hist_label_format(TH1D* h){

    h->GetXaxis()->CenterTitle(true);                      
    h->GetXaxis()->SetLabelFont(72);                       
    h->GetXaxis()->SetTitleFont(72);                       
    h->GetYaxis()->CenterTitle(true);                      
    h->GetYaxis()->SetLabelFont(72);                       
    h->GetYaxis()->SetTitleFont(72);

}

