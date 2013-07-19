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
} _KLintegerGVKd;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe KEVKdMM35;
D KEVKdMM35I (D, D);
static _KLsignatureAvaluesGVKi K2;

/* Indirection variables */


/* Variables */


/* Objects */

_KLsimple_methodGVKe KEVKdMM35 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K2,
  &KEVKdMM35I
};

static _KLsignatureAvaluesGVKi K2 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LvectorG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

/* Code */

D KEVKdMM35I (D x_, D y_) {
  D T3;
  D x_size_;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  DWORD T18;
  D T19;
  DWORD iF20T, iF20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:9
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:9
  x_size_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:10
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(y_);
  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:10
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T6 = CONGRUENT_CALL2(x_size_, T5);
  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:10
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
    iF20T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
      iF20 = iF20T;
      // /opt/opendylan-2013.1/sources/dylan/speed.dylan:12
      T21 = primitive_cast_raw_as_integer(iF20);
      // /opt/opendylan-2013.1/sources/dylan/speed.dylan:12
      T16 = primitive_cast_integer_as_raw(x_size_);
      // /opt/opendylan-2013.1/sources/dylan/speed.dylan:12
      T17 = primitive_machine_word_less_thanQ(iF20,T16);
      // /opt/opendylan-2013.1/sources/dylan/speed.dylan:12
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T9 = CONGRUENT_CALL3(x_, T21, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T10 = CONGRUENT_CALL3(y_, T21, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T11 = CONGRUENT_CALL2(T9, T10);
        // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
        if (T11 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
          T18 = primitive_machine_word_add_signal_overflow(iF20,4);
          // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
          iF20T = T18;
          goto L0;
          T13 = T19;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
          T12 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T13 = T12;
        }
        // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
        T15 = T13;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/speed.dylan:15
        T14 = &KPtrueVKi;
        MV_SET_ELT(0, &KPtrueVKi);
        MV_SET_COUNT(1);
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/dylan/speed.dylan:12
      // /opt/opendylan-2013.1/sources/dylan/speed.dylan:13
    T8_0 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/speed.dylan:10
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/speed.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_speed_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_speed_for_user () {
  return;
}


/* eof */
