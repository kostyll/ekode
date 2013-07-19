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
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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

typedef struct {
  D wrapper;
  D synchronization_;
} _KLsynchronization_creation_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(1);

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
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(20);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLsynchronization_finalization_errorGYthreads_internalVdylan;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
  D associated_lock_;
} _KLnotificationGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLlockGYthreadsVdylan;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLsynchronizationGYthreadsVdylan;


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
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsynchronization_creation_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronization_creation_errorGYthreads_internalVdylanW;
D KerrorVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLstandalone_domainGVKe_1 Ksynchronization_nameYthreadsVdylanRD_dylanRD_0;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kthreads_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLunionGVKe KLoptional_nameGYthreads_primitivesVdylan;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLsynchronization_finalization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronization_finalization_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM0;
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM1;
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM2;
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM3;
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM4;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_1;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_2;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_3;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_4;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM0;
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM1;
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM2;
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM3;
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM4;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_0;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_1;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_2;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_3;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_4;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJtimeout_;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LrealG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLsealed_generic_functionGVKe KroundVKd;
extern _KLclassGVKd KLnotificationGYthreadsVdylan;
extern _KLclassGVKd KLlockGYthreadsVdylan;

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe KmillisecsYthreads_internalVdylan;
extern _KLsimple_methodGVKe Kdebug_nameVKeMM4;
D Kdebug_nameVKeMM4I (D);
extern _KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan;
extern _KLincremental_generic_functionGVKe KreleaseYthreadsVdylan;
extern _KLclassGVKd KLsynchronizationGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronizationGYthreadsVdylanW;
extern _KLinstance_slot_descriptorGVKe Ksynchronization_nameYthreadsVdylanHLsynchronizationG;
D Kcheck_synchronization_finalizationYthreads_internalVdylanI (D, D);
extern _KLincremental_generic_functionGVKe Ksynchronization_nameYthreadsVdylan;
D Kcheck_synchronization_creationYthreads_internalVdylanI (D, D);
extern _KLgetter_methodGVKi Ksynchronization_nameYthreadsVdylanMM0;
static _KLpairGVKd K12;
static _KLsignatureAvaluesGVKi K13;
static _KLbyte_stringGVKd_20 K14;
static _KLsimple_object_vectorGVKd_1 K15;
static _KLsimple_object_vectorGVKd_1 K16;
static _KLimplementation_classGVKe K17;
static _KLsimple_object_vectorGVKd_1 K18;
static _KLsimple_object_vectorGVKd_1 K19;
static _KLsimple_object_vectorGVKd_6 K20;
static _KLbyte_stringGVKd_17 K21;
static _KLpairGVKd K22;
static _KLpairGVKd K23;
static _KLpairGVKd K24;
static _KLpairGVKd K25;
static _KLpairGVKd K26;
static _KLkeyword_signatureGVKe K27;
static _KLbyte_stringGVKd_7 K28;
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLpairGVKd K32;
static _KLpairGVKd K33;
static _KLkeyword_signatureGVKe K34;
static _KLbyte_stringGVKd_8 K35;
static _KLsimple_object_vectorGVKd_1 K36;
static _KLsignatureGVKe K37;
extern _KLsimple_methodGVKe KmillisecsYthreads_internalVdylanMM0;
D KmillisecsYthreads_internalVdylanMM0I (D);
extern _KLsimple_methodGVKe KmillisecsYthreads_internalVdylanMM1;
D KmillisecsYthreads_internalVdylanMM1I (D);
static _KLpairGVKd K42;
static _KLpairGVKd K43;
static _KLsignatureAvaluesGVKi K44;
static _KLbyte_stringGVKd_9 K45;
static _KLsignatureAvaluesGVKi K46;
static _KLpairGVKd K47;
static _KLpairGVKd K48;

/* Indirection variables */


/* Variables */

D LsynchronizationGYthreadsVdylan = &KLsynchronizationGYthreadsVdylan;
D synchronization_nameYthreadsVdylan = &Ksynchronization_nameYthreadsVdylan;
D wait_forYthreadsVdylan = &Kwait_forYthreadsVdylan;
D releaseYthreadsVdylan = &KreleaseYthreadsVdylan;
D millisecsYthreads_internalVdylan = &KmillisecsYthreads_internalVdylan;

/* Objects */

_KLsealed_generic_functionGVKe KmillisecsYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K44,
  (D) 1,
  &K45,
  &K42,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kdebug_nameVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K37,
  &Kdebug_nameVKeMM4I
};

_KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K34,
  &KPfalseVKi,
  &K35,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kthreads_moduleYdylan_userVdylan,
  &Kwait_forYthreadsVdylanRD_dylanRD_4,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe KreleaseYthreadsVdylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K27,
  &KPfalseVKi,
  &K28,
  &K22,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kthreads_moduleYdylan_userVdylan,
  &KreleaseYthreadsVdylanRD_dylanRD_4,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLsynchronizationGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K21,
  &K17,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsynchronizationGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K17,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLinstance_slot_descriptorGVKe Ksynchronization_nameYthreadsVdylanHLsynchronizationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLsynchronizationGYthreadsVdylan,
  &KJname_,
  &Ksynchronization_nameYthreadsVdylan,
  &KPfalseVKi,
  &KLoptional_nameGYthreads_primitivesVdylan
};

