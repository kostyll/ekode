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
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D class_properties_;
  D iclass_class_;
  D class_mm_wrapper_;
  D repeated_slot_descriptor_;
  D instance_slot_descriptors_;
  D iclass_dispatch_key_;
  D class_constructor_;
  D direct_superclasses_;
  D class_rcpl_vector_;
  D class_rcpl_position_;
  D class_rcpl_other_positions_;
  D class_known_joint_;
  D iclass_dependent_generics_;
  D iclass_subclass_dependent_generics_;
  D direct_subclasses_;
  D direct_methods_;
  D direct_slot_descriptors_;
  D slot_descriptors_;
  D direct_inherited_slot_descriptors_;
  D direct_initialization_argument_descriptors_;
  D class_slot_descriptors_;
  D defaulted_initialization_arguments_slot_;
  D class_slot_storage_;
} _KLimplementation_classGVKe;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_conditionGVKe;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_errorGVKd;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLinstance_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLassert_errorGVKi;


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
D Kconcatenate_asVKdMM0I (D type_, D first_seq_, D rest_seqs_);
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D KcerrorVKdMM0I (D restart_descr_, D cond_or_string_, D arguments_);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLsimple_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_errorGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
D KerrorVKdMM0I (D condition_, D noise_);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
D KapplyVKdI (D function_, D arguments_);
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
D KmemberQVKdMM3I (D value_, D list_, D Urest_, D test_);
extern _KLsimple_methodGVKe KEEVKd;

/* Defined object declarations */

D Kassertion_failureVKiI (D, D);
D Kdebug_assertion_failureVKiI (D, D);
static _KLbyte_stringGVKd_24 K2;
extern _KLclassGVKd KLassert_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLassert_errorGVKiW;
static _KLbyte_stringGVKd_19 K5;
static _KLimplementation_classGVKe K6;
static _KLsimple_object_vectorGVKd_2 K7;
extern _KLkeyword_methodGVKe KLassert_errorGZ32ZconstructorVKiMM0;
D KLassert_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K10;
static _KLsimple_object_vectorGVKd_7 K11;
static _KLkeyword_signatureAvaluesGVKi K12;
static _KLsimple_object_vectorGVKd_4 K13;
static _KLsimple_object_vectorGVKd_2 K14;
static _KLsimple_object_vectorGVKd_1 K15;
static _KLbyte_stringGVKd_14 K16;
static _KLbyte_stringGVKd_18 K17;
extern _KLsimple_methodGVKe Kdebug_assertion_failureVKi;
static _KLsignatureGVKe K19;
extern _KLsimple_methodGVKe Kassertion_failureVKi;
static _KLsignatureGVKe K21;
extern _KLsimple_methodGVKe Kdefault_debug_outVKi;
D Kdefault_debug_outVKiI (D);
extern _KLsimple_methodGVKe Kdebug_messageYsimple_debuggingVdylanMM0;
D Kdebug_messageYsimple_debuggingVdylanMM0I (D, D);
static _KLsignatureGVKe K26;
extern _KLsimple_methodGVKe KdebuggingQYsimple_debuggingVdylanMM0;
D KdebuggingQYsimple_debuggingVdylanMM0I ();
static _KLsignatureAvaluesGVKi K29;
extern _KLsimple_methodGVKe KdebuggingQ_setterYsimple_debuggingVdylanMM0;
D KdebuggingQ_setterYsimple_debuggingVdylanMM0I (D debuggingQ_);
static _KLsignatureAvaluesGVKi K32;
extern _KLsimple_methodGVKe Kdebug_partsYsimple_debuggingVdylanMM0;
D Kdebug_partsYsimple_debuggingVdylanMM0I ();
static _KLsignatureAvaluesGVKi K35;
extern _KLsimple_methodGVKe Kdebug_parts_setterYsimple_debuggingVdylanMM0;
D Kdebug_parts_setterYsimple_debuggingVdylanMM0I (D parts_);
static _KLsignatureAvaluesGVKi K38;
extern _KLsimple_methodGVKe Kdebugging_partQYsimple_debuggingVdylanMM0;
D Kdebugging_partQYsimple_debuggingVdylanMM0I (D part_);
static _KLsignatureAvaluesGVKi K41;
static _KLsimple_object_vectorGVKd_1 K42;
extern _KLsimple_methodGVKe Kdebug_out_functionYsimple_debuggingVdylanMM0;
D Kdebug_out_functionYsimple_debuggingVdylanMM0I ();
static _KLsignatureAvaluesGVKi K45;
extern _KLsimple_methodGVKe Kdebug_out_function_setterYsimple_debuggingVdylanMM0;
D Kdebug_out_function_setterYsimple_debuggingVdylanMM0I (D function_);
static _KLsignatureAvaluesGVKi K48;

