// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__DAQUtils
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
#include "/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ConcurrentDeque.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELog.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELogger.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_ELog(void *p = nullptr);
   static void *newArray_ELog(Long_t size, void *p);
   static void delete_ELog(void *p);
   static void deleteArray_ELog(void *p);
   static void destruct_ELog(void *p);
   static void streamer_ELog(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELog*)
   {
      ::ELog *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELog >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ELog", ::ELog::Class_Version(), "DAQUtils/ELog.hh", 9,
                  typeid(::ELog), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ELog::Dictionary, isa_proxy, 16,
                  sizeof(::ELog) );
      instance.SetNew(&new_ELog);
      instance.SetNewArray(&newArray_ELog);
      instance.SetDelete(&delete_ELog);
      instance.SetDeleteArray(&deleteArray_ELog);
      instance.SetDestructor(&destruct_ELog);
      instance.SetStreamerFunc(&streamer_ELog);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELog*)
   {
      return GenerateInitInstanceLocal(static_cast<::ELog*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ELog*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void streamer_ELogger(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::ELogger*)
   {
      ::ELogger *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::ELogger >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("ELogger", ::ELogger::Class_Version(), "DAQUtils/ELogger.hh", 13,
                  typeid(::ELogger), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::ELogger::Dictionary, isa_proxy, 16,
                  sizeof(::ELogger) );
      instance.SetStreamerFunc(&streamer_ELogger);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::ELogger*)
   {
      return GenerateInitInstanceLocal(static_cast<::ELogger*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::ELogger*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr ELog::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ELog::Class_Name()
{
   return "ELog";
}

//______________________________________________________________________________
const char *ELog::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELog*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ELog::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELog*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELog::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELog*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELog::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELog*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr ELogger::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *ELogger::Class_Name()
{
   return "ELogger";
}

//______________________________________________________________________________
const char *ELogger::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELogger*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int ELogger::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::ELogger*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *ELogger::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELogger*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *ELogger::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::ELogger*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void ELog::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELog.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      void *ptr_fLevel = (void*)&fLevel;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fLevel);
      fLog.Streamer(R__b);
      R__b >> fTime;
      R__b >> fTag;
      R__b >> fRunnum;
      R__b.CheckByteCount(R__s, R__c, ELog::IsA());
   } else {
      R__c = R__b.WriteVersion(ELog::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << (Int_t)fLevel;
      fLog.Streamer(R__b);
      R__b << fTime;
      R__b << fTag;
      R__b << fRunnum;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_ELog(void *p) {
      return  p ? new(p) ::ELog : new ::ELog;
   }
   static void *newArray_ELog(Long_t nElements, void *p) {
      return p ? new(p) ::ELog[nElements] : new ::ELog[nElements];
   }
   // Wrapper around operator delete
   static void delete_ELog(void *p) {
      delete (static_cast<::ELog*>(p));
   }
   static void deleteArray_ELog(void *p) {
      delete [] (static_cast<::ELog*>(p));
   }
   static void destruct_ELog(void *p) {
      typedef ::ELog current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_ELog(TBuffer &buf, void *obj) {
      ((::ELog*)obj)->::ELog::Streamer(buf);
   }
} // end of namespace ROOT for class ::ELog

//______________________________________________________________________________
void ELogger::Streamer(TBuffer &R__b)
{
   // Stream an object of class ELogger.

   ::Error("ELogger::Streamer", "version id <=0 in ClassDef, dummy Streamer() called"); if (R__b.IsReading()) { }
}

namespace ROOT {
   // Wrapper around a custom streamer member function.
   static void streamer_ELogger(TBuffer &buf, void *obj) {
      ((::ELogger*)obj)->::ELogger::Streamer(buf);
   }
} // end of namespace ROOT for class ::ELogger

namespace {
  void TriggerDictionaryInitialization_libDAQUtils_Impl() {
    static const char* headers[] = {
"/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ConcurrentDeque.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELog.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELogger.hh",
nullptr
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/libusb-1.0",
"/home/frontend/DAQ/DAQ_cup/include",
"/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQUtils",
"/usr/include/root",
"/home/frontend/DAQ/DAQ_cup/DAQUtils/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libDAQUtils dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELog.hh")))  ELog;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELogger.hh")))  ELogger;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libDAQUtils dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ConcurrentDeque.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELog.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQUtils/ELogger.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"ELog", payloadCode, "@",
"ELogger", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libDAQUtils",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libDAQUtils_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libDAQUtils_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libDAQUtils() {
  TriggerDictionaryInitialization_libDAQUtils_Impl();
}
