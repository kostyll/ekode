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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
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
  D lock_;
} _KLnot_owned_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLunexpected_synchronization_errorGYthreads_internalVdylan;

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
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(15);

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
  D handle1_;
  D synchronization_name_;
} _KLsimple_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

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
  D synchronization_name_;
} _KLsynchronizationGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
} _KLportable_containerGYthreads_primitivesVdylan;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D library_major_version_;
  D library_minor_version_;
  D library_build_count_;
  D used_libraries_;
  D all_used_libraries_;
  D runtime_module_;
  D library_defined_generics_;
  D library_number_static_dispatches_;
  D library_number_dynamic_dispatches_;
} _KLlibraryGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
  D associated_lock_;
} _KLnotificationGYthreadsVdylan;


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
extern _KLsymbolGVKd KJlock_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLnot_owned_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLnot_owned_errorGYthreadsVdylanW;
D KerrorVKdMM0I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLunexpected_synchronization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLunexpected_synchronization_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsimple_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsimple_lockGYthreadsVdylanW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLinstance_slot_descriptorGVKe Ksynchronization_nameYthreadsVdylanHLsynchronizationG;
extern _KLinstance_slot_descriptorGVKe Khandle1Ythreads_primitivesVdylanHLportable_containerG;
extern _KLclassGVKd KLsynchronizationGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronizationGYthreadsVdylanW;
extern _KLclassGVKd KLportable_containerGYthreads_primitivesVdylan;
extern _KLmm_wrapperGVKi_1 KLportable_containerGYthreads_primitivesVdylanW;
D KerrorVKdMM1I (D, D);
extern _KLunionGVKe KLoptional_nameGYthreads_primitivesVdylan;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kthreads_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsymbolGVKd KJtimeout_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
D Kcheck_synchronization_finalizationYthreads_internalVdylanI (D, D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_44;
D Kdrain_finalization_queueYfinalizationVdylanI ();
D Kcheck_synchronization_creationYthreads_internalVdylanI (D, D);
D Kfinalize_when_unreachableYfinalizationVdylanI (D);
extern _KLsealed_generic_functionGVKe KmillisecsYthreads_internalVdylan;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;

/* Defined object declarations */

D Kmake_notificationYthreads_primitivesVdylanI (D);
D KreleaseYthreadsVdylanMM4I (D, D);
D Kwait_forYthreadsVdylanMM4I (D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM27;
D KinitializeVKdMM27I (D, D);
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_45;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM5;
D KfinalizeYfinalizationVdylanMM5I (D);
extern _KLstandalone_domainGVKe_1 Ksynchronization_nameYthreadsVdylanRD_dylanRD_0;
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM4;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM4;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_0;
extern _KLclassGVKd KLnotificationGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLnotificationGYthreadsVdylanW;
extern _KLsealed_generic_functionGVKe Kassociated_lockYthreadsVdylan;
D Krelease_allYthreadsVdylanI (D, D);
D Knotification_release_resultYthreads_internalVdylanI (D, D);
extern _KLgetter_methodGVKi Kassociated_lockYthreadsVdylanMM0;
static _KLpairGVKd K19;
static _KLbyte_stringGVKd_15 K20;
extern _KLinstance_slot_descriptorGVKe Kassociated_lockYthreadsVdylanHLnotificationG;
extern _KLsealed_generic_functionGVKe Kassociated_lock_setterYthreads_internalVdylan;
extern _KLsetter_methodGVKi Kassociated_lock_setterYthreads_internalVdylanMM0;
static _KLpairGVKd K24;
static _KLbyte_stringGVKd_22 K25;
static _KLimplementation_classGVKe K26;
static _KLsimple_object_vectorGVKd_3 K27;
extern _KLkeyword_methodGVKe KLnotificationGZ32ZconstructorYthreads_internalVdylanMM0;
D KLnotificationGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K30;
static _KLsimple_object_vectorGVKd_6 K31;
static _KLsimple_object_vectorGVKd_1 K32;
static _KLsimple_object_vectorGVKd_3 K33;
static _KLbyte_stringGVKd_23 K34;
static _KLpairGVKd K35;
static _KLkeyword_signatureAvaluesGVKi K36;
static _KLsimple_object_vectorGVKd_4 K37;
static _KLsimple_object_vectorGVKd_2 K38;
static _KLsimple_object_vectorGVKd_1 K39;
static _KLbyte_stringGVKd_14 K40;
static _KLkeyword_signatureGVKe K41;
static _KLsimple_object_vectorGVKd_2 K42;
static _KLsimple_object_vectorGVKd_1 K43;
static _KLkeyword_signatureGVKe K44;
static _KLsignatureGVKe K45;
D Kinitialize_notificationYthreads_internalVdylanI (D);
static _KLkeyword_signatureGVKe K47;
extern _KLkeyword_methodGVKe Krelease_allYthreadsVdylan;
extern _KLsimple_methodGVKe Kmake_notificationYthreads_primitivesVdylan;
static _KLsignatureAvaluesGVKi K50;
static _KLsimple_object_vectorGVKd_1 K51;

/* Indirection variables */


/* Variables */

D associated_lockYthreadsVdylan = &Kassociated_lockYthreadsVdylan;
D LnotificationGYthreadsVdylan = &KLnotificationGYthreadsVdylan;
D make_notificationYthreads_primitivesVdylan = &Kmake_notificationYthreads_primitivesVdylan;
D release_allYthreadsVdylan = &Krelease_allYthreadsVdylan;

/* Objects */

_KLkeyword_methodGVKe KinitializeVKdMM27 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K47,
  &key_mep_2,
  &KinitializeVKdMM27I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KinitializeVKdRD_dylanRD_45 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_44,
  &KinitializeVKdMM27
};

_KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K45,
  &KfinalizeYfinalizationVdylanMM5I
};

