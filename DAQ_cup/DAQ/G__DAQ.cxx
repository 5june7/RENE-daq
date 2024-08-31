// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__DAQ
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
#include "/home/frontend/DAQ/DAQ_cup/include/DAQ/CupDAQManager.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQ/CupGeneralTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQ/daqopt.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_CupGeneralTCB(void *p = nullptr);
   static void *newArray_CupGeneralTCB(Long_t size, void *p);
   static void delete_CupGeneralTCB(void *p);
   static void deleteArray_CupGeneralTCB(void *p);
   static void destruct_CupGeneralTCB(void *p);
   static void streamer_CupGeneralTCB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupGeneralTCB*)
   {
      ::CupGeneralTCB *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupGeneralTCB >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupGeneralTCB", ::CupGeneralTCB::Class_Version(), "DAQ/CupGeneralTCB.hh", 19,
                  typeid(::CupGeneralTCB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupGeneralTCB::Dictionary, isa_proxy, 16,
                  sizeof(::CupGeneralTCB) );
      instance.SetNew(&new_CupGeneralTCB);
      instance.SetNewArray(&newArray_CupGeneralTCB);
      instance.SetDelete(&delete_CupGeneralTCB);
      instance.SetDeleteArray(&deleteArray_CupGeneralTCB);
      instance.SetDestructor(&destruct_CupGeneralTCB);
      instance.SetStreamerFunc(&streamer_CupGeneralTCB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupGeneralTCB*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupGeneralTCB*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupGeneralTCB*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupDAQManager(void *p = nullptr);
   static void *newArray_CupDAQManager(Long_t size, void *p);
   static void delete_CupDAQManager(void *p);
   static void deleteArray_CupDAQManager(void *p);
   static void destruct_CupDAQManager(void *p);
   static void streamer_CupDAQManager(TBuffer &buf, void *obj);
   static Long64_t merge_CupDAQManager(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupDAQManager*)
   {
      ::CupDAQManager *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupDAQManager >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupDAQManager", ::CupDAQManager::Class_Version(), "DAQ/CupDAQManager.hh", 49,
                  typeid(::CupDAQManager), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupDAQManager::Dictionary, isa_proxy, 16,
                  sizeof(::CupDAQManager) );
      instance.SetNew(&new_CupDAQManager);
      instance.SetNewArray(&newArray_CupDAQManager);
      instance.SetDelete(&delete_CupDAQManager);
      instance.SetDeleteArray(&deleteArray_CupDAQManager);
      instance.SetDestructor(&destruct_CupDAQManager);
      instance.SetStreamerFunc(&streamer_CupDAQManager);
      instance.SetMerge(&merge_CupDAQManager);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupDAQManager*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupDAQManager*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupDAQManager*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr CupGeneralTCB::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupGeneralTCB::Class_Name()
{
   return "CupGeneralTCB";
}

//______________________________________________________________________________
const char *CupGeneralTCB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupGeneralTCB*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupGeneralTCB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupGeneralTCB*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupGeneralTCB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupGeneralTCB*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupGeneralTCB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupGeneralTCB*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupDAQManager::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupDAQManager::Class_Name()
{
   return "CupDAQManager";
}

//______________________________________________________________________________
const char *CupDAQManager::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupDAQManager*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupDAQManager::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupDAQManager*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupDAQManager::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupDAQManager*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupDAQManager::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupDAQManager*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void CupGeneralTCB::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupGeneralTCB.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupGeneralTCB(void *p) {
      return  p ? new(p) ::CupGeneralTCB : new ::CupGeneralTCB;
   }
   static void *newArray_CupGeneralTCB(Long_t nElements, void *p) {
      return p ? new(p) ::CupGeneralTCB[nElements] : new ::CupGeneralTCB[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupGeneralTCB(void *p) {
      delete (static_cast<::CupGeneralTCB*>(p));
   }
   static void deleteArray_CupGeneralTCB(void *p) {
      delete [] (static_cast<::CupGeneralTCB*>(p));
   }
   static void destruct_CupGeneralTCB(void *p) {
      typedef ::CupGeneralTCB current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupGeneralTCB(TBuffer &buf, void *obj) {
      ((::CupGeneralTCB*)obj)->::CupGeneralTCB::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupGeneralTCB

//______________________________________________________________________________
void CupDAQManager::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupDAQManager.

   TObjArray::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupDAQManager(void *p) {
      return  p ? new(p) ::CupDAQManager : new ::CupDAQManager;
   }
   static void *newArray_CupDAQManager(Long_t nElements, void *p) {
      return p ? new(p) ::CupDAQManager[nElements] : new ::CupDAQManager[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupDAQManager(void *p) {
      delete (static_cast<::CupDAQManager*>(p));
   }
   static void deleteArray_CupDAQManager(void *p) {
      delete [] (static_cast<::CupDAQManager*>(p));
   }
   static void destruct_CupDAQManager(void *p) {
      typedef ::CupDAQManager current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupDAQManager(TBuffer &buf, void *obj) {
      ((::CupDAQManager*)obj)->::CupDAQManager::Streamer(buf);
   }
   // Wrapper around the merge function.
   static Long64_t  merge_CupDAQManager(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::CupDAQManager*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::CupDAQManager

namespace {
  void TriggerDictionaryInitialization_libDAQ_Impl() {
    static const char* headers[] = {
"/home/frontend/DAQ/DAQ_cup/include/DAQ/CupDAQManager.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQ/CupGeneralTCB.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQ/daqopt.hh",
nullptr
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/libusb-1.0",
"/home/frontend/DAQ/DAQ_cup/include",
"/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQ",
"/usr/include/root",
"/home/frontend/DAQ/DAQ_cup/DAQ/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libDAQ dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$DAQ/CupGeneralTCB.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQ/CupDAQManager.hh")))  CupGeneralTCB;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQ/CupDAQManager.hh")))  CupDAQManager;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libDAQ dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/frontend/DAQ/DAQ_cup/include/DAQ/CupDAQManager.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQ/CupGeneralTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQ/daqopt.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"CupDAQManager", payloadCode, "@",
"CupGeneralTCB", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libDAQ",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libDAQ_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libDAQ_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libDAQ() {
  TriggerDictionaryInitialization_libDAQ_Impl();
}
