#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(22);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lock_iGYthreads_internalVdylan;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(86);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(68);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(77);
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(41);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(65);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(46);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(0);

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
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLany_class_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLmissing_keyword_errorGVKi;

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
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D init_arg_type_;
} _KLinit_arg_descriptorGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
} _KLslot_keyword_initialization_descriptorGVKe;

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
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

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
} _KLconditionGVKd;

typedef struct {
  D wrapper;
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

typedef struct {
  D wrapper;
  D incomplete_object_;
} _KLobject_incompleteGVKe;

typedef struct {
  D wrapper;
  D incomplete_object_;
} _KLincomplete_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_conditionGVKe;

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
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
} _KLslot_initial_value_descriptorGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(1);
define__KLstandalone_domainGVKe(2);

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
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D scu_node_next_;
  D scu_node_class_;
  D scu_node_iclass_;
  D scu_node_initializedQ_;
} _KLscu_nodeGVKi;

typedef struct {
  D wrapper;
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
  D slot_type_error_slot_descriptor_;
} _KLslot_type_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D incomplete_object_;
} _KLclass_incomplete_errorGVKe;


/* Referenced object declarations */

extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_name_);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
D Kmake_simple_lockYthreads_primitivesVdylanI ();
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
D Kinit_evaluatedQ_setterVKiMM0I (D, D);
D Kinit_valueQ_setterVKiMM0I (D, D);
D KerrorVKdMM1I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
D Kobject_classVKdI (D);
D Kconcatenate_2VKeMM1I (D, D);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLincremental_generic_functionGVKe KreleaseYthreadsVdylan;
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
extern _KLclassGVKd KLany_class_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLany_class_slot_descriptorGVKeW;
D Kfind_or_create_class_slot_storageVKiI (D, D, D);
D KlistVKdI (D);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLmissing_keyword_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLmissing_keyword_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLsymbolGVKd KJslot_descriptor_;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLinit_arg_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinit_arg_descriptorGVKeW;
D KEEVKdI (D, D);
extern _KLclassGVKd KLslot_keyword_initialization_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_keyword_initialization_descriptorGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KmakeVKdMM23I (D, D, D, D);
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kelement_range_errorVKeI (D, D);
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Kdebug_nameVKe;
extern _KLsymbolGVKd KJobject_;
extern _KLinstance_slot_descriptorGVKe Kincomplete_objectVKeHLobject_incompleteG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLobject_incompleteGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_incompleteGVKeW;
extern _KLclassGVKd KLincomplete_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLincomplete_errorGVKiW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsymbolGVKd KJclass_;
extern _KLsymbolGVKd KJimplementation_class_;
extern _KLsymbolGVKd KJnext_;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
D Kall_superclassesVKdMM1I (D);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D KreverseXVKdMM2I (D);
D KmemberQVKdMM2I (D, D, D, D);
extern _KLsymbolGVKd KJlock_;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
D Kassertion_failureVKiI (D, D);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
D Kcurrent_threadYthreadsVdylanI ();
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLinstance_slot_descriptorGVKe Ktype_error_valueVKdHLtype_errorG;
extern _KLinstance_slot_descriptorGVKe Ktype_error_expected_typeVKdHLtype_errorG;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
extern _KLclassGVKd KLslot_initial_value_descriptorGVKi;
extern _KLmm_wrapperGVKi_0 KLslot_initial_value_descriptorGVKiW;
D KPregister_subclass_dependent_genericVKeI (D generic_, D class_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Limplementation_classG_typesVKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLsimple_methodGVKe KasVKdMM0;
extern _KLsimple_methodGVKe KasVKdMM1;
extern _KLsimple_methodGVKe KasVKdMM2;
extern _KLsimple_methodGVKe KasVKdMM3;
extern _KLsimple_methodGVKe KasVKdMM4;
extern _KLsimple_methodGVKe KasVKdMM5;
extern _KLsimple_methodGVKe KasVKdMM6;
extern _KLsimple_methodGVKe KasVKdMM7;
extern _KLsimple_methodGVKe KasVKdMM8;
extern _KLsimple_methodGVKe KasVKdMM9;
extern _KLsimple_methodGVKe KasVKdMM10;
extern _KLsimple_methodGVKe KasVKdMM11;
extern _KLsimple_methodGVKe KasVKdMM12;
extern _KLsimple_methodGVKe KasVKdMM13;
extern _KLsimple_methodGVKe KasVKdMM14;
extern _KLsimple_methodGVKe KasVKdMM15;
extern _KLsimple_methodGVKe KasVKdMM16;
extern _KLsimple_methodGVKe KasVKdMM17;
extern _KLsimple_methodGVKe KasVKdMM18;
extern _KLsimple_methodGVKe KasVKdMM19;
extern _KLsimple_methodGVKe KasVKdMM20;
extern _KLsimple_methodGVKe KasVKdMM21;
extern _KLsimple_methodGVKe KasVKdMM22;
extern _KLsimple_methodGVKe KasVKdMM23;
extern _KLsimple_methodGVKe KasVKdMM24;
extern _KLsimple_methodGVKe KasVKdMM25;
extern _KLsimple_methodGVKe KasVKdMM26;
extern _KLsimple_methodGVKe KasVKdMM27;
extern _KLsimple_methodGVKe KasVKdMM28;
extern _KLsimple_methodGVKe KasVKdMM29;
extern _KLsimple_methodGVKe KasVKdMM30;
extern _KLsimple_methodGVKe KasVKdMM31;
extern _KLsimple_methodGVKe KasVKdMM32;
extern _KLsimple_methodGVKe KasVKdMM33;
extern _KLsimple_methodGVKe KasVKdMM34;
extern _KLsimple_methodGVKe KasVKdMM35;
extern _KLsimple_methodGVKe KasVKdMM36;
extern _KLsimple_methodGVKe KasVKdMM37;
extern _KLsimple_methodGVKe KasVKdMM38;
extern _KLsimple_methodGVKe KasVKdMM39;
extern _KLsimple_methodGVKe KasVKdMM40;
extern _KLsimple_methodGVKe KasVKdMM41;
extern _KLsimple_methodGVKe KasVKdMM42;
extern _KLsimple_methodGVKe KasVKdMM43;
extern _KLsimple_methodGVKe KasVKdMM44;
extern _KLsimple_methodGVKe KasVKdMM45;
extern _KLsimple_methodGVKe KasVKdMM46;
extern _KLsimple_methodGVKe KasVKdMM47;
extern _KLsimple_methodGVKe KasVKdMM48;
extern _KLsimple_methodGVKe KasVKdMM49;
extern _KLsimple_methodGVKe KasVKdMM50;
extern _KLsimple_methodGVKe KasVKdMM51;
extern _KLsimple_methodGVKe KasVKdMM52;
extern _KLsimple_methodGVKe KasVKdMM53;
extern _KLsimple_methodGVKe KasVKdMM54;
extern _KLsimple_methodGVKe KasVKdMM55;
extern _KLsimple_methodGVKe KasVKdMM56;
extern _KLsimple_methodGVKe KasVKdMM57;
extern _KLsimple_methodGVKe KasVKdMM58;
extern _KLsimple_methodGVKe KasVKdMM59;
extern _KLsimple_methodGVKe KasVKdMM60;
extern _KLsimple_methodGVKe KasVKdMM61;
extern _KLsimple_methodGVKe KasVKdMM62;
extern _KLsimple_methodGVKe KasVKdMM63;
extern _KLsimple_methodGVKe KasVKdMM64;
extern _KLsimple_methodGVKe KasVKdMM65;
extern _KLsimple_methodGVKe KasVKdMM66;
extern _KLsimple_methodGVKe KasVKdMM67;
extern _KLsimple_methodGVKe KasVKdMM68;
extern _KLsimple_methodGVKe KasVKdMM69;
extern _KLsimple_methodGVKe KasVKdMM70;
extern _KLsimple_methodGVKe KasVKdMM71;
extern _KLsimple_methodGVKe KasVKdMM72;
extern _KLsimple_methodGVKe KasVKdMM73;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_20;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_22;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_23;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_24;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_26;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_27;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_28;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_29;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_30;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_31;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_33;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_34;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_35;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_36;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_37;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_38;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_39;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_40;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_41;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_42;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_43;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_44;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_45;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_46;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_47;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_48;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_49;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_50;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_51;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_52;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_53;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_54;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_55;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_56;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_57;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_58;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_59;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_60;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_61;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLsealed_generic_functionGVKe Kinstance_storage_size_setterVKe;
extern _KLsealed_generic_functionGVKe Kclass_abstractQ_setterVKe;
extern _KLsealed_generic_functionGVKe Kclass_primaryQ_setterVKe;
extern _KLsealed_generic_functionGVKe Kclass_sealedQ_setterVKe;
extern _KLsealed_generic_functionGVKe Kclass_completeQ_setterVKe;
extern _KLsealed_generic_functionGVKe Kclass_incrementalQ_setterVKi;
extern _KLsymbolGVKd KJinstance_storage_size_;
extern _KLsymbolGVKd KJabstractQ_;
extern _KLsymbolGVKd KJprimaryQ_;
extern _KLsymbolGVKd KJsealedQ_;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsealed_generic_functionGVKe Ksystem_allocate_repeated_instanceVKe;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLkeyword_methodGVKe KinitializeVKdMM0;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLkeyword_methodGVKe KinitializeVKdMM2;
extern _KLkeyword_methodGVKe KinitializeVKdMM3;
extern _KLkeyword_methodGVKe KinitializeVKdMM4;
extern _KLkeyword_methodGVKe KinitializeVKdMM5;
extern _KLkeyword_methodGVKe KinitializeVKdMM6;
extern _KLkeyword_methodGVKe KinitializeVKdMM7;
extern _KLkeyword_methodGVKe KinitializeVKdMM8;
extern _KLkeyword_methodGVKe KinitializeVKdMM9;
extern _KLkeyword_methodGVKe KinitializeVKdMM10;
extern _KLkeyword_methodGVKe KinitializeVKdMM11;
extern _KLkeyword_methodGVKe KinitializeVKdMM12;
extern _KLkeyword_methodGVKe KinitializeVKdMM13;
extern _KLkeyword_methodGVKe KinitializeVKdMM14;
extern _KLkeyword_methodGVKe KinitializeVKdMM15;
extern _KLkeyword_methodGVKe KinitializeVKdMM16;
extern _KLkeyword_methodGVKe KinitializeVKdMM17;
extern _KLkeyword_methodGVKe KinitializeVKdMM18;
extern _KLkeyword_methodGVKe KinitializeVKdMM20;
extern _KLkeyword_methodGVKe KinitializeVKdMM21;
extern _KLkeyword_methodGVKe KinitializeVKdMM22;
extern _KLkeyword_methodGVKe KinitializeVKdMM23;
extern _KLkeyword_methodGVKe KinitializeVKdMM24;
extern _KLkeyword_methodGVKe KinitializeVKdMM25;
extern _KLkeyword_methodGVKe KinitializeVKdMM26;
extern _KLkeyword_methodGVKe KinitializeVKdMM27;
extern _KLkeyword_methodGVKe KinitializeVKdMM28;
extern _KLkeyword_methodGVKe KinitializeVKdMM29;
extern _KLkeyword_methodGVKe KinitializeVKdMM30;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_19;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_21;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_23;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_25;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_27;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_28;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_29;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_30;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_31;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_33;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_34;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_35;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_36;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_37;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_38;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_39;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_40;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_41;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_42;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_43;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_44;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_45;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_46;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_47;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_48;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_49;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLsealed_generic_functionGVKe Kmap_as_oneVKi;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLsealed_generic_functionGVKe Kincomplete_objectVKe;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLkeyword_methodGVKe KmakeVKdMM0;
extern _KLkeyword_methodGVKe KmakeVKdMM1;
extern _KLkeyword_methodGVKe KmakeVKdMM2;
extern _KLkeyword_methodGVKe KmakeVKdMM3;
extern _KLkeyword_methodGVKe KmakeVKdMM4;
extern _KLkeyword_methodGVKe KmakeVKdMM5;
extern _KLkeyword_methodGVKe KmakeVKdMM6;
extern _KLkeyword_methodGVKe KmakeVKdMM7;
extern _KLkeyword_methodGVKe KmakeVKdMM8;
extern _KLkeyword_methodGVKe KmakeVKdMM9;
extern _KLkeyword_methodGVKe KmakeVKdMM10;
extern _KLkeyword_methodGVKe KmakeVKdMM11;
extern _KLkeyword_methodGVKe KmakeVKdMM12;
extern _KLkeyword_methodGVKe KmakeVKdMM13;
extern _KLkeyword_methodGVKe KmakeVKdMM14;
extern _KLkeyword_methodGVKe KmakeVKdMM15;
extern _KLkeyword_methodGVKe KmakeVKdMM16;
extern _KLkeyword_methodGVKe KmakeVKdMM17;
extern _KLkeyword_methodGVKe KmakeVKdMM18;
extern _KLkeyword_methodGVKe KmakeVKdMM19;
extern _KLkeyword_methodGVKe KmakeVKdMM20;
extern _KLkeyword_methodGVKe KmakeVKdMM21;
extern _KLkeyword_methodGVKe KmakeVKdMM22;
extern _KLkeyword_methodGVKe KmakeVKdMM23;
extern _KLkeyword_methodGVKe KmakeVKdMM24;
extern _KLkeyword_methodGVKe KmakeVKdMM25;
extern _KLkeyword_methodGVKe KmakeVKdMM26;
extern _KLkeyword_methodGVKe KmakeVKdMM27;
extern _KLkeyword_methodGVKe KmakeVKdMM28;
extern _KLkeyword_methodGVKe KmakeVKdMM29;
extern _KLkeyword_methodGVKe KmakeVKdMM30;
extern _KLkeyword_methodGVKe KmakeVKdMM31;
extern _KLkeyword_methodGVKe KmakeVKdMM32;
extern _KLkeyword_methodGVKe KmakeVKdMM33;
extern _KLkeyword_methodGVKe KmakeVKdMM34;
extern _KLkeyword_methodGVKe KmakeVKdMM35;
extern _KLkeyword_methodGVKe KmakeVKdMM36;
extern _KLkeyword_methodGVKe KmakeVKdMM37;
extern _KLkeyword_methodGVKe KmakeVKdMM38;
extern _KLkeyword_methodGVKe KmakeVKdMM39;
extern _KLkeyword_methodGVKe KmakeVKdMM40;
extern _KLkeyword_methodGVKe KmakeVKdMM41;
extern _KLkeyword_methodGVKe KmakeVKdMM42;
extern _KLkeyword_methodGVKe KmakeVKdMM43;
extern _KLkeyword_methodGVKe KmakeVKdMM44;
extern _KLkeyword_methodGVKe KmakeVKdMM45;
extern _KLkeyword_methodGVKe KmakeVKdMM46;
extern _KLkeyword_methodGVKe KmakeVKdMM47;
extern _KLkeyword_methodGVKe KmakeVKdMM48;
extern _KLkeyword_methodGVKe KmakeVKdMM49;
extern _KLkeyword_methodGVKe KmakeVKdMM52;
extern _KLkeyword_methodGVKe KmakeVKdMM53;
extern _KLkeyword_methodGVKe KmakeVKdMM54;
extern _KLkeyword_methodGVKe KmakeVKdMM55;
extern _KLkeyword_methodGVKe KmakeVKdMM56;
extern _KLkeyword_methodGVKe KmakeVKdMM57;
extern _KLkeyword_methodGVKe KmakeVKdMM58;
extern _KLkeyword_methodGVKe KmakeVKdMM59;
extern _KLkeyword_methodGVKe KmakeVKdMM60;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_19;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_21;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_23;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_25;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_26;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_27;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_28;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_29;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_30;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_31;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_33;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_34;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_35;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_36;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_37;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_38;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_39;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_40;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_41;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_42;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_43;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_44;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_45;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_46;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_47;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_48;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_49;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_50;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_51;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_52;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_53;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_54;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_55;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_56;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_57;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_58;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_59;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_60;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_61;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_62;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_63;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_64;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_65;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_66;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_67;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_68;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_69;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_70;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_71;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_72;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_73;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_74;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_75;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_76;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_77;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_78;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_79;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_80;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_81;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_82;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_83;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLsealed_generic_functionGVKe Kinit_keywordVKe;
extern _KLsealed_generic_functionGVKe Kslot_ownerVKe;
extern _KLsealed_generic_functionGVKe Kslot_typeVKe;
extern _KLsealed_generic_functionGVKe Kconcatenate_asVKd;
extern _KLsealed_generic_functionGVKe Kclass_known_joint_setterVKe;
extern D Tdylan_library_initializedQTYthreads_primitivesVdylan;
extern D Ddirect_object_mm_wrappersVKi;
extern D Dnot_foundVKi;
extern D Dempty_subjunctive_class_universeVKe;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;

/* Defined object declarations */

extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLscu_nodeGVKi;
extern _KLmm_wrapperGVKi_0 KLscu_nodeGVKiW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kdefault_class_constructorVKiI (D, D);
D Kclass_instanceQ_rcpl_single_largeVKiI (D, D);
D Kmasked_class_instanceQVKiI (D, D);
D Kgeneral_rcpl_class_instanceQVKiI (D, D);
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
D Kclass_instanceQ_initialVKiI (D, D);
D KLobjectG_class_instanceQVKiI (D, D);
D Kinstall_and_return_make_method_init_dataVKiI (D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
D Kallocate_instanceVKeI (D, D);
D Kinstance_storage_size_setterVKeMM1I (D, D);
D Kclass_incrementalQ_setterVKiMM1I (D, D);
D Kclass_completeQ_setterVKeMM1I (D, D);
D Kclass_sealedQ_setterVKeMM1I (D, D);
D Kclass_primaryQ_setterVKeMM1I (D, D);
D Kclass_abstractQ_setterVKeMM1I (D, D);
extern _KLsimple_methodGVKe Kclass_abstractQVKeMM1;
D Kclass_abstractQVKeMM1I (D x_);
extern _KLsimple_methodGVKe Kclass_abstractQ_setterVKeMM1;
extern _KLsimple_methodGVKe Kclass_primaryQVKeMM1;
D Kclass_primaryQVKeMM1I (D x_);
extern _KLsimple_methodGVKe Kclass_primaryQ_setterVKeMM1;
extern _KLsimple_methodGVKe Kclass_sealedQVKeMM1;
D Kclass_sealedQVKeMM1I (D x_);
extern _KLsimple_methodGVKe Kclass_sealedQ_setterVKeMM1;
extern _KLsimple_methodGVKe Kclass_completeQVKeMM1;
D Kclass_completeQVKeMM1I (D x_);
extern _KLsimple_methodGVKe Kclass_completeQ_setterVKeMM1;
extern _KLsimple_methodGVKe Kclass_incrementalQVKiMM1;
D Kclass_incrementalQVKiMM1I (D x_);
extern _KLsimple_methodGVKe Kclass_incrementalQ_setterVKiMM1;
extern _KLsimple_methodGVKe Kinstance_storage_sizeVKeMM1;
D Kinstance_storage_sizeVKeMM1I (D x_);
extern _KLsimple_methodGVKe Kinstance_storage_size_setterVKeMM1;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM6;
D Kinitialize_packed_slotsVKeMM6I (D, D, D, D, D, D, D, D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KasVKd;
D Kmake_empty_subjunctive_class_universeVKeI ();
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
D Kclass_instance_headerVKiI (D);
D KsubiclassQVKiI (D, D, D, D);
D KsubtypeQVKdMM10I (D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM51;
D KmakeVKdMM51I (D class_, D init_args_);
D Kclass_constructor_atomicallyVKiI (D);
D Kreduce_incomplete_classesVKiMM10I (D, D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM9;
D Kmap_congruency_classesVKiMM9I (D f_, D t_);
extern _KLsimple_methodGVKe Khas_instancesQVKeMM2;
D Khas_instancesQVKeMM2I (D, D, D);
D Kscu_entryQVKeI (D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM10;
D Ksubjunctive_subtypeQVKiMM10I (D class_1_, D class_2_, D scu_);
extern _KLsimple_methodGVKe KsubtypeQVKdMM10;
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM10;
extern _KLsimple_methodGVKe Ktype_completeQVKeMM7;
D Ktype_completeQVKeMM7I (D t_);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM4;
D Kdisjoint_types_1QVKeMM4I (D, D, D, D);
D Keffective_initial_value_descriptorVKiI (D, D);
extern _KLclassGVKd KLslot_type_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_type_errorGVKeW;
D Kaugment_iclass_rcpl_position_dataVKiI (D, D);
extern _KLsimple_methodGVKe Kall_iclass_superclassesVKe;
D Kall_iclass_superclassesVKeI (D, D);
D Kiclass_type_completeQ_setterVKeMM0I (D, D);
D Kiclass_instantiableQ_setterVKeMM0I (D, D);
D Kinitialize_class_instanceQ_iepVKiI (D);
D Kscu_entry_setterVKeI (D, D, D);
D Kreport_class_incompleteVKiI (D, D);
D Kinvalidate_class_instanceQ_iepVKiI (D);
D Kallocation_attributesVKiMM0I (D, D);
D Kdefaulted_initialization_argumentsVKiI (D);
extern _KLkeyword_methodGVKe Kdefault_initializeVKi;
D Kdefault_initializeVKiI (D, D, D);
D Kscu_initialize_allVKeI (D, D);
D Kscu_doVKeI (D, D);
D KreinitializeVKnMM0I (D, D);
D Kkludge_up_init_valueVKiI (D, D, D);
static _KLbyte_stringGVKd_19 K87;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_scu_initialize_allF90;
static D Kanonymous_of_scu_initialize_allF90I (D, D);
D Kscu_force_initializationVKeI (D, D, D);
static _KLsignatureGVKe K92;
static _KLsimple_object_vectorGVKd_2 K93;
D Kkeyword_valueVKiI (D, D, D);
D Keffective_initialization_argument_descriptorVKiI (D, D);
static _KLbyte_stringGVKd_46 K96;
static _KLkeyword_signatureGVKe K97;
static _KLsimple_object_vectorGVKd_2 K98;
extern _KLsimple_methodGVKe Knever_instanceQ_functionVKi;
D Knever_instanceQ_functionVKiI (D, D);
extern _KLclassGVKd KLclass_incomplete_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLclass_incomplete_errorGVKeW;
static _KLimplementation_classGVKe K103;
static _KLsimple_object_vectorGVKd_3 K104;
extern _KLkeyword_methodGVKe KLclass_incomplete_errorGZ32ZconstructorVKiMM0;
D KLclass_incomplete_errorGZ32ZconstructorVKiMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K107;
static _KLsimple_object_vectorGVKd_8 K108;
static _KLsimple_object_vectorGVKd_3 K109;
static _KLbyte_stringGVKd_23 K110;
static _KLkeyword_signatureAvaluesGVKi K111;
static _KLsimple_object_vectorGVKd_6 K112;
static _KLsimple_object_vectorGVKd_3 K113;
static _KLsimple_object_vectorGVKd_1 K114;
static _KLbyte_stringGVKd_24 K115;
static _KLbyte_stringGVKd_65 K116;
extern _KLsimple_methodGVKe Kclass_instanceQ_rcpl_single_smallVKi;
extern _KLsimple_methodGVKe Kclass_instanceQ_rcpl_single_largeVKi;
extern _KLsimple_methodGVKe Kclass_instanceQ_initialVKi;
extern _KLsimple_methodGVKe Kgeneral_rcpl_class_instanceQVKi;
extern _KLsimple_methodGVKe Kmasked_class_instanceQVKi;
static _KLsignatureAvaluesGVKi K122;
static _KLsimple_object_vectorGVKd_2 K123;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_iclass_rcpl_position_dataF136;
static D Kanonymous_of_augment_iclass_rcpl_position_dataF136I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_iclass_rcpl_position_dataF134;
static D Kanonymous_of_augment_iclass_rcpl_position_dataF134I ();
static _KLbyte_stringGVKd_18 K128;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_iclass_rcpl_position_dataF131;
static D Kanonymous_of_augment_iclass_rcpl_position_dataF131I ();
static _KLbyte_stringGVKd_31 K132;
static _KLsignatureGVKe K133;
static _KLbyte_stringGVKd_33 K135;
static _KLbyte_stringGVKd_45 K137;
static _KLimplementation_classGVKe K138;
static _KLsimple_object_vectorGVKd_5 K139;
extern _KLkeyword_methodGVKe KLslot_type_errorGZ32ZconstructorVKiMM0;
D KLslot_type_errorGZ32ZconstructorVKiMM0I (D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K142;
static _KLsimple_object_vectorGVKd_7 K143;
static _KLsimple_object_vectorGVKd_1 K144;
extern _KLinstance_slot_descriptorGVKe Kslot_type_error_slot_descriptorVKeHLslot_type_errorG;
extern _KLsealed_generic_functionGVKe Kslot_type_error_slot_descriptorVKe;
extern _KLgetter_methodGVKi Kslot_type_error_slot_descriptorVKeMM0;
static _KLpairGVKd K148;
static _KLbyte_stringGVKd_31 K149;
static _KLkeyword_signatureAvaluesGVKi K150;
static _KLsimple_object_vectorGVKd_10 K151;
static _KLsimple_object_vectorGVKd_5 K152;
static _KLsimple_object_vectorGVKd_1 K153;
static _KLbyte_stringGVKd_17 K154;
D Kgrounded_memberQVKiI (D, D);
static _KLsignatureAvaluesGVKi K156;
static _KLsimple_object_vectorGVKd_4 K157;
static _KLsignatureAvaluesGVKi K158;
static _KLsignatureGVKe K159;
static _KLsimple_object_vectorGVKd_3 K160;
static _KLsignatureAvaluesGVKi K161;
static _KLsignatureAvaluesGVKi K162;
static _KLsimple_object_vectorGVKd_3 K163;
static _KLsignatureAvaluesGVKi K164;
static _KLsignatureGVKe K165;
static _KLsimple_object_vectorGVKd_2 K166;
static _KLkeyword_signatureGVKe K167;
static _KLbyte_stringGVKd_65 K168;
static _KLimplementation_classGVKe K169;
static _KLsimple_object_vectorGVKd_2 K170;
extern _KLkeyword_methodGVKe KLsubjunctive_class_universeGZ32ZconstructorVKiMM0;
D KLsubjunctive_class_universeGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K173;
static _KLsimple_object_vectorGVKd_6 K174;
static D K181I ();
D KinitializeVKdMM19I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF179;
static D Kanonymous_of_initializeF179I (D);
static _KLsignatureAvaluesGVKi K180;
static _KLkeyword_signatureAvaluesGVKi K182;
static _KLsimple_object_vectorGVKd_1 K183;
extern _KLinstance_slot_descriptorGVKe Kscu_alistVKiHLsubjunctive_class_universeG;
extern _KLinstance_slot_descriptorGVKe Kscu_converterVKeHLsubjunctive_class_universeG;
extern _KLsealed_generic_functionGVKe Kscu_converterVKe;
extern _KLsealed_generic_functionGVKe Kscu_converter_setterVKi;
extern _KLsetter_methodGVKi Kscu_converter_setterVKiMM0;
static _KLpairGVKd K189;
static _KLbyte_stringGVKd_20 K190;
extern _KLgetter_methodGVKi Kscu_converterVKeMM0;
static _KLpairGVKd K192;
static _KLbyte_stringGVKd_13 K193;
static _KLsimple_closure_methodGVKi_0 K204;
static D K204I ();
extern _KLsealed_generic_functionGVKe Kscu_alistVKi;
extern _KLsealed_generic_functionGVKe Kscu_alist_setterVKi;
extern _KLsetter_methodGVKi Kscu_alist_setterVKiMM0;
static _KLpairGVKd K199;
static _KLbyte_stringGVKd_16 K200;
extern _KLgetter_methodGVKi Kscu_alistVKiMM0;
static _KLpairGVKd K202;
static _KLbyte_stringGVKd_9 K203;
static _KLsignatureGVKe K205;
static _KLbyte_stringGVKd_28 K206;
static _KLpairGVKd K207;
static _KLpairGVKd K208;
static _KLpairGVKd K209;
static _KLpairGVKd K210;
static _KLpairGVKd K211;
static _KLpairGVKd K212;
static _KLpairGVKd K213;
static _KLpairGVKd K214;
static _KLpairGVKd K215;
static _KLpairGVKd K216;
static _KLpairGVKd K217;
static _KLpairGVKd K218;
static _KLpairGVKd K219;
static _KLpairGVKd K220;
static _KLpairGVKd K221;
static _KLpairGVKd K222;
static _KLpairGVKd K223;
static _KLpairGVKd K224;
static _KLpairGVKd K225;
static _KLpairGVKd K226;
static _KLpairGVKd K227;
static _KLpairGVKd K228;
static _KLpairGVKd K229;
static _KLpairGVKd K230;
static _KLpairGVKd K231;
static _KLpairGVKd K232;
static _KLpairGVKd K233;
static _KLpairGVKd K234;
static _KLpairGVKd K235;
static _KLpairGVKd K236;
static _KLpairGVKd K237;
static _KLpairGVKd K238;
static _KLpairGVKd K239;
static _KLpairGVKd K240;
static _KLpairGVKd K241;
static _KLpairGVKd K242;
static _KLpairGVKd K243;
static _KLpairGVKd K244;
static _KLpairGVKd K245;
static _KLpairGVKd K246;
static _KLpairGVKd K247;
static _KLpairGVKd K248;
static _KLpairGVKd K249;
static _KLpairGVKd K250;
static _KLpairGVKd K251;
static _KLpairGVKd K252;
static _KLpairGVKd K253;
static _KLpairGVKd K254;
static _KLpairGVKd K255;
static _KLpairGVKd K256;
static _KLpairGVKd K257;
static _KLpairGVKd K258;
static _KLpairGVKd K259;
static _KLpairGVKd K260;
static _KLpairGVKd K261;
static _KLpairGVKd K262;
static _KLpairGVKd K263;
static _KLpairGVKd K264;
static _KLpairGVKd K265;
static _KLpairGVKd K266;
static _KLpairGVKd K267;
static _KLpairGVKd K268;
static _KLpairGVKd K269;
static _KLpairGVKd K270;
static _KLpairGVKd K271;
static _KLpairGVKd K272;
static _KLpairGVKd K273;
static _KLpairGVKd K274;
static _KLpairGVKd K275;
static _KLpairGVKd K276;
static _KLpairGVKd K277;
static _KLpairGVKd K278;
static _KLpairGVKd K279;
static _KLpairGVKd K280;
static _KLsignatureGVKe K281;
static _KLbyte_stringGVKd_2 K282;
static _KLsimple_object_vectorGVKd_2 K283;
static _KLbyte_stringGVKd_15 K284;
D Kslots_have_fixed_offsetsQ_bit_setterVKiMM0I (D, D);
D Kslots_have_fixed_offsetsQ_computedQ_setterVKiMM0I (D, D);
D Kiclass_subclasses_fixedQ_setterVKeMM0I (D, D);
static _KLkeyword_signatureGVKe K288;
static _KLsimple_object_vectorGVKd_22 K289;
static _KLsymbolGVKd KJiclass_type_completeQ_;
static _KLsymbolGVKd KJclass_completeQ_;
static _KLsymbolGVKd KJincrementalQ_;
static _KLsymbolGVKd KJslots_have_fixed_offsetsQ_;
static _KLsymbolGVKd KJslots_have_fixed_offsetsQ_computedQ_;
static _KLsymbolGVKd KJiclass_instantiableQ_;
static _KLsymbolGVKd KJiclass_subclasses_fixedQ_;
static _KLbyte_stringGVKd_24 K297;
static _KLbyte_stringGVKd_20 K298;
static _KLbyte_stringGVKd_35 K299;
static _KLbyte_stringGVKd_25 K300;
static _KLbyte_stringGVKd_12 K301;
static _KLbyte_stringGVKd_15 K302;
static _KLbyte_stringGVKd_21 K303;
static _KLsimple_object_vectorGVKd_11 K304;
static _KLsignatureAvaluesGVKi K305;
static _KLsimple_object_vectorGVKd_2 K306;
static _KLsignatureAvaluesGVKi K307;
static _KLsignatureAvaluesGVKi K308;
static _KLsimple_object_vectorGVKd_2 K309;
static _KLsignatureAvaluesGVKi K310;
D Kallocate_instance_iVKiI (D, D);
D Kclass_not_instantiableVKiI (D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K313;
static _KLbyte_stringGVKd_41 K314;
static _KLbyte_stringGVKd_54 K315;
static _KLbyte_stringGVKd_77 K316;
extern _KLkeyword_methodGVKe KinitializeVKdMM19;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_50;
static _KLpairGVKd K319;
static _KLpairGVKd K320;
static _KLpairGVKd K321;
static _KLpairGVKd K322;
static _KLpairGVKd K323;
static _KLpairGVKd K324;
static _KLpairGVKd K325;
static _KLpairGVKd K326;
static _KLpairGVKd K327;
static _KLpairGVKd K328;
static _KLpairGVKd K329;
static _KLpairGVKd K330;
static _KLpairGVKd K331;
static _KLpairGVKd K332;
static _KLpairGVKd K333;
static _KLpairGVKd K334;
static _KLpairGVKd K335;
static _KLpairGVKd K336;
static _KLpairGVKd K337;
static _KLpairGVKd K338;
static _KLpairGVKd K339;
static _KLpairGVKd K340;
static _KLpairGVKd K341;
static _KLpairGVKd K342;
static _KLpairGVKd K343;
static _KLpairGVKd K344;
static _KLpairGVKd K345;
static _KLpairGVKd K346;
static _KLpairGVKd K347;
static _KLpairGVKd K348;
static _KLpairGVKd K349;
static _KLkeyword_signatureGVKe K350;
static _KLbyte_stringGVKd_10 K351;
static _KLkeyword_signatureGVKe K352;
static _KLbyte_stringGVKd_68 K353;
static _KLkeyword_signatureGVKe K354;
extern _KLsimple_methodGVKe Kget_class_instanceQ_countsVKe;
D Kget_class_instanceQ_countsVKeI (D);
static _KLsealed_generic_functionGVKe K357;
static _KLsimple_methodGVKe Kclass_instanceQ_countF362;
static D Kclass_instanceQ_countF362I (D c_);
static _KLpairGVKd K360;
static _KLbyte_stringGVKd_21 K361;
static _KLsignatureAvaluesGVKi K363;
static _KLsignatureAvaluesGVKi K364;
extern _KLsimple_methodGVKe KLobjectG_class_instanceQVKi;
static _KLsignatureAvaluesGVKi K366;
static _KLsimple_object_vectorGVKd_2 K367;
static _KLsimple_object_vectorGVKd_1 K368;
static _KLsingletonGVKd K369;
static _KLsingletonGVKd K370;
extern _KLsimple_methodGVKe Kaugment_rcpl_position_data_kludgeyVKi;
D Kaugment_rcpl_position_data_kludgeyVKiI (D);
static _KLsignatureGVKe K373;
extern _KLsimple_methodGVKe Kaugment_rcpl_position_data_multipleVKi;
D Kaugment_rcpl_position_data_multipleVKiI (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_rcpl_position_data_multipleF384;
static D Kanonymous_of_augment_rcpl_position_data_multipleF384I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_rcpl_position_data_multipleF383;
static D Kanonymous_of_augment_rcpl_position_data_multipleF383I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_rcpl_position_data_multipleF382;
static D Kanonymous_of_augment_rcpl_position_data_multipleF382I ();
static _KLsignatureGVKe K385;
static _KLsimple_object_vectorGVKd_2 K386;
extern _KLsimple_methodGVKe Kdefaulted_initialization_argumentsVKi;
static _KLsignatureAvaluesGVKi K388;
extern _KLsimple_methodGVKe Kallocate_instanceVKe;
static _KLsignatureGVKe K390;
extern _KLsimple_methodGVKe Kinstall_and_return_make_method_init_dataVKi;
static _KLsignatureGVKe K392;
static _KLsimple_object_vectorGVKd_1 K393;
extern _KLsimple_methodGVKe Kscu_doVKe;
static _KLsignatureGVKe K395;
static _KLsimple_object_vectorGVKd_2 K396;
extern _KLsimple_methodGVKe Kscu_entry_setterVKe;
static _KLsignatureAvaluesGVKi K398;
static _KLsimple_object_vectorGVKd_3 K399;
extern _KLsimple_methodGVKe Kscu_force_initializationVKe;
static _KLsignatureAvaluesGVKi K401;
static _KLsimple_object_vectorGVKd_3 K402;
extern _KLsimple_methodGVKe Kscu_initialize_allVKe;
extern _KLsimple_methodGVKe Kscu_entryVKe;
D Kscu_entryVKeI (D c_, D scu_);
static _KLsignatureAvaluesGVKi K406;
static _KLsimple_object_vectorGVKd_2 K407;
extern _KLsimple_methodGVKe Kscu_entryQVKe;
static _KLsignatureAvaluesGVKi K409;
static _KLsimple_object_vectorGVKd_1 K410;
static _KLunionGVKe K411;
static _KLsingletonGVKd K412;
extern _KLsimple_methodGVKe Kmake_empty_subjunctive_class_universeVKe;
static _KLimplementation_classGVKe K414;
static _KLsimple_object_vectorGVKd_4 K415;
extern _KLkeyword_methodGVKe KLscu_nodeGZ32ZconstructorVKiMM0;
D KLscu_nodeGZ32ZconstructorVKiMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K418;
static _KLkeyword_signatureAvaluesGVKi K419;
static _KLsimple_object_vectorGVKd_6 K420;
static _KLsimple_object_vectorGVKd_3 K421;
static _KLsimple_object_vectorGVKd_1 K422;
extern _KLinstance_slot_descriptorGVKe Kscu_node_nextVKiHLscu_nodeG;
extern _KLinstance_slot_descriptorGVKe Kscu_node_classVKiHLscu_nodeG;
extern _KLinstance_slot_descriptorGVKe Kscu_node_iclassVKiHLscu_nodeG;
extern _KLinstance_slot_descriptorGVKe Kscu_node_initializedQVKiHLscu_nodeG;
extern _KLsealed_generic_functionGVKe Kscu_node_initializedQVKi;
extern _KLsealed_generic_functionGVKe Kscu_node_initializedQ_setterVKi;
extern _KLsetter_methodGVKi Kscu_node_initializedQ_setterVKiMM0;
static _KLpairGVKd K430;
static _KLbyte_stringGVKd_28 K431;
extern _KLgetter_methodGVKi Kscu_node_initializedQVKiMM0;
static _KLpairGVKd K433;
static _KLbyte_stringGVKd_21 K434;
extern _KLsealed_generic_functionGVKe Kscu_node_iclassVKi;
extern _KLgetter_methodGVKi Kscu_node_iclassVKiMM0;
static _KLpairGVKd K437;
static _KLbyte_stringGVKd_15 K438;
extern _KLsealed_generic_functionGVKe Kscu_node_classVKi;
extern _KLgetter_methodGVKi Kscu_node_classVKiMM0;
static _KLpairGVKd K441;
static _KLbyte_stringGVKd_14 K442;
extern _KLsealed_generic_functionGVKe Kscu_node_nextVKi;
extern _KLgetter_methodGVKi Kscu_node_nextVKiMM0;
static _KLpairGVKd K445;
static _KLbyte_stringGVKd_13 K446;
static _KLbyte_stringGVKd_10 K447;
extern _KLkeyword_methodGVKe KmakeVKdMM50;
D KmakeVKdMM50I (D, D, D, D, D);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_84;
static _KLpairGVKd K451;
static _KLpairGVKd K452;
static _KLpairGVKd K453;
static _KLpairGVKd K454;
static _KLpairGVKd K455;
static _KLpairGVKd K456;
static _KLpairGVKd K457;
static _KLpairGVKd K458;
static _KLpairGVKd K459;
static _KLpairGVKd K460;
static _KLpairGVKd K461;
static _KLpairGVKd K462;
static _KLpairGVKd K463;
static _KLpairGVKd K464;
static _KLpairGVKd K465;
static _KLpairGVKd K466;
static _KLpairGVKd K467;
static _KLpairGVKd K468;
static _KLpairGVKd K469;
static _KLpairGVKd K470;
static _KLpairGVKd K471;
static _KLpairGVKd K472;
static _KLpairGVKd K473;
static _KLpairGVKd K474;
static _KLpairGVKd K475;
static _KLpairGVKd K476;
static _KLpairGVKd K477;
static _KLpairGVKd K478;
static _KLpairGVKd K479;
static _KLpairGVKd K480;
static _KLpairGVKd K481;
static _KLpairGVKd K482;
static _KLpairGVKd K483;
static _KLpairGVKd K484;
static _KLpairGVKd K485;
static _KLpairGVKd K486;
static _KLpairGVKd K487;
static _KLpairGVKd K488;
static _KLpairGVKd K489;
static _KLpairGVKd K490;
static _KLpairGVKd K491;
static _KLpairGVKd K492;
static _KLpairGVKd K493;
static _KLpairGVKd K494;
static _KLpairGVKd K495;
static _KLpairGVKd K496;
static _KLpairGVKd K497;
static _KLpairGVKd K498;
static _KLpairGVKd K499;
static _KLpairGVKd K500;
static _KLpairGVKd K501;
static _KLpairGVKd K502;
static _KLpairGVKd K503;
static _KLpairGVKd K504;
static _KLpairGVKd K505;
static _KLpairGVKd K506;
static _KLpairGVKd K507;
static _KLpairGVKd K508;
static _KLpairGVKd K509;
static _KLpairGVKd K510;
static _KLpairGVKd K511;
static _KLkeyword_signatureGVKe K512;
static _KLbyte_stringGVKd_4 K513;
static _KLsubclassGVKe K514;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF518;
static D Kanonymous_of_makeF518I (D);
static _KLbyte_stringGVKd_86 K517;
static _KLsignatureGVKe K519;
static _KLkeyword_signatureAvaluesGVKi K520;
static _KLsimple_object_vectorGVKd_6 K521;
static _KLsimple_object_vectorGVKd_1 K522;
static _KLsimple_object_vectorGVKd_3 K523;
static _KLsingletonGVKd K524;
extern _KLsimple_methodGVKe Kiclass_type_completeQVKeMM0;
D Kiclass_type_completeQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Kiclass_type_completeQ_setterVKeMM0;
extern _KLsimple_methodGVKe Kiclass_instantiableQVKeMM0;
D Kiclass_instantiableQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Kiclass_instantiableQ_setterVKeMM0;
extern _KLsimple_methodGVKe Kiclass_subclasses_fixedQVKeMM0;
D Kiclass_subclasses_fixedQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Kiclass_subclasses_fixedQ_setterVKeMM0;
extern _KLsimple_methodGVKe KreinitializeVKnMM0;
static _KLsignatureGVKe K535;
extern _KLsimple_methodGVKe Kaugment_class_known_jointVKiMM0;
D Kaugment_class_known_jointVKiMM0I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_class_known_jointF546;
static D Kanonymous_of_augment_class_known_jointF546I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_class_known_jointF545;
static D Kanonymous_of_augment_class_known_jointF545I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_class_known_jointF544;
static D Kanonymous_of_augment_class_known_jointF544I ();
static _KLsignatureGVKe K547;

/* Indirection variables */

static D IKJiclass_type_completeQ_ = &KJiclass_type_completeQ_;
static D IKJclass_completeQ_ = &KJclass_completeQ_;
static D IKJincrementalQ_ = &KJincrementalQ_;
static D IKJslots_have_fixed_offsetsQ_ = &KJslots_have_fixed_offsetsQ_;
static D IKJslots_have_fixed_offsetsQ_computedQ_ = &KJslots_have_fixed_offsetsQ_computedQ_;
static D IKJiclass_instantiableQ_ = &KJiclass_instantiableQ_;
static D IKJiclass_subclasses_fixedQ_ = &KJiclass_subclasses_fixedQ_;

/* Variables */

D augment_class_known_jointVKi = &Kaugment_class_known_jointVKiMM0;
D reinitializeVKn = &KreinitializeVKnMM0;
D slot_type_error_slot_descriptorVKe = &Kslot_type_error_slot_descriptorVKe;
D scu_converterVKe = &Kscu_converterVKe;
D iclass_subclasses_fixedQ_setterVKe = &Kiclass_subclasses_fixedQ_setterVKeMM0;
D iclass_subclasses_fixedQVKe = &Kiclass_subclasses_fixedQVKeMM0;
D iclass_instantiableQ_setterVKe = &Kiclass_instantiableQ_setterVKeMM0;
D iclass_instantiableQVKe = &Kiclass_instantiableQVKeMM0;
D iclass_type_completeQ_setterVKe = &Kiclass_type_completeQ_setterVKeMM0;
D iclass_type_completeQVKe = &Kiclass_type_completeQVKeMM0;
D asVKd = &KasVKd;
D makeVKd = &KmakeVKd;
D initializeVKd = &KinitializeVKd;
D Lscu_nodeGVKi = &KLscu_nodeGVKi;
D Dempty_scu_nodeVKi = &KPunboundVKi;
D Lsubjunctive_class_universeGVKe = &KLsubjunctive_class_universeGVKe;
D make_empty_subjunctive_class_universeVKe = &Kmake_empty_subjunctive_class_universeVKe;
D scu_entryQVKe = &Kscu_entryQVKe;
D scu_entryVKe = &Kscu_entryVKe;
D scu_initialize_allVKe = &Kscu_initialize_allVKe;
D scu_force_initializationVKe = &Kscu_force_initializationVKe;
D scu_entry_setterVKe = &Kscu_entry_setterVKe;
D scu_doVKe = &Kscu_doVKe;
D all_iclass_superclassesVKe = &Kall_iclass_superclassesVKe;
D Lslot_type_errorGVKe = &KLslot_type_errorGVKe;
D Dslot_initial_data_lockVKi = &KPfalseVKi;
D install_and_return_make_method_init_dataVKi = &Kinstall_and_return_make_method_init_dataVKi;
D allocate_instanceVKe = &Kallocate_instanceVKe;
D Lclass_incomplete_errorGVKe = &KLclass_incomplete_errorGVKe;
D class_incomplete_error_classVKe = &Kincomplete_objectVKe;
D default_class_constructorVKi = &Kdefault_class_constructorVKi;
D default_initializeVKi = &Kdefault_initializeVKi;
D defaulted_initialization_argumentsVKi = &Kdefaulted_initialization_argumentsVKi;
D never_instanceQ_functionVKi = &Knever_instanceQ_functionVKi;
D Dclass_bashing_lockVKi = &KPunboundVKi;
D augment_rcpl_position_data_multipleVKi = &Kaugment_rcpl_position_data_multipleVKi;
D augment_rcpl_position_data_kludgeyVKi = &Kaugment_rcpl_position_data_kludgeyVKi;
D general_rcpl_class_instanceQVKi = &Kgeneral_rcpl_class_instanceQVKi;
D class_instanceQ_initialVKi = &Kclass_instanceQ_initialVKi;
D class_instanceQ_rcpl_single_largeVKi = &Kclass_instanceQ_rcpl_single_largeVKi;
D class_instanceQ_rcpl_single_smallVKi = &Kclass_instanceQ_rcpl_single_smallVKi;
D LobjectG_class_instanceQVKi = &KLobjectG_class_instanceQVKi;
D masked_class_instanceQVKi = &Kmasked_class_instanceQVKi;
D get_class_instanceQ_countsVKe = &Kget_class_instanceQ_countsVKe;
D Tclass_profiling_enabledQTVKe = &KPfalseVKi;

/* Objects */

_KLincremental_generic_functionGVKe KmakeVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K512,
  (D) 1,
  &K513,
  &K451,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_84,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLscu_nodeGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K447,
  &K414,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLscu_nodeGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K414,
  (D) 1,
  17,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe Kdefault_class_constructorVKi = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K354,
  &key_mep_2,
  &Kdefault_class_constructorVKiI,
  &KPempty_vectorVKi
};

_KLincremental_generic_functionGVKe KinitializeVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K350,
  &KPfalseVKi,
  &K351,
  &K319,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_50,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kclass_abstractQVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kclass_abstractQVKeMM1I
};

_KLsimple_methodGVKe Kclass_abstractQ_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kclass_abstractQ_setterVKeMM1I
};

_KLsimple_methodGVKe Kclass_primaryQVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kclass_primaryQVKeMM1I
};

_KLsimple_methodGVKe Kclass_primaryQ_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kclass_primaryQ_setterVKeMM1I
};

_KLsimple_methodGVKe Kclass_sealedQVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kclass_sealedQVKeMM1I
};

_KLsimple_methodGVKe Kclass_sealedQ_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kclass_sealedQ_setterVKeMM1I
};

_KLsimple_methodGVKe Kclass_completeQVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kclass_completeQVKeMM1I
};

_KLsimple_methodGVKe Kclass_completeQ_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kclass_completeQ_setterVKeMM1I
};