_KLstandalone_domainGVKe_1 Ksynchronization_nameYthreadsVdylanRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLnotificationGYthreadsVdylan
};

_KLkeyword_methodGVKe KreleaseYthreadsVdylanMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K44,
  &key_mep_2,
  &KreleaseYthreadsVdylanMM4I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KreleaseYthreadsVdylanMM4
};

_KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K41,
  &key_mep_3,
  &Kwait_forYthreadsVdylanMM4I,
  &K42
};

_KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kwait_forYthreadsVdylanMM4
};

_KLclassGVKd KLnotificationGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K40,
  &K26,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLnotificationGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K26,
  (D) 1,
  14,
  33554439,
  (D) 5,
  6
};

_KLsealed_generic_functionGVKe Kassociated_lockYthreadsVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K20,
  &K19,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kassociated_lockYthreadsVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kassociated_lockYthreadsVdylanHLnotificationG
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &Kassociated_lockYthreadsVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K20 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "associated-lock"
};

_KLinstance_slot_descriptorGVKe Kassociated_lockYthreadsVdylanHLnotificationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLnotificationGYthreadsVdylan,
  &KJlock_,
  &Kassociated_lockYthreadsVdylan,
  &Kassociated_lock_setterYthreads_internalVdylan,
  &KLsimple_lockGYthreadsVdylan
};

_KLsealed_generic_functionGVKe Kassociated_lock_setterYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K25,
  &K24,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kassociated_lock_setterYthreads_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kassociated_lockYthreadsVdylanHLnotificationG
};

static _KLpairGVKd K24 = {
  &KLpairGVKdW /* wrapper */,
  &Kassociated_lock_setterYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K25 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "associated-lock-setter"
};

static _KLimplementation_classGVKe K26 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433741,
  &KLnotificationGYthreadsVdylan,
  &KLnotificationGYthreadsVdylanW,
  &KPfalseVKi,
  &K27,
  (D) 7289,
  &KLnotificationGZ32ZconstructorYthreads_internalVdylanMM0,
  &K30,
  &K31,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K32,
  &K33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG,
  &Kassociated_lockYthreadsVdylanHLnotificationG
};

_KLkeyword_methodGVKe KLnotificationGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K36,
  &key_mep_2,
  &KLnotificationGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K37
};

static _KLsimple_object_vectorGVKd_2 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLsynchronizationGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLnotificationGYthreadsVdylan,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kassociated_lockYthreadsVdylanHLnotificationG
};

static _KLsimple_object_vectorGVKd_3 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG,
  &Kassociated_lockYthreadsVdylanHLnotificationG
};

