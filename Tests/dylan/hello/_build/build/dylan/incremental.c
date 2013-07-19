#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLobject_tableGVKd;

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
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(20);
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(18);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLobjectGVKd;

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
} _KLbooleanGVKd;

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
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLtableGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLmethodGVKd;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_errorGVKi;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(43);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(83);

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

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
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

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
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLslot_descriptorGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLvirtual_slot_descriptorGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLgeneric_functionGVKd;

typedef struct {
  D wrapper;
} _KLmiscellaneous_obsolete_instanceGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
} _KLdomainGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLtableGVKd;
extern _KLmm_wrapperGVKi_0 KLtableGVKdW;
extern _KLsymbolGVKd KJvalue_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJtype_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
D KputhashVKiI (D, D, D);
D Krecompute_type_completeXVKiMM3I (D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
D KgethashVKiI (D, D, D, D);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D Kremove_keyXVKdMM0I (D, D);
extern _KLsealed_generic_functionGVKe Krecompute_type_completeXVKi;
D KPadd_domains_internalVKiI (D gf_, D domains_);
D KlistVKdI (D);
extern _KLclassGVKd KLpairGVKd;
D Kconcatenate_asVKdMM4I (D, D, D);
D Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
D Kbletch_stackVKgI (D);
D KelementVKdMM25I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
D Kadd_method_internalVKiI (D, D, D, D, D);
extern _KLsymbolGVKd KJdebug_name_;
extern _KLsymbolGVKd KJsignature_;
extern _KLsymbolGVKd KJsealedQ_;
D KreinitializeVKnMM0I (D, D);
extern _KLsealed_generic_functionGVKe KcongruentQVKi;
D KelementVKdMM11I (D, D, D, D);
extern _KLincremental_generic_functionGVKe KbletchVKg;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLargument_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLargument_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsealed_generic_functionGVKe Kmap_asVKd;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsymbolGVKd KJlock_;
extern _KLsimple_methodGVKe KEEVKd;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D, D);
extern _KLsymbolGVKd KJsuperclasses_;
extern _KLsymbolGVKd KJabstractQ_;
extern _KLsymbolGVKd KJprimaryQ_;
extern _KLsymbolGVKd KJslots_;
extern _KLsymbolGVKd KJinherited_slots_;
extern _KLsymbolGVKd KJkeywords_;
D Klock_release_result_errorYthreads_internalVdylanMM0I (D, D);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D Kmake_empty_subjunctive_class_universeVKeI ();
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsymbolGVKd KJclass_;
D Kscu_initialize_allVKeI (D, D);
extern _KLkeyword_methodGVKe Kdo_implementation_class_cross_class_initializationsVKiMM0;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
D Kscu_doVKeI (D, D);
extern _KLsimple_methodGVKe Kinstall_implementation_classVKiMM0;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
D KasVKdMM41I (D, D);
extern _KLsealed_generic_functionGVKe Kclass_known_joint_setterVKe;
extern _KLkeyword_methodGVKe Kadd_slot_methodsVKi;
D Kdebug_assertion_failureVKiI (D, D);
D Kinvalidate_class_instanceQ_iepVKiI (D);
D Kall_superclassesVKdMM1I (D);
D Kall_superclasses_setterVKeMM1I (D, D);
extern _KLsealed_generic_functionGVKe Kmm_wrapper_subtype_maskVKe;
extern _KLsealed_generic_functionGVKe Kmm_wrapper_subtype_mask_setterVKe;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
extern _KLclassGVKd KLvirtual_slot_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLvirtual_slot_descriptorGVKiW;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
D KPmethod_specializerVKgI (D, D);
D KPremove_methodVKnI (D, D);
D Ksame_specializerQVKgI (D, D);
extern _KLclassGVKd KLmiscellaneous_obsolete_instanceGVKe;
extern _KLmm_wrapperGVKi_0 KLmiscellaneous_obsolete_instanceGVKeW;
D Kscu_entryQVKeI (D, D);
D KsubiclassQVKiI (D, D, D, D);
D KerrorVKdMM1I (D, D);
D Kmap_asVKdMM0I (D, D, D, D);
D Kcompute_defaulted_initialization_argumentsVKiI (D, D, D);
extern _KLsealed_generic_functionGVKe Kclass_implementation_classVKe;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan;
D Kinit_suppliedQ_setterVKiMM0I (D, D);
D Kinit_evaluatedQ_setterVKiMM0I (D, D);
D Kinit_valueQ_setterVKiMM0I (D, D);
D Kinit_keyword_requiredQ_setterVKiMM0I (D, D);
extern _KLincremental_generic_functionGVKe KreleaseYthreadsVdylan;
D KgetterEVKiMM0I (D, D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsealed_generic_functionGVKe Kslot_allocationVKe;
D KEEVKdI (D, D);
D KapplyVKdI (D, D);
extern _KLsealed_generic_functionGVKe Kcreate_slot_descriptorVKi;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLincremental_generic_functionGVKe Kdebug_nameVKe;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lgeneric_functionG_typesVKi;
extern _KLclassGVKd KLdomainGVKe;
extern _KLmm_wrapperGVKi_0 KLdomainGVKeW;
extern _KLsealed_generic_functionGVKe Kdomain_matchQVKe;
D KremoveXVKdMM7I (D, D, D, D, D);
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
D Kincremental_gf_method_completeQ_setterVKeMM0I (D, D);
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
D Kadd_newXVKdMM3I (D, D, D, D);
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern D note_generic_function_incomplete_methodVKi;
extern D note_generic_function_incomplete_domainVKi;
extern D remove_generic_function_incomplete_methodVKi;
extern D remove_generic_function_incomplete_domainVKi;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Dclass_bashing_lockVKi;
extern D Dempty_subjunctive_class_universeVKe;
extern D Dslot_initial_data_lockVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Knote_incomplete_method_handlerVKi;
D Knote_incomplete_method_handlerVKiI (D, D, D);
extern _KLsimple_methodGVKe Knote_incomplete_domain_handlerVKi;
D Knote_incomplete_domain_handlerVKiI (D, D);
extern _KLsimple_methodGVKe Kremove_incomplete_method_handlerVKi;
D Kremove_incomplete_method_handlerVKiI (D, D, D, D);
extern _KLsimple_methodGVKe Kremove_incomplete_domain_handlerVKi;
D Kremove_incomplete_domain_handlerVKiI (D, D, D);
D KPredefine_genericVKnI (D, D, D, D, D);
D Kcomplete_dependent_generic_functionVKiMM0I (D, D, D);
D Knote_type_completeness_changeVKiMM0I (D);
D Khandle_generic_completeness_changeVKiMM0I (D);
static _KLsymbolGVKd KJmodule_;
static _KLbyte_stringGVKd_83 K20;
static _KLbyte_stringGVKd_6 K21;
extern _KLsimple_methodGVKe KPredefine_complex_classVKn;
D KPredefine_complex_classVKnI (D, D, D, D, D, D, D, D, D, D);
D KPPredefine_complex_classVKiI (D, D, D, D, D, D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF64;
static D Kanonymous_of_PPredefine_complex_classF64I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF62;
static D Kanonymous_of_PPredefine_complex_classF62I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF60;
static D Kanonymous_of_PPredefine_complex_classF60I ();
D Kdependent_subclassesVKiI (D, D);
D Knonstructural_redefinitionQVKiMM0I (D, D, D);
D KPredefine_class_attributes_onlyVKiMM0I (D, D, D, D, D, D, D);
D KPredefine_class_of_new_structureVKiMM0I (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF37;
static D Kanonymous_of_PPredefine_complex_classF37I ();
static _KLbyte_stringGVKd_31 K38;
static _KLsignatureGVKe K39;
static _KLsymbolGVKd KJdefer_cross_class_computationsQ_;
static _KLsymbolGVKd KJsubjunctive_class_universe_;
D Kcompute_known_jointVKiI (D, D, D);
extern _KLsimple_methodGVKe Kinvalidate_previous_implementation_classVKi;
D Kinvalidate_previous_implementation_classVKiI (D, D);
static _KLbyte_stringGVKd_45 K45;
D Kinvalidate_implementation_classVKiMM0I (D);
D Kremove_implementation_class_slot_methodsVKiMM0I (D);
static _KLsignatureGVKe K48;
static _KLsimple_object_vectorGVKd_2 K49;
static _KLbyte_stringGVKd_26 K50;
static _KLbyte_stringGVKd_31 K51;
D Kfind_old_slotVKiMM0I (D, D);
static _KLbyte_stringGVKd_43 K53;
D Koverwrite_slot_descriptorVKiMM0I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_Predefine_class_attributes_onlyF57;
static D Kanonymous_of_Predefine_class_attributes_onlyF57I (D);
static _KLunionGVKe K58;
static _KLsingletonGVKd K59;
static _KLbyte_stringGVKd_33 K61;
static _KLbyte_stringGVKd_45 K63;
static _KLsignatureAvaluesGVKi K65;
static _KLsimple_object_vectorGVKd_10 K66;
extern _KLsimple_methodGVKe KPredefine_classVKn;
D KPredefine_classVKnI (D, D, D, D, D, D, D, D);
static _KLsignatureAvaluesGVKi K69;
static _KLsimple_object_vectorGVKd_8 K70;
extern _KLsimple_methodGVKe KPdefine_complex_classVKn;
D KPdefine_complex_classVKnI (D, D, D, D, D);
static _KLsymbolGVKd KJdependent_generics_;
static _KLbyte_stringGVKd_18 K74;
static _KLsignatureAvaluesGVKi K75;
static _KLsimple_object_vectorGVKd_5 K76;
extern _KLsimple_methodGVKe KPdefine_classVKn;
D KPdefine_classVKnI (D, D, D);
static _KLsignatureAvaluesGVKi K79;
static _KLsimple_object_vectorGVKd_3 K80;
extern _KLsimple_methodGVKe KPredefine_genericVKn;
static _KLsignatureAvaluesGVKi K82;
static _KLsimple_object_vectorGVKd_5 K83;
extern _KLsimple_methodGVKe KPdefine_genericVKn;
D KPdefine_genericVKnI (D, D);
static _KLsignatureAvaluesGVKi K86;
static _KLsimple_object_vectorGVKd_2 K87;
static _KLunionGVKe K88;
static _KLsignatureAvaluesGVKi K89;
static _KLsimple_object_vectorGVKd_3 K90;
static _KLsimple_object_vectorGVKd_1 K91;
static _KLunionGVKe K92;
static _KLsignatureAvaluesGVKi K93;
static _KLsimple_object_vectorGVKd_4 K94;
static _KLsimple_object_vectorGVKd_1 K95;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF109;
static D Kanonymous_of_note_incomplete_domain_handlerF109I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF107;
static D Kanonymous_of_note_incomplete_domain_handlerF107I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF106;
static D Kanonymous_of_note_incomplete_domain_handlerF106I ();
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K102;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF105;
static D Kanonymous_of_note_incomplete_domain_handlerF105I ();
static _KLsignatureGVKe K108;
static _KLsignatureGVKe K110;
static _KLsimple_object_vectorGVKd_2 K111;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF124;
static D Kanonymous_of_note_incomplete_method_handlerF124I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF123;
static D Kanonymous_of_note_incomplete_method_handlerF123I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF122;
static D Kanonymous_of_note_incomplete_method_handlerF122I ();
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K118;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF121;
static D Kanonymous_of_note_incomplete_method_handlerF121I ();
static _KLsignatureGVKe K125;
static _KLsimple_object_vectorGVKd_3 K126;
extern _KLsimple_methodGVKe KPdefine_sealed_methodVKn;
D KPdefine_sealed_methodVKnI (D, D, D);
static _KLsignatureGVKe K129;
static _KLsimple_object_vectorGVKd_3 K130;
extern _KLsimple_methodGVKe KPdefine_methodVKn;
D KPdefine_methodVKnI (D, D, D);

/* Indirection variables */

static D IKJmodule_ = &KJmodule_;
static D IKJdefer_cross_class_computationsQ_ = &KJdefer_cross_class_computationsQ_;
static D IKJsubjunctive_class_universe_ = &KJsubjunctive_class_universe_;
static D IKJdependent_generics_ = &KJdependent_generics_;

/* Variables */

D Pdefine_methodVKn = &KPdefine_methodVKn;
D Pdefine_sealed_methodVKn = &KPdefine_sealed_methodVKn;
D Tincomplete_generic_function_methodsTVKi = &KPunboundVKi;
D Tincomplete_generic_function_domainsTVKi = &KPunboundVKi;
D Tgenerics_being_finishedTVKi = &KPunboundVKi;
D Pdefine_genericVKn = &KPdefine_genericVKn;
D Predefine_genericVKn = &KPredefine_genericVKn;
D Pdefine_classVKn = &KPdefine_classVKn;
D Pdefine_complex_classVKn = &KPdefine_complex_classVKn;
D Predefine_classVKn = &KPredefine_classVKn;
D Predefine_complex_classVKn = &KPredefine_complex_classVKn;
D Tobsolete_instance_classTVKi = &KLmiscellaneous_obsolete_instanceGVKe;

/* Objects */

_KLsimple_methodGVKe Knote_incomplete_method_handlerVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K125,
  &Knote_incomplete_method_handlerVKiI
};

_KLsimple_methodGVKe Knote_incomplete_domain_handlerVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K110,
  &Knote_incomplete_domain_handlerVKiI
};

_KLsimple_methodGVKe Kremove_incomplete_method_handlerVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K93,
  &Kremove_incomplete_method_handlerVKiI
};

