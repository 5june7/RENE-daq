#include <iostream>

#include "TSystem.h"

#include "DAQSystem/AbsTCB.hh"
#include "OnlConsts/adcconsts.hh"

using namespace std;

ClassImp(AbsTCB)

    AbsTCB::AbsTCB()
    : TObject()
{
  fLog = ELogger::Instance(true);
}

AbsTCB::~AbsTCB() {}

void AbsTCB::WriteRegisterTCB(TCBConf * conf)
{
  WriteTRIGENABLE(0, conf->TM());
  WriteCW(0, 1, conf->CW());
  WriteGATEDLY(conf->DLY());
  WritePTRIG(conf->PTRG());
  WriteMTHRFADC(conf->MTHRF());
  WritePSCALEFADC(conf->PSCF());
  WriteDT(0, 0, conf->DTF());

  if (conf->TCBTYPE() == TCB::V2) {
    WriteMTHRSADCMU(conf->MTHRSM());
    WritePSCALESADCMU(conf->PSCSM());
    WriteDT(0, 1, conf->DTSM());
    WriteMTHRSADCLS(conf->MTHRSL());
    WritePSCALESADCLS(conf->PSCSL());
    WriteDT(0, 2, conf->DTSL());
    WriteMTHRIADC(conf->MTHRI());
    WritePSCALEIADC(conf->PSCI());
    WriteDT(0, 3, conf->DTI());

    int sw = conf->SWF();
    unsigned long f = (unsigned long)TESTBIT(sw, 0);
    unsigned long sm = (unsigned long)TESTBIT(sw, 1);
    unsigned long sl = (unsigned long)TESTBIT(sw, 2);
    unsigned long i = (unsigned long)TESTBIT(sw, 3);
    WriteTRGSWFADC(f, sm, sl, i);

    sw = conf->SWSM();
    f = (unsigned long)TESTBIT(sw, 0);
    sm = (unsigned long)TESTBIT(sw, 1);
    sl = (unsigned long)TESTBIT(sw, 2);
    i = (unsigned long)TESTBIT(sw, 3);
    WriteTRGSWSADCMU(f, sm, sl, i);

    sw = conf->SWSL();
    f = (unsigned long)TESTBIT(sw, 0);
    sm = (unsigned long)TESTBIT(sw, 1);
    sl = (unsigned long)TESTBIT(sw, 2);
    i = (unsigned long)TESTBIT(sw, 3);
    WriteTRGSWSADCLS(f, sm, sl, i);

    sw = conf->SWI();
    f = (unsigned long)TESTBIT(sw, 0);
    sm = (unsigned long)TESTBIT(sw, 1);
    sl = (unsigned long)TESTBIT(sw, 2);
    i = (unsigned long)TESTBIT(sw, 3);
    WriteTRGSWIADC(f, sm, sl, i);
  }
}

void AbsTCB::WriteRegisterFADC(FADCTConf * conf)
{
  unsigned long mid = conf->MID();
  WriteRL(mid, conf->RL());
  WriteDSR(mid, conf->DSR());
  WriteTLT(mid, conf->TLT());

  int nch = conf->NCH();
  for (int i = 0; i < nch; i++) {
    ULong_t cid = conf->CID(i);


    WriteAMODE(mid, cid, conf->AMD(i));
    WritePOL(mid, cid, conf->POL(i));
    WriteCW(mid, cid, conf->CW(i));
    WriteTHR(mid, cid, conf->THR(i));
    WriteDLY(mid, cid, conf->DLY(i));
    WriteDT(mid, cid, conf->DT(i));
    WriteTM(mid, cid, conf->TM(i));
    WritePCT(mid, cid, conf->PCT(i));
    WritePCI(mid, cid, conf->PCI(i));
    WritePWT(mid, cid, conf->PWT(i));
    WritePSW(mid, cid, conf->PSW(i));
    WriteDACOFF(mid, cid, conf->DACOFF(i));


  }

  AlignFADC(mid);
}

