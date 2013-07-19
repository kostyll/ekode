#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(4);
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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
} _KLdomainGVKe;

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
  D xep_;
} _KLmethodGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

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
} _KLsequenceGVKd;

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
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(63);
define__KLbyte_stringGVKd(90);
define__KLbyte_stringGVKd(55);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(84);
define__KLbyte_stringGVKd(85);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(82);
define__KLbyte_stringGVKd(69);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(18);
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
} _KLsealed_object_errorGVKd;

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

#define  define__KLpartial_dispatch_cache_header_engine_nodeGVKg(nrepeated) \
  typedef struct { \
    D wrapper; \
    D properties_; \
    D engine_node_callback_; \
    D engine_node_entry_point_; \
    D cache_header_engine_node_next_; \
    D cache_header_engine_node_parent_; \
    D number_types_; \
    D partial_dispatch_type_[nrepeated+1]; \
  } _KLpartial_dispatch_cache_header_engine_nodeGVKg_##nrepeated;

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

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_errorGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D library_major_version_;
  D library_minor_version_;
  D library_build_count_;
  D used_library_;
  D used_library_binding_;
} _KLused_libraryGVKe;

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
} _KLintegerGVKd;

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


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D sealed_generic_function_error_generic_;
  D sealed_generic_function_error_operation_;
  D sealed_generic_function_error_arguments_;
  D sealed_generic_function_error_domain_;
} _KLdomain_sealed_generic_function_errorGVKe;


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
D Kkludge_up_init_valueVKiI (D, D, D);
extern _KLsealed_generic_functionGVKe Kclass_moduleVKe;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLdomainGVKe;
extern _KLmm_wrapperGVKi_0 KLdomainGVKeW;
extern _KLsymbolGVKd KJgeneric_function_;
extern _KLsymbolGVKd KJoperation_;
extern _KLsymbolGVKd KJarguments_;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLsealed_generic_function_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_function_errorGVKeW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsealed_generic_functionGVKe Ktype_completeQVKe;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLsealed_object_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsealed_object_errorGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_genericVKeHLsealed_generic_function_errorG;
extern _KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG;
extern _KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
D KmakeVKdMM23I (D, D, D, D);
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
D KPmethod_specializerVKgI (D, D);
D Kdisjoint_types_1QVKeMM4I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kdisjoint_typesQVKe;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLclassGVKd KLpartial_dispatch_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLpartial_dispatch_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
D KPmethod_number_requiredVKgI (D);
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
D Kfunction_number_requiredVKiMM1I (D);
extern _KLsymbolGVKd KJsize_;
D KasVKdMM62I (D, D);
extern _KLclassGVKd KLargument_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLargument_errorGVKiW;
D KerrorVKdMM0I (D, D);
D Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
D Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
D Kbletch_stackVKgI (D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D KlistVKdI (D);
D KasVKdMM41I (D, D);
extern _KLclassGVKd KLused_libraryGVKe;
extern _KLmm_wrapperGVKi_0 KLused_libraryGVKeW;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLsymbolGVKd KJnext_;
D Ksame_specializerQVKgI (D, D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsealed_generic_functionGVKe Kdomain_methodVKi;
extern _KLsealed_generic_functionGVKe Krecompute_type_completeXVKi;
extern _KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;
D Kparent_gfVKgI (D);
extern _KLgetter_methodGVKi Kdomain_number_requiredVKeMM0;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLrepeated_setter_methodGVKi Kdomain_type_setterVKiMM0;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLrepeated_getter_methodGVKi Kdomain_typeVKeMM0;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLsealed_generic_functionGVKe Kfunction_specializersVKd;
extern _KLmoduleGVKe Kdylan_incremental_moduleYdylan_userVdylan;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern D note_generic_function_incomplete_domainVKi;
extern D Dempty_subjunctive_class_universeVKe;

/* Defined object declarations */

static _KLbyte_stringGVKd_18 K1;
static _KLbyte_stringGVKd_12 K3;
static _KLsymbolGVKd KJhome_;
extern _KLsealed_generic_functionGVKe Kdomain_typeVKe;
extern _KLsealed_generic_functionGVKe Kdomain_type_setterVKi;
extern _KLsealed_generic_functionGVKe Kdomain_number_requiredVKe;
D Kdomain_number_requiredVKeMM4I (D);
D Kdomain_typeVKeMM4I (D, D);
D Kdomain_disjointQVKeMM5I (D, D, D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM13;
D Kmap_congruency_classesVKiMM13I (D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM12;
D Kmap_congruency_classesVKiMM12I (D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM14;
D Kreduce_incomplete_classesVKiMM14I (D, D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM13;
D Kreduce_incomplete_classesVKiMM13I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM11;
D Ktype_completeQVKeMM11I (D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM10;
D Ktype_completeQVKeMM10I (D);
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM6;
D Krecompute_type_completeXVKiMM6I (D);
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM5;
D Krecompute_type_completeXVKiMM5I (D);
D KPremove_method_domainVKiI (D, D, D);
extern _KLsealed_generic_functionGVKe Kdomain_conflictQVKi;
extern _KLsealed_generic_functionGVKe Kdomain_matchQVKe;
D KPadd_method_domainVKnI (D, D, D, D);
D KPadd_domains_internalVKiI (D, D);
D Klibrary_visible_fromQVKiI (D, D);
extern _KLsimple_methodGVKe KPdefine_domainVKn;
D KPdefine_domainVKnI (D, D, D);
static _KLbyte_stringGVKd_69 K36;
extern _KLsealed_generic_functionGVKe Kdomain_disjointQVKe;
D KPadd_domain_unconditionallyVKiI (D, D);
D Kdomain_typesVKeMM0I (D);
static _KLsymbolGVKd KJdomain_;
static _KLbyte_stringGVKd_82 K41;
extern _KLclassGVKd KLdomain_sealed_generic_function_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLdomain_sealed_generic_function_errorGVKeW;
static _KLimplementation_classGVKe K44;
static _KLsimple_object_vectorGVKd_6 K45;
extern _KLkeyword_methodGVKe KLdomain_sealed_generic_function_errorGZ32ZconstructorVKiMM0;
D KLdomain_sealed_generic_function_errorGZ32ZconstructorVKiMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K48;
static _KLsimple_object_vectorGVKd_8 K49;
static _KLsimple_object_vectorGVKd_1 K50;
extern _KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_domainVKeHLdomain_sealed_generic_function_errorG;
extern _KLsealed_generic_functionGVKe Ksealed_generic_function_error_domainVKe;
extern _KLgetter_methodGVKi Ksealed_generic_function_error_domainVKeMM0;
static _KLpairGVKd K54;
static _KLbyte_stringGVKd_36 K55;
static _KLbyte_stringGVKd_23 K56;
static _KLkeyword_signatureAvaluesGVKi K57;
static _KLsimple_object_vectorGVKd_12 K58;
static _KLsimple_object_vectorGVKd_6 K59;
static _KLsimple_object_vectorGVKd_1 K60;
static _KLbyte_stringGVKd_38 K61;
static _KLbyte_stringGVKd_6 K62;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K63;
D Klookup_domainVKiI (D, D);
static D Klookup_domain_1F66I (D, D, D, D);
extern _KLsimple_methodGVKe Kdomain_disjointQVKeMM0;
D Kdomain_disjointQVKeMM0I (D d1_, D d2_, D scu_, D dep_);
extern _KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM1;
D Kdomain_disjointQVKeMM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kdomain_disjointQVKeMM2;
D Kdomain_disjointQVKeMM2I (D, D, D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM3;
D Kdomain_disjointQVKeMM3I (D, D, D, D);
extern _KLsimple_methodGVKe Kdomain_disjointQVKeMM4;
D Kdomain_disjointQVKeMM4I (D, D, D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM5;
extern _KLsimple_methodGVKe Kdomain_disjointQVKeMM6;
D Kdomain_disjointQVKeMM6I (D, D, D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM7;
D Kdomain_disjointQVKeMM7I (D, D, D, D);
extern _KLsimple_methodGVKe Kdomain_disjointQVKeMM8;
D Kdomain_disjointQVKeMM8I (D, D, D, D);
static _KLpairGVKd K84;
static _KLpairGVKd K85;
static _KLpairGVKd K86;
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLpairGVKd K89;
static _KLpairGVKd K90;
static _KLpairGVKd K91;
static _KLpairGVKd K92;
static _KLsignatureAvaluesGVKi K93;
static _KLbyte_stringGVKd_16 K94;
static _KLsimple_object_vectorGVKd_4 K95;
static _KLsignatureAvaluesGVKi K96;
static _KLsimple_object_vectorGVKd_4 K97;
D Kgrounded_disjoint_typesQVKiI (D, D, D, D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K99;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K100;
static _KLsignatureAvaluesGVKi K101;
static _KLsimple_object_vectorGVKd_4 K102;
static _KLsignatureAvaluesGVKi K103;
static _KLsimple_object_vectorGVKd_4 K104;
static _KLsignatureAvaluesGVKi K105;
static _KLsimple_object_vectorGVKd_4 K106;
static _KLsignatureAvaluesGVKi K107;
static _KLsimple_object_vectorGVKd_4 K108;
static _KLsignatureAvaluesGVKi K109;
static _KLsimple_object_vectorGVKd_4 K110;
static _KLsignatureAvaluesGVKi K111;
static _KLsimple_object_vectorGVKd_4 K112;
static _KLsignatureAvaluesGVKi K113;
static _KLsimple_object_vectorGVKd_4 K114;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K115;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K116;
static _KLsymbolGVKd KJlibrary_;
D KPadd_domainsVKnMM0I (D, D);
static _KLbyte_stringGVKd_85 K119;
static _KLbyte_stringGVKd_84 K120;
static _KLbyte_stringGVKd_7 K121;
static _KLsignatureGVKe K122;
static _KLsimple_object_vectorGVKd_2 K123;
D Kcompute_all_used_librariesVKiI (D, D);
static _KLsymbolGVKd KJmethod_;
static _KLbyte_stringGVKd_6 K126;
extern _KLsimple_methodGVKe Kdomain_matchQVKeMM0;
D Kdomain_matchQVKeMM0I (D d1_, D d2_);
extern _KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM1;
D Kdomain_matchQVKeMM1I (D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM2;
D Kdomain_matchQVKeMM2I (D, D);
extern _KLsimple_methodGVKe Kdomain_matchQVKeMM3;
D Kdomain_matchQVKeMM3I (D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM4;
D Kdomain_matchQVKeMM4I (D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM5;
D Kdomain_matchQVKeMM5I (D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM6;
D Kdomain_matchQVKeMM6I (D, D);
extern _KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM7;
D Kdomain_matchQVKeMM7I (D, D);
static _KLpairGVKd K143;
static _KLpairGVKd K144;
static _KLpairGVKd K145;
static _KLpairGVKd K146;
static _KLpairGVKd K147;
static _KLpairGVKd K148;
static _KLpairGVKd K149;
static _KLpairGVKd K150;
static _KLsignatureAvaluesGVKi K151;
static _KLbyte_stringGVKd_13 K152;
static _KLsignatureAvaluesGVKi K153;
static _KLsimple_object_vectorGVKd_2 K154;
static _KLsignatureAvaluesGVKi K155;
static _KLsimple_object_vectorGVKd_2 K156;
static _KLsignatureAvaluesGVKi K157;
static _KLsimple_object_vectorGVKd_2 K158;
static _KLsignatureAvaluesGVKi K159;
static _KLsimple_object_vectorGVKd_2 K160;
static _KLsignatureAvaluesGVKi K161;
static _KLsimple_object_vectorGVKd_2 K162;
static _KLsignatureAvaluesGVKi K163;
static _KLsimple_object_vectorGVKd_2 K164;
static _KLsignatureAvaluesGVKi K165;
static _KLsimple_object_vectorGVKd_2 K166;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K167;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K168;
extern _KLsimple_methodGVKe Kdomain_conflictQVKiMM0;
D Kdomain_conflictQVKiMM0I (D, D, D, D, D);
extern _KLsimple_methodGVKe Kdomain_conflictQVKiMM1;
D Kdomain_conflictQVKiMM1I (D, D, D, D, D);
static _KLpairGVKd K173;
static _KLpairGVKd K174;
static _KLsignatureAvaluesGVKi K175;
static _KLbyte_stringGVKd_16 K176;
static _KLsimple_object_vectorGVKd_5 K177;
static _KLsimple_object_vectorGVKd_1 K178;
static _KLunionGVKe K179;
static _KLsingletonGVKd K180;
static _KLunionGVKe K181;
static _KLbyte_stringGVKd_55 K182;
static _KLunionGVKe K183;
static _KLbyte_stringGVKd_90 K184;
static _KLsignatureAvaluesGVKi K185;
static _KLsimple_object_vectorGVKd_5 K186;
static _KLbyte_stringGVKd_63 K187;
static _KLsignatureAvaluesGVKi K188;
static _KLsimple_object_vectorGVKd_5 K189;
static _KLsimple_object_vectorGVKd_1 K190;
static _KLunionGVKe K191;
static D Klookup_domain_1F193I (D, D, D, D, D);
static _KLsignatureAvaluesGVKi K194;
static _KLsimple_object_vectorGVKd_1 K195;
static _KLsignatureAvaluesGVKi K196;
static _KLsimple_object_vectorGVKd_1 K197;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K198;
static _KLsignatureGVKe K199;
static _KLsimple_object_vectorGVKd_3 K200;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K201;
static _KLsignatureGVKe K202;
static _KLsimple_object_vectorGVKd_3 K203;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K204;
static _KLsignatureGVKe K205;
static _KLsimple_object_vectorGVKd_2 K206;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K207;
static _KLsignatureGVKe K208;
static _KLsimple_object_vectorGVKd_2 K209;
extern _KLsimple_methodGVKe Kdomain_number_requiredVKeMM1;
D Kdomain_number_requiredVKeMM1I (D d_);
extern _KLsimple_methodGVKe Kdomain_number_requiredVKeMM2;
D Kdomain_number_requiredVKeMM2I (D d_);
extern _KLsimple_methodGVKe Kdomain_number_requiredVKeMM3;
D Kdomain_number_requiredVKeMM3I (D d_);
extern _KLsimple_methodGVKe Kdomain_number_requiredVKeMM4;
static _KLpairGVKd K217;
static _KLpairGVKd K218;
static _KLpairGVKd K219;
static _KLpairGVKd K220;
static _KLpairGVKd K221;
static _KLsignatureAvaluesGVKi K222;
static _KLbyte_stringGVKd_22 K223;
static _KLsignatureAvaluesGVKi K224;
static _KLsimple_object_vectorGVKd_1 K225;
static _KLsignatureAvaluesGVKi K226;
static _KLsignatureAvaluesGVKi K227;
static _KLsignatureAvaluesGVKi K228;
static _KLpairGVKd K229;
static _KLsignatureGVKe K230;
static _KLbyte_stringGVKd_18 K231;
static _KLsimple_object_vectorGVKd_3 K232;
extern _KLsimple_methodGVKe Kdomain_typeVKeMM1;
D Kdomain_typeVKeMM1I (D d_, D i_);
extern _KLsimple_methodGVKe Kdomain_typeVKeMM2;
D Kdomain_typeVKeMM2I (D d_, D i_);
extern _KLsimple_methodGVKe Kdomain_typeVKeMM3;
D Kdomain_typeVKeMM3I (D d_, D i_);
extern _KLsimple_methodGVKe Kdomain_typeVKeMM4;
static _KLpairGVKd K240;
static _KLpairGVKd K241;
static _KLpairGVKd K242;
static _KLpairGVKd K243;
static _KLpairGVKd K244;
static _KLsignatureAvaluesGVKi K245;
static _KLbyte_stringGVKd_11 K246;
static _KLsimple_object_vectorGVKd_2 K247;
static _KLsignatureAvaluesGVKi K248;
static _KLsimple_object_vectorGVKd_2 K249;
static _KLsignatureAvaluesGVKi K250;
static _KLsimple_object_vectorGVKd_2 K251;
static _KLsignatureAvaluesGVKi K252;
static _KLsimple_object_vectorGVKd_2 K253;
static _KLsignatureAvaluesGVKi K254;
static _KLsimple_object_vectorGVKd_2 K255;
extern _KLsimple_methodGVKe KPadd_nonsiblinged_domainVKn;
D KPadd_nonsiblinged_domainVKnI (D, D);
static _KLsignatureGVKe K258;
static _KLsimple_object_vectorGVKd_2 K259;
extern _KLsimple_methodGVKe KPadd_method_domainVKn;
static _KLsignatureAvaluesGVKi K261;
static _KLsimple_object_vectorGVKd_4 K262;
static _KLbyte_stringGVKd_4 K263;
extern _KLsealed_generic_functionGVKe Kdomain_typesVKe;
extern _KLsimple_methodGVKe Kdomain_typesVKeMM0;
extern _KLsimple_methodGVKe Kdomain_typesVKeMM1;
D Kdomain_typesVKeMM1I (D d_);
static _KLpairGVKd K268;
static _KLpairGVKd K269;
static _KLsignatureAvaluesGVKi K270;
static _KLbyte_stringGVKd_12 K271;
static _KLsignatureAvaluesGVKi K272;
extern _KLincremental_generic_functionGVKe KPremove_domainVKn;
extern _KLsimple_methodGVKe KPremove_domainVKnMM0;
D KPremove_domainVKnMM0I (D, D, D);
static _KLpairGVKd K276;
static _KLsignatureAvaluesGVKi K277;
static _KLbyte_stringGVKd_14 K278;
static _KLsimple_object_vectorGVKd_3 K279;
static _KLsignatureAvaluesGVKi K280;
static _KLsimple_object_vectorGVKd_3 K281;
extern _KLsealed_generic_functionGVKe KPadd_domainsVKn;
extern _KLsimple_methodGVKe KPadd_domainsVKnMM0;
extern _KLsimple_methodGVKe KPadd_domainsVKnMM1;
D KPadd_domainsVKnMM1I (D, D);
static _KLpairGVKd K286;
static _KLpairGVKd K287;
static _KLbyte_stringGVKd_12 K288;
static _KLsignatureGVKe K289;
static _KLsimple_object_vectorGVKd_2 K290;
static _KLsignatureGVKe K291;
static _KLsimple_object_vectorGVKd_2 K292;
extern _KLsimple_methodGVKe KPadd_domainVKnMM0;
D KPadd_domainVKnMM0I (D, D);

/* Indirection variables */

static D IKJhome_ = &KJhome_;
static D IKJdomain_ = &KJdomain_;
static D IKJlibrary_ = &KJlibrary_;
static D IKJmethod_ = &KJmethod_;

/* Variables */

D sealed_generic_function_error_domainVKe = &Ksealed_generic_function_error_domainVKe;
D Padd_domainVKn = &KPadd_domainVKnMM0;
D Padd_domainsVKn = &KPadd_domainsVKn;
D Premove_domainVKn = &KPremove_domainVKn;
D domain_typeVKe = &Kdomain_typeVKe;
D domain_type_setterVKi = &Kdomain_type_setterVKi;
D domain_number_requiredVKe = &Kdomain_number_requiredVKe;
D domain_typesVKe = &Kdomain_typesVKe;
D Druntime_libraryVKe = &KPunboundVKi;
D Druntime_moduleVKe = &KPunboundVKi;
D Pdefine_domainVKn = &KPdefine_domainVKn;
D Padd_method_domainVKn = &KPadd_method_domainVKn;
D Padd_nonsiblinged_domainVKn = &KPadd_nonsiblinged_domainVKn;
D domain_matchQVKe = &Kdomain_matchQVKe;
D Ldomain_sealed_generic_function_errorGVKe = &KLdomain_sealed_generic_function_errorGVKe;
D domain_conflictQVKi = &Kdomain_conflictQVKi;
D domain_disjointQVKe = &Kdomain_disjointQVKe;

/* Objects */

static _KLbyte_stringGVKd_18 K1 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "the runtime system"
};

static _KLbyte_stringGVKd_12 K3 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "phony module"
};

static _KLsymbolGVKd KJhome_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K263
};

_KLsealed_generic_functionGVKe Kdomain_typeVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K245,
  (D) 9,
  &K246,
  &K240,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kdomain_type_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K230,
  &KPfalseVKi,
  &K231,
  &K229,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kdomain_number_requiredVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K222,
  (D) 1,
  &K223,
  &K217,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K208,
  &Kmap_congruency_classesVKiMM13I
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K205,
  &Kmap_congruency_classesVKiMM12I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K202,
  &Kreduce_incomplete_classesVKiMM14I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K199,
  &Kreduce_incomplete_classesVKiMM13I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K196,
  &Ktype_completeQVKeMM11I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K194,
  &Ktype_completeQVKeMM10I
};

_KLsimple_methodGVKe Krecompute_type_completeXVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K196,
  &Krecompute_type_completeXVKiMM6I
};

_KLsimple_methodGVKe Krecompute_type_completeXVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K194,
  &Krecompute_type_completeXVKiMM5I
};

_KLsealed_generic_functionGVKe Kdomain_conflictQVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_5,
  &K175,
  (D) 33,
  &K176,
  &K173,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kdomain_matchQVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K151,
  (D) 1,
  &K152,
  &K143,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPdefine_domainVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K122,
  &KPdefine_domainVKnI
};

static _KLbyte_stringGVKd_69 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 277,
  "Defining sealed domain %= %= on sealed generic from external library."
};

_KLsealed_generic_functionGVKe Kdomain_disjointQVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K93,
  &KPfalseVKi,
  &K94,
  &K84,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsymbolGVKd KJdomain_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K62
};

static _KLbyte_stringGVKd_82 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 329,
  "Defining sealed domain %= %= conflicts with methods %= defined in other libraries."
};

_KLclassGVKd KLdomain_sealed_generic_function_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K61,
  &K44,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLdomain_sealed_generic_function_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K44,
  (D) 2049,
  25,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K44 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102105,
  &KLdomain_sealed_generic_function_errorGVKe,
  &KLdomain_sealed_generic_function_errorGVKeW,
  &KPfalseVKi,
  &K45,
  (D) 7425,
  &KLdomain_sealed_generic_function_errorGZ32ZconstructorVKiMM0,
  &K48,
  &K49,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K50,
  &K45,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Ksealed_generic_function_error_genericVKeHLsealed_generic_function_errorG,
  &Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG,
  &Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG,
  &Ksealed_generic_function_error_domainVKeHLdomain_sealed_generic_function_errorG
};

_KLkeyword_methodGVKe KLdomain_sealed_generic_function_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K57,
  &key_mep_2,
  &KLdomain_sealed_generic_function_errorGZ32ZconstructorVKiMM0I,
  &K58
};

static _KLsimple_object_vectorGVKd_1 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsealed_generic_function_errorGVKe
};

static _KLsimple_object_vectorGVKd_8 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsealed_object_errorGVKd,
  &KLsealed_generic_function_errorGVKe,
  &KLdomain_sealed_generic_function_errorGVKe
};

static _KLsimple_object_vectorGVKd_1 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Ksealed_generic_function_error_domainVKeHLdomain_sealed_generic_function_errorG
};

_KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_domainVKeHLdomain_sealed_generic_function_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLdomain_sealed_generic_function_errorGVKe,
  &KJdomain_,
  &Ksealed_generic_function_error_domainVKe,
  &KPfalseVKi,
  &KLsequenceGVKd
};

_KLsealed_generic_functionGVKe Ksealed_generic_function_error_domainVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K55,
  &K54,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ksealed_generic_function_error_domainVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksealed_generic_function_error_domainVKeHLdomain_sealed_generic_function_errorG
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Ksealed_generic_function_error_domainVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_36 K55 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "sealed-generic-function-error-domain"
};

static _KLbyte_stringGVKd_23 K56 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K57 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K59,
  &KDsignature_LobjectG_typesVKi,
  &K60
};

static _KLsimple_object_vectorGVKd_12 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJgeneric_function_,
  &KPunboundVKi,
  &KJoperation_,
  &KPunboundVKi,
  &KJarguments_,
  &KPunboundVKi,
  &KJdomain_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_6 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJgeneric_function_,
  &KJoperation_,
  &KJarguments_,
  &KJdomain_
};

static _KLsimple_object_vectorGVKd_1 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdomain_sealed_generic_function_errorGVKe
};

static _KLbyte_stringGVKd_38 K61 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "<domain-sealed-generic-function-error>"
};

static _KLbyte_stringGVKd_6 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "domain"
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K63 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdomain_typeVKe
};

_KLsimple_methodGVKe Kdomain_disjointQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K93,
  &Kdomain_disjointQVKeMM0I
};

_KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM1 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_4,
  &K113,
  &Kdomain_disjointQVKeMM1I
};

_KLsimple_methodGVKe Kdomain_disjointQVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K111,
  &Kdomain_disjointQVKeMM2I
};

_KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM3 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_4,
  &K109,
  &Kdomain_disjointQVKeMM3I
};

