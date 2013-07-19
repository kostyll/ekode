#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(192);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  DWORD mps_w0_;
  DWORD mps_w1_;
} _KLhash_stateGVKe;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(50);
define__KLbyte_stringGVKd(61);
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(48);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(16);

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
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
} _KLintegerGVKd;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLlambdaGVKe;

typedef struct {
  D wrapper;
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
  D size_slot_descriptor_;
} _KLrepeated_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_setter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_getter_methodGVKi;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_restartGVKd;

typedef struct {
  D wrapper;
  D handler_type_;
  D handler_function_;
  D handler_test_;
  D handler_init_arguments_;
} _KLhandlerGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_table_typeGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;

typedef struct {
  D wrapper;
} _KLstretchy_collectionGVKd;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_explicit_key_collectionGVKd;

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D value_class_comparitor_;
} _KLvalue_classGVKi;

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLsymbol_tableGVKi;


/* Typedefs for defined classes */

#define  define__KLrehashed_bitsGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_in_words_; \
    DWORD rehashed_bits_word_[nrepeated+1]; \
  } _KLrehashed_bitsGVKi_##nrepeated;

typedef struct {
  D wrapper;
  D table_vector_lock_;
  D test_function_;
  D hash_function_;
  D rehash_token_;
  D additions_;
  D additions_limit_;
  D deletions_;
  D hash_state_;
  D entry_keys_;
  D entry_values_;
  D iteration_state_references_;
  D rehashed_bits_;
} _KLtable_vectorGVKe;

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLstring_tableGVKe;

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
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLobject_tableGVKd;

typedef struct {
  D wrapper;
  D source_;
  D token_;
  D state_key_;
  D state_index_;
  D state_count_;
  D state_initial_additions_;
  D state_initial_deletions_;
} _KLiteration_stateGVKi;

typedef struct {
  D wrapper;
  D rehashingQ_;
} _KLrehash_tokenGVKi;

#define  define__KLentry_vectorGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D partner_; \
    D size_; \
    D entry_element_[nrepeated+1]; \
  } _KLentry_vectorGVKi_##nrepeated;


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
D KLhash_stateGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLhash_stateGVKe;
extern _KLmm_wrapperGVKi_1 KLhash_stateGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
D KmakeVKdMM23I (D, D, D, D);
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D Kmake_simple_lockYthreads_primitivesVdylanI ();
D Kelement_range_errorVKeI (D, D);
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe Kremove_all_keysXVKeMM1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_methodGVKe Kremove_all_keysXVKeMM2;
extern _KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_1;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_explicit_key_collectionG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtableG_typesVKi;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsymbolGVKd KJlock_;
extern _KLsimple_methodGVKe KEEVKd;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D, D);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D, D);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsymbolGVKd KJvector_;
D KerrorVKdMM1I (D, D);
extern _KLsymbolGVKd KJtoken_;
extern _KLsymbolGVKd KJkey_;
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Ltable_vectorG_typesVKi;
extern _KLsymbolGVKd KJweak_;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJgrow_size_function_;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
D Kallocate_instanceVKeI (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJfill_;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
D KEEVKdI (D, D);
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_65;
extern _KLsymbolGVKd KJelement_type_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lobject_tableG_typesVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_36;
extern _KLsimple_methodGVKe Ktable_protocolVKdMM2;
extern _KLmethod_domainGVKe Ktable_protocolVKdRD_dylanRD_0;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLsimple_methodGVKe Kstring_hashVKe;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lstring_tableG_typesVKi;
extern _KLsealed_generic_functionGVKe Kobject_hashVKd;
extern _KLclassGVKd KLsimple_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsimple_lockGYthreadsVdylanW;
extern _KLsymbolGVKd KJvaluesQ_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLsimple_restartGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_restartGVKdW;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJinit_arguments_;
D KLhandlerGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLlimited_table_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_table_typeGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_1;
extern _KLsymbolGVKd KJdefault_;
D Kobject_classVKdI (D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_1;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
D Kinstall_and_return_make_method_init_dataVKiI (D);
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
extern _KLclassGVKd KLstretchy_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_collectionGVKdW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLclassGVKd KLmutable_explicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_explicit_key_collectionGVKdW;
extern _KLinstance_slot_descriptorGVKe Kelement_typeVKeHLlimited_collectionG;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_largeVKiI (D, D);
extern _KLsymbolGVKd KJtest_function_;
extern _KLsymbolGVKd KJhash_function_;
extern _KLsymbolGVKd KJrehash_limit_;
extern _KLsymbolGVKd KJkeys_;
extern _KLsymbolGVKd KJvalues_;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLclassGVKd KLsymbol_tableGVKi;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Tcurrent_handlersTVKi;

/* Defined object declarations */

D KLrehashed_bitsGZ32ZconstructorVKiMM0I (D, D, D);
extern _KLclassGVKd KLrehashed_bitsGVKi;
extern _KLmm_wrapperGVKi_0 KLrehashed_bitsGVKiW;
D Kmake_table_vectorVKiI (D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kuninitialized_table_testVKi;
D Kuninitialized_table_testVKiI (D, D);
extern _KLsimple_methodGVKe Kuninitialized_table_hashVKi;
D Kuninitialized_table_hashVKiI (D);
extern _KLclassGVKd KLtable_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLtable_vectorGVKeW;
extern _KLclassGVKd KLstring_tableGVKe;
extern _KLmm_wrapperGVKi_0 KLstring_tableGVKeW;
extern _KLclassGVKd KLtableGVKd;
extern _KLmm_wrapperGVKi_0 KLtableGVKdW;
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
D Kdefault_grow_sizeVKeI (D);
extern _KLsimple_methodGVKe KemptyQVKdMM17;
D KemptyQVKdMM17I (D);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_0;
extern _KLgetter_methodGVKi KsizeVKdMM38;
extern _KLsimple_methodGVKe KsizeVKdMM39;
D KsizeVKdMM39I (D);
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM21;
D Ktype_for_copyVKdMM21I (D x_);
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_0;
extern _KLkeyword_methodGVKe KelementVKdMM32;
D KelementVKdMM32I (D table_, D key_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM31;
D Kforward_iteration_protocolVKdMM31I (D table_);
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Kkey_testVKdMM5;
D Kkey_testVKdMM5I (D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM28;
D Kelement_setterVKdMM28I (D new_value_, D table_, D key_);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe Kremove_keyXVKdMM0;
D Kremove_keyXVKdMM0I (D, D);
extern _KLmethod_domainGVKe Kremove_keyXVKdRD_dylanRD_0;
D Klimited_tableVKiMM0I (D, D);
D KgethashVKiI (D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM29;
D KinitializeVKdMM29I (D, D, D, D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_37;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_38;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_39;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_40;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_41;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_42;
extern _KLkeyword_methodGVKe KmakeVKdMM58;
D KmakeVKdMM58I (D c_, D initargs_);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_66;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_67;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_68;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_69;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_70;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_71;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_72;
D KputhashVKiI (D, D, D);
D Krehash_tableVKeI (D, D, D);
D Ktry_to_puthash_newVKiI (D, D, D, D, D, D);
D KfullQVKiI (D);
extern _KLinstance_slot_descriptorGVKe Ktable_vectorVKeHLtableG;
extern _KLinstance_slot_descriptorGVKe Kinitial_entriesVKiHLtableG;
extern _KLinstance_slot_descriptorGVKe Kgrow_size_functionVKeHLtableG;
extern _KLinstance_slot_descriptorGVKe KweakQVKiHLtableG;
D Kmake_initial_stateVKiI (D);
extern _KLsimple_methodGVKe Ktable_next_stateVKi;
D Ktable_next_stateVKiI (D, D);
extern _KLsimple_methodGVKe Ktable_current_keyVKi;
D Ktable_current_keyVKiI (D table_, D state_);
extern _KLsimple_methodGVKe Ktable_copy_stateVKi;
D Ktable_copy_stateVKiI (D, D);
extern _KLclassGVKd KLiteration_stateGVKi;
extern _KLmm_wrapperGVKi_0 KLiteration_stateGVKiW;
D Kremove_all_keysXVKeMM0I (D);
extern _KLincremental_generic_functionGVKe Kremove_all_keysXVKe;
extern _KLsimple_methodGVKe Kremove_all_keysXVKeMM0;
extern _KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_2;
static _KLpairGVKd K92;
static _KLpairGVKd K93;
static _KLpairGVKd K94;
static _KLsignatureGVKe K95;
static _KLbyte_stringGVKd_16 K96;
static _KLsignatureGVKe K97;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF145;
static D Kanonymous_of_remove_all_keysXF145I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF144;
static D Kanonymous_of_remove_all_keysXF144I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF143;
static D Kanonymous_of_remove_all_keysXF143I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF141;
static D Kanonymous_of_remove_all_keysXF141I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF139;
static D Kanonymous_of_remove_all_keysXF139I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF136;
static D Kanonymous_of_remove_all_keysXF136I ();
D Kclear_table_vectorXVKiMM0I (D);
D Kmark_rehashingVKiI (D);
D Kmake_rehash_tokenVKiI (D);
static _KLsymbolGVKd KJrehashingQ_;
D KLrehash_tokenGZ32ZconstructorVKiMM0I (D, D, D);
extern _KLclassGVKd KLrehash_tokenGVKi;
extern _KLmm_wrapperGVKi_0 KLrehash_tokenGVKiW;
static _KLimplementation_classGVKe K117;
static _KLsimple_object_vectorGVKd_1 K118;
extern _KLkeyword_methodGVKe KLrehash_tokenGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_1 K120;
static _KLsimple_object_vectorGVKd_6 K121;
static _KLkeyword_signatureAvaluesGVKi K122;
static _KLsimple_object_vectorGVKd_2 K123;
static _KLsimple_object_vectorGVKd_1 K124;
static _KLsimple_object_vectorGVKd_1 K125;
extern _KLinstance_slot_descriptorGVKe KrehashingQVKiHLrehash_tokenG;
extern _KLsealed_generic_functionGVKe KrehashingQVKi;
extern _KLsealed_generic_functionGVKe KrehashingQ_setterVKi;
extern _KLsetter_methodGVKi KrehashingQ_setterVKiMM0;
static _KLpairGVKd K130;
static _KLbyte_stringGVKd_17 K131;
extern _KLgetter_methodGVKi KrehashingQVKiMM0;
static _KLpairGVKd K133;
static _KLbyte_stringGVKd_10 K134;
static _KLbyte_stringGVKd_14 K135;
static _KLbyte_stringGVKd_31 K137;
static _KLsignatureGVKe K138;
static _KLbyte_stringGVKd_45 K140;
static _KLbyte_stringGVKd_33 K142;
static _KLimplementation_classGVKe K146;
static _KLsimple_object_vectorGVKd_7 K147;
extern _KLkeyword_methodGVKe KLiteration_stateGZ32ZconstructorVKiMM0;
D KLiteration_stateGZ32ZconstructorVKiMM0I (D, D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K150;
static _KLbyte_stringGVKd_23 K151;
static _KLsymbolGVKd KJindex_;
static _KLsymbolGVKd KJadditions_;
static _KLsymbolGVKd KJdeletions_;
static _KLbyte_stringGVKd_9 K155;
static _KLbyte_stringGVKd_9 K156;
static _KLbyte_stringGVKd_5 K157;
static _KLkeyword_signatureAvaluesGVKi K158;
static _KLsimple_object_vectorGVKd_14 K159;
static _KLsimple_object_vectorGVKd_7 K160;
static _KLsimple_object_vectorGVKd_1 K161;
extern _KLinstance_slot_descriptorGVKe KsourceVKiHLiteration_stateG;
extern _KLinstance_slot_descriptorGVKe KtokenVKiHLiteration_stateG;
extern _KLinstance_slot_descriptorGVKe Kstate_keyVKiHLiteration_stateG;
extern _KLinstance_slot_descriptorGVKe Kstate_indexVKiHLiteration_stateG;
extern _KLinstance_slot_descriptorGVKe Kstate_countVKiHLiteration_stateG;
extern _KLinstance_slot_descriptorGVKe Kstate_initial_additionsVKiHLiteration_stateG;
extern _KLinstance_slot_descriptorGVKe Kstate_initial_deletionsVKiHLiteration_stateG;
extern _KLsealed_generic_functionGVKe Kstate_initial_deletionsVKi;
extern _KLgetter_methodGVKi Kstate_initial_deletionsVKiMM0;
static _KLpairGVKd K171;
static _KLbyte_stringGVKd_23 K172;
extern _KLsealed_generic_functionGVKe Kstate_initial_additionsVKi;
extern _KLgetter_methodGVKi Kstate_initial_additionsVKiMM0;
static _KLpairGVKd K175;
static _KLbyte_stringGVKd_23 K176;
extern _KLsealed_generic_functionGVKe Kstate_countVKi;
extern _KLsealed_generic_functionGVKe Kstate_count_setterVKi;
extern _KLsetter_methodGVKi Kstate_count_setterVKiMM0;
static _KLpairGVKd K180;
static _KLbyte_stringGVKd_18 K181;
extern _KLgetter_methodGVKi Kstate_countVKiMM0;
static _KLpairGVKd K183;
static _KLbyte_stringGVKd_11 K184;
extern _KLsealed_generic_functionGVKe Kstate_indexVKi;
extern _KLsealed_generic_functionGVKe Kstate_index_setterVKi;
extern _KLsetter_methodGVKi Kstate_index_setterVKiMM0;
static _KLpairGVKd K188;
static _KLsignatureAvaluesGVKi K189;
static _KLbyte_stringGVKd_18 K190;
static _KLsimple_object_vectorGVKd_2 K191;
extern _KLgetter_methodGVKi Kstate_indexVKiMM0;
static _KLpairGVKd K193;
static _KLsignatureAvaluesGVKi K194;
static _KLbyte_stringGVKd_11 K195;
extern _KLsealed_generic_functionGVKe Kstate_keyVKi;
extern _KLsealed_generic_functionGVKe Kstate_key_setterVKi;
extern _KLsetter_methodGVKi Kstate_key_setterVKiMM0;
static _KLpairGVKd K199;
static _KLsignatureGVKe K200;
static _KLbyte_stringGVKd_16 K201;
static _KLsimple_object_vectorGVKd_2 K202;
extern _KLgetter_methodGVKi Kstate_keyVKiMM0;
static _KLpairGVKd K204;
static _KLsignatureGVKe K205;
static _KLbyte_stringGVKd_9 K206;
extern _KLsealed_generic_functionGVKe KtokenVKi;
extern _KLgetter_methodGVKi KtokenVKiMM0;
static _KLpairGVKd K209;
static _KLsignatureAvaluesGVKi K210;
static _KLbyte_stringGVKd_5 K211;
extern _KLsealed_generic_functionGVKe KsourceVKi;
extern _KLgetter_methodGVKi KsourceVKiMM0;
static _KLpairGVKd K214;
static _KLsignatureAvaluesGVKi K215;
static _KLbyte_stringGVKd_6 K216;
static _KLbyte_stringGVKd_17 K217;
D Kincrement_iteration_state_referencesVKiI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_increment_iteration_state_referencesF227;
static D Kanonymous_of_increment_iteration_state_referencesF227I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_increment_iteration_state_referencesF226;
static D Kanonymous_of_increment_iteration_state_referencesF226I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_increment_iteration_state_referencesF225;
static D Kanonymous_of_increment_iteration_state_referencesF225I ();
static _KLsignatureAvaluesGVKi K228;
D Kexhausted_iterationVKiI (D);
static _KLbyte_stringGVKd_48 K230;
static _KLsignatureGVKe K231;
D Kdecrement_iteration_state_referencesVKiI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_decrement_iteration_state_referencesF241;
static D Kanonymous_of_decrement_iteration_state_referencesF241I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_decrement_iteration_state_referencesF240;
static D Kanonymous_of_decrement_iteration_state_referencesF240I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_decrement_iteration_state_referencesF239;
static D Kanonymous_of_decrement_iteration_state_referencesF239I ();
extern _KLsealed_generic_functionGVKe KweakQVKi;
static _KLunionGVKe K243;
static _KLunionGVKe K244;
static _KLsingletonGVKd K245;
static _KLsingletonGVKd K246;
static _KLsingletonGVKd K247;
extern _KLgetter_methodGVKi KweakQVKiMM0;
static _KLpairGVKd K249;
static _KLbyte_stringGVKd_5 K250;
extern _KLsealed_generic_functionGVKe Kgrow_size_functionVKe;
extern _KLgetter_methodGVKi Kgrow_size_functionVKeMM0;
static _KLpairGVKd K253;
static _KLsignatureAvaluesGVKi K254;
static _KLbyte_stringGVKd_18 K255;
extern _KLsealed_generic_functionGVKe Kinitial_entriesVKi;
extern _KLgetter_methodGVKi Kinitial_entriesVKiMM0;
static _KLpairGVKd K258;
static _KLsignatureAvaluesGVKi K259;
static _KLbyte_stringGVKd_15 K260;
static _KLlambdaGVKe Kslot_initializerF274;
static D Kslot_initializerF274I ();
extern _KLsealed_generic_functionGVKe Ktable_vectorVKe;
extern _KLsealed_generic_functionGVKe Ktable_vector_setterVKi;
extern _KLsetter_methodGVKi Ktable_vector_setterVKiMM0;
static _KLpairGVKd K266;
static _KLsignatureAvaluesGVKi K267;
static _KLbyte_stringGVKd_19 K268;
static _KLsimple_object_vectorGVKd_2 K269;
extern _KLgetter_methodGVKi Ktable_vectorVKeMM0;
static _KLpairGVKd K271;
static _KLsignatureAvaluesGVKi K272;
static _KLbyte_stringGVKd_12 K273;
D Kinitial_table_vectorVKiI ();
static _KLsignatureGVKe K276;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_newF285;
static D Kanonymous_of_try_to_puthash_newF285I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_newF284;
static D Kanonymous_of_try_to_puthash_newF284I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_newF283;
static D Kanonymous_of_try_to_puthash_newF283I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rehash_tableF345;
static D Kanonymous_of_rehash_tableF345I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rehash_tableF344;
static D Kanonymous_of_rehash_tableF344I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rehash_tableF343;
static D Kanonymous_of_rehash_tableF343I ();
D Krehash_in_placeVKiI (D, D, D);
D Krehash_entry_countVKiI (D, D, D);
D Krehash_into_copyVKiI (D, D, D);
extern _KLsealed_generic_functionGVKe Kentry_key_setterVKi;
static _KLsignatureGVKe K296;
static _KLbyte_stringGVKd_16 K297;
static _KLsimple_object_vectorGVKd_3 K298;
extern _KLclassGVKd KLentry_vectorGVKi;
extern _KLmm_wrapperGVKi_0 KLentry_vectorGVKiW;
static _KLimplementation_classGVKe K301;
extern _KLrepeated_slot_descriptorGVKe Kentry_elementVKiHLentry_vectorG;
static _KLsimple_object_vectorGVKd_2 K303;
extern _KLkeyword_methodGVKe KLentry_vectorGZ32ZconstructorVKiMM0;
D KLentry_vectorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K306;
static _KLsimple_object_vectorGVKd_10 K307;
static _KLsimple_object_vectorGVKd_2 K308;
extern _KLinstance_slot_descriptorGVKe KpartnerVKiHLentry_vectorG;
static _KLsymbolGVKd KJpartner_;
extern _KLsealed_generic_functionGVKe KpartnerVKi;
extern _KLsealed_generic_functionGVKe Kpartner_setterVKi;
extern _KLsetter_methodGVKi Kpartner_setterVKiMM0;
static _KLpairGVKd K314;
static _KLbyte_stringGVKd_14 K315;
extern _KLgetter_methodGVKi KpartnerVKiMM0;
static _KLpairGVKd K317;
static _KLbyte_stringGVKd_7 K318;
static _KLkeyword_signatureAvaluesGVKi K319;
static _KLsimple_object_vectorGVKd_4 K320;
static _KLsimple_object_vectorGVKd_2 K321;
static _KLsimple_object_vectorGVKd_1 K322;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLentry_vectorG;
static _KLlambdaGVKe Kslot_initializerF334;
static D Kslot_initializerF334I ();
extern _KLsealed_generic_functionGVKe Kentry_elementVKi;
extern _KLsealed_generic_functionGVKe Kentry_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kentry_element_setterVKiMM0;
static _KLpairGVKd K329;
static _KLbyte_stringGVKd_20 K330;
extern _KLrepeated_getter_methodGVKi Kentry_elementVKiMM0;
static _KLpairGVKd K332;
static _KLbyte_stringGVKd_13 K333;
static _KLbyte_stringGVKd_14 K335;
D Kcalculate_real_sizeVKiI (D);
D Kpresent_entry_countVKiI (D);
static _KLsymbolGVKd KJsize_in_words_;
D Kclear_rehashed_bitsVKiI (D);
D Krehashed_bitQVKiI (D, D);
D Krehashed_bitQ_setterVKiI (D, D, D);
static _KLbyte_stringGVKd_13 K342;
D Ktry_to_puthash_oldVKiI (D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_oldF355;
static D Kanonymous_of_try_to_puthash_oldF355I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_oldF354;
static D Kanonymous_of_try_to_puthash_oldF354I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_oldF353;
static D Kanonymous_of_try_to_puthash_oldF353I ();
static _KLsingletonGVKd K356;
static _KLsingletonGVKd K357;
static _KLsingletonGVKd K358;
static _KLsingletonGVKd K359;
static _KLsingletonGVKd K360;
static _KLsingletonGVKd K361;
extern _KLkeyword_methodGVKe KLobject_tableGZ32ZconstructorVKiMM0;
static _KLkeyword_signatureAvaluesGVKi K363;
static _KLsimple_object_vectorGVKd_8 K364;
static _KLsimple_object_vectorGVKd_4 K365;
static _KLkeyword_signatureGVKe K366;
static _KLsimple_object_vectorGVKd_1 K367;
static _KLsingletonGVKd K368;
D Kmake_table_lockVKiI ();
static _KLbyte_stringGVKd_15 K370;
extern _KLincremental_generic_functionGVKe Ktable_protocolVKd;
extern _KLsimple_methodGVKe Ktable_protocolVKdMM0;
D Ktable_protocolVKdMM0I (D);
extern _KLsimple_methodGVKe Ktable_protocolVKdMM1;
D Ktable_protocolVKdMM1I (D);
extern _KLmethod_domainGVKe Ktable_protocolVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Ktable_protocolVKdRD_dylanRD_2;
static _KLpairGVKd K378;
static _KLpairGVKd K379;
static _KLpairGVKd K380;
static _KLsignatureAvaluesGVKi K381;
static _KLbyte_stringGVKd_14 K382;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_protocolF385;
static D Kanonymous_of_table_protocolF385I (D, D);
static _KLsignatureGVKe K386;
static _KLsignatureAvaluesGVKi K387;
static _KLsignatureAvaluesGVKi K388;
static _KLkeyword_signatureGVKe K389;
static _KLsimple_object_vectorGVKd_4 K390;
static _KLsimple_object_vectorGVKd_2 K391;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_gethashF408;
static D Kanonymous_of_gethashF408I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_gethashF407;
static D Kanonymous_of_gethashF407I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_gethashF406;
static D Kanonymous_of_gethashF406I ();
D Kkey_missing_errorVKiMM0I (D, D, D);
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF403;
static D KUhandler_functionUF403I (D, D);
static _KLbyte_stringGVKd_30 K401;
static _KLbyte_stringGVKd_34 K402;
static _KLsignatureGVKe K404;
static _KLsimple_object_vectorGVKd_2 K405;
static _KLsymbolGVKd KJconcrete_class_;
static _KLbyte_stringGVKd_14 K410;
D Ktry_to_remhashVKiI (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_remhashF420;
static D Kanonymous_of_try_to_remhashF420I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_remhashF419;
static D Kanonymous_of_try_to_remhashF419I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_remhashF418;
static D Kanonymous_of_try_to_remhashF418I ();
static _KLsignatureAvaluesGVKi K421;
static _KLsimple_object_vectorGVKd_2 K422;
static _KLsignatureGVKe K423;
static _KLsimple_object_vectorGVKd_3 K424;
extern _KLsimple_methodGVKe Ktable_finished_stateQVKi;
D Ktable_finished_stateQVKiI (D table_, D state_, D limit_);
extern _KLsimple_methodGVKe Ktable_current_elementVKi;
D Ktable_current_elementVKiI (D, D);
extern _KLsimple_methodGVKe Ktable_current_element_setterVKi;
D Ktable_current_element_setterVKiI (D, D, D);
static _KLsignatureGVKe K431;
static _KLsimple_object_vectorGVKd_3 K432;
static _KLbyte_stringGVKd_38 K433;
static _KLsignatureGVKe K434;
static _KLsimple_object_vectorGVKd_2 K435;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_finished_stateQF444;
static D Kanonymous_of_table_finished_stateQF444I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_finished_stateQF443;
static D Kanonymous_of_table_finished_stateQF443I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_finished_stateQF442;
static D Kanonymous_of_table_finished_stateQF442I ();
static _KLsignatureAvaluesGVKi K445;
static _KLsimple_object_vectorGVKd_3 K446;
static _KLsignatureAvaluesGVKi K447;
static _KLsimple_object_vectorGVKd_8 K448;
static _KLkeyword_signatureGVKe K449;
static _KLsimple_object_vectorGVKd_2 K450;
static _KLsimple_object_vectorGVKd_1 K451;
static _KLsignatureAvaluesGVKi K452;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_sizeF461;
static D Kanonymous_of_sizeF461I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_sizeF460;
static D Kanonymous_of_sizeF460I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_sizeF459;
static D Kanonymous_of_sizeF459I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_emptyQF470;
static D Kanonymous_of_emptyQF470I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_emptyQF469;
static D Kanonymous_of_emptyQF469I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_emptyQF468;
static D Kanonymous_of_emptyQF468I ();
static _KLsignatureAvaluesGVKi K471;
static _KLsignatureAvaluesGVKi K472;
static _KLpairGVKd K473;
static _KLimplementation_classGVKe K474;
static _KLsimple_object_vectorGVKd_5 K475;
static _KLsimple_object_vectorGVKd_1 K476;
static _KLsimple_object_vectorGVKd_11 K477;
static _KLbyte_stringGVKd_14 K478;
static _KLimplementation_classGVKe K479;
static _KLsimple_object_vectorGVKd_3 K480;
static _KLsimple_object_vectorGVKd_10 K481;
static _KLsimple_object_vectorGVKd_4 K482;
static _KLbyte_stringGVKd_7 K483;
static _KLimplementation_classGVKe K484;
extern _KLkeyword_methodGVKe KLstring_tableGZ32ZconstructorVKiMM0;
D KLstring_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_11 K487;
static _KLkeyword_signatureAvaluesGVKi K488;
static _KLbyte_stringGVKd_14 K489;
static _KLimplementation_classGVKe K490;
static _KLsimple_object_vectorGVKd_12 K491;
extern _KLkeyword_methodGVKe KLtable_vectorGZ32ZconstructorVKiMM0;
D KLtable_vectorGZ32ZconstructorVKiMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K494;
static _KLsymbolGVKd KJtable_lock_;
static D K501I ();
static D K500I ();
static D K499I ();
static _KLbyte_stringGVKd_10 K502;
static _KLkeyword_signatureAvaluesGVKi K503;
static _KLsimple_object_vectorGVKd_12 K504;
static _KLsimple_object_vectorGVKd_6 K505;
extern _KLinstance_slot_descriptorGVKe Ktable_vector_lockVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Ktest_functionVKeHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Khash_functionVKeHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Krehash_tokenVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe KadditionsVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Kadditions_limitVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe KdeletionsVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Khash_stateVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Kentry_keysVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Kentry_valuesVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Kiteration_state_referencesVKiHLtable_vectorG;
extern _KLinstance_slot_descriptorGVKe Krehashed_bitsVKiHLtable_vectorG;
static _KLsimple_closure_methodGVKi_0 K528;
static D K528I ();
extern _KLsealed_generic_functionGVKe Krehashed_bitsVKi;
extern _KLsealed_generic_functionGVKe Krehashed_bits_setterVKi;
extern _KLsetter_methodGVKi Krehashed_bits_setterVKiMM0;
static _KLpairGVKd K523;
static _KLbyte_stringGVKd_20 K524;
extern _KLgetter_methodGVKi Krehashed_bitsVKiMM0;
static _KLpairGVKd K526;
static _KLbyte_stringGVKd_13 K527;
extern _KLsealed_generic_functionGVKe Kiteration_state_referencesVKi;
extern _KLsealed_generic_functionGVKe Kiteration_state_references_setterVKi;
extern _KLsetter_methodGVKi Kiteration_state_references_setterVKiMM0;
static _KLpairGVKd K532;
static _KLbyte_stringGVKd_33 K533;
extern _KLgetter_methodGVKi Kiteration_state_referencesVKiMM0;
static _KLpairGVKd K535;
static _KLbyte_stringGVKd_26 K536;
extern _KLsealed_generic_functionGVKe Kentry_valuesVKi;
extern _KLgetter_methodGVKi Kentry_valuesVKiMM0;
static _KLpairGVKd K539;
static _KLsignatureAvaluesGVKi K540;
static _KLbyte_stringGVKd_12 K541;
extern _KLsealed_generic_functionGVKe Kentry_keysVKi;
extern _KLgetter_methodGVKi Kentry_keysVKiMM0;
static _KLpairGVKd K544;
static _KLbyte_stringGVKd_10 K545;
static _KLsimple_closure_methodGVKi_0 K556;
static D K556I ();
extern _KLsealed_generic_functionGVKe Khash_stateVKi;
extern _KLsealed_generic_functionGVKe Khash_state_setterVKi;
extern _KLsetter_methodGVKi Khash_state_setterVKiMM0;
static _KLpairGVKd K551;
static _KLbyte_stringGVKd_17 K552;
extern _KLgetter_methodGVKi Khash_stateVKiMM0;
static _KLpairGVKd K554;
static _KLbyte_stringGVKd_10 K555;
extern _KLsealed_generic_functionGVKe KdeletionsVKi;
extern _KLsealed_generic_functionGVKe Kdeletions_setterVKi;
extern _KLsetter_methodGVKi Kdeletions_setterVKiMM0;
static _KLpairGVKd K560;
static _KLsignatureAvaluesGVKi K561;
static _KLbyte_stringGVKd_16 K562;
static _KLsimple_object_vectorGVKd_2 K563;
extern _KLgetter_methodGVKi KdeletionsVKiMM0;
static _KLpairGVKd K565;
static _KLsignatureAvaluesGVKi K566;
extern _KLsealed_generic_functionGVKe Kadditions_limitVKi;
extern _KLgetter_methodGVKi Kadditions_limitVKiMM0;
static _KLpairGVKd K569;
static _KLbyte_stringGVKd_15 K570;
extern _KLsealed_generic_functionGVKe KadditionsVKi;
extern _KLsealed_generic_functionGVKe Kadditions_setterVKi;
extern _KLsetter_methodGVKi Kadditions_setterVKiMM0;
static _KLpairGVKd K574;
static _KLbyte_stringGVKd_16 K575;
extern _KLgetter_methodGVKi KadditionsVKiMM0;
static _KLpairGVKd K577;
static _KLsimple_closure_methodGVKi_0 K591;
static D K591I ();
extern _KLsealed_generic_functionGVKe Krehash_tokenVKi;
extern _KLsealed_generic_functionGVKe Krehash_token_setterVKi;
extern _KLsetter_methodGVKi Krehash_token_setterVKiMM0;
static _KLpairGVKd K583;
static _KLsignatureAvaluesGVKi K584;
static _KLbyte_stringGVKd_19 K585;
static _KLsimple_object_vectorGVKd_2 K586;
extern _KLgetter_methodGVKi Krehash_tokenVKiMM0;
static _KLpairGVKd K588;
static _KLsignatureAvaluesGVKi K589;
static _KLbyte_stringGVKd_12 K590;
extern _KLsealed_generic_functionGVKe Khash_functionVKe;
extern _KLgetter_methodGVKi Khash_functionVKeMM0;
static _KLpairGVKd K594;
static _KLsignatureAvaluesGVKi K595;
static _KLbyte_stringGVKd_13 K596;
extern _KLsealed_generic_functionGVKe Ktest_functionVKe;
extern _KLgetter_methodGVKi Ktest_functionVKeMM0;
static _KLpairGVKd K599;
static _KLbyte_stringGVKd_13 K600;
extern _KLsealed_generic_functionGVKe Ktable_vector_lockVKi;
extern _KLgetter_methodGVKi Ktable_vector_lockVKiMM0;
static _KLpairGVKd K603;
static _KLbyte_stringGVKd_17 K604;
static _KLbyte_stringGVKd_14 K605;
extern _KLsimple_methodGVKe Krehash_tableVKe;
static _KLsignatureGVKe K607;
static _KLsimple_object_vectorGVKd_3 K608;
static _KLsimple_object_vectorGVKd_8 K609;
static _KLbyte_stringGVKd_54 K610;
static _KLbyte_stringGVKd_61 K611;
D Kcompute_entry_countVKiI (D);
static _KLbyte_stringGVKd_50 K613;
D Ksearch_for_entry_countVKiI (D);
static _KLpairGVKd K615;
static _KLbyte_stringGVKd_7 K616;
static _KLpairGVKd K617;
static _KLbyte_stringGVKd_5 K618;
static _KLimplementation_classGVKe K619;
extern _KLrepeated_slot_descriptorGVKe Krehashed_bits_wordVKiHLrehashed_bitsG;
static _KLsimple_object_vectorGVKd_1 K621;
extern _KLkeyword_methodGVKe KLrehashed_bitsGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_6 K623;
static _KLsimple_object_vectorGVKd_1 K624;
static _KLkeyword_signatureAvaluesGVKi K625;
static _KLsimple_object_vectorGVKd_2 K626;
static _KLsimple_object_vectorGVKd_1 K627;
static _KLsimple_object_vectorGVKd_1 K628;
extern _KLinstance_slot_descriptorGVKe Ksize_in_wordsVKiHLrehashed_bitsG;
extern _KLsealed_generic_functionGVKe Ksize_in_wordsVKi;
extern _KLgetter_methodGVKi Ksize_in_wordsVKiMM0;
static _KLpairGVKd K632;
static _KLmachine_wordGVKe K633;
extern _KLsealed_generic_functionGVKe Krehashed_bits_wordVKi;
extern _KLsealed_generic_functionGVKe Krehashed_bits_word_setterVKi;
extern _KLrepeated_setter_methodGVKi Krehashed_bits_word_setterVKiMM0;
static _KLpairGVKd K637;
static _KLsignatureAvaluesGVKi K638;
static _KLbyte_stringGVKd_25 K639;
static _KLsimple_object_vectorGVKd_3 K640;
static _KLsimple_object_vectorGVKd_1 K641;
extern _KLrepeated_getter_methodGVKi Krehashed_bits_wordVKiMM0;
static _KLpairGVKd K643;
static _KLbyte_stringGVKd_18 K644;
static _KLbyte_stringGVKd_15 K645;
static _KLsimple_object_vectorGVKd_192 K646;
extern _KLsimple_methodGVKe Kentry_key_setterVKiMM0;
D Kentry_key_setterVKiMM0I (D new_key_, D keys_, D index_);
static _KLpairGVKd K649;
static _KLpairGVKd K650;
static _KLpairGVKd K651;
static _KLpairGVKd K652;

/* Indirection variables */

static D IKJrehashingQ_ = &KJrehashingQ_;
static D IKJindex_ = &KJindex_;
static D IKJadditions_ = &KJadditions_;
static D IKJdeletions_ = &KJdeletions_;
static D IKJpartner_ = &KJpartner_;
static D IKJsize_in_words_ = &KJsize_in_words_;
static D IKJconcrete_class_ = &KJconcrete_class_;
static D IKJtable_lock_ = &KJtable_lock_;

/* Variables */

D Dentry_lastVKi = &KPunboundVKi;
D Dentry_countsVKi = &K646;
D test_functionVKe = &Ktest_functionVKe;
D hash_functionVKe = &Khash_functionVKe;
D Lentry_vectorGVKi = &KLentry_vectorGVKi;
D Lrehash_tokenGVKi = &KLrehash_tokenGVKi;
D Lrehashed_bitsGVKi = &KLrehashed_bitsGVKi;
D Dempty_rehashed_bitsVKi = &KPunboundVKi;
D Ltable_vectorGVKe = &KLtable_vectorGVKe;
D Dtable_entry_emptyVKi = &K617;
D Dtable_entry_deletedVKi = &K615;
D Ddefault_hash_stateVKi = &KPunboundVKi;
D Ddummy_hash_stateVKi = &KPunboundVKi;
D Dtable_lock_poolVKi = &KPunboundVKi;
D Tinitial_table_vectorTVKi = &KPunboundVKi;
D Dsecondary_stridesVKi = &K609;
D rehash_tableVKe = &Krehash_tableVKe;
D default_grow_sizeVKe = &Kdefault_grow_sizeVKe;
D table_protocolVKd = &Ktable_protocolVKd;
D remove_all_keysXVKe = &Kremove_all_keysXVKe;
D table_vectorVKe = &Ktable_vectorVKe;
D grow_size_functionVKe = &Kgrow_size_functionVKe;
D LtableGVKd = &KLtableGVKd;
D Lobject_tableGVKd = &KLobject_tableGVKd;
D Literation_stateGVKi = &KLiteration_stateGVKi;
D table_next_stateVKi = &Ktable_next_stateVKi;
D table_current_keyVKi = &Ktable_current_keyVKi;
D table_copy_stateVKi = &Ktable_copy_stateVKi;
D Lstring_tableGVKe = &KLstring_tableGVKe;
D Trehash_table_vectors_in_placeQTVKi = &KPtrueVKi;
D Tin_place_rehash_countTVKi = (D) 1;
D Tpunted_in_place_rehash_countTVKi = (D) 1;
D Ttable_lock_pool_indexTVKi = (D) 1;
D table_finished_stateQVKi = &Ktable_finished_stateQVKi;
D weakQVKi = &KweakQVKi;
D table_current_elementVKi = &Ktable_current_elementVKi;
D table_current_element_setterVKi = &Ktable_current_element_setterVKi;

/* Objects */

_KLclassGVKd KLrehashed_bitsGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K645,
  &K619,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLrehashed_bitsGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K619,
  (D) 1,
  1,
  33554432,
  (D) 1
};

_KLsimple_methodGVKe Kuninitialized_table_testVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kuninitialized_table_testVKiI
};

_KLsimple_methodGVKe Kuninitialized_table_hashVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kuninitialized_table_hashVKiI
};

_KLclassGVKd KLtable_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K605,
  &K490,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLtable_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K490,
  (D) 1,
  49,
  33554439,
  (D) 1
};

_KLclassGVKd KLstring_tableGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K489,
  &K484,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstring_tableGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K484,
  (D) 4097,
  21,
  33554439,
  (D) 1
};

_KLclassGVKd KLtableGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K483,
  &K479,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLtableGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K479,
  (D) 4097,
  21,
  33554439,
  (D) 1
};

_KLclassGVKd KLobject_tableGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K478,
  &K474,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLobject_tableGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K474,
  (D) 4097,
  21,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kdefault_grow_sizeVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K472,
  &Kdefault_grow_sizeVKeI
};

_KLsimple_methodGVKe KemptyQVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K471,
  &KemptyQVKdMM17I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KemptyQVKdMM17
};

_KLgetter_methodGVKi KsizeVKdMM38 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLentry_vectorG
};

_KLsimple_methodGVKe KsizeVKdMM39 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K259,
  &KsizeVKdMM39I
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_1,
  &KsizeVKdMM39
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_2,
  (D) 5,
  &KLentry_vectorGVKi
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K452,
  &Ktype_for_copyVKdMM21I
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLtableGVKd
};

