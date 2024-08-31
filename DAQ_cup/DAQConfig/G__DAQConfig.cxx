// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME G__DAQConfig
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
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConfList.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AmoreADCConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/DAQConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/IADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/MADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/SADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/SADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/STRGConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/TCBConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/TriggerLookupTable.hh"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static void delete_AbsConf(void *p);
   static void deleteArray_AbsConf(void *p);
   static void destruct_AbsConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AbsConf*)
   {
      ::AbsConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AbsConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AbsConf", ::AbsConf::Class_Version(), "DAQConfig/AbsConf.hh", 22,
                  typeid(::AbsConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AbsConf::Dictionary, isa_proxy, 4,
                  sizeof(::AbsConf) );
      instance.SetDelete(&delete_AbsConf);
      instance.SetDeleteArray(&deleteArray_AbsConf);
      instance.SetDestructor(&destruct_AbsConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AbsConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::AbsConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AbsConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AbsConfList(void *p = nullptr);
   static void *newArray_AbsConfList(Long_t size, void *p);
   static void delete_AbsConfList(void *p);
   static void deleteArray_AbsConfList(void *p);
   static void destruct_AbsConfList(void *p);
   static Long64_t merge_AbsConfList(void *obj, TCollection *coll,TFileMergeInfo *info);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AbsConfList*)
   {
      ::AbsConfList *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AbsConfList >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AbsConfList", ::AbsConfList::Class_Version(), "DAQConfig/AbsConfList.hh", 24,
                  typeid(::AbsConfList), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AbsConfList::Dictionary, isa_proxy, 4,
                  sizeof(::AbsConfList) );
      instance.SetNew(&new_AbsConfList);
      instance.SetNewArray(&newArray_AbsConfList);
      instance.SetDelete(&delete_AbsConfList);
      instance.SetDeleteArray(&deleteArray_AbsConfList);
      instance.SetDestructor(&destruct_AbsConfList);
      instance.SetMerge(&merge_AbsConfList);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AbsConfList*)
   {
      return GenerateInitInstanceLocal(static_cast<::AbsConfList*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AbsConfList*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_AmoreADCConf(void *p = nullptr);
   static void *newArray_AmoreADCConf(Long_t size, void *p);
   static void delete_AmoreADCConf(void *p);
   static void deleteArray_AmoreADCConf(void *p);
   static void destruct_AmoreADCConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::AmoreADCConf*)
   {
      ::AmoreADCConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::AmoreADCConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("AmoreADCConf", ::AmoreADCConf::Class_Version(), "DAQConfig/AmoreADCConf.hh", 22,
                  typeid(::AmoreADCConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::AmoreADCConf::Dictionary, isa_proxy, 4,
                  sizeof(::AmoreADCConf) );
      instance.SetNew(&new_AmoreADCConf);
      instance.SetNewArray(&newArray_AmoreADCConf);
      instance.SetDelete(&delete_AmoreADCConf);
      instance.SetDeleteArray(&deleteArray_AmoreADCConf);
      instance.SetDestructor(&destruct_AmoreADCConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::AmoreADCConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::AmoreADCConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::AmoreADCConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_DAQConf(void *p = nullptr);
   static void *newArray_DAQConf(Long_t size, void *p);
   static void delete_DAQConf(void *p);
   static void deleteArray_DAQConf(void *p);
   static void destruct_DAQConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DAQConf*)
   {
      ::DAQConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::DAQConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("DAQConf", ::DAQConf::Class_Version(), "DAQConfig/DAQConf.hh", 10,
                  typeid(::DAQConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::DAQConf::Dictionary, isa_proxy, 4,
                  sizeof(::DAQConf) );
      instance.SetNew(&new_DAQConf);
      instance.SetNewArray(&newArray_DAQConf);
      instance.SetDelete(&delete_DAQConf);
      instance.SetDeleteArray(&deleteArray_DAQConf);
      instance.SetDestructor(&destruct_DAQConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DAQConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::DAQConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::DAQConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FADCTConf(void *p = nullptr);
   static void *newArray_FADCTConf(Long_t size, void *p);
   static void delete_FADCTConf(void *p);
   static void deleteArray_FADCTConf(void *p);
   static void destruct_FADCTConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FADCTConf*)
   {
      ::FADCTConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FADCTConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FADCTConf", ::FADCTConf::Class_Version(), "DAQConfig/FADCTConf.hh", 22,
                  typeid(::FADCTConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FADCTConf::Dictionary, isa_proxy, 4,
                  sizeof(::FADCTConf) );
      instance.SetNew(&new_FADCTConf);
      instance.SetNewArray(&newArray_FADCTConf);
      instance.SetDelete(&delete_FADCTConf);
      instance.SetDeleteArray(&deleteArray_FADCTConf);
      instance.SetDestructor(&destruct_FADCTConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FADCTConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::FADCTConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FADCTConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_FADCSConf(void *p = nullptr);
   static void *newArray_FADCSConf(Long_t size, void *p);
   static void delete_FADCSConf(void *p);
   static void deleteArray_FADCSConf(void *p);
   static void destruct_FADCSConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::FADCSConf*)
   {
      ::FADCSConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::FADCSConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("FADCSConf", ::FADCSConf::Class_Version(), "DAQConfig/FADCSConf.hh", 22,
                  typeid(::FADCSConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::FADCSConf::Dictionary, isa_proxy, 4,
                  sizeof(::FADCSConf) );
      instance.SetNew(&new_FADCSConf);
      instance.SetNewArray(&newArray_FADCSConf);
      instance.SetDelete(&delete_FADCSConf);
      instance.SetDeleteArray(&deleteArray_FADCSConf);
      instance.SetDestructor(&destruct_FADCSConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::FADCSConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::FADCSConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::FADCSConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GADCTConf(void *p = nullptr);
   static void *newArray_GADCTConf(Long_t size, void *p);
   static void delete_GADCTConf(void *p);
   static void deleteArray_GADCTConf(void *p);
   static void destruct_GADCTConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GADCTConf*)
   {
      ::GADCTConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GADCTConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("GADCTConf", ::GADCTConf::Class_Version(), "DAQConfig/GADCTConf.hh", 22,
                  typeid(::GADCTConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GADCTConf::Dictionary, isa_proxy, 4,
                  sizeof(::GADCTConf) );
      instance.SetNew(&new_GADCTConf);
      instance.SetNewArray(&newArray_GADCTConf);
      instance.SetDelete(&delete_GADCTConf);
      instance.SetDeleteArray(&deleteArray_GADCTConf);
      instance.SetDestructor(&destruct_GADCTConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GADCTConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::GADCTConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::GADCTConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_GADCSConf(void *p = nullptr);
   static void *newArray_GADCSConf(Long_t size, void *p);
   static void delete_GADCSConf(void *p);
   static void deleteArray_GADCSConf(void *p);
   static void destruct_GADCSConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GADCSConf*)
   {
      ::GADCSConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GADCSConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("GADCSConf", ::GADCSConf::Class_Version(), "DAQConfig/GADCSConf.hh", 22,
                  typeid(::GADCSConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::GADCSConf::Dictionary, isa_proxy, 4,
                  sizeof(::GADCSConf) );
      instance.SetNew(&new_GADCSConf);
      instance.SetNewArray(&newArray_GADCSConf);
      instance.SetDelete(&delete_GADCSConf);
      instance.SetDeleteArray(&deleteArray_GADCSConf);
      instance.SetDestructor(&destruct_GADCSConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GADCSConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::GADCSConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::GADCSConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_IADCTConf(void *p = nullptr);
   static void *newArray_IADCTConf(Long_t size, void *p);
   static void delete_IADCTConf(void *p);
   static void deleteArray_IADCTConf(void *p);
   static void destruct_IADCTConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::IADCTConf*)
   {
      ::IADCTConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::IADCTConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("IADCTConf", ::IADCTConf::Class_Version(), "DAQConfig/IADCTConf.hh", 22,
                  typeid(::IADCTConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::IADCTConf::Dictionary, isa_proxy, 4,
                  sizeof(::IADCTConf) );
      instance.SetNew(&new_IADCTConf);
      instance.SetNewArray(&newArray_IADCTConf);
      instance.SetDelete(&delete_IADCTConf);
      instance.SetDeleteArray(&deleteArray_IADCTConf);
      instance.SetDestructor(&destruct_IADCTConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::IADCTConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::IADCTConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::IADCTConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_MADCSConf(void *p = nullptr);
   static void *newArray_MADCSConf(Long_t size, void *p);
   static void delete_MADCSConf(void *p);
   static void deleteArray_MADCSConf(void *p);
   static void destruct_MADCSConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::MADCSConf*)
   {
      ::MADCSConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::MADCSConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("MADCSConf", ::MADCSConf::Class_Version(), "DAQConfig/MADCSConf.hh", 22,
                  typeid(::MADCSConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::MADCSConf::Dictionary, isa_proxy, 4,
                  sizeof(::MADCSConf) );
      instance.SetNew(&new_MADCSConf);
      instance.SetNewArray(&newArray_MADCSConf);
      instance.SetDelete(&delete_MADCSConf);
      instance.SetDeleteArray(&deleteArray_MADCSConf);
      instance.SetDestructor(&destruct_MADCSConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::MADCSConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::MADCSConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::MADCSConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SADCTConf(void *p = nullptr);
   static void *newArray_SADCTConf(Long_t size, void *p);
   static void delete_SADCTConf(void *p);
   static void deleteArray_SADCTConf(void *p);
   static void destruct_SADCTConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SADCTConf*)
   {
      ::SADCTConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SADCTConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SADCTConf", ::SADCTConf::Class_Version(), "DAQConfig/SADCTConf.hh", 22,
                  typeid(::SADCTConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SADCTConf::Dictionary, isa_proxy, 4,
                  sizeof(::SADCTConf) );
      instance.SetNew(&new_SADCTConf);
      instance.SetNewArray(&newArray_SADCTConf);
      instance.SetDelete(&delete_SADCTConf);
      instance.SetDeleteArray(&deleteArray_SADCTConf);
      instance.SetDestructor(&destruct_SADCTConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SADCTConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::SADCTConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SADCTConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_SADCSConf(void *p = nullptr);
   static void *newArray_SADCSConf(Long_t size, void *p);
   static void delete_SADCSConf(void *p);
   static void deleteArray_SADCSConf(void *p);
   static void destruct_SADCSConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::SADCSConf*)
   {
      ::SADCSConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::SADCSConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("SADCSConf", ::SADCSConf::Class_Version(), "DAQConfig/SADCSConf.hh", 22,
                  typeid(::SADCSConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::SADCSConf::Dictionary, isa_proxy, 4,
                  sizeof(::SADCSConf) );
      instance.SetNew(&new_SADCSConf);
      instance.SetNewArray(&newArray_SADCSConf);
      instance.SetDelete(&delete_SADCSConf);
      instance.SetDeleteArray(&deleteArray_SADCSConf);
      instance.SetDestructor(&destruct_SADCSConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::SADCSConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::SADCSConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::SADCSConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_STRGConf(void *p = nullptr);
   static void *newArray_STRGConf(Long_t size, void *p);
   static void delete_STRGConf(void *p);
   static void deleteArray_STRGConf(void *p);
   static void destruct_STRGConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::STRGConf*)
   {
      ::STRGConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::STRGConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("STRGConf", ::STRGConf::Class_Version(), "DAQConfig/STRGConf.hh", 24,
                  typeid(::STRGConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::STRGConf::Dictionary, isa_proxy, 4,
                  sizeof(::STRGConf) );
      instance.SetNew(&new_STRGConf);
      instance.SetNewArray(&newArray_STRGConf);
      instance.SetDelete(&delete_STRGConf);
      instance.SetDeleteArray(&deleteArray_STRGConf);
      instance.SetDestructor(&destruct_STRGConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::STRGConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::STRGConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::STRGConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TCBConf(void *p = nullptr);
   static void *newArray_TCBConf(Long_t size, void *p);
   static void delete_TCBConf(void *p);
   static void deleteArray_TCBConf(void *p);
   static void destruct_TCBConf(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TCBConf*)
   {
      ::TCBConf *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TCBConf >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TCBConf", ::TCBConf::Class_Version(), "DAQConfig/TCBConf.hh", 21,
                  typeid(::TCBConf), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TCBConf::Dictionary, isa_proxy, 4,
                  sizeof(::TCBConf) );
      instance.SetNew(&new_TCBConf);
      instance.SetNewArray(&newArray_TCBConf);
      instance.SetDelete(&delete_TCBConf);
      instance.SetDeleteArray(&deleteArray_TCBConf);
      instance.SetDestructor(&destruct_TCBConf);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TCBConf*)
   {
      return GenerateInitInstanceLocal(static_cast<::TCBConf*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TCBConf*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_TriggerLookupTable(void *p = nullptr);
   static void *newArray_TriggerLookupTable(Long_t size, void *p);
   static void delete_TriggerLookupTable(void *p);
   static void deleteArray_TriggerLookupTable(void *p);
   static void destruct_TriggerLookupTable(void *p);
   static void streamer_TriggerLookupTable(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::TriggerLookupTable*)
   {
      ::TriggerLookupTable *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::TriggerLookupTable >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("TriggerLookupTable", ::TriggerLookupTable::Class_Version(), "DAQConfig/TriggerLookupTable.hh", 7,
                  typeid(::TriggerLookupTable), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::TriggerLookupTable::Dictionary, isa_proxy, 16,
                  sizeof(::TriggerLookupTable) );
      instance.SetNew(&new_TriggerLookupTable);
      instance.SetNewArray(&newArray_TriggerLookupTable);
      instance.SetDelete(&delete_TriggerLookupTable);
      instance.SetDeleteArray(&deleteArray_TriggerLookupTable);
      instance.SetDestructor(&destruct_TriggerLookupTable);
      instance.SetStreamerFunc(&streamer_TriggerLookupTable);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::TriggerLookupTable*)
   {
      return GenerateInitInstanceLocal(static_cast<::TriggerLookupTable*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::TriggerLookupTable*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_RunConfig(void *p = nullptr);
   static void *newArray_RunConfig(Long_t size, void *p);
   static void delete_RunConfig(void *p);
   static void deleteArray_RunConfig(void *p);
   static void destruct_RunConfig(void *p);
   static void streamer_RunConfig(TBuffer &buf, void *obj);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RunConfig*)
   {
      ::RunConfig *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RunConfig >(nullptr);
      static ::ROOT::TGenericClassInfo 
         instance("RunConfig", ::RunConfig::Class_Version(), "DAQConfig/RunConfig.hh", 43,
                  typeid(::RunConfig), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::RunConfig::Dictionary, isa_proxy, 16,
                  sizeof(::RunConfig) );
      instance.SetNew(&new_RunConfig);
      instance.SetNewArray(&newArray_RunConfig);
      instance.SetDelete(&delete_RunConfig);
      instance.SetDeleteArray(&deleteArray_RunConfig);
      instance.SetDestructor(&destruct_RunConfig);
      instance.SetStreamerFunc(&streamer_RunConfig);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RunConfig*)
   {
      return GenerateInitInstanceLocal(static_cast<::RunConfig*>(nullptr));
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const ::RunConfig*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr AbsConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsConf::Class_Name()
{
   return "AbsConf";
}

//______________________________________________________________________________
const char *AbsConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AbsConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AbsConfList::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AbsConfList::Class_Name()
{
   return "AbsConfList";
}

//______________________________________________________________________________
const char *AbsConfList::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsConfList*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AbsConfList::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AbsConfList*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AbsConfList::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsConfList*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AbsConfList::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AbsConfList*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr AmoreADCConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *AmoreADCConf::Class_Name()
{
   return "AmoreADCConf";
}

//______________________________________________________________________________
const char *AmoreADCConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AmoreADCConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int AmoreADCConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::AmoreADCConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *AmoreADCConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AmoreADCConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *AmoreADCConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::AmoreADCConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr DAQConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *DAQConf::Class_Name()
{
   return "DAQConf";
}

//______________________________________________________________________________
const char *DAQConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAQConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int DAQConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::DAQConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *DAQConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAQConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *DAQConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::DAQConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FADCTConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FADCTConf::Class_Name()
{
   return "FADCTConf";
}

//______________________________________________________________________________
const char *FADCTConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCTConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FADCTConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCTConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FADCTConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCTConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FADCTConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCTConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr FADCSConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *FADCSConf::Class_Name()
{
   return "FADCSConf";
}

//______________________________________________________________________________
const char *FADCSConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCSConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int FADCSConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::FADCSConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *FADCSConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCSConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *FADCSConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::FADCSConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GADCTConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GADCTConf::Class_Name()
{
   return "GADCTConf";
}

//______________________________________________________________________________
const char *GADCTConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GADCTConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GADCTConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GADCTConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GADCTConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GADCTConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GADCTConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GADCTConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr GADCSConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *GADCSConf::Class_Name()
{
   return "GADCSConf";
}

//______________________________________________________________________________
const char *GADCSConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GADCSConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int GADCSConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GADCSConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *GADCSConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GADCSConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *GADCSConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GADCSConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr IADCTConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *IADCTConf::Class_Name()
{
   return "IADCTConf";
}

//______________________________________________________________________________
const char *IADCTConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IADCTConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int IADCTConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::IADCTConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *IADCTConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IADCTConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *IADCTConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::IADCTConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr MADCSConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *MADCSConf::Class_Name()
{
   return "MADCSConf";
}

//______________________________________________________________________________
const char *MADCSConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MADCSConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int MADCSConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::MADCSConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *MADCSConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MADCSConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *MADCSConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::MADCSConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SADCTConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SADCTConf::Class_Name()
{
   return "SADCTConf";
}

//______________________________________________________________________________
const char *SADCTConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SADCTConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SADCTConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SADCTConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SADCTConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SADCTConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SADCTConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SADCTConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr SADCSConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *SADCSConf::Class_Name()
{
   return "SADCSConf";
}

//______________________________________________________________________________
const char *SADCSConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SADCSConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int SADCSConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::SADCSConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *SADCSConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SADCSConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *SADCSConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::SADCSConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr STRGConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *STRGConf::Class_Name()
{
   return "STRGConf";
}

//______________________________________________________________________________
const char *STRGConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::STRGConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int STRGConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::STRGConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *STRGConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::STRGConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *STRGConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::STRGConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TCBConf::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TCBConf::Class_Name()
{
   return "TCBConf";
}

//______________________________________________________________________________
const char *TCBConf::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCBConf*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TCBConf::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TCBConf*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TCBConf::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCBConf*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TCBConf::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TCBConf*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr TriggerLookupTable::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *TriggerLookupTable::Class_Name()
{
   return "TriggerLookupTable";
}

//______________________________________________________________________________
const char *TriggerLookupTable::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerLookupTable*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int TriggerLookupTable::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::TriggerLookupTable*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *TriggerLookupTable::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerLookupTable*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *TriggerLookupTable::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::TriggerLookupTable*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr RunConfig::fgIsA(nullptr);  // static to hold class pointer

//______________________________________________________________________________
const char *RunConfig::Class_Name()
{
   return "RunConfig";
}

//______________________________________________________________________________
const char *RunConfig::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RunConfig*)nullptr)->GetImplFileName();
}

//______________________________________________________________________________
int RunConfig::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RunConfig*)nullptr)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *RunConfig::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RunConfig*)nullptr)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *RunConfig::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RunConfig*)nullptr)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
void AbsConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class AbsConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AbsConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(AbsConf::Class(),this);
   }
}

namespace ROOT {
   // Wrapper around operator delete
   static void delete_AbsConf(void *p) {
      delete (static_cast<::AbsConf*>(p));
   }
   static void deleteArray_AbsConf(void *p) {
      delete [] (static_cast<::AbsConf*>(p));
   }
   static void destruct_AbsConf(void *p) {
      typedef ::AbsConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AbsConf

//______________________________________________________________________________
void AbsConfList::Streamer(TBuffer &R__b)
{
   // Stream an object of class AbsConfList.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AbsConfList::Class(),this);
   } else {
      R__b.WriteClassBuffer(AbsConfList::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AbsConfList(void *p) {
      return  p ? new(p) ::AbsConfList : new ::AbsConfList;
   }
   static void *newArray_AbsConfList(Long_t nElements, void *p) {
      return p ? new(p) ::AbsConfList[nElements] : new ::AbsConfList[nElements];
   }
   // Wrapper around operator delete
   static void delete_AbsConfList(void *p) {
      delete (static_cast<::AbsConfList*>(p));
   }
   static void deleteArray_AbsConfList(void *p) {
      delete [] (static_cast<::AbsConfList*>(p));
   }
   static void destruct_AbsConfList(void *p) {
      typedef ::AbsConfList current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around the merge function.
   static Long64_t  merge_AbsConfList(void *obj,TCollection *coll,TFileMergeInfo *) {
      return ((::AbsConfList*)obj)->Merge(coll);
   }
} // end of namespace ROOT for class ::AbsConfList

//______________________________________________________________________________
void AmoreADCConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class AmoreADCConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(AmoreADCConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(AmoreADCConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_AmoreADCConf(void *p) {
      return  p ? new(p) ::AmoreADCConf : new ::AmoreADCConf;
   }
   static void *newArray_AmoreADCConf(Long_t nElements, void *p) {
      return p ? new(p) ::AmoreADCConf[nElements] : new ::AmoreADCConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_AmoreADCConf(void *p) {
      delete (static_cast<::AmoreADCConf*>(p));
   }
   static void deleteArray_AmoreADCConf(void *p) {
      delete [] (static_cast<::AmoreADCConf*>(p));
   }
   static void destruct_AmoreADCConf(void *p) {
      typedef ::AmoreADCConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::AmoreADCConf

//______________________________________________________________________________
void DAQConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class DAQConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(DAQConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(DAQConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_DAQConf(void *p) {
      return  p ? new(p) ::DAQConf : new ::DAQConf;
   }
   static void *newArray_DAQConf(Long_t nElements, void *p) {
      return p ? new(p) ::DAQConf[nElements] : new ::DAQConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_DAQConf(void *p) {
      delete (static_cast<::DAQConf*>(p));
   }
   static void deleteArray_DAQConf(void *p) {
      delete [] (static_cast<::DAQConf*>(p));
   }
   static void destruct_DAQConf(void *p) {
      typedef ::DAQConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::DAQConf

//______________________________________________________________________________
void FADCTConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class FADCTConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FADCTConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(FADCTConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FADCTConf(void *p) {
      return  p ? new(p) ::FADCTConf : new ::FADCTConf;
   }
   static void *newArray_FADCTConf(Long_t nElements, void *p) {
      return p ? new(p) ::FADCTConf[nElements] : new ::FADCTConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_FADCTConf(void *p) {
      delete (static_cast<::FADCTConf*>(p));
   }
   static void deleteArray_FADCTConf(void *p) {
      delete [] (static_cast<::FADCTConf*>(p));
   }
   static void destruct_FADCTConf(void *p) {
      typedef ::FADCTConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FADCTConf

//______________________________________________________________________________
void FADCSConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class FADCSConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(FADCSConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(FADCSConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_FADCSConf(void *p) {
      return  p ? new(p) ::FADCSConf : new ::FADCSConf;
   }
   static void *newArray_FADCSConf(Long_t nElements, void *p) {
      return p ? new(p) ::FADCSConf[nElements] : new ::FADCSConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_FADCSConf(void *p) {
      delete (static_cast<::FADCSConf*>(p));
   }
   static void deleteArray_FADCSConf(void *p) {
      delete [] (static_cast<::FADCSConf*>(p));
   }
   static void destruct_FADCSConf(void *p) {
      typedef ::FADCSConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::FADCSConf

//______________________________________________________________________________
void GADCTConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class GADCTConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GADCTConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(GADCTConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GADCTConf(void *p) {
      return  p ? new(p) ::GADCTConf : new ::GADCTConf;
   }
   static void *newArray_GADCTConf(Long_t nElements, void *p) {
      return p ? new(p) ::GADCTConf[nElements] : new ::GADCTConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_GADCTConf(void *p) {
      delete (static_cast<::GADCTConf*>(p));
   }
   static void deleteArray_GADCTConf(void *p) {
      delete [] (static_cast<::GADCTConf*>(p));
   }
   static void destruct_GADCTConf(void *p) {
      typedef ::GADCTConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::GADCTConf

//______________________________________________________________________________
void GADCSConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class GADCSConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GADCSConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(GADCSConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GADCSConf(void *p) {
      return  p ? new(p) ::GADCSConf : new ::GADCSConf;
   }
   static void *newArray_GADCSConf(Long_t nElements, void *p) {
      return p ? new(p) ::GADCSConf[nElements] : new ::GADCSConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_GADCSConf(void *p) {
      delete (static_cast<::GADCSConf*>(p));
   }
   static void deleteArray_GADCSConf(void *p) {
      delete [] (static_cast<::GADCSConf*>(p));
   }
   static void destruct_GADCSConf(void *p) {
      typedef ::GADCSConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::GADCSConf

//______________________________________________________________________________
void IADCTConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class IADCTConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(IADCTConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(IADCTConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_IADCTConf(void *p) {
      return  p ? new(p) ::IADCTConf : new ::IADCTConf;
   }
   static void *newArray_IADCTConf(Long_t nElements, void *p) {
      return p ? new(p) ::IADCTConf[nElements] : new ::IADCTConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_IADCTConf(void *p) {
      delete (static_cast<::IADCTConf*>(p));
   }
   static void deleteArray_IADCTConf(void *p) {
      delete [] (static_cast<::IADCTConf*>(p));
   }
   static void destruct_IADCTConf(void *p) {
      typedef ::IADCTConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::IADCTConf

//______________________________________________________________________________
void MADCSConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class MADCSConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(MADCSConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(MADCSConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_MADCSConf(void *p) {
      return  p ? new(p) ::MADCSConf : new ::MADCSConf;
   }
   static void *newArray_MADCSConf(Long_t nElements, void *p) {
      return p ? new(p) ::MADCSConf[nElements] : new ::MADCSConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_MADCSConf(void *p) {
      delete (static_cast<::MADCSConf*>(p));
   }
   static void deleteArray_MADCSConf(void *p) {
      delete [] (static_cast<::MADCSConf*>(p));
   }
   static void destruct_MADCSConf(void *p) {
      typedef ::MADCSConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::MADCSConf

//______________________________________________________________________________
void SADCTConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class SADCTConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SADCTConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(SADCTConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SADCTConf(void *p) {
      return  p ? new(p) ::SADCTConf : new ::SADCTConf;
   }
   static void *newArray_SADCTConf(Long_t nElements, void *p) {
      return p ? new(p) ::SADCTConf[nElements] : new ::SADCTConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_SADCTConf(void *p) {
      delete (static_cast<::SADCTConf*>(p));
   }
   static void deleteArray_SADCTConf(void *p) {
      delete [] (static_cast<::SADCTConf*>(p));
   }
   static void destruct_SADCTConf(void *p) {
      typedef ::SADCTConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SADCTConf

//______________________________________________________________________________
void SADCSConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class SADCSConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(SADCSConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(SADCSConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_SADCSConf(void *p) {
      return  p ? new(p) ::SADCSConf : new ::SADCSConf;
   }
   static void *newArray_SADCSConf(Long_t nElements, void *p) {
      return p ? new(p) ::SADCSConf[nElements] : new ::SADCSConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_SADCSConf(void *p) {
      delete (static_cast<::SADCSConf*>(p));
   }
   static void deleteArray_SADCSConf(void *p) {
      delete [] (static_cast<::SADCSConf*>(p));
   }
   static void destruct_SADCSConf(void *p) {
      typedef ::SADCSConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::SADCSConf

//______________________________________________________________________________
void STRGConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class STRGConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(STRGConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(STRGConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_STRGConf(void *p) {
      return  p ? new(p) ::STRGConf : new ::STRGConf;
   }
   static void *newArray_STRGConf(Long_t nElements, void *p) {
      return p ? new(p) ::STRGConf[nElements] : new ::STRGConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_STRGConf(void *p) {
      delete (static_cast<::STRGConf*>(p));
   }
   static void deleteArray_STRGConf(void *p) {
      delete [] (static_cast<::STRGConf*>(p));
   }
   static void destruct_STRGConf(void *p) {
      typedef ::STRGConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::STRGConf

//______________________________________________________________________________
void TCBConf::Streamer(TBuffer &R__b)
{
   // Stream an object of class TCBConf.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(TCBConf::Class(),this);
   } else {
      R__b.WriteClassBuffer(TCBConf::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TCBConf(void *p) {
      return  p ? new(p) ::TCBConf : new ::TCBConf;
   }
   static void *newArray_TCBConf(Long_t nElements, void *p) {
      return p ? new(p) ::TCBConf[nElements] : new ::TCBConf[nElements];
   }
   // Wrapper around operator delete
   static void delete_TCBConf(void *p) {
      delete (static_cast<::TCBConf*>(p));
   }
   static void deleteArray_TCBConf(void *p) {
      delete [] (static_cast<::TCBConf*>(p));
   }
   static void destruct_TCBConf(void *p) {
      typedef ::TCBConf current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class ::TCBConf

//______________________________________________________________________________
void TriggerLookupTable::Streamer(TBuffer &R__b)
{
   // Stream an object of class TriggerLookupTable.

   TObject::Streamer(R__b);
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_TriggerLookupTable(void *p) {
      return  p ? new(p) ::TriggerLookupTable : new ::TriggerLookupTable;
   }
   static void *newArray_TriggerLookupTable(Long_t nElements, void *p) {
      return p ? new(p) ::TriggerLookupTable[nElements] : new ::TriggerLookupTable[nElements];
   }
   // Wrapper around operator delete
   static void delete_TriggerLookupTable(void *p) {
      delete (static_cast<::TriggerLookupTable*>(p));
   }
   static void deleteArray_TriggerLookupTable(void *p) {
      delete [] (static_cast<::TriggerLookupTable*>(p));
   }
   static void destruct_TriggerLookupTable(void *p) {
      typedef ::TriggerLookupTable current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_TriggerLookupTable(TBuffer &buf, void *obj) {
      ((::TriggerLookupTable*)obj)->::TriggerLookupTable::Streamer(buf);
   }
} // end of namespace ROOT for class ::TriggerLookupTable

//______________________________________________________________________________
void RunConfig::Streamer(TBuffer &R__b)
{
   // Stream an object of class RunConfig.

   UInt_t R__s, R__c;
   if (R__b.IsReading()) {
      Version_t R__v = R__b.ReadVersion(&R__s, &R__c); if (R__v) { }
      TObject::Streamer(R__b);
      R__b >> fDAQMode;
      void *ptr_fExperiment = (void*)&fExperiment;
      R__b >> *reinterpret_cast<Int_t*>(ptr_fExperiment);
      R__b >> fConfigs;
      R__b.CheckByteCount(R__s, R__c, RunConfig::IsA());
   } else {
      R__c = R__b.WriteVersion(RunConfig::IsA(), kTRUE);
      TObject::Streamer(R__b);
      R__b << fDAQMode;
      R__b << (Int_t)fExperiment;
      R__b << fConfigs;
      R__b.SetByteCount(R__c, kTRUE);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RunConfig(void *p) {
      return  p ? new(p) ::RunConfig : new ::RunConfig;
   }
   static void *newArray_RunConfig(Long_t nElements, void *p) {
      return p ? new(p) ::RunConfig[nElements] : new ::RunConfig[nElements];
   }
   // Wrapper around operator delete
   static void delete_RunConfig(void *p) {
      delete (static_cast<::RunConfig*>(p));
   }
   static void deleteArray_RunConfig(void *p) {
      delete [] (static_cast<::RunConfig*>(p));
   }
   static void destruct_RunConfig(void *p) {
      typedef ::RunConfig current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
   // Wrapper around a custom streamer member function.
   static void streamer_RunConfig(TBuffer &buf, void *obj) {
      ((::RunConfig*)obj)->::RunConfig::Streamer(buf);
   }
} // end of namespace ROOT for class ::RunConfig

namespace ROOT {
   static TClass *vectorlEtuplelEintcOstringcOstringcOintgRsPgR_Dictionary();
   static void vectorlEtuplelEintcOstringcOstringcOintgRsPgR_TClassManip(TClass*);
   static void *new_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p = nullptr);
   static void *newArray_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(Long_t size, void *p);
   static void delete_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p);
   static void deleteArray_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p);
   static void destruct_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<tuple<int,string,string,int> >*)
   {
      vector<tuple<int,string,string,int> > *ptr = nullptr;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<tuple<int,string,string,int> >));
      static ::ROOT::TGenericClassInfo 
         instance("vector<tuple<int,string,string,int> >", -2, "vector", 389,
                  typeid(vector<tuple<int,string,string,int> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEtuplelEintcOstringcOstringcOintgRsPgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<tuple<int,string,string,int> >) );
      instance.SetNew(&new_vectorlEtuplelEintcOstringcOstringcOintgRsPgR);
      instance.SetNewArray(&newArray_vectorlEtuplelEintcOstringcOstringcOintgRsPgR);
      instance.SetDelete(&delete_vectorlEtuplelEintcOstringcOstringcOintgRsPgR);
      instance.SetDeleteArray(&deleteArray_vectorlEtuplelEintcOstringcOstringcOintgRsPgR);
      instance.SetDestructor(&destruct_vectorlEtuplelEintcOstringcOstringcOintgRsPgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<tuple<int,string,string,int> > >()));

      instance.AdoptAlternate(::ROOT::AddClassAlternate("vector<tuple<int,string,string,int> >","std::vector<std::tuple<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int>, std::allocator<std::tuple<int, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, std::__cxx11::basic_string<char, std::char_traits<char>, std::allocator<char> >, int> > >"));
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal(static_cast<const vector<tuple<int,string,string,int> >*>(nullptr)); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEtuplelEintcOstringcOstringcOintgRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal(static_cast<const vector<tuple<int,string,string,int> >*>(nullptr))->GetClass();
      vectorlEtuplelEintcOstringcOstringcOintgRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEtuplelEintcOstringcOstringcOintgRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p) {
      return  p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<int,string,string,int> > : new vector<tuple<int,string,string,int> >;
   }
   static void *newArray_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(Long_t nElements, void *p) {
      return p ? ::new(static_cast<::ROOT::Internal::TOperatorNewHelper*>(p)) vector<tuple<int,string,string,int> >[nElements] : new vector<tuple<int,string,string,int> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p) {
      delete (static_cast<vector<tuple<int,string,string,int> >*>(p));
   }
   static void deleteArray_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p) {
      delete [] (static_cast<vector<tuple<int,string,string,int> >*>(p));
   }
   static void destruct_vectorlEtuplelEintcOstringcOstringcOintgRsPgR(void *p) {
      typedef vector<tuple<int,string,string,int> > current_t;
      (static_cast<current_t*>(p))->~current_t();
   }
} // end of namespace ROOT for class vector<tuple<int,string,string,int> >

namespace {
  void TriggerDictionaryInitialization_libDAQConfig_Impl() {
    static const char* headers[] = {
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConfList.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AmoreADCConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/DAQConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCSConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCTConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCSConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCTConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/IADCTConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/MADCSConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/SADCSConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/SADCTConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/STRGConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/TCBConf.hh",
"/home/frontend/DAQ/DAQ_cup/include/DAQConfig/TriggerLookupTable.hh",
nullptr
    };
    static const char* includePaths[] = {
"/usr/include/root",
"/usr/include/libusb-1.0",
"/home/frontend/DAQ/DAQ_cup/include",
"/home/frontend/DAQ/DAQ_cup/CUPDAQ/DAQConfig",
"/usr/include/root",
"/home/frontend/DAQ/DAQ_cup/DAQConfig/",
nullptr
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "libDAQConfig dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConf.hh")))  AbsConf;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConfList.hh")))  AbsConfList;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AmoreADCConf.hh")))  AmoreADCConf;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/DAQConf.hh")))  DAQConf;
class __attribute__((annotate("$clingAutoload$DAQConfig/FADCTConf.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCSConf.hh")))  FADCTConf;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCSConf.hh")))  FADCSConf;
class __attribute__((annotate("$clingAutoload$DAQConfig/GADCTConf.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCSConf.hh")))  GADCTConf;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCSConf.hh")))  GADCSConf;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/IADCTConf.hh")))  IADCTConf;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/MADCSConf.hh")))  MADCSConf;
class __attribute__((annotate("$clingAutoload$DAQConfig/SADCTConf.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh")))  SADCTConf;
class __attribute__((annotate("$clingAutoload$DAQConfig/SADCSConf.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh")))  SADCSConf;
class __attribute__((annotate("$clingAutoload$DAQConfig/STRGConf.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh")))  STRGConf;
class __attribute__((annotate("$clingAutoload$DAQConfig/TCBConf.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh")))  TCBConf;
class __attribute__((annotate("$clingAutoload$DAQConfig/TriggerLookupTable.hh")))  __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh")))  TriggerLookupTable;
class __attribute__((annotate("$clingAutoload$/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh")))  RunConfig;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "libDAQConfig dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AbsConfList.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/AmoreADCConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/DAQConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/FADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/GADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/IADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/MADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/RunConfig.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/SADCSConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/SADCTConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/STRGConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/TCBConf.hh"
#include "/home/frontend/DAQ/DAQ_cup/include/DAQConfig/TriggerLookupTable.hh"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"AbsConf", payloadCode, "@",
"AbsConfList", payloadCode, "@",
"AmoreADCConf", payloadCode, "@",
"DAQConf", payloadCode, "@",
"FADCSConf", payloadCode, "@",
"FADCTConf", payloadCode, "@",
"GADCSConf", payloadCode, "@",
"GADCTConf", payloadCode, "@",
"IADCTConf", payloadCode, "@",
"MADCSConf", payloadCode, "@",
"RunConfig", payloadCode, "@",
"SADCSConf", payloadCode, "@",
"SADCTConf", payloadCode, "@",
"STRGConf", payloadCode, "@",
"TCBConf", payloadCode, "@",
"TriggerLookupTable", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("libDAQConfig",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_libDAQConfig_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_libDAQConfig_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_libDAQConfig() {
  TriggerDictionaryInitialization_libDAQConfig_Impl();
}
