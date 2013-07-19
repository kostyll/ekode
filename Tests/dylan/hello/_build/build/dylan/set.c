#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
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
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLobject_tableGVKd;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
  D head_;
  D tail_;
} _KLpairGVKd;

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
} _KLinstance_slot_descriptorGVKe;

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
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(56);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(19);

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

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLlambdaGVKe;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
  DWORD mps_w0_;
  DWORD mps_w1_;
} _KLhash_stateGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimmutable_errorGVKi;

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
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLnot_found_errorGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_set_typeGVKe;

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
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_explicit_key_collectionGVKd;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
} _KLsetGVKe;

typedef struct {
  D wrapper;
  D set_elements_;
} _KLobject_setGVKe;


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
D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
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
D Kremove_all_keysXVKeMM0I (D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lobject_setG_typesVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_0;
D Kinstall_and_return_make_method_init_dataVKiI (D);
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_62;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_35;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJvaluesQ_;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_0;
D KEEVKdI (D, D);
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_0;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_methodGVKe KEEVKd;
D Krehash_tableVKeI (D, D, D);
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsymbolGVKd KJlock_;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D, D);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D, D);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLsymbolGVKd KJtest_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D Kremove_keyXVKdMM0I (D, D);
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLhash_stateGVKe;
extern _KLmm_wrapperGVKi_1 KLhash_stateGVKeW;
D KLhash_stateGZ32ZconstructorVKiMM0I (D, D);
D KfullQVKiI (D);
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_0;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
D Kmake_initial_stateVKiI (D);
extern _KLsimple_methodGVKe Ktable_next_stateVKi;
extern _KLsimple_methodGVKe Ktable_current_keyVKi;
extern _KLsimple_methodGVKe Ktable_copy_stateVKi;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLimmutable_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLimmutable_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLiteration_stateGVKi;
extern _KLmm_wrapperGVKi_0 KLiteration_stateGVKiW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_0;
D KlistVKdI (D);
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLnot_found_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLnot_found_errorGVKeW;
extern _KLsymbolGVKd KJdefault_;
extern _KLincremental_generic_functionGVKe Kelement_typeVKe;
D Kobject_classVKdI (D);
extern _KLsymbolGVKd KJclass_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLlimited_set_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_set_typeGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsetG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_0;
D KsizeVKdMM39I (D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLclassGVKd KLmutable_explicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_explicit_key_collectionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_largeVKiI (D, D);
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Ddummy_hash_stateVKi;
extern D Dtable_entry_deletedVKi;
extern D Dtable_entry_emptyVKi;
extern D Dsecondary_stridesVKi;
extern D Ddefault_hash_stateVKi;

/* Defined object declarations */

extern _KLclassGVKd KLsetGVKe;
extern _KLmm_wrapperGVKi_0 KLsetGVKeW;
extern _KLclassGVKd KLobject_setGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_setGVKeW;
extern _KLsimple_methodGVKe KsizeVKdMM40;
D KsizeVKdMM40I (D set_);
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM22;
D Ktype_for_copyVKdMM22I (D x_);
extern _KLkeyword_methodGVKe KelementVKdMM33;
D KelementVKdMM33I (D, D, D, D);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM32;
D Kforward_iteration_protocolVKdMM32I (D set_);
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kkey_testVKdMM6;
D Kkey_testVKdMM6I (D);
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe KaddXVKdMM14;
D KaddXVKdMM14I (D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM14;
D KremoveXVKdMM14I (D, D, D, D, D);
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe KmemberQVKdMM5;
D KmemberQVKdMM5I (D, D, D, D);
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Kelement_setterVKdMM29;
D Kelement_setterVKdMM29I (D, D, D);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_1;
extern _KLkeyword_methodGVKe KinitializeVKdMM30;
D KinitializeVKdMM30I (D, D, D);
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_36;
extern _KLkeyword_methodGVKe KmakeVKdMM60;
D KmakeVKdMM60I (D class_, D all_keys_);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_63;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_64;
D KLobject_setGZ32ZconstructorVKiMM0I (D, D);
extern _KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_1;
extern _KLsimple_methodGVKe Kremove_all_keysXVKeMM1;
D Kremove_all_keysXVKeMM1I (D);
static _KLsignatureGVKe K42;
extern _KLinstance_slot_descriptorGVKe Kset_elementsVKiHLobject_setG;
static _KLpairGVKd K44;
static _KLlambdaGVKe Kslot_initializerF55;
static D Kslot_initializerF55I ();
extern _KLsealed_generic_functionGVKe Kset_elementsVKi;
extern _KLsealed_generic_functionGVKe Kset_elements_setterVKi;
extern _KLsetter_methodGVKi Kset_elements_setterVKiMM0;
static _KLpairGVKd K50;
static _KLbyte_stringGVKd_19 K51;
extern _KLgetter_methodGVKi Kset_elementsVKiMM0;
static _KLpairGVKd K53;
static _KLbyte_stringGVKd_12 K54;
static _KLsignatureGVKe K56;
static _KLsingletonGVKd K57;
static _KLkeyword_signatureGVKe K58;
static _KLsimple_object_vectorGVKd_1 K59;
static _KLsingletonGVKd K60;
static _KLkeyword_signatureGVKe K61;
static _KLsimple_object_vectorGVKd_2 K62;
static _KLsimple_object_vectorGVKd_1 K63;
static _KLsignatureGVKe K64;
static _KLsimple_object_vectorGVKd_3 K65;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_memberQF77;
static D Kanonymous_of_memberQF77I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_memberQF75;
static D Kanonymous_of_memberQF75I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_memberQF72;
static D Kanonymous_of_memberQF72I ();
static _KLbyte_stringGVKd_31 K73;
static _KLsignatureGVKe K74;
static _KLbyte_stringGVKd_45 K76;
static _KLbyte_stringGVKd_33 K78;
static _KLkeyword_signatureAvaluesGVKi K79;
static _KLsimple_object_vectorGVKd_2 K80;
static _KLsimple_object_vectorGVKd_2 K81;
static _KLsimple_object_vectorGVKd_1 K82;
static _KLkeyword_signatureAvaluesGVKi K83;
static _KLsimple_object_vectorGVKd_4 K84;
static _KLsimple_object_vectorGVKd_2 K85;
static _KLsimple_object_vectorGVKd_2 K86;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_addXF95;
static D Kanonymous_of_addXF95I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_addXF94;
static D Kanonymous_of_addXF94I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_addXF93;
static D Kanonymous_of_addXF93I ();
static _KLsignatureAvaluesGVKi K96;
static _KLsignatureAvaluesGVKi K97;
extern _KLsimple_methodGVKe Kset_finished_stateQVKi;
D Kset_finished_stateQVKiI (D set_, D state_, D limit_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF102;
static D Kanonymous_of_forward_iteration_protocolF102I (D value_, D table_, D state_);
static _KLbyte_stringGVKd_56 K103;
static _KLsignatureGVKe K104;
static _KLsimple_object_vectorGVKd_3 K105;
static _KLsignatureAvaluesGVKi K106;
static _KLsimple_object_vectorGVKd_3 K107;
static _KLsignatureAvaluesGVKi K108;
static _KLsimple_object_vectorGVKd_8 K109;
static _KLbyte_stringGVKd_24 K110;
static _KLkeyword_signatureGVKe K111;
static _KLsimple_object_vectorGVKd_2 K112;
static _KLsimple_object_vectorGVKd_1 K113;
D Klimited_setVKiMM0I (D, D);
static _KLsymbolGVKd KJconcrete_class_;
static _KLbyte_stringGVKd_14 K116;
static _KLsignatureAvaluesGVKi K117;
static _KLsignatureAvaluesGVKi K118;
static _KLimplementation_classGVKe K119;
static _KLsimple_object_vectorGVKd_1 K120;
extern _KLkeyword_methodGVKe KLobject_setGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_1 K122;
static _KLsimple_object_vectorGVKd_9 K123;
static _KLkeyword_signatureAvaluesGVKi K124;
static _KLbyte_stringGVKd_12 K125;
static _KLimplementation_classGVKe K126;
static _KLsimple_object_vectorGVKd_1 K127;
static _KLsimple_object_vectorGVKd_8 K128;
static _KLbyte_stringGVKd_5 K129;
static _KLpairGVKd K130;

/* Indirection variables */

static D IKJconcrete_class_ = &KJconcrete_class_;

/* Variables */

D LsetGVKe = &KLsetGVKe;
D Dempty_table_set_elementsVKi = &KPunboundVKi;
D Lobject_setGVKe = &KLobject_setGVKe;
D set_finished_stateQVKi = &Kset_finished_stateQVKi;

/* Objects */

_KLclassGVKd KLsetGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K129,
  &K126,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsetGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K126,
  (D) 4097,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLobject_setGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K125,
  &K119,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLobject_setGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K119,
  (D) 4097,
  5,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe KsizeVKdMM40 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K118,
  &KsizeVKdMM40I
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_0,
  &KsizeVKdMM40
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K117,
  &Ktype_for_copyVKdMM22I
};

_KLkeyword_methodGVKe KelementVKdMM33 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K111,
  &key_mep_4,
  &KelementVKdMM33I,
  &K112
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_0,
  &KelementVKdMM33
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_0,
  &Kforward_iteration_protocolVKdMM32
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM32 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K108,
  &Kforward_iteration_protocolVKdMM32I
};

_KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kkey_testVKdMM6
};

