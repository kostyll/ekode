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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

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
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(15);

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

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

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;


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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
D Kinvalid_sequence_bounds_errorVKiI (D, D, D);
D Kinvalid_sequence_end_errorVKiI (D, D);
D Kinvalid_sequence_start_errorVKiI (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_sequenceG_typesVKi;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLsimple_methodGVKe Klast_setterVKdMM1;
extern _KLmethod_domainGVKe Klast_setterVKdRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe Kthird_setterVKdMM1;
extern _KLsimple_methodGVKe Kthird_setterVKdMM2;
extern _KLsimple_methodGVKe Ksecond_setterVKdMM1;
extern _KLsimple_methodGVKe Ksecond_setterVKdMM2;
extern _KLsimple_methodGVKe Kfirst_setterVKdMM1;
extern _KLsimple_methodGVKe Kfirst_setterVKdMM2;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM6;
D Kforward_iteration_protocolVKdMM6I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM1;
D Kbackward_iteration_protocolVKdMM1I (D sequence_);
extern _KLkeyword_methodGVKe KfillXVKdMM1;
D KfillXVKdMM1I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM1;
D Kreplace_subsequenceXVKdMM1I (D, D, D, D, D);
static _KLkeyword_signatureAvaluesGVKi K8;
static _KLsimple_object_vectorGVKd_4 K9;
static _KLsimple_object_vectorGVKd_2 K10;
static _KLsimple_object_vectorGVKd_2 K11;
static _KLsimple_object_vectorGVKd_2 K12;
static _KLbyte_stringGVKd_15 K13;
static _KLkeyword_signatureAvaluesGVKi K14;
static _KLsimple_object_vectorGVKd_2 K15;
static _KLsignatureAvaluesGVKi K16;
static _KLsimple_object_vectorGVKd_8 K17;
extern _KLincremental_generic_functionGVKe Klast_setterVKd;
extern _KLsimple_methodGVKe Klast_setterVKdMM0;
D Klast_setterVKdMM0I (D, D);
static _KLpairGVKd K21;
static _KLpairGVKd K22;
static _KLsignatureGVKe K23;
static _KLbyte_stringGVKd_11 K24;
static _KLsimple_object_vectorGVKd_2 K25;
extern _KLsealed_generic_functionGVKe Kthird_setterVKd;
extern _KLsimple_methodGVKe Kthird_setterVKdMM0;
D Kthird_setterVKdMM0I (D new_value_, D sequence_);
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLbyte_stringGVKd_12 K32;
extern _KLsealed_generic_functionGVKe Ksecond_setterVKd;
extern _KLsimple_methodGVKe Ksecond_setterVKdMM0;
D Ksecond_setterVKdMM0I (D new_value_, D sequence_);
static _KLpairGVKd K36;
static _KLpairGVKd K37;
static _KLpairGVKd K38;
static _KLbyte_stringGVKd_13 K39;
extern _KLsealed_generic_functionGVKe Kfirst_setterVKd;
extern _KLsimple_methodGVKe Kfirst_setterVKdMM0;
D Kfirst_setterVKdMM0I (D new_value_, D sequence_);
static _KLpairGVKd K43;
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLbyte_stringGVKd_12 K46;

/* Indirection variables */


/* Variables */

D first_setterVKd = &Kfirst_setterVKd;
D second_setterVKd = &Ksecond_setterVKd;
D third_setterVKd = &Kthird_setterVKd;
D last_setterVKd = &Klast_setterVKd;

/* Objects */

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K16,
  &Kforward_iteration_protocolVKdMM6I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K16,
  &Kbackward_iteration_protocolVKdMM1I
};

_KLkeyword_methodGVKe KfillXVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K14,
  &key_mep_5,
  &KfillXVKdMM1I,
  &K9
};

_KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K8,
  &key_mep_5,
  &Kreplace_subsequenceXVKdMM1I,
  &K9
};

static _KLkeyword_signatureAvaluesGVKi K8 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K10,
  &K11,
  &K12,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K9 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K10 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_sequenceGVKd,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K11 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K12 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_15 K13 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureAvaluesGVKi K14 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011913,
  &K15,
  &K11,
  &K12,
  &KDsignature_Lmutable_sequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmutable_sequenceGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K16 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_Lmutable_sequenceG_typesVKi,
  &K17
};

