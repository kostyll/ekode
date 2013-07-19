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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(1);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(54);

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLmethodGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLlambdaGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
D Kinitialize_signature_completenessVKiI (D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM5;
D Kmap_congruency_classesVKiMM5I (D, D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM6;
D Kreduce_incomplete_classesVKiMM6I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM3;
D Ktype_completeQVKeMM3I (D);
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM2;
D Krecompute_type_completeXVKiMM2I (D);
extern _KLkeyword_methodGVKe KmakeVKdMM48;
D KmakeVKdMM48I (D, D);
static _KLbyte_stringGVKd_54 K11;
static _KLkeyword_signatureGVKe K12;
static _KLsimple_object_vectorGVKd_1 K13;
static _KLsingletonGVKd K14;
static _KLsignatureAvaluesGVKi K15;
static _KLsimple_object_vectorGVKd_1 K16;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K17;
static _KLsignatureGVKe K18;
static _KLsimple_object_vectorGVKd_3 K19;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K20;
static _KLsignatureGVKe K21;
static _KLsimple_object_vectorGVKd_2 K22;
extern _KLsimple_methodGVKe Kfunction_nextQVKe;
D Kfunction_nextQVKeI (D f_);

/* Indirection variables */


/* Variables */

D function_nextQVKe = &Kfunction_nextQVKe;

/* Objects */

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &Kmap_congruency_classesVKiMM5I
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KmakeVKdMM48
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K18,
  &Kreduce_incomplete_classesVKiMM6I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Ktype_completeQVKeMM3I
};

_KLsimple_methodGVKe Krecompute_type_completeXVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Krecompute_type_completeXVKiMM2I
};

_KLkeyword_methodGVKe KmakeVKdMM48 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K12,
  &key_mep_2,
  &KmakeVKdMM48I,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_54 K11 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Cannot instantiate %=, it is not an instantiable type."
};

static _KLkeyword_signatureGVKe K12 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &K13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K13 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K14
};

static _KLsingletonGVKd K14 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmethodGVKd
};

static _KLsignatureAvaluesGVKi K15 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K16,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlambdaGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K17 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsignatureGVKe K18 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K19
};

static _KLsimple_object_vectorGVKd_3 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLlambdaGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K20 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K21 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K22
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLlambdaGVKe
};

_KLsimple_methodGVKe Kfunction_nextQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Kfunction_nextQVKeI
};

/* Code */

D Kmap_congruency_classesVKiMM5I (D f_, D l_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/method.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:43
  T3 = SLOT_VALUE_INITD(l_, 1);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:43
  ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K20, 2);
  T4 = ENGINE_NODE_CALL2(&K20, f_, T3);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:42
  MV_SET_COUNT(0);
  return(T4);
}

D Kreduce_incomplete_classesVKiMM6I (D f_, D l_, D ans_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/method.dylan:47
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:49
  T4 = SLOT_VALUE_INITD(l_, 1);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:49
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K17, 3);
  T5_0 = ENGINE_NODE_CALL3(&K17, f_, T4, ans_);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:47
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_completeQVKeMM3I (D l_) {
  D T2;
  D T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/method.dylan:32
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:33
  T2 = SLOT_VALUE_INITD(l_, 1);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:33
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:33
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:33
  T5 = primitive_machine_word_logbitQ(25,T4);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:33
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:32
  MV_SET_COUNT(1);
  return(T6_0);
}

D Krecompute_type_completeXVKiMM2I (D l_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/method.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
  T2 = SLOT_VALUE_INITD(l_, 1);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
  T6 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
  T8 = primitive_machine_word_logbitQ(25,T7);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
    T3_0 = T8;
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
    T4_0 = Kinitialize_signature_completenessVKiI(T2);
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:37
  MV_SET_COUNT(1);
  return(T5_0);
}

D KmakeVKdMM48I (D class_, D all_keys_) {
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/method.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:15
  T3.vector_element_[0] = class_;
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:15
  T4_0 = KerrorVKdMM1I(&K11, &T3);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:14
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kfunction_nextQVKeI (D f_) {
  D T1;
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/method.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:23
  T1 = SLOT_VALUE_INITD(f_, 1);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:23
  T2 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:23
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:23
  T4 = primitive_machine_word_logbitQ(22,T3);
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:23
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/method.dylan:22
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_method_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_method_for_user () {
  return;
}


/* eof */