_KLkeyword_methodGVKe KelementVKdMM32 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K449,
  &key_mep_4,
  &KelementVKdMM32I,
  &K450
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_1,
  &KelementVKdMM32
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_1,
  &Kforward_iteration_protocolVKdMM31
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM31 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K447,
  &Kforward_iteration_protocolVKdMM31I
};

_KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kkey_testVKdRD_dylanRD_0,
  &Kkey_testVKdMM5
};

_KLsimple_methodGVKe Kkey_testVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K254,
  &Kkey_testVKdMM5I
};

_KLsimple_methodGVKe Kelement_setterVKdMM28 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K423,
  &Kelement_setterVKdMM28I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_1,
  &Kelement_setterVKdMM28
};

_KLsimple_methodGVKe Kremove_keyXVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K421,
  &Kremove_keyXVKdMM0I
};

_KLmethod_domainGVKe Kremove_keyXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kremove_keyXVKdMM0
};

_KLkeyword_methodGVKe KinitializeVKdMM29 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K389,
  &key_mep_4,
  &KinitializeVKdMM29I,
  &K390
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_37 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_36,
  (D) 5,
  &KLiteration_stateGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_38 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_37,
  (D) 5,
  &KLobject_tableGVKd
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_39 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_38,
  (D) 5,
  &KLtable_vectorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_40 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_39,
  (D) 5,
  &KLrehashed_bitsGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_41 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_40,
  (D) 5,
  &KLrehash_tokenGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_42 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_41,
  (D) 5,
  &K356
};

_KLkeyword_methodGVKe KmakeVKdMM58 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K366,
  &key_mep_2,
  &KmakeVKdMM58I,
  &KPempty_vectorVKi
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_66 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_65,
  (D) 5,
  &K361
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_67 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_66,
  &KmakeVKdMM58
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_68 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_67,
  (D) 5,
  &K360
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_69 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_68,
  (D) 5,
  &K359
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_70 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_69,
  (D) 5,
  &K358
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_71 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_70,
  (D) 5,
  &K357
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_72 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_71,
  (D) 5,
  &K356
};

_KLinstance_slot_descriptorGVKe Ktable_vectorVKeHLtableG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF274,
  &KLtableGVKd,
  &KPfalseVKi,
  &Ktable_vectorVKe,
  &Ktable_vector_setterVKi,
  &KLtable_vectorGVKe
};

_KLinstance_slot_descriptorGVKe Kinitial_entriesVKiHLtableG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 41,
  &KLtableGVKd,
  &KJsize_,
  &Kinitial_entriesVKi,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kgrow_size_functionVKeHLtableG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &Kdefault_grow_sizeVKe,
  &KLtableGVKd,
  &KJgrow_size_function_,
  &Kgrow_size_functionVKe,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe KweakQVKiHLtableG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLtableGVKd,
  &KJweak_,
  &KweakQVKi,
  &KPfalseVKi,
  &K243
};

_KLsimple_methodGVKe Ktable_next_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K228,
  &Ktable_next_stateVKiI
};

_KLsimple_methodGVKe Ktable_current_keyVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K231,
  &Ktable_current_keyVKiI
};

_KLsimple_methodGVKe Ktable_copy_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K228,
  &Ktable_copy_stateVKiI
};

_KLclassGVKd KLiteration_stateGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K217,
  &K146,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLiteration_stateGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K146,
  (D) 1,
  29,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe Kremove_all_keysXVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K95,
  &KPfalseVKi,
  &K96,
  &K92,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kremove_all_keysXVKeRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kremove_all_keysXVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K97,
  &Kremove_all_keysXVKeMM0I
};

_KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kremove_all_keysXVKeRD_dylanRD_1,
  &Kremove_all_keysXVKeMM0
};

static _KLpairGVKd K92 = {
  &KLpairGVKdW /* wrapper */,
  &Kremove_all_keysXVKeMM0,
  &K93
};

static _KLpairGVKd K93 = {
  &KLpairGVKdW /* wrapper */,
  &Kremove_all_keysXVKeMM1,
  &K94
};

static _KLpairGVKd K94 = {
  &KLpairGVKdW /* wrapper */,
  &Kremove_all_keysXVKeMM2,
  &KPempty_listVKi
};

static _KLsignatureGVKe K95 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_Lmutable_explicit_key_collectionG_typesVKi
};

static _KLbyte_stringGVKd_16 K96 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "remove-all-keys!"
};

static _KLsignatureGVKe K97 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LtableG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF145 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_remove_all_keysXF145I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF144 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_remove_all_keysXF144I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF143 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_remove_all_keysXF143I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF141 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_remove_all_keysXF141I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF139 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_remove_all_keysXF139I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_remove_all_keysXF136 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_remove_all_keysXF136I,
  (D) 1
};

static _KLsymbolGVKd KJrehashingQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K134
};

_KLclassGVKd KLrehash_tokenGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K135,
  &K117,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLrehash_tokenGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K117,
  (D) 1,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K117 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433733,
  &KLrehash_tokenGVKi,
  &KLrehash_tokenGVKiW,
  &KPfalseVKi,
  &K118,
  (D) 7313,
  &KLrehash_tokenGZ32ZconstructorVKiMM0,
  &K120,
  &K121,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K118,
  &K118,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K118 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KrehashingQVKiHLrehash_tokenG
};

_KLkeyword_methodGVKe KLrehash_tokenGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K122,
  &key_mep_2,
  &KLrehash_tokenGZ32ZconstructorVKiMM0I,
  &K123
};

static _KLsimple_object_vectorGVKd_1 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K121 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLrehash_tokenGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K122 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K124,
  &KDsignature_LobjectG_typesVKi,
  &K125
};

static _KLsimple_object_vectorGVKd_2 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJrehashingQ_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJrehashingQ_
};

static _KLsimple_object_vectorGVKd_1 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrehash_tokenGVKi
};

_KLinstance_slot_descriptorGVKe KrehashingQVKiHLrehash_tokenG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLrehash_tokenGVKi,
  &KJrehashingQ_,
  &KrehashingQVKi,
  &KrehashingQ_setterVKi,
  &KLbooleanGVKd
};

_KLsealed_generic_functionGVKe KrehashingQVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K134,
  &K133,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KrehashingQ_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K131,
  &K130,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KrehashingQ_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KrehashingQVKiHLrehash_tokenG
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &KrehashingQ_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K131 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "rehashing?-setter"
};

_KLgetter_methodGVKi KrehashingQVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KrehashingQVKiHLrehash_tokenG
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &KrehashingQVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K134 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "rehashing?"
};

static _KLbyte_stringGVKd_14 K135 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<rehash-token>"
};

static _KLbyte_stringGVKd_31 K137 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K138 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_45 K140 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLbyte_stringGVKd_33 K142 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLimplementation_classGVKe K146 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958045,
  &KLiteration_stateGVKi,
  &KLiteration_stateGVKiW,
  &KPfalseVKi,
  &K147,
  (D) 7353,
  &KLiteration_stateGZ32ZconstructorVKiMM0,
  &K120,
  &K150,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K147,
  &K147,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_7 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KsourceVKiHLiteration_stateG,
  &KtokenVKiHLiteration_stateG,
  &Kstate_keyVKiHLiteration_stateG,
  &Kstate_indexVKiHLiteration_stateG,
  &Kstate_countVKiHLiteration_stateG,
  &Kstate_initial_additionsVKiHLiteration_stateG,
  &Kstate_initial_deletionsVKiHLiteration_stateG
};

_KLkeyword_methodGVKe KLiteration_stateGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_9,
  &K158,
  &key_mep_2,
  &KLiteration_stateGZ32ZconstructorVKiMM0I,
  &K159
};

static _KLsimple_object_vectorGVKd_6 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLiteration_stateGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_23 K151 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLsymbolGVKd KJindex_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K157
};

static _KLsymbolGVKd KJadditions_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K156
};

static _KLsymbolGVKd KJdeletions_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K155
};

static _KLbyte_stringGVKd_9 K155 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "deletions"
};

static _KLbyte_stringGVKd_9 K156 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "additions"
};

static _KLbyte_stringGVKd_5 K157 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "index"
};

static _KLkeyword_signatureAvaluesGVKi K158 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K160,
  &KDsignature_LobjectG_typesVKi,
  &K161
};

static _KLsimple_object_vectorGVKd_14 K159 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KJvector_,
  &KPunboundVKi,
  &KJtoken_,
  &KPunboundVKi,
  &KJkey_,
  &KPunboundVKi,
  &KJindex_,
  &KPunboundVKi,
  &KJcount_,
  (D) 1,
  &KJadditions_,
  &KPunboundVKi,
  &KJdeletions_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_7 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KJvector_,
  &KJtoken_,
  &KJkey_,
  &KJindex_,
  &KJcount_,
  &KJadditions_,
  &KJdeletions_
};

static _KLsimple_object_vectorGVKd_1 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLiteration_stateGVKi
};

_KLinstance_slot_descriptorGVKe KsourceVKiHLiteration_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLiteration_stateGVKi,
  &KJvector_,
  &KsourceVKi,
  &KPfalseVKi,
  &KLtable_vectorGVKe
};

_KLinstance_slot_descriptorGVKe KtokenVKiHLiteration_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLiteration_stateGVKi,
  &KJtoken_,
  &KtokenVKi,
  &KPfalseVKi,
  &KLrehash_tokenGVKi
};

_KLinstance_slot_descriptorGVKe Kstate_keyVKiHLiteration_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLiteration_stateGVKi,
  &KJkey_,
  &Kstate_keyVKi,
  &Kstate_key_setterVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kstate_indexVKiHLiteration_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLiteration_stateGVKi,
  &KJindex_,
  &Kstate_indexVKi,
  &Kstate_index_setterVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kstate_countVKiHLiteration_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLiteration_stateGVKi,
  &KJcount_,
  &Kstate_countVKi,
  &Kstate_count_setterVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kstate_initial_additionsVKiHLiteration_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLiteration_stateGVKi,
  &KJadditions_,
  &Kstate_initial_additionsVKi,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kstate_initial_deletionsVKiHLiteration_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLiteration_stateGVKi,
  &KJdeletions_,
  &Kstate_initial_deletionsVKi,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kstate_initial_deletionsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K172,
  &K171,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstate_initial_deletionsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstate_initial_deletionsVKiHLiteration_stateG
};

static _KLpairGVKd K171 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_initial_deletionsVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K172 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "state-initial-deletions"
};

_KLsealed_generic_functionGVKe Kstate_initial_additionsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K176,
  &K175,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kstate_initial_additionsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstate_initial_additionsVKiHLiteration_stateG
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_initial_additionsVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K176 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "state-initial-additions"
};

_KLsealed_generic_functionGVKe Kstate_countVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K184,
  &K183,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstate_count_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K181,
  &K180,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kstate_count_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstate_countVKiHLiteration_stateG
};

static _KLpairGVKd K180 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_count_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K181 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "state-count-setter"
};

_KLgetter_methodGVKi Kstate_countVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstate_countVKiHLiteration_stateG
};

static _KLpairGVKd K183 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_countVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K184 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "state-count"
};

_KLsealed_generic_functionGVKe Kstate_indexVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K194,
  &KPfalseVKi,
  &K195,
  &K193,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstate_index_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K189,
  &KPfalseVKi,
  &K190,
  &K188,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kstate_index_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstate_indexVKiHLiteration_stateG
};

static _KLpairGVKd K188 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_index_setterVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K189 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K191,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_18 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "state-index-setter"
};

static _KLsimple_object_vectorGVKd_2 K191 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLiteration_stateGVKi
};

_KLgetter_methodGVKi Kstate_indexVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstate_indexVKiHLiteration_stateG
};

static _KLpairGVKd K193 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_indexVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K194 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K161,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_11 K195 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "state-index"
};

_KLsealed_generic_functionGVKe Kstate_keyVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K205,
  &KPfalseVKi,
  &K206,
  &K204,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstate_key_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K200,
  &KPfalseVKi,
  &K201,
  &K199,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kstate_key_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstate_keyVKiHLiteration_stateG
};

static _KLpairGVKd K199 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_key_setterVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K200 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K202
};

static _KLbyte_stringGVKd_16 K201 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "state-key-setter"
};

static _KLsimple_object_vectorGVKd_2 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLiteration_stateGVKi
};

_KLgetter_methodGVKi Kstate_keyVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstate_keyVKiHLiteration_stateG
};

static _KLpairGVKd K204 = {
  &KLpairGVKdW /* wrapper */,
  &Kstate_keyVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K205 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K161
};

static _KLbyte_stringGVKd_9 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "state-key"
};

_KLsealed_generic_functionGVKe KtokenVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K210,
  &KPfalseVKi,
  &K211,
  &K209,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KtokenVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KtokenVKiHLiteration_stateG
};

static _KLpairGVKd K209 = {
  &KLpairGVKdW /* wrapper */,
  &KtokenVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K210 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K161,
  &K125
};

static _KLbyte_stringGVKd_5 K211 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "token"
};

_KLsealed_generic_functionGVKe KsourceVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K215,
  &KPfalseVKi,
  &K216,
  &K214,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KsourceVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsourceVKiHLiteration_stateG
};

static _KLpairGVKd K214 = {
  &KLpairGVKdW /* wrapper */,
  &KsourceVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K215 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K161,
  &KDsignature_Ltable_vectorG_typesVKi
};

static _KLbyte_stringGVKd_6 K216 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "source"
};

static _KLbyte_stringGVKd_17 K217 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<iteration-state>"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_increment_iteration_state_referencesF227 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_increment_iteration_state_referencesF227I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_increment_iteration_state_referencesF226 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_increment_iteration_state_referencesF226I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_increment_iteration_state_referencesF225 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_increment_iteration_state_referencesF225I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K228 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K202,
  &K161
};

static _KLbyte_stringGVKd_48 K230 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 193,
  "Attempt to use exhausted iteration state for %=."
};

static _KLsignatureGVKe K231 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K202
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_decrement_iteration_state_referencesF241 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_decrement_iteration_state_referencesF241I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_decrement_iteration_state_referencesF240 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_decrement_iteration_state_referencesF240I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_decrement_iteration_state_referencesF239 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_decrement_iteration_state_referencesF239I,
  (D) 1
};

_KLsealed_generic_functionGVKe KweakQVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K250,
  &K249,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K243 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K244,
  &K245
};

static _KLunionGVKe K244 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K246,
  &K247
};

static _KLsingletonGVKd K245 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsingletonGVKd K246 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJkey_
};

static _KLsingletonGVKd K247 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJvalue_
};

_KLgetter_methodGVKi KweakQVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KweakQVKiHLtableG
};

static _KLpairGVKd K249 = {
  &KLpairGVKdW /* wrapper */,
  &KweakQVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K250 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "weak?"
};

_KLsealed_generic_functionGVKe Kgrow_size_functionVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K254,
  &KPfalseVKi,
  &K255,
  &K253,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kgrow_size_functionVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kgrow_size_functionVKeHLtableG
};

static _KLpairGVKd K253 = {
  &KLpairGVKdW /* wrapper */,
  &Kgrow_size_functionVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K254 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtableG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

static _KLbyte_stringGVKd_18 K255 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "grow-size-function"
};

_KLsealed_generic_functionGVKe Kinitial_entriesVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K259,
  &KPfalseVKi,
  &K260,
  &K258,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kinitial_entriesVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kinitial_entriesVKiHLtableG
};

static _KLpairGVKd K258 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitial_entriesVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K259 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtableG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_15 K260 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "initial-entries"
};

static _KLlambdaGVKe Kslot_initializerF274 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K276,
  &Kslot_initializerF274I
};

_KLsealed_generic_functionGVKe Ktable_vectorVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K272,
  &KPfalseVKi,
  &K273,
  &K271,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ktable_vector_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K267,
  &KPfalseVKi,
  &K268,
  &K266,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Ktable_vector_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Ktable_vectorVKeHLtableG
};

static _KLpairGVKd K266 = {
  &KLpairGVKdW /* wrapper */,
  &Ktable_vector_setterVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K267 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K269,
  &KDsignature_Ltable_vectorG_typesVKi
};

static _KLbyte_stringGVKd_19 K268 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "table-vector-setter"
};

static _KLsimple_object_vectorGVKd_2 K269 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtable_vectorGVKe,
  &KLtableGVKd
};

_KLgetter_methodGVKi Ktable_vectorVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktable_vectorVKeHLtableG
};

static _KLpairGVKd K271 = {
  &KLpairGVKdW /* wrapper */,
  &Ktable_vectorVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K272 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtableG_typesVKi,
  &KDsignature_Ltable_vectorG_typesVKi
};

static _KLbyte_stringGVKd_12 K273 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "table-vector"
};

static _KLsignatureGVKe K276 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_newF285 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_puthash_newF285I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_newF284 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_puthash_newF284I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_newF283 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_puthash_newF283I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rehash_tableF345 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_rehash_tableF345I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rehash_tableF344 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_rehash_tableF344I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_rehash_tableF343 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_rehash_tableF343I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kentry_key_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K296,
  &KPfalseVKi,
  &K297,
  &K649,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsignatureGVKe K296 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K298
};

static _KLbyte_stringGVKd_16 K297 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "entry-key-setter"
};

static _KLsimple_object_vectorGVKd_3 K298 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLentry_vectorGVKi,
  &KLintegerGVKd
};

_KLclassGVKd KLentry_vectorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K335,
  &K301,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLentry_vectorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K301,
  (D) 4609,
  5,
  33554434,
  (D) 1
};

static _KLimplementation_classGVKe K301 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLentry_vectorGVKi,
  &KLentry_vectorGVKiW,
  &Kentry_elementVKiHLentry_vectorG,
  &K303,
  (D) 7305,
  &KLentry_vectorGZ32ZconstructorVKiMM0,
  &K306,
  &K307,
  (D) 37,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K308,
  &K308,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kentry_elementVKiHLentry_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF334,
  &KLentry_vectorGVKi,
  &KJfill_,
  &Kentry_elementVKi,
  &Kentry_element_setterVKi,
  &KLobjectGVKd,
  &KsizeVKdHLentry_vectorG
};

static _KLsimple_object_vectorGVKd_2 K303 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KpartnerVKiHLentry_vectorG,
  &KsizeVKdHLentry_vectorG
};

_KLkeyword_methodGVKe KLentry_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K319,
  &key_mep_2,
  &KLentry_vectorGZ32ZconstructorVKiMM0I,
  &K320
};

static _KLsimple_object_vectorGVKd_1 K306 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLvectorGVKd
};

static _KLsimple_object_vectorGVKd_10 K307 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLvectorGVKd,
  &KLentry_vectorGVKi
};

static _KLsimple_object_vectorGVKd_2 K308 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KpartnerVKiHLentry_vectorG,
  &Kentry_elementVKiHLentry_vectorG
};

_KLinstance_slot_descriptorGVKe KpartnerVKiHLentry_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLentry_vectorGVKi,
  &KJpartner_,
  &KpartnerVKi,
  &Kpartner_setterVKi,
  &KLobjectGVKd
};

static _KLsymbolGVKd KJpartner_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K318
};

_KLsealed_generic_functionGVKe KpartnerVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K318,
  &K317,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpartner_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K315,
  &K314,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpartner_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KpartnerVKiHLentry_vectorG
};

static _KLpairGVKd K314 = {
  &KLpairGVKdW /* wrapper */,
  &Kpartner_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K315 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "partner-setter"
};

_KLgetter_methodGVKi KpartnerVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KpartnerVKiHLentry_vectorG
};

static _KLpairGVKd K317 = {
  &KLpairGVKdW /* wrapper */,
  &KpartnerVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K318 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "partner"
};

static _KLkeyword_signatureAvaluesGVKi K319 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K321,
  &KDsignature_LobjectG_typesVKi,
  &K322
};

static _KLsimple_object_vectorGVKd_4 K320 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJpartner_,
  &KPfalseVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K321 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJpartner_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K322 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLentry_vectorGVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLentry_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLentry_vectorGVKi,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLlambdaGVKe Kslot_initializerF334 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K276,
  &Kslot_initializerF334I
};

_KLsealed_generic_functionGVKe Kentry_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K333,
  &K332,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kentry_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K330,
  &K329,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kentry_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kentry_elementVKiHLentry_vectorG
};

static _KLpairGVKd K329 = {
  &KLpairGVKdW /* wrapper */,
  &Kentry_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K330 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "entry-element-setter"
};

_KLrepeated_getter_methodGVKi Kentry_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kentry_elementVKiHLentry_vectorG
};

static _KLpairGVKd K332 = {
  &KLpairGVKdW /* wrapper */,
  &Kentry_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K333 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "entry-element"
};

static _KLbyte_stringGVKd_14 K335 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<entry-vector>"
};

static _KLsymbolGVKd KJsize_in_words_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K342
};

static _KLbyte_stringGVKd_13 K342 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "size-in-words"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_oldF355 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_puthash_oldF355I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_oldF354 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_puthash_oldF354I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_puthash_oldF353 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_puthash_oldF353I,
  (D) 1
};

static _KLsingletonGVKd K356 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLentry_vectorGVKi
};

static _KLsingletonGVKd K357 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLrehash_tokenGVKi
};

static _KLsingletonGVKd K358 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLrehashed_bitsGVKi
};

static _KLsingletonGVKd K359 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLtable_vectorGVKe
};

static _KLsingletonGVKd K360 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobject_tableGVKd
};

static _KLsingletonGVKd K361 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLiteration_stateGVKi
};

_KLkeyword_methodGVKe KLobject_tableGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K363,
  &key_mep_2,
  &KLobject_tableGZ32ZconstructorVKiMM0I,
  &K364
};

static _KLkeyword_signatureAvaluesGVKi K363 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K365,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lobject_tableG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K364 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJsize_,
  (D) 41,
  &KJgrow_size_function_,
  &Kdefault_grow_sizeVKe,
  &KJweak_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K365 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJelement_type_,
  &KJsize_,
  &KJgrow_size_function_,
  &KJweak_
};

static _KLkeyword_signatureGVKe K366 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43779077,
  &K367,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K367 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K368
};

static _KLsingletonGVKd K368 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLtableGVKd
};

static _KLbyte_stringGVKd_15 K370 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

_KLincremental_generic_functionGVKe Ktable_protocolVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K381,
  (D) 1,
  &K382,
  &K378,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Ktable_protocolVKdRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Ktable_protocolVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K388,
  &Ktable_protocolVKdMM0I
};

_KLsimple_methodGVKe Ktable_protocolVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K387,
  &Ktable_protocolVKdMM1I
};

_KLmethod_domainGVKe Ktable_protocolVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktable_protocolVKdRD_dylanRD_0,
  &Ktable_protocolVKdMM1
};

_KLmethod_domainGVKe Ktable_protocolVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktable_protocolVKdRD_dylanRD_1,
  &Ktable_protocolVKdMM0
};

static _KLpairGVKd K378 = {
  &KLpairGVKdW /* wrapper */,
  &Ktable_protocolVKdMM0,
  &K379
};

static _KLpairGVKd K379 = {
  &KLpairGVKdW /* wrapper */,
  &Ktable_protocolVKdMM1,
  &K380
};

static _KLpairGVKd K380 = {
  &KLpairGVKdW /* wrapper */,
  &Ktable_protocolVKdMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K381 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_LtableG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

static _KLbyte_stringGVKd_14 K382 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "table-protocol"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_protocolF385 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K386,
  &Kanonymous_of_table_protocolF385I,
  (D) 1
};

static _KLsignatureGVKe K386 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &KDsignature_LstringG_typesVKi
};

static _KLsignatureAvaluesGVKi K387 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_Lstring_tableG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

static _KLsignatureAvaluesGVKi K388 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_Lobject_tableG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

static _KLkeyword_signatureGVKe K389 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 48496645,
  &KDsignature_LtableG_typesVKi,
  &K391,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K390 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJlock_,
  &KPunboundVKi,
  &KJvaluesQ_,
  &KPtrueVKi
};

static _KLsimple_object_vectorGVKd_2 K391 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJlock_,
  &KJvaluesQ_
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_gethashF408 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_gethashF408I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_gethashF407 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_gethashF407I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_gethashF406 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_gethashF406I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF403 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K404,
  &KUhandler_functionUF403I,
  (D) 1
};

static _KLbyte_stringGVKd_30 K401 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "Try looking up %= in %= again."
};

static _KLbyte_stringGVKd_34 K402 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "%= is not present as a key for %=."
};

static _KLsignatureGVKe K404 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K405
};

static _KLsimple_object_vectorGVKd_2 K405 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_restartGVKd,
  &KLobjectGVKd
};

static _KLsymbolGVKd KJconcrete_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K410
};

static _KLbyte_stringGVKd_14 K410 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concrete-class"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_remhashF420 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_remhashF420I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_remhashF419 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_remhashF419I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_try_to_remhashF418 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_try_to_remhashF418I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K421 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K422,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K422 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtableGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K423 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K424
};

static _KLsimple_object_vectorGVKd_3 K424 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLtableGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Ktable_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K445,
  &Ktable_finished_stateQVKiI
};

_KLsimple_methodGVKe Ktable_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K434,
  &Ktable_current_elementVKiI
};

_KLsimple_methodGVKe Ktable_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K431,
  &Ktable_current_element_setterVKiI
};

static _KLsignatureGVKe K431 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K432
};

static _KLsimple_object_vectorGVKd_3 K432 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLtableGVKd,
  &KLiteration_stateGVKi
};

static _KLbyte_stringGVKd_38 K433 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "Current element not found in table %=\n"
};

static _KLsignatureGVKe K434 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K435
};

static _KLsimple_object_vectorGVKd_2 K435 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtableGVKd,
  &KLiteration_stateGVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_finished_stateQF444 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_table_finished_stateQF444I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_finished_stateQF443 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_table_finished_stateQF443I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_table_finished_stateQF442 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_table_finished_stateQF442I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K445 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K446,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K446 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLiteration_stateGVKi,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K447 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_LtableG_typesVKi,
  &K448
};

static _KLsimple_object_vectorGVKd_8 K448 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLiteration_stateGVKi,
  &KLobjectGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLkeyword_signatureGVKe K449 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K422,
  &K451,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K450 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K451 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsignatureAvaluesGVKi K452 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtableG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_sizeF461 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_sizeF461I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_sizeF460 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_sizeF460I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_sizeF459 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_sizeF459I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_emptyQF470 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_emptyQF470I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_emptyQF469 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_emptyQF469I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_emptyQF468 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K138,
  &Kanonymous_of_emptyQF468I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K471 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtableG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K472 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLpairGVKd K473 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

static _KLimplementation_classGVKe K474 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433749,
  &KLobject_tableGVKd,
  &KLobject_tableGVKdW,
  &KPfalseVKi,
  &K475,
  (D) 7345,
  &KLobject_tableGZ32ZconstructorVKiMM0,
  &K476,
  &K477,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K475,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K475 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kelement_typeVKeHLlimited_collectionG,
  &Ktable_vectorVKeHLtableG,
  &Kinitial_entriesVKiHLtableG,
  &Kgrow_size_functionVKeHLtableG,
  &KweakQVKiHLtableG
};

static _KLsimple_object_vectorGVKd_1 K476 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLtableGVKd
};

static _KLsimple_object_vectorGVKd_11 K477 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLlimited_collectionGVKe,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLtableGVKd,
  &KLobject_tableGVKd
};

static _KLbyte_stringGVKd_14 K478 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<object-table>"
};

static _KLimplementation_classGVKe K479 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845013,
  &KLtableGVKd,
  &KLtableGVKdW,
  &KPfalseVKi,
  &K475,
  (D) 7337,
  &Kdefault_class_constructorVKi,
  &K480,
  &K481,
  (D) 37,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K650,
  &KPempty_vectorVKi,
  &K482,
  &K475,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K480 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_explicit_key_collectionGVKd,
  &KLstretchy_collectionGVKd,
  &KLlimited_collectionGVKe
};

static _KLsimple_object_vectorGVKd_10 K481 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLlimited_collectionGVKe,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLtableGVKd
};

static _KLsimple_object_vectorGVKd_4 K482 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Ktable_vectorVKeHLtableG,
  &Kinitial_entriesVKiHLtableG,
  &Kgrow_size_functionVKeHLtableG,
  &KweakQVKiHLtableG
};

static _KLbyte_stringGVKd_7 K483 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "<table>"
};

static _KLimplementation_classGVKe K484 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102101,
  &KLstring_tableGVKe,
  &KLstring_tableGVKeW,
  &KPfalseVKi,
  &K475,
  (D) 7361,
  &KLstring_tableGZ32ZconstructorVKiMM0,
  &K476,
  &K487,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K475,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLstring_tableGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K488,
  &key_mep_2,
  &KLstring_tableGZ32ZconstructorVKiMM0I,
  &K364
};

static _KLsimple_object_vectorGVKd_11 K487 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLlimited_collectionGVKe,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLtableGVKd,
  &KLstring_tableGVKe
};

static _KLkeyword_signatureAvaluesGVKi K488 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K365,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lstring_tableG_typesVKi
};

static _KLbyte_stringGVKd_14 K489 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<string-table>"
};

static _KLimplementation_classGVKe K490 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433777,
  &KLtable_vectorGVKe,
  &KLtable_vectorGVKeW,
  &KPfalseVKi,
  &K491,
  (D) 7329,
  &KLtable_vectorGZ32ZconstructorVKiMM0,
  &K120,
  &K494,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K491,
  &K491,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_12 K491 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &Ktable_vector_lockVKiHLtable_vectorG,
  &Ktest_functionVKeHLtable_vectorG,
  &Khash_functionVKeHLtable_vectorG,
  &Krehash_tokenVKiHLtable_vectorG,
  &KadditionsVKiHLtable_vectorG,
  &Kadditions_limitVKiHLtable_vectorG,
  &KdeletionsVKiHLtable_vectorG,
  &Khash_stateVKiHLtable_vectorG,
  &Kentry_keysVKiHLtable_vectorG,
  &Kentry_valuesVKiHLtable_vectorG,
  &Kiteration_state_referencesVKiHLtable_vectorG,
  &Krehashed_bitsVKiHLtable_vectorG
};

_KLkeyword_methodGVKe KLtable_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K503,
  &key_mep_2,
  &KLtable_vectorGZ32ZconstructorVKiMM0I,
  &K504
};

static _KLsimple_object_vectorGVKd_6 K494 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLtable_vectorGVKe,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsymbolGVKd KJtable_lock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K502
};

static _KLbyte_stringGVKd_10 K502 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "table-lock"
};

static _KLkeyword_signatureAvaluesGVKi K503 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K505,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Ltable_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_12 K504 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJtable_lock_,
  &KPunboundVKi,
  &KJtest_function_,
  &KPunboundVKi,
  &KJhash_function_,
  &KPunboundVKi,
  &KJrehash_limit_,
  &KPunboundVKi,
  &KJkeys_,
  &KPunboundVKi,
  &KJvalues_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_6 K505 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJtable_lock_,
  &KJtest_function_,
  &KJhash_function_,
  &KJrehash_limit_,
  &KJkeys_,
  &KJvalues_
};

_KLinstance_slot_descriptorGVKe Ktable_vector_lockVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtable_vectorGVKe,
  &KJtable_lock_,
  &Ktable_vector_lockVKi,
  &KPfalseVKi,
  &KLsimple_lockGYthreadsVdylan
};

_KLinstance_slot_descriptorGVKe Ktest_functionVKeHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtable_vectorGVKe,
  &KJtest_function_,
  &Ktest_functionVKe,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Khash_functionVKeHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtable_vectorGVKe,
  &KJhash_function_,
  &Khash_functionVKe,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Krehash_tokenVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K591,
  &KLtable_vectorGVKe,
  &KPfalseVKi,
  &Krehash_tokenVKi,
  &Krehash_token_setterVKi,
  &KLrehash_tokenGVKi
};

_KLinstance_slot_descriptorGVKe KadditionsVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLtable_vectorGVKe,
  &KPfalseVKi,
  &KadditionsVKi,
  &Kadditions_setterVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kadditions_limitVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtable_vectorGVKe,
  &KJrehash_limit_,
  &Kadditions_limitVKi,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KdeletionsVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLtable_vectorGVKe,
  &KPfalseVKi,
  &KdeletionsVKi,
  &Kdeletions_setterVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Khash_stateVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K556,
  &KLtable_vectorGVKe,
  &KPfalseVKi,
  &Khash_stateVKi,
  &Khash_state_setterVKi,
  &KLhash_stateGVKe
};

_KLinstance_slot_descriptorGVKe Kentry_keysVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtable_vectorGVKe,
  &KJkeys_,
  &Kentry_keysVKi,
  &KPfalseVKi,
  &KLentry_vectorGVKi
};

_KLinstance_slot_descriptorGVKe Kentry_valuesVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLtable_vectorGVKe,
  &KJvalues_,
  &Kentry_valuesVKi,
  &KPfalseVKi,
  &KLentry_vectorGVKi
};

_KLinstance_slot_descriptorGVKe Kiteration_state_referencesVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLtable_vectorGVKe,
  &KPfalseVKi,
  &Kiteration_state_referencesVKi,
  &Kiteration_state_references_setterVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Krehashed_bitsVKiHLtable_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K528,
  &KLtable_vectorGVKe,
  &KPfalseVKi,
  &Krehashed_bitsVKi,
  &Krehashed_bits_setterVKi,
  &KLrehashed_bitsGVKi
};

static _KLsimple_closure_methodGVKi_0 K528 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K276,
  &K528I,
  (D) 1
};

_KLsealed_generic_functionGVKe Krehashed_bitsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K527,
  &K526,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krehashed_bits_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K524,
  &K523,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Krehashed_bits_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Krehashed_bitsVKiHLtable_vectorG
};

static _KLpairGVKd K523 = {
  &KLpairGVKdW /* wrapper */,
  &Krehashed_bits_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K524 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "rehashed-bits-setter"
};

_KLgetter_methodGVKi Krehashed_bitsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Krehashed_bitsVKiHLtable_vectorG
};

