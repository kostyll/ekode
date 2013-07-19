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
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(12);

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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
} _KLabstract_integerGVKe;

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
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI (D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe KPshift_rightYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPshift_rightYmachine_wordsVcommon_dylanMM0;
D KPshift_rightYmachine_wordsVcommon_dylanMM0I (D x_, D count_);
extern _KLsimple_methodGVKe KPshift_rightYmachine_wordsVcommon_dylanMM1;
D KPshift_rightYmachine_wordsVcommon_dylanMM1I (D x_, D count_);
static _KLpairGVKd K5;
static _KLpairGVKd K6;
static _KLsignatureAvaluesGVKi K7;
static _KLbyte_stringGVKd_12 K8;
static _KLsimple_object_vectorGVKd_2 K9;
static _KLsignatureAvaluesGVKi K10;
static _KLsimple_object_vectorGVKd_2 K11;
static _KLsignatureAvaluesGVKi K12;
static _KLsimple_object_vectorGVKd_2 K13;
extern _KLsealed_generic_functionGVKe KPshift_leftYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPshift_leftYmachine_wordsVcommon_dylanMM0;
D KPshift_leftYmachine_wordsVcommon_dylanMM0I (D x_, D count_);
extern _KLsimple_methodGVKe KPshift_leftYmachine_wordsVcommon_dylanMM1;
D KPshift_leftYmachine_wordsVcommon_dylanMM1I (D x_, D count_);
static _KLpairGVKd K19;
static _KLpairGVKd K20;
static _KLsignatureAvaluesGVKi K21;
static _KLbyte_stringGVKd_11 K22;
static _KLsimple_object_vectorGVKd_3 K23;
static _KLsignatureAvaluesGVKi K24;
static _KLsignatureAvaluesGVKi K25;

/* Indirection variables */


/* Variables */

D Pshift_leftYmachine_wordsVcommon_dylan = &KPshift_leftYmachine_wordsVcommon_dylan;
D Pshift_rightYmachine_wordsVcommon_dylan = &KPshift_rightYmachine_wordsVcommon_dylan;

/* Objects */

_KLsealed_generic_functionGVKe KPshift_rightYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K7,
  &KPfalseVKi,
  &K8,
  &K5,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPshift_rightYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K12,
  &KPshift_rightYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPshift_rightYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K10,
  &KPshift_rightYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K5 = {
  &KLpairGVKdW /* wrapper */,
  &KPshift_rightYmachine_wordsVcommon_dylanMM0,
  &K6
};

static _KLpairGVKd K6 = {
  &KLpairGVKdW /* wrapper */,
  &KPshift_rightYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K7 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K9,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_12 K8 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "%shift-right"
};

static _KLsimple_object_vectorGVKd_2 K9 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K10 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K11,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K11 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K12 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K13,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K13 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe KPshift_leftYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K21,
  &KPfalseVKi,
  &K22,
  &K19,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPshift_leftYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K25,
  &KPshift_leftYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPshift_leftYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K24,
  &KPshift_leftYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &KPshift_leftYmachine_wordsVcommon_dylanMM0,
  &K20
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &KPshift_leftYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &K9,
  &K23
};

static _KLbyte_stringGVKd_11 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "%shift-left"
};

static _KLsimple_object_vectorGVKd_3 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLmachine_wordGVKe,
  &KLbooleanGVKd
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &K11,
  &K23
};

static _KLsignatureAvaluesGVKi K25 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &K13,
  &K23
};

/* Code */

D KPshift_rightYmachine_wordsVcommon_dylanMM0I (D x_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:34
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:36
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:37
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:37
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:37
  T8 = primitive_machine_word_shift_right(raw_x_,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:37
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:37
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:34
  MV_SET_COUNT(1);
  return(T10_0);
}

D KPshift_rightYmachine_wordsVcommon_dylanMM1I (D x_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:40
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:42
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:43
  T7 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:43
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:43
  T8 = primitive_machine_word_shift_right(T7,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:43
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:43
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:40
  MV_SET_COUNT(1);
  return(T10_0);
}

D KPshift_leftYmachine_wordsVcommon_dylanMM0I (D x_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  DWORD T8_0;
  DWORD T8_1;
  D T8_2;
  DWORD low_;
  DWORD high_;
  D overflowQ_;
  D T12;
  D T13;
  DWORD T14;
  D T15_0;
  D T15_1;
  D T15_2;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:14
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:16
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  T14 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  T8_0 = primitive_machine_word_shift_left_with_overflow_byref(raw_x_,T14,(DWORD*)&T8_1,(D*)&T8_2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  low_ = T8_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  high_ = T8_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  overflowQ_ = T8_2;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  T12 = primitive_wrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  T13 = primitive_wrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:17
  T15_0 = T12;
  T15_1 = T13;
  T15_2 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:14
  MV_SET_ELT(1, T15_1);
  MV_SET_ELT(2, T15_2);
  MV_SET_COUNT(3);
  return(T15_0);
}

D KPshift_leftYmachine_wordsVcommon_dylanMM1I (D x_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8_0;
  DWORD T8_1;
  D T8_2;
  DWORD low_;
  DWORD high_;
  D overflowQ_;
  D T12;
  D T13;
  DWORD T14;
  D T15_0;
  D T15_1;
  D T15_2;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:20
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:22
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:24
  T7 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  T14 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  T8_0 = primitive_machine_word_shift_left_with_overflow_byref(T7,T14,(DWORD*)&T8_1,(D*)&T8_2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  low_ = T8_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  high_ = T8_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  overflowQ_ = T8_2;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  T12 = primitive_wrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  T13 = primitive_wrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:23
  T15_0 = T12;
  T15_1 = T13;
  T15_2 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/shift.dylan:20
  MV_SET_ELT(1, T15_1);
  MV_SET_ELT(2, T15_2);
  MV_SET_COUNT(3);
  return(T15_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_17Eshift_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_17Eshift_for_user () {
  return;
}


/* eof */