_KLsimple_methodGVKe Kclass_incrementalQVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kclass_incrementalQVKiMM1I
};

_KLsimple_methodGVKe Kclass_incrementalQ_setterVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kclass_incrementalQ_setterVKiMM1I
};

_KLsimple_methodGVKe Kinstance_storage_sizeVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K307,
  &Kinstance_storage_sizeVKeMM1I
};

_KLsimple_methodGVKe Kinstance_storage_size_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K305,
  &Kinstance_storage_size_setterVKeMM1I
};

_KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep,
  &K288,
  &key_mep,
  &Kinitialize_packed_slotsVKeMM6I,
  &K289
};

_KLincremental_generic_functionGVKe KasVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K281,
  (D) 1,
  &K282,
  &K207,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KasVKdRD_dylanRD_61,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLsubjunctive_class_universeGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K206,
  &K169,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K169,
  (D) 1,
  9,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KmakeVKdMM51 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K167,
  &key_mep_2,
  &KmakeVKdMM51I,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K165,
  &Kmap_congruency_classesVKiMM9I
};

_KLsimple_methodGVKe Khas_instancesQVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K164,
  &Khas_instancesQVKeMM2I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K162,
  &Ksubjunctive_subtypeQVKiMM10I
};

_KLsimple_methodGVKe KsubtypeQVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K161,
  &KsubtypeQVKdMM10I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K159,
  &Kreduce_incomplete_classesVKiMM10I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K158,
  &Ktype_completeQVKeMM7I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K156,
  &Kdisjoint_types_1QVKeMM4I
};

