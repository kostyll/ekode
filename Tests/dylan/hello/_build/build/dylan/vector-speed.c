#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLclassGVKd;

#define  define__KLmm_wrapperGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D mm_wrapper_implementation_class_; \
    D mm_wrapper_subtype_mask_; \
    DWORD mm_wrapper_fixed_part_; \
    DWORD mm_wrapper_variable_part_; \
    D mm_wrapper_number_patterns_; \
    DWORD mm_wrapper_pattern_element_[nrepeated+1]; \
  } _KLmm_wrapperGVKi_##nrepeated;
define__KLmm_wrapperGVKi(1);
define__KLmm_wrapperGVKi(0);

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D library_major_version_;
  D library_minor_version_;
  D library_build_count_;
  D used_libraries_;
  D all_used_libraries_;
  D runtime_module_;
  D library_defined_generics_;
  D library_number_static_dispatches_;
  D library_number_dynamic_dispatches_;
} _KLlibraryGVKe;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(2);

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_copy_down_methodGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
  D incremental_gf_module_;
  D incremental_gf_domain_info_;
  D incremental_gf_method_libraries_;
  D incremental_gf_properties_;
} _KLincremental_generic_functionGVKe;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_7;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJtest_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_7;
D KaddXVKdMM1I (D, D);
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_12;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kobject_classVKdI (D);
D KreverseXVKdMM2I (D l_);
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJfill_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_7;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLsymbolGVKd KJcount_;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_9;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_17;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;

/* Defined object declarations */

extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM1;
D KremoveXVKdMM1I (D, D, D, D, D);
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_18;
extern _KLkeyword_copy_down_methodGVKi KmemberQVKdMM2;
D KmemberQVKdMM2I (D, D, D, D);
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_12;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM1;
D KremoveVKdMM1I (D, D, D, D, D);
extern _KLmethod_domainGVKe KaddVKdRD_dylanRD_8;
extern _KLsimple_copy_down_methodGVKi KaddVKdMM2;
D KaddVKdMM2I (D, D);
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM1;
D KchooseVKdMM1I (D, D);
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_13;
extern _KLkeyword_copy_down_methodGVKi Kadd_newXVKdMM2;
D Kadd_newXVKdMM2I (D, D, D, D);
extern _KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_8;
extern _KLkeyword_copy_down_methodGVKi Kadd_newVKdMM2;
D Kadd_newVKdMM2I (D, D, D, D);
extern _KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_8;
static _KLkeyword_signatureAvaluesGVKi K21;
static _KLsimple_object_vectorGVKd_2 K22;
static _KLsimple_object_vectorGVKd_2 K23;
static _KLsimple_object_vectorGVKd_1 K24;
static _KLsignatureAvaluesGVKi K25;
static _KLsimple_object_vectorGVKd_2 K26;
static _KLsignatureAvaluesGVKi K27;
static _KLunionGVKe K28;
static _KLsingletonGVKd K29;
static _KLkeyword_signatureAvaluesGVKi K30;
static _KLsimple_object_vectorGVKd_4 K31;
static _KLsimple_object_vectorGVKd_2 K32;
static _KLsimple_object_vectorGVKd_2 K33;
static _KLsingletonGVKd K34;
static _KLkeyword_signatureAvaluesGVKi K35;
static _KLsimple_object_vectorGVKd_2 K36;

/* Indirection variables */


/* Variables */


/* Objects */

_KLkeyword_copy_down_methodGVKi KremoveXVKdMM1 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K30,
  &key_mep_5,
  &KremoveXVKdMM1I,
  &K31
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_17,
  &KremoveXVKdMM1
};

_KLkeyword_copy_down_methodGVKi KmemberQVKdMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_4,
  &K35,
  &key_mep_4,
  &KmemberQVKdMM2I,
  &K22
};

_KLmethod_domainGVKe KmemberQVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_9,
  &KmemberQVKdMM2
};

_KLmethod_domainGVKe KremoveVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_11,
  &KremoveVKdMM1
};

_KLkeyword_copy_down_methodGVKi KremoveVKdMM1 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K30,
  &key_mep_5,
  &KremoveVKdMM1I,
  &K31
};

_KLmethod_domainGVKe KaddVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_7,
  &KaddVKdMM2
};

_KLsimple_copy_down_methodGVKi KaddVKdMM2 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K27,
  &KaddVKdMM2I
};

_KLsimple_copy_down_methodGVKi KchooseVKdMM1 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K25,
  &KchooseVKdMM1I
};

_KLmethod_domainGVKe KchooseVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_12,
  &KchooseVKdMM1
};

