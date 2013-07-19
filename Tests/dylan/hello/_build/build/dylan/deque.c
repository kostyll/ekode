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
} _KLempty_listGVKd;

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
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(13);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

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
} _KLintegerGVKd;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLnatural_number_errorGVKi;

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
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(34);
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
} _KLsetter_methodGVKi;

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
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
} _KLstretchy_collectionGVKd;

typedef struct {
  D wrapper;
} _KLstretchy_sequenceGVKe;

typedef struct {
  D wrapper;
} _KLstretchy_mutable_sequenceGVKe;

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

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_deque_typeGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLempty_collection_errorGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLlambdaGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinfinite_range_errorGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
} _KLinfinite_rangeGVKi;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D element_type_;
  D representation_;
} _KLobject_dequeGVKe;

typedef struct {
  D wrapper;
} _KLdequeGVKd;

#define  define__KLisland_dequeGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D first_index_; \
    D last_index_; \
    D size_; \
    D island_deque_element_[nrepeated+1]; \
  } _KLisland_dequeGVKi_##nrepeated;


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
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lobject_dequeG_typesVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LdequeG_typesVKi;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_4;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJfill_;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KLVKd;
D KlistVKdI (D);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLnatural_number_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLnatural_number_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLsealed_generic_functionGVKe KtruncateSVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLstretchy_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_collectionGVKdW;
extern _KLclassGVKd KLstretchy_sequenceGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_sequenceGVKeW;
extern _KLclassGVKd KLstretchy_mutable_sequenceGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_mutable_sequenceGVKeW;
D Kallocate_instanceVKeI (D class_, D init_args_);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLlimited_deque_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_deque_typeGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLclassGVKd KLempty_collection_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLempty_collection_errorGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_3;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJcount_;
extern _KLincremental_generic_functionGVKe KremoveXVKd;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM0;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_2;
D Kelement_range_errorVKeI (D, D);
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_4;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
D Kinstall_and_return_make_method_init_dataVKiI (D descriptor_);
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLclassGVKd KLinfinite_range_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLinfinite_range_errorGVKiW;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLclassGVKd KLinfinite_rangeGVKi;
extern _KLmm_wrapperGVKi_0 KLinfinite_rangeGVKiW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLsymbolGVKd KJdefault_;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_0;
D Kobject_classVKdI (D);
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_1;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLinstance_slot_descriptorGVKe Kelement_typeVKeHLlimited_collectionG;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;

/* Defined object declarations */

extern _KLclassGVKd KLobject_dequeGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_dequeGVKeW;
extern _KLclassGVKd KLdequeGVKd;
extern _KLmm_wrapperGVKi_0 KLdequeGVKdW;
extern _KLsimple_methodGVKe KemptyQVKdMM14;
D KemptyQVKdMM14I (D);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe Ksize_setterVKdMM5;
D Ksize_setterVKdMM5I (D, D);
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_2;
extern _KLgetter_methodGVKi KsizeVKdMM32;
extern _KLsimple_methodGVKe KsizeVKdMM33;
D KsizeVKdMM33I (D collection_);
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_8;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM19;
D Ktype_for_copyVKdMM19I (D x_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_2;
extern _KLkeyword_methodGVKe KelementVKdMM27;
D KelementVKdMM27I (D, D, D, D);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_7;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM25;
D Kelement_no_bounds_checkVKeMM25I (D collection_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_0;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM26;
D Kforward_iteration_protocolVKdMM26I (D deque_);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM13;
D Kmap_as_oneVKiMM13I (D type_, D function_, D collection_);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM12;
D Kmap_as_oneVKiMM12I (D type_, D function_, D collection_);
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM11;
D Kmap_as_oneVKiMM11I (D, D, D);
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM10;
D Kmap_as_oneVKiMM10I (D, D, D);
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM9;
D Kmap_as_oneVKiMM9I (D, D, D);
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM8;
D Kmap_as_oneVKiMM8I (D, D, D);
D KLobject_dequeGZ32ZconstructorVKiMM0I (D, D, D);
D Kpush_lastVKdMM0I (D, D);
extern _KLsimple_methodGVKe KaddXVKdMM8;
D KaddXVKdMM8I (D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM8;
D KremoveXVKdMM8I (D, D, D, D, D);
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM16;
D Kbackward_iteration_protocolVKdMM16I (D deque_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM27;
D Kelement_setterVKdMM27I (D, D, D);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM27;
D Kelement_no_bounds_check_setterVKeMM27I (D new_value_, D collection_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_1;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM5;
D Kcopy_sequenceVKdMM5I (D, D, D, D);
extern _KLsimple_methodGVKe KreverseVKdMM3;
D KreverseVKdMM3I (D);
extern _KLkeyword_methodGVKe KremoveVKdMM7;
D KremoveVKdMM7I (D, D, D, D, D);
extern _KLsimple_methodGVKe KaddVKdMM4;
D KaddVKdMM4I (D, D);
extern _KLsimple_methodGVKe Kconcatenate_as_twoVKiMM2;
D Kconcatenate_as_twoVKiMM2I (D, D, D);
extern _KLsimple_methodGVKe KreverseXVKdMM3;
D KreverseXVKdMM3I (D);
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_4;
extern _KLsimple_methodGVKe Ktrusted_size_setterVKiMM5;
D Ktrusted_size_setterVKiMM5I (D new_size_, D collection_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_4;
extern _KLkeyword_methodGVKe KlimitedVKdMM1;
D KlimitedVKdMM1I (D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM6;
D KinitializeVKdMM6I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM40;
D KmakeVKdMM40I (D class_, D all_keys_, D size_, D fill_);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe KasVKdMM67;
D KasVKdMM67I (D, D);
extern _KLsimple_methodGVKe KasVKdMM68;
D KasVKdMM68I (D class_, D deque_);
extern _KLsimple_methodGVKe KasVKdMM69;
D KasVKdMM69I (D, D);
extern _KLsimple_methodGVKe KasVKdMM70;
D KasVKdMM70I (D, D);
extern _KLsimple_methodGVKe KasVKdMM71;
D KasVKdMM71I (D, D);
extern _KLsimple_methodGVKe KasVKdMM72;
D KasVKdMM72I (D, D);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_3;
static _KLsignatureAvaluesGVKi K95;
static _KLsimple_object_vectorGVKd_2 K96;
static _KLsingletonGVKd K97;
static _KLsignatureAvaluesGVKi K98;
static _KLsimple_object_vectorGVKd_2 K99;
static _KLsingletonGVKd K100;
static _KLsignatureAvaluesGVKi K101;
static _KLsimple_object_vectorGVKd_2 K102;
static _KLsignatureAvaluesGVKi K103;
static _KLsimple_object_vectorGVKd_2 K104;
static _KLsignatureAvaluesGVKi K105;
static _KLsimple_object_vectorGVKd_2 K106;
static _KLsingletonGVKd K107;
static _KLsignatureAvaluesGVKi K108;
static _KLsimple_object_vectorGVKd_2 K109;
extern _KLkeyword_methodGVKe KLobject_dequeGZ32ZconstructorVKiMM0;
static _KLkeyword_signatureAvaluesGVKi K111;
static _KLsimple_object_vectorGVKd_2 K112;
static _KLsimple_object_vectorGVKd_1 K113;
static _KLkeyword_signatureAvaluesGVKi K114;
static _KLsimple_object_vectorGVKd_4 K115;
static _KLsimple_object_vectorGVKd_1 K116;
static _KLsimple_object_vectorGVKd_2 K117;
static _KLbyte_stringGVKd_15 K118;
static _KLbyte_stringGVKd_34 K119;
extern _KLclassGVKd KLisland_dequeGVKi;
extern _KLmm_wrapperGVKi_0 KLisland_dequeGVKiW;
extern _KLsealed_generic_functionGVKe Klast_index_setterVKi;
extern _KLsetter_methodGVKi Klast_index_setterVKiMM0;
static _KLpairGVKd K124;
static _KLbyte_stringGVKd_17 K125;
extern _KLinstance_slot_descriptorGVKe Klast_indexVKiHLisland_dequeG;
extern _KLsealed_generic_functionGVKe Klast_indexVKi;
extern _KLgetter_methodGVKi Klast_indexVKiMM0;
static _KLpairGVKd K129;
static _KLbyte_stringGVKd_10 K130;
static _KLimplementation_classGVKe K131;
extern _KLrepeated_slot_descriptorGVKe Kisland_deque_elementVKiHLisland_dequeG;
static _KLsimple_object_vectorGVKd_3 K133;
extern _KLkeyword_methodGVKe KLisland_dequeGZ32ZconstructorVKiMM0;
D KLisland_dequeGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K136;
static _KLsimple_object_vectorGVKd_12 K137;
static _KLsimple_object_vectorGVKd_3 K138;
extern _KLinstance_slot_descriptorGVKe Kfirst_indexVKiHLisland_dequeG;
extern _KLsealed_generic_functionGVKe Kfirst_indexVKi;
extern _KLsealed_generic_functionGVKe Kfirst_index_setterVKi;
extern _KLsetter_methodGVKi Kfirst_index_setterVKiMM0;
static _KLpairGVKd K143;
static _KLbyte_stringGVKd_18 K144;
extern _KLgetter_methodGVKi Kfirst_indexVKiMM0;
static _KLpairGVKd K146;
static _KLbyte_stringGVKd_11 K147;
static _KLkeyword_signatureAvaluesGVKi K148;
static _KLsimple_object_vectorGVKd_2 K149;
static _KLsimple_object_vectorGVKd_1 K150;
static _KLsimple_object_vectorGVKd_1 K151;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLisland_dequeG;
extern _KLsealed_generic_functionGVKe Kisland_deque_elementVKi;
extern _KLsealed_generic_functionGVKe Kisland_deque_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kisland_deque_element_setterVKiMM0;
static _KLpairGVKd K156;
static _KLbyte_stringGVKd_27 K157;
extern _KLrepeated_getter_methodGVKi Kisland_deque_elementVKiMM0;
static _KLpairGVKd K159;
static _KLbyte_stringGVKd_20 K160;
static _KLbyte_stringGVKd_14 K161;
static _KLkeyword_signatureGVKe K162;
static _KLsimple_object_vectorGVKd_4 K163;
D Klimited_dequeVKiMM0I (D);
static _KLsymbolGVKd KJconcrete_class_;
static _KLbyte_stringGVKd_14 K166;
static _KLkeyword_signatureAvaluesGVKi K167;
static _KLsimple_object_vectorGVKd_2 K168;
static _KLsymbolGVKd KJof_;
static _KLbyte_stringGVKd_2 K170;
static _KLsimple_object_vectorGVKd_1 K171;
D Kpop_lastVKdMM0I (D);
D Kmake_room_at_lastXVKiMM0I (D);
D KgrowXVKiMM0I (D);
static _KLbyte_stringGVKd_18 K175;
static _KLsignatureAvaluesGVKi K176;
static _KLsimple_object_vectorGVKd_2 K177;
static _KLsignatureAvaluesGVKi K178;
static _KLsignatureAvaluesGVKi K179;
static _KLsimple_object_vectorGVKd_3 K180;
extern _KLincremental_generic_functionGVKe KpushVKd;
extern _KLsimple_methodGVKe KpushVKdMM0;
D KpushVKdMM0I (D, D);
extern _KLmethod_domainGVKe KpushVKdRD_dylanRD_0;
static _KLpairGVKd K185;
static _KLsignatureGVKe K186;
static _KLbyte_stringGVKd_4 K187;
static _KLsimple_object_vectorGVKd_2 K188;
D Kmake_room_at_firstXVKiMM0I (D);
static _KLsignatureGVKe K190;
static _KLsimple_object_vectorGVKd_2 K191;
static _KLsignatureAvaluesGVKi K192;
static _KLkeyword_signatureAvaluesGVKi K193;
static _KLsimple_object_vectorGVKd_4 K194;
static _KLsimple_object_vectorGVKd_2 K195;
static _KLsignatureAvaluesGVKi K196;
static _KLkeyword_signatureAvaluesGVKi K197;
static _KLsimple_object_vectorGVKd_4 K198;
static _KLsimple_object_vectorGVKd_2 K199;
static _KLsimple_object_vectorGVKd_2 K200;
static _KLsignatureGVKe K201;
static _KLsimple_object_vectorGVKd_3 K202;
extern _KLsimple_methodGVKe Kobject_deque_current_elementVKi;
D Kobject_deque_current_elementVKiI (D deque_, D state_);
extern _KLsimple_methodGVKe Kobject_deque_current_element_setterVKi;
D Kobject_deque_current_element_setterVKiI (D new_value_, D deque_, D state_);
static _KLsignatureGVKe K207;
static _KLsignatureGVKe K208;
static _KLsimple_object_vectorGVKd_2 K209;
static _KLsignatureAvaluesGVKi K210;
static _KLsimple_object_vectorGVKd_8 K211;
static _KLkeyword_signatureAvaluesGVKi K212;
extern _KLinstance_slot_descriptorGVKe KrepresentationVKiHLobject_dequeG;
static _KLlambdaGVKe Kslot_initializerF224;
static D Kslot_initializerF224I ();
extern _KLsealed_generic_functionGVKe KrepresentationVKi;
extern _KLsealed_generic_functionGVKe Krepresentation_setterVKi;
extern _KLsetter_methodGVKi Krepresentation_setterVKiMM0;
static _KLpairGVKd K219;
static _KLbyte_stringGVKd_21 K220;
extern _KLgetter_methodGVKi KrepresentationVKiMM0;
static _KLpairGVKd K222;
static _KLbyte_stringGVKd_14 K223;
static _KLsignatureGVKe K225;
static _KLbyte_stringGVKd_33 K226;
static _KLsignatureAvaluesGVKi K227;
static _KLsimple_object_vectorGVKd_3 K228;
static _KLsignatureAvaluesGVKi K229;
static _KLsimple_object_vectorGVKd_3 K230;
static _KLsignatureAvaluesGVKi K231;
static _KLsimple_object_vectorGVKd_3 K232;
static _KLsignatureAvaluesGVKi K233;
static _KLsimple_object_vectorGVKd_3 K234;
static _KLsignatureAvaluesGVKi K235;
static _KLsimple_object_vectorGVKd_3 K236;
static _KLsignatureAvaluesGVKi K237;
static _KLsimple_object_vectorGVKd_3 K238;
extern _KLsimple_methodGVKe Kobject_deque_current_keyVKi;
D Kobject_deque_current_keyVKiI (D deque_, D state_);
static _KLkeyword_signatureGVKe K241;
static _KLsimple_object_vectorGVKd_2 K242;
static _KLsimple_object_vectorGVKd_1 K243;
static _KLsignatureAvaluesGVKi K244;
static _KLsignatureAvaluesGVKi K245;
static _KLsignatureAvaluesGVKi K246;
static _KLimplementation_classGVKe K247;
static _KLsimple_object_vectorGVKd_1 K248;
static _KLsimple_object_vectorGVKd_11 K249;
static _KLsimple_object_vectorGVKd_1 K250;
static _KLsimple_object_vectorGVKd_1 K251;
static _KLbyte_stringGVKd_7 K252;
static _KLimplementation_classGVKe K253;
static _KLsimple_object_vectorGVKd_2 K254;
static _KLsimple_object_vectorGVKd_2 K255;
static _KLsimple_object_vectorGVKd_13 K256;
static _KLsimple_object_vectorGVKd_1 K257;
static _KLbyte_stringGVKd_14 K258;
extern _KLincremental_generic_functionGVKe Kpush_lastVKd;
extern _KLsimple_methodGVKe Kpush_lastVKdMM0;
extern _KLmethod_domainGVKe Kpush_lastVKdRD_dylanRD_0;
static _KLpairGVKd K262;
static _KLbyte_stringGVKd_9 K263;
static _KLsignatureAvaluesGVKi K264;
extern _KLincremental_generic_functionGVKe Kpop_lastVKd;
extern _KLsimple_methodGVKe Kpop_lastVKdMM0;
extern _KLmethod_domainGVKe Kpop_lastVKdRD_dylanRD_0;
static _KLpairGVKd K268;
static _KLsignatureGVKe K269;
static _KLbyte_stringGVKd_8 K270;
static _KLsignatureGVKe K271;
extern _KLincremental_generic_functionGVKe KpopVKd;
extern _KLsimple_methodGVKe KpopVKdMM0;
D KpopVKdMM0I (D);
extern _KLmethod_domainGVKe KpopVKdRD_dylanRD_0;
static _KLpairGVKd K276;
static _KLbyte_stringGVKd_3 K277;
static _KLpairGVKd K278;
static _KLpairGVKd K279;

/* Indirection variables */

static D IKJconcrete_class_ = &KJconcrete_class_;
static D IKJof_ = &KJof_;

/* Variables */

D LdequeGVKd = &KLdequeGVKd;
D popVKd = &KpopVKd;
D pop_lastVKd = &Kpop_lastVKd;
D pushVKd = &KpushVKd;
D push_lastVKd = &Kpush_lastVKd;
D Lobject_dequeGVKe = &KLobject_dequeGVKe;
D Lisland_dequeGVKi = &KLisland_dequeGVKi;
D last_index_setterVKi = &Klast_index_setterVKi;
D island_deque_element_setterVKi = &Kisland_deque_element_setterVKi;
D object_deque_current_elementVKi = &Kobject_deque_current_elementVKi;
D object_deque_current_element_setterVKi = &Kobject_deque_current_element_setterVKi;
D object_deque_current_keyVKi = &Kobject_deque_current_keyVKi;

/* Objects */

_KLclassGVKd KLobject_dequeGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K258,
  &K253,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLobject_dequeGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K253,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLdequeGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K252,
  &K247,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLdequeGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K247,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe KemptyQVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K246,
  &KemptyQVKdMM14I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_1,
  &KemptyQVKdMM14
};

_KLsimple_methodGVKe Ksize_setterVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K176,
  &Ksize_setterVKdMM5I
};

_KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksize_setterVKdRD_dylanRD_1,
  &Ksize_setterVKdMM5
};

_KLgetter_methodGVKi KsizeVKdMM32 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLisland_dequeG
};

_KLsimple_methodGVKe KsizeVKdMM33 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K245,
  &KsizeVKdMM33I
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_7,
  &KsizeVKdMM33
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K244,
  &Ktype_for_copyVKdMM19I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_0,
  &Ktype_for_copyVKdMM19
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_0,
  (D) 5,
  &KLobject_dequeGVKe
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_1,
  (D) 5,
  &KLobject_dequeGVKe
};

_KLkeyword_methodGVKe KelementVKdMM27 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K241,
  &key_mep_4,
  &KelementVKdMM27I,
  &K242
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_6,
  &KelementVKdMM27
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM25 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K241,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM25I,
  &K242
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kelement_no_bounds_checkVKeMM25
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM26 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K210,
  &Kforward_iteration_protocolVKdMM26I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K237,
  &Kmap_as_oneVKiMM13I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K235,
  &Kmap_as_oneVKiMM12I
};

_KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM11 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K233,
  &Kmap_as_oneVKiMM11I
};

_KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM10 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K231,
  &Kmap_as_oneVKiMM10I
};

_KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM9 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K229,
  &Kmap_as_oneVKiMM9I
};

_KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM8 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K227,
  &Kmap_as_oneVKiMM8I
};

_KLsimple_methodGVKe KaddXVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K192,
  &KaddXVKdMM8I
};

_KLkeyword_methodGVKe KremoveXVKdMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K212,
  &key_mep_5,
  &KremoveXVKdMM8I,
  &K194
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_4,
  &KremoveXVKdMM8
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K210,
  &Kbackward_iteration_protocolVKdMM16I
};

_KLsimple_methodGVKe Kelement_setterVKdMM27 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K201,
  &Kelement_setterVKdMM27I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_2,
  &Kelement_setterVKdMM27
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM27 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K201,
  &Kelement_no_bounds_check_setterVKeMM27I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kelement_no_bounds_check_setterVKeMM27
};

_KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_0,
  &Kcopy_sequenceVKdMM5
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K197,
  &key_mep_4,
  &Kcopy_sequenceVKdMM5I,
  &K198
};

_KLsimple_methodGVKe KreverseVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K196,
  &KreverseVKdMM3I
};

_KLkeyword_methodGVKe KremoveVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K193,
  &key_mep_5,
  &KremoveVKdMM7I,
  &K194
};

_KLsimple_methodGVKe KaddVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K192,
  &KaddVKdMM4I
};

_KLsimple_methodGVKe Kconcatenate_as_twoVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K179,
  &Kconcatenate_as_twoVKiMM2I
};

_KLsimple_methodGVKe KreverseXVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K178,
  &KreverseXVKdMM3I
};

_KLmethod_domainGVKe KreverseXVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreverseXVKdRD_dylanRD_3,
  &KreverseXVKdMM3
};

_KLsimple_methodGVKe Ktrusted_size_setterVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K176,
  &Ktrusted_size_setterVKiMM5I
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_5,
  &KmakeVKdMM40
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_3,
  &KasVKdMM68
};

_KLkeyword_methodGVKe KlimitedVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K167,
  &key_mep_3,
  &KlimitedVKdMM1I,
  &K168
};

_KLkeyword_methodGVKe KinitializeVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K162,
  &key_mep_4,
  &KinitializeVKdMM6I,
  &K163
};

_KLkeyword_methodGVKe KmakeVKdMM40 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K114,
  &key_mep_4,
  &KmakeVKdMM40I,
  &K115
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_4,
  (D) 5,
  &K100
};

_KLsimple_methodGVKe KasVKdMM67 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K108,
  &KasVKdMM67I
};

_KLsimple_methodGVKe KasVKdMM68 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K105,
  &KasVKdMM68I
};

_KLsimple_methodGVKe KasVKdMM69 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K103,
  &KasVKdMM69I
};

_KLsimple_methodGVKe KasVKdMM70 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K101,
  &KasVKdMM70I
};

_KLsimple_methodGVKe KasVKdMM71 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K98,
  &KasVKdMM71I
};

_KLsimple_methodGVKe KasVKdMM72 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K95,
  &KasVKdMM72I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KasVKdMM72
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_0,
  &KasVKdMM71
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_1,
  &KasVKdMM70
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_2,
  &KasVKdMM69
};

static _KLsignatureAvaluesGVKi K95 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K96,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K97,
  &KLobject_dequeGVKe
};

static _KLsingletonGVKd K97 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K98 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K99,
  &KDsignature_Lobject_dequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K100,
  &KLobject_dequeGVKe
};

static _KLsingletonGVKd K100 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobject_dequeGVKe
};

static _KLsignatureAvaluesGVKi K101 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K102,
  &KDsignature_Lobject_dequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K100,
  &KLarrayGVKd
};

static _KLsignatureAvaluesGVKi K103 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K104,
  &KDsignature_Lobject_dequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K100,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K105 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K106,
  &KDsignature_LdequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K107,
  &KLdequeGVKd
};

