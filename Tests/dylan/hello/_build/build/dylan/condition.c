#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(64);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(0);

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
  D symbol_name_;
} _KLsymbolGVKd;

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
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLbottom_typeGVKe;

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
  D incomplete_object_;
} _KLobject_incompleteGVKe;

typedef struct {
  D wrapper;
  D incomplete_object_;
} _KLincomplete_errorGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
} _KLrestartGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D ambiguous_methods_generic_;
  D ambiguous_methods_ordered_;
  D ambiguous_methods_ambiguous_;
  D ambiguous_methods_arguments_;
} _KLambiguous_methodsGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsealed_class_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D incomplete_object_;
} _KLclass_incomplete_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D sealed_generic_function_error_generic_;
  D sealed_generic_function_error_operation_;
  D sealed_generic_function_error_arguments_;
} _KLsealed_generic_function_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D incomplete_object_;
  D incomplete_types_;
} _KLfunction_type_incomplete_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_restartGVKd;

typedef struct {
  D wrapper;
} _KLkeyboard_interruptGVKe;

typedef struct {
  D wrapper;
  D failing_allocation_class_;
  D failing_allocation_size_;
} _KLout_of_memory_conditionGVKe;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D ambiguous_methods_generic_;
  D ambiguous_methods_ordered_;
  D ambiguous_methods_ambiguous_;
  D ambiguous_methods_arguments_;
} _KLambiguous_methods_errorGVKg;

typedef struct {
  D wrapper;
} _KLconditional_update_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D lock_;
} _KLlock_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLsynchronization_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLthread_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
} _KLslot_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLarithmetic_errorGVKe;

typedef struct {
  D wrapper;
} _KLsealed_object_errorGVKd;

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
} _KLlibrary_version_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLdispatch_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLstack_overflow_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimmutable_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLassert_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinconsistent_precedence_class_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_slot_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLincompatible_range_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinfinite_range_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimproper_list_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLcapacity_size_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLnatural_number_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLempty_collection_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLiteration_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLnot_found_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLkey_test_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D ambiguous_methods_generic_;
  D ambiguous_methods_ordered_;
  D ambiguous_methods_ambiguous_;
  D ambiguous_methods_arguments_;
} _KLambiguous_methods_warningGVKg;


/* Typedefs for defined classes */

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
} _KLwarningGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_warningGVKd;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
  D handler_type_;
  D handler_function_;
  D handler_test_;
  D handler_init_arguments_;
} _KLhandlerGVKi;


/* Referenced object declarations */

extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
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
extern _KLsymbolGVKd KJinit_arguments_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_33;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_58;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LconditionG_typesVKi;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsealed_generic_functionGVKe KheadVKd;
extern _KLsealed_generic_functionGVKe KtailVKd;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsealed_generic_functionGVKe KinstanceQVKd;
extern _KLsimple_methodGVKe Kdefault_handlerVKdMM2;
extern _KLsimple_methodGVKe Kdefault_handlerVKdMM3;
extern _KLsimple_methodGVKe Kdefault_handlerVKdMM4;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsealed_generic_functionGVKe Kinvoke_debuggerVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lserious_conditionG_typesVKi;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLbottom_typeGVKe KLbottomGVKe;
extern _KLclassGVKd KLbottom_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLbottom_typeGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lsimple_warningG_typesVKi;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lsimple_errorG_typesVKi;
D Kmasked_class_instanceQVKiI (D x_, D c_);
extern _KLclassGVKd KLobject_incompleteGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_incompleteGVKeW;
extern _KLclassGVKd KLincomplete_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLincomplete_errorGVKiW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
D Kinside_debuggerQVKeMM0I ();
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLrestartGVKd;
extern _KLclassGVKd KLambiguous_methodsGVKe;
extern _KLclassGVKd KLsealed_class_errorGVKi;
extern _KLclassGVKd KLclass_incomplete_errorGVKe;
extern _KLclassGVKd KLsealed_generic_function_errorGVKe;
extern _KLclassGVKd KLfunction_type_incomplete_errorGVKe;
extern _KLclassGVKd KLsimple_restartGVKd;
extern _KLclassGVKd KLkeyboard_interruptGVKe;
extern _KLclassGVKd KLout_of_memory_conditionGVKe;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLclassGVKd KLambiguous_methods_errorGVKg;
extern _KLclassGVKd KLconditional_update_errorGYthreadsVdylan;
extern _KLclassGVKd KLlock_errorGYthreads_internalVdylan;
extern _KLclassGVKd KLsynchronization_errorGYthreads_internalVdylan;
extern _KLclassGVKd KLthread_errorGYthreadsVdylan;
extern _KLclassGVKd KLslot_errorGVKi;
extern _KLclassGVKd KLarithmetic_errorGVKe;
extern _KLclassGVKd KLsealed_object_errorGVKd;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLclassGVKd KLlibrary_version_errorGVKi;
extern _KLclassGVKd KLdispatch_errorGVKi;
extern _KLclassGVKd KLstack_overflow_errorGVKe;
extern _KLclassGVKd KLargument_errorGVKi;
extern _KLclassGVKd KLimmutable_errorGVKi;
extern _KLclassGVKd KLassert_errorGVKi;
extern _KLclassGVKd KLinconsistent_precedence_class_errorGVKi;
extern _KLclassGVKd KLsimple_slot_errorGVKi;
extern _KLclassGVKd KLincompatible_range_errorGVKi;
extern _KLclassGVKd KLinfinite_range_errorGVKi;
extern _KLclassGVKd KLimproper_list_errorGVKi;
extern _KLclassGVKd KLcapacity_size_errorGVKi;
extern _KLclassGVKd KLnatural_number_errorGVKi;
extern _KLclassGVKd KLempty_collection_errorGVKi;
extern _KLclassGVKd KLiteration_errorGVKi;
extern _KLclassGVKd KLnot_found_errorGVKe;
extern _KLclassGVKd KLkey_test_errorGVKi;
extern _KLclassGVKd KLambiguous_methods_warningGVKg;