/* Indirection variables */


/* Variables */

D debug_out_function_setterYsimple_debuggingVdylan = &Kdebug_out_function_setterYsimple_debuggingVdylanMM0;
D debug_out_functionYsimple_debuggingVdylan = &Kdebug_out_functionYsimple_debuggingVdylanMM0;
D debug_messageYsimple_debuggingVdylan = &Kdebug_messageYsimple_debuggingVdylanMM0;
D debugging_partQYsimple_debuggingVdylan = &Kdebugging_partQYsimple_debuggingVdylanMM0;
D debug_parts_setterYsimple_debuggingVdylan = &Kdebug_parts_setterYsimple_debuggingVdylanMM0;
D debug_partsYsimple_debuggingVdylan = &Kdebug_partsYsimple_debuggingVdylanMM0;
D debuggingQ_setterYsimple_debuggingVdylan = &KdebuggingQ_setterYsimple_debuggingVdylanMM0;
D debuggingQYsimple_debuggingVdylan = &KdebuggingQYsimple_debuggingVdylanMM0;
D TdebuggingQTVKi = &KPfalseVKi;
D Tdebug_partsTVKi = &KPempty_listVKi;
D Tdebug_out_functionTVKi = &Kdefault_debug_outVKi;
D default_debug_outVKi = &Kdefault_debug_outVKi;
D Lassert_errorGVKi = &KLassert_errorGVKi;
D assertion_failureVKi = &Kassertion_failureVKi;
D debug_assertion_failureVKi = &Kdebug_assertion_failureVKi;

/* Objects */

static _KLbyte_stringGVKd_24 K2 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "Debug assertion failed: "
};

_KLclassGVKd KLassert_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K16,
  &K6,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLassert_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K6,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLbyte_stringGVKd_19 K5 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "Carry on regardless"
};

static _KLimplementation_classGVKe K6 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLassert_errorGVKi,
  &KLassert_errorGVKiW,
  &KPfalseVKi,
  &K7,
  (D) 6081,
  &KLassert_errorGZ32ZconstructorVKiMM0,
  &K10,
  &K11,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K7,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K7 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLassert_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K12,
  &key_mep_2,
  &KLassert_errorGZ32ZconstructorVKiMM0I,
  &K13
};

static _KLsimple_object_vectorGVKd_1 K10 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K11 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLassert_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K12 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K14,
  &KDsignature_LobjectG_typesVKi,
  &K15
};

static _KLsimple_object_vectorGVKd_4 K13 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K14 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLassert_errorGVKi
};

static _KLbyte_stringGVKd_14 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<assert-error>"
};

static _KLbyte_stringGVKd_18 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "Assertion failed: "
};

_KLsimple_methodGVKe Kdebug_assertion_failureVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K19,
  &Kdebug_assertion_failureVKiI
};

static _KLsignatureGVKe K19 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991621,
  &KDsignature_LstringG_typesVKi
};

_KLsimple_methodGVKe Kassertion_failureVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K21,
  &Kassertion_failureVKiI
};

static _KLsignatureGVKe K21 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LstringG_typesVKi
};

_KLsimple_methodGVKe Kdefault_debug_outVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K26,
  &Kdefault_debug_outVKiI
};

_KLsimple_methodGVKe Kdebug_messageYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K19,
  &Kdebug_messageYsimple_debuggingVdylanMM0I
};

static _KLsignatureGVKe K26 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LfunctionG_typesVKi
};

_KLsimple_methodGVKe KdebuggingQYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K29,
  &KdebuggingQYsimple_debuggingVdylanMM0I
};

static _KLsignatureAvaluesGVKi K29 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe KdebuggingQ_setterYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K32,
  &KdebuggingQ_setterYsimple_debuggingVdylanMM0I
};

static _KLsignatureAvaluesGVKi K32 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LbooleanG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kdebug_partsYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K35,
  &Kdebug_partsYsimple_debuggingVdylanMM0I
};

static _KLsignatureAvaluesGVKi K35 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_LlistG_typesVKi
};

_KLsimple_methodGVKe Kdebug_parts_setterYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K38,
  &Kdebug_parts_setterYsimple_debuggingVdylanMM0I
};