static _KLbyte_stringGVKd_23 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K36 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K38,
  &KDsignature_LobjectG_typesVKi,
  &K39
};

static _KLsimple_object_vectorGVKd_4 K37 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJname_,
  &KPfalseVKi,
  &KJlock_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJname_,
  &KJlock_
};

static _KLsimple_object_vectorGVKd_1 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLnotificationGYthreadsVdylan
};

static _KLbyte_stringGVKd_14 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<notification>"
};

static _KLkeyword_signatureGVKe K41 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K39,
  &K43,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtimeout_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtimeout_
};

static _KLkeyword_signatureGVKe K44 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K39,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsignatureGVKe K45 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K39
};

static _KLkeyword_signatureGVKe K47 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K39,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Krelease_allYthreadsVdylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K44,
  &key_mep_2,
  &Krelease_allYthreadsVdylanI,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kmake_notificationYthreads_primitivesVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K50,
  &Kmake_notificationYthreads_primitivesVdylanI
};

static _KLsignatureAvaluesGVKi K50 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K51,
  &K39
};

static _KLsimple_object_vectorGVKd_1 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_lockGYthreadsVdylan
};

/* Code */

D Kmake_notificationYthreads_primitivesVdylanI (D lock_) {
  D instance_;
  D T2_0;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10_0;
  D T11;
  D T12_0;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T3 = SLOT_VALUE(&KLnotificationGYthreadsVdylan, 2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T5 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T7 = primitive_machine_word_logand(T6,262140);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T8 = primitive_machine_word_add_signal_overflow(5,T7);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T9 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T11 = SLOT_VALUE_INITD(T3, 2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T10_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T13 = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T14 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  T4 = primitive_object_allocate_filled(T9,T13,T14,&KPfalseVKi,0,0,&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:25
  instance_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:26
  SLOT_VALUE_SETTER(lock_, instance_, 2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:27
  Kinitialize_notificationYthreads_internalVdylanI(instance_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:28
  T2_0 = instance_;
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:23
  MV_SET_COUNT(1);
  return(T2_0);
}

D KreleaseYthreadsVdylanMM4I (D notif_, D Urest_) {
  D res_;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:58
  T5 = SLOT_VALUE_INITD(notif_, 2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:58
  res_ = primitive_release_notification(notif_,T5);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:59
  T4 = Knotification_release_resultYthreads_internalVdylanI(notif_, res_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:57
  MV_SET_COUNT(0);
  return(T4);
}

D Kwait_forYthreadsVdylanMM4I (D notif_, D Urest_, D timeout_) {
  D T4;
  D T5;
  D T6;
  D res_;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15;
  D T16;
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T20_0;
  _KLsimple_object_vectorGVKd_2 T21 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:69
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:70
  T15 = SLOT_VALUE_INITD(notif_, 2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:72
  if (timeout_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:73
    T4 = CALL1(&KmillisecsYthreads_internalVdylan, timeout_);
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:73
    T5 = primitive_wait_for_notification_timed(notif_,T15,T4);
    res_ = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:75
    T6 = primitive_wait_for_notification(notif_,T15);
    res_ = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
  T16 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:78
    T8_0 = &KPtrueVKi;
    T14_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
    T17 = primitive_idQ(res_,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:79
      T9_0 = &KPfalseVKi;
      T13_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
      T18 = primitive_idQ(res_,(D) 9);
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/notification.dylan:80
        T19.vector_element_[0] = &KJlock_;
        T19.vector_element_[1] = T15;
        // /opt/opendylan-2013.1/sources/dylan/notification.dylan:80
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T10 = CONGRUENT_CALL2(&KLnot_owned_errorGYthreadsVdylan, &T19);
        // /opt/opendylan-2013.1/sources/dylan/notification.dylan:80
        T20_0 = KerrorVKdMM0I(T10, &KPempty_vectorVKi);
        T12_0 = T20_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/notification.dylan:81
        T21.vector_element_[0] = &KJsynchronization_;
        T21.vector_element_[1] = notif_;
        // /opt/opendylan-2013.1/sources/dylan/notification.dylan:81
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T11 = CONGRUENT_CALL2(&KLunexpected_synchronization_errorGYthreads_internalVdylan, &T21);
        // /opt/opendylan-2013.1/sources/dylan/notification.dylan:81
        T22_0 = KerrorVKdMM0I(T11, &KPempty_vectorVKi);
        T12_0 = T22_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
      T13_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
    T14_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:77
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:69
  MV_SET_COUNT(1);
  return(T14_0);
}

D KinitializeVKdMM27I (D notif_, D Urest_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:40
  T3 = Kinitialize_notificationYthreads_internalVdylanI(notif_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:38
  MV_SET_COUNT(0);
  return(T3);
}

D KfinalizeYfinalizationVdylanMM5I (D notif_) {
  D res_;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:88
  res_ = primitive_destroy_notification(notif_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:89
  T3 = Kcheck_synchronization_finalizationYthreads_internalVdylanI(notif_, res_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:87
  MV_SET_COUNT(0);
  return(T3);
}

D Krelease_allYthreadsVdylanI (D notif_, D Urest_) {
  D res_;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:63
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:64
  T5 = SLOT_VALUE_INITD(notif_, 2);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:64
  res_ = primitive_release_all_notification(notif_,T5);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:65
  T4 = Knotification_release_resultYthreads_internalVdylanI(notif_, res_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:63
  MV_SET_COUNT(0);
  return(T4);
}

D Knotification_release_resultYthreads_internalVdylanI (D notif_, D res_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T11;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:44
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:46
  T7 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:46
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:46
    T5 = &KPfalseVKi;
    T6 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:47
    T8 = primitive_idQ(res_,(D) 9);
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:47
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:49
      T9 = SLOT_VALUE_INITD(notif_, 2);
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:48
      T10.vector_element_[0] = &KJlock_;
      T10.vector_element_[1] = T9;
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:48
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T2 = CONGRUENT_CALL2(&KLnot_owned_errorGYthreadsVdylan, &T10);
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:48
      T11 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
      T4 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:50
      T12.vector_element_[0] = &KJsynchronization_;
      T12.vector_element_[1] = notif_;
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:50
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T3 = CONGRUENT_CALL2(&KLunexpected_synchronization_errorGYthreads_internalVdylan, &T12);
      // /opt/opendylan-2013.1/sources/dylan/notification.dylan:50
      T13 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
      T4 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:47
    T6 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:46
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:44
  MV_SET_COUNT(0);
  return(T6);
}

D KLnotificationGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_name_, D Uunique_associated_lock_) {
  D T5;
  D Uunique_associated_lockF6;
  D T7;
  D Uunique_synchronization_nameF8;
  D Uunique_associated_lockF9;
  D T10_0;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:11
  T11 = primitive_idQ(Uunique_associated_lock_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:11
  if (T11 != &KPfalseVKi) {
    T12.vector_element_[0] = &KJlock_;
    T13 = KerrorVKdMM1I(&K34, &T12);
    // /opt/opendylan-2013.1/sources/dylan/notification.dylan:11
    T5 = T13;
    Uunique_associated_lockF6 = T5;
  } else {
    Uunique_associated_lockF6 = Uunique_associated_lock_;
  }
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:11
  T7 = primitive_object_allocate_filled(4,&KLnotificationGYthreadsVdylanW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T7, 0);
  Uunique_synchronization_nameF8 = Uunique_synchronization_name_;
  SLOT_VALUE_SETTER(Uunique_synchronization_nameF8, T7, 1);
  Uunique_associated_lockF9 = Uunique_associated_lockF6;
  SLOT_VALUE_SETTER(Uunique_associated_lockF9, T7, 2);
  MIEP_CALL_PROLOG(&K35);
  KinitializeVKdMM27I(T7, init_args_);
  T10_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:11
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kinitialize_notificationYthreads_internalVdylanI (D notif_) {
  D res_;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:32
  Kdrain_finalization_queueYfinalizationVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:33
  T4 = SLOT_VALUE_INITD(notif_, 1);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:33
  res_ = primitive_make_notification(notif_,T4);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:34
  Kcheck_synchronization_creationYthreads_internalVdylanI(notif_, res_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:35
  T3 = Kfinalize_when_unreachableYfinalizationVdylanI(notif_);
  // /opt/opendylan-2013.1/sources/dylan/notification.dylan:31
  MV_SET_COUNT(0);
  return(T3);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_notification_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_notification_for_user () {
  return;
}


/* eof */