/* Defined object declarations */

D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLsimple_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_errorGVKdW;
extern _KLclassGVKd KLwarningGVKd;
extern _KLmm_wrapperGVKi_0 KLwarningGVKdW;
extern _KLclassGVKd KLsimple_warningGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_warningGVKdW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D KerrorVKdMM0I (D, D);
D KsignalVKdMM1I (D, D);
D KLhandlerGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
D KsignalVKdMM0I (D, D);
extern _KLsealed_generic_functionGVKe KsignalVKd;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_59;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_34;
extern _KLsealed_generic_functionGVKe Khandler_typeVKi;
extern _KLsealed_generic_functionGVKe Khandler_testVKi;
extern _KLsealed_generic_functionGVKe Khandler_functionVKi;
extern _KLsealed_generic_functionGVKe Khandler_init_argumentsVKi;
extern _KLsealed_generic_functionGVKe Kcondition_format_stringVKd;
extern _KLgetter_methodGVKi Kcondition_format_stringVKdMM0;
static _KLpairGVKd K34;
static _KLbyte_stringGVKd_23 K35;
extern _KLgetter_methodGVKi Khandler_init_argumentsVKiMM0;
static _KLpairGVKd K37;
static _KLbyte_stringGVKd_22 K38;
extern _KLinstance_slot_descriptorGVKe Khandler_init_argumentsVKiHLhandlerG;
extern _KLgetter_methodGVKi Khandler_functionVKiMM0;
static _KLpairGVKd K41;
static _KLbyte_stringGVKd_16 K42;
extern _KLinstance_slot_descriptorGVKe Khandler_functionVKiHLhandlerG;
extern _KLgetter_methodGVKi Khandler_testVKiMM0;
static _KLpairGVKd K45;
static _KLbyte_stringGVKd_12 K46;
extern _KLinstance_slot_descriptorGVKe Khandler_testVKiHLhandlerG;
extern _KLgetter_methodGVKi Khandler_typeVKiMM0;
static _KLpairGVKd K49;
static _KLbyte_stringGVKd_12 K50;
extern _KLinstance_slot_descriptorGVKe Khandler_typeVKiHLhandlerG;
static _KLsingletonGVKd K52;
extern _KLsimple_methodGVKe KsignalVKdMM0;
extern _KLsimple_methodGVKe KsignalVKdMM1;
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLsignatureGVKe K57;
static _KLbyte_stringGVKd_6 K58;
static _KLsignatureGVKe K59;
static _KLsignatureGVKe K60;
static _KLsimple_closure_methodGVKi_0 KsearchF64;
static D KsearchF64I (D, D);
static _KLbyte_stringGVKd_64 K63;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_signalF81;
static D Kanonymous_of_signalF81I ();
extern _KLincremental_generic_functionGVKe Kdefault_handlerVKd;
D Khandler_matchesQVKiMM0I (D, D);
extern _KLsimple_methodGVKe Kdefault_handlerVKdMM0;
D Kdefault_handlerVKdMM0I (D);
extern _KLsimple_methodGVKe Kdefault_handlerVKdMM1;
D Kdefault_handlerVKdMM1I (D);
static _KLpairGVKd K73;
static _KLpairGVKd K74;
static _KLpairGVKd K75;
static _KLpairGVKd K76;
static _KLpairGVKd K77;
static _KLsignatureGVKe K78;
static _KLbyte_stringGVKd_15 K79;
static _KLsignatureGVKe K80;
static _KLsignatureGVKe K82;
static _KLsignatureGVKe K83;
static _KLsimple_object_vectorGVKd_2 K84;
extern _KLsimple_methodGVKe KerrorVKdMM0;
extern _KLsimple_methodGVKe KerrorVKdMM1;
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLsignatureAvaluesGVKi K89;
static _KLbyte_stringGVKd_5 K90;
static _KLsimple_object_vectorGVKd_1 K91;
static _KLsignatureAvaluesGVKi K92;
static _KLsignatureAvaluesGVKi K93;
static _KLimplementation_classGVKe K94;
static _KLsimple_object_vectorGVKd_4 K95;
extern _KLkeyword_methodGVKe KLhandlerGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_1 K97;
static _KLsimple_object_vectorGVKd_6 K98;
static _KLkeyword_signatureAvaluesGVKi K99;
static _KLsimple_object_vectorGVKd_8 K100;
static _KLsimple_object_vectorGVKd_4 K101;
static _KLsimple_object_vectorGVKd_1 K102;
static _KLbyte_stringGVKd_9 K103;
static _KLbyte_stringGVKd_20 K104;
extern _KLsealed_generic_functionGVKe Kcondition_format_argumentsVKd;
extern _KLgetter_methodGVKi Kcondition_format_argumentsVKdMM0;
static _KLpairGVKd K107;
static _KLbyte_stringGVKd_26 K108;
static _KLimplementation_classGVKe K109;
static _KLsimple_object_vectorGVKd_6 K110;
static _KLbyte_stringGVKd_11 K111;
static _KLimplementation_classGVKe K112;
static _KLsimple_object_vectorGVKd_2 K113;
extern _KLkeyword_methodGVKe KLsimple_warningGZ32ZconstructorVKiMM0;
D KLsimple_warningGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K116;
static _KLsimple_object_vectorGVKd_6 K117;
static _KLkeyword_signatureAvaluesGVKi K118;
static _KLsimple_object_vectorGVKd_4 K119;
static _KLsimple_object_vectorGVKd_2 K120;
static _KLbyte_stringGVKd_16 K121;
static _KLimplementation_classGVKe K122;
static _KLsimple_object_vectorGVKd_1 K123;
static _KLsimple_object_vectorGVKd_6 K124;
static _KLsimple_object_vectorGVKd_1 K125;
static _KLbyte_stringGVKd_9 K126;
static _KLimplementation_classGVKe K127;
extern _KLkeyword_methodGVKe KLsimple_errorGZ32ZconstructorVKiMM0;
D KLsimple_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K130;
static _KLsimple_object_vectorGVKd_6 K131;
static _KLkeyword_signatureAvaluesGVKi K132;
static _KLbyte_stringGVKd_14 K133;
static _KLimplementation_classGVKe K134;
static _KLsimple_object_vectorGVKd_1 K135;
static _KLsimple_object_vectorGVKd_6 K136;
static _KLsimple_object_vectorGVKd_1 K137;
static _KLsimple_object_vectorGVKd_1 K138;
static _KLbyte_stringGVKd_7 K139;
static _KLimplementation_classGVKe K140;
static _KLsimple_object_vectorGVKd_6 K141;
static _KLbyte_stringGVKd_19 K142;
static _KLimplementation_classGVKe K143;
static _KLsimple_object_vectorGVKd_6 K144;
static _KLsimple_object_vectorGVKd_3 K145;
static _KLsimple_object_vectorGVKd_3 K146;
static _KLbyte_stringGVKd_18 K147;
extern _KLkeyword_methodGVKe Kmake_last_handlerVKi;
D Kmake_last_handlerVKiI (D, D, D, D, D);
static _KLkeyword_signatureGVKe K150;
static _KLsimple_object_vectorGVKd_4 K151;
extern _KLsimple_methodGVKe Kdefault_last_handler_testVKi;
D Kdefault_last_handler_testVKiI (D);
static _KLsignatureAvaluesGVKi K154;
static _KLsimple_object_vectorGVKd_2 K155;
extern _KLkeyword_methodGVKe Kmake_handlerVKi;
D Kmake_handlerVKiI (D type_, D function_, D Urest_, D test_, D init_arguments_);
static _KLsimple_object_vectorGVKd_4 K158;
extern _KLsimple_methodGVKe Kremove_last_handlerVKi;
D Kremove_last_handlerVKiI ();
extern _KLsimple_methodGVKe Kadd_last_handlerVKi;
D Kadd_last_handlerVKiI (D);
static _KLsignatureGVKe K163;
static _KLunionGVKe K164;
static _KLsingletonGVKd K165;
static _KLpairGVKd K166;
static _KLpairGVKd K167;
static _KLpairGVKd K168;
static _KLpairGVKd K169;
static _KLpairGVKd K170;
static _KLpairGVKd K171;
static _KLpairGVKd K172;
static _KLpairGVKd K173;
static _KLpairGVKd K174;
static _KLpairGVKd K175;
static _KLpairGVKd K176;
static _KLpairGVKd K177;
static _KLpairGVKd K178;
static _KLpairGVKd K179;
static _KLpairGVKd K180;
static _KLpairGVKd K181;
static _KLpairGVKd K182;
static _KLpairGVKd K183;
static _KLpairGVKd K184;
static _KLpairGVKd K185;
static _KLpairGVKd K186;
static _KLpairGVKd K187;
static _KLpairGVKd K188;
static _KLpairGVKd K189;
static _KLpairGVKd K190;
static _KLpairGVKd K191;
static _KLpairGVKd K192;
static _KLpairGVKd K193;
static _KLpairGVKd K194;
static _KLpairGVKd K195;
static _KLpairGVKd K196;
static _KLpairGVKd K197;
static _KLpairGVKd K198;
static _KLpairGVKd K199;
static _KLpairGVKd K200;
static _KLpairGVKd K201;
static _KLpairGVKd K202;
static _KLpairGVKd K203;
static _KLpairGVKd K204;
static _KLpairGVKd K205;
static _KLpairGVKd K206;
static _KLpairGVKd K207;
static _KLpairGVKd K208;
static _KLpairGVKd K209;
static _KLpairGVKd K210;
static _KLpairGVKd K211;
static _KLpairGVKd K212;