static _KLsingletonGVKd K107 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdequeGVKd
};

static _KLsignatureAvaluesGVKi K108 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K109,
  &KDsignature_LdequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K107,
  &KLcollectionGVKd
};

_KLkeyword_methodGVKe KLobject_dequeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K111,
  &key_mep_2,
  &KLobject_dequeGZ32ZconstructorVKiMM0I,
  &K112
};

static _KLkeyword_signatureAvaluesGVKi K111 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K113,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lobject_dequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJelement_type_,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K113 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJelement_type_
};

static _KLkeyword_signatureAvaluesGVKi K114 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &K116,
  &K117,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lobject_dequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  &KPfalseVKi,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K116 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K107
};

static _KLsimple_object_vectorGVKd_2 K117 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJfill_
};

static _KLbyte_stringGVKd_15 K118 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLbyte_stringGVKd_34 K119 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "number >= 0 expected instead of %="
};

_KLclassGVKd KLisland_dequeGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K161,
  &K131,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLisland_dequeGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K131,
  (D) 4609,
  9,
  33554434,
  (D) 1
};

_KLsealed_generic_functionGVKe Klast_index_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K125,
  &K124,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Klast_index_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Klast_indexVKiHLisland_dequeG
};

static _KLpairGVKd K124 = {
  &KLpairGVKdW /* wrapper */,
  &Klast_index_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K125 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "last-index-setter"
};

_KLinstance_slot_descriptorGVKe Klast_indexVKiHLisland_dequeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLisland_dequeGVKi,
  &KPfalseVKi,
  &Klast_indexVKi,
  &Klast_index_setterVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Klast_indexVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K130,
  &K129,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Klast_indexVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Klast_indexVKiHLisland_dequeG
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &Klast_indexVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K130 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "last-index"
};

static _KLimplementation_classGVKe K131 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433741,
  &KLisland_dequeGVKi,
  &KLisland_dequeGVKiW,
  &Kisland_deque_elementVKiHLisland_dequeG,
  &K133,
  (D) 6881,
  &KLisland_dequeGZ32ZconstructorVKiMM0,
  &K136,
  &K137,
  (D) 45,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K138,
  &K138,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kisland_deque_elementVKiHLisland_dequeG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLisland_dequeGVKi,
  &KJfill_,
  &Kisland_deque_elementVKi,
  &Kisland_deque_element_setterVKi,
  &KLobjectGVKd,
  &KsizeVKdHLisland_dequeG
};

static _KLsimple_object_vectorGVKd_3 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kfirst_indexVKiHLisland_dequeG,
  &Klast_indexVKiHLisland_dequeG,
  &KsizeVKdHLisland_dequeG
};

_KLkeyword_methodGVKe KLisland_dequeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K148,
  &key_mep_2,
  &KLisland_dequeGZ32ZconstructorVKiMM0I,
  &K149
};

static _KLsimple_object_vectorGVKd_1 K136 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdequeGVKd
};

static _KLsimple_object_vectorGVKd_12 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_mutable_sequenceGVKe,
  &KLdequeGVKd,
  &KLisland_dequeGVKi
};

static _KLsimple_object_vectorGVKd_3 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kfirst_indexVKiHLisland_dequeG,
  &Klast_indexVKiHLisland_dequeG,
  &Kisland_deque_elementVKiHLisland_dequeG
};

_KLinstance_slot_descriptorGVKe Kfirst_indexVKiHLisland_dequeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLisland_dequeGVKi,
  &KPfalseVKi,
  &Kfirst_indexVKi,
  &Kfirst_index_setterVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kfirst_indexVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K147,
  &K146,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kfirst_index_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K144,
  &K143,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kfirst_index_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kfirst_indexVKiHLisland_dequeG
};

static _KLpairGVKd K143 = {
  &KLpairGVKdW /* wrapper */,
  &Kfirst_index_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K144 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "first-index-setter"
};

_KLgetter_methodGVKi Kfirst_indexVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfirst_indexVKiHLisland_dequeG
};

static _KLpairGVKd K146 = {
  &KLpairGVKdW /* wrapper */,
  &Kfirst_indexVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K147 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "first-index"
};

static _KLkeyword_signatureAvaluesGVKi K148 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K150,
  &KDsignature_LobjectG_typesVKi,
  &K151
};

static _KLsimple_object_vectorGVKd_2 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLisland_dequeGVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLisland_dequeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLisland_dequeGVKi,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kisland_deque_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K160,
  &K159,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kisland_deque_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K157,
  &K156,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kisland_deque_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kisland_deque_elementVKiHLisland_dequeG
};

static _KLpairGVKd K156 = {
  &KLpairGVKdW /* wrapper */,
  &Kisland_deque_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K157 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "island-deque-element-setter"
};

_KLrepeated_getter_methodGVKi Kisland_deque_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kisland_deque_elementVKiHLisland_dequeG
};

static _KLpairGVKd K159 = {
  &KLpairGVKdW /* wrapper */,
  &Kisland_deque_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K160 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "island-deque-element"
};

static _KLbyte_stringGVKd_14 K161 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<island-deque>"
};

static _KLkeyword_signatureGVKe K162 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 48496645,
  &KDsignature_Lobject_dequeG_typesVKi,
  &K117,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  (D) 1,
  &KJfill_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJconcrete_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K166
};

static _KLbyte_stringGVKd_14 K166 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concrete-class"
};

static _KLkeyword_signatureAvaluesGVKi K167 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K116,
  &K171,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K168 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJof_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJof_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K170
};

static _KLbyte_stringGVKd_2 K170 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "of"
};

static _KLsimple_object_vectorGVKd_1 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJof_
};

static _KLbyte_stringGVKd_18 K175 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "POP empty deque %="
};

static _KLsignatureAvaluesGVKi K176 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K177,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K177 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobject_dequeGVKe
};

static _KLsignatureAvaluesGVKi K178 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lobject_dequeG_typesVKi,
  &KDsignature_LdequeG_typesVKi
};

static _KLsignatureAvaluesGVKi K179 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K180,
  &KDsignature_LdequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K180 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K107,
  &KLsequenceGVKd,
  &KLsequenceGVKd
};

_KLincremental_generic_functionGVKe KpushVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K186,
  (D) 1,
  &K187,
  &K185,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KpushVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KpushVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K190,
  &KpushVKdMM0I
};

_KLmethod_domainGVKe KpushVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KpushVKdMM0
};

static _KLpairGVKd K185 = {
  &KLpairGVKdW /* wrapper */,
  &KpushVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K186 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K188
};

static _KLbyte_stringGVKd_4 K187 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "push"
};

static _KLsimple_object_vectorGVKd_2 K188 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdequeGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K190 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K191
};

static _KLsimple_object_vectorGVKd_2 K191 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_dequeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K192 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K188,
  &KDsignature_LdequeG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K193 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K188,
  &K195,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LdequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K194 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsignatureAvaluesGVKi K196 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LdequeG_typesVKi,
  &KDsignature_LdequeG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K197 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &KDsignature_Lobject_dequeG_typesVKi,
  &K199,
  &K200,
  &KDsignature_LdequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K199 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K201 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K202
};

static _KLsimple_object_vectorGVKd_3 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobject_dequeGVKe,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kobject_deque_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K208,
  &Kobject_deque_current_elementVKiI
};

_KLsimple_methodGVKe Kobject_deque_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K207,
  &Kobject_deque_current_element_setterVKiI
};

static _KLsignatureGVKe K207 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K202
};

static _KLsignatureGVKe K208 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K209
};

static _KLsimple_object_vectorGVKd_2 K209 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_dequeGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K210 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_Lobject_dequeG_typesVKi,
  &K211
};

static _KLsimple_object_vectorGVKd_8 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K212 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K191,
  &K195,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LdequeG_typesVKi
};

_KLinstance_slot_descriptorGVKe KrepresentationVKiHLobject_dequeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF224,
  &KLobject_dequeGVKe,
  &KPfalseVKi,
  &KrepresentationVKi,
  &Krepresentation_setterVKi,
  &KLisland_dequeGVKi
};

static _KLlambdaGVKe Kslot_initializerF224 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K225,
  &Kslot_initializerF224I
};

_KLsealed_generic_functionGVKe KrepresentationVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K223,
  &K222,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krepresentation_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K220,
  &K219,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Krepresentation_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KrepresentationVKiHLobject_dequeG
};

static _KLpairGVKd K219 = {
  &KLpairGVKdW /* wrapper */,
  &Krepresentation_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K220 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "representation-setter"
};

_KLgetter_methodGVKi KrepresentationVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KrepresentationVKiHLobject_dequeG
};

static _KLpairGVKd K222 = {
  &KLpairGVKdW /* wrapper */,
  &KrepresentationVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K223 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "representation"
};

static _KLsignatureGVKe K225 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_33 K226 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Cannot map over an infinite range"
};

static _KLsignatureAvaluesGVKi K227 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K228,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K107,
  &KLfunctionGVKd,
  &KLinfinite_rangeGVKi
};

static _KLsignatureAvaluesGVKi K229 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K230,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K230 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K100,
  &KLfunctionGVKd,
  &KLinfinite_rangeGVKi
};

static _KLsignatureAvaluesGVKi K231 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K232,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K232 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K107,
  &KLfunctionGVKd,
  &KLexplicit_key_collectionGVKd
};

static _KLsignatureAvaluesGVKi K233 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K234,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K234 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K100,
  &KLfunctionGVKd,
  &KLexplicit_key_collectionGVKd
};

static _KLsignatureAvaluesGVKi K235 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K236,
  &KDsignature_LdequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K236 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K107,
  &KLfunctionGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K237 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K238,
  &KDsignature_LdequeG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K238 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K100,
  &KLfunctionGVKd,
  &KLsequenceGVKd
};

_KLsimple_methodGVKe Kobject_deque_current_keyVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K208,
  &Kobject_deque_current_keyVKiI
};

static _KLkeyword_signatureGVKe K241 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K209,
  &K243,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K242 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_1 K243 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsignatureAvaluesGVKi K244 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lobject_dequeG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K245 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lobject_dequeG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K246 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lobject_dequeG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLimplementation_classGVKe K247 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLdequeGVKd,
  &KLdequeGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6865,
  &Kdefault_class_constructorVKi,
  &K248,
  &K249,
  (D) 41,
  &K250,
  &K251,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K278,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K248 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_mutable_sequenceGVKe
};

static _KLsimple_object_vectorGVKd_11 K249 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_mutable_sequenceGVKe,
  &KLdequeGVKd
};

static _KLsimple_object_vectorGVKd_1 K250 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 45
};

static _KLsimple_object_vectorGVKd_1 K251 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_collectionGVKe
};

static _KLbyte_stringGVKd_7 K252 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "<deque>"
};

static _KLimplementation_classGVKe K253 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &KLobject_dequeGVKe,
  &KLobject_dequeGVKeW,
  &KPfalseVKi,
  &K254,
  (D) 6873,
  &KLobject_dequeGZ32ZconstructorVKiMM0,
  &K255,
  &K256,
  (D) 49,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K257,
  &K254,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K254 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kelement_typeVKeHLlimited_collectionG,
  &KrepresentationVKiHLobject_dequeG
};

static _KLsimple_object_vectorGVKd_2 K255 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdequeGVKd,
  &KLlimited_collectionGVKe
};

static _KLsimple_object_vectorGVKd_13 K256 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 53,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLlimited_collectionGVKe,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_mutable_sequenceGVKe,
  &KLdequeGVKd,
  &KLobject_dequeGVKe
};

