// Do NOT change. Changes will be lost next time file is generated

#define R__DICTIONARY_FILENAME srcdIrootElibdict
#define R__NO_DEPRECATION

/*******************************************************************/
#include <stddef.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#define G__DICTIONARY
#include "RConfig.h"
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
#include "include/Cluster.hh"
#include "include/LadderConf.hh"
#include "include/EventUtils.hh"
#include "include/GenericEvent.hh"
#include "include/GenericEvent.hpp"

// Header files passed via #pragma extra_include

// The generated code does not explicitly qualify STL entities
namespace std {} using namespace std;

namespace ROOT {
   static TClass *pairlEintcOpairlEdoublecOdoublegRsPgR_Dictionary();
   static void pairlEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass*);
   static void *new_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p = 0);
   static void *newArray_pairlEintcOpairlEdoublecOdoublegRsPgR(Long_t size, void *p);
   static void delete_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void deleteArray_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p);
   static void destruct_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const pair<int,pair<double,double> >*)
   {
      pair<int,pair<double,double> > *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(pair<int,pair<double,double> >));
      static ::ROOT::TGenericClassInfo 
         instance("pair<int,pair<double,double> >", "string", 208,
                  typeid(pair<int,pair<double,double> >), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &pairlEintcOpairlEdoublecOdoublegRsPgR_Dictionary, isa_proxy, 4,
                  sizeof(pair<int,pair<double,double> >) );
      instance.SetNew(&new_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetNewArray(&newArray_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDelete(&delete_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDeleteArray(&deleteArray_pairlEintcOpairlEdoublecOdoublegRsPgR);
      instance.SetDestructor(&destruct_pairlEintcOpairlEdoublecOdoublegRsPgR);

      ::ROOT::AddClassAlternate("pair<int,pair<double,double> >","pair<int,std::pair<double,double> >");

      ::ROOT::AddClassAlternate("pair<int,pair<double,double> >","std::pair<int, std::pair<double, double> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const pair<int,pair<double,double> >*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *pairlEintcOpairlEdoublecOdoublegRsPgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const pair<int,pair<double,double> >*)0x0)->GetClass();
      pairlEintcOpairlEdoublecOdoublegRsPgR_TClassManip(theClass);
   return theClass;
   }

   static void pairlEintcOpairlEdoublecOdoublegRsPgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static void *new_LadderParams(void *p = 0);
   static void *newArray_LadderParams(Long_t size, void *p);
   static void delete_LadderParams(void *p);
   static void deleteArray_LadderParams(void *p);
   static void destruct_LadderParams(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LadderParams*)
   {
      ::LadderParams *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LadderParams >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LadderParams", ::LadderParams::Class_Version(), "include/LadderConf.hh", 11,
                  typeid(::LadderParams), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LadderParams::Dictionary, isa_proxy, 4,
                  sizeof(::LadderParams) );
      instance.SetNew(&new_LadderParams);
      instance.SetNewArray(&newArray_LadderParams);
      instance.SetDelete(&delete_LadderParams);
      instance.SetDeleteArray(&deleteArray_LadderParams);
      instance.SetDestructor(&destruct_LadderParams);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LadderParams*)
   {
      return GenerateInitInstanceLocal((::LadderParams*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LadderParams*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_LadderParamsMap(void *p = 0);
   static void *newArray_LadderParamsMap(Long_t size, void *p);
   static void delete_LadderParamsMap(void *p);
   static void deleteArray_LadderParamsMap(void *p);
   static void destruct_LadderParamsMap(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::LadderParamsMap*)
   {
      ::LadderParamsMap *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::LadderParamsMap >(0);
      static ::ROOT::TGenericClassInfo 
         instance("LadderParamsMap", ::LadderParamsMap::Class_Version(), "include/LadderConf.hh", 56,
                  typeid(::LadderParamsMap), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::LadderParamsMap::Dictionary, isa_proxy, 4,
                  sizeof(::LadderParamsMap) );
      instance.SetNew(&new_LadderParamsMap);
      instance.SetNewArray(&newArray_LadderParamsMap);
      instance.SetDelete(&delete_LadderParamsMap);
      instance.SetDeleteArray(&deleteArray_LadderParamsMap);
      instance.SetDestructor(&destruct_LadderParamsMap);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::LadderParamsMap*)
   {
      return GenerateInitInstanceLocal((::LadderParamsMap*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::LadderParamsMap*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static void *new_Cluster(void *p = 0);
   static void *newArray_Cluster(Long_t size, void *p);
   static void delete_Cluster(void *p);
   static void deleteArray_Cluster(void *p);
   static void destruct_Cluster(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::Cluster*)
   {
      ::Cluster *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::Cluster >(0);
      static ::ROOT::TGenericClassInfo 
         instance("Cluster", ::Cluster::Class_Version(), "include/Cluster.hh", 54,
                  typeid(::Cluster), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &::Cluster::Dictionary, isa_proxy, 4,
                  sizeof(::Cluster) );
      instance.SetNew(&new_Cluster);
      instance.SetNewArray(&newArray_Cluster);
      instance.SetDelete(&delete_Cluster);
      instance.SetDeleteArray(&deleteArray_Cluster);
      instance.SetDestructor(&destruct_Cluster);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::Cluster*)
   {
      return GenerateInitInstanceLocal((::Cluster*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::Cluster*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));
} // end of namespace ROOT

namespace ROOT {
   static TClass *DataVersion_Dictionary();
   static void DataVersion_TClassManip(TClass*);
   static void *new_DataVersion(void *p = 0);
   static void *newArray_DataVersion(Long_t size, void *p);
   static void delete_DataVersion(void *p);
   static void deleteArray_DataVersion(void *p);
   static void destruct_DataVersion(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::DataVersion*)
   {
      ::DataVersion *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(::DataVersion));
      static ::ROOT::TGenericClassInfo 
         instance("DataVersion", "include/RHClass.hh", 10,
                  typeid(::DataVersion), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &DataVersion_Dictionary, isa_proxy, 4,
                  sizeof(::DataVersion) );
      instance.SetNew(&new_DataVersion);
      instance.SetNewArray(&newArray_DataVersion);
      instance.SetDelete(&delete_DataVersion);
      instance.SetDeleteArray(&deleteArray_DataVersion);
      instance.SetDestructor(&destruct_DataVersion);
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::DataVersion*)
   {
      return GenerateInitInstanceLocal((::DataVersion*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::DataVersion*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *DataVersion_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::DataVersion*)0x0)->GetClass();
      DataVersion_TClassManip(theClass);
   return theClass;
   }

   static void DataVersion_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RHClasslE1cO24gR_Dictionary();
   static void RHClasslE1cO24gR_TClassManip(TClass*);
   static void *new_RHClasslE1cO24gR(void *p = 0);
   static void *newArray_RHClasslE1cO24gR(Long_t size, void *p);
   static void delete_RHClasslE1cO24gR(void *p);
   static void deleteArray_RHClasslE1cO24gR(void *p);
   static void destruct_RHClasslE1cO24gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RHClass<1,24>*)
   {
      ::RHClass<1,24> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RHClass<1,24> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RHClass<1,24>", ::RHClass<1,24>::Class_Version(), "include/RHClass.hh", 18,
                  typeid(::RHClass<1,24>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RHClasslE1cO24gR_Dictionary, isa_proxy, 4,
                  sizeof(::RHClass<1,24>) );
      instance.SetNew(&new_RHClasslE1cO24gR);
      instance.SetNewArray(&newArray_RHClasslE1cO24gR);
      instance.SetDelete(&delete_RHClasslE1cO24gR);
      instance.SetDeleteArray(&deleteArray_RHClasslE1cO24gR);
      instance.SetDestructor(&destruct_RHClasslE1cO24gR);

      ::ROOT::AddClassAlternate("RHClass<1,24>","RHClass<1ul, 24ul>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RHClass<1,24>*)
   {
      return GenerateInitInstanceLocal((::RHClass<1,24>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RHClass<1,24>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RHClasslE1cO24gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,24>*)0x0)->GetClass();
      RHClasslE1cO24gR_TClassManip(theClass);
   return theClass;
   }

   static void RHClasslE1cO24gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *RHClasslE1cO2gR_Dictionary();
   static void RHClasslE1cO2gR_TClassManip(TClass*);
   static void *new_RHClasslE1cO2gR(void *p = 0);
   static void *newArray_RHClasslE1cO2gR(Long_t size, void *p);
   static void delete_RHClasslE1cO2gR(void *p);
   static void deleteArray_RHClasslE1cO2gR(void *p);
   static void destruct_RHClasslE1cO2gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::RHClass<1,2>*)
   {
      ::RHClass<1,2> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::RHClass<1,2> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("RHClass<1,2>", ::RHClass<1,2>::Class_Version(), "include/RHClass.hh", 18,
                  typeid(::RHClass<1,2>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &RHClasslE1cO2gR_Dictionary, isa_proxy, 4,
                  sizeof(::RHClass<1,2>) );
      instance.SetNew(&new_RHClasslE1cO2gR);
      instance.SetNewArray(&newArray_RHClasslE1cO2gR);
      instance.SetDelete(&delete_RHClasslE1cO2gR);
      instance.SetDeleteArray(&deleteArray_RHClasslE1cO2gR);
      instance.SetDestructor(&destruct_RHClasslE1cO2gR);

      ::ROOT::AddClassAlternate("RHClass<1,2>","RHClass<1ul, 2ul>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::RHClass<1,2>*)
   {
      return GenerateInitInstanceLocal((::RHClass<1,2>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::RHClass<1,2>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *RHClasslE1cO2gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,2>*)0x0)->GetClass();
      RHClasslE1cO2gR_TClassManip(theClass);
   return theClass;
   }

   static void RHClasslE1cO2gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GenericEventlE1cO24cO64cO5cO10cO0gR_Dictionary();
   static void GenericEventlE1cO24cO64cO5cO10cO0gR_TClassManip(TClass*);
   static void *new_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p = 0);
   static void *newArray_GenericEventlE1cO24cO64cO5cO10cO0gR(Long_t size, void *p);
   static void delete_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p);
   static void deleteArray_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p);
   static void destruct_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GenericEvent<1,24,64,5,10,0>*)
   {
      ::GenericEvent<1,24,64,5,10,0> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GenericEvent<1,24,64,5,10,0> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GenericEvent<1,24,64,5,10,0>", ::GenericEvent<1,24,64,5,10,0>::Class_Version(), "include/GenericEvent.hh", 39,
                  typeid(::GenericEvent<1,24,64,5,10,0>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GenericEventlE1cO24cO64cO5cO10cO0gR_Dictionary, isa_proxy, 4,
                  sizeof(::GenericEvent<1,24,64,5,10,0>) );
      instance.SetNew(&new_GenericEventlE1cO24cO64cO5cO10cO0gR);
      instance.SetNewArray(&newArray_GenericEventlE1cO24cO64cO5cO10cO0gR);
      instance.SetDelete(&delete_GenericEventlE1cO24cO64cO5cO10cO0gR);
      instance.SetDeleteArray(&deleteArray_GenericEventlE1cO24cO64cO5cO10cO0gR);
      instance.SetDestructor(&destruct_GenericEventlE1cO24cO64cO5cO10cO0gR);

      ::ROOT::AddClassAlternate("GenericEvent<1,24,64,5,10,0>","GenericEvent<1ul, 24ul, 64ul, 5ul, 10ul, 0ul>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GenericEvent<1,24,64,5,10,0>*)
   {
      return GenerateInitInstanceLocal((::GenericEvent<1,24,64,5,10,0>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,5,10,0>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GenericEventlE1cO24cO64cO5cO10cO0gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,5,10,0>*)0x0)->GetClass();
      GenericEventlE1cO24cO64cO5cO10cO0gR_TClassManip(theClass);
   return theClass;
   }

   static void GenericEventlE1cO24cO64cO5cO10cO0gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GenericEventlE1cO2cO64cO8cO16cO0gR_Dictionary();
   static void GenericEventlE1cO2cO64cO8cO16cO0gR_TClassManip(TClass*);
   static void *new_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p = 0);
   static void *newArray_GenericEventlE1cO2cO64cO8cO16cO0gR(Long_t size, void *p);
   static void delete_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p);
   static void deleteArray_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p);
   static void destruct_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GenericEvent<1,2,64,8,16,0>*)
   {
      ::GenericEvent<1,2,64,8,16,0> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GenericEvent<1,2,64,8,16,0> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GenericEvent<1,2,64,8,16,0>", ::GenericEvent<1,2,64,8,16,0>::Class_Version(), "include/GenericEvent.hh", 39,
                  typeid(::GenericEvent<1,2,64,8,16,0>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GenericEventlE1cO2cO64cO8cO16cO0gR_Dictionary, isa_proxy, 4,
                  sizeof(::GenericEvent<1,2,64,8,16,0>) );
      instance.SetNew(&new_GenericEventlE1cO2cO64cO8cO16cO0gR);
      instance.SetNewArray(&newArray_GenericEventlE1cO2cO64cO8cO16cO0gR);
      instance.SetDelete(&delete_GenericEventlE1cO2cO64cO8cO16cO0gR);
      instance.SetDeleteArray(&deleteArray_GenericEventlE1cO2cO64cO8cO16cO0gR);
      instance.SetDestructor(&destruct_GenericEventlE1cO2cO64cO8cO16cO0gR);

      ::ROOT::AddClassAlternate("GenericEvent<1,2,64,8,16,0>","GenericEvent<1ul, 2ul, 64ul, 8ul, 16ul, 0ul>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GenericEvent<1,2,64,8,16,0>*)
   {
      return GenerateInitInstanceLocal((::GenericEvent<1,2,64,8,16,0>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GenericEvent<1,2,64,8,16,0>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GenericEventlE1cO2cO64cO8cO16cO0gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,2,64,8,16,0>*)0x0)->GetClass();
      GenericEventlE1cO2cO64cO8cO16cO0gR_TClassManip(theClass);
   return theClass;
   }

   static void GenericEventlE1cO2cO64cO8cO16cO0gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   static TClass *GenericEventlE1cO24cO64cO3cO16cO10gR_Dictionary();
   static void GenericEventlE1cO24cO64cO3cO16cO10gR_TClassManip(TClass*);
   static void *new_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p = 0);
   static void *newArray_GenericEventlE1cO24cO64cO3cO16cO10gR(Long_t size, void *p);
   static void delete_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p);
   static void deleteArray_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p);
   static void destruct_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const ::GenericEvent<1,24,64,3,16,10>*)
   {
      ::GenericEvent<1,24,64,3,16,10> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TInstrumentedIsAProxy< ::GenericEvent<1,24,64,3,16,10> >(0);
      static ::ROOT::TGenericClassInfo 
         instance("GenericEvent<1,24,64,3,16,10>", ::GenericEvent<1,24,64,3,16,10>::Class_Version(), "include/GenericEvent.hh", 39,
                  typeid(::GenericEvent<1,24,64,3,16,10>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &GenericEventlE1cO24cO64cO3cO16cO10gR_Dictionary, isa_proxy, 4,
                  sizeof(::GenericEvent<1,24,64,3,16,10>) );
      instance.SetNew(&new_GenericEventlE1cO24cO64cO3cO16cO10gR);
      instance.SetNewArray(&newArray_GenericEventlE1cO24cO64cO3cO16cO10gR);
      instance.SetDelete(&delete_GenericEventlE1cO24cO64cO3cO16cO10gR);
      instance.SetDeleteArray(&deleteArray_GenericEventlE1cO24cO64cO3cO16cO10gR);
      instance.SetDestructor(&destruct_GenericEventlE1cO24cO64cO3cO16cO10gR);

      ::ROOT::AddClassAlternate("GenericEvent<1,24,64,3,16,10>","GenericEvent<1ul, 24ul, 64ul, 3ul, 16ul, 10ul>");
      return &instance;
   }
   TGenericClassInfo *GenerateInitInstance(const ::GenericEvent<1,24,64,3,16,10>*)
   {
      return GenerateInitInstanceLocal((::GenericEvent<1,24,64,3,16,10>*)0);
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,3,16,10>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *GenericEventlE1cO24cO64cO3cO16cO10gR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,3,16,10>*)0x0)->GetClass();
      GenericEventlE1cO24cO64cO3cO16cO10gR_TClassManip(theClass);
   return theClass;
   }

   static void GenericEventlE1cO24cO64cO3cO16cO10gR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

//______________________________________________________________________________
atomic_TClass_ptr LadderParams::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LadderParams::Class_Name()
{
   return "LadderParams";
}

//______________________________________________________________________________
const char *LadderParams::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LadderParams*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LadderParams::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LadderParams*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LadderParams::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LadderParams*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LadderParams::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LadderParams*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr LadderParamsMap::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *LadderParamsMap::Class_Name()
{
   return "LadderParamsMap";
}

//______________________________________________________________________________
const char *LadderParamsMap::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LadderParamsMap*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int LadderParamsMap::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::LadderParamsMap*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *LadderParamsMap::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LadderParamsMap*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *LadderParamsMap::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::LadderParamsMap*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
atomic_TClass_ptr Cluster::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
const char *Cluster::Class_Name()
{
   return "Cluster";
}

//______________________________________________________________________________
const char *Cluster::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
int Cluster::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
TClass *Cluster::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
TClass *Cluster::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::Cluster*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RHClass<1,24>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RHClass<1,24>::Class_Name()
{
   return "RHClass<1,24>";
}

//______________________________________________________________________________
template <> const char *RHClass<1,24>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,24>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RHClass<1,24>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,24>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RHClass<1,24>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,24>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RHClass<1,24>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,24>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr RHClass<1,2>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *RHClass<1,2>::Class_Name()
{
   return "RHClass<1,2>";
}

//______________________________________________________________________________
template <> const char *RHClass<1,2>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,2>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int RHClass<1,2>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,2>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *RHClass<1,2>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,2>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *RHClass<1,2>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::RHClass<1,2>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr GenericEvent<1,24,64,5,10,0>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *GenericEvent<1,24,64,5,10,0>::Class_Name()
{
   return "GenericEvent<1,24,64,5,10,0>";
}

//______________________________________________________________________________
template <> const char *GenericEvent<1,24,64,5,10,0>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,5,10,0>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int GenericEvent<1,24,64,5,10,0>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,5,10,0>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *GenericEvent<1,24,64,5,10,0>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,5,10,0>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *GenericEvent<1,24,64,5,10,0>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,5,10,0>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr GenericEvent<1,2,64,8,16,0>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *GenericEvent<1,2,64,8,16,0>::Class_Name()
{
   return "GenericEvent<1,2,64,8,16,0>";
}

//______________________________________________________________________________
template <> const char *GenericEvent<1,2,64,8,16,0>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,2,64,8,16,0>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int GenericEvent<1,2,64,8,16,0>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,2,64,8,16,0>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *GenericEvent<1,2,64,8,16,0>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,2,64,8,16,0>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *GenericEvent<1,2,64,8,16,0>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,2,64,8,16,0>*)0x0)->GetClass(); }
   return fgIsA;
}