_KLsimple_methodGVKe Kdomain_disjointQVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K107,
  &Kdomain_disjointQVKeMM4I
};

_KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM5 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_4,
  &K105,
  &Kdomain_disjointQVKeMM5I
};

_KLsimple_methodGVKe Kdomain_disjointQVKeMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K103,
  &Kdomain_disjointQVKeMM6I
};

_KLsimple_copy_down_methodGVKi Kdomain_disjointQVKeMM7 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_4,
  &K101,
  &Kdomain_disjointQVKeMM7I
};

_KLsimple_methodGVKe Kdomain_disjointQVKeMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K96,
  &Kdomain_disjointQVKeMM8I
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM0,
  &K85
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM1,
  &K86
};

static _KLpairGVKd K86 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM2,
  &K87
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM3,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM4,
  &K89
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM5,
  &K90
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM6,
  &K91
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM7,
  &K92
};

static _KLpairGVKd K92 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_disjointQVKeMM8,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K93 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K95,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_16 K94 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "domain-disjoint?"
};

static _KLsimple_object_vectorGVKd_4 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K96 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K97,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLmethodGVKd,
  &KLsimple_object_vectorGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K99 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K100 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsignatureAvaluesGVKi K101 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K102,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLsimple_object_vectorGVKd,
  &KLmethodGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K103 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K104,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLmethodGVKd,
  &KLpartial_dispatch_cache_header_engine_nodeGVKg,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K105 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K106,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLpartial_dispatch_cache_header_engine_nodeGVKg,
  &KLmethodGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K107 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K108,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLmethodGVKd,
  &KLmethod_domainGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K109 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K110,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLmethod_domainGVKe,
  &KLmethodGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K111 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K112,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLmethodGVKd,
  &KLstandalone_domainGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K113 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K114,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLstandalone_domainGVKe,
  &KLmethodGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K115 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdomain_typeVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K116 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdomain_typeVKe
};

static _KLsymbolGVKd KJlibrary_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K121
};

static _KLbyte_stringGVKd_85 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 341,
  "Incorrect number of types in domain definition on %= from %=;\nexpected %=, got %=: %="
};

static _KLbyte_stringGVKd_84 K120 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 337,
  "One or more types in a domain being defined on %= from library %=,\nare not types: %="
};

static _KLbyte_stringGVKd_7 K121 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "library"
};

static _KLsignatureGVKe K122 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991625,
  &K123
};

static _KLsimple_object_vectorGVKd_2 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLincremental_generic_functionGVKe,
  &KLlibraryGVKe
};

static _KLsymbolGVKd KJmethod_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K126
};

static _KLbyte_stringGVKd_6 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "method"
};

_KLsimple_methodGVKe Kdomain_matchQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K151,
  &Kdomain_matchQVKeMM0I
};

_KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM1 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K165,
  &Kdomain_matchQVKeMM1I
};

_KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM2 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K163,
  &Kdomain_matchQVKeMM2I
};

_KLsimple_methodGVKe Kdomain_matchQVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K161,
  &Kdomain_matchQVKeMM3I
};

_KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM4 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K159,
  &Kdomain_matchQVKeMM4I
};

_KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM5 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K157,
  &Kdomain_matchQVKeMM5I
};

_KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM6 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K155,
  &Kdomain_matchQVKeMM6I
};

_KLsimple_copy_down_methodGVKi Kdomain_matchQVKeMM7 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K153,
  &Kdomain_matchQVKeMM7I
};

static _KLpairGVKd K143 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM0,
  &K144
};

static _KLpairGVKd K144 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM1,
  &K145
};

static _KLpairGVKd K145 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM2,
  &K146
};

static _KLpairGVKd K146 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM3,
  &K147
};

static _KLpairGVKd K147 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM4,
  &K148
};

static _KLpairGVKd K148 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM5,
  &K149
};

static _KLpairGVKd K149 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM6,
  &K150
};

static _KLpairGVKd K150 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_matchQVKeMM7,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K151 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_13 K152 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "domain-match?"
};

static _KLsignatureAvaluesGVKi K153 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K154,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpartial_dispatch_cache_header_engine_nodeGVKg,
  &KLpartial_dispatch_cache_header_engine_nodeGVKg
};

static _KLsignatureAvaluesGVKi K155 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K156,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethod_domainGVKe,
  &KLsimple_object_vectorGVKd
};

static _KLsignatureAvaluesGVKi K157 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K158,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K158 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstandalone_domainGVKe,
  &KLsimple_object_vectorGVKd
};

static _KLsignatureAvaluesGVKi K159 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K160,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethod_domainGVKe,
  &KLmethod_domainGVKe
};

static _KLsignatureAvaluesGVKi K161 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K162,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethod_domainGVKe,
  &KLstandalone_domainGVKe
};

static _KLsignatureAvaluesGVKi K163 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K164,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K164 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstandalone_domainGVKe,
  &KLmethod_domainGVKe
};

static _KLsignatureAvaluesGVKi K165 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K166,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K166 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstandalone_domainGVKe,
  &KLstandalone_domainGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K167 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdomain_typeVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K168 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdomain_typeVKe
};

_KLsimple_methodGVKe Kdomain_conflictQVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K188,
  &Kdomain_conflictQVKiMM0I
};

_KLsimple_methodGVKe Kdomain_conflictQVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K185,
  &Kdomain_conflictQVKiMM1I
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_conflictQVKiMM0,
  &K174
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_conflictQVKiMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K175 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K177,
  &K178
};

static _KLbyte_stringGVKd_16 K176 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "domain-conflict?"
};

static _KLsimple_object_vectorGVKd_5 K177 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLgeneric_functionGVKd,
  &KLobjectGVKd,
  &K181,
  &KLbooleanGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K178 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K179
};

static _KLunionGVKe K179 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K180,
  &KLconditionGVKd
};

static _KLsingletonGVKd K180 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLunionGVKe K181 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K180,
  &KLlibraryGVKe
};

static _KLbyte_stringGVKd_55 K182 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 221,
  "Cannot %s %= in %= on %= because the generic is sealed."
};

static _KLunionGVKe K183 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K180,
  &KLdomainGVKe
};

static _KLbyte_stringGVKd_90 K184 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 361,
  "Cannot %s %= in %= on %= because it is blocked by the sealed domain over %= defined in %=."
};

static _KLsignatureAvaluesGVKi K185 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K186,
  &K178
};

static _KLsimple_object_vectorGVKd_5 K186 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLincremental_generic_functionGVKe,
  &KLobjectGVKd,
  &KLlibraryGVKe,
  &KLbooleanGVKd,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_63 K187 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 253,
  "Cannot %s %= in library %= on %= because the generic is sealed."
};

static _KLsignatureAvaluesGVKi K188 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K189,
  &K190
};

static _KLsimple_object_vectorGVKd_5 K189 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLsealed_generic_functionGVKe,
  &KLobjectGVKd,
  &K181,
  &KLbooleanGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K190 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K191
};

static _KLunionGVKe K191 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K180,
  &KLsealed_generic_function_errorGVKe
};

static _KLsignatureAvaluesGVKi K194 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K195,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstandalone_domainGVKe
};

static _KLsignatureAvaluesGVKi K196 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K197,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K197 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmethod_domainGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K198 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsignatureGVKe K199 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K200
};

static _KLsimple_object_vectorGVKd_3 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLstandalone_domainGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K201 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsignatureGVKe K202 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K203
};

static _KLsimple_object_vectorGVKd_3 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmethod_domainGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K204 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K205 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K206
};

static _KLsimple_object_vectorGVKd_2 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLstandalone_domainGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K207 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K208 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K209
};

static _KLsimple_object_vectorGVKd_2 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLmethod_domainGVKe
};

_KLsimple_methodGVKe Kdomain_number_requiredVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K228,
  &Kdomain_number_requiredVKeMM1I
};

_KLsimple_methodGVKe Kdomain_number_requiredVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K227,
  &Kdomain_number_requiredVKeMM2I
};

_KLsimple_methodGVKe Kdomain_number_requiredVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K226,
  &Kdomain_number_requiredVKeMM3I
};

_KLsimple_methodGVKe Kdomain_number_requiredVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K224,
  &Kdomain_number_requiredVKeMM4I
};

static _KLpairGVKd K217 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_number_requiredVKeMM0,
  &K218
};

static _KLpairGVKd K218 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_number_requiredVKeMM1,
  &K219
};

static _KLpairGVKd K219 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_number_requiredVKeMM2,
  &K220
};

static _KLpairGVKd K220 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_number_requiredVKeMM3,
  &K221
};

static _KLpairGVKd K221 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_number_requiredVKeMM4,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K222 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_22 K223 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "domain-number-required"
};

static _KLsignatureAvaluesGVKi K224 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K225,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K225 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLpartial_dispatch_cache_header_engine_nodeGVKg
};

static _KLsignatureAvaluesGVKi K226 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LmethodG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K227 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K228 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K197,
  &KDsignature_LintegerG_typesVKi
};

static _KLpairGVKd K229 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_type_setterVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K230 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K232
};

static _KLbyte_stringGVKd_18 K231 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "domain-type-setter"
};

static _KLsimple_object_vectorGVKd_3 K232 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kdomain_typeVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K254,
  &Kdomain_typeVKeMM1I
};

_KLsimple_methodGVKe Kdomain_typeVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K252,
  &Kdomain_typeVKeMM2I
};

_KLsimple_methodGVKe Kdomain_typeVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K250,
  &Kdomain_typeVKeMM3I
};

_KLsimple_methodGVKe Kdomain_typeVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K248,
  &Kdomain_typeVKeMM4I
};

static _KLpairGVKd K240 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_typeVKeMM0,
  &K241
};

static _KLpairGVKd K241 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_typeVKeMM1,
  &K242
};

static _KLpairGVKd K242 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_typeVKeMM2,
  &K243
};

static _KLpairGVKd K243 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_typeVKeMM3,
  &K244
};

static _KLpairGVKd K244 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_typeVKeMM4,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K245 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K247,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_11 K246 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "domain-type"
};

static _KLsimple_object_vectorGVKd_2 K247 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K248 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K249,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K249 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpartial_dispatch_cache_header_engine_nodeGVKg,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K250 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K251,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K251 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethodGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K252 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K253,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K253 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K254 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K255,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K255 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethod_domainGVKe,
  &KLintegerGVKd
};

_KLsimple_methodGVKe KPadd_nonsiblinged_domainVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K258,
  &KPadd_nonsiblinged_domainVKnI
};

static _KLsignatureGVKe K258 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K259
};

static _KLsimple_object_vectorGVKd_2 K259 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLincremental_generic_functionGVKe,
  &KLdomainGVKe
};

_KLsimple_methodGVKe KPadd_method_domainVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K261,
  &KPadd_method_domainVKnI
};

static _KLsignatureAvaluesGVKi K261 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K262,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K262 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLincremental_generic_functionGVKe,
  &KLmethodGVKd,
  &KLlibraryGVKe,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_4 K263 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "home"
};

_KLsealed_generic_functionGVKe Kdomain_typesVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K270,
  &KPfalseVKi,
  &K271,
  &K268,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kdomain_typesVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K270,
  &Kdomain_typesVKeMM0I
};

_KLsimple_methodGVKe Kdomain_typesVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K272,
  &Kdomain_typesVKeMM1I
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_typesVKeMM0,
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  &Kdomain_typesVKeMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K270 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLbyte_stringGVKd_12 K271 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "domain-types"
};

static _KLsignatureAvaluesGVKi K272 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LmethodG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLincremental_generic_functionGVKe KPremove_domainVKn = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K277,
  &KPfalseVKi,
  &K278,
  &K276,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_incremental_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KPremove_domainVKnMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K280,
  &KPremove_domainVKnMM0I
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &KPremove_domainVKnMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K277 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K279,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_14 K278 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "%remove-domain"
};

static _KLsimple_object_vectorGVKd_3 K279 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLgeneric_functionGVKd,
  &KLobjectGVKd,
  &KLlibraryGVKe
};

static _KLsignatureAvaluesGVKi K280 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K281,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K281 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLincremental_generic_functionGVKe,
  &KLobjectGVKd,
  &KLlibraryGVKe
};

_KLsealed_generic_functionGVKe KPadd_domainsVKn = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K288,
  &K286,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPadd_domainsVKnMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K291,
  &KPadd_domainsVKnMM0I
};

_KLsimple_methodGVKe KPadd_domainsVKnMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K289,
  &KPadd_domainsVKnMM1I
};

static _KLpairGVKd K286 = {
  &KLpairGVKdW /* wrapper */,
  &KPadd_domainsVKnMM0,
  &K287
};

