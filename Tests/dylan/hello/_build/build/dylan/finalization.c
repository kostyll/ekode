#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lock_iGYthreads_internalVdylan;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(8);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D handle1_;
  D handle2_;
  D priority_;
  D thread_name_;
  D function_;
  D function_results_;
} _KLthreadGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

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
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lockGYthreadsVdylan;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_name_);
extern _KLclassGVKd KLsimple_lock_iGYthreads_internalVdylan;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_1 KLsimple_lock_iGYthreads_internalVdylanW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM0;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM2;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM3;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM4;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM5;
extern _KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_1;
extern _KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_2;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_no_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kfinalization_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsymbolGVKd KJlock_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsimple_methodGVKe KEEVKd;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
extern _KLsymbolGVKd KJname_;
extern _KLsymbolGVKd KJfunction_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLthreadGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLthreadGYthreadsVdylanW;
D Klock_release_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
D KsleepYthreadsVdylanI (D);
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsimple_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsimple_lockGYthreadsVdylanW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;

/* Defined object declarations */

D Kdrain_finalization_queueYfinalizationVdylanI ();
D Kfinalize_when_unreachableYfinalizationVdylanI (D);
extern _KLincremental_generic_functionGVKe KfinalizeYfinalizationVdylan;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM1;
D KfinalizeYfinalizationVdylanMM1I (D);
static _KLpairGVKd K6;
static _KLpairGVKd K7;
static _KLpairGVKd K8;
static _KLpairGVKd K9;
static _KLpairGVKd K10;
static _KLpairGVKd K11;
static _KLbyte_stringGVKd_8 K12;
extern _KLsimple_methodGVKe Kautomatic_finalization_enabledQ_setterYfinalizationVdylan;
D Kautomatic_finalization_enabledQ_setterYfinalizationVdylanI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQ_setterF40;
static D Kanonymous_of_automatic_finalization_enabledQ_setterF40I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQ_setterF39;
static D Kanonymous_of_automatic_finalization_enabledQ_setterF39I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQ_setterF38;
static D Kanonymous_of_automatic_finalization_enabledQ_setterF38I ();
static _KLbyte_stringGVKd_29 K21;
extern _KLsimple_methodGVKe Kautomatic_finalization_functionYfinalization_internalVdylan;
D Kautomatic_finalization_functionYfinalization_internalVdylanI ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_functionF35;
static D Kanonymous_of_automatic_finalization_functionF35I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_functionF33;
static D Kanonymous_of_automatic_finalization_functionF33I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_functionF30;
static D Kanonymous_of_automatic_finalization_functionF30I ();
static _KLbyte_stringGVKd_31 K31;
static _KLsignatureGVKe K32;
static _KLbyte_stringGVKd_45 K34;
static _KLbyte_stringGVKd_33 K36;
static _KLsignatureGVKe K37;
static _KLsignatureGVKe K41;
extern _KLsimple_methodGVKe Kautomatic_finalization_enabledQYfinalizationVdylan;
D Kautomatic_finalization_enabledQYfinalizationVdylanI ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQF52;
static D Kanonymous_of_automatic_finalization_enabledQF52I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQF51;
static D Kanonymous_of_automatic_finalization_enabledQF51I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQF50;
static D Kanonymous_of_automatic_finalization_enabledQF50I ();
static _KLsignatureAvaluesGVKi K53;
extern _KLsimple_methodGVKe Kdrain_finalization_queueYfinalizationVdylan;
extern _KLsimple_methodGVKe Kfinalize_when_unreachableYfinalizationVdylan;
static _KLsignatureGVKe K56;

/* Indirection variables */


/* Variables */

D finalize_when_unreachableYfinalizationVdylan = &Kfinalize_when_unreachableYfinalizationVdylan;
D finalizeYfinalizationVdylan = &KfinalizeYfinalizationVdylan;
D drain_finalization_queueYfinalizationVdylan = &Kdrain_finalization_queueYfinalizationVdylan;
D Tautomatic_finalization_lockTYfinalization_internalVdylan = &KPunboundVKi;
D automatic_finalization_enabledQYfinalizationVdylan = &Kautomatic_finalization_enabledQYfinalizationVdylan;
D automatic_finalization_enabledQ_setterYfinalizationVdylan = &Kautomatic_finalization_enabledQ_setterYfinalizationVdylan;
D Tautomatic_finalizationQTYfinalization_internalVdylan = &KPfalseVKi;
D Tdraining_thread_activeQTYfinalization_internalVdylan = &KPfalseVKi;

