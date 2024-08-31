// TCBTriggerTime by WJ

#ifndef EventInfo_hh
#define EventInfo_hh

#include "TObject.h"

class EventInfo : public TObject {
public:
  EventInfo();
  EventInfo(const EventInfo & info);
  virtual ~EventInfo();

  void SetTriggerType(unsigned short type);
  void SetNHit(unsigned short n);
  void SetTriggerNumber(unsigned int n);
  void SetTriggerTime(unsigned long t);
  void SetTCBTriggerTime(unsigned long t);

  unsigned short GetTriggerType() const;
  unsigned short GetNHit() const;
  unsigned int GetTriggerNumber() const;
  unsigned long GetTriggerTime() const;
  unsigned long GetTCBTriggerTime() const;

private:
  unsigned short fTrgType;
  unsigned short fNHit;
  unsigned int fTrgNum;
  unsigned long fTrgTime;
  unsigned long fTCBTrgTime;

  ClassDef(EventInfo, 1)
};

inline void EventInfo::SetTriggerType(unsigned short type) { fTrgType = type; }
inline void EventInfo::SetNHit(unsigned short n) { fNHit = n; }
inline void EventInfo::SetTriggerNumber(unsigned int n) { fTrgNum = n; }
inline void EventInfo::SetTriggerTime(unsigned long t) { fTrgTime = t; }
inline void EventInfo::SetTCBTriggerTime(unsigned long t) { fTCBTrgTime = t; }
inline unsigned short EventInfo::GetTriggerType() const { return fTrgType; }
inline unsigned short EventInfo::GetNHit() const { return fNHit; }
inline unsigned int EventInfo::GetTriggerNumber() const { return fTrgNum; }
inline unsigned long EventInfo::GetTriggerTime() const { return fTrgTime; }
inline unsigned long EventInfo::GetTCBTriggerTime() const { return fTCBTrgTime; }

#endif