void AbsTCB::WriteRegisterGADC(GADCTConf * conf)
{
  unsigned long mid = conf->MID();

  WriteRL(mid, conf->RL());
  WriteDSR(mid, conf->DSR());
  WriteTLT(mid, conf->TLT());

  int nch = conf->NCH();
  for (int i = 0; i < nch; i++) {
    ULong_t cid = conf->CID(i);

    WriteAMODE(mid, cid, conf->AMD(i));
    WritePOL(mid, cid, conf->POL(i));
    WriteCW(mid, cid, conf->CW(i));
    WriteTHR(mid, cid, conf->THR(i));
    WriteDLY(mid, cid, conf->DLY(i));
    WriteDT(mid, cid, conf->DT(i));
    WriteTM(mid, cid, conf->TM(i));
    WritePCT(mid, cid, conf->PCT(i));
    WritePCI(mid, cid, conf->PCI(i));
    WritePWT(mid, cid, conf->PWT(i));
    WritePSW(mid, cid, conf->PSW(i));
    WriteDACOFF(mid, cid, conf->DACOFF(i));
  }

  AlignGADC(mid);
}

void AbsTCB::WriteRegisterSADC(SADCTConf * conf)
{
  unsigned long mid = conf->MID();


  WriteGW(mid, conf->GW());
  WriteCW(mid, 1, conf->CW());
  WritePSW(mid, 1, conf->PSW());
  WriteAMODE(mid, 1, conf->SUBPED());
  
  int nch = conf->NCH();
  for (int i = 0; i < nch; i++) {
    ULong_t cid = conf->CID(i);

/*    cout << "THR (" << i << ") = " << conf->THR(i) << endl;
    cout << "DLY (" << i << ") = " << conf->DLY(i) << endl;*/

    WriteTHR(mid, cid, conf->THR(i));
    WriteDLY(mid, cid, conf->DLY(i));

  }

  for (int i = 0; i < 8; i++) {
    WriteSTLT(mid, (i + 1) * 4, conf->TLT(i));
  }

  AlignSADC(mid);
}

void AbsTCB::WriteRegisterIADC(IADCTConf * conf)
{
  unsigned long mid = conf->MID();

  int mode = conf->MODE();
  WriteRL(mid, conf->RL());
  WriteGW(mid, conf->GW());
  WriteCW(mid, 1, conf->CW());
  WritePSW(mid, 1, conf->PSW());
  WriteDAQMODE(mid, mode);

  int nch = conf->NCH();
  for (int i = 0; i < nch; i++) {
    ULong_t cid = conf->CID(i);
    WriteTHR(mid, cid, conf->THR(i));
    WriteDLY(mid, cid, conf->DLY(i));
  }

  for (int i = 0; i < 10; i++) {
    WriteSTLT(mid, i + 1, conf->TLT(i));
  }

  for (int i = 0; i < 5; i++) {
    WriteHV(mid, i + 1, conf->HV(i));
  }

  AlignIADC(mid);
}