/* Objects */

_KLincremental_generic_functionGVKe KfinalizeYfinalizationVdylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_no_rest_value_1VKi,
  (D) 1,
  &K12,
  &K6,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kfinalization_moduleYdylan_userVdylan,
  &KfinalizeYfinalizationVdylanRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_no_rest_value_1VKi,
  &KfinalizeYfinalizationVdylanMM1I
};

static _KLpairGVKd K6 = {
  &KLpairGVKdW /* wrapper */,
  &KfinalizeYfinalizationVdylanMM0,
  &K7
};

static _KLpairGVKd K7 = {
  &KLpairGVKdW /* wrapper */,
  &KfinalizeYfinalizationVdylanMM1,
  &K8
};

static _KLpairGVKd K8 = {
  &KLpairGVKdW /* wrapper */,
  &KfinalizeYfinalizationVdylanMM2,
  &K9
};

static _KLpairGVKd K9 = {
  &KLpairGVKdW /* wrapper */,
  &KfinalizeYfinalizationVdylanMM3,
  &K10
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &KfinalizeYfinalizationVdylanMM4,
  &K11
};

static _KLpairGVKd K11 = {
  &KLpairGVKdW /* wrapper */,
  &KfinalizeYfinalizationVdylanMM5,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K12 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "finalize"
};

_KLsimple_methodGVKe Kautomatic_finalization_enabledQ_setterYfinalizationVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K41,
  &Kautomatic_finalization_enabledQ_setterYfinalizationVdylanI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQ_setterF40 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_enabledQ_setterF40I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQ_setterF39 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_enabledQ_setterF39I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQ_setterF38 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_enabledQ_setterF38I,
  (D) 1
};

static _KLbyte_stringGVKd_29 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "Automatic Finalization Thread"
};

_KLsimple_methodGVKe Kautomatic_finalization_functionYfinalization_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K37,
  &Kautomatic_finalization_functionYfinalization_internalVdylanI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_functionF35 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_functionF35I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_functionF33 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_functionF33I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_functionF30 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_functionF30I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K32 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_45 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLbyte_stringGVKd_33 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLsignatureGVKe K37 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

static _KLsignatureGVKe K41 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kautomatic_finalization_enabledQYfinalizationVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K53,
  &Kautomatic_finalization_enabledQYfinalizationVdylanI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQF52 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_enabledQF52I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQF51 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_enabledQF51I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_automatic_finalization_enabledQF50 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_automatic_finalization_enabledQF50I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K53 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kdrain_finalization_queueYfinalizationVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K37,
  &Kdrain_finalization_queueYfinalizationVdylanI
};

_KLsimple_methodGVKe Kfinalize_when_unreachableYfinalizationVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &Kfinalize_when_unreachableYfinalizationVdylanI
};

static _KLsignatureGVKe K56 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LobjectG_typesVKi
};

/* Code */

