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

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(128);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(65);
define__KLbyte_stringGVKd(84);
define__KLbyte_stringGVKd(56);
define__KLbyte_stringGVKd(63);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(59);
define__KLbyte_stringGVKd(61);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(39);
define__KLbyte_stringGVKd(46);
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
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLgeneric_functionGVKd;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

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
  D incremental_gf_module_;
  D incremental_gf_domain_info_;
  D incremental_gf_method_libraries_;
  D incremental_gf_properties_;
} _KLincremental_generic_functionGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_errorGVKi;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLmethodGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
} _KLcollectionGVKd;

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
  D gf_cache_info_users_;
} _KLgf_cache_infoGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLcache_header_engine_nodeGVKg;

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
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D domain_library_;
  D domain_next_;
} _KLdomainGVKe;

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
  D incomplete_object_;
} _KLclass_incomplete_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D sealed_generic_function_error_generic_;
  D sealed_generic_function_error_operation_;
  D sealed_generic_function_error_arguments_;
  D sealed_generic_function_error_domain_;
} _KLdomain_sealed_generic_function_errorGVKe;


/* Typedefs for defined classes */

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
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJarguments_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLsymbolGVKd KJoperation_;
extern _KLsymbolGVKd KJgeneric_function_;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
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
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_rcpl_single_largeVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsealed_generic_functionGVKe Ktype_completeQVKe;
extern _KLsealed_generic_functionGVKe KcongruentQVKi;
D KlistVKdI (D);
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLargument_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLargument_errorGVKiW;
extern _KLsealed_generic_functionGVKe Kfunction_specializersVKd;
D KelementVKdMM25I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
D Kelement_setterVKdMM25I (D, D, D);
D Kelement_range_errorVKeI (D, D);
D Kobject_classVKdI (D);
extern _KLsealed_generic_functionGVKe Kconcatenate_asVKd;
extern _KLsealed_generic_functionGVKe Kincremental_gf_method_libraries_setterVKe;
D Kconcatenate_asVKdMM4I (D, D, D);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D KmakeVKdMM23I (D, D, D, D);
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
D KPmethod_specializerVKgI (D, D);
D Ksame_specializerQVKgI (D, D);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
D Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
D Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
extern _KLincremental_generic_functionGVKe KbletchVKg;
D Kincomplete_classesVKeI (D);
extern _KLsymbolGVKd KJobject_;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsealed_generic_functionGVKe Kdomain_conflictQVKi;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLsimple_methodGVKe KEEVKd;
D KPremove_method_domainVKiI (D gf_, D m_, D in_lib_);
extern _KLsealed_generic_functionGVKe Kgeneric_function_methods_setterVKe;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLclassGVKd KLgf_cache_infoGVKg;
extern _KLmm_wrapperGVKi_0 KLgf_cache_infoGVKgW;
extern _KLclassGVKd KLcache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLcache_header_engine_nodeGVKgW;
extern _KLsymbolGVKd KJrequired_;
extern _KLsymbolGVKd KJkey_;
extern _KLsymbolGVKd KJkey_types_;
extern _KLsymbolGVKd KJrestQ_;
extern _KLsymbolGVKd KJvalues_;
extern _KLsymbolGVKd KJrest_value_;
extern _KLincremental_generic_functionGVKe Kinitialize_packed_slotsVKe;
extern _KLsealed_generic_functionGVKe Kclass_implementation_classVKe;
D Kadd_newXVKdMM3I (D, D, D, D);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsealed_generic_functionGVKe KanyQVKd;
extern _KLincremental_generic_functionGVKe KsizeVKd;
D KEEVKdI (D, D);
D KerrorVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsymbolGVKd KJkeys_;
extern _KLsymbolGVKd KJkeyQ_;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLsymbolGVKd KJsignature_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lgeneric_functionG_typesVKi;
D KPadd_method_domainVKnI (D gf_, D m_, D lib_, D checkedQ_);
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLsimple_restartGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_restartGVKdW;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJinit_arguments_;
D KLhandlerGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
D Kbletch_stackVKgI (D);
extern _KLsealed_generic_functionGVKe Kfunction_signatureVKe;
extern _KLincremental_generic_functionGVKe Kdebug_nameVKe;
D KPredefine_genericVKnI (D gf_, D debug_name_, D module_, D signature_, D sealedQ_);
D Kfunction_return_valuesVKdMM0I (D);
D Kfunction_specializersVKdMM0I (D);
D Kinitialize_signature_completenessVKiI (D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;
D KreverseXVKdMM2I (D);
D KgethashVKiI (D table_, D key_, D default_, D first_attemptQ_);
extern _KLsealed_generic_functionGVKe KfirstVKd;
extern _KLclassGVKd KLdomainGVKe;
extern _KLmm_wrapperGVKi_0 KLdomainGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
D Kreconstruct_args_from_mepargsVKeI (D, D);
extern _KLsymbolGVKd KJsealedQ_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
D Kcompute_sorted_applicable_methodsVKgI (D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
D Kapplicable_method_assuming_number_requiredQVKiI (D function_, D arguments_);
extern _KLsealed_generic_functionGVKe Kdomain_matchQVKe;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLsimple_methodGVKe KignoreVKe;
extern _KLsealed_generic_functionGVKe Ksignature_keysVKi;
D KapplyVKdI (D, D);
extern _KLclassGVKd KLclass_incomplete_errorGVKe;
extern _KLclassGVKd KLdomain_sealed_generic_function_errorGVKe;
extern D Druntime_libraryVKe;
extern D Dabsent_engine_nodeVKg;
extern D Druntime_moduleVKe;
extern D Tcurrent_handlersTVKi;
extern D Tincomplete_generic_function_methodsTVKi;
extern D Tincomplete_generic_function_domainsTVKi;

/* Defined object declarations */

extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM2;
D Kinitialize_packed_slotsVKeMM2I (D, D, D, D, D);
D Kcall_to_type_incomplete_genericVKeI (D, D);
D Kgeneric_function_sealedQVKeI (D);
extern _KLclassGVKd KLobject_incompleteGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_incompleteGVKeW;
extern _KLclassGVKd KLincomplete_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLincomplete_errorGVKiW;
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM6;
D Kmap_congruency_classesVKiMM6I (D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM7;
D Kreduce_incomplete_classesVKiMM7I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM4;
D Ktype_completeQVKeMM4I (D g_);
extern _KLsimple_methodGVKe Krecompute_type_completeXVKiMM3;
D Krecompute_type_completeXVKiMM3I (D);
extern _KLsimple_methodGVKe KcongruentQVKiMM1;
D KcongruentQVKiMM1I (D, D);
extern _KLsimple_methodGVKe Kfunction_specializersVKdMM5;
D Kfunction_specializersVKdMM5I (D);
extern _KLsimple_methodGVKe Kfunction_return_valuesVKdMM2;
D Kfunction_return_valuesVKdMM2I (D);
D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLinstance_slot_descriptorGVKe Kincomplete_objectVKeHLobject_incompleteG;
extern _KLkeyword_methodGVKe KinitializeVKdMM9;
D KinitializeVKdMM9I (D, D, D, D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM10;
D KinitializeVKdMM10I (D, D);
extern _KLsealed_generic_functionGVKe Kincomplete_objectVKe;
extern _KLkeyword_methodGVKe KmakeVKdMM49;
D KmakeVKdMM49I (D, D, D, D, D, D, D, D);
D Kdecache_gfVKeMM0I (D);
D KPremove_methodVKnI (D, D);
D Kadd_method_internalVKiI (D, D, D, D, D);
D Kincremental_gf_method_completeQ_setterVKeMM0I (D, D);
extern _KLclassGVKd KLsealed_generic_function_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_function_errorGVKeW;
extern _KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_genericVKeHLsealed_generic_function_errorG;
extern _KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG;
extern _KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG;
extern _KLsealed_generic_functionGVKe Ksealed_generic_function_error_argumentsVKe;
extern _KLsealed_generic_functionGVKe Ksealed_generic_function_error_arguments_setterVKi;
extern _KLsetter_methodGVKi Ksealed_generic_function_error_arguments_setterVKiMM0;
static _KLpairGVKd K43;
static _KLbyte_stringGVKd_46 K44;
extern _KLgetter_methodGVKi Ksealed_generic_function_error_argumentsVKeMM0;
static _KLpairGVKd K46;
static _KLbyte_stringGVKd_39 K47;
extern _KLsealed_generic_functionGVKe Ksealed_generic_function_error_operationVKe;
extern _KLsealed_generic_functionGVKe Ksealed_generic_function_error_operation_setterVKi;
extern _KLsetter_methodGVKi Ksealed_generic_function_error_operation_setterVKiMM0;
static _KLpairGVKd K51;
static _KLbyte_stringGVKd_46 K52;
extern _KLgetter_methodGVKi Ksealed_generic_function_error_operationVKeMM0;
static _KLpairGVKd K54;
static _KLbyte_stringGVKd_39 K55;
extern _KLsealed_generic_functionGVKe Ksealed_generic_function_error_genericVKe;
extern _KLgetter_methodGVKi Ksealed_generic_function_error_genericVKeMM0;
static _KLpairGVKd K58;
static _KLbyte_stringGVKd_37 K59;
static _KLimplementation_classGVKe K60;
static _KLsimple_object_vectorGVKd_5 K61;
extern _KLkeyword_methodGVKe KLsealed_generic_function_errorGZ32ZconstructorVKiMM0;
D KLsealed_generic_function_errorGZ32ZconstructorVKiMM0I (D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K64;
static _KLsimple_object_vectorGVKd_7 K65;
static _KLsimple_object_vectorGVKd_3 K66;
static _KLbyte_stringGVKd_23 K67;
static _KLkeyword_signatureAvaluesGVKi K68;
static _KLsimple_object_vectorGVKd_10 K69;
static _KLsimple_object_vectorGVKd_5 K70;
static _KLsimple_object_vectorGVKd_1 K71;
static _KLbyte_stringGVKd_31 K72;
D Kmethod_not_frobbableQVKiI (D, D, D, D);
static _KLbyte_stringGVKd_10 K74;
extern _KLsimple_methodGVKe Kadd_methodVKdMM0;
D Kadd_methodVKdMM0I (D, D);
D Kadd_method_internal_internalVKiI (D, D, D);
static _KLbyte_stringGVKd_61 K78;
D Klocate_methodVKiI (D, D);
D Kcopy_over_withoutVKiMM0I (D, D);
D KPadd_method_and_libraryVKiI (D, D, D);
D Kfinalize_generic_functionVKiMM0I (D);
static _KLunionGVKe K83;
static _KLsingletonGVKd K84;
D Kreport_generic_incompleteVKiI (D, D, D);
static _KLsymbolGVKd KJtypes_;
static _KLbyte_stringGVKd_59 K87;
extern _KLclassGVKd KLfunction_type_incomplete_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLfunction_type_incomplete_errorGVKeW;
static _KLimplementation_classGVKe K90;
static _KLsimple_object_vectorGVKd_4 K91;
extern _KLkeyword_methodGVKe KLfunction_type_incomplete_errorGZ32ZconstructorVKiMM0;
D KLfunction_type_incomplete_errorGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K94;
static _KLsimple_object_vectorGVKd_8 K95;
static _KLsimple_object_vectorGVKd_1 K96;
static _KLsimple_object_vectorGVKd_4 K97;
extern _KLinstance_slot_descriptorGVKe Kincomplete_typesVKeHLfunction_type_incomplete_errorG;
extern _KLsealed_generic_functionGVKe Kincomplete_typesVKe;
extern _KLgetter_methodGVKi Kincomplete_typesVKeMM0;
static _KLpairGVKd K101;
static _KLbyte_stringGVKd_16 K102;
static _KLkeyword_signatureAvaluesGVKi K103;
static _KLsimple_object_vectorGVKd_8 K104;
static _KLsimple_object_vectorGVKd_4 K105;
static _KLsimple_object_vectorGVKd_1 K106;
static _KLbyte_stringGVKd_32 K107;
static _KLbyte_stringGVKd_5 K108;
static _KLsignatureGVKe K109;
static _KLsimple_object_vectorGVKd_2 K110;
static _KLbyte_stringGVKd_40 K111;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K112;
D KPremove_method_from_libraryVKnI (D, D, D, D, D);
D Kremove_method_internalVKiI (D, D, D, D, D);
static _KLbyte_stringGVKd_13 K115;
extern _KLsimple_methodGVKe Kremove_methodVKd;
D Kremove_methodVKdI (D, D);
D Kcopy_over_withoutVKiMM1I (D, D);
static _KLunionGVKe K119;
static _KLsignatureAvaluesGVKi K120;
static _KLsymbolGVKd KJmodule_;
static _KLbyte_stringGVKd_6 K122;
static _KLkeyword_signatureAvaluesGVKi K123;
static _KLsimple_object_vectorGVKd_12 K124;
static _KLsimple_object_vectorGVKd_1 K125;
static _KLsimple_object_vectorGVKd_6 K126;
static _KLsimple_object_vectorGVKd_1 K127;
static _KLsingletonGVKd K128;
extern _KLgetter_methodGVKi Kincomplete_objectVKeMM0;
static _KLpairGVKd K130;
static _KLbyte_stringGVKd_17 K131;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF135;
static D Kanonymous_of_initializeF135I (D);
static _KLbyte_stringGVKd_15 K134;
static _KLkeyword_signatureGVKe K136;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF147;
static D Kanonymous_of_initializeF147I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF146;
static D Kanonymous_of_initializeF146I (D);
static _KLbyte_stringGVKd_63 K141;
static _KLbyte_stringGVKd_56 K142;
static _KLbyte_stringGVKd_59 K143;
static _KLbyte_stringGVKd_84 K144;
static _KLbyte_stringGVKd_65 K145;
static _KLkeyword_signatureGVKe K148;
static _KLsimple_object_vectorGVKd_14 K149;
static _KLsimple_object_vectorGVKd_7 K150;
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF154;
static D KUhandler_functionUF154I (D, D);
static _KLbyte_stringGVKd_46 K153;
D KPredefine_generic_using_methodVKiI (D, D, D, D);
D Kimplicit_generic_signatureVKiI (D);
static _KLsignatureGVKe K157;
static _KLsimple_object_vectorGVKd_2 K158;
static _KLbyte_stringGVKd_22 K159;
static _KLsignatureAvaluesGVKi K160;
static _KLsimple_object_vectorGVKd_2 K161;
static _KLunionGVKe K162;
static _KLbyte_stringGVKd_21 K163;
static _KLsignatureGVKe K164;
static _KLsignatureAvaluesGVKi K165;
static _KLsimple_object_vectorGVKd_2 K166;
static _KLsignatureAvaluesGVKi K167;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K168;
static _KLsignatureGVKe K169;
static _KLsimple_object_vectorGVKd_3 K170;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K171;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K172;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K173;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K174;
static D KloopF176I (D, D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K177;
static _KLsignatureGVKe K178;
static _KLsimple_object_vectorGVKd_2 K179;
static _KLimplementation_classGVKe K180;
static _KLsimple_object_vectorGVKd_1 K181;
static _KLsimple_object_vectorGVKd_2 K182;
static _KLsimple_object_vectorGVKd_6 K183;
static _KLbyte_stringGVKd_18 K184;
static _KLimplementation_classGVKe K185;
static _KLsimple_object_vectorGVKd_1 K186;
static _KLsimple_object_vectorGVKd_6 K187;
static _KLsimple_object_vectorGVKd_1 K188;
static _KLsimple_object_vectorGVKd_2 K189;
static _KLbyte_stringGVKd_19 K190;
static _KLbyte_stringGVKd_128 K191;
D Kincremental_gf_sealedQ_setterVKeMM0I (D, D);
D Kincremental_gf_signaturedQ_setterVKeMM0I (D, D);
static _KLkeyword_signatureGVKe K194;
static _KLsimple_object_vectorGVKd_6 K195;
static _KLsymbolGVKd KJincremental_gf_method_completeQ_;
static _KLsymbolGVKd KJincremental_gf_signaturedQ_;
static _KLbyte_stringGVKd_26 K198;
static _KLbyte_stringGVKd_31 K199;
static _KLsimple_object_vectorGVKd_3 K200;
extern _KLsealed_generic_functionGVKe Ksorted_applicable_methodsVKd;
extern _KLsimple_methodGVKe Ksorted_applicable_methodsVKdMM0;
D Ksorted_applicable_methodsVKdMM0I (D, D);
static _KLpairGVKd K204;
static _KLsignatureAvaluesGVKi K205;
static _KLbyte_stringGVKd_25 K206;
static _KLsignatureAvaluesGVKi K207;
extern _KLsealed_generic_functionGVKe Kapplicable_methodQVKd;
extern _KLsimple_methodGVKe Kapplicable_methodQVKdMM0;
D Kapplicable_methodQVKdMM0I (D, D);
extern _KLsimple_methodGVKe Kapplicable_methodQVKdMM1;
D Kapplicable_methodQVKdMM1I (D, D);
static _KLpairGVKd K213;
static _KLpairGVKd K214;
static _KLsignatureGVKe K215;
static _KLbyte_stringGVKd_18 K216;
static _KLsignatureAvaluesGVKi K217;
static _KLsignatureAvaluesGVKi K218;
extern _KLsimple_methodGVKe KPremove_method_from_libraryVKn;
static _KLsignatureAvaluesGVKi K220;
static _KLsimple_object_vectorGVKd_5 K221;
static _KLsimple_object_vectorGVKd_1 K222;
extern _KLsimple_methodGVKe KPremove_methodVKn;
static _KLsignatureAvaluesGVKi K224;
extern _KLsimple_methodGVKe Kremove_method_via_specializersVKn;
D Kremove_method_via_specializersVKnI (D, D, D);
static _KLsignatureAvaluesGVKi K227;
static _KLsimple_object_vectorGVKd_3 K228;
extern _KLsimple_methodGVKe KPadd_nonsiblinged_methodVKn;
D KPadd_nonsiblinged_methodVKnI (D, D, D);
static _KLsignatureGVKe K231;
static _KLsimple_object_vectorGVKd_3 K232;
extern _KLsimple_methodGVKe KPadd_methodVKn;
D KPadd_methodVKnI (D, D, D);
extern _KLsimple_methodGVKe KPadd_dynamic_methodVKn;
D KPadd_dynamic_methodVKnI (D, D);
static _KLsignatureGVKe K237;
static _KLsimple_object_vectorGVKd_2 K238;
extern _KLsimple_methodGVKe KPadd_a_methodVKn;
static _KLsignatureGVKe K240;
static _KLsimple_object_vectorGVKd_6 K241;
extern _KLsimple_methodGVKe Kcall_to_type_incomplete_genericVKe;
static _KLsignatureGVKe K243;
static _KLsimple_object_vectorGVKd_2 K244;
extern _KLsimple_methodGVKe Kgeneric_function_sealedQVKe;
static _KLsignatureGVKe K246;
extern _KLsimple_methodGVKe Kincremental_gf_sealedQVKeMM0;
D Kincremental_gf_sealedQVKeMM0I (D x_);
static _KLsignatureAvaluesGVKi K249;
extern _KLsimple_methodGVKe Kincremental_gf_sealedQ_setterVKeMM0;
static _KLsignatureAvaluesGVKi K251;
static _KLsimple_object_vectorGVKd_2 K252;
extern _KLsimple_methodGVKe Kincremental_gf_method_completeQVKeMM0;
D Kincremental_gf_method_completeQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Kincremental_gf_method_completeQ_setterVKeMM0;
extern _KLsimple_methodGVKe Kincremental_gf_signaturedQVKeMM0;
D Kincremental_gf_signaturedQVKeMM0I (D x_);
extern _KLsimple_methodGVKe Kincremental_gf_signaturedQ_setterVKeMM0;
extern _KLsimple_methodGVKe Kgeneric_function_mandatory_keywordsVKdMM0;
D Kgeneric_function_mandatory_keywordsVKdMM0I (D);
static _KLunionGVKe K261;
static _KLsignatureAvaluesGVKi K262;
static _KLsimple_object_vectorGVKd_1 K263;
extern _KLsimple_methodGVKe Kdecache_gfVKeMM0;
static _KLsignatureGVKe K265;
extern _KLsimple_methodGVKe Kfind_methodVKdMM0;
D Kfind_methodVKdMM0I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_find_methodF271;
static D Kanonymous_of_find_methodF271I (D);
static _KLbyte_stringGVKd_11 K270;
static _KLsignatureGVKe K272;
static _KLsignatureAvaluesGVKi K273;
static _KLsimple_object_vectorGVKd_2 K274;
static _KLpairGVKd K275;
static _KLpairGVKd K276;
static _KLpairGVKd K277;
static _KLpairGVKd K278;

/* Indirection variables */

static D IKJtypes_ = &KJtypes_;
static D IKJmodule_ = &KJmodule_;
static D IKJincremental_gf_method_completeQ_ = &KJincremental_gf_method_completeQ_;
static D IKJincremental_gf_signaturedQ_ = &KJincremental_gf_signaturedQ_;

/* Variables */

D add_methodVKd = &Kadd_methodVKdMM0;
D sealed_generic_function_error_genericVKe = &Ksealed_generic_function_error_genericVKe;
D sealed_generic_function_error_operationVKe = &Ksealed_generic_function_error_operationVKe;
D sealed_generic_function_error_argumentsVKe = &Ksealed_generic_function_error_argumentsVKe;
D find_methodVKd = &Kfind_methodVKdMM0;
D incomplete_typesVKe = &Kincomplete_typesVKe;
D incomplete_objectVKe = &Kincomplete_objectVKe;
D decache_gfVKe = &Kdecache_gfVKeMM0;
D generic_function_mandatory_keywordsVKd = &Kgeneric_function_mandatory_keywordsVKdMM0;
D incremental_gf_signaturedQ_setterVKe = &Kincremental_gf_signaturedQ_setterVKeMM0;
D incremental_gf_signaturedQVKe = &Kincremental_gf_signaturedQVKeMM0;
D incremental_gf_method_completeQ_setterVKe = &Kincremental_gf_method_completeQ_setterVKeMM0;
D incremental_gf_method_completeQVKe = &Kincremental_gf_method_completeQVKeMM0;
D incremental_gf_sealedQ_setterVKe = &Kincremental_gf_sealedQ_setterVKeMM0;
D incremental_gf_sealedQVKe = &Kincremental_gf_sealedQVKeMM0;
D generic_function_sealedQVKe = &Kgeneric_function_sealedQVKe;
D Lobject_incompleteGVKe = &KLobject_incompleteGVKe;
D Lincomplete_errorGVKi = &KLincomplete_errorGVKi;
D Lfunction_type_incomplete_errorGVKe = &KLfunction_type_incomplete_errorGVKe;
D call_to_type_incomplete_genericVKe = &Kcall_to_type_incomplete_genericVKe;
D note_generic_function_incomplete_methodVKi = &KignoreVKe;
D note_generic_function_incomplete_domainVKi = &KignoreVKe;
D remove_generic_function_incomplete_methodVKi = &KignoreVKe;
D remove_generic_function_incomplete_domainVKi = &KignoreVKe;
D Lsealed_generic_function_errorGVKe = &KLsealed_generic_function_errorGVKe;
D Padd_a_methodVKn = &KPadd_a_methodVKn;
D Padd_dynamic_methodVKn = &KPadd_dynamic_methodVKn;
D Padd_methodVKn = &KPadd_methodVKn;
D Padd_nonsiblinged_methodVKn = &KPadd_nonsiblinged_methodVKn;
D remove_methodVKd = &Kremove_methodVKd;
D remove_method_via_specializersVKn = &Kremove_method_via_specializersVKn;
D Premove_methodVKn = &KPremove_methodVKn;
D Premove_method_from_libraryVKn = &KPremove_method_from_libraryVKn;
D applicable_methodQVKd = &Kapplicable_methodQVKd;
D sorted_applicable_methodsVKd = &Ksorted_applicable_methodsVKd;

/* Objects */

_KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K194,
  &key_mep_5,
  &Kinitialize_packed_slotsVKeMM2I,
  &K195
};

_KLclassGVKd KLobject_incompleteGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K190,
  &K185,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLobject_incompleteGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K185,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLincomplete_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K184,
  &K180,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLincomplete_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K180,
  (D) 2049,
  5,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K178,
  &Kmap_congruency_classesVKiMM6I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K169,
  &Kreduce_incomplete_classesVKiMM7I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K167,
  &Ktype_completeQVKeMM4I
};

_KLsimple_methodGVKe Krecompute_type_completeXVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K167,
  &Krecompute_type_completeXVKiMM3I
};

_KLsimple_methodGVKe KcongruentQVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K165,
  &KcongruentQVKiMM1I
};

_KLsimple_methodGVKe Kfunction_specializersVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K164,
  &Kfunction_specializersVKdMM5I
};

_KLsimple_methodGVKe Kfunction_return_valuesVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K160,
  &Kfunction_return_valuesVKdMM2I
};

