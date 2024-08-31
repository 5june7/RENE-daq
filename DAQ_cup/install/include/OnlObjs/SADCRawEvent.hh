#ifndef SADCRawEvent_hh
#define SADCRawEvent_hh

#include "OnlObjs/AbsADCRaw.hh"

class SADCRawEvent : public AbsADCRaw {
private:
  int fNCH;
  unsigned int * fADC;  //[fNCH]
  unsigned long * fTime; //[fNCH] // WJ: int -> long

public:
  SADCRawEvent();
  SADCRawEvent(int s, ADC::TYPE type);
  SADCRawEvent(const SADCRawEvent & raw);
  virtual ~SADCRawEvent();

  virtual void Unpack(AbsConf * config, int verbose = 0);

  int GetNCH() const;
  unsigned int GetADC(int n) const;
  unsigned int * GetADCs() const;
  unsigned long GetTime(int n) const; // WJ: int -> long
  unsigned long * GetTimes() const; // WJ: int -> long

private:
  void Unpack_SADC(AbsConf * config, int verbose = 0);
  void Unpack_IADC(AbsConf * config, int verbose = 0);
  void UnpackHeader_SADC(ADCHeader * header);
  void UnpackHeader_IADC(ADCHeader * header);

  ClassDef(SADCRawEvent, 1)
};

inline int SADCRawEvent::GetNCH() const { return fNCH; }

inline unsigned int SADCRawEvent::GetADC(int n) const { return fADC[n]; }

inline unsigned int * SADCRawEvent::GetADCs() const { return fADC; }

inline unsigned long SADCRawEvent::GetTime(int n) const { return fTime[n]; } // WJ: int -> long

inline unsigned long * SADCRawEvent::GetTimes() const { return fTime; } // WJ: int -> long

#endif