static _KLsimple_object_vectorGVKd_8 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

_KLincremental_generic_functionGVKe Klast_setterVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K23,
  &KPfalseVKi,
  &K24,
  &K21,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Klast_setterVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Klast_setterVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Klast_setterVKdMM0I
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &Klast_setterVKdMM0,
  &K22
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &Klast_setterVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K23 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K25
};

static _KLbyte_stringGVKd_11 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "last-setter"
};

static _KLsimple_object_vectorGVKd_2 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLmutable_sequenceGVKd
};

_KLsealed_generic_functionGVKe Kthird_setterVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K23,
  &KPfalseVKi,
  &K32,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kthird_setterVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Kthird_setterVKdMM0I
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kthird_setterVKdMM0,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &Kthird_setterVKdMM1,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &Kthird_setterVKdMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K32 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "third-setter"
};

_KLsealed_generic_functionGVKe Ksecond_setterVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K23,
  &KPfalseVKi,
  &K39,
  &K36,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Ksecond_setterVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Ksecond_setterVKdMM0I
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Ksecond_setterVKdMM0,
  &K37
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Ksecond_setterVKdMM1,
  &K38
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &Ksecond_setterVKdMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K39 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "second-setter"
};

_KLsealed_generic_functionGVKe Kfirst_setterVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K23,
  &KPfalseVKi,
  &K46,
  &K43,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kfirst_setterVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Kfirst_setterVKdMM0I
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Kfirst_setterVKdMM0,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Kfirst_setterVKdMM1,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kfirst_setterVKdMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "first-setter"
};

/* Code */

