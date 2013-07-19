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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLstringGVKd;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;


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
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_12;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D KmakeVKdMM59I (D class_, D Urest_, D name_);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_5;
D KEVKdMM27I (D string_1_, D string_2_);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_1;
D KLVKdMM14I (D string_1_, D string_2_);

/* Defined object declarations */

extern _KLsimple_methodGVKe KLVKdMM13;
D KLVKdMM13I (D symbol_1_, D symbol_2_);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KEVKdMM26;
D KEVKdMM26I (D symbol_1_, D symbol_2_);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_15;
extern _KLsimple_methodGVKe KasVKdMM53;
D KasVKdMM53I (D class_, D string_);
extern _KLsimple_methodGVKe KasVKdMM54;
D KasVKdMM54I (D class_, D symbol_);
extern _KLsimple_methodGVKe KasVKdMM55;
D KasVKdMM55I (D class_, D symbol_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_14;
static _KLsignatureAvaluesGVKi K15;
static _KLsimple_object_vectorGVKd_2 K16;
static _KLsingletonGVKd K17;
static _KLsignatureAvaluesGVKi K18;
static _KLsimple_object_vectorGVKd_2 K19;
static _KLsingletonGVKd K20;
static _KLsignatureAvaluesGVKi K21;
static _KLsimple_object_vectorGVKd_2 K22;
static _KLsimple_object_vectorGVKd_1 K23;
static _KLsingletonGVKd K24;
static _KLsignatureAvaluesGVKi K25;
static _KLsimple_object_vectorGVKd_2 K26;

/* Indirection variables */


/* Variables */


/* Objects */

_KLsimple_methodGVKe KLVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K25,
  &KLVKdMM13I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_1,
  &KLVKdMM13
};

_KLsimple_methodGVKe KEVKdMM26 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K25,
  &KEVKdMM26I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_5,
  &KEVKdMM26
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_14,
  &KasVKdMM53
};

_KLsimple_methodGVKe KasVKdMM53 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &KasVKdMM53I
};

_KLsimple_methodGVKe KasVKdMM54 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &KasVKdMM54I
};

_KLsimple_methodGVKe KasVKdMM55 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K15,
  &KasVKdMM55I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_12,
  &KasVKdMM55
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_13,
  &KasVKdMM54
};

static _KLsignatureAvaluesGVKi K15 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K16,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K17,
  &KLsymbolGVKd
};

static _KLsingletonGVKd K17 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstringGVKd
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K19,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K20,
  &KLsymbolGVKd
};

static _KLsingletonGVKd K20 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_stringGVKd
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K22,
  &K23
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K24,
  &KLstringGVKd
};

static _KLsimple_object_vectorGVKd_1 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLsingletonGVKd K24 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsymbolGVKd
};

static _KLsignatureAvaluesGVKi K25 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K26,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsymbolGVKd,
  &KLsymbolGVKd
};

/* Code */

D KLVKdMM13I (D symbol_1_, D symbol_2_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6;
  D T7_0;
  D T8;
  D T9_0;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T4 = SLOT_VALUE_INITD(symbol_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T3_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T6 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T8 = SLOT_VALUE_INITD(symbol_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T7_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T10 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:32
  T11_0 = KLVKdMM14I(T6, T10);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:30
  MV_SET_COUNT(1);
  return(T11_0);
}

D KEVKdMM26I (D symbol_1_, D symbol_2_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6;
  D T7_0;
  D T8;
  D T9_0;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T4 = SLOT_VALUE_INITD(symbol_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T3_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T6 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T8 = SLOT_VALUE_INITD(symbol_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T7_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T10 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:27
  T11_0 = KEVKdMM27I(T6, T10);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:25
  MV_SET_COUNT(1);
  return(T11_0);
}

D KasVKdMM53I (D class_, D string_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:12
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLbyte_stringGVKd, string_);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:12
  T4_0 = KmakeVKdMM59I(&KLsymbolGVKd, &KPempty_vectorVKi, T3);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM54I (D class_, D symbol_) {
  D T3_0;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:17
  T4 = SLOT_VALUE_INITD(symbol_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:17
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:15
  T3_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:15
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM55I (D class_, D symbol_) {
  D T3_0;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:22
  T4 = SLOT_VALUE_INITD(symbol_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:22
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:22
  T3_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/symbol.dylan:20
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_symbol_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_symbol_for_user () {
  return;
}


/* eof */