static _KLsimple_object_vectorGVKd_1 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KrepresentationVKiHLobject_dequeG
};

static _KLbyte_stringGVKd_14 K258 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<object-deque>"
};

_KLincremental_generic_functionGVKe Kpush_lastVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K186,
  &KPfalseVKi,
  &K263,
  &K262,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kpush_lastVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kpush_lastVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K264,
  &Kpush_lastVKdMM0I
};

_KLmethod_domainGVKe Kpush_lastVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kpush_lastVKdMM0
};

static _KLpairGVKd K262 = {
  &KLpairGVKdW /* wrapper */,
  &Kpush_lastVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K263 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "push-last"
};

static _KLsignatureAvaluesGVKi K264 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K191,
  &KDsignature_LdequeG_typesVKi
};

_KLincremental_generic_functionGVKe Kpop_lastVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K269,
  &KPfalseVKi,
  &K270,
  &K268,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kpop_lastVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kpop_lastVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K271,
  &Kpop_lastVKdMM0I
};

_KLmethod_domainGVKe Kpop_lastVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kpop_lastVKdMM0
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &Kpop_lastVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K269 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LdequeG_typesVKi
};

static _KLbyte_stringGVKd_8 K270 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "pop-last"
};

static _KLsignatureGVKe K271 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_Lobject_dequeG_typesVKi
};

_KLincremental_generic_functionGVKe KpopVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K269,
  &KPfalseVKi,
  &K277,
  &K276,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KpopVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KpopVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K271,
  &KpopVKdMM0I
};

_KLmethod_domainGVKe KpopVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KpopVKdMM0
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &KpopVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K277 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "pop"
};

static _KLpairGVKd K278 = {
  &KLpairGVKdW /* wrapper */,
  &KLisland_dequeGVKi,
  &K279
};

static _KLpairGVKd K279 = {
  &KLpairGVKdW /* wrapper */,
  &KLobject_dequeGVKe,
  &KPempty_listVKi
};

/* Code */

D KemptyQVKdMM14I (D collection_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:262
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:263
  T2 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:264
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:264
  T4 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:264
  T5 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:264
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:264
  T7 = primitive_machine_word_less_thanQ(T5,T6);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:264
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:262
  MV_SET_COUNT(1);
  return(T8_0);
}

