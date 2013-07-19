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
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(97);
define__KLbyte_stringGVKd(68);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(57);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(65);
define__KLbyte_stringGVKd(51);
define__KLbyte_stringGVKd(53);
define__KLbyte_stringGVKd(39);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(41);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

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
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_slot_errorGVKi;

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
} _KLstretchy_vectorGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
} _KLsealed_object_errorGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D inherited_slot_getter_;
} _KLinherited_slot_descriptorGVKe;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D set_elements_;
} _KLobject_setGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinconsistent_precedence_class_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsealed_class_errorGVKi;


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
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lslot_descriptorG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsealed_generic_functionGVKe Kas_slot_descriptor_classVKi;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsymbolGVKd KJowner_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJallocation_;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsealed_generic_functionGVKe Kadd_getter_methodVKi;
extern _KLsealed_generic_functionGVKe Kadd_setter_methodVKi;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
D Kinitialize_class_instanceQ_iepVKiI (D);
D Kadd_newVKdMM3I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
D Kdecache_gfVKeMM0I (D);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D Kscu_entryQVKeI (D, D);
D Kaugment_iclass_rcpl_position_dataVKiI (D, D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D Kiclass_type_completeQ_setterVKeMM0I (D, D);
D KmakeVKdMM23I (D, D, D, D);
D Kmake_mm_wrapperVKiI (D, D, D);
D Kclass_completeQ_setterVKeMM1I (D, D);
D Kiclass_instantiableQ_setterVKeMM0I (D, D);
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
extern _KLincremental_generic_functionGVKe KEVKd;
D KasVKdMM41I (D, D);
extern _KLsealed_generic_functionGVKe Kslot_descriptors_setterVKe;
D Kinstance_storage_size_setterVKeMM1I (D, D);
D KgetterEVKiMM0I (D, D);
D KlistVKdI (D);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLsimple_slot_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_slot_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLsealed_generic_functionGVKe Kslot_allocationVKe;
extern _KLsymbolGVKd KJeach_subclass_;
extern _KLsymbolGVKd KJclass_;
extern _KLsymbolGVKd KJvirtual_;
extern _KLsymbolGVKd KJrepeated_;
D KerrorVKdMM1I (D, D);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
D KEEVKdI (D, D);
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLclassGVKd KLstretchy_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_vectorGVKdW;
extern _KLsealed_generic_functionGVKe Ksize_slot_descriptorVKe;
extern _KLsealed_generic_functionGVKe KheadVKd;
extern _KLsealed_generic_functionGVKe Kslot_ownerVKe;
extern _KLsealed_generic_functionGVKe Kiclass_classVKe;
D KreverseXVKdMM2I (D);
D Kall_superclasses_setterVKeMM1I (D, D);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KsizeVKdMM30I (D);
extern _KLincremental_generic_functionGVKe K_VKd;
D Kelement_range_errorVKeI (D, D);
extern _KLsealed_generic_functionGVKe Kmm_wrapper_subtype_maskVKe;
D KsubiclassQVKiI (D, D, D, D);
D Kmap_asVKdMM0I (D, D, D, D);
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLsealed_generic_functionGVKe Kmap_as_oneVKi;
extern _KLsealed_generic_functionGVKe KconcatenateVKd;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLsealed_generic_functionGVKe KtailVKd;
extern _KLincremental_generic_functionGVKe KmemberQVKd;
D Kmap_intoVKdMM0I (D, D, D, D);
D KeveryQVKdMM0I (D, D, D);
D KsignalVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KaddVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
D Kconcatenate_2VKeMM1I (D, D);
extern _KLsimple_methodGVKe Kall_iclass_superclassesVKe;
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
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsealed_generic_functionGVKe Kinit_keywordVKe;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
D Kinit_evaluatedQ_setterVKiMM0I (D, D);
extern _KLincremental_generic_functionGVKe KreleaseYthreadsVdylan;
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLincremental_generic_functionGVKe Kinitialize_packed_slotsVKe;
D Kinitialize_class_dispatch_keysVKgI (D);
D Kmake_empty_subjunctive_class_universeVKeI ();
D Kscu_entry_setterVKeI (D, D, D);
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
D Kreport_class_incompleteVKiI (D, D);
extern _KLincremental_generic_functionGVKe Kdebug_nameVKe;
extern _KLclassGVKd KLsealed_object_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsealed_object_errorGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLinit_arg_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinit_arg_descriptorGVKeW;
D KapplyVKdI (D, D);
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLinherited_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinherited_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJsuperclasses_;
extern _KLsymbolGVKd KJslots_;
extern _KLsymbolGVKd KJinherited_slots_;
extern _KLsymbolGVKd KJkeywords_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Limplementation_classG_typesVKi;
D Kinvalidate_class_instanceQ_iepVKiI (D);
D Kcomplete_dependent_generic_functionVKiMM0I (D g_, D c_, D u_);
extern _KLsealed_generic_functionGVKe Krecompute_type_completeXVKi;
extern _KLclassGVKd KLstring_tableGVKe;
extern _KLmm_wrapperGVKi_0 KLstring_tableGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
D KgethashVKiI (D table_, D key_, D default_, D first_attemptQ_);
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsymbolGVKd KJdefault_;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
D KLobject_setGZ32ZconstructorVKiMM0I (D class_, D init_args_);
extern _KLclassGVKd KLobject_setGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_setGVKeW;
D KaddXVKdMM14I (D set_, D key_);
extern _KLsealed_generic_functionGVKe Kdirect_subclassesVKd;
D KmemberQVKdMM5I (D object_, D set_, D Urest_, D test_);
D KputhashVKiI (D new_value_, D table_, D key_);
extern D Dempty_subjunctive_class_universeVKe;
extern D Tdylan_library_initializedQTYthreads_primitivesVdylan;
extern D Dslot_initial_data_lockVKi;
extern D Druntime_moduleVKe;
extern D Dtable_entry_emptyVKi;

/* Defined object declarations */

D KPregister_subclass_dependent_genericVKeI (D, D);
extern _KLsimple_methodGVKe KPregister_subclass_dependent_genericVKe;
extern _KLkeyword_methodGVKe KinitializeVKdMM20;
D KinitializeVKdMM20I (D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM21;
D KinitializeVKdMM21I (D, D, D, D, D, D, D, D);
D Kcompute_defaulted_initialization_argumentsVKiI (D, D, D);
extern _KLkeyword_methodGVKe Kdo_implementation_class_cross_class_initializationsVKiMM0;
D Kdo_implementation_class_cross_class_initializationsVKiMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kinstall_implementation_classVKiMM0;
D Kinstall_implementation_classVKiMM0I (D, D);
extern _KLkeyword_methodGVKe Kadd_slot_methodsVKi;
D Kadd_slot_methodsVKiI (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kcreate_slot_descriptorVKi;
extern _KLkeyword_methodGVKe Kcreate_slot_descriptorVKiMM0;
D Kcreate_slot_descriptorVKiMM0I (D, D, D);
static _KLpairGVKd K16;
static _KLkeyword_signatureAvaluesGVKi K17;
static _KLbyte_stringGVKd_22 K18;
static _KLkeyword_signatureAvaluesGVKi K19;
static _KLsimple_object_vectorGVKd_2 K20;
static _KLsymbolGVKd KJinstance_;
static _KLbyte_stringGVKd_8 K22;
static _KLsimple_object_vectorGVKd_1 K23;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K24;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K25;
static _KLkeyword_signatureGVKe K26;
static _KLsimple_object_vectorGVKd_2 K27;
static _KLsymbolGVKd KJoverride_sealingQ_;
static _KLbyte_stringGVKd_17 K29;
static _KLsimple_object_vectorGVKd_2 K30;
static _KLsimple_object_vectorGVKd_1 K31;
D Kaugment_superior_rcplsVKiI (D, D);
D Krecord_new_class_subclass_usageVKiI (D);
static _KLsignatureGVKe K34;
D Kcompute_cpl_rcpl_stuffVKiI (D, D);
D Kcheck_for_duplicated_slotsVKiI (D);
D Kcheck_for_illegally_inherited_slotsVKiI (D, D);
D Kfinalize_inheritanceVKiMM0I (D, D, D, D);
D Kcompute_slot_descriptorsVKiMM0I (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kcollect_superclass_slotsF56;
static D Kcollect_superclass_slotsF56I (D, D);
static _KLsimple_closure_methodGVKi_0 Kallocate_superclass_slotsF47;
static D Kallocate_superclass_slotsF47I (D, D, D, D, D);
static D Kanonymous_of_compute_slot_descriptorsF45I (D, D, D);
static _KLbyte_stringGVKd_41 K46;
D Kimplementation_class_subtypeQVKiI (D, D);
static D Kanonymous_of_compute_slot_descriptorsF52I (D, D, D);
static _KLbyte_stringGVKd_54 K50;
static _KLbyte_stringGVKd_32 K51;
static _KLbyte_stringGVKd_35 K53;
static _KLsignatureGVKe K54;
static _KLsimple_object_vectorGVKd_5 K55;
static _KLbyte_stringGVKd_39 K57;
static _KLsignatureGVKe K58;
static _KLsimple_object_vectorGVKd_2 K59;
static _KLbyte_stringGVKd_53 K60;
static _KLbyte_stringGVKd_51 K61;
D Kcompute_implementation_class_precedence_listVKiI (D, D);
static D KloopF64I (D, D, D, D);
static _KLbyte_stringGVKd_65 K65;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_compute_implementation_class_precedence_listF95;
static D Kanonymous_of_compute_implementation_class_precedence_listF95I (D);
static _KLsimple_closure_methodGVKi_0 Kremove_nextF94;
static D Kremove_nextF94I (D);
static _KLbyte_stringGVKd_29 K70;
extern _KLclassGVKd KLinconsistent_precedence_class_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLinconsistent_precedence_class_errorGVKiW;
D Kcompute_implementation_class_precedence_list_oldVKiI (D, D);
static _KLbyte_stringGVKd_57 K74;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_compute_implementation_class_precedence_list_oldF81;
static D Kanonymous_of_compute_implementation_class_precedence_list_oldF81I (D);
static _KLsimple_closure_methodGVKi_0 Kremove_nextF79;
static D Kremove_nextF79I (D);
static _KLsignatureGVKe K80;
static _KLsignatureGVKe K82;
static _KLimplementation_classGVKe K83;
static _KLsimple_object_vectorGVKd_2 K84;
extern _KLkeyword_methodGVKe KLinconsistent_precedence_class_errorGZ32ZconstructorVKiMM0;
D KLinconsistent_precedence_class_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K87;
static _KLsimple_object_vectorGVKd_7 K88;
static _KLkeyword_signatureAvaluesGVKi K89;
static _KLsimple_object_vectorGVKd_4 K90;
static _KLsimple_object_vectorGVKd_2 K91;
static _KLsimple_object_vectorGVKd_1 K92;
static _KLbyte_stringGVKd_37 K93;
static _KLkeyword_signatureGVKe K96;
static _KLsimple_object_vectorGVKd_2 K97;
static _KLsymbolGVKd KJrecurseQ_;
static _KLbyte_stringGVKd_8 K99;
static _KLsimple_object_vectorGVKd_1 K100;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF125;
static D Kanonymous_of_initializeF125I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF124;
static D Kanonymous_of_initializeF124I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF123;
static D Kanonymous_of_initializeF123I (D);
static _KLbyte_stringGVKd_15 K107;
D Kchecked_superclassesVKiI (D, D, D);
static _KLunionGVKe K109;
static _KLbyte_stringGVKd_53 K110;
static _KLbyte_stringGVKd_68 K111;
static _KLbyte_stringGVKd_97 K112;
extern _KLclassGVKd KLsealed_class_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsealed_class_errorGVKiW;
static _KLimplementation_classGVKe K115;
extern _KLkeyword_methodGVKe KLsealed_class_errorGZ32ZconstructorVKiMM0;
D KLsealed_class_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K118;
static _KLsimple_object_vectorGVKd_7 K119;
static _KLkeyword_signatureAvaluesGVKi K120;
static _KLsimple_object_vectorGVKd_1 K121;
static _KLbyte_stringGVKd_20 K122;
static _KLkeyword_signatureGVKe K126;
static _KLsimple_object_vectorGVKd_12 K127;
static _KLsymbolGVKd KJsubjunctive_class_universe_;
static _KLsymbolGVKd KJdefer_cross_class_computationsQ_;
static _KLbyte_stringGVKd_31 K130;
static _KLbyte_stringGVKd_26 K131;
static _KLsimple_object_vectorGVKd_6 K132;
static _KLsimple_object_vectorGVKd_6 K133;
static _KLsymbolGVKd KJlibrary_;
D Kcomplete_dependent_generic_functionsVKiI (D, D);
static D Kp1F139I (D, D);
static D Kp2F138I (D, D);
static _KLbyte_stringGVKd_7 K140;
static _KLunionGVKe K141;
static _KLsingletonGVKd K142;
static _KLkeyword_signatureGVKe K143;
static _KLsimple_object_vectorGVKd_10 K144;
static _KLsymbolGVKd KJmodule_;
static _KLbyte_stringGVKd_6 K146;
static _KLsimple_object_vectorGVKd_5 K147;
static _KLsimple_object_vectorGVKd_5 K148;
static _KLsignatureGVKe K149;
static _KLsimple_object_vectorGVKd_2 K150;
extern _KLsimple_methodGVKe KPregister_subclasses_dependent_genericVKe;
D KPregister_subclasses_dependent_genericVKeI (D, D);
static _KLsignatureGVKe K153;
static _KLsimple_object_vectorGVKd_2 K154;
extern _KLsimple_methodGVKe KPadd_classVKe;
D KPadd_classVKeI (D);
static _KLsignatureGVKe K157;
extern _KLsimple_methodGVKe Kclass_GvariableVKeMM0;
D Kclass_GvariableVKeMM0I (D);
static _KLsignatureAvaluesGVKi K160;
extern _KLsimple_methodGVKe Kvariable_GclassVKeMM0;
D Kvariable_GclassVKeMM0I (D, D, D);
D Klookup_class_bindingsVKiMM0I (D, D);
D Kbuild_class_symbol_tableVKiMM0I ();
static D Kadd_classF166I (D, D);
D Kinsert_class_bindingVKiMM0I (D);
static _KLsignatureAvaluesGVKi K168;

/* Indirection variables */

static D IKJinstance_ = &KJinstance_;
static D IKJoverride_sealingQ_ = &KJoverride_sealingQ_;
static D IKJrecurseQ_ = &KJrecurseQ_;
static D IKJsubjunctive_class_universe_ = &KJsubjunctive_class_universe_;
static D IKJdefer_cross_class_computationsQ_ = &KJdefer_cross_class_computationsQ_;
static D IKJlibrary_ = &KJlibrary_;
static D IKJmodule_ = &KJmodule_;

/* Variables */

D install_implementation_classVKi = &Kinstall_implementation_classVKiMM0;
D do_implementation_class_cross_class_initializationsVKi = &Kdo_implementation_class_cross_class_initializationsVKiMM0;
D variable_GclassVKe = &Kvariable_GclassVKeMM0;
D class_GvariableVKe = &Kclass_GvariableVKeMM0;
D Lsealed_class_errorGVKi = &KLsealed_class_errorGVKi;
D Padd_classVKe = &KPadd_classVKe;
D Pregister_subclass_dependent_genericVKe = &KPregister_subclass_dependent_genericVKe;
D Pregister_subclasses_dependent_genericVKe = &KPregister_subclasses_dependent_genericVKe;
D Linconsistent_precedence_class_errorGVKi = &KLinconsistent_precedence_class_errorGVKi;
D create_slot_descriptorVKi = &Kcreate_slot_descriptorVKi;
D add_slot_methodsVKi = &Kadd_slot_methodsVKi;
D Dsealed_class_checking_enabledQVKi = &KPtrueVKi;
D Tclass_symbol_tableTVKi = &KPfalseVKi;
D Tcount_tracked_genericsQTVKi = &KPtrueVKi;
D Tnumber_tracked_genericsTVKi = (D) 1;

/* Objects */

_KLsimple_methodGVKe KPregister_subclass_dependent_genericVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K149,
  &KPregister_subclass_dependent_genericVKeI
};

_KLkeyword_methodGVKe KinitializeVKdMM20 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K143,
  &key_mep_7,
  &KinitializeVKdMM20I,
  &K144
};

_KLkeyword_methodGVKe KinitializeVKdMM21 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K126,
  &key_mep_8,
  &KinitializeVKdMM21I,
  &K127
};

_KLkeyword_methodGVKe Kdo_implementation_class_cross_class_initializationsVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K96,
  &key_mep_4,
  &Kdo_implementation_class_cross_class_initializationsVKiMM0I,
  &K97
};