// print register
void AbsTCB::PrintRegisterTCB(TCBConf * conf)
{
  if (conf->TCBTYPE() == TCB::V2) {
    unsigned long sw = ReadTRGSWFADC();
    int f = (int)TESTBIT(sw, 0);
    int sm = (int)TESTBIT(sw, 1);
    int sl = (int)TESTBIT(sw, 2);
    int i = (int)TESTBIT(sw, 3);
    const char * swf = Form("%d %d %d %d", f, sm, sl, i);

    sw = ReadTRGSWSADCMU();
    f = (int)TESTBIT(sw, 0);
    sm = (int)TESTBIT(sw, 1);
    sl = (int)TESTBIT(sw, 2);
    i = (int)TESTBIT(sw, 3);
    const char * swsm = Form("%d %d %d %d", f, sm, sl, i);

    sw = ReadTRGSWSADCLS();
    f = (int)TESTBIT(sw, 0);
    sm = (int)TESTBIT(sw, 1);
    sl = (int)TESTBIT(sw, 2);
    i = (int)TESTBIT(sw, 3);
    const char * swsl = Form("%d %d %d %d", f, sm, sl, i);

    sw = ReadTRGSWIADC();
    f = (int)TESTBIT(sw, 0);
    sm = (int)TESTBIT(sw, 1);
    sl = (int)TESTBIT(sw, 2);
    i = (int)TESTBIT(sw, 3);
    const char * swi = Form("%d %d %d %d", f, sm, sl, i);

    cout << Form(
                " ++ TCB register: SID(0) TRGON(%lu) CW(%lu) DLY(%lu) "
                "PTRIG(%lu) \n"
                "                  MTHRF(%lu)  PSCF(%lu)  DTF(%lu)  TSWF(%s) \n"
                "                  MTHRSM(%lu) PSCSM(%lu) DTSM(%lu) TSWSM(%s) "
                "\n"
                "                  MTHRSL(%lu) PSCSL(%lu) DTSL(%lu) TSWSL(%s) "
                "\n"
                "                  MTHRI(%lu)  PSCI(%lu)  DTI(%lu)  TSWI(%s) ",
                ReadTRIGENABLE(0), ReadCW(0, 1), ReadGATEDLY(), ReadPTRIG(),
                ReadMTHRFADC(), ReadPSCALEFADC(), ReadDT(0, 0), swf,
                ReadMTHRSADCMU(), ReadPSCALESADCMU(), ReadDT(0, 1), swsm,
                ReadMTHRSADCLS(), ReadPSCALESADCLS(), ReadDT(0, 2), swsl,
                ReadMTHRIADC(), ReadPSCALEIADC(), ReadDT(0, 3), swi)
         << endl;
  }
  else {
    cout << Form(" ++ TCB register: SID(0) TRGON(%lu) CW(%lu) DLY(%lu) "
                 "PTRIG(%lu) \n"
                 "                  MTHR(%lu) PSC(%lu) DT(%lu)",
                 ReadTRIGENABLE(0), ReadCW(0, 1), ReadGATEDLY(), ReadPTRIG(),
                 ReadMTHRFADC(), ReadPSCALEFADC(), ReadDT(0, 0))
         << endl;
  }
}

void AbsTCB::PrintRegisterFADC(FADCTConf * conf)
{
  int sid = conf->SID();
  int mid = conf->MID();
  int nch = conf->NCH();

  unsigned long rRL = ReadRL(mid);
  unsigned long rTLT = ReadTLT(mid);
  unsigned long rDSR = ReadDSR(mid);

  cout << Form(" ++ FADC register: SID(%d) MID(%1d) NCH(%1d) RL(%lu) TLT(%lX) "
               "DSR(%lu)",
               sid, mid, nch, rRL, rTLT, rDSR)
       << endl;

  cout << " -----------------------------------------------" << endl;
  cout << "        CID : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8d", conf->CID(i));
  }
  cout << endl;
  cout << "        POL : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPOL(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "     DACOFF : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadDACOFF(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "      AMODE : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadAMODE(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        DLY : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadDLY(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "      DTIME : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadDT(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "         CW : ";
  for (int i = 0; i < nch; i++)
    cout << Form("%8lu", ReadCW(mid, conf->CID(i)));
  cout << endl;
  cout << "         TM : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadTM(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        THR : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadTHR(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PCT : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPCT(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PCI : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPCI(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PWT : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPWT(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PSW : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPSW(mid, conf->CID(i)));
  }
  cout << endl;
  cout << " -----------------------------------------------" << endl;
  cout << endl;
}

void AbsTCB::PrintRegisterGADC(GADCTConf * conf)
{
  int sid = conf->SID();
  int mid = conf->MID();
  int nch = conf->NCH();

  unsigned long rRL = ReadRL(mid);
  unsigned long rTLT = ReadTLT(mid);
  unsigned long rDSR = ReadDSR(mid);

  cout << Form(" ++ GADC register: SID(%d) MID(%d) NCH(%1d) RL(%lu) TLT(%lX) "
               "DSR(%lu)",
               sid, mid, nch, rRL, rTLT, rDSR)
       << endl;

  cout << " -----------------------------------------------" << endl;
  cout << "        CID : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8d", conf->CID(i));
  }
  cout << endl;
  cout << "        POL : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPOL(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "     DACOFF : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadDACOFF(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "      AMODE : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadAMODE(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        DLY : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadDLY(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "      DTIME : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadDT(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "         CW : ";
  for (int i = 0; i < nch; i++)
    cout << Form("%8lu", ReadCW(mid, conf->CID(i)));
  cout << endl;
  cout << "         TM : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadTM(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        THR : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadTHR(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PCT : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPCT(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PCI : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPCI(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PWT : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPWT(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "        PSW : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%8lu", ReadPSW(mid, conf->CID(i)));
  }
  cout << endl;
  cout << " -----------------------------------------------" << endl;
  cout << endl;
}