/* Indirection variables */


/* Variables */

D condition_format_stringVKd = &Kcondition_format_stringVKd;
D condition_format_argumentsVKd = &Kcondition_format_argumentsVKd;
D handler_typeVKi = &Khandler_typeVKi;
D handler_functionVKi = &Khandler_functionVKi;
D handler_testVKi = &Khandler_testVKi;
D handler_init_argumentsVKi = &Khandler_init_argumentsVKi;
D LhandlerGVKi = &KLhandlerGVKi;
D Tcurrent_handlersTVKi = &KPunboundVKi;
D Tlast_handlersTVKi = &KPempty_listVKi;
D Tlast_handlerTVKi = &KPfalseVKi;
D add_last_handlerVKi = &Kadd_last_handlerVKi;
D remove_last_handlerVKi = &Kremove_last_handlerVKi;
D make_handlerVKi = &Kmake_handlerVKi;
D LconditionGVKd = &KLconditionGVKd;
D signalVKd = &KsignalVKd;
D errorVKd = &KerrorVKd;
D default_handlerVKd = &Kdefault_handlerVKd;
D Lsimple_conditionGVKe = &KLsimple_conditionGVKe;
D Lformat_string_conditionGVKe = &KLsimple_conditionGVKe;
D Lserious_conditionGVKd = &KLserious_conditionGVKd;
D LerrorGVKd = &KLerrorGVKd;
D Lsimple_errorGVKd = &KLsimple_errorGVKd;
D LwarningGVKd = &KLwarningGVKd;
D Lsimple_warningGVKd = &KLsimple_warningGVKd;
D default_last_handler_testVKi = &Kdefault_last_handler_testVKi;
D make_last_handlerVKi = &Kmake_last_handlerVKi;