_KLsimple_methodGVKe Kinstall_implementation_classVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K34,
  &Kinstall_implementation_classVKiMM0I
};

_KLkeyword_methodGVKe Kadd_slot_methodsVKi = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K26,
  &key_mep_4,
  &Kadd_slot_methodsVKiI,
  &K27
};

_KLsealed_generic_functionGVKe Kcreate_slot_descriptorVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K17,
  &KPfalseVKi,
  &K18,
  &K16,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe Kcreate_slot_descriptorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K19,
  &key_mep_3,
  &Kcreate_slot_descriptorVKiMM0I,
  &K20
};

static _KLpairGVKd K16 = {
  &KLpairGVKdW /* wrapper */,
  &Kcreate_slot_descriptorVKiMM0,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K17 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_Lslot_descriptorG_typesVKi
};

static _KLbyte_stringGVKd_22 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "create-slot-descriptor"
};

static _KLkeyword_signatureAvaluesGVKi K19 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K23,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lslot_descriptorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJallocation_,
  &KJinstance_
};

static _KLsymbolGVKd KJinstance_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K22
};

static _KLbyte_stringGVKd_8 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "instance"
};

static _KLsimple_object_vectorGVKd_1 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJallocation_
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K24 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kadd_getter_methodVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K25 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kadd_setter_methodVKi
};

static _KLkeyword_signatureGVKe K26 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K30,
  &K31,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJoverride_sealingQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJoverride_sealingQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K29
};

static _KLbyte_stringGVKd_17 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "override-sealing?"
};

static _KLsimple_object_vectorGVKd_2 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLimplementation_classGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_object_vectorGVKd_1 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJoverride_sealingQ_
};

static _KLsignatureGVKe K34 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K30
};

static _KLsimple_closure_methodGVKi_0 Kcollect_superclass_slotsF56 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K58,
  &Kcollect_superclass_slotsF56I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kallocate_superclass_slotsF47 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &K54,
  &Kallocate_superclass_slotsF47I,
  (D) 1
};

static _KLbyte_stringGVKd_41 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Class %= has slot conflict with %= and %="
};

static _KLbyte_stringGVKd_54 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Bug - canonical slot for repeating size in use already"
};

static _KLbyte_stringGVKd_32 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_35 K53 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "Bug - ran out of space for %= in %="
};

static _KLsignatureGVKe K54 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943061,
  &K55
};

static _KLsimple_object_vectorGVKd_5 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLlistGVKd
};

static _KLbyte_stringGVKd_39 K57 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "Multiple repeated slots %= and %= in %="
};

static _KLsignatureGVKe K58 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K59
};

static _KLsimple_object_vectorGVKd_2 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLlistGVKd
};

static _KLbyte_stringGVKd_53 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 213,
  "The definition of %= respecifies the slot %= from %=."
};

static _KLbyte_stringGVKd_51 K61 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "Definition of class %= has duplicated slot specs %="
};

static _KLbyte_stringGVKd_65 K65 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 261,
  "Class %= attempts to combine unrelated primary classes %= and %=."
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_compute_implementation_class_precedence_listF95 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K82,
  &Kanonymous_of_compute_implementation_class_precedence_listF95I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kremove_nextF94 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K80,
  &Kremove_nextF94I,
  (D) 1
};

static _KLbyte_stringGVKd_29 K70 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "Inconsistent precedence graph"
};

_KLclassGVKd KLinconsistent_precedence_class_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K93,
  &K83,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLinconsistent_precedence_class_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K83,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLbyte_stringGVKd_57 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 229,
  "The class precedence list of %= differ, Dylan: %=; C3: %="
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_compute_implementation_class_precedence_list_oldF81 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K82,
  &Kanonymous_of_compute_implementation_class_precedence_list_oldF81I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kremove_nextF79 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K80,
  &Kremove_nextF79I,
  (D) 1
};

static _KLsignatureGVKe K80 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LlistG_typesVKi
};

static _KLsignatureGVKe K82 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLimplementation_classGVKe K83 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLinconsistent_precedence_class_errorGVKi,
  &KLinconsistent_precedence_class_errorGVKiW,
  &KPfalseVKi,
  &K84,
  (D) 7041,
  &KLinconsistent_precedence_class_errorGZ32ZconstructorVKiMM0,
  &K87,
  &K88,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K84,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLinconsistent_precedence_class_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K89,
  &key_mep_2,
  &KLinconsistent_precedence_class_errorGZ32ZconstructorVKiMM0I,
  &K90
};

static _KLsimple_object_vectorGVKd_1 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLinconsistent_precedence_class_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K89 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K91,
  &KDsignature_LobjectG_typesVKi,
  &K92
};

static _KLsimple_object_vectorGVKd_4 K90 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinconsistent_precedence_class_errorGVKi
};

static _KLbyte_stringGVKd_37 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "<inconsistent-precedence-class-error>"
};

static _KLkeyword_signatureGVKe K96 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K30,
  &K100,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJrecurseQ_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJrecurseQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K99
};

static _KLbyte_stringGVKd_8 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "recurse?"
};

static _KLsimple_object_vectorGVKd_1 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJrecurseQ_
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF125 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_initializeF125I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF124 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_initializeF124I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF123 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_initializeF123I,
  (D) 1
};

static _KLbyte_stringGVKd_15 K107 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLunionGVKe K109 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLclassGVKd,
  &KLimplementation_classGVKe
};

static _KLbyte_stringGVKd_53 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 213,
  "Some superclass specified for %=, %=, is not a class."
};

static _KLbyte_stringGVKd_68 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 273,
  "attempt to make a class of incompletely initialized superclasses: %="
};

static _KLbyte_stringGVKd_97 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 389,
  "Cannot create the class %= in %= because the superclasses %= are sealed and not accessible to it."
};

_KLclassGVKd KLsealed_class_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K122,
  &K115,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsealed_class_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K115,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K115 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLsealed_class_errorGVKi,
  &KLsealed_class_errorGVKiW,
  &KPfalseVKi,
  &K84,
  (D) 7033,
  &KLsealed_class_errorGZ32ZconstructorVKiMM0,
  &K118,
  &K119,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K84,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsealed_class_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K120,
  &key_mep_2,
  &KLsealed_class_errorGZ32ZconstructorVKiMM0I,
  &K90
};

static _KLsimple_object_vectorGVKd_2 K118 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsealed_object_errorGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_7 K119 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsealed_object_errorGVKd,
  &KLsealed_class_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K120 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K91,
  &KDsignature_LobjectG_typesVKi,
  &K121
};

static _KLsimple_object_vectorGVKd_1 K121 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsealed_class_errorGVKi
};

static _KLbyte_stringGVKd_20 K122 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<sealed-class-error>"
};

static _KLkeyword_signatureGVKe K126 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &KDsignature_Limplementation_classG_typesVKi,
  &K132,
  &K133
};

static _KLsimple_object_vectorGVKd_12 K127 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJsubjunctive_class_universe_,
  &KPfalseVKi,
  &KJdefer_cross_class_computationsQ_,
  &KPfalseVKi,
  &KJsuperclasses_,
  &KPfalseVKi,
  &KJslots_,
  &KPempty_vectorVKi,
  &KJinherited_slots_,
  &KPempty_vectorVKi,
  &KJkeywords_,
  &KPempty_vectorVKi
};

static _KLsymbolGVKd KJsubjunctive_class_universe_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K131
};

static _KLsymbolGVKd KJdefer_cross_class_computationsQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K130
};

static _KLbyte_stringGVKd_31 K130 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "defer-cross-class-computations?"
};

static _KLbyte_stringGVKd_26 K131 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "subjunctive-class-universe"
};

static _KLsimple_object_vectorGVKd_6 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJsubjunctive_class_universe_,
  &KJdefer_cross_class_computationsQ_,
  &KJsuperclasses_,
  &KJslots_,
  &KJinherited_slots_,
  &KJkeywords_
};

static _KLsimple_object_vectorGVKd_6 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd
};

static _KLsymbolGVKd KJlibrary_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K140
};

static _KLbyte_stringGVKd_7 K140 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "library"
};

static _KLunionGVKe K141 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K142,
  &KLstring_tableGVKe
};

static _KLsingletonGVKd K142 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLkeyword_signatureGVKe K143 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &KDsignature_LclassG_typesVKi,
  &K147,
  &K148
};

static _KLsimple_object_vectorGVKd_10 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJsuperclasses_,
  &KPfalseVKi,
  &KJslots_,
  &KPempty_vectorVKi,
  &KJinherited_slots_,
  &KPempty_vectorVKi,
  &KJkeywords_,
  &KPempty_vectorVKi,
  &KJmodule_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJmodule_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K146
};

static _KLbyte_stringGVKd_6 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "module"
};

static _KLsimple_object_vectorGVKd_5 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJsuperclasses_,
  &KJslots_,
  &KJinherited_slots_,
  &KJkeywords_,
  &KJmodule_
};

static _KLsimple_object_vectorGVKd_5 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLobjectGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd,
  &KLmoduleGVKe
};

static _KLsignatureGVKe K149 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K150
};

static _KLsimple_object_vectorGVKd_2 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLclassGVKd
};

_KLsimple_methodGVKe KPregister_subclasses_dependent_genericVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K153,
  &KPregister_subclasses_dependent_genericVKeI
};

static _KLsignatureGVKe K153 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K154
};

static _KLsimple_object_vectorGVKd_2 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe KPadd_classVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K157,
  &KPadd_classVKeI
};

static _KLsignatureGVKe K157 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LclassG_typesVKi
};

_KLsimple_methodGVKe Kclass_GvariableVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K160,
  &Kclass_GvariableVKeMM0I
};

static _KLsignatureAvaluesGVKi K160 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557509,
  &KDsignature_LclassG_typesVKi,
  &KDsignature_Lbyte_stringG_typesVKi
};

_KLsimple_methodGVKe Kvariable_GclassVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K168,
  &Kvariable_GclassVKeMM0I
};

static _KLsignatureAvaluesGVKi K168 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

/* Code */