_KLkeyword_copy_down_methodGVKi Kadd_newXVKdMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_4,
  &K21,
  &key_mep_4,
  &Kadd_newXVKdMM2I,
  &K22
};

_KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_7,
  &Kadd_newXVKdMM2
};

_KLkeyword_copy_down_methodGVKi Kadd_newVKdMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_4,
  &K21,
  &key_mep_4,
  &Kadd_newVKdMM2I,
  &K22
};

_KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_7,
  &Kadd_newVKdMM2
};

static _KLkeyword_signatureAvaluesGVKi K21 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K23,
  &K24,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

static _KLsimple_object_vectorGVKd_2 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K24 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLsignatureAvaluesGVKi K25 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K26,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_object_vectorGVKd
};

static _KLsignatureAvaluesGVKi K27 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K23,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLunionGVKe K28 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K29,
  &KLintegerGVKd
};

static _KLsingletonGVKd K29 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K30 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K23,
  &K32,
  &K33,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_2 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &K28
};

static _KLsingletonGVKd K34 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

static _KLkeyword_signatureAvaluesGVKi K35 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K36,
  &K24,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_object_vectorGVKd
};

/* Code */

D KremoveXVKdMM1I (D sequence_, D value_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/vector-speed.dylan:25
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  primitive_type_check(count_, &K28);
  countF7 = count_;
  T8_0 = KremoveVKdMM1I(sequence_, value_, &KPempty_vectorVKi, testF6, countF7);
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmemberQVKdMM2I (D value_, D collection_, D Urest_, D test_) {
  DADDR T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12;
  D mm_wrapper_;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  DWORD T25;
  D T26;
  DWORD indexF27T, indexF27;
  D T28;
  D T29;
  D Utmp_;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  D T37;
  DWORD indexF38T, indexF38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;

  // /opt/opendylan-2013.1/sources/dylan/vector-speed.dylan:30
  T39 = SLOT_VALUE_INITD(collection_, 0);
  T23 = primitive_cast_integer_as_raw(T39);
  T11 = primitive_idQ(test_,&KEEVKd);
  if (T11 != &KPfalseVKi) {
    T5 = primitive_cast_pointer_as_raw(value_);
    T6 = primitive_machine_word_logand(T5,3);
    T7 = primitive_machine_word_equalQ(T6,0);
    if (T7 != &KPfalseVKi) {
      T12 = primitive_element(value_,0,0);
      mm_wrapper_ = T12;
      T14 = SLOT_VALUE_INITD(mm_wrapper_, 1);
      T15 = primitive_cast_integer_as_raw(T14);
      T16 = primitive_machine_word_logbitQ(2,T15);
      T8 = T16;
    } else {
      T8 = &KPfalseVKi;
    }
    T17 = primitive_not(T8);
    T9 = T17;
  } else {
    T9 = &KPfalseVKi;
  }
  if (T9 != &KPfalseVKi) {
    indexF27T = 1;
  L0: ;
      indexF27 = indexF27T;
      T24 = primitive_machine_word_equalQ(indexF27,T23);
      if (T24 != &KPfalseVKi) {
        T18 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T22 = T18;
      } else {
        T40 = REPEATED_D_SLOT_VALUE_TAGGED(collection_, 1, indexF27);
        T19 = primitive_idQ(T40,value_);
        if (T19 != &KPfalseVKi) {
          T20 = &KPtrueVKi;
          MV_SET_ELT(0, &KPtrueVKi);
          MV_SET_COUNT(1);
          T21 = T20;
        } else {
          T25 = primitive_machine_word_add_signal_overflow(indexF27,4);
          indexF27T = T25;
          goto L0;
          T21 = T26;
        }
        T22 = T21;
      }
    T10_0 = T22;
  } else {
    indexF38T = 1;
  L1: ;
      indexF38 = indexF38T;
      T41 = primitive_machine_word_equalQ(indexF38,T23);
      if (T41 != &KPfalseVKi) {
        T33 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T34 = T33;
      } else {
        T28 = test_;
        T42 = REPEATED_D_SLOT_VALUE_TAGGED(collection_, 1, indexF38);
        T29 = CALL2(T28, value_, T42);
        if (T29 != &KPfalseVKi) {
          Utmp_ = &KPtrueVKi;
        } else {
          Utmp_ = &KPfalseVKi;
        }
        if (Utmp_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch.dylan:170
          T43 = Utmp_;
          T35 = T43;
          T31 = T35;
          MV_SET_ELT(0, T35);
          MV_SET_COUNT(1);
          T32 = T31;
        } else {
          T36 = primitive_machine_word_add_signal_overflow(indexF38,4);
          indexF38T = T36;
          goto L1;
          T32 = T37;
        }
        T34 = T32;
      }
    T10_0 = T34;
  }
  MV_SET_COUNT(1);
  return(T10_0);
}

D KremoveVKdMM1I (D sequence_, D value_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  DWORD T8T, T8;
  D T9;
  D T10;
  DWORD T11T, T11;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D new_sequence_;
  D T17;
  D T18;
  D T19;
  D changedQ_;
  D T21;
  D countF22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34_0;
  D T35;
  DWORD T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  DWORD T41;
  D T42;
  D T43;
  DWORD T44;
  D T45_0;
  D T46;
  D T47;

  // /opt/opendylan-2013.1/sources/dylan/vector-speed.dylan:20
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  primitive_type_check(count_, &K28);
  countF7 = count_;
  new_sequence_ = &KPempty_listVKi;
  changedQ_ = &KPfalseVKi;
  if (countF7 != &KPfalseVKi) {
    T47 = countF7;
    T25 = T47;
    countF22 = T25;
    T35 = SLOT_VALUE_INITD(sequence_, 0);
    T36 = primitive_cast_integer_as_raw(T35);
    T8T = 1;
  L0: ;
      T8 = T8T;
      T37 = primitive_machine_word_equalQ(T8,T36);
      if (T37 == &KPfalseVKi) {
        T38 = REPEATED_D_SLOT_VALUE_TAGGED(sequence_, 1, T8);
        T24 = countF22;
        T26 = primitive_cast_integer_as_raw(T24);
        T27 = primitive_machine_word_less_thanQ(1,T26);
        if (T27 != &KPfalseVKi) {
          T9 = CALL2(testF6, T38, value_);
          T10 = T9;
        } else {
          T10 = &KPfalseVKi;
        }
        if (T10 != &KPfalseVKi) {
          T23 = countF22;
          T28 = primitive_cast_integer_as_raw(T23);
          T29 = primitive_machine_word_subtract_signal_overflow(T28,4);
          T30 = primitive_cast_raw_as_integer(T29);
          countF22 = T30;
          changedQ_ = &KPtrueVKi;
        } else {
          T19 = new_sequence_;
          T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T38, T31, 0);
          SLOT_VALUE_SETTER(T19, T31, 1);
          new_sequence_ = T31;
        }
        T39 = primitive_machine_word_add_signal_overflow(T8,4);
        T8T = T39;
        goto L0;
      }
  } else {
    T40 = SLOT_VALUE_INITD(sequence_, 0);
    T41 = primitive_cast_integer_as_raw(T40);
    T11T = 1;
  L1: ;
      T11 = T11T;
      T42 = primitive_machine_word_equalQ(T11,T41);
      if (T42 == &KPfalseVKi) {
        T43 = REPEATED_D_SLOT_VALUE_TAGGED(sequence_, 1, T11);
        T12 = CALL2(testF6, T43, value_);
        if (T12 != &KPfalseVKi) {
          changedQ_ = &KPtrueVKi;
        } else {
          T18 = new_sequence_;
          T32 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T43, T32, 0);
          SLOT_VALUE_SETTER(T18, T32, 1);
          new_sequence_ = T32;
        }
        T44 = primitive_machine_word_add_signal_overflow(T11,4);
        T11T = T44;
        goto L1;
      }
  }
  T21 = changedQ_;
  if (T21 != &KPfalseVKi) {
    T45_0 = Kobject_classVKdI(sequence_);
    T46 = T45_0;
    T17 = new_sequence_;
    T33 = KreverseXVKdMM2I(T17);
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T13_0 = CONGRUENT_CALL2(T46, T33);
    T34_0 = T13_0;
    T15_0 = T34_0;
  } else {
    T14_0 = sequence_;
    T15_0 = T14_0;
  }
  MV_SET_COUNT(1);
  return(T15_0);
}