D Kdrain_finalization_queueYfinalizationVdylanI () {
  D object_T, object_;
  D T1;
  D objF2;
  DADDR T3;
  D T4;
  D T5;
  D objF6;
  DADDR T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
  objF2 = primitive_mps_finalization_queue_first();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
  T3 = primitive_cast_pointer_as_raw(objF2);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
  T4 = primitive_machine_word_equalQ(T3,0);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
  if (T4 != &KPfalseVKi) {
    T5 = &KPfalseVKi;
  } else {
    T5 = objF2;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
  object_T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
    object_ = object_T;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
    if (object_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:41
      CONGRUENT_CALL_PROLOG(&KfinalizeYfinalizationVdylan, 1);
      CONGRUENT_CALL1(object_);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:39
      objF6 = primitive_mps_finalization_queue_first();
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:39
      T7 = primitive_cast_pointer_as_raw(objF6);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:39
      T8 = primitive_machine_word_equalQ(T7,0);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:39
      if (T8 != &KPfalseVKi) {
        T9 = &KPfalseVKi;
      } else {
        T9 = objF6;
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:39
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
      object_T = T9;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
    T1 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:37
  MV_SET_COUNT(0);
  return(T1);
}

D Kfinalize_when_unreachableYfinalizationVdylanI (D object_) {
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:15
  primitive_mps_finalize(object_);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:16
  T1_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:13
  MV_SET_COUNT(1);
  return(T1_0);
}

D KfinalizeYfinalizationVdylanMM1I (D object_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:30
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:30
  MV_SET_COUNT(0);
  return(T2);
}

D Kautomatic_finalization_enabledQ_setterYfinalizationVdylanI (D newval_) {
  D DlockD_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34;
  D T35;
  D T36_0;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  _KLsimple_object_vectorGVKd_4 T42 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T43;
  D res_;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51_0;
  D T52;
  D T53;
  D T54;
  D T55;
  _KLsimple_object_vectorGVKd_2 T56 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T57;

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:69
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  DlockD_ = Tautomatic_finalization_lockTYfinalization_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T17 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T18 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T19 = primitive_idQ(T18,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T20 = primitive_not(T19);
    T16 = T20;
  } else {
    T16 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T21 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T22_0 = KmemberQVKdMM3I(&KJlock_, T21, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T23 = T22_0;
    T24 = T23;
  } else {
    T24 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T25 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_enabledQ_setterF40, 1, DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    CALL1(T25, T13);
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T14 = primitive_wait_for_simple_lock(DlockD_);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T27 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T28 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T29 = primitive_idQ(T28,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T30 = primitive_not(T29);
    T26 = T30;
  } else {
    T26 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T31 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T32_0 = KmemberQVKdMM3I(&KJlock_, T31, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T33 = T32_0;
    T34 = T33;
  } else {
    T34 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T35 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T15 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_enabledQ_setterF39, 2, T14, DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    CALL1(T35, T15);
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T37 = primitive_idQ(T14,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T37 != &KPfalseVKi) {
    T41 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T38 = primitive_idQ(T14,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    if (T38 != &KPfalseVKi) {
      T40 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T36_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(DlockD_, T14);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T39 = T36_0;
      T40 = T39;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T41 = T40;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T41 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    ENTER_UNWIND_FRAME(T3);
    if (!nlx_setjmp(FRAME_DEST(T3))) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:73
      T4 = Tautomatic_finalizationQTYfinalization_internalVdylan;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:73
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:74
        Tautomatic_finalizationQTYfinalization_internalVdylan = newval_;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:74
        T5 = &KPfalseVKi;
        T10 = T5;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:76
        if (newval_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:77
          T6 = Tdraining_thread_activeQTYfinalization_internalVdylan;
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:77
          if (T6 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:78
            T42.vector_element_[0] = &KJname_;
            T42.vector_element_[1] = &K21;
            T42.vector_element_[2] = &KJfunction_;
            T42.vector_element_[3] = &Kautomatic_finalization_functionYfinalization_internalVdylan;
            // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:78
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            CONGRUENT_CALL2(&KLthreadGYthreadsVdylan, &T42);
            // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:80
            Tdraining_thread_activeQTYfinalization_internalVdylan = &KPtrueVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:77
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:82
          Tautomatic_finalizationQTYfinalization_internalVdylan = &KPtrueVKi;
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:82
          T7 = &KPfalseVKi;
          T9 = T7;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:76
          T8 = &KPfalseVKi;
          T9 = T8;
        }
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:76
        T10 = T9;
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:73
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      FALL_THROUGH_UNWIND(T10);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T46 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T47 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T48 = primitive_idQ(T47,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T49 = primitive_not(T48);
      T45 = T49;
    } else {
      T45 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    if (T45 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T50 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T51_0 = KmemberQVKdMM3I(&KJlock_, T50, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T52 = T51_0;
      T53 = T52;
    } else {
      T53 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    if (T53 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T54 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      T43 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_enabledQ_setterF38, 1, DlockD_);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      CALL1(T54, T43);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    res_ = primitive_release_simple_lock(DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T55 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    if (T55 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
      Klock_release_result_errorYthreads_internalVdylanMM0I(DlockD_, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    CONTINUE_UNWIND();
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T56.vector_element_[0] = &KJsynchronization_;
    T56.vector_element_[1] = DlockD_;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T11 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T56);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T57 = KsignalVKdMM0I(T11, &KPempty_vectorVKi);
    T12 = T57;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:69
  MV_SET_COUNT(0);
  return(T12);
}

static D Kanonymous_of_automatic_finalization_enabledQ_setterF40I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T5.vector_element_[0] = &K36;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_automatic_finalization_enabledQ_setterF39I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T5.vector_element_[0] = &K34;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_automatic_finalization_enabledQ_setterF38I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T5.vector_element_[0] = &K31;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:72
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kautomatic_finalization_functionYfinalization_internalVdylanI () {
  D object_T, object_;
  D T1;
  D DlockD_;
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30_0;
  D T31;
  D T32;
  D T33;
  D T34_0;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D res_;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48_0;
  D T49;
  D T50;
  D T51;
  D T52;
  _KLsimple_object_vectorGVKd_2 T53 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T54_0;
  D T55;
  D objF56;
  DADDR T57;
  D T58;
  D T59;
  D objF60;
  DADDR T61;
  D T62;
  D T63;

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:89
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:99
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    DlockD_ = Tautomatic_finalization_lockTYfinalization_internalVdylan;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T15 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T16 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T17 = primitive_idQ(T16,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T18 = primitive_not(T17);
      T14 = T18;
    } else {
      T14 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T19 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T20_0 = KmemberQVKdMM3I(&KJlock_, T19, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T21 = T20_0;
      T22 = T21;
    } else {
      T22 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T23 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_functionF35, 1, DlockD_);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      CALL1(T23, T11);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T12 = primitive_wait_for_simple_lock(DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T25 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T26 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T27 = primitive_idQ(T26,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T28 = primitive_not(T27);
      T24 = T28;
    } else {
      T24 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T29 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T30_0 = KmemberQVKdMM3I(&KJlock_, T29, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T31 = T30_0;
      T32 = T31;
    } else {
      T32 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T33 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_functionF33, 2, T12, DlockD_);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      CALL1(T33, T13);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T35 = primitive_idQ(T12,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T35 != &KPfalseVKi) {
      T39 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T36 = primitive_idQ(T12,(D) 5);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      if (T36 != &KPfalseVKi) {
        T38 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T34_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(DlockD_, T12);
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T37 = T34_0;
        T38 = T37;
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T39 = T38;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      ENTER_UNWIND_FRAME(T3);
      if (!nlx_setjmp(FRAME_DEST(T3))) {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:92
        T4 = Tautomatic_finalizationQTYfinalization_internalVdylan;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:92
        if (T4 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:93
          Tdraining_thread_activeQTYfinalization_internalVdylan = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:92
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:95
        T5 = Tautomatic_finalizationQTYfinalization_internalVdylan;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:95
        T6_0 = T5;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        FALL_THROUGH_UNWIND(T6_0);
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T43 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      if (T43 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T44 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T45 = primitive_idQ(T44,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T46 = primitive_not(T45);
        T42 = T46;
      } else {
        T42 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      if (T42 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T47 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T48_0 = KmemberQVKdMM3I(&KJlock_, T47, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T49 = T48_0;
        T50 = T49;
      } else {
        T50 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      if (T50 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T51 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        T40 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_functionF30, 1, DlockD_);
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        CALL1(T51, T40);
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      res_ = primitive_release_simple_lock(DlockD_);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T52 = primitive_idQ(res_,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      if (T52 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
        Klock_release_result_errorYthreads_internalVdylanMM0I(DlockD_, res_);
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      CONTINUE_UNWIND();
      T8_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T53.vector_element_[0] = &KJsynchronization_;
      T53.vector_element_[1] = DlockD_;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T7 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T53);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
      T54_0 = KsignalVKdMM0I(T7, &KPempty_vectorVKi);
      T8_0 = T54_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:90
    T9_0 = T8_0;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:90
    T10_0 = T9_0;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:99
    T55 = T10_0;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:99
    if (T55 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      KsleepYthreadsVdylanI((D) 5);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      objF56 = primitive_mps_finalization_queue_first();
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      T57 = primitive_cast_pointer_as_raw(objF56);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      T58 = primitive_machine_word_equalQ(T57,0);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      if (T58 != &KPfalseVKi) {
        T59 = &KPfalseVKi;
      } else {
        T59 = objF56;
      }
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      object_T = T59;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
        object_ = object_T;
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
        if (object_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:103
          CONGRUENT_CALL_PROLOG(&KfinalizeYfinalizationVdylan, 1);
          CONGRUENT_CALL1(object_);
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:101
          objF60 = primitive_mps_finalization_queue_first();
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:101
          T61 = primitive_cast_pointer_as_raw(objF60);
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:101
          T62 = primitive_machine_word_equalQ(T61,0);
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:101
          if (T62 != &KPfalseVKi) {
            T63 = &KPfalseVKi;
          } else {
            T63 = objF60;
          }
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:101
          // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
          object_T = T63;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
        // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:99
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:99
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:99
  T1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:89
  MV_SET_COUNT(0);
  return(T1);
}

static D Kanonymous_of_automatic_finalization_functionF35I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T5.vector_element_[0] = &K36;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_automatic_finalization_functionF33I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T5.vector_element_[0] = &K34;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_automatic_finalization_functionF30I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T5.vector_element_[0] = &K31;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:91
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kautomatic_finalization_enabledQYfinalizationVdylanI () {
  D DlockD_;
  D T2;
  D T3;
  D T4_0;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26_0;
  D T27;
  D T28;
  D T29;
  D T30_0;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D res_;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44_0;
  D T45;
  D T46;
  D T47;
  D T48;
  _KLsimple_object_vectorGVKd_2 T49 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T50_0;
  D T51_0;

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  DlockD_ = Tautomatic_finalization_lockTYfinalization_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T11 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T12 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T13 = primitive_idQ(T12,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T14 = primitive_not(T13);
    T10 = T14;
  } else {
    T10 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T15 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T16_0 = KmemberQVKdMM3I(&KJlock_, T15, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T17 = T16_0;
    T18 = T17;
  } else {
    T18 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T19 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T7 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_enabledQF52, 1, DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    CALL1(T19, T7);
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T8 = primitive_wait_for_simple_lock(DlockD_);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T21 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T22 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T23 = primitive_idQ(T22,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T24 = primitive_not(T23);
    T20 = T24;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T25 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T26_0 = KmemberQVKdMM3I(&KJlock_, T25, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T27 = T26_0;
    T28 = T27;
  } else {
    T28 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T29 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_enabledQF51, 2, T8, DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    CALL1(T29, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T31 = primitive_idQ(T8,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T31 != &KPfalseVKi) {
    T35 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T32 = primitive_idQ(T8,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    if (T32 != &KPfalseVKi) {
      T34 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T30_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(DlockD_, T8);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T33 = T30_0;
      T34 = T33;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T35 = T34;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:59
      T3 = Tautomatic_finalizationQTYfinalization_internalVdylan;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:59
      T4_0 = T3;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      FALL_THROUGH_UNWIND(T4_0);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T39 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T40 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T41 = primitive_idQ(T40,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T42 = primitive_not(T41);
      T38 = T42;
    } else {
      T38 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T43 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T44_0 = KmemberQVKdMM3I(&KJlock_, T43, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T45 = T44_0;
      T46 = T45;
    } else {
      T46 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T47 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      T36 = MAKE_CLOSURE_INITD(&Kanonymous_of_automatic_finalization_enabledQF50, 1, DlockD_);
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      CALL1(T47, T36);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    res_ = primitive_release_simple_lock(DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T48 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    if (T48 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
      Klock_release_result_errorYthreads_internalVdylanMM0I(DlockD_, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    CONTINUE_UNWIND();
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T49.vector_element_[0] = &KJsynchronization_;
    T49.vector_element_[1] = DlockD_;
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T49);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T50_0 = KsignalVKdMM0I(T5, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T51_0 = T50_0;
    T6_0 = T51_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:57
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_automatic_finalization_enabledQF52I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T5.vector_element_[0] = &K36;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_automatic_finalization_enabledQF51I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T5.vector_element_[0] = &K34;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_automatic_finalization_enabledQF50I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T5.vector_element_[0] = &K31;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:58
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_finalization_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_finalization_for_user () {
{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:50
  T2_0 = KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLsimple_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:50
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:50
  Tautomatic_finalization_lockTYfinalization_internalVdylan = T1;
  // /opt/opendylan-2013.1/sources/dylan/finalization.dylan:50
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
