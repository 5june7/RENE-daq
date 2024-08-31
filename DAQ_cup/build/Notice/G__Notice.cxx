// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__Notice
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
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeAMOREADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMINITCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMUONDAQ.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125S.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500S.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusb.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusbconst.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3com.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3comroot.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcb.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcbroot.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void *new_usb3comroot(void *p = nullptr);
   static void *newArray_usb3comroot(Long_t size, void *p);
   static void delete_usb3comroot(void *p);
   static void deleteArray_usb3comroot(void *p);
   static void destruct_usb3comroot(void *p);
   static void streamer_usb3comroot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::usb3comroot*)
   {
      ::usb3comroot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::usb3comroot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("usb3comroot", ::usb3comroot::Class_Version(), "Notice/usb3comroot.hh", 14,
                  typeid(::usb3comroot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::usb3comroot::Dictionary, isa_proxy, 16,
                  sizeof(::usb3comroot) );
      instance.SetNew(&new_usb3comroot);
      instance.SetNewArray(&newArray_usb3comroot);
      instance.SetDelete(&delete_usb3comroot);
      instance.SetDeleteArray(&deleteArray_usb3comroot);
      instance.SetDestructor(&destruct_usb3comroot);
      instance.SetStreamerFunc(&streamer_usb3comroot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::usb3comroot*)
   {
      return GenerateInitInstanceLocal(static_cast<::usb3comroot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::usb3comroot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_usb3tcbroot(void *p = nullptr);
   static void *newArray_usb3tcbroot(Long_t size, void *p);
   static void delete_usb3tcbroot(void *p);
   static void deleteArray_usb3tcbroot(void *p);
   static void destruct_usb3tcbroot(void *p);
   static void streamer_usb3tcbroot(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::usb3tcbroot*)
   {
      ::usb3tcbroot *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::usb3tcbroot >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("usb3tcbroot", ::usb3tcbroot::Class_Version(), "Notice/usb3tcbroot.hh", 21,
                  typeid(::usb3tcbroot), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::usb3tcbroot::Dictionary, isa_proxy, 16,
                  sizeof(::usb3tcbroot) );
      instance.SetNew(&new_usb3tcbroot);
      instance.SetNewArray(&newArray_usb3tcbroot);
      instance.SetDelete(&delete_usb3tcbroot);
      instance.SetDeleteArray(&deleteArray_usb3tcbroot);
      instance.SetDestructor(&destruct_usb3tcbroot);
      instance.SetStreamerFunc(&streamer_usb3tcbroot);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::usb3tcbroot*)
   {
      return GenerateInitInstanceLocal(static_cast<::usb3tcbroot*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::usb3tcbroot*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr usb3comroot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *usb3comroot::Class_Name()
{
   return "usb3comroot";
}

//______________________________________________________________________________
const char *usb3comroot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::usb3comroot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int usb3comroot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::usb3comroot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *usb3comroot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::usb3comroot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *usb3comroot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::usb3comroot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr usb3tcbroot::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *usb3tcbroot::Class_Name()
{
   return "usb3tcbroot";
}

//______________________________________________________________________________
const char *usb3tcbroot::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::usb3tcbroot*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int usb3tcbroot::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::usb3tcbroot*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *usb3tcbroot::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::usb3tcbroot*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *usb3tcbroot::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::usb3tcbroot*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void usb3comroot::Streamer(TBuffer &R__b)
{
   // Stream an object of class usb3comroot.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_usb3comroot(void *p) {
      return  p ? new(p) ::usb3comroot : new ::usb3comroot;
   }
   static void *newArray_usb3comroot(Long_t nElements, void *p) {
      return p ? new(p) ::usb3comroot[nElements] : new ::usb3comroot[nElements];
   }
   // Wrapper around operator delete
   static void delete_usb3comroot(void *p) {
      delete (static_cast<::usb3comroot*>(p));
   }
   static void deleteArray_usb3comroot(void *p) {
      delete [] (static_cast<::usb3comroot*>(p));
   }
   static void destruct_usb3comroot(void *p) {
      typedef ::usb3comroot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_usb3comroot(TBuffer &buf, void *obj) {
      ((::usb3comroot*)obj)->::usb3comroot::Streamer(buf);
   }
} // end of namespace ROOT for class ::usb3comroot

//______________________________________________________________________________
void usb3tcbroot::Streamer(TBuffer &R__b)
{
   // Stream an object of class usb3tcbroot.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_usb3tcbroot(void *p) {
      return  p ? new(p) ::usb3tcbroot : new ::usb3tcbroot;
   }
   static void *newArray_usb3tcbroot(Long_t nElements, void *p) {
      return p ? new(p) ::usb3tcbroot[nElements] : new ::usb3tcbroot[nElements];
   }
   // Wrapper around operator delete
   static void delete_usb3tcbroot(void *p) {
      delete (static_cast<::usb3tcbroot*>(p));
   }
   static void deleteArray_usb3tcbroot(void *p) {
      delete [] (static_cast<::usb3tcbroot*>(p));
   }
   static void destruct_usb3tcbroot(void *p) {
      typedef ::usb3tcbroot current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_usb3tcbroot(TBuffer &buf, void *obj) {
      ((::usb3tcbroot*)obj)->::usb3tcbroot::Streamer(buf);
   }
} // end of namespace ROOT for class ::usb3tcbroot

namespace {
  void TriggerDictionaryInitialization_libNotice_Impl() {
    static const char* headers[] = {
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeAMOREADC.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADC.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADCS.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMINITCB.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMUONDAQ.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125S.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500S.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeTCB.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusb.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusbconst.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3com.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3comroot.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcb.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcbroot.hh",
nullptr
    };
    static const char* includePaths[] = {
"/home/frontend/Software/root/v6.28.04/install/include",
"/usr/include/libusb-1.0",
"/home/frontend/DAQ/DAQ_cup/build/include",
"/home/frontend/DAQ/DAQ_cup/CUPDAQ/Notice",
"/home/frontend/Software/root/v6.28.04/install/include/",
"/home/frontend/DAQ/DAQ_cup/build/Notice/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libNotice dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3comroot.hh")))  usb3comroot;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcbroot.hh")))  usb3tcbroot;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libNotice dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeAMOREADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeM64ADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMINITCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeMUONDAQ.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC125S.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeNKFADC500S.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/NoticeTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusb.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/nkusbconst.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3com.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3comroot.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcb.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/Notice/usb3tcbroot.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"usb3comroot", payloadCode, "@",
"usb3tcbroot", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libNotice",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libNotice_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libNotice_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libNotice() {
  TriggerDictionaryInitialization_libNotice_Impl();
}