_KLsimple_methodGVKe Kremove_incomplete_domain_handlerVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K89,
  &Kremove_incomplete_domain_handlerVKiI
};

static _KLsymbolGVKd KJmodule_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K21
};

static _KLbyte_stringGVKd_83 K20 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 333,
  "Generic function definition for %= was not congruent with some existing methods %=."
};

static _KLbyte_stringGVKd_6 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "module"
};

_KLsimple_methodGVKe KPredefine_complex_classVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep,
  &K65,
  &KPredefine_complex_classVKnI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF64 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_PPredefine_complex_classF64I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF62 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_PPredefine_complex_classF62I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF60 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_PPredefine_complex_classF60I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_PPredefine_complex_classF37 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_PPredefine_complex_classF37I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K39 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLsymbolGVKd KJdefer_cross_class_computationsQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K51
};

static _KLsymbolGVKd KJsubjunctive_class_universe_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K50
};

_KLsimple_methodGVKe Kinvalidate_previous_implementation_classVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K48,
  &Kinvalidate_previous_implementation_classVKiI
};

static _KLbyte_stringGVKd_45 K45 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "attempting to invalidate %= without a new one"
};

static _KLsignatureGVKe K48 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K49
};

static _KLsimple_object_vectorGVKd_2 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLimplementation_classGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLbyte_stringGVKd_26 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "subjunctive-class-universe"
};

static _KLbyte_stringGVKd_31 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "defer-cross-class-computations?"
};

static _KLbyte_stringGVKd_43 K53 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "Bug! Class %= is a structural redefinition?"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_Predefine_class_attributes_onlyF57 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_Predefine_class_attributes_onlyF57I,
  (D) 1
};

static _KLunionGVKe K58 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K59,
  &KLslot_descriptorGVKe
};

static _KLsingletonGVKd K59 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_33 K61 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLbyte_stringGVKd_45 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLsignatureAvaluesGVKi K65 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555497,
  &K66,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_10 K66 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLclassGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPredefine_classVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_8,
  &K69,
  &KPredefine_classVKnI
};

static _KLsignatureAvaluesGVKi K69 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555489,
  &K70,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLclassGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPdefine_complex_classVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K75,
  &KPdefine_complex_classVKnI
};

static _KLsymbolGVKd KJdependent_generics_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K74
};

static _KLbyte_stringGVKd_18 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "dependent-generics"
};

static _KLsignatureAvaluesGVKi K75 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K76,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_5 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPdefine_classVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K79,
  &KPdefine_classVKnI
};

static _KLsignatureAvaluesGVKi K79 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K80,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPredefine_genericVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K82,
  &KPredefine_genericVKnI
};

static _KLsignatureAvaluesGVKi K82 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K83,
  &KDsignature_Lgeneric_functionG_typesVKi
};

static _KLsimple_object_vectorGVKd_5 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLincremental_generic_functionGVKe,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KPdefine_genericVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K86,
  &KPdefine_genericVKnI
};

static _KLsignatureAvaluesGVKi K86 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K87,
  &KDsignature_Lgeneric_functionG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLincremental_generic_functionGVKe,
  &KLobjectGVKd
};

static _KLunionGVKe K88 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K59,
  &KLdomainGVKe
};

static _KLsignatureAvaluesGVKi K89 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K90,
  &K91
};

static _KLsimple_object_vectorGVKd_3 K90 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLincremental_generic_functionGVKe,
  &KLobjectGVKd,
  &KLlibraryGVKe
};

static _KLsimple_object_vectorGVKd_1 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K88
};

static _KLunionGVKe K92 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K59,
  &KLmethodGVKd
};

static _KLsignatureAvaluesGVKi K93 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K94,
  &K95
};

static _KLsimple_object_vectorGVKd_4 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLincremental_generic_functionGVKe,
  &KLobjectGVKd,
  &KLlibraryGVKe,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_1 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K92
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF109 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_note_incomplete_domain_handlerF109I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF107 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K108,
  &Kanonymous_of_note_incomplete_domain_handlerF107I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF106 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_note_incomplete_domain_handlerF106I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K102 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_domain_handlerF105 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_note_incomplete_domain_handlerF105I,
  (D) 1
};

static _KLsignatureGVKe K108 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureGVKe K110 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K111
};

static _KLsimple_object_vectorGVKd_2 K111 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLincremental_generic_functionGVKe,
  &KLdomainGVKe
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF124 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_note_incomplete_method_handlerF124I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF123 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K108,
  &Kanonymous_of_note_incomplete_method_handlerF123I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF122 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_note_incomplete_method_handlerF122I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K118 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_note_incomplete_method_handlerF121 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K39,
  &Kanonymous_of_note_incomplete_method_handlerF121I,
  (D) 1
};

static _KLsignatureGVKe K125 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K126
};

static _KLsimple_object_vectorGVKd_3 K126 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLincremental_generic_functionGVKe,
  &KLmethodGVKd,
  &KLlibraryGVKe
};

_KLsimple_methodGVKe KPdefine_sealed_methodVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K129,
  &KPdefine_sealed_methodVKnI
};

static _KLsignatureGVKe K129 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K130
};

static _KLsimple_object_vectorGVKd_3 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLgeneric_functionGVKd,
  &KLmethodGVKd,
  &KLlibraryGVKe
};

_KLsimple_methodGVKe KPdefine_methodVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K129,
  &KPdefine_methodVKnI
};

/* Code */