_KLsimple_methodGVKe Kkey_testVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K97,
  &Kkey_testVKdMM6I
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_0,
  &KaddXVKdMM14
};

_KLsimple_methodGVKe KaddXVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K96,
  &KaddXVKdMM14I
};

_KLkeyword_methodGVKe KremoveXVKdMM14 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K83,
  &key_mep_5,
  &KremoveXVKdMM14I,
  &K84
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KremoveXVKdMM14
};

_KLkeyword_methodGVKe KmemberQVKdMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K79,
  &key_mep_4,
  &KmemberQVKdMM5I,
  &K80
};

_KLmethod_domainGVKe KmemberQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_0,
  &KmemberQVKdMM5
};

_KLsimple_methodGVKe Kelement_setterVKdMM29 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K64,
  &Kelement_setterVKdMM29I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_0,
  &Kelement_setterVKdMM29
};

_KLkeyword_methodGVKe KinitializeVKdMM30 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K61,
  &key_mep_3,
  &KinitializeVKdMM30I,
  &K62
};

_KLmethod_domainGVKe KinitializeVKdRD_dylanRD_36 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_35,
  &KinitializeVKdMM30
};

_KLkeyword_methodGVKe KmakeVKdMM60 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K58,
  &key_mep_2,
  &KmakeVKdMM60I,
  &KPempty_vectorVKi
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_63 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_62,
  (D) 5,
  &K57
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_64 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_63,
  &KmakeVKdMM60
};

_KLmethod_domainGVKe Kremove_all_keysXVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kremove_all_keysXVKeRD_dylanRD_0,
  &Kremove_all_keysXVKeMM1
};

_KLsimple_methodGVKe Kremove_all_keysXVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K42,
  &Kremove_all_keysXVKeMM1I
};

static _KLsignatureGVKe K42 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_Lobject_setG_typesVKi
};

_KLinstance_slot_descriptorGVKe Kset_elementsVKiHLobject_setG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF55,
  &KLobject_setGVKe,
  &KPfalseVKi,
  &Kset_elementsVKi,
  &Kset_elements_setterVKi,
  &KLobject_tableGVKd
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

static _KLlambdaGVKe Kslot_initializerF55 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K56,
  &Kslot_initializerF55I
};

_KLsealed_generic_functionGVKe Kset_elementsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K54,
  &K53,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kset_elements_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K51,
  &K50,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kset_elements_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kset_elementsVKiHLobject_setG
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &Kset_elements_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "set-elements-setter"
};

_KLgetter_methodGVKi Kset_elementsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kset_elementsVKiHLobject_setG
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &Kset_elementsVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "set-elements"
};

static _KLsignatureGVKe K56 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLsingletonGVKd K57 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobject_setGVKe
};

static _KLkeyword_signatureGVKe K58 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &K59,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K60
};

static _KLsingletonGVKd K60 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsetGVKe
};

static _KLkeyword_signatureGVKe K61 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 48496645,
  &KDsignature_Lobject_setG_typesVKi,
  &K63,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_1 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsize_
};

static _KLsignatureGVKe K64 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K65
};

static _KLsimple_object_vectorGVKd_3 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobject_setGVKe,
  &KLobjectGVKd
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_memberQF77 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K74,
  &Kanonymous_of_memberQF77I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_memberQF75 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K74,
  &Kanonymous_of_memberQF75I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_memberQF72 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K74,
  &Kanonymous_of_memberQF72I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K73 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K74 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_45 K76 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLbyte_stringGVKd_33 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLkeyword_signatureAvaluesGVKi K79 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K81,
  &K82,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLobject_setGVKe
};

static _KLsimple_object_vectorGVKd_1 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLkeyword_signatureAvaluesGVKi K83 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K85,
  &K86,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lobject_setG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KPfalseVKi,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_setGVKe,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_addXF95 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K74,
  &Kanonymous_of_addXF95I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_addXF94 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K74,
  &Kanonymous_of_addXF94I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_addXF93 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K74,
  &Kanonymous_of_addXF93I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K96 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K85,
  &KDsignature_Lobject_setG_typesVKi
};

static _KLsignatureAvaluesGVKi K97 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lobject_setG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

_KLsimple_methodGVKe Kset_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K106,
  &Kset_finished_stateQVKiI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_forward_iteration_protocolF102 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K104,
  &Kanonymous_of_forward_iteration_protocolF102I,
  (D) 1
};

static _KLbyte_stringGVKd_56 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 225,
  "Cannot update current element of a set during iteration."
};

static _KLsignatureGVKe K104 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K105
};

static _KLsimple_object_vectorGVKd_3 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLiteration_stateGVKi
};

static _KLsignatureAvaluesGVKi K106 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K107,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K107 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLiteration_stateGVKi,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K108 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_Lobject_setG_typesVKi,
  &K109
};

static _KLsimple_object_vectorGVKd_8 K109 = {
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

static _KLbyte_stringGVKd_24 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "No such element %= in %="
};

static _KLkeyword_signatureGVKe K111 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K85,
  &K113,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_1 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsymbolGVKd KJconcrete_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K116
};

static _KLbyte_stringGVKd_14 K116 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concrete-class"
};

static _KLsignatureAvaluesGVKi K117 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsetG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K118 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lobject_setG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLimplementation_classGVKe K119 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433733,
  &KLobject_setGVKe,
  &KLobject_setGVKeW,
  &KPfalseVKi,
  &K120,
  (D) 7385,
  &KLobject_setGZ32ZconstructorVKiMM0,
  &K122,
  &K123,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K120,
  &K120,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kset_elementsVKiHLobject_setG
};

_KLkeyword_methodGVKe KLobject_setGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K124,
  &key_mep_2,
  &KLobject_setGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsetGVKe
};

static _KLsimple_object_vectorGVKd_9 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLsetGVKe,
  &KLobject_setGVKe
};

static _KLkeyword_signatureAvaluesGVKi K124 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_Lobject_setG_typesVKi
};

static _KLbyte_stringGVKd_12 K125 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "<object-set>"
};

static _KLimplementation_classGVKe K126 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLsetGVKe,
  &KLsetGVKeW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 7377,
  &Kdefault_class_constructorVKi,
  &K127,
  &K128,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K130,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K127 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmutable_explicit_key_collectionGVKd
};

static _KLsimple_object_vectorGVKd_8 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLsetGVKe
};

static _KLbyte_stringGVKd_5 K129 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "<set>"
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &KLobject_setGVKe,
  &KPempty_listVKi
};

/* Code */

