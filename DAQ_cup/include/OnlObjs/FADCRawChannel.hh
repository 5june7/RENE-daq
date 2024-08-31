#ifndef FADCRawChannel_hh
#define FADCRawChannel_hh

#include "TObject.h"

class FADCRawChannel : public TObject {
private:
  int fNDP;
  unsigned short * fADC; //[fNDP]

  unsigned long fLocTrgTime; // WJ
  unsigned long fTCBTrgTime; // WJ

public:
  FADCRawChannel();
  FADCRawChannel(int ndp);
  FADCRawChannel(const FADCRawChannel & ch);
  virtual ~FADCRawChannel();

  void SetADC(int i, unsigned short adc);

  int GetNDP() const;
  unsigned short * GetADC() const;

  virtual void Print(Option_t * opt = "") const;


  void SetLocTrgTime(unsigned long t); // WJ
  void SetTCBTrgTime(unsigned long t); // WJ

  unsigned long GetLocTrgTime(); // WJ
  unsigned long GetTCBTrgTime(); // WJ

  ClassDef(FADCRawChannel, 1)
};

inline void FADCRawChannel::SetADC(int i, unsigned short adc) { fADC[i] = adc; }

inline int FADCRawChannel::GetNDP() const { return fNDP; }

inline unsigned short * FADCRawChannel::GetADC() const { return fADC; }

inline void FADCRawChannel::SetLocTrgTime(unsigned long t){ fLocTrgTime = t; } // WJ
inline void FADCRawChannel::SetTCBTrgTime(unsigned long t){ fTCBTrgTime = t; } // WJ

// To get the value
inline unsigned long FADCRawChannel::GetLocTrgTime(){ return fLocTrgTime; } // WJ
inline unsigned long FADCRawChannel::GetTCBTrgTime(){ return fTCBTrgTime; } // WJ

#endif