D Ksize_setterVKdMM5I (D new_size_, D collection_) {
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T8;
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
  D T20;
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22;
  DWORD iF23T, iF23;
  DWORD iF24T, iF24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  D T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  DWORD T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D rep_;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D rep_last_index_;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  DWORD T61;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:245
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
  T8 = primitive_cast_integer_as_raw(new_size_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
    T6.vector_element_[0] = new_size_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
    T4 = KlistVKdI(&T6);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
    T7.vector_element_[0] = &KJformat_string_;
    T7.vector_element_[1] = &K119;
    T7.vector_element_[2] = &KJformat_arguments_;
    T7.vector_element_[3] = T4;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T7);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
    KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T10 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T11 = SLOT_VALUE_INITD(T10, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T12 = SLOT_VALUE_INITD(T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T16 = primitive_machine_word_subtract_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:249
  T17 = primitive_machine_word_add_signal_overflow(T16,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:250
  T18 = primitive_machine_word_less_thanQ(T17,T8);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:250
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:252
    T19 = SLOT_VALUE_INITD(collection_, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:252
    T22 = primitive_instanceQ(&KPfalseVKi,T19);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:252
    if (T22 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:252
      T21.vector_element_[0] = &KJvalue_;
      T21.vector_element_[1] = &KPfalseVKi;
      T21.vector_element_[2] = &KJtype_;
      T21.vector_element_[3] = T19;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:252
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T20 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T21);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:252
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T20, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:252
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:250
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T25 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T26 = SLOT_VALUE_INITD(T25, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T27 = SLOT_VALUE_INITD(T25, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T28 = primitive_cast_integer_as_raw(T26);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T29 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T30 = primitive_machine_word_logxor(T29,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T31 = primitive_machine_word_subtract_signal_overflow(T28,T30);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T32 = primitive_machine_word_add_signal_overflow(T31,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T33 = primitive_machine_word_logxor(T32,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T34 = primitive_machine_word_subtract_signal_overflow(T8,T33);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T35 = primitive_machine_word_less_thanQ(T34,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
    T36 = primitive_machine_word_logxor(T34,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
    T37 = primitive_machine_word_negative_signal_overflow(T36);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
    T38 = primitive_machine_word_logior(T37,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
    iF23T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
      iF23 = iF23T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
      T39 = primitive_machine_word_less_thanQ(iF23,T38);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        Kpop_lastVKdMM0I(collection_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        T40 = primitive_machine_word_add_signal_overflow(iF23,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        iF23T = T40;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
    T41 = primitive_machine_word_less_thanQ(1,T34);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
    if (T41 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
      iF24T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        iF24 = iF24T;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        T42 = primitive_machine_word_less_thanQ(iF24,T34);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        if (T42 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T57 = SLOT_VALUE_INITD(collection_, 1);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          rep_ = T57;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T52 = rep_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T60 = SLOT_VALUE_INITD(T52, 1);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          rep_last_index_ = T60;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
            T50 = rep_;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T43 = CONGRUENT_CALL1(T50);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T44 = CONGRUENT_CALL2(T43, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
            T56 = rep_last_index_;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T45 = CONGRUENT_CALL2(T56, T44);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
            if (T45 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
              Kmake_room_at_lastXVKiMM0I(collection_);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
              T58 = SLOT_VALUE_INITD(collection_, 1);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
              rep_ = T58;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
              T51 = rep_;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
              T59 = SLOT_VALUE_INITD(T51, 1);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
              rep_last_index_ = T59;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T55 = rep_last_index_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T46 = CONGRUENT_CALL2(T55, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          rep_last_index_ = T46;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T49 = rep_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          CALL2(&Klast_index_setterVKi, T46, T49);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T48 = rep_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T54 = rep_last_index_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          CALL3(&Kisland_deque_element_setterVKi, &KPfalseVKi, T48, T54);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          T61 = primitive_machine_word_add_signal_overflow(iF24,4);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
          iF24T = T61;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:254
  T3_0 = new_size_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:245
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsizeVKdMM33I (D collection_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:217
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:218
  T2 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T4 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T5 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T7 = primitive_machine_word_logxor(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T8 = primitive_machine_word_subtract_signal_overflow(T5,T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T9 = primitive_machine_word_add_signal_overflow(T8,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:219
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:217
  MV_SET_COUNT(1);
  return(T11_0);
}

D Ktype_for_copyVKdMM19I (D x_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:137
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:139
  T5 = SLOT_VALUE_INITD(x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:140
  T6 = primitive_idQ(T5,&KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:140
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:141
    T2_0 = Kobject_classVKdI(x_);
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:143
    T3_0 = Klimited_dequeVKiMM0I(T5);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:140
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:137
  MV_SET_COUNT(1);
  return(T4_0);
}

D KelementVKdMM27I (D collection_, D index_, D Urest_, D default_) {
  D T5;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
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
  D T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_4 T23 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:272
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:275
  T10 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:276
  T11 = SLOT_VALUE_INITD(T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:277
  T12 = SLOT_VALUE_INITD(T10, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:278
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:278
  T14 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:278
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:278
  T16 = primitive_machine_word_subtract_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:279
  T17 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:279
  T18 = primitive_machine_word_less_thanQ(T17,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:279
  if (T18 != &KPfalseVKi) {
    T5 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:279
    T19 = primitive_machine_word_less_thanQ(T16,T17);
    T5 = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:279
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:279
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:280
    T20 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:280
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:281
      T6_0 = Kelement_range_errorVKeI(collection_, index_);
      T8_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:283
      T21 = SLOT_VALUE_INITD(collection_, 0);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:283
      T24 = primitive_instanceQ(default_,T21);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:283
      if (T24 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:283
        T23.vector_element_[0] = &KJvalue_;
        T23.vector_element_[1] = default_;
        T23.vector_element_[2] = &KJtype_;
        T23.vector_element_[3] = T21;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:283
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T22 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T23);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:283
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T22, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:283
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:284
      T7_0 = default_;
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:280
    T9_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:290
    T25 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:290
    T26 = primitive_machine_word_logxor(T25,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:290
    T27 = primitive_machine_word_add_signal_overflow(T17,T26);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:290
    T28 = REPEATED_D_SLOT_VALUE_TAGGED(T10, 3, T27);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:290
    T29_0 = T28;
    T9_0 = T29_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:279
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:272
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kelement_no_bounds_checkVKeMM25I (D collection_, D index_, D Urest_, D default_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:302
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:305
  T5_0 = KelementVKdMM27I(collection_, index_, &KPempty_vectorVKi, default_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:302
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kforward_iteration_protocolVKdMM26I (D deque_) {
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;
  D T9_1;
  D T9_2;
  D T9_3;
  D T9_4;
  D T9_5;
  D T9_6;
  D T9_7;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:587
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:593
  T2 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:593
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:594
  T4 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:594
  T5 = SLOT_VALUE_INITD(T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:594
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:594
  T7 = primitive_machine_word_add_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:594
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:593
  T9_0 = T3;
  T9_1 = T8;
  T9_2 = &Ksequence_next_stateVKe;
  T9_3 = &Ksequence_finished_stateQVKe;
  T9_4 = &Kobject_deque_current_keyVKi;
  T9_5 = &Kobject_deque_current_elementVKi;
  T9_6 = &Kobject_deque_current_element_setterVKi;
  T9_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:587
  MV_SET_ELT(1, T9_1);
  MV_SET_ELT(2, T9_2);
  MV_SET_ELT(3, T9_3);
  MV_SET_ELT(4, T9_4);
  MV_SET_ELT(5, T9_5);
  MV_SET_ELT(6, T9_6);
  MV_SET_ELT(7, T9_7);
  MV_SET_COUNT(8);
  return(T9_0);
}

D Kmap_as_oneVKiMM13I (D type_, D function_, D collection_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D result_;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:728
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:731
  T17_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:731
  result_ = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  T10T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
    T10 = T10T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
    T11 = CALL3(T8, collection_, T10, T6);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
      T12 = CALL2(T9, collection_, T10);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
      T13 = CALL1(function_, T12);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
      Kpush_lastVKdMM0I(result_, T13);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
      T14 = CALL2(T7, collection_, T10);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
      T10T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:732
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:733
  T15_0 = result_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:728
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kmap_as_oneVKiMM12I (D type_, D function_, D collection_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D result_;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:719
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:722
  T17_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:722
  result_ = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  T10T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
    T10 = T10T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
    T11 = CALL3(T8, collection_, T10, T6);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
      T12 = CALL2(T9, collection_, T10);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
      T13 = CALL1(function_, T12);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
      Kpush_lastVKdMM0I(result_, T13);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
      T14 = CALL2(T7, collection_, T10);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
      T10T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:723
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:724
  T15_0 = result_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:719
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kmap_as_oneVKiMM11I (D type_, D function_, D collection_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D result_;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:694
  T17_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  result_ = T17_0;
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  T5 = T4;
  T6 = MV_GET_ELT(1);
;
  T7 = MV_GET_ELT(2);
;
  T8 = MV_GET_ELT(3);
;
  T9 = MV_GET_ELT(5);
;
  T10T = T5;
L0: ;
    T10 = T10T;
    T11 = CALL3(T8, collection_, T10, T6);
    if (T11 == &KPfalseVKi) {
      T12 = CALL2(T9, collection_, T10);
      T13 = CALL1(function_, T12);
      Kpush_lastVKdMM0I(result_, T13);
      T14 = CALL2(T7, collection_, T10);
      T10T = T14;
      goto L0;
    }
  T15_0 = result_;
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kmap_as_oneVKiMM10I (D type_, D function_, D collection_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D result_;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:689
  T17_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  result_ = T17_0;
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  T5 = T4;
  T6 = MV_GET_ELT(1);
;
  T7 = MV_GET_ELT(2);
;
  T8 = MV_GET_ELT(3);
;
  T9 = MV_GET_ELT(5);
;
  T10T = T5;
L0: ;
    T10 = T10T;
    T11 = CALL3(T8, collection_, T10, T6);
    if (T11 == &KPfalseVKi) {
      T12 = CALL2(T9, collection_, T10);
      T13 = CALL1(function_, T12);
      Kpush_lastVKdMM0I(result_, T13);
      T14 = CALL2(T7, collection_, T10);
      T10T = T14;
      goto L0;
    }
  T15_0 = result_;
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kmap_as_oneVKiMM9I (D type_, D function_, D collection_) {
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:684
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K226;
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T5);
  T6_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmap_as_oneVKiMM8I (D type_, D function_, D collection_) {
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:680
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K226;
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T5);
  T6_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLobject_dequeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_) {
  D T4;
  D Uunique_element_typeF5;
  D T6_0;
  D T7_0;
  D T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:110
  T4 = primitive_object_allocate_filled(3,&KLobject_dequeGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_element_typeF5 = Uunique_element_type_;
  SLOT_VALUE_SETTER(Uunique_element_typeF5, T4, 0);
  T8 = SLOT_VALUE_INITD(&KrepresentationVKiHLobject_dequeG, 0);
  T9 = primitive_cast_integer_as_raw(T8);
  T10 = primitive_machine_word_logbitQ(4,T9);
  if (T10 != &KPfalseVKi) {
    T11 = SLOT_VALUE_INITD(&KrepresentationVKiHLobject_dequeG, 1);
    T13 = T11;
  } else {
    T7_0 = Kinstall_and_return_make_method_init_dataVKiI(&KrepresentationVKiHLobject_dequeG);
    T12 = T7_0;
    T13 = T12;
  }
  SLOT_VALUE_SETTER(T13, T4, 1);
  APPLY2(&KinitializeVKd, T4, init_args_);
  T6_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:110
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kpush_lastVKdMM0I (D deque_, D new_element_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D rep_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D rep_last_index_;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:535
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:537
  T3 = SLOT_VALUE_INITD(deque_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:537
  T6 = primitive_instanceQ(new_element_,T3);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:537
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:537
    T5.vector_element_[0] = &KJvalue_;
    T5.vector_element_[1] = new_element_;
    T5.vector_element_[2] = &KJtype_;
    T5.vector_element_[3] = T3;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:537
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T5);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:537
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T4, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:537
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T22 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  rep_ = T22;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T17 = rep_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T25 = SLOT_VALUE_INITD(T17, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  rep_last_index_ = T25;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
    T15 = rep_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(T15);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T8 = CONGRUENT_CALL2(T7, (D) 5);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
    T21 = rep_last_index_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T9 = CONGRUENT_CALL2(T21, T8);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
      Kmake_room_at_lastXVKiMM0I(deque_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
      T23 = SLOT_VALUE_INITD(deque_, 1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
      rep_ = T23;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
      T16 = rep_;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
      T24 = SLOT_VALUE_INITD(T16, 1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
      rep_last_index_ = T24;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T20 = rep_last_index_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T10 = CONGRUENT_CALL2(T20, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  rep_last_index_ = T10;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T14 = rep_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  CALL2(&Klast_index_setterVKi, T10, T14);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T13 = rep_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T19 = rep_last_index_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  CALL3(&Kisland_deque_element_setterVKi, new_element_, T13, T19);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:538
  T11_0 = deque_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:535
  MV_SET_COUNT(1);
  return(T11_0);
}

D KaddXVKdMM8I (D deque_, D new_element_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:68
  CONGRUENT_CALL_PROLOG(&KpushVKd, 2);
  CONGRUENT_CALL2(deque_, new_element_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:69
  T3_0 = deque_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:67
  MV_SET_COUNT(1);
  return(T3_0);
}

D KremoveXVKdMM8I (D deque_, D target_, D Urest_, D test_, D count_) {
  D T6;
  D countF7;
  D T8_0;
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
  D T20;
  D T21;
  DWORD i_T, i_;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  D countF36;
  D T37;
  DWORD src_indexF38;
  DWORD dst_indexF39;
  DWORD T40;
  DWORD T41;
  D countF42T, countF42;
  DWORD src_indexF43T, src_indexF43;
  DWORD dst_indexF44T, dst_indexF44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:356
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:356
  T9 = primitive_idQ(count_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:356
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T10 = SLOT_VALUE_INITD(deque_, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T11 = SLOT_VALUE_INITD(T10, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T12 = SLOT_VALUE_INITD(T10, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T13 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T14 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T15 = primitive_machine_word_logxor(T14,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T16 = primitive_machine_word_subtract_signal_overflow(T13,T15);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T17 = primitive_machine_word_add_signal_overflow(T16,4);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:358
    T18 = primitive_cast_raw_as_integer(T17);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:356
    T6 = T18;
    countF7 = T6;
  } else {
    countF7 = count_;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:356
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:359
  T19 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:360
  T20 = SLOT_VALUE_INITD(T19, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:361
  T21 = SLOT_VALUE_INITD(T19, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:365
  T45 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:365
  T47 = primitive_cast_integer_as_raw(T20);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
  T48 = primitive_cast_integer_as_raw(T20);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
  countF42T = countF7;
  src_indexF43T = T47;
  dst_indexF44T = T48;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:377
    countF42 = countF42T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:377
    src_indexF43 = src_indexF43T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:377
    dst_indexF44 = dst_indexF44T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
    countF36 = countF42;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
    T37 = countF36;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
    src_indexF38 = src_indexF43;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
    dst_indexF39 = dst_indexF44;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:365
    T46 = primitive_machine_word_less_thanQ(T45,src_indexF38);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:365
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
      i_T = dst_indexF39;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
        i_ = i_T;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
        T26 = primitive_machine_word_less_thanQ(i_,src_indexF38);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
        if (T26 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:367
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T19, 3, i_);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
          T27 = primitive_machine_word_add_signal_overflow(i_,4);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
          i_T = T27;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:366
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:369
      T28 = primitive_machine_word_subtract_signal_overflow(dst_indexF39,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:369
      T29 = primitive_cast_raw_as_integer(T28);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:369
      SLOT_VALUE_SETTER(T29, T19, 1);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:371
      T49 = REPEATED_D_SLOT_VALUE_TAGGED(T19, 3, src_indexF38);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:373
      T30 = primitive_cast_integer_as_raw(T37);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:373
      T31 = primitive_machine_word_less_thanQ(1,T30);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:373
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:373
        T23 = test_;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:373
        T24 = CALL2(T23, T49, target_);
        T25 = T24;
      } else {
        T25 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:373
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:372
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
        T32 = primitive_cast_integer_as_raw(T37);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
        T33 = primitive_machine_word_subtract_signal_overflow(T32,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
        T34 = primitive_cast_raw_as_integer(T33);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
        T35 = primitive_machine_word_add_signal_overflow(src_indexF38,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
        countF42T = T34;
        src_indexF43T = T35;
        dst_indexF44T = dst_indexF44;
        goto L0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:376
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T49, T19, 3, dst_indexF39);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:377
        T40 = primitive_machine_word_add_signal_overflow(src_indexF38,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:377
        T41 = primitive_machine_word_add_signal_overflow(dst_indexF39,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:377
        countF42T = T37;
        src_indexF43T = T40;
        dst_indexF44T = T41;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:372
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:365
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:374
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:381
  T8_0 = deque_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:356
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kbackward_iteration_protocolVKdMM16I (D deque_) {
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T9_1;
  D T9_2;
  D T9_3;
  D T9_4;
  D T9_5;
  D T9_6;
  D T9_7;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:603
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:609
  T2 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:609
  T3 = SLOT_VALUE_INITD(T2, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:609
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:609
  T5 = primitive_machine_word_add_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:609
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:610
  T7 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:610
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:609
  T9_0 = T6;
  T9_1 = T8;
  T9_2 = &Ksequence_previous_stateVKe;
  T9_3 = &Ksequence_finished_stateQVKe;
  T9_4 = &Ksequence_current_keyVKe;
  T9_5 = &Kobject_deque_current_elementVKi;
  T9_6 = &Kobject_deque_current_element_setterVKi;
  T9_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:603
  MV_SET_ELT(1, T9_1);
  MV_SET_ELT(2, T9_2);
  MV_SET_ELT(3, T9_3);
  MV_SET_ELT(4, T9_4);
  MV_SET_ELT(5, T9_5);
  MV_SET_ELT(6, T9_6);
  MV_SET_ELT(7, T9_7);
  MV_SET_COUNT(8);
  return(T9_0);
}

D Kelement_setterVKdMM27I (D new_value_, D collection_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  DWORD T30;
  DWORD iF31T, iF31;
  DWORD iF32T, iF32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  D T47;
  DWORD T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D rep_;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D rep_last_index_;
  D T62;
  D T63;
  D T64;
  D T65;
  D T66;
  D T67;
  D T68;
  DWORD T69;
  DWORD T70;
  D T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:313
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:316
  T7 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:316
  T10 = primitive_instanceQ(new_value_,T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:316
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:316
    T9.vector_element_[0] = &KJvalue_;
    T9.vector_element_[1] = new_value_;
    T9.vector_element_[2] = &KJtype_;
    T9.vector_element_[3] = T7;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:316
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T9);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:316
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T8, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:316
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:317
  T11 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:318
  T12 = SLOT_VALUE_INITD(T11, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:319
  T13 = SLOT_VALUE_INITD(T11, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:320
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:320
  T15 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:320
  T16 = primitive_machine_word_logxor(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:320
  T17 = primitive_machine_word_subtract_signal_overflow(T14,T16);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:321
  T18 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:321
  T19 = primitive_machine_word_less_thanQ(T18,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:321
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:321
    Kelement_range_errorVKeI(collection_, index_);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:321
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:322
  T20 = primitive_machine_word_less_thanQ(T17,T18);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:322
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T21 = SLOT_VALUE_INITD(collection_, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T22 = SLOT_VALUE_INITD(T21, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T23 = SLOT_VALUE_INITD(T21, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T24 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T25 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T26 = primitive_machine_word_logxor(T25,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T27 = primitive_machine_word_subtract_signal_overflow(T24,T26);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T28 = primitive_machine_word_add_signal_overflow(T27,4);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    T29 = primitive_machine_word_equalQ(T28,T18);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    if (T29 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T30 = primitive_machine_word_add_signal_overflow(T18,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T33 = SLOT_VALUE_INITD(collection_, 1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T34 = SLOT_VALUE_INITD(T33, 1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T35 = SLOT_VALUE_INITD(T33, 0);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T36 = primitive_cast_integer_as_raw(T34);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T37 = primitive_cast_integer_as_raw(T35);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T38 = primitive_machine_word_logxor(T37,1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T39 = primitive_machine_word_subtract_signal_overflow(T36,T38);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T40 = primitive_machine_word_add_signal_overflow(T39,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T41 = primitive_machine_word_logxor(T40,1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T42 = primitive_machine_word_subtract_signal_overflow(T30,T41);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      T43 = primitive_machine_word_less_thanQ(T42,1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      if (T43 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
        T44 = primitive_machine_word_logxor(T42,1);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
        T45 = primitive_machine_word_negative_signal_overflow(T44);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
        T46 = primitive_machine_word_logior(T45,1);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
        iF31T = 1;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
          iF31 = iF31T;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
          T47 = primitive_machine_word_less_thanQ(iF31,T46);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
          if (T47 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            Kpop_lastVKdMM0I(collection_);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            T48 = primitive_machine_word_add_signal_overflow(iF31,4);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            iF31T = T48;
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      } else {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
        T49 = primitive_machine_word_less_thanQ(1,T42);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
        if (T49 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
          iF32T = 1;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            iF32 = iF32T;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            T50 = primitive_machine_word_less_thanQ(iF32,T42);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            if (T50 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T65 = SLOT_VALUE_INITD(collection_, 1);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              rep_ = T65;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T60 = rep_;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T68 = SLOT_VALUE_INITD(T60, 1);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              rep_last_index_ = T68;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            L2: ;
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                T58 = rep_;
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
                T51 = CONGRUENT_CALL1(T58);
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                CONGRUENT_CALL_PROLOG(&K_VKd, 2);
                T52 = CONGRUENT_CALL2(T51, (D) 5);
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                T64 = rep_last_index_;
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                CONGRUENT_CALL_PROLOG(&KEVKd, 2);
                T53 = CONGRUENT_CALL2(T64, T52);
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                if (T53 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                  Kmake_room_at_lastXVKiMM0I(collection_);
                  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                  T66 = SLOT_VALUE_INITD(collection_, 1);
                  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                  rep_ = T66;
                  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                  T59 = rep_;
                  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                  T67 = SLOT_VALUE_INITD(T59, 1);
                  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                  rep_last_index_ = T67;
                  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                  goto L2;
                }
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
                // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T63 = rep_last_index_;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              CONGRUENT_CALL_PROLOG(&KAVKd, 2);
              T54 = CONGRUENT_CALL2(T63, (D) 5);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              rep_last_index_ = T54;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T57 = rep_;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              CALL2(&Klast_index_setterVKi, T54, T57);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T56 = rep_;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T62 = rep_last_index_;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              CALL3(&Kisland_deque_element_setterVKi, &KPfalseVKi, T56, T62);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              T69 = primitive_machine_word_add_signal_overflow(iF32,4);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
              iF32T = T69;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
        }
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:324
    } else {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:326
      T70 = primitive_machine_word_add_signal_overflow(T18,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:326
      T71 = primitive_cast_raw_as_integer(T70);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:326
      Ksize_setterVKdMM5I(T71, collection_);
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:323
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:328
    Kelement_setterVKdMM27I(new_value_, collection_, index_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:328
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:333
    T72 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:333
    T73 = primitive_machine_word_logxor(T72,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:333
    T74 = primitive_machine_word_add_signal_overflow(T18,T73);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:333
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T11, 3, T74);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:333
    T5_0 = new_value_;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:322
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:313
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_check_setterVKeMM27I (D new_value_, D collection_, D index_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:348
  T4_0 = Kelement_setterVKdMM27I(new_value_, collection_, index_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:345
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kcopy_sequenceVKdMM5I (D source_, D Urest_, D first_, D last_) {
  D firstF5;
  D T6;
  DWORD from_T, from_;
  DWORD to_T, to_;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  D target_;
  D T30_0;
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T32;
  D T33;
  D T34;
  DWORD T35;
  D T36;
  DWORD T37;
  DWORD T38;
  D T39;
  DWORD T40;
  D T41;
  DWORD T42;
  DWORD T43;
  D T44_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:624
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:624
  primitive_type_check(first_, &KLintegerGVKd);
  firstF5 = first_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
  T13 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
  T14 = primitive_machine_word_equalQ(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
  T12 = primitive_not(T14);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
    T15 = primitive_idQ(last_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
    T16 = primitive_not(T15);
    T6 = T16;
  } else {
    T6 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
    MEP_CALL_PROLOG(&Kcopy_sequenceVKdMM0, &KPempty_listVKi, 2);
    T17 = MEP_CALL2(&Kcopy_sequenceVKdMM0, source_, Urest_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
    T18_0 = T17;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
    T44_0 = T18_0;
    T11_0 = T44_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:630
    T19 = SLOT_VALUE_INITD(source_, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:631
    T20 = SLOT_VALUE_INITD(T19, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:632
    T21 = SLOT_VALUE_INITD(T19, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:633
    T22 = primitive_cast_integer_as_raw(T21);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:633
    T23 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:633
    T24 = primitive_machine_word_logxor(T23,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:633
    T25 = primitive_machine_word_subtract_signal_overflow(T22,T24);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:633
    T26 = primitive_machine_word_add_signal_overflow(T25,4);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:633
    T27 = primitive_cast_raw_as_integer(T26);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:634
    T28 = SLOT_VALUE_INITD(source_, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:634
    T31.vector_element_[0] = &KJsize_;
    T31.vector_element_[1] = T27;
    T31.vector_element_[2] = &KJelement_type_;
    T31.vector_element_[3] = T28;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:634
    T30_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &T31, T28);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:634
    target_ = T30_0;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:635
    T32 = SLOT_VALUE_INITD(target_, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:637
    T33 = SLOT_VALUE_INITD(T32, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:637
    T34 = SLOT_VALUE_INITD(T32, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
    T38 = primitive_cast_integer_as_raw(T34);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
    T37 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
    T40 = primitive_cast_integer_as_raw(T33);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
    from_T = T37;
    to_T = T40;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      from_ = from_T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      to_ = to_T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      T35 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      T36 = primitive_machine_word_less_thanQ(T35,from_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      if (T36 != &KPfalseVKi) {
        T9 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
        T39 = primitive_machine_word_less_thanQ(T38,to_);
        T9 = T39;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      if (T9 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:638
        T41 = REPEATED_D_SLOT_VALUE_TAGGED(T19, 3, from_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:638
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T41, T32, 3, to_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
        T42 = primitive_machine_word_add_signal_overflow(from_,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
        T43 = primitive_machine_word_add_signal_overflow(to_,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
        from_T = T42;
        to_T = T43;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:636
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:640
    T10_0 = target_;
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:628
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:624
  MV_SET_COUNT(1);
  return(T11_0);
}

D KreverseVKdMM3I (D deque_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:100
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T2 = CONGRUENT_CALL2(deque_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:100
  CONGRUENT_CALL_PROLOG(&KreverseXVKd, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:99
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:99
  MV_SET_COUNT(1);
  return(T4_0);
}

D KremoveVKdMM7I (D deque_, D value_, D Urest_, D test_, D count_) {
  D T6;
  D T7;
  D countF8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:88
  T12 = primitive_idQ(count_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:88
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:89
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T6 = CONGRUENT_CALL1(deque_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:88
    T7 = T6;
    countF8 = T7;
  } else {
    countF8 = count_;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:91
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T9 = CONGRUENT_CALL2(deque_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:91
  T13.vector_element_[0] = &KJtest_;
  T13.vector_element_[1] = test_;
  T13.vector_element_[2] = &KJcount_;
  T13.vector_element_[3] = countF8;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:91
  CONGRUENT_CALL_PROLOG(&KremoveXVKd, 3);
  T10_0 = CONGRUENT_CALL3(T9, value_, &T13);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:88
  T11_0 = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:88
  MV_SET_COUNT(1);
  return(T11_0);
}

D KaddVKdMM4I (D deque_, D new_element_) {
  D new_;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:77
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:78
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  new_ = CONGRUENT_CALL2(deque_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:79
  CALL2(&KpushVKd, new_, new_element_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:80
  T4_0 = new_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:77
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:77
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kconcatenate_as_twoVKiMM2I (D type_, D first_seq_, D second_seq_) {
  D T4;
  D T5_0;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14T, T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24T, T24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T29_0;
  D T30_0;
  D d_;
  D T32_0;
  D T33_0;
  D T34_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:650
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:654
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T4 = CONGRUENT_CALL1(first_seq_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:653
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:655
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T5_0 = CONGRUENT_CALL2(&KLdequeGVKd, second_seq_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:655
    T33_0 = T5_0;
    T30_0 = T33_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:656
    CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
    T6 = CONGRUENT_CALL1(second_seq_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:653
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:657
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T7_0 = CONGRUENT_CALL2(&KLdequeGVKd, first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:657
      T34_0 = T7_0;
      T29_0 = T34_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:659
      T32_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:659
      d_ = T32_0;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T8 = CONGRUENT_CALL1(first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      T9 = T8;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      T10 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      T11 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      T12 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      T13 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      T14T = T9;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
        T14 = T14T;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
        T15 = CALL3(T12, first_seq_, T14, T10);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
        if (T15 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
          T16 = CALL2(T13, first_seq_, T14);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
          Kpush_lastVKdMM0I(d_, T16);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
          T17 = CALL2(T11, first_seq_, T14);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
          T14T = T17;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:660
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T18 = CONGRUENT_CALL1(second_seq_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      T19 = T18;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      T20 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      T21 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      T22 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      T23 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      T24T = T19;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
        T24 = T24T;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
        T25 = CALL3(T22, second_seq_, T24, T20);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
        if (T25 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
          T26 = CALL2(T23, second_seq_, T24);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
          Kpush_lastVKdMM0I(d_, T26);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
          T27 = CALL2(T21, second_seq_, T24);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
          T24T = T27;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:661
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:662
      T28_0 = d_;
      T29_0 = T28_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:653
    T30_0 = T29_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:653
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:650
  MV_SET_COUNT(1);
  return(T30_0);
}

D KreverseXVKdMM3I (D deque_) {
  DWORD i_T, i_;
  DWORD j_T, j_;
  D T4_0;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13_0;
  DWORD T13_1;
  DWORD quotient_;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;
  D T19;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:389
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:390
  T5 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:391
  T6 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:392
  T7 = SLOT_VALUE_INITD(T5, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T8 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T10 = primitive_machine_word_logxor(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T11 = primitive_machine_word_add_signal_overflow(T8,T10);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T12 = primitive_machine_word_shift_right(T11,2);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T13_0 = primitive_machine_word_ceilingS_byref(T12,2,(DWORD*)&T13_1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  quotient_ = T13_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T15 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:393
  T16 = primitive_machine_word_logior(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
  T18 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:397
  T21 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
  i_T = T18;
  j_T = T21;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
    j_ = j_T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
    T17 = primitive_machine_word_less_thanQ(i_,T16);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:396
      T19 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 3, i_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:397
      T20 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 3, j_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:397
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T20, T5, 3, i_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:398
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T19, T5, 3, j_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
      T22 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
      T23 = primitive_machine_word_add_signal_overflow(j_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
      i_T = T22;
      j_T = T23;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:394
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:400
  T4_0 = deque_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:389
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktrusted_size_setterVKiMM5I (D new_size_, D collection_) {
  DWORD iF3T, iF3;
  DWORD iF4T, iF4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D rep_;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D rep_last_index_;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T6 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T7 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T8 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T10 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T11 = primitive_machine_word_logxor(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T12 = primitive_machine_word_subtract_signal_overflow(T9,T11);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T13 = primitive_machine_word_add_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T14 = primitive_cast_integer_as_raw(new_size_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T15 = primitive_machine_word_logxor(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:231
  T16 = primitive_machine_word_subtract_signal_overflow(T14,T15);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:233
  T17 = primitive_machine_word_less_thanQ(T16,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:232
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
    T18 = primitive_machine_word_logxor(T16,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
    T19 = primitive_machine_word_negative_signal_overflow(T18);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
    T20 = primitive_machine_word_logior(T19,1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
    iF3T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
      iF3 = iF3T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
      T21 = primitive_machine_word_less_thanQ(iF3,T20);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:235
        Kpop_lastVKdMM0I(collection_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
        T22 = primitive_machine_word_add_signal_overflow(iF3,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
        iF3T = T22;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:234
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:237
    T23 = primitive_machine_word_less_thanQ(1,T16);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:232
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
      iF4T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
        iF4 = iF4T;
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
        T24 = primitive_machine_word_less_thanQ(iF4,T16);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
        if (T24 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          T39 = SLOT_VALUE_INITD(collection_, 1);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          rep_ = T39;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          T34 = rep_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          T42 = SLOT_VALUE_INITD(T34, 1);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          rep_last_index_ = T42;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
            T32 = rep_;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T25 = CONGRUENT_CALL1(T32);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T26 = CONGRUENT_CALL2(T25, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
            T38 = rep_last_index_;
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T27 = CONGRUENT_CALL2(T38, T26);
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
            if (T27 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
              Kmake_room_at_lastXVKiMM0I(collection_);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
              T40 = SLOT_VALUE_INITD(collection_, 1);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
              rep_ = T40;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
              T33 = rep_;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
              T41 = SLOT_VALUE_INITD(T33, 1);
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
              rep_last_index_ = T41;
              // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
            // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          T37 = rep_last_index_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T28 = CONGRUENT_CALL2(T37, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          rep_last_index_ = T28;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          T31 = rep_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          CALL2(&Klast_index_setterVKi, T28, T31);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          T30 = rep_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          T36 = rep_last_index_;
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:239
          CALL3(&Kisland_deque_element_setterVKi, &KPfalseVKi, T30, T36);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
          T43 = primitive_machine_word_add_signal_overflow(iF4,4);
          // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
          iF4T = T43;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:238
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:232
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:232
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:242
  T5_0 = new_size_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:227
  MV_SET_COUNT(1);
  return(T5_0);
}

D KlimitedVKdMM1I (D class_, D Urest_, D of_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:132
  T4_0 = Klimited_dequeVKiMM0I(of_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:130
  MV_SET_COUNT(1);
  return(T4_0);
}

D KinitializeVKdMM6I (D deque_, D Urest_, D size_, D fill_) {
  D T5;
  D rep_;
  D rep_first_index_;
  D T8;
  D rep_last_index_;
  DWORD i_T, i_;
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
  _KLsimple_object_vectorGVKd_4 T23 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_1 T26 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T27 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T28_0;
  D T29;
  D T30;
  _KLsimple_object_vectorGVKd_4 T31 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T32;
  D T33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:166
  T14 = primitive_copy_vector(Urest_);
  T13 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:167
  T16 = primitive_idQ(T13,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:167
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:167
    KerrorVKdMM1I(&K118, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:167
    T17 = SLOT_VALUE_INITD(T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:167
    T18 = SLOT_VALUE_INITD(T13, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:167
    MEP_CALL_PROLOG(T17, T18, 2);
    MEP_CALL2(T17, deque_, T14);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  T24 = primitive_instanceQ(size_,&KLintegerGVKd);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  if (T24 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    T23.vector_element_[0] = &KJvalue_;
    T23.vector_element_[1] = size_;
    T23.vector_element_[2] = &KJtype_;
    T23.vector_element_[3] = &KLintegerGVKd;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T22 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T23);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T22, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T25 = CONGRUENT_CALL2(size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    T26.vector_element_[0] = size_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    T19 = KlistVKdI(&T26);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    T27.vector_element_[0] = &KJformat_string_;
    T27.vector_element_[1] = &K119;
    T27.vector_element_[2] = &KJformat_arguments_;
    T27.vector_element_[3] = T19;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T20 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T27);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
    KerrorVKdMM0I(T20, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  T21_0 = size_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:168
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:169
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  T5 = CONGRUENT_CALL2(size_, (D) 9);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:169
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T28_0 = CONGRUENT_CALL2((D) 17, T5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:169
  T29 = T28_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:169
  if (T29 != &KPfalseVKi) {
    T30 = T5;
  } else {
    T30 = (D) 17;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:169
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:170
  T31.vector_element_[0] = &KJsize_;
  T31.vector_element_[1] = T30;
  T31.vector_element_[2] = &KJfill_;
  T31.vector_element_[3] = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:170
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  rep_ = CONGRUENT_CALL2(&KLisland_dequeGVKi, &T31);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:171
  rep_first_index_ = CALL2(&KtruncateSVKd, T30, (D) 9);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:172
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T8 = CONGRUENT_CALL2(rep_first_index_, size_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:172
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  rep_last_index_ = CONGRUENT_CALL2(T8, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:173
  if (fill_ != &KPfalseVKi) {
    T15 = fill_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:175
    T32 = primitive_cast_integer_as_raw(rep_first_index_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
    i_T = T32;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:175
      T33 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T11 = CONGRUENT_CALL2(rep_last_index_, T33);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
      if (T11 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:175
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T15, rep_, 3, i_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
        T34 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
        i_T = T34;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:174
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:173
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:178
  SLOT_VALUE_SETTER(rep_first_index_, rep_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:179
  CALL2(&Klast_index_setterVKi, rep_last_index_, rep_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:180
  SLOT_VALUE_SETTER(rep_, deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:180
  T12 = rep_;
  MV_SET_ELT(0, rep_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:166
  return(T12);
}

D KmakeVKdMM40I (D class_, D all_keys_, D size_, D fill_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:44
  T5_0 = APPLY2(&KLobject_dequeGZ32ZconstructorVKiMM0, &KLobject_dequeGVKe, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:41
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM67I (D class_, D object_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:52
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:54
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLobject_dequeGVKe, object_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:52
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:52
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM68I (D class_, D deque_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:59
  T3_0 = deque_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:57
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM69I (D class_, D object_) {
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
  D T13_0;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:188
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:190
  T15_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:190
  T14 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
    T10 = CALL3(T7, object_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
      T11 = CALL2(T8, object_, T9);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:192
      Kpush_lastVKdMM0I(T14, T11);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
      T12 = CALL2(T6, object_, T9);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:191
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:194
  T13_0 = T14;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:188
  MV_SET_COUNT(1);
  return(T13_0);
}

D KasVKdMM70I (D class_, D object_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD i_T, i_;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17_0;
  _KLsimple_object_vectorGVKd_2 T18 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T19;
  D T20;
  DWORD T21;
  DWORD T22;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:197
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:199
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:199
  T18.vector_element_[0] = &KJsize_;
  T18.vector_element_[1] = T3;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:199
  T17_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &T18, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:199
  T16 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:200
  T19 = SLOT_VALUE_INITD(T16, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  T20 = SLOT_VALUE_INITD(T19, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:202
  T21 = primitive_cast_integer_as_raw(T20);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  i_T = T21;
  T11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
    T12 = CALL3(T8, object_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
      T13 = CALL2(T9, object_, T11);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:202
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T13, T19, 3, i_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
      T22 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
      T14 = CALL2(T7, object_, T11);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
      i_T = T22;
      T11T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:204
  T15_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:197
  MV_SET_COUNT(1);
  return(T15_0);
}

D KasVKdMM71I (D class_, D object_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:207
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:209
  T3_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:207
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM72I (D class_, D v_) {
  D result_T, result_;
  DWORD index_T, index_;
  D T5_0;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:669
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:671
  T6 = SLOT_VALUE_INITD(v_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:673
  T7 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:673
  T8 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
  T11 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
  result_T = &KPempty_listVKi;
  index_T = T11;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
    T10 = primitive_machine_word_less_thanQ(index_,T9);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
      T12 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 3, index_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
      T13 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
      SLOT_VALUE_SETTER(T12, T13, 0);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
      SLOT_VALUE_SETTER(result_, T13, 1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
      T14 = primitive_machine_word_add_signal_overflow(index_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
      result_T = T13;
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:675
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:672
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:669
  MV_SET_COUNT(1);
  return(T5_0);
}

D KLisland_dequeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:151
  T4 = Kallocate_instanceVKeI(&KLisland_dequeGVKi, init_args_);
  object_ = T4;
  SLOT_VALUE_SETTER((D) 1, object_, 0);
  SLOT_VALUE_SETTER((D) 1, object_, 1);
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 2);
  APPLY2(&KinitializeVKd, object_, init_args_);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:151
  MV_SET_COUNT(1);
  return(T7_0);
}

D Klimited_dequeVKiMM0I (D of_) {
  D T2_0;
  _KLsimple_object_vectorGVKd_6 T3 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:124
  T3.vector_element_[0] = &KJclass_;
  T3.vector_element_[1] = &KLdequeGVKd;
  T3.vector_element_[2] = &KJelement_type_;
  T3.vector_element_[3] = of_;
  T3.vector_element_[4] = IKJconcrete_class_;
  T3.vector_element_[5] = &KLobject_dequeGVKe;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:124
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2_0 = CONGRUENT_CALL2(&KLlimited_deque_typeGVKe, &T3);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:122
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kpop_lastVKdMM0I (D deque_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14_0;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:546
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:547
  T6 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:548
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:549
  T8 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:550
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:550
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:550
  T11 = primitive_machine_word_less_thanQ(T9,T10);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:550
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:553
    T12.vector_element_[0] = deque_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:553
    T2 = KlistVKdI(&T12);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:551
    T13.vector_element_[0] = &KJformat_string_;
    T13.vector_element_[1] = &K175;
    T13.vector_element_[2] = &KJformat_arguments_;
    T13.vector_element_[3] = T2;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:551
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLempty_collection_errorGVKi, &T13);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:551
    T14_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
    T5_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:555
    T16 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:555
    T15 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 3, T16);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:556
    T17 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:556
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T6, 3, T17);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:557
    T18 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:557
    T19 = primitive_machine_word_subtract_signal_overflow(T18,4);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:557
    T20 = primitive_cast_raw_as_integer(T19);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:557
    SLOT_VALUE_SETTER(T20, T6, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:558
    T4_0 = T15;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:550
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:546
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kmake_room_at_lastXVKiMM0I (D deque_) {
  D T2;
  D T3;
  D T4;
  DWORD dst_index_T, dst_index_;
  DWORD src_index_T, src_index_;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:452
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T7 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T8 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T9 = SLOT_VALUE_INITD(T8, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T10 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T13 = primitive_machine_word_logxor(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T14 = primitive_machine_word_subtract_signal_overflow(T11,T13);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T15 = primitive_machine_word_add_signal_overflow(T14,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  T16 = primitive_cast_raw_as_integer(T15);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(T2, T16);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:454
    KgrowXVKiMM0I(deque_);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:453
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:457
  T17 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:458
  T18 = SLOT_VALUE_INITD(T17, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:459
  T19 = SLOT_VALUE_INITD(T17, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:460
  T20 = primitive_cast_integer_as_raw(T19);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:460
  T21 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:460
  T22 = primitive_machine_word_logxor(T21,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:460
  T23 = primitive_machine_word_subtract_signal_overflow(T20,T22);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:460
  T24 = primitive_cast_raw_as_integer(T23);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:461
  T25 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:461
  T26 = primitive_machine_word_equalQ(T25,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:461
  if (T26 != &KPfalseVKi) {
    T4 = T26;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:461
    T27 = primitive_machine_word_less_thanQ(T23,-3);
    T4 = T27;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:461
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:461
  if (T4 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:465
    T30 = primitive_cast_integer_as_raw(T18);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
    dst_index_T = 1;
    src_index_T = T30;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
      dst_index_ = dst_index_T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
      src_index_ = src_index_T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
      T28 = primitive_machine_word_less_thanQ(T23,dst_index_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
      if (T28 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:465
        T29 = REPEATED_D_SLOT_VALUE_TAGGED(T17, 3, src_index_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:465
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T29, T17, 3, dst_index_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
        T31 = primitive_machine_word_add_signal_overflow(dst_index_,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
        T32 = primitive_machine_word_add_signal_overflow(src_index_,4);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
        dst_index_T = T31;
        src_index_T = T32;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:463
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:467
    SLOT_VALUE_SETTER((D) 1, T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:468
    SLOT_VALUE_SETTER(T24, T17, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:461
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:470
  T33 = &KPfalseVKi;
  MV_SET_COUNT(0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:452
  return(T33);
}

D KgrowXVKiMM0I (D deque_) {
  D new_rep_;
  DWORD src_index_T, src_index_;
  DWORD dst_index_T, dst_index_;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T19;
  DWORD T20_0;
  DWORD T20_1;
  DWORD quotient_;
  DWORD T22;
  DWORD T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  DWORD T28;
  D T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:406
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:407
  T6 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:408
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:409
  T8 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:410
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:410
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:410
  T11 = primitive_machine_word_logxor(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:410
  T12 = primitive_machine_word_subtract_signal_overflow(T9,T11);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:410
  T13 = primitive_machine_word_add_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:411
  T14 = primitive_machine_word_logxor(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:411
  T15 = primitive_machine_word_multiply_signal_overflow(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:411
  T16 = primitive_machine_word_logior(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:411
  T17 = primitive_cast_raw_as_integer(T16);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:411
  T18.vector_element_[0] = &KJsize_;
  T18.vector_element_[1] = T17;
  T18.vector_element_[2] = &KJfill_;
  T18.vector_element_[3] = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:411
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  new_rep_ = CONGRUENT_CALL2(&KLisland_dequeGVKi, &T18);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:412
  T19 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:412
  T20_0 = primitive_machine_word_truncateS_byref(T19,2,(DWORD*)&T20_1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:412
  quotient_ = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:412
  T22 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:412
  T23 = primitive_machine_word_logior(T22,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:412
  T24 = primitive_cast_raw_as_integer(T23);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:412
  SLOT_VALUE_SETTER(T24, new_rep_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:415
  T25 = SLOT_VALUE_INITD(new_rep_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
  T28 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:416
  T30 = primitive_cast_integer_as_raw(T25);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
  src_index_T = T28;
  dst_index_T = T30;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
    src_index_ = src_index_T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
    dst_index_ = dst_index_T;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
    T26 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
    T27 = primitive_machine_word_less_thanQ(T26,src_index_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
    if (T27 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:417
      T29 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 3, src_index_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:416
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T29, new_rep_, 3, dst_index_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
      T31 = primitive_machine_word_add_signal_overflow(src_index_,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
      T32 = primitive_machine_word_add_signal_overflow(dst_index_,4);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
      src_index_T = T31;
      dst_index_T = T32;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:419
    T33 = primitive_machine_word_subtract_signal_overflow(dst_index_,4);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:419
    T34 = primitive_cast_raw_as_integer(T33);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:419
    SLOT_VALUE_SETTER(T34, new_rep_, 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:413
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:421
  SLOT_VALUE_SETTER(new_rep_, deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:422
  T5 = deque_;
  MV_SET_ELT(0, deque_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:406
  return(T5);
}

D KpushVKdMM0I (D deque_, D new_element_) {
  D rep_first_indexF3;
  D T4;
  D T5;
  D T6_0;
  D rep_;
  D T8;
  D T9;
  D T10;
  D T11;
  D rep_first_indexF12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;
  D T20;
  D T21;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:478
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:480
  T16 = SLOT_VALUE_INITD(deque_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:480
  T19 = primitive_instanceQ(new_element_,T16);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:480
  if (T19 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:480
    T18.vector_element_[0] = &KJvalue_;
    T18.vector_element_[1] = new_element_;
    T18.vector_element_[2] = &KJtype_;
    T18.vector_element_[3] = T16;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:480
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:480
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:480
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:481
  T20 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:481
  rep_ = T20;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:482
  T11 = rep_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:482
  rep_first_indexF3 = CALL1(&Kfirst_indexVKi, T11);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:482
  rep_first_indexF12 = rep_first_indexF3;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:483
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:483
    T15 = rep_first_indexF12;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:483
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T4 = CONGRUENT_CALL2(T15, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:483
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:485
      Kmake_room_at_firstXVKiMM0I(deque_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:486
      T21 = SLOT_VALUE_INITD(deque_, 1);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:486
      rep_ = T21;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:487
      T10 = rep_;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:487
      T22 = SLOT_VALUE_INITD(T10, 0);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:487
      rep_first_indexF12 = T22;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:483
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:483
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:483
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:489
  T14 = rep_first_indexF12;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:489
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T5 = CONGRUENT_CALL2(T14, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:489
  rep_first_indexF12 = T5;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:489
  T9 = rep_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:489
  CALL2(&Kfirst_index_setterVKi, T5, T9);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:490
  T8 = rep_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:490
  T13 = rep_first_indexF12;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:490
  CALL3(&Kisland_deque_element_setterVKi, new_element_, T8, T13);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:490
  T6_0 = new_element_;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:478
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmake_room_at_firstXVKiMM0I (D deque_) {
  D T2;
  D T3;
  D T4;
  D rep_size_minus_1_;
  D T6;
  D delta_;
  D Utmp_;
  D T9;
  D T10;
  D T11;
  DWORD dst_index_T, dst_index_;
  D T13;
  DWORD src_index_T, src_index_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;
  DWORD T34;
  D T35;
  DWORD T36;
  D T37;
  DWORD T38;
  D T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  D T43;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:426
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T16 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(T16);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T17 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T18 = SLOT_VALUE_INITD(T17, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T19 = SLOT_VALUE_INITD(T17, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T20 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T21 = primitive_cast_integer_as_raw(T19);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T22 = primitive_machine_word_logxor(T21,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T23 = primitive_machine_word_subtract_signal_overflow(T20,T22);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T24 = primitive_machine_word_add_signal_overflow(T23,4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  T25 = primitive_cast_raw_as_integer(T24);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(T2, T25);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:428
    KgrowXVKiMM0I(deque_);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:431
  T26 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:432
  T27 = SLOT_VALUE_INITD(T26, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:433
  T28 = SLOT_VALUE_INITD(T26, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:434
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(T26);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:434
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  rep_size_minus_1_ = CONGRUENT_CALL2(T4, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:436
  T29 = primitive_cast_integer_as_raw(T28);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:436
  T30 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:436
  T31 = primitive_machine_word_logxor(T30,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:436
  T32 = primitive_machine_word_subtract_signal_overflow(T29,T31);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:436
  T33 = primitive_cast_raw_as_integer(T32);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:436
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T6 = CONGRUENT_CALL2(rep_size_minus_1_, T33);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:435
  delta_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:437
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  Utmp_ = CONGRUENT_CALL2(T28, rep_size_minus_1_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:437
  if (Utmp_ != &KPfalseVKi) {
    T9 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:438
    T34 = primitive_cast_integer_as_raw(delta_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:438
    T35 = primitive_machine_word_less_thanQ(T34,1);
    T9 = T35;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:437
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:437
  if (T9 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:442
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T10 = CONGRUENT_CALL2(rep_size_minus_1_, delta_);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:442
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T11 = CONGRUENT_CALL2(T10, T27);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
    T13 = rep_size_minus_1_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
    T15 = T11;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
    T38 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:443
    T40 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
    dst_index_T = T38;
    src_index_T = T40;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
      dst_index_ = dst_index_T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
      src_index_ = src_index_T;
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
      T36 = primitive_cast_integer_as_raw(delta_);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
      T37 = primitive_machine_word_less_thanQ(dst_index_,T36);
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
      if (T37 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:443
        T39 = REPEATED_D_SLOT_VALUE_TAGGED(T26, 3, src_index_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:443
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T39, T26, 3, dst_index_);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
        T41 = primitive_machine_word_add_signal_overflow(dst_index_,0xFFFFFFFFFFFFFFFCL);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
        T42 = primitive_machine_word_add_signal_overflow(src_index_,0xFFFFFFFFFFFFFFFCL);
        // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
        dst_index_T = T41;
        src_index_T = T42;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
      // /opt/opendylan-2013.1/sources/dylan/deque.dylan:440
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:445
    SLOT_VALUE_SETTER(delta_, T26, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:446
    CALL2(&Klast_index_setterVKi, rep_size_minus_1_, T26);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:437
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:448
  T43 = &KPfalseVKi;
  MV_SET_COUNT(0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:426
  return(T43);
}

D Kobject_deque_current_elementVKiI (D deque_, D state_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:575
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:577
  T2 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:577
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:577
  T3 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 3, T5);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:577
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:575
  return(T4);
}

D Kobject_deque_current_element_setterVKiI (D new_value_, D deque_, D state_) {
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T7;
  D T8;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:580
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:582
  T4 = SLOT_VALUE_INITD(deque_, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:582
  T7 = primitive_instanceQ(new_value_,T4);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:582
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:582
    T6.vector_element_[0] = &KJvalue_;
    T6.vector_element_[1] = new_value_;
    T6.vector_element_[2] = &KJtype_;
    T6.vector_element_[3] = T4;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:582
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T6);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:582
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T5, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:582
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:583
  T8 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:583
  T9 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:583
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T8, 3, T9);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:583
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:580
  return(T3);
}

static D Kslot_initializerF224I () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:112
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLisland_dequeGVKi, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:112
  T1_0 = T0;
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kobject_deque_current_keyVKiI (D deque_, D state_) {
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:570
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T2 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T5 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T6 = primitive_machine_word_logxor(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T7 = primitive_machine_word_subtract_signal_overflow(T4,T6);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:572
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:570
  MV_SET_COUNT(1);
  return(T9_0);
}

D KpopVKdMM0I (D deque_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14_0;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:498
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:499
  T6 = SLOT_VALUE_INITD(deque_, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:500
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:501
  T8 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:502
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:502
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:502
  T11 = primitive_machine_word_less_thanQ(T9,T10);
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:502
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:505
    T12.vector_element_[0] = deque_;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:505
    T2 = KlistVKdI(&T12);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:503
    T13.vector_element_[0] = &KJformat_string_;
    T13.vector_element_[1] = &K175;
    T13.vector_element_[2] = &KJformat_arguments_;
    T13.vector_element_[3] = T2;
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:503
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLempty_collection_errorGVKi, &T13);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:503
    T14_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
    T5_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:507
    T16 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:507
    T15 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 3, T16);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:508
    T17 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:508
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T6, 3, T17);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:509
    T18 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:509
    T19 = primitive_machine_word_add_signal_overflow(T18,4);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:509
    T20 = primitive_cast_raw_as_integer(T19);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:509
    SLOT_VALUE_SETTER(T20, T6, 0);
    // /opt/opendylan-2013.1/sources/dylan/deque.dylan:510
    T4_0 = T15;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:502
  // /opt/opendylan-2013.1/sources/dylan/deque.dylan:498
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_deque_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJconcrete_class_);
    if (T0 != &KJconcrete_class_) {
      IKJconcrete_class_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJof_);
    if (T0 != &KJof_) {
      primitive_repeated_slot_value_setter(T0, &K171, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K168, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_deque_for_user () {
  return;
}


/* eof */
