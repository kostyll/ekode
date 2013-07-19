#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

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
  DWORD mps_w0_;
  DWORD mps_w1_;
} _KLhash_stateGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(0);

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


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
D KLhash_stateGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLhash_stateGVKe;
extern _KLmm_wrapperGVKi_1 KLhash_stateGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern D Ddefault_hash_stateVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kinternal_initialize_threadYthreads_primitivesVdylan;
D Kinternal_initialize_threadYthreads_primitivesVdylanI ();
static _KLsignatureGVKe K3;

/* Indirection variables */


/* Variables */

D Tdylan_library_initializedQTYthreads_primitivesVdylan = &KPfalseVKi;
D internal_initialize_threadYthreads_primitivesVdylan = &Kinternal_initialize_threadYthreads_primitivesVdylan;

/* Objects */

_KLsimple_methodGVKe Kinternal_initialize_threadYthreads_primitivesVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K3,
  &Kinternal_initialize_threadYthreads_primitivesVdylanI
};

static _KLsignatureGVKe K3 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

/* Code */

D Kinternal_initialize_threadYthreads_primitivesVdylanI () {
  D T0;
  D T1;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:19
  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:20
  T3_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:20
  T2 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:20
  T0 = primitive_write_thread_variable(Ddefault_hash_stateVKi, T2);
  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:20
  T1 = T0;
  MV_SET_ELT(0, T0);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:19
  return(T1);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_initialize_thread_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_initialize_thread_for_user () {
{
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:26
  Tdylan_library_initializedQTYthreads_primitivesVdylan = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/initialize-thread.dylan:26
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