static _KLsignatureAvaluesGVKi K38 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

_KLsimple_methodGVKe Kdebugging_partQYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K41,
  &Kdebugging_partQYsimple_debuggingVdylanMM0I
};

static _KLsignatureAvaluesGVKi K41 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K42,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

_KLsimple_methodGVKe Kdebug_out_functionYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K45,
  &Kdebug_out_functionYsimple_debuggingVdylanMM0I
};

static _KLsignatureAvaluesGVKi K45 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_LfunctionG_typesVKi
};

_KLsimple_methodGVKe Kdebug_out_function_setterYsimple_debuggingVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K48,
  &Kdebug_out_function_setterYsimple_debuggingVdylanMM0I
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

/* Code */

D Kassertion_failureVKiI (D format_string_, D format_arguments_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D format_stringF6;
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:105
  T4 = primitive_copy_vector(format_arguments_);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:108
  T5.vector_element_[0] = format_string_;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:108
  format_stringF6 = Kconcatenate_asVKdMM0I(&KLstringGVKd, &K17, &T5);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:109
  T7.vector_element_[0] = &KJformat_string_;
  T7.vector_element_[1] = format_stringF6;
  T7.vector_element_[2] = &KJformat_arguments_;
  T7.vector_element_[3] = T4;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:109
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLassert_errorGVKi, &T7);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:109
  T8 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:105
  return(T8);
}

D Kdebug_assertion_failureVKiI (D format_string_, D format_arguments_) {
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D format_stringF7;
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:114
  T5 = primitive_copy_vector(format_arguments_);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:117
  T6.vector_element_[0] = format_string_;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:117
  format_stringF7 = Kconcatenate_asVKdMM0I(&KLstringGVKd, &K2, &T6);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:119
  T8.vector_element_[0] = &KJformat_string_;
  T8.vector_element_[1] = format_stringF7;
  T8.vector_element_[2] = &KJformat_arguments_;
  T8.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:119
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLassert_errorGVKi, &T8);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:118
  T4 = KcerrorVKdMM0I(&K5, T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:114
  MV_SET_COUNT(0);
  return(T4);
}

D KLassert_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:102
  T5 = primitive_object_allocate_filled(3,&KLassert_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:102
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kdefault_debug_outVKiI (D closure_) {
  D arguments_;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:72
  arguments_ = CALL0(closure_);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:73
  T4.vector_element_[0] = arguments_;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:73
  T3 = KapplyVKdI(&Kdebug_messageYsimple_debuggingVdylanMM0, &T4);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:70
  MV_SET_COUNT(0);
  return(T3);
}

D Kdebug_messageYsimple_debuggingVdylanMM0I (D format_string_, D format_args_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:43
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLbyte_stringGVKd, format_string_);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:43
  primitive_debug_message(T3,format_args_);
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:43
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:41
  MV_SET_COUNT(0);
  return(T4);
}

D KdebuggingQYsimple_debuggingVdylanMM0I () {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:16
  T1 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:16
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:14
  MV_SET_COUNT(1);
  return(T2_0);
}

D KdebuggingQ_setterYsimple_debuggingVdylanMM0I (D debuggingQ_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:19
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:21
  T2 = TdebuggingQTVKi = debuggingQ_;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:21
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:19
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kdebug_partsYsimple_debuggingVdylanMM0I () {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:26
  T1 = Tdebug_partsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:26
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:24
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdebug_parts_setterYsimple_debuggingVdylanMM0I (D parts_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:31
  T2 = Tdebug_partsTVKi = parts_;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:31
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:29
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kdebugging_partQYsimple_debuggingVdylanMM0I (D part_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:34
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
  T5 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
    T6 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
    T7 = primitive_idQ(T6,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
    T8 = primitive_not(T7);
    T2 = T8;
  } else {
    T2 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
    T9 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
    T10_0 = KmemberQVKdMM3I(part_, T9, &KPempty_vectorVKi, &KEEVKd);
    T4_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:34
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kdebug_out_functionYsimple_debuggingVdylanMM0I () {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:62
  T1 = Tdebug_out_functionTVKi;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:62
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:60
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdebug_out_function_setterYsimple_debuggingVdylanMM0I (D function_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:67
  T2 = Tdebug_out_functionTVKi = function_;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:67
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/debugging.dylan:65
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_debugging_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_debugging_for_user () {
  return;
}


/* eof */