D KaddVKdMM2I (D vector_, D object_) {
  D T3;
  D new_vector_;
  DWORD i_T, i_;
  D T6_0;
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T8;
  D T9;
  D T10_0;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/vector-speed.dylan:34
  T10_0 = Kobject_classVKdI(vector_);
  T11 = T10_0;
  T12 = SLOT_VALUE_INITD(vector_, 0);
  T13 = primitive_cast_integer_as_raw(T12);
  T14 = primitive_machine_word_add_signal_overflow(T13,4);
  T15 = primitive_cast_raw_as_integer(T14);
  T7.vector_element_[0] = &KJsize_;
  T7.vector_element_[1] = T15;
  T7.vector_element_[2] = &KJfill_;
  T7.vector_element_[3] = object_;
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(T11, &T7);
  new_vector_ = T3;
  i_T = 1;
L0: ;
    i_ = i_T;
    T9 = primitive_cast_raw_as_integer(i_);
    T16 = primitive_machine_word_less_thanQ(i_,T13);
    if (T16 != &KPfalseVKi) {
      T17 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, i_);
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T17, new_vector_, T9);
      T8 = primitive_machine_word_add_signal_overflow(i_,4);
      i_T = T8;
      goto L0;
    }
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
  CONGRUENT_CALL3(object_, new_vector_, T12);
  T6_0 = new_vector_;
  MV_SET_COUNT(1);
  return(T6_0);
}