static _KLpairGVKd K287 = {
  &KLpairGVKdW /* wrapper */,
  &KPadd_domainsVKnMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K288 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "%add-domains"
};

static _KLsignatureGVKe K289 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K290
};

static _KLsimple_object_vectorGVKd_2 K290 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsealed_generic_functionGVKe,
  &KLobjectGVKd
};

static _KLsignatureGVKe K291 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K292
};

static _KLsimple_object_vectorGVKd_2 K292 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLincremental_generic_functionGVKe,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe KPadd_domainVKnMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K258,
  &KPadd_domainVKnMM0I
};

/* Code */

D Kdomain_number_requiredVKeMM4I (D d_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T2 = Kparent_gfVKgI(d_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T4 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T6 = primitive_machine_word_logand(T5,1020);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:109
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:107
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kdomain_typeVKeMM4I (D d_, D i_) {
  D T3_0;
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D shiftF10;
  D T11;
  D T12;
  D T13;
  DWORD mxF14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  D T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  D shiftF41;
  D T42;
  D T43;
  D T44;
  DWORD mxF45;
  DWORD T46;
  DWORD T47;
  D T48;
  D T49;
  DWORD T50;
  D T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  D T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  D T68;
  DWORD T69;
  D T70_0;
  DWORD mF71T, mF71;
  DWORD cF72T, cF72;
  D T73;
  D T74;
  DWORD T75;
  D T76;
  D T77_0;
  DWORD T78;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:85
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T5 = SLOT_VALUE_INITD(d_, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T7 = primitive_machine_word_shift_right(T6,14);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T8 = primitive_machine_word_logand(T7,-4);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  shiftF10 = (D) 33;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  mxF14 = 4;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T13 = shiftF10;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T17 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T18 = primitive_machine_word_equalQ(T17,257);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
    shiftF10 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
    T12 = shiftF10;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
    T16 = mxF14;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
    T21 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
    T20 = primitive_machine_word_shift_right(T21,2);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
    T19 = primitive_machine_word_shift_left_signal_overflow(T16,T20);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
    mxF14 = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T11 = shiftF10;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T15 = mxF14;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T24 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T23 = primitive_machine_word_shift_right(T24,2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T22 = primitive_machine_word_shift_left_signal_overflow(T15,T23);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T25 = primitive_machine_word_logior(T22,1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T26 = primitive_machine_word_subtract_signal_overflow(T25,4);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:86
  T27 = primitive_machine_word_logand(T9,T26);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:99
  T28 = primitive_cast_integer_as_raw(i_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:99
  T29 = primitive_machine_word_add_signal_overflow(T28,8);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:99
  T31 = primitive_machine_word_shift_right(T29,2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:99
  T30 = primitive_machine_word_logbitQ(T31,T27);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:99
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
    T32 = primitive_machine_word_less_thanQ(T28,1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T33 = primitive_machine_word_logxor(T28,1);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T34 = primitive_machine_word_negative_signal_overflow(T33);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T35 = primitive_machine_word_logior(T34,1);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T36 = primitive_machine_word_less_thanQ(T35,257);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T38 = primitive_machine_word_shift_right(T34,2);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T37 = primitive_machine_word_shift_right(5,T38);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T39 = primitive_machine_word_logand(T37,-4);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T40 = primitive_machine_word_logior(T39,1);
        T59 = T40;
      } else {
        T59 = 1;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T60 = T59;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T49 = primitive_machine_word_less_thanQ(T28,257);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      if (T49 != &KPfalseVKi) {
        T48 = i_;
      } else {
        T48 = (D) 257;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      shiftF41 = T48;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      mxF45 = 4;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T44 = shiftF41;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T50 = primitive_cast_integer_as_raw(T44);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T51 = primitive_machine_word_equalQ(T50,257);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      if (T51 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        shiftF41 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T43 = shiftF41;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T47 = mxF45;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T54 = primitive_cast_integer_as_raw(T43);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T53 = primitive_machine_word_shift_right(T54,2);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T52 = primitive_machine_word_shift_left_signal_overflow(T47,T53);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        mxF45 = T52;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T42 = shiftF41;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T46 = mxF45;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T57 = primitive_cast_integer_as_raw(T42);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T56 = primitive_machine_word_shift_right(T57,2);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T55 = primitive_machine_word_shift_left_signal_overflow(T46,T56);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
      T58 = primitive_machine_word_logior(T55,1);
      T60 = T58;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
    T61 = primitive_machine_word_subtract_signal_overflow(T60,4);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
    T62 = primitive_machine_word_logand(T27,T61);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
    mF71T = T62;
    cF72T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
      mF71 = mF71T;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
      T73 = primitive_cast_raw_as_integer(mF71);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
      cF72 = cF72T;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:91
      T64 = primitive_idQ(T73,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:91
      if (T64 != &KPfalseVKi) {
        T75 = cF72;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
        T65 = primitive_machine_word_shift_right(mF71,1);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
        T66 = primitive_machine_word_logand(T65,-4);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
        T67 = primitive_machine_word_logior(T66,1);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
        T68 = primitive_machine_word_logbitQ(2,mF71);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
        if (T68 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
          T69 = primitive_machine_word_add_signal_overflow(cF72,4);
          T63 = T69;
        } else {
          T63 = cF72;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
        mF71T = T67;
        cF72T = T63;
        goto L0;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T74 = T70_0;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
        T78 = primitive_cast_integer_as_raw(T74);
        T75 = T78;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:91
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:94
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
    T76 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 6, T75);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:100
    T77_0 = T76;
    T4_0 = T77_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:102
    T3_0 = &KLobjectGVKd;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:85
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kdomain_disjointQVKeMM5I (D d1_, D d2_, D scu_, D dep_) {
  D returnPexit_38_;
  D T6;
  DWORD iF7T, iF7;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  DWORD T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20_0;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:590
  T18 = Kdomain_number_requiredVKeMM4I(d1_);
  T12 = primitive_cast_integer_as_raw(T18);
  iF7T = 1;
L0: ;
    iF7 = iF7T;
    T14 = primitive_cast_raw_as_integer(iF7);
    T13 = primitive_machine_word_less_thanQ(iF7,T12);
    if (T13 != &KPfalseVKi) {
      T19 = Kdomain_typeVKeMM4I(d1_, T14);
      T20_0 = KPmethod_specializerVKgI(d2_, T14);
      T21 = T20_0;
      T8 = Kgrounded_disjoint_typesQVKiI(T19, T21, scu_, dep_);
      if (T8 != &KPfalseVKi) {
        T15.vector_element_[0] = &KPtrueVKi;
        T16 = MV_SET_REST_AT(&T15, 0);
        T10_0 = T16;
        goto L1;
      }
      T17 = primitive_machine_word_add_signal_overflow(iF7,4);
      iF7T = T17;
      goto L0;
    }
  T9 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  T10_0 = T9;
  L1: ;
  T11_0 = T10_0;
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kmap_congruency_classesVKiMM13I (D f_, D d_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:666
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:667
  T3 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:667
  ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K207, 2);
  T4 = ENGINE_NODE_CALL2(&K207, f_, T3);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:666
  MV_SET_COUNT(0);
  return(T4);
}

D Kmap_congruency_classesVKiMM12I (D f_, D d_) {
  DWORD i_T, i_;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:636
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
  T5 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
    T7 = primitive_machine_word_less_thanQ(i_,T6);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:638
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 3, i_);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:638
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K204, 2);
      ENGINE_NODE_CALL2(&K204, f_, T8);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
      T9 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
      i_T = T9;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
    T4 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:637
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:636
  MV_SET_COUNT(0);
  return(T4);
}

D Kreduce_incomplete_classesVKiMM14I (D f_, D d_, D ans_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:671
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:672
  T4 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:672
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K201, 3);
  T5_0 = ENGINE_NODE_CALL3(&K201, f_, T4, ans_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:671
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kreduce_incomplete_classesVKiMM13I (D f_, D d_, D ans_) {
  D T4;
  D T5_0;
  D T6_0;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  DWORD iF12T, iF12;
  D ansF13T, ansF13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:643
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:652
  T4 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:645
  T14 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:649
  iF12T = T14;
  ansF13T = ans_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:649
    iF12 = iF12T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:649
    ansF13 = ansF13T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:645
    T7 = primitive_machine_word_subtract_signal_overflow(iF12,4);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:646
    T8 = primitive_machine_word_less_thanQ(T7,1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:646
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:647
      T5_0 = ansF13;
      T6_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:649
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 3, T7);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:649
      ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K198, 3);
      T10 = ENGINE_NODE_CALL3(&K198, f_, T9, ansF13);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:649
      iF12T = T7;
      ansF13T = T10;
      goto L0;
      T6_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:646
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:649
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:643
  MV_SET_COUNT(1);
  return(T6_0);
}

D Ktype_completeQVKeMM11I (D d_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:656
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:657
  T3 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:657
  CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
  T2_0 = CONGRUENT_CALL1(T3);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:656
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_completeQVKeMM10I (D d_) {
  D T2;
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  D T11_0;
  DWORD iF12T, iF12;
  DWORD T13;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:617
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:628
  T2 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:619
  T13 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:625
  iF12T = T13;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:625
    iF12 = iF12T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:619
    T8 = primitive_machine_word_subtract_signal_overflow(iF12,4);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:620
    T9 = primitive_machine_word_less_thanQ(T8,1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:620
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:621
      T3_0 = &KPtrueVKi;
      T7_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:622
      T10 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 3, T8);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:622
      CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
      T4 = CONGRUENT_CALL1(T10);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:620
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:625
        iF12T = T8;
        goto L0;
        T6_0 = T11_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:623
        T5_0 = &KPfalseVKi;
        T6_0 = T5_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:620
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:620
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:625
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:617
  MV_SET_COUNT(1);
  return(T7_0);
}

D Krecompute_type_completeXVKiMM6I (D d_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:661
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:662
  T3 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:662
  CONGRUENT_CALL_PROLOG(&Krecompute_type_completeXVKi, 1);
  T2_0 = CONGRUENT_CALL1(T3);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:661
  MV_SET_COUNT(1);
  return(T2_0);
}

D Krecompute_type_completeXVKiMM5I (D d_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:632
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:633
  T2_0 = Ktype_completeQVKeMM10I(d_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:632
  MV_SET_COUNT(1);
  return(T2_0);
}

D KPremove_method_domainVKiI (D gf_, D m_, D in_lib_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:366
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:389
  T4 = SLOT_VALUE_INITD(gf_, 7);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:389
  T3 = Klookup_domain_1F193I(in_lib_, m_, gf_, T4, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:366
  MV_SET_COUNT(0);
  return(T3);
}

D KPadd_method_domainVKnI (D gf_, D m_, D lib_, D checkedQ_) {
  D T4;
  D T5_0;
  D T6_0;
  _KLsimple_object_vectorGVKd_6 T7 = {&KLsimple_object_vectorGVKdW, (D) 25};
  _KLsimple_object_vectorGVKd_1 T8 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:233
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:235
  T7.vector_element_[0] = &KJnext_;
  T7.vector_element_[1] = &KPfalseVKi;
  T7.vector_element_[2] = IKJmethod_;
  T7.vector_element_[3] = m_;
  T7.vector_element_[4] = IKJlibrary_;
  T7.vector_element_[5] = lib_;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:235
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLmethod_domainGVKe, &T7);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:236
  if (checkedQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:237
    T8.vector_element_[0] = T4;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:237
    T10 = primitive_copy_vector(&T8);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:237
    T9 = KPadd_domains_internalVKiI(gf_, T10);
    T6_0 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:239
    T11 = SLOT_VALUE_INITD(gf_, 7);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:239
    SLOT_VALUE_SETTER(T11, T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:240
    SLOT_VALUE_SETTER(T4, gf_, 7);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:241
    T5_0 = &KPempty_listVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:236
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:233
  MV_SET_COUNT(1);
  return(T6_0);
}

D KPadd_domains_internalVKiI (D gf_, D domains_) {
  DWORD T2T, T2;
  D d_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9T, T9;
  DWORD i_T, i_;
  D m_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D lossage_;
  D T20;
  D T21;
  D T22;
  D meths_;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  D T37;
  _KLsimple_object_vectorGVKd_2 T38 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T39;
  _KLsimple_object_vectorGVKd_10 T40 = {&KLsimple_object_vectorGVKdW, (D) 41};
  D T41;
  D T42;
  DWORD T43;
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
  D T56;
  DWORD T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63_0;
  D T64;
  D T65_0;
  D T66;
  DWORD T67;
  D T68;
  D T69;
  _KLsimple_object_vectorGVKd_3 T70 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T71;
  _KLsimple_object_vectorGVKd_10 T72 = {&KLsimple_object_vectorGVKdW, (D) 41};
  D T73;
  DWORD T74;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:257
  lossage_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
  T27 = SLOT_VALUE_INITD(domains_, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
  T28 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
  T2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
    T29 = primitive_machine_word_equalQ(T2,T28);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
    if (T29 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
      T30 = REPEATED_D_SLOT_VALUE_TAGGED(domains_, 1, T2);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
      d_ = T30;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:259
      T31 = SLOT_VALUE(d_, 0);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      T32 = SLOT_VALUE_INITD(gf_, 9);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      T33 = primitive_cast_integer_as_raw(T32);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      T34 = primitive_machine_word_logbitQ(2,T33);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      if (T34 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
        T35 = SLOT_VALUE(gf_, 6);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
        T36 = SLOT_VALUE_INITD(T35, 1);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
        T4 = Klibrary_visible_fromQVKiI(T31, T36);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
        T37 = primitive_not(T4);
        T5 = T37;
      } else {
        T5 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:261
        T38.vector_element_[0] = gf_;
        T38.vector_element_[1] = d_;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:261
        T39 = primitive_copy_vector(&T38);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:263
        T40.vector_element_[0] = &KJgeneric_function_;
        T40.vector_element_[1] = gf_;
        T40.vector_element_[2] = &KJoperation_;
        T40.vector_element_[3] = &KPdefine_domainVKn;
        T40.vector_element_[4] = &KJarguments_;
        T40.vector_element_[5] = T39;
        T40.vector_element_[6] = &KJformat_string_;
        T40.vector_element_[7] = &K36;
        T40.vector_element_[8] = &KJformat_arguments_;
        T40.vector_element_[9] = T39;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:263
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T6 = CONGRUENT_CALL2(&KLsealed_generic_function_errorGVKe, &T40);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:262
        T22 = lossage_;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:262
        T41 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:262
        SLOT_VALUE_SETTER(T6, T41, 0);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:262
        SLOT_VALUE_SETTER(T22, T41, 1);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:262
        lossage_ = T41;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
        T42 = SLOT_VALUE_INITD(gf_, 9);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
        T43 = primitive_cast_integer_as_raw(T42);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
        T44 = primitive_machine_word_logbitQ(4,T43);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
        if (T44 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
          T45 = SLOT_VALUE_INITD(gf_, 1);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
          T46 = SLOT_VALUE_INITD(T45, 0);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
          T47 = primitive_cast_integer_as_raw(T46);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
          T48 = primitive_machine_word_logbitQ(25,T47);
          T49 = T48;
        } else {
          T49 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
        if (T49 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
          CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
          T7 = CONGRUENT_CALL1(d_);
          T8 = T7;
        } else {
          T8 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:268
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
        if (T8 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:269
          T50 = SLOT_VALUE(gf_, 6);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:269
          T51 = SLOT_VALUE_INITD(T50, 1);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:270
          T52 = SLOT_VALUE_INITD(gf_, 8);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:271
          T53 = SLOT_VALUE_INITD(T52, 0);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:274
          T57 = primitive_cast_integer_as_raw(T53);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:272
          meths_ = &KPempty_listVKi;
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
          T54 = SLOT_VALUE_INITD(gf_, 4);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
          T9T = T54;
          i_T = 1;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
            T9 = T9T;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
            i_ = i_T;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
            T55 = primitive_idQ(T9,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
            if (T55 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              T56 = SLOT_VALUE_INITD(T9, 0);
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              m_ = T56;
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:274
              T58 = primitive_machine_word_less_thanQ(i_,T57);
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:274
              if (T58 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:274
                T59 = REPEATED_D_SLOT_VALUE_TAGGED(T52, 1, i_);
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:274
                T60 = T59;
                T12 = T60;
              } else {
                T12 = T51;
              }
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:274
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:275
              T13 = Klibrary_visible_fromQVKiI(T12, T31);
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:275
              if (T13 != &KPfalseVKi) {
                T15 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:276
                T14 = CALL4(&Kdomain_disjointQVKe, d_, m_, Dempty_subjunctive_class_universeVKe, &KPfalseVKi);
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:276
                T61 = primitive_not(T14);
                T15 = T61;
              }
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:275
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:275
              if (T15 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:279
                T26 = meths_;
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:279
                T62 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:279
                SLOT_VALUE_SETTER(m_, T62, 0);
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:279
                SLOT_VALUE_SETTER(T26, T62, 1);
                // /opt/opendylan-2013.1/sources/dylan/domain.dylan:279
                meths_ = T62;
              }
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:275
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              T64 = SLOT_VALUE_INITD(T9, 1);
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              T65_0 = T64;
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              T63_0 = T65_0;
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              T66 = T63_0;
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              T67 = primitive_machine_word_add_signal_overflow(i_,4);
              // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
              T9T = T66;
              i_T = T67;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:273
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:282
          T25 = meths_;
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:282
          T68 = primitive_idQ(T25,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:282
          if (T68 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:294
            KPadd_domain_unconditionallyVKiI(gf_, d_);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:292
            T69 = Kdomain_typesVKeMM0I(d_);
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:292
            T24 = meths_;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:292
            T70.vector_element_[0] = gf_;
            T70.vector_element_[1] = T69;
            T70.vector_element_[2] = T24;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:292
            T71 = primitive_copy_vector(&T70);
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:287
            T72.vector_element_[0] = &KJgeneric_function_;
            T72.vector_element_[1] = gf_;
            T72.vector_element_[2] = IKJdomain_;
            T72.vector_element_[3] = d_;
            T72.vector_element_[4] = &KJoperation_;
            T72.vector_element_[5] = &KPdefine_domainVKn;
            T72.vector_element_[6] = &KJformat_string_;
            T72.vector_element_[7] = &K41;
            T72.vector_element_[8] = &KJformat_arguments_;
            T72.vector_element_[9] = T71;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:287
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T16 = CONGRUENT_CALL2(&KLdomain_sealed_generic_function_errorGVKe, &T72);
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:286
            T21 = lossage_;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:286
            T73 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:286
            SLOT_VALUE_SETTER(T16, T73, 0);
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:286
            SLOT_VALUE_SETTER(T21, T73, 1);
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:285
            lossage_ = T73;
          }
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:282
        } else {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:297
          T17 = note_generic_function_incomplete_domainVKi;
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:297
          CALL2(T17, gf_, d_);
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:260
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
      T74 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
      T2T = T74;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:258
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:300
  T20 = lossage_;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:300
  T18_0 = T20;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:253
  MV_SET_COUNT(1);
  return(T18_0);
}

D Klibrary_visible_fromQVKiI (D is_this_visible_, D from_this_) {
  D T3_0;
  D T4;
  D T5;
  D v_;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  D T28;
  DWORD iF29T, iF29;
  D T30;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:162
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:164
  T10 = primitive_idQ(is_this_visible_,from_this_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:164
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:164
    T3_0 = T10;
    T9_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:167
    T11 = SLOT_VALUE_INITD(from_this_, 5);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:169
    T12 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:169
    T13 = primitive_idQ(T12,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:169
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:172
      T14 = SLOT_VALUE_INITD(from_this_, 4);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:173
      T15 = SLOT_VALUE_INITD(T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:173
      T16 = primitive_idQ(T15,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:173
      if (T16 != &KPfalseVKi) {
        T7 = &KPempty_vectorVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:177
        T17.vector_element_[0] = from_this_;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:177
        T4 = KlistVKdI(&T17);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:177
        T5 = Kcompute_all_used_librariesVKiI(T14, T4);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:177
        T18 = KasVKdMM41I(&KLsimple_object_vectorGVKd, T5);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:176
        v_ = T18;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:178
        SLOT_VALUE_SETTER(v_, from_this_, 5);
        T7 = v_;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:173
      T8 = T7;
    } else {
      T8 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:169
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
    T19 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
    iF29T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
      iF29 = iF29T;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
      T30 = primitive_cast_raw_as_integer(iF29);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
      T24 = primitive_idQ(T30,T19);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
        T20 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T23 = T20;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
        T25 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, iF29);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
        T26 = primitive_idQ(T25,is_this_visible_);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
        if (T26 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
          T21 = &KPtrueVKi;
          MV_SET_ELT(0, &KPtrueVKi);
          MV_SET_COUNT(1);
          T22 = T21;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
          T27 = primitive_machine_word_add_signal_overflow(iF29,4);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
          iF29T = T27;
          goto L0;
          T22 = T28;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
        T23 = T22;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:181
    T9_0 = T23;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:164
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:162
  MV_SET_COUNT(1);
  return(T9_0);
}

D KPdefine_domainVKnI (D gf_, D lib_, D types_) {
  D T4;
  D T5;
  D T6;
  DWORD i_T, i_;
  D T8;
  D T9;
  D T10;
  DWORD T11T, T11;
  D result_T, result_;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_3 T19 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T20;
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  _KLsimple_object_vectorGVKd_5 T27 = {&KLsimple_object_vectorGVKdW, (D) 21};
  D T28;
  _KLsimple_object_vectorGVKd_4 T29 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T30;
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T32;
  D T33;
  D T34;
  DWORD T35;
  _KLsimple_object_vectorGVKd_1 T36 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T37;
  D T38;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:211
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:213
  T10 = SLOT_VALUE_INITD(types_, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
  T13 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
  T11T = 1;
  result_T = &KPtrueVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    T14 = primitive_machine_word_equalQ(T11,T13);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(types_, 1, T11);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
      if (result_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
        T16 = primitive_machine_word_add_signal_overflow(T11,4);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
        T17 = primitive_instanceQ(T15,&KLtypeGVKd);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
        T11T = T16;
        result_T = T17;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
  if (result_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:219
    T23 = Kfunction_number_requiredVKiMM1I(gf_);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:219
    T24 = primitive_idQ(T10,T23);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:226
      T31.vector_element_[0] = IKJlibrary_;
      T31.vector_element_[1] = lib_;
      T31.vector_element_[2] = &KJsize_;
      T31.vector_element_[3] = T10;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:226
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T6 = CONGRUENT_CALL2(&KLstandalone_domainGVKe, &T31);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
      i_T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
        i_ = i_T;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
        T33 = primitive_cast_raw_as_integer(i_);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
        T32 = primitive_machine_word_less_thanQ(i_,T13);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
        if (T32 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
          T34 = KelementVKdMM11I(types_, T33, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
          CALL3(&Kdomain_type_setterVKi, T34, T6, T33);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
          T35 = primitive_machine_word_add_signal_overflow(i_,4);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
          i_T = T35;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:227
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:228
      T36.vector_element_[0] = T6;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:228
      T37 = primitive_copy_vector(&T36);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:228
      T38 = KPadd_domainsVKnMM0I(gf_, T37);
      T8 = T38;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:223
      T25 = Kfunction_number_requiredVKiMM1I(gf_);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:224
      T26 = KasVKdMM62I(&KLlistGVKd, types_);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:223
      T27.vector_element_[0] = gf_;
      T27.vector_element_[1] = lib_;
      T27.vector_element_[2] = T25;
      T27.vector_element_[3] = T10;
      T27.vector_element_[4] = T26;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:223
      T28 = primitive_copy_vector(&T27);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:220
      T29.vector_element_[0] = &KJformat_string_;
      T29.vector_element_[1] = &K119;
      T29.vector_element_[2] = &KJformat_arguments_;
      T29.vector_element_[3] = T28;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:220
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T5 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T29);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:220
      T30 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
      T8 = T30;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
    T9 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:218
    T18 = KasVKdMM62I(&KLlistGVKd, types_);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:218
    T19.vector_element_[0] = gf_;
    T19.vector_element_[1] = lib_;
    T19.vector_element_[2] = T18;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:218
    T20 = primitive_copy_vector(&T19);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:215
    T21.vector_element_[0] = &KJformat_string_;
    T21.vector_element_[1] = &K120;
    T21.vector_element_[2] = &KJformat_arguments_;
    T21.vector_element_[3] = T20;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:215
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T21);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:215
    T22 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
    T9 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:214
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:211
  MV_SET_COUNT(0);
  return(T9);
}

D KPadd_domain_unconditionallyVKiI (D g_, D d_) {
  D T2_0;
  D T2_1;
  D old_;
  D predecessor_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:321
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:324
  T2_0 = Klookup_domainVKiI(d_, g_);
  T2_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:323
  old_ = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:323
  predecessor_ = T2_1;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:325
  if (old_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:294
    T8 = old_;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:327
    T10 = SLOT_VALUE_INITD(T8, 1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:327
    SLOT_VALUE_SETTER(T10, d_, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:325
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:329
  if (predecessor_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:294
    T9 = predecessor_;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:331
    SLOT_VALUE_SETTER(d_, T9, 1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:331
    T5 = &KPfalseVKi;
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:333
    SLOT_VALUE_SETTER(d_, g_, 7);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:333
    T6 = &KPfalseVKi;
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:321
  MV_SET_COUNT(0);
  return(T7);
}

D Kdomain_typesVKeMM0I (D d_) {
  D T2;
  DWORD i_T, i_;
  D T4_0;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:119
  CONGRUENT_CALL_PROLOG(&Kdomain_number_requiredVKe, 1);
  T2 = CONGRUENT_CALL1(d_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:120
  T5 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
    T8 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
    T6 = primitive_cast_integer_as_raw(T2);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
    T7 = primitive_machine_word_less_thanQ(i_,T6);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
      ENGINE_NODE_CALL_PROLOG(&Kdomain_typeVKe, &K63, 2);
      T9 = ENGINE_NODE_CALL2(&K63, d_, T8);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T9, T5, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
      T10 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
      i_T = T10;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:122
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:118
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLdomain_sealed_generic_function_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_sealed_generic_function_error_generic_, D Uunique_sealed_generic_function_error_operation_, D Uunique_sealed_generic_function_error_arguments_, D Uunique_sealed_generic_function_error_domain_) {
  D T9;
  D Uunique_sealed_generic_function_error_genericF10;
  D T11;
  D Uunique_sealed_generic_function_error_domainF12;
  D T13;
  D Uunique_sealed_generic_function_error_genericF14;
  D Uunique_sealed_generic_function_error_argumentsF15;
  D Uunique_sealed_generic_function_error_argumentsF16;
  D Uunique_sealed_generic_function_error_domainF17;
  D T18_0;
  D T19;
  _KLsimple_object_vectorGVKd_1 T20 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_1 T23 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  T19 = primitive_idQ(Uunique_sealed_generic_function_error_generic_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  if (T19 != &KPfalseVKi) {
    T20.vector_element_[0] = &KJgeneric_function_;
    T21 = KerrorVKdMM1I(&K56, &T20);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
    T9 = T21;
    Uunique_sealed_generic_function_error_genericF10 = T9;
  } else {
    Uunique_sealed_generic_function_error_genericF10 = Uunique_sealed_generic_function_error_generic_;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  T22 = primitive_idQ(Uunique_sealed_generic_function_error_domain_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  if (T22 != &KPfalseVKi) {
    T23.vector_element_[0] = IKJdomain_;
    T24 = KerrorVKdMM1I(&K56, &T23);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
    T11 = T24;
    Uunique_sealed_generic_function_error_domainF12 = T11;
  } else {
    Uunique_sealed_generic_function_error_domainF12 = Uunique_sealed_generic_function_error_domain_;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  T13 = primitive_object_allocate_filled(7,&KLdomain_sealed_generic_function_errorGVKeW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T13, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T13, 1);
  Uunique_sealed_generic_function_error_genericF14 = Uunique_sealed_generic_function_error_genericF10;
  SLOT_VALUE_SETTER(Uunique_sealed_generic_function_error_genericF14, T13, 2);
  SLOT_VALUE_SETTER(Uunique_sealed_generic_function_error_operation_, T13, 3);
  T25 = primitive_idQ(Uunique_sealed_generic_function_error_arguments_,&KPunboundVKi);
  if (T25 != &KPfalseVKi) {
    Uunique_sealed_generic_function_error_argumentsF16 = Uunique_sealed_generic_function_error_arguments_;
  } else {
    Uunique_sealed_generic_function_error_argumentsF15 = Uunique_sealed_generic_function_error_arguments_;
    Uunique_sealed_generic_function_error_argumentsF16 = Uunique_sealed_generic_function_error_argumentsF15;
  }
  SLOT_VALUE_SETTER(Uunique_sealed_generic_function_error_argumentsF16, T13, 4);
  Uunique_sealed_generic_function_error_domainF17 = Uunique_sealed_generic_function_error_domainF12;
  SLOT_VALUE_SETTER(Uunique_sealed_generic_function_error_domainF17, T13, 5);
  APPLY2(&KinitializeVKd, T13, init_args_);
  T18_0 = T13;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:463
  MV_SET_COUNT(1);
  return(T18_0);
}

D Klookup_domainVKiI (D d_, D g_) {
  D T2_0;
  D T2_1;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:441
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:443
  T3 = SLOT_VALUE(d_, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:458
  T4 = SLOT_VALUE_INITD(g_, 7);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:458
  T2_0 = Klookup_domain_1F66I(T3, d_, T4, &KPfalseVKi);
  T2_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:441
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

static D Klookup_domain_1F66I (D implicit_argument_, D d_, D link_, D predecessor_) {
  D linkF4;
  D predecessorF5;
  D linkF6;
  D T7;
  D T8;
  D T9_0;
  D T9_1;
  D T10_0;
  D T10_1;
  D T11;
  D T12;
  D T13_0;
  D T13_1;
  D T14;
  D T15_0;
  D T15_1;
  D T16_0;
  D T16_1;
  D linkF17T, linkF17;
  D T18;
  D predecessorF19T, predecessorF19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:444
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
  linkF17T = link_;
  predecessorF19T = predecessor_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
    linkF17 = linkF17T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
    T18 = linkF17;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
    predecessorF19 = predecessorF19T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
    T20 = predecessorF19;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:444
    linkF4 = T18;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:444
    predecessorF5 = T20;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:447
    if (linkF4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:448
      linkF6 = linkF4;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:449
      T11 = SLOT_VALUE(linkF6, 0);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:449
      T12 = primitive_idQ(implicit_argument_,T11);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:449
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:449
        CONGRUENT_CALL_PROLOG(&Kdomain_matchQVKe, 2);
        T7 = CONGRUENT_CALL2(linkF6, d_);
        T8 = T7;
      } else {
        T8 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:449
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:449
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:450
        T13_0 = linkF6;
        T13_1 = predecessorF5;
        T9_0 = T13_0;
        T9_1 = T13_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
        T14 = SLOT_VALUE_INITD(linkF6, 1);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
        linkF17T = T14;
        predecessorF19T = linkF6;
        goto L0;
        T9_0 = T16_0;
        T9_1 = T16_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:449
      T10_0 = T9_0;
      T10_1 = T9_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:455
      T15_0 = &KPfalseVKi;
      T15_1 = predecessorF5;
      T10_0 = T15_0;
      T10_1 = T15_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:447
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:452
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:444
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D Kdomain_disjointQVKeMM0I (D d1_, D d2_, D scu_, D dep_) {
  D returnPexit_38_;
  D T6;
  D T7;
  DWORD i_T, i_;
  D T9;
  D T10;
  D T11_0;
  D T12_0;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  DWORD T20;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:551
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:553
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
  CONGRUENT_CALL_PROLOG(&Kdomain_number_requiredVKe, 1);
  T7 = CONGRUENT_CALL1(d1_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
  T13 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
    T15 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
    T14 = primitive_machine_word_less_thanQ(i_,T13);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:555
      ENGINE_NODE_CALL_PROLOG(&Kdomain_typeVKe, &K115, 2);
      T16 = ENGINE_NODE_CALL2(&K115, d1_, T15);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:555
      ENGINE_NODE_CALL_PROLOG(&Kdomain_typeVKe, &K116, 2);
      T17 = ENGINE_NODE_CALL2(&K116, d2_, T15);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:555
      T9 = Kgrounded_disjoint_typesQVKiI(T16, T17, scu_, dep_);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:555
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:556
        T18.vector_element_[0] = &KPtrueVKi;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:553
        T19 = MV_SET_REST_AT(&T18, 0);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:553
        T11_0 = T19;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:555
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
      T20 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
      i_T = T20;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:554
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:559
  T10 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:553
  T11_0 = T10;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:553
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:551
  T12_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:551
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kdomain_disjointQVKeMM1I (D d1_, D d2_, D scu_, D dep_) {
  D returnPexit_38_;
  D T6;
  DWORD iF7T, iF7;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  DWORD T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20_0;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:564
  T18 = SLOT_VALUE_INITD(d1_, 2);
  T12 = primitive_cast_integer_as_raw(T18);
  iF7T = 1;
L0: ;
    iF7 = iF7T;
    T14 = primitive_cast_raw_as_integer(iF7);
    T13 = primitive_machine_word_less_thanQ(iF7,T12);
    if (T13 != &KPfalseVKi) {
      T19 = REPEATED_D_SLOT_VALUE_TAGGED(d1_, 3, iF7);
      T20_0 = KPmethod_specializerVKgI(d2_, T14);
      T21 = T20_0;
      T8 = Kgrounded_disjoint_typesQVKiI(T19, T21, scu_, dep_);
      if (T8 != &KPfalseVKi) {
        T15.vector_element_[0] = &KPtrueVKi;
        T16 = MV_SET_REST_AT(&T15, 0);
        T10_0 = T16;
        goto L1;
      }
      T17 = primitive_machine_word_add_signal_overflow(iF7,4);
      iF7T = T17;
      goto L0;
    }
  T9 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  T10_0 = T9;
  L1: ;
  T11_0 = T10_0;
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kdomain_disjointQVKeMM2I (D d1_, D d2_, D scu_, D dep_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:569
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:573
  T5_0 = Kdomain_disjointQVKeMM1I(d2_, d1_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:569
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdomain_disjointQVKeMM3I (D d1_, D d2_, D scu_, D dep_) {
  D returnPexit_38_;
  D T6;
  DWORD iF7T, iF7;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  DWORD T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;
  DWORD T17;
  D T18_0;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23_0;
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:577
  T19 = SLOT_VALUE_INITD(d1_, 2);
  T18_0 = KPmethod_number_requiredVKgI(T19);
  T20 = T18_0;
  T12 = primitive_cast_integer_as_raw(T20);
  iF7T = 1;
L0: ;
    iF7 = iF7T;
    T14 = primitive_cast_raw_as_integer(iF7);
    T13 = primitive_machine_word_less_thanQ(iF7,T12);
    if (T13 != &KPfalseVKi) {
      T21_0 = KPmethod_specializerVKgI(T19, T14);
      T22 = T21_0;
      T23_0 = KPmethod_specializerVKgI(d2_, T14);
      T24 = T23_0;
      T8 = Kgrounded_disjoint_typesQVKiI(T22, T24, scu_, dep_);
      if (T8 != &KPfalseVKi) {
        T15.vector_element_[0] = &KPtrueVKi;
        T16 = MV_SET_REST_AT(&T15, 0);
        T10_0 = T16;
        goto L1;
      }
      T17 = primitive_machine_word_add_signal_overflow(iF7,4);
      iF7T = T17;
      goto L0;
    }
  T9 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  T10_0 = T9;
  L1: ;
  T11_0 = T10_0;
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kdomain_disjointQVKeMM4I (D d1_, D d2_, D scu_, D dep_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:582
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:586
  T5_0 = Kdomain_disjointQVKeMM3I(d2_, d1_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:582
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdomain_disjointQVKeMM6I (D d1_, D d2_, D scu_, D dep_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:595
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:599
  T5_0 = Kdomain_disjointQVKeMM5I(d2_, d1_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:595
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdomain_disjointQVKeMM7I (D d1_, D d2_, D scu_, D dep_) {
  D returnPexit_38_;
  D T6;
  DWORD iF7T, iF7;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  DWORD T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;
  DWORD T17;
  D T18;
  D T19_0;
  D T20;
  D T21_0;
  D T22_0;
  D T23;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:603
  T18 = SLOT_VALUE_INITD(d1_, 0);
  T12 = primitive_cast_integer_as_raw(T18);
  iF7T = 1;
L0: ;
    iF7 = iF7T;
    T14 = primitive_cast_raw_as_integer(iF7);
    T13 = primitive_machine_word_less_thanQ(iF7,T12);
    if (T13 != &KPfalseVKi) {
      T21_0 = KelementVKdMM11I(d1_, T14, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      T19_0 = T21_0;
      T20 = T19_0;
      T22_0 = KPmethod_specializerVKgI(d2_, T14);
      T23 = T22_0;
      T8 = Kgrounded_disjoint_typesQVKiI(T20, T23, scu_, dep_);
      if (T8 != &KPfalseVKi) {
        T15.vector_element_[0] = &KPtrueVKi;
        T16 = MV_SET_REST_AT(&T15, 0);
        T10_0 = T16;
        goto L1;
      }
      T17 = primitive_machine_word_add_signal_overflow(iF7,4);
      iF7T = T17;
      goto L0;
    }
  T9 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  T10_0 = T9;
  L1: ;
  T11_0 = T10_0;
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kdomain_disjointQVKeMM8I (D d1_, D d2_, D scu_, D dep_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:612
  T5_0 = Kdomain_disjointQVKeMM7I(d2_, d1_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:608
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kgrounded_disjoint_typesQVKiI (D t1_, D t2_, D scu_, D dep_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:534
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:537
  T8 = primitive_instanceQ(t1_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:537
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:555
    T6 = t1_;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:539
    T9 = primitive_instanceQ(t2_,&KLclassGVKd);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:539
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:555
      T7 = t2_;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:541
      T10_0 = Kdisjoint_types_1QVKeMM4I(T6, T7, scu_, dep_);
      T4_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:543
      ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K99, 4);
      T11_0 = ENGINE_NODE_CALL4(&K99, T6, t2_, scu_, dep_);
      T4_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:539
    T5_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:546
    ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K100, 4);
    T12_0 = ENGINE_NODE_CALL4(&K100, t1_, t2_, scu_, dep_);
    T5_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:537
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:534
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPadd_domainsVKnMM0I (D gf_, D domains_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:246
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  T6 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  SLOT_VALUE_SETTER(gf_, T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  SLOT_VALUE_SETTER(&KPfalseVKi, T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  SLOT_VALUE_SETTER(T6, T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  SLOT_VALUE_SETTER(&KPempty_listVKi, T7, 1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  ENTER_UNWIND_FRAME(T3);
  if (!nlx_setjmp(FRAME_DEST(T3))) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T7, T7);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
    T4 = KPadd_domains_internalVKiI(gf_, domains_);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
    FALL_THROUGH_UNWIND(T4);
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T7, T7);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:248
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:249
  T5 = Kbletch_stackVKgI(T4);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:246
  MV_SET_COUNT(0);
  return(T5);
}

D Kcompute_all_used_librariesVKiI (D usedvec_, D ans_) {
  D T2;
  D T3_0;
  D used_;
  D T5;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16_0;
  DWORD iF17;
  D ansF18;
  D T19_0;
  DWORD iF20T, iF20;
  D ansF21T, ansF21;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:142
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:144
  T2 = SLOT_VALUE_INITD(usedvec_, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
  iF20T = 1;
  ansF21T = ans_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:152
    iF20 = iF20T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:152
    ansF21 = ansF21T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
    iF17 = iF20;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:149
    T22 = primitive_cast_raw_as_integer(iF17);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
    ansF18 = ansF21;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:146
    T8 = primitive_idQ(T22,T2);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:146
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:147
      T3_0 = ansF18;
      T7_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:149
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(usedvec_, 1, iF17);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:149
      used_ = T9;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:150
      T10 = SLOT_VALUE_INITD(used_, 3);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:151
      T11 = KmemberQVKdMM3I(T10, ansF18, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:151
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:152
        T12 = primitive_machine_word_add_signal_overflow(iF17,4);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:152
        iF20T = T12;
        ansF21T = ansF18;
        goto L0;
        T6_0 = T19_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
        T13 = primitive_machine_word_add_signal_overflow(iF17,4);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
        T14 = SLOT_VALUE_INITD(T10, 4);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
        T15 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
        SLOT_VALUE_SETTER(T10, T15, 0);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
        SLOT_VALUE_SETTER(ansF18, T15, 1);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
        T5 = Kcompute_all_used_librariesVKiI(T14, T15);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
        iF20T = T13;
        ansF21T = T5;
        goto L0;
        T6_0 = T16_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:151
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:146
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:154
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:142
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdomain_matchQVKeMM0I (D d1_, D d2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD iF15T, iF15;
  DWORD T16;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:398
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:409
  CONGRUENT_CALL_PROLOG(&Kdomain_number_requiredVKe, 1);
  T3 = CONGRUENT_CALL1(d1_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:400
  T16 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:404
  iF15T = T16;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:404
    iF15 = iF15T;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:400
    T9 = primitive_machine_word_subtract_signal_overflow(iF15,4);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:400
    T10 = primitive_cast_raw_as_integer(T9);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:401
    T11 = primitive_machine_word_less_thanQ(T9,1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:401
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:402
      T4 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T8 = T4;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:403
      ENGINE_NODE_CALL_PROLOG(&Kdomain_typeVKe, &K167, 2);
      T12 = ENGINE_NODE_CALL2(&K167, d1_, T10);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:403
      ENGINE_NODE_CALL_PROLOG(&Kdomain_typeVKe, &K168, 2);
      T13 = ENGINE_NODE_CALL2(&K168, d2_, T10);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:403
      T5 = Ksame_specializerQVKgI(T12, T13);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:401
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:404
        iF15T = T9;
        goto L0;
        T7 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:406
        T6 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T7 = T6;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:401
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:404
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:398
  return(T8);
}

D Kdomain_matchQVKeMM1I (D d1_, D d2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  DWORD iF11T, iF11;
  DWORD T12;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:413
  T13 = SLOT_VALUE_INITD(d1_, 2);
  T12 = primitive_cast_integer_as_raw(T13);
  iF11T = T12;
L0: ;
    iF11 = iF11T;
    T8 = primitive_machine_word_subtract_signal_overflow(iF11,4);
    T9 = primitive_machine_word_less_thanQ(T8,1);
    if (T9 != &KPfalseVKi) {
      T3 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T7 = T3;
    } else {
      T14 = REPEATED_D_SLOT_VALUE_TAGGED(d1_, 3, T8);
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(d2_, 3, T8);
      T4 = Ksame_specializerQVKgI(T14, T15);
      if (T4 != &KPfalseVKi) {
        iF11T = T8;
        goto L0;
        T6 = T10;
      } else {
        T5 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      }
      T7 = T6;
    }
  return(T7);
}

D Kdomain_matchQVKeMM2I (D d1_, D d2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD iF12T, iF12;
  DWORD T13;
  D T14;
  D T15;
  D T16_0;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:416
  T14 = SLOT_VALUE_INITD(d1_, 2);
  T13 = primitive_cast_integer_as_raw(T14);
  iF12T = T13;
L0: ;
    iF12 = iF12T;
    T8 = primitive_machine_word_subtract_signal_overflow(iF12,4);
    T9 = primitive_cast_raw_as_integer(T8);
    T10 = primitive_machine_word_less_thanQ(T8,1);
    if (T10 != &KPfalseVKi) {
      T3 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T7 = T3;
    } else {
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(d1_, 3, T8);
      T17 = SLOT_VALUE_INITD(d2_, 2);
      T16_0 = KPmethod_specializerVKgI(T17, T9);
      T18 = T16_0;
      T4 = Ksame_specializerQVKgI(T15, T18);
      if (T4 != &KPfalseVKi) {
        iF12T = T8;
        goto L0;
        T6 = T11;
      } else {
        T5 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      }
      T7 = T6;
    }
  return(T7);
}

D Kdomain_matchQVKeMM3I (D d1_, D d2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:419
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:421
  T3_0 = Kdomain_matchQVKeMM2I(d2_, d1_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:419
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kdomain_matchQVKeMM4I (D d1_, D d2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD iF12T, iF12;
  DWORD T13;
  D T14_0;
  D T15;
  D T16;
  D T17_0;
  D T18;
  D T19_0;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:424
  T15 = SLOT_VALUE_INITD(d1_, 2);
  T14_0 = KPmethod_number_requiredVKgI(T15);
  T16 = T14_0;
  T13 = primitive_cast_integer_as_raw(T16);
  iF12T = T13;
L0: ;
    iF12 = iF12T;
    T8 = primitive_machine_word_subtract_signal_overflow(iF12,4);
    T9 = primitive_cast_raw_as_integer(T8);
    T10 = primitive_machine_word_less_thanQ(T8,1);
    if (T10 != &KPfalseVKi) {
      T3 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T7 = T3;
    } else {
      T17_0 = KPmethod_specializerVKgI(T15, T9);
      T18 = T17_0;
      T20 = SLOT_VALUE_INITD(d2_, 2);
      T19_0 = KPmethod_specializerVKgI(T20, T9);
      T21 = T19_0;
      T4 = Ksame_specializerQVKgI(T18, T21);
      if (T4 != &KPfalseVKi) {
        iF12T = T8;
        goto L0;
        T6 = T11;
      } else {
        T5 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      }
      T7 = T6;
    }
  return(T7);
}

D Kdomain_matchQVKeMM5I (D d1_, D d2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD iF12T, iF12;
  DWORD T13;
  D T14;
  D T15;
  D T16_0;
  D T17;
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:427
  T14 = SLOT_VALUE_INITD(d1_, 2);
  T13 = primitive_cast_integer_as_raw(T14);
  iF12T = T13;
L0: ;
    iF12 = iF12T;
    T8 = primitive_machine_word_subtract_signal_overflow(iF12,4);
    T9 = primitive_cast_raw_as_integer(T8);
    T10 = primitive_machine_word_less_thanQ(T8,1);
    if (T10 != &KPfalseVKi) {
      T3 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T7 = T3;
    } else {
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(d1_, 3, T8);
      T18_0 = KelementVKdMM11I(d2_, T9, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      T16_0 = T18_0;
      T17 = T16_0;
      T4 = Ksame_specializerQVKgI(T15, T17);
      if (T4 != &KPfalseVKi) {
        iF12T = T8;
        goto L0;
        T6 = T11;
      } else {
        T5 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      }
      T7 = T6;
    }
  return(T7);
}

D Kdomain_matchQVKeMM6I (D d1_, D d2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD iF12T, iF12;
  DWORD T13;
  D T14_0;
  D T15;
  D T16;
  D T17_0;
  D T18;
  D T19_0;
  D T20;
  D T21_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:430
  T15 = SLOT_VALUE_INITD(d1_, 2);
  T14_0 = KPmethod_number_requiredVKgI(T15);
  T16 = T14_0;
  T13 = primitive_cast_integer_as_raw(T16);
  iF12T = T13;
L0: ;
    iF12 = iF12T;
    T8 = primitive_machine_word_subtract_signal_overflow(iF12,4);
    T9 = primitive_cast_raw_as_integer(T8);
    T10 = primitive_machine_word_less_thanQ(T8,1);
    if (T10 != &KPfalseVKi) {
      T3 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T7 = T3;
    } else {
      T17_0 = KPmethod_specializerVKgI(T15, T9);
      T18 = T17_0;
      T21_0 = KelementVKdMM11I(d2_, T9, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      T19_0 = T21_0;
      T20 = T19_0;
      T4 = Ksame_specializerQVKgI(T18, T20);
      if (T4 != &KPfalseVKi) {
        iF12T = T8;
        goto L0;
        T6 = T11;
      } else {
        T5 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      }
      T7 = T6;
    }
  return(T7);
}

D Kdomain_matchQVKeMM7I (D d1_, D d2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD iF12T, iF12;
  DWORD T13;
  D T14;
  D T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:434
  T14 = Kdomain_number_requiredVKeMM4I(d1_);
  T13 = primitive_cast_integer_as_raw(T14);
  iF12T = T13;
L0: ;
    iF12 = iF12T;
    T8 = primitive_machine_word_subtract_signal_overflow(iF12,4);
    T9 = primitive_cast_raw_as_integer(T8);
    T10 = primitive_machine_word_less_thanQ(T8,1);
    if (T10 != &KPfalseVKi) {
      T3 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T7 = T3;
    } else {
      T15 = Kdomain_typeVKeMM4I(d1_, T9);
      T16 = Kdomain_typeVKeMM4I(d2_, T9);
      T4 = Ksame_specializerQVKgI(T15, T16);
      if (T4 != &KPfalseVKi) {
        iF12T = T8;
        goto L0;
        T6 = T11;
      } else {
        T5 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      }
      T7 = T6;
    }
  return(T7);
}

D Kdomain_conflictQVKiMM0I (D g_, D frob_, D lib_, D incrementalQ_, D opstring_) {
  D T6_0;
  D T7_0;
  D T8_0;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;
  _KLsimple_object_vectorGVKd_6 T11 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:474
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:477
  if (incrementalQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:477
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:480
    T9.vector_element_[0] = opstring_;
    T9.vector_element_[1] = frob_;
    T9.vector_element_[2] = lib_;
    T9.vector_element_[3] = g_;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:480
    T10 = primitive_copy_vector(&T9);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:477
    T11.vector_element_[0] = &KJgeneric_function_;
    T11.vector_element_[1] = g_;
    T11.vector_element_[2] = &KJformat_string_;
    T11.vector_element_[3] = &K187;
    T11.vector_element_[4] = &KJformat_arguments_;
    T11.vector_element_[5] = T10;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:477
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6_0 = CONGRUENT_CALL2(&KLsealed_generic_function_errorGVKe, &T11);
    T8_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:477
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:474
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kdomain_conflictQVKiMM1I (D g_, D frob_, D lib_, D incrementalQ_, D opstring_) {
  D T6_0;
  D T7_0;
  D T8_0;
  D dF9;
  D dF10;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T21;
  _KLsimple_object_vectorGVKd_6 T22 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T23;
  D T24;
  D Utmp_;
  D T26;
  D T27;
  D d2F28;
  D d2F29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D dF38T, dF38;
  D dt_;
  _KLsimple_object_vectorGVKd_6 T40 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T41;
  _KLsimple_object_vectorGVKd_8 T42 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T43_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:484
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:487
  T14 = SLOT_VALUE_INITD(g_, 9);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:487
  T15 = primitive_cast_integer_as_raw(T14);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:487
  T16 = primitive_machine_word_logbitQ(2,T15);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:487
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:489
    T17 = SLOT_VALUE(g_, 6);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:489
    T18 = SLOT_VALUE_INITD(T17, 1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:489
    T19 = primitive_idQ(lib_,T18);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:489
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:489
      T7_0 = &KPfalseVKi;
      T8_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:493
      T20.vector_element_[0] = opstring_;
      T20.vector_element_[1] = frob_;
      T20.vector_element_[2] = lib_;
      T20.vector_element_[3] = g_;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:493
      T21 = primitive_copy_vector(&T20);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:490
      T22.vector_element_[0] = &KJgeneric_function_;
      T22.vector_element_[1] = g_;
      T22.vector_element_[2] = &KJformat_string_;
      T22.vector_element_[3] = &K182;
      T22.vector_element_[4] = &KJformat_arguments_;
      T22.vector_element_[5] = T21;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:490
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T6_0 = CONGRUENT_CALL2(&KLsealed_generic_function_errorGVKe, &T22);
      T8_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:489
    T13_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:497
    T23 = SLOT_VALUE_INITD(g_, 7);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:497
    dF9 = T23;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:498
    if (dF9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:499
      dF10 = dF9;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:511
      dF38T = dF10;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:511
        dF38 = dF38T;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:501
        T34 = SLOT_VALUE(dF38, 0);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
        if (incrementalQ_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
          T24 = Klibrary_visible_fromQVKiI(lib_, T34);
          Utmp_ = T24;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
          T35 = primitive_idQ(lib_,T34);
          Utmp_ = T35;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
        if (Utmp_ != &KPfalseVKi) {
          T27 = Utmp_;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:507
          T26 = CALL4(&Kdomain_disjointQVKe, dF38, frob_, Dempty_subjunctive_class_universeVKe, &KPfalseVKi);
          T27 = T26;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:508
          T36 = SLOT_VALUE_INITD(dF38, 1);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:508
          d2F28 = T36;
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:509
          if (d2F28 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:510
            d2F29 = d2F28;
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:511
            dF38T = d2F29;
            goto L0;
            T31 = T37;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/domain.dylan:509
            T30 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T31 = T30;
          }
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:509
          T33 = T31;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:514
          dt_ = Kdomain_typesVKeMM0I(dF38);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:520
          T40.vector_element_[0] = opstring_;
          T40.vector_element_[1] = frob_;
          T40.vector_element_[2] = lib_;
          T40.vector_element_[3] = g_;
          T40.vector_element_[4] = dt_;
          T40.vector_element_[5] = T34;
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:520
          T41 = primitive_copy_vector(&T40);
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:515
          T42.vector_element_[0] = &KJgeneric_function_;
          T42.vector_element_[1] = g_;
          T42.vector_element_[2] = IKJdomain_;
          T42.vector_element_[3] = dt_;
          T42.vector_element_[4] = &KJformat_string_;
          T42.vector_element_[5] = &K184;
          T42.vector_element_[6] = &KJformat_arguments_;
          T42.vector_element_[7] = T41;
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:515
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T32 = CONGRUENT_CALL2(&KLdomain_sealed_generic_function_errorGVKe, &T42);
          T33 = T32;
        }
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:506
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:511
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:523
      T43_0 = T33;
      T12_0 = T43_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:498
      T11_0 = &KPfalseVKi;
      T12_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:498
    T13_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:487
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:484
  MV_SET_COUNT(1);
  return(T13_0);
}

static D Klookup_domain_1F193I (D in_lib_, D m_, D gf_, D link_, D predecessor_) {
  D linkF5;
  D predecessorF6;
  D linkF7;
  D T8;
  D T9;
  D T10;
  D predecessorF11;
  D T12_0;
  D T12_1;
  D T13_0;
  D T13_1;
  D T14_0;
  D T14_1;
  D T15_0;
  D T15_1;
  D T16_0;
  D T16_1;
  D T17_0;
  D T17_1;
  D T18_0;
  D T18_1;
  D T19_0;
  D T19_1;
  D T20_0;
  D T20_1;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:369
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:369
  linkF5 = link_;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:369
  predecessorF6 = predecessor_;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:372
  if (linkF5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:373
    linkF7 = linkF5;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    T21 = SLOT_VALUE(linkF7, 0);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    T22 = primitive_idQ(in_lib_,T21);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:375
      T23 = primitive_instanceQ(linkF7,&KLmethod_domainGVKe);
      T8 = T23;
    } else {
      T8 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:376
      T9 = CALL1(&Kdomain_methodVKi, linkF7);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:376
      T24 = primitive_idQ(T9,m_);
      T10 = T24;
    } else {
      T10 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:377
      T25 = SLOT_VALUE_INITD(linkF7, 1);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:378
      if (predecessorF6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:379
        predecessorF11 = predecessorF6;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:380
        SLOT_VALUE_SETTER(T25, predecessorF11, 1);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:380
        T12_0 = T25;
        T12_1 = &KPfalseVKi;
        T14_0 = T12_0;
        T14_1 = T12_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:382
        SLOT_VALUE_SETTER(T25, gf_, 7);
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:382
        T13_0 = T25;
        T13_1 = &KPfalseVKi;
        T14_0 = T13_0;
        T14_1 = T13_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:378
      T16_0 = T14_0;
      T16_1 = T14_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:385
      T26 = SLOT_VALUE_INITD(linkF7, 1);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:385
      T15_0 = Klookup_domain_1F193I(in_lib_, m_, gf_, T26, linkF7);
      T15_1 = MV_GET_ELT(1);
      T16_0 = T15_0;
      T16_1 = T15_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:374
    T18_0 = T16_0;
    T18_1 = T16_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:372
    T17_0 = &KPfalseVKi;
    T17_1 = &KPfalseVKi;
    T18_0 = T17_0;
    T18_1 = T17_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:372
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:369
  T19_0 = T18_0;
  T19_1 = T18_1;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:369
  T20_0 = T19_0;
  T20_1 = T19_1;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:369
  MV_SET_ELT(1, T20_1);
  MV_SET_COUNT(2);
  return(T20_0);
}

D Kdomain_number_requiredVKeMM1I (D d_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:45
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:46
  T3 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:46
  T2_0 = KPmethod_number_requiredVKgI(T3);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:45
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdomain_number_requiredVKeMM2I (D d_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:55
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2_0 = CONGRUENT_CALL1(d_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:54
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:54
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kdomain_number_requiredVKeMM3I (D d_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:64
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:65
  T2_0 = KPmethod_number_requiredVKgI(d_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:64
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdomain_typeVKeMM1I (D d_, D i_) {
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:40
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:41
  T4 = SLOT_VALUE_INITD(d_, 2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:41
  T3_0 = KPmethod_specializerVKgI(T4, i_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:40
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kdomain_typeVKeMM2I (D d_, D i_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:50
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:51
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T3_0 = CONGRUENT_CALL3(d_, i_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:50
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:50
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kdomain_typeVKeMM3I (D d_, D i_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:60
  T3_0 = KPmethod_specializerVKgI(d_, i_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:59
  MV_SET_COUNT(1);
  return(T3_0);
}

D KPadd_nonsiblinged_domainVKnI (D gf_, D d_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:314
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  T5 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  SLOT_VALUE_SETTER(gf_, T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  SLOT_VALUE_SETTER(&KPfalseVKi, T5, 1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  T6 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  SLOT_VALUE_SETTER(T5, T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  SLOT_VALUE_SETTER(&KPempty_listVKi, T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  ENTER_UNWIND_FRAME(T3);
  if (!nlx_setjmp(FRAME_DEST(T3))) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T6, T6);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:316
    T7 = SLOT_VALUE_INITD(gf_, 7);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:316
    SLOT_VALUE_SETTER(T7, d_, 1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:317
    SLOT_VALUE_SETTER(d_, gf_, 7);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:317
    T4 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
    FALL_THROUGH_UNWIND(T4);
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T6, T6);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:315
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:314
  MV_SET_COUNT(0);
  return(T4);
}

D Kdomain_typesVKeMM1I (D d_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:127
  CONGRUENT_CALL_PROLOG(&Kfunction_specializersVKd, 1);
  T2_0 = CONGRUENT_CALL1(d_);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:126
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:126
  MV_SET_COUNT(1);
  return(T3_0);
}

D KPremove_domainVKnMM0I (D gf_, D domain_spec_, D library_) {
  D T4;
  D T5_0;
  D T5_1;
  D old_d_;
  D predecessor_;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:339
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  T13 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  SLOT_VALUE_SETTER(gf_, T13, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  SLOT_VALUE_SETTER(&KPfalseVKi, T13, 1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  SLOT_VALUE_SETTER(T13, T14, 0);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  SLOT_VALUE_SETTER(&KPempty_listVKi, T14, 1);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T14, T14);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:345
    T5_0 = Klookup_domainVKiI(domain_spec_, gf_);
    T5_1 = MV_GET_ELT(1);
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:344
    old_d_ = T5_0;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:344
    predecessor_ = T5_1;
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:346
    if (old_d_ != &KPfalseVKi) {
      T11 = old_d_;
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:348
      T15 = SLOT_VALUE_INITD(T11, 1);
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:349
      if (predecessor_ != &KPfalseVKi) {
        T12 = predecessor_;
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:351
        SLOT_VALUE_SETTER(T15, T12, 1);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:353
        SLOT_VALUE_SETTER(T15, gf_, 7);
      }
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:349
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:355
      T8_0 = &KPtrueVKi;
      T10_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:357
      T9_0 = &KPfalseVKi;
      T10_0 = T9_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:346
    // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
    FALL_THROUGH_UNWIND(T10_0);
  }
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T14, T14);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:342
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:339
  MV_SET_COUNT(1);
  return(T10_0);
}

D KPadd_domainsVKnMM1I (D gf_, D domains_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:304
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:304
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:304
  MV_SET_COUNT(0);
  return(T3);
}

D KPadd_domainVKnMM0I (D gf_, D domain_) {
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:309
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:310
  T3.vector_element_[0] = domain_;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:310
  T4 = primitive_copy_vector(&T3);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:310
  T5 = KPadd_domainsVKnMM0I(gf_, T4);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:309
  return(T5);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_domain_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJhome_);
    if (T0 != &KJhome_) {
      IKJhome_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdomain_);
    if (T0 != &KJdomain_) {
      IKJdomain_ = T0;
      primitive_repeated_slot_value_setter(T0, &K59, 1, 5);
      primitive_repeated_slot_value_setter(T0, &K58, 1, 10);
      primitive_slot_value_setter(T0, &Ksealed_generic_function_error_domainVKeHLdomain_sealed_generic_function_errorG, 3);
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

    T0 = KPresolve_symbolVKiI(&KJmethod_);
    if (T0 != &KJmethod_) {
      IKJmethod_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_domain_for_user () {
{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_2 T2 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:187
  T2.vector_element_[0] = &KJname_;
  T2.vector_element_[1] = &K1;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:187
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLlibraryGVKe, &T2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:186
  Druntime_libraryVKe = T0;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:186
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_4 T2 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:190
  T2.vector_element_[0] = &KJname_;
  T2.vector_element_[1] = &K3;
  T2.vector_element_[2] = IKJhome_;
  T2.vector_element_[3] = Druntime_libraryVKe;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:190
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLmoduleGVKe, &T2);
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:189
  Druntime_moduleVKe = T0;
  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:189
  T1 = &KPfalseVKi;
  goto I2;
}
I2:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/domain.dylan:192
  T0 = Kkludge_up_init_valueVKiI(&KLclassGVKd, &Kclass_moduleVKe, Druntime_moduleVKe);
  goto I5;
}
I5:

  return;
}


/* eof */