static _KLpairGVKd K526 = {
  &KLpairGVKdW /* wrapper */,
  &Krehashed_bitsVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K527 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "rehashed-bits"
};

_KLsealed_generic_functionGVKe Kiteration_state_referencesVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K536,
  &K535,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kiteration_state_references_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K533,
  &K532,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kiteration_state_references_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kiteration_state_referencesVKiHLtable_vectorG
};

static _KLpairGVKd K532 = {
  &KLpairGVKdW /* wrapper */,
  &Kiteration_state_references_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_33 K533 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "iteration-state-references-setter"
};

_KLgetter_methodGVKi Kiteration_state_referencesVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kiteration_state_referencesVKiHLtable_vectorG
};

static _KLpairGVKd K535 = {
  &KLpairGVKdW /* wrapper */,
  &Kiteration_state_referencesVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K536 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "iteration-state-references"
};

_KLsealed_generic_functionGVKe Kentry_valuesVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K540,
  &KPfalseVKi,
  &K541,
  &K539,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kentry_valuesVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kentry_valuesVKiHLtable_vectorG
};

static _KLpairGVKd K539 = {
  &KLpairGVKdW /* wrapper */,
  &Kentry_valuesVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K540 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ltable_vectorG_typesVKi,
  &K322
};

static _KLbyte_stringGVKd_12 K541 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "entry-values"
};

_KLsealed_generic_functionGVKe Kentry_keysVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K540,
  &KPfalseVKi,
  &K545,
  &K544,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kentry_keysVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kentry_keysVKiHLtable_vectorG
};

static _KLpairGVKd K544 = {
  &KLpairGVKdW /* wrapper */,
  &Kentry_keysVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K545 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "entry-keys"
};

static _KLsimple_closure_methodGVKi_0 K556 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K276,
  &K556I,
  (D) 1
};

_KLsealed_generic_functionGVKe Khash_stateVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K555,
  &K554,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Khash_state_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K552,
  &K551,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Khash_state_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Khash_stateVKiHLtable_vectorG
};

static _KLpairGVKd K551 = {
  &KLpairGVKdW /* wrapper */,
  &Khash_state_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K552 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "hash-state-setter"
};

_KLgetter_methodGVKi Khash_stateVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khash_stateVKiHLtable_vectorG
};

static _KLpairGVKd K554 = {
  &KLpairGVKdW /* wrapper */,
  &Khash_stateVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K555 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "hash-state"
};

_KLsealed_generic_functionGVKe KdeletionsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K566,
  &KPfalseVKi,
  &K155,
  &K565,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kdeletions_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K561,
  &KPfalseVKi,
  &K562,
  &K560,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kdeletions_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KdeletionsVKiHLtable_vectorG
};

static _KLpairGVKd K560 = {
  &KLpairGVKdW /* wrapper */,
  &Kdeletions_setterVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K561 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K563,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_16 K562 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "deletions-setter"
};

static _KLsimple_object_vectorGVKd_2 K563 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLtable_vectorGVKe
};

_KLgetter_methodGVKi KdeletionsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdeletionsVKiHLtable_vectorG
};

static _KLpairGVKd K565 = {
  &KLpairGVKdW /* wrapper */,
  &KdeletionsVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K566 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ltable_vectorG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsealed_generic_functionGVKe Kadditions_limitVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K566,
  &KPfalseVKi,
  &K570,
  &K569,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kadditions_limitVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kadditions_limitVKiHLtable_vectorG
};

static _KLpairGVKd K569 = {
  &KLpairGVKdW /* wrapper */,
  &Kadditions_limitVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K570 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "additions-limit"
};

_KLsealed_generic_functionGVKe KadditionsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K566,
  &KPfalseVKi,
  &K156,
  &K577,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kadditions_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K561,
  &KPfalseVKi,
  &K575,
  &K574,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kadditions_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KadditionsVKiHLtable_vectorG
};

static _KLpairGVKd K574 = {
  &KLpairGVKdW /* wrapper */,
  &Kadditions_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K575 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "additions-setter"
};

_KLgetter_methodGVKi KadditionsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KadditionsVKiHLtable_vectorG
};

static _KLpairGVKd K577 = {
  &KLpairGVKdW /* wrapper */,
  &KadditionsVKiMM0,
  &KPempty_listVKi
};

static _KLsimple_closure_methodGVKi_0 K591 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K276,
  &K591I,
  (D) 1
};

_KLsealed_generic_functionGVKe Krehash_tokenVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K589,
  &KPfalseVKi,
  &K590,
  &K588,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krehash_token_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K584,
  &KPfalseVKi,
  &K585,
  &K583,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Krehash_token_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Krehash_tokenVKiHLtable_vectorG
};

static _KLpairGVKd K583 = {
  &KLpairGVKdW /* wrapper */,
  &Krehash_token_setterVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K584 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K586,
  &K125
};

static _KLbyte_stringGVKd_19 K585 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "rehash-token-setter"
};

static _KLsimple_object_vectorGVKd_2 K586 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLrehash_tokenGVKi,
  &KLtable_vectorGVKe
};

_KLgetter_methodGVKi Krehash_tokenVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Krehash_tokenVKiHLtable_vectorG
};

static _KLpairGVKd K588 = {
  &KLpairGVKdW /* wrapper */,
  &Krehash_tokenVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K589 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ltable_vectorG_typesVKi,
  &K125
};

static _KLbyte_stringGVKd_12 K590 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "rehash-token"
};

_KLsealed_generic_functionGVKe Khash_functionVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K595,
  &KPfalseVKi,
  &K596,
  &K594,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Khash_functionVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khash_functionVKeHLtable_vectorG
};

static _KLpairGVKd K594 = {
  &KLpairGVKdW /* wrapper */,
  &Khash_functionVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K595 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ltable_vectorG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

static _KLbyte_stringGVKd_13 K596 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "hash-function"
};

_KLsealed_generic_functionGVKe Ktest_functionVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K595,
  &KPfalseVKi,
  &K600,
  &K599,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ktest_functionVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktest_functionVKeHLtable_vectorG
};

static _KLpairGVKd K599 = {
  &KLpairGVKdW /* wrapper */,
  &Ktest_functionVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K600 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "test-function"
};

_KLsealed_generic_functionGVKe Ktable_vector_lockVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K604,
  &K603,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ktable_vector_lockVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ktable_vector_lockVKiHLtable_vectorG
};

static _KLpairGVKd K603 = {
  &KLpairGVKdW /* wrapper */,
  &Ktable_vector_lockVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K604 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "table-vector-lock"
};

static _KLbyte_stringGVKd_14 K605 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<table-vector>"
};

_KLsimple_methodGVKe Krehash_tableVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K607,
  &Krehash_tableVKeI
};

static _KLsignatureGVKe K607 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K608
};

static _KLsimple_object_vectorGVKd_3 K608 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtableGVKd,
  &KLtable_vectorGVKe,
  &KLbooleanGVKd
};

static _KLsimple_object_vectorGVKd_8 K609 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  (D) 21,
  (D) 29,
  (D) 45,
  (D) 53,
  (D) 69,
  (D) 77,
  (D) 93,
  (D) 117
};

static _KLbyte_stringGVKd_54 K610 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Invocation of uninitialized table hash function on %=."
};

static _KLbyte_stringGVKd_61 K611 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 245,
  "Invocation of uninitialized table test function on %= and %=."
};

static _KLbyte_stringGVKd_50 K613 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 201,
  "Desired size %d exceeds maximum table vector size."
};

static _KLpairGVKd K615 = {
  &KLpairGVKdW /* wrapper */,
  &K616,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K616 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "deleted"
};

static _KLpairGVKd K617 = {
  &KLpairGVKdW /* wrapper */,
  &K618,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K618 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "empty"
};

static _KLimplementation_classGVKe K619 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLrehashed_bitsGVKi,
  &KLrehashed_bitsGVKiW,
  &Krehashed_bits_wordVKiHLrehashed_bitsG,
  &K621,
  (D) 7321,
  &KLrehashed_bitsGZ32ZconstructorVKiMM0,
  &K120,
  &K623,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K624,
  &K624,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krehashed_bits_wordVKiHLrehashed_bitsG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K633,
  &KLrehashed_bitsGVKi,
  &KPfalseVKi,
  &Krehashed_bits_wordVKi,
  &Krehashed_bits_word_setterVKi,
  &KLobjectGVKd,
  &Ksize_in_wordsVKiHLrehashed_bitsG
};

static _KLsimple_object_vectorGVKd_1 K621 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Ksize_in_wordsVKiHLrehashed_bitsG
};

_KLkeyword_methodGVKe KLrehashed_bitsGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K625,
  &key_mep_2,
  &KLrehashed_bitsGZ32ZconstructorVKiMM0I,
  &K626
};

static _KLsimple_object_vectorGVKd_6 K623 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLrehashed_bitsGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K624 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Krehashed_bits_wordVKiHLrehashed_bitsG
};

static _KLkeyword_signatureAvaluesGVKi K625 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K627,
  &KDsignature_LobjectG_typesVKi,
  &K628
};

static _KLsimple_object_vectorGVKd_2 K626 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_in_words_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K627 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsize_in_words_
};

static _KLsimple_object_vectorGVKd_1 K628 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrehashed_bitsGVKi
};

_KLinstance_slot_descriptorGVKe Ksize_in_wordsVKiHLrehashed_bitsG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLrehashed_bitsGVKi,
  &KJsize_in_words_,
  &Ksize_in_wordsVKi,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Ksize_in_wordsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K342,
  &K632,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ksize_in_wordsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksize_in_wordsVKiHLrehashed_bitsG
};

static _KLpairGVKd K632 = {
  &KLpairGVKdW /* wrapper */,
  &Ksize_in_wordsVKiMM0,
  &KPempty_listVKi
};

static _KLmachine_wordGVKe K633 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

_KLsealed_generic_functionGVKe Krehashed_bits_wordVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K644,
  &K643,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krehashed_bits_word_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K638,
  &KPfalseVKi,
  &K639,
  &K637,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krehashed_bits_word_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krehashed_bits_wordVKiHLrehashed_bitsG
};

static _KLpairGVKd K637 = {
  &KLpairGVKdW /* wrapper */,
  &Krehashed_bits_word_setterVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K638 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K640,
  &K641
};

static _KLbyte_stringGVKd_25 K639 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "rehashed-bits-word-setter"
};

static _KLsimple_object_vectorGVKd_3 K640 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K641 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

_KLrepeated_getter_methodGVKi Krehashed_bits_wordVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krehashed_bits_wordVKiHLrehashed_bitsG
};

static _KLpairGVKd K643 = {
  &KLpairGVKdW /* wrapper */,
  &Krehashed_bits_wordVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K644 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "rehashed-bits-word"
};

static _KLbyte_stringGVKd_15 K645 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<rehashed-bits>"
};

static _KLsimple_object_vectorGVKd_192 K646 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 769,
  (D) 9,
  (D) 13,
  (D) 21,
  (D) 29,
  (D) 45,
  (D) 53,
  (D) 69,
  (D) 77,
  (D) 93,
  (D) 117,
  (D) 125,
  (D) 149,
  (D) 165,
  (D) 189,
  (D) 213,
  (D) 237,
  (D) 269,
  (D) 285,
  (D) 317,
  (D) 333,
  (D) 357,
  (D) 389,
  (D) 413,
  (D) 437,
  (D) 509,
  (D) 549,
  (D) 597,
  (D) 629,
  (D) 669,
  (D) 717,
  (D) 765,
  (D) 845,
  (D) 893,
  (D) 957,
  (D) 1005,
  (D) 1077,
  (D) 1133,
  (D) 1229,
  (D) 1325,
  (D) 1397,
  (D) 1469,
  (D) 1557,
  (D) 1637,
  (D) 1725,
  (D) 1829,
  (D) 1949,
  (D) 2085,
  (D) 2229,
  (D) 2349,
  (D) 2469,
  (D) 2613,
  (D) 2765,
  (D) 2909,
  (D) 3077,
  (D) 3237,
  (D) 3413,
  (D) 3629,
  (D) 3813,
  (D) 4037,
  (D) 4245,
  (D) 4469,
  (D) 4725,
  (D) 4997,
  (D) 5277,
  (D) 5597,
  (D) 5885,
  (D) 6197,
  (D) 6509,
  (D) 6837,
  (D) 7205,
  (D) 7605,
  (D) 7989,
  (D) 8397,
  (D) 8829,
  (D) 9333,
  (D) 9837,
  (D) 10365,
  (D) 10917,
  (D) 11517,
  (D) 12093,
  (D) 12725,
  (D) 13373,
  (D) 14045,
  (D) 14765,
  (D) 15509,
  (D) 16293,
  (D) 17133,
  (D) 18029,
  (D) 18933,
  (D) 19893,
  (D) 20909,
  (D) 22005,
  (D) 23117,
  (D) 24293,
  (D) 25517,
  (D) 26805,
  (D) 28157,
  (D) 29573,
  (D) 31157,
  (D) 32717,
  (D) 34389,
  (D) 36117,
  (D) 37965,
  (D) 39869,
  (D) 41909,
  (D) 44013,
  (D) 46317,
  (D) 48645,
  (D) 51125,
  (D) 53685,
  (D) 56429,
  (D) 59253,
  (D) 62237,
  (D) 65357,
  (D) 68637,
  (D) 72165,
  (D) 75789,
  (D) 79653,
  (D) 83685,
  (D) 87909,
  (D) 92325,
  (D) 96957,
  (D) 101813,
  (D) 106917,
  (D) 112277,
  (D) 117893,
  (D) 123797,
  (D) 129989,
  (D) 136493,
  (D) 143325,
  (D) 150533,
  (D) 158085,
  (D) 166029,
  (D) 174365,
  (D) 183117,
  (D) 192293,
  (D) 201989,
  (D) 222189,
  (D) 244485,
  (D) 268989,
  (D) 295893,
  (D) 325485,
  (D) 358053,
  (D) 393869,
  (D) 433373,
  (D) 476717,
  (D) 524405,
  (D) 576893,
  (D) 634589,
  (D) 698109,
  (D) 767997,
  (D) 844797,
  (D) 929333,
  (D) 1022285,
  (D) 1124525,
  (D) 1237005,
  (D) 1360733,
  (D) 1496813,
  (D) 1646549,
  (D) 1811229,
  (D) 1992357,
  (D) 2191605,
  (D) 2410845,
  (D) 2651997,
  (D) 2917205,
  (D) 3209013,
  (D) 3529925,
  (D) 3882989,
  (D) 4271325,
  (D) 4698477,
  (D) 5168357,
  (D) 5685237,
  (D) 6253797,
  (D) 6879197,
  (D) 7567157,
  (D) 8323917,
  (D) 9156333,
  (D) 10072013,
  (D) 11079365,
  (D) 12187317,
  (D) 13406085,
  (D) 14746709,
  (D) 16221389,
  (D) 17843565,
  (D) 19627965,
  (D) 21590789,
  (D) 23749877,
  (D) 26124885,
  (D) 28737405,
  (D) 31611149,
  (D) 34772285,
  (D) 38249549
};

_KLsimple_methodGVKe Kentry_key_setterVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K296,
  &Kentry_key_setterVKiMM0I
};

static _KLpairGVKd K649 = {
  &KLpairGVKdW /* wrapper */,
  &Kentry_key_setterVKiMM0,
  &KPempty_listVKi
};

static _KLpairGVKd K650 = {
  &KLpairGVKdW /* wrapper */,
  &KLsymbol_tableGVKi,
  &K651
};

static _KLpairGVKd K651 = {
  &KLpairGVKdW /* wrapper */,
  &KLstring_tableGVKe,
  &K652
};

static _KLpairGVKd K652 = {
  &KLpairGVKdW /* wrapper */,
  &KLobject_tableGVKd,
  &KPempty_listVKi
};

/* Code */