D KchooseVKdMM1I (D test_, D sequence_) {
  D result_T, result_;
  DWORD T4T, T4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/vector-speed.dylan:12
  T11 = SLOT_VALUE_INITD(sequence_, 0);
  T12 = primitive_cast_integer_as_raw(T11);
  result_T = &KPempty_listVKi;
  T4T = 1;
L0: ;
    result_ = result_T;
    T4 = T4T;
    T13 = primitive_machine_word_equalQ(T4,T12);
    if (T13 == &KPfalseVKi) {
      T14 = REPEATED_D_SLOT_VALUE_TAGGED(sequence_, 1, T4);
      T5 = CALL1(test_, T14);
      if (T5 != &KPfalseVKi) {
        T9 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        SLOT_VALUE_SETTER(T14, T9, 0);
        SLOT_VALUE_SETTER(result_, T9, 1);
        T6 = T9;
      } else {
        T6 = result_;
      }
      T15 = primitive_machine_word_add_signal_overflow(T4,4);
      result_T = T6;
      T4T = T15;
      goto L0;
    }
    T16_0 = Kobject_classVKdI(sequence_);
    T17 = T16_0;
    T10 = KreverseXVKdMM2I(result_);
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T7_0 = CONGRUENT_CALL2(T17, T10);
  T8_0 = T7_0;
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kadd_newXVKdMM2I (D vector_, D object_, D Urest_, D test_) {
  D testF5;
  D T6_0;
  D T7_0;
  DWORD T8T, T8;
  D result_T, result_;
  D T10;
  D T11;
  D T12_0;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  DWORD T17;
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/vector-speed.dylan:43
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  T13 = SLOT_VALUE_INITD(vector_, 0);
  T14 = primitive_cast_integer_as_raw(T13);
  T8T = 1;
  result_T = &KPfalseVKi;
L0: ;
    T8 = T8T;
    result_ = result_T;
    T15 = primitive_machine_word_equalQ(T8,T14);
    if (T15 == &KPfalseVKi) {
      T16 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T8);
      if (result_ == &KPfalseVKi) {
        T17 = primitive_machine_word_add_signal_overflow(T8,4);
        T10 = CALL2(testF5, T16, object_);
        T11 = T10;
        T8T = T17;
        result_T = T11;
        goto L0;
      }
    }
  if (result_ != &KPfalseVKi) {
    T6_0 = vector_;
    T7_0 = T6_0;
  } else {
    T18_0 = KaddXVKdMM1I(vector_, object_);
    T12_0 = T18_0;
    T7_0 = T12_0;
  }
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kadd_newVKdMM2I (D vector_, D object_, D Urest_, D test_) {
  D testF5;
  D T6_0;
  D T7_0;
  DWORD T8T, T8;
  D result_T, result_;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/vector-speed.dylan:38
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  T12 = SLOT_VALUE_INITD(vector_, 0);
  T13 = primitive_cast_integer_as_raw(T12);
  T8T = 1;
  result_T = &KPfalseVKi;
L0: ;
    T8 = T8T;
    result_ = result_T;
    T14 = primitive_machine_word_equalQ(T8,T13);
    if (T14 == &KPfalseVKi) {
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T8);
      if (result_ == &KPfalseVKi) {
        T16 = primitive_machine_word_add_signal_overflow(T8,4);
        T10 = CALL2(testF5, T15, object_);
        T11 = T10;
        T8T = T16;
        result_T = T11;
        goto L0;
      }
    }
  if (result_ != &KPfalseVKi) {
    T6_0 = vector_;
    T7_0 = T6_0;
  } else {
    T17_0 = KaddVKdMM2I(vector_, object_);
    T7_0 = T17_0;
  }
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_vector_speed_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_vector_speed_for_user () {
  return;
}


/* eof */