void AbsTCB::PrintRegisterSADC(SADCTConf * conf)
{
  int sid = conf->SID();
  int mid = conf->MID();
  int nch = conf->NCH();

  unsigned long rCW = ReadCW(mid, 1);
  unsigned long rGW = ReadGW(mid);
  unsigned long rPSW = ReadPSW(mid, 1);
  unsigned long rPEDSUB = ReadAMODE(mid, 1);

  cout << Form(" ++ SADCT register: SID(%d) MID(%d) NCH(%1d) CW(%lu) GW(%lu) "
               "PSW(%lu) SUBPED(%lu)",
               sid, mid, nch, rCW, rGW, rPSW, rPEDSUB)
       << endl;
  cout << Form("                    TLT1(%lX) TLT2(%lX) TLT3(%lX) TLT4(%lX)",
               ReadSTLT(mid, 1 * 4), ReadSTLT(mid, 2 * 4), ReadSTLT(mid, 3 * 4),
               ReadSTLT(mid, 4 * 4))
       << endl;
  cout << Form("                    TLT5(%lX) TLT6(%lX) TLT7(%lX) TLT8(%lX)",
               ReadSTLT(mid, 5 * 4), ReadSTLT(mid, 6 * 4), ReadSTLT(mid, 7 * 4),
               ReadSTLT(mid, 8 * 4))
       << endl;
  cout << " -----------------------------------------------" << endl;
  cout << "    CID : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%6d", conf->CID(i));
  }
  cout << endl;
  cout << "    THR : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%6lu", ReadTHR(mid, conf->CID(i)));
  }
  cout << endl;
  cout << "    DLY : ";
  for (int i = 0; i < nch; i++) {
    cout << Form("%6lu", ReadDLY(mid, conf->CID(i)));
  }
  cout << endl;
  cout << " -----------------------------------------------" << endl;
  cout << endl;
}

void AbsTCB::PrintRegisterIADC(IADCTConf * conf)
{
  int sid = conf->SID();
  int mid = conf->MID();
  int nch = conf->NCH();

  unsigned long rRL = ReadRL(mid);
  unsigned long rCW = ReadCW(mid, 1);
  unsigned long rGW = ReadGW(mid);
  unsigned long rPSW = ReadPSW(mid, 1);
  unsigned long rMODE = ReadDAQMODE(mid);

  if (rMODE > 0) rGW = 0;
  else rRL = 0;

  cout << Form(" ++ IADCT register: SID(%d) MID(%1d) NCH(%1d) MODE(%ld) "
               "RL(%ld) CW(%ld) GW(%ld) PSW(%ld)",
               sid, mid, nch, rMODE, rRL, rCW, rGW, rPSW)
       << endl;
  cout << Form("                    TLT1(%lX) TLT2(%lX) TLT3(%lX) TLT4(%lX) "
               "TLT5(%lX)",
               ReadSTLT(mid, 1), ReadSTLT(mid, 2), ReadSTLT(mid, 3),
               ReadSTLT(mid, 4), ReadSTLT(mid, 4))
       << endl;
  cout << Form("                    TLT6(%lX) TLT7(%lX) TLT8(%lX) TLT9(%lX) "
               "TLT10(%lX)",
               ReadSTLT(mid, 5), ReadSTLT(mid, 6), ReadSTLT(mid, 7),
               ReadSTLT(mid, 8), ReadSTLT(mid, 4))
       << endl;
  cout << Form("                    HV1(%.1f) HV2(%.1f) HV3(%.1f) HV4(%.1f) "
               "HV5(%.1f)",
               ReadHV(mid, 1), ReadHV(mid, 2), ReadHV(mid, 3), ReadHV(mid, 4),
               ReadHV(mid, 5))
       << endl;
  cout << " -----------------------------------------------" << endl;
  for (int j = 0; j < 4; j++) {
    if (j > 0) cout << endl;
    cout << "        CID : ";
    for (int i = 10 * j; i < 10 * (j + 1); i++) {
      cout << Form("%8d", conf->CID(i));
    }
    cout << endl;
    cout << "        THR : ";
    for (int i = 10 * j; i < 10 * (j + 1); i++) {
      cout << Form("%8lu", ReadTHR(mid, conf->CID(i)));
    }
    cout << endl;
    cout << "        DLY : ";
    for (int i = 10 * j; i < 10 * (j + 1); i++) {
      cout << Form("%8lu", ReadDLY(mid, conf->CID(i)));
    }
    cout << endl;
  }
  cout << " -----------------------------------------------" << endl;
  cout << endl;
}

