// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__RawObjs
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
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannelData.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AbsChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/ArrayS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/EventInfo.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannelData.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_AbsChannel(void *p = nullptr);
   static void *newArray_AbsChannel(Long_t size, void *p);
   static void delete_AbsChannel(void *p);
   static void deleteArray_AbsChannel(void *p);
   static void destruct_AbsChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AbsChannel*)
   {
      ::AbsChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AbsChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AbsChannel", ::AbsChannel::Class_Version(), "RawObjs/AbsChannel.hh", 21,
                  typeid(::AbsChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AbsChannel::Dictionary, isa_proxy, 4,
                  sizeof(::AbsChannel) );
      instance.SetNew(&new_AbsChannel);
      instance.SetNewArray(&newArray_AbsChannel);
      instance.SetDelete(&delete_AbsChannel);
      instance.SetDeleteArray(&deleteArray_AbsChannel);
      instance.SetDestructor(&destruct_AbsChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AbsChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::AbsChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AbsChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AChannel(void *p = nullptr);
   static void *newArray_AChannel(Long_t size, void *p);
   static void delete_AChannel(void *p);
   static void deleteArray_AChannel(void *p);
   static void destruct_AChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AChannel*)
   {
      ::AChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AChannel", ::AChannel::Class_Version(), "RawObjs/AChannel.hh", 21,
                  typeid(::AChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AChannel::Dictionary, isa_proxy, 4,
                  sizeof(::AChannel) );
      instance.SetNew(&new_AChannel);
      instance.SetNewArray(&newArray_AChannel);
      instance.SetDelete(&delete_AChannel);
      instance.SetDeleteArray(&deleteArray_AChannel);
      instance.SetDestructor(&destruct_AChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::AChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AChannelData(void *p = nullptr);
   static void *newArray_AChannelData(Long_t size, void *p);
   static void delete_AChannelData(void *p);
   static void deleteArray_AChannelData(void *p);
   static void destruct_AChannelData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AChannelData*)
   {
      ::AChannelData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AChannelData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AChannelData", ::AChannelData::Class_Version(), "RawObjs/AChannelData.hh", 25,
                  typeid(::AChannelData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AChannelData::Dictionary, isa_proxy, 4,
                  sizeof(::AChannelData) );
      instance.SetNew(&new_AChannelData);
      instance.SetNewArray(&newArray_AChannelData);
      instance.SetDelete(&delete_AChannelData);
      instance.SetDeleteArray(&deleteArray_AChannelData);
      instance.SetDestructor(&destruct_AChannelData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AChannelData*)
   {
      return GenerateInitInstanceLocal(static_cast<::AChannelData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AChannelData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_ArrayS(void *p = nullptr);
   static void *newArray_ArrayS(Long_t size, void *p);
   static void delete_ArrayS(void *p);
   static void deleteArray_ArrayS(void *p);
   static void destruct_ArrayS(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ArrayS*)
   {
      ::ArrayS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ArrayS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ArrayS", ::ArrayS::Class_Version(), "RawObjs/ArrayS.hh", 25,
                  typeid(::ArrayS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ArrayS::Dictionary, isa_proxy, 4,
                  sizeof(::ArrayS) );
      instance.SetNew(&new_ArrayS);
      instance.SetNewArray(&newArray_ArrayS);
      instance.SetDelete(&delete_ArrayS);
      instance.SetDeleteArray(&deleteArray_ArrayS);
      instance.SetDestructor(&destruct_ArrayS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ArrayS*)
   {
      return GenerateInitInstanceLocal(static_cast<::ArrayS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ArrayS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_EventInfo(void *p = nullptr);
   static void *newArray_EventInfo(Long_t size, void *p);
   static void delete_EventInfo(void *p);
   static void deleteArray_EventInfo(void *p);
   static void destruct_EventInfo(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::EventInfo*)
   {
      ::EventInfo *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::EventInfo >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("EventInfo", ::EventInfo::Class_Version(), "RawObjs/EventInfo.hh", 8,
                  typeid(::EventInfo), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::EventInfo::Dictionary, isa_proxy, 4,
                  sizeof(::EventInfo) );
      instance.SetNew(&new_EventInfo);
      instance.SetNewArray(&newArray_EventInfo);
      instance.SetDelete(&delete_EventInfo);
      instance.SetDeleteArray(&deleteArray_EventInfo);
      instance.SetDestructor(&destruct_EventInfo);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::EventInfo*)
   {
      return GenerateInitInstanceLocal(static_cast<::EventInfo*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::EventInfo*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FChannel(void *p = nullptr);
   static void *newArray_FChannel(Long_t size, void *p);
   static void delete_FChannel(void *p);
   static void deleteArray_FChannel(void *p);
   static void destruct_FChannel(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FChannel*)
   {
      ::FChannel *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FChannel >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FChannel", ::FChannel::Class_Version(), "RawObjs/FChannel.hh", 26,
                  typeid(::FChannel), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FChannel::Dictionary, isa_proxy, 4,
                  sizeof(::FChannel) );
      instance.SetNew(&new_FChannel);
      instance.SetNewArray(&newArray_FChannel);
      instance.SetDelete(&delete_FChannel);
      instance.SetDeleteArray(&deleteArray_FChannel);
      instance.SetDestructor(&destruct_FChannel);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FChannel*)
   {
      return GenerateInitInstanceLocal(static_cast<::FChannel*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FChannel*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FChannelData(void *p = nullptr);
   static void *newArray_FChannelData(Long_t size, void *p);
   static void delete_FChannelData(void *p);
   static void deleteArray_FChannelData(void *p);
   static void destruct_FChannelData(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FChannelData*)
   {
      ::FChannelData *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FChannelData >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FChannelData", ::FChannelData::Class_Version(), "RawObjs/FChannelData.hh", 25,
                  typeid(::FChannelData), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FChannelData::Dictionary, isa_proxy, 4,
                  sizeof(::FChannelData) );
      instance.SetNew(&new_FChannelData);
      instance.SetNewArray(&newArray_FChannelData);
      instance.SetDelete(&delete_FChannelData);
      instance.SetDeleteArray(&deleteArray_FChannelData);
      instance.SetDestructor(&destruct_FChannelData);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FChannelData*)
   {
      return GenerateInitInstanceLocal(static_cast<::FChannelData*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FChannelData*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AbsChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsChannel::Class_Name()
{
   return "AbsChannel";
}

//______________________________________________________________________________
const char *AbsChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AbsChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AChannel::Class_Name()
{
   return "AChannel";
}

//______________________________________________________________________________
const char *AChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AChannelData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AChannelData::Class_Name()
{
   return "AChannelData";
}

//______________________________________________________________________________
const char *AChannelData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AChannelData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AChannelData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AChannelData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AChannelData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AChannelData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AChannelData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AChannelData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ArrayS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ArrayS::Class_Name()
{
   return "ArrayS";
}

//______________________________________________________________________________
const char *ArrayS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ArrayS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ArrayS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ArrayS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ArrayS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ArrayS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ArrayS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ArrayS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr EventInfo::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *EventInfo::Class_Name()
{
   return "EventInfo";
}

//______________________________________________________________________________
const char *EventInfo::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int EventInfo::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *EventInfo::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *EventInfo::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::EventInfo*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FChannel::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FChannel::Class_Name()
{
   return "FChannel";
}

//______________________________________________________________________________
const char *FChannel::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FChannel*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FChannel::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FChannel*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FChannel::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FChannel*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FChannel::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FChannel*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FChannelData::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FChannelData::Class_Name()
{
   return "FChannelData";
}

//______________________________________________________________________________
const char *FChannelData::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FChannelData*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FChannelData::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FChannelData*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FChannelData::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FChannelData*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FChannelData::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FChannelData*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void AbsChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class AbsChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AbsChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(AbsChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AbsChannel(void *p) {
      return  p ? new(p) ::AbsChannel : new ::AbsChannel;
   }
   static void *newArray_AbsChannel(Long_t nElements, void *p) {
      return p ? new(p) ::AbsChannel[nElements] : new ::AbsChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_AbsChannel(void *p) {
      delete (static_cast<::AbsChannel*>(p));
   }
   static void deleteArray_AbsChannel(void *p) {
      delete [] (static_cast<::AbsChannel*>(p));
   }
   static void destruct_AbsChannel(void *p) {
      typedef ::AbsChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AbsChannel

//______________________________________________________________________________
void AChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class AChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(AChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AChannel(void *p) {
      return  p ? new(p) ::AChannel : new ::AChannel;
   }
   static void *newArray_AChannel(Long_t nElements, void *p) {
      return p ? new(p) ::AChannel[nElements] : new ::AChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_AChannel(void *p) {
      delete (static_cast<::AChannel*>(p));
   }
   static void deleteArray_AChannel(void *p) {
      delete [] (static_cast<::AChannel*>(p));
   }
   static void destruct_AChannel(void *p) {
      typedef ::AChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AChannel

//______________________________________________________________________________
void AChannelData::Streamer(TBuffer &R__b)
{
   // Stream an object of class AChannelData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AChannelData::Class(),this);
   } else {
      R__b.WriteClassBuffer(AChannelData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AChannelData(void *p) {
      return  p ? new(p) ::AChannelData : new ::AChannelData;
   }
   static void *newArray_AChannelData(Long_t nElements, void *p) {
      return p ? new(p) ::AChannelData[nElements] : new ::AChannelData[nElements];
   }
   // Wrapper around operator delete
   static void delete_AChannelData(void *p) {
      delete (static_cast<::AChannelData*>(p));
   }
   static void deleteArray_AChannelData(void *p) {
      delete [] (static_cast<::AChannelData*>(p));
   }
   static void destruct_AChannelData(void *p) {
      typedef ::AChannelData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AChannelData

//______________________________________________________________________________
void ArrayS::Streamer(TBuffer &R__b)
{
   // Stream an object of class ArrayS.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(ArrayS::Class(),this);
   } else {
      R__b.WriteClassBuffer(ArrayS::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ArrayS(void *p) {
      return  p ? new(p) ::ArrayS : new ::ArrayS;
   }
   static void *newArray_ArrayS(Long_t nElements, void *p) {
      return p ? new(p) ::ArrayS[nElements] : new ::ArrayS[nElements];
   }
   // Wrapper around operator delete
   static void delete_ArrayS(void *p) {
      delete (static_cast<::ArrayS*>(p));
   }
   static void deleteArray_ArrayS(void *p) {
      delete [] (static_cast<::ArrayS*>(p));
   }
   static void destruct_ArrayS(void *p) {
      typedef ::ArrayS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::ArrayS

//______________________________________________________________________________
void EventInfo::Streamer(TBuffer &R__b)
{
   // Stream an object of class EventInfo.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(EventInfo::Class(),this);
   } else {
      R__b.WriteClassBuffer(EventInfo::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_EventInfo(void *p) {
      return  p ? new(p) ::EventInfo : new ::EventInfo;
   }
   static void *newArray_EventInfo(Long_t nElements, void *p) {
      return p ? new(p) ::EventInfo[nElements] : new ::EventInfo[nElements];
   }
   // Wrapper around operator delete
   static void delete_EventInfo(void *p) {
      delete (static_cast<::EventInfo*>(p));
   }
   static void deleteArray_EventInfo(void *p) {
      delete [] (static_cast<::EventInfo*>(p));
   }
   static void destruct_EventInfo(void *p) {
      typedef ::EventInfo current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::EventInfo

//______________________________________________________________________________
void FChannel::Streamer(TBuffer &R__b)
{
   // Stream an object of class FChannel.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FChannel::Class(),this);
   } else {
      R__b.WriteClassBuffer(FChannel::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FChannel(void *p) {
      return  p ? new(p) ::FChannel : new ::FChannel;
   }
   static void *newArray_FChannel(Long_t nElements, void *p) {
      return p ? new(p) ::FChannel[nElements] : new ::FChannel[nElements];
   }
   // Wrapper around operator delete
   static void delete_FChannel(void *p) {
      delete (static_cast<::FChannel*>(p));
   }
   static void deleteArray_FChannel(void *p) {
      delete [] (static_cast<::FChannel*>(p));
   }
   static void destruct_FChannel(void *p) {
      typedef ::FChannel current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FChannel

//______________________________________________________________________________
void FChannelData::Streamer(TBuffer &R__b)
{
   // Stream an object of class FChannelData.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FChannelData::Class(),this);
   } else {
      R__b.WriteClassBuffer(FChannelData::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FChannelData(void *p) {
      return  p ? new(p) ::FChannelData : new ::FChannelData;
   }
   static void *newArray_FChannelData(Long_t nElements, void *p) {
      return p ? new(p) ::FChannelData[nElements] : new ::FChannelData[nElements];
   }
   // Wrapper around operator delete
   static void delete_FChannelData(void *p) {
      delete (static_cast<::FChannelData*>(p));
   }
   static void deleteArray_FChannelData(void *p) {
      delete [] (static_cast<::FChannelData*>(p));
   }
   static void destruct_FChannelData(void *p) {
      typedef ::FChannelData current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FChannelData

namespace {
  void TriggerDictionaryInitialization_libRawObjs_Impl() {
    static const char* headers[] = {
"/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannel.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannelData.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AbsChannel.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/ArrayS.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/EventInfo.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannel.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannelData.hh",
nullptr
    };
    static const char* includePaths[] = {
"/home/frontend/Software/root/v6.28.04/install/include",
"/usr/include/libusb-1.0",
"/home/frontend/DAQ/DAQ_cup/build/include",
"/home/frontend/DAQ/DAQ_cup/CUPDAQ/RawObjs",
"/home/frontend/Software/root/v6.28.04/install/include/",
"/home/frontend/DAQ/DAQ_cup/build/RawObjs/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libRawObjs dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$RawObjs/AbsChannel.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannel.hh")))  AbsChannel;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannel.hh")))  AChannel;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannelData.hh")))  AChannelData;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/ArrayS.hh")))  ArrayS;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/EventInfo.hh")))  EventInfo;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannel.hh")))  FChannel;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannelData.hh")))  FChannelData;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libRawObjs dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AChannelData.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/AbsChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/ArrayS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/EventInfo.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannel.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/RawObjs/FChannelData.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AChannel", payloadCode, "@",
"AChannelData", payloadCode, "@",
"AbsChannel", payloadCode, "@",
"ArrayS", payloadCode, "@",
"EventInfo", payloadCode, "@",
"FChannel", payloadCode, "@",
"FChannelData", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libRawObjs",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libRawObjs_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libRawObjs_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libRawObjs() {
  TriggerDictionaryInitialization_libRawObjs_Impl();
}