D Kforward_iteration_protocolVKdMM6I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:215
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:214
  T4_0 = (D) 1;
  T4_1 = T2;
  T4_2 = &Ksequence_next_stateVKe;
  T4_3 = &Ksequence_finished_stateQVKe;
  T4_4 = &Ksequence_current_keyVKe;
  T4_5 = &KelementVKd;
  T4_6 = &Kelement_setterVKd;
  T4_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:208
  T3_0 = T4_0;
  T3_1 = T4_1;
  T3_2 = T4_2;
  T3_3 = T4_3;
  T3_4 = T4_4;
  T3_5 = T4_5;
  T3_6 = T4_6;
  T3_7 = T4_7;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:208
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kbackward_iteration_protocolVKdMM1I (D sequence_) {
  D T2;
  D T3;
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D T5_0;
  D T5_1;
  D T5_2;
  D T5_3;
  D T5_4;
  D T5_5;
  D T5_6;
  D T5_7;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:225
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:231
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:231
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T3 = CONGRUENT_CALL2(T2, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:231
  T5_0 = T3;
  T5_1 = (D) -3;
  T5_2 = &Ksequence_previous_stateVKe;
  T5_3 = &Ksequence_finished_stateQVKe;
  T5_4 = &Ksequence_current_keyVKe;
  T5_5 = &KelementVKd;
  T5_6 = &Kelement_setterVKd;
  T5_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:225
  T4_0 = T5_0;
  T4_1 = T5_1;
  T4_2 = T5_2;
  T4_3 = T5_3;
  T4_4 = T5_4;
  T4_5 = T5_5;
  T4_6 = T5_6;
  T4_7 = T5_7;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:225
  MV_SET_ELT(1, T4_1);
  MV_SET_ELT(2, T4_2);
  MV_SET_ELT(3, T4_3);
  MV_SET_ELT(4, T4_4);
  MV_SET_ELT(5, T4_5);
  MV_SET_ELT(6, T4_6);
  MV_SET_ELT(7, T4_7);
  MV_SET_COUNT(8);
  return(T4_0);
}

D KfillXVKdMM1I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D T8_0;
  D T8_1;
  D T8_2;
  D T8_3;
  D T8_4;
  D T8_5;
  D T8_6;
  D T8_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_setter_;
  D stateF14T, stateF14;
  DWORD indexF15T, indexF15;
  D T16;
  D T17;
  D T18;
  D stateF19T, stateF19;
  D T20;
  D T21;
  D lastF22;
  D stateF23T, stateF23;
  D indexF24T, indexF24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29_0;
  D T30_0;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42_0;
  D T43;
  DWORD T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:163
  T32 = primitive_copy_vector(Urest_);
  T31 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:163
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
  T33 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
  T34 = primitive_machine_word_equalQ(T33,1);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
    T35 = primitive_idQ(last_,&Kunsupplied_objectVKi);
    T7 = T35;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
    T38 = primitive_idQ(T31,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
      T41 = KerrorVKdMM1I(&K13, &KPempty_vectorVKi);
      T37 = T41;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
      T39 = SLOT_VALUE_INITD(T31, 0);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
      T40 = SLOT_VALUE_INITD(T31, 1);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
      MEP_CALL_PROLOG(T39, T40, 3);
      T36 = MEP_CALL3(T39, target_, value_, T32);
      T37 = T36;
    }
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
    T42_0 = T37;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
    T51_0 = T42_0;
    T30_0 = T51_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:169
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T8_0 = CONGRUENT_CALL1(target_);
    T8_1 = MV_GET_ELT(1);
    T8_2 = MV_GET_ELT(2);
    T8_3 = MV_GET_ELT(3);
    T8_4 = MV_GET_ELT(4);
    T8_5 = MV_GET_ELT(5);
    T8_6 = MV_GET_ELT(6);
    T8_7 = MV_GET_ELT(7);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:169
    initial_state_ = T8_0;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:169
    limit_ = T8_1;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:169
    next_state_ = T8_2;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:169
    finished_stateQ_ = T8_3;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:169
    current_element_setter_ = T8_6;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
    stateF14T = initial_state_;
    indexF15T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
      stateF14 = stateF14T;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
      indexF15 = indexF15T;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
      T45 = primitive_cast_raw_as_integer(indexF15);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:172
      T43 = primitive_idQ(startF6,T45);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:172
      if (T43 != &KPfalseVKi) {
        T18 = T43;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:172
        T17 = CALL3(finished_stateQ_, target_, stateF14, limit_);
        T18 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:172
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
      if (T18 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
        T16 = CALL2(next_state_, target_, stateF14);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
        T44 = primitive_machine_word_add_signal_overflow(indexF15,4);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
        stateF14T = T16;
        indexF15T = T44;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:175
      T46 = primitive_idQ(T45,startF6);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:174
      if (T46 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:176
        T47 = primitive_idQ(last_,&Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:174
        if (T47 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:178
          stateF19T = stateF14;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:178
            stateF19 = stateF19T;
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:179
            T21 = CALL3(finished_stateQ_, target_, stateF19, limit_);
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:178
            if (T21 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:180
              CALL3(current_element_setter_, value_, target_, stateF19);
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:178
              T20 = CALL2(next_state_, target_, stateF19);
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:178
              stateF19T = T20;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:178
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:178
        } else {
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:182
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T48 = CONGRUENT_CALL2(last_, T45);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:174
          if (T48 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:195
            Kinvalid_sequence_bounds_errorVKiI(target_, startF6, last_);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:185
            lastF22 = last_;
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
            stateF23T = stateF14;
            indexF24T = T45;
          L2: ;
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
              stateF23 = stateF23T;
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
              indexF24 = indexF24T;
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:188
              T49 = primitive_idQ(indexF24,lastF22);
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:188
              if (T49 != &KPfalseVKi) {
                T28 = T49;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:188
                T27 = CALL3(finished_stateQ_, target_, stateF23, limit_);
                T28 = T27;
              }
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:188
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
              if (T28 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:189
                CALL3(current_element_setter_, value_, target_, stateF23);
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
                T25 = CALL2(next_state_, target_, stateF23);
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
                CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                T26 = CONGRUENT_CALL2(indexF24, (D) 5);
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
                stateF23T = T25;
                indexF24T = T26;
                goto L2;
              }
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:191
              T50 = primitive_idQ(indexF24,lastF22);
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:191
              if (T50 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:192
                Kinvalid_sequence_end_errorVKiI(target_, lastF22);
              }
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:191
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:186
          }
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:174
        }
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:174
      } else {
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:175
        Kinvalid_sequence_start_errorVKiI(target_, startF6);
      }
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:174
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:170
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:199
    T29_0 = target_;
    T30_0 = T29_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:163
  MV_SET_COUNT(1);
  return(T30_0);
}

D Kreplace_subsequenceXVKdMM1I (D target_, D insert_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  D target_size_;
  D T9;
  D insert_size_;
  D T11;
  D T12_0;
  D T12_1;
  D T12_2;
  D T12_3;
  D T12_4;
  D T12_5;
  D T12_6;
  D T12_7;
  D initial_stateF13;
  D next_stateF14;
  D current_element_setterF15;
  D stateF16T, stateF16;
  DWORD indexF17T, indexF17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D stateF25T, stateF25;
  D T26T, T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T32;
  D new_target_;
  D T34_0;
  D T34_1;
  D T34_2;
  D T34_3;
  D T34_4;
  D T34_5;
  D T34_6;
  D T34_7;
  D initial_stateF35;
  D next_stateF36;
  D current_element_setterF37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D stateF45T, stateF45;
  D T46T, T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51_0;
  D T51_1;
  D T51_2;
  D T51_3;
  D T51_4;
  D T51_5;
  D T51_6;
  D T51_7;
  D o_initial_state_;
  D o_next_state_;
  D o_current_element_;
  D stateF55T, stateF55;
  D o_stateF56T, o_stateF56;
  DWORD indexF57T, indexF57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  D stateF67T, stateF67;
  D T68T, T68;
  D T69;
  D T70;
  D T71;
  D T72;
  D o_stateF73T, o_stateF73;
  D indexF74T, indexF74;
  D T75;
  D T76;
  D T77;
  D stateF78T, stateF78;
  D o_stateF79T, o_stateF79;
  D indexF80T, indexF80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86_0;
  D T87_0;
  DWORD T88;
  DWORD T89;
  DWORD T90;
  DWORD T91;
  DWORD T92;
  D T93;
  DWORD T94;
  D T95;
  DWORD T96;
  DWORD T97;
  DWORD T98;
  DWORD T99;
  DWORD T100;
  DWORD T101;
  DWORD T102;
  D T103;
  _KLsimple_object_vectorGVKd_2 T104 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T105;
  D T106;
  DWORD T107;
  DWORD T108;
  D T109;
  DWORD T110;
  D T111;
  DWORD T112;
  DWORD T113;
  DWORD T114;
  D T115;
  D T116_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:88
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:92
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T7 = CONGRUENT_CALL1(target_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:92
  target_size_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:93
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T9 = CONGRUENT_CALL1(insert_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:93
  insert_size_ = T9;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:94
  T11 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:95
  T88 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:95
  T89 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:95
  T90 = primitive_machine_word_logxor(T89,1);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:95
  T91 = primitive_machine_word_subtract_signal_overflow(T88,T90);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:97
  T92 = primitive_cast_integer_as_raw(insert_size_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:97
  T93 = primitive_machine_word_equalQ(T91,T92);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:97
  if (T93 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:99
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T12_0 = CONGRUENT_CALL1(target_);
    T12_1 = MV_GET_ELT(1);
    T12_2 = MV_GET_ELT(2);
    T12_3 = MV_GET_ELT(3);
    T12_4 = MV_GET_ELT(4);
    T12_5 = MV_GET_ELT(5);
    T12_6 = MV_GET_ELT(6);
    T12_7 = MV_GET_ELT(7);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:99
    initial_stateF13 = T12_0;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:99
    next_stateF14 = T12_2;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:99
    current_element_setterF15 = T12_6;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
    stateF16T = initial_stateF13;
    indexF17T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
      stateF16 = stateF16T;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
      indexF17 = indexF17T;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
      T94 = primitive_cast_integer_as_raw(startF6);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
      T95 = primitive_machine_word_less_thanQ(indexF17,T94);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
      if (T95 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
        T18 = CALL2(next_stateF14, target_, stateF16);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
        T96 = primitive_machine_word_add_signal_overflow(indexF17,4);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
        stateF16T = T18;
        indexF17T = T96;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T19 = CONGRUENT_CALL1(insert_);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      T20 = T19;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      T21 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      T22 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      T23 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      T24 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      stateF25T = stateF16;
      T26T = T20;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
        stateF25 = stateF25T;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
        T26 = T26T;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
        T27 = CALL3(T23, insert_, T26, T21);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
        if (T27 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
          T28 = CALL2(T24, insert_, T26);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:105
          CALL3(current_element_setterF15, T28, target_, stateF25);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
          T29 = CALL2(next_stateF14, target_, stateF25);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
          T30 = CALL2(T22, insert_, T26);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
          stateF25T = T29;
          T26T = T30;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:103
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:100
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:109
    T31_0 = target_;
    T87_0 = T31_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:112
    T97 = primitive_cast_integer_as_raw(target_size_);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:112
    T98 = primitive_machine_word_logxor(T91,1);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:112
    T99 = primitive_machine_word_subtract_signal_overflow(T97,T98);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:112
    T100 = primitive_cast_integer_as_raw(insert_size_);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:112
    T101 = primitive_machine_word_logxor(T100,1);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:112
    T102 = primitive_machine_word_add_signal_overflow(T99,T101);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:112
    T103 = primitive_cast_raw_as_integer(T102);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:113
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T32 = CONGRUENT_CALL1(target_);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:113
    T104.vector_element_[0] = &KJsize_;
    T104.vector_element_[1] = T103;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:113
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    new_target_ = CONGRUENT_CALL2(T32, &T104);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:114
    T34_0 = CALL1(&Kforward_iteration_protocolVKd, new_target_);
    T34_1 = MV_GET_ELT(1);
    T34_2 = MV_GET_ELT(2);
    T34_3 = MV_GET_ELT(3);
    T34_4 = MV_GET_ELT(4);
    T34_5 = MV_GET_ELT(5);
    T34_6 = MV_GET_ELT(6);
    T34_7 = MV_GET_ELT(7);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:114
    initial_stateF35 = T34_0;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:114
    next_stateF36 = T34_2;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:114
    current_element_setterF37 = T34_6;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
    T105 = primitive_cast_integer_as_raw(startF6);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
    T106 = primitive_machine_word_equalQ(T105,1);
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
    if (T106 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
      T107 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
      T108 = primitive_cast_integer_as_raw(target_size_);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
      T109 = primitive_machine_word_equalQ(T107,T108);
      T38 = T109;
    } else {
      T38 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T39 = CONGRUENT_CALL1(insert_);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
      T40 = T39;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
      T41 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
      T42 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
      T43 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
      T44 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
      stateF45T = initial_stateF35;
      T46T = T40;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
        stateF45 = stateF45T;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
        T46 = T46T;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
        T47 = CALL3(T43, insert_, T46, T41);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
        if (T47 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
          T48 = CALL2(T44, insert_, T46);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:119
          CALL3(current_element_setterF37, T48, new_target_, stateF45);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
          T49 = CALL2(next_stateF36, new_target_, stateF45);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
          T50 = CALL2(T42, insert_, T46);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
          stateF45T = T49;
          T46T = T50;
          goto L2;
        }
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:117
    } else {
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:123
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T51_0 = CONGRUENT_CALL1(target_);
      T51_1 = MV_GET_ELT(1);
      T51_2 = MV_GET_ELT(2);
      T51_3 = MV_GET_ELT(3);
      T51_4 = MV_GET_ELT(4);
      T51_5 = MV_GET_ELT(5);
      T51_6 = MV_GET_ELT(6);
      T51_7 = MV_GET_ELT(7);
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:123
      o_initial_state_ = T51_0;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:123
      o_next_state_ = T51_2;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:123
      o_current_element_ = T51_5;
      // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
      stateF55T = initial_stateF35;
      o_stateF56T = o_initial_state_;
      indexF57T = 1;
    L3: ;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
        stateF55 = stateF55T;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
        o_stateF56 = o_stateF56T;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
        indexF57 = indexF57T;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
        T110 = primitive_cast_integer_as_raw(startF6);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
        T111 = primitive_machine_word_less_thanQ(indexF57,T110);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
        if (T111 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:128
          T58 = CALL2(o_current_element_, target_, o_stateF56);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:127
          CALL3(current_element_setterF37, T58, new_target_, stateF55);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
          T59 = CALL2(next_stateF36, new_target_, stateF55);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:125
          T60 = CALL2(o_next_state_, target_, o_stateF56);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
          T112 = primitive_machine_word_add_signal_overflow(indexF57,4);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
          stateF55T = T59;
          o_stateF56T = T60;
          indexF57T = T112;
          goto L3;
        }
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
        T61 = CONGRUENT_CALL1(insert_);
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        T62 = T61;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        T63 = MV_GET_ELT(1);
;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        T64 = MV_GET_ELT(2);
;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        T65 = MV_GET_ELT(3);
;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        T66 = MV_GET_ELT(5);
;
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        stateF67T = stateF55;
        T68T = T62;
      L4: ;
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
          stateF67 = stateF67T;
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
          T68 = T68T;
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
          T69 = CALL3(T65, insert_, T68, T63);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
          if (T69 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
            T70 = CALL2(T66, insert_, T68);
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:132
            CALL3(current_element_setterF37, T70, new_target_, stateF67);
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
            T71 = CALL2(next_stateF36, new_target_, stateF67);
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
            T72 = CALL2(T64, insert_, T68);
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
            stateF67T = T71;
            T68T = T72;
            goto L4;
          }
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:134
          T113 = primitive_cast_integer_as_raw(T11);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:134
          T114 = primitive_cast_integer_as_raw(target_size_);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:134
          T115 = primitive_machine_word_equalQ(T113,T114);
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:134
          if (T115 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
            o_stateF73T = o_stateF56;
            indexF74T = startF6;
          L5: ;
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
              o_stateF73 = o_stateF73T;
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
              indexF74 = indexF74T;
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
              CONGRUENT_CALL_PROLOG(&KLVKd, 2);
              T75 = CONGRUENT_CALL2(indexF74, T11);
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
              if (T75 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
                T76 = CALL2(next_stateF36, target_, o_stateF73);
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
                CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                T77 = CONGRUENT_CALL2(indexF74, (D) 5);
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
                o_stateF73T = T76;
                indexF74T = T77;
                goto L5;
              }
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
              stateF78T = stateF67;
              o_stateF79T = o_stateF73;
              indexF80T = T11;
            L6: ;
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                stateF78 = stateF78T;
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                o_stateF79 = o_stateF79T;
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                indexF80 = indexF80T;
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                CONGRUENT_CALL_PROLOG(&KLVKd, 2);
                T81 = CONGRUENT_CALL2(indexF80, target_size_);
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                if (T81 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:145
                  T82 = CALL2(o_current_element_, target_, o_stateF79);
                  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:144
                  CALL3(current_element_setterF37, T82, new_target_, stateF78);
                  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                  T83 = CALL2(next_stateF36, new_target_, stateF78);
                  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:142
                  T84 = CALL2(o_next_state_, target_, o_stateF79);
                  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                  T85 = CONGRUENT_CALL2(indexF80, (D) 5);
                  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                  stateF78T = T83;
                  o_stateF79T = T84;
                  indexF80T = T85;
                  goto L6;
                }
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
                // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:140
              // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:137
          }
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:134
          // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:130
        // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:124
    }
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:115
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:154
    T86_0 = new_target_;
    // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:154
    T116_0 = T86_0;
    T87_0 = T116_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:97
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:88
  MV_SET_COUNT(1);
  return(T87_0);
}

D Klast_setterVKdMM0I (D new_value_, D sequence_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:75
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:75
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T4 = CONGRUENT_CALL2(T3, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:75
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(new_value_, sequence_, T4);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:75
  T5_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:73
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kthird_setterVKdMM0I (D new_value_, D sequence_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:63
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:65
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(new_value_, sequence_, (D) 9);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:65
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:63
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksecond_setterVKdMM0I (D new_value_, D sequence_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:53
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:55
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(new_value_, sequence_, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:55
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:53
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kfirst_setterVKdMM0I (D new_value_, D sequence_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:43
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:45
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(new_value_, sequence_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:45
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/mutable-sequence.dylan:43
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_mutable_sequence_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_mutable_sequence_for_user () {
  return;
}


/* eof */