_KLclassGVKd KLslot_type_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K154,
  &K138,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLslot_type_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K138,
  (D) 2049,
  21,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kall_iclass_superclassesVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K92,
  &Kall_iclass_superclassesVKeI
};

_KLkeyword_methodGVKe Kdefault_initializeVKi = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K97,
  &key_mep_3,
  &Kdefault_initializeVKiI,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_19 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "can\'t find %= in %="
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_scu_initialize_allF90 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K92,
  &Kanonymous_of_scu_initialize_allF90I,
  (D) 1
};

static _KLsignatureGVKe K92 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K93
};

static _KLsimple_object_vectorGVKd_2 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLimplementation_classGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLbyte_stringGVKd_46 K96 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "Make %= required-init-keyword %= not supplied."
};

static _KLkeyword_signatureGVKe K97 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 45875209,
  &K98,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Knever_instanceQ_functionVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Knever_instanceQ_functionVKiI
};

_KLclassGVKd KLclass_incomplete_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K115,
  &K103,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLclass_incomplete_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K103,
  (D) 2049,
  13,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K103 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102093,
  &KLclass_incomplete_errorGVKe,
  &KLclass_incomplete_errorGVKeW,
  &KPfalseVKi,
  &K104,
  (D) 7025,
  &KLclass_incomplete_errorGZ32ZconstructorVKiMM0,
  &K107,
  &K108,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K109,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kincomplete_objectVKeHLobject_incompleteG
};

_KLkeyword_methodGVKe KLclass_incomplete_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K111,
  &key_mep_2,
  &KLclass_incomplete_errorGZ32ZconstructorVKiMM0I,
  &K112
};

static _KLsimple_object_vectorGVKd_2 K107 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_conditionGVKe,
  &KLincomplete_errorGVKi
};

static _KLsimple_object_vectorGVKd_8 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLobject_incompleteGVKe,
  &KLincomplete_errorGVKi,
  &KLsimple_conditionGVKe,
  &KLclass_incomplete_errorGVKe
};

static _KLsimple_object_vectorGVKd_3 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kincomplete_objectVKeHLobject_incompleteG,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

static _KLbyte_stringGVKd_23 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K111 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K113,
  &KDsignature_LobjectG_typesVKi,
  &K114
};

static _KLsimple_object_vectorGVKd_6 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJobject_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJobject_
};

static _KLsimple_object_vectorGVKd_1 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLclass_incomplete_errorGVKe
};

static _KLbyte_stringGVKd_24 K115 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<class-incomplete-error>"
};

static _KLbyte_stringGVKd_65 K116 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 261,
  "Attempt to modify the canonical empty subjunctive class universe!"
};

_KLsimple_methodGVKe Kclass_instanceQ_rcpl_single_smallVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K122,
  &Kclass_instanceQ_rcpl_single_smallVKiI
};

_KLsimple_methodGVKe Kclass_instanceQ_rcpl_single_largeVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K122,
  &Kclass_instanceQ_rcpl_single_largeVKiI
};

_KLsimple_methodGVKe Kclass_instanceQ_initialVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K122,
  &Kclass_instanceQ_initialVKiI
};

_KLsimple_methodGVKe Kgeneral_rcpl_class_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K122,
  &Kgeneral_rcpl_class_instanceQVKiI
};

_KLsimple_methodGVKe Kmasked_class_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K122,
  &Kmasked_class_instanceQVKiI
};

static _KLsignatureAvaluesGVKi K122 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K123,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLclassGVKd
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_iclass_rcpl_position_dataF136 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_iclass_rcpl_position_dataF136I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_iclass_rcpl_position_dataF134 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_iclass_rcpl_position_dataF134I,
  (D) 1
};

static _KLbyte_stringGVKd_18 K128 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "no reason supplied"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_iclass_rcpl_position_dataF131 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_iclass_rcpl_position_dataF131I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K132 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K133 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_33 K135 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLbyte_stringGVKd_45 K137 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLimplementation_classGVKe K138 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102101,
  &KLslot_type_errorGVKe,
  &KLslot_type_errorGVKeW,
  &KPfalseVKi,
  &K139,
  (D) 7017,
  &KLslot_type_errorGZ32ZconstructorVKiMM0,
  &K142,
  &K143,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K144,
  &K139,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Ktype_error_valueVKdHLtype_errorG,
  &Ktype_error_expected_typeVKdHLtype_errorG,
  &Kslot_type_error_slot_descriptorVKeHLslot_type_errorG
};

_KLkeyword_methodGVKe KLslot_type_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K150,
  &key_mep_2,
  &KLslot_type_errorGZ32ZconstructorVKiMM0I,
  &K151
};

static _KLsimple_object_vectorGVKd_1 K142 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLtype_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K143 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLtype_errorGVKd,
  &KLslot_type_errorGVKe
};

static _KLsimple_object_vectorGVKd_1 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kslot_type_error_slot_descriptorVKeHLslot_type_errorG
};

_KLinstance_slot_descriptorGVKe Kslot_type_error_slot_descriptorVKeHLslot_type_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLslot_type_errorGVKe,
  &KJslot_descriptor_,
  &Kslot_type_error_slot_descriptorVKe,
  &KPfalseVKi,
  &KLslot_descriptorGVKe
};

_KLsealed_generic_functionGVKe Kslot_type_error_slot_descriptorVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K149,
  &K148,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kslot_type_error_slot_descriptorVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kslot_type_error_slot_descriptorVKeHLslot_type_errorG
};

static _KLpairGVKd K148 = {
  &KLpairGVKdW /* wrapper */,
  &Kslot_type_error_slot_descriptorVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_31 K149 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "slot-type-error-slot-descriptor"
};

static _KLkeyword_signatureAvaluesGVKi K150 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K152,
  &KDsignature_LobjectG_typesVKi,
  &K153
};

static _KLsimple_object_vectorGVKd_10 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJvalue_,
  &KPunboundVKi,
  &KJtype_,
  &KPunboundVKi,
  &KJslot_descriptor_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_5 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJvalue_,
  &KJtype_,
  &KJslot_descriptor_
};

static _KLsimple_object_vectorGVKd_1 K153 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_type_errorGVKe
};

static _KLbyte_stringGVKd_17 K154 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<slot-type-error>"
};

static _KLsignatureAvaluesGVKi K156 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K157,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLclassGVKd,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K158 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LclassG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K159 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K160
};

static _KLsimple_object_vectorGVKd_3 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLclassGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K161 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LclassG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K162 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K163,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K164 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K163,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K165 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K166
};

static _KLsimple_object_vectorGVKd_2 K166 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLclassGVKd
};

static _KLkeyword_signatureGVKe K167 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43779077,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_65 K168 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 261,
  "attempt to call subclass? on an incompletely initialized class %="
};

static _KLimplementation_classGVKe K169 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsubjunctive_class_universeGVKe,
  &KLsubjunctive_class_universeGVKeW,
  &KPfalseVKi,
  &K170,
  (D) 7009,
  &KLsubjunctive_class_universeGZ32ZconstructorVKiMM0,
  &K173,
  &K174,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K170,
  &K170,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K170 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kscu_alistVKiHLsubjunctive_class_universeG,
  &Kscu_converterVKeHLsubjunctive_class_universeG
};

_KLkeyword_methodGVKe KLsubjunctive_class_universeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K182,
  &key_mep_2,
  &KLsubjunctive_class_universeGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K173 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K174 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF179 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K180,
  &Kanonymous_of_initializeF179I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K180 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LclassG_typesVKi,
  &KDsignature_Limplementation_classG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K182 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K183
};

static _KLsimple_object_vectorGVKd_1 K183 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsubjunctive_class_universeGVKe
};

_KLinstance_slot_descriptorGVKe Kscu_alistVKiHLsubjunctive_class_universeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K204,
  &KLsubjunctive_class_universeGVKe,
  &KPfalseVKi,
  &Kscu_alistVKi,
  &Kscu_alist_setterVKi,
  &KLscu_nodeGVKi
};

_KLinstance_slot_descriptorGVKe Kscu_converterVKeHLsubjunctive_class_universeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLsubjunctive_class_universeGVKe,
  &KPfalseVKi,
  &Kscu_converterVKe,
  &Kscu_converter_setterVKi,
  &KLfunctionGVKd
};

_KLsealed_generic_functionGVKe Kscu_converterVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K193,
  &K192,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kscu_converter_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K190,
  &K189,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kscu_converter_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kscu_converterVKeHLsubjunctive_class_universeG
};

static _KLpairGVKd K189 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_converter_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "scu-converter-setter"
};

_KLgetter_methodGVKi Kscu_converterVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kscu_converterVKeHLsubjunctive_class_universeG
};

static _KLpairGVKd K192 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_converterVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K193 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "scu-converter"
};

static _KLsimple_closure_methodGVKi_0 K204 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K205,
  &K204I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kscu_alistVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K203,
  &K202,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kscu_alist_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K200,
  &K199,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kscu_alist_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kscu_alistVKiHLsubjunctive_class_universeG
};

static _KLpairGVKd K199 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_alist_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K200 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "scu-alist-setter"
};

_KLgetter_methodGVKi Kscu_alistVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kscu_alistVKiHLsubjunctive_class_universeG
};

static _KLpairGVKd K202 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_alistVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K203 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "scu-alist"
};

static _KLsignatureGVKe K205 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_28 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "<subjunctive-class-universe>"
};

static _KLpairGVKd K207 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM0,
  &K208
};

static _KLpairGVKd K208 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM1,
  &K209
};

static _KLpairGVKd K209 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM2,
  &K210
};

static _KLpairGVKd K210 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM3,
  &K211
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM4,
  &K212
};

static _KLpairGVKd K212 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM5,
  &K213
};

static _KLpairGVKd K213 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM6,
  &K214
};

static _KLpairGVKd K214 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM7,
  &K215
};

static _KLpairGVKd K215 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM8,
  &K216
};

static _KLpairGVKd K216 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM9,
  &K217
};

static _KLpairGVKd K217 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM10,
  &K218
};

static _KLpairGVKd K218 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM11,
  &K219
};

static _KLpairGVKd K219 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM12,
  &K220
};

static _KLpairGVKd K220 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM13,
  &K221
};

static _KLpairGVKd K221 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM14,
  &K222
};

static _KLpairGVKd K222 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM15,
  &K223
};

static _KLpairGVKd K223 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM16,
  &K224
};

static _KLpairGVKd K224 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM17,
  &K225
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM18,
  &K226
};

static _KLpairGVKd K226 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM19,
  &K227
};

static _KLpairGVKd K227 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM20,
  &K228
};

static _KLpairGVKd K228 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM21,
  &K229
};

static _KLpairGVKd K229 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM22,
  &K230
};

static _KLpairGVKd K230 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM23,
  &K231
};

static _KLpairGVKd K231 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM24,
  &K232
};

static _KLpairGVKd K232 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM25,
  &K233
};

static _KLpairGVKd K233 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM26,
  &K234
};

static _KLpairGVKd K234 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM27,
  &K235
};

static _KLpairGVKd K235 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM28,
  &K236
};

static _KLpairGVKd K236 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM29,
  &K237
};

static _KLpairGVKd K237 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM30,
  &K238
};

static _KLpairGVKd K238 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM31,
  &K239
};

static _KLpairGVKd K239 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM32,
  &K240
};

static _KLpairGVKd K240 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM33,
  &K241
};

static _KLpairGVKd K241 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM34,
  &K242
};

static _KLpairGVKd K242 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM35,
  &K243
};

static _KLpairGVKd K243 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM36,
  &K244
};

static _KLpairGVKd K244 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM37,
  &K245
};

static _KLpairGVKd K245 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM38,
  &K246
};

static _KLpairGVKd K246 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM39,
  &K247
};

static _KLpairGVKd K247 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM40,
  &K248
};

static _KLpairGVKd K248 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM41,
  &K249
};

static _KLpairGVKd K249 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM42,
  &K250
};

static _KLpairGVKd K250 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM43,
  &K251
};

static _KLpairGVKd K251 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM44,
  &K252
};

static _KLpairGVKd K252 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM45,
  &K253
};

static _KLpairGVKd K253 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM46,
  &K254
};

static _KLpairGVKd K254 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM47,
  &K255
};

static _KLpairGVKd K255 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM48,
  &K256
};

static _KLpairGVKd K256 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM49,
  &K257
};

static _KLpairGVKd K257 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM50,
  &K258
};

static _KLpairGVKd K258 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM51,
  &K259
};

static _KLpairGVKd K259 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM52,
  &K260
};

static _KLpairGVKd K260 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM53,
  &K261
};

static _KLpairGVKd K261 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM54,
  &K262
};

static _KLpairGVKd K262 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM55,
  &K263
};

static _KLpairGVKd K263 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM56,
  &K264
};

static _KLpairGVKd K264 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM57,
  &K265
};

static _KLpairGVKd K265 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM58,
  &K266
};

static _KLpairGVKd K266 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM59,
  &K267
};

static _KLpairGVKd K267 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM60,
  &K268
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM61,
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM62,
  &K270
};

static _KLpairGVKd K270 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM63,
  &K271
};

static _KLpairGVKd K271 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM64,
  &K272
};

static _KLpairGVKd K272 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM65,
  &K273
};

static _KLpairGVKd K273 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM66,
  &K274
};

static _KLpairGVKd K274 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM67,
  &K275
};

static _KLpairGVKd K275 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM68,
  &K276
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM69,
  &K277
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM70,
  &K278
};

static _KLpairGVKd K278 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM71,
  &K279
};

static _KLpairGVKd K279 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM72,
  &K280
};

static _KLpairGVKd K280 = {
  &KLpairGVKdW /* wrapper */,
  &KasVKdMM73,
  &KPempty_listVKi
};

static _KLsignatureGVKe K281 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K283
};

static _KLbyte_stringGVKd_2 K282 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "as"
};

static _KLsimple_object_vectorGVKd_2 K283 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_15 K284 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K288 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49545221,
  &KDsignature_Limplementation_classG_typesVKi,
  &K304,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_22 K289 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 89,
  &KJinstance_storage_size_,
  (D) 1,
  &KJabstractQ_,
  &KPfalseVKi,
  &KJprimaryQ_,
  &KPfalseVKi,
  &KJsealedQ_,
  &KPfalseVKi,
  &KJiclass_type_completeQ_,
  &KPfalseVKi,
  &KJclass_completeQ_,
  &KPfalseVKi,
  &KJincrementalQ_,
  &KPfalseVKi,
  &KJslots_have_fixed_offsetsQ_,
  &KPfalseVKi,
  &KJslots_have_fixed_offsetsQ_computedQ_,
  &KPfalseVKi,
  &KJiclass_instantiableQ_,
  &KPfalseVKi,
  &KJiclass_subclasses_fixedQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJiclass_type_completeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K303
};

static _KLsymbolGVKd KJclass_completeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K302
};

static _KLsymbolGVKd KJincrementalQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K301
};

static _KLsymbolGVKd KJslots_have_fixed_offsetsQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K300
};

static _KLsymbolGVKd KJslots_have_fixed_offsetsQ_computedQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K299
};

static _KLsymbolGVKd KJiclass_instantiableQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K298
};

static _KLsymbolGVKd KJiclass_subclasses_fixedQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K297
};

static _KLbyte_stringGVKd_24 K297 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "iclass-subclasses-fixed?"
};

static _KLbyte_stringGVKd_20 K298 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "iclass-instantiable?"
};

static _KLbyte_stringGVKd_35 K299 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "slots-have-fixed-offsets?-computed?"
};

static _KLbyte_stringGVKd_25 K300 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "slots-have-fixed-offsets?"
};

static _KLbyte_stringGVKd_12 K301 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "incremental?"
};

static _KLbyte_stringGVKd_15 K302 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "class-complete?"
};

static _KLbyte_stringGVKd_21 K303 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "iclass-type-complete?"
};

static _KLsimple_object_vectorGVKd_11 K304 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KJinstance_storage_size_,
  &KJabstractQ_,
  &KJprimaryQ_,
  &KJsealedQ_,
  &KJiclass_type_completeQ_,
  &KJclass_completeQ_,
  &KJincrementalQ_,
  &KJslots_have_fixed_offsetsQ_,
  &KJslots_have_fixed_offsetsQ_computedQ_,
  &KJiclass_instantiableQ_,
  &KJiclass_subclasses_fixedQ_
};

static _KLsignatureAvaluesGVKi K305 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K306,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K306 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLimplementation_classGVKe
};

static _KLsignatureAvaluesGVKi K307 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Limplementation_classG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K308 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K309,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K309 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLimplementation_classGVKe
};

static _KLsignatureAvaluesGVKi K310 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Limplementation_classG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K313 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 524345,
  &KPfalseVKi,
  &cache_header_engine_5,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksystem_allocate_repeated_instanceVKe
};

static _KLbyte_stringGVKd_41 K314 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Cannot instantiate an abstract class - %="
};

static _KLbyte_stringGVKd_54 K315 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Cannot instantiate %=, it is not an instantiable type."
};

static _KLbyte_stringGVKd_77 K316 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 309,
  "Cannot instantate %= - its superclass expressions have not finished executing"
};

_KLkeyword_methodGVKe KinitializeVKdMM19 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K352,
  &key_mep_2,
  &KinitializeVKdMM19I,
  &KPempty_vectorVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_50 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_49,
  (D) 5,
  &KLsubjunctive_class_universeGVKe
};

static _KLpairGVKd K319 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM0,
  &K320
};

static _KLpairGVKd K320 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &K321
};

static _KLpairGVKd K321 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM2,
  &K322
};

static _KLpairGVKd K322 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM3,
  &K323
};

static _KLpairGVKd K323 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM4,
  &K324
};

static _KLpairGVKd K324 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM5,
  &K325
};

static _KLpairGVKd K325 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM6,
  &K326
};

static _KLpairGVKd K326 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM7,
  &K327
};

static _KLpairGVKd K327 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM8,
  &K328
};

static _KLpairGVKd K328 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM9,
  &K329
};

static _KLpairGVKd K329 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM10,
  &K330
};

static _KLpairGVKd K330 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM11,
  &K331
};

static _KLpairGVKd K331 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM12,
  &K332
};

static _KLpairGVKd K332 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM13,
  &K333
};

static _KLpairGVKd K333 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM14,
  &K334
};

static _KLpairGVKd K334 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM15,
  &K335
};

static _KLpairGVKd K335 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM16,
  &K336
};

static _KLpairGVKd K336 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM17,
  &K337
};

static _KLpairGVKd K337 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM18,
  &K338
};

static _KLpairGVKd K338 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM19,
  &K339
};

static _KLpairGVKd K339 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM20,
  &K340
};

static _KLpairGVKd K340 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM21,
  &K341
};

static _KLpairGVKd K341 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM22,
  &K342
};

static _KLpairGVKd K342 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM23,
  &K343
};

static _KLpairGVKd K343 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM24,
  &K344
};

static _KLpairGVKd K344 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM25,
  &K345
};

static _KLpairGVKd K345 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM26,
  &K346
};

static _KLpairGVKd K346 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM27,
  &K347
};

static _KLpairGVKd K347 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM28,
  &K348
};

static _KLpairGVKd K348 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM29,
  &K349
};

static _KLpairGVKd K349 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM30,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K350 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44826629,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_10 K351 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "initialize"
};

static _KLkeyword_signatureGVKe K352 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &K183,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_68 K353 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 273,
  "attempt to make an instance of an incompletely initialized class: %="
};

static _KLkeyword_signatureGVKe K354 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 45875205,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kget_class_instanceQ_countsVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K364,
  &Kget_class_instanceQ_countsVKeI
};

static _KLsealed_generic_functionGVKe K357 = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K361,
  &K360,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_methodGVKe Kclass_instanceQ_countF362 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K363,
  &Kclass_instanceQ_countF362I
};

static _KLpairGVKd K360 = {
  &KLpairGVKdW /* wrapper */,
  &Kclass_instanceQ_countF362,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K361 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "class-instance?-count"
};

static _KLsignatureAvaluesGVKi K363 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LclassG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K364 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

_KLsimple_methodGVKe KLobjectG_class_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K366,
  &KLobjectG_class_instanceQVKiI
};

static _KLsignatureAvaluesGVKi K366 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K367,
  &K368
};

static _KLsimple_object_vectorGVKd_2 K367 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &K370
};

static _KLsimple_object_vectorGVKd_1 K368 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K369
};

static _KLsingletonGVKd K369 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

static _KLsingletonGVKd K370 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kaugment_rcpl_position_data_kludgeyVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K373,
  &Kaugment_rcpl_position_data_kludgeyVKiI
};

static _KLsignatureGVKe K373 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kaugment_rcpl_position_data_multipleVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K385,
  &Kaugment_rcpl_position_data_multipleVKiI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_rcpl_position_data_multipleF384 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_rcpl_position_data_multipleF384I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_rcpl_position_data_multipleF383 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_rcpl_position_data_multipleF383I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_rcpl_position_data_multipleF382 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_rcpl_position_data_multipleF382I,
  (D) 1
};

static _KLsignatureGVKe K385 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K386
};

static _KLsimple_object_vectorGVKd_2 K386 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kdefaulted_initialization_argumentsVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K388,
  &Kdefaulted_initialization_argumentsVKiI
};

static _KLsignatureAvaluesGVKi K388 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LclassG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kallocate_instanceVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K390,
  &Kallocate_instanceVKeI
};

static _KLsignatureGVKe K390 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K386
};

_KLsimple_methodGVKe Kinstall_and_return_make_method_init_dataVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K392,
  &Kinstall_and_return_make_method_init_dataVKiI
};

static _KLsignatureGVKe K392 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K393
};

static _KLsimple_object_vectorGVKd_1 K393 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_initial_value_descriptorGVKi
};

_KLsimple_methodGVKe Kscu_doVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K395,
  &Kscu_doVKeI
};

static _KLsignatureGVKe K395 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K396
};

static _KLsimple_object_vectorGVKd_2 K396 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsubjunctive_class_universeGVKe
};

_KLsimple_methodGVKe Kscu_entry_setterVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K398,
  &Kscu_entry_setterVKeI
};

static _KLsignatureAvaluesGVKi K398 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K399,
  &KDsignature_Limplementation_classG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K399 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLimplementation_classGVKe,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe
};

_KLsimple_methodGVKe Kscu_force_initializationVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K401,
  &Kscu_force_initializationVKeI
};

static _KLsignatureAvaluesGVKi K401 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K402,
  &KDsignature_Limplementation_classG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K402 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLfunctionGVKd
};

_KLsimple_methodGVKe Kscu_initialize_allVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K395,
  &Kscu_initialize_allVKeI
};

_KLsimple_methodGVKe Kscu_entryVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K406,
  &Kscu_entryVKeI
};

static _KLsignatureAvaluesGVKi K406 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K407,
  &KDsignature_Limplementation_classG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K407 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe
};

_KLsimple_methodGVKe Kscu_entryQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K409,
  &Kscu_entryQVKeI
};

static _KLsignatureAvaluesGVKi K409 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K407,
  &K410
};

static _KLsimple_object_vectorGVKd_1 K410 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K411
};

static _KLunionGVKe K411 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K412,
  &KLimplementation_classGVKe
};

static _KLsingletonGVKd K412 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsimple_methodGVKe Kmake_empty_subjunctive_class_universeVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K133,
  &Kmake_empty_subjunctive_class_universeVKeI
};

static _KLimplementation_classGVKe K414 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958033,
  &KLscu_nodeGVKi,
  &KLscu_nodeGVKiW,
  &KPfalseVKi,
  &K415,
  (D) 7001,
  &KLscu_nodeGZ32ZconstructorVKiMM0,
  &K173,
  &K418,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K415,
  &K415,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K415 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kscu_node_nextVKiHLscu_nodeG,
  &Kscu_node_classVKiHLscu_nodeG,
  &Kscu_node_iclassVKiHLscu_nodeG,
  &Kscu_node_initializedQVKiHLscu_nodeG
};