/* Objects */

_KLclassGVKd KLsimple_conditionGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K147,
  &K143,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K143,
  (D) 1,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLserious_conditionGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K142,
  &K140,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLserious_conditionGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K140,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLerrorGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kmasked_class_instanceQVKiI,
  &K139,
  &K134,
  (D) 2049,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLerrorGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K134,
  (D) 2049,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLsimple_errorGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K133,
  &K127,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_errorGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K127,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLwarningGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K126,
  &K122,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLwarningGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K122,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLsimple_warningGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K121,
  &K112,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_warningGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K112,
  (D) 1,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLconditionGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K111,
  &K109,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLconditionGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K109,
  (D) 1,
  1,
  33554439,
  (D) 1
};

_KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_stringVKi,
  &KLsimple_conditionGVKe,
  &KJformat_string_,
  &Kcondition_format_stringVKd,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_vectorVKi,
  &KLsimple_conditionGVKe,
  &KJformat_arguments_,
  &Kcondition_format_argumentsVKd,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLclassGVKd KLhandlerGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K103,
  &K94,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLhandlerGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K94,
  (D) 1,
  17,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe KerrorVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K89,
  (D) 1,
  &K90,
  &K87,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KsignalVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K57,
  (D) 1,
  &K58,
  &K55,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_59 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_58,
  (D) 5,
  &K52
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_34 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_33,
  (D) 5,
  &KLhandlerGVKi
};

_KLsealed_generic_functionGVKe Khandler_typeVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K50,
  &K49,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Khandler_testVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K46,
  &K45,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Khandler_functionVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K42,
  &K41,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Khandler_init_argumentsVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K38,
  &K37,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kcondition_format_stringVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K35,
  &K34,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kcondition_format_stringVKdMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kcondition_format_stringVKdHLsimple_conditionG
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kcondition_format_stringVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "condition-format-string"
};

_KLgetter_methodGVKi Khandler_init_argumentsVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khandler_init_argumentsVKiHLhandlerG
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Khandler_init_argumentsVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "handler-init-arguments"
};

_KLinstance_slot_descriptorGVKe Khandler_init_argumentsVKiHLhandlerG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLhandlerGVKi,
  &KJinit_arguments_,
  &Khandler_init_argumentsVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLgetter_methodGVKi Khandler_functionVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khandler_functionVKiHLhandlerG
};

static _KLpairGVKd K41 = {
  &KLpairGVKdW /* wrapper */,
  &Khandler_functionVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "handler-function"
};

_KLinstance_slot_descriptorGVKe Khandler_functionVKiHLhandlerG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLhandlerGVKi,
  &KJfunction_,
  &Khandler_functionVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLgetter_methodGVKi Khandler_testVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khandler_testVKiHLhandlerG
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Khandler_testVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "handler-test"
};

_KLinstance_slot_descriptorGVKe Khandler_testVKiHLhandlerG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLhandlerGVKi,
  &KJtest_,
  &Khandler_testVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLgetter_methodGVKi Khandler_typeVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Khandler_typeVKiHLhandlerG
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &Khandler_typeVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "handler-type"
};

_KLinstance_slot_descriptorGVKe Khandler_typeVKiHLhandlerG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLhandlerGVKi,
  &KJtype_,
  &Khandler_typeVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

static _KLsingletonGVKd K52 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLhandlerGVKi
};

_KLsimple_methodGVKe KsignalVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K60,
  &KsignalVKdMM0I
};

_KLsimple_methodGVKe KsignalVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K59,
  &KsignalVKdMM1I
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &KsignalVKdMM0,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &KsignalVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K57 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_6 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "signal"
};

static _KLsignatureGVKe K59 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LstringG_typesVKi
};

static _KLsignatureGVKe K60 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LconditionG_typesVKi
};

static _KLsimple_closure_methodGVKi_0 KsearchF64 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K83,
  &KsearchF64I,
  (D) 1
};

static _KLbyte_stringGVKd_64 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 257,
  "Can only supply format arguments when supplying a format string."
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_signalF81 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K82,
  &Kanonymous_of_signalF81I,
  (D) 1
};

_KLincremental_generic_functionGVKe Kdefault_handlerVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K78,
  (D) 1,
  &K79,
  &K73,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kdefault_handlerVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Kdefault_handlerVKdMM0I
};

_KLsimple_methodGVKe Kdefault_handlerVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K80,
  &Kdefault_handlerVKdMM1I
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &Kdefault_handlerVKdMM0,
  &K74
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &Kdefault_handlerVKdMM1,
  &K75
};

static _KLpairGVKd K75 = {
  &KLpairGVKdW /* wrapper */,
  &Kdefault_handlerVKdMM2,
  &K76
};

static _KLpairGVKd K76 = {
  &KLpairGVKdW /* wrapper */,
  &Kdefault_handlerVKdMM3,
  &K77
};

static _KLpairGVKd K77 = {
  &KLpairGVKdW /* wrapper */,
  &Kdefault_handlerVKdMM4,
  &KPempty_listVKi
};

static _KLsignatureGVKe K78 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LconditionG_typesVKi
};

static _KLbyte_stringGVKd_15 K79 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "default-handler"
};

static _KLsignatureGVKe K80 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_Lserious_conditionG_typesVKi
};

static _KLsignatureGVKe K82 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLsignatureGVKe K83 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K84
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KerrorVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K93,
  &KerrorVKdMM0I
};