D KLrehashed_bitsGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_in_words_) {
  D T4;
  D object_;
  D Uunique_size_in_wordsF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:279
  T4 = Kallocate_instanceVKeI(&KLrehashed_bitsGVKi, init_args_);
  object_ = T4;
  Uunique_size_in_wordsF6 = Uunique_size_in_words_;
  SLOT_VALUE_SETTER(Uunique_size_in_wordsF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:279
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kmake_table_vectorVKiI (D desired_entries_, D test_function_, D hash_function_, D lock_, D valuesQ_, D weakQ_) {
  D T6;
  D keysF7;
  D valsF8;
  D valsF9;
  D keysF10;
  D keysF11;
  D valsF12;
  D T13_0;
  D T13_1;
  D T14_0;
  D T14_1;
  D T15_0;
  D T15_1;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28_0;
  D T29;
  D T30_0;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  D T45_0;
  D T46;
  D T47_0;
  D T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  D T52_0;
  D T52_1;
  D T53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  D T65_0;
  D T66;
  D T67_0;
  D T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  D T73;
  D T74;
  D T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  DWORD T81;
  D T82_0;
  D T83;
  D T84_0;
  D T85;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  D T89_0;
  D T89_1;
  D T90;
  D T91_0;
  _KLsimple_object_vectorGVKd_2 T92 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T93;
  D T94_0;
  _KLsimple_object_vectorGVKd_2 T95 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T96_0;
  D T96_1;
  D keysF97;
  D T98_0;
  _KLsimple_object_vectorGVKd_2 T99 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T100_0;
  D T100_1;
  DSFLT T101;
  DWORD T102;
  DWORD T103;
  DSFLT T104;
  D T105;
  DWORD T106;
  D T107;
  DSINT T108;
  DSFLT T109;
  DWORD T110;
  DWORD T111;
  D T112;
  DSFLT T113;
  DSFLT T114;
  DSFLT T115;
  D T116;
  D T117;
  D T118;
  D T119_0;
  _KLsimple_object_vectorGVKd_12 T120 = {&KLsimple_object_vectorGVKdW, (D) 49};

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:555
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:563
  T6 = Kcompute_entry_countVKiI(desired_entries_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
  if (valuesQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
    T16 = primitive_idQ(weakQ_,&KJkey_);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T17 = SLOT_VALUE(&KLentry_vectorGVKi, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T19 = SLOT_VALUE_INITD(T17, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T20 = primitive_cast_integer_as_raw(T19);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T21 = primitive_machine_word_logand(T20,262140);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T22 = primitive_machine_word_logior(T21,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T23 = primitive_machine_word_add_signal_overflow(5,T21);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T24 = primitive_cast_integer_as_raw(T6);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T25 = primitive_machine_word_logxor(T24,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T26 = primitive_machine_word_add_signal_overflow(T23,T25);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T27 = primitive_machine_word_shift_right(T26,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T29 = SLOT_VALUE_INITD(T17, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T30_0 = T29;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T28_0 = T30_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T31 = T28_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T32 = primitive_machine_word_add_signal_overflow(T22,T25);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T33 = primitive_machine_word_shift_right(T32,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T34 = primitive_machine_word_shift_right(T24,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T35 = primitive_machine_word_shift_right(T21,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T18 = primitive_allocate_in_awl_pool(T27,T31,T33,Dtable_entry_emptyVKi,T34,T35,&KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      valsF9 = T18;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T36 = SLOT_VALUE(&KLentry_vectorGVKi, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T38 = SLOT_VALUE_INITD(T36, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T39 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T40 = primitive_machine_word_logand(T39,262140);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T41 = primitive_machine_word_logior(T40,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T42 = primitive_machine_word_add_signal_overflow(5,T40);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T43 = primitive_machine_word_add_signal_overflow(T42,T25);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T44 = primitive_machine_word_shift_right(T43,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T46 = SLOT_VALUE_INITD(T36, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T47_0 = T46;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T45_0 = T47_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T48 = T45_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T49 = primitive_machine_word_add_signal_overflow(T41,T25);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T50 = primitive_machine_word_shift_right(T49,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T51 = primitive_machine_word_shift_right(T40,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T37 = primitive_allocate_weak_in_awl_pool(T44,T48,T50,Dtable_entry_emptyVKi,T34,T51,valsF9);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      keysF10 = T37;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      SLOT_VALUE_SETTER(keysF10, valsF9, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T52_0 = keysF10;
      T52_1 = valsF9;
      T14_0 = T52_0;
      T14_1 = T52_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T53 = primitive_idQ(weakQ_,&KJvalue_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      if (T53 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T54 = SLOT_VALUE(&KLentry_vectorGVKi, 2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T56 = SLOT_VALUE_INITD(T54, 0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T57 = primitive_cast_integer_as_raw(T56);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T58 = primitive_machine_word_logand(T57,262140);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T59 = primitive_machine_word_logior(T58,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T60 = primitive_machine_word_add_signal_overflow(5,T58);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T61 = primitive_cast_integer_as_raw(T6);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T62 = primitive_machine_word_logxor(T61,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T63 = primitive_machine_word_add_signal_overflow(T60,T62);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T64 = primitive_machine_word_shift_right(T63,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T66 = SLOT_VALUE_INITD(T54, 2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T67_0 = T66;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T65_0 = T67_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T68 = T65_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T69 = primitive_machine_word_add_signal_overflow(T59,T62);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T70 = primitive_machine_word_shift_right(T69,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T71 = primitive_machine_word_shift_right(T61,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T72 = primitive_machine_word_shift_right(T58,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T55 = primitive_allocate_in_awl_pool(T64,T68,T70,Dtable_entry_emptyVKi,T71,T72,&KPfalseVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        keysF11 = T55;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T73 = SLOT_VALUE(&KLentry_vectorGVKi, 2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T75 = SLOT_VALUE_INITD(T73, 0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T76 = primitive_cast_integer_as_raw(T75);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T77 = primitive_machine_word_logand(T76,262140);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T78 = primitive_machine_word_logior(T77,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T79 = primitive_machine_word_add_signal_overflow(5,T77);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T80 = primitive_machine_word_add_signal_overflow(T79,T62);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T81 = primitive_machine_word_shift_right(T80,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T83 = SLOT_VALUE_INITD(T73, 2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T84_0 = T83;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T82_0 = T84_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T85 = T82_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T86 = primitive_machine_word_add_signal_overflow(T78,T62);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T87 = primitive_machine_word_shift_right(T86,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T88 = primitive_machine_word_shift_right(T77,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T74 = primitive_allocate_weak_in_awl_pool(T81,T85,T87,Dtable_entry_emptyVKi,T71,T88,keysF11);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        valsF12 = T74;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        SLOT_VALUE_SETTER(valsF12, keysF11, 0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T89_0 = keysF11;
        T89_1 = valsF12;
        T13_0 = T89_0;
        T13_1 = T89_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T92.vector_element_[0] = &KJsize_;
        T92.vector_element_[1] = T6;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T91_0 = KLentry_vectorGZ32ZconstructorVKiMM0I(&KLentry_vectorGVKi, &T92, &KPfalseVKi, T6);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T90 = T91_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T95.vector_element_[0] = &KJsize_;
        T95.vector_element_[1] = T6;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T94_0 = KLentry_vectorGZ32ZconstructorVKiMM0I(&KLentry_vectorGVKi, &T95, &KPfalseVKi, T6);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T93 = T94_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
        T96_0 = T90;
        T96_1 = T93;
        T13_0 = T96_0;
        T13_1 = T96_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
      T14_0 = T13_0;
      T14_1 = T13_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
    T15_0 = T14_0;
    T15_1 = T14_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
    T99.vector_element_[0] = &KJsize_;
    T99.vector_element_[1] = T6;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
    T98_0 = KLentry_vectorGZ32ZconstructorVKiMM0I(&KLentry_vectorGVKi, &T99, &KPfalseVKi, T6);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
    keysF97 = T98_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
    T100_0 = keysF97;
    T100_1 = keysF97;
    T15_0 = T100_0;
    T15_1 = T100_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
  keysF7 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:564
  valsF8 = T15_1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T103 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T102 = primitive_machine_word_shift_right(T103,2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T101 = primitive_integer_as_single_float(T102);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T104 = primitive_single_float_multiply(T101,0.7500000);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T109 = primitive_single_float_divide(T104,1.0000000);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T108 = primitive_single_float_as_integer(T109);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T110 = primitive_machine_word_shift_left_signal_overflow(T108,2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T111 = primitive_machine_word_logior(T110,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T112 = primitive_cast_raw_as_integer(T111);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T113 = primitive_integer_as_single_float(T108);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T114 = primitive_single_float_subtract(T109,T113);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T115 = primitive_single_float_multiply(1.0000000,T114);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  T116 = primitive_single_float_equalsQ(T115,0.0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  if (T116 != &KPfalseVKi) {
    T105 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
    T117 = primitive_single_float_less_thanQ(0.0,T104);
    T105 = T117;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  if (T105 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
    T106 = primitive_machine_word_add_signal_overflow(T111,4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
    T107 = primitive_cast_raw_as_integer(T106);
    T118 = T107;
  } else {
    T118 = T112;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:569
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T120.vector_element_[0] = &KJtest_function_;
  T120.vector_element_[1] = test_function_;
  T120.vector_element_[2] = &KJhash_function_;
  T120.vector_element_[3] = hash_function_;
  T120.vector_element_[4] = &KJrehash_limit_;
  T120.vector_element_[5] = T118;
  T120.vector_element_[6] = IKJtable_lock_;
  T120.vector_element_[7] = lock_;
  T120.vector_element_[8] = &KJkeys_;
  T120.vector_element_[9] = keysF7;
  T120.vector_element_[10] = &KJvalues_;
  T120.vector_element_[11] = valsF8;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T119_0 = KLtable_vectorGZ32ZconstructorVKiMM0I(&KLtable_vectorGVKe, &T120, lock_, test_function_, hash_function_, T118, keysF7, valsF8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:555
  MV_SET_COUNT(1);
  return(T119_0);
}

D Kuninitialized_table_testVKiI (D key1_, D key2_) {
  _KLsimple_object_vectorGVKd_2 T2 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:611
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:612
  T2.vector_element_[0] = key1_;
  T2.vector_element_[1] = key2_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:612
  T3 = KerrorVKdMM1I(&K611, &T2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:611
  return(T3);
}

D Kuninitialized_table_hashVKiI (D key_) {
  _KLsimple_object_vectorGVKd_1 T1 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:617
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:618
  T1.vector_element_[0] = key_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:618
  T2 = KerrorVKdMM1I(&K610, &T1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:617
  return(T2);
}

D KLobject_tableGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_, D Uunique_initial_entries_, D Uunique_grow_size_function_, D Uunique_weakQ_) {
  D T7;
  D Uunique_element_typeF8;
  D Uunique_initial_entriesF9;
  D Uunique_grow_size_functionF10;
  D Uunique_weakQF11;
  D T12_0;
  D T13_0;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1070
  T7 = primitive_object_allocate_filled(6,&KLobject_tableGVKdW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_element_typeF8 = Uunique_element_type_;
  SLOT_VALUE_SETTER(Uunique_element_typeF8, T7, 0);
  T14 = SLOT_VALUE_INITD(&Ktable_vectorVKeHLtableG, 0);
  T15 = primitive_cast_integer_as_raw(T14);
  T16 = primitive_machine_word_logbitQ(4,T15);
  if (T16 != &KPfalseVKi) {
    T17 = SLOT_VALUE_INITD(&Ktable_vectorVKeHLtableG, 1);
    T19 = T17;
  } else {
    T13_0 = Kinstall_and_return_make_method_init_dataVKiI(&Ktable_vectorVKeHLtableG);
    T18 = T13_0;
    T19 = T18;
  }
  SLOT_VALUE_SETTER(T19, T7, 1);
  Uunique_initial_entriesF9 = Uunique_initial_entries_;
  SLOT_VALUE_SETTER(Uunique_initial_entriesF9, T7, 2);
  Uunique_grow_size_functionF10 = Uunique_grow_size_function_;
  SLOT_VALUE_SETTER(Uunique_grow_size_functionF10, T7, 3);
  Uunique_weakQF11 = Uunique_weakQ_;
  SLOT_VALUE_SETTER(Uunique_weakQF11, T7, 4);
  MEP_APPLY2(&KinitializeVKdMM29, &K473, T7, init_args_);
  T12_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1070
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kdefault_grow_sizeVKeI (D old_) {
  D T1_0;
  DSFLT T2;
  DWORD T3;
  DWORD T4;
  DSFLT T5;
  D T6;
  DWORD T7;
  D T8;
  DSINT T9;
  DSFLT T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DSFLT T14;
  DSFLT T15;
  DSFLT T16;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1010
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T4 = primitive_cast_integer_as_raw(old_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T3 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T2 = primitive_integer_as_single_float(T3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T5 = primitive_single_float_multiply(T2,2.0000000);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T10 = primitive_single_float_divide(T5,1.0000000);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T9 = primitive_single_float_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T11 = primitive_machine_word_shift_left_signal_overflow(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T14 = primitive_integer_as_single_float(T9);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T15 = primitive_single_float_subtract(T10,T14);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T16 = primitive_single_float_multiply(1.0000000,T15);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  T17 = primitive_single_float_equalsQ(T16,0.0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  if (T17 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
    T18 = primitive_single_float_less_thanQ(0.0,T5);
    T6 = T18;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
    T7 = primitive_machine_word_add_signal_overflow(T12,4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
    T8 = primitive_cast_raw_as_integer(T7);
    T19 = T8;
  } else {
    T19 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1012
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1013
  T1_0 = T19;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1010
  MV_SET_COUNT(1);
  return(T1_0);
}

D KemptyQVKdMM17I (D table_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
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
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  D T39_0;
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
  D T55_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1115
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1117
  T6 = SLOT_VALUE_INITD(table_, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T12 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T13 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T14 = primitive_idQ(T13,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T15 = primitive_not(T14);
    T11 = T15;
  } else {
    T11 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T16 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T17_0 = KmemberQVKdMM3I(&KJlock_, T16, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T18 = T17_0;
    T19 = T18;
  } else {
    T19 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T20 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T8 = MAKE_CLOSURE_INITD(&Kanonymous_of_emptyQF470, 1, T7);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    CALL1(T20, T8);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T9 = primitive_wait_for_simple_lock(T7);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T22 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T23 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T24 = primitive_idQ(T23,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T25 = primitive_not(T24);
    T21 = T25;
  } else {
    T21 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T26 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T27_0 = KmemberQVKdMM3I(&KJlock_, T26, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T28 = T27_0;
    T29 = T28;
  } else {
    T29 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T30 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T10 = MAKE_CLOSURE_INITD(&Kanonymous_of_emptyQF469, 2, T9, T7);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    CALL1(T30, T10);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T32 = primitive_idQ(T9,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T32 != &KPfalseVKi) {
    T36 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T33 = primitive_idQ(T9,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    if (T33 != &KPfalseVKi) {
      T35 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T31_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T7, T9);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T34 = T31_0;
      T35 = T34;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T36 = T35;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T36 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1119
      T3 = Kpresent_entry_countVKiI(T6);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1119
      T37 = primitive_cast_integer_as_raw(T3);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1119
      T38 = primitive_machine_word_equalQ(T37,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1119
      T39_0 = T38;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      FALL_THROUGH_UNWIND(T39_0);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T43 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    if (T43 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T44 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T45 = primitive_idQ(T44,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T46 = primitive_not(T45);
      T42 = T46;
    } else {
      T42 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    if (T42 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T47 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T48_0 = KmemberQVKdMM3I(&KJlock_, T47, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T49 = T48_0;
      T50 = T49;
    } else {
      T50 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    if (T50 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T51 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      T40 = MAKE_CLOSURE_INITD(&Kanonymous_of_emptyQF468, 1, T7);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      CALL1(T51, T40);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    res_ = primitive_release_simple_lock(T7);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T52 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    if (T52 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
      Klock_release_result_errorYthreads_internalVdylanMM0I(T7, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    CONTINUE_UNWIND();
    T5_0 = T39_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T53.vector_element_[0] = &KJsynchronization_;
    T53.vector_element_[1] = T7;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T53);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T54_0 = KsignalVKdMM0I(T4, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T55_0 = T54_0;
    T5_0 = T55_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1115
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsizeVKdMM39I (D table_) {
  D T2;
  D T3_0;
  D T4;
  D T5_0;
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
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D res_;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45_0;
  D T46;
  D T47;
  D T48;
  D T49;
  _KLsimple_object_vectorGVKd_2 T50 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T51_0;
  D T52_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1123
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1125
  T6 = SLOT_VALUE_INITD(table_, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T12 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T13 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T14 = primitive_idQ(T13,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T15 = primitive_not(T14);
    T11 = T15;
  } else {
    T11 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T16 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T17_0 = KmemberQVKdMM3I(&KJlock_, T16, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T18 = T17_0;
    T19 = T18;
  } else {
    T19 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T20 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T8 = MAKE_CLOSURE_INITD(&Kanonymous_of_sizeF461, 1, T7);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    CALL1(T20, T8);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T9 = primitive_wait_for_simple_lock(T7);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T22 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T23 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T24 = primitive_idQ(T23,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T25 = primitive_not(T24);
    T21 = T25;
  } else {
    T21 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T26 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T27_0 = KmemberQVKdMM3I(&KJlock_, T26, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T28 = T27_0;
    T29 = T28;
  } else {
    T29 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T30 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T10 = MAKE_CLOSURE_INITD(&Kanonymous_of_sizeF460, 2, T9, T7);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    CALL1(T30, T10);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T32 = primitive_idQ(T9,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T32 != &KPfalseVKi) {
    T36 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T33 = primitive_idQ(T9,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    if (T33 != &KPfalseVKi) {
      T35 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T31_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T7, T9);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T34 = T31_0;
      T35 = T34;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T36 = T35;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T36 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1127
      T3_0 = Kpresent_entry_countVKiI(T6);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      FALL_THROUGH_UNWIND(T3_0);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T40 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    if (T40 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T41 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T42 = primitive_idQ(T41,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T43 = primitive_not(T42);
      T39 = T43;
    } else {
      T39 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T44 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T45_0 = KmemberQVKdMM3I(&KJlock_, T44, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T46 = T45_0;
      T47 = T46;
    } else {
      T47 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    if (T47 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T48 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      T37 = MAKE_CLOSURE_INITD(&Kanonymous_of_sizeF459, 1, T7);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      CALL1(T48, T37);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    res_ = primitive_release_simple_lock(T7);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T49 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    if (T49 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
      Klock_release_result_errorYthreads_internalVdylanMM0I(T7, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    CONTINUE_UNWIND();
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T50.vector_element_[0] = &KJsynchronization_;
    T50.vector_element_[1] = T7;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T50);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T51_0 = KsignalVKdMM0I(T4, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T52_0 = T51_0;
    T5_0 = T52_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1123
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_copyVKdMM21I (D x_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1775
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1777
  T5 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1778
  T6 = primitive_idQ(T5,&KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1778
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1779
    T2_0 = Kobject_classVKdI(x_);
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1781
    T3_0 = Klimited_tableVKiMM0I(T5, &KPfalseVKi);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1778
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1775
  MV_SET_COUNT(1);
  return(T4_0);
}

D KelementVKdMM32I (D table_, D key_, D Urest_, D default_) {
  D T5;
  D defaultF6;
  D T7_0;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1175
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1175
  T8 = primitive_idQ(default_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1175
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1175
    T5 = Dtable_entry_emptyVKi;
    defaultF6 = T5;
  } else {
    defaultF6 = default_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1175
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1178
  T7_0 = KgethashVKiI(table_, key_, defaultF6, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1175
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kforward_iteration_protocolVKdMM31I (D table_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1727
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1736
  T2 = Kmake_initial_stateVKiI(table_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1736
  T3_0 = T2;
  T3_1 = &KPfalseVKi;
  T3_2 = &Ktable_next_stateVKi;
  T3_3 = &Ktable_finished_stateQVKi;
  T3_4 = &Ktable_current_keyVKi;
  T3_5 = &Ktable_current_elementVKi;
  T3_6 = &Ktable_current_element_setterVKi;
  T3_7 = &Ktable_copy_stateVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1727
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

D Kkey_testVKdMM5I (D table_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1095
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1097
  T2 = SLOT_VALUE_INITD(table_, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1097
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1097
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1095
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_setterVKdMM28I (D new_value_, D table_, D key_) {
  D T4_0;
  D T5;
  D T6;
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1330
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1332
  T5 = SLOT_VALUE_INITD(table_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1332
  T8 = primitive_instanceQ(new_value_,T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1332
  if (T8 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1332
    T7.vector_element_[0] = &KJvalue_;
    T7.vector_element_[1] = new_value_;
    T7.vector_element_[2] = &KJtype_;
    T7.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1332
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T7);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1332
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T6, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1332
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1333
  T4_0 = KputhashVKiI(new_value_, table_, key_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1330
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kremove_keyXVKdMM0I (D table_, D key_) {
  D indexF3;
  D fkey_;
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
  D thread_hash_state_;
  D T17_0;
  D T17_1;
  D T18_0;
  D T18_1;
  D idF19;
  D T20_0;
  D T20_1;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25_0;
  D T25_1;
  D T26;
  DWORD T27;
  D UtmpF28;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T32_1;
  DADDR T33;
  DWORD T34;
  D T35;
  D T36;
  D UtmpF37;
  D T38;
  D T39;
  D T40;
  D T41_0;
  D T41_1;
  D UtmpF42;
  D T43;
  D T44;
  D T45;
  D T46_0;
  D T46_1;
  D T47_0;
  D T47_1;
  D T48_0;
  D T48_1;
  D T49;
  D T50;
  D T51;
  D T52;
  DWORD rmremainderF53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  D T59;
  DADDR T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65_0;
  D T65_1;
  D T66_0;
  DWORD T67;
  D T68;
  D T69_0;
  D strideF70;
  D UtmpF71;
  D T72;
  D T73;
  D T74;
  D T75_0;
  D T75_1;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  D T79;
  DWORD T80;
  DWORD T81;
  DWORD T82;
  DADDR T83;
  D T84;
  D T85;
  D T86;
  D T87;
  D T88;
  D T89_0;
  D T89_1;
  D T90_0;
  D T90_1;
  DWORD previous_indexF91T, previous_indexF91;
  D T92;
  D mm_wrapper_;
  D T94;
  DWORD T95;
  D T96;
  D T97;
  D T98;
  DWORD rmremainderF99;
  DWORD T100;
  DWORD T101;
  DWORD T102;
  DWORD T103;
  DWORD T104;
  D T105;
  DADDR T106;
  D T107;
  D T108;
  D T109;
  D T110;
  D T111_0;
  D T111_1;
  D T112_0;
  DWORD T113;
  D T114;
  D T115_0;
  D strideF116;
  D UtmpF117;
  D T118;
  D T119;
  D T120;
  D T121_0;
  D T121_1;
  DWORD T122;
  DWORD T123;
  DWORD T124;
  D T125;
  DWORD T126;
  DWORD T127;
  DWORD T128;
  DADDR T129;
  D T130;
  D T131;
  D T132;
  D T133;
  D T134;
  D T135_0;
  D T135_1;
  D T136_0;
  D T136_1;
  DWORD previous_indexF137T, previous_indexF137;
  D T138;
  D T139;
  DWORD rmremainderF140;
  DWORD T141;
  DWORD T142;
  DWORD T143;
  DWORD T144;
  DWORD T145;
  D T146;
  DADDR T147;
  D T148;
  D T149;
  D T150;
  D T151;
  D T152_0;
  D T152_1;
  D T153_0;
  DWORD T154;
  D T155;
  D T156_0;
  D strideF157;
  D UtmpF158;
  D T159;
  D T160;
  D T161;
  D T162_0;
  D T162_1;
  DWORD T163;
  DWORD T164;
  DWORD T165;
  D T166;
  DWORD T167;
  DWORD T168;
  DWORD T169;
  DADDR T170;
  D T171;
  D T172;
  D T173;
  D T174;
  D T175;
  D T176_0;
  D T176_1;
  D T177_0;
  D T177_1;
  DWORD previous_indexF178T, previous_indexF178;
  DWORD T179;
  DWORD T180;
  D T181;
  D T182;
  D T183;
  D T184;
  D T185;
  D T186;
  DSINT T187;
  DWORD T188;
  DWORD T189;
  D T190;
  D T191;
  D T192;
  D T193;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1383
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1397
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1386
    T13 = SLOT_VALUE_INITD(table_, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1387
    T14 = SLOT_VALUE_INITD(T13, 3);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
    T15 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      thread_hash_state_ = primitive_read_thread_variable(Ddefault_hash_stateVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      primitive_write_thread_variable(Ddefault_hash_stateVKi, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      primitive_mps_ld_reset(thread_hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T21 = SLOT_VALUE_INITD(T13, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T17_0 = CALL2(T21, key_, thread_hash_state_);
      T17_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T18_0 = T17_0;
      T18_1 = T17_1;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      idF19 = T18_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      primitive_write_thread_variable(Ddefault_hash_stateVKi, thread_hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T179 = primitive_cast_integer_as_raw(idF19);
      T27 = T179;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T22 = SLOT_VALUE_INITD(T13, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T24_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T23 = T24_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T20_0 = CALL2(T22, key_, T23);
      T20_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T25_0 = T20_0;
      T25_1 = T20_1;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
      T26 = T25_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T180 = primitive_cast_integer_as_raw(T26);
      T27 = T180;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1390
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
    T49 = SLOT_VALUE_INITD(T13, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
    T50 = primitive_idQ(T49,&KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
    if (T50 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T33 = primitive_cast_pointer_as_raw(key_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T34 = primitive_machine_word_logand(T33,3);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T35 = primitive_machine_word_equalQ(T34,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T92 = primitive_element(key_,0,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        mm_wrapper_ = T92;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T94 = SLOT_VALUE_INITD(mm_wrapper_, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T95 = primitive_cast_integer_as_raw(T94);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T96 = primitive_machine_word_logbitQ(2,T95);
        T36 = T96;
      } else {
        T36 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T97 = SLOT_VALUE_INITD(T13, 8);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T98 = SLOT_VALUE_INITD(T97, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T100 = primitive_machine_word_shift_right(T27,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T102 = primitive_cast_integer_as_raw(T98);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T101 = primitive_machine_word_shift_right(T102,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        rmremainderF99 = primitive_machine_word_floorS_remainder(T100,T101);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T103 = primitive_machine_word_shift_left_signal_overflow(rmremainderF99,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T104 = primitive_machine_word_logior(T103,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T105 = primitive_cast_raw_as_integer(T104);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T108 = REPEATED_D_SLOT_VALUE_TAGGED(T97, 2, T104);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T106 = primitive_cast_pointer_as_raw(T108);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T107 = primitive_machine_word_equalQ(T106,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        if (T107 != &KPfalseVKi) {
          T109 = Dtable_entry_deletedVKi;
        } else {
          T109 = T108;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        UtmpF37 = primitive_idQ(T109,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        if (UtmpF37 != &KPfalseVKi) {
          T40 = UtmpF37;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T110 = primitive_idQ(T109,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          if (T110 != &KPfalseVKi) {
            T39 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T38 = KEEVKdI(key_, T109);
            T39 = T38;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T40 = T39;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        if (T40 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T111_0 = T105;
          T111_1 = T109;
          T41_0 = T111_0;
          T41_1 = T111_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T113 = primitive_machine_word_logand(T27,29);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T114 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T113);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T115_0 = T114;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T112_0 = T115_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          strideF116 = T112_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T122 = primitive_cast_integer_as_raw(strideF116);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T123 = primitive_machine_word_logxor(T122,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T126 = primitive_machine_word_logxor(T102,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          previous_indexF137T = T104;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            previous_indexF137 = previous_indexF137T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T124 = primitive_machine_word_subtract_signal_overflow(previous_indexF137,T123);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T125 = primitive_machine_word_less_thanQ(T124,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (T125 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T127 = primitive_machine_word_add_signal_overflow(T124,T126);
              T128 = T127;
            } else {
              T128 = T124;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T133 = primitive_cast_raw_as_integer(T128);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T131 = REPEATED_D_SLOT_VALUE_TAGGED(T97, 2, T128);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T129 = primitive_cast_pointer_as_raw(T131);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T130 = primitive_machine_word_equalQ(T129,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (T130 != &KPfalseVKi) {
              T132 = Dtable_entry_deletedVKi;
            } else {
              T132 = T131;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            UtmpF117 = primitive_idQ(T132,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (UtmpF117 != &KPfalseVKi) {
              T120 = UtmpF117;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T134 = primitive_idQ(T132,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              if (T134 != &KPfalseVKi) {
                T119 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
                T118 = KEEVKdI(key_, T132);
                T119 = T118;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T120 = T119;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (T120 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T135_0 = T133;
              T135_1 = T132;
              T121_0 = T135_0;
              T121_1 = T135_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              previous_indexF137T = T128;
              goto L1;
              T121_0 = T136_0;
              T121_1 = T136_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T41_0 = T121_0;
          T41_1 = T121_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T47_0 = T41_0;
        T47_1 = T41_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T138 = SLOT_VALUE_INITD(T13, 8);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T139 = SLOT_VALUE_INITD(T138, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T141 = primitive_machine_word_shift_right(T27,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T143 = primitive_cast_integer_as_raw(T139);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T142 = primitive_machine_word_shift_right(T143,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        rmremainderF140 = primitive_machine_word_floorS_remainder(T141,T142);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T144 = primitive_machine_word_shift_left_signal_overflow(rmremainderF140,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T145 = primitive_machine_word_logior(T144,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T146 = primitive_cast_raw_as_integer(T145);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T149 = REPEATED_D_SLOT_VALUE_TAGGED(T138, 2, T145);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T147 = primitive_cast_pointer_as_raw(T149);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T148 = primitive_machine_word_equalQ(T147,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        if (T148 != &KPfalseVKi) {
          T150 = Dtable_entry_deletedVKi;
        } else {
          T150 = T149;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        UtmpF42 = primitive_idQ(T150,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        if (UtmpF42 != &KPfalseVKi) {
          T45 = UtmpF42;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T151 = primitive_idQ(T150,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          if (T151 != &KPfalseVKi) {
            T44 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T43 = primitive_idQ(key_,T150);
            T44 = T43;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T45 = T44;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        if (T45 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T152_0 = T146;
          T152_1 = T150;
          T46_0 = T152_0;
          T46_1 = T152_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T154 = primitive_machine_word_logand(T27,29);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T155 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T154);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T156_0 = T155;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T153_0 = T156_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          strideF157 = T153_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T163 = primitive_cast_integer_as_raw(strideF157);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T164 = primitive_machine_word_logxor(T163,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T167 = primitive_machine_word_logxor(T143,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          previous_indexF178T = T145;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            previous_indexF178 = previous_indexF178T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T165 = primitive_machine_word_subtract_signal_overflow(previous_indexF178,T164);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T166 = primitive_machine_word_less_thanQ(T165,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (T166 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T168 = primitive_machine_word_add_signal_overflow(T165,T167);
              T169 = T168;
            } else {
              T169 = T165;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T174 = primitive_cast_raw_as_integer(T169);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T172 = REPEATED_D_SLOT_VALUE_TAGGED(T138, 2, T169);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T170 = primitive_cast_pointer_as_raw(T172);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T171 = primitive_machine_word_equalQ(T170,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (T171 != &KPfalseVKi) {
              T173 = Dtable_entry_deletedVKi;
            } else {
              T173 = T172;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            UtmpF158 = primitive_idQ(T173,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (UtmpF158 != &KPfalseVKi) {
              T161 = UtmpF158;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T175 = primitive_idQ(T173,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              if (T175 != &KPfalseVKi) {
                T160 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
                T159 = primitive_idQ(key_,T173);
                T160 = T159;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T161 = T160;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (T161 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T176_0 = T174;
              T176_1 = T173;
              T162_0 = T176_0;
              T162_1 = T176_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              previous_indexF178T = T169;
              goto L2;
              T162_0 = T177_0;
              T162_1 = T177_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T46_0 = T162_0;
          T46_1 = T162_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T47_0 = T46_0;
        T47_1 = T46_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T48_0 = T47_0;
      T48_1 = T47_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T51 = SLOT_VALUE_INITD(T13, 8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T52 = SLOT_VALUE_INITD(T51, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T54 = primitive_machine_word_shift_right(T27,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T56 = primitive_cast_integer_as_raw(T52);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T55 = primitive_machine_word_shift_right(T56,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      rmremainderF53 = primitive_machine_word_floorS_remainder(T54,T55);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T57 = primitive_machine_word_shift_left_signal_overflow(rmremainderF53,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T58 = primitive_machine_word_logior(T57,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T59 = primitive_cast_raw_as_integer(T58);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T62 = REPEATED_D_SLOT_VALUE_TAGGED(T51, 2, T58);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T60 = primitive_cast_pointer_as_raw(T62);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T61 = primitive_machine_word_equalQ(T60,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      if (T61 != &KPfalseVKi) {
        T63 = Dtable_entry_deletedVKi;
      } else {
        T63 = T62;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      UtmpF28 = primitive_idQ(T63,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      if (UtmpF28 != &KPfalseVKi) {
        T31 = UtmpF28;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T64 = primitive_idQ(T63,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        if (T64 != &KPfalseVKi) {
          T30 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T29 = CALL2(T49, key_, T63);
          T30 = T29;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T31 = T30;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T65_0 = T59;
        T65_1 = T63;
        T32_0 = T65_0;
        T32_1 = T65_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T67 = primitive_machine_word_logand(T27,29);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T68 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T67);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T69_0 = T68;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T66_0 = T69_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        strideF70 = T66_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T76 = primitive_cast_integer_as_raw(strideF70);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T77 = primitive_machine_word_logxor(T76,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T80 = primitive_machine_word_logxor(T56,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        previous_indexF91T = T58;
      L3: ;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          previous_indexF91 = previous_indexF91T;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T78 = primitive_machine_word_subtract_signal_overflow(previous_indexF91,T77);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T79 = primitive_machine_word_less_thanQ(T78,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          if (T79 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T81 = primitive_machine_word_add_signal_overflow(T78,T80);
            T82 = T81;
          } else {
            T82 = T78;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T87 = primitive_cast_raw_as_integer(T82);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T85 = REPEATED_D_SLOT_VALUE_TAGGED(T51, 2, T82);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T83 = primitive_cast_pointer_as_raw(T85);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          T84 = primitive_machine_word_equalQ(T83,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          if (T84 != &KPfalseVKi) {
            T86 = Dtable_entry_deletedVKi;
          } else {
            T86 = T85;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          UtmpF71 = primitive_idQ(T86,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          if (UtmpF71 != &KPfalseVKi) {
            T74 = UtmpF71;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T88 = primitive_idQ(T86,Dtable_entry_deletedVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            if (T88 != &KPfalseVKi) {
              T73 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
              T72 = CALL2(T49, key_, T86);
              T73 = T72;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T74 = T73;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          if (T74 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            T89_0 = T87;
            T89_1 = T86;
            T75_0 = T89_0;
            T75_1 = T89_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
            previous_indexF91T = T82;
            goto L3;
            T75_0 = T90_0;
            T75_1 = T90_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
        T32_0 = T75_0;
        T32_1 = T75_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
      T48_0 = T32_0;
      T48_1 = T32_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
    indexF3 = T48_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1391
    fkey_ = T48_1;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1392
    T5 = primitive_idQ(fkey_,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
    if (T5 != &KPfalseVKi) {
      T7 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
      T6 = Ktry_to_remhashVKiI(T13, T14, indexF3);
      T7 = T6;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1394
      T8 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T12 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
      T182 = SLOT_VALUE_INITD(T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
      if (T182 != &KPfalseVKi) {
        T184 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
        T183 = SLOT_VALUE_INITD(T13, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
        T181 = primitive_idQ(T14,T183);
        T184 = T181;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
      T185 = primitive_not(T184);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
      if (T184 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
        T186 = SLOT_VALUE_INITD(T13, 7);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
        T187 = primitive_mps_ld_isstale(T186);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
        T188 = primitive_machine_word_shift_left_signal_overflow(T187,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
        T189 = primitive_machine_word_logior(T188,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
        T190 = primitive_machine_word_less_thanQ(1,T189);
        T191 = T190;
      } else {
        T191 = T185;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1395
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
      if (T191 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1396
        Krehash_tableVKeI(table_, T13, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1397
        goto L0;
        T11 = T192;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
        if (T5 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1404
          T9 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T10 = T9;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1400
          goto L0;
          T10 = T193;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
        T11 = T10;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1393
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1397
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1383
  return(T12);
}

D Klimited_tableVKiMM0I (D of_, D size_) {
  D T3_0;
  _KLsimple_object_vectorGVKd_8 T4 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1764
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1766
  T4.vector_element_[0] = &KJclass_;
  T4.vector_element_[1] = &KLtableGVKd;
  T4.vector_element_[2] = &KJelement_type_;
  T4.vector_element_[3] = of_;
  T4.vector_element_[4] = IKJconcrete_class_;
  T4.vector_element_[5] = &KLobject_tableGVKd;
  T4.vector_element_[6] = &KJsize_;
  T4.vector_element_[7] = size_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1766
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLlimited_table_typeGVKe, &T4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1764
  MV_SET_COUNT(1);
  return(T3_0);
}

D KgethashVKiI (D table_, D key_, D default_, D first_attemptQ_) {
  D indexF5;
  D table_key_;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18;
  D T19;
  D T20_0;
  D T21_0;
  D T22;
  D idF23;
  D UtmpF24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T28_1;
  DADDR T29;
  DWORD T30;
  D T31;
  D T32;
  D UtmpF33;
  D T34;
  D T35;
  D T36;
  D T37_0;
  D T37_1;
  D UtmpF38;
  D T39;
  D T40;
  D T41;
  D T42_0;
  D T42_1;
  D T43_0;
  D T43_1;
  D T44_0;
  D T44_1;
  D T45;
  D T46;
  D T47;
  D T48;
  DWORD rmremainderF49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  D T56;
  DADDR T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62_0;
  D T62_1;
  D T63_0;
  DWORD T64;
  D T65;
  D T66_0;
  D strideF67;
  D UtmpF68;
  D T69;
  D T70;
  D T71;
  D T72_0;
  D T72_1;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  D T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  DADDR T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86_0;
  D T86_1;
  D T87_0;
  D T87_1;
  DWORD previous_indexF88T, previous_indexF88;
  D T89;
  D mm_wrapper_;
  D T91;
  DWORD T92;
  D T93;
  D T94;
  D T95;
  DWORD rmremainderF96;
  DWORD T97;
  DWORD T98;
  DWORD T99;
  DWORD T100;
  DWORD T101;
  DWORD T102;
  D T103;
  DADDR T104;
  D T105;
  D T106;
  D T107;
  D T108;
  D T109_0;
  D T109_1;
  D T110_0;
  DWORD T111;
  D T112;
  D T113_0;
  D strideF114;
  D UtmpF115;
  D T116;
  D T117;
  D T118;
  D T119_0;
  D T119_1;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  D T123;
  DWORD T124;
  DWORD T125;
  DWORD T126;
  DADDR T127;
  D T128;
  D T129;
  D T130;
  D T131;
  D T132;
  D T133_0;
  D T133_1;
  D T134_0;
  D T134_1;
  DWORD previous_indexF135T, previous_indexF135;
  D T136;
  D T137;
  DWORD rmremainderF138;
  DWORD T139;
  DWORD T140;
  DWORD T141;
  DWORD T142;
  DWORD T143;
  DWORD T144;
  D T145;
  DADDR T146;
  D T147;
  D T148;
  D T149;
  D T150;
  D T151_0;
  D T151_1;
  D T152_0;
  DWORD T153;
  D T154;
  D T155_0;
  D strideF156;
  D UtmpF157;
  D T158;
  D T159;
  D T160;
  D T161_0;
  D T161_1;
  DWORD T162;
  DWORD T163;
  DWORD T164;
  D T165;
  DWORD T166;
  DWORD T167;
  DWORD T168;
  DADDR T169;
  D T170;
  D T171;
  D T172;
  D T173;
  D T174;
  D T175_0;
  D T175_1;
  D T176_0;
  D T176_1;
  DWORD previous_indexF177T, previous_indexF177;
  D T178;
  DADDR T179;
  D T180;
  D T181;
  DWORD T182;
  D T183;
  D T184;
  D T185;
  D T186;
  D T187;
  D T188;
  D T189;
  D T190;
  D T191;
  D T192;
  D T193;
  D T194;
  D T195;
  D T196;
  D T197;
  D T198;
  D T199;
  D T200_0;
  D T201;
  D T202;
  D T203;
  D T204;
  D T205;
  D T206;
  D T207;
  D T208;
  D T209;
  D T210_0;
  D T211;
  D T212;
  D T213;
  D T214_0;
  D T215;
  D T216;
  D T217;
  D T218;
  D T219;
  D T220;
  D res_;
  D T222;
  D T223;
  D T224;
  D T225;
  D T226;
  D T227;
  D T228_0;
  D T229;
  D T230;
  D T231;
  D T232;
  _KLsimple_object_vectorGVKd_2 T233 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T234_0;
  D tableF235;
  D T236;
  D keyF237;
  D T238;
  D defaultF239;
  D T240;
  D T241;
  D T242;
  D T243;
  D T244;
  D T245;
  D T246;
  DSINT T247;
  DWORD T248;
  DWORD T249;
  D T250;
  D T251;
  D T252_0;
  D tableF253T, tableF253;
  D keyF254T, keyF254;
  D defaultF255T, defaultF255;
  D first_attemptQF256T, first_attemptQF256;
  D T257;
  D T258;
  _KLsimple_object_vectorGVKd_4 T259 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T260;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1133
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
  tableF253T = table_;
  keyF254T = key_;
  defaultF255T = default_;
  first_attemptQF256T = first_attemptQ_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1165
    tableF253 = tableF253T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1165
    keyF254 = keyF254T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1165
    defaultF255 = defaultF255T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1165
    first_attemptQF256 = first_attemptQF256T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
    tableF235 = tableF253;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
    T236 = tableF235;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
    keyF237 = keyF254;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
    T238 = keyF237;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
    defaultF239 = defaultF255;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
    T240 = defaultF239;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1136
    T18 = SLOT_VALUE_INITD(T236, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1137
    T19 = SLOT_VALUE_INITD(T18, 3);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1141
    T22 = SLOT_VALUE_INITD(T18, 2);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1141
    T20_0 = CALL2(T22, T238, Ddummy_hash_stateVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1141
    T21_0 = T20_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1141
    idF23 = T21_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
    T45 = SLOT_VALUE_INITD(T18, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
    T46 = primitive_idQ(T45,&KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T29 = primitive_cast_pointer_as_raw(T238);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T30 = primitive_machine_word_logand(T29,3);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T31 = primitive_machine_word_equalQ(T30,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T89 = primitive_element(T238,0,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        mm_wrapper_ = T89;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T91 = SLOT_VALUE_INITD(mm_wrapper_, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T92 = primitive_cast_integer_as_raw(T91);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T93 = primitive_machine_word_logbitQ(2,T92);
        T32 = T93;
      } else {
        T32 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T94 = SLOT_VALUE_INITD(T18, 8);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T95 = SLOT_VALUE_INITD(T94, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T98 = primitive_cast_integer_as_raw(idF23);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T97 = primitive_machine_word_shift_right(T98,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T100 = primitive_cast_integer_as_raw(T95);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T99 = primitive_machine_word_shift_right(T100,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        rmremainderF96 = primitive_machine_word_floorS_remainder(T97,T99);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T101 = primitive_machine_word_shift_left_signal_overflow(rmremainderF96,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T102 = primitive_machine_word_logior(T101,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T103 = primitive_cast_raw_as_integer(T102);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T106 = REPEATED_D_SLOT_VALUE_TAGGED(T94, 2, T102);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T104 = primitive_cast_pointer_as_raw(T106);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T105 = primitive_machine_word_equalQ(T104,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        if (T105 != &KPfalseVKi) {
          T107 = Dtable_entry_deletedVKi;
        } else {
          T107 = T106;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        UtmpF33 = primitive_idQ(T107,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        if (UtmpF33 != &KPfalseVKi) {
          T36 = UtmpF33;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T108 = primitive_idQ(T107,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          if (T108 != &KPfalseVKi) {
            T35 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T34 = KEEVKdI(T238, T107);
            T35 = T34;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T36 = T35;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        if (T36 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T109_0 = T103;
          T109_1 = T107;
          T37_0 = T109_0;
          T37_1 = T109_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T111 = primitive_machine_word_logand(T98,29);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T112 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T111);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T113_0 = T112;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T110_0 = T113_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          strideF114 = T110_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T120 = primitive_cast_integer_as_raw(strideF114);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T121 = primitive_machine_word_logxor(T120,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T124 = primitive_machine_word_logxor(T100,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          previous_indexF135T = T102;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            previous_indexF135 = previous_indexF135T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T122 = primitive_machine_word_subtract_signal_overflow(previous_indexF135,T121);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T123 = primitive_machine_word_less_thanQ(T122,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (T123 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T125 = primitive_machine_word_add_signal_overflow(T122,T124);
              T126 = T125;
            } else {
              T126 = T122;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T131 = primitive_cast_raw_as_integer(T126);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T129 = REPEATED_D_SLOT_VALUE_TAGGED(T94, 2, T126);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T127 = primitive_cast_pointer_as_raw(T129);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T128 = primitive_machine_word_equalQ(T127,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (T128 != &KPfalseVKi) {
              T130 = Dtable_entry_deletedVKi;
            } else {
              T130 = T129;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            UtmpF115 = primitive_idQ(T130,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (UtmpF115 != &KPfalseVKi) {
              T118 = UtmpF115;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T132 = primitive_idQ(T130,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              if (T132 != &KPfalseVKi) {
                T117 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
                T116 = KEEVKdI(T238, T130);
                T117 = T116;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T118 = T117;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (T118 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T133_0 = T131;
              T133_1 = T130;
              T119_0 = T133_0;
              T119_1 = T133_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              previous_indexF135T = T126;
              goto L1;
              T119_0 = T134_0;
              T119_1 = T134_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T37_0 = T119_0;
          T37_1 = T119_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T43_0 = T37_0;
        T43_1 = T37_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T136 = SLOT_VALUE_INITD(T18, 8);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T137 = SLOT_VALUE_INITD(T136, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T140 = primitive_cast_integer_as_raw(idF23);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T139 = primitive_machine_word_shift_right(T140,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T142 = primitive_cast_integer_as_raw(T137);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T141 = primitive_machine_word_shift_right(T142,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        rmremainderF138 = primitive_machine_word_floorS_remainder(T139,T141);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T143 = primitive_machine_word_shift_left_signal_overflow(rmremainderF138,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T144 = primitive_machine_word_logior(T143,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T145 = primitive_cast_raw_as_integer(T144);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T148 = REPEATED_D_SLOT_VALUE_TAGGED(T136, 2, T144);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T146 = primitive_cast_pointer_as_raw(T148);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T147 = primitive_machine_word_equalQ(T146,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        if (T147 != &KPfalseVKi) {
          T149 = Dtable_entry_deletedVKi;
        } else {
          T149 = T148;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        UtmpF38 = primitive_idQ(T149,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        if (UtmpF38 != &KPfalseVKi) {
          T41 = UtmpF38;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T150 = primitive_idQ(T149,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          if (T150 != &KPfalseVKi) {
            T40 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T39 = primitive_idQ(T238,T149);
            T40 = T39;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T41 = T40;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        if (T41 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T151_0 = T145;
          T151_1 = T149;
          T42_0 = T151_0;
          T42_1 = T151_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T153 = primitive_machine_word_logand(T140,29);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T154 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T153);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T155_0 = T154;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T152_0 = T155_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          strideF156 = T152_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T162 = primitive_cast_integer_as_raw(strideF156);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T163 = primitive_machine_word_logxor(T162,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T166 = primitive_machine_word_logxor(T142,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          previous_indexF177T = T144;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            previous_indexF177 = previous_indexF177T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T164 = primitive_machine_word_subtract_signal_overflow(previous_indexF177,T163);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T165 = primitive_machine_word_less_thanQ(T164,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (T165 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T167 = primitive_machine_word_add_signal_overflow(T164,T166);
              T168 = T167;
            } else {
              T168 = T164;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T173 = primitive_cast_raw_as_integer(T168);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T171 = REPEATED_D_SLOT_VALUE_TAGGED(T136, 2, T168);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T169 = primitive_cast_pointer_as_raw(T171);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T170 = primitive_machine_word_equalQ(T169,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (T170 != &KPfalseVKi) {
              T172 = Dtable_entry_deletedVKi;
            } else {
              T172 = T171;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            UtmpF157 = primitive_idQ(T172,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (UtmpF157 != &KPfalseVKi) {
              T160 = UtmpF157;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T174 = primitive_idQ(T172,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              if (T174 != &KPfalseVKi) {
                T159 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
                T158 = primitive_idQ(T238,T172);
                T159 = T158;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T160 = T159;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (T160 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T175_0 = T173;
              T175_1 = T172;
              T161_0 = T175_0;
              T161_1 = T175_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              previous_indexF177T = T168;
              goto L2;
              T161_0 = T176_0;
              T161_1 = T176_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T42_0 = T161_0;
          T42_1 = T161_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T43_0 = T42_0;
        T43_1 = T42_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T44_0 = T43_0;
      T44_1 = T43_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T47 = SLOT_VALUE_INITD(T18, 8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T48 = SLOT_VALUE_INITD(T47, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T51 = primitive_cast_integer_as_raw(idF23);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T50 = primitive_machine_word_shift_right(T51,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T53 = primitive_cast_integer_as_raw(T48);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T52 = primitive_machine_word_shift_right(T53,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      rmremainderF49 = primitive_machine_word_floorS_remainder(T50,T52);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T54 = primitive_machine_word_shift_left_signal_overflow(rmremainderF49,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T55 = primitive_machine_word_logior(T54,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T56 = primitive_cast_raw_as_integer(T55);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T59 = REPEATED_D_SLOT_VALUE_TAGGED(T47, 2, T55);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T57 = primitive_cast_pointer_as_raw(T59);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T58 = primitive_machine_word_equalQ(T57,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      if (T58 != &KPfalseVKi) {
        T60 = Dtable_entry_deletedVKi;
      } else {
        T60 = T59;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      UtmpF24 = primitive_idQ(T60,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      if (UtmpF24 != &KPfalseVKi) {
        T27 = UtmpF24;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T61 = primitive_idQ(T60,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        if (T61 != &KPfalseVKi) {
          T26 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T25 = CALL2(T45, T238, T60);
          T26 = T25;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T27 = T26;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T62_0 = T56;
        T62_1 = T60;
        T28_0 = T62_0;
        T28_1 = T62_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T64 = primitive_machine_word_logand(T51,29);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T65 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T64);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T66_0 = T65;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T63_0 = T66_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        strideF67 = T63_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T73 = primitive_cast_integer_as_raw(strideF67);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T74 = primitive_machine_word_logxor(T73,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T77 = primitive_machine_word_logxor(T53,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        previous_indexF88T = T55;
      L3: ;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          previous_indexF88 = previous_indexF88T;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T75 = primitive_machine_word_subtract_signal_overflow(previous_indexF88,T74);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T76 = primitive_machine_word_less_thanQ(T75,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          if (T76 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T78 = primitive_machine_word_add_signal_overflow(T75,T77);
            T79 = T78;
          } else {
            T79 = T75;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T84 = primitive_cast_raw_as_integer(T79);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T82 = REPEATED_D_SLOT_VALUE_TAGGED(T47, 2, T79);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T80 = primitive_cast_pointer_as_raw(T82);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          T81 = primitive_machine_word_equalQ(T80,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          if (T81 != &KPfalseVKi) {
            T83 = Dtable_entry_deletedVKi;
          } else {
            T83 = T82;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          UtmpF68 = primitive_idQ(T83,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          if (UtmpF68 != &KPfalseVKi) {
            T71 = UtmpF68;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T85 = primitive_idQ(T83,Dtable_entry_deletedVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            if (T85 != &KPfalseVKi) {
              T70 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
              T69 = CALL2(T45, T238, T83);
              T70 = T69;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T71 = T70;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          if (T71 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            T86_0 = T84;
            T86_1 = T83;
            T72_0 = T86_0;
            T72_1 = T86_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
            previous_indexF88T = T79;
            goto L3;
            T72_0 = T87_0;
            T72_1 = T87_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
        T28_0 = T72_0;
        T28_1 = T72_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
      T44_0 = T28_0;
      T44_1 = T28_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
    indexF5 = T44_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1142
    table_key_ = T44_1;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1144
    T178 = SLOT_VALUE_INITD(T18, 9);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1145
    T7 = primitive_idQ(table_key_,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1145
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
      T242 = SLOT_VALUE_INITD(T19, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
      if (T242 != &KPfalseVKi) {
        T244 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
        T243 = SLOT_VALUE_INITD(T18, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
        T241 = primitive_idQ(T19,T243);
        T244 = T241;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
      T245 = primitive_not(T244);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
      if (T244 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
        T246 = SLOT_VALUE_INITD(T18, 7);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
        T247 = primitive_mps_ld_isstale(T246);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
        T248 = primitive_machine_word_shift_left_signal_overflow(T247,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
        T249 = primitive_machine_word_logior(T248,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
        T250 = primitive_machine_word_less_thanQ(1,T249);
        T251 = T250;
      } else {
        T251 = T245;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1161
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1145
      if (T251 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1164
        Krehash_tableVKeI(T236, T18, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1165
        tableF253T = T236;
        keyF254T = T238;
        defaultF255T = T240;
        first_attemptQF256T = &KPfalseVKi;
        goto L0;
        T16_0 = T252_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1166
        T12 = primitive_idQ(T240,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1145
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1168
          T13_0 = Kkey_missing_errorVKiMM0I(T236, T238, T240);
          T15_0 = T13_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1170
          T257 = SLOT_VALUE_INITD(T236, 0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1170
          T260 = primitive_instanceQ(T240,T257);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1170
          if (T260 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1170
            T259.vector_element_[0] = &KJvalue_;
            T259.vector_element_[1] = T240;
            T259.vector_element_[2] = &KJtype_;
            T259.vector_element_[3] = T257;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1170
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T258 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T259);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1170
            CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
            CONGRUENT_CALL2(T258, &KPempty_vectorVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1170
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1171
          T14_0 = T240;
          T15_0 = T14_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1145
        T16_0 = T15_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1145
      T17_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1148
      T182 = primitive_cast_integer_as_raw(indexF5);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1148
      T181 = REPEATED_D_SLOT_VALUE_TAGGED(T178, 2, T182);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1148
      T179 = primitive_cast_pointer_as_raw(T181);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1148
      T180 = primitive_machine_word_equalQ(T179,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1148
      if (T180 != &KPfalseVKi) {
        T183 = Dtable_entry_deletedVKi;
      } else {
        T183 = T181;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1148
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
      T185 = SLOT_VALUE_INITD(T19, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
      if (T185 != &KPfalseVKi) {
        T187 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
        T186 = SLOT_VALUE_INITD(T18, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
        T184 = primitive_idQ(T19,T186);
        T187 = T184;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
      if (T187 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
        T188 = primitive_idQ(T183,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
        T189 = primitive_not(T188);
        T8 = T189;
      } else {
        T8 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1154
        T9_0 = T183;
        T11_0 = T9_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        T190 = SLOT_VALUE_INITD(T18, 0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        T195 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T195 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T196 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T197 = primitive_idQ(T196,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T198 = primitive_not(T197);
          T194 = T198;
        } else {
          T194 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T194 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T199 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T200_0 = KmemberQVKdMM3I(&KJlock_, T199, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T201 = T200_0;
          T202 = T201;
        } else {
          T202 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T202 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T203 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T191 = MAKE_CLOSURE_INITD(&Kanonymous_of_gethashF408, 1, T190);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          CALL1(T203, T191);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        T192 = primitive_wait_for_simple_lock(T190);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        T205 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T205 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T206 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T207 = primitive_idQ(T206,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T208 = primitive_not(T207);
          T204 = T208;
        } else {
          T204 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T204 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T209 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T210_0 = KmemberQVKdMM3I(&KJlock_, T209, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T211 = T210_0;
          T212 = T211;
        } else {
          T212 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T212 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T213 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T193 = MAKE_CLOSURE_INITD(&Kanonymous_of_gethashF407, 2, T192, T190);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          CALL1(T213, T193);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        T215 = primitive_idQ(T192,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T215 != &KPfalseVKi) {
          T219 = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T216 = primitive_idQ(T192,(D) 5);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          if (T216 != &KPfalseVKi) {
            T218 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T214_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T190, T192);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T217 = T214_0;
            T218 = T217;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T219 = T218;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        if (T219 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T223 = TdebuggingQTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          if (T223 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T224 = Tdebug_partsTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T225 = primitive_idQ(T224,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T226 = primitive_not(T225);
            T222 = T226;
          } else {
            T222 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          if (T222 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T227 = Tdebug_partsTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T228_0 = KmemberQVKdMM3I(&KJlock_, T227, &KPempty_vectorVKi, &KEEVKd);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T229 = T228_0;
            T230 = T229;
          } else {
            T230 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          if (T230 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T231 = Tdebug_out_functionTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            T220 = MAKE_CLOSURE_INITD(&Kanonymous_of_gethashF406, 1, T190);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            CALL1(T231, T220);
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          res_ = primitive_release_simple_lock(T190);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T232 = primitive_idQ(res_,(D) 1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          if (T232 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
            Klock_release_result_errorYthreads_internalVdylanMM0I(T190, res_);
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          T233.vector_element_[0] = &KJsynchronization_;
          T233.vector_element_[1] = T190;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T10 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T233);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
          KsignalVKdMM0I(T10, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
        tableF253T = tableF253;
        keyF254T = keyF254;
        defaultF255T = defaultF255;
        first_attemptQF256T = &KPfalseVKi;
        goto L0;
        T11_0 = T234_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1153
      T17_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1145
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1159
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1133
  MV_SET_COUNT(1);
  return(T17_0);
}

D KinitializeVKdMM29I (D table_, D Urest_, D lock_, D valuesQ_) {
  D T5;
  D T6;
  D lockF7;
  D T8_0;
  D T8_1;
  D test_;
  D hash_;
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

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1106
  T14 = primitive_copy_vector(Urest_);
  T13 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1106
  T15 = primitive_idQ(lock_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1106
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1106
    T5 = Kmake_table_lockVKiI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1106
    T6 = T5;
    lockF7 = T6;
  } else {
    lockF7 = lock_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1106
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
  T16 = primitive_idQ(T13,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
    KerrorVKdMM1I(&K370, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
    T17 = SLOT_VALUE_INITD(T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
    T18 = SLOT_VALUE_INITD(T13, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
    MEP_CALL_PROLOG(T17, T18, 2);
    MEP_CALL2(T17, table_, T14);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1109
  CONGRUENT_CALL_PROLOG(&Ktable_protocolVKd, 1);
  T8_0 = CONGRUENT_CALL1(table_);
  T8_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
  test_ = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1108
  hash_ = T8_1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1111
  T19 = SLOT_VALUE_INITD(table_, 2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1112
  T20 = SLOT_VALUE_INITD(table_, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1111
  T11 = Kmake_table_vectorVKiI(T19, test_, hash_, lockF7, valuesQ_, T20);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1110
  SLOT_VALUE_SETTER(T11, table_, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1110
  T12 = T11;
  MV_SET_ELT(0, T11);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1106
  return(T12);
}

D KmakeVKdMM58I (D c_, D initargs_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1083
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1086
  T3_0 = APPLY2(&KLobject_tableGZ32ZconstructorVKiMM0, &KLobject_tableGVKd, initargs_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1083
  MV_SET_COUNT(1);
  return(T3_0);
}

D KputhashVKiI (D new_value_, D table_, D key_) {
  D idF4;
  D hstate_;
  D indexF6;
  D fkey_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18;
  D thread_hash_state_;
  D T20_0;
  D T20_1;
  D T21_0;
  D T21_1;
  D idF22;
  D hash_state_;
  D T24_0;
  D T24_1;
  D T25_0;
  D T25_1;
  D T26;
  D T27_0;
  D T27_1;
  D T28;
  D T29;
  D T30_0;
  D T31_0;
  D T31_1;
  D UtmpF32;
  D T33;
  D T34;
  D T35;
  D T36_0;
  D T36_1;
  DADDR T37;
  DWORD T38;
  D T39;
  D T40;
  D UtmpF41;
  D T42;
  D T43;
  D T44;
  D T45_0;
  D T45_1;
  D UtmpF46;
  D T47;
  D T48;
  D T49;
  D T50_0;
  D T50_1;
  D T51_0;
  D T51_1;
  D T52_0;
  D T52_1;
  D T53;
  D T54;
  D T55;
  D T56;
  DWORD rmremainderF57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  D T64;
  DADDR T65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70_0;
  D T70_1;
  D T71_0;
  DWORD T72;
  D T73;
  D T74_0;
  D strideF75;
  D UtmpF76;
  D T77;
  D T78;
  D T79;
  D T80_0;
  D T80_1;
  DWORD T81;
  DWORD T82;
  DWORD T83;
  D T84;
  DWORD T85;
  DWORD T86;
  DWORD T87;
  DADDR T88;
  D T89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94_0;
  D T94_1;
  D T95_0;
  D T95_1;
  DWORD previous_indexF96T, previous_indexF96;
  D T97;
  D mm_wrapper_;
  D T99;
  DWORD T100;
  D T101;
  D T102;
  D T103;
  DWORD rmremainderF104;
  DWORD T105;
  DWORD T106;
  DWORD T107;
  DWORD T108;
  DWORD T109;
  DWORD T110;
  D T111;
  DADDR T112;
  D T113;
  D T114;
  D T115;
  D T116;
  D T117_0;
  D T117_1;
  D T118_0;
  DWORD T119;
  D T120;
  D T121_0;
  D strideF122;
  D UtmpF123;
  D T124;
  D T125;
  D T126;
  D T127_0;
  D T127_1;
  DWORD T128;
  DWORD T129;
  DWORD T130;
  D T131;
  DWORD T132;
  DWORD T133;
  DWORD T134;
  DADDR T135;
  D T136;
  D T137;
  D T138;
  D T139;
  D T140;
  D T141_0;
  D T141_1;
  D T142_0;
  D T142_1;
  DWORD previous_indexF143T, previous_indexF143;
  D T144;
  D T145;
  DWORD rmremainderF146;
  DWORD T147;
  DWORD T148;
  DWORD T149;
  DWORD T150;
  DWORD T151;
  DWORD T152;
  D T153;
  DADDR T154;
  D T155;
  D T156;
  D T157;
  D T158;
  D T159_0;
  D T159_1;
  D T160_0;
  DWORD T161;
  D T162;
  D T163_0;
  D strideF164;
  D UtmpF165;
  D T166;
  D T167;
  D T168;
  D T169_0;
  D T169_1;
  DWORD T170;
  DWORD T171;
  DWORD T172;
  D T173;
  DWORD T174;
  DWORD T175;
  DWORD T176;
  DADDR T177;
  D T178;
  D T179;
  D T180;
  D T181;
  D T182;
  D T183_0;
  D T183_1;
  D T184_0;
  D T184_1;
  DWORD previous_indexF185T, previous_indexF185;
  D T186;
  D T187;
  D T188;
  D T189;
  D T190;
  D T191;
  DSINT T192;
  DWORD T193;
  DWORD T194;
  D T195;
  D T196;
  D T197_0;
  D new_valueF198T, new_valueF198;
  D T199;
  D tableF200T, tableF200;
  D T201;
  D keyF202T, keyF202;
  D T203;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1303
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
  new_valueF198T = new_value_;
  tableF200T = table_;
  keyF202T = key_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
    new_valueF198 = new_valueF198T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
    T199 = new_valueF198;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
    tableF200 = tableF200T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
    T201 = tableF200;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
    keyF202 = keyF202T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
    T203 = keyF202;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1305
    T16 = SLOT_VALUE_INITD(T201, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1306
    T17 = SLOT_VALUE_INITD(T16, 3);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
    T18 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      thread_hash_state_ = primitive_read_thread_variable(Ddefault_hash_stateVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      primitive_write_thread_variable(Ddefault_hash_stateVKi, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      primitive_mps_ld_reset(thread_hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T26 = SLOT_VALUE_INITD(T16, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T20_0 = CALL2(T26, T203, thread_hash_state_);
      T20_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T21_0 = T20_0;
      T21_1 = T20_1;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      idF22 = T21_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      hash_state_ = T21_1;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      primitive_write_thread_variable(Ddefault_hash_stateVKi, thread_hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T27_0 = idF22;
      T27_1 = hash_state_;
      T25_0 = T27_0;
      T25_1 = T27_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T28 = SLOT_VALUE_INITD(T16, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T30_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T29 = T30_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T24_0 = CALL2(T28, T203, T29);
      T24_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
      T31_0 = T24_0;
      T31_1 = T24_1;
      T25_0 = T31_0;
      T25_1 = T31_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1309
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1308
    idF4 = T25_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1308
    hstate_ = T25_1;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
    T53 = SLOT_VALUE_INITD(T16, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
    T54 = primitive_idQ(T53,&KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
    if (T54 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T37 = primitive_cast_pointer_as_raw(T203);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T38 = primitive_machine_word_logand(T37,3);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T39 = primitive_machine_word_equalQ(T38,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T97 = primitive_element(T203,0,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        mm_wrapper_ = T97;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T99 = SLOT_VALUE_INITD(mm_wrapper_, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T100 = primitive_cast_integer_as_raw(T99);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T101 = primitive_machine_word_logbitQ(2,T100);
        T40 = T101;
      } else {
        T40 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T102 = SLOT_VALUE_INITD(T16, 8);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T103 = SLOT_VALUE_INITD(T102, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T106 = primitive_cast_integer_as_raw(idF4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T105 = primitive_machine_word_shift_right(T106,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T108 = primitive_cast_integer_as_raw(T103);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T107 = primitive_machine_word_shift_right(T108,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        rmremainderF104 = primitive_machine_word_floorS_remainder(T105,T107);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T109 = primitive_machine_word_shift_left_signal_overflow(rmremainderF104,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T110 = primitive_machine_word_logior(T109,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T111 = primitive_cast_raw_as_integer(T110);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T114 = REPEATED_D_SLOT_VALUE_TAGGED(T102, 2, T110);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T112 = primitive_cast_pointer_as_raw(T114);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T113 = primitive_machine_word_equalQ(T112,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        if (T113 != &KPfalseVKi) {
          T115 = Dtable_entry_deletedVKi;
        } else {
          T115 = T114;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        UtmpF41 = primitive_idQ(T115,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        if (UtmpF41 != &KPfalseVKi) {
          T44 = UtmpF41;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T116 = primitive_idQ(T115,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          if (T116 != &KPfalseVKi) {
            T43 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T42 = KEEVKdI(T203, T115);
            T43 = T42;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T44 = T43;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        if (T44 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T117_0 = T111;
          T117_1 = T115;
          T45_0 = T117_0;
          T45_1 = T117_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T119 = primitive_machine_word_logand(T106,29);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T120 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T119);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T121_0 = T120;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T118_0 = T121_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          strideF122 = T118_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T128 = primitive_cast_integer_as_raw(strideF122);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T129 = primitive_machine_word_logxor(T128,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T132 = primitive_machine_word_logxor(T108,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          previous_indexF143T = T110;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            previous_indexF143 = previous_indexF143T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T130 = primitive_machine_word_subtract_signal_overflow(previous_indexF143,T129);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T131 = primitive_machine_word_less_thanQ(T130,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (T131 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T133 = primitive_machine_word_add_signal_overflow(T130,T132);
              T134 = T133;
            } else {
              T134 = T130;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T139 = primitive_cast_raw_as_integer(T134);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T137 = REPEATED_D_SLOT_VALUE_TAGGED(T102, 2, T134);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T135 = primitive_cast_pointer_as_raw(T137);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T136 = primitive_machine_word_equalQ(T135,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (T136 != &KPfalseVKi) {
              T138 = Dtable_entry_deletedVKi;
            } else {
              T138 = T137;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            UtmpF123 = primitive_idQ(T138,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (UtmpF123 != &KPfalseVKi) {
              T126 = UtmpF123;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T140 = primitive_idQ(T138,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              if (T140 != &KPfalseVKi) {
                T125 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
                T124 = KEEVKdI(T203, T138);
                T125 = T124;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T126 = T125;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (T126 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T141_0 = T139;
              T141_1 = T138;
              T127_0 = T141_0;
              T127_1 = T141_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              previous_indexF143T = T134;
              goto L1;
              T127_0 = T142_0;
              T127_1 = T142_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T45_0 = T127_0;
          T45_1 = T127_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T51_0 = T45_0;
        T51_1 = T45_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T144 = SLOT_VALUE_INITD(T16, 8);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T145 = SLOT_VALUE_INITD(T144, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T148 = primitive_cast_integer_as_raw(idF4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T147 = primitive_machine_word_shift_right(T148,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T150 = primitive_cast_integer_as_raw(T145);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T149 = primitive_machine_word_shift_right(T150,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        rmremainderF146 = primitive_machine_word_floorS_remainder(T147,T149);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T151 = primitive_machine_word_shift_left_signal_overflow(rmremainderF146,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T152 = primitive_machine_word_logior(T151,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T153 = primitive_cast_raw_as_integer(T152);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T156 = REPEATED_D_SLOT_VALUE_TAGGED(T144, 2, T152);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T154 = primitive_cast_pointer_as_raw(T156);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T155 = primitive_machine_word_equalQ(T154,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        if (T155 != &KPfalseVKi) {
          T157 = Dtable_entry_deletedVKi;
        } else {
          T157 = T156;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        UtmpF46 = primitive_idQ(T157,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        if (UtmpF46 != &KPfalseVKi) {
          T49 = UtmpF46;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T158 = primitive_idQ(T157,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          if (T158 != &KPfalseVKi) {
            T48 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T47 = primitive_idQ(T203,T157);
            T48 = T47;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T49 = T48;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        if (T49 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T159_0 = T153;
          T159_1 = T157;
          T50_0 = T159_0;
          T50_1 = T159_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T161 = primitive_machine_word_logand(T148,29);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T162 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T161);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T163_0 = T162;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T160_0 = T163_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          strideF164 = T160_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T170 = primitive_cast_integer_as_raw(strideF164);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T171 = primitive_machine_word_logxor(T170,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T174 = primitive_machine_word_logxor(T150,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          previous_indexF185T = T152;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            previous_indexF185 = previous_indexF185T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T172 = primitive_machine_word_subtract_signal_overflow(previous_indexF185,T171);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T173 = primitive_machine_word_less_thanQ(T172,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (T173 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T175 = primitive_machine_word_add_signal_overflow(T172,T174);
              T176 = T175;
            } else {
              T176 = T172;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T181 = primitive_cast_raw_as_integer(T176);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T179 = REPEATED_D_SLOT_VALUE_TAGGED(T144, 2, T176);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T177 = primitive_cast_pointer_as_raw(T179);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T178 = primitive_machine_word_equalQ(T177,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (T178 != &KPfalseVKi) {
              T180 = Dtable_entry_deletedVKi;
            } else {
              T180 = T179;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            UtmpF165 = primitive_idQ(T180,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (UtmpF165 != &KPfalseVKi) {
              T168 = UtmpF165;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T182 = primitive_idQ(T180,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              if (T182 != &KPfalseVKi) {
                T167 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
                T166 = primitive_idQ(T203,T180);
                T167 = T166;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T168 = T167;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (T168 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T183_0 = T181;
              T183_1 = T180;
              T169_0 = T183_0;
              T169_1 = T183_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              previous_indexF185T = T176;
              goto L2;
              T169_0 = T184_0;
              T169_1 = T184_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T50_0 = T169_0;
          T50_1 = T169_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T51_0 = T50_0;
        T51_1 = T50_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T52_0 = T51_0;
      T52_1 = T51_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T55 = SLOT_VALUE_INITD(T16, 8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T56 = SLOT_VALUE_INITD(T55, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T59 = primitive_cast_integer_as_raw(idF4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T58 = primitive_machine_word_shift_right(T59,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T61 = primitive_cast_integer_as_raw(T56);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T60 = primitive_machine_word_shift_right(T61,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      rmremainderF57 = primitive_machine_word_floorS_remainder(T58,T60);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T62 = primitive_machine_word_shift_left_signal_overflow(rmremainderF57,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T63 = primitive_machine_word_logior(T62,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T64 = primitive_cast_raw_as_integer(T63);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T67 = REPEATED_D_SLOT_VALUE_TAGGED(T55, 2, T63);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T65 = primitive_cast_pointer_as_raw(T67);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T66 = primitive_machine_word_equalQ(T65,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      if (T66 != &KPfalseVKi) {
        T68 = Dtable_entry_deletedVKi;
      } else {
        T68 = T67;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      UtmpF32 = primitive_idQ(T68,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      if (UtmpF32 != &KPfalseVKi) {
        T35 = UtmpF32;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T69 = primitive_idQ(T68,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        if (T69 != &KPfalseVKi) {
          T34 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T33 = CALL2(T53, T203, T68);
          T34 = T33;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T35 = T34;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T70_0 = T64;
        T70_1 = T68;
        T36_0 = T70_0;
        T36_1 = T70_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T72 = primitive_machine_word_logand(T59,29);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T73 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T72);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T74_0 = T73;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T71_0 = T74_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        strideF75 = T71_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T81 = primitive_cast_integer_as_raw(strideF75);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T82 = primitive_machine_word_logxor(T81,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T85 = primitive_machine_word_logxor(T61,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        previous_indexF96T = T63;
      L3: ;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          previous_indexF96 = previous_indexF96T;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T83 = primitive_machine_word_subtract_signal_overflow(previous_indexF96,T82);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T84 = primitive_machine_word_less_thanQ(T83,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          if (T84 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T86 = primitive_machine_word_add_signal_overflow(T83,T85);
            T87 = T86;
          } else {
            T87 = T83;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T92 = primitive_cast_raw_as_integer(T87);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T90 = REPEATED_D_SLOT_VALUE_TAGGED(T55, 2, T87);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T88 = primitive_cast_pointer_as_raw(T90);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          T89 = primitive_machine_word_equalQ(T88,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          if (T89 != &KPfalseVKi) {
            T91 = Dtable_entry_deletedVKi;
          } else {
            T91 = T90;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          UtmpF76 = primitive_idQ(T91,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          if (UtmpF76 != &KPfalseVKi) {
            T79 = UtmpF76;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T93 = primitive_idQ(T91,Dtable_entry_deletedVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            if (T93 != &KPfalseVKi) {
              T78 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
              T77 = CALL2(T53, T203, T91);
              T78 = T77;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T79 = T78;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          if (T79 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            T94_0 = T92;
            T94_1 = T91;
            T80_0 = T94_0;
            T80_1 = T94_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
            previous_indexF96T = T87;
            goto L3;
            T80_0 = T95_0;
            T80_1 = T95_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
        T36_0 = T80_0;
        T36_1 = T80_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
      T52_0 = T36_0;
      T52_1 = T36_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
    indexF6 = T52_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1310
    fkey_ = T52_1;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1311
    T8 = primitive_idQ(fkey_,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1311
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1316
      T10 = Ktry_to_puthash_newVKiI(T16, T17, hstate_, indexF6, T203, T199);
      T11 = T10;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1313
      T9 = Ktry_to_puthash_oldVKiI(T16, T17, indexF6, T199);
      T11 = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1311
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1311
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1318
      T12_0 = T199;
      T15_0 = T12_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      T187 = SLOT_VALUE_INITD(T17, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      if (T187 != &KPfalseVKi) {
        T189 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        T188 = SLOT_VALUE_INITD(T16, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        T186 = primitive_idQ(T17,T188);
        T189 = T186;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      T190 = primitive_not(T189);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      if (T189 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        T191 = SLOT_VALUE_INITD(T16, 7);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        T192 = primitive_mps_ld_isstale(T191);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        T193 = primitive_machine_word_shift_left_signal_overflow(T192,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        T194 = primitive_machine_word_logior(T193,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        T195 = primitive_machine_word_less_thanQ(1,T194);
        T196 = T195;
      } else {
        T196 = T190;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      if (T196 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1322
        T13 = KfullQVKiI(T16);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1322
        Krehash_tableVKeI(T201, T16, T13);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1323
        T14 = KfullQVKiI(T16);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
        if (T14 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1324
          Krehash_tableVKeI(T201, T16, &KPtrueVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1321
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
      new_valueF198T = new_value_;
      tableF200T = table_;
      keyF202T = key_;
      goto L0;
      T15_0 = T197_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1311
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1326
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1303
  MV_SET_COUNT(1);
  return(T15_0);
}

D Krehash_tableVKeI (D table_, D tv_, D growQ_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D rehash_tv_;
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
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
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
  D T41_0;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  DWORD T56;
  DWORD T57;
  D T58;
  DWORD T59;
  DWORD T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  D T67;
  D res_;
  D T69;
  D T70;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75_0;
  D T76;
  D T77;
  D T78;
  D T79;
  _KLsimple_object_vectorGVKd_2 T80 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T81;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:819
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T17 = SLOT_VALUE_INITD(tv_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T22 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T23 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T24 = primitive_idQ(T23,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T25 = primitive_not(T24);
    T21 = T25;
  } else {
    T21 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T26 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T27_0 = KmemberQVKdMM3I(&KJlock_, T26, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T28 = T27_0;
    T29 = T28;
  } else {
    T29 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T30 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T18 = MAKE_CLOSURE_INITD(&Kanonymous_of_rehash_tableF345, 1, T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    CALL1(T30, T18);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T19 = primitive_wait_for_simple_lock(T17);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T32 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T33 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T34 = primitive_idQ(T33,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T35 = primitive_not(T34);
    T31 = T35;
  } else {
    T31 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T36 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T37_0 = KmemberQVKdMM3I(&KJlock_, T36, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T38 = T37_0;
    T39 = T38;
  } else {
    T39 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T39 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T40 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T20 = MAKE_CLOSURE_INITD(&Kanonymous_of_rehash_tableF344, 2, T19, T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    CALL1(T40, T20);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T42 = primitive_idQ(T19,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T42 != &KPfalseVKi) {
    T46 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T43 = primitive_idQ(T19,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    if (T43 != &KPfalseVKi) {
      T45 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T41_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T17, T19);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T44 = T41_0;
      T45 = T44;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T46 = T45;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T46 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    ENTER_UNWIND_FRAME(T4);
    if (!nlx_setjmp(FRAME_DEST(T4))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:822
      T47 = SLOT_VALUE_INITD(table_, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:822
      T5 = primitive_idQ(tv_,T47);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:822
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:823
        Kmark_rehashingVKiI(tv_);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:824
        T48 = SLOT_VALUE_INITD(tv_, 9);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:824
        T49 = SLOT_VALUE_INITD(tv_, 8);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:824
        T6 = primitive_idQ(T48,T49);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:824
        T50 = primitive_not(T6);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
        if (growQ_ != &KPfalseVKi) {
          T7 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
          T51 = Trehash_table_vectors_in_placeQTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
          if (T51 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
            T54 = SLOT_VALUE_INITD(tv_, 10);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
            T55 = primitive_idQ(T54,(D) 1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
            if (T55 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T52 = Tin_place_rehash_countTVKi;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T56 = primitive_cast_integer_as_raw(T52);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T57 = primitive_machine_word_add_signal_overflow(T56,4);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T58 = primitive_cast_raw_as_integer(T57);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              Tin_place_rehash_countTVKi = T58;
              T62 = &KPtrueVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T53 = Tpunted_in_place_rehash_countTVKi;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T59 = primitive_cast_integer_as_raw(T53);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T60 = primitive_machine_word_add_signal_overflow(T59,4);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              T61 = primitive_cast_raw_as_integer(T60);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
              Tpunted_in_place_rehash_countTVKi = T61;
              T62 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
            T63 = T62;
          } else {
            T63 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
          T7 = T63;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
        if (T7 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:826
          T8 = Krehash_in_placeVKiI(table_, tv_, T50);
          T12 = T8;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:829
          T9 = Krehash_entry_countVKiI(table_, tv_, growQ_);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:830
          T64 = SLOT_VALUE_INITD(tv_, 1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:831
          T65 = SLOT_VALUE_INITD(tv_, 2);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:833
          T66 = SLOT_VALUE_INITD(table_, 4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:829
          rehash_tv_ = Kmake_table_vectorVKiI(T9, T64, T65, T17, T50, T66);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:834
          T11 = Krehash_into_copyVKiI(table_, tv_, rehash_tv_);
          T12 = T11;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:825
        T14 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:822
        T13 = &KPfalseVKi;
        T14 = T13;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:822
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      FALL_THROUGH_UNWIND(T14);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T70 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    if (T70 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T71 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T72 = primitive_idQ(T71,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T73 = primitive_not(T72);
      T69 = T73;
    } else {
      T69 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    if (T69 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T74 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T75_0 = KmemberQVKdMM3I(&KJlock_, T74, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T76 = T75_0;
      T77 = T76;
    } else {
      T77 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    if (T77 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T78 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      T67 = MAKE_CLOSURE_INITD(&Kanonymous_of_rehash_tableF343, 1, T17);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      CALL1(T78, T67);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    res_ = primitive_release_simple_lock(T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T79 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    if (T79 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
      Klock_release_result_errorYthreads_internalVdylanMM0I(T17, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    CONTINUE_UNWIND();
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T80.vector_element_[0] = &KJsynchronization_;
    T80.vector_element_[1] = T17;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T15 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T80);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T81 = KsignalVKdMM0I(T15, &KPempty_vectorVKi);
    T16 = T81;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:819
  MV_SET_COUNT(0);
  return(T16);
}

D Ktry_to_puthash_newVKiI (D tv_, D token_, D hstate_, D index_, D key_, D new_value_) {
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16;
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T39;
  D T40;
  D T41;
  D T42_0;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  DADDR T50;
  D T51;
  D T52;
  DWORD T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  DSINT T61;
  DWORD T62;
  DWORD T63;
  D T64;
  D T65;
  D T66;
  DWORD T67;
  DWORD T68;
  D T69;
  D T70;
  D T71;
  D res_;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79_0;
  D T80;
  D T81;
  D T82;
  D T83;
  _KLsimple_object_vectorGVKd_2 T84 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T85_0;
  D T86_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1227
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T18 = SLOT_VALUE_INITD(tv_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T23 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T25 = primitive_idQ(T24,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T26 = primitive_not(T25);
    T22 = T26;
  } else {
    T22 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T27 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T28_0 = KmemberQVKdMM3I(&KJlock_, T27, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T29 = T28_0;
    T30 = T29;
  } else {
    T30 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T31 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T19 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_puthash_newF285, 1, T18);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    CALL1(T31, T19);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T20 = primitive_wait_for_simple_lock(T18);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T33 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T33 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T34 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T35 = primitive_idQ(T34,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T36 = primitive_not(T35);
    T32 = T36;
  } else {
    T32 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T37 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T38_0 = KmemberQVKdMM3I(&KJlock_, T37, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T39 = T38_0;
    T40 = T39;
  } else {
    T40 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T40 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T41 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T21 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_puthash_newF284, 2, T20, T18);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    CALL1(T41, T21);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T43 = primitive_idQ(T20,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T43 != &KPfalseVKi) {
    T47 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T44 = primitive_idQ(T20,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    if (T44 != &KPfalseVKi) {
      T46 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T42_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T18, T20);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T45 = T42_0;
      T46 = T45;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T47 = T46;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T47 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    ENTER_UNWIND_FRAME(T7);
    if (!nlx_setjmp(FRAME_DEST(T7))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1236
      T48 = SLOT_VALUE_INITD(tv_, 7);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1236
      primitive_mps_ld_merge(T48,hstate_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1261
      T49 = SLOT_VALUE_INITD(tv_, 8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      T53 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      T52 = REPEATED_D_SLOT_VALUE_TAGGED(T49, 2, T53);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      T50 = primitive_cast_pointer_as_raw(T52);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      T51 = primitive_machine_word_equalQ(T50,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      if (T51 != &KPfalseVKi) {
        T54 = Dtable_entry_deletedVKi;
      } else {
        T54 = T52;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      T8 = primitive_idQ(T54,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1263
        T9 = KfullQVKiI(tv_);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1263
        T55 = primitive_not(T9);
        T10 = T55;
      } else {
        T10 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1264
        T57 = SLOT_VALUE_INITD(token_, 0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1264
        if (T57 != &KPfalseVKi) {
          T59 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1264
          T58 = SLOT_VALUE_INITD(tv_, 3);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1264
          T56 = primitive_idQ(token_,T58);
          T59 = T56;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1264
        T11 = T59;
      } else {
        T11 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1265
        T60 = SLOT_VALUE_INITD(tv_, 7);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1265
        T61 = primitive_mps_ld_isstale(T60);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1265
        T62 = primitive_machine_word_shift_left_signal_overflow(T61,2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1265
        T63 = primitive_machine_word_logior(T62,1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1265
        T64 = primitive_machine_word_less_thanQ(1,T63);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1265
        T65 = primitive_not(T64);
        T12 = T65;
      } else {
        T12 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1266
        T66 = SLOT_VALUE_INITD(tv_, 4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1266
        T67 = primitive_cast_integer_as_raw(T66);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1266
        T68 = primitive_machine_word_add_signal_overflow(T67,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1266
        T69 = primitive_cast_raw_as_integer(T68);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1266
        SLOT_VALUE_SETTER(T69, tv_, 4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1267
        T70 = SLOT_VALUE_INITD(tv_, 9);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1267
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T70, 2, T53);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1271
        primitive_synchronize_side_effects();
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1272
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(key_, T49, 2, T53);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1273
        T13_0 = &KPtrueVKi;
        T15_0 = T13_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1275
        T14_0 = &KPfalseVKi;
        T15_0 = T14_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1262
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      FALL_THROUGH_UNWIND(T15_0);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T74 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    if (T74 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T75 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T76 = primitive_idQ(T75,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T77 = primitive_not(T76);
      T73 = T77;
    } else {
      T73 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    if (T73 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T78 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T79_0 = KmemberQVKdMM3I(&KJlock_, T78, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T80 = T79_0;
      T81 = T80;
    } else {
      T81 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    if (T81 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T82 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      T71 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_puthash_newF283, 1, T18);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      CALL1(T82, T71);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    res_ = primitive_release_simple_lock(T18);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T83 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    if (T83 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
      Klock_release_result_errorYthreads_internalVdylanMM0I(T18, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    CONTINUE_UNWIND();
    T17_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T84.vector_element_[0] = &KJsynchronization_;
    T84.vector_element_[1] = T18;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T16 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T84);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T85_0 = KsignalVKdMM0I(T16, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T86_0 = T85_0;
    T17_0 = T86_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1227
  MV_SET_COUNT(1);
  return(T17_0);
}

D KfullQVKiI (D tv_) {
  D T1;
  D T2;
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:455
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:457
  T1 = SLOT_VALUE_INITD(tv_, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:457
  T2 = SLOT_VALUE_INITD(tv_, 5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:457
  T5 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:457
  T6 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:457
  T7 = primitive_machine_word_less_thanQ(T5,T6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:457
  T4 = primitive_not(T7);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:457
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:455
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kmake_initial_stateVKiI (D table_) {
  D T2_0;
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DSINT T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  D T17_0;
  D tableF18T, tableF18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D state_;
  D T25_0;
  _KLsimple_object_vectorGVKd_12 T26 = {&KLsimple_object_vectorGVKdW, (D) 49};

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1700
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1712
  tableF18T = table_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1712
    tableF18 = tableF18T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1712
    T19 = tableF18;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1702
    T4 = SLOT_VALUE_INITD(T19, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1703
    T5 = SLOT_VALUE_INITD(T4, 3);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    T7 = SLOT_VALUE_INITD(T5, 0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    if (T7 != &KPfalseVKi) {
      T9 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
      T8 = SLOT_VALUE_INITD(T4, 3);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
      T6 = primitive_idQ(T5,T8);
      T9 = T6;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    T10 = primitive_not(T9);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
      T11 = SLOT_VALUE_INITD(T4, 7);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
      T12 = primitive_mps_ld_isstale(T11);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
      T13 = primitive_machine_word_shift_left_signal_overflow(T12,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
      T14 = primitive_machine_word_logior(T13,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
      T15 = primitive_machine_word_less_thanQ(1,T14);
      T16 = T15;
    } else {
      T16 = T10;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1711
      Krehash_tableVKeI(T19, T4, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1712
      tableF18T = table_;
      goto L0;
      T3_0 = T17_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1714
      Kincrement_iteration_state_referencesVKiI(T4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1719
      T20 = SLOT_VALUE_INITD(T4, 8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1719
      T21 = SLOT_VALUE_INITD(T20, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1720
      T22 = SLOT_VALUE_INITD(T4, 4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1721
      T23 = SLOT_VALUE_INITD(T4, 6);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1715
      T26.vector_element_[0] = &KJvector_;
      T26.vector_element_[1] = T4;
      T26.vector_element_[2] = &KJtoken_;
      T26.vector_element_[3] = T5;
      T26.vector_element_[4] = &KJkey_;
      T26.vector_element_[5] = &KPfalseVKi;
      T26.vector_element_[6] = IKJindex_;
      T26.vector_element_[7] = T21;
      T26.vector_element_[8] = IKJadditions_;
      T26.vector_element_[9] = T22;
      T26.vector_element_[10] = IKJdeletions_;
      T26.vector_element_[11] = T23;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1715
      T25_0 = KLiteration_stateGZ32ZconstructorVKiMM0I(&KLiteration_stateGVKi, &T26, T4, T5, &KPfalseVKi, T21, (D) 1, T22, T23);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1715
      state_ = T25_0;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1723
      T2_0 = Ktable_next_stateVKiI(T19, state_);
      T3_0 = T2_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1704
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1712
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1700
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ktable_next_stateVKiI (D table_, D state_) {
  D T3_0;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D Utmp_;
  D T12;
  D T13;
  DADDR T14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD indexF20T, indexF20;
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1552
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1555
  T4 = SLOT_VALUE_INITD(state_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1555
  T5 = SLOT_VALUE_INITD(T4, 8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1556
  T6 = SLOT_VALUE_INITD(state_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1557
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1557
  T8 = primitive_machine_word_less_thanQ(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1557
  if (T8 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1575
    T9 = primitive_cast_integer_as_raw(T6);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1575
    T10 = primitive_machine_word_subtract_signal_overflow(T9,4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1567
    indexF20T = T10;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1567
      indexF20 = indexF20T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1559
      T25 = primitive_cast_raw_as_integer(indexF20);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1559
      T13 = primitive_machine_word_less_thanQ(indexF20,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1559
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1562
        SLOT_VALUE_SETTER(T25, state_, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1563
        Kdecrement_iteration_state_referencesVKiI(T4);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1565
        T16 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 2, indexF20);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1565
        T14 = primitive_cast_pointer_as_raw(T16);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1565
        T15 = primitive_machine_word_equalQ(T14,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1565
        if (T15 != &KPfalseVKi) {
          T17 = Dtable_entry_deletedVKi;
        } else {
          T17 = T16;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1565
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1566
        Utmp_ = primitive_idQ(T17,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1566
        if (Utmp_ != &KPfalseVKi) {
          T12 = Utmp_;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1566
          T18 = primitive_idQ(T17,Dtable_entry_deletedVKi);
          T12 = T18;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1566
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1566
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1567
          T19 = primitive_machine_word_subtract_signal_overflow(indexF20,4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1567
          indexF20T = T19;
          goto L0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1569
          SLOT_VALUE_SETTER(T25, state_, 3);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1570
          SLOT_VALUE_SETTER(T17, state_, 2);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1571
          T21 = SLOT_VALUE_INITD(state_, 4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1571
          T22 = primitive_cast_integer_as_raw(T21);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1571
          T23 = primitive_machine_word_add_signal_overflow(T22,4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1571
          T24 = primitive_cast_raw_as_integer(T23);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1571
          SLOT_VALUE_SETTER(T24, state_, 4);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1566
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1559
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1567
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1557
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1577
  T3_0 = state_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1552
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ktable_current_keyVKiI (D table_, D state_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1600
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1603
  T4 = SLOT_VALUE_INITD(state_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1603
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1603
  T6 = primitive_machine_word_less_thanQ(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1603
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1604
    T2 = Kexhausted_iterationVKiI(table_);
    T3 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1606
    T7 = SLOT_VALUE_INITD(state_, 2);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1606
    T8 = T7;
    MV_SET_ELT(0, T7);
    MV_SET_COUNT(1);
    T3 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1603
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1600
  return(T3);
}

D Ktable_copy_stateVKiI (D table_, D state_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;
  _KLsimple_object_vectorGVKd_14 T11 = {&KLsimple_object_vectorGVKdW, (D) 57};

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1685
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1688
  T3 = SLOT_VALUE_INITD(state_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1689
  Kincrement_iteration_state_referencesVKiI(T3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1692
  T4 = SLOT_VALUE_INITD(state_, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1693
  T5 = SLOT_VALUE_INITD(state_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1694
  T6 = SLOT_VALUE_INITD(state_, 2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1695
  T7 = SLOT_VALUE_INITD(state_, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1696
  T8 = SLOT_VALUE_INITD(state_, 5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1697
  T9 = SLOT_VALUE_INITD(state_, 6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1690
  T11.vector_element_[0] = &KJvector_;
  T11.vector_element_[1] = T3;
  T11.vector_element_[2] = &KJtoken_;
  T11.vector_element_[3] = T4;
  T11.vector_element_[4] = IKJindex_;
  T11.vector_element_[5] = T5;
  T11.vector_element_[6] = &KJkey_;
  T11.vector_element_[7] = T6;
  T11.vector_element_[8] = &KJcount_;
  T11.vector_element_[9] = T7;
  T11.vector_element_[10] = IKJadditions_;
  T11.vector_element_[11] = T8;
  T11.vector_element_[12] = IKJdeletions_;
  T11.vector_element_[13] = T9;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1690
  T10_0 = KLiteration_stateGZ32ZconstructorVKiMM0I(&KLiteration_stateGVKi, &T11, T3, T4, T6, T5, T7, T8, T9);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1685
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kremove_all_keysXVKeMM0I (D table_) {
  volatile D T2;
  volatile D T3;
  volatile D T4;
  volatile D T5;
  volatile D new_;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10;
  volatile D T11;
  volatile D T12;
  volatile D T13;
  volatile DWORD T14;
  volatile D T15;
  volatile D T16;
  volatile D T17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile D T23;
  volatile D T24;
  volatile D T25;
  volatile D T26_0;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile D T30;
  volatile D T31;
  volatile D T32;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D T36_0;
  volatile D T37;
  volatile D T38;
  volatile D T39;
  volatile D T40_0;
  volatile D T41;
  volatile D T42;
  volatile D T43;
  volatile D T44;
  volatile D T45;
  volatile D T46;
  volatile D T47;
  volatile D T48;
  volatile D T49;
  volatile D T50;
  volatile DWORD T51;
  volatile DWORD T52;
  volatile D T53;
  volatile DWORD T54;
  volatile DWORD T55;
  volatile D T56;
  volatile D T57;
  volatile D T58;
  volatile D T59;
  volatile D resF60;
  volatile D T61;
  volatile D T62;
  volatile D T63;
  volatile D T64;
  volatile D T65;
  volatile D T66;
  volatile D T67_0;
  volatile D T68;
  volatile D T69;
  volatile D T70;
  volatile D T71;
  volatile _KLsimple_object_vectorGVKd_2 T72 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T73;
  volatile D T74;
  volatile D T75;
  volatile D T76;
  volatile D T77;
  volatile D T78;
  volatile D T79;
  volatile D T80;
  volatile D T81;
  volatile D T82;
  volatile D T83;
  volatile D T84;
  volatile D T85;
  volatile D T86;
  volatile D T87;
  volatile D T88;
  volatile D T89;
  volatile D T90;
  volatile D T91;
  volatile D T92;
  volatile D T93;
  volatile D T94;
  volatile D T95;
  volatile D T96;
  volatile D T97;
  volatile D T98;
  volatile D T99;
  volatile D T100_0;
  volatile D T101;
  volatile D T102;
  volatile D T103;
  volatile D T104;
  volatile D T105;
  volatile D T106;
  volatile D T107;
  volatile D T108;
  volatile D T109;
  volatile D T110_0;
  volatile D T111;
  volatile D T112;
  volatile D T113;
  volatile D T114_0;
  volatile D T115;
  volatile D T116;
  volatile D T117;
  volatile D T118;
  volatile D T119;
  volatile D T120;
  volatile D T121;
  volatile D resF122;
  volatile D T123;
  volatile D T124;
  volatile D T125;
  volatile D T126;
  volatile D T127;
  volatile D T128;
  volatile D T129_0;
  volatile D T130;
  volatile D T131;
  volatile D T132;
  volatile D T133;
  volatile _KLsimple_object_vectorGVKd_2 T134 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T135;
  volatile D T136;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1413
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1414
  T12 = SLOT_VALUE_INITD(table_, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1415
  T13 = SLOT_VALUE_INITD(T12, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1415
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1415
  T15 = primitive_machine_word_equalQ(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1415
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1415
    T10 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T11 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T16 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T21 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T22 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T23 = primitive_idQ(T22,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T24 = primitive_not(T23);
      T20 = T24;
    } else {
      T20 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T25 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T26_0 = KmemberQVKdMM3I(&KJlock_, T25, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T27 = T26_0;
      T28 = T27;
    } else {
      T28 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T29 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T17 = MAKE_CLOSURE_INITD(&Kanonymous_of_remove_all_keysXF145, 1, T16);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      CALL1(T29, T17);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T18 = primitive_wait_for_simple_lock(T16);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T31 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T31 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T32 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T33 = primitive_idQ(T32,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T34 = primitive_not(T33);
      T30 = T34;
    } else {
      T30 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T30 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T35 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T36_0 = KmemberQVKdMM3I(&KJlock_, T35, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T37 = T36_0;
      T38 = T37;
    } else {
      T38 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T39 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T19 = MAKE_CLOSURE_INITD(&Kanonymous_of_remove_all_keysXF144, 2, T18, T16);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      CALL1(T39, T19);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T41 = primitive_idQ(T18,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T41 != &KPfalseVKi) {
      T45 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T42 = primitive_idQ(T18,(D) 5);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      if (T42 != &KPfalseVKi) {
        T44 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T40_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T16, T18);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T43 = T40_0;
        T44 = T43;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T45 = T44;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T45 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      ENTER_UNWIND_FRAME(T2);
      if (!nlx_setjmp(FRAME_DEST(T2))) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
        T46 = Trehash_table_vectors_in_placeQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
        if (T46 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
          T49 = SLOT_VALUE_INITD(T12, 10);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
          T50 = primitive_idQ(T49,(D) 1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
          if (T50 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T47 = Tin_place_rehash_countTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T51 = primitive_cast_integer_as_raw(T47);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T52 = primitive_machine_word_add_signal_overflow(T51,4);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T53 = primitive_cast_raw_as_integer(T52);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            Tin_place_rehash_countTVKi = T53;
            T57 = &KPtrueVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T48 = Tpunted_in_place_rehash_countTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T54 = primitive_cast_integer_as_raw(T48);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T55 = primitive_machine_word_add_signal_overflow(T54,4);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            T56 = primitive_cast_raw_as_integer(T55);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
            Tpunted_in_place_rehash_countTVKi = T56;
            T57 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
          T58 = T57;
        } else {
          T58 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
        if (T58 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1418
          Kclear_table_vectorXVKiMM0I(T12);
          T3 = &KPtrueVKi;
        } else {
          T3 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1417
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        FALL_THROUGH_UNWIND(T3);
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T62 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      if (T62 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T63 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T64 = primitive_idQ(T63,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T65 = primitive_not(T64);
        T61 = T65;
      } else {
        T61 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      if (T61 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T66 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T67_0 = KmemberQVKdMM3I(&KJlock_, T66, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T68 = T67_0;
        T69 = T68;
      } else {
        T69 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      if (T69 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T70 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        T59 = MAKE_CLOSURE_INITD(&Kanonymous_of_remove_all_keysXF143, 1, T16);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        CALL1(T70, T59);
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      resF60 = primitive_release_simple_lock(T16);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T71 = primitive_idQ(resF60,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      if (T71 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
        Klock_release_result_errorYthreads_internalVdylanMM0I(T16, resF60);
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      CONTINUE_UNWIND();
      T5 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T72.vector_element_[0] = &KJsynchronization_;
      T72.vector_element_[1] = T16;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T4 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T72);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T73 = KsignalVKdMM0I(T4, &KPempty_vectorVKi);
      T5 = T73;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
      T8 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T9 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1422
      T74 = SLOT_VALUE_INITD(table_, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1423
      T75 = SLOT_VALUE_INITD(T12, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1424
      T76 = SLOT_VALUE_INITD(T12, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1426
      T77 = SLOT_VALUE_INITD(T12, 9);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1426
      T78 = SLOT_VALUE_INITD(T12, 8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1426
      T80 = primitive_idQ(T77,T78);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1426
      T79 = primitive_not(T80);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1427
      T81 = SLOT_VALUE_INITD(table_, 4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1422
      new_ = Kmake_table_vectorVKiI(T74, T75, T76, T16, T79, T81);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1439
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1429
        T89 = SLOT_VALUE_INITD(table_, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        T90 = SLOT_VALUE_INITD(T89, 0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        T95 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T95 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T96 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T97 = primitive_idQ(T96,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T98 = primitive_not(T97);
          T94 = T98;
        } else {
          T94 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T94 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T99 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T100_0 = KmemberQVKdMM3I(&KJlock_, T99, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T101 = T100_0;
          T102 = T101;
        } else {
          T102 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T102 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T103 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T91 = MAKE_CLOSURE_INITD(&Kanonymous_of_remove_all_keysXF141, 1, T90);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          CALL1(T103, T91);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        T92 = primitive_wait_for_simple_lock(T90);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        T105 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T105 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T106 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T107 = primitive_idQ(T106,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T108 = primitive_not(T107);
          T104 = T108;
        } else {
          T104 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T104 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T109 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T110_0 = KmemberQVKdMM3I(&KJlock_, T109, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T111 = T110_0;
          T112 = T111;
        } else {
          T112 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T112 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T113 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T93 = MAKE_CLOSURE_INITD(&Kanonymous_of_remove_all_keysXF139, 2, T92, T90);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          CALL1(T113, T93);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        T115 = primitive_idQ(T92,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T115 != &KPfalseVKi) {
          T119 = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T116 = primitive_idQ(T92,(D) 5);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          if (T116 != &KPfalseVKi) {
            T118 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T114_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T90, T92);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T117 = T114_0;
            T118 = T117;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T119 = T118;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        if (T119 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          ENTER_UNWIND_FRAME(T82);
          if (!nlx_setjmp(FRAME_DEST(T82))) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1431
            T120 = SLOT_VALUE_INITD(table_, 1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1431
            T83 = primitive_idQ(T89,T120);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1431
            if (T83 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1432
              Kmark_rehashingVKiI(T89);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1433
              SLOT_VALUE_SETTER(new_, table_, 1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1434
              T84 = &KPtrueVKi;
              MV_SET_ELT(0, &KPtrueVKi);
              MV_SET_COUNT(1);
              T86 = T84;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:1435
              T85 = &KPfalseVKi;
              MV_SET_ELT(0, &KPfalseVKi);
              MV_SET_COUNT(1);
              T86 = T85;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1431
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            FALL_THROUGH_UNWIND(T86);
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T124 = TdebuggingQTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          if (T124 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T125 = Tdebug_partsTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T126 = primitive_idQ(T125,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T127 = primitive_not(T126);
            T123 = T127;
          } else {
            T123 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          if (T123 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T128 = Tdebug_partsTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T129_0 = KmemberQVKdMM3I(&KJlock_, T128, &KPempty_vectorVKi, &KEEVKd);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T130 = T129_0;
            T131 = T130;
          } else {
            T131 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          if (T131 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T132 = Tdebug_out_functionTVKi;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            T121 = MAKE_CLOSURE_INITD(&Kanonymous_of_remove_all_keysXF136, 1, T90);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            CALL1(T132, T121);
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          resF122 = primitive_release_simple_lock(T90);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T133 = primitive_idQ(resF122,(D) 1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          if (T133 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
            Klock_release_result_errorYthreads_internalVdylanMM0I(T90, resF122);
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          CONTINUE_UNWIND();
          T88 = T86;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T134.vector_element_[0] = &KJsynchronization_;
          T134.vector_element_[1] = T90;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T87 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T134);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
          T135 = KsignalVKdMM0I(T87, &KPempty_vectorVKi);
          T88 = T135;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1439
        T136 = T88;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1439
        if (T136 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1439
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1439
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1439
        T7 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1439
      T9 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T11 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1415
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1413
  return(T11);
}

static D Kanonymous_of_remove_all_keysXF145I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_remove_all_keysXF144I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_remove_all_keysXF143I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1416
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_remove_all_keysXF141I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_remove_all_keysXF139I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_remove_all_keysXF136I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1430
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kclear_table_vectorXVKiMM0I (D tv_) {
  DWORD iF2T, iF2;
  DWORD iF3T, iF3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  DWORD T16;
  D T17;
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:776
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:777
  SLOT_VALUE_SETTER((D) 1, tv_, 6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:778
  SLOT_VALUE_SETTER((D) 1, tv_, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:779
  T6 = SLOT_VALUE_INITD(tv_, 8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
  T7 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
  iF2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
    iF2 = iF2T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
    T9 = primitive_machine_word_less_thanQ(iF2,T8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:781
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(Dtable_entry_emptyVKi, T6, 2, iF2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
      T10 = primitive_machine_word_add_signal_overflow(iF2,4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
      iF2T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:780
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:783
  T11 = SLOT_VALUE_INITD(tv_, 9);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:784
  T12 = primitive_idQ(T11,T6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:784
  if (T12 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
    T13 = SLOT_VALUE_INITD(T11, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
    T14 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
    iF3T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
      iF3 = iF3T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
      T15 = primitive_machine_word_less_thanQ(iF3,T14);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:786
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(Dtable_entry_emptyVKi, T11, 2, iF3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
        T16 = primitive_machine_word_add_signal_overflow(iF3,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
        iF3T = T16;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:785
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:784
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:789
  T18_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:789
  T17 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:789
  SLOT_VALUE_SETTER(T17, tv_, 7);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:790
  primitive_synchronize_side_effects();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:791
  T4 = Kmake_rehash_tokenVKiI(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:791
  SLOT_VALUE_SETTER(T4, tv_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:791
  T5 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:776
  MV_SET_COUNT(0);
  return(T5);
}

D Kmark_rehashingVKiI (D tv_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:841
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:843
  T1 = SLOT_VALUE_INITD(tv_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:843
  SLOT_VALUE_SETTER(&KPtrueVKi, T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:845
  primitive_synchronize_side_effects();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:845
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:841
  MV_SET_COUNT(0);
  return(T2);
}

D Kmake_rehash_tokenVKiI (D rehashQ_) {
  D T2_0;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:250
  T3.vector_element_[0] = IKJrehashingQ_;
  T3.vector_element_[1] = rehashQ_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:250
  T2_0 = KLrehash_tokenGZ32ZconstructorVKiMM0I(&KLrehash_tokenGVKi, &T3, rehashQ_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:248
  MV_SET_COUNT(1);
  return(T2_0);
}

D KLrehash_tokenGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_rehashingQ_) {
  D T4;
  D Uunique_rehashingQF5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:241
  T4 = primitive_object_allocate_filled(2,&KLrehash_tokenGVKiW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_rehashingQF5 = Uunique_rehashingQ_;
  SLOT_VALUE_SETTER(Uunique_rehashingQF5, T4, 0);
  T6_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:241
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLiteration_stateGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_source_, D Uunique_token_, D Uunique_state_key_, D Uunique_state_index_, D Uunique_state_count_, D Uunique_state_initial_additions_, D Uunique_state_initial_deletions_) {
  D T10;
  D Uunique_sourceF11;
  D T12;
  D Uunique_tokenF13;
  D T14;
  D Uunique_state_keyF15;
  D T16;
  D Uunique_state_indexF17;
  D T18;
  D Uunique_state_initial_additionsF19;
  D T20;
  D Uunique_state_initial_deletionsF21;
  D T22;
  D Uunique_sourceF23;
  D Uunique_tokenF24;
  D Uunique_state_indexF25;
  D Uunique_state_countF26;
  D Uunique_state_initial_additionsF27;
  D Uunique_state_initial_deletionsF28;
  D T29_0;
  D T30;
  _KLsimple_object_vectorGVKd_1 T31 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T32;
  D T33;
  _KLsimple_object_vectorGVKd_1 T34 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_1 T37 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T38;
  D T39;
  _KLsimple_object_vectorGVKd_1 T40 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T41;
  D T42;
  _KLsimple_object_vectorGVKd_1 T43 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T44;
  D T45;
  _KLsimple_object_vectorGVKd_1 T46 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T47;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  T30 = primitive_idQ(Uunique_source_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  if (T30 != &KPfalseVKi) {
    T31.vector_element_[0] = &KJvector_;
    T32 = KerrorVKdMM1I(&K151, &T31);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
    T10 = T32;
    Uunique_sourceF11 = T10;
  } else {
    Uunique_sourceF11 = Uunique_source_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  T33 = primitive_idQ(Uunique_token_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  if (T33 != &KPfalseVKi) {
    T34.vector_element_[0] = &KJtoken_;
    T35 = KerrorVKdMM1I(&K151, &T34);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
    T12 = T35;
    Uunique_tokenF13 = T12;
  } else {
    Uunique_tokenF13 = Uunique_token_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  T36 = primitive_idQ(Uunique_state_key_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  if (T36 != &KPfalseVKi) {
    T37.vector_element_[0] = &KJkey_;
    T38 = KerrorVKdMM1I(&K151, &T37);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
    T14 = T38;
    Uunique_state_keyF15 = T14;
  } else {
    Uunique_state_keyF15 = Uunique_state_key_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  T39 = primitive_idQ(Uunique_state_index_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  if (T39 != &KPfalseVKi) {
    T40.vector_element_[0] = IKJindex_;
    T41 = KerrorVKdMM1I(&K151, &T40);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
    T16 = T41;
    Uunique_state_indexF17 = T16;
  } else {
    Uunique_state_indexF17 = Uunique_state_index_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  T42 = primitive_idQ(Uunique_state_initial_additions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  if (T42 != &KPfalseVKi) {
    T43.vector_element_[0] = IKJadditions_;
    T44 = KerrorVKdMM1I(&K151, &T43);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
    T18 = T44;
    Uunique_state_initial_additionsF19 = T18;
  } else {
    Uunique_state_initial_additionsF19 = Uunique_state_initial_additions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  T45 = primitive_idQ(Uunique_state_initial_deletions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  if (T45 != &KPfalseVKi) {
    T46.vector_element_[0] = IKJdeletions_;
    T47 = KerrorVKdMM1I(&K151, &T46);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
    T20 = T47;
    Uunique_state_initial_deletionsF21 = T20;
  } else {
    Uunique_state_initial_deletionsF21 = Uunique_state_initial_deletions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  T22 = primitive_object_allocate_filled(8,&KLiteration_stateGVKiW,7,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_sourceF23 = Uunique_sourceF11;
  SLOT_VALUE_SETTER(Uunique_sourceF23, T22, 0);
  Uunique_tokenF24 = Uunique_tokenF13;
  SLOT_VALUE_SETTER(Uunique_tokenF24, T22, 1);
  SLOT_VALUE_SETTER(Uunique_state_keyF15, T22, 2);
  Uunique_state_indexF25 = Uunique_state_indexF17;
  SLOT_VALUE_SETTER(Uunique_state_indexF25, T22, 3);
  Uunique_state_countF26 = Uunique_state_count_;
  SLOT_VALUE_SETTER(Uunique_state_countF26, T22, 4);
  Uunique_state_initial_additionsF27 = Uunique_state_initial_additionsF19;
  SLOT_VALUE_SETTER(Uunique_state_initial_additionsF27, T22, 5);
  Uunique_state_initial_deletionsF28 = Uunique_state_initial_deletionsF21;
  SLOT_VALUE_SETTER(Uunique_state_initial_deletionsF28, T22, 6);
  T29_0 = T22;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1519
  MV_SET_COUNT(1);
  return(T29_0);
}

D Kincrement_iteration_state_referencesVKiI (D tv_) {
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
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  D T44;
  D res_;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52_0;
  D T53;
  D T54;
  D T55;
  D T56;
  _KLsimple_object_vectorGVKd_2 T57 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T58;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:468
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T8 = SLOT_VALUE_INITD(tv_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T13 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T15 = primitive_idQ(T14,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T16 = primitive_not(T15);
    T12 = T16;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T17 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T18_0 = KmemberQVKdMM3I(&KJlock_, T17, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T19 = T18_0;
    T20 = T19;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T21 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_increment_iteration_state_referencesF227, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    CALL1(T21, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T10 = primitive_wait_for_simple_lock(T8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T23 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T25 = primitive_idQ(T24,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T26 = primitive_not(T25);
    T22 = T26;
  } else {
    T22 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T27 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T28_0 = KmemberQVKdMM3I(&KJlock_, T27, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T29 = T28_0;
    T30 = T29;
  } else {
    T30 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T31 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_increment_iteration_state_referencesF226, 2, T10, T8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    CALL1(T31, T11);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T33 = primitive_idQ(T10,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T33 != &KPfalseVKi) {
    T37 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T34 = primitive_idQ(T10,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    if (T34 != &KPfalseVKi) {
      T36 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T8, T10);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T35 = T32_0;
      T36 = T35;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T37 = T36;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:470
      T38 = SLOT_VALUE_INITD(tv_, 10);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
      T39 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
      T40 = primitive_machine_word_less_thanQ(T39,0x7FFFFFFFFFFFFFFDL);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
        T41 = primitive_cast_integer_as_raw(T38);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
        T42 = primitive_machine_word_add_signal_overflow(T41,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
        T43 = primitive_cast_raw_as_integer(T42);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
        SLOT_VALUE_SETTER(T43, tv_, 10);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
        T3 = T43;
        MV_SET_ELT(0, T43);
        MV_SET_COUNT(1);
        T5 = T3;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
        T4 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T5 = T4;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:471
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      FALL_THROUGH_UNWIND(T5);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T47 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    if (T47 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T48 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T49 = primitive_idQ(T48,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T50 = primitive_not(T49);
      T46 = T50;
    } else {
      T46 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T51 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T52_0 = KmemberQVKdMM3I(&KJlock_, T51, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T53 = T52_0;
      T54 = T53;
    } else {
      T54 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    if (T54 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T55 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      T44 = MAKE_CLOSURE_INITD(&Kanonymous_of_increment_iteration_state_referencesF225, 1, T8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      CALL1(T55, T44);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    res_ = primitive_release_simple_lock(T8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T56 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    if (T56 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
      Klock_release_result_errorYthreads_internalVdylanMM0I(T8, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    CONTINUE_UNWIND();
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T57.vector_element_[0] = &KJsynchronization_;
    T57.vector_element_[1] = T8;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T57);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T58 = KsignalVKdMM0I(T6, &KPempty_vectorVKi);
    T7 = T58;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:468
  return(T7);
}

static D Kanonymous_of_increment_iteration_state_referencesF227I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_increment_iteration_state_referencesF226I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_increment_iteration_state_referencesF225I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:469
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kexhausted_iterationVKiI (D table_) {
  _KLsimple_object_vectorGVKd_1 T1 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1547
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1549
  T1.vector_element_[0] = table_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1549
  T2 = KerrorVKdMM1I(&K230, &T1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1547
  return(T2);
}

D Kdecrement_iteration_state_referencesVKiI (D tv_) {
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
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  D T44;
  D res_;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52_0;
  D T53;
  D T54;
  D T55;
  D T56;
  _KLsimple_object_vectorGVKd_2 T57 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T58;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:475
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T8 = SLOT_VALUE_INITD(tv_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T13 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T15 = primitive_idQ(T14,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T16 = primitive_not(T15);
    T12 = T16;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T17 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T18_0 = KmemberQVKdMM3I(&KJlock_, T17, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T19 = T18_0;
    T20 = T19;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T21 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_decrement_iteration_state_referencesF241, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    CALL1(T21, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T10 = primitive_wait_for_simple_lock(T8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T23 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T25 = primitive_idQ(T24,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T26 = primitive_not(T25);
    T22 = T26;
  } else {
    T22 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T27 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T28_0 = KmemberQVKdMM3I(&KJlock_, T27, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T29 = T28_0;
    T30 = T29;
  } else {
    T30 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T31 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_decrement_iteration_state_referencesF240, 2, T10, T8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    CALL1(T31, T11);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T33 = primitive_idQ(T10,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T33 != &KPfalseVKi) {
    T37 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T34 = primitive_idQ(T10,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    if (T34 != &KPfalseVKi) {
      T36 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T8, T10);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T35 = T32_0;
      T36 = T35;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T37 = T36;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:477
      T38 = SLOT_VALUE_INITD(tv_, 10);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
      T39 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
      T40 = primitive_machine_word_less_thanQ(T39,0x7FFFFFFFFFFFFFFDL);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
        T41 = primitive_cast_integer_as_raw(T38);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
        T42 = primitive_machine_word_subtract_signal_overflow(T41,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
        T43 = primitive_cast_raw_as_integer(T42);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
        SLOT_VALUE_SETTER(T43, tv_, 10);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
        T3 = T43;
        MV_SET_ELT(0, T43);
        MV_SET_COUNT(1);
        T5 = T3;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
        T4 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T5 = T4;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:478
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      FALL_THROUGH_UNWIND(T5);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T47 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    if (T47 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T48 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T49 = primitive_idQ(T48,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T50 = primitive_not(T49);
      T46 = T50;
    } else {
      T46 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T51 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T52_0 = KmemberQVKdMM3I(&KJlock_, T51, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T53 = T52_0;
      T54 = T53;
    } else {
      T54 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    if (T54 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T55 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      T44 = MAKE_CLOSURE_INITD(&Kanonymous_of_decrement_iteration_state_referencesF239, 1, T8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      CALL1(T55, T44);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    res_ = primitive_release_simple_lock(T8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T56 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    if (T56 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
      Klock_release_result_errorYthreads_internalVdylanMM0I(T8, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    CONTINUE_UNWIND();
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T57.vector_element_[0] = &KJsynchronization_;
    T57.vector_element_[1] = T8;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T57);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T58 = KsignalVKdMM0I(T6, &KPempty_vectorVKi);
    T7 = T58;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:475
  return(T7);
}

static D Kanonymous_of_decrement_iteration_state_referencesF241I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_decrement_iteration_state_referencesF240I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_decrement_iteration_state_referencesF239I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:476
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kslot_initializerF274I () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1055
  T0 = Kinitial_table_vectorVKiI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1055
  T1_0 = T0;
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kinitial_table_vectorVKiI () {
  D T0_0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:625
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:627
  T0_0 = Tinitial_table_vectorTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:625
  T1_0 = T0_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:625
  MV_SET_COUNT(1);
  return(T1_0);
}

static D Kanonymous_of_try_to_puthash_newF285I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_try_to_puthash_newF284I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_try_to_puthash_newF283I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1235
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_rehash_tableF345I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_rehash_tableF344I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_rehash_tableF343I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:821
  MV_SET_COUNT(1);
  return(T6_0);
}

D Krehash_in_placeVKiI (D table_, D tv_, D valuesQ_) {
  D T3;
  D T4_0;
  D T4_1;
  D countF5;
  D stateF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19;
  D T20_0;
  _KLsimple_object_vectorGVKd_2 T21 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27_0;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  DWORD iF35;
  D stateF36;
  DWORD countF37;
  DWORD T38;
  DADDR T39;
  D T40;
  D T41;
  D T42;
  DADDR T43;
  D T44;
  D T45;
  D T46;
  D UtmpF47;
  D T48;
  D idF49;
  D hstateF50;
  D jF51;
  D nxtkF52;
  D T53;
  D T54;
  D T55;
  D thread_hash_stateF56;
  D T57_0;
  D T57_1;
  D T58_0;
  D T58_1;
  D idF59;
  D hash_stateF60;
  D T61_0;
  D T61_1;
  D T62_0;
  D T62_1;
  D T63;
  D T64_0;
  D T64_1;
  D T65;
  D T66;
  D T67_0;
  D T68_0;
  D T68_1;
  D UtmpF69;
  D UtmpF70;
  D T71;
  D T72;
  D T73_0;
  D T73_1;
  DWORD rmremainderF74;
  DWORD T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  D T80;
  DADDR T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86;
  D T87_0;
  D T87_1;
  D T88_0;
  DWORD T89;
  D T90;
  D T91_0;
  D strideF92;
  D UtmpF93;
  D UtmpF94;
  D T95;
  D T96;
  D T97_0;
  D T97_1;
  DWORD T98;
  DWORD T99;
  DWORD T100;
  D T101;
  DWORD T102;
  DWORD T103;
  DWORD T104;
  DADDR T105;
  D T106;
  D T107;
  D T108;
  D T109;
  D T110;
  D T111;
  D T112_0;
  D T112_1;
  D T113_0;
  D T113_1;
  DWORD previous_indexF114T, previous_indexF114;
  DADDR T115;
  D T116;
  D T117;
  DWORD T118;
  D T119;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  D T123;
  D kF124T, kF124;
  D vF125T, vF125;
  DWORD countF126T, countF126;
  D stateF127T, stateF127;
  D T128;
  DWORD iF129T, iF129;
  D stateF130T, stateF130;
  DWORD countF131T, countF131;
  D T132;
  D T133;
  DWORD T134;
  DWORD T135;
  D T136;
  D T137_0;
  D T138;
  D T139;
  D T140;
  D T141;
  D T142;
  DWORD T143;
  D T144;
  DWORD iF145;
  D stateF146;
  DWORD countF147;
  DWORD T148;
  DADDR T149;
  D T150;
  D T151;
  D T152;
  D UtmpF153;
  D T154;
  D idF155;
  D hstateF156;
  D jF157;
  D nxtkF158;
  D T159;
  D T160;
  D T161;
  D thread_hash_stateF162;
  D T163_0;
  D T163_1;
  D T164_0;
  D T164_1;
  D idF165;
  D hash_stateF166;
  D T167_0;
  D T167_1;
  D T168_0;
  D T168_1;
  D T169;
  D T170_0;
  D T170_1;
  D T171;
  D T172;
  D T173_0;
  D T174_0;
  D T174_1;
  D UtmpF175;
  D UtmpF176;
  D T177;
  D T178;
  D T179_0;
  D T179_1;
  DWORD rmremainderF180;
  DWORD T181;
  DWORD T182;
  DWORD T183;
  DWORD T184;
  DWORD T185;
  D T186;
  DADDR T187;
  D T188;
  D T189;
  D T190;
  D T191;
  D T192;
  D T193_0;
  D T193_1;
  D T194_0;
  DWORD T195;
  D T196;
  D T197_0;
  D strideF198;
  D UtmpF199;
  D UtmpF200;
  D T201;
  D T202;
  D T203_0;
  D T203_1;
  DWORD T204;
  DWORD T205;
  DWORD T206;
  D T207;
  DWORD T208;
  DWORD T209;
  DWORD T210;
  DADDR T211;
  D T212;
  D T213;
  D T214;
  D T215;
  D T216;
  D T217;
  D T218_0;
  D T218_1;
  D T219_0;
  D T219_1;
  DWORD previous_indexF220T, previous_indexF220;
  DWORD T221;
  DWORD T222;
  D T223;
  D kF224T, kF224;
  DWORD countF225T, countF225;
  D stateF226T, stateF226;
  D T227;
  DWORD iF228T, iF228;
  D stateF229T, stateF229;
  DWORD countF230T, countF230;
  D T231;
  D T232;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:887
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:888
  T9 = SLOT_VALUE_INITD(tv_, 8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:888
  T10 = SLOT_VALUE_INITD(T9, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:890
  T11 = SLOT_VALUE_INITD(tv_, 11);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:890
  T12 = primitive_idQ(T11,Dempty_rehashed_bitsVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:890
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:892
    T13 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:892
    T14 = primitive_machine_word_logior(T13,29);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:892
    T15 = primitive_machine_word_shift_right(T14,3);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:892
    T16 = primitive_machine_word_logand(T15,-4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:892
    T17 = primitive_machine_word_logior(T16,1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:892
    T18 = primitive_cast_raw_as_integer(T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:891
    T21.vector_element_[0] = IKJsize_in_words_;
    T21.vector_element_[1] = T18;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:891
    T20_0 = KLrehashed_bitsGZ32ZconstructorVKiMM0I(&KLrehashed_bitsGVKi, &T21, T18);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:891
    T19 = T20_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:891
    SLOT_VALUE_SETTER(T19, tv_, 11);
    T3 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:894
    T22 = SLOT_VALUE_INITD(tv_, 11);
    T3 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:890
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:896
  Kclear_rehashed_bitsVKiI(T3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:899
  if (valuesQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:900
    T23 = SLOT_VALUE_INITD(tv_, 9);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:928
    T24 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:928
    T25 = primitive_machine_word_subtract_signal_overflow(T24,4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:928
    T27_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:928
    T26 = T27_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:905
    iF129T = T25;
    stateF130T = T26;
    countF131T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:914
      iF129 = iF129T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:914
      stateF130 = stateF130T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:914
      countF131 = countF131T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:905
      iF35 = iF129;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:902
      T133 = primitive_cast_raw_as_integer(iF35);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:905
      stateF36 = stateF130;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:905
      countF37 = countF131;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
      T132 = primitive_cast_raw_as_integer(countF37);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:902
      T31 = primitive_machine_word_less_thanQ(iF35,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:902
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:903
        T32 = T132;
        MV_SET_ELT(0, T132);
        MV_SET_ELT(1, stateF36);
        MV_SET_COUNT(2);
        T30 = T32;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:904
        T28 = Krehashed_bitQVKiI(T3, T133);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:902
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:905
          T33 = primitive_machine_word_subtract_signal_overflow(iF35,4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:905
          iF129T = T33;
          stateF130T = stateF130;
          countF131T = countF131;
          goto L0;
          T29 = T34;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:907
          T38 = primitive_machine_word_subtract_signal_overflow(iF35,4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:908
          T41 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, iF35);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:908
          T39 = primitive_cast_pointer_as_raw(T41);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:908
          T40 = primitive_machine_word_equalQ(T39,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:908
          if (T40 != &KPfalseVKi) {
            T42 = Dtable_entry_deletedVKi;
          } else {
            T42 = T41;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:908
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:909
          T45 = REPEATED_D_SLOT_VALUE_TAGGED(T23, 2, iF35);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:909
          T43 = primitive_cast_pointer_as_raw(T45);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:909
          T44 = primitive_machine_word_equalQ(T43,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:909
          if (T44 != &KPfalseVKi) {
            T46 = Dtable_entry_deletedVKi;
          } else {
            T46 = T45;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:909
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:910
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(Dtable_entry_emptyVKi, T9, 2, iF35);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:911
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(Dtable_entry_emptyVKi, T23, 2, iF35);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
          kF124T = T42;
          vF125T = T46;
          countF126T = countF37;
          stateF127T = stateF36;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
            kF124 = kF124T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
            vF125 = vF125T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
            countF126 = countF126T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
            stateF127 = stateF127T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:913
            UtmpF47 = primitive_idQ(kF124,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:913
            if (UtmpF47 != &KPfalseVKi) {
              T48 = UtmpF47;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:913
              T54 = primitive_idQ(kF124,Dtable_entry_deletedVKi);
              T48 = T54;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:913
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:913
            if (T48 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:914
              iF129T = T38;
              stateF130T = stateF127;
              countF131T = countF126;
              goto L0;
              T53 = T128;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
              T55 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
              if (T55 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                thread_hash_stateF56 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                primitive_write_thread_variable(Ddefault_hash_stateVKi, &KPfalseVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                primitive_mps_ld_reset(thread_hash_stateF56);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T63 = SLOT_VALUE_INITD(tv_, 2);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T57_0 = CALL2(T63, kF124, thread_hash_stateF56);
                T57_1 = MV_GET_ELT(1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T58_0 = T57_0;
                T58_1 = T57_1;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                idF59 = T58_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                hash_stateF60 = T58_1;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                primitive_write_thread_variable(Ddefault_hash_stateVKi, thread_hash_stateF56);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T64_0 = idF59;
                T64_1 = hash_stateF60;
                T62_0 = T64_0;
                T62_1 = T64_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T65 = SLOT_VALUE_INITD(tv_, 2);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T67_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T66 = T67_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T61_0 = CALL2(T65, kF124, T66);
                T61_1 = MV_GET_ELT(1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
                T68_0 = T61_0;
                T68_1 = T61_1;
                T62_0 = T68_0;
                T62_1 = T68_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
              idF49 = T62_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:916
              hstateF50 = T62_1;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T76 = primitive_cast_integer_as_raw(idF49);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T75 = primitive_machine_word_shift_right(T76,2);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T77 = primitive_machine_word_shift_right(T24,2);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              rmremainderF74 = primitive_machine_word_floorS_remainder(T75,T77);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T78 = primitive_machine_word_shift_left_signal_overflow(rmremainderF74,2);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T79 = primitive_machine_word_logior(T78,1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T80 = primitive_cast_raw_as_integer(T79);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T83 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, T79);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T81 = primitive_cast_pointer_as_raw(T83);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              T82 = primitive_machine_word_equalQ(T81,0);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              if (T82 != &KPfalseVKi) {
                T84 = Dtable_entry_deletedVKi;
              } else {
                T84 = T83;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              UtmpF69 = primitive_idQ(T84,Dtable_entry_emptyVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              if (UtmpF69 != &KPfalseVKi) {
                UtmpF70 = UtmpF69;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T85 = primitive_idQ(T84,Dtable_entry_deletedVKi);
                UtmpF70 = T85;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              if (UtmpF70 != &KPfalseVKi) {
                T72 = UtmpF70;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T71 = Krehashed_bitQVKiI(T3, T80);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T86 = primitive_not(T71);
                T72 = T86;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              if (T72 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T87_0 = T80;
                T87_1 = T84;
                T73_0 = T87_0;
                T73_1 = T87_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T89 = primitive_machine_word_logand(T76,29);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T90 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T89);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T91_0 = T90;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T88_0 = T91_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                strideF92 = T88_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T98 = primitive_cast_integer_as_raw(strideF92);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T99 = primitive_machine_word_logxor(T98,1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T102 = primitive_machine_word_logxor(T24,1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                previous_indexF114T = T79;
              L2: ;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  previous_indexF114 = previous_indexF114T;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  T100 = primitive_machine_word_subtract_signal_overflow(previous_indexF114,T99);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  T101 = primitive_machine_word_less_thanQ(T100,1);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  if (T101 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                    T103 = primitive_machine_word_add_signal_overflow(T100,T102);
                    T104 = T103;
                  } else {
                    T104 = T100;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  T109 = primitive_cast_raw_as_integer(T104);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  T107 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, T104);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  T105 = primitive_cast_pointer_as_raw(T107);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  T106 = primitive_machine_word_equalQ(T105,0);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  if (T106 != &KPfalseVKi) {
                    T108 = Dtable_entry_deletedVKi;
                  } else {
                    T108 = T107;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  UtmpF93 = primitive_idQ(T108,Dtable_entry_emptyVKi);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  if (UtmpF93 != &KPfalseVKi) {
                    UtmpF94 = UtmpF93;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                    T110 = primitive_idQ(T108,Dtable_entry_deletedVKi);
                    UtmpF94 = T110;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  if (UtmpF94 != &KPfalseVKi) {
                    T96 = UtmpF94;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                    T95 = Krehashed_bitQVKiI(T3, T109);
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                    T111 = primitive_not(T95);
                    T96 = T111;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  if (T96 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                    T112_0 = T109;
                    T112_1 = T108;
                    T97_0 = T112_0;
                    T97_1 = T112_1;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                    previous_indexF114T = T104;
                    goto L2;
                    T97_0 = T113_0;
                    T97_1 = T113_1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
                T73_0 = T97_0;
                T73_1 = T97_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              jF51 = T73_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:917
              nxtkF52 = T73_1;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:918
              T118 = primitive_cast_integer_as_raw(jF51);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:918
              T117 = REPEATED_D_SLOT_VALUE_TAGGED(T23, 2, T118);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:918
              T115 = primitive_cast_pointer_as_raw(T117);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:918
              T116 = primitive_machine_word_equalQ(T115,0);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:918
              if (T116 != &KPfalseVKi) {
                T119 = Dtable_entry_deletedVKi;
              } else {
                T119 = T117;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:918
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:919
              T120 = primitive_cast_integer_as_raw(jF51);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:919
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(kF124, T9, 2, T120);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:920
              T121 = primitive_cast_integer_as_raw(jF51);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:920
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(vF125, T23, 2, T121);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:921
              Krehashed_bitQ_setterVKiI(&KPtrueVKi, T3, jF51);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
              T122 = primitive_machine_word_add_signal_overflow(countF126,4);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
              primitive_mps_ld_merge(stateF127,hstateF50);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
              kF124T = nxtkF52;
              vF125T = T119;
              countF126T = T122;
              stateF127T = stateF36;
              goto L1;
              T53 = T123;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:913
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:922
          T29 = T53;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:902
        T30 = T29;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:902
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:905
    T4_0 = T30;
    T4_1 = MV_GET_ELT(1);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:953
    T134 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:953
    T135 = primitive_machine_word_subtract_signal_overflow(T134,4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:953
    T137_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:953
    T136 = T137_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:934
    iF228T = T135;
    stateF229T = T136;
    countF230T = 1;
  L3: ;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:941
      iF228 = iF228T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:941
      stateF229 = stateF229T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:941
      countF230 = countF230T;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:934
      iF145 = iF228;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:931
      T232 = primitive_cast_raw_as_integer(iF145);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:934
      stateF146 = stateF229;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:934
      countF147 = countF230;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
      T231 = primitive_cast_raw_as_integer(countF147);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:931
      T141 = primitive_machine_word_less_thanQ(iF145,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:931
      if (T141 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:932
        T142 = T231;
        MV_SET_ELT(0, T231);
        MV_SET_ELT(1, stateF146);
        MV_SET_COUNT(2);
        T140 = T142;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:933
        T138 = Krehashed_bitQVKiI(T3, T232);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:931
        if (T138 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:934
          T143 = primitive_machine_word_subtract_signal_overflow(iF145,4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:934
          iF228T = T143;
          stateF229T = stateF229;
          countF230T = countF230;
          goto L3;
          T139 = T144;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:936
          T148 = primitive_machine_word_subtract_signal_overflow(iF145,4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:937
          T151 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, iF145);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:937
          T149 = primitive_cast_pointer_as_raw(T151);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:937
          T150 = primitive_machine_word_equalQ(T149,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:937
          if (T150 != &KPfalseVKi) {
            T152 = Dtable_entry_deletedVKi;
          } else {
            T152 = T151;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:937
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:938
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(Dtable_entry_emptyVKi, T9, 2, iF145);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
          kF224T = T152;
          countF225T = countF147;
          stateF226T = stateF146;
        L4: ;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
            kF224 = kF224T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
            countF225 = countF225T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
            stateF226 = stateF226T;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:940
            UtmpF153 = primitive_idQ(kF224,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:940
            if (UtmpF153 != &KPfalseVKi) {
              T154 = UtmpF153;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:940
              T160 = primitive_idQ(kF224,Dtable_entry_deletedVKi);
              T154 = T160;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:940
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:940
            if (T154 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:941
              iF228T = T148;
              stateF229T = stateF226;
              countF230T = countF225;
              goto L3;
              T159 = T227;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
              T161 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
              if (T161 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                thread_hash_stateF162 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                primitive_write_thread_variable(Ddefault_hash_stateVKi, &KPfalseVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                primitive_mps_ld_reset(thread_hash_stateF162);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T169 = SLOT_VALUE_INITD(tv_, 2);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T163_0 = CALL2(T169, kF224, thread_hash_stateF162);
                T163_1 = MV_GET_ELT(1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T164_0 = T163_0;
                T164_1 = T163_1;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                idF165 = T164_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                hash_stateF166 = T164_1;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                primitive_write_thread_variable(Ddefault_hash_stateVKi, thread_hash_stateF162);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T170_0 = idF165;
                T170_1 = hash_stateF166;
                T168_0 = T170_0;
                T168_1 = T170_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T171 = SLOT_VALUE_INITD(tv_, 2);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T173_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T172 = T173_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T167_0 = CALL2(T171, kF224, T172);
                T167_1 = MV_GET_ELT(1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
                T174_0 = T167_0;
                T174_1 = T167_1;
                T168_0 = T174_0;
                T168_1 = T174_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
              idF155 = T168_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:943
              hstateF156 = T168_1;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T182 = primitive_cast_integer_as_raw(idF155);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T181 = primitive_machine_word_shift_right(T182,2);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T183 = primitive_machine_word_shift_right(T134,2);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              rmremainderF180 = primitive_machine_word_floorS_remainder(T181,T183);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T184 = primitive_machine_word_shift_left_signal_overflow(rmremainderF180,2);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T185 = primitive_machine_word_logior(T184,1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T186 = primitive_cast_raw_as_integer(T185);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T189 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, T185);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T187 = primitive_cast_pointer_as_raw(T189);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              T188 = primitive_machine_word_equalQ(T187,0);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              if (T188 != &KPfalseVKi) {
                T190 = Dtable_entry_deletedVKi;
              } else {
                T190 = T189;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              UtmpF175 = primitive_idQ(T190,Dtable_entry_emptyVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              if (UtmpF175 != &KPfalseVKi) {
                UtmpF176 = UtmpF175;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T191 = primitive_idQ(T190,Dtable_entry_deletedVKi);
                UtmpF176 = T191;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              if (UtmpF176 != &KPfalseVKi) {
                T178 = UtmpF176;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T177 = Krehashed_bitQVKiI(T3, T186);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T192 = primitive_not(T177);
                T178 = T192;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              if (T178 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T193_0 = T186;
                T193_1 = T190;
                T179_0 = T193_0;
                T179_1 = T193_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T195 = primitive_machine_word_logand(T182,29);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T196 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T195);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T197_0 = T196;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T194_0 = T197_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                strideF198 = T194_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T204 = primitive_cast_integer_as_raw(strideF198);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T205 = primitive_machine_word_logxor(T204,1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T208 = primitive_machine_word_logxor(T134,1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                previous_indexF220T = T185;
              L5: ;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  previous_indexF220 = previous_indexF220T;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  T206 = primitive_machine_word_subtract_signal_overflow(previous_indexF220,T205);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  T207 = primitive_machine_word_less_thanQ(T206,1);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  if (T207 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                    T209 = primitive_machine_word_add_signal_overflow(T206,T208);
                    T210 = T209;
                  } else {
                    T210 = T206;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  T215 = primitive_cast_raw_as_integer(T210);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  T213 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, T210);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  T211 = primitive_cast_pointer_as_raw(T213);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  T212 = primitive_machine_word_equalQ(T211,0);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  if (T212 != &KPfalseVKi) {
                    T214 = Dtable_entry_deletedVKi;
                  } else {
                    T214 = T213;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  UtmpF199 = primitive_idQ(T214,Dtable_entry_emptyVKi);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  if (UtmpF199 != &KPfalseVKi) {
                    UtmpF200 = UtmpF199;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                    T216 = primitive_idQ(T214,Dtable_entry_deletedVKi);
                    UtmpF200 = T216;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  if (UtmpF200 != &KPfalseVKi) {
                    T202 = UtmpF200;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                    T201 = Krehashed_bitQVKiI(T3, T215);
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                    T217 = primitive_not(T201);
                    T202 = T217;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  if (T202 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                    T218_0 = T215;
                    T218_1 = T214;
                    T203_0 = T218_0;
                    T203_1 = T218_1;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                    previous_indexF220T = T210;
                    goto L5;
                    T203_0 = T219_0;
                    T203_1 = T219_1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
                T179_0 = T203_0;
                T179_1 = T203_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              jF157 = T179_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:944
              nxtkF158 = T179_1;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:945
              T221 = primitive_cast_integer_as_raw(jF157);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:945
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(kF224, T9, 2, T221);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:946
              Krehashed_bitQ_setterVKiI(&KPtrueVKi, T3, jF157);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
              T222 = primitive_machine_word_add_signal_overflow(countF225,4);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
              primitive_mps_ld_merge(stateF226,hstateF156);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
              kF224T = nxtkF158;
              countF225T = T222;
              stateF226T = stateF146;
              goto L4;
              T159 = T223;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:940
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:947
          T139 = T159;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:931
        T140 = T139;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:931
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:934
    T4_0 = T140;
    T4_1 = MV_GET_ELT(1);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:899
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:898
  countF5 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:898
  stateF6 = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:955
  SLOT_VALUE_SETTER(countF5, tv_, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:956
  SLOT_VALUE_SETTER((D) 1, tv_, 6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:957
  SLOT_VALUE_SETTER(stateF6, tv_, 7);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:958
  primitive_synchronize_side_effects();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:959
  T7 = Kmake_rehash_tokenVKiI(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:959
  SLOT_VALUE_SETTER(T7, tv_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:959
  T8 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:887
  MV_SET_COUNT(0);
  return(T8);
}

D Krehash_entry_countVKiI (D table_, D tv_, D growQ_) {
  D T3;
  D T4;
  DWORD present_;
  D T6;
  D T7;
  D new_;
  D T9_0;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D T19_0;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  DWORD T24;
  D T25;
  D T26_0;
  D T27;
  DWORD T28;
  D T29;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:985
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:989
  T10 = SLOT_VALUE_INITD(table_, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:989
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:990
    T3 = Kcalculate_real_sizeVKiI(tv_);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
    T15 = primitive_cast_integer_as_raw(T3);
    present_ = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:992
    T4 = Kpresent_entry_countVKiI(tv_);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
    T16 = primitive_cast_integer_as_raw(T4);
    present_ = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:989
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
  T17 = primitive_cast_raw_as_integer(present_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
  T11 = primitive_not(growQ_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
  if (growQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
    T12 = SLOT_VALUE_INITD(tv_, 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
    T14 = primitive_machine_word_less_thanQ(present_,T13);
    T6 = T14;
  } else {
    T6 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:997
    T18 = SLOT_VALUE_INITD(table_, 2);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:997
    T21 = primitive_cast_integer_as_raw(T18);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:997
    T22 = primitive_machine_word_less_thanQ(present_,T21);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:997
    if (T22 != &KPfalseVKi) {
      T20 = T18;
    } else {
      T20 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:997
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:997
    T19_0 = T20;
    T9_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1004
    T23 = SLOT_VALUE_INITD(table_, 3);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1004
    T7 = CALL1(T23, T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1004
    new_ = T7;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1005
    T24 = primitive_machine_word_add_signal_overflow(present_,56);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1005
    T25 = primitive_cast_raw_as_integer(T24);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1005
    T28 = primitive_cast_integer_as_raw(new_);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1005
    T29 = primitive_machine_word_less_thanQ(T28,T24);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1005
    if (T29 != &KPfalseVKi) {
      T27 = T25;
    } else {
      T27 = new_;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1005
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1005
    T26_0 = T27;
    T9_0 = T26_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:994
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:985
  MV_SET_COUNT(1);
  return(T9_0);
}

D Krehash_into_copyVKiI (D table_, D src_, D dst_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12;
  D UtmpF13;
  D T14;
  D idF15;
  D hstate_;
  D T17;
  D T18;
  D T19;
  DADDR T20;
  D T21;
  D T22;
  DADDR T23;
  D T24;
  DWORD T25;
  D T26;
  DWORD indexF27;
  D stateF28;
  DWORD countF29;
  D T30;
  D thread_hash_state_;
  D T32_0;
  D T32_1;
  D T33_0;
  D T33_1;
  D idF34;
  D hash_state_;
  D T36_0;
  D T36_1;
  D T37_0;
  D T37_1;
  D T38;
  D T39_0;
  D T39_1;
  D T40;
  D T41;
  D T42_0;
  D T43_0;
  D T43_1;
  D UtmpF44;
  D T45;
  D T46;
  D T47;
  DWORD T48;
  D T49;
  D T50;
  D UtmpF51;
  D T52;
  D T53;
  D UtmpF54;
  D T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  DWORD rmremainderF61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DADDR T68;
  D T69;
  D T70;
  D T71;
  D T72;
  D T73_0;
  DWORD T74;
  D T75;
  D T76_0;
  D strideF77;
  D UtmpF78;
  D T79;
  D T80;
  D T81;
  DWORD T82;
  DWORD T83;
  DWORD T84;
  D T85;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  DADDR T89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94_0;
  D T94_1;
  DWORD previous_indexF95T, previous_indexF95;
  D T96;
  D mm_wrapper_;
  D T98;
  DWORD T99;
  D T100;
  D T101;
  DWORD rmremainderF102;
  DWORD T103;
  DWORD T104;
  DWORD T105;
  DWORD T106;
  DWORD T107;
  DWORD T108;
  DADDR T109;
  D T110;
  D T111;
  D T112;
  D T113;
  D T114_0;
  DWORD T115;
  D T116;
  D T117_0;
  D strideF118;
  D UtmpF119;
  D T120;
  D T121;
  DWORD T122;
  DWORD T123;
  DWORD T124;
  D T125;
  DWORD T126;
  DWORD T127;
  DWORD T128;
  DADDR T129;
  D T130;
  D T131;
  D T132;
  D T133;
  D T134_0;
  D T134_1;
  DWORD previous_indexF135T, previous_indexF135;
  D T136;
  DWORD rmremainderF137;
  DWORD T138;
  DWORD T139;
  DWORD T140;
  DWORD T141;
  DWORD T142;
  DWORD T143;
  DADDR T144;
  D T145;
  D T146;
  D T147;
  D T148;
  D T149_0;
  DWORD T150;
  D T151;
  D T152_0;
  D strideF153;
  D UtmpF154;
  D T155;
  D T156;
  D T157;
  DWORD T158;
  DWORD T159;
  DWORD T160;
  D T161;
  DWORD T162;
  DWORD T163;
  DWORD T164;
  DADDR T165;
  D T166;
  D T167;
  D T168;
  D T169;
  D T170_0;
  D T170_1;
  DWORD previous_indexF171T, previous_indexF171;
  D T172;
  DWORD T173;
  DWORD T174;
  D T175;
  DWORD T176;
  DWORD T177;
  DWORD T178;
  D T179;
  DWORD T180;
  DWORD T181;
  DWORD T182;
  DADDR T183;
  DADDR T184;
  D T185;
  D T186;
  D T187;
  DADDR T188;
  D T189;
  D T190;
  D T191;
  D T192;
  DWORD T193;
  DWORD T194;
  DWORD T195;
  DWORD T196;
  DWORD T197;
  D T198;
  DWORD indexF199T, indexF199;
  D stateF200T, stateF200;
  DWORD countF201T, countF201;
  D T202;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:848
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:850
  T4 = SLOT_VALUE_INITD(src_, 8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:851
  T5 = SLOT_VALUE_INITD(src_, 9);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:852
  T6 = SLOT_VALUE_INITD(dst_, 8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:853
  T7 = SLOT_VALUE_INITD(dst_, 9);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:882
  T8 = SLOT_VALUE_INITD(T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:882
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:882
  T10 = primitive_machine_word_subtract_signal_overflow(T9,4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:882
  T11 = SLOT_VALUE_INITD(dst_, 7);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:869
  indexF199T = T10;
  stateF200T = T11;
  countF201T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:876
    indexF199 = indexF199T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:876
    stateF200 = stateF200T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:876
    countF201 = countF201T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:869
    indexF27 = indexF199;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:869
    stateF28 = stateF200;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:869
    countF29 = countF201;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:878
    T202 = primitive_cast_raw_as_integer(countF29);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:856
    T19 = primitive_machine_word_less_thanQ(indexF27,1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:856
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:857
      SLOT_VALUE_SETTER(T202, dst_, 4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:858
      SLOT_VALUE_SETTER(stateF28, dst_, 7);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:864
      primitive_synchronize_side_effects();
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:865
      SLOT_VALUE_SETTER(dst_, table_, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:865
      T12 = dst_;
      MV_SET_ELT(0, dst_);
      MV_SET_COUNT(1);
      T18 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:867
      T22 = REPEATED_D_SLOT_VALUE_TAGGED(T4, 2, indexF27);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:867
      T20 = primitive_cast_pointer_as_raw(T22);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:867
      T21 = primitive_machine_word_equalQ(T20,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:867
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
        T183 = primitive_cast_pointer_as_raw(Dtable_entry_deletedVKi);
        T23 = T183;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
        T184 = primitive_cast_pointer_as_raw(T22);
        T23 = T184;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:867
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
      T185 = primitive_cast_raw_as_pointer(T23);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:868
      UtmpF13 = primitive_idQ(T185,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:868
      if (UtmpF13 != &KPfalseVKi) {
        T14 = UtmpF13;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:868
        T24 = primitive_idQ(T185,Dtable_entry_deletedVKi);
        T14 = T24;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:868
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:868
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:869
        T25 = primitive_machine_word_subtract_signal_overflow(indexF27,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:869
        indexF199T = T25;
        stateF200T = stateF200;
        countF201T = countF201;
        goto L0;
        T17 = T26;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
        T30 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
        if (T30 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          thread_hash_state_ = primitive_read_thread_variable(Ddefault_hash_stateVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          primitive_write_thread_variable(Ddefault_hash_stateVKi, &KPfalseVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          primitive_mps_ld_reset(thread_hash_state_);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T38 = SLOT_VALUE_INITD(dst_, 2);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T32_0 = CALL2(T38, T185, thread_hash_state_);
          T32_1 = MV_GET_ELT(1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T33_0 = T32_0;
          T33_1 = T32_1;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          idF34 = T33_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          hash_state_ = T33_1;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          primitive_write_thread_variable(Ddefault_hash_stateVKi, thread_hash_state_);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T39_0 = idF34;
          T39_1 = hash_state_;
          T37_0 = T39_0;
          T37_1 = T39_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T40 = SLOT_VALUE_INITD(dst_, 2);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T42_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T41 = T42_0;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T36_0 = CALL2(T40, T185, T41);
          T36_1 = MV_GET_ELT(1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
          T43_0 = T36_0;
          T43_1 = T36_1;
          T37_0 = T43_0;
          T37_1 = T43_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
        idF15 = T37_0;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:871
        hstate_ = T37_1;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
        T58 = SLOT_VALUE_INITD(dst_, 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
        T59 = primitive_idQ(T58,&KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
        if (T59 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T48 = primitive_machine_word_logand(T23,3);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T49 = primitive_machine_word_equalQ(T48,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          if (T49 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T96 = primitive_element(T185,0,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            mm_wrapper_ = T96;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T98 = SLOT_VALUE_INITD(mm_wrapper_, 1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T99 = primitive_cast_integer_as_raw(T98);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T100 = primitive_machine_word_logbitQ(2,T99);
            T50 = T100;
          } else {
            T50 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          if (T50 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T101 = SLOT_VALUE_INITD(T6, 1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T104 = primitive_cast_integer_as_raw(idF15);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T103 = primitive_machine_word_shift_right(T104,2);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T106 = primitive_cast_integer_as_raw(T101);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T105 = primitive_machine_word_shift_right(T106,2);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            rmremainderF102 = primitive_machine_word_floorS_remainder(T103,T105);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T107 = primitive_machine_word_shift_left_signal_overflow(rmremainderF102,2);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T108 = primitive_machine_word_logior(T107,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T111 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 2, T108);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T109 = primitive_cast_pointer_as_raw(T111);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T110 = primitive_machine_word_equalQ(T109,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            if (T110 != &KPfalseVKi) {
              T112 = Dtable_entry_deletedVKi;
            } else {
              T112 = T111;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            UtmpF51 = primitive_idQ(T112,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            if (UtmpF51 != &KPfalseVKi) {
              T53 = UtmpF51;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T113 = primitive_idQ(T112,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              if (T113 != &KPfalseVKi) {
                T52 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T186 = primitive_idQ(T185,T112);
                T52 = T186;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T53 = T52;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            if (T53 != &KPfalseVKi) {
              T174 = T108;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T115 = primitive_machine_word_logand(T104,29);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T116 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T115);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T117_0 = T116;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T114_0 = T117_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              strideF118 = T114_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T122 = primitive_cast_integer_as_raw(strideF118);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T123 = primitive_machine_word_logxor(T122,1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T126 = primitive_machine_word_logxor(T106,1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              previous_indexF135T = T108;
            L1: ;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                previous_indexF135 = previous_indexF135T;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T124 = primitive_machine_word_subtract_signal_overflow(previous_indexF135,T123);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T125 = primitive_machine_word_less_thanQ(T124,1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (T125 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T127 = primitive_machine_word_add_signal_overflow(T124,T126);
                  T128 = T127;
                } else {
                  T128 = T124;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T131 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 2, T128);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T129 = primitive_cast_pointer_as_raw(T131);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T130 = primitive_machine_word_equalQ(T129,0);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (T130 != &KPfalseVKi) {
                  T132 = Dtable_entry_deletedVKi;
                } else {
                  T132 = T131;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                UtmpF119 = primitive_idQ(T132,Dtable_entry_emptyVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (UtmpF119 != &KPfalseVKi) {
                  T121 = UtmpF119;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T133 = primitive_idQ(T132,Dtable_entry_deletedVKi);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  if (T133 != &KPfalseVKi) {
                    T120 = &KPfalseVKi;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                    T187 = primitive_idQ(T185,T132);
                    T120 = T187;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T121 = T120;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (T121 != &KPfalseVKi) {
                  T173 = T128;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  previous_indexF135T = T128;
                  goto L1;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T172 = T134_0;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:874
                  T193 = primitive_cast_integer_as_raw(T172);
                  T173 = T193;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T174 = T173;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T178 = T174;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T136 = SLOT_VALUE_INITD(T6, 1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T139 = primitive_cast_integer_as_raw(idF15);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T138 = primitive_machine_word_shift_right(T139,2);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T141 = primitive_cast_integer_as_raw(T136);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T140 = primitive_machine_word_shift_right(T141,2);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            rmremainderF137 = primitive_machine_word_floorS_remainder(T138,T140);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T142 = primitive_machine_word_shift_left_signal_overflow(rmremainderF137,2);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T143 = primitive_machine_word_logior(T142,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T146 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 2, T143);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T144 = primitive_cast_pointer_as_raw(T146);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T145 = primitive_machine_word_equalQ(T144,0);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            if (T145 != &KPfalseVKi) {
              T147 = Dtable_entry_deletedVKi;
            } else {
              T147 = T146;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            UtmpF54 = primitive_idQ(T147,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            if (UtmpF54 != &KPfalseVKi) {
              T57 = UtmpF54;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T148 = primitive_idQ(T147,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              if (T148 != &KPfalseVKi) {
                T56 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T55 = primitive_idQ(T185,T147);
                T56 = T55;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T57 = T56;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            if (T57 != &KPfalseVKi) {
              T177 = T143;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T150 = primitive_machine_word_logand(T139,29);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T151 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T150);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T152_0 = T151;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T149_0 = T152_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              strideF153 = T149_0;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T158 = primitive_cast_integer_as_raw(strideF153);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T159 = primitive_machine_word_logxor(T158,1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T162 = primitive_machine_word_logxor(T141,1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              previous_indexF171T = T143;
            L2: ;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                previous_indexF171 = previous_indexF171T;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T160 = primitive_machine_word_subtract_signal_overflow(previous_indexF171,T159);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T161 = primitive_machine_word_less_thanQ(T160,1);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (T161 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T163 = primitive_machine_word_add_signal_overflow(T160,T162);
                  T164 = T163;
                } else {
                  T164 = T160;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T167 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 2, T164);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T165 = primitive_cast_pointer_as_raw(T167);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T166 = primitive_machine_word_equalQ(T165,0);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (T166 != &KPfalseVKi) {
                  T168 = Dtable_entry_deletedVKi;
                } else {
                  T168 = T167;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                UtmpF154 = primitive_idQ(T168,Dtable_entry_emptyVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (UtmpF154 != &KPfalseVKi) {
                  T157 = UtmpF154;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T169 = primitive_idQ(T168,Dtable_entry_deletedVKi);
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  if (T169 != &KPfalseVKi) {
                    T156 = &KPfalseVKi;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                    T155 = primitive_idQ(T185,T168);
                    T156 = T155;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T157 = T156;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (T157 != &KPfalseVKi) {
                  T176 = T164;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  previous_indexF171T = T164;
                  goto L2;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T175 = T170_0;
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:874
                  T194 = primitive_cast_integer_as_raw(T175);
                  T176 = T194;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T177 = T176;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T178 = T177;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T182 = T178;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T60 = SLOT_VALUE_INITD(T6, 1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T63 = primitive_cast_integer_as_raw(idF15);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T62 = primitive_machine_word_shift_right(T63,2);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T65 = primitive_cast_integer_as_raw(T60);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T64 = primitive_machine_word_shift_right(T65,2);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          rmremainderF61 = primitive_machine_word_floorS_remainder(T62,T64);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T66 = primitive_machine_word_shift_left_signal_overflow(rmremainderF61,2);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T67 = primitive_machine_word_logior(T66,1);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T70 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 2, T67);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T68 = primitive_cast_pointer_as_raw(T70);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T69 = primitive_machine_word_equalQ(T68,0);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          if (T69 != &KPfalseVKi) {
            T71 = Dtable_entry_deletedVKi;
          } else {
            T71 = T70;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          UtmpF44 = primitive_idQ(T71,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          if (UtmpF44 != &KPfalseVKi) {
            T47 = UtmpF44;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T72 = primitive_idQ(T71,Dtable_entry_deletedVKi);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            if (T72 != &KPfalseVKi) {
              T46 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T45 = CALL2(T58, T185, T71);
              T46 = T45;
            }
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T47 = T46;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          if (T47 != &KPfalseVKi) {
            T181 = T67;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T74 = primitive_machine_word_logand(T63,29);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T75 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T74);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T76_0 = T75;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T73_0 = T76_0;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            strideF77 = T73_0;
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T82 = primitive_cast_integer_as_raw(strideF77);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T83 = primitive_machine_word_logxor(T82,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T86 = primitive_machine_word_logxor(T65,1);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            previous_indexF95T = T67;
          L3: ;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              previous_indexF95 = previous_indexF95T;
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T84 = primitive_machine_word_subtract_signal_overflow(previous_indexF95,T83);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T85 = primitive_machine_word_less_thanQ(T84,1);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              if (T85 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T87 = primitive_machine_word_add_signal_overflow(T84,T86);
                T88 = T87;
              } else {
                T88 = T84;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T91 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 2, T88);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T89 = primitive_cast_pointer_as_raw(T91);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              T90 = primitive_machine_word_equalQ(T89,0);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              if (T90 != &KPfalseVKi) {
                T92 = Dtable_entry_deletedVKi;
              } else {
                T92 = T91;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              UtmpF78 = primitive_idQ(T92,Dtable_entry_emptyVKi);
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              if (UtmpF78 != &KPfalseVKi) {
                T81 = UtmpF78;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T93 = primitive_idQ(T92,Dtable_entry_deletedVKi);
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                if (T93 != &KPfalseVKi) {
                  T80 = &KPfalseVKi;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                  T79 = CALL2(T58, T185, T92);
                  T80 = T79;
                }
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T81 = T80;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              if (T81 != &KPfalseVKi) {
                T180 = T88;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                previous_indexF95T = T88;
                goto L3;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
                T179 = T94_0;
                // /opt/opendylan-2013.1/sources/dylan/table.dylan:874
                T195 = primitive_cast_integer_as_raw(T179);
                T180 = T195;
              }
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
              // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
            T181 = T180;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
          T182 = T181;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:872
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:874
        T192 = primitive_cast_raw_as_integer(T182);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:873
        CALL3(&Kentry_key_setterVKi, T185, T6, T192);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:875
        T190 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 2, indexF27);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:875
        T188 = primitive_cast_pointer_as_raw(T190);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:875
        T189 = primitive_machine_word_equalQ(T188,0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:875
        if (T189 != &KPfalseVKi) {
          T191 = Dtable_entry_deletedVKi;
        } else {
          T191 = T190;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:875
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:874
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T191, T7, 2, T182);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:876
        T196 = primitive_machine_word_subtract_signal_overflow(indexF27,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:877
        primitive_mps_ld_merge(stateF28,hstate_);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:878
        T197 = primitive_machine_word_add_signal_overflow(countF29,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:876
        indexF199T = T196;
        stateF200T = stateF28;
        countF201T = T197;
        goto L0;
        T17 = T198;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:868
      T18 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:856
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:869
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:848
  return(T18);
}

D KLentry_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_partner_, D Uunique_size_) {
  D T5;
  D object_;
  D Uunique_sizeF7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:194
  T5 = Kallocate_instanceVKeI(&KLentry_vectorGVKi, init_args_);
  object_ = T5;
  SLOT_VALUE_SETTER(Uunique_partner_, object_, 0);
  Uunique_sizeF7 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF7, object_, 1);
  APPLY2(&KinitializeVKd, object_, init_args_);
  T8_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:194
  MV_SET_COUNT(1);
  return(T8_0);
}

static D Kslot_initializerF334I () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:198
  T0_0 = Dtable_entry_emptyVKi;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kcalculate_real_sizeVKiI (D tv_) {
  D T1;
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D Utmp_;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  DADDR T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  DWORD T17;
  D T18;
  DWORD indexF19T, indexF19;
  DWORD countF20T, countF20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:967
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:968
  T1 = SLOT_VALUE_INITD(tv_, 8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:982
  T2 = SLOT_VALUE_INITD(T1, 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:982
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:982
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:974
  indexF19T = T4;
  countF20T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:974
    indexF19 = indexF19T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:974
    countF20 = countF20T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:978
    T21 = primitive_cast_raw_as_integer(countF20);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:970
    T10 = primitive_machine_word_less_thanQ(indexF19,1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:970
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:971
      T5 = T21;
      MV_SET_ELT(0, T21);
      MV_SET_COUNT(1);
      T9 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:973
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(T1, 2, indexF19);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:973
      T11 = primitive_cast_pointer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:973
      T12 = primitive_machine_word_equalQ(T11,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:973
      if (T12 != &KPfalseVKi) {
        T14 = Dtable_entry_deletedVKi;
      } else {
        T14 = T13;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:973
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:974
      T15 = primitive_machine_word_subtract_signal_overflow(indexF19,4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:975
      Utmp_ = primitive_idQ(T14,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:975
      if (Utmp_ != &KPfalseVKi) {
        T7 = Utmp_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:975
        T16 = primitive_idQ(T14,Dtable_entry_deletedVKi);
        T7 = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:975
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:975
      if (T7 != &KPfalseVKi) {
        T8 = countF20;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:978
        T17 = primitive_machine_word_add_signal_overflow(countF20,4);
        T8 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:975
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:974
      indexF19T = T15;
      countF20T = T8;
      goto L0;
      T9 = T18;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:970
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:974
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:967
  return(T9);
}

D Kpresent_entry_countVKiI (D tv_) {
  D T1;
  D T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:450
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T1 = SLOT_VALUE_INITD(tv_, 4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T2 = SLOT_VALUE_INITD(tv_, 6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T3 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T4 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T5 = primitive_machine_word_logxor(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T6 = primitive_machine_word_subtract_signal_overflow(T3,T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:452
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:450
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kclear_rehashed_bitsVKiI (D v_) {
  DWORD i_T, i_;
  D T2;
  D T3;
  DWORD T4;
  D T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:328
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
  T3 = SLOT_VALUE_INITD(v_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
    T5 = primitive_machine_word_less_thanQ(i_,T4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:330
      REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(0, v_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
      T6 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
      i_T = T6;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
    T2 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:328
  MV_SET_COUNT(0);
  return(T2);
}

D Krehashed_bitQVKiI (D vector_, D index_) {
  D T2;
  D T3_0;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:296
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:298
  T4 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:298
  T5 = primitive_machine_word_logand(T4,125);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:298
  T6 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:299
  T7 = primitive_machine_word_shift_right(T4,5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:299
  T8 = primitive_machine_word_logand(T7,-4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:299
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:299
  T10 = REPEATED_DWORD_SLOT_VALUE_TAGGED(vector_, 1, T9);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:298
  T2 = primitive_machine_word_logbitQ(T6,T10);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:298
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:296
  MV_SET_COUNT(1);
  return(T3_0);
}

D Krehashed_bitQ_setterVKiI (D rehashedQ_, D vector_, D index_) {
  DWORD T3;
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11_0;
  DWORD T11_1;
  D T11_2;
  DWORD lowF12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16_0;
  DWORD T16_1;
  D T16_2;
  DWORD lowF17;
  DWORD T18;
  DWORD T19;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:303
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:307
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:307
  T6 = primitive_machine_word_shift_right(T5,5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:307
  T7 = primitive_machine_word_logand(T6,-4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:307
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:308
  T9 = primitive_machine_word_logand(T5,125);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:310
  T10 = REPEATED_DWORD_SLOT_VALUE_TAGGED(vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:312
  if (rehashedQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:319
    T18 = primitive_machine_word_shift_right(T9,2);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:319
    T16_0 = primitive_machine_word_shift_left_with_overflow_byref(1,T18,(DWORD*)&T16_1,(D*)&T16_2);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:319
    lowF17 = T16_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:318
    T19 = primitive_machine_word_logior(T10,lowF17);
    T3 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:315
    T13 = primitive_machine_word_shift_right(T9,2);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:315
    T11_0 = primitive_machine_word_shift_left_with_overflow_byref(1,T13,(DWORD*)&T11_1,(D*)&T11_2);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:315
    lowF12 = T11_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:314
    T14 = primitive_machine_word_lognot(lowF12);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:313
    T15 = primitive_machine_word_logand(T10,T14);
    T3 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:312
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:322
  REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T3, vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:324
  T4_0 = rehashedQ_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:303
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktry_to_puthash_oldVKiI (D tv_, D token_, D index_, D new_value_) {
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
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
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T32;
  D T33;
  D T34;
  D T35_0;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  DWORD T46;
  D T47;
  D res_;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55_0;
  D T56;
  D T57;
  D T58;
  D T59;
  _KLsimple_object_vectorGVKd_2 T60 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T61_0;
  D T62_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1203
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T11 = SLOT_VALUE_INITD(tv_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T16 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T17 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T18 = primitive_idQ(T17,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T19 = primitive_not(T18);
    T15 = T19;
  } else {
    T15 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T20 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T21_0 = KmemberQVKdMM3I(&KJlock_, T20, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T22 = T21_0;
    T23 = T22;
  } else {
    T23 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T24 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T12 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_puthash_oldF355, 1, T11);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    CALL1(T24, T12);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T13 = primitive_wait_for_simple_lock(T11);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T26 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T27 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T28 = primitive_idQ(T27,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T29 = primitive_not(T28);
    T25 = T29;
  } else {
    T25 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T30 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T31_0 = KmemberQVKdMM3I(&KJlock_, T30, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T32 = T31_0;
    T33 = T32;
  } else {
    T33 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T33 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T34 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T14 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_puthash_oldF354, 2, T13, T11);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    CALL1(T34, T14);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T36 = primitive_idQ(T13,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T36 != &KPfalseVKi) {
    T40 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T37 = primitive_idQ(T13,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    if (T37 != &KPfalseVKi) {
      T39 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T35_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T11, T13);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T38 = T35_0;
      T39 = T38;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T40 = T39;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T40 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    ENTER_UNWIND_FRAME(T5);
    if (!nlx_setjmp(FRAME_DEST(T5))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1217
      T41 = SLOT_VALUE_INITD(tv_, 9);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1218
      T43 = SLOT_VALUE_INITD(token_, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1218
      if (T43 != &KPfalseVKi) {
        T45 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1218
        T44 = SLOT_VALUE_INITD(tv_, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1218
        T42 = primitive_idQ(token_,T44);
        T45 = T42;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1218
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1218
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1219
        T46 = primitive_cast_integer_as_raw(index_);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1219
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T41, 2, T46);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1220
        T6_0 = &KPtrueVKi;
        T8_0 = T6_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1222
        T7_0 = &KPfalseVKi;
        T8_0 = T7_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1218
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      FALL_THROUGH_UNWIND(T8_0);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T50 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    if (T50 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T51 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T52 = primitive_idQ(T51,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T53 = primitive_not(T52);
      T49 = T53;
    } else {
      T49 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    if (T49 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T54 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T55_0 = KmemberQVKdMM3I(&KJlock_, T54, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T56 = T55_0;
      T57 = T56;
    } else {
      T57 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    if (T57 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T58 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      T47 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_puthash_oldF353, 1, T11);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      CALL1(T58, T47);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    res_ = primitive_release_simple_lock(T11);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T59 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    if (T59 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
      Klock_release_result_errorYthreads_internalVdylanMM0I(T11, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    CONTINUE_UNWIND();
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T60.vector_element_[0] = &KJsynchronization_;
    T60.vector_element_[1] = T11;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T60);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T61_0 = KsignalVKdMM0I(T9, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T62_0 = T61_0;
    T10_0 = T62_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1203
  MV_SET_COUNT(1);
  return(T10_0);
}

static D Kanonymous_of_try_to_puthash_oldF355I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_try_to_puthash_oldF354I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_try_to_puthash_oldF353I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1215
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmake_table_lockVKiI () {
  D T0;
  D T1;
  D T2_0;
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  DWORD T7;
  DWORD T8;
  DWORD rmremainder_;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D lock_;
  D T15;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:590
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  T0 = Ttable_lock_pool_indexTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  T7 = primitive_cast_integer_as_raw(T0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  T8 = primitive_machine_word_add_signal_overflow(T7,4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  T10 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  rmremainder_ = primitive_machine_word_floorS_remainder(T10,20);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  T11 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:592
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:591
  Ttable_lock_pool_indexTVKi = T13;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:593
  T1 = Ttable_lock_pool_indexTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:593
  lock_ = KelementVKdMM11I(Dtable_lock_poolVKi, T1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:594
  if (lock_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:595
    T2_0 = lock_;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:595
    T19_0 = T2_0;
    T6_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    T3 = Kmake_simple_lockYthreads_primitivesVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    T4 = Ttable_lock_pool_indexTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    T15 = SLOT_VALUE_INITD(Dtable_lock_poolVKi, 0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    T16 = primitive_cast_integer_as_raw(T4);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    T17 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    T18 = primitive_machine_word_unsigned_less_thanQ(T16,T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T3, Dtable_lock_poolVKi, 1, T16);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
      Kelement_range_errorVKeI(Dtable_lock_poolVKi, T4);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:597
    T5_0 = T3;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:594
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:590
  MV_SET_COUNT(1);
  return(T6_0);
}

D Ktable_protocolVKdMM0I (D table_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1100
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1103
  T2_0 = &KEEVKd;
  T2_1 = &Kobject_hashVKd;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1100
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D Ktable_protocolVKdMM1I (D table_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1754
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1757
  T2_0 = &Kanonymous_of_table_protocolF385;
  T2_1 = &Kstring_hashVKe;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1754
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

static D Kanonymous_of_table_protocolF385I (D x_, D y_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1757
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1757
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T2 = CONGRUENT_CALL2(x_, y_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1757
  return(T2);
}

static D Kanonymous_of_gethashF408I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_gethashF407I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_gethashF406I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1158
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kkey_missing_errorVKiMM0I (D table_, D key_, D default_) {
  volatile D Uunwind_exceptionUPexit_32_;
  volatile D T5;
  volatile D Uoriginal_handlersU_;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10_0;
  volatile _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T12;
  volatile _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T14;
  volatile D T15_0;
  volatile _KLsimple_object_vectorGVKd_8 T16 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T17;
  volatile D T18;
  volatile _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T20;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1189
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_32_);
  if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_32_))) {
    T10_0 = FRAME_RETVAL(Uunwind_exceptionUPexit_32_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    T7 = MAKE_CLOSURE_INITD(&KUhandler_functionUF403, 5, Uoriginal_handlersU_, Uunwind_exceptionUPexit_32_, default_, key_, table_);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1196
    T11.vector_element_[0] = key_;
    T11.vector_element_[1] = table_;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1196
    T12 = primitive_copy_vector(&T11);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1195
    T13.vector_element_[0] = &KJformat_string_;
    T13.vector_element_[1] = &K401;
    T13.vector_element_[2] = &KJformat_arguments_;
    T13.vector_element_[3] = T12;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1195
    T14 = primitive_copy_vector(&T13);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    T16.vector_element_[0] = &KJtype_;
    T16.vector_element_[1] = &KLsimple_restartGVKd;
    T16.vector_element_[2] = &KJfunction_;
    T16.vector_element_[3] = T7;
    T16.vector_element_[4] = &KJtest_;
    T16.vector_element_[5] = &KPfalseVKi;
    T16.vector_element_[6] = &KJinit_arguments_;
    T16.vector_element_[7] = T14;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    T15_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T16, &KLsimple_restartGVKd, T7, &KPfalseVKi, T14);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    T17 = T15_0;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    T8 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    T18 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    SLOT_VALUE_SETTER(T17, T18, 0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    SLOT_VALUE_SETTER(T8, T18, 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    primitive_write_thread_variable(Tcurrent_handlersTVKi, T18);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    ENTER_UNWIND_FRAME(T9);
    if (!nlx_setjmp(FRAME_DEST(T9))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1192
      T19.vector_element_[0] = key_;
      T19.vector_element_[1] = table_;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1192
      T20 = KerrorVKdMM1I(&K402, &T19);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
      FALL_THROUGH_UNWIND(T20);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  T10_0 = T20;
    /* invalidate Uunwind_exceptionUPexit_32_ */
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1189
  MV_SET_COUNT(1);
  return(T10_0);
}

static D KUhandler_functionUF403I (D UdummyU_, D Unext_handlerU_) {
  D T3;
  D all_values_;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1197
  T3 = KgethashVKiI(CREF(4), CREF(3), CREF(2), &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  all_values_ = MV_GET_REST_AT(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  T5 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  T6 = NLX(CREF(1), T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1191
  return(T6);
}

D Ktry_to_remhashVKiI (D tv_, D token_, D index_) {
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
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
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T32;
  D T33;
  D T34;
  D T35_0;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  DADDR T42;
  D T43;
  D T44;
  DWORD T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  DWORD T54;
  DWORD T55;
  D T56;
  D T57;
  D res_;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65_0;
  D T66;
  D T67;
  D T68;
  D T69;
  _KLsimple_object_vectorGVKd_2 T70 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T71_0;
  D T72_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1346
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T11 = SLOT_VALUE_INITD(tv_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T16 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T17 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T18 = primitive_idQ(T17,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T19 = primitive_not(T18);
    T15 = T19;
  } else {
    T15 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T20 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T21_0 = KmemberQVKdMM3I(&KJlock_, T20, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T22 = T21_0;
    T23 = T22;
  } else {
    T23 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T24 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T12 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_remhashF420, 1, T11);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    CALL1(T24, T12);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T13 = primitive_wait_for_simple_lock(T11);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T26 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T27 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T28 = primitive_idQ(T27,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T29 = primitive_not(T28);
    T25 = T29;
  } else {
    T25 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T30 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T31_0 = KmemberQVKdMM3I(&KJlock_, T30, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T32 = T31_0;
    T33 = T32;
  } else {
    T33 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T33 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T34 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T14 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_remhashF419, 2, T13, T11);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    CALL1(T34, T14);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T36 = primitive_idQ(T13,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T36 != &KPfalseVKi) {
    T40 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T37 = primitive_idQ(T13,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    if (T37 != &KPfalseVKi) {
      T39 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T35_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T11, T13);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T38 = T35_0;
      T39 = T38;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T40 = T39;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T40 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    ENTER_UNWIND_FRAME(T4);
    if (!nlx_setjmp(FRAME_DEST(T4))) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1367
      T41 = SLOT_VALUE_INITD(tv_, 8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      T45 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      T44 = REPEATED_D_SLOT_VALUE_TAGGED(T41, 2, T45);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      T42 = primitive_cast_pointer_as_raw(T44);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      T43 = primitive_machine_word_equalQ(T42,0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      if (T43 != &KPfalseVKi) {
        T46 = Dtable_entry_deletedVKi;
      } else {
        T46 = T44;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      T47 = primitive_idQ(T46,Dtable_entry_deletedVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      if (T47 != &KPfalseVKi) {
        T5 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1369
        T49 = SLOT_VALUE_INITD(token_, 0);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1369
        if (T49 != &KPfalseVKi) {
          T51 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1369
          T50 = SLOT_VALUE_INITD(tv_, 3);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1369
          T48 = primitive_idQ(token_,T50);
          T51 = T48;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1369
        T5 = T51;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1372
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(Dtable_entry_deletedVKi, T41, 2, T45);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1373
        T52 = SLOT_VALUE_INITD(tv_, 9);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1374
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(Dtable_entry_deletedVKi, T52, 2, T45);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1375
        T53 = SLOT_VALUE_INITD(tv_, 6);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1375
        T54 = primitive_cast_integer_as_raw(T53);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1375
        T55 = primitive_machine_word_add_signal_overflow(T54,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1375
        T56 = primitive_cast_raw_as_integer(T55);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1375
        SLOT_VALUE_SETTER(T56, tv_, 6);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1376
        T6_0 = &KPtrueVKi;
        T8_0 = T6_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1378
        T7_0 = &KPfalseVKi;
        T8_0 = T7_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1368
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      FALL_THROUGH_UNWIND(T8_0);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T60 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    if (T60 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T61 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T62 = primitive_idQ(T61,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T63 = primitive_not(T62);
      T59 = T63;
    } else {
      T59 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    if (T59 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T64 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T65_0 = KmemberQVKdMM3I(&KJlock_, T64, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T66 = T65_0;
      T67 = T66;
    } else {
      T67 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    if (T67 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T68 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      T57 = MAKE_CLOSURE_INITD(&Kanonymous_of_try_to_remhashF418, 1, T11);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      CALL1(T68, T57);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    res_ = primitive_release_simple_lock(T11);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T69 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    if (T69 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
      Klock_release_result_errorYthreads_internalVdylanMM0I(T11, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    CONTINUE_UNWIND();
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T70.vector_element_[0] = &KJsynchronization_;
    T70.vector_element_[1] = T11;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T70);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T71_0 = KsignalVKdMM0I(T9, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T72_0 = T71_0;
    T10_0 = T72_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1346
  MV_SET_COUNT(1);
  return(T10_0);
}

static D Kanonymous_of_try_to_remhashF420I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_try_to_remhashF419I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_try_to_remhashF418I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1351
  MV_SET_COUNT(1);
  return(T6_0);
}

D Ktable_finished_stateQVKiI (D table_, D state_, D limit_) {
  D T3;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
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
  D T41_0;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D res_;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62_0;
  D T63;
  D T64;
  D T65;
  D T66;
  _KLsimple_object_vectorGVKd_2 T67 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1581
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1585
  T12 = SLOT_VALUE_INITD(state_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1585
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1585
  T14 = primitive_machine_word_less_thanQ(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1585
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1586
    T3 = CALL1(&KweakQVKi, table_);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1586
    T15 = primitive_not(T3);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1586
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1588
      T16 = SLOT_VALUE_INITD(state_, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      T17 = SLOT_VALUE_INITD(T16, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      T22 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T22 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T23 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T24 = primitive_idQ(T23,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T25 = primitive_not(T24);
        T21 = T25;
      } else {
        T21 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T26 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T27_0 = KmemberQVKdMM3I(&KJlock_, T26, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T28 = T27_0;
        T29 = T28;
      } else {
        T29 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T30 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T18 = MAKE_CLOSURE_INITD(&Kanonymous_of_table_finished_stateQF444, 1, T17);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        CALL1(T30, T18);
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      T19 = primitive_wait_for_simple_lock(T17);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      T32 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T33 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T34 = primitive_idQ(T33,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T35 = primitive_not(T34);
        T31 = T35;
      } else {
        T31 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T36 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T37_0 = KmemberQVKdMM3I(&KJlock_, T36, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T38 = T37_0;
        T39 = T38;
      } else {
        T39 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T40 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T20 = MAKE_CLOSURE_INITD(&Kanonymous_of_table_finished_stateQF443, 2, T19, T17);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        CALL1(T40, T20);
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      T42 = primitive_idQ(T19,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T42 != &KPfalseVKi) {
        T46 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T43 = primitive_idQ(T19,(D) 5);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        if (T43 != &KPfalseVKi) {
          T45 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T41_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T17, T19);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T44 = T41_0;
          T45 = T44;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T46 = T45;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      if (T46 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        ENTER_UNWIND_FRAME(T5);
        if (!nlx_setjmp(FRAME_DEST(T5))) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1590
          T47 = SLOT_VALUE_INITD(state_, 5);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1590
          T48 = SLOT_VALUE_INITD(T16, 4);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1590
          T49 = primitive_idQ(T47,T48);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1590
          if (T49 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1591
            T50 = SLOT_VALUE_INITD(state_, 6);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1591
            T51 = SLOT_VALUE_INITD(T16, 6);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1591
            T52 = primitive_idQ(T50,T51);
            T6 = T52;
          } else {
            T6 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1590
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1590
          if (T6 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1592
            SLOT_VALUE_SETTER((D) 1, T16, 6);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1593
            T53 = SLOT_VALUE_INITD(state_, 4);
            // /opt/opendylan-2013.1/sources/dylan/table.dylan:1593
            SLOT_VALUE_SETTER(T53, T16, 4);
          }
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1590
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          FALL_THROUGH_UNWIND(&KPfalseVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T57 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        if (T57 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T58 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T59 = primitive_idQ(T58,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T60 = primitive_not(T59);
          T56 = T60;
        } else {
          T56 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        if (T56 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T61 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T62_0 = KmemberQVKdMM3I(&KJlock_, T61, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T63 = T62_0;
          T64 = T63;
        } else {
          T64 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        if (T64 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T65 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          T54 = MAKE_CLOSURE_INITD(&Kanonymous_of_table_finished_stateQF442, 1, T17);
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          CALL1(T65, T54);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        res_ = primitive_release_simple_lock(T17);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T66 = primitive_idQ(res_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        if (T66 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
          Klock_release_result_errorYthreads_internalVdylanMM0I(T17, res_);
        }
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        CONTINUE_UNWIND();
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        T67.vector_element_[0] = &KJsynchronization_;
        T67.vector_element_[1] = T17;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T7 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T67);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
        KsignalVKdMM0I(T7, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1596
      T8_0 = &KPtrueVKi;
      T9_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1586
      T4_0 = T15;
      T9_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1586
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1585
    T10_0 = &KPfalseVKi;
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1585
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1581
  MV_SET_COUNT(1);
  return(T11_0);
}

D Ktable_current_elementVKiI (D table_, D state_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  DADDR T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  D T20;
  DADDR T21;
  D T22;
  D T23;
  DWORD T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  _KLsimple_object_vectorGVKd_1 T33 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T34;
  D T35;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1610
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1611
  T10 = SLOT_VALUE_INITD(state_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1612
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1612
  T12 = primitive_machine_word_less_thanQ(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1612
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1613
    T3 = Kexhausted_iterationVKiI(table_);
    T9 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1615
    T13 = SLOT_VALUE_INITD(state_, 0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1616
    T14 = SLOT_VALUE_INITD(T13, 9);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1616
    T18 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1616
    T17 = REPEATED_D_SLOT_VALUE_TAGGED(T14, 2, T18);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1616
    T15 = primitive_cast_pointer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1616
    T16 = primitive_machine_word_equalQ(T15,0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1616
    if (T16 != &KPfalseVKi) {
      T19 = Dtable_entry_deletedVKi;
    } else {
      T19 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1616
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1617
    T20 = SLOT_VALUE_INITD(T13, 8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    T24 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    T23 = REPEATED_D_SLOT_VALUE_TAGGED(T20, 2, T24);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    T21 = primitive_cast_pointer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    T22 = primitive_machine_word_equalQ(T21,0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    if (T22 != &KPfalseVKi) {
      T25 = Dtable_entry_deletedVKi;
    } else {
      T25 = T23;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    T26 = primitive_idQ(T25,Dtable_entry_deletedVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    if (T26 != &KPfalseVKi) {
      T4 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1625
      T27 = SLOT_VALUE_INITD(state_, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1625
      T29 = SLOT_VALUE_INITD(T27, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1625
      if (T29 != &KPfalseVKi) {
        T31 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1625
        T30 = SLOT_VALUE_INITD(T13, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1625
        T28 = primitive_idQ(T27,T30);
        T31 = T28;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1625
      T4 = T31;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1626
      T5 = T19;
      MV_SET_ELT(0, T19);
      MV_SET_COUNT(1);
      T8 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1640
      T32 = primitive_idQ(T19,Dtable_entry_deletedVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1640
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1641
        T33.vector_element_[0] = table_;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1641
        T34 = KerrorVKdMM1I(&K433, &T33);
        T7 = T34;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1643
        T35 = SLOT_VALUE_INITD(state_, 2);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1643
        T6 = KgethashVKiI(table_, T35, T19, &KPtrueVKi);
        T7 = T6;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1640
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1624
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1612
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1610
  return(T9);
}

D Ktable_current_element_setterVKiI (D value_, D table_, D state_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  D T18;
  DADDR T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1649
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1651
  T8 = SLOT_VALUE_INITD(table_, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1651
  T11 = primitive_instanceQ(value_,T8);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1651
  if (T11 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1651
    T10.vector_element_[0] = &KJvalue_;
    T10.vector_element_[1] = value_;
    T10.vector_element_[2] = &KJtype_;
    T10.vector_element_[3] = T8;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1651
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T10);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1651
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T9, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1651
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1652
  T12 = SLOT_VALUE_INITD(state_, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1653
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1653
  T14 = primitive_machine_word_less_thanQ(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1653
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1654
    T4 = Kexhausted_iterationVKiI(table_);
    T7 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1661
    T15 = SLOT_VALUE_INITD(state_, 0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1662
    T16 = SLOT_VALUE_INITD(T15, 9);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1662
    T17 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1662
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, T16, 2, T17);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1663
    T18 = SLOT_VALUE_INITD(T15, 8);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1669
    primitive_synchronize_side_effects();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    T22 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    T21 = REPEATED_D_SLOT_VALUE_TAGGED(T18, 2, T22);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    T19 = primitive_cast_pointer_as_raw(T21);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    T20 = primitive_machine_word_equalQ(T19,0);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    if (T20 != &KPfalseVKi) {
      T23 = Dtable_entry_deletedVKi;
    } else {
      T23 = T21;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    T24 = primitive_idQ(T23,Dtable_entry_deletedVKi);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    if (T24 != &KPfalseVKi) {
      T5 = T24;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1678
      T25 = SLOT_VALUE_INITD(state_, 1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1678
      T27 = SLOT_VALUE_INITD(T25, 0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1678
      if (T27 != &KPfalseVKi) {
        T29 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1678
        T28 = SLOT_VALUE_INITD(T15, 3);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:1678
        T26 = primitive_idQ(T25,T28);
        T29 = T26;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1678
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1678
      T30 = primitive_not(T29);
      T5 = T30;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1679
      T31 = SLOT_VALUE_INITD(state_, 2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:1679
      KputhashVKiI(value_, table_, T31);
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1677
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1681
    T6 = value_;
    MV_SET_ELT(0, value_);
    MV_SET_COUNT(1);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1653
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1649
  return(T7);
}

static D Kanonymous_of_table_finished_stateQF444I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_table_finished_stateQF443I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_table_finished_stateQF442I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1589
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_sizeF461I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_sizeF460I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_sizeF459I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1126
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_emptyQF470I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T5.vector_element_[0] = &K142;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_emptyQF469I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T5.vector_element_[0] = &K140;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_emptyQF468I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1118
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLstring_tableGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_, D Uunique_initial_entries_, D Uunique_grow_size_function_, D Uunique_weakQ_) {
  D T7;
  D Uunique_element_typeF8;
  D Uunique_initial_entriesF9;
  D Uunique_grow_size_functionF10;
  D Uunique_weakQF11;
  D T12_0;
  D T13_0;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1751
  T7 = primitive_object_allocate_filled(6,&KLstring_tableGVKeW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_element_typeF8 = Uunique_element_type_;
  SLOT_VALUE_SETTER(Uunique_element_typeF8, T7, 0);
  T14 = SLOT_VALUE_INITD(&Ktable_vectorVKeHLtableG, 0);
  T15 = primitive_cast_integer_as_raw(T14);
  T16 = primitive_machine_word_logbitQ(4,T15);
  if (T16 != &KPfalseVKi) {
    T17 = SLOT_VALUE_INITD(&Ktable_vectorVKeHLtableG, 1);
    T19 = T17;
  } else {
    T13_0 = Kinstall_and_return_make_method_init_dataVKiI(&Ktable_vectorVKeHLtableG);
    T18 = T13_0;
    T19 = T18;
  }
  SLOT_VALUE_SETTER(T19, T7, 1);
  Uunique_initial_entriesF9 = Uunique_initial_entries_;
  SLOT_VALUE_SETTER(Uunique_initial_entriesF9, T7, 2);
  Uunique_grow_size_functionF10 = Uunique_grow_size_function_;
  SLOT_VALUE_SETTER(Uunique_grow_size_functionF10, T7, 3);
  Uunique_weakQF11 = Uunique_weakQ_;
  SLOT_VALUE_SETTER(Uunique_weakQF11, T7, 4);
  APPLY2(&KinitializeVKd, T7, init_args_);
  T12_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:1751
  MV_SET_COUNT(1);
  return(T12_0);
}

D KLtable_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_table_vector_lock_, D Uunique_test_function_, D Uunique_hash_function_, D Uunique_additions_limit_, D Uunique_entry_keys_, D Uunique_entry_values_) {
  D T9;
  D Uunique_table_vector_lockF10;
  D T11;
  D Uunique_test_functionF12;
  D T13;
  D Uunique_hash_functionF14;
  D T15;
  D Uunique_additions_limitF16;
  D T17;
  D Uunique_entry_keysF18;
  D T19;
  D Uunique_entry_valuesF20;
  D T21;
  D Uunique_table_vector_lockF22;
  D Uunique_test_functionF23;
  D Uunique_hash_functionF24;
  D T25;
  D Uunique_additions_limitF26;
  D T27;
  D Uunique_entry_keysF28;
  D Uunique_entry_valuesF29;
  D T30;
  D T31_0;
  D T32;
  _KLsimple_object_vectorGVKd_1 T33 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T34;
  D T35;
  _KLsimple_object_vectorGVKd_1 T36 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T37;
  D T38;
  _KLsimple_object_vectorGVKd_1 T39 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T40;
  D T41;
  _KLsimple_object_vectorGVKd_1 T42 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T43;
  D T44;
  _KLsimple_object_vectorGVKd_1 T45 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T46;
  D T47;
  _KLsimple_object_vectorGVKd_1 T48 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T49;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  T32 = primitive_idQ(Uunique_table_vector_lock_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  if (T32 != &KPfalseVKi) {
    T33.vector_element_[0] = IKJtable_lock_;
    T34 = KerrorVKdMM1I(&K151, &T33);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
    T9 = T34;
    Uunique_table_vector_lockF10 = T9;
  } else {
    Uunique_table_vector_lockF10 = Uunique_table_vector_lock_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  T35 = primitive_idQ(Uunique_test_function_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  if (T35 != &KPfalseVKi) {
    T36.vector_element_[0] = &KJtest_function_;
    T37 = KerrorVKdMM1I(&K151, &T36);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
    T11 = T37;
    Uunique_test_functionF12 = T11;
  } else {
    Uunique_test_functionF12 = Uunique_test_function_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  T38 = primitive_idQ(Uunique_hash_function_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  if (T38 != &KPfalseVKi) {
    T39.vector_element_[0] = &KJhash_function_;
    T40 = KerrorVKdMM1I(&K151, &T39);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
    T13 = T40;
    Uunique_hash_functionF14 = T13;
  } else {
    Uunique_hash_functionF14 = Uunique_hash_function_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  T41 = primitive_idQ(Uunique_additions_limit_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  if (T41 != &KPfalseVKi) {
    T42.vector_element_[0] = &KJrehash_limit_;
    T43 = KerrorVKdMM1I(&K151, &T42);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
    T15 = T43;
    Uunique_additions_limitF16 = T15;
  } else {
    Uunique_additions_limitF16 = Uunique_additions_limit_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  T44 = primitive_idQ(Uunique_entry_keys_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  if (T44 != &KPfalseVKi) {
    T45.vector_element_[0] = &KJkeys_;
    T46 = KerrorVKdMM1I(&K151, &T45);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
    T17 = T46;
    Uunique_entry_keysF18 = T17;
  } else {
    Uunique_entry_keysF18 = Uunique_entry_keys_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  T47 = primitive_idQ(Uunique_entry_values_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  if (T47 != &KPfalseVKi) {
    T48.vector_element_[0] = &KJvalues_;
    T49 = KerrorVKdMM1I(&K151, &T48);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
    T19 = T49;
    Uunique_entry_valuesF20 = T19;
  } else {
    Uunique_entry_valuesF20 = Uunique_entry_values_;
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  T21 = primitive_object_allocate_filled(13,&KLtable_vectorGVKeW,12,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_table_vector_lockF22 = Uunique_table_vector_lockF10;
  SLOT_VALUE_SETTER(Uunique_table_vector_lockF22, T21, 0);
  Uunique_test_functionF23 = Uunique_test_functionF12;
  SLOT_VALUE_SETTER(Uunique_test_functionF23, T21, 1);
  Uunique_hash_functionF24 = Uunique_hash_functionF14;
  SLOT_VALUE_SETTER(Uunique_hash_functionF24, T21, 2);
  T25 = K501I();
  SLOT_VALUE_SETTER(T25, T21, 3);
  SLOT_VALUE_SETTER((D) 1, T21, 4);
  Uunique_additions_limitF26 = Uunique_additions_limitF16;
  SLOT_VALUE_SETTER(Uunique_additions_limitF26, T21, 5);
  SLOT_VALUE_SETTER((D) 1, T21, 6);
  T27 = K500I();
  SLOT_VALUE_SETTER(T27, T21, 7);
  Uunique_entry_keysF28 = Uunique_entry_keysF18;
  SLOT_VALUE_SETTER(Uunique_entry_keysF28, T21, 8);
  Uunique_entry_valuesF29 = Uunique_entry_valuesF20;
  SLOT_VALUE_SETTER(Uunique_entry_valuesF29, T21, 9);
  SLOT_VALUE_SETTER((D) 1, T21, 10);
  T30 = K499I();
  SLOT_VALUE_SETTER(T30, T21, 11);
  T31_0 = T21;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:337
  MV_SET_COUNT(1);
  return(T31_0);
}

static D K501I () {
  D T0_0;
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T1 = Kmake_rehash_tokenVKiI(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T2 = T1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T0_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K500I () {
  D T0_0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T2_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K499I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  init_value_ = Dempty_rehashed_bitsVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:566
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K528I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:358
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:358
  init_value_ = Dempty_rehashed_bitsVKi;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:358
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:358
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K556I () {
  D T0_0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:352
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:352
  T2_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:352
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:352
  T0_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:352
  MV_SET_COUNT(1);
  return(T0_0);
}

static D K591I () {
  D T0_0;
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:345
  T1 = Kmake_rehash_tokenVKiI(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:345
  T2 = T1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:345
  T0_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:345
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kcompute_entry_countVKiI (D desired_) {
  D T2_0;
  D T3_0;
  D T4_0;
  DWORD T5;
  D T6;
  D T7_0;
  D desiredF8T, desiredF8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DSFLT T13;
  DWORD T14;
  DWORD T15;
  DSINT T16;
  DSFLT T17;
  DWORD T18;
  DWORD T19;
  DSFLT T20;
  DSFLT T21;
  DSFLT T22;
  D T23;
  DWORD T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;
  _KLsimple_object_vectorGVKd_1 T32 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T33_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:94
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:98
  desiredF8T = desired_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:98
    desiredF8 = desiredF8T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:98
    T9 = desiredF8;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:96
    T5 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:96
    T6 = primitive_machine_word_less_thanQ(T5,1);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:96
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:98
      desiredF8T = (D) 1;
      goto L0;
      T4_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T15 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T14 = primitive_machine_word_shift_right(T15,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T13 = primitive_integer_as_single_float(T14);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T17 = primitive_single_float_divide(T13,0.7500000);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T16 = primitive_single_float_as_integer(T17);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T18 = primitive_machine_word_shift_left_signal_overflow(T16,2);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T19 = primitive_machine_word_logior(T18,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T20 = primitive_integer_as_single_float(T16);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T21 = primitive_single_float_subtract(T17,T20);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T22 = primitive_single_float_multiply(0.7500000,T21);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T23 = primitive_single_float_equalsQ(T22,0.0);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      if (T23 != &KPfalseVKi) {
        T10 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
        T24 = primitive_cast_integer_as_raw(T9);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
        T25 = primitive_machine_word_less_thanQ(1,T24);
        T10 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
        T11 = primitive_machine_word_add_signal_overflow(T19,4);
        T12 = T11;
      } else {
        T12 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T28 = primitive_cast_raw_as_integer(T12);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      T27 = primitive_machine_word_less_thanQ(125,T12);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      if (T27 != &KPfalseVKi) {
        T26 = T28;
      } else {
        T26 = (D) 125;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:101
      T30 = primitive_cast_integer_as_raw(Dentry_lastVKi);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:101
      T29 = REPEATED_D_SLOT_VALUE_TAGGED(Dentry_countsVKi, 1, T30);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:101
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T31 = CONGRUENT_CALL2(T29, T26);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:101
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:105
        T32.vector_element_[0] = T9;
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:105
        T33_0 = KerrorVKdMM1I(&K613, &T32);
        T3_0 = T33_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:102
        T2_0 = Ksearch_for_entry_countVKiI(T26);
        T3_0 = T2_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:101
      T4_0 = T3_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:96
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:94
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksearch_for_entry_countVKiI (D needed_) {
  D T1_0;
  D elt_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  DWORD T17;
  D T18;
  DWORD lowerF19;
  DWORD upperF20;
  D T21;
  DWORD lowerF22T, lowerF22;
  DWORD upperF23T, upperF23;
  DWORD T24;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:69
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:76
  T24 = primitive_cast_integer_as_raw(Dentry_lastVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:82
  lowerF22T = 1;
  upperF23T = T24;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:84
    lowerF22 = lowerF22T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:84
    upperF23 = upperF23T;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:82
    lowerF19 = lowerF22;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:82
    upperF20 = upperF23;
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:76
    T5 = primitive_machine_word_equalQ(lowerF19,upperF20);
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:76
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:77
      T6 = REPEATED_D_SLOT_VALUE_TAGGED(Dentry_countsVKi, 1, lowerF19);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:77
      T7 = T6;
      MV_SET_ELT(0, T6);
      MV_SET_COUNT(1);
      T4 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:79
      T8 = primitive_machine_word_logxor(upperF20,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:79
      T9 = primitive_machine_word_add_signal_overflow(lowerF19,T8);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:79
      T10 = primitive_machine_word_shift_right(T9,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:79
      T11 = primitive_machine_word_logand(T10,-4);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:79
      T12 = primitive_machine_word_logior(T11,1);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:80
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(Dentry_countsVKi, 1, T12);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:80
      elt_ = T13;
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:81
      T14 = primitive_cast_integer_as_raw(elt_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:81
      T15 = primitive_cast_integer_as_raw(needed_);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:81
      T16 = primitive_machine_word_less_thanQ(T14,T15);
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:81
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:82
        T17 = primitive_machine_word_add_signal_overflow(T12,4);
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:82
        lowerF22T = T17;
        upperF23T = upperF23;
        goto L0;
        T3 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/table.dylan:84
        lowerF22T = lowerF19;
        upperF23T = T12;
        goto L0;
        T3 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/table.dylan:81
      T4 = T3;
    }
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:76
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:69
  T1_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:69
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kentry_key_setterVKiMM0I (D new_key_, D keys_, D index_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:391
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:394
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:394
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_key_, keys_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:394
  T4_0 = new_key_;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:391
  MV_SET_COUNT(1);
  return(T4_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_table_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJrehashingQ_);
    if (T0 != &KJrehashingQ_) {
      primitive_slot_value_setter(T0, &KrehashingQVKiHLrehash_tokenG, 3);
      primitive_repeated_slot_value_setter(T0, &K124, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K123, 1, 0);
      IKJrehashingQ_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJindex_);
    if (T0 != &KJindex_) {
      IKJindex_ = T0;
      primitive_slot_value_setter(T0, &Kstate_indexVKiHLiteration_stateG, 3);
      primitive_repeated_slot_value_setter(T0, &K160, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K159, 1, 6);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJadditions_);
    if (T0 != &KJadditions_) {
      IKJadditions_ = T0;
      primitive_slot_value_setter(T0, &Kstate_initial_additionsVKiHLiteration_stateG, 3);
      primitive_repeated_slot_value_setter(T0, &K160, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K159, 1, 10);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdeletions_);
    if (T0 != &KJdeletions_) {
      IKJdeletions_ = T0;
      primitive_slot_value_setter(T0, &Kstate_initial_deletionsVKiHLiteration_stateG, 3);
      primitive_repeated_slot_value_setter(T0, &K160, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K159, 1, 12);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJpartner_);
    if (T0 != &KJpartner_) {
      primitive_repeated_slot_value_setter(T0, &K321, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K320, 1, 0);
      primitive_slot_value_setter(T0, &KpartnerVKiHLentry_vectorG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsize_in_words_);
    if (T0 != &KJsize_in_words_) {
      primitive_slot_value_setter(T0, &Ksize_in_wordsVKiHLrehashed_bitsG, 3);
      primitive_repeated_slot_value_setter(T0, &K627, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K626, 1, 0);
      IKJsize_in_words_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJconcrete_class_);
    if (T0 != &KJconcrete_class_) {
      IKJconcrete_class_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtable_lock_);
    if (T0 != &KJtable_lock_) {
      IKJtable_lock_ = T0;
      primitive_slot_value_setter(T0, &Ktable_vector_lockVKiHLtable_vectorG, 3);
      primitive_repeated_slot_value_setter(T0, &K505, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K504, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_table_for_user () {
{
  D T0;
  D T1;
  DWORD T2;
  DWORD T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:63
  T1 = SLOT_VALUE_INITD(Dentry_countsVKi, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:63
  T2 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:63
  T3 = primitive_machine_word_subtract_signal_overflow(T2,4);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:63
  T4 = primitive_cast_raw_as_integer(T3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:63
  Dentry_lastVKi = T4;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:63
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:293
  T3.vector_element_[0] = &KJsize_;
  T3.vector_element_[1] = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:293
  T2_0 = KLrehashed_bitsGZ32ZconstructorVKiMM0I(&KLrehashed_bitsGVKi, &T3, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:293
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:293
  Dempty_rehashed_bitsVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:293
  T0 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:466
  T2_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:466
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:466
  Ddefault_hash_stateVKi = primitive_allocate_thread_variable(T1);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:466
  T0 = &KPfalseVKi;
  goto I5;
}
I5:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:515
  T2_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:515
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:515
  Ddummy_hash_stateVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:515
  T0 = &KPfalseVKi;
  goto I6;
}
I6:

{
  D T0;
  D T1_0;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:584
  T1_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 81);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:584
  T2 = T1_0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:583
  Dtable_lock_poolVKi = T2;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:583
  T0 = &KPfalseVKi;
  goto I7;
}
I7:

{
  D T0;
  D T1;
  D T2;
  DWORD T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
  T0 = Kmake_simple_lockYthreads_primitivesVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
  T2 = SLOT_VALUE_INITD(Dtable_lock_poolVKi, 0);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
  T4 = primitive_machine_word_unsigned_less_thanQ(1,T3);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T0, Dtable_lock_poolVKi, 1, 1);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
    Kelement_range_errorVKeI(Dtable_lock_poolVKi, (D) 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:588
  T1 = &KPfalseVKi;
  goto I8;
}
I8:

{
  D T0;
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/table.dylan:623
  T2 = KelementVKdMM11I(Dtable_lock_poolVKi, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:622
  T0 = Kmake_table_vectorVKiI((D) 1, &Kuninitialized_table_testVKi, &Kuninitialized_table_hashVKi, T2, &KPtrueVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:621
  Tinitial_table_vectorTVKi = T0;
  // /opt/opendylan-2013.1/sources/dylan/table.dylan:621
  T1 = &KPfalseVKi;
  goto I9;
}
I9:

  return;
}


/* eof */
