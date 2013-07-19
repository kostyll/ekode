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
define__KLsimple_object_vectorGVKd(0);

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

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
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(3);

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
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  DWORD PPdouble_integer_low_;
  DWORD PPdouble_integer_high_;
} _KLdouble_integerGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D value_class_comparitor_;
} _KLvalue_classGVKi;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

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
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLkeyword_methodGVKe Kmachine_word_to_stringYcommon_extensionsVcommon_dylan;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJstart_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLvalue_classGVKi KLdouble_integerGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_integerGVKeW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kio_libraryYdylan_userVio;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;

/* Defined object declarations */

extern _KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_0;
extern _KLsimple_methodGVKe Kprint_objectYprintVioMM19;
D Kprint_objectYprintVioMM19I (D, D);
static _KLbyte_stringGVKd_3 K3;
static _KLsignatureGVKe K4;
static _KLsimple_object_vectorGVKd_2 K5;

/* Indirection variables */


/* Variables */


/* Objects */

_KLmethod_domainGVKe Kprint_objectYprintVioRD_ioRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kio_libraryYdylan_userVio,
  &KPfalseVKi,
  &Kprint_objectYprintVioMM19
};

_KLsimple_methodGVKe Kprint_objectYprintVioMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K4,
  &Kprint_objectYprintVioMM19I
};

static _KLbyte_stringGVKd_3 K3 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "#ex"
};

static _KLsignatureGVKe K4 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K5
};

static _KLsimple_object_vectorGVKd_2 K5 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_integerGVKe,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

/* Code */

D Kprint_objectYprintVioMM19I (D object_, D stream_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  DADDR T9;
  D T10;
  _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T12;
  DADDR T13;
  D T14;
  _KLsimple_object_vectorGVKd_2 T15 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:9
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:11
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, &K3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:13
  T8 = primitive_initialized_slot_value(object_,1);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:13
  T9 = primitive_cast_pointer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:13
  T10 = primitive_wrap_machine_word(T9);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:13
  T3 = CALL1(&Kmachine_word_to_stringYcommon_extensionsVcommon_dylan, T10);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:13
  T11.vector_element_[0] = &KJstart_;
  T11.vector_element_[1] = (D) 9;
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:13
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T4 = CONGRUENT_CALL2(T3, &T11);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:12
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  CONGRUENT_CALL3(stream_, T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:14
  T12 = primitive_initialized_slot_value(object_,0);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:14
  T13 = primitive_cast_pointer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:14
  T14 = primitive_wrap_machine_word(T13);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:14
  T5 = CALL1(&Kmachine_word_to_stringYcommon_extensionsVcommon_dylan, T14);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:14
  T15.vector_element_[0] = &KJstart_;
  T15.vector_element_[1] = (D) 9;
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:14
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T6 = CONGRUENT_CALL2(T5, &T15);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:14
  CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
  T7 = CONGRUENT_CALL3(stream_, T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/io/print-double-integer-kludge.dylan:9
  MV_SET_COUNT(0);
  return(T7);
}


/* SYSTEM INIT CODE */

void _Init_io__X_print_double_integer_kludge_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_io__X_print_double_integer_kludge_for_user () {
  return;
}


/* eof */
