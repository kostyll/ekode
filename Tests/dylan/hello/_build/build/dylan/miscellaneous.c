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
} _KLsignatureGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);


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
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe KidentityVKd;
D KidentityVKdI (D object_);
extern _KLsimple_methodGVKe KignoreVKe;
D KignoreVKeI (D ignored_values_);
static _KLsignatureGVKe K4;
static _KLsignatureGVKe K5;
extern _KLsimple_methodGVKe KignorableVKe;
D KignorableVKeI (D ignorable_values_);

/* Indirection variables */


/* Variables */

D identityVKd = &KidentityVKd;
D ignoreVKe = &KignoreVKe;
D ignorableVKe = &KignorableVKe;

/* Objects */

_KLsimple_methodGVKe KidentityVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K5,
  &KidentityVKdI
};

_KLsimple_methodGVKe KignoreVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K4,
  &KignoreVKeI
};

static _KLsignatureGVKe K4 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991617,
  &KPempty_vectorVKi
};

static _KLsignatureGVKe K5 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LobjectG_typesVKi
};

_KLsimple_methodGVKe KignorableVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K4,
  &KignorableVKeI
};

/* Code */

D KidentityVKdI (D object_) {
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:9
  T1_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:8
  MV_SET_COUNT(1);
  return(T1_0);
}

D KignoreVKeI (D ignored_values_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:14
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:12
  MV_SET_COUNT(0);
  return(T2);
}

D KignorableVKeI (D ignorable_values_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:19
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/miscellaneous.dylan:17
  MV_SET_COUNT(0);
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_miscellaneous_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_miscellaneous_for_user () {
  return;
}


/* eof */
