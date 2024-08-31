// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__DAQSystem
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
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AmoreADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupIADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMiniTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupTCB.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_AbsADC(void *p);
   static void deleteArray_AbsADC(void *p);
   static void destruct_AbsADC(void *p);
   static void streamer_AbsADC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AbsADC*)
   {
      ::AbsADC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AbsADC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AbsADC", ::AbsADC::Class_Version(), "DAQSystem/AbsADC.hh", 26,
                  typeid(::AbsADC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AbsADC::Dictionary, isa_proxy, 16,
                  sizeof(::AbsADC) );
      instance.SetDelete(&delete_AbsADC);
      instance.SetDeleteArray(&deleteArray_AbsADC);
      instance.SetDestructor(&destruct_AbsADC);
      instance.SetStreamerFunc(&streamer_AbsADC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AbsADC*)
   {
      return GenerateInitInstanceLocal(static_cast<::AbsADC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AbsADC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void delete_AbsTCB(void *p);
   static void deleteArray_AbsTCB(void *p);
   static void destruct_AbsTCB(void *p);
   static void streamer_AbsTCB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AbsTCB*)
   {
      ::AbsTCB *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AbsTCB >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AbsTCB", ::AbsTCB::Class_Version(), "DAQSystem/AbsTCB.hh", 13,
                  typeid(::AbsTCB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AbsTCB::Dictionary, isa_proxy, 16,
                  sizeof(::AbsTCB) );
      instance.SetDelete(&delete_AbsTCB);
      instance.SetDeleteArray(&deleteArray_AbsTCB);
      instance.SetDestructor(&destruct_AbsTCB);
      instance.SetStreamerFunc(&streamer_AbsTCB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AbsTCB*)
   {
      return GenerateInitInstanceLocal(static_cast<::AbsTCB*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AbsTCB*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupTCB(void *p = nullptr);
   static void *newArray_CupTCB(Long_t size, void *p);
   static void delete_CupTCB(void *p);
   static void deleteArray_CupTCB(void *p);
   static void destruct_CupTCB(void *p);
   static void streamer_CupTCB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupTCB*)
   {
      ::CupTCB *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupTCB >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupTCB", ::CupTCB::Class_Version(), "DAQSystem/CupTCB.hh", 9,
                  typeid(::CupTCB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupTCB::Dictionary, isa_proxy, 16,
                  sizeof(::CupTCB) );
      instance.SetNew(&new_CupTCB);
      instance.SetNewArray(&newArray_CupTCB);
      instance.SetDelete(&delete_CupTCB);
      instance.SetDeleteArray(&deleteArray_CupTCB);
      instance.SetDestructor(&destruct_CupTCB);
      instance.SetStreamerFunc(&streamer_CupTCB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupTCB*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupTCB*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupTCB*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AmoreADC(void *p = nullptr);
   static void *newArray_AmoreADC(Long_t size, void *p);
   static void delete_AmoreADC(void *p);
   static void deleteArray_AmoreADC(void *p);
   static void destruct_AmoreADC(void *p);
   static void streamer_AmoreADC(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AmoreADC*)
   {
      ::AmoreADC *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AmoreADC >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AmoreADC", ::AmoreADC::Class_Version(), "DAQSystem/AmoreADC.hh", 10,
                  typeid(::AmoreADC), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AmoreADC::Dictionary, isa_proxy, 16,
                  sizeof(::AmoreADC) );
      instance.SetNew(&new_AmoreADC);
      instance.SetNewArray(&newArray_AmoreADC);
      instance.SetDelete(&delete_AmoreADC);
      instance.SetDeleteArray(&deleteArray_AmoreADC);
      instance.SetDestructor(&destruct_AmoreADC);
      instance.SetStreamerFunc(&streamer_AmoreADC);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AmoreADC*)
   {
      return GenerateInitInstanceLocal(static_cast<::AmoreADC*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AmoreADC*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupFADCS(void *p = nullptr);
   static void *newArray_CupFADCS(Long_t size, void *p);
   static void delete_CupFADCS(void *p);
   static void deleteArray_CupFADCS(void *p);
   static void destruct_CupFADCS(void *p);
   static void streamer_CupFADCS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupFADCS*)
   {
      ::CupFADCS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupFADCS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupFADCS", ::CupFADCS::Class_Version(), "DAQSystem/CupFADCS.hh", 7,
                  typeid(::CupFADCS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupFADCS::Dictionary, isa_proxy, 16,
                  sizeof(::CupFADCS) );
      instance.SetNew(&new_CupFADCS);
      instance.SetNewArray(&newArray_CupFADCS);
      instance.SetDelete(&delete_CupFADCS);
      instance.SetDeleteArray(&deleteArray_CupFADCS);
      instance.SetDestructor(&destruct_CupFADCS);
      instance.SetStreamerFunc(&streamer_CupFADCS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupFADCS*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupFADCS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupFADCS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupFADCT(void *p = nullptr);
   static void *newArray_CupFADCT(Long_t size, void *p);
   static void delete_CupFADCT(void *p);
   static void deleteArray_CupFADCT(void *p);
   static void destruct_CupFADCT(void *p);
   static void streamer_CupFADCT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupFADCT*)
   {
      ::CupFADCT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupFADCT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupFADCT", ::CupFADCT::Class_Version(), "DAQSystem/CupFADCT.hh", 7,
                  typeid(::CupFADCT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupFADCT::Dictionary, isa_proxy, 16,
                  sizeof(::CupFADCT) );
      instance.SetNew(&new_CupFADCT);
      instance.SetNewArray(&newArray_CupFADCT);
      instance.SetDelete(&delete_CupFADCT);
      instance.SetDeleteArray(&deleteArray_CupFADCT);
      instance.SetDestructor(&destruct_CupFADCT);
      instance.SetStreamerFunc(&streamer_CupFADCT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupFADCT*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupFADCT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupFADCT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupGADCS(void *p = nullptr);
   static void *newArray_CupGADCS(Long_t size, void *p);
   static void delete_CupGADCS(void *p);
   static void deleteArray_CupGADCS(void *p);
   static void destruct_CupGADCS(void *p);
   static void streamer_CupGADCS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupGADCS*)
   {
      ::CupGADCS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupGADCS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupGADCS", ::CupGADCS::Class_Version(), "DAQSystem/CupGADCS.hh", 7,
                  typeid(::CupGADCS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupGADCS::Dictionary, isa_proxy, 16,
                  sizeof(::CupGADCS) );
      instance.SetNew(&new_CupGADCS);
      instance.SetNewArray(&newArray_CupGADCS);
      instance.SetDelete(&delete_CupGADCS);
      instance.SetDeleteArray(&deleteArray_CupGADCS);
      instance.SetDestructor(&destruct_CupGADCS);
      instance.SetStreamerFunc(&streamer_CupGADCS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupGADCS*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupGADCS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupGADCS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupGADCT(void *p = nullptr);
   static void *newArray_CupGADCT(Long_t size, void *p);
   static void delete_CupGADCT(void *p);
   static void deleteArray_CupGADCT(void *p);
   static void destruct_CupGADCT(void *p);
   static void streamer_CupGADCT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupGADCT*)
   {
      ::CupGADCT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupGADCT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupGADCT", ::CupGADCT::Class_Version(), "DAQSystem/CupGADCT.hh", 7,
                  typeid(::CupGADCT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupGADCT::Dictionary, isa_proxy, 16,
                  sizeof(::CupGADCT) );
      instance.SetNew(&new_CupGADCT);
      instance.SetNewArray(&newArray_CupGADCT);
      instance.SetDelete(&delete_CupGADCT);
      instance.SetDeleteArray(&deleteArray_CupGADCT);
      instance.SetDestructor(&destruct_CupGADCT);
      instance.SetStreamerFunc(&streamer_CupGADCT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupGADCT*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupGADCT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupGADCT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupIADCT(void *p = nullptr);
   static void *newArray_CupIADCT(Long_t size, void *p);
   static void delete_CupIADCT(void *p);
   static void deleteArray_CupIADCT(void *p);
   static void destruct_CupIADCT(void *p);
   static void streamer_CupIADCT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupIADCT*)
   {
      ::CupIADCT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupIADCT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupIADCT", ::CupIADCT::Class_Version(), "DAQSystem/CupIADCT.hh", 7,
                  typeid(::CupIADCT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupIADCT::Dictionary, isa_proxy, 16,
                  sizeof(::CupIADCT) );
      instance.SetNew(&new_CupIADCT);
      instance.SetNewArray(&newArray_CupIADCT);
      instance.SetDelete(&delete_CupIADCT);
      instance.SetDeleteArray(&deleteArray_CupIADCT);
      instance.SetDestructor(&destruct_CupIADCT);
      instance.SetStreamerFunc(&streamer_CupIADCT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupIADCT*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupIADCT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupIADCT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupMADCS(void *p = nullptr);
   static void *newArray_CupMADCS(Long_t size, void *p);
   static void delete_CupMADCS(void *p);
   static void deleteArray_CupMADCS(void *p);
   static void destruct_CupMADCS(void *p);
   static void streamer_CupMADCS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupMADCS*)
   {
      ::CupMADCS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupMADCS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupMADCS", ::CupMADCS::Class_Version(), "DAQSystem/CupMADCS.hh", 7,
                  typeid(::CupMADCS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupMADCS::Dictionary, isa_proxy, 16,
                  sizeof(::CupMADCS) );
      instance.SetNew(&new_CupMADCS);
      instance.SetNewArray(&newArray_CupMADCS);
      instance.SetDelete(&delete_CupMADCS);
      instance.SetDeleteArray(&deleteArray_CupMADCS);
      instance.SetDestructor(&destruct_CupMADCS);
      instance.SetStreamerFunc(&streamer_CupMADCS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupMADCS*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupMADCS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupMADCS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupMiniTCB(void *p = nullptr);
   static void *newArray_CupMiniTCB(Long_t size, void *p);
   static void delete_CupMiniTCB(void *p);
   static void deleteArray_CupMiniTCB(void *p);
   static void destruct_CupMiniTCB(void *p);
   static void streamer_CupMiniTCB(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupMiniTCB*)
   {
      ::CupMiniTCB *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupMiniTCB >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupMiniTCB", ::CupMiniTCB::Class_Version(), "DAQSystem/CupMiniTCB.hh", 7,
                  typeid(::CupMiniTCB), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupMiniTCB::Dictionary, isa_proxy, 16,
                  sizeof(::CupMiniTCB) );
      instance.SetNew(&new_CupMiniTCB);
      instance.SetNewArray(&newArray_CupMiniTCB);
      instance.SetDelete(&delete_CupMiniTCB);
      instance.SetDeleteArray(&deleteArray_CupMiniTCB);
      instance.SetDestructor(&destruct_CupMiniTCB);
      instance.SetStreamerFunc(&streamer_CupMiniTCB);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupMiniTCB*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupMiniTCB*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupMiniTCB*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupSADCS(void *p = nullptr);
   static void *newArray_CupSADCS(Long_t size, void *p);
   static void delete_CupSADCS(void *p);
   static void deleteArray_CupSADCS(void *p);
   static void destruct_CupSADCS(void *p);
   static void streamer_CupSADCS(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupSADCS*)
   {
      ::CupSADCS *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupSADCS >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupSADCS", ::CupSADCS::Class_Version(), "DAQSystem/CupSADCS.hh", 7,
                  typeid(::CupSADCS), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupSADCS::Dictionary, isa_proxy, 16,
                  sizeof(::CupSADCS) );
      instance.SetNew(&new_CupSADCS);
      instance.SetNewArray(&newArray_CupSADCS);
      instance.SetDelete(&delete_CupSADCS);
      instance.SetDeleteArray(&deleteArray_CupSADCS);
      instance.SetDestructor(&destruct_CupSADCS);
      instance.SetStreamerFunc(&streamer_CupSADCS);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupSADCS*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupSADCS*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupSADCS*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_CupSADCT(void *p = nullptr);
   static void *newArray_CupSADCT(Long_t size, void *p);
   static void delete_CupSADCT(void *p);
   static void deleteArray_CupSADCT(void *p);
   static void destruct_CupSADCT(void *p);
   static void streamer_CupSADCT(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::CupSADCT*)
   {
      ::CupSADCT *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::CupSADCT >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("CupSADCT", ::CupSADCT::Class_Version(), "DAQSystem/CupSADCT.hh", 7,
                  typeid(::CupSADCT), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::CupSADCT::Dictionary, isa_proxy, 16,
                  sizeof(::CupSADCT) );
      instance.SetNew(&new_CupSADCT);
      instance.SetNewArray(&newArray_CupSADCT);
      instance.SetDelete(&delete_CupSADCT);
      instance.SetDeleteArray(&deleteArray_CupSADCT);
      instance.SetDestructor(&destruct_CupSADCT);
      instance.SetStreamerFunc(&streamer_CupSADCT);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::CupSADCT*)
   {
      return GenerateInitInstanceLocal(static_cast<::CupSADCT*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::CupSADCT*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AbsADC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsADC::Class_Name()
{
   return "AbsADC";
}

//______________________________________________________________________________
const char *AbsADC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsADC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AbsADC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsADC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsADC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsADC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsADC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsADC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AbsTCB::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsTCB::Class_Name()
{
   return "AbsTCB";
}

//______________________________________________________________________________
const char *AbsTCB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsTCB*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AbsTCB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsTCB*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsTCB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsTCB*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsTCB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsTCB*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupTCB::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupTCB::Class_Name()
{
   return "CupTCB";
}

//______________________________________________________________________________
const char *CupTCB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupTCB*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupTCB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupTCB*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupTCB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupTCB*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupTCB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupTCB*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AmoreADC::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AmoreADC::Class_Name()
{
   return "AmoreADC";
}

//______________________________________________________________________________
const char *AmoreADC::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AmoreADC*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AmoreADC::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AmoreADC*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AmoreADC::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AmoreADC*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AmoreADC::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AmoreADC*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupFADCS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupFADCS::Class_Name()
{
   return "CupFADCS";
}

//______________________________________________________________________________
const char *CupFADCS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupFADCS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupFADCS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupFADCS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupFADCS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupFADCS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupFADCS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupFADCS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupFADCT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupFADCT::Class_Name()
{
   return "CupFADCT";
}

//______________________________________________________________________________
const char *CupFADCT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupFADCT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupFADCT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupFADCT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupFADCT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupFADCT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupFADCT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupFADCT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupGADCS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupGADCS::Class_Name()
{
   return "CupGADCS";
}

//______________________________________________________________________________
const char *CupGADCS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupGADCS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupGADCS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupGADCS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupGADCS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupGADCS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupGADCS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupGADCS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupGADCT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupGADCT::Class_Name()
{
   return "CupGADCT";
}

//______________________________________________________________________________
const char *CupGADCT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupGADCT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupGADCT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupGADCT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupGADCT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupGADCT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupGADCT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupGADCT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupIADCT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupIADCT::Class_Name()
{
   return "CupIADCT";
}

//______________________________________________________________________________
const char *CupIADCT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupIADCT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupIADCT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupIADCT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupIADCT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupIADCT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupIADCT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupIADCT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupMADCS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupMADCS::Class_Name()
{
   return "CupMADCS";
}

//______________________________________________________________________________
const char *CupMADCS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupMADCS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupMADCS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupMADCS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupMADCS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupMADCS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupMADCS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupMADCS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupMiniTCB::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupMiniTCB::Class_Name()
{
   return "CupMiniTCB";
}

//______________________________________________________________________________
const char *CupMiniTCB::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupMiniTCB*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupMiniTCB::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupMiniTCB*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupMiniTCB::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupMiniTCB*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupMiniTCB::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupMiniTCB*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupSADCS::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupSADCS::Class_Name()
{
   return "CupSADCS";
}

//______________________________________________________________________________
const char *CupSADCS::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupSADCS*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupSADCS::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupSADCS*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupSADCS::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupSADCS*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupSADCS::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupSADCS*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr CupSADCT::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *CupSADCT::Class_Name()
{
   return "CupSADCT";
}

//______________________________________________________________________________
const char *CupSADCT::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupSADCT*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int CupSADCT::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::CupSADCT*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *CupSADCT::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupSADCT*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *CupSADCT::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::CupSADCT*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void AbsADC::Streamer(TBuffer &R__b)
{
   // Stream an object of class AbsADC.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_AbsADC(void *p) {
      delete (static_cast<::AbsADC*>(p));
   }
   static void deleteArray_AbsADC(void *p) {
      delete [] (static_cast<::AbsADC*>(p));
   }
   static void destruct_AbsADC(void *p) {
      typedef ::AbsADC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AbsADC(TBuffer &buf, void *obj) {
      ((::AbsADC*)obj)->::AbsADC::Streamer(buf);
   }
} // end of namespace ROOT for class ::AbsADC

//______________________________________________________________________________
void AbsTCB::Streamer(TBuffer &R__b)
{
   // Stream an object of class AbsTCB.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_AbsTCB(void *p) {
      delete (static_cast<::AbsTCB*>(p));
   }
   static void deleteArray_AbsTCB(void *p) {
      delete [] (static_cast<::AbsTCB*>(p));
   }
   static void destruct_AbsTCB(void *p) {
      typedef ::AbsTCB current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AbsTCB(TBuffer &buf, void *obj) {
      ((::AbsTCB*)obj)->::AbsTCB::Streamer(buf);
   }
} // end of namespace ROOT for class ::AbsTCB

//______________________________________________________________________________
void CupTCB::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupTCB.

   AbsTCB::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupTCB(void *p) {
      return  p ? new(p) ::CupTCB : new ::CupTCB;
   }
   static void *newArray_CupTCB(Long_t nElements, void *p) {
      return p ? new(p) ::CupTCB[nElements] : new ::CupTCB[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupTCB(void *p) {
      delete (static_cast<::CupTCB*>(p));
   }
   static void deleteArray_CupTCB(void *p) {
      delete [] (static_cast<::CupTCB*>(p));
   }
   static void destruct_CupTCB(void *p) {
      typedef ::CupTCB current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupTCB(TBuffer &buf, void *obj) {
      ((::CupTCB*)obj)->::CupTCB::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupTCB

//______________________________________________________________________________
void AmoreADC::Streamer(TBuffer &R__b)
{
   // Stream an object of class AmoreADC.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AmoreADC(void *p) {
      return  p ? new(p) ::AmoreADC : new ::AmoreADC;
   }
   static void *newArray_AmoreADC(Long_t nElements, void *p) {
      return p ? new(p) ::AmoreADC[nElements] : new ::AmoreADC[nElements];
   }
   // Wrapper around operator delete
   static void delete_AmoreADC(void *p) {
      delete (static_cast<::AmoreADC*>(p));
   }
   static void deleteArray_AmoreADC(void *p) {
      delete [] (static_cast<::AmoreADC*>(p));
   }
   static void destruct_AmoreADC(void *p) {
      typedef ::AmoreADC current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_AmoreADC(TBuffer &buf, void *obj) {
      ((::AmoreADC*)obj)->::AmoreADC::Streamer(buf);
   }
} // end of namespace ROOT for class ::AmoreADC

//______________________________________________________________________________
void CupFADCS::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupFADCS.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupFADCS(void *p) {
      return  p ? new(p) ::CupFADCS : new ::CupFADCS;
   }
   static void *newArray_CupFADCS(Long_t nElements, void *p) {
      return p ? new(p) ::CupFADCS[nElements] : new ::CupFADCS[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupFADCS(void *p) {
      delete (static_cast<::CupFADCS*>(p));
   }
   static void deleteArray_CupFADCS(void *p) {
      delete [] (static_cast<::CupFADCS*>(p));
   }
   static void destruct_CupFADCS(void *p) {
      typedef ::CupFADCS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupFADCS(TBuffer &buf, void *obj) {
      ((::CupFADCS*)obj)->::CupFADCS::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupFADCS

//______________________________________________________________________________
void CupFADCT::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupFADCT.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupFADCT(void *p) {
      return  p ? new(p) ::CupFADCT : new ::CupFADCT;
   }
   static void *newArray_CupFADCT(Long_t nElements, void *p) {
      return p ? new(p) ::CupFADCT[nElements] : new ::CupFADCT[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupFADCT(void *p) {
      delete (static_cast<::CupFADCT*>(p));
   }
   static void deleteArray_CupFADCT(void *p) {
      delete [] (static_cast<::CupFADCT*>(p));
   }
   static void destruct_CupFADCT(void *p) {
      typedef ::CupFADCT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupFADCT(TBuffer &buf, void *obj) {
      ((::CupFADCT*)obj)->::CupFADCT::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupFADCT

//______________________________________________________________________________
void CupGADCS::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupGADCS.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupGADCS(void *p) {
      return  p ? new(p) ::CupGADCS : new ::CupGADCS;
   }
   static void *newArray_CupGADCS(Long_t nElements, void *p) {
      return p ? new(p) ::CupGADCS[nElements] : new ::CupGADCS[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupGADCS(void *p) {
      delete (static_cast<::CupGADCS*>(p));
   }
   static void deleteArray_CupGADCS(void *p) {
      delete [] (static_cast<::CupGADCS*>(p));
   }
   static void destruct_CupGADCS(void *p) {
      typedef ::CupGADCS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupGADCS(TBuffer &buf, void *obj) {
      ((::CupGADCS*)obj)->::CupGADCS::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupGADCS

//______________________________________________________________________________
void CupGADCT::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupGADCT.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupGADCT(void *p) {
      return  p ? new(p) ::CupGADCT : new ::CupGADCT;
   }
   static void *newArray_CupGADCT(Long_t nElements, void *p) {
      return p ? new(p) ::CupGADCT[nElements] : new ::CupGADCT[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupGADCT(void *p) {
      delete (static_cast<::CupGADCT*>(p));
   }
   static void deleteArray_CupGADCT(void *p) {
      delete [] (static_cast<::CupGADCT*>(p));
   }
   static void destruct_CupGADCT(void *p) {
      typedef ::CupGADCT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupGADCT(TBuffer &buf, void *obj) {
      ((::CupGADCT*)obj)->::CupGADCT::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupGADCT

//______________________________________________________________________________
void CupIADCT::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupIADCT.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupIADCT(void *p) {
      return  p ? new(p) ::CupIADCT : new ::CupIADCT;
   }
   static void *newArray_CupIADCT(Long_t nElements, void *p) {
      return p ? new(p) ::CupIADCT[nElements] : new ::CupIADCT[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupIADCT(void *p) {
      delete (static_cast<::CupIADCT*>(p));
   }
   static void deleteArray_CupIADCT(void *p) {
      delete [] (static_cast<::CupIADCT*>(p));
   }
   static void destruct_CupIADCT(void *p) {
      typedef ::CupIADCT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupIADCT(TBuffer &buf, void *obj) {
      ((::CupIADCT*)obj)->::CupIADCT::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupIADCT

//______________________________________________________________________________
void CupMADCS::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupMADCS.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupMADCS(void *p) {
      return  p ? new(p) ::CupMADCS : new ::CupMADCS;
   }
   static void *newArray_CupMADCS(Long_t nElements, void *p) {
      return p ? new(p) ::CupMADCS[nElements] : new ::CupMADCS[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupMADCS(void *p) {
      delete (static_cast<::CupMADCS*>(p));
   }
   static void deleteArray_CupMADCS(void *p) {
      delete [] (static_cast<::CupMADCS*>(p));
   }
   static void destruct_CupMADCS(void *p) {
      typedef ::CupMADCS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupMADCS(TBuffer &buf, void *obj) {
      ((::CupMADCS*)obj)->::CupMADCS::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupMADCS

//______________________________________________________________________________
void CupMiniTCB::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupMiniTCB.

   AbsTCB::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupMiniTCB(void *p) {
      return  p ? new(p) ::CupMiniTCB : new ::CupMiniTCB;
   }
   static void *newArray_CupMiniTCB(Long_t nElements, void *p) {
      return p ? new(p) ::CupMiniTCB[nElements] : new ::CupMiniTCB[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupMiniTCB(void *p) {
      delete (static_cast<::CupMiniTCB*>(p));
   }
   static void deleteArray_CupMiniTCB(void *p) {
      delete [] (static_cast<::CupMiniTCB*>(p));
   }
   static void destruct_CupMiniTCB(void *p) {
      typedef ::CupMiniTCB current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupMiniTCB(TBuffer &buf, void *obj) {
      ((::CupMiniTCB*)obj)->::CupMiniTCB::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupMiniTCB

//______________________________________________________________________________
void CupSADCS::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupSADCS.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupSADCS(void *p) {
      return  p ? new(p) ::CupSADCS : new ::CupSADCS;
   }
   static void *newArray_CupSADCS(Long_t nElements, void *p) {
      return p ? new(p) ::CupSADCS[nElements] : new ::CupSADCS[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupSADCS(void *p) {
      delete (static_cast<::CupSADCS*>(p));
   }
   static void deleteArray_CupSADCS(void *p) {
      delete [] (static_cast<::CupSADCS*>(p));
   }
   static void destruct_CupSADCS(void *p) {
      typedef ::CupSADCS current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupSADCS(TBuffer &buf, void *obj) {
      ((::CupSADCS*)obj)->::CupSADCS::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupSADCS

//______________________________________________________________________________
void CupSADCT::Streamer(TBuffer &R__b)
{
   // Stream an object of class CupSADCT.

   AbsADC::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_CupSADCT(void *p) {
      return  p ? new(p) ::CupSADCT : new ::CupSADCT;
   }
   static void *newArray_CupSADCT(Long_t nElements, void *p) {
      return p ? new(p) ::CupSADCT[nElements] : new ::CupSADCT[nElements];
   }
   // Wrapper around operator delete
   static void delete_CupSADCT(void *p) {
      delete (static_cast<::CupSADCT*>(p));
   }
   static void deleteArray_CupSADCT(void *p) {
      delete [] (static_cast<::CupSADCT*>(p));
   }
   static void destruct_CupSADCT(void *p) {
      typedef ::CupSADCT current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_CupSADCT(TBuffer &buf, void *obj) {
      ((::CupSADCT*)obj)->::CupSADCT::Streamer(buf);
   }
} // end of namespace ROOT for class ::CupSADCT

namespace {
  void TriggerDictionaryInitialization_libDAQSystem_Impl() {
    static const char* headers[] = {
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsADC.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsTCB.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AmoreADC.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCS.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCT.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCS.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCT.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupIADCT.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMADCS.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMiniTCB.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCS.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCT.hh",
"/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupTCB.hh",
nullptr
    };
    static const char* includePaths[] = {
"/home/frontend/Software/root/v6.28.04/install/include",
"/usr/include/libusb-1.0",
"/home/frontend/DAQ/DAQ_cup/build/include",
"/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQSystem",
"/home/frontend/Software/root/v6.28.04/install/include/",
"/home/frontend/DAQ/DAQ_cup/build/DAQSystem/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libDAQSystem dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsADC.hh")))  AbsADC;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsTCB.hh")))  AbsTCB;
class __attribute__((annotate("$clingAutoload$DAQSystem/CupTCB.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AmoreADC.hh")))  CupTCB;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AmoreADC.hh")))  AmoreADC;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCS.hh")))  CupFADCS;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCT.hh")))  CupFADCT;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCS.hh")))  CupGADCS;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCT.hh")))  CupGADCT;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupIADCT.hh")))  CupIADCT;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMADCS.hh")))  CupMADCS;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMiniTCB.hh")))  CupMiniTCB;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCS.hh")))  CupSADCS;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCT.hh")))  CupSADCT;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libDAQSystem dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AbsTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/AmoreADC.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupFADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupGADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupIADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupMiniTCB.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCS.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupSADCT.hh"
#include "/home/frontend/DAQ/DAQ_cup/build/include/DAQSystem/CupTCB.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AbsADC", payloadCode, "@",
"AbsTCB", payloadCode, "@",
"AmoreADC", payloadCode, "@",
"CupFADCS", payloadCode, "@",
"CupFADCT", payloadCode, "@",
"CupGADCS", payloadCode, "@",
"CupGADCT", payloadCode, "@",
"CupIADCT", payloadCode, "@",
"CupMADCS", payloadCode, "@",
"CupMiniTCB", payloadCode, "@",
"CupSADCS", payloadCode, "@",
"CupSADCT", payloadCode, "@",
"CupTCB", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libDAQSystem",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libDAQSystem_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libDAQSystem_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libDAQSystem() {
  TriggerDictionaryInitialization_libDAQSystem_Impl();
}
