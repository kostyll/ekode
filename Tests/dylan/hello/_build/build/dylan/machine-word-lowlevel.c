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
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLarithmetic_overflow_errorGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
define__KLbyte_stringGVKd(96);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
} _KLtypeGVKd;


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
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_49;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_17;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_10;
extern _KLkeyword_methodGVKe KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLarithmetic_overflow_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLarithmetic_overflow_errorGVKeW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
D KerrorVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;

/* Defined object declarations */

extern _KLsimple_methodGVKe KLVKdMM2;
D KLVKdMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KLVKdMM3;
D KLVKdMM3I (D x_, D y_);
extern _KLsimple_methodGVKe KLVKdMM6;
D KLVKdMM6I (D x_, D y_);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_13;
extern _KLsimple_methodGVKe KEVKdMM2;
D KEVKdMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KEVKdMM3;
D KEVKdMM3I (D x_, D y_);
extern _KLsimple_methodGVKe KEVKdMM7;
D KEVKdMM7I (D x_, D y_);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_20;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_50;
extern _KLsimple_methodGVKe KasVKdMM22;
D KasVKdMM22I (D class_, D x_);
static _KLsignatureAvaluesGVKi K21;
static _KLsimple_object_vectorGVKd_2 K22;
static _KLsingletonGVKd K23;
static _KLsignatureAvaluesGVKi K24;
static _KLsignatureAvaluesGVKi K25;
static _KLsimple_object_vectorGVKd_2 K26;
static _KLsignatureAvaluesGVKi K27;
static _KLsimple_object_vectorGVKd_2 K28;
extern _KLsimple_methodGVKe Kmachine_word_overflowVKm;
D Kmachine_word_overflowVKmI ();
static _KLbyte_stringGVKd_96 K31;
static _KLsignatureGVKe K32;
extern _KLsimple_methodGVKe Kas_unsignedVKe;
D Kas_unsignedVKeI (D t_, D m_);
static _KLsignatureGVKe K35;
static _KLsimple_object_vectorGVKd_2 K36;

/* Indirection variables */


/* Variables */

D as_unsignedVKe = &Kas_unsignedVKe;
D machine_word_overflowVKm = &Kmachine_word_overflowVKm;

/* Objects */

_KLsimple_methodGVKe KLVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K27,
  &KLVKdMM2I
};

_KLsimple_methodGVKe KLVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K25,
  &KLVKdMM3I
};

_KLsimple_methodGVKe KLVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K24,
  &KLVKdMM6I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_10,
  &KLVKdMM2
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_11,
  &KLVKdMM3
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_12,
  &KLVKdMM6
};

_KLsimple_methodGVKe KEVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K27,
  &KEVKdMM2I
};

_KLsimple_methodGVKe KEVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K25,
  &KEVKdMM3I
};

_KLsimple_methodGVKe KEVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K24,
  &KEVKdMM7I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_17,
  &KEVKdMM2
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_19 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_18,
  &KEVKdMM3
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_19,
  &KEVKdMM7
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_50 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_49,
  &KasVKdMM22
};

_KLsimple_methodGVKe KasVKdMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &KasVKdMM22I
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K22,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K23,
  &KLmachine_wordGVKe
};

static _KLsingletonGVKd K23 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
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
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K27 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K28,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K28 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

_KLsimple_methodGVKe Kmachine_word_overflowVKm = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K32,
  &Kmachine_word_overflowVKmI
};

static _KLbyte_stringGVKd_96 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 385,
  "Integer overflow: The result of the last operation is too large for this integer representation."
};

static _KLsignatureGVKe K32 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kas_unsignedVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K35,
  &Kas_unsignedVKeI
};

static _KLsignatureGVKe K35 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K36
};

static _KLsimple_object_vectorGVKd_2 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLmachine_wordGVKe
};

/* Code */

D KLVKdMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T5 = primitive_machine_word_less_thanQ(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLVKdMM3I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T5 = primitive_machine_word_less_thanQ(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLVKdMM6I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T5 = primitive_machine_word_less_thanQ(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:149
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T5 = primitive_machine_word_equalQ(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM3I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T5 = primitive_machine_word_equalQ(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM7I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T5 = primitive_machine_word_equalQ(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:148
  MV_SET_COUNT(1);
  return(T6_0);
}

D KasVKdMM22I (D class_, D x_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:81
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:83
  T3_0 = x_;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:81
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kmachine_word_overflowVKmI () {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:404
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:405
  T2_0 = CALL3(&KLarithmetic_overflow_errorGZ32ZconstructorVKiMM0, &KLarithmetic_overflow_errorGVKe, &KJformat_string_, &K31);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:405
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:405
  T3 = KerrorVKdMM0I(T1, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:404
  return(T3);
}

D Kas_unsignedVKeI (D t_, D m_) {
  D T2;
  DWORD T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:32
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:33
  T3 = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:33
  T4 = primitive_wrap_unsigned_abstract_integer(T3);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:33
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(t_, T4);
  // /opt/opendylan-2013.1/sources/dylan/machine-word-lowlevel.dylan:32
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_machine_word_lowlevel_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_machine_word_lowlevel_for_user () {
  return;
}


/* eof */