D KPregister_subclass_dependent_genericVKeI (D generic_, D class_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:311
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:314
  T8 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:315
  T9 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:315
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:315
  T11 = primitive_machine_word_logbitQ(27,T10);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:315
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:315
    T6 = &KPfalseVKi;
    T7 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:316
    T3 = Tcount_tracked_genericsQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:316
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:317
      T12 = SLOT_VALUE_INITD(T8, 13);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:317
      T13 = KmemberQVKdMM3I(generic_, T12, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:317
      if (T13 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:319
        T4 = Tnumber_tracked_genericsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:319
        T14 = primitive_cast_integer_as_raw(T4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:319
        T15 = primitive_machine_word_add_signal_overflow(T14,4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:319
        T16 = primitive_cast_raw_as_integer(T15);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:319
        Tnumber_tracked_genericsTVKi = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:317
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:316
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:323
    T17 = SLOT_VALUE_INITD(T8, 13);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:323
    T18 = Kadd_newVKdMM3I(T17, generic_, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:322
    SLOT_VALUE_SETTER(T18, T8, 13);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:322
    T5 = &KPfalseVKi;
    T7 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:315
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:311
  MV_SET_COUNT(0);
  return(T7);
}

D KinitializeVKdMM20I (D class_, D initargs_, D superclasses_, D slots_, D inherited_slots_, D keywords_, D module_) {
  D slotsF8;
  D inherited_slotsF9;
  D keywordsF10;
  D T11;
  D moduleF12;
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

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  T16 = primitive_copy_vector(initargs_);
  T15 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  primitive_type_check(slots_, &KLsequenceGVKd);
  slotsF8 = slots_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  primitive_type_check(inherited_slots_, &KLsequenceGVKd);
  inherited_slotsF9 = inherited_slots_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  primitive_type_check(keywords_, &KLsequenceGVKd);
  keywordsF10 = keywords_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  T17 = primitive_idQ(module_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
    T11 = Druntime_moduleVKe;
    moduleF12 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
    primitive_type_check(module_, &KLmoduleGVKe);
    T18 = module_;
    moduleF12 = T18;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:92
  Kinvalidate_class_instanceQ_iepVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:93
  T19 = primitive_idQ(T15,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:93
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:93
    KerrorVKdMM1I(&K107, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:93
    T20 = SLOT_VALUE_INITD(T15, 0);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:93
    T21 = SLOT_VALUE_INITD(T15, 1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:93
    MEP_CALL_PROLOG(T20, T21, 2);
    MEP_CALL2(T20, class_, T16);
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:94
  Tclass_symbol_tableTVKi = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:98
  T13 = Kchecked_superclassesVKiI(class_, superclasses_, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:103
  T22 = SLOT_VALUE_INITD(moduleF12, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:96
  T23 = APPLYN(&KmakeVKd, 16), &KLimplementation_classGVKe, &KJclass_, class_, &KJsuperclasses_, T13, IKJsubjunctive_class_universe_, Dempty_subjunctive_class_universeVKe, &KJslots_, slotsF8, &KJinherited_slots_, inherited_slotsF9, &KJkeywords_, keywordsF10, IKJlibrary_, T22, T16));
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:105
  Kinstall_implementation_classVKiMM0I(T23, Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:107
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T24 = CONGRUENT_CALL2(moduleF12, Druntime_moduleVKe);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:107
  T25 = primitive_not(T24);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:106
  Kadd_slot_methodsVKiI(T23, Dempty_subjunctive_class_universeVKe, &KPempty_vectorVKi, T25);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:108
  T14 = Kcomplete_dependent_generic_functionsVKiI(T23, Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:86
  MV_SET_COUNT(0);
  return(T14);
}

D KinitializeVKdMM21I (D iclass_, D initargs_, D subjunctive_class_universe_, D defer_cross_class_computationsQ_, D superclasses_, D slots_, D inherited_slots_, D keywords_) {
  D slotsF9;
  D inherited_slotsF10;
  D keywordsF11;
  D T12;
  D T13;
  D slotvec_;
  D T15;
  D inherited_slots_vector_;
  D T17;
  D init_arg_slots_vector_;
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
  D T33;
  _KLsimple_object_vectorGVKd_1 T34 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:164
  T29 = primitive_copy_vector(initargs_);
  T28 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:164
  primitive_type_check(slots_, &KLsequenceGVKd);
  slotsF9 = slots_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:164
  primitive_type_check(inherited_slots_, &KLsequenceGVKd);
  inherited_slotsF10 = inherited_slots_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:164
  primitive_type_check(keywords_, &KLsequenceGVKd);
  keywordsF11 = keywords_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:174
  T30 = primitive_idQ(T28,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:174
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:174
    KerrorVKdMM1I(&K107, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:174
    T31 = SLOT_VALUE_INITD(T28, 0);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:174
    T32 = SLOT_VALUE_INITD(T28, 1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:174
    MEP_CALL_PROLOG(T31, T32, 2);
    MEP_CALL2(T31, iclass_, T29);
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:175
  APPLY2(&Kinitialize_packed_slotsVKe, iclass_, T29);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:176
  T33 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:177
  T34.vector_element_[0] = iclass_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:177
  Kinitialize_class_dispatch_keysVKgI(&T34);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:178
  T12 = Kchecked_superclassesVKiI(T33, superclasses_, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:178
  SLOT_VALUE_SETTER(T12, iclass_, 7);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:181
  T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_initializeF125, 1, T33);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:180
  T35 = Kmap_asVKdMM0I(&KLsimple_object_vectorGVKd, T13, slotsF9, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:177
  slotvec_ = T35;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:189
  SLOT_VALUE_SETTER(slotvec_, iclass_, 16);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:192
  T15 = MAKE_CLOSURE_INITD(&Kanonymous_of_initializeF124, 1, T33);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:191
  T36 = Kmap_asVKdMM0I(&KLsimple_object_vectorGVKd, T15, inherited_slotsF10, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:189
  inherited_slots_vector_ = T36;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:200
  SLOT_VALUE_SETTER(inherited_slots_vector_, iclass_, 18);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:203
  T17 = MAKE_CLOSURE_INITD(&Kanonymous_of_initializeF123, 1, T33);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:202
  T37 = Kmap_asVKdMM0I(&KLsimple_object_vectorGVKd, T17, keywordsF11, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:200
  init_arg_slots_vector_ = T37;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:211
  SLOT_VALUE_SETTER(init_arg_slots_vector_, iclass_, 19);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:213
  T38 = primitive_not(defer_cross_class_computationsQ_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:213
  if (defer_cross_class_computationsQ_ != &KPfalseVKi) {
    T19 = subjunctive_class_universe_;
  } else {
    T19 = T38;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:213
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:213
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:215
    if (subjunctive_class_universe_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:214
      T41 = subjunctive_class_universe_;
      T22 = T41;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:216
      T39 = SLOT_VALUE(T33, 2);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:216
      T40 = primitive_idQ(T39,iclass_);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:216
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:216
        T42 = Dempty_subjunctive_class_universeVKe;
        T21 = T42;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:219
        T20 = Kmake_empty_subjunctive_class_universeVKeI();
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:219
        T43 = T20;
        T21 = T43;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:216
      T22 = T21;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:215
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:221
    T44 = primitive_idQ(T22,Dempty_subjunctive_class_universeVKe);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:221
    if (T44 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:222
      Kscu_entry_setterVKeI(iclass_, T33, T22);
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:221
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:224
    if (defer_cross_class_computationsQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:224
      T24 = &KPfalseVKi;
      T25 = T24;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:225
      T23 = Kdo_implementation_class_cross_class_initializationsVKiMM0I(iclass_, T22, &KPempty_vectorVKi, &KPtrueVKi);
      T25 = T23;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:224
    T27 = T25;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:213
    T26 = &KPfalseVKi;
    T27 = T26;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:213
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:164
  MV_SET_COUNT(0);
  return(T27);
}

D Kcompute_defaulted_initialization_argumentsVKiI (D iclass_, D all_super_iclasses_, D u_) {
  D T3T, T3;
  D ic_;
  DWORD T5T, T5;
  D keyword_;
  D T7;
  D vector_size_;
  DWORD i_T, i_;
  D T10T, T10;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D keywords_;
  D T16;
  D T17;
  D T18;
  D T19;
  D required_keywords_;
  D T21;
  D T22;
  D all_init_valueQ_;
  D T24;
  D init_values_;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
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
  D DlockD_;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  DWORD T59;
  D T60;
  D T61;
  DWORD T62;
  D T63;
  D T64;
  _KLsimple_object_vectorGVKd_2 T65 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T66;
  D T67;
  D T68;
  DWORD T69;
  D T70_0;
  D T71;
  D T72_0;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79;
  D T80;
  DWORD T81;
  D T82;
  D T83;
  DWORD T84;
  D T85;
  D T86;
  DWORD T87;
  D T88_0;
  D T89;
  D T90_0;
  D T91;
  D T92_0;
  D T93;
  D T94_0;
  D T95;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:525
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:529
  keywords_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:530
  required_keywords_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:531
  all_init_valueQ_ = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:532
  init_values_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
  T3T = all_super_iclasses_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
    T28 = primitive_idQ(T3,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
    if (T28 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
      T29 = SLOT_VALUE_INITD(T3, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
      ic_ = T29;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
      T30 = SLOT_VALUE_INITD(ic_, 19);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
      T31 = SLOT_VALUE_INITD(T30, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
      T32 = primitive_cast_integer_as_raw(T31);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
      T5T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
        T5 = T5T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
        T33 = primitive_machine_word_equalQ(T5,T32);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
        if (T33 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
          T34 = REPEATED_D_SLOT_VALUE_TAGGED(T30, 1, T5);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:535
          keyword_ = CALL1(&Kinit_keywordVKe, T34);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
          T22 = required_keywords_;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
          T35 = KmemberQVKdMM3I(keyword_, T22, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
          if (T35 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:538
            T36 = SLOT_VALUE_INITD(T34, 0);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:538
            T37 = primitive_cast_integer_as_raw(T36);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:538
            T38 = primitive_machine_word_logbitQ(5,T37);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
            if (T38 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:539
              T21 = required_keywords_;
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:539
              T39 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:539
              SLOT_VALUE_SETTER(keyword_, T39, 0);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:539
              SLOT_VALUE_SETTER(T21, T39, 1);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:539
              required_keywords_ = T39;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
              T40 = SLOT_VALUE_INITD(T34, 0);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
              T41 = primitive_cast_integer_as_raw(T40);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
              T42 = primitive_machine_word_logbitQ(2,T41);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
              if (T42 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
                T19 = keywords_;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
                T43 = KmemberQVKdMM3I(keyword_, T19, &KPempty_vectorVKi, &KEEVKd);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
                T44 = primitive_not(T43);
                T7 = T44;
              } else {
                T7 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:540
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
              if (T7 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:541
                T18 = keywords_;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:541
                T45 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:541
                SLOT_VALUE_SETTER(keyword_, T45, 0);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:541
                SLOT_VALUE_SETTER(T18, T45, 1);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:541
                keywords_ = T45;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:542
                T46 = SLOT_VALUE_INITD(T34, 0);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:542
                T47 = primitive_cast_integer_as_raw(T46);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:542
                T48 = primitive_machine_word_logbitQ(3,T47);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:542
                if (T48 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  T58 = SLOT_VALUE_INITD(T34, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  T59 = primitive_cast_integer_as_raw(T58);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  T60 = primitive_machine_word_logbitQ(4,T59);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  if (T60 == &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                    T49 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                    if (T49 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      DlockD_ = Dslot_initial_data_lockVKi;
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      T51 = CALL1(&Kwait_forYthreadsVdylan, DlockD_);
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      if (T51 != &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                        ENTER_UNWIND_FRAME(T52);
                        if (!nlx_setjmp(FRAME_DEST(T52))) {
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                          T61 = SLOT_VALUE_INITD(T34, 0);
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                          T62 = primitive_cast_integer_as_raw(T61);
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                          T63 = primitive_machine_word_logbitQ(4,T62);
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                          if (T63 == &KPfalseVKi) {
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                            T64 = SLOT_VALUE_INITD(T34, 1);
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                            T53 = T64;
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                            T54 = CALL0(T53);
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                            SLOT_VALUE_SETTER(T54, T34, 1);
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                            primitive_synchronize_side_effects();
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                            Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T34);
                          }
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                          FALL_THROUGH_UNWIND(&KPfalseVKi);
                        }
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                        CALL1(&KreleaseYthreadsVdylan, DlockD_);
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                        CONTINUE_UNWIND();
                      } else {
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                        T65.vector_element_[0] = &KJsynchronization_;
                        T65.vector_element_[1] = DlockD_;
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                        T55 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T65);
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                        KsignalVKdMM0I(T55, &KPempty_vectorVKi);
                      }
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      T66 = SLOT_VALUE_INITD(T34, 1);
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      T56 = T66;
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      T57 = CALL0(T56);
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      SLOT_VALUE_SETTER(T57, T34, 1);
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                      Kinit_evaluatedQ_setterVKiMM0I(&KPtrueVKi, T34);
                    }
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  T67 = SLOT_VALUE_INITD(T34, 1);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  T27 = init_values_;
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  T68 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  SLOT_VALUE_SETTER(T67, T68, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  SLOT_VALUE_SETTER(T27, T68, 1);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:543
                  init_values_ = T68;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:545
                  all_init_valueQ_ = &KPfalseVKi;
                }
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:542
              }
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
            }
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:536
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
          T69 = primitive_machine_word_add_signal_overflow(T5,4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
          T5T = T69;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:534
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
      T71 = SLOT_VALUE_INITD(T3, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
      T72_0 = T71;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
      T70_0 = T72_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
      T73 = T70_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
      T3T = T73;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:533
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:550
  T17 = keywords_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:550
  T74 = KsizeVKdMM30I(T17);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:550
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  vector_size_ = CONGRUENT_CALL2(T74, (D) 9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:552
  T24 = all_init_valueQ_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:552
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:553
    T75 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, vector_size_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
    T16 = keywords_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
    T26 = init_values_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
    i_T = 1;
    T10T = T16;
    T11T = T26;
  L2: ;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
      T83 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      T10 = T10T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      T11 = T11T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      keywords_;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      T76 = primitive_idQ(T10,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      if (T76 != &KPfalseVKi) {
        T12 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        init_values_;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T77 = primitive_idQ(T11,&KPempty_listVKi);
        T12 = T77;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      if (T12 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        keywords_;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T78 = SLOT_VALUE_INITD(T10, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        init_values_;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T79 = SLOT_VALUE_INITD(T11, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
        T80 = SLOT_VALUE_INITD(T75, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
        T81 = primitive_cast_integer_as_raw(T80);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
        T82 = primitive_machine_word_unsigned_less_thanQ(i_,T81);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
        if (T82 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T78, T75, 1, i_);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
          Kelement_range_errorVKeI(T75, T83);
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:557
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:558
        T84 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:558
        T85 = primitive_cast_raw_as_integer(T84);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:558
        T86 = primitive_machine_word_unsigned_less_thanQ(T84,T81);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:558
        if (T86 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:558
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T79, T75, 1, T84);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:558
          Kelement_range_errorVKeI(T75, T85);
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:558
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T87 = primitive_machine_word_add_signal_overflow(i_,8);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        keywords_;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T89 = SLOT_VALUE_INITD(T10, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T90_0 = T89;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T88_0 = T90_0;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T91 = T88_0;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        init_values_;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T93 = SLOT_VALUE_INITD(T11, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T94_0 = T93;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T92_0 = T94_0;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        T95 = T92_0;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
        i_T = T87;
        T10T = T91;
        T11T = T95;
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:554
    T13 = T75;
  } else {
    T13 = vector_size_;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:552
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:551
  SLOT_VALUE_SETTER(T13, iclass_, 21);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:551
  T14 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:525
  MV_SET_COUNT(0);
  return(T14);
}

D Kdo_implementation_class_cross_class_initializationsVKiMM0I (D iclass_, D scu_, D Urest_, D recurseQ_) {
  D T5_0;
  D T5_1;
  D all_super_iclasses_;
  D mask_;
  D T8T, T8;
  D subc_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD T16T, T16;
  D result_T, result_;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D Utmp_;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T39;
  D T40_0;
  D T41;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:233
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:238
  T15 = SLOT_VALUE(iclass_, 7);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
  T18 = SLOT_VALUE_INITD(T15, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
  T19 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
  T16T = 1;
  result_T = &KPtrueVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
    T16 = T16T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
    T20 = primitive_machine_word_equalQ(T16,T19);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
    if (T20 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
      T21 = REPEATED_D_SLOT_VALUE_TAGGED(T15, 1, T16);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
      if (result_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
        T22 = primitive_machine_word_add_signal_overflow(T16,4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
        T23 = SLOT_VALUE(T21, 2);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
        T24 = SLOT_VALUE_INITD(T23, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
        T25 = primitive_cast_integer_as_raw(T24);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
        T26 = primitive_machine_word_logbitQ(21,T25);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
        T16T = T22;
        result_T = T26;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
  if (result_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:239
    T5_0 = Kcompute_cpl_rcpl_stuffVKiI(iclass_, scu_);
    T5_1 = MV_GET_ELT(1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:239
    all_super_iclasses_ = T5_0;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:239
    mask_ = T5_1;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:240
    T27 = SLOT_VALUE_INITD(iclass_, 16);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:240
    Kcheck_for_duplicated_slotsVKiI(T27);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:241
    T28 = SLOT_VALUE_INITD(iclass_, 16);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:241
    Kcheck_for_illegally_inherited_slotsVKiI(T28, all_super_iclasses_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:242
    Kfinalize_inheritanceVKiMM0I(iclass_, all_super_iclasses_, scu_, mask_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:243
    if (recurseQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
      T29 = SLOT_VALUE_INITD(iclass_, 14);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
      T8T = T29;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
        T8 = T8T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
        T30 = primitive_idQ(T8,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
        if (T30 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
          T31 = SLOT_VALUE_INITD(T8, 0);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
          subc_ = T31;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
          T35 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
          if (T35 != &KPfalseVKi) {
            Utmp_ = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
            T32 = Kscu_entryQVKeI(subc_, scu_);
            Utmp_ = T32;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
          if (Utmp_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
            T34 = Utmp_;
            T37 = T34;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
            T36 = SLOT_VALUE(subc_, 2);
            T37 = T36;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:247
          Kdo_implementation_class_cross_class_initializationsVKiMM0I(T37, scu_, &KPempty_vectorVKi, &KPtrueVKi);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
          T39 = SLOT_VALUE_INITD(T8, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
          T40_0 = T39;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
          T38_0 = T40_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
          T41 = T38_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
          T8T = T41;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
        T10 = &KPfalseVKi;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:246
      T12 = T10;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:243
      T11 = &KPfalseVKi;
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:243
    T14 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:251
    Kiclass_type_completeQ_setterVKeMM0I(&KPfalseVKi, iclass_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:251
    T13 = &KPfalseVKi;
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:237
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:233
  MV_SET_COUNT(0);
  return(T14);
}

D Kinstall_implementation_classVKiMM0I (D iclass_, D u_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:256
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:262
  Kaugment_superior_rcplsVKiI(iclass_, u_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:263
  T4 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:264
  SLOT_VALUE_SETTER(iclass_, T4, 2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:265
  Kinitialize_class_instanceQ_iepVKiI(T4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:268
  T3 = Krecord_new_class_subclass_usageVKiI(iclass_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:256
  MV_SET_COUNT(0);
  return(T3);
}

D Kadd_slot_methodsVKiI (D iclass_, D u_, D Urest_, D override_sealingQ_) {
  DWORD T5T, T5;
  D sd_;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:816
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:820
  T8 = SLOT_VALUE_INITD(iclass_, 16);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
  T9 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
  T5T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
    T5 = T5T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
    T11 = primitive_machine_word_equalQ(T5,T10);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
      T12 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T5);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
      sd_ = T12;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:822
      T13 = SLOT_VALUE_INITD(sd_, 4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:823
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:823
        T14 = SLOT_VALUE_INITD(sd_, 2);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:823
        ENGINE_NODE_CALL_PROLOG(&Kadd_getter_methodVKi, &K24, 4);
        ENGINE_NODE_CALL4(&K24, T14, T13, sd_, override_sealingQ_);
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:823
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:824
      T15 = SLOT_VALUE_INITD(sd_, 5);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:825
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:825
        T16 = SLOT_VALUE_INITD(sd_, 2);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:825
        ENGINE_NODE_CALL_PROLOG(&Kadd_setter_methodVKi, &K25, 4);
        ENGINE_NODE_CALL4(&K25, T16, T15, sd_, override_sealingQ_);
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:825
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
      T17 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
      T5T = T17;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
    T7 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:816
  MV_SET_COUNT(0);
  return(T7);
}

D Kcreate_slot_descriptorVKiMM0I (D class_, D all_keys_, D allocation_) {
  D T4;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:748
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:753
  CONGRUENT_CALL_PROLOG(&Kas_slot_descriptor_classVKi, 1);
  T4 = CONGRUENT_CALL1(allocation_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:753
  T6_0 = APPLY4(&KmakeVKd, T4, &KJowner_, class_, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:748
  T5_0 = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:748
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kaugment_superior_rcplsVKiI (D iclass_, D u_) {
  DWORD super_i_T, super_i_;
  DWORD pos_T, pos_;
  D T4;
  D super_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D Utmp_;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:728
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:729
  T8 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
  T9 = SLOT_VALUE_INITD(iclass_, 8);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
  T10 = SLOT_VALUE_INITD(iclass_, 9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:732
  T11 = SLOT_VALUE_INITD(iclass_, 9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
  T13 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
  T16 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
  super_i_T = T13;
  pos_T = T16;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    super_i_ = super_i_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    T14 = primitive_cast_raw_as_integer(super_i_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    pos_ = pos_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    T17 = primitive_cast_raw_as_integer(pos_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    T12 = primitive_machine_word_less_thanQ(super_i_,1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    if (T12 != &KPfalseVKi) {
      T4 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
      T15 = primitive_machine_word_less_thanQ(pos_,5);
      T4 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    if (T4 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
      T18 = KelementVKdMM11I(T9, T14, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
      super_ = T18;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:733
      T19 = primitive_idQ(super_,T8);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:733
      if (T19 != &KPfalseVKi) {
        T6 = T19;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:733
        T20 = primitive_idQ(super_,&KLobjectGVKd);
        T6 = T20;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:733
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:733
      if (T6 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
        T24 = primitive_idQ(u_,Dempty_subjunctive_class_universeVKe);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
        if (T24 != &KPfalseVKi) {
          Utmp_ = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
          T21 = Kscu_entryQVKeI(super_, u_);
          Utmp_ = T21;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
        if (Utmp_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
          T23 = Utmp_;
          T26 = T23;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
          T25 = SLOT_VALUE(super_, 2);
          T26 = T25;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:734
        Kaugment_iclass_rcpl_position_dataVKiI(T26, T17);
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:733
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
      T27 = primitive_machine_word_add_signal_overflow(super_i_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
      T28 = primitive_machine_word_add_signal_overflow(pos_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
      super_i_T = T27;
      pos_T = T28;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
    T7 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:730
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:728
  MV_SET_COUNT(0);
  return(T7);
}

D Krecord_new_class_subclass_usageVKiI (D iclass_) {
  DWORD T1T, T1;
  D sup_;
  DWORD super_i_T, super_i_;
  D super_;
  D T5T, T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T29;
  D T30_0;
  D T31;
  DWORD T32;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:290
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:291
  T7 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
  T8 = SLOT_VALUE(iclass_, 7);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
  T9 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
  T1T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
    T1 = T1T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
    T11 = primitive_machine_word_equalQ(T1,T10);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
      T12 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
      sup_ = T12;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:293
      T13 = SLOT_VALUE(sup_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:293
      T14 = SLOT_VALUE_INITD(T13, 14);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:293
      T15 = Kadd_newVKdMM3I(T14, T7, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:293
      T16 = SLOT_VALUE(sup_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:293
      SLOT_VALUE_SETTER(T15, T16, 14);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
      T17 = primitive_machine_word_add_signal_overflow(T1,4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
      T1T = T17;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:292
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
  T18 = SLOT_VALUE_INITD(iclass_, 8);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
  T19 = SLOT_VALUE_INITD(iclass_, 9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
  T21 = primitive_cast_integer_as_raw(T19);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
  super_i_T = T21;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
    super_i_ = super_i_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
    T22 = primitive_cast_raw_as_integer(super_i_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
    T20 = primitive_machine_word_less_thanQ(super_i_,1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
    if (T20 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
      T23 = KelementVKdMM11I(T18, T22, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
      super_ = T23;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:296
      T24 = SLOT_VALUE(super_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
      T25 = SLOT_VALUE_INITD(T24, 13);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
      T5T = T25;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
        T5 = T5T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
        T26 = primitive_idQ(T5,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
        if (T26 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
          T27 = SLOT_VALUE_INITD(T5, 0);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:298
          Kdecache_gfVKeMM0I(T27);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
          T29 = SLOT_VALUE_INITD(T5, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
          T30_0 = T29;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
          T28_0 = T30_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
          T31 = T28_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
          T5T = T31;
          goto L2;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:297
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
      T32 = primitive_machine_word_add_signal_overflow(super_i_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
      super_i_T = T32;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
    T6 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:295
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:290
  MV_SET_COUNT(0);
  return(T6);
}

D Kcompute_cpl_rcpl_stuffVKiI (D iclass_, D u_) {
  D T2;
  D T3;
  D mask_;
  D T5;
  D self_pos_;
  DWORD pos_T, pos_;
  D T8T, T8;
  D T9;
  D super_;
  D result_T, result_;
  D T12T, T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  DWORD T40;
  D T41;
  DWORD T42;
  D T43_0;
  D T44;
  D T45_0;
  D T46;
  D T47_0;
  D T47_1;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:678
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:681
  T2 = Kcompute_implementation_class_precedence_listVKiI(iclass_, u_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
  result_T = &KPempty_listVKi;
  T12T = T2;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
    T17 = primitive_idQ(T12,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      T18 = SLOT_VALUE_INITD(T12, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      T13 = CALL1(&Kiclass_classVKe, T18);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      SLOT_VALUE_SETTER(T13, T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      SLOT_VALUE_SETTER(result_, T14, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      T20 = SLOT_VALUE_INITD(T12, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      T21_0 = T20;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      T19_0 = T21_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      T22 = T19_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
      result_T = T14;
      T12T = T22;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
    T15_0 = KreverseXVKdMM2I(result_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
  T16 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
  Kall_superclasses_setterVKeMM1I(T16, iclass_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:685
  T23 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:686
  T24 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:686
  T25 = SLOT_VALUE_INITD(T24, 3);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:685
  T3 = KloopF64I(iclass_, T23, T25, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:682
  mask_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:710
  T26 = KsizeVKdMM30I(T2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:710
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T5 = CONGRUENT_CALL2(T26, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:710
  self_pos_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:712
  T27 = primitive_cast_integer_as_raw(self_pos_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:712
  T28 = primitive_machine_word_add_signal_overflow(T27,4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:712
  T29 = primitive_cast_raw_as_integer(T28);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:712
  T31 = primitive_machine_word_less_thanQ(25,T28);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:712
  if (T31 != &KPfalseVKi) {
    T30 = T29;
  } else {
    T30 = (D) 25;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:712
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:711
  T32 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T30);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
  T34 = primitive_cast_integer_as_raw(self_pos_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
  pos_T = T34;
  T8T = T2;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    pos_ = pos_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    T35 = primitive_cast_raw_as_integer(pos_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    T8 = T8T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    T33 = primitive_machine_word_less_thanQ(pos_,1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    if (T33 != &KPfalseVKi) {
      T9 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      T36 = primitive_idQ(T8,&KPempty_listVKi);
      T9 = T36;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    if (T9 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      T37 = SLOT_VALUE_INITD(T8, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      super_ = T37;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
      T38 = SLOT_VALUE_INITD(super_, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
      T39 = SLOT_VALUE_INITD(T32, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
      T40 = primitive_cast_integer_as_raw(T39);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
      T41 = primitive_machine_word_unsigned_less_thanQ(pos_,T40);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
      if (T41 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T38, T32, 1, pos_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
        Kelement_range_errorVKeI(T32, T35);
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:715
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      T42 = primitive_machine_word_add_signal_overflow(pos_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      T44 = SLOT_VALUE_INITD(T8, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      T45_0 = T44;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      T43_0 = T45_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      T46 = T43_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
      pos_T = T42;
      T8T = T46;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:714
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:718
  SLOT_VALUE_SETTER(T32, iclass_, 8);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:719
  SLOT_VALUE_SETTER(self_pos_, iclass_, 9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:720
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, iclass_, 10);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:721
  T47_0 = T2;
  T47_1 = mask_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:678
  MV_SET_ELT(1, T47_1);
  MV_SET_COUNT(2);
  return(T47_0);
}

D Kcheck_for_duplicated_slotsVKiI (D slotvec_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D thisslot_;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12;
  D T13;
  D thatslot_;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  DWORD jF29T, jF29;
  D sublosersF30T, sublosersF30;
  DWORD iF31T, iF31;
  D losersF32T, losersF32;
  D T33;
  D T34;
  D T35;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:757
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:759
  T1 = SLOT_VALUE_INITD(slotvec_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
  iF31T = 1;
  losersF32T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
    iF31 = iF31T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
    T35 = primitive_cast_raw_as_integer(iF31);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
    losersF32 = losersF32T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:761
    T7 = primitive_idQ(T35,T1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:761
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:762
      T8 = primitive_idQ(losersF32,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:762
      if (T8 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:765
        T9 = SLOT_VALUE_INITD(losersF32, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:765
        T2 = CALL1(&KheadVKd, T9);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:765
        T3 = CALL1(&Kslot_ownerVKe, T2);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:765
        T10.vector_element_[0] = T3;
        T10.vector_element_[1] = losersF32;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:765
        T4 = KlistVKdI(&T10);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:763
        T11.vector_element_[0] = &KJformat_string_;
        T11.vector_element_[1] = &K61;
        T11.vector_element_[2] = &KJformat_arguments_;
        T11.vector_element_[3] = T4;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:763
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T5 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T11);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:763
        KerrorVKdMM0I(T5, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:762
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:768
      T12 = KelementVKdMM11I(slotvec_, T35, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:768
      thisslot_ = T12;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:779
      jF29T = 1;
      sublosersF30T = &KPempty_listVKi;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:779
        jF29 = jF29T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:779
        T33 = primitive_cast_raw_as_integer(jF29);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:779
        sublosersF30 = sublosersF30T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:770
        T18 = primitive_idQ(T33,T1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:770
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
          T19 = primitive_machine_word_add_signal_overflow(iF31,4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
          T20 = primitive_idQ(sublosersF30,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
          if (T20 != &KPfalseVKi) {
            T13 = losersF32;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            T21 = SLOT_VALUE_INITD(thisslot_, 4);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            T22 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            SLOT_VALUE_SETTER(thisslot_, T22, 0);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            SLOT_VALUE_SETTER(sublosersF30, T22, 1);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            T23 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            SLOT_VALUE_SETTER(T21, T23, 0);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            SLOT_VALUE_SETTER(T22, T23, 1);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            T24 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            SLOT_VALUE_SETTER(T23, T24, 0);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:774
            SLOT_VALUE_SETTER(losersF32, T24, 1);
            T13 = T24;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
          iF31T = T19;
          losersF32T = T13;
          goto L0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:778
          T25 = KelementVKdMM11I(slotvec_, T33, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:778
          thatslot_ = T25;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:779
          T26 = primitive_machine_word_add_signal_overflow(jF29,4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:780
          T27 = primitive_idQ(T35,T33);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:780
          if (T27 != &KPfalseVKi) {
            T16 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:780
            T15 = KgetterEVKiMM0I(thisslot_, thatslot_);
            T16 = T15;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:780
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:780
          if (T16 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:781
            T28 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:781
            SLOT_VALUE_SETTER(thatslot_, T28, 0);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:781
            SLOT_VALUE_SETTER(sublosersF30, T28, 1);
            T17 = T28;
          } else {
            T17 = sublosersF30;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:780
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:779
          jF29T = T26;
          sublosersF30T = T17;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:770
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:779
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:761
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:771
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:790
  T34 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:757
  MV_SET_COUNT(0);
  return(T34);
}

D Kcheck_for_illegally_inherited_slotsVKiI (D slotvec_, D all_super_iclasses_) {
  D othersups_;
  DWORD T3T, T3;
  D sd_;
  D T5T, T5;
  D iclass_;
  DWORD T7T, T7;
  D osd_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
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
  D T26;
  D T27;
  _KLsimple_object_vectorGVKd_3 T28 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T29 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T30;
  D T31_0;
  D T32;
  D T33_0;
  D T34;
  DWORD T35;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:795
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:799
  T13 = SLOT_VALUE_INITD(all_super_iclasses_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:799
  othersups_ = T13;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
  T14 = SLOT_VALUE_INITD(slotvec_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
  T15 = primitive_cast_integer_as_raw(T14);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
  T3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
    T16 = primitive_machine_word_equalQ(T3,T15);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
      T17 = REPEATED_D_SLOT_VALUE_TAGGED(slotvec_, 1, T3);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
      sd_ = T17;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
      T5T = othersups_;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
        T5 = T5T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
        T18 = primitive_idQ(T5,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
        if (T18 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
          T19 = SLOT_VALUE_INITD(T5, 0);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
          iclass_ = T19;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
          T20 = SLOT_VALUE_INITD(iclass_, 16);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
          T21 = SLOT_VALUE_INITD(T20, 0);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
          T22 = primitive_cast_integer_as_raw(T21);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
          T7T = 1;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
            T7 = T7T;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
            T23 = primitive_machine_word_equalQ(T7,T22);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
            if (T23 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
              T24 = REPEATED_D_SLOT_VALUE_TAGGED(T20, 1, T7);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
              osd_ = T24;
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:803
              T9 = KgetterEVKiMM0I(sd_, osd_);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:803
              if (T9 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:806
                T25 = SLOT_VALUE_INITD(sd_, 2);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:807
                T26 = SLOT_VALUE_INITD(sd_, 4);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:808
                T27 = SLOT_VALUE_INITD(iclass_, 1);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:806
                T28.vector_element_[0] = T25;
                T28.vector_element_[1] = T26;
                T28.vector_element_[2] = T27;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:806
                T10 = KlistVKdI(&T28);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:804
                T29.vector_element_[0] = &KJformat_string_;
                T29.vector_element_[1] = &K60;
                T29.vector_element_[2] = &KJformat_arguments_;
                T29.vector_element_[3] = T10;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:804
                CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                T11 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T29);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:804
                KerrorVKdMM0I(T11, &KPempty_vectorVKi);
              }
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:803
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
              T30 = primitive_machine_word_add_signal_overflow(T7,4);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
              T7T = T30;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:802
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
          T32 = SLOT_VALUE_INITD(T5, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
          T33_0 = T32;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
          T31_0 = T33_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
          T34 = T31_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
          T5T = T34;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:801
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
      T35 = primitive_machine_word_add_signal_overflow(T3,4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
      T3T = T35;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
    T12 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:800
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:795
  MV_SET_COUNT(0);
  return(T12);
}

D Kfinalize_inheritanceVKiMM0I (D iclass_, D all_super_iclasses_, D u_, D subtype_mask_) {
  D T5;
  D mm_wrapper_;
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
  DWORD T20;
  D T21;
  D T22;
  D T23;
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:500
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:506
  Kiclass_type_completeQ_setterVKeMM0I(&KPtrueVKi, iclass_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:507
  Kcompute_slot_descriptorsVKiMM0I(iclass_, all_super_iclasses_, u_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:509
  T9 = SLOT_VALUE_INITD(iclass_, 20);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:509
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:509
  T11 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T10);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:508
  SLOT_VALUE_SETTER(T11, iclass_, 22);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:510
  Kcompute_defaulted_initialization_argumentsVKiI(iclass_, all_super_iclasses_, u_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:513
  T12 = SLOT_VALUE_INITD(iclass_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:513
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:513
  T14 = primitive_machine_word_logand(T13,262140);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:513
  T15 = primitive_machine_word_multiply_signal_overflow(T14,4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:513
  T16 = primitive_machine_word_logior(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:513
  T17 = primitive_machine_word_add_signal_overflow(T16,4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:513
  T18 = primitive_cast_raw_as_integer(T17);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:512
  T5 = Kmake_mm_wrapperVKiI(iclass_, T18, (D) 29);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:506
  mm_wrapper_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:515
  SLOT_VALUE_SETTER(subtype_mask_, mm_wrapper_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:516
  SLOT_VALUE_SETTER(mm_wrapper_, iclass_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:517
  Kclass_completeQ_setterVKeMM1I(&KPtrueVKi, iclass_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:518
  T19 = SLOT_VALUE_INITD(iclass_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:518
  T20 = primitive_cast_integer_as_raw(T19);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:518
  T21 = primitive_machine_word_logbitQ(18,T20);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:518
  if (T21 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:520
    T22 = SLOT_VALUE_INITD(iclass_, 8);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:520
    T23 = KelementVKdMM11I(T22, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:520
    T24 = primitive_idQ(T23,&KLobjectGVKd);
    T7 = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:518
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:518
  Kiclass_instantiableQ_setterVKeMM0I(T7, iclass_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:518
  T8 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:500
  MV_SET_COUNT(0);
  return(T8);
}

D Kcompute_slot_descriptorsVKiMM0I (D impcls_, D the_supericlasses_, D u_) {
  D T4;
  D first_primary_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D all_slots_;
  D T12;
  D T13;
  D T14;
  D icount_;
  D T16;
  D T17;
  D ccount_;
  D T19;
  D repeater_;
  D T21;
  D repeater_size_;
  D T23;
  D T24_0;
  D T25;
  D T26;
  D T27;
  D T28;
  D ic_;
  D T30;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  D lF37T, lF37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:354
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:358
  T23 = SLOT_VALUE_INITD(impcls_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:359
  T24_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:359
  T25 = T24_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:359
  all_slots_ = MAKE_D_CELL(T25);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:360
  icount_ = MAKE_D_CELL((D) 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:361
  ccount_ = MAKE_D_CELL((D) 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:362
  repeater_ = MAKE_D_CELL(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:363
  repeater_size_ = MAKE_D_CELL(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:364
  T4 = MAKE_CLOSURE(&Kcollect_superclass_slotsF56, 6);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:364
  INIT_CLOSURE(T4, 6, repeater_size_, repeater_, ccount_, icount_, all_slots_, T4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:395
  get_teb()->function = T4;
  Kcollect_superclass_slotsF56I(T23, the_supericlasses_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:397
  T17 = GET_D_CELL_VAL(icount_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:397
  T26 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T17);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:399
  T19 = GET_D_CELL_VAL(ccount_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:399
  T27 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T19);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:414
  T28 = SLOT_VALUE_INITD(the_supericlasses_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:410
  lF37T = T28;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:410
    lF37 = lF37T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:410
    T38 = lF37;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:403
    T30 = primitive_idQ(T38,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:403
    if (T30 != &KPfalseVKi) {
      T41 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:406
      T31 = SLOT_VALUE_INITD(T38, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:406
      ic_ = T31;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:407
      T32 = SLOT_VALUE_INITD(ic_, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:407
      T33 = primitive_cast_integer_as_raw(T32);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:407
      T34 = primitive_machine_word_logbitQ(19,T33);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:407
      if (T34 != &KPfalseVKi) {
        T40 = ic_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:410
        T35 = SLOT_VALUE_INITD(T38, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:410
        lF37T = T35;
        goto L0;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:414
        T39 = T36;
        T40 = T39;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:407
      T41 = T40;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:403
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:410
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:416
  if (T41 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:417
    first_primary_ = T41;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:436
    T42 = SLOT_VALUE_INITD(first_primary_, 4);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:436
    Kanonymous_of_compute_slot_descriptorsF45I(T23, T26, T42);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:437
    T43 = SLOT_VALUE_INITD(first_primary_, 20);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:437
    Kanonymous_of_compute_slot_descriptorsF45I(T23, T27, T43);
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:416
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:416
  T6 = MAKE_CLOSURE(&Kallocate_superclass_slotsF47, 3);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:416
  INIT_CLOSURE(T6, 3, repeater_size_, icount_, T6);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:480
  get_teb()->function = T6;
  Kallocate_superclass_slotsF47I(T41, T27, T26, T23, the_supericlasses_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:482
  T14 = GET_D_CELL_VAL(all_slots_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:482
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T7 = CONGRUENT_CALL2(T14, T26);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:482
  if (T7 != &KPfalseVKi) {
    T10 = T26;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:485
    T13 = GET_D_CELL_VAL(all_slots_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:485
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T8 = CONGRUENT_CALL2(T13, T27);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:482
    if (T8 != &KPfalseVKi) {
      T9 = T27;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:490
      T12 = GET_D_CELL_VAL(all_slots_);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:490
      T44 = KasVKdMM41I(&KLsimple_object_vectorGVKd, T12);
      T9 = T44;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:482
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:482
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:481
  CONGRUENT_CALL_PROLOG(&Kslot_descriptors_setterVKe, 2);
  CONGRUENT_CALL2(T10, impcls_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:492
  SLOT_VALUE_SETTER(T26, impcls_, 4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:493
  SLOT_VALUE_SETTER(T27, impcls_, 20);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:494
  T21 = GET_D_CELL_VAL(repeater_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:494
  SLOT_VALUE_SETTER(T21, impcls_, 3);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:495
  T16 = GET_D_CELL_VAL(icount_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:495
  Kinstance_storage_size_setterVKeMM1I(T16, impcls_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:496
  T45 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:354
  MV_SET_COUNT(0);
  return(T45);
}

static D Kcollect_superclass_slotsF56I (D implicit_argument_, D supericlasses_) {
  D ic_;
  D T3T, T3;
  D sd_;
  D duplicate_slotPexit_30_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  D T13;
  D osd_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D Uobject_;
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
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  DWORD T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  DWORD T51;
  DWORD T52;
  D T53;
  D T54;
  D T55;
  DWORD T56;
  DWORD T57;
  D T58;
  D T59;
  D T60;
  _KLsimple_object_vectorGVKd_3 T61 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T62 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T63;
  DWORD T64;
  D T65;
  _KLsimple_object_vectorGVKd_1 T66 = {&KLsimple_object_vectorGVKdW, (D) 5};
  DWORD T67;
  D T68;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:364
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:365
  T38 = primitive_idQ(supericlasses_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:365
  if (T38 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:365
    T26 = &KPfalseVKi;
    T27 = T26;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:367
    T39 = SLOT_VALUE_INITD(supericlasses_, 1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:367
    get_teb()->function = CREF(5);
    Kcollect_superclass_slotsF56I(implicit_argument_, T39);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:368
    T40 = SLOT_VALUE_INITD(supericlasses_, 0);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:367
    ic_ = T40;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
    T41 = SLOT_VALUE_INITD(ic_, 16);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
    T42 = SLOT_VALUE_INITD(T41, 0);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
    T44 = primitive_cast_integer_as_raw(T42);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
    T3T = (D) 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
      T3 = T3T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
      T43 = primitive_cast_integer_as_raw(T3);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
      T45 = primitive_machine_word_equalQ(T43,T44);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
      if (T45 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
        T46 = REPEATED_D_SLOT_VALUE_TAGGED(T41, 1, T43);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
        sd_ = T46;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:370
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:371
        T47 = SLOT_VALUE_INITD(sd_, 4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        T32 = GET_D_CELL_VAL(CREF(4));
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
        T6 = CONGRUENT_CALL1(T32);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        T7 = T6;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        T8 = MV_GET_ELT(1);
;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        T9 = MV_GET_ELT(2);
;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        T10 = MV_GET_ELT(3);
;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        T11 = MV_GET_ELT(5);
;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        T12T = T7;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
          T12 = T12T;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
          T31 = GET_D_CELL_VAL(CREF(4));
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
          T13 = CALL3(T10, T31, T12, T8);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
          if (T13 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
            T30 = GET_D_CELL_VAL(CREF(4));
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
            T15 = CALL2(T11, T30, T12);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
            osd_ = T15;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:373
            T48 = SLOT_VALUE_INITD(osd_, 4);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:373
            T16 = KEEVKdI(T47, T48);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:373
            if (T16 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:370
              T49 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:370
              T49;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:373
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
            T29 = GET_D_CELL_VAL(CREF(4));
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
            T17 = CALL2(T9, T29, T12);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
            T12T = T17;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:372
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:375
        T28 = GET_D_CELL_VAL(CREF(4));
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:375
        CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
        T18 = CONGRUENT_CALL2(T28, sd_);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:375
        T19 = T18;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:375
        SET_D_CELL_VAL(CREF(4), T19);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
        CONGRUENT_CALL_PROLOG(&Kslot_allocationVKe, 1);
        Uobject_ = CONGRUENT_CALL1(sd_);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
        T50 = primitive_idQ(Uobject_,IKJinstance_);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
        if (T50 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:377
          T34 = GET_D_CELL_VAL(CREF(3));
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:377
          T51 = primitive_cast_integer_as_raw(T34);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:377
          T52 = primitive_machine_word_add_signal_overflow(T51,4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:377
          T53 = primitive_cast_raw_as_integer(T52);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:377
          SET_D_CELL_VAL(CREF(3), T53);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
          T54 = primitive_idQ(Uobject_,&KJeach_subclass_);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
          if (T54 != &KPfalseVKi) {
            T21 = T54;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
            T55 = primitive_idQ(Uobject_,&KJclass_);
            T21 = T55;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
          if (T21 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:378
            T35 = GET_D_CELL_VAL(CREF(2));
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:378
            T56 = primitive_cast_integer_as_raw(T35);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:378
            T57 = primitive_machine_word_add_signal_overflow(T56,4);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:378
            T58 = primitive_cast_raw_as_integer(T57);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:378
            SET_D_CELL_VAL(CREF(2), T58);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
            T59 = primitive_idQ(Uobject_,&KJvirtual_);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
            if (T59 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
              T60 = primitive_idQ(Uobject_,&KJrepeated_);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
              if (T60 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:381
                T36 = GET_D_CELL_VAL(CREF(1));
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:381
                if (T36 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:384
                  T37 = GET_D_CELL_VAL(CREF(1));
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:384
                  T61.vector_element_[0] = T37;
                  T61.vector_element_[1] = sd_;
                  T61.vector_element_[2] = implicit_argument_;
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:384
                  T22 = KlistVKdI(&T61);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:382
                  T62.vector_element_[0] = &KJformat_string_;
                  T62.vector_element_[1] = &K57;
                  T62.vector_element_[2] = &KJformat_arguments_;
                  T62.vector_element_[3] = T22;
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:382
                  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                  T23 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T62);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:382
                  KerrorVKdMM0I(T23, &KPempty_vectorVKi);
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:386
                  SET_D_CELL_VAL(CREF(1), sd_);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:387
                  T24 = CALL1(&Ksize_slot_descriptorVKe, sd_);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:387
                  SET_D_CELL_VAL(CREF(0), T24);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:388
                  T33 = GET_D_CELL_VAL(CREF(3));
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:388
                  T63 = primitive_cast_integer_as_raw(T33);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:388
                  T64 = primitive_machine_word_add_signal_overflow(T63,4);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:388
                  T65 = primitive_cast_raw_as_integer(T64);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:388
                  SET_D_CELL_VAL(CREF(3), T65);
                }
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:381
              } else {
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
                T66.vector_element_[0] = Uobject_;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
                KerrorVKdMM1I(&K51, &T66);
              }
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
            }
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:376
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:370
        L2: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
        T67 = primitive_machine_word_add_signal_overflow(T43,4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
        T68 = primitive_cast_raw_as_integer(T67);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
        T3T = T68;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
      T25 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:369
    T27 = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:365
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:364
  MV_SET_COUNT(0);
  return(T27);
}

static D Kallocate_superclass_slotsF47I (D implicit_argumentF41, D implicit_argumentF40, D implicit_argumentF39, D implicit_argumentF38, D supericlasses_) {
  D ic_;
  D T6;
  D T7;
  D T8T, T8;
  D Uobject_;
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
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  _KLsimple_object_vectorGVKd_1 T35 = {&KLsimple_object_vectorGVKdW, (D) 5};
  DWORD T36;
  D T37;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:416
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:440
  T18 = primitive_idQ(supericlasses_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:440
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:440
    T14 = &KPfalseVKi;
    T15 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:442
    T19 = SLOT_VALUE_INITD(supericlasses_, 1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:442
    get_teb()->function = CREF(2);
    Kallocate_superclass_slotsF47I(implicit_argumentF41, implicit_argumentF40, implicit_argumentF39, implicit_argumentF38, T19);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:443
    T20 = SLOT_VALUE_INITD(supericlasses_, 0);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:442
    ic_ = T20;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:444
    if (implicit_argumentF41 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:444
      T6 = Kimplementation_class_subtypeQVKiI(implicit_argumentF41, ic_);
      T7 = T6;
    } else {
      T7 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:444
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:444
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:444
      T12 = &KPfalseVKi;
      T13 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
      T21 = SLOT_VALUE_INITD(ic_, 16);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
      T22 = SLOT_VALUE_INITD(T21, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
      T24 = primitive_cast_integer_as_raw(T22);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
      T8T = (D) 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
        T8 = T8T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
        T23 = primitive_cast_integer_as_raw(T8);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
        T25 = primitive_machine_word_equalQ(T23,T24);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
        if (T25 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
          T26 = REPEATED_D_SLOT_VALUE_TAGGED(T21, 1, T23);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
          Uobject_ = CALL1(&Kslot_allocationVKe, T26);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
          T27 = primitive_idQ(Uobject_,IKJinstance_);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
          if (T27 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:464
            Kanonymous_of_compute_slot_descriptorsF52I(implicit_argumentF38, T26, implicit_argumentF39);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
            T28 = primitive_idQ(Uobject_,&KJeach_subclass_);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
            if (T28 != &KPfalseVKi) {
              T10 = T28;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
              T29 = primitive_idQ(Uobject_,&KJclass_);
              T10 = T29;
            }
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
            if (T10 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:466
              Kanonymous_of_compute_slot_descriptorsF52I(implicit_argumentF38, T26, implicit_argumentF40);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
              T30 = primitive_idQ(Uobject_,&KJvirtual_);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
              if (T30 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
                T31 = primitive_idQ(Uobject_,&KJrepeated_);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
                if (T31 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:469
                  T16 = GET_D_CELL_VAL(CREF(1));
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:469
                  T32 = primitive_cast_integer_as_raw(T16);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:469
                  T33 = primitive_machine_word_subtract_signal_overflow(T32,4);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:470
                  T34 = REPEATED_D_SLOT_VALUE_TAGGED(implicit_argumentF39, 1, T33);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:470
                  if (T34 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:473
                    KerrorVKdMM1I(&K50, &KPempty_vectorVKi);
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:471
                    T17 = GET_D_CELL_VAL(CREF(0));
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:471
                    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T17, implicit_argumentF39, 1, T33);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:470
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
                  T35.vector_element_[0] = Uobject_;
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
                  KerrorVKdMM1I(&K51, &T35);
                }
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
              }
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
            }
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:462
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
          T36 = primitive_machine_word_add_signal_overflow(T23,4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
          T37 = primitive_cast_raw_as_integer(T36);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
          T8T = T37;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
        T11 = &KPfalseVKi;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:461
      T13 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:444
    T15 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:440
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:416
  MV_SET_COUNT(0);
  return(T15);
}

static D Kanonymous_of_compute_slot_descriptorsF45I (D implicit_argument_, D into_vec_, D from_vec_) {
  DWORD i_T, i_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_3 T13 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:419
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
  T8 = SLOT_VALUE_INITD(from_vec_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
    T10 = primitive_machine_word_less_thanQ(i_,T9);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:421
      T11 = REPEATED_D_SLOT_VALUE_TAGGED(from_vec_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:422
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:423
        T12 = REPEATED_D_SLOT_VALUE_TAGGED(into_vec_, 1, i_);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:424
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:425
          T4 = KgetterEVKiMM0I(T11, T12);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:425
          if (T4 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:428
            T13.vector_element_[0] = implicit_argument_;
            T13.vector_element_[1] = T12;
            T13.vector_element_[2] = T11;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:428
            T5 = KlistVKdI(&T13);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:426
            T14.vector_element_[0] = &KJformat_string_;
            T14.vector_element_[1] = &K46;
            T14.vector_element_[2] = &KJformat_arguments_;
            T14.vector_element_[3] = T5;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:426
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T6 = CONGRUENT_CALL2(&KLsimple_slot_errorGVKi, &T14);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:426
            KerrorVKdMM0I(T6, &KPempty_vectorVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:425
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:431
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T11, into_vec_, 1, i_);
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:424
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:422
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
      T15 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
      i_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
    T7 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:419
  return(T7);
}

D Kimplementation_class_subtypeQVKiI (D ic1_, D ic2_) {
  D donePexit_29_;
  D T3;
  DWORD super_i_T, super_i_;
  D xF5;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_1 T19 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T20;
  DWORD T21;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:336
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:339
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:340
  T10 = SLOT_VALUE_INITD(ic2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
  T11 = SLOT_VALUE_INITD(ic1_, 8);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
  T12 = SLOT_VALUE_INITD(ic1_, 9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
  super_i_T = T14;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
    super_i_ = super_i_T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
    T15 = primitive_cast_raw_as_integer(super_i_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
    T13 = primitive_machine_word_less_thanQ(super_i_,1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
      T16 = KelementVKdMM11I(T11, T15, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
      xF5 = T16;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:345
      T17 = primitive_idQ(xF5,T10);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:345
      if (T17 != &KPfalseVKi) {
        T6 = T17;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:345
        T18 = primitive_idQ(xF5,ic2_);
        T6 = T18;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:345
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:345
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:345
        T19.vector_element_[0] = &KPtrueVKi;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:339
        T20 = MV_SET_REST_AT(&T19, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:339
        T8_0 = T20;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:345
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
      T21 = primitive_machine_word_add_signal_overflow(super_i_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
      super_i_T = T21;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:344
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:347
  T7 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:339
  T8_0 = T7;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:339
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:336
  T9_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:336
  MV_SET_COUNT(1);
  return(T9_0);
}

static D Kanonymous_of_compute_slot_descriptorsF52I (D implicit_argument_, D sd_, D vec_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  _KLsimple_object_vectorGVKd_2 T8 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD iF13T, iF13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:446
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:447
  T3 = SLOT_VALUE_INITD(vec_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:453
  iF13T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:453
    iF13 = iF13T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:452
    T14 = primitive_cast_raw_as_integer(iF13);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:449
    T7 = primitive_idQ(T14,T3);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:449
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:450
      T8.vector_element_[0] = sd_;
      T8.vector_element_[1] = implicit_argument_;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:450
      T9 = KerrorVKdMM1I(&K53, &T8);
      T6 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:452
      T10 = REPEATED_D_SLOT_VALUE_TAGGED(vec_, 1, iF13);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:452
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:453
        T11 = primitive_machine_word_add_signal_overflow(iF13,4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:453
        iF13T = T11;
        goto L0;
        T5 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:455
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(sd_, vec_, 1, iF13);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:455
        T4 = sd_;
        MV_SET_ELT(0, sd_);
        MV_SET_COUNT(1);
        T5 = T4;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:452
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:449
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:453
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:446
  return(T6);
}

D Kcompute_implementation_class_precedence_listVKiI (D c_, D u_) {
  D T3;
  D T4;
  D T5;
  D old_;
  D T7_0;
  D T8;
  D T9;
  D c_direct_superclasses_;
  _KLsimple_object_vectorGVKd_1 T11 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;
  D T19;
  D T20T, T20;
  D resultF21T, resultF21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T26;
  D T27_0;
  D T28;
  D T29;
  D T30T, T30;
  D resultF31T, resultF31;
  D T32;
  D T33;
  D T34_0;
  D T35;
  D T36_0;
  D T37;
  D T38;
  D T39;
  D T40T, T40;
  D resultF41T, resultF41;
  D T42;
  D T43;
  D T44_0;
  D T45;
  D T46_0;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D partial_cplF56T, partial_cplF56;
  D remaining_listsF57T, remaining_listsF57;
  D T58;
  _KLsimple_object_vectorGVKd_2 T59 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  _KLsimple_object_vectorGVKd_1 T66 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T67;
  _KLsimple_object_vectorGVKd_3 T68 = {&KLsimple_object_vectorGVKdW, (D) 13};

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:572
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:575
  T8 = SLOT_VALUE(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:611
  T9 = SLOT_VALUE(c_, 7);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:611
  c_direct_superclasses_ = Kmap_asVKdMM0I(&KLlistGVKd, T8, T9, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:612
  T11.vector_element_[0] = c_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:612
  T3 = KlistVKdI(&T11);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  T12.vector_element_[0] = u_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  T14 = primitive_copy_vector(&T12);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_compute_implementation_class_precedence_listF95, 1, T14);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T15 = CONGRUENT_CALL1(c_direct_superclasses_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  T16 = CALL3(&Kmap_as_oneVKi, T15, T13, c_direct_superclasses_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:615
  T17.vector_element_[0] = c_direct_superclasses_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:615
  T4 = KlistVKdI(&T17);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  T5 = CALL2(&KconcatenateVKd, T16, T4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
  partial_cplF56T = T3;
  remaining_listsF57T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
    partial_cplF56 = partial_cplF56T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
    remaining_listsF57 = remaining_listsF57T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
    T58 = remaining_listsF57;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
    T20T = T58;
    resultF21T = &KPtrueVKi;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
      T20 = T20T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
      resultF21 = resultF21T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
      T23 = primitive_idQ(T20,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
      if (T23 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
        T24 = SLOT_VALUE_INITD(T20, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
        if (resultF21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
          T26 = SLOT_VALUE_INITD(T20, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
          T27_0 = T26;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
          T25_0 = T27_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
          T28 = T25_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
          CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
          T22 = CONGRUENT_CALL1(T24);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
          T20T = T28;
          resultF21T = T22;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
    if (resultF21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:579
      T29 = KreverseXVKdMM2I(partial_cplF56);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:612
      T61 = T29;
      T65 = T61;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
      T30T = T58;
      resultF31T = &KPfalseVKi;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
        T30 = T30T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
        resultF31 = resultF31T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
        T32 = primitive_idQ(T30,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
        if (T32 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
          T33 = SLOT_VALUE_INITD(T30, 0);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
          if (resultF31 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
            T35 = SLOT_VALUE_INITD(T30, 1);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
            T36_0 = T35;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
            T34_0 = T36_0;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
            T37 = T34_0;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:593
            T38 = primitive_idQ(T33,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:593
            if (T38 != &KPfalseVKi) {
              T52 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:593
              T39 = SLOT_VALUE_INITD(T33, 0);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
              T40T = T58;
              resultF41T = &KPfalseVKi;
            L3: ;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                T40 = T40T;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                resultF41 = resultF41T;
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                T42 = primitive_idQ(T40,&KPempty_listVKi);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                if (T42 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                  T43 = SLOT_VALUE_INITD(T40, 0);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                  if (resultF41 == &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                    T45 = SLOT_VALUE_INITD(T40, 1);
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                    T46_0 = T45;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                    T44_0 = T46_0;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                    T47 = T44_0;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:585
                    T48 = CALL1(&KtailVKd, T43);
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:585
                    T49 = CALL2(&KmemberQVKd, T39, T48);
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                    T50 = T49;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                    T40T = T47;
                    resultF41T = T50;
                    goto L3;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                }
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
              if (resultF41 != &KPfalseVKi) {
                T51 = &KPfalseVKi;
              } else {
                T51 = T39;
              }
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:588
              T52 = T51;
            }
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:593
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
            T30T = T37;
            resultF31T = T52;
            goto L2;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:596
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:598
      if (resultF31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:599
        T18 = MAKE_CLOSURE_INITD(&Kremove_nextF94, 1, resultF31);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
        T53 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
        SLOT_VALUE_SETTER(resultF31, T53, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
        SLOT_VALUE_SETTER(partial_cplF56, T53, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:603
        T54 = Kmap_intoVKdMM0I(T58, T18, T58, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
        partial_cplF56T = T53;
        remaining_listsF57T = T54;
        goto L0;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:612
        T62 = T55;
        T64 = T62;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:605
        T59.vector_element_[0] = &KJformat_string_;
        T59.vector_element_[1] = &K70;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:605
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T19 = CONGRUENT_CALL2(&KLinconsistent_precedence_class_errorGVKi, &T59);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:605
        T60 = KerrorVKdMM0I(T19, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:612
        T63 = T60;
        T64 = T63;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:598
      T65 = T64;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:578
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:602
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:616
  old_ = Kcompute_implementation_class_precedence_list_oldVKiI(c_, u_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:617
  T66.vector_element_[0] = old_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:617
  T67 = KeveryQVKdMM0I(&KEVKd, T65, &T66);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:617
  if (T67 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:618
    T68.vector_element_[0] = c_;
    T68.vector_element_[1] = old_;
    T68.vector_element_[2] = T65;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:618
    KsignalVKdMM1I(&K74, &T68);
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:617
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:620
  T7_0 = T65;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:572
  MV_SET_COUNT(1);
  return(T7_0);
}

static D KloopF64I (D iclass_, D l_, D mask_, D first_primary_) {
  D first_primaryF4;
  D T5;
  D sup_;
  D nxt_;
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
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  _KLsimple_object_vectorGVKd_3 T36 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T37;
  D T38;
  D lF39;
  D T40;
  D maskF41;
  D T42;
  D first_primaryF43;
  D T44;
  D lF45T, lF45;
  D maskF46T, maskF46;
  D first_primaryF47T, first_primaryF47;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:685
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
  lF45T = l_;
  maskF46T = mask_;
  first_primaryF47T = first_primary_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:705
    lF45 = lF45T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:705
    maskF46 = maskF46T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:705
    first_primaryF47 = first_primaryF47T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
    lF39 = lF45;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
    T40 = lF39;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
    maskF41 = maskF46;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
    T42 = maskF41;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
    first_primaryF43 = first_primaryF47;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:685
    first_primaryF4 = first_primaryF43;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:689
    T19 = primitive_idQ(T40,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:689
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:690
      T5 = T42;
      MV_SET_ELT(0, T42);
      MV_SET_COUNT(1);
      T18 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:692
      T20 = SLOT_VALUE_INITD(T40, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:692
      sup_ = T20;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:693
      T21 = SLOT_VALUE_INITD(T40, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:693
      nxt_ = T21;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:694
      T22 = SLOT_VALUE_INITD(sup_, 2);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:694
      T8 = CALL1(&Kmm_wrapper_subtype_maskVKe, T22);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:694
      T23 = primitive_cast_integer_as_raw(T42);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:694
      T24 = primitive_cast_integer_as_raw(T8);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:694
      T25 = primitive_machine_word_logior(T23,T24);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:694
      T26 = primitive_cast_raw_as_integer(T25);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:695
      T27 = SLOT_VALUE_INITD(sup_, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:695
      T28 = primitive_cast_integer_as_raw(T27);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:695
      T29 = primitive_machine_word_logbitQ(19,T28);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:695
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:696
        if (first_primaryF4 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:697
          T9 = CALL1(&Kiclass_classVKe, first_primaryF4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:697
          T30 = SLOT_VALUE_INITD(sup_, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:697
          T10 = KsubiclassQVKiI(first_primaryF4, T9, sup_, T30);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:697
          T31 = primitive_not(T10);
          T11 = T31;
        } else {
          T11 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:696
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:696
        if (T11 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:698
          T32 = SLOT_VALUE_INITD(sup_, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:698
          T12 = KsubiclassQVKiI(sup_, T32, first_primaryF4, first_primaryF4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:698
          T33 = primitive_not(T12);
          T13 = T33;
        } else {
          T13 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:696
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:696
        if (T13 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:700
          T34 = SLOT_VALUE_INITD(iclass_, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:700
          T14 = CALL1(&Kiclass_classVKe, first_primaryF4);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:700
          T35 = SLOT_VALUE_INITD(sup_, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:699
          T36.vector_element_[0] = T34;
          T36.vector_element_[1] = T14;
          T36.vector_element_[2] = T35;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:699
          T37 = KerrorVKdMM1I(&K65, &T36);
          T16 = T37;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
          if (first_primaryF4 != &KPfalseVKi) {
            T15 = first_primaryF4;
          } else {
            T15 = sup_;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
          lF45T = nxt_;
          maskF46T = T26;
          first_primaryF47T = T15;
          goto L0;
          T16 = T38;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:696
        T17 = T16;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:705
        lF45T = nxt_;
        maskF46T = T26;
        first_primaryF47T = first_primaryF4;
        goto L0;
        T17 = T44;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:695
      T18 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:689
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:702
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:685
  return(T18);
}

static D Kanonymous_of_compute_implementation_class_precedence_listF95I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  T2 = Kconcatenate_2VKeMM1I(args_, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  T3 = APPLY1(&Kall_iclass_superclassesVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:613
  return(T3);
}

static D Kremove_nextF94I (D l_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:599
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:600
  T4 = SLOT_VALUE_INITD(l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:600
  T1 = KEEVKdI(T4, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:600
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:600
    T5 = SLOT_VALUE_INITD(l_, 1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:600
    T6 = T5;
    MV_SET_ELT(0, T5);
    MV_SET_COUNT(1);
    T3 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:600
    T2 = l_;
    MV_SET_ELT(0, l_);
    MV_SET_COUNT(1);
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:600
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:599
  return(T3);
}

D Kcompute_implementation_class_precedence_list_oldVKiI (D c_, D u_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D c_direct_superclasses_;
  _KLsimple_object_vectorGVKd_1 T8 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18T, T18;
  D resultF19T, resultF19;
  D T20;
  D T21;
  D T22;
  D T23_0;
  D T24;
  D T25_0;
  D T26;
  D T27;
  D T28T, T28;
  D resultF29T, resultF29;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34_0;
  D T35;
  D T36;
  DWORD T37T, T37;
  D resultF38T, resultF38;
  D T39;
  DWORD T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  D T45;
  D T46;
  D Utmp_;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52T, T52;
  D resultF53T, resultF53;
  D T54;
  D T55;
  D T56_0;
  D T57;
  D T58_0;
  D T59;
  D T60;
  D T61;
  D T62T, T62;
  D resultF63T, resultF63;
  D T64;
  D T65;
  D T66_0;
  D T67;
  D T68_0;
  D T69;
  D T70;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D partial_cplF79T, partial_cplF79;
  D remaining_listsF80T, remaining_listsF80;
  D T81;
  _KLsimple_object_vectorGVKd_2 T82 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T83;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:624
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:627
  T5 = SLOT_VALUE(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:669
  T6 = SLOT_VALUE(c_, 7);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:669
  c_direct_superclasses_ = Kmap_asVKdMM0I(&KLlistGVKd, T5, T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:670
  T8.vector_element_[0] = c_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:670
  T3 = KlistVKdI(&T8);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  T9.vector_element_[0] = u_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  T11 = primitive_copy_vector(&T9);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  T10 = MAKE_CLOSURE_INITD(&Kanonymous_of_compute_implementation_class_precedence_list_oldF81, 1, T11);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T12 = CONGRUENT_CALL1(c_direct_superclasses_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  T13 = CALL3(&Kmap_as_oneVKi, T12, T10, c_direct_superclasses_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  T4 = CALL2(&KaddVKd, T13, c_direct_superclasses_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
  partial_cplF79T = T3;
  remaining_listsF80T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
    partial_cplF79 = partial_cplF79T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
    remaining_listsF80 = remaining_listsF80T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
    T81 = remaining_listsF80;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
    T18T = T81;
    resultF19T = &KPtrueVKi;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
      T18 = T18T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
      resultF19 = resultF19T;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
      T21 = primitive_idQ(T18,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
      if (T21 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
        T22 = SLOT_VALUE_INITD(T18, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
        if (resultF19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
          T24 = SLOT_VALUE_INITD(T18, 1);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
          T25_0 = T24;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
          T23_0 = T25_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
          T26 = T23_0;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
          CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
          T20 = CONGRUENT_CALL1(T22);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
          T18T = T26;
          resultF19T = T20;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
    if (resultF19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:631
      T27 = KreverseXVKdMM2I(partial_cplF79);
      T17 = T27;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
      T28T = partial_cplF79;
      resultF29T = &KPfalseVKi;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
        T28 = T28T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
        resultF29 = resultF29T;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
        T30 = primitive_idQ(T28,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
        if (T30 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
          T31 = SLOT_VALUE_INITD(T28, 0);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
          if (resultF29 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
            T33 = SLOT_VALUE_INITD(T28, 1);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
            T34_0 = T33;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
            T32_0 = T34_0;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
            T35 = T32_0;
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
            T36 = SLOT_VALUE(T31, 7);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
            T39 = SLOT_VALUE_INITD(T36, 0);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
            T40 = primitive_cast_integer_as_raw(T39);
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
            T37T = 1;
            resultF38T = &KPfalseVKi;
          L3: ;
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
              T37 = T37T;
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
              resultF38 = resultF38T;
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
              T41 = primitive_machine_word_equalQ(T37,T40);
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
              if (T41 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
                T42 = REPEATED_D_SLOT_VALUE_TAGGED(T36, 1, T37);
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
                if (resultF38 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
                  T43 = primitive_machine_word_add_signal_overflow(T37,4);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                  T49 = primitive_idQ(u_,Dempty_subjunctive_class_universeVKe);
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                  if (T49 != &KPfalseVKi) {
                    Utmp_ = &KPfalseVKi;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                    T46 = Kscu_entryQVKeI(T42, u_);
                    Utmp_ = T46;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                  if (Utmp_ != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                    T48 = Utmp_;
                    T51 = T48;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                    T50 = SLOT_VALUE(T42, 2);
                    T51 = T50;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:635
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                  T52T = T81;
                  resultF53T = &KPfalseVKi;
                L4: ;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                    T52 = T52T;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                    resultF53 = resultF53T;
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                    T54 = primitive_idQ(T52,&KPempty_listVKi);
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                    if (T54 == &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                      T55 = SLOT_VALUE_INITD(T52, 0);
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                      if (resultF53 == &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                        T57 = SLOT_VALUE_INITD(T52, 1);
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                        T58_0 = T57;
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                        T56_0 = T58_0;
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                        T59 = T56_0;
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:638
                        T60 = CALL1(&KheadVKd, T55);
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:638
                        T61 = primitive_idQ(T60,T51);
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                        T52T = T59;
                        resultF53T = T61;
                        goto L4;
                      }
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                    }
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                  if (resultF53 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                    T62T = T81;
                    resultF63T = &KPtrueVKi;
                  L5: ;
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                      T62 = T62T;
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                      resultF63 = resultF63T;
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                      T64 = primitive_idQ(T62,&KPempty_listVKi);
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                      if (T64 == &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                        T65 = SLOT_VALUE_INITD(T62, 0);
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                        if (resultF63 != &KPfalseVKi) {
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                          T67 = SLOT_VALUE_INITD(T62, 1);
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                          T68_0 = T67;
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                          T66_0 = T68_0;
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                          T69 = T66_0;
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:642
                          T70 = CALL1(&KheadVKd, T65);
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:642
                          T74 = primitive_idQ(T70,T51);
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:642
                          if (T74 != &KPfalseVKi) {
                            T73 = T74;
                          } else {
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:642
                            T71 = CALL1(&KtailVKd, T65);
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:642
                            T72 = CALL2(&KmemberQVKd, T51, T71);
                            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:642
                            T75 = primitive_not(T72);
                            T73 = T75;
                          }
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:642
                          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                          T62T = T69;
                          resultF63T = T73;
                          goto L5;
                        }
                        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                      }
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:646
                    T44 = resultF63;
                  } else {
                    T44 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                  if (T44 != &KPfalseVKi) {
                    T45 = T51;
                  } else {
                    T45 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:645
                  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
                  T37T = T43;
                  resultF38T = T45;
                  goto L3;
                }
                // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
              }
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
              // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:651
            // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
            T28T = T35;
            resultF29T = resultF38;
            goto L2;
          }
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:654
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:656
      if (resultF29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:657
        T14 = MAKE_CLOSURE_INITD(&Kremove_nextF79, 1, resultF29);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
        T76 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
        SLOT_VALUE_SETTER(resultF29, T76, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
        SLOT_VALUE_SETTER(partial_cplF79, T76, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:661
        T77 = Kmap_intoVKdMM0I(T81, T14, T81, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
        partial_cplF79T = T76;
        remaining_listsF80T = T77;
        goto L0;
        T16 = T78;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:663
        T82.vector_element_[0] = &KJformat_string_;
        T82.vector_element_[1] = &K70;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:663
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T15 = CONGRUENT_CALL2(&KLinconsistent_precedence_class_errorGVKi, &T82);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:663
        T83 = KerrorVKdMM0I(T15, &KPempty_vectorVKi);
        T16 = T83;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:656
      T17 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:630
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:660
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:624
  return(T17);
}

static D Kanonymous_of_compute_implementation_class_precedence_list_oldF81I (D args_) {
  D T2;
  D T3;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  T2 = Kconcatenate_2VKeMM1I(args_, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  T3 = APPLY1(&Kall_iclass_superclassesVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:671
  return(T3);
}

static D Kremove_nextF79I (D l_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:657
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:658
  T3 = SLOT_VALUE_INITD(l_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:658
  T6 = primitive_idQ(T3,CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:658
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:658
    T4 = SLOT_VALUE_INITD(l_, 1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:658
    T5 = T4;
    MV_SET_ELT(0, T4);
    MV_SET_COUNT(1);
    T2 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:658
    T1 = l_;
    MV_SET_ELT(0, l_);
    MV_SET_COUNT(1);
    T2 = T1;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:658
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:657
  return(T2);
}

D KLinconsistent_precedence_class_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:570
  T5 = primitive_object_allocate_filled(3,&KLinconsistent_precedence_class_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:570
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_initializeF125I (D stuff_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:181
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:182
  T5 = primitive_instanceQ(stuff_,&KLslot_descriptorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:182
  if (T5 != &KPfalseVKi) {
    T4 = stuff_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:183
    T1 = T4;
    MV_SET_ELT(0, T4);
    MV_SET_COUNT(1);
    T3 = T1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:185
    T6.vector_element_[0] = CREF(0);
    T6.vector_element_[1] = stuff_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:185
    T2 = KapplyVKdI(&Kcreate_slot_descriptorVKi, &T6);
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:182
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:181
  return(T3);
}

static D Kanonymous_of_initializeF124I (D inherited_slot_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:192
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:193
  T5 = primitive_instanceQ(inherited_slot_,&KLinherited_slot_descriptorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:193
  if (T5 != &KPfalseVKi) {
    T4 = inherited_slot_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:194
    T1 = T4;
    MV_SET_ELT(0, T4);
    MV_SET_COUNT(1);
    T3 = T1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:196
    T6.vector_element_[0] = &KLinherited_slot_descriptorGVKe;
    T6.vector_element_[1] = &KJowner_;
    T6.vector_element_[2] = CREF(0);
    T6.vector_element_[3] = inherited_slot_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:196
    T2 = KapplyVKdI(&KmakeVKd, &T6);
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:193
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:192
  return(T3);
}

static D Kanonymous_of_initializeF123I (D init_arg_slot_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:203
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:204
  T5 = primitive_instanceQ(init_arg_slot_,&KLinit_arg_descriptorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:204
  if (T5 != &KPfalseVKi) {
    T4 = init_arg_slot_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:205
    T1 = T4;
    MV_SET_ELT(0, T4);
    MV_SET_COUNT(1);
    T3 = T1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:207
    T6.vector_element_[0] = &KLinit_arg_descriptorGVKe;
    T6.vector_element_[1] = &KJowner_;
    T6.vector_element_[2] = CREF(0);
    T6.vector_element_[3] = init_arg_slot_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:207
    T2 = KapplyVKdI(&KmakeVKd, &T6);
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:204
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:203
  return(T3);
}

D Kchecked_superclassesVKiI (D c_, D superclasses_, D require_type_completenessQ_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D losers_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24T, T24;
  D T25;
  DWORD T26;
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
  D T38;
  D T39;
  D T40;
  _KLsimple_object_vectorGVKd_2 T41 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T42;
  _KLsimple_object_vectorGVKd_8 T43 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T44;
  D T45;
  DWORD T46;
  D T47;
  D T48;
  DWORD T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  D T58;
  D T59;
  _KLsimple_object_vectorGVKd_3 T60 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T61;
  _KLsimple_object_vectorGVKd_4 T62 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:122
  T13 = primitive_instanceQ(superclasses_,&KLsequenceGVKd);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:122
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:98
    T12 = superclasses_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:123
    T14 = primitive_instanceQ(T12,&KLsimple_object_vectorGVKd);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:123
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:98
      T20 = T12;
      T3 = T20;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:126
      T15 = KasVKdMM41I(&KLsimple_object_vectorGVKd, T12);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:126
      T21 = T15;
      T3 = T21;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:123
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:122
    if (superclasses_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:131
      T18.vector_element_[0] = superclasses_;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:131
      T19 = primitive_copy_vector(&T18);
      T4 = T19;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:129
      T16.vector_element_[0] = &KLobjectGVKd;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:129
      T17 = primitive_copy_vector(&T16);
      T4 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:122
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:133
  T22 = SLOT_VALUE_INITD(c_, 4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:133
  T23 = SLOT_VALUE_INITD(T22, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:134
  losers_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
  T25 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
  T26 = primitive_cast_integer_as_raw(T25);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
  T24T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
    T24 = T24T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
    T27 = primitive_machine_word_equalQ(T24,T26);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
    if (T27 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
      T28 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 1, T24);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:137
      T38 = primitive_instanceQ(T28,&KLclassGVKd);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:137
      if (T38 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:98
        T37 = T28;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:137
        T39 = SLOT_VALUE(T37, 2);
        T32 = T39;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:138
        T40 = primitive_instanceQ(T28,&KLimplementation_classGVKe);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:137
        if (T40 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:137
          T44 = T28;
          T31 = T44;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:143
          T41.vector_element_[0] = c_;
          T41.vector_element_[1] = T28;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:143
          T42 = primitive_copy_vector(&T41);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:140
          T43.vector_element_[0] = &KJvalue_;
          T43.vector_element_[1] = T28;
          T43.vector_element_[2] = &KJtype_;
          T43.vector_element_[3] = &K109;
          T43.vector_element_[4] = &KJformat_string_;
          T43.vector_element_[5] = &K110;
          T43.vector_element_[6] = &KJformat_arguments_;
          T43.vector_element_[7] = T42;
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:140
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T29 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T43);
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:140
          CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
          T30 = CONGRUENT_CALL2(T29, &KPempty_vectorVKi);
          T31 = T30;
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:137
        T32 = T31;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:137
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:145
      if (require_type_completenessQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:146
        T45 = SLOT_VALUE_INITD(T32, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:146
        T46 = primitive_cast_integer_as_raw(T45);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:146
        T47 = primitive_machine_word_logbitQ(21,T46);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:146
        if (T47 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:147
          Kreport_class_incompleteVKiI(c_, &K111);
        }
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:146
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:145
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
      T33 = Dsealed_class_checking_enabledQVKi;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
      if (T33 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T48 = SLOT_VALUE_INITD(T32, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T49 = primitive_cast_integer_as_raw(T48);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T50 = primitive_machine_word_logbitQ(20,T49);
        T34 = T50;
      } else {
        T34 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
      if (T34 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T51 = SLOT_VALUE_INITD(T32, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T52 = SLOT_VALUE_INITD(T51, 4);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T53 = SLOT_VALUE_INITD(T52, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T55 = primitive_idQ(T53,T23);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
        T54 = primitive_not(T55);
        T35 = T54;
      } else {
        T35 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:151
        T36 = losers_;
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:151
        T56 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:151
        SLOT_VALUE_SETTER(T28, T56, 0);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:151
        SLOT_VALUE_SETTER(T36, T56, 1);
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:151
        losers_ = T56;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:150
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
      T57 = primitive_machine_word_add_signal_overflow(T24,4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
      T24T = T57;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:135
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:154
  T11 = losers_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:154
  T58 = primitive_idQ(T11,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:154
  if (T58 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:158
    CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
    T6 = CONGRUENT_CALL1(c_);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:158
    T59 = SLOT_VALUE_INITD(c_, 4);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:158
    T10 = losers_;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:158
    T60.vector_element_[0] = T6;
    T60.vector_element_[1] = T59;
    T60.vector_element_[2] = T10;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:158
    T61 = primitive_copy_vector(&T60);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:155
    T62.vector_element_[0] = &KJformat_string_;
    T62.vector_element_[1] = &K112;
    T62.vector_element_[2] = &KJformat_arguments_;
    T62.vector_element_[3] = T61;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:155
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T7 = CONGRUENT_CALL2(&KLsealed_class_errorGVKi, &T62);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:155
    KerrorVKdMM0I(T7, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:154
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:160
  T8_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:120
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLsealed_class_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:112
  T5 = primitive_object_allocate_filled(3,&KLsealed_class_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:112
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcomplete_dependent_generic_functionsVKiI (D iclass_, D u_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:830
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:837
  Kp1F139I(u_, iclass_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:843
  T2 = Kp2F138I(u_, iclass_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:830
  MV_SET_COUNT(0);
  return(T2);
}

static D Kp1F139I (D u_, D iclass_) {
  D T2;
  D T3T, T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  D T13;
  D T14;
  D T15;
  D Utmp_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23_0;
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:833
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
  T2 = SLOT_VALUE_INITD(iclass_, 12);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
  T3T = T2;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
    T4 = primitive_idQ(T3,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
    if (T4 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
      T5 = SLOT_VALUE_INITD(T3, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
      CONGRUENT_CALL_PROLOG(&Krecompute_type_completeXVKi, 1);
      CONGRUENT_CALL1(T5);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
      T7 = SLOT_VALUE_INITD(T3, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
      T8_0 = T7;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
      T6_0 = T8_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
      T9 = T6_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
      T3T = T9;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:834
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
  T10 = SLOT_VALUE_INITD(iclass_, 14);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
  T12T = T10;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
    T13 = primitive_idQ(T12,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      T14 = SLOT_VALUE_INITD(T12, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      T18 = primitive_idQ(u_,Dempty_subjunctive_class_universeVKe);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      if (T18 != &KPfalseVKi) {
        Utmp_ = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
        T15 = Kscu_entryQVKeI(T14, u_);
        Utmp_ = T15;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      if (Utmp_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
        T17 = Utmp_;
        T20 = T17;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
        T19 = SLOT_VALUE(T14, 2);
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      Kp1F139I(u_, T20);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      T22 = SLOT_VALUE_INITD(T12, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      T23_0 = T22;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      T21_0 = T23_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      T24 = T21_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
      T12T = T24;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:835
  T11 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:833
  return(T11);
}

static D Kp2F138I (D u_, D iclass_) {
  D T2;
  D T3;
  D T4T, T4;
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13T, T13;
  D T14;
  D T15;
  D T16;
  D Utmp_;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T23;
  D T24_0;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:837
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
  T2 = SLOT_VALUE_INITD(iclass_, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:840
  T3 = SLOT_VALUE_INITD(iclass_, 12);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
  T4T = T3;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
    T4 = T4T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
    T5 = primitive_idQ(T4,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
    if (T5 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
      T6 = SLOT_VALUE_INITD(T4, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
      Kcomplete_dependent_generic_functionVKiMM0I(T6, T2, u_);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
      T8 = SLOT_VALUE_INITD(T4, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
      T9_0 = T8;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
      T7_0 = T9_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
      T10 = T7_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
      T4T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:839
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
  T11 = SLOT_VALUE_INITD(iclass_, 14);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
  T13T = T11;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
    T13 = T13T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
    T14 = primitive_idQ(T13,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      T15 = SLOT_VALUE_INITD(T13, 0);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      T19 = primitive_idQ(u_,Dempty_subjunctive_class_universeVKe);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      if (T19 != &KPfalseVKi) {
        Utmp_ = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
        T16 = Kscu_entryQVKeI(T15, u_);
        Utmp_ = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      if (Utmp_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
        T18 = Utmp_;
        T21 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
        T20 = SLOT_VALUE(T15, 2);
        T21 = T20;
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      Kp2F138I(u_, T21);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      T23 = SLOT_VALUE_INITD(T13, 1);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      T24_0 = T23;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      T22_0 = T24_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      T25 = T22_0;
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
      T13T = T25;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:841
  T12 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:837
  return(T12);
}

D KPregister_subclasses_dependent_genericVKeI (D generic_, D classes_) {
  D T3;
  DWORD T4T, T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:328
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
  T5 = SLOT_VALUE_INITD(classes_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
  T4T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
    T4 = T4T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
    T7 = primitive_machine_word_equalQ(T4,T6);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(classes_, 1, T4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
      KPregister_subclass_dependent_genericVKeI(generic_, T8);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
      T9 = primitive_machine_word_add_signal_overflow(T4,4);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
      T4T = T9;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:330
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:328
  MV_SET_COUNT(0);
  return(T3);
}

D KPadd_classVKeI (D class_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:303
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:304
  T2 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:304
  T1 = Krecord_new_class_subclass_usageVKiI(T2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:303
  MV_SET_COUNT(0);
  return(T1);
}

D Kclass_GvariableVKeMM0I (D class_) {
  D class_binding_name_;
  D T3_0;
  D T3_1;
  D T3_2;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T8_1;
  D T8_2;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:17
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  class_binding_name_ = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:18
  T4 = SLOT_VALUE_INITD(class_, 4);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:19
  T5 = SLOT_VALUE_INITD(T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:20
  T6 = SLOT_VALUE_INITD(T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:21
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:22
  T8_0 = class_binding_name_;
  T8_1 = T5;
  T8_2 = T7;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:14
  T3_0 = T8_0;
  T3_1 = T8_1;
  T3_2 = T8_2;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:14
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_COUNT(3);
  return(T3_0);
}

D Kvariable_GclassVKeMM0I (D binding_, D module_, D library_) {
  D bindings_;
  D T5_0;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:70
  bindings_ = Klookup_class_bindingsVKiMM0I(module_, library_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:72
  T6 = Dtable_entry_emptyVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:72
  T7_0 = KgethashVKiI(bindings_, binding_, T6, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:67
  T5_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:67
  MV_SET_COUNT(1);
  return(T5_0);
}

D Klookup_class_bindingsVKiMM0I (D module_, D library_) {
  D T3;
  D T4;
  D libraries_;
  D UtmpF6;
  D T7;
  D modules_;
  D UtmpF9;
  D T10;
  D bindings_;
  D T12_0;
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:50
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:52
  T3 = Tclass_symbol_tableTVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:52
  if (T3 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:53
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLstring_tableGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:53
    Tclass_symbol_tableTVKi = T4;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:54
    Kbuild_class_symbol_tableVKiMM0I();
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:52
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:57
  libraries_ = Tclass_symbol_tableTVKi;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:59
  UtmpF6 = CALL4(&KelementVKd, libraries_, library_, &KJdefault_, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:59
  if (UtmpF6 != &KPfalseVKi) {
    modules_ = UtmpF6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:60
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T7 = CONGRUENT_CALL2(&KLstring_tableGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:60
    CALL3(&Kelement_setterVKd, T7, libraries_, library_);
    modules_ = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:62
  UtmpF9 = CALL4(&KelementVKd, modules_, module_, &KJdefault_, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:62
  if (UtmpF9 != &KPfalseVKi) {
    bindings_ = UtmpF9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:63
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T10 = CONGRUENT_CALL2(&KLstring_tableGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:63
    CALL3(&Kelement_setterVKd, T10, modules_, module_);
    bindings_ = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:64
  T12_0 = bindings_;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:50
  T13_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:50
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kbuild_class_symbol_tableVKiMM0I () {
  D T1;
  D visitedQ_;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:34
  T3_0 = KLobject_setGZ32ZconstructorVKiMM0I(&KLobject_setGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:34
  visitedQ_ = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:47
  T1 = Kadd_classF166I(visitedQ_, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:33
  return(T1);
}

static D Kadd_classF166I (D visitedQ_, D class_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9T, T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:36
  KaddXVKdMM14I(visitedQ_, class_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:37
  Kinsert_class_bindingVKiMM0I(class_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  CONGRUENT_CALL_PROLOG(&Kdirect_subclassesVKd, 1);
  T2 = CONGRUENT_CALL1(class_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  T3 = CALL1(&Kforward_iteration_protocolVKd, T2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
    T10 = CALL3(T7, T2, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
      T11 = CALL2(T8, T2, T9);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:43
      T14 = KmemberQVKdMM5I(T11, visitedQ_, &KPempty_vectorVKi, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:43
      if (T14 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:44
        Kadd_classF166I(visitedQ_, T11);
      }
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:43
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
      T12 = CALL2(T6, T2, T9);
      // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
    T13 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:35
  return(T13);
}

D Kinsert_class_bindingVKiMM0I (D class_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D binding_;
  D module_;
  D library_;
  D bindings_;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:27
  T2_0 = Kclass_GvariableVKeMM0I(class_);
  T2_1 = MV_GET_ELT(1);
  T2_2 = MV_GET_ELT(2);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:26
  binding_ = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:26
  module_ = T2_1;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:26
  library_ = T2_2;
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:29
  bindings_ = Klookup_class_bindingsVKiMM0I(module_, library_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
  T8 = SLOT_VALUE_INITD(bindings_, 0);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
  T11 = primitive_instanceQ(class_,T8);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
  if (T11 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
    T10.vector_element_[0] = &KJvalue_;
    T10.vector_element_[1] = class_;
    T10.vector_element_[2] = &KJtype_;
    T10.vector_element_[3] = T8;
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T10);
    // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T9, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
  KputhashVKiI(class_, bindings_, binding_);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:30
  T7 = class_;
  MV_SET_ELT(0, class_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/class-dynamic.dylan:25
  return(T7);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_class_dynamic_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJinstance_);
    if (T0 != &KJinstance_) {
      IKJinstance_ = T0;
      primitive_repeated_slot_value_setter(T0, &K20, 1, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJoverride_sealingQ_);
    if (T0 != &KJoverride_sealingQ_) {
      primitive_repeated_slot_value_setter(T0, &K31, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K27, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJrecurseQ_);
    if (T0 != &KJrecurseQ_) {
      primitive_repeated_slot_value_setter(T0, &K100, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K97, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJsubjunctive_class_universe_);
    if (T0 != &KJsubjunctive_class_universe_) {
      IKJsubjunctive_class_universe_ = T0;
      primitive_repeated_slot_value_setter(T0, &K132, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K127, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdefer_cross_class_computationsQ_);
    if (T0 != &KJdefer_cross_class_computationsQ_) {
      primitive_repeated_slot_value_setter(T0, &K132, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K127, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJlibrary_);
    if (T0 != &KJlibrary_) {
      IKJlibrary_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmodule_);
    if (T0 != &KJmodule_) {
      primitive_repeated_slot_value_setter(T0, &K147, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K144, 1, 8);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_class_dynamic_for_user () {
  return;
}


/* eof */