_KLinstance_slot_descriptorGVKe Kincomplete_objectVKeHLobject_incompleteG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLobject_incompleteGVKe,
  &KJobject_,
  &Kincomplete_objectVKe,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLkeyword_methodGVKe KinitializeVKdMM9 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_9,
  &K148,
  &key_mep_9,
  &KinitializeVKdMM9I,
  &K149
};

_KLkeyword_methodGVKe KinitializeVKdMM10 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K136,
  &key_mep_2,
  &KinitializeVKdMM10I,
  &KPempty_vectorVKi
};

_KLsealed_generic_functionGVKe Kincomplete_objectVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K131,
  &K130,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KmakeVKdMM49 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K123,
  &key_mep_8,
  &KmakeVKdMM49I,
  &K124
};

_KLclassGVKd KLsealed_generic_function_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K72,
  &K60,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsealed_generic_function_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K60,
  (D) 2049,
  21,
  33554439,
  (D) 1
};

_KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_genericVKeHLsealed_generic_function_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLsealed_generic_function_errorGVKe,
  &KJgeneric_function_,
  &Ksealed_generic_function_error_genericVKe,
  &KPfalseVKi,
  &KLgeneric_functionGVKd
};

_KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLsealed_generic_function_errorGVKe,
  &KJoperation_,
  &Ksealed_generic_function_error_operationVKe,
  &Ksealed_generic_function_error_operation_setterVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLsealed_generic_function_errorGVKe,
  &KJarguments_,
  &Ksealed_generic_function_error_argumentsVKe,
  &Ksealed_generic_function_error_arguments_setterVKi,
  &KLsequenceGVKd
};

_KLsealed_generic_functionGVKe Ksealed_generic_function_error_argumentsVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K47,
  &K46,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksealed_generic_function_error_arguments_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K44,
  &K43,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Ksealed_generic_function_error_arguments_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &Ksealed_generic_function_error_arguments_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_46 K44 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "sealed-generic-function-error-arguments-setter"
};

_KLgetter_methodGVKi Ksealed_generic_function_error_argumentsVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Ksealed_generic_function_error_argumentsVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_39 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "sealed-generic-function-error-arguments"
};

_KLsealed_generic_functionGVKe Ksealed_generic_function_error_operationVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K55,
  &K54,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksealed_generic_function_error_operation_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K52,
  &K51,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Ksealed_generic_function_error_operation_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &Ksealed_generic_function_error_operation_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_46 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "sealed-generic-function-error-operation-setter"
};

_KLgetter_methodGVKi Ksealed_generic_function_error_operationVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &Ksealed_generic_function_error_operationVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_39 K55 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "sealed-generic-function-error-operation"
};

_KLsealed_generic_functionGVKe Ksealed_generic_function_error_genericVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K59,
  &K58,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Ksealed_generic_function_error_genericVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Ksealed_generic_function_error_genericVKeHLsealed_generic_function_errorG
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Ksealed_generic_function_error_genericVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_37 K59 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "sealed-generic-function-error-generic"
};

static _KLimplementation_classGVKe K60 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433749,
  &KLsealed_generic_function_errorGVKe,
  &KLsealed_generic_function_errorGVKeW,
  &KPfalseVKi,
  &K61,
  (D) 6969,
  &KLsealed_generic_function_errorGZ32ZconstructorVKiMM0,
  &K64,
  &K65,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K278,
  &KPempty_vectorVKi,
  &K66,
  &K61,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K61 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Ksealed_generic_function_error_genericVKeHLsealed_generic_function_errorG,
  &Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG,
  &Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG
};

_KLkeyword_methodGVKe KLsealed_generic_function_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K68,
  &key_mep_2,
  &KLsealed_generic_function_errorGZ32ZconstructorVKiMM0I,
  &K69
};

static _KLsimple_object_vectorGVKd_2 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsealed_object_errorGVKd,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_7 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsealed_object_errorGVKd,
  &KLsealed_generic_function_errorGVKe
};