_KLsimple_methodGVKe KerrorVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K92,
  &KerrorVKdMM1I
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &KerrorVKdMM0,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &KerrorVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K89 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LobjectG_typesVKi,
  &K91
};

static _KLbyte_stringGVKd_5 K90 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "error"
};

static _KLsimple_object_vectorGVKd_1 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbottomGVKe
};

static _KLsignatureAvaluesGVKi K92 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LstringG_typesVKi,
  &K91
};

static _KLsignatureAvaluesGVKi K93 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LconditionG_typesVKi,
  &K91
};

static _KLimplementation_classGVKe K94 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958033,
  &KLhandlerGVKi,
  &KLhandlerGVKiW,
  &KPfalseVKi,
  &K95,
  (D) 6257,
  &KLhandlerGZ32ZconstructorVKiMM0,
  &K97,
  &K98,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K95,
  &K95,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Khandler_typeVKiHLhandlerG,
  &Khandler_functionVKiHLhandlerG,
  &Khandler_testVKiHLhandlerG,
  &Khandler_init_argumentsVKiHLhandlerG
};

_KLkeyword_methodGVKe KLhandlerGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K99,
  &key_mep_2,
  &KLhandlerGZ32ZconstructorVKiMM0I,
  &K100
};

static _KLsimple_object_vectorGVKd_1 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLhandlerGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K99 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K101,
  &KDsignature_LobjectG_typesVKi,
  &K102
};

static _KLsimple_object_vectorGVKd_8 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJtype_,
  &KPunboundVKi,
  &KJfunction_,
  &KPunboundVKi,
  &KJtest_,
  &KPunboundVKi,
  &KJinit_arguments_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_4 K101 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtype_,
  &KJfunction_,
  &KJtest_,
  &KJinit_arguments_
};

static _KLsimple_object_vectorGVKd_1 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLhandlerGVKi
};

static _KLbyte_stringGVKd_9 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "<handler>"
};

static _KLbyte_stringGVKd_20 K104 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "Error may not return"
};

_KLsealed_generic_functionGVKe Kcondition_format_argumentsVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K108,
  &K107,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kcondition_format_argumentsVKdMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

static _KLpairGVKd K107 = {
  &KLpairGVKdW /* wrapper */,
  &Kcondition_format_argumentsVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K108 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "condition-format-arguments"
};

static _KLimplementation_classGVKe K109 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLconditionGVKd,
  &KLconditionGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6265,
  &Kdefault_class_constructorVKi,
  &K97,
  &K110,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K166,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_11 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "<condition>"
};

static _KLimplementation_classGVKe K112 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835785,
  &KLsimple_warningGVKd,
  &KLsimple_warningGVKdW,
  &KPfalseVKi,
  &K113,
  (D) 6313,
  &KLsimple_warningGZ32ZconstructorVKiMM0,
  &K116,
  &K117,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K113,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLsimple_warningGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K118,
  &key_mep_2,
  &KLsimple_warningGZ32ZconstructorVKiMM0I,
  &K119
};

static _KLsimple_object_vectorGVKd_2 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLwarningGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_6 K117 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLwarningGVKd,
  &KLsimple_warningGVKd,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K118 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K120,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsimple_warningG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K119 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLbyte_stringGVKd_16 K121 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<simple-warning>"
};

static _KLimplementation_classGVKe K122 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLwarningGVKd,
  &KLwarningGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6305,
  &Kdefault_class_constructorVKi,
  &K123,
  &K124,
  (D) 9,
  &K125,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K211,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLconditionGVKd
};

static _KLsimple_object_vectorGVKd_6 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLwarningGVKd,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 13
};

static _KLbyte_stringGVKd_9 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "<warning>"
};

static _KLimplementation_classGVKe K127 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835785,
  &KLsimple_errorGVKd,
  &KLsimple_errorGVKdW,
  &KPfalseVKi,
  &K113,
  (D) 6297,
  &KLsimple_errorGZ32ZconstructorVKiMM0,
  &K130,
  &K131,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K194,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K113,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsimple_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K132,
  &key_mep_2,
  &KLsimple_errorGZ32ZconstructorVKiMM0I,
  &K119
};

static _KLsimple_object_vectorGVKd_2 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLerrorGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_6 K131 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd
};

static _KLkeyword_signatureAvaluesGVKi K132 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K120,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsimple_errorG_typesVKi
};

static _KLbyte_stringGVKd_14 K133 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<simple-error>"
};

static _KLimplementation_classGVKe K134 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLerrorGVKd,
  &KLerrorGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6289,
  &Kdefault_class_constructorVKi,
  &K135,
  &K136,
  (D) 13,
  &K137,
  &K138,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K183,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K135 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLserious_conditionGVKd
};

static _KLsimple_object_vectorGVKd_6 K136 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 17
};

static _KLsimple_object_vectorGVKd_1 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_conditionGVKe
};

static _KLbyte_stringGVKd_7 K139 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "<error>"
};

static _KLimplementation_classGVKe K140 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLserious_conditionGVKd,
  &KLserious_conditionGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6281,
  &Kdefault_class_constructorVKi,
  &K123,
  &K141,
  (D) 9,
  &K125,
  &K138,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K179,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K141 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_19 K142 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<serious-condition>"
};

static _KLimplementation_classGVKe K143 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845001,
  &KLsimple_conditionGVKe,
  &KLsimple_conditionGVKeW,
  &KPfalseVKi,
  &K113,
  (D) 6273,
  &Kdefault_class_constructorVKi,
  &K123,
  &K144,
  (D) 9,
  &K145,
  &K146,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K171,
  &KPempty_vectorVKi,
  &K113,
  &K113,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K145 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  (D) 13,
  (D) 17,
  (D) 25
};