_KLkeyword_methodGVKe KLscu_nodeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K419,
  &key_mep_2,
  &KLscu_nodeGZ32ZconstructorVKiMM0I,
  &K420
};

static _KLsimple_object_vectorGVKd_6 K418 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLscu_nodeGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K419 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K421,
  &KDsignature_LobjectG_typesVKi,
  &K422
};

static _KLsimple_object_vectorGVKd_6 K420 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJnext_,
  &KPunboundVKi,
  &KJclass_,
  &KPunboundVKi,
  &KJimplementation_class_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K421 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJnext_,
  &KJclass_,
  &KJimplementation_class_
};

static _KLsimple_object_vectorGVKd_1 K422 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLscu_nodeGVKi
};

_KLinstance_slot_descriptorGVKe Kscu_node_nextVKiHLscu_nodeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLscu_nodeGVKi,
  &KJnext_,
  &Kscu_node_nextVKi,
  &KPfalseVKi,
  &KLscu_nodeGVKi
};

_KLinstance_slot_descriptorGVKe Kscu_node_classVKiHLscu_nodeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLscu_nodeGVKi,
  &KJclass_,
  &Kscu_node_classVKi,
  &KPfalseVKi,
  &KLclassGVKd
};

_KLinstance_slot_descriptorGVKe Kscu_node_iclassVKiHLscu_nodeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLscu_nodeGVKi,
  &KJimplementation_class_,
  &Kscu_node_iclassVKi,
  &KPfalseVKi,
  &KLimplementation_classGVKe
};

_KLinstance_slot_descriptorGVKe Kscu_node_initializedQVKiHLscu_nodeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLscu_nodeGVKi,
  &KPfalseVKi,
  &Kscu_node_initializedQVKi,
  &Kscu_node_initializedQ_setterVKi,
  &KLbooleanGVKd
};

_KLsealed_generic_functionGVKe Kscu_node_initializedQVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K434,
  &K433,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kscu_node_initializedQ_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K431,
  &K430,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kscu_node_initializedQ_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kscu_node_initializedQVKiHLscu_nodeG
};

static _KLpairGVKd K430 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_node_initializedQ_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K431 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "scu-node-initialized?-setter"
};

_KLgetter_methodGVKi Kscu_node_initializedQVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kscu_node_initializedQVKiHLscu_nodeG
};

static _KLpairGVKd K433 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_node_initializedQVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K434 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "scu-node-initialized?"
};

_KLsealed_generic_functionGVKe Kscu_node_iclassVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K438,
  &K437,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kscu_node_iclassVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kscu_node_iclassVKiHLscu_nodeG
};

static _KLpairGVKd K437 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_node_iclassVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K438 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "scu-node-iclass"
};

_KLsealed_generic_functionGVKe Kscu_node_classVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K442,
  &K441,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kscu_node_classVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kscu_node_classVKiHLscu_nodeG
};

static _KLpairGVKd K441 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_node_classVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K442 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "scu-node-class"
};

_KLsealed_generic_functionGVKe Kscu_node_nextVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K446,
  &K445,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kscu_node_nextVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kscu_node_nextVKiHLscu_nodeG
};

static _KLpairGVKd K445 = {
  &KLpairGVKdW /* wrapper */,
  &Kscu_node_nextVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K446 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "scu-node-next"
};

static _KLbyte_stringGVKd_10 K447 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "<scu-node>"
};

_KLkeyword_methodGVKe KmakeVKdMM50 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K520,
  &key_mep_5,
  &KmakeVKdMM50I,
  &K521
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_84 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_83,
  (D) 5,
  &K514
};

static _KLpairGVKd K451 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM0,
  &K452
};

static _KLpairGVKd K452 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM1,
  &K453
};

static _KLpairGVKd K453 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM2,
  &K454
};

static _KLpairGVKd K454 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM3,
  &K455
};

static _KLpairGVKd K455 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM4,
  &K456
};

static _KLpairGVKd K456 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM5,
  &K457
};

static _KLpairGVKd K457 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM6,
  &K458
};

static _KLpairGVKd K458 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM7,
  &K459
};

static _KLpairGVKd K459 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM8,
  &K460
};

static _KLpairGVKd K460 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM9,
  &K461
};

static _KLpairGVKd K461 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM10,
  &K462
};

static _KLpairGVKd K462 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM11,
  &K463
};

static _KLpairGVKd K463 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM12,
  &K464
};

static _KLpairGVKd K464 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM13,
  &K465
};

static _KLpairGVKd K465 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM14,
  &K466
};

static _KLpairGVKd K466 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM15,
  &K467
};

static _KLpairGVKd K467 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM16,
  &K468
};

static _KLpairGVKd K468 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM17,
  &K469
};

static _KLpairGVKd K469 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM18,
  &K470
};

static _KLpairGVKd K470 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM19,
  &K471
};

static _KLpairGVKd K471 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM20,
  &K472
};

static _KLpairGVKd K472 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM21,
  &K473
};

static _KLpairGVKd K473 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM22,
  &K474
};

static _KLpairGVKd K474 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM23,
  &K475
};

static _KLpairGVKd K475 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM24,
  &K476
};

static _KLpairGVKd K476 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM25,
  &K477
};

static _KLpairGVKd K477 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM26,
  &K478
};

static _KLpairGVKd K478 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM27,
  &K479
};

static _KLpairGVKd K479 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM28,
  &K480
};

static _KLpairGVKd K480 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM29,
  &K481
};

static _KLpairGVKd K481 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM30,
  &K482
};

static _KLpairGVKd K482 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM31,
  &K483
};

static _KLpairGVKd K483 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM32,
  &K484
};

static _KLpairGVKd K484 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM33,
  &K485
};

static _KLpairGVKd K485 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM34,
  &K486
};

static _KLpairGVKd K486 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM35,
  &K487
};

static _KLpairGVKd K487 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM36,
  &K488
};

static _KLpairGVKd K488 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM37,
  &K489
};

static _KLpairGVKd K489 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM38,
  &K490
};

static _KLpairGVKd K490 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM39,
  &K491
};

static _KLpairGVKd K491 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM40,
  &K492
};

static _KLpairGVKd K492 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM41,
  &K493
};

static _KLpairGVKd K493 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM42,
  &K494
};

static _KLpairGVKd K494 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM43,
  &K495
};

static _KLpairGVKd K495 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM44,
  &K496
};

static _KLpairGVKd K496 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM45,
  &K497
};

static _KLpairGVKd K497 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM46,
  &K498
};

static _KLpairGVKd K498 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM47,
  &K499
};

static _KLpairGVKd K499 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM48,
  &K500
};

static _KLpairGVKd K500 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM49,
  &K501
};

static _KLpairGVKd K501 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM50,
  &K502
};

static _KLpairGVKd K502 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM51,
  &K503
};

static _KLpairGVKd K503 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM52,
  &K504
};

static _KLpairGVKd K504 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM53,
  &K505
};

static _KLpairGVKd K505 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM54,
  &K506
};

static _KLpairGVKd K506 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM55,
  &K507
};

static _KLpairGVKd K507 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM56,
  &K508
};

static _KLpairGVKd K508 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM57,
  &K509
};

static _KLpairGVKd K509 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM58,
  &K510
};

static _KLpairGVKd K510 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM59,
  &K511
};

static _KLpairGVKd K511 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM60,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K512 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43779077,
  &KDsignature_LtypeG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_4 K513 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "make"
};

static _KLsubclassGVKe K514 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_makeF518 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K519,
  &Kanonymous_of_makeF518I,
  (D) 1
};

static _KLbyte_stringGVKd_86 K517 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 345,
  "Incorrect type for the %= init-keyword to %=.  The given value, %=, is not of type %=."
};

static _KLsignatureGVKe K519 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K520 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 39060485,
  &K522,
  &K523,
  &KDsignature_LobjectG_typesVKi,
  &K153
};

static _KLsimple_object_vectorGVKd_6 K521 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJvalue_,
  &KPfalseVKi,
  &KJtype_,
  &KPfalseVKi,
  &KJslot_descriptor_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K522 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K524
};

static _KLsimple_object_vectorGVKd_3 K523 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJvalue_,
  &KJtype_,
  &KJslot_descriptor_
};

static _KLsingletonGVKd K524 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLslot_type_errorGVKe
};

_KLsimple_methodGVKe Kiclass_type_completeQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kiclass_type_completeQVKeMM0I
};

_KLsimple_methodGVKe Kiclass_type_completeQ_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kiclass_type_completeQ_setterVKeMM0I
};

_KLsimple_methodGVKe Kiclass_instantiableQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kiclass_instantiableQVKeMM0I
};

_KLsimple_methodGVKe Kiclass_instantiableQ_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kiclass_instantiableQ_setterVKeMM0I
};

_KLsimple_methodGVKe Kiclass_subclasses_fixedQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K310,
  &Kiclass_subclasses_fixedQVKeMM0I
};

_KLsimple_methodGVKe Kiclass_subclasses_fixedQ_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &Kiclass_subclasses_fixedQ_setterVKeMM0I
};

_KLsimple_methodGVKe KreinitializeVKnMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K535,
  &KreinitializeVKnMM0I
};

static _KLsignatureGVKe K535 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LobjectG_typesVKi
};

_KLsimple_methodGVKe Kaugment_class_known_jointVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K547,
  &Kaugment_class_known_jointVKiMM0I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_class_known_jointF546 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_class_known_jointF546I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_class_known_jointF545 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_class_known_jointF545I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_augment_class_known_jointF544 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K133,
  &Kanonymous_of_augment_class_known_jointF544I,
  (D) 1
};

static _KLsignatureGVKe K547 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K386
};

/* Code */

