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
define__KLsimple_object_vectorGVKd(16);


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
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kcoerce_machine_word_to_integerVKm;
D Kcoerce_machine_word_to_integerVKmI (D x_);
static _KLsignatureAvaluesGVKi K2;

/* Indirection variables */


/* Variables */

D coerce_machine_word_to_integerVKm = &Kcoerce_machine_word_to_integerVKm;

/* Objects */

_KLsimple_methodGVKe Kcoerce_machine_word_to_integerVKm = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K2,
  &Kcoerce_machine_word_to_integerVKmI
};

static _KLsignatureAvaluesGVKi K2 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D Kcoerce_machine_word_to_integerVKmI (D x_) {
  DWORD raw_x_;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/conversion-tagged-integer.dylan:53
  // /opt/opendylan-2013.1/sources/dylan/conversion-tagged-integer.dylan:57
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/dylan/conversion-tagged-integer.dylan:60
  T3 = primitive_machine_word_shift_left_signal_overflow(raw_x_,2);
  // /opt/opendylan-2013.1/sources/dylan/conversion-tagged-integer.dylan:62
  T4 = primitive_machine_word_logior(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/conversion-tagged-integer.dylan:62
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/conversion-tagged-integer.dylan:62
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/conversion-tagged-integer.dylan:53
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_conversion_tagged_integer_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_conversion_tagged_integer_for_user () {
  return;
}


/* eof */