void AbsTCB::MeasurePedestalFADC(FADCTConf * conf)
{
  int mid = conf->MID();
  int nch = conf->NCH();

  cout << Form("  [mid=%d]  ", mid) << flush;
  for (int i = 0; i < nch; i++) {
    ULong_t cid = conf->CID(i);
    MeasurePED(mid, cid);
    cout << Form("%4lu  ", ReadPED(mid, cid)) << flush;
  }
  cout << endl;
}

void AbsTCB::MeasurePedestalGADC(GADCTConf * conf)
{
  int mid = conf->MID();
  int nch = conf->NCH();

  cout << Form("  [mid=%d]  ", mid) << flush;
  for (int i = 0; i < nch; i++) {
    ULong_t cid = conf->CID(i);
    MeasurePED(mid, cid);
    cout << Form("%5lu  ", ReadPED(mid, cid)) << flush;
  }
  //cout << endl;
}

void AbsTCB::MeasurePedestalSADC(SADCTConf * conf)
{
  int mid = conf->MID();
  int nch = conf->NCH();

  cout << Form("  [mid=%d]  ", mid) << endl;
  MeasurePED(mid, 1);
  for (int i = 0; i < nch; i++) {
    int cid = conf->CID(i);
    cout << Form("ch%02d = %4lu  ", cid, ReadPED(mid, cid)) << flush;
    if (cid % 8 == 0) { cout << endl; }
  }
  if (nch % 8 != 0) { cout << endl; }
  cout << endl;
}

void AbsTCB::MeasurePedestalIADC(IADCTConf * conf)
{
  int mid = conf->MID();
  int nch = conf->NCH();

  cout << Form("  [mid=%d]  ", mid) << endl;
  MeasurePED(mid, 1);
  for (int i = 0; i < nch; i++) {
    int cid = conf->CID(i);
    cout << Form("ch%02d = %4lu  ", cid, ReadPED(mid, cid)) << flush;
    if (cid % 10 == 0) { cout << endl; }
  }
  if (nch % 10 != 0) { cout << endl; }
  cout << endl;
}

void AbsTCB::RegisterValueFADC(FADCTConf * conf, int mode)
{ // WJ
  int mid = conf->MID();
  int nch = conf->NCH();

  if ( mode == 0 ) { // PID
    for (int i = 0; i < nch; i++)
      cout << Form("%8lu", conf->PID(i)) << " ";
  }

  if ( mode == 1 ) { // DLY
    for ( int i = 0; i < nch; i++)
      cout << Form("%8lu", ReadDLY(mid, conf->CID(i))) << " ";
  }

  if ( mode == 2 ) { // THR
    for ( int i = 0; i < nch; i++)
      cout << Form("%8lu", ReadTHR(mid, conf->CID(i))) << " ";
  }
}



void AbsTCB::RegisterValueSADC(SADCTConf * conf, int mode)
{ // WJ
  int mid = conf->MID();
  int nch = conf->NCH();

  if ( mode == 0 ) { // PID
    for (int i = 0; i < nch; i++)
      cout << Form("%8lu", conf->PID(i)) << " ";
  }

  if ( mode == 1 ) { // DLY
    for ( int i = 0; i < nch; i++)
      cout << Form("%8lu", ReadDLY(mid, conf->CID(i))) << " ";
  }

  if ( mode == 2 ) { // THR
    for ( int i = 0; i < nch; i++)
      cout << Form("%8lu", ReadTHR(mid, conf->CID(i))) << " ";
  }
}