D Kdefault_class_constructorVKiI (D class_, D init_args_) {
  D T3;
  D instance_;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  D init_argsF11;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:474
  T6 = primitive_copy_vector(init_args_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:476
  T7 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:476
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:476
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:476
  T10 = primitive_machine_word_logbitQ(22,T9);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:476
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:477
    Kreport_class_incompleteVKiI(class_, &K353);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:481
  T3 = Kdefaulted_initialization_argumentsVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:481
  init_argsF11 = Kconcatenate_2VKeMM1I(T6, T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:482
  instance_ = Kallocate_instanceVKeI(class_, init_argsF11);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:484
  Kdefault_initializeVKiI(class_, instance_, init_argsF11);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:485
  APPLY2(&KinitializeVKd, instance_, init_argsF11);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:487
  T5 = instance_;
  MV_SET_ELT(0, instance_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:474
  return(T5);
}

D Kclass_instanceQ_rcpl_single_largeVKiI (D obj_, D cls_) {
  D T2;
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DADDR T10;
  DWORD bitsF11;
  D T12;
  D T13;
  D mm_wrapperF14;
  D T15;
  D T16;
  D mm_wrapperF17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  DWORD T28;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:834
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:836
  T9 = SLOT_VALUE(cls_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
  T10 = primitive_cast_pointer_as_raw(obj_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
  bitsF11 = primitive_machine_word_logand(T10,3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
  T12 = primitive_machine_word_equalQ(bitsF11,0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
    T13 = primitive_element(obj_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
    mm_wrapperF14 = T13;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
    T15 = SLOT_VALUE_INITD(mm_wrapperF14, 0);
    T19 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
    T16 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF11,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
    mm_wrapperF17 = T16;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
    T18 = SLOT_VALUE_INITD(mm_wrapperF17, 0);
    T19 = T18;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:839
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:840
  T20 = SLOT_VALUE_INITD(T19, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:841
  T2 = primitive_idQ(cls_,T20);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:841
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:842
    T3_0 = &KPtrueVKi;
    T8_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:844
    T21 = SLOT_VALUE_INITD(T9, 9);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:845
    T22 = SLOT_VALUE_INITD(T19, 8);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:846
    T23 = SLOT_VALUE_INITD(T22, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:847
    T24 = primitive_cast_integer_as_raw(T21);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:847
    T25 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:847
    T26 = primitive_machine_word_less_thanQ(T24,T25);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:847
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:849
      T28 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:849
      T27 = REPEATED_D_SLOT_VALUE_TAGGED(T22, 1, T28);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:849
      T4 = primitive_idQ(T27,cls_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:849
      T5_0 = T4;
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:847
      T6_0 = &KPfalseVKi;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:847
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:841
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:834
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kmasked_class_instanceQVKiI (D x_, D c_) {
  DADDR T3;
  DWORD bitsF4;
  D T5;
  D T6;
  D mm_wrapperF7;
  D T8;
  D mm_wrapperF9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17_0;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:876
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T3 = primitive_cast_pointer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  bitsF4 = primitive_machine_word_logand(T3,3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T5 = primitive_machine_word_equalQ(bitsF4,0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
    T6 = primitive_element(x_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
    mm_wrapperF7 = T6;
    T10 = mm_wrapperF7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
    T8 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF4,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
    mm_wrapperF9 = T8;
    T10 = mm_wrapperF9;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T11 = SLOT_VALUE_INITD(T10, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T12 = SLOT_VALUE_INITD(c_, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T15 = primitive_machine_word_logand(T13,T14);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T16 = primitive_cast_raw_as_integer(T15);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T19 = primitive_idQ(T16,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T18 = primitive_not(T19);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:879
  T17_0 = T18;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:876
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_) {
  D T2;
  DADDR T3;
  DWORD bitsF4;
  D T5;
  D T6;
  D mm_wrapperF7;
  D T8;
  D T9;
  D mm_wrapperF10;
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
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  D rpos_;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  DWORD T41;
  D T42;
  DWORD iF43T, iF43;
  D T44;
  D T45;
  DWORD T46;
  D T47;
  D T48;
  DWORD T49;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:815
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:817
  T2 = SLOT_VALUE(cls_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
  T3 = primitive_cast_pointer_as_raw(obj_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
  bitsF4 = primitive_machine_word_logand(T3,3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
  T5 = primitive_machine_word_equalQ(bitsF4,0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
    T6 = primitive_element(obj_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
    mm_wrapperF7 = T6;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
    T8 = SLOT_VALUE_INITD(mm_wrapperF7, 0);
    T12 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
    T9 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF4,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
    mm_wrapperF10 = T9;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
    T11 = SLOT_VALUE_INITD(mm_wrapperF10, 0);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:820
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
  T13 = SLOT_VALUE_INITD(T12, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
  T14 = primitive_idQ(T13,cls_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T15 = &KPtrueVKi;
    MV_SET_ELT(0, &KPtrueVKi);
    MV_SET_COUNT(1);
    T21 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T22 = SLOT_VALUE_INITD(T2, 9);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T23 = SLOT_VALUE_INITD(T12, 8);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T24 = SLOT_VALUE_INITD(T23, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T25 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T26 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T27 = primitive_machine_word_less_thanQ(T25,T26);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
      T29 = primitive_cast_integer_as_raw(T22);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
      T28 = REPEATED_D_SLOT_VALUE_TAGGED(T23, 1, T29);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
      T17 = primitive_idQ(T28,cls_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
        T18 = &KPtrueVKi;
        MV_SET_ELT(0, &KPtrueVKi);
        MV_SET_COUNT(1);
        T19 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
        T30 = SLOT_VALUE_INITD(T2, 10);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
        T31 = SLOT_VALUE_INITD(T30, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
        iF43T = 1;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
          iF43 = iF43T;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
          T45 = primitive_cast_raw_as_integer(iF43);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
          T40 = primitive_idQ(T45,T31);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
          if (T40 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
            T32 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T39 = T32;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
            T44 = REPEATED_D_SLOT_VALUE_TAGGED(T30, 1, iF43);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
            rpos_ = T44;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
            T46 = primitive_cast_integer_as_raw(rpos_);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
            T47 = primitive_machine_word_less_thanQ(T46,T26);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
            if (T47 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
              T49 = primitive_cast_integer_as_raw(rpos_);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
              T48 = REPEATED_D_SLOT_VALUE_TAGGED(T23, 1, T49);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
              T34 = primitive_idQ(T48,cls_);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
              if (T34 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
                T35 = &KPtrueVKi;
                MV_SET_ELT(0, &KPtrueVKi);
                MV_SET_COUNT(1);
                T36 = T35;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
                T41 = primitive_machine_word_add_signal_overflow(iF43,4);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
                iF43T = T41;
                goto L0;
                T36 = T42;
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
              T38 = T36;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
              T37 = &KPfalseVKi;
              MV_SET_ELT(0, &KPfalseVKi);
              MV_SET_COUNT(1);
              T38 = T37;
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
            T39 = T38;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
        T19 = T39;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
      T20 = T19;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
      T16 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T20 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
    T21 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:815
  return(T21);
}

D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_) {
  D T2;
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  DADDR T8;
  DWORD bitsF9;
  D T10;
  D T11;
  D mm_wrapperF12;
  D T13;
  D T14;
  D mm_wrapperF15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:853
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:855
  T7 = SLOT_VALUE(cls_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
  T8 = primitive_cast_pointer_as_raw(obj_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
  bitsF9 = primitive_machine_word_logand(T8,3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
  T10 = primitive_machine_word_equalQ(bitsF9,0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
    T11 = primitive_element(obj_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
    mm_wrapperF12 = T11;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
    T13 = SLOT_VALUE_INITD(mm_wrapperF12, 0);
    T17 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
    T14 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF9,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
    mm_wrapperF15 = T14;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
    T16 = SLOT_VALUE_INITD(mm_wrapperF15, 0);
    T17 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:858
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:859
  T18 = SLOT_VALUE_INITD(T17, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:860
  T2 = primitive_idQ(T18,cls_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:860
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:861
    T3_0 = &KPtrueVKi;
    T6_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:863
    T19 = SLOT_VALUE_INITD(T7, 9);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:864
    T20 = SLOT_VALUE_INITD(T17, 8);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:865
    T22 = primitive_cast_integer_as_raw(T19);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:865
    T21 = REPEATED_D_SLOT_VALUE_TAGGED(T20, 1, T22);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:865
    T4 = primitive_idQ(T21,cls_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:865
    T5_0 = T4;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:860
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:853
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kclass_instanceQ_initialVKiI (D obj_, D cls_) {
  DADDR T2;
  DWORD T3;
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D mm_wrapper_;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:824
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:829
  T2 = primitive_cast_pointer_as_raw(obj_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:829
  T3 = primitive_machine_word_logand(T2,3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:829
  T4 = primitive_machine_word_equalQ(T3,0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:829
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:831
    T9 = primitive_element(obj_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:831
    mm_wrapper_ = T9;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:831
    T11 = SLOT_VALUE_INITD(mm_wrapper_, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:831
    T12 = SLOT_VALUE_INITD(T11, 1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:831
    T5 = primitive_idQ(T12,cls_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:831
    T6_0 = T5;
    T8_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:829
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:829
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:824
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLobjectG_class_instanceQVKiI (D obj_, D cls_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:870
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:872
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:870
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kinstall_and_return_make_method_init_dataVKiI (D descriptor_) {
  D T2;
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
  _KLsimple_object_vectorGVKd_2 T18 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T19;
  D T20;
  D T21_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:359
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  T11 = SLOT_VALUE_INITD(descriptor_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  T13 = primitive_machine_word_logbitQ(4,T12);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  if (T13 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
    T2 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
    if (T2 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      DlockD_ = Dslot_initial_data_lockVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      T4 = CALL1(&Kwait_forYthreadsVdylan, DlockD_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
        ENTER_UNWIND_FRAME(T5);
        if (!nlx_setjmp(FRAME_DEST(T5))) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
          T14 = SLOT_VALUE_INITD(descriptor_, 0);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
          T15 = primitive_cast_integer_as_raw(T14);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
          T16 = primitive_machine_word_logbitQ(4,T15);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
          if (T16 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
            T17 = SLOT_VALUE_INITD(descriptor_, 1);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
            T6 = T17;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
            T7 = CALL0(T6);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
            SLOT_VALUE_SETTER(T7, descriptor_, 1);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
            primitive_synchronize_side_effects();
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
            Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
          FALL_THROUGH_UNWIND(&KPfalseVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
        CALL1(&KreleaseYthreadsVdylan, DlockD_);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
        CONTINUE_UNWIND();
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
        T18.vector_element_[0] = &KJsynchronization_;
        T18.vector_element_[1] = DlockD_;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T8 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T18);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
        KsignalVKdMM0I(T8, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      T19 = SLOT_VALUE_INITD(descriptor_, 1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      T9 = T19;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      T10 = CALL0(T9);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      SLOT_VALUE_SETTER(T10, descriptor_, 1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
      Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, descriptor_);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  T20 = SLOT_VALUE_INITD(descriptor_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:361
  T21_0 = T20;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:359
  MV_SET_COUNT(1);
  return(T21_0);
}

D Kallocate_instanceVKeI (D class_, D init_args_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:413
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:415
  T3 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:415
  T2_0 = Kallocate_instance_iVKiI(T3, init_args_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:413
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kinstance_storage_size_setterVKeMM1I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T6 = primitive_cast_integer_as_raw(z_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T7 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T8 = primitive_machine_word_bit_field_deposit(T5,2,16,T7);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kclass_incrementalQ_setterVKiMM1I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(23,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(23,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kclass_completeQ_setterVKeMM1I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(22,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(22,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kclass_sealedQ_setterVKeMM1I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(20,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(20,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kclass_primaryQ_setterVKeMM1I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(19,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(19,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kclass_abstractQ_setterVKeMM1I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(18,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(18,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kclass_abstractQVKeMM1I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(18,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kclass_primaryQVKeMM1I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(19,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kclass_sealedQVKeMM1I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(20,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kclass_completeQVKeMM1I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(22,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kclass_incrementalQVKiMM1I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(23,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kinstance_storage_sizeVKeMM1I (D x_) {
  D T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logand(T3,262140);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kinitialize_packed_slotsVKeMM6I (D x_, D all_keys_, D instance_storage_size_, D class_abstractQ_, D class_primaryQ_, D class_sealedQ_, D iclass_type_completeQ_, D class_completeQ_, D class_incrementalQ_, D slots_have_fixed_offsetsQ_bit_, D slots_have_fixed_offsetsQ_computedQ_, D iclass_instantiableQ_, D iclass_subclasses_fixedQ_) {
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
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T18 = primitive_copy_vector(all_keys_);
  T17 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T19 = primitive_idQ(T17,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    KerrorVKdMM1I(&K284, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T20 = SLOT_VALUE_INITD(T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T21 = SLOT_VALUE_INITD(T17, 1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    MEP_CALL_PROLOG(T20, T21, 2);
    MEP_CALL2(T20, x_, T18);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T22 = primitive_idQ(instance_storage_size_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T22 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:22
    CONGRUENT_CALL_PROLOG(&Kinstance_storage_size_setterVKe, 2);
    CONGRUENT_CALL2(instance_storage_size_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T23 = primitive_idQ(class_abstractQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T23 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:24
    CONGRUENT_CALL_PROLOG(&Kclass_abstractQ_setterVKe, 2);
    CONGRUENT_CALL2(class_abstractQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T24 = primitive_idQ(class_primaryQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T24 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:25
    CONGRUENT_CALL_PROLOG(&Kclass_primaryQ_setterVKe, 2);
    CONGRUENT_CALL2(class_primaryQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T25 = primitive_idQ(class_sealedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T25 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:26
    CONGRUENT_CALL_PROLOG(&Kclass_sealedQ_setterVKe, 2);
    CONGRUENT_CALL2(class_sealedQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T26 = primitive_idQ(iclass_type_completeQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T26 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:27
    Kiclass_type_completeQ_setterVKeMM0I(iclass_type_completeQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T27 = primitive_idQ(class_completeQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T27 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:29
    CONGRUENT_CALL_PROLOG(&Kclass_completeQ_setterVKe, 2);
    CONGRUENT_CALL2(class_completeQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T28 = primitive_idQ(class_incrementalQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T28 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:30
    CONGRUENT_CALL_PROLOG(&Kclass_incrementalQ_setterVKi, 2);
    CONGRUENT_CALL2(class_incrementalQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T29 = primitive_idQ(slots_have_fixed_offsetsQ_bit_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T29 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:31
    Kslots_have_fixed_offsetsQ_bit_setterVKiMM0I(slots_have_fixed_offsetsQ_bit_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T30 = primitive_idQ(slots_have_fixed_offsetsQ_computedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T30 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:33
    Kslots_have_fixed_offsetsQ_computedQ_setterVKiMM0I(slots_have_fixed_offsetsQ_computedQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T31 = primitive_idQ(iclass_instantiableQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T31 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:36
    Kiclass_instantiableQ_setterVKeMM0I(iclass_instantiableQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T32 = primitive_idQ(iclass_subclasses_fixedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T15 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T16 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:38
    Kiclass_subclasses_fixedQ_setterVKeMM0I(iclass_subclasses_fixedQ_, x_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:38
    T14 = iclass_subclasses_fixedQ_;
    MV_SET_ELT(0, iclass_subclasses_fixedQ_);
    MV_SET_COUNT(1);
    T16 = T14;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  return(T16);
}

D Kmake_empty_subjunctive_class_universeVKeI () {
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:86
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:87
  T1_0 = KLsubjunctive_class_universeGZ32ZconstructorVKiMM0I(&KLsubjunctive_class_universeGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:86
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kclass_instance_headerVKiI (D class_) {
  D T1_0;
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:11
  T2 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:11
  T3 = SLOT_VALUE_INITD(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:11
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:10
  T1_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:10
  MV_SET_COUNT(1);
  return(T1_0);
}

D KsubiclassQVKiI (D xiclass_, D x_, D yiclass_, D y_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;
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
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  D rpos_;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  DWORD T41;
  D T42;
  DWORD iF43T, iF43;
  D T44;
  D T45;
  DWORD T46;
  D T47;
  D T48;
  DWORD T49;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:920
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:923
  T8 = SLOT_VALUE_INITD(xiclass_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:923
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:923
  T10 = primitive_machine_word_logbitQ(21,T9);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:923
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:924
    T11 = SLOT_VALUE_INITD(yiclass_, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:924
    T12 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:924
    T13 = primitive_machine_word_logbitQ(21,T12);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:924
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
      T14 = primitive_idQ(x_,y_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T15 = &KPtrueVKi;
        MV_SET_ELT(0, &KPtrueVKi);
        MV_SET_COUNT(1);
        T21 = T15;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T22 = SLOT_VALUE_INITD(yiclass_, 9);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T23 = SLOT_VALUE_INITD(xiclass_, 8);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T24 = SLOT_VALUE_INITD(T23, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T25 = primitive_cast_integer_as_raw(T22);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T26 = primitive_cast_integer_as_raw(T24);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T27 = primitive_machine_word_less_thanQ(T25,T26);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
          T29 = primitive_cast_integer_as_raw(T22);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
          T28 = REPEATED_D_SLOT_VALUE_TAGGED(T23, 1, T29);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
          T17 = primitive_idQ(T28,y_);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
          if (T17 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
            T18 = &KPtrueVKi;
            MV_SET_ELT(0, &KPtrueVKi);
            MV_SET_COUNT(1);
            T19 = T18;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
            T30 = SLOT_VALUE_INITD(yiclass_, 10);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
            T31 = SLOT_VALUE_INITD(T30, 0);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
            iF43T = 1;
          L0: ;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
              iF43 = iF43T;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
              T45 = primitive_cast_raw_as_integer(iF43);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
              T40 = primitive_idQ(T45,T31);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
              if (T40 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                T32 = &KPfalseVKi;
                MV_SET_ELT(0, &KPfalseVKi);
                MV_SET_COUNT(1);
                T39 = T32;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                T44 = REPEATED_D_SLOT_VALUE_TAGGED(T30, 1, iF43);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                rpos_ = T44;
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                T46 = primitive_cast_integer_as_raw(rpos_);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                T47 = primitive_machine_word_less_thanQ(T46,T26);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                if (T47 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                  T49 = primitive_cast_integer_as_raw(rpos_);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                  T48 = REPEATED_D_SLOT_VALUE_TAGGED(T23, 1, T49);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                  T34 = primitive_idQ(T48,y_);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                  if (T34 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                    T35 = &KPtrueVKi;
                    MV_SET_ELT(0, &KPtrueVKi);
                    MV_SET_COUNT(1);
                    T36 = T35;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                    T41 = primitive_machine_word_add_signal_overflow(iF43,4);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                    iF43T = T41;
                    goto L0;
                    T36 = T42;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                  T38 = T36;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                  T37 = &KPfalseVKi;
                  MV_SET_ELT(0, &KPfalseVKi);
                  MV_SET_COUNT(1);
                  T38 = T37;
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
                T39 = T38;
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
            T19 = T39;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
          T20 = T19;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
          T16 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T20 = T16;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
        T21 = T20;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:925
      T5_0 = T21;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:927
      T4_0 = Kreport_class_incompleteVKiI(y_, &K168);
      T5_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:924
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:930
    T6_0 = Kreport_class_incompleteVKiI(x_, &K168);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:923
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:920
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsubtypeQVKdMM10I (D class_1_, D class_2_) {
  D T3_0;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:935
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:937
  T4 = SLOT_VALUE(class_1_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:937
  T5 = SLOT_VALUE(class_2_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:937
  T3_0 = KsubiclassQVKiI(T4, class_1_, T5, class_2_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:935
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM51I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:588
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:590
  T3 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:590
  T4_0 = APPLY2(T3, class_, init_args_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:588
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kclass_constructor_atomicallyVKiI (D class_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:583
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:585
  T2 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:585
  T3 = SLOT_VALUE_INITD(T2, 6);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:585
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:583
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kreduce_incomplete_classesVKiMM10I (D f_, D t_, D ans_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  DWORD T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1029
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1031
  T7 = SLOT_VALUE(t_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1031
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1031
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1031
  T10 = primitive_machine_word_logbitQ(21,T9);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1031
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1034
    T5_0 = ans_;
    T6_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1032
    T4_0 = CALL2(f_, t_, ans_);
    T6_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1031
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1029
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmap_congruency_classesVKiMM9I (D f_, D t_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1024
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1025
  T3 = CALL1(f_, t_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1024
  MV_SET_COUNT(0);
  return(T3);
}

D Khas_instancesQVKeMM2I (D class_1_, D class_2_, D scu_) {
  D T4;
  D T5_0;
  D T5_1;
  D T6;
  D UtmpF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D UtmpF13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T17_1;
  D T18_0;
  D T18_1;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:949
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
  T9 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
  if (T9 != &KPfalseVKi) {
    UtmpF7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
    T6 = Kscu_entryQVKeI(class_1_, scu_);
    UtmpF7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
  if (UtmpF7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
    T8 = UtmpF7;
    T11 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
    T10 = SLOT_VALUE(class_1_, 2);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:952
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:953
  if (T9 != &KPfalseVKi) {
    UtmpF13 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:953
    T12 = Kscu_entryQVKeI(class_2_, scu_);
    UtmpF13 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:953
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:953
  if (UtmpF13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:953
    T14 = UtmpF13;
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:953
    T15 = SLOT_VALUE(class_2_, 2);
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:953
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:954
  T4 = KsubiclassQVKiI(T11, class_1_, T16, class_2_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:954
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:955
    T17_0 = &KPtrueVKi;
    T17_1 = &KPtrueVKi;
    T5_0 = T17_0;
    T5_1 = T17_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:957
    T18_0 = &KPfalseVKi;
    T18_1 = &KPfalseVKi;
    T5_0 = T18_0;
    T5_1 = T18_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:954
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:949
  MV_SET_ELT(1, T5_1);
  MV_SET_COUNT(2);
  return(T5_0);
}

D Kscu_entryQVKeI (D c_, D scu_) {
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
  D nF13T, nF13;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:93
  T2 = SLOT_VALUE_INITD(scu_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:99
  nF13T = T2;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:99
    nF13 = nF13T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:94
    T6 = primitive_idQ(nF13,Dempty_scu_nodeVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:94
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:95
      T3 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T5 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:96
      T7 = SLOT_VALUE(nF13, 1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:96
      T8 = primitive_idQ(T7,c_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:94
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:97
        T9 = SLOT_VALUE(nF13, 2);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:97
        T10 = T9;
        MV_SET_ELT(0, T9);
        MV_SET_COUNT(1);
        T4 = T10;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:99
        T11 = SLOT_VALUE(nF13, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:99
        nF13T = T11;
        goto L0;
        T4 = T12;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:94
      T5 = T4;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:94
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:91
  return(T5);
}

D Ksubjunctive_subtypeQVKiMM10I (D class_1_, D class_2_, D scu_) {
  D T4_0;
  D T5;
  D UtmpF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D UtmpF12;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:940
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  T8 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  if (T8 != &KPfalseVKi) {
    UtmpF6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
    T5 = Kscu_entryQVKeI(class_1_, scu_);
    UtmpF6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  if (UtmpF6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
    T7 = UtmpF6;
    T10 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
    T9 = SLOT_VALUE(class_1_, 2);
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  if (T8 != &KPfalseVKi) {
    UtmpF12 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
    T11 = Kscu_entryQVKeI(class_2_, scu_);
    UtmpF12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  if (UtmpF12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
    T13 = UtmpF12;
    T15 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
    T14 = SLOT_VALUE(class_2_, 2);
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:943
  T4_0 = KsubiclassQVKiI(T10, class_1_, T15, class_2_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:940
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktype_completeQVKeMM7I (D t_) {
  D T2;
  D T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1019
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1020
  T2 = SLOT_VALUE(t_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1020
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1020
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1020
  T5 = primitive_machine_word_logbitQ(21,T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1020
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1019
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kdisjoint_types_1QVKeMM4I (D t1_, D t2_, D scu_, D dep_) {
  D T5;
  D T6;
  D T7;
  D UtmpF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D disQ_;
  D T14;
  D T15_0;
  D T16;
  D UtmpF17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D UtmpF23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  D T35;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:998
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
  T19 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
  if (T19 != &KPfalseVKi) {
    UtmpF17 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
    T16 = Kscu_entryQVKeI(t1_, scu_);
    UtmpF17 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
  if (UtmpF17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
    T18 = UtmpF17;
    T21 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
    T20 = SLOT_VALUE(t1_, 2);
    T21 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1002
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1003
  if (T19 != &KPfalseVKi) {
    UtmpF23 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1003
    T22 = Kscu_entryQVKeI(t2_, scu_);
    UtmpF23 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1003
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1003
  if (UtmpF23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1003
    T24 = UtmpF23;
    T26 = T24;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1003
    T25 = SLOT_VALUE(t2_, 2);
    T26 = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1003
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1005
  T5 = KsubiclassQVKiI(T21, t1_, T26, t2_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1005
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1006
    T6 = KsubiclassQVKiI(T26, t2_, T21, t1_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1006
    T27 = primitive_not(T6);
    T7 = T27;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1005
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1005
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
    T28 = SLOT_VALUE_INITD(T21, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
    T29 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
    T30 = primitive_machine_word_logbitQ(19,T29);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
    if (T30 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
      T31 = SLOT_VALUE_INITD(T26, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
      T32 = primitive_cast_integer_as_raw(T31);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
      T33 = primitive_machine_word_logbitQ(19,T32);
      UtmpF8 = T33;
    } else {
      UtmpF8 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
    if (UtmpF8 != &KPfalseVKi) {
      T12 = UtmpF8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1009
      T34 = SLOT_VALUE_INITD(T26, 11);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1009
      T9 = Kgrounded_memberQVKiI(t1_, T34);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1009
      if (T9 != &KPfalseVKi) {
        T11 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:1010
        T35 = SLOT_VALUE_INITD(T21, 11);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:1010
        T10 = Kgrounded_memberQVKiI(t2_, T35);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:1010
        T36 = primitive_not(T10);
        T11 = T36;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1009
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1007
    disQ_ = T12;
  } else {
    disQ_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1005
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1011
  if (disQ_ != &KPfalseVKi) {
    T14 = dep_;
  } else {
    T14 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1011
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1011
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1012
    if (dep_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1012
      KPregister_subclass_dependent_genericVKeI(dep_, t1_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:1012
      KPregister_subclass_dependent_genericVKeI(dep_, t2_);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:1012
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1011
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:1014
  T15_0 = disQ_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:998
  MV_SET_COUNT(1);
  return(T15_0);
}

D Keffective_initial_value_descriptorVKiI (D descriptor_, D iclass_) {
  D T3_0;
  D returnPexit_2_;
  D T5;
  DWORD super_i_T, super_i_;
  D cF7;
  DWORD T8T, T8;
  D d_;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14_0;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_1 T26 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T27;
  D T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  D T37;
  _KLsimple_object_vectorGVKd_1 T38 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T39;
  DWORD T40;
  DWORD T41;
  D T42_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:215
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:218
  T15 = SLOT_VALUE_INITD(descriptor_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:219
  T16 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:219
  T17 = primitive_idQ(T15,T16);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:219
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:220
    T3_0 = descriptor_;
    T14_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:222
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:223
    T18 = SLOT_VALUE_INITD(descriptor_, 4);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
    T19 = SLOT_VALUE_INITD(iclass_, 8);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
    T20 = SLOT_VALUE_INITD(iclass_, 9);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
    T22 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
    super_i_T = T22;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
      super_i_ = super_i_T;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
      T23 = primitive_cast_raw_as_integer(super_i_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
      T21 = primitive_machine_word_less_thanQ(super_i_,1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
      if (T21 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
        T24 = KelementVKdMM11I(T19, T23, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
        cF7 = T24;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:225
        T25 = primitive_idQ(cF7,T15);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:225
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:225
          T26.vector_element_[0] = descriptor_;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:225
          T27 = MV_SET_REST_AT(&T26, 0);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:225
          T13_0 = T27;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:225
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:227
        T28 = SLOT_VALUE(cF7, 2);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:227
        T29 = SLOT_VALUE_INITD(T28, 18);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
        T30 = SLOT_VALUE_INITD(T29, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
        T31 = primitive_cast_integer_as_raw(T30);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
        T8T = 1;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
          T8 = T8T;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
          T32 = primitive_machine_word_equalQ(T8,T31);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
          if (T32 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
            T33 = REPEATED_D_SLOT_VALUE_TAGGED(T29, 1, T8);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
            d_ = T33;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
            T34 = SLOT_VALUE_INITD(d_, 3);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
            T10 = KEEVKdI(T34, T18);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
            if (T10 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
              T35 = SLOT_VALUE_INITD(d_, 0);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
              T36 = primitive_cast_integer_as_raw(T35);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
              T37 = primitive_machine_word_logbitQ(2,T36);
              T11 = T37;
            } else {
              T11 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
            if (T11 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:229
              T38.vector_element_[0] = d_;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:222
              T39 = MV_SET_REST_AT(&T38, 0);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:222
              T13_0 = T39;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:228
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
            T40 = primitive_machine_word_add_signal_overflow(T8,4);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
            T8T = T40;
            goto L2;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:226
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
        T41 = primitive_machine_word_add_signal_overflow(super_i_,0xFFFFFFFFFFFFFFFCL);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
        super_i_T = T41;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:224
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:233
    T12 = descriptor_;
    MV_SET_ELT(0, descriptor_);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:222
    T13_0 = T12;
    L1: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:222
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:222
    T42_0 = T13_0;
    T14_0 = T42_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:219
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:215
  MV_SET_COUNT(1);
  return(T14_0);
}

D Kaugment_iclass_rcpl_position_dataVKiI (D iclass_, D pos_) {
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
  D T50_0;
  D T51;
  D T52;
  D T53;
  D T54;
  DWORD T55;
  DWORD T56;
  D T57;
  D T58;
  D T59;
  DWORD T60;
  DWORD T61;
  D T62;
  D T63;
  D elt_;
  D T65;
  D T66;
  DWORD T67;
  D T68;
  D T69;
  DWORD T70;
  D T71;
  D T72;
  DWORD T73;
  D T74;
  DWORD T75;
  DWORD iF76T, iF76;
  D T77;
  DWORD T78;
  D T79;
  DWORD T80;
  D T81;
  D T82;
  D T83;
  DWORD T84;
  D iF85T, iF85;
  DWORD jF86T, jF86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D res_;
  D T93;
  D T94;
  D T95;
  D T96;
  D T97;
  D T98;
  D T99_0;
  D T100;
  D T101;
  D T102;
  D T103;
  _KLsimple_object_vectorGVKd_2 T104 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T105;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:642
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
  T13 = SLOT_VALUE_INITD(iclass_, 9);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
  T14 = primitive_idQ(pos_,T13);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
  if (T14 != &KPfalseVKi) {
    T18 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
    T15 = SLOT_VALUE_INITD(iclass_, 10);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
    T16_0 = KmemberQVKdMM2I(pos_, T15, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
    T17 = T16_0;
    T18 = T17;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
    T3 = &KPfalseVKi;
    T12 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T22 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T23 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T24 = primitive_idQ(T23,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T25 = primitive_not(T24);
      T21 = T25;
    } else {
      T21 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T26 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T27_0 = KmemberQVKdMM3I(&KJlock_, T26, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T28 = T27_0;
      T29 = T28;
    } else {
      T29 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T29 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T30 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      CALL1(T30, &Kanonymous_of_augment_iclass_rcpl_position_dataF134);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T19 = primitive_wait_for_simple_lock(Dclass_bashing_lockVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T32 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T33 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T34 = primitive_idQ(T33,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T35 = primitive_not(T34);
      T31 = T35;
    } else {
      T31 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T31 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T36 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T37_0 = KmemberQVKdMM3I(&KJlock_, T36, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T38 = T37_0;
      T39 = T38;
    } else {
      T39 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T40 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T20 = MAKE_CLOSURE_INITD(&Kanonymous_of_augment_iclass_rcpl_position_dataF136, 1, T19);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      CALL1(T40, T20);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T42 = primitive_idQ(T19,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T42 != &KPfalseVKi) {
      T46 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T43 = primitive_idQ(T19,(D) 5);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      if (T43 != &KPfalseVKi) {
        T45 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T41_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, T19);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T44 = T41_0;
        T45 = T44;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T46 = T45;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      ENTER_UNWIND_FRAME(T4);
      if (!nlx_setjmp(FRAME_DEST(T4))) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
        T47 = SLOT_VALUE_INITD(iclass_, 9);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
        T48 = primitive_idQ(pos_,T47);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
        if (T48 != &KPfalseVKi) {
          T52 = T48;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
          T49 = SLOT_VALUE_INITD(iclass_, 10);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
          T50_0 = KmemberQVKdMM2I(pos_, T49, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
          T51 = T50_0;
          T52 = T51;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
        if (T52 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
          T5 = &KPfalseVKi;
          T9 = T5;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:648
          T53 = SLOT_VALUE_INITD(iclass_, 9);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:649
          T54 = primitive_idQ(T53,(D) -3);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:649
          if (T54 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:650
            SLOT_VALUE_SETTER(pos_, iclass_, 9);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:652
            T55 = primitive_cast_integer_as_raw(pos_);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:652
            T56 = primitive_cast_integer_as_raw(T53);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:652
            T57 = primitive_machine_word_less_thanQ(T55,T56);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:652
            if (T57 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:652
              Kassertion_failureVKiI(&K128, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:652
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:654
            T58 = SLOT_VALUE_INITD(iclass_, 10);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:655
            T59 = SLOT_VALUE_INITD(T58, 0);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:656
            T60 = primitive_cast_integer_as_raw(T59);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:656
            T61 = primitive_machine_word_add_signal_overflow(T60,4);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:656
            T62 = primitive_cast_raw_as_integer(T61);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:656
            T63 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T62);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:664
            iF76T = 1;
          L0: ;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:664
              iF76 = iF76T;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
              T88 = primitive_cast_raw_as_integer(iF76);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:658
              T65 = primitive_idQ(T88,T59);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:658
              if (T65 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
                T66 = SLOT_VALUE_INITD(T63, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
                T67 = primitive_cast_integer_as_raw(T66);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
                T68 = primitive_machine_word_unsigned_less_thanQ(iF76,T67);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
                if (T68 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
                  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(pos_, T63, 1, iF76);
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
                  Kelement_range_errorVKeI(T63, T88);
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:659
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:661
                T69 = KelementVKdMM11I(T58, T88, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:661
                elt_ = T69;
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:662
                T70 = primitive_cast_integer_as_raw(elt_);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:662
                T71 = primitive_machine_word_less_thanQ(T70,T55);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:662
                if (T71 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:663
                  T72 = SLOT_VALUE_INITD(T63, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:663
                  T73 = primitive_cast_integer_as_raw(T72);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:663
                  T74 = primitive_machine_word_unsigned_less_thanQ(iF76,T73);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:663
                  if (T74 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:663
                    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(elt_, T63, 1, iF76);
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:663
                    Kelement_range_errorVKeI(T63, T88);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:663
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:664
                  T75 = primitive_machine_word_add_signal_overflow(iF76,4);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:664
                  iF76T = T75;
                  goto L0;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:666
                  T77 = SLOT_VALUE_INITD(T63, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:666
                  T78 = primitive_cast_integer_as_raw(T77);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:666
                  T79 = primitive_machine_word_unsigned_less_thanQ(iF76,T78);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:666
                  if (T79 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:666
                    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(pos_, T63, 1, iF76);
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:666
                    Kelement_range_errorVKeI(T63, T88);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:666
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:673
                  T80 = primitive_machine_word_add_signal_overflow(iF76,4);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:670
                  iF85T = T88;
                  jF86T = T80;
                L1: ;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:670
                    iF85 = iF85T;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:670
                    jF86 = jF86T;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:669
                    T87 = primitive_cast_raw_as_integer(jF86);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:668
                    T81 = primitive_idQ(iF85,T59);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:668
                    if (T81 == &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:669
                      T82 = KelementVKdMM11I(T58, iF85, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:669
                      T83 = primitive_machine_word_unsigned_less_thanQ(jF86,T78);
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:669
                      if (T83 != &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:669
                        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T82, T63, 1, jF86);
                      } else {
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:669
                        Kelement_range_errorVKeI(T63, T87);
                      }
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:669
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:670
                      T84 = primitive_machine_word_add_signal_overflow(jF86,4);
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:670
                      iF85T = T87;
                      jF86T = T84;
                      goto L1;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:668
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:670
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:662
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:658
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:664
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:678
            primitive_synchronize_side_effects();
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:679
            SLOT_VALUE_SETTER(T63, iclass_, 10);
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:649
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:685
          primitive_synchronize_side_effects();
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:686
          T89 = SLOT_VALUE_INITD(iclass_, 1);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:687
          T90 = SLOT_VALUE(T89, 2);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:687
          T91 = primitive_idQ(T90,iclass_);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:687
          if (T91 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:688
            T6 = Kinitialize_class_instanceQ_iepVKiI(T89);
            T8 = T6;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:687
            T7 = &KPfalseVKi;
            T8 = T7;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:687
          T9 = T8;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:646
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        FALL_THROUGH_UNWIND(T9);
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T94 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      if (T94 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T95 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T96 = primitive_idQ(T95,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T97 = primitive_not(T96);
        T93 = T97;
      } else {
        T93 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      if (T93 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T98 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T99_0 = KmemberQVKdMM3I(&KJlock_, T98, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T100 = T99_0;
        T101 = T100;
      } else {
        T101 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      if (T101 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        T102 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        CALL1(T102, &Kanonymous_of_augment_iclass_rcpl_position_dataF131);
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      res_ = primitive_release_simple_lock(Dclass_bashing_lockVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T103 = primitive_idQ(res_,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      if (T103 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
        Klock_release_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, res_);
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      CONTINUE_UNWIND();
      T11 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T104.vector_element_[0] = &KJsynchronization_;
      T104.vector_element_[1] = Dclass_bashing_lockVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T10 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T104);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
      T105 = KsignalVKdMM0I(T10, &KPempty_vectorVKi);
      T11 = T105;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:644
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:642
  MV_SET_COUNT(0);
  return(T12);
}

D Kall_iclass_superclassesVKeI (D x_, D u_) {
  D T2;
  D T3;
  D T4;
  D result_T, result_;
  D T6T, T6;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;
  D T15_0;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:177
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
  T2 = SLOT_VALUE(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
  T3 = Kall_superclassesVKdMM1I(x_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
  result_T = &KPempty_listVKi;
  T6T = T3;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
    T6 = T6T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
    T11 = primitive_idQ(T6,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      T12 = SLOT_VALUE_INITD(T6, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      T7 = CALL1(T2, T12);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      T8 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      SLOT_VALUE_SETTER(T7, T8, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      SLOT_VALUE_SETTER(result_, T8, 1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      T14 = SLOT_VALUE_INITD(T6, 1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      T15_0 = T14;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      T13_0 = T15_0;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      T16 = T13_0;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
      result_T = T8;
      T6T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
    T9_0 = KreverseXVKdMM2I(result_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
  T10 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:178
  T4 = T10;
  MV_SET_ELT(0, T10);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:177
  return(T4);
}

D Kiclass_type_completeQ_setterVKeMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(21,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(21,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kiclass_instantiableQ_setterVKeMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(26,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(26,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinitialize_class_instanceQ_iepVKiI (D c_) {
  D T1;
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
  DWORD T13;
  D T14;
  DWORD T15;
  D T16;
  DWORD T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:599
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:601
  T6 = SLOT_VALUE_INITD(c_, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:601
  T7 = primitive_idQ(T6,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:601
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:604
    T8 = SLOT_VALUE(c_, 2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:604
    T9 = SLOT_VALUE_INITD(T8, 9);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:605
    T10 = SLOT_VALUE(c_, 2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:605
    T11 = SLOT_VALUE_INITD(T10, 10);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:606
    T12 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
    T14 = primitive_machine_word_less_thanQ(1,T13);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
    if (T14 != &KPfalseVKi) {
      T3 = &Kgeneral_rcpl_class_instanceQVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:609
      T15 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:609
      T16 = primitive_machine_word_less_thanQ(T15,1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
      if (T16 != &KPfalseVKi) {
        T2 = &Kclass_instanceQ_initialVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:611
        T17 = primitive_cast_integer_as_raw(T9);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:611
        T18 = primitive_machine_word_less_thanQ(T17,25);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
        if (T18 != &KPfalseVKi) {
          T1 = &Kclass_instanceQ_rcpl_single_smallVKi;
        } else {
          T1 = &Kclass_instanceQ_rcpl_single_largeVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
        T2 = T1;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
      T3 = T2;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:607
    T4 = T3;
  } else {
    T4 = &Kmasked_class_instanceQVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:601
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:617
  T19 = SLOT_VALUE(T4, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:617
  SLOT_VALUE_SETTER(T19, c_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:617
  T5 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:599
  MV_SET_COUNT(0);
  return(T5);
}

D Kscu_entry_setterVKeI (D ic_, D c_, D scu_) {
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_6 T9 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T10;
  D nF11T, nF11;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:151
  T4 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:151
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:152
    KerrorVKdMM1I(&K116, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:151
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:154
  T5 = SLOT_VALUE_INITD(scu_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:158
  nF11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:158
    nF11 = nF11T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:155
    T7 = primitive_idQ(nF11,Dempty_scu_nodeVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:155
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:156
      T8 = SLOT_VALUE_INITD(scu_, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:156
      T9.vector_element_[0] = &KJclass_;
      T9.vector_element_[1] = c_;
      T9.vector_element_[2] = &KJimplementation_class_;
      T9.vector_element_[3] = ic_;
      T9.vector_element_[4] = &KJnext_;
      T9.vector_element_[5] = T8;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:156
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T6 = CONGRUENT_CALL2(&KLscu_nodeGVKi, &T9);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:156
      SLOT_VALUE_SETTER(T6, scu_, 0);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:158
      T10 = SLOT_VALUE(nF11, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:158
      nF11T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:155
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:158
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:161
  T3_0 = ic_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:147
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kreport_class_incompleteVKiI (D class_, D format_string_) {
  D class_rep_;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_6 T7 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:465
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:467
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  class_rep_ = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:471
  T6.vector_element_[0] = class_rep_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:471
  T4 = KlistVKdI(&T6);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:468
  T7.vector_element_[0] = &KJobject_;
  T7.vector_element_[1] = class_rep_;
  T7.vector_element_[2] = &KJformat_string_;
  T7.vector_element_[3] = format_string_;
  T7.vector_element_[4] = &KJformat_arguments_;
  T7.vector_element_[5] = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:468
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T5 = CONGRUENT_CALL2(&KLclass_incomplete_errorGVKe, &T7);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:468
  T8_0 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:465
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kinvalidate_class_instanceQ_iepVKiI (D c_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:620
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:621
  T2 = SLOT_VALUE(&Knever_instanceQ_functionVKi, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:621
  SLOT_VALUE_SETTER(T2, c_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:621
  T1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:620
  MV_SET_COUNT(0);
  return(T1);
}

D Kallocation_attributesVKiMM0I (D iclass_, D init_args_) {
  D repeated_slot_descriptor_;
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D keyword_valueF13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  D DlockDF22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_2 T37 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T38;
  D T39;
  D T40;
  DWORD T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D keyword_valueF47;
  D T48;
  D T49;
  D T50;
  D T51_0;
  D T52;
  DWORD T53;
  D T54;
  D T55;
  D DlockDF56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  DWORD T65;
  D T66;
  D T67;
  DWORD T68;
  D T69;
  D T70;
  _KLsimple_object_vectorGVKd_2 T71 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T72;
  D T73;
  D T74;
  DWORD T75;
  D T76;
  D T77;
  D T78;
  D T79;
  D T80;
  D T81_0;
  D T81_1;
  D T81_2;
  D T81_3;
  D T81_4;
  D T82_0;
  D T82_1;
  D T82_2;
  D T82_3;
  D T82_4;
  D T83_0;
  D T83_1;
  D T83_2;
  D T83_3;
  D T83_4;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:393
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:398
  T5 = SLOT_VALUE_INITD(iclass_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:398
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:398
  T7 = primitive_machine_word_logand(T6,262140);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:398
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:398
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:399
  T10 = SLOT_VALUE_INITD(iclass_, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:400
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:401
    repeated_slot_descriptor_ = T10;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:403
    T11 = SLOT_VALUE_INITD(repeated_slot_descriptor_, 6);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:405
    T12 = SLOT_VALUE(repeated_slot_descriptor_, 7);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
    keyword_valueF13 = Kkeyword_valueVKiI(T12, iclass_, init_args_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
    T15 = primitive_idQ(keyword_valueF13,Dnot_foundVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
      T14 = Keffective_initial_value_descriptorVKiI(T12, iclass_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
      T18 = SLOT_VALUE_INITD(T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
      T19 = primitive_cast_integer_as_raw(T18);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
      T20 = primitive_machine_word_logbitQ(2,T19);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T30 = SLOT_VALUE_INITD(T14, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T31 = primitive_cast_integer_as_raw(T30);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T32 = primitive_machine_word_logbitQ(4,T31);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        if (T32 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
          T21 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
          if (T21 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            DlockDF22 = Dslot_initial_data_lockVKi;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            T23 = CALL1(&Kwait_forYthreadsVdylan, DlockDF22);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            if (T23 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
              ENTER_UNWIND_FRAME(T24);
              if (!nlx_setjmp(FRAME_DEST(T24))) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                T33 = SLOT_VALUE_INITD(T14, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                T34 = primitive_cast_integer_as_raw(T33);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                T35 = primitive_machine_word_logbitQ(4,T34);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                if (T35 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                  T36 = SLOT_VALUE_INITD(T14, 1);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                  T25 = T36;
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                  T26 = CALL0(T25);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                  SLOT_VALUE_SETTER(T26, T14, 1);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                  primitive_synchronize_side_effects();
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                  Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T14);
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
                FALL_THROUGH_UNWIND(&KPfalseVKi);
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
              CALL1(&KreleaseYthreadsVdylan, DlockDF22);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
              CONTINUE_UNWIND();
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
              T37.vector_element_[0] = &KJsynchronization_;
              T37.vector_element_[1] = DlockDF22;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
              CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
              T27 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T37);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
              KsignalVKdMM0I(T27, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            T38 = SLOT_VALUE_INITD(T14, 1);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            T28 = T38;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            T29 = CALL0(T28);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            SLOT_VALUE_SETTER(T29, T14, 1);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
            Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T14);
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T39 = SLOT_VALUE_INITD(T14, 1);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T40 = SLOT_VALUE_INITD(T14, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T41 = primitive_cast_integer_as_raw(T40);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T42 = primitive_machine_word_logbitQ(3,T41);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        if (T42 != &KPfalseVKi) {
          T44 = T39;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
          T16 = T39;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
          T17_0 = CALL0(T16);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
          T43 = T17_0;
          T44 = T43;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
        T45 = T44;
      } else {
        T45 = &KPunboundVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
      T46 = T45;
    } else {
      T46 = keyword_valueF13;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:404
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
    keyword_valueF47 = Kkeyword_valueVKiI(repeated_slot_descriptor_, iclass_, init_args_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
    T49 = primitive_idQ(keyword_valueF47,Dnot_foundVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
    if (T49 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
      T48 = Keffective_initial_value_descriptorVKiI(repeated_slot_descriptor_, iclass_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
      T52 = SLOT_VALUE_INITD(T48, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
      T53 = primitive_cast_integer_as_raw(T52);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
      T54 = primitive_machine_word_logbitQ(2,T53);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
      if (T54 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T64 = SLOT_VALUE_INITD(T48, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T65 = primitive_cast_integer_as_raw(T64);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T66 = primitive_machine_word_logbitQ(4,T65);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        if (T66 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
          T55 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
          if (T55 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            DlockDF56 = Dslot_initial_data_lockVKi;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            T57 = CALL1(&Kwait_forYthreadsVdylan, DlockDF56);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            if (T57 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
              ENTER_UNWIND_FRAME(T58);
              if (!nlx_setjmp(FRAME_DEST(T58))) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                T67 = SLOT_VALUE_INITD(T48, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                T68 = primitive_cast_integer_as_raw(T67);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                T69 = primitive_machine_word_logbitQ(4,T68);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                if (T69 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                  T70 = SLOT_VALUE_INITD(T48, 1);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                  T59 = T70;
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                  T60 = CALL0(T59);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                  SLOT_VALUE_SETTER(T60, T48, 1);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                  primitive_synchronize_side_effects();
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                  Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T48);
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
                FALL_THROUGH_UNWIND(&KPfalseVKi);
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
              CALL1(&KreleaseYthreadsVdylan, DlockDF56);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
              CONTINUE_UNWIND();
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
              T71.vector_element_[0] = &KJsynchronization_;
              T71.vector_element_[1] = DlockDF56;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
              CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
              T61 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T71);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
              KsignalVKdMM0I(T61, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            T72 = SLOT_VALUE_INITD(T48, 1);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            T62 = T72;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            T63 = CALL0(T62);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            SLOT_VALUE_SETTER(T63, T48, 1);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
            Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T48);
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T73 = SLOT_VALUE_INITD(T48, 1);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T74 = SLOT_VALUE_INITD(T48, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T75 = primitive_cast_integer_as_raw(T74);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T76 = primitive_machine_word_logbitQ(3,T75);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        if (T76 != &KPfalseVKi) {
          T78 = T73;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
          T50 = T73;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
          T51_0 = CALL0(T50);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
          T77 = T51_0;
          T78 = T77;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
        T79 = T78;
      } else {
        T79 = &KPunboundVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
      T80 = T79;
    } else {
      T80 = keyword_valueF47;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:406
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:403
    T81_0 = T9;
    T81_1 = &KPtrueVKi;
    T81_2 = T11;
    T81_3 = T46;
    T81_4 = T80;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:403
    T83_0 = T81_0;
    T83_1 = T81_1;
    T83_2 = T81_2;
    T83_3 = T81_3;
    T83_4 = T81_4;
    T4_0 = T83_0;
    T4_1 = T83_1;
    T4_2 = T83_2;
    T4_3 = T83_3;
    T4_4 = T83_4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:408
    T82_0 = T9;
    T82_1 = &KPfalseVKi;
    T82_2 = &KLobjectGVKd;
    T82_3 = (D) 1;
    T82_4 = &KPfalseVKi;
    T4_0 = T82_0;
    T4_1 = T82_1;
    T4_2 = T82_2;
    T4_3 = T82_3;
    T4_4 = T82_4;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:400
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:393
  MV_SET_ELT(1, T4_1);
  MV_SET_ELT(2, T4_2);
  MV_SET_ELT(3, T4_3);
  MV_SET_ELT(4, T4_4);
  MV_SET_COUNT(5);
  return(T4_0);
}

D Kdefaulted_initialization_argumentsVKiI (D class_) {
  D T2_0;
  D slot_;
  DWORD super_i_T, super_i_;
  D cF5;
  DWORD T6T, T6;
  D descriptorF7;
  DWORD i_T, i_;
  D T9;
  D T10;
  D T11_0;
  D T12_0;
  D indexF13;
  D T14;
  D T15;
  D T16;
  D required_keywords_;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  DWORD T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  DWORD T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  DWORD T47;
  D T48;
  D T49;
  D T50;
  DWORD T51;
  D T52;
  DWORD T53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  DWORD T58;
  D T59;
  D T60;
  D T61;
  DWORD T62;
  DWORD T63;
  D T64;
  D T65;
  D T66_0;
  D T67;
  DWORD T68;
  D T69;
  D T70;
  D DlockD_;
  D T72;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79;
  DWORD T80;
  D T81;
  D T82;
  DWORD T83;
  D T84;
  D T85;
  _KLsimple_object_vectorGVKd_2 T86 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T87;
  D T88;
  D T89;
  DWORD T90;
  D T91;
  D T92;
  D T93;
  D T94;
  DWORD T95;
  DWORD T96;
  D T97;
  D T98;
  DWORD T99;
  DWORD T100;
  D T101;
  DWORD T102;
  DWORD T103;
  DWORD T104;
  D T105;
  D T106;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:532
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:534
  T21 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:534
  T22 = SLOT_VALUE_INITD(T21, 21);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:535
  T23 = primitive_instanceQ(T22,&KLsimple_object_vectorGVKd);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:535
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:481
    T20 = T22;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:536
    T2_0 = T20;
    T12_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:538
    slot_ = T22;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:539
    T24 = primitive_cast_integer_as_raw(slot_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:539
    T25 = primitive_machine_word_logxor(T24,1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:539
    T26 = primitive_machine_word_abs_signal_overflow(T25);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:539
    T27 = primitive_machine_word_logior(T26,1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:539
    T28 = primitive_cast_raw_as_integer(T27);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:539
    T29 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T28);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:540
    indexF13 = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:541
    required_keywords_ = &KPempty_listVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
    T30 = SLOT_VALUE(class_, 2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
    T31 = SLOT_VALUE_INITD(T30, 8);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
    T32 = SLOT_VALUE(class_, 2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
    T33 = SLOT_VALUE_INITD(T32, 9);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
    T35 = primitive_cast_integer_as_raw(T33);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
    super_i_T = T35;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
      super_i_ = super_i_T;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
      T36 = primitive_cast_raw_as_integer(super_i_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
      T34 = primitive_machine_word_less_thanQ(super_i_,1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
      if (T34 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
        T37 = KelementVKdMM11I(T31, T36, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
        cF5 = T37;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:544
        T38 = SLOT_VALUE(cF5, 2);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:544
        T39 = SLOT_VALUE_INITD(T38, 19);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
        T40 = SLOT_VALUE_INITD(T39, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
        T41 = primitive_cast_integer_as_raw(T40);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
        T6T = 1;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
          T6 = T6T;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
          T42 = primitive_machine_word_equalQ(T6,T41);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
          if (T42 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
            T43 = REPEATED_D_SLOT_VALUE_TAGGED(T39, 1, T6);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
            descriptorF7 = T43;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:545
            T44 = SLOT_VALUE_INITD(descriptorF7, 3);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
            T19 = required_keywords_;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
            T45 = KmemberQVKdMM3I(T44, T19, &KPempty_vectorVKi, &KEEVKd);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
            if (T45 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:548
              T46 = SLOT_VALUE_INITD(descriptorF7, 0);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:548
              T47 = primitive_cast_integer_as_raw(T46);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:548
              T48 = primitive_machine_word_logbitQ(5,T47);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
              if (T48 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:549
                T18 = required_keywords_;
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:549
                T49 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:549
                SLOT_VALUE_SETTER(T44, T49, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:549
                SLOT_VALUE_SETTER(T18, T49, 1);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:549
                required_keywords_ = T49;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:550
                T50 = SLOT_VALUE_INITD(descriptorF7, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:550
                T51 = primitive_cast_integer_as_raw(T50);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:550
                T52 = primitive_machine_word_logbitQ(2,T51);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:550
                if (T52 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                  i_T = 1;
                L2: ;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    i_ = i_T;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    T55 = primitive_cast_raw_as_integer(i_);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    T16 = indexF13;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    T53 = primitive_cast_integer_as_raw(T16);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    T54 = primitive_machine_word_less_thanQ(i_,T53);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    if (T54 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:552
                      T56 = KelementVKdMM11I(T29, T55, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:552
                      T9 = KEEVKdI(T44, T56);
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                      if (T9 == &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                        T57 = primitive_machine_word_add_signal_overflow(i_,8);
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                        i_T = T57;
                        goto L2;
                      }
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    }
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:554
                    T15 = indexF13;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:554
                    T58 = primitive_cast_integer_as_raw(T15);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:554
                    T59 = primitive_machine_word_less_thanQ(i_,T58);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:551
                  T60 = primitive_not(T59);
                  T10 = T60;
                } else {
                  T10 = &KPfalseVKi;
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:550
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
                if (T10 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:556
                  T14 = indexF13;
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                  T61 = SLOT_VALUE_INITD(T29, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                  T62 = primitive_cast_integer_as_raw(T14);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                  T63 = primitive_cast_integer_as_raw(T61);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                  T64 = primitive_machine_word_unsigned_less_thanQ(T62,T63);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                  if (T64 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T44, T29, 1, T62);
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                    Kelement_range_errorVKeI(T29, T14);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:557
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  T67 = SLOT_VALUE_INITD(descriptorF7, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  T68 = primitive_cast_integer_as_raw(T67);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  T69 = primitive_machine_word_logbitQ(2,T68);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  if (T69 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T79 = SLOT_VALUE_INITD(descriptorF7, 0);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T80 = primitive_cast_integer_as_raw(T79);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T81 = primitive_machine_word_logbitQ(4,T80);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    if (T81 == &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                      T70 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                      if (T70 != &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        DlockD_ = Dslot_initial_data_lockVKi;
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        T72 = CALL1(&Kwait_forYthreadsVdylan, DlockD_);
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        if (T72 != &KPfalseVKi) {
                          // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                          ENTER_UNWIND_FRAME(T73);
                          if (!nlx_setjmp(FRAME_DEST(T73))) {
                            // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                            T82 = SLOT_VALUE_INITD(descriptorF7, 0);
                            // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                            T83 = primitive_cast_integer_as_raw(T82);
                            // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                            T84 = primitive_machine_word_logbitQ(4,T83);
                            // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                            if (T84 == &KPfalseVKi) {
                              // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                              T85 = SLOT_VALUE_INITD(descriptorF7, 1);
                              // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                              T74 = T85;
                              // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                              T75 = CALL0(T74);
                              // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                              SLOT_VALUE_SETTER(T75, descriptorF7, 1);
                              // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                              primitive_synchronize_side_effects();
                              // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                              Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, descriptorF7);
                            }
                            // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                            // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                            FALL_THROUGH_UNWIND(&KPfalseVKi);
                          }
                          // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                          CALL1(&KreleaseYthreadsVdylan, DlockD_);
                          // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                          CONTINUE_UNWIND();
                        } else {
                          // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                          T86.vector_element_[0] = &KJsynchronization_;
                          T86.vector_element_[1] = DlockD_;
                          // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                          T76 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T86);
                          // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                          KsignalVKdMM0I(T76, &KPempty_vectorVKi);
                        }
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                      } else {
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        T87 = SLOT_VALUE_INITD(descriptorF7, 1);
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        T77 = T87;
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        T78 = CALL0(T77);
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        SLOT_VALUE_SETTER(T78, descriptorF7, 1);
                        // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                        Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, descriptorF7);
                      }
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    }
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T88 = SLOT_VALUE_INITD(descriptorF7, 1);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T89 = SLOT_VALUE_INITD(descriptorF7, 0);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T90 = primitive_cast_integer_as_raw(T89);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T91 = primitive_machine_word_logbitQ(3,T90);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    if (T91 != &KPfalseVKi) {
                      T93 = T88;
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                      T65 = T88;
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                      T66_0 = CALL0(T65);
                      // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                      T92 = T66_0;
                      T93 = T92;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    T94 = T93;
                  } else {
                    T94 = &KPunboundVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  T95 = primitive_cast_integer_as_raw(T14);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  T96 = primitive_machine_word_add_signal_overflow(T95,4);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  T97 = primitive_cast_raw_as_integer(T96);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  T98 = primitive_machine_word_unsigned_less_thanQ(T96,T63);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  if (T98 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T94, T29, 1, T96);
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                    Kelement_range_errorVKeI(T29, T97);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:558
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:559
                  T99 = primitive_cast_integer_as_raw(T14);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:559
                  T100 = primitive_machine_word_add_signal_overflow(T99,8);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:559
                  T101 = primitive_cast_raw_as_integer(T100);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:559
                  indexF13 = T101;
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:546
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
            T102 = primitive_machine_word_add_signal_overflow(T6,4);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
            T6T = T102;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:543
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
        T103 = primitive_machine_word_add_signal_overflow(super_i_,0xFFFFFFFFFFFFFFFCL);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
        super_i_T = T103;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:542
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:563
    T104 = primitive_cast_integer_as_raw(slot_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:563
    T105 = primitive_machine_word_less_thanQ(T104,1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:563
    if (T105 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:565
      T106 = SLOT_VALUE(class_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:565
      SLOT_VALUE_SETTER(T29, T106, 21);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:563
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:567
    T11_0 = T29;
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:535
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:532
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kdefault_initializeVKiI (D class_, D instance_, D init_args_) {
  DWORD slot_offset_T, slot_offset_;
  D descriptorF5;
  DWORD offset_T, offset_;
  D descriptorF7;
  D T8;
  D init_;
  D T10;
  D T11;
  DADDR T12;
  DWORD bitsF13;
  D T14;
  D T15;
  D mm_wrapperF16;
  D T17;
  D T18;
  D mm_wrapperF19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  D T25;
  D T26;
  D keyword_value_;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  D DlockD_;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  DWORD T45;
  D T46;
  D T47;
  DWORD T48;
  D T49;
  D T50;
  _KLsimple_object_vectorGVKd_2 T51 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T52;
  D T53;
  D T54;
  DWORD T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  DWORD T61;
  DWORD T62;
  D T63;
  D T64;
  DWORD T65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70;
  D T71;
  DWORD T72;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:490
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
  T12 = primitive_cast_pointer_as_raw(instance_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
  bitsF13 = primitive_machine_word_logand(T12,3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
  T14 = primitive_machine_word_equalQ(bitsF13,0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
    T15 = primitive_element(instance_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
    mm_wrapperF16 = T15;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
    T17 = SLOT_VALUE_INITD(mm_wrapperF16, 0);
    T21 = T17;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
    T18 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF13,0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
    mm_wrapperF19 = T18;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
    T20 = SLOT_VALUE_INITD(mm_wrapperF19, 0);
    T21 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:493
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:498
  T22 = SLOT_VALUE_INITD(T21, 4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
  T23 = SLOT_VALUE_INITD(T22, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
  T24 = primitive_cast_integer_as_raw(T23);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
  slot_offset_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
    slot_offset_ = slot_offset_T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
    T25 = primitive_machine_word_less_thanQ(slot_offset_,T24);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:501
      T26 = REPEATED_D_SLOT_VALUE_TAGGED(T22, 1, slot_offset_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:500
      descriptorF5 = T26;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
      keyword_value_ = Kkeyword_valueVKiI(descriptorF5, T21, init_args_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
      T29 = primitive_idQ(keyword_value_,Dnot_foundVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
        T28 = Keffective_initial_value_descriptorVKiI(descriptorF5, T21);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
        T32 = SLOT_VALUE_INITD(T28, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
        T33 = primitive_cast_integer_as_raw(T32);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
        T34 = primitive_machine_word_logbitQ(2,T33);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
        if (T34 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T44 = SLOT_VALUE_INITD(T28, 0);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T45 = primitive_cast_integer_as_raw(T44);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T46 = primitive_machine_word_logbitQ(4,T45);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          if (T46 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
            T35 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
            if (T35 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              DlockD_ = Dslot_initial_data_lockVKi;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              T37 = CALL1(&Kwait_forYthreadsVdylan, DlockD_);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              if (T37 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                ENTER_UNWIND_FRAME(T38);
                if (!nlx_setjmp(FRAME_DEST(T38))) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                  T47 = SLOT_VALUE_INITD(T28, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                  T48 = primitive_cast_integer_as_raw(T47);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                  T49 = primitive_machine_word_logbitQ(4,T48);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                  if (T49 == &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                    T50 = SLOT_VALUE_INITD(T28, 1);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                    T39 = T50;
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                    T40 = CALL0(T39);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                    SLOT_VALUE_SETTER(T40, T28, 1);
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                    primitive_synchronize_side_effects();
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                    Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T28);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                  FALL_THROUGH_UNWIND(&KPfalseVKi);
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                CALL1(&KreleaseYthreadsVdylan, DlockD_);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                CONTINUE_UNWIND();
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                T51.vector_element_[0] = &KJsynchronization_;
                T51.vector_element_[1] = DlockD_;
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                T41 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T51);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
                KsignalVKdMM0I(T41, &KPempty_vectorVKi);
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              T52 = SLOT_VALUE_INITD(T28, 1);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              T42 = T52;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              T43 = CALL0(T42);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              SLOT_VALUE_SETTER(T43, T28, 1);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
              Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T28);
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T53 = SLOT_VALUE_INITD(T28, 1);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T54 = SLOT_VALUE_INITD(T28, 0);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T55 = primitive_cast_integer_as_raw(T54);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T56 = primitive_machine_word_logbitQ(3,T55);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          if (T56 != &KPfalseVKi) {
            T58 = T53;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
            T30 = T53;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
            T31_0 = CALL0(T30);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
            T57 = T31_0;
            T58 = T57;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
          T59 = T58;
        } else {
          T59 = &KPunboundVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
        T60 = T59;
      } else {
        T60 = keyword_value_;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:503
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:502
      T61 = primitive_machine_word_shift_right(slot_offset_,2);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:502
      primitive_slot_value_setter(T60,instance_,T61);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
      T62 = primitive_machine_word_add_signal_overflow(slot_offset_,4);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
      slot_offset_T = T62;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:499
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:509
  T63 = SLOT_VALUE_INITD(T21, 20);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
  T64 = SLOT_VALUE_INITD(T63, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
  T65 = primitive_cast_integer_as_raw(T64);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
  offset_T = 1;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
    offset_ = offset_T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
    T67 = primitive_cast_raw_as_integer(offset_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
    T66 = primitive_machine_word_less_thanQ(offset_,T65);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
    if (T66 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:512
      T68 = REPEATED_D_SLOT_VALUE_TAGGED(T63, 1, offset_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:511
      descriptorF7 = T68;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:513
      T69 = SLOT_VALUE_INITD(descriptorF7, 3);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:513
      if (T69 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:514
        T8 = Kkeyword_valueVKiI(descriptorF7, T21, init_args_);
        init_ = T8;
      } else {
        init_ = Dnot_foundVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:513
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:522
      T70 = primitive_idQ(init_,Dnot_foundVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:522
      T10 = Kfind_or_create_class_slot_storageVKiI(T21, T67, T70);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:523
      T71 = primitive_idQ(init_,Dnot_foundVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:523
      if (T71 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:525
        SLOT_VALUE_SETTER(init_, T10, 0);
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:523
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
      T72 = primitive_machine_word_add_signal_overflow(offset_,4);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
      offset_T = T72;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:510
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:529
  T11 = instance_;
  MV_SET_ELT(0, instance_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:490
  return(T11);
}

D Kscu_initialize_allVKeI (D f_, D scu_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:113
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:116
  T2 = MAKE_CLOSURE_INITD(&Kanonymous_of_scu_initialize_allF90, 1, f_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:116
  T3 = Kscu_doVKeI(T2, scu_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:113
  MV_SET_COUNT(0);
  return(T3);
}

D Kscu_doVKeI (D fn_, D scu_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D nF6T, nF6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:166
  T2 = SLOT_VALUE_INITD(scu_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:171
  nF6T = T2;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:171
    nF6 = nF6T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:167
    T3 = primitive_idQ(nF6,Dempty_scu_nodeVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:167
    if (T3 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:170
      T4 = SLOT_VALUE(nF6, 2);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:170
      CALL2(fn_, T4, scu_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:171
      T5 = SLOT_VALUE(nF6, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:171
      nF6T = T5;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:167
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:171
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:166
  T7 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:165
  MV_SET_COUNT(0);
  return(T7);
}

D KreinitializeVKnMM0I (D instance_, D init_args_) {
  D class_;
  D T4;
  D T5;
  D init_argsF6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:571
  T5 = primitive_copy_vector(init_args_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:572
  class_ = Kobject_classVKdI(instance_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:574
  T4 = Kdefaulted_initialization_argumentsVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:574
  init_argsF6 = Kconcatenate_2VKeMM1I(T5, T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:575
  Kdefault_initializeVKiI(class_, instance_, init_argsF6);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:576
  T7 = APPLY2(&KinitializeVKd, instance_, init_argsF6);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:571
  return(T7);
}

D Kkludge_up_init_valueVKiI (D class_, D getter_, D value_) {
  D returnPexit_28_;
  D T4;
  DWORD T5T, T5;
  D sd_;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  _KLsimple_object_vectorGVKd_2 T18 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:327
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:328
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
  T8 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
  T9 = SLOT_VALUE_INITD(T8, 17);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
  T5T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
    T5 = T5T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
    T12 = primitive_machine_word_equalQ(T5,T11);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 1, T5);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
      sd_ = T13;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:330
      T14 = SLOT_VALUE_INITD(sd_, 4);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:330
      T15 = primitive_idQ(getter_,T14);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:330
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:331
        SLOT_VALUE_SETTER(value_, sd_, 1);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:332
        Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, sd_);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:333
        Kinit_valueQ_setterVKiMM0I(&KPtrueVKi, sd_);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:328
        T16 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:328
        T7 = T16;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:330
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
      T17 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
      T5T = T17;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:337
  T18.vector_element_[0] = getter_;
  T18.vector_element_[1] = class_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:337
  T19 = KerrorVKdMM1I(&K87, &T18);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:328
  T7 = T19;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:328
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:327
  return(T7);
}

static D Kanonymous_of_scu_initialize_allF90I (D ic_, D scu_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:116
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:117
  T3 = SLOT_VALUE_INITD(ic_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:117
  T2 = Kscu_force_initializationVKeI(T3, scu_, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:116
  return(T2);
}

D Kscu_force_initializationVKeI (D c_, D scu_, D f_) {
  D T3;
  DWORD T4T, T4;
  D cF5;
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
  DWORD T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D nF25T, nF25;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:123
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:127
  T3 = SLOT_VALUE_INITD(scu_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:141
  nF25T = T3;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:141
    nF25 = nF25T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:128
    T9 = primitive_idQ(nF25,Dempty_scu_nodeVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:128
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:129
      T10 = SLOT_VALUE(c_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:129
      T11 = T10;
      MV_SET_ELT(0, T10);
      MV_SET_COUNT(1);
      T8 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:130
      T12 = SLOT_VALUE(nF25, 1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:130
      T13 = primitive_idQ(T12,c_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:128
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:131
        T14 = SLOT_VALUE(nF25, 2);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:132
        T15 = SLOT_VALUE_INITD(nF25, 3);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:132
        if (T15 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
          T16 = SLOT_VALUE(T14, 7);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
          T17 = SLOT_VALUE_INITD(T16, 0);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
          T18 = primitive_cast_integer_as_raw(T17);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
          T4T = 1;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
            T4 = T4T;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
            T19 = primitive_machine_word_equalQ(T4,T18);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
            if (T19 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
              T20 = REPEATED_D_SLOT_VALUE_TAGGED(T16, 1, T4);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
              cF5 = T20;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
              Kscu_force_initializationVKeI(cF5, scu_, f_);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
              T21 = primitive_machine_word_add_signal_overflow(T4,4);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
              T4T = T21;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:133
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:134
          T22 = SLOT_VALUE_INITD(nF25, 3);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:134
          if (T22 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:135
            CALL2(f_, T14, scu_);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:136
            SLOT_VALUE_SETTER(&KPtrueVKi, nF25, 3);
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:134
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:132
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:139
        T6 = T14;
        MV_SET_ELT(0, T14);
        MV_SET_COUNT(1);
        T7 = T6;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:141
        T23 = SLOT_VALUE(nF25, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:141
        nF25T = T23;
        goto L0;
        T7 = T24;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:128
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:128
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:141
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:123
  return(T8);
}

D Kkeyword_valueVKiI (D descriptor_, D iclass_, D init_args_) {
  D keywordF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD offset_T, offset_;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22;
  D T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_2 T29 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T30 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T31;
  D T32;
  _KLsimple_object_vectorGVKd_6 T33 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:256
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:271
  T12 = SLOT_VALUE_INITD(descriptor_, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:272
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:273
    keywordF4 = T12;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:261
    T14 = SLOT_VALUE_INITD(init_args_, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
    offset_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
      offset_ = offset_T;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
      T15 = primitive_cast_integer_as_raw(T14);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
      T16 = primitive_machine_word_less_thanQ(offset_,T15);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:263
        T17 = REPEATED_D_SLOT_VALUE_TAGGED(init_args_, 1, offset_);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:263
        T18 = primitive_idQ(T17,keywordF4);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
        if (T18 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
          T19 = primitive_machine_word_add_signal_overflow(offset_,8);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
          offset_T = T19;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:264
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:265
        T20 = primitive_machine_word_add_signal_overflow(offset_,4);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:265
        T21 = REPEATED_D_SLOT_VALUE_TAGGED(init_args_, 1, T20);
        T22 = T21;
      } else {
        T22 = Dnot_foundVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:264
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:262
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:275
    T23 = primitive_idQ(T22,Dnot_foundVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:275
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:277
      T5 = Keffective_initialization_argument_descriptorVKiI(descriptor_, iclass_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:276
      T24 = SLOT_VALUE_INITD(T5, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:276
      T25 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:276
      T26 = primitive_machine_word_logbitQ(5,T25);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:276
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:280
        T27 = SLOT_VALUE_INITD(iclass_, 1);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:280
        T28 = SLOT_VALUE_INITD(descriptor_, 3);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:280
        T29.vector_element_[0] = T27;
        T29.vector_element_[1] = T28;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:280
        T6 = KlistVKdI(&T29);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:278
        T30.vector_element_[0] = &KJformat_string_;
        T30.vector_element_[1] = &K96;
        T30.vector_element_[2] = &KJformat_arguments_;
        T30.vector_element_[3] = T6;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:278
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T7 = CONGRUENT_CALL2(&KLmissing_keyword_errorGVKi, &T30);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:278
        KerrorVKdMM0I(T7, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:276
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:282
      T31 = SLOT_VALUE_INITD(descriptor_, 6);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:282
      T32 = primitive_instanceQ(T22,T31);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:275
      if (T32 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:283
        T33.vector_element_[0] = &KJvalue_;
        T33.vector_element_[1] = T22;
        T33.vector_element_[2] = &KJtype_;
        T33.vector_element_[3] = T31;
        T33.vector_element_[4] = &KJslot_descriptor_;
        T33.vector_element_[5] = descriptor_;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:283
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T8 = CONGRUENT_CALL2(&KLslot_type_errorGVKe, &T33);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:283
        KerrorVKdMM0I(T8, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:275
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:275
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:288
    T9 = T22;
    MV_SET_ELT(0, T22);
    MV_SET_COUNT(1);
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:290
    T10 = Dnot_foundVKi;
    MV_SET_ELT(0, Dnot_foundVKi);
    MV_SET_COUNT(1);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:272
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:256
  return(T11);
}

D Keffective_initialization_argument_descriptorVKiI (D descriptor_, D iclass_) {
  D T3_0;
  D returnPexit_3_;
  D T5;
  DWORD super_i_T, super_i_;
  D cF7;
  DWORD T8T, T8;
  D d_;
  D T10;
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
  D T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_1 T29 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T30;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  D T43;
  _KLsimple_object_vectorGVKd_1 T44 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T45;
  DWORD T46;
  DWORD T47;
  D T48_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:187
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:190
  T18 = SLOT_VALUE_INITD(descriptor_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:191
  T19 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:191
  T20 = primitive_idQ(T18,T19);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:191
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:192
    T3_0 = descriptor_;
    T17_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:194
    T21 = SLOT_VALUE_INITD(descriptor_, 3);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:195
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:196
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
      T22 = SLOT_VALUE_INITD(iclass_, 8);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
      T23 = SLOT_VALUE_INITD(iclass_, 9);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
      T25 = primitive_cast_integer_as_raw(T23);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
      super_i_T = T25;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
        super_i_ = super_i_T;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
        T26 = primitive_cast_raw_as_integer(super_i_);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
        T24 = primitive_machine_word_less_thanQ(super_i_,1);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
        if (T24 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
          T27 = KelementVKdMM11I(T22, T26, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
          cF7 = T27;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:198
          T28 = primitive_idQ(cF7,T18);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:198
          if (T28 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:198
            T29.vector_element_[0] = descriptor_;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:198
            T30 = MV_SET_REST_AT(&T29, 0);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:198
            T14_0 = T30;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:198
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:200
          T31 = SLOT_VALUE(cF7, 2);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:200
          T32 = SLOT_VALUE_INITD(T31, 19);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
          T33 = SLOT_VALUE_INITD(T32, 0);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
          T34 = primitive_cast_integer_as_raw(T33);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
          T8T = 1;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
            T8 = T8T;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
            T35 = primitive_machine_word_equalQ(T8,T34);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
            if (T35 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
              T36 = REPEATED_D_SLOT_VALUE_TAGGED(T32, 1, T8);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
              d_ = T36;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:201
              T37 = SLOT_VALUE_INITD(d_, 3);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:201
              T10 = KEEVKdI(T37, T21);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:201
              if (T10 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                T38 = SLOT_VALUE_INITD(d_, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                T39 = primitive_cast_integer_as_raw(T38);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                T40 = primitive_machine_word_logbitQ(5,T39);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                if (T40 != &KPfalseVKi) {
                  T11 = T40;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                  T41 = SLOT_VALUE_INITD(d_, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                  T42 = primitive_cast_integer_as_raw(T41);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                  T43 = primitive_machine_word_logbitQ(2,T42);
                  T11 = T43;
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:202
                T12 = T11;
              } else {
                T12 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:201
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:201
              if (T12 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:203
                T44.vector_element_[0] = d_;
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:196
                T45 = MV_SET_REST_AT(&T44, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:196
                T14_0 = T45;
                goto L1;
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:201
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
              T46 = primitive_machine_word_add_signal_overflow(T8,4);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
              T8T = T46;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:199
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
          T47 = primitive_machine_word_add_signal_overflow(super_i_,0xFFFFFFFFFFFFFFFCL);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
          super_i_T = T47;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:197
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:207
      T13 = descriptor_;
      MV_SET_ELT(0, descriptor_);
      MV_SET_COUNT(1);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:196
      T14_0 = T13;
      L1: ;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:196
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:196
      T48_0 = T14_0;
      T16_0 = T48_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:210
      T15_0 = descriptor_;
      T16_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:195
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:191
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:187
  MV_SET_COUNT(1);
  return(T17_0);
}

D Knever_instanceQ_functionVKiI (D x_, D t_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:624
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:625
  T2 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:624
  return(T2);
}

D KLclass_incomplete_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_incomplete_object_) {
  D T6;
  D Uunique_incomplete_objectF7;
  D T8;
  D T9_0;
  D T10;
  _KLsimple_object_vectorGVKd_1 T11 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:458
  T10 = primitive_idQ(Uunique_incomplete_object_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:458
  if (T10 != &KPfalseVKi) {
    T11.vector_element_[0] = &KJobject_;
    T12 = KerrorVKdMM1I(&K110, &T11);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:458
    T6 = T12;
    Uunique_incomplete_objectF7 = T6;
  } else {
    Uunique_incomplete_objectF7 = Uunique_incomplete_object_;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:458
  T8 = primitive_object_allocate_filled(4,&KLclass_incomplete_errorGVKeW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T8, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T8, 1);
  SLOT_VALUE_SETTER(Uunique_incomplete_objectF7, T8, 2);
  APPLY2(&KinitializeVKd, T8, init_args_);
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:458
  MV_SET_COUNT(1);
  return(T9_0);
}

static D Kanonymous_of_augment_iclass_rcpl_position_dataF136I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_augment_iclass_rcpl_position_dataF134I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T5.vector_element_[0] = &K135;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_augment_iclass_rcpl_position_dataF131I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T5.vector_element_[0] = &K132;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:645
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLslot_type_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_type_error_value_, D Uunique_type_error_expected_type_, D Uunique_slot_type_error_slot_descriptor_) {
  D T8;
  D Uunique_slot_type_error_slot_descriptorF9;
  D T10;
  D Uunique_type_error_expected_typeF11;
  D Uunique_type_error_expected_typeF12;
  D Uunique_slot_type_error_slot_descriptorF13;
  D T14_0;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:238
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:238
  T15 = primitive_idQ(Uunique_slot_type_error_slot_descriptor_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:238
  if (T15 != &KPfalseVKi) {
    T16.vector_element_[0] = &KJslot_descriptor_;
    T17 = KerrorVKdMM1I(&K110, &T16);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:238
    T8 = T17;
    Uunique_slot_type_error_slot_descriptorF9 = T8;
  } else {
    Uunique_slot_type_error_slot_descriptorF9 = Uunique_slot_type_error_slot_descriptor_;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:238
  T10 = primitive_object_allocate_filled(6,&KLslot_type_errorGVKeW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T10, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T10, 1);
  SLOT_VALUE_SETTER(Uunique_type_error_value_, T10, 2);
  T18 = primitive_idQ(Uunique_type_error_expected_type_,&KPunboundVKi);
  if (T18 != &KPfalseVKi) {
    Uunique_type_error_expected_typeF12 = Uunique_type_error_expected_type_;
  } else {
    Uunique_type_error_expected_typeF11 = Uunique_type_error_expected_type_;
    Uunique_type_error_expected_typeF12 = Uunique_type_error_expected_typeF11;
  }
  SLOT_VALUE_SETTER(Uunique_type_error_expected_typeF12, T10, 3);
  Uunique_slot_type_error_slot_descriptorF13 = Uunique_slot_type_error_slot_descriptorF9;
  SLOT_VALUE_SETTER(Uunique_slot_type_error_slot_descriptorF13, T10, 4);
  APPLY2(&KinitializeVKd, T10, init_args_);
  T14_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:238
  MV_SET_COUNT(1);
  return(T14_0);
}

D Kgrounded_memberQVKiI (D value_, D collection_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD indexF13T, indexF13;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:981
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:985
  T2 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:987
  T8 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:992
  indexF13T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:992
    indexF13 = indexF13T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:987
    T9 = primitive_machine_word_equalQ(indexF13,T8);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:987
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:988
      T3 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T7 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:989
      T10 = REPEATED_D_SLOT_VALUE_TAGGED(collection_, 1, indexF13);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:989
      T4 = primitive_idQ(T10,value_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:987
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:990
        T5 = &KPtrueVKi;
        MV_SET_ELT(0, &KPtrueVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:992
        T11 = primitive_machine_word_add_signal_overflow(indexF13,4);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:992
        indexF13T = T11;
        goto L0;
        T6 = T12;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:987
      T7 = T6;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:987
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:992
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:981
  return(T7);
}

D KLsubjunctive_class_universeGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:72
  T3 = primitive_object_allocate_filled(3,&KLsubjunctive_class_universeGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  T4 = K181I();
  SLOT_VALUE_SETTER(T4, T3, 0);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 1);
  KinitializeVKdMM19I(T3, init_args_);
  T5_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:72
  MV_SET_COUNT(1);
  return(T5_0);
}

static D K181I () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:87
  T0_0 = Dempty_scu_nodeVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:87
  MV_SET_COUNT(1);
  return(T0_0);
}

D KinitializeVKdMM19I (D scu_, D Urest_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:77
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:78
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_initializeF179, 1, scu_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:78
  SLOT_VALUE_SETTER(T3, scu_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:78
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:77
  return(T4);
}

static D Kanonymous_of_initializeF179I (D c_) {
  D T2;
  D Utmp_;
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:78
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
  T7 = primitive_idQ(CREF(0),Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
  if (T7 != &KPfalseVKi) {
    Utmp_ = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
    T2 = Kscu_entryQVKeI(c_, CREF(0));
    Utmp_ = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
    T6 = Utmp_;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
    T4_0 = T6;
    T5_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
    T8 = SLOT_VALUE(c_, 2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
    T9_0 = T8;
    T5_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:78
  MV_SET_COUNT(1);
  return(T5_0);
}

static D K204I () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:73
  T0_0 = Dempty_scu_nodeVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:73
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kslots_have_fixed_offsetsQ_bit_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(24,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(24,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kslots_have_fixed_offsetsQ_computedQ_setterVKiMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(25,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(25,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kiclass_subclasses_fixedQ_setterVKeMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T6 = primitive_machine_word_logbit_set(27,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
    T7 = primitive_machine_word_logbit_clear(27,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kallocate_instance_iVKiI (D iclass_, D init_args_) {
  DWORD i_T, i_;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D repeated_slotQ_;
  D repeated_slot_type_;
  D repeated_size_;
  D fillF7;
  D T8_0;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  DWORD T18;
  D T19_0;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27_0;
  D T28;
  D T29_0;
  D T30;
  DWORD T31;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:434
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:436
  T9 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  T10 = SLOT_VALUE_INITD(iclass_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  T12 = primitive_machine_word_logbitQ(26,T11);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  if (T12 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:440
    Kclass_not_instantiableVKiI(iclass_);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
  T13 = SLOT_VALUE_INITD(iclass_, 20);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
  T14 = SLOT_VALUE_INITD(T13, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
  T15 = primitive_cast_integer_as_raw(T14);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
    T17 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
    T16 = primitive_machine_word_less_thanQ(i_,T15);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:443
      Kfind_or_create_class_slot_storageVKiI(iclass_, T17, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
      T18 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
      i_T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:442
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:448
  T3_0 = Kallocation_attributesVKiMM0I(iclass_, init_args_);
  T3_1 = MV_GET_ELT(1);
  T3_2 = MV_GET_ELT(2);
  T3_3 = MV_GET_ELT(3);
  T3_4 = MV_GET_ELT(4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  repeated_slotQ_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  repeated_slot_type_ = T3_2;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  repeated_size_ = T3_3;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:437
  fillF7 = T3_4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:450
  if (repeated_slotQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:451
    ENGINE_NODE_CALL_PROLOG(&Ksystem_allocate_repeated_instanceVKe, &K313, 5);
    T19_0 = ENGINE_NODE_CALL5(&K313, T9, repeated_slot_type_, &KPunboundVKi, repeated_size_, fillF7);
    T8_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T22 = SLOT_VALUE_INITD(iclass_, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T23 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T24 = primitive_machine_word_logand(T23,262140);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T25 = primitive_machine_word_add_signal_overflow(5,T24);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T26 = primitive_machine_word_shift_right(T25,2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T28 = SLOT_VALUE_INITD(iclass_, 2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T29_0 = T28;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T27_0 = T29_0;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T30 = T27_0;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T31 = primitive_machine_word_shift_right(T24,2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T20 = primitive_object_allocate_filled(T26,T30,T31,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:454
    T21 = T20;
    MV_SET_ELT(0, T20);
    MV_SET_COUNT(1);
    T8_0 = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:450
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:434
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kclass_not_instantiableVKiI (D ic_) {
  D T1;
  D T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  _KLsimple_object_vectorGVKd_1 T7 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T8;
  D T9;
  DWORD T10;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:419
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:420
  T3 = SLOT_VALUE_INITD(ic_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:421
  T4 = SLOT_VALUE_INITD(ic_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:421
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:421
  T6 = primitive_machine_word_logbitQ(18,T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:421
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:422
    T7.vector_element_[0] = T3;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:422
    T8 = KerrorVKdMM1I(&K314, &T7);
    T2 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:423
    T9 = SLOT_VALUE_INITD(ic_, 0);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:423
    T10 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:423
    T11 = primitive_machine_word_logbitQ(22,T10);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:421
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:429
      T14.vector_element_[0] = T3;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:429
      T15 = KerrorVKdMM1I(&K315, &T14);
      T1 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:425
      T12.vector_element_[0] = T3;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:425
      T13 = KerrorVKdMM1I(&K316, &T12);
      T1 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:421
    T2 = T1;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:421
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:419
  MV_SET_COUNT(0);
  return(T2);
}

D Kget_class_instanceQ_countsVKeI (D classes_) {
  D T1_0;
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:883
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:885
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T2 = CONGRUENT_CALL1(classes_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:885
  T3 = CALL3(&Kmap_as_oneVKi, T2, &K357, classes_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:885
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:883
  T1_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:883
  MV_SET_COUNT(1);
  return(T1_0);
}

static D Kclass_instanceQ_countF362I (D c_) {
  D T2_0;

  T2_0 = (D) 1;
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kaugment_rcpl_position_data_kludgeyVKiI (D data_) {
  D T1;
  D c_;
  D p_;
  DWORD T4;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD iF12T, iF12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:756
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:757
  T1 = SLOT_VALUE_INITD(data_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:759
  T4 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:763
  iF12T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:763
    iF12 = iF12T;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:759
    T14 = primitive_cast_raw_as_integer(iF12);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:759
    T5 = primitive_machine_word_less_thanQ(iF12,T4);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:759
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:760
      T6 = KelementVKdMM11I(data_, T14, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:760
      c_ = T6;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:761
      T7 = primitive_machine_word_add_signal_overflow(iF12,4);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:761
      T8 = primitive_cast_raw_as_integer(T7);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:761
      T9 = KelementVKdMM11I(data_, T8, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:761
      p_ = T9;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:762
      T10 = SLOT_VALUE(c_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:762
      Kaugment_iclass_rcpl_position_dataVKiI(T10, p_);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:763
      T11 = primitive_machine_word_add_signal_overflow(iF12,8);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:763
      iF12T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:759
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:763
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:766
  T13 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:756
  MV_SET_COUNT(0);
  return(T13);
}

D Kaugment_rcpl_position_data_multipleVKiI (D cls_, D positions_) {
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
  D T29_0;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D p_;
  DWORD T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46_0;
  D T47;
  D T48;
  DWORD T49;
  D T50;
  DWORD iF51T, iF51;
  DWORD nF52T, nF52;
  D T53;
  DWORD T54;
  DWORD T55;
  D T56;
  D T57;
  DWORD T58;
  D T59;
  D T60;
  D T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  D T65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70;
  D olde_;
  D newe_;
  D T73;
  DWORD T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79;
  D T80;
  D T81;
  DWORD T82;
  D T83;
  DWORD T84;
  DWORD T85;
  D T86;
  DWORD pidxF87;
  DWORD nidxF88;
  DWORD oidxF89;
  D T90;
  D T91;
  D T92;
  D T93;
  DWORD T94;
  D T95;
  DWORD T96;
  DWORD T97;
  D T98;
  DWORD pidxF99;
  DWORD nidxF100;
  DWORD oidxF101;
  D T102;
  D T103;
  DWORD T104;
  DWORD T105;
  D T106;
  D T107;
  DWORD T108;
  D T109;
  DWORD pidxF110;
  DWORD nidxF111;
  DWORD oidxF112;
  D T113;
  DWORD T114;
  D T115;
  DWORD T116;
  DWORD T117;
  D T118;
  DWORD pidxF119;
  DWORD nidxF120;
  DWORD oidxF121;
  D T122;
  DWORD T123;
  D T124;
  D T125;
  DWORD T126;
  DWORD T127;
  DWORD T128;
  D T129;
  DWORD pidxF130T, pidxF130;
  DWORD nidxF131T, nidxF131;
  DWORD oidxF132T, oidxF132;
  D T133;
  D T134;
  D T135;
  D res_;
  D T137;
  D T138;
  D T139;
  D T140;
  D T141;
  D T142;
  D T143_0;
  D T144;
  D T145;
  D T146;
  D T147;
  _KLsimple_object_vectorGVKd_2 T148 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T149;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:695
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T10 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T11 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T12 = primitive_idQ(T11,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T13 = primitive_not(T12);
    T9 = T13;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T15_0 = KmemberQVKdMM3I(&KJlock_, T14, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T16 = T15_0;
    T17 = T16;
  } else {
    T17 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T18 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    CALL1(T18, &Kanonymous_of_augment_rcpl_position_data_multipleF383);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T7 = primitive_wait_for_simple_lock(Dclass_bashing_lockVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T20 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T21 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T22 = primitive_idQ(T21,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T23 = primitive_not(T22);
    T19 = T23;
  } else {
    T19 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T25_0 = KmemberQVKdMM3I(&KJlock_, T24, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T26 = T25_0;
    T27 = T26;
  } else {
    T27 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T28 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T8 = MAKE_CLOSURE_INITD(&Kanonymous_of_augment_rcpl_position_data_multipleF384, 1, T7);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    CALL1(T28, T8);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T30 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T30 != &KPfalseVKi) {
    T34 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T31 = primitive_idQ(T7,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    if (T31 != &KPfalseVKi) {
      T33 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T29_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, T7);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T32 = T29_0;
      T33 = T32;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T34 = T33;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:700
      T35 = SLOT_VALUE_INITD(positions_, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:706
      T55 = primitive_cast_integer_as_raw(T35);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
      iF51T = T55;
      nF52T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
        iF51 = iF51T;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:706
        T56 = primitive_cast_raw_as_integer(iF51);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
        nF52 = nF52T;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:703
        T38 = primitive_idQ(T56,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:703
        if (T38 != &KPfalseVKi) {
          T54 = nF52;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:706
          T39 = primitive_machine_word_subtract_signal_overflow(iF51,4);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:707
          T40 = REPEATED_D_SLOT_VALUE_TAGGED(positions_, 1, T39);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:707
          p_ = T40;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          T41 = SLOT_VALUE(cls_, 2);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          T42 = SLOT_VALUE_INITD(T41, 9);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          T43 = primitive_idQ(p_,T42);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          if (T43 != &KPfalseVKi) {
            T48 = T43;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
            T44 = SLOT_VALUE(cls_, 2);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
            T45 = SLOT_VALUE_INITD(T44, 10);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
            T46_0 = KmemberQVKdMM2I(p_, T45, &KPempty_vectorVKi, &KEEVKd);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
            T47 = T46_0;
            T48 = T47;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          if (T48 != &KPfalseVKi) {
            T37 = nF52;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
            T49 = primitive_machine_word_add_signal_overflow(nF52,4);
            T37 = T49;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
          iF51T = T39;
          nF52T = T37;
          goto L0;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:711
          T53 = T50;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:714
          T58 = primitive_cast_integer_as_raw(T53);
          T54 = T58;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:703
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:708
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:714
      T57 = primitive_machine_word_less_thanQ(1,T54);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:714
      if (T57 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:715
        T59 = SLOT_VALUE(cls_, 2);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:715
        T60 = SLOT_VALUE_INITD(T59, 10);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:716
        T61 = SLOT_VALUE_INITD(T60, 0);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:717
        T62 = primitive_cast_integer_as_raw(T61);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:717
        T63 = primitive_machine_word_logxor(T54,1);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:717
        T64 = primitive_machine_word_add_signal_overflow(T62,T63);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:717
        T65 = primitive_cast_raw_as_integer(T64);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:718
        T66 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T65);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:719
        T67 = SLOT_VALUE(cls_, 2);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:719
        T68 = SLOT_VALUE_INITD(T67, 9);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
        pidxF130T = 1;
        nidxF131T = 1;
        oidxF132T = 1;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
          pidxF130 = pidxF130T;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
          nidxF131 = nidxF131T;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
          oidxF132 = oidxF132T;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:742
          pidxF119 = pidxF130;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:742
          nidxF120 = nidxF131;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:742
          oidxF121 = oidxF132;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:739
          pidxF110 = pidxF119;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:739
          nidxF111 = nidxF120;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:739
          oidxF112 = oidxF121;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:733
          pidxF99 = pidxF110;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:733
          nidxF100 = nidxF111;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:733
          oidxF101 = oidxF112;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
          pidxF87 = pidxF99;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
          T134 = primitive_cast_raw_as_integer(pidxF87);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
          nidxF88 = nidxF100;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
          T133 = primitive_cast_raw_as_integer(nidxF88);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
          oidxF89 = oidxF101;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:733
          T135 = primitive_cast_raw_as_integer(oidxF89);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:721
          T78 = primitive_idQ(T135,T61);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:721
          if (T78 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:722
            T79 = primitive_idQ(T134,T35);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:722
            if (T79 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:726
              primitive_synchronize_side_effects();
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:727
              T90 = SLOT_VALUE(cls_, 2);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:727
              SLOT_VALUE_SETTER(T66, T90, 10);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:728
              primitive_synchronize_side_effects();
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:729
              T69 = Kinitialize_class_instanceQ_iepVKiI(cls_);
              T70 = T69;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
              T80 = KelementVKdMM11I(positions_, T134, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
              T81 = SLOT_VALUE_INITD(T66, 0);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
              T82 = primitive_cast_integer_as_raw(T81);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
              T83 = primitive_machine_word_unsigned_less_thanQ(nidxF88,T82);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
              if (T83 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
                REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T80, T66, 1, nidxF88);
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
                Kelement_range_errorVKeI(T66, T133);
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:723
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
              T84 = primitive_machine_word_add_signal_overflow(pidxF87,4);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
              T85 = primitive_machine_word_add_signal_overflow(nidxF88,4);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
              pidxF130T = T84;
              nidxF131T = T85;
              oidxF132T = oidxF101;
              goto L1;
              T70 = T86;
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:722
            T77 = T70;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:731
            T91 = primitive_idQ(T134,T35);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:721
            if (T91 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
              T92 = KelementVKdMM11I(T60, T135, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
              T93 = SLOT_VALUE_INITD(T66, 0);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
              T94 = primitive_cast_integer_as_raw(T93);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
              T95 = primitive_machine_word_unsigned_less_thanQ(nidxF88,T94);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
              if (T95 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
                REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T92, T66, 1, nidxF88);
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
                Kelement_range_errorVKeI(T66, T133);
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:732
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:733
              T96 = primitive_machine_word_add_signal_overflow(nidxF88,4);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:733
              T97 = primitive_machine_word_add_signal_overflow(oidxF89,4);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:733
              pidxF130T = pidxF87;
              nidxF131T = T96;
              oidxF132T = T97;
              goto L1;
              T76 = T98;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:735
              T102 = KelementVKdMM11I(T60, T135, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:735
              olde_ = T102;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:736
              T103 = KelementVKdMM11I(positions_, T134, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:736
              newe_ = T103;
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:737
              T104 = primitive_cast_integer_as_raw(newe_);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:737
              T105 = primitive_cast_integer_as_raw(olde_);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:737
              T106 = primitive_machine_word_less_thanQ(T104,T105);
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:737
              if (T106 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:738
                T107 = primitive_idQ(newe_,T68);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:738
                if (T107 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:739
                  T108 = primitive_machine_word_add_signal_overflow(pidxF87,4);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:739
                  pidxF130T = T108;
                  nidxF131T = nidxF88;
                  oidxF132T = oidxF89;
                  goto L1;
                  T73 = T109;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:741
                  T113 = SLOT_VALUE_INITD(T66, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:741
                  T114 = primitive_cast_integer_as_raw(T113);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:741
                  T115 = primitive_machine_word_unsigned_less_thanQ(nidxF88,T114);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:741
                  if (T115 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:741
                    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(newe_, T66, 1, nidxF88);
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class.dylan:741
                    Kelement_range_errorVKeI(T66, T133);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:741
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:742
                  T116 = primitive_machine_word_add_signal_overflow(pidxF87,4);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:742
                  T117 = primitive_machine_word_add_signal_overflow(nidxF88,4);
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:742
                  pidxF130T = T116;
                  nidxF131T = T117;
                  oidxF132T = oidxF89;
                  goto L1;
                  T73 = T118;
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:738
                T75 = T73;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:745
                T122 = SLOT_VALUE_INITD(T66, 0);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:745
                T123 = primitive_cast_integer_as_raw(T122);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:745
                T124 = primitive_machine_word_unsigned_less_thanQ(nidxF88,T123);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:745
                if (T124 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:745
                  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(olde_, T66, 1, nidxF88);
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:745
                  Kelement_range_errorVKeI(T66, T133);
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:745
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
                T125 = primitive_idQ(olde_,newe_);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
                if (T125 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
                  T126 = primitive_machine_word_add_signal_overflow(pidxF87,4);
                  T74 = T126;
                } else {
                  T74 = pidxF87;
                }
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
                T127 = primitive_machine_word_add_signal_overflow(nidxF88,4);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
                T128 = primitive_machine_word_add_signal_overflow(oidxF89,4);
                // /opt/opendylan-2013.1/sources/dylan/class.dylan:746
                pidxF130T = T74;
                nidxF131T = T127;
                oidxF132T = T128;
                goto L1;
                T75 = T129;
              }
              // /opt/opendylan-2013.1/sources/dylan/class.dylan:737
              T76 = T75;
            }
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:721
            T77 = T76;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:721
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:724
        T4 = T77;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:714
        T3 = &KPfalseVKi;
        T4 = T3;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:714
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      FALL_THROUGH_UNWIND(T4);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T138 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    if (T138 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T139 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T140 = primitive_idQ(T139,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T141 = primitive_not(T140);
      T137 = T141;
    } else {
      T137 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    if (T137 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T142 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T143_0 = KmemberQVKdMM3I(&KJlock_, T142, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T144 = T143_0;
      T145 = T144;
    } else {
      T145 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    if (T145 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      T146 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      CALL1(T146, &Kanonymous_of_augment_rcpl_position_data_multipleF382);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    res_ = primitive_release_simple_lock(Dclass_bashing_lockVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T147 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    if (T147 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
      Klock_release_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    CONTINUE_UNWIND();
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T148.vector_element_[0] = &KJsynchronization_;
    T148.vector_element_[1] = Dclass_bashing_lockVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T148);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T149 = KsignalVKdMM0I(T5, &KPempty_vectorVKi);
    T6 = T149;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:695
  MV_SET_COUNT(0);
  return(T6);
}

static D Kanonymous_of_augment_rcpl_position_data_multipleF384I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_augment_rcpl_position_data_multipleF383I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T5.vector_element_[0] = &K135;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_augment_rcpl_position_data_multipleF382I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T5.vector_element_[0] = &K132;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:698
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kscu_entryVKeI (D c_, D scu_) {
  D T2;
  D Utmp_;
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:105
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:107
  T7 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:107
  if (T7 != &KPfalseVKi) {
    Utmp_ = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:107
    T2 = Kscu_entryQVKeI(c_, scu_);
    Utmp_ = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:107
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:79
    T6 = Utmp_;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:107
    T4_0 = T6;
    T5_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:109
    T8 = SLOT_VALUE(c_, 2);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:109
    T9_0 = T8;
    T5_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:105
  MV_SET_COUNT(1);
  return(T5_0);
}

D KLscu_nodeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_scu_node_next_, D Uunique_scu_node_class_, D Uunique_scu_node_iclass_) {
  D T6;
  D Uunique_scu_node_nextF7;
  D Uunique_scu_node_nextF8;
  D Uunique_scu_node_classF9;
  D Uunique_scu_node_classF10;
  D Uunique_scu_node_iclassF11;
  D Uunique_scu_node_iclassF12;
  D T13_0;
  D T14;
  D T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:62
  T6 = primitive_object_allocate_filled(5,&KLscu_nodeGVKiW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  T14 = primitive_idQ(Uunique_scu_node_next_,&KPunboundVKi);
  if (T14 != &KPfalseVKi) {
    Uunique_scu_node_nextF8 = Uunique_scu_node_next_;
  } else {
    Uunique_scu_node_nextF7 = Uunique_scu_node_next_;
    Uunique_scu_node_nextF8 = Uunique_scu_node_nextF7;
  }
  SLOT_VALUE_SETTER(Uunique_scu_node_nextF8, T6, 0);
  T15 = primitive_idQ(Uunique_scu_node_class_,&KPunboundVKi);
  if (T15 != &KPfalseVKi) {
    Uunique_scu_node_classF10 = Uunique_scu_node_class_;
  } else {
    Uunique_scu_node_classF9 = Uunique_scu_node_class_;
    Uunique_scu_node_classF10 = Uunique_scu_node_classF9;
  }
  SLOT_VALUE_SETTER(Uunique_scu_node_classF10, T6, 1);
  T16 = primitive_idQ(Uunique_scu_node_iclass_,&KPunboundVKi);
  if (T16 != &KPfalseVKi) {
    Uunique_scu_node_iclassF12 = Uunique_scu_node_iclass_;
  } else {
    Uunique_scu_node_iclassF11 = Uunique_scu_node_iclass_;
    Uunique_scu_node_iclassF12 = Uunique_scu_node_iclassF11;
  }
  SLOT_VALUE_SETTER(Uunique_scu_node_iclassF12, T6, 2);
  SLOT_VALUE_SETTER(&KPfalseVKi, T6, 3);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T13_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:62
  MV_SET_COUNT(1);
  return(T13_0);
}

D KmakeVKdMM50I (D class_, D keys_, D value_, D type_, D slot_descriptor_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12;
  D T13;
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:243
  T13 = primitive_copy_vector(keys_);
  T11 = primitive_next_methods_parameter();
  T12 = MAKE_CLOSURE_INITD(&Kanonymous_of_makeF518, 3, T13, T11, class_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:249
  T6 = CALL1(&Kinit_keywordVKe, slot_descriptor_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:250
  T7 = CALL1(&Kslot_ownerVKe, slot_descriptor_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:252
  T8 = CALL1(&Kslot_typeVKe, slot_descriptor_);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:249
  T14.vector_element_[0] = T6;
  T14.vector_element_[1] = T7;
  T14.vector_element_[2] = value_;
  T14.vector_element_[3] = T8;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:249
  T9 = KlistVKdI(&T14);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:246
  T15_0 = APPLY6(T12, class_, &KJformat_string_, &K517, &KJformat_arguments_, T9, T13);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:243
  T10_0 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:243
  MV_SET_COUNT(1);
  return(T10_0);
}

static D Kanonymous_of_makeF518I (D Unext_method_argsU_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  CAPTURE_ENVIRONMENT

  T6 = primitive_idQ(CREF(1),&KPempty_listVKi);
  if (T6 != &KPfalseVKi) {
    T14 = KerrorVKdMM1I(&K284, &KPempty_vectorVKi);
    T5 = T14;
  } else {
    T7 = SLOT_VALUE_INITD(Unext_method_argsU_, 0);
    T8 = primitive_cast_integer_as_raw(T7);
    T9 = primitive_machine_word_equalQ(T8,1);
    if (T9 != &KPfalseVKi) {
      T10 = SLOT_VALUE_INITD(CREF(1), 0);
      T11 = SLOT_VALUE_INITD(CREF(1), 1);
      MEP_CALL_PROLOG(T10, T11, 2);
      T2 = MEP_CALL2(T10, CREF(2), CREF(0));
      T4 = T2;
    } else {
      T12 = SLOT_VALUE_INITD(CREF(1), 0);
      T13 = SLOT_VALUE_INITD(CREF(1), 1);
      T3 = MEP_APPLY1(T12, T13, Unext_method_argsU_);
      T4 = T3;
    }
    T5 = T4;
  }
  return(T5);
}

D Kiclass_type_completeQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(21,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kiclass_instantiableQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(26,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kiclass_subclasses_fixedQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T2 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T4 = primitive_machine_word_logbitQ(27,T3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:21
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kaugment_class_known_jointVKiMM0I (D c1_, D vec_) {
  D T3;
  DWORD T4T, T4;
  D c2_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D new_;
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
  D T24_0;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34_0;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  DWORD T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  DWORD T56;
  D T57;
  _KLsimple_object_vectorGVKd_1 T58 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T59_0;
  D T60;
  D T61_0;
  D T62;
  D res_;
  D T64;
  D T65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70_0;
  D T71;
  D T72;
  D T73;
  D T74;
  _KLsimple_object_vectorGVKd_2 T75 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T76;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:962
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T19 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T20 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T21 = primitive_idQ(T20,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T22 = primitive_not(T21);
    T18 = T22;
  } else {
    T18 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T23 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T24_0 = KmemberQVKdMM3I(&KJlock_, T23, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T25 = T24_0;
    T26 = T25;
  } else {
    T26 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T27 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    CALL1(T27, &Kanonymous_of_augment_class_known_jointF545);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T16 = primitive_wait_for_simple_lock(Dclass_bashing_lockVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T29 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T30 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T31 = primitive_idQ(T30,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T32 = primitive_not(T31);
    T28 = T32;
  } else {
    T28 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T33 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T34_0 = KmemberQVKdMM3I(&KJlock_, T33, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T35 = T34_0;
    T36 = T35;
  } else {
    T36 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T36 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T37 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T17 = MAKE_CLOSURE_INITD(&Kanonymous_of_augment_class_known_jointF546, 1, T16);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    CALL1(T37, T17);
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T39 = primitive_idQ(T16,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T39 != &KPfalseVKi) {
    T43 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T40 = primitive_idQ(T16,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    if (T40 != &KPfalseVKi) {
      T42 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T38_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, T16);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T41 = T38_0;
      T42 = T41;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T43 = T42;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T43 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    ENTER_UNWIND_FRAME(T3);
    if (!nlx_setjmp(FRAME_DEST(T3))) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:964
      new_ = &KPempty_listVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:965
      T44 = SLOT_VALUE(c1_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:966
      T45 = SLOT_VALUE_INITD(T44, 11);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
      T46 = SLOT_VALUE_INITD(vec_, 0);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
      T47 = primitive_cast_integer_as_raw(T46);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
      T4T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
        T4 = T4T;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
        T48 = primitive_machine_word_equalQ(T4,T47);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
        if (T48 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
          T49 = REPEATED_D_SLOT_VALUE_TAGGED(vec_, 1, T4);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
          c2_ = T49;
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:968
          T50 = SLOT_VALUE(c2_, 2);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
          T51 = SLOT_VALUE_INITD(T50, 11);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
          T52 = KmemberQVKdMM2I(c1_, T51, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
          if (T52 != &KPfalseVKi) {
            T6 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
            T53 = KmemberQVKdMM2I(c2_, T45, &KPempty_vectorVKi, &KEEVKd);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
            T54 = primitive_not(T53);
            T6 = T54;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
          if (T6 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:970
            T15 = new_;
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:970
            T55 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:970
            SLOT_VALUE_SETTER(c2_, T55, 0);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:970
            SLOT_VALUE_SETTER(T15, T55, 1);
            // /opt/opendylan-2013.1/sources/dylan/class.dylan:970
            new_ = T55;
          }
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:969
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
          T56 = primitive_machine_word_add_signal_overflow(T4,4);
          // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
          T4T = T56;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:967
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:973
      T14 = new_;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:973
      T57 = primitive_idQ(T14,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:973
      if (T57 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:973
        T8 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T9 = T8;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        T13 = new_;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        T58.vector_element_[0] = T13;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        T61_0 = Kobject_classVKdI(T45);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        T62 = T61_0;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        T59_0 = APPLY3(&Kconcatenate_asVKd, T62, T45, &T58);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        T60 = T59_0;
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        CONGRUENT_CALL_PROLOG(&Kclass_known_joint_setterVKe, 2);
        CONGRUENT_CALL2(T60, T44);
        // /opt/opendylan-2013.1/sources/dylan/class.dylan:974
        T7 = T60;
        MV_SET_ELT(0, T60);
        MV_SET_COUNT(1);
        T9 = T7;
      }
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:973
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      FALL_THROUGH_UNWIND(T9);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T65 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    if (T65 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T66 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T67 = primitive_idQ(T66,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T68 = primitive_not(T67);
      T64 = T68;
    } else {
      T64 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    if (T64 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T69 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T70_0 = KmemberQVKdMM3I(&KJlock_, T69, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T71 = T70_0;
      T72 = T71;
    } else {
      T72 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    if (T72 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      T73 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      CALL1(T73, &Kanonymous_of_augment_class_known_jointF544);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    res_ = primitive_release_simple_lock(Dclass_bashing_lockVKi);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T74 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    if (T74 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
      Klock_release_result_errorYthreads_internalVdylanMM0I(Dclass_bashing_lockVKi, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    CONTINUE_UNWIND();
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T75.vector_element_[0] = &KJsynchronization_;
    T75.vector_element_[1] = Dclass_bashing_lockVKi;
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T10 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T75);
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T76 = KsignalVKdMM0I(T10, &KPempty_vectorVKi);
    T11 = T76;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:962
  return(T11);
}

static D Kanonymous_of_augment_class_known_jointF546I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T5.vector_element_[0] = &K137;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_augment_class_known_jointF545I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T5.vector_element_[0] = &K135;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_augment_class_known_jointF544I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T5.vector_element_[0] = &K132;
  T5.vector_element_[1] = Dclass_bashing_lockVKi;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:963
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_class_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJiclass_type_completeQ_);
    if (T0 != &KJiclass_type_completeQ_) {
      primitive_repeated_slot_value_setter(T0, &K304, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K289, 1, 8);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJclass_completeQ_);
    if (T0 != &KJclass_completeQ_) {
      primitive_repeated_slot_value_setter(T0, &K304, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K289, 1, 10);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJincrementalQ_);
    if (T0 != &KJincrementalQ_) {
      primitive_repeated_slot_value_setter(T0, &K304, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K289, 1, 12);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJslots_have_fixed_offsetsQ_);
    if (T0 != &KJslots_have_fixed_offsetsQ_) {
      primitive_repeated_slot_value_setter(T0, &K304, 1, 7);
      primitive_repeated_slot_value_setter(T0, &K289, 1, 14);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJslots_have_fixed_offsetsQ_computedQ_);
    if (T0 != &KJslots_have_fixed_offsetsQ_computedQ_) {
      primitive_repeated_slot_value_setter(T0, &K304, 1, 8);
      primitive_repeated_slot_value_setter(T0, &K289, 1, 16);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJiclass_instantiableQ_);
    if (T0 != &KJiclass_instantiableQ_) {
      primitive_repeated_slot_value_setter(T0, &K304, 1, 9);
      primitive_repeated_slot_value_setter(T0, &K289, 1, 18);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJiclass_subclasses_fixedQ_);
    if (T0 != &KJiclass_subclasses_fixedQ_) {
      primitive_repeated_slot_value_setter(T0, &K304, 1, 10);
      primitive_repeated_slot_value_setter(T0, &K289, 1, 20);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_class_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:69
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLscu_nodeGVKi, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:69
  Dempty_scu_nodeVKi = T0;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:69
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T1;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:301
  T3_0 = KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLrecursive_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:301
  T2 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:301
  Dslot_initial_data_lockVKi = T2;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:301
  T1 = &KPfalseVKi;
  goto I4;
}
I4:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/class.dylan:630
  T0 = Kmake_simple_lockYthreads_primitivesVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:629
  Dclass_bashing_lockVKi = T0;
  // /opt/opendylan-2013.1/sources/dylan/class.dylan:629
  T1 = &KPfalseVKi;
  goto I5;
}
I5:

  return;
}


/* eof */