static _KLsimple_object_vectorGVKd_3 K66 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Ksealed_generic_function_error_genericVKeHLsealed_generic_function_errorG,
  &Ksealed_generic_function_error_operationVKeHLsealed_generic_function_errorG,
  &Ksealed_generic_function_error_argumentsVKeHLsealed_generic_function_errorG
};

static _KLbyte_stringGVKd_23 K67 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K68 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K70,
  &KDsignature_LobjectG_typesVKi,
  &K71
};

static _KLsimple_object_vectorGVKd_10 K69 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJgeneric_function_,
  &KPunboundVKi,
  &KJoperation_,
  &KPunboundVKi,
  &KJarguments_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_5 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJgeneric_function_,
  &KJoperation_,
  &KJarguments_
};

static _KLsimple_object_vectorGVKd_1 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsealed_generic_function_errorGVKe
};

static _KLbyte_stringGVKd_31 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "<sealed-generic-function-error>"
};

static _KLbyte_stringGVKd_10 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "add-method"
};

_KLsimple_methodGVKe Kadd_methodVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K109,
  &Kadd_methodVKdMM0I
};

static _KLbyte_stringGVKd_61 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 245,
  "the method %= is not congruent with generic function %= - %s."
};

static _KLunionGVKe K83 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K84,
  &KLmethodGVKd
};

static _KLsingletonGVKd K84 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsymbolGVKd KJtypes_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K108
};

static _KLbyte_stringGVKd_59 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 237,
  "attempt to %s on type-incomplete generic: %=\n  (method: %=)"
};

_KLclassGVKd KLfunction_type_incomplete_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K107,
  &K90,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLfunction_type_incomplete_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K90,
  (D) 2049,
  17,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K90 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102097,
  &KLfunction_type_incomplete_errorGVKe,
  &KLfunction_type_incomplete_errorGVKeW,
  &KPfalseVKi,
  &K91,
  (D) 6961,
  &KLfunction_type_incomplete_errorGZ32ZconstructorVKiMM0,
  &K94,
  &K95,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K96,
  &K97,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kincomplete_objectVKeHLobject_incompleteG,
  &Kincomplete_typesVKeHLfunction_type_incomplete_errorG
};

_KLkeyword_methodGVKe KLfunction_type_incomplete_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K103,
  &key_mep_2,
  &KLfunction_type_incomplete_errorGZ32ZconstructorVKiMM0I,
  &K104
};

static _KLsimple_object_vectorGVKd_2 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_conditionGVKe,
  &KLincomplete_errorGVKi
};

static _KLsimple_object_vectorGVKd_8 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLobject_incompleteGVKe,
  &KLincomplete_errorGVKi,
  &KLsimple_conditionGVKe,
  &KLfunction_type_incomplete_errorGVKe
};

static _KLsimple_object_vectorGVKd_1 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kincomplete_typesVKeHLfunction_type_incomplete_errorG
};

static _KLsimple_object_vectorGVKd_4 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kincomplete_objectVKeHLobject_incompleteG,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kincomplete_typesVKeHLfunction_type_incomplete_errorG
};

_KLinstance_slot_descriptorGVKe Kincomplete_typesVKeHLfunction_type_incomplete_errorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLfunction_type_incomplete_errorGVKe,
  &KJtypes_,
  &Kincomplete_typesVKe,
  &KPfalseVKi,
  &KLcollectionGVKd
};

_KLsealed_generic_functionGVKe Kincomplete_typesVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K102,
  &K101,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kincomplete_typesVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kincomplete_typesVKeHLfunction_type_incomplete_errorG
};

static _KLpairGVKd K101 = {
  &KLpairGVKdW /* wrapper */,
  &Kincomplete_typesVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K102 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "incomplete-types"
};

static _KLkeyword_signatureAvaluesGVKi K103 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K105,
  &KDsignature_LobjectG_typesVKi,
  &K106
};

static _KLsimple_object_vectorGVKd_8 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJobject_,
  &KPunboundVKi,
  &KJtypes_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_4 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJobject_,
  &KJtypes_
};

static _KLsimple_object_vectorGVKd_1 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLfunction_type_incomplete_errorGVKe
};

static _KLbyte_stringGVKd_32 K107 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "<function-type-incomplete-error>"
};

static _KLbyte_stringGVKd_5 K108 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "types"
};

static _KLsignatureGVKe K109 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K110
};

static _KLsimple_object_vectorGVKd_2 K110 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLmethodGVKd
};

static _KLbyte_stringGVKd_40 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "Cannot %s %= in %= to sealed generic %=."
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K112 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 524345,
  &KPfalseVKi,
  &cache_header_engine_5,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdomain_conflictQVKi
};

static _KLbyte_stringGVKd_13 K115 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "remove-method"
};

_KLsimple_methodGVKe Kremove_methodVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K120,
  &Kremove_methodVKdI
};

static _KLunionGVKe K119 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K84,
  &KLconditionGVKd
};

static _KLsignatureAvaluesGVKi K120 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K110,
  &KDsignature_LmethodG_typesVKi
};

static _KLsymbolGVKd KJmodule_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K122
};

static _KLbyte_stringGVKd_6 K122 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "module"
};

static _KLkeyword_signatureAvaluesGVKi K123 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &K125,
  &K126,
  &KDsignature_LobjectG_typesVKi,
  &K127
};

static _KLsimple_object_vectorGVKd_12 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJrequired_,
  &KPfalseVKi,
  &KJkey_,
  &KPfalseVKi,
  &KJkey_types_,
  &KPfalseVKi,
  &KJrestQ_,
  &KPfalseVKi,
  &KJvalues_,
  &KPfalseVKi,
  &KJrest_value_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K128
};

static _KLsimple_object_vectorGVKd_6 K126 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJrequired_,
  &KJkey_,
  &KJkey_types_,
  &KJrestQ_,
  &KJvalues_,
  &KJrest_value_
};

static _KLsimple_object_vectorGVKd_1 K127 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLincremental_generic_functionGVKe
};

static _KLsingletonGVKd K128 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLgeneric_functionGVKd
};

_KLgetter_methodGVKi Kincomplete_objectVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kincomplete_objectVKeHLobject_incompleteG
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &Kincomplete_objectVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K131 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "incomplete-object"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF135 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_initializeF135I,
  (D) 1
};

static _KLbyte_stringGVKd_15 K134 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K136 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &K127,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF147 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_initializeF147I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initializeF146 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_initializeF146I,
  (D) 1
};

static _KLbyte_stringGVKd_63 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 253,
  "generic function key-types: and key: must be the same size: %=."
};

static _KLbyte_stringGVKd_56 K142 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 225,
  "generic function key: must be a sequence of symbols: %=."
};

static _KLbyte_stringGVKd_59 K143 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 237,
  "generic function key-types must be a sequence of types: %=."
};

static _KLbyte_stringGVKd_84 K144 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 337,
  "attempt to create a generic function with both optionals and keyword parameters: %=."
};

static _KLbyte_stringGVKd_65 K145 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 261,
  "attempt to create an unkeyed generic function with key-types: %=."
};

static _KLkeyword_signatureGVKe K148 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 47448069,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &K150,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_14 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KJsignature_,
  &KPfalseVKi,
  &KJrequired_,
  &KPfalseVKi,
  &KJkey_,
  &KPfalseVKi,
  &KJkey_types_,
  &KPfalseVKi,
  &KJrestQ_,
  &KPfalseVKi,
  &KJvalues_,
  &KPempty_vectorVKi,
  &KJrest_value_,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_7 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KJsignature_,
  &KJrequired_,
  &KJkey_,
  &KJkey_types_,
  &KJrestQ_,
  &KJvalues_,
  &KJrest_value_
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF154 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K157,
  &KUhandler_functionUF154I,
  (D) 1
};

static _KLbyte_stringGVKd_46 K153 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "Redefine %=, discarding non-congruent methods."
};

static _KLsignatureGVKe K157 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K158
};

static _KLsimple_object_vectorGVKd_2 K158 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_restartGVKd,
  &KLobjectGVKd
};

static _KLbyte_stringGVKd_22 K159 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "function-return-values"
};

static _KLsignatureAvaluesGVKi K160 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 37750789,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &K161
};

static _KLsimple_object_vectorGVKd_2 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &K162
};

static _KLunionGVKe K162 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K84,
  &KLtypeGVKd
};

static _KLbyte_stringGVKd_21 K163 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "function-specializers"
};

static _KLsignatureGVKe K164 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 48234501,
  &KDsignature_Lgeneric_functionG_typesVKi
};

static _KLsignatureAvaluesGVKi K165 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K110,
  &K166
};

static _KLsimple_object_vectorGVKd_2 K166 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K167 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K168 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsignatureGVKe K169 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K170
};

static _KLsimple_object_vectorGVKd_3 K170 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLgeneric_functionGVKd,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K171 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K172 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K173 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K174 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K177 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K178 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K179
};

static _KLsimple_object_vectorGVKd_2 K179 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLincremental_generic_functionGVKe
};

static _KLimplementation_classGVKe K180 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255365,
  &KLincomplete_errorGVKi,
  &KLincomplete_errorGVKiW,
  &KPfalseVKi,
  &K181,
  (D) 6953,
  &Kdefault_class_constructorVKi,
  &K182,
  &K183,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K276,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K181,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K181 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kincomplete_objectVKeHLobject_incompleteG
};

static _KLsimple_object_vectorGVKd_2 K182 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_incompleteGVKe,
  &KLerrorGVKd
};

static _KLsimple_object_vectorGVKd_6 K183 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLobject_incompleteGVKe,
  &KLincomplete_errorGVKi
};

static _KLbyte_stringGVKd_18 K184 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "<incomplete-error>"
};

static _KLimplementation_classGVKe K185 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255365,
  &KLobject_incompleteGVKe,
  &KLobject_incompleteGVKeW,
  &KPfalseVKi,
  &K181,
  (D) 6945,
  &Kdefault_class_constructorVKi,
  &K186,
  &K187,
  (D) 9,
  &K188,
  &K189,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K275,
  &KPempty_vectorVKi,
  &K181,
  &K181,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K186 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLconditionGVKd
};

static _KLsimple_object_vectorGVKd_6 K187 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLobject_incompleteGVKe,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K188 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 17
};

static _KLsimple_object_vectorGVKd_2 K189 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLserious_conditionGVKd,
  &KLerrorGVKd
};

static _KLbyte_stringGVKd_19 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<object-incomplete>"
};

static _KLbyte_stringGVKd_128 K191 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 513,
  "Call to type-incomplete generic %= on args %=.\nThe generic cannot be used yet because the types %= have not been fully computed."
};

static _KLkeyword_signatureGVKe K194 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 49545221,
  &K127,
  &K200,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJsealedQ_,
  &KPfalseVKi,
  &KJincremental_gf_method_completeQ_,
  &KPtrueVKi,
  &KJincremental_gf_signaturedQ_,
  &KPtrueVKi
};

static _KLsymbolGVKd KJincremental_gf_method_completeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K199
};

static _KLsymbolGVKd KJincremental_gf_signaturedQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K198
};

static _KLbyte_stringGVKd_26 K198 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "incremental-gf-signatured?"
};

static _KLbyte_stringGVKd_31 K199 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "incremental-gf-method-complete?"
};

static _KLsimple_object_vectorGVKd_3 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJsealedQ_,
  &KJincremental_gf_method_completeQ_,
  &KJincremental_gf_signaturedQ_
};

_KLsealed_generic_functionGVKe Ksorted_applicable_methodsVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K205,
  &KPfalseVKi,
  &K206,
  &K204,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Ksorted_applicable_methodsVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K207,
  &Ksorted_applicable_methodsVKdMM0I
};

static _KLpairGVKd K204 = {
  &KLpairGVKdW /* wrapper */,
  &Ksorted_applicable_methodsVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K205 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34605061,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_25 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "sorted-applicable-methods"
};

static _KLsignatureAvaluesGVKi K207 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34605061,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

_KLsealed_generic_functionGVKe Kapplicable_methodQVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K215,
  &KPfalseVKi,
  &K216,
  &K213,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kapplicable_methodQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K218,
  &Kapplicable_methodQVKdMM0I
};

_KLsimple_methodGVKe Kapplicable_methodQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K217,
  &Kapplicable_methodQVKdMM1I
};

static _KLpairGVKd K213 = {
  &KLpairGVKdW /* wrapper */,
  &Kapplicable_methodQVKdMM0,
  &K214
};

static _KLpairGVKd K214 = {
  &KLpairGVKdW /* wrapper */,
  &Kapplicable_methodQVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K215 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LfunctionG_typesVKi
};

static _KLbyte_stringGVKd_18 K216 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "applicable-method?"
};

static _KLsignatureAvaluesGVKi K217 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K218 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LmethodG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe KPremove_method_from_libraryVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K220,
  &KPremove_method_from_libraryVKnI
};

static _KLsignatureAvaluesGVKi K220 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K221,
  &K222
};

static _KLsimple_object_vectorGVKd_5 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLgeneric_functionGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_1 K222 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K83
};

_KLsimple_methodGVKe KPremove_methodVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K224,
  &KPremove_methodVKnI
};

static _KLsignatureAvaluesGVKi K224 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K110,
  &K222
};

_KLsimple_methodGVKe Kremove_method_via_specializersVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K227,
  &Kremove_method_via_specializersVKnI
};

static _KLsignatureAvaluesGVKi K227 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K228,
  &K222
};

static _KLsimple_object_vectorGVKd_3 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLgeneric_functionGVKd,
  &KLobjectGVKd,
  &KLlibraryGVKe
};

_KLsimple_methodGVKe KPadd_nonsiblinged_methodVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K231,
  &KPadd_nonsiblinged_methodVKnI
};

static _KLsignatureGVKe K231 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K232
};

static _KLsimple_object_vectorGVKd_3 K232 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLgeneric_functionGVKd,
  &KLmethodGVKd,
  &KLlibraryGVKe
};

_KLsimple_methodGVKe KPadd_methodVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K231,
  &KPadd_methodVKnI
};

_KLsimple_methodGVKe KPadd_dynamic_methodVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K237,
  &KPadd_dynamic_methodVKnI
};

static _KLsignatureGVKe K237 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K238
};

static _KLsimple_object_vectorGVKd_2 K238 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsealed_generic_functionGVKe,
  &KLmethodGVKd
};

_KLsimple_methodGVKe KPadd_a_methodVKn = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K240,
  &KPadd_a_methodVKnI
};

static _KLsignatureGVKe K240 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943065,
  &K241
};