_KLincremental_generic_functionGVKe Ksynchronization_nameYthreadsVdylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K13,
  (D) 1,
  &K14,
  &K12,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kthreads_moduleYdylan_userVdylan,
  &Ksynchronization_nameYthreadsVdylanRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLgetter_methodGVKi Ksynchronization_nameYthreadsVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &Ksynchronization_nameYthreadsVdylanMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K13 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K15,
  &K16
};

static _KLbyte_stringGVKd_20 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "synchronization-name"
};

static _KLsimple_object_vectorGVKd_1 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsynchronizationGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_1 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLoptional_nameGYthreads_primitivesVdylan
};

static _KLimplementation_classGVKe K17 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 308543493,
  &KLsynchronizationGYthreadsVdylan,
  &KLsynchronizationGYthreadsVdylanW,
  &KPfalseVKi,
  &K18,
  (D) 7201,
  &Kdefault_class_constructorVKi,
  &K19,
  &K20,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K47,
  &KPempty_vectorVKi,
  &K18,
  &K18,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K18 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG
};

static _KLsimple_object_vectorGVKd_1 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_17 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<synchronization>"
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &KreleaseYthreadsVdylanMM0,
  &K23
};

static _KLpairGVKd K23 = {
  &KLpairGVKdW /* wrapper */,
  &KreleaseYthreadsVdylanMM1,
  &K24
};

static _KLpairGVKd K24 = {
  &KLpairGVKdW /* wrapper */,
  &KreleaseYthreadsVdylanMM2,
  &K25
};

static _KLpairGVKd K25 = {
  &KLpairGVKdW /* wrapper */,
  &KreleaseYthreadsVdylanMM3,
  &K26
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &KreleaseYthreadsVdylanMM4,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K27 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K15,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_7 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "release"
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kwait_forYthreadsVdylanMM0,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &Kwait_forYthreadsVdylanMM1,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &Kwait_forYthreadsVdylanMM2,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &Kwait_forYthreadsVdylanMM3,
  &K33
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &Kwait_forYthreadsVdylanMM4,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K34 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K15,
  &K36,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_8 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "wait-for"
};

static _KLsimple_object_vectorGVKd_1 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtimeout_
};

static _KLsignatureGVKe K37 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K15
};

_KLsimple_methodGVKe KmillisecsYthreads_internalVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K44,
  &KmillisecsYthreads_internalVdylanMM0I
};

_KLsimple_methodGVKe KmillisecsYthreads_internalVdylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K46,
  &KmillisecsYthreads_internalVdylanMM1I
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &KmillisecsYthreads_internalVdylanMM0,
  &K43
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &KmillisecsYthreads_internalVdylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K44 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LrealG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_9 K45 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "millisecs"
};

static _KLsignatureAvaluesGVKi K46 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &KLnotificationGYthreadsVdylan,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &KLlockGYthreadsVdylan,
  &KPempty_listVKi
};

/* Code */

D Kdebug_nameVKeMM4I (D synchronization_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:40
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:41
  CONGRUENT_CALL_PROLOG(&Ksynchronization_nameYthreadsVdylan, 1);
  T2 = CONGRUENT_CALL1(synchronization_);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:40
  return(T2);
}

D Kcheck_synchronization_finalizationYthreads_internalVdylanI (D sync_, D res_) {
  D T2;
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:56
  T5 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:56
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:56
    T3 = &KPfalseVKi;
    T4 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:57
    T6.vector_element_[0] = &KJsynchronization_;
    T6.vector_element_[1] = sync_;
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:57
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T2 = CONGRUENT_CALL2(&KLsynchronization_finalization_errorGYthreads_internalVdylan, &T6);
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:57
    T7 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
    T4 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:54
  MV_SET_COUNT(0);
  return(T4);
}

D Kcheck_synchronization_creationYthreads_internalVdylanI (D sync_, D res_) {
  D T2;
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:45
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:47
  T5 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:47
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:47
    T3 = &KPfalseVKi;
    T4 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:48
    T6.vector_element_[0] = &KJsynchronization_;
    T6.vector_element_[1] = sync_;
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:48
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T2 = CONGRUENT_CALL2(&KLsynchronization_creation_errorGYthreads_internalVdylan, &T6);
    // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:48
    T7 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
    T4 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:47
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:45
  MV_SET_COUNT(0);
  return(T4);
}

D KmillisecsYthreads_internalVdylanMM0I (D secs_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:32
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  T2 = CONGRUENT_CALL2(secs_, (D) 4001);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:32
  T3_0 = CALL1(&KroundVKd, T2);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:31
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmillisecsYthreads_internalVdylanMM1I (D secs_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:36
  T2 = primitive_cast_integer_as_raw(secs_);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:36
  T3 = primitive_machine_word_logxor(T2,1);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:36
  T4 = primitive_machine_word_multiply_signal_overflow(T3,1000);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:36
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:36
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:36
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/synchronization.dylan:35
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_synchronization_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_synchronization_for_user () {
  return;
}


/* eof */
