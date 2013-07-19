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

#define  define__KLsimple_closure_methodGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D xep_; \
    D function_signature_; \
    D mep_; \
    D environment_size_; \
    D environment_element_[nrepeated+1]; \
  } _KLsimple_closure_methodGVKi_##nrepeated;
define__KLsimple_closure_methodGVKi(0);

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
} _KLsignatureGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
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
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
D Kconcatenate_2VKeMM1I (D v1_, D v2_);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;

/* Defined object declarations */

extern _KLsimple_methodGVKe KalwaysVKd;
D KalwaysVKdI (D object_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_alwaysF4;
static D Kanonymous_of_alwaysF4I (D args_);
static _KLsignatureGVKe K5;
static _KLsignatureAvaluesGVKi K6;
extern _KLsimple_methodGVKe KrcurryVKd;
D KrcurryVKdI (D function_, D curried_args_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rcurryF11;
static D Kanonymous_of_rcurryF11I (D args_);
static _KLsignatureAvaluesGVKi K12;
extern _KLsimple_methodGVKe KcurryVKd;
D KcurryVKdI (D function_, D curried_args_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_curryF17;
static D Kanonymous_of_curryF17I (D args_);
extern _KLsimple_methodGVKe KconjoinVKd;
D KconjoinVKdI (D predicate_1_, D more_predicates_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_conjoinF22;
static D Kanonymous_of_conjoinF22I (D args_);
extern _KLsimple_methodGVKe KdisjoinVKd;
D KdisjoinVKdI (D predicate_1_, D more_predicates_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoinF27;
static D Kanonymous_of_disjoinF27I (D args_);
extern _KLsimple_methodGVKe KcomplementVKd;
D KcomplementVKdI (D function_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_complementF32;
static D Kanonymous_of_complementF32I (D args_);
static _KLsignatureAvaluesGVKi K33;
extern _KLsimple_methodGVKe KcomposeVKd;
D KcomposeVKdI (D function_1_, D more_functions_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_composeF38;
static D Kanonymous_of_composeF38I (D args_);

/* Indirection variables */


/* Variables */

D composeVKd = &KcomposeVKd;
D complementVKd = &KcomplementVKd;
D disjoinVKd = &KdisjoinVKd;
D conjoinVKd = &KconjoinVKd;
D curryVKd = &KcurryVKd;
D rcurryVKd = &KrcurryVKd;
D alwaysVKd = &KalwaysVKd;

/* Objects */

_KLsimple_methodGVKe KalwaysVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K6,
  &KalwaysVKdI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_alwaysF4 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K5,
  &Kanonymous_of_alwaysF4I,
  (D) 1
};

static _KLsignatureGVKe K5 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K6 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

_KLsimple_methodGVKe KrcurryVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K12,
  &KrcurryVKdI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rcurryF11 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K5,
  &Kanonymous_of_rcurryF11I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K12 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

_KLsimple_methodGVKe KcurryVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K12,
  &KcurryVKdI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_curryF17 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K5,
  &Kanonymous_of_curryF17I,
  (D) 1
};

_KLsimple_methodGVKe KconjoinVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K12,
  &KconjoinVKdI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_conjoinF22 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K5,
  &Kanonymous_of_conjoinF22I,
  (D) 1
};

_KLsimple_methodGVKe KdisjoinVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K12,
  &KdisjoinVKdI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_disjoinF27 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K5,
  &Kanonymous_of_disjoinF27I,
  (D) 1
};

_KLsimple_methodGVKe KcomplementVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K33,
  &KcomplementVKdI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_complementF32 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K5,
  &Kanonymous_of_complementF32I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K33 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

_KLsimple_methodGVKe KcomposeVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K12,
  &KcomposeVKdI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_composeF38 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K5,
  &Kanonymous_of_composeF38I,
  (D) 1
};

/* Code */

D KalwaysVKdI (D object_) {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:88
  T1 = MAKE_CLOSURE_INITD(&Kanonymous_of_alwaysF4, 1, object_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:88
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:87
  MV_SET_COUNT(1);
  return(T2_0);
}

static D Kanonymous_of_alwaysF4I (D args_) {
  D T2;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:89
  T2 = CREF(0);
  MV_SET_ELT(0, CREF(0));
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:88
  return(T2);
}

D KrcurryVKdI (D function_, D curried_args_) {
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:79
  T5 = primitive_copy_vector(curried_args_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:81
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_rcurryF11, 2, T5, function_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:81
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:79
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kanonymous_of_rcurryF11I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:81
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:83
  T2 = Kconcatenate_2VKeMM1I(args_, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:83
  T3 = APPLY1(CREF(1), T2);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:81
  return(T3);
}

D KcurryVKdI (D function_, D curried_args_) {
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:71
  T5 = primitive_copy_vector(curried_args_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:73
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_curryF17, 2, T5, function_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:73
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:71
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kanonymous_of_curryF17I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:75
  T2 = Kconcatenate_2VKeMM1I(CREF(0), args_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:75
  T3 = APPLY1(CREF(1), T2);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:73
  return(T3);
}

D KconjoinVKdI (D predicate_1_, D more_predicates_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  D T9;
  D conjunction_;

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:39
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:41
  T7 = SLOT_VALUE_INITD(more_predicates_, 0);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:41
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:41
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:41
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:42
    T3_0 = predicate_1_;
    T6_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:44
    conjunction_ = APPLY1(&KconjoinVKd, more_predicates_);
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:45
    T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_conjoinF22, 2, conjunction_, predicate_1_);
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:45
    T5_0 = T4;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:39
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_conjoinF22I (D args_) {
  D T2;
  D T3;
  D T4;
  D T5;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:45
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:46
  T4 = APPLY1(CREF(1), args_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:46
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:46
    T5 = APPLY1(CREF(0), args_);
    T3 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:46
    T2 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:46
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:45
  return(T3);
}

D KdisjoinVKdI (D predicate_1_, D more_predicates_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  D T9;
  D disjunction_;

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:29
  T7 = SLOT_VALUE_INITD(more_predicates_, 0);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:29
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:29
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:29
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:30
    T3_0 = predicate_1_;
    T6_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:32
    disjunction_ = APPLY1(&KdisjoinVKd, more_predicates_);
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:33
    T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_disjoinF27, 2, disjunction_, predicate_1_);
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:33
    T5_0 = T4;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:27
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_disjoinF27I (D args_) {
  D T2;
  D T3;
  D Utmp_;
  D T5;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:34
  Utmp_ = APPLY1(CREF(1), args_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:34
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:34
    T2 = Utmp_;
    MV_SET_ELT(0, Utmp_);
    MV_SET_COUNT(1);
    T3 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:34
    T5 = APPLY1(CREF(0), args_);
    T3 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:34
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:33
  return(T3);
}

D KcomplementVKdI (D function_) {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:22
  T1 = MAKE_CLOSURE_INITD(&Kanonymous_of_complementF32, 1, function_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:22
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:21
  MV_SET_COUNT(1);
  return(T2_0);
}

static D Kanonymous_of_complementF32I (D args_) {
  D T2;
  D T3_0;
  D T4;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:23
  T2 = APPLY1(CREF(0), args_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:23
  T4 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:23
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:22
  MV_SET_COUNT(1);
  return(T3_0);
}

D KcomposeVKdI (D function_1_, D more_functions_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  D T9;
  D composition_;

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:9
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:11
  T7 = SLOT_VALUE_INITD(more_functions_, 0);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:11
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:11
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:11
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:12
    T3_0 = function_1_;
    T6_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:14
    composition_ = APPLY1(&KcomposeVKd, more_functions_);
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:15
    T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_composeF38, 2, composition_, function_1_);
    // /opt/opendylan-2013.1/sources/dylan/functional.dylan:15
    T5_0 = T4;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:9
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_composeF38I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:16
  T3 = APPLY1(CREF(0), args_);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:16
  T2 = CALL1(CREF(1), T3);
  // /opt/opendylan-2013.1/sources/dylan/functional.dylan:15
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_functional_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_functional_for_user () {
  return;
}


/* eof */