static _KLsimple_object_vectorGVKd_3 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobject_incompleteGVKe,
  &KLincomplete_errorGVKi,
  &KLwarningGVKd
};

static _KLbyte_stringGVKd_18 K147 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "<simple-condition>"
};

_KLkeyword_methodGVKe Kmake_last_handlerVKi = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K150,
  &key_mep_5,
  &Kmake_last_handlerVKiI,
  &K151
};

static _KLkeyword_signatureGVKe K150 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302345,
  &KDsignature_LobjectG_typesVKi,
  &K155,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &Kdefault_last_handler_testVKi,
  &KJinit_arguments_,
  &KPfalseVKi
};

_KLsimple_methodGVKe Kdefault_last_handler_testVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K154,
  &Kdefault_last_handler_testVKiI
};

static _KLsignatureAvaluesGVKi K154 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LconditionG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJinit_arguments_
};

_KLkeyword_methodGVKe Kmake_handlerVKi = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K150,
  &key_mep_5,
  &Kmake_handlerVKiI,
  &K158
};

static _KLsimple_object_vectorGVKd_4 K158 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KPfalseVKi,
  &KJinit_arguments_,
  &KPfalseVKi
};

_KLsimple_methodGVKe Kremove_last_handlerVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K82,
  &Kremove_last_handlerVKiI
};

_KLsimple_methodGVKe Kadd_last_handlerVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K163,
  &Kadd_last_handlerVKiI
};

static _KLsignatureGVKe K163 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K102
};

static _KLunionGVKe K164 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K165,
  &KLhandlerGVKi
};

static _KLsingletonGVKd K165 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLpairGVKd K166 = {
  &KLpairGVKdW /* wrapper */,
  &KLobject_incompleteGVKe,
  &K167
};

static _KLpairGVKd K167 = {
  &KLpairGVKdW /* wrapper */,
  &KLrestartGVKd,
  &K168
};

static _KLpairGVKd K168 = {
  &KLpairGVKdW /* wrapper */,
  &KLwarningGVKd,
  &K169
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &KLserious_conditionGVKd,
  &K170
};

static _KLpairGVKd K170 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_conditionGVKe,
  &KPempty_listVKi
};

static _KLpairGVKd K171 = {
  &KLpairGVKdW /* wrapper */,
  &KLambiguous_methodsGVKe,
  &K172
};

static _KLpairGVKd K172 = {
  &KLpairGVKdW /* wrapper */,
  &KLsealed_class_errorGVKi,
  &K173
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &KLclass_incomplete_errorGVKe,
  &K174
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &KLsealed_generic_function_errorGVKe,
  &K175
};

static _KLpairGVKd K175 = {
  &KLpairGVKdW /* wrapper */,
  &KLfunction_type_incomplete_errorGVKe,
  &K176
};

static _KLpairGVKd K176 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_restartGVKd,
  &K177
};

static _KLpairGVKd K177 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_warningGVKd,
  &K178
};

static _KLpairGVKd K178 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_errorGVKd,
  &KPempty_listVKi
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &KLkeyboard_interruptGVKe,
  &K180
};

static _KLpairGVKd K180 = {
  &KLpairGVKdW /* wrapper */,
  &KLout_of_memory_conditionGVKe,
  &K181
};

static _KLpairGVKd K181 = {
  &KLpairGVKdW /* wrapper */,
  &KLtimeout_expiredGYthreadsVdylan,
  &K182
};

static _KLpairGVKd K182 = {
  &KLpairGVKdW /* wrapper */,
  &KLerrorGVKd,
  &KPempty_listVKi
};

static _KLpairGVKd K183 = {
  &KLpairGVKdW /* wrapper */,
  &KLambiguous_methods_errorGVKg,
  &K184
};

static _KLpairGVKd K184 = {
  &KLpairGVKdW /* wrapper */,
  &KLconditional_update_errorGYthreadsVdylan,
  &K185
};

static _KLpairGVKd K185 = {
  &KLpairGVKdW /* wrapper */,
  &KLlock_errorGYthreads_internalVdylan,
  &K186
};

static _KLpairGVKd K186 = {
  &KLpairGVKdW /* wrapper */,
  &KLsynchronization_errorGYthreads_internalVdylan,
  &K187
};

static _KLpairGVKd K187 = {
  &KLpairGVKdW /* wrapper */,
  &KLthread_errorGYthreadsVdylan,
  &K188
};

static _KLpairGVKd K188 = {
  &KLpairGVKdW /* wrapper */,
  &KLslot_errorGVKi,
  &K189
};

static _KLpairGVKd K189 = {
  &KLpairGVKdW /* wrapper */,
  &KLincomplete_errorGVKi,
  &K190
};

static _KLpairGVKd K190 = {
  &KLpairGVKdW /* wrapper */,
  &KLarithmetic_errorGVKe,
  &K191
};

static _KLpairGVKd K191 = {
  &KLpairGVKdW /* wrapper */,
  &KLsealed_object_errorGVKd,
  &K192
};

static _KLpairGVKd K192 = {
  &KLpairGVKdW /* wrapper */,
  &KLtype_errorGVKd,
  &K193
};

static _KLpairGVKd K193 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_errorGVKd,
  &KPempty_listVKi
};

static _KLpairGVKd K194 = {
  &KLpairGVKdW /* wrapper */,
  &KLlibrary_version_errorGVKi,
  &K195
};

static _KLpairGVKd K195 = {
  &KLpairGVKdW /* wrapper */,
  &KLdispatch_errorGVKi,
  &K196
};

static _KLpairGVKd K196 = {
  &KLpairGVKdW /* wrapper */,
  &KLstack_overflow_errorGVKe,
  &K197
};