static _KLsimple_object_vectorGVKd_6 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLgeneric_functionGVKd,
  &KLmethodGVKd,
  &KLlibraryGVKe,
  &KLbooleanGVKd,
  &KLbooleanGVKd,
  &KLbooleanGVKd
};

_KLsimple_methodGVKe Kcall_to_type_incomplete_genericVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K243,
  &Kcall_to_type_incomplete_genericVKeI
};

static _KLsignatureGVKe K243 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K244
};

static _KLsimple_object_vectorGVKd_2 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kgeneric_function_sealedQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K246,
  &Kgeneric_function_sealedQVKeI
};

static _KLsignatureGVKe K246 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_Lgeneric_functionG_typesVKi
};

_KLsimple_methodGVKe Kincremental_gf_sealedQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K249,
  &Kincremental_gf_sealedQVKeMM0I
};

static _KLsignatureAvaluesGVKi K249 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K127,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kincremental_gf_sealedQ_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K251,
  &Kincremental_gf_sealedQ_setterVKeMM0I
};

static _KLsignatureAvaluesGVKi K251 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K252,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K252 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &KLincremental_generic_functionGVKe
};

_KLsimple_methodGVKe Kincremental_gf_method_completeQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K249,
  &Kincremental_gf_method_completeQVKeMM0I
};

_KLsimple_methodGVKe Kincremental_gf_method_completeQ_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K251,
  &Kincremental_gf_method_completeQ_setterVKeMM0I
};

_KLsimple_methodGVKe Kincremental_gf_signaturedQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K249,
  &Kincremental_gf_signaturedQVKeMM0I
};

_KLsimple_methodGVKe Kincremental_gf_signaturedQ_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K251,
  &Kincremental_gf_signaturedQ_setterVKeMM0I
};

_KLsimple_methodGVKe Kgeneric_function_mandatory_keywordsVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K262,
  &Kgeneric_function_mandatory_keywordsVKdMM0I
};

static _KLunionGVKe K261 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K84,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K262 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &K263
};

static _KLsimple_object_vectorGVKd_1 K263 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K261
};

_KLsimple_methodGVKe Kdecache_gfVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K265,
  &Kdecache_gfVKeMM0I
};

static _KLsignatureGVKe K265 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_Lgeneric_functionG_typesVKi
};

_KLsimple_methodGVKe Kfind_methodVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K273,
  &Kfind_methodVKdMM0I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_find_methodF271 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &rest_xep_0,
  &K272,
  &Kanonymous_of_find_methodF271I,
  (D) 1
};

static _KLbyte_stringGVKd_11 K270 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "find-method"
};

static _KLsignatureGVKe K272 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K273 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K274,
  &K222
};

static _KLsimple_object_vectorGVKd_2 K274 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLsequenceGVKd
};

static _KLpairGVKd K275 = {
  &KLpairGVKdW /* wrapper */,
  &KLincomplete_errorGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &KLclass_incomplete_errorGVKe,
  &K277
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &KLfunction_type_incomplete_errorGVKe,
  &KPempty_listVKi
};

static _KLpairGVKd K278 = {
  &KLpairGVKdW /* wrapper */,
  &KLdomain_sealed_generic_function_errorGVKe,
  &KPempty_listVKi
};

/* Code */