D KsizeVKdMM40I (D set_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:43
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:44
  T2 = SLOT_VALUE_INITD(set_, 0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:44
  T3_0 = KsizeVKdMM39I(T2);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:43
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ktype_for_copyVKdMM22I (D x_) {
  D elt_type_;
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:219
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:221
  CONGRUENT_CALL_PROLOG(&Kelement_typeVKe, 1);
  elt_type_ = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:222
  T7 = primitive_idQ(elt_type_,&KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:222
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:223
    T3_0 = Kobject_classVKdI(x_);
    T6_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:225
    CONGRUENT_CALL_PROLOG(&Kelement_typeVKe, 1);
    T4 = CONGRUENT_CALL1(x_);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:225
    T5_0 = Klimited_setVKiMM0I(T4, &KPfalseVKi);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:222
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:219
  MV_SET_COUNT(1);
  return(T6_0);
}

D KelementVKdMM33I (D set_, D key_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_2 T13 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:134
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:136
  T11 = KmemberQVKdMM5I(key_, set_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:136
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:137
    T5_0 = key_;
    T10_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:138
    T12 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:136
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:143
      T13.vector_element_[0] = key_;
      T13.vector_element_[1] = set_;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:143
      T7 = KlistVKdI(&T13);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:141
      T14.vector_element_[0] = &KJformat_string_;
      T14.vector_element_[1] = &K110;
      T14.vector_element_[2] = &KJformat_arguments_;
      T14.vector_element_[3] = T7;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:141
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T8 = CONGRUENT_CALL2(&KLnot_found_errorGVKe, &T14);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:141
      T15_0 = KerrorVKdMM0I(T8, &KPempty_vectorVKi);
      T9_0 = T15_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:139
      T6_0 = default_;
      T9_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:136
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:136
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:134
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kforward_iteration_protocolVKdMM32I (D set_) {
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

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:183
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:194
  T2 = SLOT_VALUE_INITD(set_, 0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:194
  T3 = Kmake_initial_stateVKiI(T2);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:196
  T4_0 = T3;
  T4_1 = &KPfalseVKi;
  T4_2 = &Ktable_next_stateVKi;
  T4_3 = &Kset_finished_stateQVKi;
  T4_4 = &Ktable_current_keyVKi;
  T4_5 = &Ktable_current_keyVKi;
  T4_6 = &Kanonymous_of_forward_iteration_protocolF102;
  T4_7 = &Ktable_copy_stateVKi;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:183
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

D Kkey_testVKdMM6I (D set_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:167
  T2_0 = &KEEVKd;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:165
  MV_SET_COUNT(1);
  return(T2_0);
}

D KaddXVKdMM14I (D set_, D key_) {
  D idF3;
  D hstate_;
  D indexF5;
  D fkey_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D successQ_;
  D T16_0;
  D T17;
  D T18;
  D T19_0;
  D T20;
  D T21;
  D T22;
  D T23;
  D thread_hash_state_;
  D T25_0;
  D T25_1;
  D T26_0;
  D T26_1;
  D idF27;
  D hash_state_;
  D T29_0;
  D T29_1;
  D T30_0;
  D T30_1;
  D T31;
  D T32_0;
  D T32_1;
  D T33;
  D T34;
  D T35_0;
  D T36_0;
  D T36_1;
  D UtmpF37;
  D T38;
  D T39;
  D T40;
  D T41_0;
  D T41_1;
  DADDR T42;
  DWORD T43;
  D T44;
  D T45;
  D UtmpF46;
  D T47;
  D T48;
  D T49;
  D T50_0;
  D T50_1;
  D UtmpF51;
  D T52;
  D T53;
  D T54;
  D T55_0;
  D T55_1;
  D T56_0;
  D T56_1;
  D T57_0;
  D T57_1;
  D T58;
  D T59;
  D T60;
  D T61;
  DWORD rmremainderF62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  D T69;
  DADDR T70;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75_0;
  D T75_1;
  D T76_0;
  DWORD T77;
  D T78;
  D T79_0;
  D strideF80;
  D UtmpF81;
  D T82;
  D T83;
  D T84;
  D T85_0;
  D T85_1;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  D T89;
  DWORD T90;
  DWORD T91;
  DWORD T92;
  DADDR T93;
  D T94;
  D T95;
  D T96;
  D T97;
  D T98;
  D T99_0;
  D T99_1;
  D T100_0;
  D T100_1;
  DWORD previous_indexF101T, previous_indexF101;
  D T102;
  D mm_wrapper_;
  D T104;
  DWORD T105;
  D T106;
  D T107;
  D T108;
  DWORD rmremainderF109;
  DWORD T110;
  DWORD T111;
  DWORD T112;
  DWORD T113;
  DWORD T114;
  DWORD T115;
  D T116;
  DADDR T117;
  D T118;
  D T119;
  D T120;
  D T121;
  D T122_0;
  D T122_1;
  D T123_0;
  DWORD T124;
  D T125;
  D T126_0;
  D strideF127;
  D UtmpF128;
  D T129;
  D T130;
  D T131;
  D T132_0;
  D T132_1;
  DWORD T133;
  DWORD T134;
  DWORD T135;
  D T136;
  DWORD T137;
  DWORD T138;
  DWORD T139;
  DADDR T140;
  D T141;
  D T142;
  D T143;
  D T144;
  D T145;
  D T146_0;
  D T146_1;
  D T147_0;
  D T147_1;
  DWORD previous_indexF148T, previous_indexF148;
  D T149;
  D T150;
  DWORD rmremainderF151;
  DWORD T152;
  DWORD T153;
  DWORD T154;
  DWORD T155;
  DWORD T156;
  DWORD T157;
  D T158;
  DADDR T159;
  D T160;
  D T161;
  D T162;
  D T163;
  D T164_0;
  D T164_1;
  D T165_0;
  DWORD T166;
  D T167;
  D T168_0;
  D strideF169;
  D UtmpF170;
  D T171;
  D T172;
  D T173;
  D T174_0;
  D T174_1;
  DWORD T175;
  DWORD T176;
  DWORD T177;
  D T178;
  DWORD T179;
  DWORD T180;
  DWORD T181;
  DADDR T182;
  D T183;
  D T184;
  D T185;
  D T186;
  D T187;
  D T188_0;
  D T188_1;
  D T189_0;
  D T189_1;
  DWORD previous_indexF190T, previous_indexF190;
  D T191;
  D T192;
  D T193;
  D T194;
  D T195;
  D T196;
  D T197;
  D T198;
  D T199;
  D T200;
  D T201;
  D T202_0;
  D T203;
  D T204;
  D T205;
  D T206;
  D T207;
  D T208;
  D T209;
  D T210;
  D T211;
  D T212_0;
  D T213;
  D T214;
  D T215;
  D T216_0;
  D T217;
  D T218;
  D T219;
  D T220;
  D T221;
  D T222;
  D T223;
  DADDR T224;
  D T225;
  D T226;
  DWORD T227;
  D T228;
  D T229;
  D T230;
  D T231;
  D T232;
  D T233;
  D T234;
  D T235;
  DSINT T236;
  DWORD T237;
  DWORD T238;
  D T239;
  D T240;
  D T241;
  DWORD T242;
  DWORD T243;
  D T244;
  DWORD T245;
  D T246;
  D res_;
  D T248;
  D T249;
  D T250;
  D T251;
  D T252;
  D T253;
  D T254_0;
  D T255;
  D T256;
  D T257;
  D T258;
  _KLsimple_object_vectorGVKd_2 T259 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T260;
  D T261;
  D T262;
  D T263;
  D T264;
  D T265;
  D T266;
  DSINT T267;
  DWORD T268;
  DWORD T269;
  D T270;
  D T271;
  D T272_0;
  D setF273T, setF273;
  D T274;
  D keyF275T, keyF275;
  D T276;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:83
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:120
  setF273T = set_;
  keyF275T = key_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:120
    setF273 = setF273T;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:120
    T274 = setF273;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:120
    keyF275 = keyF275T;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:120
    T276 = keyF275;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:84
    T20 = SLOT_VALUE_INITD(T274, 0);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:85
    T21 = SLOT_VALUE_INITD(T20, 1);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:86
    T22 = SLOT_VALUE_INITD(T21, 3);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
    T23 = primitive_read_thread_variable(Ddefault_hash_stateVKi);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      thread_hash_state_ = primitive_read_thread_variable(Ddefault_hash_stateVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      primitive_write_thread_variable(Ddefault_hash_stateVKi, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      primitive_mps_ld_reset(thread_hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T31 = SLOT_VALUE_INITD(T21, 2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T25_0 = CALL2(T31, T276, thread_hash_state_);
      T25_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T26_0 = T25_0;
      T26_1 = T25_1;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      idF27 = T26_0;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      hash_state_ = T26_1;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      primitive_write_thread_variable(Ddefault_hash_stateVKi, thread_hash_state_);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T32_0 = idF27;
      T32_1 = hash_state_;
      T30_0 = T32_0;
      T30_1 = T32_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T33 = SLOT_VALUE_INITD(T21, 2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T35_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T34 = T35_0;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T29_0 = CALL2(T33, T276, T34);
      T29_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
      T36_0 = T29_0;
      T36_1 = T29_1;
      T30_0 = T36_0;
      T30_1 = T36_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:89
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:88
    idF3 = T30_0;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:88
    hstate_ = T30_1;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
    T58 = SLOT_VALUE_INITD(T21, 1);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
    T59 = primitive_idQ(T58,&KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
    if (T59 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T42 = primitive_cast_pointer_as_raw(T276);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T43 = primitive_machine_word_logand(T42,3);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T44 = primitive_machine_word_equalQ(T43,0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      if (T44 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T102 = primitive_element(T276,0,0);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        mm_wrapper_ = T102;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T104 = SLOT_VALUE_INITD(mm_wrapper_, 1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T105 = primitive_cast_integer_as_raw(T104);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T106 = primitive_machine_word_logbitQ(2,T105);
        T45 = T106;
      } else {
        T45 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T107 = SLOT_VALUE_INITD(T21, 8);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T108 = SLOT_VALUE_INITD(T107, 1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T111 = primitive_cast_integer_as_raw(idF3);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T110 = primitive_machine_word_shift_right(T111,2);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T113 = primitive_cast_integer_as_raw(T108);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T112 = primitive_machine_word_shift_right(T113,2);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        rmremainderF109 = primitive_machine_word_floorS_remainder(T110,T112);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T114 = primitive_machine_word_shift_left_signal_overflow(rmremainderF109,2);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T115 = primitive_machine_word_logior(T114,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T116 = primitive_cast_raw_as_integer(T115);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T119 = REPEATED_D_SLOT_VALUE_TAGGED(T107, 2, T115);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T117 = primitive_cast_pointer_as_raw(T119);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T118 = primitive_machine_word_equalQ(T117,0);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        if (T118 != &KPfalseVKi) {
          T120 = Dtable_entry_deletedVKi;
        } else {
          T120 = T119;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        UtmpF46 = primitive_idQ(T120,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        if (UtmpF46 != &KPfalseVKi) {
          T49 = UtmpF46;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T121 = primitive_idQ(T120,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          if (T121 != &KPfalseVKi) {
            T48 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T47 = KEEVKdI(T276, T120);
            T48 = T47;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T49 = T48;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        if (T49 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T122_0 = T116;
          T122_1 = T120;
          T50_0 = T122_0;
          T50_1 = T122_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T124 = primitive_machine_word_logand(T111,29);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T125 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T124);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T126_0 = T125;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T123_0 = T126_0;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          strideF127 = T123_0;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T133 = primitive_cast_integer_as_raw(strideF127);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T134 = primitive_machine_word_logxor(T133,1);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T137 = primitive_machine_word_logxor(T113,1);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          previous_indexF148T = T115;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            previous_indexF148 = previous_indexF148T;
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T135 = primitive_machine_word_subtract_signal_overflow(previous_indexF148,T134);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T136 = primitive_machine_word_less_thanQ(T135,1);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (T136 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T138 = primitive_machine_word_add_signal_overflow(T135,T137);
              T139 = T138;
            } else {
              T139 = T135;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T144 = primitive_cast_raw_as_integer(T139);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T142 = REPEATED_D_SLOT_VALUE_TAGGED(T107, 2, T139);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T140 = primitive_cast_pointer_as_raw(T142);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T141 = primitive_machine_word_equalQ(T140,0);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (T141 != &KPfalseVKi) {
              T143 = Dtable_entry_deletedVKi;
            } else {
              T143 = T142;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            UtmpF128 = primitive_idQ(T143,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (UtmpF128 != &KPfalseVKi) {
              T131 = UtmpF128;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T145 = primitive_idQ(T143,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              if (T145 != &KPfalseVKi) {
                T130 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
                T129 = KEEVKdI(T276, T143);
                T130 = T129;
              }
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T131 = T130;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (T131 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T146_0 = T144;
              T146_1 = T143;
              T132_0 = T146_0;
              T132_1 = T146_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              previous_indexF148T = T139;
              goto L1;
              T132_0 = T147_0;
              T132_1 = T147_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T50_0 = T132_0;
          T50_1 = T132_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T56_0 = T50_0;
        T56_1 = T50_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T149 = SLOT_VALUE_INITD(T21, 8);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T150 = SLOT_VALUE_INITD(T149, 1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T153 = primitive_cast_integer_as_raw(idF3);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T152 = primitive_machine_word_shift_right(T153,2);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T155 = primitive_cast_integer_as_raw(T150);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T154 = primitive_machine_word_shift_right(T155,2);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        rmremainderF151 = primitive_machine_word_floorS_remainder(T152,T154);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T156 = primitive_machine_word_shift_left_signal_overflow(rmremainderF151,2);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T157 = primitive_machine_word_logior(T156,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T158 = primitive_cast_raw_as_integer(T157);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T161 = REPEATED_D_SLOT_VALUE_TAGGED(T149, 2, T157);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T159 = primitive_cast_pointer_as_raw(T161);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T160 = primitive_machine_word_equalQ(T159,0);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        if (T160 != &KPfalseVKi) {
          T162 = Dtable_entry_deletedVKi;
        } else {
          T162 = T161;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        UtmpF51 = primitive_idQ(T162,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        if (UtmpF51 != &KPfalseVKi) {
          T54 = UtmpF51;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T163 = primitive_idQ(T162,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          if (T163 != &KPfalseVKi) {
            T53 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T52 = primitive_idQ(T276,T162);
            T53 = T52;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T54 = T53;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        if (T54 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T164_0 = T158;
          T164_1 = T162;
          T55_0 = T164_0;
          T55_1 = T164_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T166 = primitive_machine_word_logand(T153,29);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T167 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T166);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T168_0 = T167;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T165_0 = T168_0;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          strideF169 = T165_0;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T175 = primitive_cast_integer_as_raw(strideF169);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T176 = primitive_machine_word_logxor(T175,1);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T179 = primitive_machine_word_logxor(T155,1);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          previous_indexF190T = T157;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            previous_indexF190 = previous_indexF190T;
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T177 = primitive_machine_word_subtract_signal_overflow(previous_indexF190,T176);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T178 = primitive_machine_word_less_thanQ(T177,1);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (T178 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T180 = primitive_machine_word_add_signal_overflow(T177,T179);
              T181 = T180;
            } else {
              T181 = T177;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T186 = primitive_cast_raw_as_integer(T181);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T184 = REPEATED_D_SLOT_VALUE_TAGGED(T149, 2, T181);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T182 = primitive_cast_pointer_as_raw(T184);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T183 = primitive_machine_word_equalQ(T182,0);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (T183 != &KPfalseVKi) {
              T185 = Dtable_entry_deletedVKi;
            } else {
              T185 = T184;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            UtmpF170 = primitive_idQ(T185,Dtable_entry_emptyVKi);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (UtmpF170 != &KPfalseVKi) {
              T173 = UtmpF170;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T187 = primitive_idQ(T185,Dtable_entry_deletedVKi);
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              if (T187 != &KPfalseVKi) {
                T172 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
                T171 = primitive_idQ(T276,T185);
                T172 = T171;
              }
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T173 = T172;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (T173 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T188_0 = T186;
              T188_1 = T185;
              T174_0 = T188_0;
              T174_1 = T188_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              previous_indexF190T = T181;
              goto L2;
              T174_0 = T189_0;
              T174_1 = T189_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T55_0 = T174_0;
          T55_1 = T174_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T56_0 = T55_0;
        T56_1 = T55_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T57_0 = T56_0;
      T57_1 = T56_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T60 = SLOT_VALUE_INITD(T21, 8);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T61 = SLOT_VALUE_INITD(T60, 1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T64 = primitive_cast_integer_as_raw(idF3);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T63 = primitive_machine_word_shift_right(T64,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T66 = primitive_cast_integer_as_raw(T61);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T65 = primitive_machine_word_shift_right(T66,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      rmremainderF62 = primitive_machine_word_floorS_remainder(T63,T65);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T67 = primitive_machine_word_shift_left_signal_overflow(rmremainderF62,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T68 = primitive_machine_word_logior(T67,1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T69 = primitive_cast_raw_as_integer(T68);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T72 = REPEATED_D_SLOT_VALUE_TAGGED(T60, 2, T68);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T70 = primitive_cast_pointer_as_raw(T72);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T71 = primitive_machine_word_equalQ(T70,0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      if (T71 != &KPfalseVKi) {
        T73 = Dtable_entry_deletedVKi;
      } else {
        T73 = T72;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      UtmpF37 = primitive_idQ(T73,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      if (UtmpF37 != &KPfalseVKi) {
        T40 = UtmpF37;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T74 = primitive_idQ(T73,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        if (T74 != &KPfalseVKi) {
          T39 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T38 = CALL2(T58, T276, T73);
          T39 = T38;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T40 = T39;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T75_0 = T69;
        T75_1 = T73;
        T41_0 = T75_0;
        T41_1 = T75_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T77 = primitive_machine_word_logand(T64,29);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T78 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T77);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T79_0 = T78;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T76_0 = T79_0;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        strideF80 = T76_0;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T86 = primitive_cast_integer_as_raw(strideF80);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T87 = primitive_machine_word_logxor(T86,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T90 = primitive_machine_word_logxor(T66,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        previous_indexF101T = T68;
      L3: ;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          previous_indexF101 = previous_indexF101T;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T88 = primitive_machine_word_subtract_signal_overflow(previous_indexF101,T87);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T89 = primitive_machine_word_less_thanQ(T88,1);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          if (T89 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T91 = primitive_machine_word_add_signal_overflow(T88,T90);
            T92 = T91;
          } else {
            T92 = T88;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T97 = primitive_cast_raw_as_integer(T92);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T95 = REPEATED_D_SLOT_VALUE_TAGGED(T60, 2, T92);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T93 = primitive_cast_pointer_as_raw(T95);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          T94 = primitive_machine_word_equalQ(T93,0);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          if (T94 != &KPfalseVKi) {
            T96 = Dtable_entry_deletedVKi;
          } else {
            T96 = T95;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          UtmpF81 = primitive_idQ(T96,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          if (UtmpF81 != &KPfalseVKi) {
            T84 = UtmpF81;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T98 = primitive_idQ(T96,Dtable_entry_deletedVKi);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            if (T98 != &KPfalseVKi) {
              T83 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
              T82 = CALL2(T58, T276, T96);
              T83 = T82;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T84 = T83;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          if (T84 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            T99_0 = T97;
            T99_1 = T96;
            T85_0 = T99_0;
            T85_1 = T99_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
            previous_indexF101T = T92;
            goto L3;
            T85_0 = T100_0;
            T85_1 = T100_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
        T41_0 = T85_0;
        T41_1 = T85_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
      T57_0 = T41_0;
      T57_1 = T41_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
    indexF5 = T57_0;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:90
    fkey_ = T57_1;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:92
    T191 = primitive_idQ(fkey_,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:92
    if (T191 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      T192 = SLOT_VALUE_INITD(T21, 0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      T197 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T197 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T198 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T199 = primitive_idQ(T198,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T200 = primitive_not(T199);
        T196 = T200;
      } else {
        T196 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T196 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T201 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T202_0 = KmemberQVKdMM3I(&KJlock_, T201, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T203 = T202_0;
        T204 = T203;
      } else {
        T204 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T204 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T205 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T193 = MAKE_CLOSURE_INITD(&Kanonymous_of_addXF95, 1, T192);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        CALL1(T205, T193);
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      T194 = primitive_wait_for_simple_lock(T192);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      T207 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T207 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T208 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T209 = primitive_idQ(T208,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T210 = primitive_not(T209);
        T206 = T210;
      } else {
        T206 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T206 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T211 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T212_0 = KmemberQVKdMM3I(&KJlock_, T211, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T213 = T212_0;
        T214 = T213;
      } else {
        T214 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T214 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T215 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T195 = MAKE_CLOSURE_INITD(&Kanonymous_of_addXF94, 2, T194, T192);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        CALL1(T215, T195);
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      T217 = primitive_idQ(T194,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T217 != &KPfalseVKi) {
        T221 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T218 = primitive_idQ(T194,(D) 5);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        if (T218 != &KPfalseVKi) {
          T220 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T216_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T192, T194);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T219 = T216_0;
          T220 = T219;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T221 = T220;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      if (T221 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        ENTER_UNWIND_FRAME(T7);
        if (!nlx_setjmp(FRAME_DEST(T7))) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:96
          T222 = SLOT_VALUE_INITD(T21, 7);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:96
          primitive_mps_ld_merge(T222,hstate_);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:97
          T223 = SLOT_VALUE_INITD(T21, 8);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          T227 = primitive_cast_integer_as_raw(indexF5);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          T226 = REPEATED_D_SLOT_VALUE_TAGGED(T223, 2, T227);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          T224 = primitive_cast_pointer_as_raw(T226);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          T225 = primitive_machine_word_equalQ(T224,0);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          if (T225 != &KPfalseVKi) {
            T228 = Dtable_entry_deletedVKi;
          } else {
            T228 = T226;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          T229 = primitive_idQ(T228,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          if (T229 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:99
            T8 = KfullQVKiI(T21);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:99
            T230 = primitive_not(T8);
            T9 = T230;
          } else {
            T9 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          if (T9 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:100
            T232 = SLOT_VALUE_INITD(T22, 0);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:100
            if (T232 != &KPfalseVKi) {
              T234 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:100
              T233 = SLOT_VALUE_INITD(T21, 3);
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:100
              T231 = primitive_idQ(T22,T233);
              T234 = T231;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:100
            T10 = T234;
          } else {
            T10 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          if (T10 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:101
            T235 = SLOT_VALUE_INITD(T21, 7);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:101
            T236 = primitive_mps_ld_isstale(T235);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:101
            T237 = primitive_machine_word_shift_left_signal_overflow(T236,2);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:101
            T238 = primitive_machine_word_logior(T237,1);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:101
            T239 = primitive_machine_word_less_thanQ(1,T238);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:101
            T240 = primitive_not(T239);
            T11 = T240;
          } else {
            T11 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          if (T11 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:102
            T241 = SLOT_VALUE_INITD(T21, 4);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:102
            T242 = primitive_cast_integer_as_raw(T241);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:102
            T243 = primitive_machine_word_add_signal_overflow(T242,4);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:102
            T244 = primitive_cast_raw_as_integer(T243);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:102
            SLOT_VALUE_SETTER(T244, T21, 4);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:103
            T245 = primitive_cast_integer_as_raw(indexF5);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:103
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T276, T223, 2, T245);
            T12 = &KPtrueVKi;
          } else {
            T12 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:98
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          FALL_THROUGH_UNWIND(T12);
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T249 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        if (T249 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T250 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T251 = primitive_idQ(T250,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T252 = primitive_not(T251);
          T248 = T252;
        } else {
          T248 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        if (T248 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T253 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T254_0 = KmemberQVKdMM3I(&KJlock_, T253, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T255 = T254_0;
          T256 = T255;
        } else {
          T256 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        if (T256 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T257 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          T246 = MAKE_CLOSURE_INITD(&Kanonymous_of_addXF93, 1, T192);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          CALL1(T257, T246);
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        res_ = primitive_release_simple_lock(T192);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T258 = primitive_idQ(res_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        if (T258 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
          Klock_release_result_errorYthreads_internalVdylanMM0I(T192, res_);
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        CONTINUE_UNWIND();
        T14 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T259.vector_element_[0] = &KJsynchronization_;
        T259.vector_element_[1] = T192;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T13 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T259);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
        T260 = KsignalVKdMM0I(T13, &KPempty_vectorVKi);
        T14 = T260;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
      successQ_ = T14;
    } else {
      successQ_ = &KPtrueVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:92
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:111
    if (successQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:112
      T16_0 = T274;
      T19_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      T262 = SLOT_VALUE_INITD(T22, 0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      if (T262 != &KPfalseVKi) {
        T264 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        T263 = SLOT_VALUE_INITD(T21, 3);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        T261 = primitive_idQ(T22,T263);
        T264 = T261;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      T265 = primitive_not(T264);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      if (T264 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        T266 = SLOT_VALUE_INITD(T21, 7);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        T267 = primitive_mps_ld_isstale(T266);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        T268 = primitive_machine_word_shift_left_signal_overflow(T267,2);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        T269 = primitive_machine_word_logior(T268,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        T270 = primitive_machine_word_less_thanQ(1,T269);
        T271 = T270;
      } else {
        T271 = T265;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      if (T271 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:116
        T17 = KfullQVKiI(T21);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:116
        Krehash_tableVKeI(T20, T21, T17);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:117
        T18 = KfullQVKiI(T21);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:118
          Krehash_tableVKeI(T20, T21, &KPtrueVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:115
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:120
      setF273T = set_;
      keyF275T = key_;
      goto L0;
      T19_0 = T272_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:111
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:83
  MV_SET_COUNT(1);
  return(T19_0);
}

D KremoveXVKdMM14I (D set_, D object_, D Urest_, D test_, D count_) {
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:126
  T7 = SLOT_VALUE_INITD(set_, 0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:126
  Kremove_keyXVKdMM0I(T7, object_);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:127
  T6_0 = set_;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:124
  MV_SET_COUNT(1);
  return(T6_0);
}

D KmemberQVKdMM5I (D object_, D set_, D Urest_, D test_) {
  D T5_0;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T15_0;
  D T16;
  D idF17;
  D UtmpF18;
  D T19;
  D T20;
  D T21;
  DADDR T22;
  DWORD T23;
  D T24;
  D T25;
  D UtmpF26;
  D T27;
  D T28;
  D T29;
  D UtmpF30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  DWORD rmremainderF38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DADDR T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50_0;
  DWORD T51;
  D T52;
  D T53_0;
  D strideF54;
  D UtmpF55;
  D T56;
  D T57;
  D T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  D T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  DADDR T66;
  D T67;
  D T68;
  D T69;
  D T70;
  D T71_0;
  D T71_1;
  DWORD previous_indexF72T, previous_indexF72;
  D T73;
  D mm_wrapper_;
  D T75;
  DWORD T76;
  D T77;
  D T78;
  D T79;
  DWORD rmremainderF80;
  DWORD T81;
  DWORD T82;
  DWORD T83;
  DWORD T84;
  DWORD T85;
  DWORD T86;
  DADDR T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92_0;
  DWORD T93;
  D T94;
  D T95_0;
  D strideF96;
  D UtmpF97;
  D T98;
  D T99;
  D T100;
  DWORD T101;
  DWORD T102;
  DWORD T103;
  D T104;
  DWORD T105;
  DWORD T106;
  DWORD T107;
  DADDR T108;
  D T109;
  D T110;
  D T111;
  D T112;
  D T113_0;
  D T113_1;
  DWORD previous_indexF114T, previous_indexF114;
  D T115;
  D T116;
  DWORD rmremainderF117;
  DWORD T118;
  DWORD T119;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  DWORD T123;
  DADDR T124;
  D T125;
  D T126;
  D T127;
  D T128;
  D T129_0;
  DWORD T130;
  D T131;
  D T132_0;
  D strideF133;
  D UtmpF134;
  D T135;
  D T136;
  D T137;
  DWORD T138;
  DWORD T139;
  DWORD T140;
  D T141;
  DWORD T142;
  DWORD T143;
  DWORD T144;
  DADDR T145;
  D T146;
  D T147;
  D T148;
  D T149;
  D T150_0;
  D T150_1;
  DWORD previous_indexF151T, previous_indexF151;
  D T152;
  D T153;
  D T154;
  D T155;
  D T156;
  D T157;
  D T158;
  D T159;
  D T160;
  D T161;
  D T162;
  D T163;
  D T164;
  D T165;
  D T166;
  D T167;
  D T168;
  D T169;
  D T170;
  D T171;
  D T172;
  D T173;
  D T174;
  D T175;
  D T176;
  D T177;
  D T178_0;
  D T179;
  D T180;
  D T181;
  D T182;
  D T183;
  D T184;
  D T185;
  D T186;
  D T187;
  D T188_0;
  D T189;
  D T190;
  D T191;
  D T192_0;
  D T193;
  D T194;
  D T195;
  D T196;
  D T197;
  D T198;
  D res_;
  D T200;
  D T201;
  D T202;
  D T203;
  D T204;
  D T205;
  D T206_0;
  D T207;
  D T208;
  D T209;
  D T210;
  _KLsimple_object_vectorGVKd_2 T211 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T212_0;
  D T213;
  D T214;
  D T215;
  D T216;
  D T217;
  D T218;
  DSINT T219;
  DWORD T220;
  DWORD T221;
  D T222;
  D T223;
  D T224_0;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:51
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:53
  T11 = SLOT_VALUE_INITD(set_, 0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:54
  T12 = SLOT_VALUE_INITD(T11, 1);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:55
  T13 = SLOT_VALUE_INITD(T12, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:59
  T16 = SLOT_VALUE_INITD(T12, 2);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:59
  T14_0 = CALL2(T16, object_, Ddummy_hash_stateVKi);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:59
  T15_0 = T14_0;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:59
  idF17 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
  T34 = SLOT_VALUE_INITD(T12, 1);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
  T35 = primitive_idQ(T34,&KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T22 = primitive_cast_pointer_as_raw(object_);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T23 = primitive_machine_word_logand(T22,3);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T24 = primitive_machine_word_equalQ(T23,0);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T73 = primitive_element(object_,0,0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      mm_wrapper_ = T73;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T75 = SLOT_VALUE_INITD(mm_wrapper_, 1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T76 = primitive_cast_integer_as_raw(T75);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T77 = primitive_machine_word_logbitQ(2,T76);
      T25 = T77;
    } else {
      T25 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T78 = SLOT_VALUE_INITD(T12, 8);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T79 = SLOT_VALUE_INITD(T78, 1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T82 = primitive_cast_integer_as_raw(idF17);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T81 = primitive_machine_word_shift_right(T82,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T84 = primitive_cast_integer_as_raw(T79);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T83 = primitive_machine_word_shift_right(T84,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      rmremainderF80 = primitive_machine_word_floorS_remainder(T81,T83);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T85 = primitive_machine_word_shift_left_signal_overflow(rmremainderF80,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T86 = primitive_machine_word_logior(T85,1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T89 = REPEATED_D_SLOT_VALUE_TAGGED(T78, 2, T86);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T87 = primitive_cast_pointer_as_raw(T89);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T88 = primitive_machine_word_equalQ(T87,0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      if (T88 != &KPfalseVKi) {
        T90 = Dtable_entry_deletedVKi;
      } else {
        T90 = T89;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      UtmpF26 = primitive_idQ(T90,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      if (UtmpF26 != &KPfalseVKi) {
        T29 = UtmpF26;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T91 = primitive_idQ(T90,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        if (T91 != &KPfalseVKi) {
          T28 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T27 = KEEVKdI(object_, T90);
          T28 = T27;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T29 = T28;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      if (T29 != &KPfalseVKi) {
        T154 = T90;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T93 = primitive_machine_word_logand(T82,29);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T94 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T93);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T95_0 = T94;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T92_0 = T95_0;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        strideF96 = T92_0;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T101 = primitive_cast_integer_as_raw(strideF96);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T102 = primitive_machine_word_logxor(T101,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T105 = primitive_machine_word_logxor(T84,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        previous_indexF114T = T86;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          previous_indexF114 = previous_indexF114T;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T103 = primitive_machine_word_subtract_signal_overflow(previous_indexF114,T102);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T104 = primitive_machine_word_less_thanQ(T103,1);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (T104 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T106 = primitive_machine_word_add_signal_overflow(T103,T105);
            T107 = T106;
          } else {
            T107 = T103;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T110 = REPEATED_D_SLOT_VALUE_TAGGED(T78, 2, T107);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T108 = primitive_cast_pointer_as_raw(T110);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T109 = primitive_machine_word_equalQ(T108,0);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (T109 != &KPfalseVKi) {
            T111 = Dtable_entry_deletedVKi;
          } else {
            T111 = T110;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          UtmpF97 = primitive_idQ(T111,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (UtmpF97 != &KPfalseVKi) {
            T100 = UtmpF97;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T112 = primitive_idQ(T111,Dtable_entry_deletedVKi);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            if (T112 != &KPfalseVKi) {
              T99 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
              T98 = KEEVKdI(object_, T111);
              T99 = T98;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T100 = T99;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (T100 != &KPfalseVKi) {
            T153 = T111;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            previous_indexF114T = T107;
            goto L0;
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T152 = T113_1;
            T153 = T152;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T154 = T153;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T158 = T154;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T115 = SLOT_VALUE_INITD(T12, 8);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T116 = SLOT_VALUE_INITD(T115, 1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T119 = primitive_cast_integer_as_raw(idF17);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T118 = primitive_machine_word_shift_right(T119,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T121 = primitive_cast_integer_as_raw(T116);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T120 = primitive_machine_word_shift_right(T121,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      rmremainderF117 = primitive_machine_word_floorS_remainder(T118,T120);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T122 = primitive_machine_word_shift_left_signal_overflow(rmremainderF117,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T123 = primitive_machine_word_logior(T122,1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T126 = REPEATED_D_SLOT_VALUE_TAGGED(T115, 2, T123);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T124 = primitive_cast_pointer_as_raw(T126);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T125 = primitive_machine_word_equalQ(T124,0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      if (T125 != &KPfalseVKi) {
        T127 = Dtable_entry_deletedVKi;
      } else {
        T127 = T126;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      UtmpF30 = primitive_idQ(T127,Dtable_entry_emptyVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      if (UtmpF30 != &KPfalseVKi) {
        T33 = UtmpF30;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T128 = primitive_idQ(T127,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        if (T128 != &KPfalseVKi) {
          T32 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T31 = primitive_idQ(object_,T127);
          T32 = T31;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T33 = T32;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      if (T33 != &KPfalseVKi) {
        T157 = T127;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T130 = primitive_machine_word_logand(T119,29);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T131 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T130);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T132_0 = T131;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T129_0 = T132_0;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        strideF133 = T129_0;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T138 = primitive_cast_integer_as_raw(strideF133);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T139 = primitive_machine_word_logxor(T138,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T142 = primitive_machine_word_logxor(T121,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        previous_indexF151T = T123;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          previous_indexF151 = previous_indexF151T;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T140 = primitive_machine_word_subtract_signal_overflow(previous_indexF151,T139);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T141 = primitive_machine_word_less_thanQ(T140,1);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (T141 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T143 = primitive_machine_word_add_signal_overflow(T140,T142);
            T144 = T143;
          } else {
            T144 = T140;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T147 = REPEATED_D_SLOT_VALUE_TAGGED(T115, 2, T144);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T145 = primitive_cast_pointer_as_raw(T147);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T146 = primitive_machine_word_equalQ(T145,0);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (T146 != &KPfalseVKi) {
            T148 = Dtable_entry_deletedVKi;
          } else {
            T148 = T147;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          UtmpF134 = primitive_idQ(T148,Dtable_entry_emptyVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (UtmpF134 != &KPfalseVKi) {
            T137 = UtmpF134;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T149 = primitive_idQ(T148,Dtable_entry_deletedVKi);
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            if (T149 != &KPfalseVKi) {
              T136 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
              T135 = primitive_idQ(object_,T148);
              T136 = T135;
            }
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T137 = T136;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (T137 != &KPfalseVKi) {
            T156 = T148;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            previous_indexF151T = T144;
            goto L1;
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T155 = T150_1;
            T156 = T155;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T157 = T156;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T158 = T157;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T162 = T158;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T36 = SLOT_VALUE_INITD(T12, 8);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T37 = SLOT_VALUE_INITD(T36, 1);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T40 = primitive_cast_integer_as_raw(idF17);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T39 = primitive_machine_word_shift_right(T40,2);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T42 = primitive_cast_integer_as_raw(T37);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T41 = primitive_machine_word_shift_right(T42,2);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    rmremainderF38 = primitive_machine_word_floorS_remainder(T39,T41);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T43 = primitive_machine_word_shift_left_signal_overflow(rmremainderF38,2);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T44 = primitive_machine_word_logior(T43,1);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T47 = REPEATED_D_SLOT_VALUE_TAGGED(T36, 2, T44);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T45 = primitive_cast_pointer_as_raw(T47);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T46 = primitive_machine_word_equalQ(T45,0);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    if (T46 != &KPfalseVKi) {
      T48 = Dtable_entry_deletedVKi;
    } else {
      T48 = T47;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    UtmpF18 = primitive_idQ(T48,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    if (UtmpF18 != &KPfalseVKi) {
      T21 = UtmpF18;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T49 = primitive_idQ(T48,Dtable_entry_deletedVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      if (T49 != &KPfalseVKi) {
        T20 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T19 = CALL2(T34, object_, T48);
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    if (T21 != &KPfalseVKi) {
      T161 = T48;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T51 = primitive_machine_word_logand(T40,29);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T52 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T51);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T53_0 = T52;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T50_0 = T53_0;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      strideF54 = T50_0;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T59 = primitive_cast_integer_as_raw(strideF54);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T60 = primitive_machine_word_logxor(T59,1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T63 = primitive_machine_word_logxor(T42,1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      previous_indexF72T = T44;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        previous_indexF72 = previous_indexF72T;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T61 = primitive_machine_word_subtract_signal_overflow(previous_indexF72,T60);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T62 = primitive_machine_word_less_thanQ(T61,1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        if (T62 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T64 = primitive_machine_word_add_signal_overflow(T61,T63);
          T65 = T64;
        } else {
          T65 = T61;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T68 = REPEATED_D_SLOT_VALUE_TAGGED(T36, 2, T65);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T66 = primitive_cast_pointer_as_raw(T68);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        T67 = primitive_machine_word_equalQ(T66,0);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        if (T67 != &KPfalseVKi) {
          T69 = Dtable_entry_deletedVKi;
        } else {
          T69 = T68;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        UtmpF55 = primitive_idQ(T69,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        if (UtmpF55 != &KPfalseVKi) {
          T58 = UtmpF55;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T70 = primitive_idQ(T69,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          if (T70 != &KPfalseVKi) {
            T57 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
            T56 = CALL2(T34, object_, T69);
            T57 = T56;
          }
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T58 = T57;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        if (T58 != &KPfalseVKi) {
          T160 = T69;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          previous_indexF72T = T65;
          goto L2;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
          T159 = T71_1;
          T160 = T159;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
      T161 = T160;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
    T162 = T161;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:61
  T163 = primitive_idQ(T162,Dtable_entry_emptyVKi);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:61
  if (T163 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
    T214 = SLOT_VALUE_INITD(T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
    if (T214 != &KPfalseVKi) {
      T216 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
      T215 = SLOT_VALUE_INITD(T12, 3);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
      T213 = primitive_idQ(T13,T215);
      T216 = T213;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
    T217 = primitive_not(T216);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
    if (T216 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
      T218 = SLOT_VALUE_INITD(T12, 7);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
      T219 = primitive_mps_ld_isstale(T218);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
      T220 = primitive_machine_word_shift_left_signal_overflow(T219,2);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
      T221 = primitive_machine_word_logior(T220,1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
      T222 = primitive_machine_word_less_thanQ(1,T221);
      T223 = T222;
    } else {
      T223 = T217;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:71
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:61
    if (T223 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:72
      Krehash_tableVKeI(T11, T12, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:73
      T224_0 = KmemberQVKdMM5I(object_, set_, &KPempty_vectorVKi, &KPfalseVKi);
      T9_0 = T224_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:75
      T8_0 = &KPfalseVKi;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:61
    T10_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:63
    T165 = SLOT_VALUE_INITD(T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:63
    if (T165 != &KPfalseVKi) {
      T167 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:63
      T166 = SLOT_VALUE_INITD(T12, 3);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:63
      T164 = primitive_idQ(T13,T166);
      T167 = T164;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:63
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:63
    if (T167 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:64
      T5_0 = &KPtrueVKi;
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      T168 = SLOT_VALUE_INITD(T12, 0);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      T173 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T173 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T174 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T175 = primitive_idQ(T174,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T176 = primitive_not(T175);
        T172 = T176;
      } else {
        T172 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T172 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T177 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T178_0 = KmemberQVKdMM3I(&KJlock_, T177, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T179 = T178_0;
        T180 = T179;
      } else {
        T180 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T180 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T181 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T169 = MAKE_CLOSURE_INITD(&Kanonymous_of_memberQF77, 1, T168);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        CALL1(T181, T169);
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      T170 = primitive_wait_for_simple_lock(T168);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      T183 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T183 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T184 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T185 = primitive_idQ(T184,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T186 = primitive_not(T185);
        T182 = T186;
      } else {
        T182 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T182 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T187 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T188_0 = KmemberQVKdMM3I(&KJlock_, T187, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T189 = T188_0;
        T190 = T189;
      } else {
        T190 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T190 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T191 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T171 = MAKE_CLOSURE_INITD(&Kanonymous_of_memberQF75, 2, T170, T168);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        CALL1(T191, T171);
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      T193 = primitive_idQ(T170,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T193 != &KPfalseVKi) {
        T197 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T194 = primitive_idQ(T170,(D) 5);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        if (T194 != &KPfalseVKi) {
          T196 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T192_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T168, T170);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T195 = T192_0;
          T196 = T195;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T197 = T196;
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      if (T197 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T201 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        if (T201 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T202 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T203 = primitive_idQ(T202,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T204 = primitive_not(T203);
          T200 = T204;
        } else {
          T200 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        if (T200 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T205 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T206_0 = KmemberQVKdMM3I(&KJlock_, T205, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T207 = T206_0;
          T208 = T207;
        } else {
          T208 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        if (T208 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T209 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          T198 = MAKE_CLOSURE_INITD(&Kanonymous_of_memberQF72, 1, T168);
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          CALL1(T209, T198);
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        res_ = primitive_release_simple_lock(T168);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T210 = primitive_idQ(res_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        if (T210 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
          Klock_release_result_errorYthreads_internalVdylanMM0I(T168, res_);
        }
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      } else {
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        T211.vector_element_[0] = &KJsynchronization_;
        T211.vector_element_[1] = T168;
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T6 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T211);
        // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
        KsignalVKdMM0I(T6, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:69
      T212_0 = KmemberQVKdMM5I(object_, set_, &KPempty_vectorVKi, &KPfalseVKi);
      T7_0 = T212_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:63
    T10_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:61
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:51
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kelement_setterVKdMM29I (D object_, D set_, D key_) {
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:153
  T4 = KEEVKdI(key_, object_);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:153
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:154
    KaddXVKdMM14I(set_, object_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:156
    T6 = KmemberQVKdMM5I(key_, set_, &KPempty_vectorVKi, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:156
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/set.dylan:157
      KremoveXVKdMM14I(set_, key_, &KPempty_vectorVKi, &KPfalseVKi, &KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:156
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:159
    KaddXVKdMM14I(set_, object_);
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:153
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:161
  T5_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:152
  MV_SET_COUNT(1);
  return(T5_0);
}

D KinitializeVKdMM30I (D set_, D Urest_, D size_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;
  D T11_0;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:31
  T6 = primitive_idQ(size_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:31
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:34
    T12.vector_element_[0] = &KJvaluesQ_;
    T12.vector_element_[1] = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:34
    T11_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &T12, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:34
    T10 = T11_0;
    T4 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:32
    T9.vector_element_[0] = &KJsize_;
    T9.vector_element_[1] = size_;
    T9.vector_element_[2] = &KJvaluesQ_;
    T9.vector_element_[3] = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:32
    T8_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &T9, &KLobjectGVKd, size_, &Kdefault_grow_sizeVKe, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:32
    T7 = T8_0;
    T4 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:30
  SLOT_VALUE_SETTER(T4, set_, 0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:30
  T5 = T4;
  MV_SET_ELT(0, T4);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:28
  return(T5);
}

D KmakeVKdMM60I (D class_, D all_keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:12
  T3_0 = KLobject_setGZ32ZconstructorVKiMM0I(&KLobject_setGVKe, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLobject_setGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:22
  T3 = primitive_object_allocate_filled(2,&KLobject_setGVKeW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  T6 = SLOT_VALUE_INITD(&Kset_elementsVKiHLobject_setG, 0);
  T7 = primitive_cast_integer_as_raw(T6);
  T8 = primitive_machine_word_logbitQ(4,T7);
  if (T8 != &KPfalseVKi) {
    T9 = SLOT_VALUE_INITD(&Kset_elementsVKiHLobject_setG, 1);
    T11 = T9;
  } else {
    T5_0 = Kinstall_and_return_make_method_init_dataVKiI(&Kset_elementsVKiHLobject_setG);
    T10 = T5_0;
    T11 = T10;
  }
  SLOT_VALUE_SETTER(T11, T3, 0);
  MEP_APPLY2(&KinitializeVKdMM30, &K44, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:22
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kremove_all_keysXVKeMM1I (D set_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:131
  T2 = SLOT_VALUE_INITD(set_, 0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:131
  T3 = Kremove_all_keysXVKeMM0I(T2);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:130
  return(T3);
}

static D Kslot_initializerF55I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:23
  init_value_ = Dempty_table_set_elementsVKi;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:23
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

static D Kanonymous_of_memberQF77I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T5.vector_element_[0] = &K78;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_memberQF75I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T5.vector_element_[0] = &K76;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_memberQF72I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T5.vector_element_[0] = &K73;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:68
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_addXF95I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T5.vector_element_[0] = &K78;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_addXF94I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T5.vector_element_[0] = &K76;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_addXF93I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T5.vector_element_[0] = &K73;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:95
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kset_finished_stateQVKiI (D set_, D state_, D limit_) {
  D T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:175
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:179
  T3 = SLOT_VALUE_INITD(state_, 3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:179
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:179
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:179
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:175
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_forward_iteration_protocolF102I (D value_, D table_, D state_) {
  D T3;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:197
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:198
  T4.vector_element_[0] = &KJformat_string_;
  T4.vector_element_[1] = &K103;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:198
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLimmutable_errorGVKi, &T4);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:198
  T5 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:197
  return(T5);
}

D Klimited_setVKiMM0I (D of_, D size_) {
  D T3_0;
  _KLsimple_object_vectorGVKd_8 T4 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:210
  T4.vector_element_[0] = &KJclass_;
  T4.vector_element_[1] = &KLsetGVKe;
  T4.vector_element_[2] = &KJelement_type_;
  T4.vector_element_[3] = of_;
  T4.vector_element_[4] = IKJconcrete_class_;
  T4.vector_element_[5] = &KLobject_setGVKe;
  T4.vector_element_[6] = &KJsize_;
  T4.vector_element_[7] = size_;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:210
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLlimited_set_typeGVKe, &T4);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:208
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_set_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJconcrete_class_);
    if (T0 != &KJconcrete_class_) {
      IKJconcrete_class_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_set_for_user () {
{
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/set.dylan:20
  T3.vector_element_[0] = &KJsize_;
  T3.vector_element_[1] = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:20
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &T3, &KLobjectGVKd, (D) 1, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:20
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:20
  Dempty_table_set_elementsVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/set.dylan:20
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