static _KLpairGVKd K197 = {
  &KLpairGVKdW /* wrapper */,
  &KLargument_errorGVKi,
  &K198
};

static _KLpairGVKd K198 = {
  &KLpairGVKdW /* wrapper */,
  &KLimmutable_errorGVKi,
  &K199
};

static _KLpairGVKd K199 = {
  &KLpairGVKdW /* wrapper */,
  &KLassert_errorGVKi,
  &K200
};

static _KLpairGVKd K200 = {
  &KLpairGVKdW /* wrapper */,
  &KLinconsistent_precedence_class_errorGVKi,
  &K201
};

static _KLpairGVKd K201 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_slot_errorGVKi,
  &K202
};

static _KLpairGVKd K202 = {
  &KLpairGVKdW /* wrapper */,
  &KLincompatible_range_errorGVKi,
  &K203
};

static _KLpairGVKd K203 = {
  &KLpairGVKdW /* wrapper */,
  &KLinfinite_range_errorGVKi,
  &K204
};

static _KLpairGVKd K204 = {
  &KLpairGVKdW /* wrapper */,
  &KLimproper_list_errorGVKi,
  &K205
};

static _KLpairGVKd K205 = {
  &KLpairGVKdW /* wrapper */,
  &KLcapacity_size_errorGVKi,
  &K206
};

static _KLpairGVKd K206 = {
  &KLpairGVKdW /* wrapper */,
  &KLnatural_number_errorGVKi,
  &K207
};

static _KLpairGVKd K207 = {
  &KLpairGVKdW /* wrapper */,
  &KLempty_collection_errorGVKi,
  &K208
};

static _KLpairGVKd K208 = {
  &KLpairGVKdW /* wrapper */,
  &KLiteration_errorGVKi,
  &K209
};

static _KLpairGVKd K209 = {
  &KLpairGVKdW /* wrapper */,
  &KLnot_found_errorGVKe,
  &K210
};

static _KLpairGVKd K210 = {
  &KLpairGVKdW /* wrapper */,
  &KLkey_test_errorGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &KLambiguous_methods_warningGVKg,
  &K212
};

static _KLpairGVKd K212 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_warningGVKd,
  &KPempty_listVKi
};

/* Code */