D Kinitialize_packed_slotsVKeMM2I (D x_, D all_keys_, D incremental_gf_sealedQ_, D incremental_gf_method_completeQ_, D incremental_gf_signaturedQ_) {
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

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T10 = primitive_copy_vector(all_keys_);
  T9 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T11 = primitive_idQ(T9,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    KerrorVKdMM1I(&K134, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T12 = SLOT_VALUE_INITD(T9, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T13 = SLOT_VALUE_INITD(T9, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    MEP_CALL_PROLOG(T12, T13, 2);
    MEP_CALL2(T12, x_, T10);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T14 = primitive_idQ(incremental_gf_sealedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  if (T14 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:67
    Kincremental_gf_sealedQ_setterVKeMM0I(incremental_gf_sealedQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T15 = primitive_idQ(incremental_gf_method_completeQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  if (T15 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:69
    Kincremental_gf_method_completeQ_setterVKeMM0I(incremental_gf_method_completeQ_, x_);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T16 = primitive_idQ(incremental_gf_signaturedQ_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T7 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T8 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:70
    Kincremental_gf_signaturedQ_setterVKeMM0I(incremental_gf_signaturedQ_, x_);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:70
    T6 = incremental_gf_signaturedQ_;
    MV_SET_ELT(0, incremental_gf_signaturedQ_);
    MV_SET_COUNT(1);
    T8 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  return(T8);
}

D Kcall_to_type_incomplete_genericVKeI (D g_, D mepargs_) {
  D args_;
  D incomplete_;
  D T5;
  D T6;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_3 T9 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T10;
  _KLsimple_object_vectorGVKd_8 T11 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:194
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:195
  args_ = Kreconstruct_args_from_mepargsVKeI(g_, mepargs_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:196
  T7 = SLOT_VALUE_INITD(g_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:196
  incomplete_ = Kincomplete_classesVKeI(T7);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:199
  T8 = SLOT_VALUE_INITD(g_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:199
  T5 = Kincomplete_classesVKeI(T8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:202
  T9.vector_element_[0] = g_;
  T9.vector_element_[1] = args_;
  T9.vector_element_[2] = incomplete_;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:202
  T10 = primitive_copy_vector(&T9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:197
  T11.vector_element_[0] = &KJobject_;
  T11.vector_element_[1] = g_;
  T11.vector_element_[2] = IKJtypes_;
  T11.vector_element_[3] = T5;
  T11.vector_element_[4] = &KJformat_string_;
  T11.vector_element_[5] = &K191;
  T11.vector_element_[6] = &KJformat_arguments_;
  T11.vector_element_[7] = T10;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:197
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLfunction_type_incomplete_errorGVKe, &T11);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:194
  return(T6);
}

D Kgeneric_function_sealedQVKeI (D g_) {
  D T1_0;
  D T2_0;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:15
  T4 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:15
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
    T3 = g_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:17
    T5 = SLOT_VALUE_INITD(T3, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:17
    T6 = primitive_cast_integer_as_raw(T5);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:17
    T7 = primitive_machine_word_logbitQ(2,T6);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:17
    T8_0 = T7;
    T2_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:19
    T1_0 = &KPtrueVKi;
    T2_0 = T1_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:14
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmap_congruency_classesVKiMM6I (D f_, D g_) {
  D T3;
  D T4;
  D T5;
  D resultF6T, resultF6;
  D T7T, T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D T20;
  D T21T, T21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T26;
  D T27_0;
  D T28;
  D T29;
  D T30_0;
  D T31_0;
  D T32;
  D resultF33T, resultF33;
  D T34T, T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40_0;
  D T41;
  D T42_0;
  D T43;
  D T44;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:44
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:46
  T4 = SLOT_VALUE_INITD(g_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:46
  ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K171, 2);
  ENGINE_NODE_CALL2(&K171, f_, T4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
  T5 = SLOT_VALUE_INITD(g_, 4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
  resultF6T = &KPempty_listVKi;
  T7T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
    resultF6 = resultF6T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
    T7 = T7T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
    T9 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
    if (T9 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      T10 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K172, 2);
      T12 = ENGINE_NODE_CALL2(&K172, f_, T10);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      T11 = T12;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      T8 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      SLOT_VALUE_SETTER(T11, T8, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      SLOT_VALUE_SETTER(resultF6, T8, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      T14 = SLOT_VALUE_INITD(T7, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      T15_0 = T14;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      T13_0 = T15_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      T16 = T13_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
      resultF6T = T8;
      T7T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
    KreverseXVKdMM2I(resultF6);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:47
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
  T17 = Tincomplete_generic_function_methodsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
  T19_0 = KgethashVKiI(T17, g_, &KPempty_listVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
  T18_0 = T19_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
  T20 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
  T21T = T20;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
    T21 = T21T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
    T22 = primitive_idQ(T21,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
    if (T22 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      T23 = SLOT_VALUE_INITD(T21, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      T24 = CALL1(&KfirstVKd, T23);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K173, 2);
      ENGINE_NODE_CALL2(&K173, f_, T24);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      T26 = SLOT_VALUE_INITD(T21, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      T27_0 = T26;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      T25_0 = T27_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      T28 = T25_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
      T21T = T28;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
  T29 = Tincomplete_generic_function_domainsTVKi;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
  T31_0 = KgethashVKiI(T29, g_, &KPempty_listVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
  T30_0 = T31_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
  T32 = T30_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
  resultF33T = &KPempty_listVKi;
  T34T = T32;
L2: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
    resultF33 = resultF33T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
    T34 = T34T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
    T36 = primitive_idQ(T34,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
    if (T36 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      T37 = SLOT_VALUE_INITD(T34, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K174, 2);
      T39 = ENGINE_NODE_CALL2(&K174, f_, T37);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      T38 = T39;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      T35 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      SLOT_VALUE_SETTER(T38, T35, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      SLOT_VALUE_SETTER(resultF33, T35, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      T41 = SLOT_VALUE_INITD(T34, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      T42_0 = T41;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      T40_0 = T42_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      T43 = T40_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
      resultF33T = T35;
      T34T = T43;
      goto L2;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
    KreverseXVKdMM2I(resultF33);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:49
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:50
  T44 = SLOT_VALUE_INITD(g_, 7);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:50
  T3 = KloopF176I(f_, T44);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:44
  MV_SET_COUNT(0);
  return(T3);
}

D Kreduce_incomplete_classesVKiMM7I (D f_, D g_, D ans_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:40
  T4 = SLOT_VALUE_INITD(g_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:40
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K168, 3);
  T5_0 = ENGINE_NODE_CALL3(&K168, f_, T4, ans_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:38
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_completeQVKeMM4I (D g_) {
  D T2;
  D T3_0;
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
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
  T5 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
  T6 = primitive_not(T5);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
    T7 = SLOT_VALUE_INITD(g_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
    T8 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
    T9 = primitive_machine_word_logbitQ(4,T8);
    T2 = T9;
  } else {
    T2 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:27
    T10 = SLOT_VALUE_INITD(g_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:27
    T11 = SLOT_VALUE_INITD(T10, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:27
    T12 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:27
    T13 = primitive_machine_word_logbitQ(25,T12);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:27
    T14_0 = T13;
    T4_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:24
  MV_SET_COUNT(1);
  return(T4_0);
}

D Krecompute_type_completeXVKiMM3I (D g_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14;
  DWORD T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
  T5 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
  T6 = primitive_not(T5);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
    T7 = SLOT_VALUE_INITD(g_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
    T8 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
    T9 = primitive_machine_word_logbitQ(4,T8);
    T2 = T9;
  } else {
    T2 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
    T10 = SLOT_VALUE_INITD(g_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
    T14 = SLOT_VALUE_INITD(T10, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
    T15 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
    T16 = primitive_machine_word_logbitQ(25,T15);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
      T11_0 = T16;
      T13_0 = T11_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
      T12_0 = Kinitialize_signature_completenessVKiI(T10);
      T13_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:34
    T4_0 = T13_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:32
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:31
  MV_SET_COUNT(1);
  return(T4_0);
}

D KcongruentQVKiMM1I (D f1_, D f2_) {
  D T3;
  D T4_0;
  D T4_1;
  D T5_0;
  D T5_1;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:257
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:259
  T6 = SLOT_VALUE_INITD(f1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:259
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T3 = CONGRUENT_CALL1(f2_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:259
  CONGRUENT_CALL_PROLOG(&KcongruentQVKi, 2);
  T4_0 = CONGRUENT_CALL2(T6, T3);
  T4_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:257
  T5_0 = T4_0;
  T5_1 = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:257
  MV_SET_ELT(1, T5_1);
  MV_SET_COUNT(2);
  return(T5_0);
}

D Kfunction_specializersVKdMM5I (D gf_) {
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:698
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  T3 = primitive_instanceQ(gf_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  T4 = primitive_not(T3);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    T5 = SLOT_VALUE_INITD(gf_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    T6 = primitive_cast_integer_as_raw(T5);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    T7 = primitive_machine_word_logbitQ(4,T6);
    T2 = T7;
  } else {
    T2 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    T8 = SLOT_VALUE_INITD(gf_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    T9 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    T10 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    T11 = primitive_machine_word_logbitQ(25,T10);
    T12 = T11;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  if (T12 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
    Kreport_generic_incompleteVKiI(gf_, &K163, &KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:699
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:700
  T13 = Kfunction_specializersVKdMM0I(gf_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:698
  return(T13);
}

D Kfunction_return_valuesVKdMM2I (D gf_) {
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T14_1;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:703
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  T3 = primitive_instanceQ(gf_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  T4 = primitive_not(T3);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    T5 = SLOT_VALUE_INITD(gf_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    T6 = primitive_cast_integer_as_raw(T5);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    T7 = primitive_machine_word_logbitQ(4,T6);
    T2 = T7;
  } else {
    T2 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    T8 = SLOT_VALUE_INITD(gf_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    T9 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    T10 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    T11 = primitive_machine_word_logbitQ(25,T10);
    T12 = T11;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  if (T12 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
    Kreport_generic_incompleteVKiI(gf_, &K159, &KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:705
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:706
  T13 = Kfunction_return_valuesVKdMM0I(gf_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:706
  T14_0 = T13;
  T14_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:703
  MV_SET_ELT(1, T14_1);
  MV_SET_COUNT(2);
  return(T14_0);
}

D KPadd_a_methodVKnI (D g_, D m_, D lib_, D check_congruencyQ_, D check_sealingQ_, D add_method_domainQ_) {
  volatile D T7;
  volatile D T8_0;
  volatile D T8_1;
  volatile D condition_;
  volatile D T10;
  volatile D T11;
  volatile D gF12;
  volatile D T13;
  volatile D more_lossage_;
  volatile D T15;
  volatile D T16;
  volatile D T17;
  volatile D Uunwind_exceptionUPexit_23_;
  volatile D T19;
  volatile D Uoriginal_handlersU_;
  volatile D T21;
  volatile D T22;
  volatile D T23;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile D T30;
  volatile D T31;
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
  volatile D T43;
  volatile _KLsimple_object_vectorGVKd_1 T44 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T45;
  volatile _KLsimple_object_vectorGVKd_4 T46 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T47;
  volatile D T48_0;
  volatile _KLsimple_object_vectorGVKd_8 T49 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T50;
  volatile D T51;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:454
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  SLOT_VALUE_SETTER(g_, T31, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  SLOT_VALUE_SETTER(&KPfalseVKi, T31, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  T32 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  SLOT_VALUE_SETTER(T31, T32, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  SLOT_VALUE_SETTER(&KPempty_listVKi, T32, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  ENTER_UNWIND_FRAME(T7);
  if (!nlx_setjmp(FRAME_DEST(T7))) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T32, T32);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:460
    T8_0 = Kadd_method_internalVKiI(g_, m_, lib_, check_congruencyQ_, check_sealingQ_);
    T8_1 = MV_GET_ELT(1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:459
    condition_ = T8_1;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:462
    if (add_method_domainQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:463
      T33 = primitive_instanceQ(condition_,&KLerrorGVKd);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:463
      T34 = primitive_not(T33);
      T10 = T34;
    } else {
      T10 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:462
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:462
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:464
      T35 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
      T11 = T35;
    } else {
      T11 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:462
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:462
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:465
      gF12 = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:466
      T13 = KPadd_method_domainVKnI(gF12, m_, lib_, check_sealingQ_);
      more_lossage_ = T13;
    } else {
      more_lossage_ = &KPempty_listVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:462
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:470
    if (condition_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:470
      T36 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:470
      SLOT_VALUE_SETTER(condition_, T36, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:470
      SLOT_VALUE_SETTER(more_lossage_, T36, 1);
      T15 = T36;
    } else {
      T15 = more_lossage_;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:470
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
    FALL_THROUGH_UNWIND(T15);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T32, T32);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:458
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:472
  T37 = primitive_idQ(T15,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:472
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:472
    T28 = &KPfalseVKi;
    T29 = T28;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:473
    T38 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:473
    if (T38 != &KPfalseVKi) {
      T30 = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:474
      T39 = SLOT_VALUE(T30, 6);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:474
      T40 = SLOT_VALUE_INITD(T39, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:474
      T41 = primitive_idQ(T40,lib_);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:474
      if (T41 != &KPfalseVKi) {
        T16 = T41;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:475
        T42 = SLOT_VALUE(T30, 6);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:475
        T43 = primitive_idQ(T42,Druntime_moduleVKe);
        T16 = T43;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:474
      T17 = T16;
    } else {
      T17 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:473
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:473
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
      ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_23_);
      if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_23_))) {
            T25 = FRAME_RETVAL(Uunwind_exceptionUPexit_23_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        T21 = MAKE_CLOSURE_INITD(&KUhandler_functionUF154, 6, Uoriginal_handlersU_, Uunwind_exceptionUPexit_23_, add_method_domainQ_, lib_, m_, g_);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:483
        T44.vector_element_[0] = g_;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:483
        T45 = primitive_copy_vector(&T44);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:480
        T46.vector_element_[0] = &KJformat_string_;
        T46.vector_element_[1] = &K153;
        T46.vector_element_[2] = &KJformat_arguments_;
        T46.vector_element_[3] = T45;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:480
        T47 = primitive_copy_vector(&T46);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        T49.vector_element_[0] = &KJtype_;
        T49.vector_element_[1] = &KLsimple_restartGVKd;
        T49.vector_element_[2] = &KJfunction_;
        T49.vector_element_[3] = T21;
        T49.vector_element_[4] = &KJtest_;
        T49.vector_element_[5] = &KPfalseVKi;
        T49.vector_element_[6] = &KJinit_arguments_;
        T49.vector_element_[7] = T47;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        T48_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T49, &KLsimple_restartGVKd, T21, &KPfalseVKi, T47);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        T50 = T48_0;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        T22 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        T51 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        SLOT_VALUE_SETTER(T50, T51, 0);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        SLOT_VALUE_SETTER(T22, T51, 1);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        primitive_write_thread_variable(Tcurrent_handlersTVKi, T51);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        ENTER_UNWIND_FRAME(T23);
        if (!nlx_setjmp(FRAME_DEST(T23))) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:477
          T24 = Kbletch_stackVKgI(T15);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
          FALL_THROUGH_UNWIND(T24);
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
        CONTINUE_UNWIND();
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
      T25 = T24;
        /* invalidate Uunwind_exceptionUPexit_23_ */
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
      T27 = T25;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:487
      T26 = Kbletch_stackVKgI(T15);
      T27 = T26;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:473
    T29 = T27;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:472
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:454
  MV_SET_COUNT(0);
  return(T29);
}

D KinitializeVKdMM9I (D generic_function_, D all_keys_, D signature_, D required_, D key_, D key_types_, D restQ_, D vals_, D rest_value_) {
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
  D e_;
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
  _KLsimple_object_vectorGVKd_1 T41 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T42;
  _KLsimple_object_vectorGVKd_4 T43 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:89
  T30 = primitive_copy_vector(all_keys_);
  T29 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:94
  if (key_ != &KPfalseVKi) {
    T31 = key_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:95
    if (restQ_ != &KPfalseVKi) {
      T20 = &K144;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:95
      if (key_types_ != &KPfalseVKi) {
        T32 = key_types_;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
        T36 = primitive_instanceQ(T32,&KLsequenceGVKd);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
        T37 = primitive_not(T36);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
        if (T36 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
          T10 = CALL2(&KanyQVKd, &Kanonymous_of_initializeF147, T32);
          T11 = T10;
        } else {
          T11 = T37;
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
        if (T11 != &KPfalseVKi) {
          T18 = &K143;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
          T38 = primitive_instanceQ(T31,&KLsequenceGVKd);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
          T39 = primitive_not(T38);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
          if (T38 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
            T12 = CALL2(&KanyQVKd, &Kanonymous_of_initializeF146, T31);
            T13 = T12;
          } else {
            T13 = T39;
          }
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
          if (T13 != &KPfalseVKi) {
            T17 = &K142;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:102
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T14 = CONGRUENT_CALL1(T31);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:102
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T15 = CONGRUENT_CALL1(T32);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:102
            T40 = KEEVKdI(T14, T15);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
            if (T40 != &KPfalseVKi) {
              T16 = &KPfalseVKi;
            } else {
              T16 = &K141;
            }
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
            T17 = T16;
          }
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
          T18 = T17;
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
        T19 = T18;
      } else {
        T19 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:95
      T20 = T19;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:95
    e_ = T20;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:94
    if (key_types_ != &KPfalseVKi) {
      T21 = &K145;
    } else {
      T21 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:94
    e_ = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:94
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:112
  if (e_ != &KPfalseVKi) {
    T33 = e_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:113
    T41.vector_element_[0] = T30;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:113
    T42 = primitive_copy_vector(&T41);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:113
    T43.vector_element_[0] = &KJformat_string_;
    T43.vector_element_[1] = T33;
    T43.vector_element_[2] = &KJformat_arguments_;
    T43.vector_element_[3] = T42;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:113
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T23 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T43);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:113
    KerrorVKdMM0I(T23, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:116
  T44 = primitive_idQ(T29,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:116
  if (T44 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:116
    KerrorVKdMM1I(&K134, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:116
    T45 = SLOT_VALUE_INITD(T29, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:116
    T46 = SLOT_VALUE_INITD(T29, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:116
    MEP_CALL_PROLOG(T45, T46, 2);
    MEP_CALL2(T45, generic_function_, T30);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:116
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:118
  if (signature_ == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:120
    if (key_ != &KPfalseVKi) {
      T34 = key_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:125
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T24 = CONGRUENT_CALL2(&KLsimple_object_vectorGVKd, T34);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:127
      if (key_types_ != &KPfalseVKi) {
        T35 = key_types_;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:127
        CONGRUENT_CALL_PROLOG(&KasVKd, 2);
        T25 = CONGRUENT_CALL2(&KLsimple_object_vectorGVKd, T35);
        T26 = T25;
      } else {
        T26 = &KPempty_vectorVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:127
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:121
      T47 = APPLYN(&KmakeVKd, 16), &KLsignatureGVKe, &KJrequired_, required_, &KJvalues_, vals_, &KJrest_value_, rest_value_, &KJrestQ_, restQ_, &KJkeys_, T24, &KJkeyQ_, &KPtrueVKi, &KJkey_types_, T26, T30));
      T27 = T47;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:130
      T48 = APPLY10(&KmakeVKd, &KLsignatureGVKe, &KJrequired_, required_, &KJvalues_, vals_, &KJrestQ_, restQ_, &KJrest_value_, rest_value_, T30);
      T27 = T48;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:120
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:119
    SLOT_VALUE_SETTER(T27, generic_function_, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:137
  T28 = Kfinalize_generic_functionVKiMM0I(generic_function_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:89
  MV_SET_COUNT(0);
  return(T28);
}

D KinitializeVKdMM10I (D gf_, D all_keys_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:141
  T5 = primitive_copy_vector(all_keys_);
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:143
  T6 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:143
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:143
    KerrorVKdMM1I(&K134, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:143
    T7 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:143
    T8 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:143
    MEP_CALL_PROLOG(T7, T8, 2);
    MEP_CALL2(T7, gf_, T5);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:144
  APPLY2(&Kinitialize_packed_slotsVKe, gf_, T5);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:145
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_initializeF135, 1, gf_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:145
  T9 = Kmap_congruency_classesVKiMM6I(T3, gf_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:141
  MV_SET_COUNT(0);
  return(T9);
}

D KmakeVKdMM49I (D c_, D args_, D required_, D key_, D key_types_, D restQ_, D values_, D rest_value_) {
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:81
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:84
  T9_0 = APPLY4(&KmakeVKd, &KLincremental_generic_functionGVKe, IKJmodule_, Druntime_moduleVKe, args_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:81
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kdecache_gfVKeMM0I (D g_) {
  DWORD T2T, T2;
  D xF3;
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

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:163
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:164
  SLOT_VALUE_SETTER(Dabsent_engine_nodeVKg, g_, 5);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:165
  T8 = SLOT_VALUE_INITD(g_, 2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:166
  T9 = primitive_instanceQ(T8,&KLgf_cache_infoGVKg);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:166
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:157
    T7 = T8;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
    T10 = SLOT_VALUE_INITD(T7, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
    T11 = SLOT_VALUE_INITD(T10, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
    T12 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
    T2T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
      T2 = T2T;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
      T13 = primitive_machine_word_equalQ(T2,T12);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
      if (T13 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
        T14 = REPEATED_D_SLOT_VALUE_TAGGED(T10, 1, T2);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:169
        if (T14 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:170
          xF3 = T14;
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:171
          SLOT_VALUE_SETTER(Dabsent_engine_nodeVKg, xF3, 3);
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:169
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
        T15 = primitive_machine_word_add_signal_overflow(T2,4);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
        T2T = T15;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
      T4 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:168
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:166
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:163
  MV_SET_COUNT(0);
  return(T6);
}

D KPremove_methodVKnI (D g_, D m_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:586
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:588
  T2_0 = KPremove_method_from_libraryVKnI(g_, m_, Druntime_libraryVKe, &KPfalseVKi, &KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:586
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kadd_method_internalVKiI (D g_, D m_, D lib_, D check_congruencyQ_, D check_sealingQ_) {
  D T5;
  D reason1_;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D T10_1;
  D T11_0;
  D T11_1;
  D wellQ_;
  D reason2_;
  D T14;
  D T15;
  D old_meth_;
  D T17_0;
  D T17_1;
  D T18_0;
  D T18_1;
  D T19_0;
  D T19_1;
  D T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_2 T23 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T24;
  D T25;
  D T26_0;
  D T26_1;
  D T27;
  D T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  D T33;
  D T34;
  DWORD T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40_0;
  D T40_1;
  D T41_0;
  D T41_1;
  _KLsimple_object_vectorGVKd_3 T42 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T43 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T44_0;
  D T44_1;
  D T45_0;
  D T45_1;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:314
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:317
  if (check_sealingQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:317
    T5 = Kmethod_not_frobbableQVKiI(g_, m_, lib_, &K74);
    reason1_ = T5;
  } else {
    reason1_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:317
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:318
  T22 = primitive_instanceQ(reason1_,&KLsealed_generic_function_errorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:318
  if (T22 != &KPfalseVKi) {
    T20 = reason1_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:319
    SLOT_VALUE_SETTER(&Kadd_methodVKdMM0, T20, 3);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:320
    T23.vector_element_[0] = g_;
    T23.vector_element_[1] = m_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:320
    T24 = primitive_copy_vector(&T23);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:320
    SLOT_VALUE_SETTER(T24, T20, 4);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:318
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:322
  T25 = primitive_instanceQ(reason1_,&KLerrorGVKd);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:322
  if (T25 != &KPfalseVKi) {
    T21 = reason1_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:325
    T26_0 = &KPfalseVKi;
    T26_1 = T21;
    T19_0 = T26_0;
    T19_1 = T26_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    T28 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    T29 = primitive_not(T28);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T30 = SLOT_VALUE_INITD(g_, 9);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T31 = primitive_cast_integer_as_raw(T30);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T32 = primitive_machine_word_logbitQ(4,T31);
      T27 = T32;
    } else {
      T27 = T29;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T33 = SLOT_VALUE_INITD(g_, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T34 = SLOT_VALUE_INITD(T33, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T35 = primitive_cast_integer_as_raw(T34);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T36 = primitive_machine_word_logbitQ(25,T35);
      T37 = T36;
    } else {
      T37 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    T38 = primitive_not(T37);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    if (T37 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
      T7 = CONGRUENT_CALL1(m_);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
      T39 = primitive_not(T7);
      T8 = T39;
    } else {
      T8 = T38;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:326
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:322
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:327
      T9 = note_generic_function_incomplete_methodVKi;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:327
      CALL3(T9, g_, m_, lib_);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:328
      T40_0 = &KPfalseVKi;
      T40_1 = &KPfalseVKi;
      T18_0 = T40_0;
      T18_1 = T40_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:330
      if (check_congruencyQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:330
        CONGRUENT_CALL_PROLOG(&KcongruentQVKi, 2);
        T10_0 = CONGRUENT_CALL2(g_, m_);
        T10_1 = MV_GET_ELT(1);
        T11_0 = T10_0;
        T11_1 = T10_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:330
        T41_0 = &KPtrueVKi;
        T41_1 = &KPfalseVKi;
        T11_0 = T41_0;
        T11_1 = T41_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:330
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:330
      wellQ_ = T11_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:330
      reason2_ = T11_1;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:331
      if (wellQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:336
        old_meth_ = Kadd_method_internal_internalVKiI(g_, m_, lib_);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:337
        T45_0 = old_meth_;
        T45_1 = reason1_;
        T17_0 = T45_0;
        T17_1 = T45_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:334
        T42.vector_element_[0] = m_;
        T42.vector_element_[1] = g_;
        T42.vector_element_[2] = reason2_;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:334
        T14 = KlistVKdI(&T42);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:332
        T43.vector_element_[0] = &KJformat_string_;
        T43.vector_element_[1] = &K78;
        T43.vector_element_[2] = &KJformat_arguments_;
        T43.vector_element_[3] = T14;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:332
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T15 = CONGRUENT_CALL2(&KLargument_errorGVKi, &T43);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:332
        T44_0 = &KPfalseVKi;
        T44_1 = T15;
        T17_0 = T44_0;
        T17_1 = T44_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:331
      T18_0 = T17_0;
      T18_1 = T17_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:322
    T19_0 = T18_0;
    T19_1 = T18_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:322
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:314
  MV_SET_ELT(1, T19_1);
  MV_SET_COUNT(2);
  return(T19_0);
}

D Kincremental_gf_method_completeQ_setterVKeMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T4 = SLOT_VALUE_INITD(x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T6 = primitive_machine_word_logbit_set(3,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T7 = primitive_machine_word_logbit_clear(3,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  SLOT_VALUE_SETTER(T9, x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLsealed_generic_function_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_sealed_generic_function_error_generic_, D Uunique_sealed_generic_function_error_operation_, D Uunique_sealed_generic_function_error_arguments_) {
  D T8;
  D Uunique_sealed_generic_function_error_genericF9;
  D T10;
  D Uunique_sealed_generic_function_error_genericF11;
  D Uunique_sealed_generic_function_error_argumentsF12;
  D Uunique_sealed_generic_function_error_argumentsF13;
  D T14_0;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:307
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:307
  T15 = primitive_idQ(Uunique_sealed_generic_function_error_generic_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:307
  if (T15 != &KPfalseVKi) {
    T16.vector_element_[0] = &KJgeneric_function_;
    T17 = KerrorVKdMM1I(&K67, &T16);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:307
    T8 = T17;
    Uunique_sealed_generic_function_error_genericF9 = T8;
  } else {
    Uunique_sealed_generic_function_error_genericF9 = Uunique_sealed_generic_function_error_generic_;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:307
  T10 = primitive_object_allocate_filled(6,&KLsealed_generic_function_errorGVKeW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T10, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T10, 1);
  Uunique_sealed_generic_function_error_genericF11 = Uunique_sealed_generic_function_error_genericF9;
  SLOT_VALUE_SETTER(Uunique_sealed_generic_function_error_genericF11, T10, 2);
  SLOT_VALUE_SETTER(Uunique_sealed_generic_function_error_operation_, T10, 3);
  T18 = primitive_idQ(Uunique_sealed_generic_function_error_arguments_,&KPunboundVKi);
  if (T18 != &KPfalseVKi) {
    Uunique_sealed_generic_function_error_argumentsF13 = Uunique_sealed_generic_function_error_arguments_;
  } else {
    Uunique_sealed_generic_function_error_argumentsF12 = Uunique_sealed_generic_function_error_arguments_;
    Uunique_sealed_generic_function_error_argumentsF13 = Uunique_sealed_generic_function_error_argumentsF12;
  }
  SLOT_VALUE_SETTER(Uunique_sealed_generic_function_error_argumentsF13, T10, 4);
  APPLY2(&KinitializeVKd, T10, init_args_);
  T14_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:307
  MV_SET_COUNT(1);
  return(T14_0);
}

D Kmethod_not_frobbableQVKiI (D g_, D frob_, D lib_, D opstring_) {
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_4 T15 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T16;
  _KLsimple_object_vectorGVKd_6 T17 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:343
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:345
  T4 = Kgeneric_function_sealedQVKeI(g_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:345
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
    T11 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:317
      T10 = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
      T12 = SLOT_VALUE(T10, 6);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
      T13 = SLOT_VALUE_INITD(T12, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
      T14 = primitive_idQ(T13,lib_);
      T5 = T14;
    } else {
      T5 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:349
      T6_0 = &KPfalseVKi;
      T8_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:354
      T15.vector_element_[0] = opstring_;
      T15.vector_element_[1] = frob_;
      T15.vector_element_[2] = lib_;
      T15.vector_element_[3] = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:354
      T16 = primitive_copy_vector(&T15);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:351
      T17.vector_element_[0] = &KJgeneric_function_;
      T17.vector_element_[1] = g_;
      T17.vector_element_[2] = &KJformat_string_;
      T17.vector_element_[3] = &K111;
      T17.vector_element_[4] = &KJformat_arguments_;
      T17.vector_element_[5] = T16;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:351
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T7_0 = CONGRUENT_CALL2(&KLsealed_generic_function_errorGVKe, &T17);
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:348
    T9_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:357
    ENGINE_NODE_CALL_PROLOG(&Kdomain_conflictQVKi, &K112, 5);
    T18_0 = ENGINE_NODE_CALL5(&K112, g_, frob_, lib_, &KPtrueVKi, opstring_);
    T9_0 = T18_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:343
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kadd_methodVKdMM0I (D a_generic_function_, D a_method_) {
  D T3;
  D T4_0;
  D T4_1;
  D ans_;
  D condition_;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:424
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  T8 = primitive_instanceQ(a_generic_function_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  T9 = primitive_not(T8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    T10 = SLOT_VALUE_INITD(a_generic_function_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    T12 = primitive_machine_word_logbitQ(4,T11);
    T7 = T12;
  } else {
    T7 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    T13 = SLOT_VALUE_INITD(a_generic_function_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    T14 = SLOT_VALUE_INITD(T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    T15 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    T16 = primitive_machine_word_logbitQ(25,T15);
    T17 = T16;
  } else {
    T17 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  if (T17 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
    Kreport_generic_incompleteVKiI(a_generic_function_, &K74, a_method_);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  T18 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  SLOT_VALUE_SETTER(a_generic_function_, T18, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  SLOT_VALUE_SETTER(&KPfalseVKi, T18, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  T19 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  SLOT_VALUE_SETTER(T18, T19, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  SLOT_VALUE_SETTER(&KPempty_listVKi, T19, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  ENTER_UNWIND_FRAME(T3);
  if (!nlx_setjmp(FRAME_DEST(T3))) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T19, T19);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:430
    T4_0 = Kadd_method_internalVKiI(a_generic_function_, a_method_, Druntime_libraryVKe, &KPtrueVKi, &KPtrueVKi);
    T4_1 = MV_GET_ELT(1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
    FALL_THROUGH_UNWIND(T4_0);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T19, T19);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:429
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  ans_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:427
  condition_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:432
  if (condition_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:432
    CALL1(&KbletchVKg, condition_);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:433
  T20 = a_method_;
  MV_SET_ELT(0, a_method_);
  MV_SET_ELT(1, ans_);
  MV_SET_COUNT(2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:424
  return(T20);
}

D Kadd_method_internal_internalVKiI (D g_, D m_, D lib_) {
  D T3;
  D specs_;
  D T5_0;
  D T5_1;
  D old_meth_;
  D idx_;
  DWORD i_T, i_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  DWORD T23;
  D T24;
  DWORD T25;
  D T26;
  DWORD T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  _KLsimple_object_vectorGVKd_1 T33 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T34;
  _KLsimple_object_vectorGVKd_1 T35 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T36_0;
  D T37;
  D T38_0;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  _KLsimple_object_vectorGVKd_1 T44 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T45;
  D T46;
  _KLsimple_object_vectorGVKd_1 T47 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T48_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:363
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:365
  CONGRUENT_CALL_PROLOG(&Kfunction_specializersVKd, 1);
  T3 = CONGRUENT_CALL1(m_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:365
  specs_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:366
  T5_0 = Klocate_methodVKiI(g_, specs_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:366
  old_meth_ = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:366
  idx_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:377
  T11 = SLOT_VALUE_INITD(g_, 4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:378
  if (old_meth_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:379
    T12 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:379
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:336
      T10 = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:381
      T13 = SLOT_VALUE(T10, 6);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:381
      T14 = SLOT_VALUE_INITD(T13, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:382
      T15 = SLOT_VALUE_INITD(T10, 8);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:383
      T16 = SLOT_VALUE_INITD(T15, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:384
      T17 = primitive_cast_integer_as_raw(idx_);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:384
      T18 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:384
      T19 = primitive_machine_word_less_thanQ(T17,T18);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:384
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:385
        T20 = primitive_idQ(lib_,T14);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:385
        if (T20 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
          T23 = primitive_machine_word_subtract_signal_overflow(T18,4);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
          T25 = primitive_cast_integer_as_raw(idx_);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
          i_T = T25;
        L0: ;
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
            i_ = i_T;
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
            T26 = primitive_cast_raw_as_integer(i_);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
            T24 = primitive_machine_word_less_thanQ(i_,T23);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
            if (T24 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
              T27 = primitive_machine_word_add_signal_overflow(i_,4);
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
              T28 = primitive_cast_raw_as_integer(T27);
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
              T29 = KelementVKdMM25I(T11, T28, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
              Kelement_setterVKdMM25I(T29, T11, T26);
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
              i_T = T27;
              goto L0;
            }
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:391
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:392
          T30 = primitive_cast_raw_as_integer(T23);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:392
          Kelement_setterVKdMM25I(m_, T11, T30);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:393
          T31 = Kcopy_over_withoutVKiMM0I(T15, idx_);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:393
          SLOT_VALUE_SETTER(T31, T10, 8);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:387
          T21 = primitive_cast_integer_as_raw(idx_);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:387
          T22 = primitive_machine_word_unsigned_less_thanQ(T21,T18);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:387
          if (T22 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:387
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(lib_, T15, 1, T21);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:387
            Kelement_range_errorVKeI(T15, idx_);
          }
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:387
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:388
          Kelement_setterVKdMM25I(m_, T11, idx_);
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:385
      } else {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:395
        T32 = primitive_idQ(lib_,T14);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:384
        if (T32 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:404
          Kelement_setterVKdMM25I(m_, T11, idx_);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          T33.vector_element_[0] = lib_;
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          T34 = primitive_copy_vector(&T33);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          T35.vector_element_[0] = T34;
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          T38_0 = Kobject_classVKdI(T15);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          T39 = T38_0;
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          T36_0 = APPLY3(&Kconcatenate_asVKd, T39, T15, &T35);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          T37 = T36_0;
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:397
          CALL2(&Kincremental_gf_method_libraries_setterVKe, T37, T10);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:398
          T40 = primitive_idQ(idx_,T16);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:398
          if (T40 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:399
            T41 = KelementVKdMM25I(T11, T16, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:399
            Kelement_setterVKdMM25I(T41, T11, idx_);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:400
            Kelement_setterVKdMM25I(m_, T11, T16);
          }
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:398
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:384
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:384
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:407
      Kelement_setterVKdMM25I(m_, T11, idx_);
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:379
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:411
    T42 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:411
    if (T42 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:412
      KPadd_method_and_libraryVKiI(g_, m_, lib_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:415
      T43 = SLOT_VALUE_INITD(g_, 4);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:415
      T44.vector_element_[0] = m_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:415
      T45 = primitive_copy_vector(&T44);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:415
      T47.vector_element_[0] = T45;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:415
      T48_0 = Kconcatenate_asVKdMM4I(&KLlistGVKd, T43, &T47);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:415
      T46 = T48_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:414
      SLOT_VALUE_SETTER(T46, g_, 4);
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:411
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:378
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:418
  Kfinalize_generic_functionVKiMM0I(g_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:419
  T9 = old_meth_;
  MV_SET_ELT(0, old_meth_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:363
  return(T9);
}

D Klocate_methodVKiI (D generic_function_, D the_specializers_) {
  D returnPexit_22_;
  D T3;
  D T4T, T4;
  DWORD i_T, i_;
  D a_method_;
  D T7_0;
  D T7_1;
  D T8_0;
  D T8_1;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_2 T16 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T17;
  D T18;
  DWORD T19;
  DWORD specnumF20T, specnumF20;
  D T21;
  D T22_0;
  D T23;
  D T24_0;
  D T25;
  DWORD T26;
  D T27;
  D T28;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:223
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:226
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:227
  T9 = SLOT_VALUE_INITD(the_specializers_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
  T10 = SLOT_VALUE_INITD(generic_function_, 4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
  T4T = T10;
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
    T4 = T4T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
    T27 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
    T11 = primitive_idQ(T4,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      T12 = SLOT_VALUE_INITD(T4, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      a_method_ = T12;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:235
      specnumF20T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:235
        specnumF20 = specnumF20T;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:234
        T21 = primitive_cast_raw_as_integer(specnumF20);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:231
        T15 = primitive_idQ(T21,T9);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:231
        if (T15 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:232
          T16.vector_element_[0] = a_method_;
          T16.vector_element_[1] = T27;
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:226
          T17 = MV_SET_REST_AT(&T16, 0);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:226
          T7_0 = T17;
          T7_1 = MV_GET_ELT(1);
          goto L2;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:233
          T13 = KPmethod_specializerVKgI(a_method_, T21);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:234
          T18 = REPEATED_D_SLOT_VALUE_TAGGED(the_specializers_, 1, specnumF20);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:233
          T14 = Ksame_specializerQVKgI(T13, T18);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:231
          if (T14 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:235
            T19 = primitive_machine_word_add_signal_overflow(specnumF20,4);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:235
            specnumF20T = T19;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:231
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:231
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:235
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      T23 = SLOT_VALUE_INITD(T4, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      T24_0 = T23;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      T22_0 = T24_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      T25 = T22_0;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      T26 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
      T4T = T25;
      i_T = T26;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:228
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:240
  T28 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_ELT(1, (D) -3);
  MV_SET_COUNT(2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:226
  T7_0 = T28;
  T7_1 = MV_GET_ELT(1);
  L2: ;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:226
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:223
  T8_0 = T7_0;
  T8_1 = T7_1;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:223
  MV_SET_ELT(1, T8_1);
  MV_SET_COUNT(2);
  return(T8_0);
}

D Kcopy_over_withoutVKiMM0I (D seq_, D idx_) {
  DWORD iF3T, iF3;
  DWORD iF4T, iF4;
  D T5_0;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  DWORD T16;
  DWORD T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:277
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:279
  T6 = SLOT_VALUE_INITD(seq_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:279
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:279
  T8 = primitive_machine_word_subtract_signal_overflow(T7,4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:279
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:280
  T10 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
  iF3T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
    iF3 = iF3T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
    T11 = primitive_cast_integer_as_raw(idx_);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
    T12 = primitive_machine_word_less_thanQ(iF3,T11);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(seq_, 1, iF3);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T13, T10, 1, iF3);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
      T14 = primitive_machine_word_add_signal_overflow(iF3,4);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
      iF3T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
  T16 = primitive_cast_integer_as_raw(idx_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
  iF4T = T16;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
    iF4 = iF4T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
    T15 = primitive_machine_word_less_thanQ(iF4,T8);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:283
      T17 = primitive_machine_word_add_signal_overflow(iF4,4);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:283
      T18 = REPEATED_D_SLOT_VALUE_TAGGED(seq_, 1, T17);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:283
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T18, T10, 1, iF4);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
      iF4T = T17;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:282
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:285
  T5_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:277
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPadd_method_and_libraryVKiI (D g_, D m_, D lib_) {
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_1 T9 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T10_0;
  D T11;
  D T12_0;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:438
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T6.vector_element_[0] = lib_;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T7 = primitive_copy_vector(&T6);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T8 = SLOT_VALUE_INITD(g_, 8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T9.vector_element_[0] = T8;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T12_0 = Kobject_classVKdI(T7);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T13 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T10_0 = APPLY3(&Kconcatenate_asVKd, T13, T7, &T9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:442
  T11 = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:441
  CALL2(&Kincremental_gf_method_libraries_setterVKe, T11, g_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:443
  T14 = SLOT_VALUE_INITD(g_, 4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:412
  T5 = T14;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:446
  T15 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:446
  SLOT_VALUE_SETTER(m_, T15, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:446
  SLOT_VALUE_SETTER(T5, T15, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:446
  SLOT_VALUE_SETTER(T15, g_, 4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:446
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:438
  MV_SET_COUNT(0);
  return(T4);
}

D Kfinalize_generic_functionVKiMM0I (D generic_function_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:156
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:157
  Kdecache_gfVKeMM0I(generic_function_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:159
  primitive_set_generic_function_entrypoints(generic_function_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:159
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:156
  MV_SET_COUNT(0);
  return(T2);
}

D Kreport_generic_incompleteVKiI (D g_, D name_, D meth_) {
  D T3;
  D T4;
  D T5;
  D T6;
  _KLsimple_object_vectorGVKd_3 T7 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T8;
  _KLsimple_object_vectorGVKd_8 T9 = {&KLsimple_object_vectorGVKdW, (D) 33};

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:206
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:209
  T6 = SLOT_VALUE_INITD(g_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:209
  T3 = Kincomplete_classesVKeI(T6);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:211
  T7.vector_element_[0] = name_;
  T7.vector_element_[1] = g_;
  T7.vector_element_[2] = meth_;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:211
  T8 = primitive_copy_vector(&T7);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:207
  T9.vector_element_[0] = &KJobject_;
  T9.vector_element_[1] = g_;
  T9.vector_element_[2] = IKJtypes_;
  T9.vector_element_[3] = T3;
  T9.vector_element_[4] = &KJformat_string_;
  T9.vector_element_[5] = &K87;
  T9.vector_element_[6] = &KJformat_arguments_;
  T9.vector_element_[7] = T8;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:207
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLfunction_type_incomplete_errorGVKe, &T9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:207
  CONGRUENT_CALL_PROLOG(&KbletchVKg, 1);
  T5 = CONGRUENT_CALL1(T4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:206
  return(T5);
}

D KLfunction_type_incomplete_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_incomplete_object_, D Uunique_incomplete_types_) {
  D T7;
  D Uunique_incomplete_objectF8;
  D T9;
  D Uunique_incomplete_typesF10;
  D T11;
  D Uunique_incomplete_typesF12;
  D T13_0;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  T14 = primitive_idQ(Uunique_incomplete_object_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  if (T14 != &KPfalseVKi) {
    T15.vector_element_[0] = &KJobject_;
    T16 = KerrorVKdMM1I(&K67, &T15);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
    T7 = T16;
    Uunique_incomplete_objectF8 = T7;
  } else {
    Uunique_incomplete_objectF8 = Uunique_incomplete_object_;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  T17 = primitive_idQ(Uunique_incomplete_types_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  if (T17 != &KPfalseVKi) {
    T18.vector_element_[0] = IKJtypes_;
    T19 = KerrorVKdMM1I(&K67, &T18);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
    T9 = T19;
    Uunique_incomplete_typesF10 = T9;
  } else {
    Uunique_incomplete_typesF10 = Uunique_incomplete_types_;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  T11 = primitive_object_allocate_filled(5,&KLfunction_type_incomplete_errorGVKeW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T11, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T11, 1);
  SLOT_VALUE_SETTER(Uunique_incomplete_objectF8, T11, 2);
  Uunique_incomplete_typesF12 = Uunique_incomplete_typesF10;
  SLOT_VALUE_SETTER(Uunique_incomplete_typesF12, T11, 3);
  APPLY2(&KinitializeVKd, T11, init_args_);
  T13_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:188
  MV_SET_COUNT(1);
  return(T13_0);
}

D KPremove_method_from_libraryVKnI (D g_, D frob_, D lib_, D check_sealingQ_, D test_) {
  D T6;
  D T7_0;
  D T7_1;
  D ansF8;
  D condition_;
  D T10;
  D gF11;
  D ansF12;
  D T13_0;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T18_1;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:594
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  SLOT_VALUE_SETTER(g_, T14, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  SLOT_VALUE_SETTER(&KPfalseVKi, T14, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  T15 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  SLOT_VALUE_SETTER(T14, T15, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  SLOT_VALUE_SETTER(&KPempty_listVKi, T15, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  ENTER_UNWIND_FRAME(T6);
  if (!nlx_setjmp(FRAME_DEST(T6))) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T15, T15);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:600
    T7_0 = Kremove_method_internalVKiI(g_, frob_, lib_, check_sealingQ_, test_);
    T7_1 = MV_GET_ELT(1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:599
    ansF8 = T7_0;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:599
    condition_ = T7_1;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:601
    T16 = primitive_not(ansF8);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:601
    if (ansF8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:601
      T17 = primitive_instanceQ(condition_,&KLerrorGVKd);
      T10 = T17;
    } else {
      T10 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:601
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:601
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:602
      gF11 = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:603
      ansF12 = ansF8;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:604
      KPremove_method_domainVKiI(gF11, ansF12, lib_);
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:601
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:606
    T18_0 = ansF8;
    T18_1 = condition_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
    FALL_THROUGH_UNWIND(T18_0);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T15, T15);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:598
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:608
  if (condition_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:608
    CALL1(&KbletchVKg, condition_);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:609
  T13_0 = ansF8;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:594
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kremove_method_internalVKiI (D g_, D frob_, D lib_, D check_sealingQ_, D test_) {
  D T5;
  D reason1_;
  D returnPexit_24_;
  D T8;
  D T9T, T9;
  DWORD i_T, i_;
  D m_;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T15_1;
  D T16_0;
  D T16_1;
  D T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_2 T21 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T22;
  D T23;
  D T24_0;
  D T24_1;
  D T25;
  D T26;
  D T27;
  D T28;
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
  D T40_0;
  D T41;
  D T42_0;
  D T43;
  DWORD T44;
  D T45;
  D T46_0;
  D T46_1;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:613
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:615
  if (check_sealingQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:615
    T5 = Kmethod_not_frobbableQVKiI(g_, frob_, lib_, &K115);
    reason1_ = T5;
  } else {
    reason1_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:615
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:616
  T20 = primitive_instanceQ(reason1_,&KLsealed_generic_function_errorGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:616
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:600
    T17 = reason1_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:617
    SLOT_VALUE_SETTER(&Kremove_methodVKd, T17, 3);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:618
    T21.vector_element_[0] = g_;
    T21.vector_element_[1] = frob_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:618
    T22 = primitive_copy_vector(&T21);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:618
    SLOT_VALUE_SETTER(T22, T17, 4);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:616
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:620
  T23 = primitive_instanceQ(reason1_,&KLerrorGVKd);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:620
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:600
    T18 = reason1_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:621
    T24_0 = &KPfalseVKi;
    T24_1 = T18;
    T16_0 = T24_0;
    T16_1 = T24_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:623
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
    T25 = SLOT_VALUE_INITD(g_, 4);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
    T9T = T25;
    i_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
      T9 = T9T;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:630
      T35 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
      T26 = primitive_idQ(T9,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
      if (T26 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        T27 = SLOT_VALUE_INITD(T9, 0);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        m_ = T27;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:625
        T12 = CALL2(test_, m_, frob_);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:625
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:626
          T28 = SLOT_VALUE_INITD(g_, 4);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:626
          T29 = Kcopy_over_withoutVKiMM1I(T28, T35);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:626
          CALL2(&Kgeneric_function_methods_setterVKe, T29, g_);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:627
          T30 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:627
          if (T30 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:600
            T19 = g_;
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:629
            T31 = SLOT_VALUE_INITD(T19, 8);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:630
            T32 = SLOT_VALUE_INITD(T31, 0);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:630
            T33 = primitive_cast_integer_as_raw(T32);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:630
            T34 = primitive_machine_word_less_thanQ(i_,T33);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:630
            if (T34 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:632
              T36 = SLOT_VALUE_INITD(T19, 8);
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:632
              T37 = Kcopy_over_withoutVKiMM0I(T36, T35);
              // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:631
              SLOT_VALUE_SETTER(T37, T19, 8);
            }
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:630
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:634
            T38.vector_element_[0] = m_;
            T38.vector_element_[1] = reason1_;
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:623
            T39 = MV_SET_REST_AT(&T38, 0);
            // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:623
            T15_0 = T39;
            T15_1 = MV_GET_ELT(1);
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:627
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:625
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        T41 = SLOT_VALUE_INITD(T9, 1);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        T42_0 = T41;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        T40_0 = T42_0;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        T43 = T40_0;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        T44 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
        T9T = T43;
        i_T = T44;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:624
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:638
    T13 = remove_generic_function_incomplete_methodVKi;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:638
    T14 = CALL4(T13, g_, frob_, lib_, test_);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:638
    T45 = T14;
    MV_SET_ELT(0, T14);
    MV_SET_ELT(1, reason1_);
    MV_SET_COUNT(2);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:623
    T15_0 = T45;
    T15_1 = MV_GET_ELT(1);
    L1: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:623
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:623
    T46_0 = T15_0;
    T46_1 = T15_1;
    T16_0 = T46_0;
    T16_1 = T46_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:620
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:613
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D Kremove_methodVKdI (D g_, D m_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:571
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:573
  KPremove_method_from_libraryVKnI(g_, m_, Druntime_libraryVKe, &KPtrueVKi, &KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:574
  T2_0 = m_;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:571
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kcopy_over_withoutVKiMM1I (D seq_, D idx_) {
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
  DWORD T16;
  D prevF17T, prevF17;
  D lF18T, lF18;
  D T19;
  DWORD iF20T, iF20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:289
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:290
  T5 = primitive_idQ(idx_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:290
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:291
    T6 = SLOT_VALUE_INITD(seq_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:291
    T7 = T6;
    MV_SET_ELT(0, T6);
    MV_SET_COUNT(1);
    T4 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:300
    T8 = SLOT_VALUE_INITD(seq_, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:300
    T9 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:300
    SLOT_VALUE_SETTER(T8, T9, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:300
    SLOT_VALUE_SETTER(&KPempty_listVKi, T9, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:301
    T10 = SLOT_VALUE_INITD(seq_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
    prevF17T = T9;
    lF18T = T10;
    iF20T = 5;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
      prevF17 = prevF17T;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
      lF18 = lF18T;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
      T19 = lF18;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
      iF20 = iF20T;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
      T21 = primitive_cast_raw_as_integer(iF20);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:294
      T11 = primitive_idQ(T21,idx_);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:294
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:295
        T12 = SLOT_VALUE_INITD(T19, 1);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:295
        SLOT_VALUE_SETTER(T12, prevF17, 1);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        T13 = SLOT_VALUE_INITD(T19, 0);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        SLOT_VALUE_SETTER(T13, T14, 0);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        SLOT_VALUE_SETTER(&KPempty_listVKi, T14, 1);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        SLOT_VALUE_SETTER(T14, prevF17, 1);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        T15 = SLOT_VALUE_INITD(T19, 1);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        T16 = primitive_machine_word_add_signal_overflow(iF20,4);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
        prevF17T = T14;
        lF18T = T15;
        iF20T = T16;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:294
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:297
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:302
    T3 = T9;
    MV_SET_ELT(0, T9);
    MV_SET_COUNT(1);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:290
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:289
  return(T4);
}

static D Kanonymous_of_initializeF135I (D c_) {
  D T1;
  D ic_;
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
  D T13;
  D T14;
  D T15;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:145
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:146
  T1 = CALL1(&Kclass_implementation_classVKe, c_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:146
  ic_ = T1;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
  T7 = SLOT_VALUE_INITD(ic_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
  T9 = primitive_machine_word_logbitQ(23,T8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
  if (T9 != &KPfalseVKi) {
    T3 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
    T10 = SLOT_VALUE_INITD(ic_, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
    T12 = primitive_machine_word_logbitQ(22,T11);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
    T13 = primitive_not(T12);
    T3 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:148
    T14 = SLOT_VALUE_INITD(ic_, 12);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:148
    T15 = Kadd_newXVKdMM3I(T14, CREF(0), &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:148
    SLOT_VALUE_SETTER(T15, ic_, 12);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:148
    T4 = T15;
    MV_SET_ELT(0, T15);
    MV_SET_COUNT(1);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
    T5 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:145
  return(T6);
}

static D Kanonymous_of_initializeF147I (D x_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
  T2 = primitive_instanceQ(x_,&KLtypeGVKd);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
  T4 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:98
  MV_SET_COUNT(1);
  return(T3_0);
}

static D Kanonymous_of_initializeF146I (D x_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
  T2 = primitive_instanceQ(x_,&KLsymbolGVKd);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
  T4 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
  T3_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:100
  MV_SET_COUNT(1);
  return(T3_0);
}

static D KUhandler_functionUF154I (D UdummyU_, D Unext_handlerU_) {
  D T3;
  D all_values_;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:484
  T3 = KPredefine_generic_using_methodVKiI(CREF(5), CREF(4), CREF(3), CREF(2));
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
  all_values_ = MV_GET_REST_AT(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
  T5 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
  T6 = NLX(CREF(1), T5);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:476
  return(T6);
}

D KPredefine_generic_using_methodVKiI (D g_, D m_, D lib_, D add_method_domainQ_) {
  D T4;
  D implicit_sig_;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:492
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:496
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T4 = CONGRUENT_CALL1(m_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:496
  implicit_sig_ = Kimplicit_generic_signatureVKiI(T4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:498
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  T6 = CONGRUENT_CALL1(g_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:497
  KPredefine_genericVKnI(g_, T6, Druntime_moduleVKe, implicit_sig_, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:499
  T7 = KPadd_a_methodVKnI(g_, m_, lib_, &KPfalseVKi, &KPfalseVKi, add_method_domainQ_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:492
  MV_SET_COUNT(0);
  return(T7);
}

D Kimplicit_generic_signatureVKiI (D sig_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  _KLsimple_object_vectorGVKd_8 T15 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T16;
  DWORD T17;
  D T18;
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_2 T20 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:503
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:505
  T7 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:505
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:505
  T9 = primitive_machine_word_logand(T8,1020);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:505
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:505
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:507
  T12 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:507
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:507
  T14 = primitive_machine_word_logbitQ(18,T13);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:506
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:508
    T15.vector_element_[0] = &KJrequired_;
    T15.vector_element_[1] = T11;
    T15.vector_element_[2] = &KJkeyQ_;
    T15.vector_element_[3] = &KPtrueVKi;
    T15.vector_element_[4] = &KJkeys_;
    T15.vector_element_[5] = &KPempty_vectorVKi;
    T15.vector_element_[6] = &KJkey_types_;
    T15.vector_element_[7] = &KPempty_vectorVKi;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:508
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T2_0 = CONGRUENT_CALL2(&KLsignatureGVKe, &T15);
    T6_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:513
    T16 = SLOT_VALUE_INITD(sig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:513
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:513
    T18 = primitive_machine_word_logbitQ(20,T17);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:506
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:514
      T19.vector_element_[0] = &KJrequired_;
      T19.vector_element_[1] = T11;
      T19.vector_element_[2] = &KJrestQ_;
      T19.vector_element_[3] = &KPtrueVKi;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:514
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T3_0 = CONGRUENT_CALL2(&KLsignatureGVKe, &T19);
      T5_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:518
      T20.vector_element_[0] = &KJrequired_;
      T20.vector_element_[1] = T11;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:518
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T4_0 = CONGRUENT_CALL2(&KLsignatureGVKe, &T20);
      T5_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:506
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:506
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:503
  MV_SET_COUNT(1);
  return(T6_0);
}

static D KloopF176I (D f_, D d_) {
  D dF2;
  D dF3;
  D T4;
  D T5;
  D T6;
  D T7;
  D dF8T, dF8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:50
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:54
  dF8T = d_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:54
    dF8 = dF8T;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:54
    T9 = dF8;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:50
    dF2 = T9;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:51
    if (dF2 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:52
      dF3 = dF2;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:53
      ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K177, 2);
      ENGINE_NODE_CALL2(&K177, f_, dF3);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:54
      T6 = SLOT_VALUE_INITD(dF3, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:54
      dF8T = T6;
      goto L0;
      T5 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:51
      T4 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T5 = T4;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:51
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:50
  return(T5);
}

D Kincremental_gf_sealedQ_setterVKeMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T4 = SLOT_VALUE_INITD(x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T6 = primitive_machine_word_logbit_set(2,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T7 = primitive_machine_word_logbit_clear(2,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  SLOT_VALUE_SETTER(T9, x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kincremental_gf_signaturedQ_setterVKeMM0I (D z_, D x_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T4 = SLOT_VALUE_INITD(x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  if (z_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T6 = primitive_machine_word_logbit_set(4,T5);
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
    T7 = primitive_machine_word_logbit_clear(4,T5);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  SLOT_VALUE_SETTER(T9, x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T3_0 = z_;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksorted_applicable_methodsVKdMM0I (D generic_function_, D arguments_) {
  D T3_0;
  D T3_1;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:691
  T4 = primitive_copy_vector(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  T6 = primitive_instanceQ(generic_function_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  T7 = primitive_not(T6);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    T8 = SLOT_VALUE_INITD(generic_function_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    T9 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    T10 = primitive_machine_word_logbitQ(4,T9);
    T5 = T10;
  } else {
    T5 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    T11 = SLOT_VALUE_INITD(generic_function_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    T12 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    T14 = primitive_machine_word_logbitQ(25,T13);
    T15 = T14;
  } else {
    T15 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  if (T15 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
    Kreport_generic_incompleteVKiI(generic_function_, &K206, &KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:694
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:695
  T3_0 = Kcompute_sorted_applicable_methodsVKgI(generic_function_, T4);
  T3_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:691
  MV_SET_ELT(1, T3_1);
  MV_SET_COUNT(2);
  return(T3_0);
}

D Kapplicable_methodQVKdMM0I (D function_, D sample_arguments_) {
  D T3;
  D sigF4;
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:648
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:650
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T3 = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:650
  sigF4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:651
  T9 = SLOT_VALUE_INITD(sample_arguments_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:652
  T10 = SLOT_VALUE_INITD(sigF4, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:652
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:652
  T12 = primitive_machine_word_logand(T11,1020);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:652
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:652
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  T15 = SLOT_VALUE_INITD(sigF4, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  T16 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  T17 = primitive_machine_word_logbitQ(18,T16);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  if (T17 != &KPfalseVKi) {
    T21 = T17;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
    T18 = SLOT_VALUE_INITD(sigF4, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
    T19 = primitive_cast_integer_as_raw(T18);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
    T20 = primitive_machine_word_logbitQ(20,T19);
    T21 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:654
    T23 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:654
    T24 = primitive_machine_word_less_thanQ(T23,T13);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:654
    T22 = primitive_not(T24);
    T5 = T22;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:656
    T25 = primitive_idQ(T9,T14);
    T5 = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:658
    T6_0 = Kapplicable_method_assuming_number_requiredQVKiI(function_, sample_arguments_);
    T8_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:653
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:648
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kapplicable_methodQVKdMM1I (D gf_, D sample_arguments_) {
  D T3;
  D returnPexit_25_;
  D T5;
  D T6T, T6;
  D m_;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12_0;
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
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  DWORD T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  _KLsimple_object_vectorGVKd_1 T45 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T46;
  D T47_0;
  D T48;
  D T49_0;
  D T50;
  D T51_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:662
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  T14 = primitive_instanceQ(gf_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  T15 = primitive_not(T14);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    T16 = SLOT_VALUE_INITD(gf_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    T18 = primitive_machine_word_logbitQ(4,T17);
    T13 = T18;
  } else {
    T13 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    T19 = SLOT_VALUE_INITD(gf_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    T20 = SLOT_VALUE_INITD(T19, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    T21 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    T22 = primitive_machine_word_logbitQ(25,T21);
    T23 = T22;
  } else {
    T23 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  if (T23 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
    Kreport_generic_incompleteVKiI(gf_, &K216, &KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:664
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:665
  T24 = SLOT_VALUE_INITD(gf_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:666
  T25 = SLOT_VALUE_INITD(sample_arguments_, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:667
  T26 = SLOT_VALUE_INITD(T24, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:667
  T27 = primitive_cast_integer_as_raw(T26);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:667
  T28 = primitive_machine_word_logand(T27,1020);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:667
  T29 = primitive_machine_word_logior(T28,1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:667
  T30 = primitive_cast_raw_as_integer(T29);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  T31 = SLOT_VALUE_INITD(T24, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  T32 = primitive_cast_integer_as_raw(T31);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  T33 = primitive_machine_word_logbitQ(18,T32);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  if (T33 != &KPfalseVKi) {
    T37 = T33;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
    T34 = SLOT_VALUE_INITD(T24, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
    T35 = primitive_cast_integer_as_raw(T34);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
    T36 = primitive_machine_word_logbitQ(20,T35);
    T37 = T36;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:669
    T39 = primitive_cast_integer_as_raw(T25);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:669
    T40 = primitive_machine_word_less_thanQ(T39,T29);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:669
    T38 = primitive_not(T40);
    T3 = T38;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:671
    T41 = primitive_idQ(T25,T30);
    T3 = T41;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:673
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
    T42 = SLOT_VALUE_INITD(gf_, 4);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
    T6T = T42;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
      T6 = T6T;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
      T43 = primitive_idQ(T6,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
      if (T43 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
        T44 = SLOT_VALUE_INITD(T6, 0);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
        m_ = T44;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:675
        T8 = Kapplicable_method_assuming_number_requiredQVKiI(m_, sample_arguments_);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:675
        if (T8 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:676
          T45.vector_element_[0] = &KPtrueVKi;
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:673
          T46 = MV_SET_REST_AT(&T45, 0);
          // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:673
          T10_0 = T46;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:675
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
        T48 = SLOT_VALUE_INITD(T6, 1);
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
        T49_0 = T48;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
        T47_0 = T49_0;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
        T50 = T47_0;
        // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
        T6T = T50;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:674
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:679
    T9 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:673
    T10_0 = T9;
    L1: ;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:673
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:673
    T51_0 = T10_0;
    T12_0 = T51_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
    T11_0 = &KPfalseVKi;
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:668
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:662
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kremove_method_via_specializersVKnI (D g_, D specs_, D lib_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:579
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:581
  T3_0 = KPremove_method_from_libraryVKnI(g_, specs_, lib_, &KPtrueVKi, &Kdomain_matchQVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:579
  MV_SET_COUNT(1);
  return(T3_0);
}

D KPadd_nonsiblinged_methodVKnI (D g_, D m_, D lib_) {
  D T4;
  D gF5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:539
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  T10 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  SLOT_VALUE_SETTER(g_, T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  SLOT_VALUE_SETTER(&KPfalseVKi, T10, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  T11 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  SLOT_VALUE_SETTER(T10, T11, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  SLOT_VALUE_SETTER(&KPempty_listVKi, T11, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  ENTER_UNWIND_FRAME(T4);
  if (!nlx_setjmp(FRAME_DEST(T4))) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T11, T11);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:544
    T12 = primitive_instanceQ(g_,&KLincremental_generic_functionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:544
    if (T12 != &KPfalseVKi) {
      T8 = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:546
      KPadd_method_and_libraryVKiI(T8, m_, lib_);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:547
      Kfinalize_generic_functionVKiMM0I(T8);
      T6 = &KPempty_listVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:553
      gF5 = g_;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:554
      T13 = SLOT_VALUE_INITD(gF5, 4);
      T9 = T13;
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:556
      T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:556
      SLOT_VALUE_SETTER(m_, T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:556
      SLOT_VALUE_SETTER(T9, T14, 1);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:556
      SLOT_VALUE_SETTER(T14, gF5, 4);
      // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:561
      Kfinalize_generic_functionVKiMM0I(gF5);
      T6 = &KPempty_listVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:544
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
    FALL_THROUGH_UNWIND(T6);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T11, T11);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:543
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:565
  T7 = Kbletch_stackVKgI(T6);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:539
  MV_SET_COUNT(0);
  return(T7);
}

D KPadd_methodVKnI (D g_, D m_, D lib_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:530
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:532
  T3 = KPadd_a_methodVKnI(g_, m_, lib_, &KPfalseVKi, &KPtrueVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:530
  MV_SET_COUNT(0);
  return(T3);
}

D KPadd_dynamic_methodVKnI (D g_, D m_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:524
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:526
  T2 = KPadd_a_methodVKnI(g_, m_, Druntime_libraryVKe, &KPtrueVKi, &KPfalseVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:524
  MV_SET_COUNT(0);
  return(T2);
}

D Kincremental_gf_sealedQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T2 = SLOT_VALUE_INITD(x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T4 = primitive_machine_word_logbitQ(2,T3);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kincremental_gf_method_completeQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T2 = SLOT_VALUE_INITD(x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T4 = primitive_machine_word_logbitQ(3,T3);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kincremental_gf_signaturedQVKeMM0I (D x_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T2 = SLOT_VALUE_INITD(x_, 9);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T4 = primitive_machine_word_logbitQ(4,T3);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:66
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kgeneric_function_mandatory_keywordsVKdMM0I (D gf_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:74
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:76
  T5 = SLOT_VALUE_INITD(gf_, 1);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
  T6 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
  T8 = primitive_machine_word_logbitQ(18,T7);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
    CONGRUENT_CALL_PROLOG(&Ksignature_keysVKi, 1);
    T2_0 = CONGRUENT_CALL1(T5);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
    T9_0 = T2_0;
    T4_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:77
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:74
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kfind_methodVKdMM0I (D generic_function_, D the_specializers_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:245
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  T10 = primitive_instanceQ(generic_function_,&KLincremental_generic_functionGVKe);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  T11 = primitive_not(T10);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    T12 = SLOT_VALUE_INITD(generic_function_, 9);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    T14 = primitive_machine_word_logbitQ(4,T13);
    T9 = T14;
  } else {
    T9 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    T15 = SLOT_VALUE_INITD(generic_function_, 1);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    T16 = SLOT_VALUE_INITD(T15, 0);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    T18 = primitive_machine_word_logbitQ(25,T17);
    T19 = T18;
  } else {
    T19 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  if (T19 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
    Kreport_generic_incompleteVKiI(generic_function_, &K270, &KPfalseVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:249
  T20 = primitive_instanceQ(the_specializers_,&KLsimple_object_vectorGVKd);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:249
  if (T20 != &KPfalseVKi) {
    T8 = the_specializers_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:250
    T3 = Klocate_methodVKiI(generic_function_, T8);
    T6 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:252
    T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_find_methodF271, 1, generic_function_);
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:252
    T21.vector_element_[0] = the_specializers_;
    // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:252
    T5 = KapplyVKdI(T4, &T21);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:249
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:249
  T22_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:245
  T7_0 = T22_0;
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:245
  MV_SET_COUNT(1);
  return(T7_0);
}

static D Kanonymous_of_find_methodF271I (D v_) {
  D T2;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:252
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:252
  T2 = Klocate_methodVKiI(CREF(0), v_);
  // /opt/opendylan-2013.1/sources/dylan/generic-function.dylan:252
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_generic_function_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtypes_);
    if (T0 != &KJtypes_) {
      IKJtypes_ = T0;
      primitive_repeated_slot_value_setter(T0, &K105, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K104, 1, 6);
      primitive_slot_value_setter(T0, &Kincomplete_typesVKeHLfunction_type_incomplete_errorG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmodule_);
    if (T0 != &KJmodule_) {
      IKJmodule_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJincremental_gf_method_completeQ_);
    if (T0 != &KJincremental_gf_method_completeQ_) {
      primitive_repeated_slot_value_setter(T0, &K200, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K195, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJincremental_gf_signaturedQ_);
    if (T0 != &KJincremental_gf_signaturedQ_) {
      primitive_repeated_slot_value_setter(T0, &K200, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K195, 1, 4);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_generic_function_for_user () {
  return;
}


/* eof */