//______________________________________________________________________________
template <> atomic_TClass_ptr GenericEvent<1,24,64,3,16,10>::fgIsA(0);  // static to hold class pointer

//______________________________________________________________________________
template <> const char *GenericEvent<1,24,64,3,16,10>::Class_Name()
{
   return "GenericEvent<1,24,64,3,16,10>";
}

//______________________________________________________________________________
template <> const char *GenericEvent<1,24,64,3,16,10>::ImplFileName()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,3,16,10>*)0x0)->GetImplFileName();
}

//______________________________________________________________________________
template <> int GenericEvent<1,24,64,3,16,10>::ImplFileLine()
{
   return ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,3,16,10>*)0x0)->GetImplFileLine();
}

//______________________________________________________________________________
template <> TClass *GenericEvent<1,24,64,3,16,10>::Dictionary()
{
   fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,3,16,10>*)0x0)->GetClass();
   return fgIsA;
}

//______________________________________________________________________________
template <> TClass *GenericEvent<1,24,64,3,16,10>::Class()
{
   if (!fgIsA.load()) { R__LOCKGUARD(gInterpreterMutex); fgIsA = ::ROOT::GenerateInitInstanceLocal((const ::GenericEvent<1,24,64,3,16,10>*)0x0)->GetClass(); }
   return fgIsA;
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,pair<double,double> > : new pair<int,pair<double,double> >;
   }
   static void *newArray_pairlEintcOpairlEdoublecOdoublegRsPgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) pair<int,pair<double,double> >[nElements] : new pair<int,pair<double,double> >[nElements];
   }
   // Wrapper around operator delete
   static void delete_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete ((pair<int,pair<double,double> >*)p);
   }
   static void deleteArray_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      delete [] ((pair<int,pair<double,double> >*)p);
   }
   static void destruct_pairlEintcOpairlEdoublecOdoublegRsPgR(void *p) {
      typedef pair<int,pair<double,double> > current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class pair<int,pair<double,double> >

//______________________________________________________________________________
void LadderParams::Streamer(TBuffer &R__b)
{
   // Stream an object of class LadderParams.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LadderParams::Class(),this);
   } else {
      R__b.WriteClassBuffer(LadderParams::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LadderParams(void *p) {
      return  p ? new(p) ::LadderParams : new ::LadderParams;
   }
   static void *newArray_LadderParams(Long_t nElements, void *p) {
      return p ? new(p) ::LadderParams[nElements] : new ::LadderParams[nElements];
   }
   // Wrapper around operator delete
   static void delete_LadderParams(void *p) {
      delete ((::LadderParams*)p);
   }
   static void deleteArray_LadderParams(void *p) {
      delete [] ((::LadderParams*)p);
   }
   static void destruct_LadderParams(void *p) {
      typedef ::LadderParams current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LadderParams

//______________________________________________________________________________
void LadderParamsMap::Streamer(TBuffer &R__b)
{
   // Stream an object of class LadderParamsMap.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(LadderParamsMap::Class(),this);
   } else {
      R__b.WriteClassBuffer(LadderParamsMap::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_LadderParamsMap(void *p) {
      return  p ? new(p) ::LadderParamsMap : new ::LadderParamsMap;
   }
   static void *newArray_LadderParamsMap(Long_t nElements, void *p) {
      return p ? new(p) ::LadderParamsMap[nElements] : new ::LadderParamsMap[nElements];
   }
   // Wrapper around operator delete
   static void delete_LadderParamsMap(void *p) {
      delete ((::LadderParamsMap*)p);
   }
   static void deleteArray_LadderParamsMap(void *p) {
      delete [] ((::LadderParamsMap*)p);
   }
   static void destruct_LadderParamsMap(void *p) {
      typedef ::LadderParamsMap current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::LadderParamsMap

//______________________________________________________________________________
void Cluster::Streamer(TBuffer &R__b)
{
   // Stream an object of class Cluster.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(Cluster::Class(),this);
   } else {
      R__b.WriteClassBuffer(Cluster::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_Cluster(void *p) {
      return  p ? new(p) ::Cluster : new ::Cluster;
   }
   static void *newArray_Cluster(Long_t nElements, void *p) {
      return p ? new(p) ::Cluster[nElements] : new ::Cluster[nElements];
   }
   // Wrapper around operator delete
   static void delete_Cluster(void *p) {
      delete ((::Cluster*)p);
   }
   static void deleteArray_Cluster(void *p) {
      delete [] ((::Cluster*)p);
   }
   static void destruct_Cluster(void *p) {
      typedef ::Cluster current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::Cluster

namespace ROOT {
   // Wrappers around operator new
   static void *new_DataVersion(void *p) {
      return  p ? new(p) ::DataVersion : new ::DataVersion;
   }
   static void *newArray_DataVersion(Long_t nElements, void *p) {
      return p ? new(p) ::DataVersion[nElements] : new ::DataVersion[nElements];
   }
   // Wrapper around operator delete
   static void delete_DataVersion(void *p) {
      delete ((::DataVersion*)p);
   }
   static void deleteArray_DataVersion(void *p) {
      delete [] ((::DataVersion*)p);
   }
   static void destruct_DataVersion(void *p) {
      typedef ::DataVersion current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::DataVersion

//______________________________________________________________________________
template <> void RHClass<1,24>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RHClass<1,24>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RHClass<1,24>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RHClass<1,24>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RHClasslE1cO24gR(void *p) {
      return  p ? new(p) ::RHClass<1,24> : new ::RHClass<1,24>;
   }
   static void *newArray_RHClasslE1cO24gR(Long_t nElements, void *p) {
      return p ? new(p) ::RHClass<1,24>[nElements] : new ::RHClass<1,24>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RHClasslE1cO24gR(void *p) {
      delete ((::RHClass<1,24>*)p);
   }
   static void deleteArray_RHClasslE1cO24gR(void *p) {
      delete [] ((::RHClass<1,24>*)p);
   }
   static void destruct_RHClasslE1cO24gR(void *p) {
      typedef ::RHClass<1,24> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RHClass<1,24>

//______________________________________________________________________________
template <> void RHClass<1,2>::Streamer(TBuffer &R__b)
{
   // Stream an object of class RHClass<1,2>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(RHClass<1,2>::Class(),this);
   } else {
      R__b.WriteClassBuffer(RHClass<1,2>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_RHClasslE1cO2gR(void *p) {
      return  p ? new(p) ::RHClass<1,2> : new ::RHClass<1,2>;
   }
   static void *newArray_RHClasslE1cO2gR(Long_t nElements, void *p) {
      return p ? new(p) ::RHClass<1,2>[nElements] : new ::RHClass<1,2>[nElements];
   }
   // Wrapper around operator delete
   static void delete_RHClasslE1cO2gR(void *p) {
      delete ((::RHClass<1,2>*)p);
   }
   static void deleteArray_RHClasslE1cO2gR(void *p) {
      delete [] ((::RHClass<1,2>*)p);
   }
   static void destruct_RHClasslE1cO2gR(void *p) {
      typedef ::RHClass<1,2> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::RHClass<1,2>

//______________________________________________________________________________
template <> void GenericEvent<1,24,64,5,10,0>::Streamer(TBuffer &R__b)
{
   // Stream an object of class GenericEvent<1,24,64,5,10,0>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GenericEvent<1,24,64,5,10,0>::Class(),this);
   } else {
      R__b.WriteClassBuffer(GenericEvent<1,24,64,5,10,0>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p) {
      return  p ? new(p) ::GenericEvent<1,24,64,5,10,0> : new ::GenericEvent<1,24,64,5,10,0>;
   }
   static void *newArray_GenericEventlE1cO24cO64cO5cO10cO0gR(Long_t nElements, void *p) {
      return p ? new(p) ::GenericEvent<1,24,64,5,10,0>[nElements] : new ::GenericEvent<1,24,64,5,10,0>[nElements];
   }
   // Wrapper around operator delete
   static void delete_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p) {
      delete ((::GenericEvent<1,24,64,5,10,0>*)p);
   }
   static void deleteArray_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p) {
      delete [] ((::GenericEvent<1,24,64,5,10,0>*)p);
   }
   static void destruct_GenericEventlE1cO24cO64cO5cO10cO0gR(void *p) {
      typedef ::GenericEvent<1,24,64,5,10,0> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GenericEvent<1,24,64,5,10,0>

//______________________________________________________________________________
template <> void GenericEvent<1,2,64,8,16,0>::Streamer(TBuffer &R__b)
{
   // Stream an object of class GenericEvent<1,2,64,8,16,0>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GenericEvent<1,2,64,8,16,0>::Class(),this);
   } else {
      R__b.WriteClassBuffer(GenericEvent<1,2,64,8,16,0>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p) {
      return  p ? new(p) ::GenericEvent<1,2,64,8,16,0> : new ::GenericEvent<1,2,64,8,16,0>;
   }
   static void *newArray_GenericEventlE1cO2cO64cO8cO16cO0gR(Long_t nElements, void *p) {
      return p ? new(p) ::GenericEvent<1,2,64,8,16,0>[nElements] : new ::GenericEvent<1,2,64,8,16,0>[nElements];
   }
   // Wrapper around operator delete
   static void delete_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p) {
      delete ((::GenericEvent<1,2,64,8,16,0>*)p);
   }
   static void deleteArray_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p) {
      delete [] ((::GenericEvent<1,2,64,8,16,0>*)p);
   }
   static void destruct_GenericEventlE1cO2cO64cO8cO16cO0gR(void *p) {
      typedef ::GenericEvent<1,2,64,8,16,0> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GenericEvent<1,2,64,8,16,0>

//______________________________________________________________________________
template <> void GenericEvent<1,24,64,3,16,10>::Streamer(TBuffer &R__b)
{
   // Stream an object of class GenericEvent<1,24,64,3,16,10>.

   if (R__b.IsReading()) {
      R__b.ReadClassBuffer(GenericEvent<1,24,64,3,16,10>::Class(),this);
   } else {
      R__b.WriteClassBuffer(GenericEvent<1,24,64,3,16,10>::Class(),this);
   }
}

namespace ROOT {
   // Wrappers around operator new
   static void *new_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p) {
      return  p ? new(p) ::GenericEvent<1,24,64,3,16,10> : new ::GenericEvent<1,24,64,3,16,10>;
   }
   static void *newArray_GenericEventlE1cO24cO64cO3cO16cO10gR(Long_t nElements, void *p) {
      return p ? new(p) ::GenericEvent<1,24,64,3,16,10>[nElements] : new ::GenericEvent<1,24,64,3,16,10>[nElements];
   }
   // Wrapper around operator delete
   static void delete_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p) {
      delete ((::GenericEvent<1,24,64,3,16,10>*)p);
   }
   static void deleteArray_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p) {
      delete [] ((::GenericEvent<1,24,64,3,16,10>*)p);
   }
   static void destruct_GenericEventlE1cO24cO64cO3cO16cO10gR(void *p) {
      typedef ::GenericEvent<1,24,64,3,16,10> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class ::GenericEvent<1,24,64,3,16,10>

namespace ROOT {
   static TClass *vectorlEunsignedsPintgR_Dictionary();
   static void vectorlEunsignedsPintgR_TClassManip(TClass*);
   static void *new_vectorlEunsignedsPintgR(void *p = 0);
   static void *newArray_vectorlEunsignedsPintgR(Long_t size, void *p);
   static void delete_vectorlEunsignedsPintgR(void *p);
   static void deleteArray_vectorlEunsignedsPintgR(void *p);
   static void destruct_vectorlEunsignedsPintgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const vector<unsigned int>*)
   {
      vector<unsigned int> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(vector<unsigned int>));
      static ::ROOT::TGenericClassInfo 
         instance("vector<unsigned int>", -2, "vector", 216,
                  typeid(vector<unsigned int>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &vectorlEunsignedsPintgR_Dictionary, isa_proxy, 0,
                  sizeof(vector<unsigned int>) );
      instance.SetNew(&new_vectorlEunsignedsPintgR);
      instance.SetNewArray(&newArray_vectorlEunsignedsPintgR);
      instance.SetDelete(&delete_vectorlEunsignedsPintgR);
      instance.SetDeleteArray(&deleteArray_vectorlEunsignedsPintgR);
      instance.SetDestructor(&destruct_vectorlEunsignedsPintgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::Pushback< vector<unsigned int> >()));

      ::ROOT::AddClassAlternate("vector<unsigned int>","std::vector<unsigned int, std::allocator<unsigned int> >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const vector<unsigned int>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *vectorlEunsignedsPintgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const vector<unsigned int>*)0x0)->GetClass();
      vectorlEunsignedsPintgR_TClassManip(theClass);
   return theClass;
   }

   static void vectorlEunsignedsPintgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_vectorlEunsignedsPintgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int> : new vector<unsigned int>;
   }
   static void *newArray_vectorlEunsignedsPintgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) vector<unsigned int>[nElements] : new vector<unsigned int>[nElements];
   }
   // Wrapper around operator delete
   static void delete_vectorlEunsignedsPintgR(void *p) {
      delete ((vector<unsigned int>*)p);
   }
   static void deleteArray_vectorlEunsignedsPintgR(void *p) {
      delete [] ((vector<unsigned int>*)p);
   }
   static void destruct_vectorlEunsignedsPintgR(void *p) {
      typedef vector<unsigned int> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class vector<unsigned int>

namespace ROOT {
   static TClass *maplEintcOLadderParamsmUgR_Dictionary();
   static void maplEintcOLadderParamsmUgR_TClassManip(TClass*);
   static void *new_maplEintcOLadderParamsmUgR(void *p = 0);
   static void *newArray_maplEintcOLadderParamsmUgR(Long_t size, void *p);
   static void delete_maplEintcOLadderParamsmUgR(void *p);
   static void deleteArray_maplEintcOLadderParamsmUgR(void *p);
   static void destruct_maplEintcOLadderParamsmUgR(void *p);

   // Function generating the singleton type initializer
   static TGenericClassInfo *GenerateInitInstanceLocal(const map<int,LadderParams*>*)
   {
      map<int,LadderParams*> *ptr = 0;
      static ::TVirtualIsAProxy* isa_proxy = new ::TIsAProxy(typeid(map<int,LadderParams*>));
      static ::ROOT::TGenericClassInfo 
         instance("map<int,LadderParams*>", -2, "map", 99,
                  typeid(map<int,LadderParams*>), ::ROOT::Internal::DefineBehavior(ptr, ptr),
                  &maplEintcOLadderParamsmUgR_Dictionary, isa_proxy, 4,
                  sizeof(map<int,LadderParams*>) );
      instance.SetNew(&new_maplEintcOLadderParamsmUgR);
      instance.SetNewArray(&newArray_maplEintcOLadderParamsmUgR);
      instance.SetDelete(&delete_maplEintcOLadderParamsmUgR);
      instance.SetDeleteArray(&deleteArray_maplEintcOLadderParamsmUgR);
      instance.SetDestructor(&destruct_maplEintcOLadderParamsmUgR);
      instance.AdoptCollectionProxyInfo(TCollectionProxyInfo::Generate(TCollectionProxyInfo::MapInsert< map<int,LadderParams*> >()));

      ::ROOT::AddClassAlternate("map<int,LadderParams*>","std::map<int, LadderParams*, std::less<int>, std::allocator<std::pair<int const, LadderParams*> > >");
      return &instance;
   }
   // Static variable to force the class initialization
   static ::ROOT::TGenericClassInfo *_R__UNIQUE_DICT_(Init) = GenerateInitInstanceLocal((const map<int,LadderParams*>*)0x0); R__UseDummy(_R__UNIQUE_DICT_(Init));

   // Dictionary for non-ClassDef classes
   static TClass *maplEintcOLadderParamsmUgR_Dictionary() {
      TClass* theClass =::ROOT::GenerateInitInstanceLocal((const map<int,LadderParams*>*)0x0)->GetClass();
      maplEintcOLadderParamsmUgR_TClassManip(theClass);
   return theClass;
   }

   static void maplEintcOLadderParamsmUgR_TClassManip(TClass* ){
   }

} // end of namespace ROOT

namespace ROOT {
   // Wrappers around operator new
   static void *new_maplEintcOLadderParamsmUgR(void *p) {
      return  p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,LadderParams*> : new map<int,LadderParams*>;
   }
   static void *newArray_maplEintcOLadderParamsmUgR(Long_t nElements, void *p) {
      return p ? ::new((::ROOT::Internal::TOperatorNewHelper*)p) map<int,LadderParams*>[nElements] : new map<int,LadderParams*>[nElements];
   }
   // Wrapper around operator delete
   static void delete_maplEintcOLadderParamsmUgR(void *p) {
      delete ((map<int,LadderParams*>*)p);
   }
   static void deleteArray_maplEintcOLadderParamsmUgR(void *p) {
      delete [] ((map<int,LadderParams*>*)p);
   }
   static void destruct_maplEintcOLadderParamsmUgR(void *p) {
      typedef map<int,LadderParams*> current_t;
      ((current_t*)p)->~current_t();
   }
} // end of namespace ROOT for class map<int,LadderParams*>

namespace {
  void TriggerDictionaryInitialization_rootElibdict_Impl() {
    static const char* headers[] = {
"include/Cluster.hh",
"include/LadderConf.hh",
"include/EventUtils.hh",
"include/GenericEvent.hh",
"include/GenericEvent.hpp",
0
    };
    static const char* includePaths[] = {
"/home/alessio/root/include/",
"/home/alessio/ams/repo/btdaq/trunkBT/Decode/",
0
    };
    static const char* fwdDeclCode = R"DICTFWDDCLS(
#line 1 "rootElibdict dictionary forward declarations' payload"
#pragma clang diagnostic ignored "-Wkeyword-compat"
#pragma clang diagnostic ignored "-Wignored-attributes"
#pragma clang diagnostic ignored "-Wreturn-type-c-linkage"
extern int __Cling_AutoLoading_Map;
namespace std{template <typename _T1, typename _T2> struct __attribute__((annotate("$clingAutoload$bits/stl_pair.h")))  __attribute__((annotate("$clingAutoload$string")))  pair;
}
class __attribute__((annotate("$clingAutoload$include/Cluster.hh")))  LadderParams;
namespace std{template <typename _Tp = void> struct __attribute__((annotate("$clingAutoload$bits/stl_function.h")))  __attribute__((annotate("$clingAutoload$string")))  less;
}
namespace std{template <typename _Tp> class __attribute__((annotate("$clingAutoload$bits/allocator.h")))  __attribute__((annotate("$clingAutoload$string")))  allocator;
}
class __attribute__((annotate("$clingAutoload$include/Cluster.hh")))  LadderParamsMap;
class __attribute__((annotate("$clingAutoload$include/Cluster.hh")))  Cluster;
struct __attribute__((annotate("$clingAutoload$include/EventUtils.hh")))  DataVersion;
)DICTFWDDCLS";
    static const char* payloadCode = R"DICTPAYLOAD(
#line 1 "rootElibdict dictionary payload"


#define _BACKWARD_BACKWARD_WARNING_H
// Inline headers
#include "include/Cluster.hh"
#include "include/LadderConf.hh"
#include "include/EventUtils.hh"
#include "include/GenericEvent.hh"
#include "include/GenericEvent.hpp"

#undef  _BACKWARD_BACKWARD_WARNING_H
)DICTPAYLOAD";
    static const char* classesHeaders[] = {
"Cluster", payloadCode, "@",
"DataVersion", payloadCode, "@",
"GenericEvent<1,2,64,8,16,0>", payloadCode, "@",
"GenericEvent<1,24,64,3,16,10>", payloadCode, "@",
"GenericEvent<1,24,64,5,10,0>", payloadCode, "@",
"LadderParams", payloadCode, "@",
"LadderParamsMap", payloadCode, "@",
"RHClass<1,24>", payloadCode, "@",
"RHClass<1,2>", payloadCode, "@",
nullptr
};
    static bool isInitialized = false;
    if (!isInitialized) {
      TROOT::RegisterModule("rootElibdict",
        headers, includePaths, payloadCode, fwdDeclCode,
        TriggerDictionaryInitialization_rootElibdict_Impl, {}, classesHeaders, /*hasCxxModule*/false);
      isInitialized = true;
    }
  }
  static struct DictInit {
    DictInit() {
      TriggerDictionaryInitialization_rootElibdict_Impl();
    }
  } __TheDictionaryInitializer;
}
void TriggerDictionaryInitialization_rootElibdict() {
  TriggerDictionaryInitialization_rootElibdict_Impl();
}
