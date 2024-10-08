#include "RawObjs/EventInfo.hh"

ClassImp(EventInfo) 

EventInfo::EventInfo()
    : TObject()
{
  fTrgType = 0;
  fTrgNum = 0;
  fTrgTime = 0;
  fTCBTrgTime = 0;
  fNHit = 0;
}

EventInfo::EventInfo(const EventInfo & info)
    : TObject(info)
{
  fTrgType = info.GetTriggerType();
  fTrgNum = info.GetTriggerNumber();
  fTrgTime = info.GetTriggerTime();
  fTCBTrgTime = info.GetTCBTriggerTime();
  fNHit = info.GetNHit();
}

EventInfo::~EventInfo() {}
