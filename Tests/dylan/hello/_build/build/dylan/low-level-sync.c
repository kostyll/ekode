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

/* Defined object declarations */

extern _KLsimple_methodGVKe Ksequence_pointYthreadsVdylan;
D Ksequence_pointYthreadsVdylanI ();
static _KLsignatureGVKe K2;
extern _KLsimple_methodGVKe Ksynchronize_side_effectsYthreadsVdylan;
D Ksynchronize_side_effectsYthreadsVdylanI ();

/* Indirection variables */


/* Variables */

D synchronize_side_effectsYthreadsVdylan = &Ksynchronize_side_effectsYthreadsVdylan;
D sequence_pointYthreadsVdylan = &Ksequence_pointYthreadsVdylan;

/* Objects */

_KLsimple_methodGVKe Ksequence_pointYthreadsVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K2,
  &Ksequence_pointYthreadsVdylanI
};

static _KLsignatureGVKe K2 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Ksynchronize_side_effectsYthreadsVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K2,
  &Ksynchronize_side_effectsYthreadsVdylanI
};

/* Code */

D Ksequence_pointYthreadsVdylanI () {
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/low-level-sync.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/low-level-sync.dylan:16
  T0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/low-level-sync.dylan:15
  MV_SET_COUNT(0);
  return(T0);
}

D Ksynchronize_side_effectsYthreadsVdylanI () {
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/low-level-sync.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/low-level-sync.dylan:12
  primitive_synchronize_side_effects();
  // /opt/opendylan-2013.1/sources/dylan/low-level-sync.dylan:12
  T0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/low-level-sync.dylan:11
  MV_SET_COUNT(0);
  return(T0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_low_level_sync_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_low_level_sync_for_user () {
  return;
}


/* eof */