D KerrorVKdMM1I (D string_, D arguments_) {
  D T3;
  D T4_0;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:134
  T5 = primitive_copy_vector(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:136
  T6.vector_element_[0] = &KJformat_string_;
  T6.vector_element_[1] = string_;
  T6.vector_element_[2] = &KJformat_arguments_;
  T6.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:136
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsimple_errorGVKd, &T6);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:136
  CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
  T4_0 = CONGRUENT_CALL2(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:134
  MV_SET_COUNT(1);
  return(T4_0);
}

D KerrorVKdMM0I (D condition_, D noise_) {
  D T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:102
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:104
  T3 = SLOT_VALUE_INITD(noise_, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:104
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:104
  T5 = primitive_machine_word_equalQ(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:104
  if (T5 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:105
    KerrorVKdMM1I(&K63, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:104
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:107
  CONGRUENT_CALL_PROLOG(&KsignalVKd, 2);
  CONGRUENT_CALL2(condition_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:109
  T6_0 = KerrorVKdMM1I(&K104, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:102
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsignalVKdMM1I (D string_, D arguments_) {
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:149
  T5 = primitive_copy_vector(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:150
  T6.vector_element_[0] = &KJformat_string_;
  T6.vector_element_[1] = string_;
  T6.vector_element_[2] = &KJformat_arguments_;
  T6.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:150
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsimple_warningGVKd, &T6);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:150
  CONGRUENT_CALL_PROLOG(&KsignalVKd, 2);
  T4 = CONGRUENT_CALL2(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:149
  return(T4);
}

D KLhandlerGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_handler_type_, D Uunique_handler_function_, D Uunique_handler_test_, D Uunique_handler_init_arguments_) {
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:10
  T7 = primitive_object_allocate_filled(5,&KLhandlerGVKiW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_handler_type_, T7, 0);
  SLOT_VALUE_SETTER(Uunique_handler_function_, T7, 1);
  SLOT_VALUE_SETTER(Uunique_handler_test_, T7, 2);
  SLOT_VALUE_SETTER(Uunique_handler_init_arguments_, T7, 3);
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:10
  MV_SET_COUNT(1);
  return(T8_0);
}

D KsignalVKdMM0I (D condition_, D noise_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D done_lastQ_;
  D T8;
  DWORD T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:67
  T6 = primitive_copy_vector(noise_);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:68
  T8 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:68
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:68
  T10 = primitive_machine_word_equalQ(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:68
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:69
    KerrorVKdMM1I(&K63, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:68
  done_lastQ_ = MAKE_D_CELL(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:72
  T3 = MAKE_CLOSURE(&KsearchF64, 2);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:72
  INIT_CLOSURE(T3, 2, done_lastQ_, T3);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:72
  T4 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:72
  get_teb()->function = T3;
  T5 = KsearchF64I(condition_, T4);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:67
  return(T5);
}

static D KsearchF64I (D condition_, D handlers_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D Uhandler_;
  D remaining_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D handlersF17;
  D T18;
  D T19;
  D handlersF20T, handlersF20;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:78
  handlersF20T = handlers_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:87
    handlersF20 = handlersF20T;
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:78
    handlersF17 = handlersF20;
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:78
    T18 = handlersF17;
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:73
    CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
    T2 = CONGRUENT_CALL1(T18);
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:73
    if (T2 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:74
      T15 = GET_D_CELL_VAL(CREF(0));
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:74
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:75
        CONGRUENT_CALL_PROLOG(&Kdefault_handlerVKd, 1);
        T3 = CONGRUENT_CALL1(condition_);
        T5 = T3;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:77
        SET_D_CELL_VAL(CREF(0), &KPtrueVKi);
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:78
        T4 = Tlast_handlersTVKi;
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:78
        handlersF20T = T4;
        goto L0;
        T5 = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:74
      T14 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:81
      Uhandler_ = CALL1(&KheadVKd, T18);
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:82
      remaining_ = CALL1(&KtailVKd, T18);
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:83
      T8 = Khandler_matchesQVKiMM0I(Uhandler_, condition_);
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:83
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:84
        T9 = CALL1(&Khandler_functionVKi, Uhandler_);
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:84
        T10 = T9;
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:85
        T11 = MAKE_CLOSURE(&Kanonymous_of_signalF81, 4);
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:85
        INIT_CLOSURE(T11, 4, CREF(0), CREF(1), condition_, remaining_);
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:84
        T12 = CALL2(T10, condition_, T11);
        T13 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/condition.dylan:87
        handlersF20T = remaining_;
        goto L0;
        T13 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:83
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:73
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:78
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:72
  return(T14);
}

static D Kanonymous_of_signalF81I () {
  D T0;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:85
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:85
  get_teb()->function = CREF(1);
  T0 = KsearchF64I(CREF(2), CREF(3));
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:85
  return(T0);
}

D Khandler_matchesQVKiMM0I (D Uhandler_, D condition_) {
  D T3;
  D T4_0;
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:95
  T10 = SLOT_VALUE(Uhandler_, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:95
  T3 = CALL2(&KinstanceQVKd, condition_, T10);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:95
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:97
    T11 = SLOT_VALUE(Uhandler_, 2);
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:98
    T12 = primitive_not(T11);
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:98
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:98
      T5 = T11;
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:98
      T6_0 = CALL1(T5, condition_);
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:98
      T13_0 = T6_0;
      T7_0 = T13_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/condition.dylan:98
      T4_0 = T12;
      T7_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:98
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:95
    T8_0 = &KPfalseVKi;
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:93
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kdefault_handlerVKdMM0I (D condition_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:113
  T2 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:112
  return(T2);
}

D Kdefault_handlerVKdMM1I (D condition_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:122
  CONGRUENT_CALL_PROLOG(&Kinvoke_debuggerVKi, 1);
  CONGRUENT_CALL1(condition_);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:123
  T2 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:121
  return(T2);
}

D KLsimple_warningGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:146
  T5 = primitive_object_allocate_filled(3,&KLsimple_warningGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:146
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLsimple_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:131
  T5 = primitive_object_allocate_filled(3,&KLsimple_errorGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:131
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmake_last_handlerVKiI (D type_, D function_, D Urest_, D test_, D init_arguments_) {
  D T6;
  D T7_0;
  _KLsimple_object_vectorGVKd_8 T8 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:184
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:187
  if (init_arguments_ != &KPfalseVKi) {
    T6 = init_arguments_;
  } else {
    T6 = &KPempty_vectorVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:187
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:187
  T8.vector_element_[0] = &KJtype_;
  T8.vector_element_[1] = type_;
  T8.vector_element_[2] = &KJfunction_;
  T8.vector_element_[3] = function_;
  T8.vector_element_[4] = &KJtest_;
  T8.vector_element_[5] = test_;
  T8.vector_element_[6] = &KJinit_arguments_;
  T8.vector_element_[7] = T6;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:187
  T7_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T8, type_, function_, test_, T6);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:184
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdefault_last_handler_testVKiI (D condition_) {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:178
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:181
  T1 = Kinside_debuggerQVKeMM0I();
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:181
  T3 = primitive_not(T1);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:181
  T2_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:178
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmake_handlerVKiI (D type_, D function_, D Urest_, D test_, D init_arguments_) {
  D T6;
  D T7_0;
  _KLsimple_object_vectorGVKd_8 T8 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:41
  if (init_arguments_ != &KPfalseVKi) {
    T6 = init_arguments_;
  } else {
    T6 = &KPempty_vectorVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:37
  T8.vector_element_[0] = &KJtype_;
  T8.vector_element_[1] = type_;
  T8.vector_element_[2] = &KJfunction_;
  T8.vector_element_[3] = function_;
  T8.vector_element_[4] = &KJtest_;
  T8.vector_element_[5] = test_;
  T8.vector_element_[6] = &KJinit_arguments_;
  T8.vector_element_[7] = T6;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:37
  T7_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T8, type_, function_, test_, T6);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:36
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kremove_last_handlerVKiI () {
  D T0;
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:31
  T0 = Tlast_handlersTVKi;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:31
  T7 = primitive_idQ(T0,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:31
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:31
    T5 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T6 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:32
    T1 = Tlast_handlersTVKi;
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:32
    T8 = SLOT_VALUE_INITD(T1, 1);
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:32
    T2 = T8;
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:32
    T3 = Tlast_handlersTVKi = T2;
    // /opt/opendylan-2013.1/sources/dylan/condition.dylan:32
    T4 = T3;
    MV_SET_ELT(0, T3);
    MV_SET_COUNT(1);
    T6 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:30
  return(T6);
}

D Kadd_last_handlerVKiI (D Uhandler_) {
  D T1;
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:26
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:27
  T1 = Tlast_handlersTVKi;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:27
  T3 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:27
  SLOT_VALUE_SETTER(Uhandler_, T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:27
  SLOT_VALUE_SETTER(T1, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:27
  Tlast_handlersTVKi = T3;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:27
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:26
  MV_SET_COUNT(0);
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_condition_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_condition_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:20
  Tcurrent_handlersTVKi = primitive_allocate_thread_variable(&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/condition.dylan:20
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
