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
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
} _KLsimple_methodGVKe;


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
extern _KLsealed_generic_functionGVKe KdoVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kcall_application_exit_functionsVKe;
D Kcall_application_exit_functionsVKeI ();
static _KLsimple_closure_methodGVKi_0 Kcall_exit_functionF4;
static D Kcall_exit_functionF4I (D);
static _KLsignatureGVKe K5;
static _KLsignatureGVKe K6;
extern _KLsimple_methodGVKe Kregister_application_exit_functionVKe;
D Kregister_application_exit_functionVKeI (D);

/* Indirection variables */


/* Variables */

D register_application_exit_functionVKe = &Kregister_application_exit_functionVKe;
D call_application_exit_functionsVKe = &Kcall_application_exit_functionsVKe;
D Tregistered_exit_functionsTVKi = &KPempty_listVKi;

/* Objects */

_KLsimple_methodGVKe Kcall_application_exit_functionsVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K6,
  &Kcall_application_exit_functionsVKeI
};

static _KLsimple_closure_methodGVKi_0 Kcall_exit_functionF4 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K5,
  &Kcall_exit_functionF4I,
  (D) 1
};

static _KLsignatureGVKe K5 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LfunctionG_typesVKi
};

static _KLsignatureGVKe K6 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kregister_application_exit_functionVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K5,
  &Kregister_application_exit_functionVKeI
};

/* Code */

D Kcall_application_exit_functionsVKeI () {
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:27
  T0 = Tregistered_exit_functionsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:27
  T1 = CALL2(&KdoVKd, &Kcall_exit_functionF4, T0);
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:23
  MV_SET_COUNT(0);
  return(T1);
}

static D Kcall_exit_functionF4I (D thunk_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:25
  CALL0(thunk_);
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:24
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:24
  MV_SET_COUNT(0);
  return(T2);
}

D Kregister_application_exit_functionVKeI (D thunk_) {
  D T1;
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:15
  T1 = Tregistered_exit_functionsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:15
  T3 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:15
  SLOT_VALUE_SETTER(thunk_, T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:15
  SLOT_VALUE_SETTER(T1, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:15
  Tregistered_exit_functionsTVKi = T3;
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:15
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/shut-down.dylan:13
  MV_SET_COUNT(0);
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_shut_down_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_shut_down_for_user () {
  return;
}


/* eof */