D Knote_incomplete_method_handlerVKiI (D g_, D m_, D lib_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_4 T16 = {&KLsimple_object_vectorGVKdW, (D) 17};
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
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36_0;
  D T37;
  D T38;
  D T39;
  D T40_0;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D res_;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54_0;
  D T55;
  D T56;
  D T57;
  D T58;
  _KLsimple_object_vectorGVKd_2 T59 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T60;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:34
  Kincremental_gf_method_completeQ_setterVKeMM0I(&KPfalseVKi, g_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  T10.vector_element_[0] = m_;
  T10.vector_element_[1] = lib_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  T3 = KlistVKdI(&T10);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  T4 = Tincomplete_generic_function_methodsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  T11_0 = KgethashVKiI(T4, g_, &KPempty_listVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  T12 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  T13 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  SLOT_VALUE_SETTER(T3, T13, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:36
  SLOT_VALUE_SETTER(T12, T13, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
  T5 = Tincomplete_generic_function_methodsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
  T14 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
  T17 = primitive_instanceQ(T13,T14);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
  if (T17 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
    T16.vector_element_[0] = &KJvalue_;
    T16.vector_element_[1] = T13;
    T16.vector_element_[2] = &KJtype_;
    T16.vector_element_[3] = T14;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T15 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T16);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T15, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:35
  KputhashVKiI(T13, T5, g_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T21 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T22 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T23 = primitive_idQ(T22,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T24 = primitive_not(T23);
    T20 = T24;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T25 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T26_0 = KmemberQVKdMM3I(&KJlock_, T25, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T27 = T26_0;
    T28 = T27;
  } else {
    T28 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T29 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    CALL1(T29, &Kanonymous_of_note_incomplete_method_handlerF122);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T18 = primitive_wait_for_simple_lock(Dclass_bashing_lockVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T31 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T32 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T33 = primitive_idQ(T32,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T34 = primitive_not(T33);
    T30 = T34;
  } else {
    T30 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T35 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T36_0 = KmemberQVKdMM3I(&KJlock_, T35, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T37 = T36_0;
    T38 = T37;
  } else {
    T38 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T38 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T39 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T19 = MAKE_CLOSURE_INITD(&Kanonymous_of_note_incomplete_method_handlerF124, 1, T18);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    CALL1(T39, T19);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T41 = primitive_idQ(T18,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T41 != &KPfalseVKi) {
    T45 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T42 = primitive_idQ(T18,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    if (T42 != &KPfalseVKi) {
      T44 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T40_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, T18);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T43 = T40_0;
      T44 = T43;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T45 = T44;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T45 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    ENTER_UNWIND_FRAME(T6);
    if (!nlx_setjmp(FRAME_DEST(T6))) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:38
      T7 = MAKE_CLOSURE_INITD(&Kanonymous_of_note_incomplete_method_handlerF123, 1, g_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:38
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K118, 2);
      T46 = ENGINE_NODE_CALL2(&K118, T7, m_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      FALL_THROUGH_UNWIND(T46);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T49 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    if (T49 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T50 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T51 = primitive_idQ(T50,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T52 = primitive_not(T51);
      T48 = T52;
    } else {
      T48 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    if (T48 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T53 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T54_0 = KmemberQVKdMM3I(&KJlock_, T53, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T55 = T54_0;
      T56 = T55;
    } else {
      T56 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    if (T56 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      T57 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      CALL1(T57, &Kanonymous_of_note_incomplete_method_handlerF121);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    res_ = primitive_release_simple_lock(Dclass_bashing_lockVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T58 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    if (T58 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
      Klock_release_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    CONTINUE_UNWIND();
    T9 = T46;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T59.vector_element_[0] = &KJsynchronization_;
    T59.vector_element_[1] = Dclass_bashing_lockVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T59);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T60 = KsignalVKdMM0I(T8, &KPempty_vectorVKi);
    T9 = T60;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:31
  MV_SET_COUNT(0);
  return(T9);
}

D Knote_incomplete_domain_handlerVKiI (D g_, D d_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23_0;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33_0;
  D T34;
  D T35;
  D T36;
  D T37_0;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
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

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:76
  Kincremental_gf_method_completeQ_setterVKeMM0I(&KPfalseVKi, g_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:78
  T2 = Tincomplete_generic_function_domainsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:78
  T8_0 = KgethashVKiI(T2, g_, &KPempty_listVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:78
  T9 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:78
  T10 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:78
  SLOT_VALUE_SETTER(d_, T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:78
  SLOT_VALUE_SETTER(T9, T10, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
  T3 = Tincomplete_generic_function_domainsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
  T11 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
  T14 = primitive_instanceQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
  if (T14 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
    T13.vector_element_[0] = &KJvalue_;
    T13.vector_element_[1] = T10;
    T13.vector_element_[2] = &KJtype_;
    T13.vector_element_[3] = T11;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T12 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T13);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T12, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:77
  KputhashVKiI(T10, T3, g_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T18 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T19 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T20 = primitive_idQ(T19,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T21 = primitive_not(T20);
    T17 = T21;
  } else {
    T17 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T22 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T23_0 = KmemberQVKdMM3I(&KJlock_, T22, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T24 = T23_0;
    T25 = T24;
  } else {
    T25 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T26 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    CALL1(T26, &Kanonymous_of_note_incomplete_domain_handlerF106);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T15 = primitive_wait_for_simple_lock(Dclass_bashing_lockVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T28 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T29 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T30 = primitive_idQ(T29,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T31 = primitive_not(T30);
    T27 = T31;
  } else {
    T27 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T32 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T33_0 = KmemberQVKdMM3I(&KJlock_, T32, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T34 = T33_0;
    T35 = T34;
  } else {
    T35 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T36 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T16 = MAKE_CLOSURE_INITD(&Kanonymous_of_note_incomplete_domain_handlerF109, 1, T15);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    CALL1(T36, T16);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T38 = primitive_idQ(T15,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T38 != &KPfalseVKi) {
    T42 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T39 = primitive_idQ(T15,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    if (T39 != &KPfalseVKi) {
      T41 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T37_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, T15);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T40 = T37_0;
      T41 = T40;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T42 = T41;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T42 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    ENTER_UNWIND_FRAME(T4);
    if (!nlx_setjmp(FRAME_DEST(T4))) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:80
      T5 = MAKE_CLOSURE_INITD(&Kanonymous_of_note_incomplete_domain_handlerF107, 1, g_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:80
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K102, 2);
      T43 = ENGINE_NODE_CALL2(&K102, T5, d_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      FALL_THROUGH_UNWIND(T43);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T46 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T47 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T48 = primitive_idQ(T47,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T49 = primitive_not(T48);
      T45 = T49;
    } else {
      T45 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    if (T45 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T50 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T51_0 = KmemberQVKdMM3I(&KJlock_, T50, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T52 = T51_0;
      T53 = T52;
    } else {
      T53 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    if (T53 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      T54 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      CALL1(T54, &Kanonymous_of_note_incomplete_domain_handlerF105);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    res_ = primitive_release_simple_lock(Dclass_bashing_lockVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T55 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    if (T55 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
      Klock_release_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    CONTINUE_UNWIND();
    T7 = T43;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T56.vector_element_[0] = &KJsynchronization_;
    T56.vector_element_[1] = Dclass_bashing_lockVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T56);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T57 = KsignalVKdMM0I(T6, &KPempty_vectorVKi);
    T7 = T57;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:73
  MV_SET_COUNT(0);
  return(T7);
}

D Kremove_incomplete_method_handlerVKiI (D g_, D frob_, D lib_, D test_) {
  D T4;
  D old_;
  D returnPexit_33_;
  D T7;
  D T8T, T8;
  D e_;
  D m_;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23_0;
  D T24;
  D T25_0;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_4 T29 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T30;
  _KLsimple_object_vectorGVKd_1 T31 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T32;
  D T33_0;
  D T34;
  D T35_0;
  D T36;
  D T37_0;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:51
  T4 = Tincomplete_generic_function_methodsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:51
  T17_0 = KgethashVKiI(T4, g_, &KPempty_listVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:51
  T18 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:51
  old_ = T18;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:52
  T19 = primitive_idQ(old_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:52
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:52
    T15_0 = &KPfalseVKi;
    T16_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:53
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
    T8T = old_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
      T8 = T8T;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
      T20 = primitive_idQ(T8,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
      if (T20 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
        T21 = SLOT_VALUE_INITD(T8, 0);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
        e_ = T21;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:55
        T23_0 = KelementVKdMM25I(e_, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:55
        T22 = T23_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:55
        m_ = T22;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:56
        T25_0 = KelementVKdMM25I(e_, (D) 5, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:56
        T24 = T25_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:56
        T24;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:57
        T11 = CALL2(test_, m_, frob_);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:57
        if (T11 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
          T26 = KremoveXVKdMM7I(old_, e_, &KPempty_vectorVKi, &KEEVKd, &KPfalseVKi);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
          T12 = Tincomplete_generic_function_methodsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
          T27 = SLOT_VALUE_INITD(T12, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
          T30 = primitive_instanceQ(T26,T27);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
          if (T30 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
            T29.vector_element_[0] = &KJvalue_;
            T29.vector_element_[1] = T26;
            T29.vector_element_[2] = &KJtype_;
            T29.vector_element_[3] = T27;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T28 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T29);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
            CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
            CONGRUENT_CALL2(T28, &KPempty_vectorVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:58
          KputhashVKiI(T26, T12, g_);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:59
          T31.vector_element_[0] = m_;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:53
          T32 = MV_SET_REST_AT(&T31, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:53
          T14_0 = T32;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:57
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
        T34 = SLOT_VALUE_INITD(T8, 1);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
        T35_0 = T34;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
        T33_0 = T35_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
        T36 = T33_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
        T8T = T36;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
      T13 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:54
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:53
    T14_0 = T13;
    L1: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:53
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:53
    T37_0 = T14_0;
    T16_0 = T37_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:52
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:48
  MV_SET_COUNT(1);
  return(T16_0);
}

D Kremove_incomplete_domain_handlerVKiI (D g_, D frob_, D lib_) {
  D T3;
  D old_;
  D returnPexit_34_;
  D T6;
  D T7T, T7;
  D d_;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_4 T23 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27_0;
  D T28;
  D T29_0;
  D T30;
  D T31_0;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:97
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:100
  T3 = Tincomplete_generic_function_domainsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:100
  T15_0 = KgethashVKiI(T3, g_, &KPempty_listVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:100
  T16 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:100
  old_ = T16;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:101
  T17 = primitive_idQ(old_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:101
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:101
    T13_0 = &KPfalseVKi;
    T14_0 = T13_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:102
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
    T7T = old_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
      T7 = T7T;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
      T18 = primitive_idQ(T7,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
      if (T18 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
        T19 = SLOT_VALUE_INITD(T7, 0);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
        d_ = T19;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:104
        CONGRUENT_CALL_PROLOG(&Kdomain_matchQVKe, 2);
        T9 = CONGRUENT_CALL2(d_, frob_);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:104
        if (T9 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
          T20 = KremoveXVKdMM7I(old_, d_, &KPempty_vectorVKi, &KEEVKd, &KPfalseVKi);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
          T10 = Tincomplete_generic_function_methodsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
          T21 = SLOT_VALUE_INITD(T10, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
          T24 = primitive_instanceQ(T20,T21);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
          if (T24 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
            T23.vector_element_[0] = &KJvalue_;
            T23.vector_element_[1] = T20;
            T23.vector_element_[2] = &KJtype_;
            T23.vector_element_[3] = T21;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T22 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T23);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
            CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
            CONGRUENT_CALL2(T22, &KPempty_vectorVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:105
          KputhashVKiI(T20, T10, g_);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:106
          T25.vector_element_[0] = d_;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:102
          T26 = MV_SET_REST_AT(&T25, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:102
          T12_0 = T26;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:104
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
        T28 = SLOT_VALUE_INITD(T7, 1);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
        T29_0 = T28;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
        T27_0 = T29_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
        T30 = T27_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
        T7T = T30;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
      T11 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:103
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:102
    T12_0 = T11;
    L1: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:102
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:102
    T31_0 = T12_0;
    T14_0 = T31_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:97
  MV_SET_COUNT(1);
  return(T14_0);
}

D KPredefine_genericVKnI (D gf_, D debug_name_, D module_, D signature_, D sealedQ_) {
  D T6;
  D T7T, T7;
  DWORD i_T, i_;
  D m_;
  D T10_0;
  D T10_1;
  D wellQ_;
  D T12;
  D T13_0;
  D T13_1;
  D barfo_;
  D T15;
  D T16;
  D T17_0;
  D lossage_;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_8 T29 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  D T35;
  D T36_0;
  D T37;
  D T38_0;
  D T39;
  DWORD T40;
  D T41;
  _KLsimple_object_vectorGVKd_2 T42 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T43 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  lossage_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  T22 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  SLOT_VALUE_SETTER(gf_, T22, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  SLOT_VALUE_SETTER(&KPfalseVKi, T22, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  T23 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  SLOT_VALUE_SETTER(T22, T23, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  SLOT_VALUE_SETTER(&KPempty_listVKi, T23, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  ENTER_UNWIND_FRAME(T6);
  if (!nlx_setjmp(FRAME_DEST(T6))) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T23, T23);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T24 = SLOT_VALUE_INITD(gf_, 4);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T21 = gf_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T25 = SLOT_VALUE_INITD(T21, 8);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T26 = SLOT_VALUE(T21, 6);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T27 = SLOT_VALUE_INITD(T26, 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T28 = SLOT_VALUE_INITD(T25, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T32 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T29.vector_element_[0] = &KJdebug_name_;
    T29.vector_element_[1] = debug_name_;
    T29.vector_element_[2] = &KJsignature_;
    T29.vector_element_[3] = signature_;
    T29.vector_element_[4] = &KJsealedQ_;
    T29.vector_element_[5] = sealedQ_;
    T29.vector_element_[6] = IKJmodule_;
    T29.vector_element_[7] = module_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    KreinitializeVKnMM0I(gf_, &T29);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T7T = T24;
    i_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
      T7 = T7T;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
      T34 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
      T30 = primitive_idQ(T7,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
      if (T30 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        T31 = SLOT_VALUE_INITD(T7, 0);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        m_ = T31;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        CONGRUENT_CALL_PROLOG(&KcongruentQVKi, 2);
        T10_0 = CONGRUENT_CALL2(gf_, m_);
        T10_1 = MV_GET_ELT(1);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        wellQ_ = T10_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        if (wellQ_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
          T33 = primitive_machine_word_less_thanQ(i_,T32);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
          if (T33 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
            T35 = KelementVKdMM11I(T25, T34, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            T12 = T35;
          } else {
            T12 = T27;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
          T13_0 = Kadd_method_internalVKiI(gf_, m_, T12, &KPfalseVKi, &KPfalseVKi);
          T13_1 = MV_GET_ELT(1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
          barfo_ = T13_1;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
          if (barfo_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
            CALL1(&KbletchVKg, barfo_);
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        T37 = SLOT_VALUE_INITD(T7, 1);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        T38_0 = T37;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        T36_0 = T38_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        T39 = T36_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        T40 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
        T7T = T39;
        i_T = T40;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    FALL_THROUGH_UNWIND(&KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T23, T23);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  T20 = lossage_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  T41 = primitive_idQ(T20,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  if (T41 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T19 = lossage_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T42.vector_element_[0] = gf_;
    T42.vector_element_[1] = T19;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T15 = KlistVKdI(&T42);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    T43.vector_element_[0] = &KJformat_string_;
    T43.vector_element_[1] = &K20;
    T43.vector_element_[2] = &KJformat_arguments_;
    T43.vector_element_[3] = T15;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T16 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T43);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
    KerrorVKdMM0I(T16, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  Khandle_generic_completeness_changeVKiMM0I(gf_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:348
  T17_0 = gf_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:345
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kcomplete_dependent_generic_functionVKiMM0I (D g_, D c_, D u_) {
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:293
  T4 = Knote_type_completeness_changeVKiMM0I(g_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:253
  MV_SET_COUNT(0);
  return(T4);
}

D Knote_type_completeness_changeVKiMM0I (D g_) {
  D z_;
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
  D T14_0;
  D T15;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:190
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:191
  T11 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:191
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:293
    T10 = g_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:192
    z_ = primitive_read_thread_variable(Tgenerics_being_finishedTVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:193
    if (z_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:196
      T12 = primitive_idQ(z_,&KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:196
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:196
        T14_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:196
        T13 = T14_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:196
        T4 = primitive_write_thread_variable(Tgenerics_being_finishedTVKi, T13);
        T5 = T4;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:192
        T15 = z_;
        T5 = T15;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:196
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
      T16 = SLOT_VALUE_INITD(T5, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
      T19 = primitive_instanceQ(&KPtrueVKi,T16);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = &KPtrueVKi;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = T16;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
      KputhashVKiI(&KPtrueVKi, T5, T10);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:197
      T6 = &KPfalseVKi;
      T7 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:194
      T3 = Khandle_generic_completeness_changeVKiMM0I(T10);
      T7 = T3;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:193
    T9 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:191
    T8 = &KPfalseVKi;
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:191
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:190
  MV_SET_COUNT(0);
  return(T9);
}

D Khandle_generic_completeness_changeVKiMM0I (D g_) {
  D T2;
  D tF3;
  D gF4;
  D tF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D sublF12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D nxtF17;
  D winQF18;
  D nlossageF19;
  D T20;
  D cellF21;
  D T22;
  D T23_0;
  D T23_1;
  D hdrF24;
  D prevF25;
  D lossageF26;
  D T27;
  D T28;
  D T29;
  _KLsimple_object_vectorGVKd_4 T30 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T31;
  D T32;
  D T33;
  _KLsimple_object_vectorGVKd_1 T34 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T35_0;
  D T35_1;
  D T36_0;
  D T36_1;
  D T37;
  D T38;
  _KLsimple_object_vectorGVKd_1 T39 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T40_0;
  D T41;
  D sublF42T, sublF42;
  D lossageF43T, lossageF43;
  D hdrF44T, hdrF44;
  D prevF45T, prevF45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  _KLsimple_object_vectorGVKd_1 T51 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T52;
  D T53;
  D T54;
  D T55;
  D sublF56;
  D T57;
  D T58;
  D T59;
  D T60_0;
  D T61;
  D nxtF62;
  D winQF63;
  D nlossageF64;
  D T65;
  D cellF66;
  D T67;
  D T68_0;
  D T68_1;
  D hdrF69;
  D prevF70;
  D T71;
  D lossageF72;
  D T73;
  D T74;
  D T75;
  _KLsimple_object_vectorGVKd_4 T76 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T77;
  D T78;
  D T79;
  _KLsimple_object_vectorGVKd_1 T80 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T81_0;
  D T81_1;
  D T82_0;
  D T82_1;
  D T83;
  D T84;
  D T85;
  _KLsimple_object_vectorGVKd_1 T86 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T87_0;
  D T88;
  D sublF89T, sublF89;
  D lossageF90T, lossageF90;
  D hdrF91T, hdrF91;
  D prevF92T, prevF92;
  D T93;
  D T94;
  D m_;
  D T96;
  D lib_;
  D T98;
  D T99;
  D T100;
  D T101_0;
  D T102;
  D T103_0;
  D T104;
  D T105;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:217
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:218
  T9 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:218
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:333
    T8 = g_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:218
    T10 = Krecompute_type_completeXVKiMM3I(T8);
    T2 = T10;
  } else {
    T2 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:218
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:218
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:219
    tF3 = Tincomplete_generic_function_domainsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:220
    gF4 = g_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    T13 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    SLOT_VALUE_SETTER(gF4, T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    SLOT_VALUE_SETTER(&KPfalseVKi, T13, 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    SLOT_VALUE_SETTER(T13, T14, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    SLOT_VALUE_SETTER(&KPempty_listVKi, T14, 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    ENTER_UNWIND_FRAME(T11);
    if (!nlx_setjmp(FRAME_DEST(T11))) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
      Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T14, T14);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
      T15_0 = KgethashVKiI(tF3, gF4, &KPempty_listVKi, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
      T16 = T15_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
      sublF12 = T16;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
      sublF42T = sublF12;
      lossageF43T = &KPempty_listVKi;
      hdrF44T = &KPfalseVKi;
      prevF45T = sublF12;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
        sublF42 = sublF42T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
        lossageF43 = lossageF43T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
        hdrF44 = hdrF44T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
        prevF45 = prevF45T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
        T27 = primitive_idQ(sublF42,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          if (hdrF44 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T28 = SLOT_VALUE_INITD(tF3, 0);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T31 = primitive_instanceQ(hdrF44,T28);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            if (T31 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
              T30.vector_element_[0] = &KJvalue_;
              T30.vector_element_[1] = hdrF44;
              T30.vector_element_[2] = &KJtype_;
              T30.vector_element_[3] = T28;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
              CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
              T29 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T30);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
              CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
              CONGRUENT_CALL2(T29, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            KputhashVKiI(hdrF44, tF3, gF4);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            Kremove_keyXVKdMM0I(tF3, gF4);
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          T47 = lossageF43;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          T32 = SLOT_VALUE_INITD(sublF42, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          T33 = SLOT_VALUE_INITD(sublF42, 1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          nxtF17 = T33;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:225
          CONGRUENT_CALL_PROLOG(&Krecompute_type_completeXVKi, 1);
          T48 = CONGRUENT_CALL1(T32);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:225
          if (T48 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:226
            T51.vector_element_[0] = T32;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:226
            T52 = primitive_copy_vector(&T51);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:226
            T49 = KPadd_domains_internalVKiI(gF4, T52);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:226
            T53 = &KPtrueVKi;
            MV_SET_ELT(0, &KPtrueVKi);
            MV_SET_ELT(1, T49);
            MV_SET_COUNT(2);
            T50 = T53;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:228
            T54 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_ELT(1, &KPempty_listVKi);
            MV_SET_COUNT(2);
            T50 = T54;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:225
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          winQF18 = T50;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          nlossageF19 = MV_GET_ELT(1);
;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          if (winQF18 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T36_0 = hdrF44;
            T36_1 = prevF45;
            T23_0 = T36_0;
            T23_1 = T36_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T34.vector_element_[0] = T32;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T20 = KlistVKdI(&T34);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            cellF21 = T20;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            if (hdrF44 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
              SLOT_VALUE_SETTER(cellF21, prevF45, 1);
              T22 = hdrF44;
            } else {
              T22 = cellF21;
            }
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T35_0 = T22;
            T35_1 = cellF21;
            T23_0 = T35_0;
            T23_1 = T35_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          hdrF24 = T23_0;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          prevF25 = T23_1;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          T37 = primitive_idQ(nlossageF19,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          if (T37 != &KPfalseVKi) {
            lossageF26 = lossageF43;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T39.vector_element_[0] = nlossageF19;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T40_0 = Kconcatenate_asVKdMM4I(&KLlistGVKd, lossageF43, &T39);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
            T38 = T40_0;
            lossageF26 = T38;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          sublF42T = nxtF17;
          lossageF43T = lossageF26;
          hdrF44T = hdrF24;
          prevF45T = prevF25;
          goto L0;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
          T46 = T41;
          T47 = T46;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
      FALL_THROUGH_UNWIND(T47);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T14, T14);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:223
    Kbletch_stackVKgI(T47);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:233
    tF5 = Tincomplete_generic_function_methodsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    T58 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    SLOT_VALUE_SETTER(gF4, T58, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    SLOT_VALUE_SETTER(&KPfalseVKi, T58, 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    T59 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    SLOT_VALUE_SETTER(T58, T59, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    SLOT_VALUE_SETTER(&KPempty_listVKi, T59, 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    ENTER_UNWIND_FRAME(T55);
    if (!nlx_setjmp(FRAME_DEST(T55))) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
      Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T59, T59);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
      T60_0 = KgethashVKiI(tF5, gF4, &KPempty_listVKi, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
      T61 = T60_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
      sublF56 = T61;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
      sublF89T = sublF56;
      lossageF90T = &KPempty_listVKi;
      hdrF91T = &KPfalseVKi;
      prevF92T = sublF56;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
        sublF89 = sublF89T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
        lossageF90 = lossageF90T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
        hdrF91 = hdrF91T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
        prevF92 = prevF92T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
        T73 = primitive_idQ(sublF89,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
        if (T73 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          if (hdrF91 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T74 = SLOT_VALUE_INITD(tF5, 0);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T77 = primitive_instanceQ(hdrF91,T74);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            if (T77 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
              T76.vector_element_[0] = &KJvalue_;
              T76.vector_element_[1] = hdrF91;
              T76.vector_element_[2] = &KJtype_;
              T76.vector_element_[3] = T74;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
              CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
              T75 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T76);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
              CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
              CONGRUENT_CALL2(T75, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            KputhashVKiI(hdrF91, tF5, gF4);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            Kremove_keyXVKdMM0I(tF5, gF4);
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          T94 = lossageF90;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          T78 = SLOT_VALUE_INITD(sublF89, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          T79 = SLOT_VALUE_INITD(sublF89, 1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          nxtF62 = T79;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:238
          T101_0 = KelementVKdMM25I(T78, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:238
          T100 = T101_0;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:238
          m_ = T100;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:239
          CONGRUENT_CALL_PROLOG(&Krecompute_type_completeXVKi, 1);
          T96 = CONGRUENT_CALL1(m_);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:239
          if (T96 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:240
            T103_0 = KelementVKdMM25I(T78, (D) 5, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:240
            T102 = T103_0;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:240
            lib_ = T102;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:241
            T98 = Kadd_method_internalVKiI(gF4, m_, lib_, &KPtrueVKi, &KPtrueVKi);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:241
            T104 = &KPtrueVKi;
            MV_SET_ELT(0, &KPtrueVKi);
            MV_SET_ELT(1, T98);
            MV_SET_COUNT(2);
            T99 = T104;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:243
            T105 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_ELT(1, &KPempty_listVKi);
            MV_SET_COUNT(2);
            T99 = T105;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:239
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          winQF63 = T99;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          nlossageF64 = MV_GET_ELT(1);
;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          if (winQF63 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T82_0 = hdrF91;
            T82_1 = prevF92;
            T68_0 = T82_0;
            T68_1 = T82_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T80.vector_element_[0] = T78;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T65 = KlistVKdI(&T80);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            cellF66 = T65;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            if (hdrF91 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
              SLOT_VALUE_SETTER(cellF66, prevF92, 1);
              T67 = hdrF91;
            } else {
              T67 = cellF66;
            }
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T81_0 = T67;
            T81_1 = cellF66;
            T68_0 = T81_0;
            T68_1 = T81_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          hdrF69 = T68_0;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          prevF70 = T68_1;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          if (nlossageF64 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T84 = primitive_idQ(nlossageF64,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T83 = primitive_not(T84);
            T71 = T83;
          } else {
            T71 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          if (T71 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T86.vector_element_[0] = nlossageF64;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T87_0 = Kconcatenate_asVKdMM4I(&KLlistGVKd, lossageF90, &T86);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
            T85 = T87_0;
            lossageF72 = T85;
          } else {
            lossageF72 = lossageF90;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          sublF89T = nxtF62;
          lossageF90T = lossageF72;
          hdrF91T = hdrF69;
          prevF92T = prevF70;
          goto L1;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
          T93 = T88;
          T94 = T93;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
      FALL_THROUGH_UNWIND(T94);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T59, T59);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:236
    T57 = Kbletch_stackVKgI(T94);
    MV_SET_COUNT(0);
    T7 = T57;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:218
    T6 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:218
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:217
  return(T7);
}

D KPredefine_complex_classVKnI (D class_, D debug_name_, D module_, D abstractQ_, D primaryQ_, D sealedQ_, D superclasses_, D slots_, D inherited_slots_, D keywords_) {
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:471
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:476
  T10_0 = KPPredefine_complex_classVKiI(class_, debug_name_, module_, abstractQ_, primaryQ_, sealedQ_, superclasses_, slots_, inherited_slots_, keywords_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:471
  MV_SET_COUNT(1);
  return(T10_0);
}

D KPPredefine_complex_classVKiI (D class_, D debug_name_, D module_, D abstractQ_, D primaryQ_, D sealedQ_, D superclasses_, D slots_, D inherited_slots_, D keywords_) {
  D T10;
  D T11;
  D T12;
  D slotsF13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D ans_;
  D T23_0;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_1 T26 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37_0;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47_0;
  D T48;
  D T49;
  D T50;
  D T51_0;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  _KLsimple_object_vectorGVKd_1 T59 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_18 T60 = {&KLsimple_object_vectorGVKdW, (D) 73};
  D res_;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  D T67;
  D T68_0;
  D T69;
  D T70;
  D T71;
  D T72;
  _KLsimple_object_vectorGVKd_2 T73 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T74;
  D T75;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:417
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:422
  T25 = primitive_instanceQ(superclasses_,&KLsequenceGVKd);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:422
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:422
    T28 = superclasses_;
    T10 = T28;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:425
    T26.vector_element_[0] = superclasses_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:425
    T27 = primitive_copy_vector(&T26);
    T10 = T27;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:422
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:429
  T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_PPredefine_complex_classF64, 1, class_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:428
  T12 = CALL3(&Kmap_asVKd, &KLsimple_object_vectorGVKd, T11, slots_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:427
  slotsF13 = T12;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T32 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T33 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T34 = primitive_idQ(T33,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T35 = primitive_not(T34);
    T31 = T35;
  } else {
    T31 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T36 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T37_0 = KmemberQVKdMM3I(&KJlock_, T36, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T38 = T37_0;
    T39 = T38;
  } else {
    T39 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T39 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T40 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    CALL1(T40, &Kanonymous_of_PPredefine_complex_classF60);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T29 = primitive_wait_for_simple_lock(Dclass_bashing_lockVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T42 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T42 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T43 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T44 = primitive_idQ(T43,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T45 = primitive_not(T44);
    T41 = T45;
  } else {
    T41 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T41 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T46 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T47_0 = KmemberQVKdMM3I(&KJlock_, T46, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T48 = T47_0;
    T49 = T48;
  } else {
    T49 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T49 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T50 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T30 = MAKE_CLOSURE_INITD(&Kanonymous_of_PPredefine_complex_classF62, 1, T29);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    CALL1(T50, T30);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T52 = primitive_idQ(T29,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T52 != &KPfalseVKi) {
    T56 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T53 = primitive_idQ(T29,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    if (T53 != &KPfalseVKi) {
      T55 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T51_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, T29);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T54 = T51_0;
      T55 = T54;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T56 = T55;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T56 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    ENTER_UNWIND_FRAME(T14);
    if (!nlx_setjmp(FRAME_DEST(T14))) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:433
      T57 = SLOT_VALUE(class_, 2);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:433
      T58 = SLOT_VALUE_INITD(T57, 14);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:433
      T59.vector_element_[0] = class_;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:433
      T15 = KlistVKdI(&T59);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:433
      T16 = Kdependent_subclassesVKiI(T58, T15);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:434
      T17 = Knonstructural_redefinitionQVKiMM0I(class_, T10, slotsF13);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:434
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:435
        T18 = KPredefine_class_attributes_onlyVKiMM0I(class_, T16, &KPempty_vectorVKi, slotsF13, inherited_slots_, keywords_, T10);
        T20 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:442
        T60.vector_element_[0] = &KJdebug_name_;
        T60.vector_element_[1] = debug_name_;
        T60.vector_element_[2] = &KJsuperclasses_;
        T60.vector_element_[3] = T10;
        T60.vector_element_[4] = &KJabstractQ_;
        T60.vector_element_[5] = abstractQ_;
        T60.vector_element_[6] = &KJprimaryQ_;
        T60.vector_element_[7] = primaryQ_;
        T60.vector_element_[8] = &KJsealedQ_;
        T60.vector_element_[9] = sealedQ_;
        T60.vector_element_[10] = IKJmodule_;
        T60.vector_element_[11] = module_;
        T60.vector_element_[12] = &KJslots_;
        T60.vector_element_[13] = slotsF13;
        T60.vector_element_[14] = &KJinherited_slots_;
        T60.vector_element_[15] = inherited_slots_;
        T60.vector_element_[16] = &KJkeywords_;
        T60.vector_element_[17] = keywords_;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:442
        T19 = KPredefine_class_of_new_structureVKiMM0I(class_, T16, &T60);
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:434
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      FALL_THROUGH_UNWIND(T20);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T63 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    if (T63 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T64 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T65 = primitive_idQ(T64,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T66 = primitive_not(T65);
      T62 = T66;
    } else {
      T62 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    if (T62 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T67 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T68_0 = KmemberQVKdMM3I(&KJlock_, T67, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T69 = T68_0;
      T70 = T69;
    } else {
      T70 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    if (T70 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      T71 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      CALL1(T71, &Kanonymous_of_PPredefine_complex_classF37);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    res_ = primitive_release_simple_lock(Dclass_bashing_lockVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T72 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    if (T72 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
      Klock_release_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    CONTINUE_UNWIND();
    ans_ = T20;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T73.vector_element_[0] = &KJsynchronization_;
    T73.vector_element_[1] = Dclass_bashing_lockVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T21 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T73);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T74 = KsignalVKdMM0I(T21, &KPempty_vectorVKi);
    ans_ = T74;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:455
  T75 = primitive_instanceQ(ans_,&KLconditionGVKd);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:455
  if (T75 != &KPfalseVKi) {
    T24 = ans_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:456
    CONGRUENT_CALL_PROLOG(&KbletchVKg, 1);
    CONGRUENT_CALL1(T24);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:455
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:458
  T23_0 = class_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:417
  MV_SET_COUNT(1);
  return(T23_0);
}

static D Kanonymous_of_PPredefine_complex_classF64I (D stuff_) {
  D T1;
  _KLsimple_object_vectorGVKd_2 T2 = {&KLsimple_object_vectorGVKdW, (D) 9};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:429
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:429
  T2.vector_element_[0] = CREF(0);
  T2.vector_element_[1] = stuff_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:429
  T1 = KapplyVKdI(&Kcreate_slot_descriptorVKi, &T2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:429
  return(T1);
}

static D Kanonymous_of_PPredefine_complex_classF62I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T5.vector_element_[0] = &K63;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_PPredefine_complex_classF60I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T5.vector_element_[0] = &K61;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kdependent_subclassesVKiI (D classes_, D ans_) {
  D T3;
  D the_head_;
  D the_tail_;
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
  D classesF17;
  D ansF18;
  D T19;
  D T20;
  D T21;
  D T22;
  D classesF23T, classesF23;
  D ansF24T, ansF24;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:395
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:407
  classesF23T = classes_;
  ansF24T = ans_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:409
    classesF23 = classesF23T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:409
    ansF24 = ansF24T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:407
    classesF17 = classesF23;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:407
    ansF18 = ansF24;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:397
    T11 = primitive_idQ(classesF17,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:397
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:398
      T3 = ansF18;
      MV_SET_ELT(0, ansF18);
      MV_SET_COUNT(1);
      T10 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:400
      T12 = SLOT_VALUE_INITD(classesF17, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:400
      the_head_ = T12;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:401
      T13 = SLOT_VALUE_INITD(classesF17, 1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:401
      the_tail_ = T13;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:402
      T14 = primitive_idQ(the_head_,&KLobjectGVKd);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:402
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:403
        T6 = ansF18;
        MV_SET_ELT(0, ansF18);
        MV_SET_COUNT(1);
        T9 = T6;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:404
        T15 = KmemberQVKdMM3I(the_head_, ansF18, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:402
        if (T15 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:407
          classesF23T = the_tail_;
          ansF24T = ansF24;
          goto L0;
          T8 = T16;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:409
          T19 = SLOT_VALUE(the_head_, 2);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:409
          T20 = SLOT_VALUE_INITD(T19, 14);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:410
          T21 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:410
          SLOT_VALUE_SETTER(the_head_, T21, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:410
          SLOT_VALUE_SETTER(ansF18, T21, 1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:409
          T7 = Kdependent_subclassesVKiI(T20, T21);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:409
          classesF23T = the_tail_;
          ansF24T = T7;
          goto L0;
          T8 = T22;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:402
        T9 = T8;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:402
      T10 = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:397
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:407
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:395
  return(T10);
}

D Knonstructural_redefinitionQVKiMM0I (D class_, D superclasses_, D slots_) {
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
  DWORD T17T, T17;
  D result_T, result_;
  DWORD T19;
  D T20;
  D T21;
  DWORD T22;
  D old_;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:482
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:486
  T9 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:486
  T10 = SLOT_VALUE(T9, 7);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:486
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(superclasses_, T10);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:486
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:489
    T11 = SLOT_VALUE(class_, 2);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:489
    T12 = SLOT_VALUE_INITD(T11, 16);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:490
    T13 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:491
    T14 = SLOT_VALUE_INITD(slots_, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:492
    T15 = primitive_idQ(T14,T13);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:492
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
      T19 = primitive_cast_integer_as_raw(T14);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
      T17T = 1;
      result_T = &KPtrueVKi;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
        T17 = T17T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
        result_ = result_T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
        T20 = primitive_machine_word_equalQ(T17,T19);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
        if (T20 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
          T21 = REPEATED_D_SLOT_VALUE_TAGGED(slots_, 1, T17);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
          if (result_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
            T22 = primitive_machine_word_add_signal_overflow(T17,4);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:494
            old_ = Kfind_old_slotVKiMM0I(T21, T12);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:495
            if (old_ != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:434
              T29 = old_;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:497
              CONGRUENT_CALL_PROLOG(&Kslot_allocationVKe, 1);
              T24 = CONGRUENT_CALL1(T29);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:497
              CONGRUENT_CALL_PROLOG(&Kslot_allocationVKe, 1);
              T25 = CONGRUENT_CALL1(T21);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:497
              T30 = primitive_idQ(T24,T25);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:497
              if (T30 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:498
                T31 = SLOT_VALUE_INITD(T29, 6);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:498
                T32 = SLOT_VALUE_INITD(T21, 6);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:498
                T26 = Ksame_specializerQVKgI(T31, T32);
                T27 = T26;
              } else {
                T27 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:497
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:497
              if (T27 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:499
                T33 = SLOT_VALUE_INITD(T29, 5);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:499
                T34 = SLOT_VALUE_INITD(T21, 5);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:499
                T28 = KEEVKdI(T33, T34);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
                T35 = T28;
                T36 = T35;
              } else {
                T36 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:497
              T37 = T36;
            } else {
              T37 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:495
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
            T17T = T22;
            result_T = T37;
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:493
      T16 = result_;
      MV_SET_ELT(0, result_);
      MV_SET_COUNT(1);
      T6 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:492
      T5 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:492
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:486
    T7 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:486
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:482
  return(T8);
}

D KPredefine_class_attributes_onlyVKiMM0I (D class_, D dependents_, D Urest_, D slots_, D inherited_slots_, D keywords_, D superclasses_) {
  D slotsF8;
  DWORD T9T, T9;
  D osd_;
  D Utmp_;
  D T12;
  D T13T, T13;
  D dep_;
  D T15_0;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  _KLsimple_object_vectorGVKd_1 T22 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30_0;
  D T31;
  D T32;
  D T33_0;
  D T34;
  D T35_0;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:707
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:707
  primitive_type_check(slots_, &KLsimple_object_vectorGVKd);
  slotsF8 = slots_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:707
  primitive_type_check(inherited_slots_, &KLsimple_object_vectorGVKd);
  inherited_slots_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:707
  primitive_type_check(keywords_, &KLsimple_object_vectorGVKd);
  keywords_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:707
  primitive_type_check(superclasses_, &KLsimple_object_vectorGVKd);
  superclasses_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
  T16 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
  T17 = SLOT_VALUE_INITD(T16, 16);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
  T18 = SLOT_VALUE_INITD(T17, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
  T19 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
  T9T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
    T20 = primitive_machine_word_equalQ(T9,T19);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
    if (T20 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
      T21 = REPEATED_D_SLOT_VALUE_TAGGED(T17, 1, T9);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
      osd_ = T21;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:715
      Utmp_ = Kfind_old_slotVKiMM0I(osd_, slotsF8);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:715
      if (Utmp_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:715
        T24 = Utmp_;
        T12 = T24;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:715
        T22.vector_element_[0] = class_;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:715
        T23 = KerrorVKdMM1I(&K53, &T22);
        T12 = T23;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:715
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:716
      Koverwrite_slot_descriptorVKiMM0I(osd_, T12);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
      T25 = primitive_machine_word_add_signal_overflow(T9,4);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
      T9T = T25;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:713
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
  T13T = dependents_;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
    T13 = T13T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
    T26 = primitive_idQ(T13,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
    if (T26 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
      T27 = SLOT_VALUE_INITD(T13, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
      dep_ = T27;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:719
      T28 = SLOT_VALUE(dep_, 2);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:721
      T29 = SLOT_VALUE(dep_, 2);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:721
      T30_0 = Kall_superclassesVKdMM1I(T29);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:721
      T31 = T30_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:720
      T32 = Kmap_asVKdMM0I(&KLlistGVKd, &Kanonymous_of_Predefine_class_attributes_onlyF57, T31, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:719
      Kcompute_defaulted_initialization_argumentsVKiI(T28, T32, Dempty_subjunctive_class_universeVKe);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
      T34 = SLOT_VALUE_INITD(T13, 1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
      T35_0 = T34;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
      T33_0 = T35_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
      T36 = T33_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
      T13T = T36;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:718
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:724
  T15_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:707
  MV_SET_COUNT(1);
  return(T15_0);
}

D KPredefine_class_of_new_structureVKiMM0I (D class_, D dependents_, D initargs_) {
  D T4;
  D u_;
  D T6T, T6;
  D cF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16T, T16;
  D T17;
  D joint_;
  D T19;
  D cF20;
  D cF21;
  D T22;
  D T23_0;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  _KLsimple_object_vectorGVKd_14 T36 = {&KLsimple_object_vectorGVKdW, (D) 57};
  D T37_0;
  D T38;
  D T39_0;
  D T40;
  D T41;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:517
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:520
  T4 = Kmake_empty_subjunctive_class_universeVKeI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:520
  u_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:522
  T24 = APPLY8(&KmakeVKd, &KLimplementation_classGVKe, &KJclass_, class_, IKJdefer_cross_class_computationsQ_, &KPtrueVKi, IKJsubjunctive_class_universe_, u_, initargs_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
  T6T = dependents_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
    T6 = T6T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
    T25 = primitive_idQ(T6,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
    if (T25 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
      T26 = SLOT_VALUE_INITD(T6, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
      cF7 = T26;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:531
      T27 = primitive_idQ(cF7,class_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:531
      if (T27 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:536
        T28 = SLOT_VALUE(cF7, 2);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:536
        T29 = SLOT_VALUE(T28, 7);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:537
        T30 = SLOT_VALUE(cF7, 2);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:537
        T31 = SLOT_VALUE_INITD(T30, 16);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:538
        T32 = SLOT_VALUE(cF7, 2);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:538
        T33 = SLOT_VALUE_INITD(T32, 18);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:539
        T34 = SLOT_VALUE(cF7, 2);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:539
        T35 = SLOT_VALUE_INITD(T34, 19);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:532
        T36.vector_element_[0] = &KJclass_;
        T36.vector_element_[1] = cF7;
        T36.vector_element_[2] = IKJsubjunctive_class_universe_;
        T36.vector_element_[3] = u_;
        T36.vector_element_[4] = IKJdefer_cross_class_computationsQ_;
        T36.vector_element_[5] = &KPtrueVKi;
        T36.vector_element_[6] = &KJsuperclasses_;
        T36.vector_element_[7] = T29;
        T36.vector_element_[8] = &KJslots_;
        T36.vector_element_[9] = T31;
        T36.vector_element_[10] = &KJinherited_slots_;
        T36.vector_element_[11] = T33;
        T36.vector_element_[12] = &KJkeywords_;
        T36.vector_element_[13] = T35;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:532
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        CONGRUENT_CALL2(&KLimplementation_classGVKe, &T36);
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:531
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
      T38 = SLOT_VALUE_INITD(T6, 1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
      T39_0 = T38;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
      T37_0 = T39_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
      T40 = T37_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
      T6T = T40;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:530
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:544
  Kscu_initialize_allVKeI(&Kdo_implementation_class_cross_class_initializationsVKiMM0, u_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:548
  T8 = Kcompute_known_jointVKiI(T24, dependents_, u_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:559
  Kscu_doVKeI(&Kinvalidate_previous_implementation_classVKi, u_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:560
  Kscu_doVKeI(&Kinstall_implementation_classVKiMM0, u_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T9 = CONGRUENT_CALL1(T8);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  T10 = T9;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  T11 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  T12 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  T13 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  T14 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  T15 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  T16T = T10;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
    T16 = T16T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
    T17 = CALL3(T13, T8, T16, T11);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
      T19 = CALL2(T15, T8, T16);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
      joint_ = T19;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
      cF20 = CALL2(T14, T8, T16);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:562
      cF21 = cF20;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:563
      T41 = KasVKdMM41I(&KLsimple_object_vectorGVKd, joint_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:563
      CONGRUENT_CALL_PROLOG(&Kclass_known_joint_setterVKe, 2);
      CONGRUENT_CALL2(T41, cF21);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
      T22 = CALL2(T12, T8, T16);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
      T16T = T22;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:561
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:565
  Kscu_doVKeI(&Kadd_slot_methodsVKi, u_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:566
  T23_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:517
  MV_SET_COUNT(1);
  return(T23_0);
}

static D Kanonymous_of_PPredefine_complex_classF37I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T5.vector_element_[0] = &K38;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:432
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcompute_known_jointVKiI (D iclass_, D dependents_, D u_) {
  D T3;
  D T4;
  D T5T, T5;
  D cF6;
  D subl_T, subl_;
  D T8;
  D c1_;
  D j0_;
  D T11;
  D T12;
  D T13_0;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D UtmpF33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T39;
  D T40;
  D T41;
  D c2_;
  D UtmpF43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  _KLsimple_object_vectorGVKd_4 T51 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T52;
  D T53;
  D T54;
  D UtmpF55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D subl2F61;
  D T62;
  D j1F63;
  D T64;
  D T65;
  D subl2F66T, subl2F66;
  D j1F67T, j1F67;
  D T68;
  D T69_0;
  D T70;
  D T71_0;
  D T72;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:569
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:573
  T15_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:573
  T14 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:575
  T16 = Kall_superclassesVKdMM1I(iclass_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:575
  T17 = SLOT_VALUE_INITD(T16, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:578
  T18 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:577
  T19 = SLOT_VALUE(T18, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:577
  T20 = Kall_superclassesVKdMM1I(T19);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:577
  T21 = SLOT_VALUE_INITD(T20, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:576
  T3 = Kdependent_subclassesVKiI(T21, dependents_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:575
  T4 = Kdependent_subclassesVKiI(T17, T3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
  T5T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
    T5 = T5T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
    T22 = primitive_idQ(T5,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
    if (T22 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
      T23 = SLOT_VALUE_INITD(T5, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
      cF6 = T23;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
      T24 = SLOT_VALUE(cF6, 2);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
      T25_0 = Kall_superclassesVKdMM1I(T24);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
      T26 = T25_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
      T27 = SLOT_VALUE_INITD(T26, 1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
      T8 = T27;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
      subl_T = T8;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
        subl_ = subl_T;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:582
        T28 = primitive_idQ(subl_,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:582
        if (T28 != &KPfalseVKi) {
          T12 = T28;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:582
          T29 = SLOT_VALUE_INITD(subl_, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:582
          T30 = primitive_idQ(T29,&KLobjectGVKd);
          T12 = T30;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:582
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
        if (T12 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:583
          T31 = SLOT_VALUE_INITD(subl_, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:583
          c1_ = T31;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
          T35 = primitive_idQ(u_,Dempty_subjunctive_class_universeVKe);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
          if (T35 != &KPfalseVKi) {
            UtmpF33 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
            T32 = Kscu_entryQVKeI(c1_, u_);
            UtmpF33 = T32;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
          if (UtmpF33 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
            T34 = UtmpF33;
            T37 = T34;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
            T36 = SLOT_VALUE(c1_, 2);
            T37 = T36;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:584
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:585
          T38_0 = KgethashVKiI(T14, c1_, &KPempty_listVKi, &KPtrueVKi);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:585
          T39 = T38_0;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:585
          j0_ = T39;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:599
          T40 = SLOT_VALUE_INITD(subl_, 1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:593
          subl2F66T = T40;
          j1F67T = j0_;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:595
            subl2F66 = subl2F66T;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:595
            j1F67 = j1F67T;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:593
            subl2F61 = subl2F66;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:593
            T62 = subl2F61;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:593
            j1F63 = j1F67;
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:587
            T45 = primitive_idQ(T62,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:587
            if (T45 != &KPfalseVKi) {
              T41 = T45;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:587
              T46 = SLOT_VALUE_INITD(T62, 0);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:587
              T47 = primitive_idQ(T46,&KLobjectGVKd);
              T41 = T47;
            }
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:587
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:587
            if (T41 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
              T48 = primitive_idQ(j0_,j1F63);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
              if (T48 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                T49 = SLOT_VALUE_INITD(T14, 0);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                T52 = primitive_instanceQ(j1F63,T49);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                if (T52 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                  T51.vector_element_[0] = &KJvalue_;
                  T51.vector_element_[1] = j1F63;
                  T51.vector_element_[2] = &KJtype_;
                  T51.vector_element_[3] = T49;
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                  T50 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T51);
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                  CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
                  CONGRUENT_CALL2(T50, &KPempty_vectorVKi);
                }
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
                KputhashVKiI(j1F63, T14, c1_);
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:588
            } else {
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:590
              T53 = SLOT_VALUE_INITD(T62, 0);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:590
              c2_ = T53;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:591
              if (T35 != &KPfalseVKi) {
                UtmpF55 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:591
                T54 = Kscu_entryQVKeI(c2_, u_);
                UtmpF55 = T54;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:591
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:591
              if (UtmpF55 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:591
                T56 = UtmpF55;
                T58 = T56;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:591
                T57 = SLOT_VALUE(c2_, 2);
                T58 = T57;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:591
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:592
              UtmpF43 = KsubiclassQVKiI(T37, c1_, T58, c2_);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:592
              if (UtmpF43 != &KPfalseVKi) {
                T44 = UtmpF43;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:592
                T59 = KmemberQVKdMM3I(c2_, j1F63, &KPempty_vectorVKi, &KEEVKd);
                T44 = T59;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:592
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:592
              if (T44 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:593
                T60 = SLOT_VALUE_INITD(T62, 1);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:593
                subl2F66T = T60;
                j1F67T = j1F67;
                goto L2;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:595
                T64 = SLOT_VALUE_INITD(T62, 1);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:595
                T65 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:595
                SLOT_VALUE_SETTER(c2_, T65, 0);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:595
                SLOT_VALUE_SETTER(j1F63, T65, 1);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:595
                subl2F66T = T64;
                j1F67T = T65;
                goto L2;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:592
            }
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:587
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:593
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
          T68 = SLOT_VALUE_INITD(subl_, 1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
          T11 = T68;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
          subl_T = T11;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:581
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
      T70 = SLOT_VALUE_INITD(T5, 1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
      T71_0 = T70;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
      T69_0 = T71_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
      T72 = T69_0;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
      T5T = T72;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:580
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:602
  T13_0 = T14;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:569
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kinvalidate_previous_implementation_classVKiI (D ic_, D scu_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:606
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:609
  T6 = SLOT_VALUE_INITD(ic_, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:609
  T7 = SLOT_VALUE(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
  T8 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
    T9 = primitive_idQ(T7,ic_);
    T3 = T9;
  } else {
    T3 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
    T10.vector_element_[0] = ic_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
    Kdebug_assertion_failureVKiI(&K45, &T10);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:610
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:559
  T5 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:616
  T4 = Kinvalidate_implementation_classVKiMM0I(T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:606
  MV_SET_COUNT(0);
  return(T4);
}

D Kinvalidate_implementation_classVKiMM0I (D ic_) {
  D T2;
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

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:625
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:626
  T2 = Tobsolete_instance_classTVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:627
  Kremove_implementation_class_slot_methodsVKiMM0I(ic_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:628
  T5 = SLOT_VALUE_INITD(ic_, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:628
  Kinvalidate_class_instanceQ_iepVKiI(T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:629
  SLOT_VALUE_SETTER(T2, ic_, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:630
  T6 = SLOT_VALUE(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:631
  T7 = Kall_superclassesVKdMM1I(T6);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:631
  Kall_superclasses_setterVKeMM1I(T7, ic_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:632
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, ic_, 11);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:633
  T8 = SLOT_VALUE(T6, 7);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:633
  SLOT_VALUE_SETTER(T8, ic_, 7);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:636
  T9 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:636
  T3 = CALL1(&Kmm_wrapper_subtype_maskVKe, T9);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:635
  T10 = SLOT_VALUE_INITD(ic_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:635
  CALL2(&Kmm_wrapper_subtype_mask_setterVKe, T3, T10);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:637
  T11 = SLOT_VALUE_INITD(T6, 8);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:637
  SLOT_VALUE_SETTER(T11, ic_, 8);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:638
  T12 = SLOT_VALUE_INITD(T6, 9);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:638
  SLOT_VALUE_SETTER(T12, ic_, 9);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:639
  T13 = SLOT_VALUE_INITD(T6, 10);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:639
  SLOT_VALUE_SETTER(T13, ic_, 10);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:640
  SLOT_VALUE_SETTER(&KPempty_listVKi, ic_, 14);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:641
  T14 = SLOT_VALUE_INITD(T6, 5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:641
  SLOT_VALUE_SETTER(T14, ic_, 5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:641
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:625
  MV_SET_COUNT(0);
  return(T4);
}

D Kremove_implementation_class_slot_methodsVKiMM0I (D ic_) {
  volatile DWORD T2T, T2;
  volatile D sdF3;
  volatile D gF4;
  volatile D s_;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile DWORD T9;
  volatile D T10;
  volatile D T11;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D donePexit_36_;
  volatile D T16T, T16;
  volatile D mF17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile D T23;
  volatile D T24;
  volatile D T25_0;
  volatile D T26;
  volatile D T27_0;
  volatile D T28;
  volatile D donePexit_37_;
  volatile D T30T, T30;
  volatile D mF31;
  volatile D T32;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D T38;
  volatile D T39;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile D T43_0;
  volatile D T44;
  volatile D T45_0;
  volatile D T46;
  volatile DWORD T47;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
  T7 = SLOT_VALUE_INITD(ic_, 16);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
  T2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
    T10 = primitive_machine_word_equalQ(T2,T9);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
      T11 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T2);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
      sdF3 = T11;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:672
      T12 = primitive_instanceQ(sdF3,&KLvirtual_slot_descriptorGVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:672
      if (T12 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:673
        T13 = SLOT_VALUE_INITD(sdF3, 4);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:674
        T14 = SLOT_VALUE_INITD(sdF3, 5);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:675
        if (T13 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:676
          gF4 = T13;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:647
          T19 = SLOT_VALUE_INITD(sdF3, 2);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:648
          ENTER_EXIT_FRAME(donePexit_36_);
          if (nlx_setjmp(FRAME_DEST(donePexit_36_))) {
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
            T20 = SLOT_VALUE_INITD(gF4, 4);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
            T16T = T20;
          L1: ;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
              T16 = T16T;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
              T21 = primitive_idQ(T16,&KPempty_listVKi);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
              if (T21 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
                T22 = SLOT_VALUE_INITD(T16, 0);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
                mF17 = T22;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:650
                T18 = KPmethod_specializerVKgI(mF17, (D) 1);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:650
                T23 = primitive_idQ(T19,T18);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:650
                if (T23 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:651
                  KPremove_methodVKnI(gF4, mF17);
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:648
                  T24 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:648
                  NLX(donePexit_36_, T24);
                }
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:650
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
                T26 = SLOT_VALUE_INITD(T16, 1);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
                T27_0 = T26;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
                T25_0 = T27_0;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
                T28 = T25_0;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
                T16T = T28;
                goto L1;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:649
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:648
            /* invalidate donePexit_36_ */
          }
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:675
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:679
        if (T14 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:680
          s_ = T14;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:658
          T36 = SLOT_VALUE_INITD(sdF3, 6);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:659
          T37 = SLOT_VALUE_INITD(sdF3, 2);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:660
          ENTER_EXIT_FRAME(donePexit_37_);
          if (nlx_setjmp(FRAME_DEST(donePexit_37_))) {
          } else {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
            T38 = SLOT_VALUE_INITD(s_, 4);
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
            T30T = T38;
          L2: ;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
              T30 = T30T;
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
              T39 = primitive_idQ(T30,&KPempty_listVKi);
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
              if (T39 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
                T40 = SLOT_VALUE_INITD(T30, 0);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
                mF31 = T40;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:662
                T32 = KPmethod_specializerVKgI(mF31, (D) 1);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:662
                T33 = Ksame_specializerQVKgI(T36, T32);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:662
                if (T33 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:663
                  T34 = KPmethod_specializerVKgI(mF31, (D) 5);
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:663
                  T41 = primitive_idQ(T37,T34);
                  T35 = T41;
                } else {
                  T35 = &KPfalseVKi;
                }
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:662
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:662
                if (T35 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:664
                  KPremove_methodVKnI(s_, mF31);
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:660
                  T42 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
                  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:660
                  NLX(donePexit_37_, T42);
                }
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:662
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
                T44 = SLOT_VALUE_INITD(T30, 1);
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
                T45_0 = T44;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
                T43_0 = T45_0;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
                T46 = T43_0;
                // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
                T30T = T46;
                goto L2;
              }
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
              // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:661
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:660
            /* invalidate donePexit_37_ */
          }
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:679
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:672
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
      T47 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
      T2T = T47;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
    T6 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:670
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:645
  MV_SET_COUNT(0);
  return(T6);
}

D Kfind_old_slotVKiMM0I (D sd_, D slotvec_) {
  D gotchaPexit_35_;
  D T4;
  DWORD T5T, T5;
  D nsd_;
  D T7;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;
  DWORD T17;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:507
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:509
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
  T11 = SLOT_VALUE_INITD(slotvec_, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
  T5T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
    T5 = T5T;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
    T13 = primitive_machine_word_equalQ(T5,T12);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
      T14 = REPEATED_D_SLOT_VALUE_TAGGED(slotvec_, 1, T5);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
      nsd_ = T14;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
      T7 = KgetterEVKiMM0I(sd_, nsd_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
      if (T7 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
        T15.vector_element_[0] = nsd_;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:509
        T16 = MV_SET_REST_AT(&T15, 0);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:509
        T9_0 = T16;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
      T17 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
      T5T = T17;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:510
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:511
  T8 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:509
  T9_0 = T8;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:509
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:507
  T10_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:507
  MV_SET_COUNT(1);
  return(T10_0);
}

D Koverwrite_slot_descriptorVKiMM0I (D osd_, D nsd_) {
  D DlockD_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  _KLsimple_object_vectorGVKd_2 T23 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:689
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
  DlockD_ = Dslot_initial_data_lockVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
  T4 = CALL1(&Kwait_forYthreadsVdylan, DlockD_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
    ENTER_UNWIND_FRAME(T5);
    if (!nlx_setjmp(FRAME_DEST(T5))) {
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:693
      T9 = SLOT_VALUE_INITD(nsd_, 1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:693
      SLOT_VALUE_SETTER(T9, osd_, 1);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:694
      T10 = SLOT_VALUE_INITD(nsd_, 3);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:694
      SLOT_VALUE_SETTER(T10, osd_, 3);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:697
      T11 = SLOT_VALUE_INITD(nsd_, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:697
      T12 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:697
      T13 = primitive_machine_word_logbitQ(2,T12);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:697
      Kinit_suppliedQ_setterVKiMM0I(T13, osd_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:698
      T14 = SLOT_VALUE_INITD(nsd_, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:698
      T15 = primitive_cast_integer_as_raw(T14);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:698
      T16 = primitive_machine_word_logbitQ(4,T15);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:698
      Kinit_evaluatedQ_setterVKiMM0I(T16, osd_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:699
      T17 = SLOT_VALUE_INITD(nsd_, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:699
      T18 = primitive_cast_integer_as_raw(T17);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:699
      T19 = primitive_machine_word_logbitQ(3,T18);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:699
      Kinit_valueQ_setterVKiMM0I(T19, osd_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:700
      T20 = SLOT_VALUE_INITD(nsd_, 0);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:700
      T21 = primitive_cast_integer_as_raw(T20);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:700
      T22 = primitive_machine_word_logbitQ(5,T21);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:700
      Kinit_keyword_requiredQ_setterVKiMM0I(T22, osd_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:700
      T6 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
      FALL_THROUGH_UNWIND(T6);
    }
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
    CALL1(&KreleaseYthreadsVdylan, DlockD_);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
    CONTINUE_UNWIND();
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
    T23.vector_element_[0] = &KJsynchronization_;
    T23.vector_element_[1] = DlockD_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T7 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T23);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
    T24 = KsignalVKdMM0I(T7, &KPempty_vectorVKi);
    T8 = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:691
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:689
  MV_SET_COUNT(0);
  return(T8);
}

static D Kanonymous_of_Predefine_class_attributes_onlyF57I (D x_) {
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:720
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:720
  T1 = CALL1(&Kclass_implementation_classVKe, x_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:720
  return(T1);
}

D KPredefine_classVKnI (D class_, D debug_name_, D module_, D abstractQ_, D primaryQ_, D sealedQ_, D superclasses_, D slots_) {
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:461
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:466
  T8_0 = KPPredefine_complex_classVKiI(class_, debug_name_, module_, abstractQ_, primaryQ_, sealedQ_, superclasses_, slots_, &KPempty_vectorVKi, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:461
  MV_SET_COUNT(1);
  return(T8_0);
}

D KPdefine_complex_classVKnI (D class_, D superclasses_, D slots_, D inherited_slots_, D keywords_) {
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  _KLsimple_object_vectorGVKd_20 T22 = {&KLsimple_object_vectorGVKdW, (D) 81};

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:375
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:380
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  T5 = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:381
  T7 = SLOT_VALUE_INITD(class_, 4);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:383
  T8 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:383
  T9 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:383
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:383
  T11 = primitive_machine_word_logbitQ(18,T10);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:384
  T12 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:384
  T13 = SLOT_VALUE_INITD(T12, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:384
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:384
  T15 = primitive_machine_word_logbitQ(19,T14);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:385
  T16 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:385
  T17 = SLOT_VALUE_INITD(T16, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:385
  T18 = primitive_cast_integer_as_raw(T17);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:385
  T19 = primitive_machine_word_logbitQ(20,T18);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:390
  T20 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:390
  T21 = SLOT_VALUE_INITD(T20, 12);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:378
  T22.vector_element_[0] = &KJdebug_name_;
  T22.vector_element_[1] = T5;
  T22.vector_element_[2] = IKJmodule_;
  T22.vector_element_[3] = T7;
  T22.vector_element_[4] = &KJsuperclasses_;
  T22.vector_element_[5] = superclasses_;
  T22.vector_element_[6] = &KJabstractQ_;
  T22.vector_element_[7] = T11;
  T22.vector_element_[8] = &KJprimaryQ_;
  T22.vector_element_[9] = T15;
  T22.vector_element_[10] = &KJsealedQ_;
  T22.vector_element_[11] = T19;
  T22.vector_element_[12] = &KJslots_;
  T22.vector_element_[13] = slots_;
  T22.vector_element_[14] = &KJinherited_slots_;
  T22.vector_element_[15] = inherited_slots_;
  T22.vector_element_[16] = &KJkeywords_;
  T22.vector_element_[17] = keywords_;
  T22.vector_element_[18] = IKJdependent_generics_;
  T22.vector_element_[19] = T21;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:378
  KreinitializeVKnMM0I(class_, &T22);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:391
  T6_0 = class_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:375
  MV_SET_COUNT(1);
  return(T6_0);
}

D KPdefine_classVKnI (D class_, D superclasses_, D slots_) {
  D T3;
  D T4_0;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_20 T20 = {&KLsimple_object_vectorGVKdW, (D) 81};

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:356
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:361
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  T3 = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:362
  T5 = SLOT_VALUE_INITD(class_, 4);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:364
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:364
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:364
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:364
  T9 = primitive_machine_word_logbitQ(18,T8);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:365
  T10 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:365
  T11 = SLOT_VALUE_INITD(T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:365
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:365
  T13 = primitive_machine_word_logbitQ(19,T12);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:366
  T14 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:366
  T15 = SLOT_VALUE_INITD(T14, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:366
  T16 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:366
  T17 = primitive_machine_word_logbitQ(20,T16);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:371
  T18 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:371
  T19 = SLOT_VALUE_INITD(T18, 12);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:359
  T20.vector_element_[0] = &KJdebug_name_;
  T20.vector_element_[1] = T3;
  T20.vector_element_[2] = IKJmodule_;
  T20.vector_element_[3] = T5;
  T20.vector_element_[4] = &KJsuperclasses_;
  T20.vector_element_[5] = superclasses_;
  T20.vector_element_[6] = &KJabstractQ_;
  T20.vector_element_[7] = T9;
  T20.vector_element_[8] = &KJprimaryQ_;
  T20.vector_element_[9] = T13;
  T20.vector_element_[10] = &KJsealedQ_;
  T20.vector_element_[11] = T17;
  T20.vector_element_[12] = &KJslots_;
  T20.vector_element_[13] = slots_;
  T20.vector_element_[14] = &KJinherited_slots_;
  T20.vector_element_[15] = &KPempty_vectorVKi;
  T20.vector_element_[16] = &KJkeywords_;
  T20.vector_element_[17] = &KPempty_vectorVKi;
  T20.vector_element_[18] = IKJdependent_generics_;
  T20.vector_element_[19] = T19;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:359
  KreinitializeVKnMM0I(class_, &T20);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:372
  T4_0 = class_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:356
  MV_SET_COUNT(1);
  return(T4_0);
}

D KPdefine_genericVKnI (D gf_, D signature_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  D T8T, T8;
  DWORD i_T, i_;
  D m_;
  D T11_0;
  D T11_1;
  D wellQ_;
  D reason_;
  D T14;
  D T15_0;
  D T15_1;
  D barfo_;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D lossage_;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  _KLsimple_object_vectorGVKd_8 T33 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T34;
  D T35;
  DWORD T36;
  D T37;
  D T38;
  D T39;
  _KLsimple_object_vectorGVKd_2 T40 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T41;
  D T42_0;
  D T43;
  D T44_0;
  D T45;
  DWORD T46;
  D T47;
  _KLsimple_object_vectorGVKd_2 T48 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T49 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:341
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  T2 = CONGRUENT_CALL1(gf_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:341
  T3 = SLOT_VALUE(gf_, 6);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:342
  T4 = SLOT_VALUE_INITD(gf_, 9);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:342
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:342
  T6 = primitive_machine_word_logbitQ(2,T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  lossage_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  T26 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  SLOT_VALUE_SETTER(gf_, T26, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  SLOT_VALUE_SETTER(&KPfalseVKi, T26, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  T27 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  SLOT_VALUE_SETTER(T26, T27, 0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  SLOT_VALUE_SETTER(&KPempty_listVKi, T27, 1);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  ENTER_UNWIND_FRAME(T7);
  if (!nlx_setjmp(FRAME_DEST(T7))) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T27, T27);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T28 = SLOT_VALUE_INITD(gf_, 4);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T25 = gf_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T29 = SLOT_VALUE_INITD(T25, 8);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T30 = SLOT_VALUE(T25, 6);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T31 = SLOT_VALUE_INITD(T30, 1);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T32 = SLOT_VALUE_INITD(T29, 0);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T36 = primitive_cast_integer_as_raw(T32);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T33.vector_element_[0] = &KJdebug_name_;
    T33.vector_element_[1] = T2;
    T33.vector_element_[2] = &KJsignature_;
    T33.vector_element_[3] = signature_;
    T33.vector_element_[4] = &KJsealedQ_;
    T33.vector_element_[5] = T6;
    T33.vector_element_[6] = IKJmodule_;
    T33.vector_element_[7] = T3;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    KreinitializeVKnMM0I(gf_, &T33);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T8T = T28;
    i_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
      T8 = T8T;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
      T38 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
      T34 = primitive_idQ(T8,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
      if (T34 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        T35 = SLOT_VALUE_INITD(T8, 0);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        m_ = T35;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        CONGRUENT_CALL_PROLOG(&KcongruentQVKi, 2);
        T11_0 = CONGRUENT_CALL2(gf_, m_);
        T11_1 = MV_GET_ELT(1);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        wellQ_ = T11_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        reason_ = T11_1;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        if (wellQ_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          T37 = primitive_machine_word_less_thanQ(i_,T36);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          if (T37 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
            T39 = KelementVKdMM11I(T29, T38, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            T14 = T39;
          } else {
            T14 = T31;
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          T15_0 = Kadd_method_internalVKiI(gf_, m_, T14, &KPfalseVKi, &KPfalseVKi);
          T15_1 = MV_GET_ELT(1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          barfo_ = T15_1;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          if (barfo_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
            CALL1(&KbletchVKg, barfo_);
          }
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        } else {
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          T40.vector_element_[0] = m_;
          T40.vector_element_[1] = reason_;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          T17 = KlistVKdI(&T40);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          T24 = lossage_;
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          T41 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          SLOT_VALUE_SETTER(T17, T41, 0);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          SLOT_VALUE_SETTER(T24, T41, 1);
          // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
          lossage_ = T41;
        }
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        T43 = SLOT_VALUE_INITD(T8, 1);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        T44_0 = T43;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        T42_0 = T44_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        T45 = T42_0;
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        T46 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
        T8T = T45;
        i_T = T46;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
      // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    FALL_THROUGH_UNWIND(&KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T27, T27);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  T23 = lossage_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  T47 = primitive_idQ(T23,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  if (T47 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T22 = lossage_;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T48.vector_element_[0] = gf_;
    T48.vector_element_[1] = T22;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T18 = KlistVKdI(&T48);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    T49.vector_element_[0] = &KJformat_string_;
    T49.vector_element_[1] = &K20;
    T49.vector_element_[2] = &KJformat_arguments_;
    T49.vector_element_[3] = T18;
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T19 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T49);
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
    KerrorVKdMM0I(T19, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  Khandle_generic_completeness_changeVKiMM0I(gf_);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:340
  T20_0 = gf_;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:337
  MV_SET_COUNT(1);
  return(T20_0);
}

static D Kanonymous_of_note_incomplete_domain_handlerF109I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T5.vector_element_[0] = &K63;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_note_incomplete_domain_handlerF107I (D c_) {
  D T1;
  D T2;
  D T3;
  D T4;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:80
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:81
  T2 = SLOT_VALUE(c_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:83
  T3 = SLOT_VALUE_INITD(T2, 12);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:83
  T4 = Kadd_newXVKdMM3I(T3, CREF(0), &KPempty_vectorVKi, &KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:82
  SLOT_VALUE_SETTER(T4, T2, 12);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:82
  T1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:80
  MV_SET_COUNT(0);
  return(T1);
}

static D Kanonymous_of_note_incomplete_domain_handlerF106I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T5.vector_element_[0] = &K61;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_note_incomplete_domain_handlerF105I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T5.vector_element_[0] = &K38;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:79
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_note_incomplete_method_handlerF124I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T5.vector_element_[0] = &K63;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_note_incomplete_method_handlerF123I (D c_) {
  D T1;
  D T2;
  D T3;
  D T4;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:39
  T2 = SLOT_VALUE(c_, 2);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:41
  T3 = SLOT_VALUE_INITD(T2, 12);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:41
  T4 = Kadd_newXVKdMM3I(T3, CREF(0), &KPempty_vectorVKi, &KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:40
  SLOT_VALUE_SETTER(T4, T2, 12);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:40
  T1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:38
  MV_SET_COUNT(0);
  return(T1);
}

static D Kanonymous_of_note_incomplete_method_handlerF122I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T5.vector_element_[0] = &K61;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_note_incomplete_method_handlerF121I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T5.vector_element_[0] = &K38;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:37
  MV_SET_COUNT(1);
  return(T6_0);
}

D KPdefine_sealed_methodVKnI (D gf_, D md_, D lib_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:16
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:19
  T3 = KPadd_a_methodVKnI(gf_, md_, lib_, &KPtrueVKi, &KPtrueVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:16
  MV_SET_COUNT(0);
  return(T3);
}

D KPdefine_methodVKnI (D gf_, D md_, D lib_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:13
  T3 = KPadd_a_methodVKnI(gf_, md_, lib_, &KPtrueVKi, &KPtrueVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:10
  MV_SET_COUNT(0);
  return(T3);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_incremental_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmodule_);
    if (T0 != &KJmodule_) {
      IKJmodule_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdefer_cross_class_computationsQ_);
    if (T0 != &KJdefer_cross_class_computationsQ_) {
      IKJdefer_cross_class_computationsQ_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsubjunctive_class_universe_);
    if (T0 != &KJsubjunctive_class_universe_) {
      IKJsubjunctive_class_universe_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdependent_generics_);
    if (T0 != &KJdependent_generics_) {
      IKJdependent_generics_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_incremental_for_user () {
{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:24
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:24
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:23
  Tincomplete_generic_function_methodsTVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:23
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:28
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:28
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:27
  Tincomplete_generic_function_domainsTVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:27
  T0 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:152
  note_generic_function_incomplete_methodVKi = &Knote_incomplete_method_handlerVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:152
  T1 = &KPfalseVKi;
  goto I2;
}
I2:

{
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:154
  note_generic_function_incomplete_domainVKi = &Knote_incomplete_domain_handlerVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:154
  T1 = &KPfalseVKi;
  goto I5;
}
I5:

{
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:156
  remove_generic_function_incomplete_methodVKi = &Kremove_incomplete_method_handlerVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:156
  T1 = &KPfalseVKi;
  goto I8;
}
I8:

{
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:158
  remove_generic_function_incomplete_domainVKi = &Kremove_incomplete_domain_handlerVKi;
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:158
  T1 = &KPfalseVKi;
  goto I11;
}
I11:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:167
  Tgenerics_being_finishedTVKi = primitive_allocate_thread_variable(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/incremental.dylan:167
  T0 = &KPfalseVKi;
  goto I14;
}
I14:

  return;
}


/* eof */
