// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__OnlObjs
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "ROOT/RConfig.hxx"
#include "TClass.h"
#include "TDictAttributeMap.h"
#include "TInterpreter.h"
#include "TROOT.h"
#include "TBuffer.h"
#include "TMemberInspector.h"
#include "TInterpreter.h"
#include "TVirtualMutex.h"
#include "TError.h"

#ifndef G__ROOT
#define G__ROOT
#endif

#include "RtypesImp.h"
#include "TIsAProxy.h"
#include "TFileMergeInfo.h"
#include <algorithm>
#include "TCollectionProxyInfo.h"
/*******************************************************************/

#include "TDataMember.h"

// Header files passed as explicit arguments
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/ADCHeader.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/AbsADCRaw.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/BuiltEvent.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawEvent.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/SADCRawEvent.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/TimeCalConsts.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_TimeCalConsts(void *p = nullptr);
   static void *newArray_TimeCalConsts(Long_t size, void *p);
   static void delete_TimeCalConsts(void *p);
   static void deleteArray_TimeCalConsts(void *p);
   static void destruct_TimeCalConsts(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TimeCalConsts*)
   {
      ::TimeCalConsts *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TimeCalConsts >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TimeCalConsts", ::TimeCalConsts::Class_Version(), "OnlObjs/TimeCalConsts.hh", 8,
                  typeid(::TimeCalConsts), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TimeCalConsts::Dictionary, isa_proxy, 4,
                  sizeof(::TimeCalConsts) );
      instance.SetNew(&new_TimeCalConsts);
      instance.SetNewArray(&newArray_TimeCalConsts);
      instance.SetDelete(&delete_TimeCalConsts);
      instance.SetDeleteArray(&deleteArray_TimeCalConsts);
      instance.SetDestructor(&destruct_TimeCalConsts);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TimeCalConsts*)
   {
      return GenerateInitInstanceLocal(static_cast<::TimeCalConsts*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TimeCalConsts*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ADCHeader(void *p = nullptr);
   static void *newArray_ADCHeader(Long_t size, void *p);
   static void delete_ADCHeader(void *p);
   static void deleteArray_ADCHeader(void *p);
   static void destruct_ADCHeader(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ADCHeader*)
   {
      ::ADCHeader *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ADCHeader >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ADCHeader", ::ADCHeader::Class_Version(), "OnlObjs/ADCHeader.hh", 7,
                  typeid(::ADCHeader), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ADCHeader::Dictionary, isa_proxy, 4,
                  sizeof(::ADCHeader) );
      instance.SetNew(&new_ADCHeader);
      instance.SetNewArray(&newArray_ADCHeader);
      instance.SetDelete(&delete_ADCHeader);
      instance.SetDeleteArray(&deleteArray_ADCHeader);
      instance.SetDestructor(&destruct_ADCHeader);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ADCHeader*)
   {
      return GenerateInitInstanceLocal(static_cast<::ADCHeader*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ADCHeader*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_AbsADCRaw(void *p);
   static void deleteArray_AbsADCRaw(void *p);
   static void destruct_AbsADCRaw(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AbsADCRaw*)
   {
      ::AbsADCRaw *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AbsADCRaw >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AbsADCRaw", ::AbsADCRaw::Class_Version(), "OnlObjs/AbsADCRaw.hh", 11,
                  typeid(::AbsADCRaw), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AbsADCRaw::Dictionary, isa_proxy, 4,
                  sizeof(::AbsADCRaw) );
      instance.SetDelete(&delete_AbsADCRaw);
      instance.SetDeleteArray(&deleteArray_AbsADCRaw);
      instance.SetDestructor(&destruct_AbsADCRaw);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AbsADCRaw*)
   {
      return GenerateInitInstanceLocal(static_cast<::AbsADCRaw*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AbsADCRaw*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_BuiltEvent(void *p = nullptr);
   static void *newArray_BuiltEvent(Long_t size, void *p);
   static void delete_BuiltEvent(void *p);
   static void deleteArray_BuiltEvent(void *p);
   static void destruct_BuiltEvent(void *p);
   static Long64_t merge_BuiltEvent(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::BuiltEvent*)
   {
      ::BuiltEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::BuiltEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("BuiltEvent", ::BuiltEvent::Class_Version(), "OnlObjs/BuiltEvent.hh", 7,
                  typeid(::BuiltEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::BuiltEvent::Dictionary, isa_proxy, 4,
                  sizeof(::BuiltEvent) );
      instance.SetNew(&new_BuiltEvent);
      instance.SetNewArray(&newArray_BuiltEvent);
      instance.SetDelete(&delete_BuiltEvent);
      instance.SetDeleteArray(&deleteArray_BuiltEvent);
      instance.SetDestructor(&destruct_BuiltEvent);
      instance.SetMerge(&merge_BuiltEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::BuiltEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::BuiltEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::BuiltEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FADCRawChannel(void *p = nullptr);
   static void *newArray_FADCRawChannel(Long_t size, void *p);
   static void delete_FADCRawChannel(void *p);
   static void deleteArray_FADCRawChannel(void *p);
   static void destruct_FADCRawChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FADCRawChannel*)
   {
      ::FADCRawChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FADCRawChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FADCRawChannel", ::FADCRawChannel::Class_Version(), "OnlObjs/FADCRawChannel.hh", 6,
                  typeid(::FADCRawChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FADCRawChannel::Dictionary, isa_proxy, 4,
                  sizeof(::FADCRawChannel) );
      instance.SetNew(&new_FADCRawChannel);
      instance.SetNewArray(&newArray_FADCRawChannel);
      instance.SetDelete(&delete_FADCRawChannel);
      instance.SetDeleteArray(&deleteArray_FADCRawChannel);
      instance.SetDestructor(&destruct_FADCRawChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FADCRawChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::FADCRawChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FADCRawChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FADCRawEvent(void *p = nullptr);
   static void *newArray_FADCRawEvent(Long_t size, void *p);
   static void delete_FADCRawEvent(void *p);
   static void deleteArray_FADCRawEvent(void *p);
   static void destruct_FADCRawEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FADCRawEvent*)
   {
      ::FADCRawEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FADCRawEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FADCRawEvent", ::FADCRawEvent::Class_Version(), "OnlObjs/FADCRawEvent.hh", 7,
                  typeid(::FADCRawEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FADCRawEvent::Dictionary, isa_proxy, 4,
                  sizeof(::FADCRawEvent) );
      instance.SetNew(&new_FADCRawEvent);
      instance.SetNewArray(&newArray_FADCRawEvent);
      instance.SetDelete(&delete_FADCRawEvent);
      instance.SetDeleteArray(&deleteArray_FADCRawEvent);
      instance.SetDestructor(&destruct_FADCRawEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FADCRawEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::FADCRawEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FADCRawEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SADCRawEvent(void *p = nullptr);
   static void *newArray_SADCRawEvent(Long_t size, void *p);
   static void delete_SADCRawEvent(void *p);
   static void deleteArray_SADCRawEvent(void *p);
   static void destruct_SADCRawEvent(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SADCRawEvent*)
   {
      ::SADCRawEvent *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SADCRawEvent >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SADCRawEvent", ::SADCRawEvent::Class_Version(), "OnlObjs/SADCRawEvent.hh", 6,
                  typeid(::SADCRawEvent), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SADCRawEvent::Dictionary, isa_proxy, 4,
                  sizeof(::SADCRawEvent) );
      instance.SetNew(&new_SADCRawEvent);
      instance.SetNewArray(&newArray_SADCRawEvent);
      instance.SetDelete(&delete_SADCRawEvent);
      instance.SetDeleteArray(&deleteArray_SADCRawEvent);
      instance.SetDestructor(&destruct_SADCRawEvent);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SADCRawEvent*)
   {
      return GenerateInitInstanceLocal(static_cast<::SADCRawEvent*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SADCRawEvent*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr TimeCalConsts::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TimeCalConsts::Class_Name()
{
   return "TimeCalConsts";
}

//______________________________________________________________________________
const char *TimeCalConsts::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TimeCalConsts*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TimeCalConsts::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TimeCalConsts*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TimeCalConsts::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TimeCalConsts*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TimeCalConsts::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TimeCalConsts*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ADCHeader::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ADCHeader::Class_Name()
{
   return "ADCHeader";
}

//______________________________________________________________________________
const char *ADCHeader::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ADCHeader*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ADCHeader::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ADCHeader*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ADCHeader::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ADCHeader*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ADCHeader::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ADCHeader*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AbsADCRaw::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsADCRaw::Class_Name()
{
   return "AbsADCRaw";
}

//______________________________________________________________________________
const char *AbsADCRaw::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsADCRaw*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AbsADCRaw::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsADCRaw*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsADCRaw::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsADCRaw*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsADCRaw::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsADCRaw*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr BuiltEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *BuiltEvent::Class_Name()
{
   return "BuiltEvent";
}

//______________________________________________________________________________
const char *BuiltEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BuiltEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int BuiltEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::BuiltEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *BuiltEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BuiltEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *BuiltEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::BuiltEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FADCRawChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FADCRawChannel::Class_Name()
{
   return "FADCRawChannel";
}

//______________________________________________________________________________
const char *FADCRawChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCRawChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FADCRawChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCRawChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FADCRawChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCRawChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FADCRawChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCRawChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FADCRawEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FADCRawEvent::Class_Name()
{
   return "FADCRawEvent";
}

//______________________________________________________________________________
const char *FADCRawEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCRawEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FADCRawEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCRawEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FADCRawEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCRawEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FADCRawEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCRawEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SADCRawEvent::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SADCRawEvent::Class_Name()
{
   return "SADCRawEvent";
}

//______________________________________________________________________________
const char *SADCRawEvent::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SADCRawEvent*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SADCRawEvent::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SADCRawEvent*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SADCRawEvent::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SADCRawEvent*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SADCRawEvent::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SADCRawEvent*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void TimeCalConsts::Streamer(TBuffer &R__b)
{
   // Stream an object of class TimeCalConsts.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TimeCalConsts::Class(),this);
   } else {
      R__b.WriteClassBuffer(TimeCalConsts::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TimeCalConsts(void *p) {
      return  p ? new(p) ::TimeCalConsts : new ::TimeCalConsts;
   }
   static void *newArray_TimeCalConsts(Long_t nElements, void *p) {
      return p ? new(p) ::TimeCalConsts[nElements] : new ::TimeCalConsts[nElements];
   }
   // Wrapper around operator delete
   static void delete_TimeCalConsts(void *p) {
      delete (static_cast<::TimeCalConsts*>(p));
   }
   static void deleteArray_TimeCalConsts(void *p) {
      delete [] (static_cast<::TimeCalConsts*>(p));
   }
   static void destruct_TimeCalConsts(void *p) {
      typedef ::TimeCalConsts current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TimeCalConsts

//______________________________________________________________________________
void ADCHeader::Streamer(TBuffer &R__b)
{
   // Stream an object of class ADCHeader.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ADCHeader::Class(),this);
   } else {
      R__b.WriteClassBuffer(ADCHeader::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ADCHeader(void *p) {
      return  p ? new(p) ::ADCHeader : new ::ADCHeader;
   }
   static void *newArray_ADCHeader(Long_t nElements, void *p) {
      return p ? new(p) ::ADCHeader[nElements] : new ::ADCHeader[nElements];
   }
   // Wrapper around operator delete
   static void delete_ADCHeader(void *p) {
      delete (static_cast<::ADCHeader*>(p));
   }
   static void deleteArray_ADCHeader(void *p) {
      delete [] (static_cast<::ADCHeader*>(p));
   }
   static void destruct_ADCHeader(void *p) {
      typedef ::ADCHeader current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ADCHeader

//______________________________________________________________________________
void AbsADCRaw::Streamer(TBuffer &R__b)
{
   // Stream an object of class AbsADCRaw.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AbsADCRaw::Class(),this);
   } else {
      R__b.WriteClassBuffer(AbsADCRaw::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_AbsADCRaw(void *p) {
      delete (static_cast<::AbsADCRaw*>(p));
   }
   static void deleteArray_AbsADCRaw(void *p) {
      delete [] (static_cast<::AbsADCRaw*>(p));
   }
   static void destruct_AbsADCRaw(void *p) {
      typedef ::AbsADCRaw current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AbsADCRaw

//______________________________________________________________________________
void BuiltEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class BuiltEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(BuiltEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(BuiltEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_BuiltEvent(void *p) {
      return  p ? new(p) ::BuiltEvent : new ::BuiltEvent;
   }
   static void *newArray_BuiltEvent(Long_t nElements, void *p) {
      return p ? new(p) ::BuiltEvent[nElements] : new ::BuiltEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_BuiltEvent(void *p) {
      delete (static_cast<::BuiltEvent*>(p));
   }
   static void deleteArray_BuiltEvent(void *p) {
      delete [] (static_cast<::BuiltEvent*>(p));
   }
   static void destruct_BuiltEvent(void *p) {
      typedef ::BuiltEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_BuiltEvent(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::BuiltEvent*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::BuiltEvent

//______________________________________________________________________________
void FADCRawChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class FADCRawChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FADCRawChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(FADCRawChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FADCRawChannel(void *p) {
      return  p ? new(p) ::FADCRawChannel : new ::FADCRawChannel;
   }
   static void *newArray_FADCRawChannel(Long_t nElements, void *p) {
      return p ? new(p) ::FADCRawChannel[nElements] : new ::FADCRawChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_FADCRawChannel(void *p) {
      delete (static_cast<::FADCRawChannel*>(p));
   }
   static void deleteArray_FADCRawChannel(void *p) {
      delete [] (static_cast<::FADCRawChannel*>(p));
   }
   static void destruct_FADCRawChannel(void *p) {
      typedef ::FADCRawChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FADCRawChannel

//______________________________________________________________________________
void FADCRawEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class FADCRawEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FADCRawEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(FADCRawEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FADCRawEvent(void *p) {
      return  p ? new(p) ::FADCRawEvent : new ::FADCRawEvent;
   }
   static void *newArray_FADCRawEvent(Long_t nElements, void *p) {
      return p ? new(p) ::FADCRawEvent[nElements] : new ::FADCRawEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_FADCRawEvent(void *p) {
      delete (static_cast<::FADCRawEvent*>(p));
   }
   static void deleteArray_FADCRawEvent(void *p) {
      delete [] (static_cast<::FADCRawEvent*>(p));
   }
   static void destruct_FADCRawEvent(void *p) {
      typedef ::FADCRawEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FADCRawEvent

//______________________________________________________________________________
void SADCRawEvent::Streamer(TBuffer &R__b)
{
   // Stream an object of class SADCRawEvent.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SADCRawEvent::Class(),this);
   } else {
      R__b.WriteClassBuffer(SADCRawEvent::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SADCRawEvent(void *p) {
      return  p ? new(p) ::SADCRawEvent : new ::SADCRawEvent;
   }
   static void *newArray_SADCRawEvent(Long_t nElements, void *p) {
      return p ? new(p) ::SADCRawEvent[nElements] : new ::SADCRawEvent[nElements];
   }
   // Wrapper around operator delete
   static void delete_SADCRawEvent(void *p) {
      delete (static_cast<::SADCRawEvent*>(p));
   }
   static void deleteArray_SADCRawEvent(void *p) {
      delete [] (static_cast<::SADCRawEvent*>(p));
   }
   static void destruct_SADCRawEvent(void *p) {
      typedef ::SADCRawEvent current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SADCRawEvent

namespace ROOT {
   static TClass *maplEintcOintgR_Dictionary();
   static void maplEintcOintgR_TClassManip(TClass*);
   static void *new_maplEintcOintgR(void *p = nullptr);
   static void *newArray_maplEintcOintgR(Long_t size, void *p);
   static void delete_maplEintcOintgR(void *p);
   static void deleteArray_maplEintcOintgR(void *p);
   static void destruct_maplEintcOintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,int>*)
   {
      map<int,int> *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,int>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,int>", -2, "map", 100,
                  typeid(map<int,int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOintgR_Dictionary, isa_proxy, 0,
                  sizeof(map<int,int>) );
      instance.SetNew(&new_maplEintcOintgR);
      instance.SetNewArray(&newArray_maplEintcOintgR);
      instance.SetDelete(&delete_maplEintcOintgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOintgR);
      instance.SetDestructor(&destruct_maplEintcOintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,int> >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("map<int,int>","std::map<int, int, std::less<int>, std::allocator<std::pair<int const, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const map<int,int>*>(nullptr))->GetClass();
      maplEintcOintgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOintgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int> : new map<int,int>;
   }
   static void *newArray_maplEintcOintgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) map<int,int>[nElements] : new map<int,int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOintgR(void *p) {
      delete (static_cast<map<int,int>*>(p));
   }
   static void deleteArray_maplEintcOintgR(void *p) {
      delete [] (static_cast<map<int,int>*>(p));
   }
   static void destruct_maplEintcOintgR(void *p) {
      typedef map<int,int> current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class map<int,int>

namespace {
  void TriggerDictionaryInitialization_libOnlObjs_Impl() {
    static const char* headers[] = {
"/home/frontend/DAQ/DAQ_cup/include/OnlObjs/ADCHeader.hh",
"/home/frontend/DAQ/DAQ_cup/include/OnlObjs/AbsADCRaw.hh",
"/home/frontend/DAQ/DAQ_cup/include/OnlObjs/BuiltEvent.hh",
"/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawChannel.hh",
"/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawEvent.hh",
"/home/frontend/DAQ/DAQ_cup/include/OnlObjs/SADCRawEvent.hh",
"/home/frontend/DAQ/DAQ_cup/include/OnlObjs/TimeCalConsts.hh",
nullptr
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/libusb-1.0",
"/home/frontend/DAQ/DAQ_cup/include",
"/home/frontend/DAQ/DAQ_cup/CUPDAQ/OnlObjs",
"/usr/include/root",
"/home/frontend/DAQ/DAQ_cup/OnlObjs/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libOnlObjs dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$OnlObjs/TimeCalConsts.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/OnlObjs/ADCHeader.hh")))  TimeCalConsts;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/OnlObjs/ADCHeader.hh")))  ADCHeader;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/OnlObjs/AbsADCRaw.hh")))  AbsADCRaw;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/OnlObjs/BuiltEvent.hh")))  BuiltEvent;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawChannel.hh")))  FADCRawChannel;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawEvent.hh")))  FADCRawEvent;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/OnlObjs/SADCRawEvent.hh")))  SADCRawEvent;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libOnlObjs dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/ADCHeader.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/AbsADCRaw.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/BuiltEvent.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/FADCRawEvent.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/SADCRawEvent.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/OnlObjs/TimeCalConsts.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ADCHeader", payloadCode, "@",
"AbsADCRaw", payloadCode, "@",
"BuiltEvent", payloadCode, "@",
"FADCRawChannel", payloadCode, "@",
"FADCRawEvent", payloadCode, "@",
"SADCRawEvent", payloadCode, "@",
"TimeCalConsts", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libOnlObjs",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libOnlObjs_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libOnlObjs_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libOnlObjs() {
  TriggerDictionaryInitialization_libOnlObjs_Impl();
}
