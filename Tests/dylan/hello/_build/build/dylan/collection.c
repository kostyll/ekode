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
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(39);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(46);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(0);

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
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);

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
} _KLcollectionGVKd;

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
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(3);
define__KLstandalone_domainGVKe(2);
define__KLstandalone_domainGVKe(1);

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLstretchy_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

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
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_collection_typeGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_copy_down_methodGVKi;

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
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
  D element_type_;
  D representation_;
} _KLobject_dequeGVKe;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

typedef struct {
  D wrapper;
  D key_test_;
  D acc_buffer_;
  D acc_index_;
  D acc_size_;
} _KLsequence_accumulatorGVKi;

typedef struct {
  D wrapper;
  D key_test_;
  D acc_buffer_;
  D acc_index_;
  D acc_size_;
} _KLkeyed_accumulatorGVKi;

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
} _KLlimited_mutable_collection_typeGVKe;

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
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLbottom_typeGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLnot_found_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinvalid_index_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLkey_test_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLiteration_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsubscript_out_of_bounds_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLempty_collection_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLnatural_number_errorGVKi;


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
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kmultiple_collectionVKiI (D coll_, D colls_);
D KapplyVKdI (D, D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_collectionG_typesVKi;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe Kkey_sequenceVKdMM0;
extern _KLsimple_methodGVKe Kkey_sequenceVKdMM1;
extern _KLgetter_methodGVKi Kkey_sequenceVKdMM2;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLstandalone_domainGVKe_1 Kkey_sequenceVKdRD_dylanRD_0;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LcollectionG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
D KlistVKdI (D objects_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLstretchy_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_collectionGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM13;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM14;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM8;
extern _KLincremental_generic_functionGVKe Ksize_setterVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLsimple_methodGVKe KidentityVKd;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLlimited_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collection_typeGVKeW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_methodGVKe Kreduce1VKdMM1;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_7;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM0;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM1;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM2;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM3;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM4;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM5;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM6;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM7;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM8;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM9;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM10;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM11;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM12;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM13;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM14;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM15;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM16;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM17;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM18;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM19;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM20;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_0;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_13;
extern _KLkeyword_methodGVKe KremoveXVKdMM0;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM1;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLkeyword_methodGVKe KremoveXVKdMM2;
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM3;
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM4;
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM5;
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM6;
extern _KLkeyword_methodGVKe KremoveXVKdMM7;
extern _KLkeyword_methodGVKe KremoveXVKdMM8;
extern _KLkeyword_methodGVKe KremoveXVKdMM9;
extern _KLkeyword_methodGVKe KremoveXVKdMM10;
extern _KLkeyword_methodGVKe KremoveXVKdMM11;
extern _KLkeyword_methodGVKe KremoveXVKdMM12;
extern _KLkeyword_methodGVKe KremoveXVKdMM13;
extern _KLkeyword_methodGVKe KremoveXVKdMM14;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_19;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
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
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLsimple_methodGVKe KreduceVKdMM1;
extern _KLmethod_domainGVKe KreduceVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_8;
extern _KLsimple_methodGVKe KaddXVKdMM0;
extern _KLsimple_methodGVKe KaddXVKdMM1;
extern _KLsimple_methodGVKe KaddXVKdMM2;
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM3;
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM4;
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM5;
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM6;
extern _KLsimple_methodGVKe KaddXVKdMM7;
extern _KLsimple_methodGVKe KaddXVKdMM8;
extern _KLsimple_methodGVKe KaddXVKdMM9;
extern _KLsimple_methodGVKe KaddXVKdMM10;
extern _KLsimple_methodGVKe KaddXVKdMM11;
extern _KLsimple_methodGVKe KaddXVKdMM12;
extern _KLsimple_methodGVKe KaddXVKdMM13;
extern _KLsimple_methodGVKe KaddXVKdMM14;
extern _KLsimple_methodGVKe KaddXVKdMM15;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_18;
extern _KLkeyword_methodGVKe KmemberQVKdMM1;
extern _KLkeyword_copy_down_methodGVKi KmemberQVKdMM2;
extern _KLkeyword_methodGVKe KmemberQVKdMM3;
extern _KLkeyword_methodGVKe KmemberQVKdMM4;
extern _KLkeyword_methodGVKe KmemberQVKdMM5;
extern _KLkeyword_methodGVKe KmemberQVKdMM6;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_11;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM8;
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM9;
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM10;
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM11;
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM12;
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM13;
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM14;
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM15;
D KreverseXVKdMM2I (D l_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
D KLobject_dequeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_);
extern _KLclassGVKd KLobject_dequeGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_dequeGVKeW;
D Kpush_lastVKdMM0I (D deque_, D new_element_);
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsymbolGVKd KJsize_;
extern _KLsealed_generic_functionGVKe KfirstVKd;
extern _KLsymbolGVKd KJfill_;
extern _KLincremental_generic_functionGVKe KdimensionsVKd;
extern _KLsymbolGVKd KJdimensions_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LarrayG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLsymbolGVKd KJkey_test_;
extern _KLclassGVKd KLsequence_accumulatorGVKi;
extern _KLmm_wrapperGVKi_0 KLsequence_accumulatorGVKiW;
extern _KLsealed_generic_functionGVKe Kconvert_accumulator_asVKi;
extern _KLclassGVKd KLkeyed_accumulatorGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyed_accumulatorGVKiW;
extern _KLsimple_methodGVKe Kmaximum_sequence_keyVKiMM0;
extern _KLsimple_methodGVKe Kmaximum_sequence_keyVKiMM1;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM1;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM2;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM3;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM4;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM5;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM6;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM7;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM8;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM9;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM10;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM11;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM12;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM13;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM14;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM15;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM16;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM17;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM18;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM19;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM20;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM21;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM22;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM23;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM24;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM25;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_3;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_5;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_7;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_9;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_10;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_12;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_13;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_14;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_15;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_16;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_17;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_18;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_19;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_20;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_21;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_22;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_23;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_24;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLlimited_mutable_collection_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_mutable_collection_typeGVKeW;
extern _KLgetter_methodGVKi Kkey_testVKdMM0;
extern _KLsimple_methodGVKe Kkey_testVKdMM1;
extern _KLsimple_methodGVKe Kkey_testVKdMM2;
extern _KLsimple_methodGVKe Kkey_testVKdMM3;
extern _KLsimple_methodGVKe Kkey_testVKdMM4;
extern _KLsimple_methodGVKe Kkey_testVKdMM5;
extern _KLsimple_methodGVKe Kkey_testVKdMM6;
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kkey_testVKdRD_dylanRD_2;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM0;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM1;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM2;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM3;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM4;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM5;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM6;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM7;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM8;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM9;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM10;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM11;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM12;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM13;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM14;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM15;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM16;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM17;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM18;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM19;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM20;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM21;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM22;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM23;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM24;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM25;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM26;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM27;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM28;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM29;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM30;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM31;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM32;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM33;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_20;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_6;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lempty_listG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LpairG_typesVKi;
extern _KLsealed_generic_functionGVKe KheadVKd;
extern _KLsealed_generic_functionGVKe KtailVKd;
D Kclass_instanceQ_rcpl_single_largeVKiI (D obj_, D cls_);
extern _KLkeyword_methodGVKe KelementVKdMM0;
extern _KLkeyword_methodGVKe KelementVKdMM1;
extern _KLkeyword_methodGVKe KelementVKdMM2;
extern _KLkeyword_methodGVKe KelementVKdMM3;
extern _KLkeyword_methodGVKe KelementVKdMM4;
extern _KLkeyword_methodGVKe KelementVKdMM5;
extern _KLkeyword_methodGVKe KelementVKdMM6;
extern _KLkeyword_methodGVKe KelementVKdMM7;
extern _KLkeyword_methodGVKe KelementVKdMM8;
extern _KLkeyword_methodGVKe KelementVKdMM9;
extern _KLkeyword_methodGVKe KelementVKdMM10;
extern _KLkeyword_methodGVKe KelementVKdMM11;
extern _KLkeyword_methodGVKe KelementVKdMM12;
extern _KLkeyword_methodGVKe KelementVKdMM13;
extern _KLkeyword_methodGVKe KelementVKdMM14;
extern _KLkeyword_methodGVKe KelementVKdMM15;
extern _KLkeyword_methodGVKe KelementVKdMM16;
extern _KLkeyword_methodGVKe KelementVKdMM17;
extern _KLkeyword_methodGVKe KelementVKdMM18;
extern _KLkeyword_methodGVKe KelementVKdMM19;
extern _KLkeyword_methodGVKe KelementVKdMM20;
extern _KLkeyword_methodGVKe KelementVKdMM21;
extern _KLkeyword_methodGVKe KelementVKdMM22;
extern _KLkeyword_methodGVKe KelementVKdMM23;
extern _KLkeyword_methodGVKe KelementVKdMM24;
extern _KLkeyword_methodGVKe KelementVKdMM25;
extern _KLkeyword_methodGVKe KelementVKdMM26;
extern _KLkeyword_methodGVKe KelementVKdMM27;
extern _KLkeyword_methodGVKe KelementVKdMM28;
extern _KLkeyword_methodGVKe KelementVKdMM29;
extern _KLkeyword_methodGVKe KelementVKdMM30;
extern _KLkeyword_methodGVKe KelementVKdMM31;
extern _KLkeyword_methodGVKe KelementVKdMM32;
extern _KLkeyword_methodGVKe KelementVKdMM33;
extern _KLkeyword_methodGVKe KelementVKdMM34;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_20;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_22;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_23;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_24;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_26;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_27;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_28;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_29;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_30;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_31;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lnot_found_errorG_typesVKi;
extern _KLgetter_methodGVKi Kelement_typeVKeMM0;
extern _KLsimple_methodGVKe Kelement_typeVKeMM2;
extern _KLsimple_methodGVKe Kelement_typeVKeMM3;
extern _KLsimple_methodGVKe Kelement_typeVKeMM4;
extern _KLsimple_methodGVKe Kelement_typeVKeMM5;
extern _KLsimple_methodGVKe Kelement_typeVKeMM6;
extern _KLsimple_methodGVKe Kelement_typeVKeMM7;
extern _KLsimple_methodGVKe Kelement_typeVKeMM8;
extern _KLsimple_methodGVKe Kelement_typeVKeMM9;
extern _KLsimple_methodGVKe Kelement_typeVKeMM10;
extern _KLsimple_methodGVKe Kelement_typeVKeMM11;
extern _KLsimple_methodGVKe Kelement_typeVKeMM12;
extern _KLsimple_methodGVKe Kelement_typeVKeMM13;
extern _KLsimple_methodGVKe Kelement_typeVKeMM14;
extern _KLsimple_methodGVKe Kelement_typeVKeMM15;
extern _KLsimple_methodGVKe Kelement_typeVKeMM16;
extern _KLsimple_methodGVKe Kelement_typeVKeMM17;
extern _KLsimple_methodGVKe Kelement_typeVKeMM18;
extern _KLsimple_methodGVKe Kelement_typeVKeMM19;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_3;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_10;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_12;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_13;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_14;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_16;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_19;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_20;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_21;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_22;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_23;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_24;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_25;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_27;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_28;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_29;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_30;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_31;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_32;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_33;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_34;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_35;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
extern _KLbottom_typeGVKe KLbottomGVKe;
extern _KLclassGVKd KLbottom_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLbottom_typeGVKeW;
extern _KLkeyword_methodGVKe Kfind_keyVKdMM1;
extern _KLkeyword_copy_down_methodGVKi Kfind_keyVKdMM2;
extern _KLmethod_domainGVKe Kfind_keyVKdRD_dylanRD_0;
extern _KLsymbolGVKd KJskip_;
extern _KLsymbolGVKd KJfailure_;

/* Defined object declarations */

extern _KLincremental_generic_functionGVKe Kelement_typeVKe;
extern _KLclassGVKd KLnot_found_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLnot_found_errorGVKeW;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLclassGVKd KLinvalid_index_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLinvalid_index_errorGVKiW;
D Kelement_range_errorVKeI (D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsimple_methodGVKe KEVKdMM14;
D KEVKdMM14I (D, D);
extern _KLsimple_methodGVKe KEVKdMM15;
D KEVKdMM15I (D, D);
extern _KLsimple_methodGVKe KEVKdMM16;
D KEVKdMM16I (D, D);
extern _KLsimple_methodGVKe KEVKdMM17;
D KEVKdMM17I (D, D);
extern _KLsimple_methodGVKe KEVKdMM18;
D KEVKdMM18I (D, D);
extern _KLsimple_methodGVKe KEVKdMM19;
D KEVKdMM19I (D, D);
extern _KLsimple_methodGVKe KEVKdMM20;
D KEVKdMM20I (D c1_, D c2_);
extern _KLsimple_methodGVKe KEVKdMM21;
D KEVKdMM21I (D, D);
extern _KLsimple_methodGVKe KEVKdMM22;
D KEVKdMM22I (D c1_, D c2_);
extern _KLsimple_methodGVKe KEVKdMM23;
D KEVKdMM23I (D, D);
extern _KLsimple_methodGVKe KEVKdMM24;
D KEVKdMM24I (D, D);
extern _KLsimple_methodGVKe KEVKdMM25;
D KEVKdMM25I (D, D);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_9;
extern _KLsimple_methodGVKe KemptyQVKdMM0;
D KemptyQVKdMM0I (D);
extern _KLsimple_methodGVKe KsizeVKdMM2;
D KsizeVKdMM2I (D);
extern _KLsimple_methodGVKe Kshallow_copyVKdMM2;
D Kshallow_copyVKdMM2I (D);
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe Kkey_testVKd;
extern _KLunionGVKe KLmutable_collection_typeGVKi;
extern _KLclassGVKd KLkey_test_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLkey_test_errorGVKiW;
extern _KLclassGVKd KLiteration_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLiteration_errorGVKiW;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_checkVKe;
extern _KLsealed_generic_functionGVKe Knot_found_objectVKi;
extern _KLsealed_generic_functionGVKe Kmaximum_sequence_keyVKi;
extern _KLsealed_generic_functionGVKe Kmap_as_oneVKi;
extern _KLclassGVKd KLsubscript_out_of_bounds_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsubscript_out_of_bounds_errorGVKiW;
extern _KLincremental_generic_functionGVKe KmemberQVKd;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLincremental_generic_functionGVKe KreduceVKd;
extern _KLclassGVKd KLempty_collection_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLempty_collection_errorGVKiW;
extern _KLclassGVKd KLnatural_number_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLnatural_number_errorGVKiW;
extern _KLincremental_generic_functionGVKe KremoveXVKd;
extern _KLincremental_generic_functionGVKe Kbackward_iteration_protocolVKd;
extern _KLsealed_generic_functionGVKe KeveryQVKd;
extern _KLincremental_generic_functionGVKe Kreduce1VKd;
D KeveryQVKdMM0I (D, D, D);
extern _KLsealed_generic_functionGVKe KanyQVKd;
extern _KLsimple_methodGVKe KasVKdMM37;
D KasVKdMM37I (D, D);
D Kmap_asVKdMM0I (D, D, D, D);
D Kmap_intoVKdMM0I (D, D, D, D);
extern _KLincremental_generic_functionGVKe Kkey_sequenceVKd;
extern _KLsealed_generic_functionGVKe Kmap_asVKd;
extern _KLsealed_generic_functionGVKe KdoVKd;
extern _KLsimple_methodGVKe KdoVKdMM0;
D KdoVKdMM0I (D, D, D);
static _KLpairGVKd K76;
static _KLsignatureAvaluesGVKi K77;
static _KLbyte_stringGVKd_2 K78;
static _KLsimple_object_vectorGVKd_2 K79;
static _KLsimple_object_vectorGVKd_1 K80;
static _KLsingletonGVKd K81;
extern _KLsimple_methodGVKe Kmap_asVKdMM0;
static _KLpairGVKd K83;
static _KLsignatureAvaluesGVKi K84;
static _KLbyte_stringGVKd_6 K85;
static _KLsimple_object_vectorGVKd_3 K86;
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLpairGVKd K89;
static _KLsignatureAvaluesGVKi K90;
static _KLbyte_stringGVKd_12 K91;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_map_intoF197;
static D Kanonymous_of_map_intoF197I (D);
static _KLbyte_stringGVKd_46 K94;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K95;
extern _KLsealed_generic_functionGVKe Kmap_into_stretchy_oneVKi;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K97;
extern _KLsealed_generic_functionGVKe Kmap_into_rigid_oneVKi;
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM0;
D Kmap_into_rigid_oneVKiMM0I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM1;
D Kmap_into_rigid_oneVKiMM1I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM2;
D Kmap_into_rigid_oneVKiMM2I (D, D, D);
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM3;
D Kmap_into_rigid_oneVKiMM3I (D fun_, D target_, D coll_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM4;
D Kmap_into_rigid_oneVKiMM4I (D fun_, D target_, D coll_);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM5;
D Kmap_into_rigid_oneVKiMM5I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM6;
D Kmap_into_rigid_oneVKiMM6I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM7;
D Kmap_into_rigid_oneVKiMM7I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM8;
D Kmap_into_rigid_oneVKiMM8I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM9;
D Kmap_into_rigid_oneVKiMM9I (D fun_, D target_, D coll_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM10;
D Kmap_into_rigid_oneVKiMM10I (D fun_, D target_, D coll_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM11;
D Kmap_into_rigid_oneVKiMM11I (D fun_, D target_, D coll_);
extern _KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM12;
D Kmap_into_rigid_oneVKiMM12I (D fun_, D target_, D coll_);
static _KLpairGVKd K125;
static _KLpairGVKd K126;
static _KLpairGVKd K127;
static _KLpairGVKd K128;
static _KLpairGVKd K129;
static _KLpairGVKd K130;
static _KLpairGVKd K131;
static _KLpairGVKd K132;
static _KLpairGVKd K133;
static _KLpairGVKd K134;
static _KLpairGVKd K135;
static _KLpairGVKd K136;
static _KLpairGVKd K137;
static _KLpairGVKd K138;
static _KLpairGVKd K139;
static _KLbyte_stringGVKd_18 K140;
static _KLsignatureAvaluesGVKi K141;
static _KLsimple_object_vectorGVKd_3 K142;
static _KLsignatureAvaluesGVKi K143;
static _KLsimple_object_vectorGVKd_3 K144;
static _KLsignatureAvaluesGVKi K145;
static _KLsimple_object_vectorGVKd_3 K146;
static _KLsignatureAvaluesGVKi K147;
static _KLsimple_object_vectorGVKd_3 K148;
static _KLsignatureAvaluesGVKi K149;
static _KLsimple_object_vectorGVKd_3 K150;
static _KLsignatureAvaluesGVKi K151;
static _KLsimple_object_vectorGVKd_3 K152;
static _KLsignatureAvaluesGVKi K153;
static _KLsimple_object_vectorGVKd_3 K154;
static _KLsignatureAvaluesGVKi K155;
static _KLsimple_object_vectorGVKd_3 K156;
static _KLsignatureAvaluesGVKi K157;
static _KLsimple_object_vectorGVKd_3 K158;
static _KLsignatureAvaluesGVKi K159;
static _KLsimple_object_vectorGVKd_3 K160;
static _KLsignatureAvaluesGVKi K161;
static _KLsimple_object_vectorGVKd_3 K162;
static _KLsignatureAvaluesGVKi K163;
static _KLsimple_object_vectorGVKd_3 K164;
static _KLsignatureAvaluesGVKi K165;
static _KLsimple_object_vectorGVKd_3 K166;
extern _KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM0;
D Kmap_into_stretchy_oneVKiMM0I (D, D, D);
extern _KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM1;
D Kmap_into_stretchy_oneVKiMM1I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM2;
D Kmap_into_stretchy_oneVKiMM2I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM3;
D Kmap_into_stretchy_oneVKiMM3I (D, D, D);
extern _KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM4;
D Kmap_into_stretchy_oneVKiMM4I (D fun_, D target_, D coll_);
extern _KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM5;
D Kmap_into_stretchy_oneVKiMM5I (D fun_, D target_, D coll_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM6;
D Kmap_into_stretchy_oneVKiMM6I (D fun_, D target_, D coll_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM7;
D Kmap_into_stretchy_oneVKiMM7I (D fun_, D target_, D coll_);
static _KLpairGVKd K183;
static _KLpairGVKd K184;
static _KLpairGVKd K185;
static _KLpairGVKd K186;
static _KLpairGVKd K187;
static _KLpairGVKd K188;
static _KLpairGVKd K189;
static _KLpairGVKd K190;
static _KLpairGVKd K191;
static _KLbyte_stringGVKd_21 K192;
static _KLsignatureAvaluesGVKi K193;
static _KLsimple_object_vectorGVKd_3 K194;
static _KLsignatureAvaluesGVKi K195;
static _KLsimple_object_vectorGVKd_3 K196;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_map_asF202;
static D Kanonymous_of_map_asF202I (D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K200;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K201;
static _KLsignatureAvaluesGVKi K203;
static _KLsimple_object_vectorGVKd_2 K204;
extern _KLunionGVKe KLcollection_typeGVKi;
static _KLsubclassGVKe K206;
extern _KLsimple_methodGVKe KanyQVKdMM0;
D KanyQVKdMM0I (D, D, D);
static _KLpairGVKd K209;
static _KLsignatureGVKe K210;
static _KLbyte_stringGVKd_4 K211;
extern _KLsealed_generic_functionGVKe KanyQ_twoVKi;
extern _KLsimple_methodGVKe KanyQ_twoVKiMM0;
D KanyQ_twoVKiMM0I (D test_, D c1_, D c2_);
extern _KLsimple_methodGVKe KanyQ_twoVKiMM1;
D KanyQ_twoVKiMM1I (D test_, D c1_, D c2_);
static _KLpairGVKd K217;
static _KLpairGVKd K218;
static _KLsignatureGVKe K219;
static _KLbyte_stringGVKd_8 K220;
static _KLsimple_object_vectorGVKd_3 K221;
static _KLsignatureGVKe K222;
static _KLsimple_object_vectorGVKd_3 K223;
extern _KLsealed_generic_functionGVKe KeveryQ_twoVKi;
extern _KLsimple_methodGVKe KeveryQ_twoVKiMM0;
D KeveryQ_twoVKiMM0I (D test_, D c1_, D c2_);
extern _KLsimple_methodGVKe KeveryQ_twoVKiMM1;
D KeveryQ_twoVKiMM1I (D test_, D c1_, D c2_);
static _KLpairGVKd K229;
static _KLpairGVKd K230;
static _KLbyte_stringGVKd_10 K231;
extern _KLsimple_methodGVKe Kreduce1VKdMM0;
D Kreduce1VKdMM0I (D fn_, D collection_);
static _KLpairGVKd K234;
static _KLpairGVKd K235;
static _KLsignatureGVKe K236;
static _KLbyte_stringGVKd_7 K237;
static _KLbyte_stringGVKd_39 K238;
extern _KLsimple_methodGVKe KeveryQVKdMM0;
static _KLpairGVKd K240;
static _KLsignatureAvaluesGVKi K241;
static _KLbyte_stringGVKd_6 K242;
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
static _KLsignatureAvaluesGVKi K264;
static _KLbyte_stringGVKd_27 K265;
static _KLsimple_object_vectorGVKd_8 K266;
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
static _KLpairGVKd K281;
static _KLkeyword_signatureAvaluesGVKi K282;
static _KLbyte_stringGVKd_7 K283;
static _KLsimple_object_vectorGVKd_2 K284;
static _KLsimple_object_vectorGVKd_2 K285;
static _KLimplementation_classGVKe K286;
static _KLsimple_object_vectorGVKd_2 K287;
extern _KLkeyword_methodGVKe KLnatural_number_errorGZ32ZconstructorVKiMM0;
D KLnatural_number_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K290;
static _KLsimple_object_vectorGVKd_7 K291;
static _KLkeyword_signatureAvaluesGVKi K292;
static _KLsimple_object_vectorGVKd_4 K293;
static _KLsimple_object_vectorGVKd_2 K294;
static _KLsimple_object_vectorGVKd_1 K295;
static _KLbyte_stringGVKd_22 K296;
static _KLimplementation_classGVKe K297;
extern _KLkeyword_methodGVKe KLempty_collection_errorGZ32ZconstructorVKiMM0;
D KLempty_collection_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K300;
static _KLkeyword_signatureAvaluesGVKi K301;
static _KLsimple_object_vectorGVKd_1 K302;
static _KLbyte_stringGVKd_24 K303;
extern _KLsimple_methodGVKe KreduceVKdMM0;
D KreduceVKdMM0I (D fn_, D init_value_, D collection_);
static _KLpairGVKd K306;
static _KLpairGVKd K307;
static _KLsignatureGVKe K308;
static _KLbyte_stringGVKd_6 K309;
static _KLsimple_object_vectorGVKd_3 K310;
static _KLpairGVKd K311;
static _KLpairGVKd K312;
static _KLpairGVKd K313;
static _KLpairGVKd K314;
static _KLpairGVKd K315;
static _KLpairGVKd K316;
static _KLpairGVKd K317;
static _KLpairGVKd K318;
static _KLpairGVKd K319;
static _KLpairGVKd K320;
static _KLpairGVKd K321;
static _KLpairGVKd K322;
static _KLpairGVKd K323;
static _KLpairGVKd K324;
static _KLpairGVKd K325;
static _KLpairGVKd K326;
static _KLsignatureAvaluesGVKi K327;
static _KLbyte_stringGVKd_4 K328;
extern _KLkeyword_methodGVKe KmemberQVKdMM0;
D KmemberQVKdMM0I (D, D, D, D);
static _KLpairGVKd K331;
static _KLpairGVKd K332;
static _KLpairGVKd K333;
static _KLpairGVKd K334;
static _KLpairGVKd K335;
static _KLpairGVKd K336;
static _KLpairGVKd K337;
static _KLkeyword_signatureAvaluesGVKi K338;
static _KLbyte_stringGVKd_7 K339;
static _KLsimple_object_vectorGVKd_2 K340;
static _KLsimple_object_vectorGVKd_1 K341;
static _KLsimple_object_vectorGVKd_2 K342;
static _KLimplementation_classGVKe K343;
extern _KLkeyword_methodGVKe KLsubscript_out_of_bounds_errorGZ32ZconstructorVKiMM0;
D KLsubscript_out_of_bounds_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K346;
static _KLsimple_object_vectorGVKd_9 K347;
static _KLkeyword_signatureAvaluesGVKi K348;
static _KLsimple_object_vectorGVKd_1 K349;
static _KLbyte_stringGVKd_31 K350;
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM0;
D Kmap_as_oneVKiMM0I (D, D, D);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM1;
D Kmap_as_oneVKiMM1I (D, D, D);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM2;
D Kmap_as_oneVKiMM2I (D type_, D function_, D collection_);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM3;
D Kmap_as_oneVKiMM3I (D, D, D);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM4;
D Kmap_as_oneVKiMM4I (D, D, D);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM5;
D Kmap_as_oneVKiMM5I (D type_, D function_, D collection_);
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM6;
D Kmap_as_oneVKiMM6I (D, D, D);
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM7;
D Kmap_as_oneVKiMM7I (D, D, D);
static _KLpairGVKd K367;
static _KLpairGVKd K368;
static _KLpairGVKd K369;
static _KLpairGVKd K370;
static _KLpairGVKd K371;
static _KLpairGVKd K372;
static _KLpairGVKd K373;
static _KLpairGVKd K374;
static _KLpairGVKd K375;
static _KLpairGVKd K376;
static _KLpairGVKd K377;
static _KLpairGVKd K378;
static _KLpairGVKd K379;
static _KLpairGVKd K380;
static _KLpairGVKd K381;
static _KLpairGVKd K382;
static _KLsignatureAvaluesGVKi K383;
static _KLbyte_stringGVKd_10 K384;
static _KLsignatureAvaluesGVKi K385;
static _KLsimple_object_vectorGVKd_3 K386;
static _KLsingletonGVKd K387;
static _KLsignatureAvaluesGVKi K388;
static _KLsimple_object_vectorGVKd_3 K389;
static _KLsubclassGVKe K390;
static _KLsignatureAvaluesGVKi K391;
static _KLsimple_object_vectorGVKd_3 K392;
static _KLsingletonGVKd K393;
static _KLsignatureAvaluesGVKi K394;
static _KLsimple_object_vectorGVKd_3 K395;
static _KLsubclassGVKe K396;
static _KLsignatureAvaluesGVKi K397;
static _KLsimple_object_vectorGVKd_3 K398;
static _KLsubclassGVKe K399;
static _KLsignatureAvaluesGVKi K400;
static _KLsimple_object_vectorGVKd_3 K401;
static _KLsignatureAvaluesGVKi K402;
static _KLsimple_object_vectorGVKd_3 K403;
static _KLsignatureAvaluesGVKi K404;
static _KLsimple_object_vectorGVKd_3 K405;
static _KLpairGVKd K406;
static _KLpairGVKd K407;
static _KLsignatureAvaluesGVKi K408;
static _KLbyte_stringGVKd_20 K409;
static _KLsignatureGVKe K410;
static _KLbyte_stringGVKd_16 K411;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM0;
D Kelement_no_bounds_checkVKeMM0I (D collection_, D key_, D Urest_, D default_);
static _KLpairGVKd K414;
static _KLpairGVKd K415;
static _KLpairGVKd K416;
static _KLpairGVKd K417;
static _KLpairGVKd K418;
static _KLpairGVKd K419;
static _KLpairGVKd K420;
static _KLpairGVKd K421;
static _KLpairGVKd K422;
static _KLpairGVKd K423;
static _KLpairGVKd K424;
static _KLpairGVKd K425;
static _KLpairGVKd K426;
static _KLpairGVKd K427;
static _KLpairGVKd K428;
static _KLpairGVKd K429;
static _KLpairGVKd K430;
static _KLpairGVKd K431;
static _KLpairGVKd K432;
static _KLpairGVKd K433;
static _KLpairGVKd K434;
static _KLpairGVKd K435;
static _KLpairGVKd K436;
static _KLpairGVKd K437;
static _KLpairGVKd K438;
static _KLpairGVKd K439;
static _KLkeyword_signatureGVKe K440;
static _KLbyte_stringGVKd_23 K441;
static _KLsimple_object_vectorGVKd_1 K442;
static _KLsimple_object_vectorGVKd_2 K443;
static _KLimplementation_classGVKe K444;
extern _KLkeyword_methodGVKe KLiteration_errorGZ32ZconstructorVKiMM0;
D KLiteration_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K447;
static _KLkeyword_signatureAvaluesGVKi K448;
static _KLsimple_object_vectorGVKd_1 K449;
static _KLbyte_stringGVKd_17 K450;
static _KLimplementation_classGVKe K451;
extern _KLkeyword_methodGVKe KLkey_test_errorGZ32ZconstructorVKiMM0;
D KLkey_test_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K454;
static _KLkeyword_signatureAvaluesGVKi K455;
static _KLsimple_object_vectorGVKd_1 K456;
static _KLbyte_stringGVKd_16 K457;
static _KLsubclassGVKe K458;
static _KLpairGVKd K459;
static _KLpairGVKd K460;
static _KLpairGVKd K461;
static _KLpairGVKd K462;
static _KLpairGVKd K463;
static _KLpairGVKd K464;
static _KLpairGVKd K465;
static _KLsignatureAvaluesGVKi K466;
static _KLbyte_stringGVKd_8 K467;
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
static _KLbyte_stringGVKd_26 K502;
static _KLsignatureAvaluesGVKi K503;
static _KLsignatureAvaluesGVKi K504;
static _KLsignatureAvaluesGVKi K505;
static _KLsignatureAvaluesGVKi K506;
static _KLsignatureAvaluesGVKi K507;
static _KLsignatureAvaluesGVKi K508;
static _KLsimple_object_vectorGVKd_2 K509;
static _KLsignatureAvaluesGVKi K510;
static _KLsimple_object_vectorGVKd_2 K511;
static _KLsignatureAvaluesGVKi K512;
static _KLsimple_object_vectorGVKd_2 K513;
static _KLsignatureAvaluesGVKi K514;
static _KLsimple_object_vectorGVKd_2 K515;
static _KLsignatureAvaluesGVKi K516;
static _KLsignatureAvaluesGVKi K517;
static _KLsignatureAvaluesGVKi K518;
static _KLsimple_object_vectorGVKd_2 K519;
static _KLsignatureAvaluesGVKi K520;
static _KLsimple_object_vectorGVKd_2 K521;
static _KLsignatureAvaluesGVKi K522;
static _KLbyte_stringGVKd_17 K523;
static _KLbyte_stringGVKd_28 K524;
static _KLimplementation_classGVKe K525;
extern _KLkeyword_methodGVKe KLinvalid_index_errorGZ32ZconstructorVKiMM0;
D KLinvalid_index_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K528;
static _KLsimple_object_vectorGVKd_8 K529;
static _KLkeyword_signatureAvaluesGVKi K530;
static _KLbyte_stringGVKd_21 K531;
static _KLpairGVKd K532;
static _KLpairGVKd K533;
static _KLpairGVKd K534;
static _KLpairGVKd K535;
static _KLpairGVKd K536;
static _KLpairGVKd K537;
static _KLpairGVKd K538;
static _KLpairGVKd K539;
static _KLpairGVKd K540;
static _KLpairGVKd K541;
static _KLpairGVKd K542;
static _KLpairGVKd K543;
static _KLpairGVKd K544;
static _KLpairGVKd K545;
static _KLpairGVKd K546;
static _KLpairGVKd K547;
static _KLpairGVKd K548;
static _KLpairGVKd K549;
static _KLpairGVKd K550;
static _KLpairGVKd K551;
static _KLpairGVKd K552;
static _KLpairGVKd K553;
static _KLpairGVKd K554;
static _KLpairGVKd K555;
static _KLpairGVKd K556;
static _KLpairGVKd K557;
static _KLpairGVKd K558;
static _KLpairGVKd K559;
static _KLpairGVKd K560;
static _KLpairGVKd K561;
static _KLpairGVKd K562;
static _KLpairGVKd K563;
static _KLpairGVKd K564;
static _KLpairGVKd K565;
static _KLpairGVKd K566;
static _KLkeyword_signatureGVKe K567;
static _KLbyte_stringGVKd_7 K568;
static _KLsimple_object_vectorGVKd_2 K569;
static _KLimplementation_classGVKe K570;
extern _KLkeyword_methodGVKe KLnot_found_errorGZ32ZconstructorVKiMM0;
D KLnot_found_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K573;
static _KLkeyword_signatureAvaluesGVKi K574;
static _KLbyte_stringGVKd_17 K575;
extern _KLsimple_methodGVKe Kelement_typeVKeMM1;
D Kelement_typeVKeMM1I (D t_);
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_36;
static _KLpairGVKd K579;
static _KLpairGVKd K580;
static _KLpairGVKd K581;
static _KLpairGVKd K582;
static _KLpairGVKd K583;
static _KLpairGVKd K584;
static _KLpairGVKd K585;
static _KLpairGVKd K586;
static _KLpairGVKd K587;
static _KLpairGVKd K588;
static _KLpairGVKd K589;
static _KLpairGVKd K590;
static _KLpairGVKd K591;
static _KLpairGVKd K592;
static _KLpairGVKd K593;
static _KLpairGVKd K594;
static _KLpairGVKd K595;
static _KLpairGVKd K596;
static _KLpairGVKd K597;
static _KLpairGVKd K598;
static _KLsignatureAvaluesGVKi K599;
static _KLbyte_stringGVKd_12 K600;
static _KLsignatureAvaluesGVKi K601;
static _KLsimple_object_vectorGVKd_1 K602;
static _KLsingletonGVKd K603;
extern _KLsimple_methodGVKe Kelement_range_errorVKe;
static _KLsignatureAvaluesGVKi K605;
static _KLsimple_object_vectorGVKd_1 K606;
extern _KLsealed_generic_functionGVKe KeveryQ_oneVKi;
extern _KLsimple_methodGVKe KeveryQ_oneVKiMM0;
D KeveryQ_oneVKiMM0I (D test_, D coll_);
static _KLpairGVKd K610;
static _KLsignatureAvaluesGVKi K611;
static _KLbyte_stringGVKd_10 K612;
extern _KLsealed_generic_functionGVKe KanyQ_oneVKi;
extern _KLsimple_methodGVKe KanyQ_oneVKiMM0;
D KanyQ_oneVKiMM0I (D test_, D coll_);
static _KLpairGVKd K616;
static _KLbyte_stringGVKd_8 K617;
extern _KLsealed_generic_functionGVKe Kdo_oneVKi;
extern _KLsimple_methodGVKe Kdo_oneVKiMM0;
D Kdo_oneVKiMM0I (D function_, D collection_);
static _KLpairGVKd K621;
static _KLsignatureAvaluesGVKi K622;
static _KLbyte_stringGVKd_6 K623;
extern _KLsimple_methodGVKe KPcurry_current_element_setterVKe;
D KPcurry_current_element_setterVKeI (D collection_, D state_, D current_element_setter_);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_Pcurry_current_element_setterF628;
static D Kanonymous_of_Pcurry_current_element_setterF628I (D new_value_);
extern _KLincremental_generic_functionGVKe Kfind_keyVKd;
extern _KLkeyword_methodGVKe Kfind_keyVKdMM0;
D Kfind_keyVKdMM0I (D collection_, D fn_, D Urest_, D skip_, D failure_);
static _KLpairGVKd K632;
static _KLpairGVKd K633;
static _KLpairGVKd K634;
static _KLkeyword_signatureGVKe K635;
static _KLbyte_stringGVKd_8 K636;
static _KLsimple_object_vectorGVKd_2 K637;
static _KLsimple_object_vectorGVKd_2 K638;
static _KLkeyword_signatureGVKe K639;
static _KLsimple_object_vectorGVKd_4 K640;
static _KLsimple_object_vectorGVKd_2 K641;
extern _KLsealed_generic_functionGVKe Kmap_intoVKd;
extern _KLsimple_methodGVKe Kmap_intoVKdMM0;
static _KLpairGVKd K644;
static _KLsignatureAvaluesGVKi K645;
static _KLbyte_stringGVKd_8 K646;
static _KLsimple_object_vectorGVKd_3 K647;
extern _KLsealed_generic_functionGVKe KmapVKd;
extern _KLsimple_methodGVKe KmapVKdMM0;
D KmapVKdMM0I (D, D, D);
static _KLpairGVKd K651;
static _KLsignatureAvaluesGVKi K652;
static _KLbyte_stringGVKd_3 K653;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_mapF658;
static D Kanonymous_of_mapF658I (D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K656;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K657;
extern _KLsimple_methodGVKe KsuppliedQVKi;
D KsuppliedQVKiI (D x_);
extern _KLsimple_methodGVKe KunsuppliedQVKi;
D KunsuppliedQVKiI (D x_);
extern _KLsimple_methodGVKe KunsuppliedVKi;
D KunsuppliedVKiI ();
static _KLpairGVKd K665;
static _KLpairGVKd K666;

/* Indirection variables */


/* Variables */

D map_into_rigid_oneVKi = &Kmap_into_rigid_oneVKi;
D map_into_stretchy_oneVKi = &Kmap_into_stretchy_oneVKi;
D not_found_objectVKi = &Knot_found_objectVKi;
D unsupplied_objectVKi = &Kunsupplied_objectVKi;
D unsuppliedVKi = &KunsuppliedVKi;
D unsuppliedQVKi = &KunsuppliedQVKi;
D suppliedQVKi = &KsuppliedQVKi;
D doVKd = &KdoVKd;
D mapVKd = &KmapVKd;
D map_asVKd = &Kmap_asVKd;
D map_intoVKd = &Kmap_intoVKd;
D anyQVKd = &KanyQVKd;
D everyQVKd = &KeveryQVKd;
D elementVKd = &KelementVKd;
D key_sequenceVKd = &Kkey_sequenceVKd;
D reduceVKd = &KreduceVKd;
D reduce1VKd = &Kreduce1VKd;
D memberQVKd = &KmemberQVKd;
D find_keyVKd = &Kfind_keyVKd;
D key_testVKd = &Kkey_testVKd;
D forward_iteration_protocolVKd = &Kforward_iteration_protocolVKd;
D backward_iteration_protocolVKd = &Kbackward_iteration_protocolVKd;
D addXVKd = &KaddXVKd;
D removeXVKd = &KremoveXVKd;
D Lkey_test_errorGVKi = &KLkey_test_errorGVKi;
D Lnot_found_errorGVKe = &KLnot_found_errorGVKe;
D Linvalid_index_errorGVKi = &KLinvalid_index_errorGVKi;
D Lsubscript_out_of_bounds_errorGVKi = &KLsubscript_out_of_bounds_errorGVKi;
D Literation_errorGVKi = &KLiteration_errorGVKi;
D Lempty_collection_errorGVKi = &KLempty_collection_errorGVKi;
D Pcurry_current_element_setterVKe = &KPcurry_current_element_setterVKe;
D do_oneVKi = &Kdo_oneVKi;
D map_as_oneVKi = &Kmap_as_oneVKi;
D anyQ_oneVKi = &KanyQ_oneVKi;
D everyQ_oneVKi = &KeveryQ_oneVKi;
D element_no_bounds_checkVKe = &Kelement_no_bounds_checkVKe;
D element_range_errorVKe = &Kelement_range_errorVKe;
D Lnatural_number_errorGVKi = &KLnatural_number_errorGVKi;
D element_typeVKe = &Kelement_typeVKe;
D maximum_sequence_keyVKi = &Kmaximum_sequence_keyVKi;

/* Objects */

_KLincremental_generic_functionGVKe Kelement_typeVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K599,
  (D) 1,
  &K600,
  &K579,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_36,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLnot_found_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K575,
  &K570,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLnot_found_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K570,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe KelementVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K567,
  (D) 1,
  &K568,
  &K532,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KelementVKdRD_dylanRD_31,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLinvalid_index_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K531,
  &K525,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLinvalid_index_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K525,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Kunsupplied_objectVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_0,
  &K410,
  &KPfalseVKi,
  &K523,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KEVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K522,
  &KEVKdMM14I
};

_KLsimple_methodGVKe KEVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K520,
  &KEVKdMM15I
};

_KLsimple_methodGVKe KEVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K518,
  &KEVKdMM16I
};

_KLsimple_methodGVKe KEVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K517,
  &KEVKdMM17I
};

_KLsimple_methodGVKe KEVKdMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K516,
  &KEVKdMM18I
};

_KLsimple_methodGVKe KEVKdMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K514,
  &KEVKdMM19I
};

_KLsimple_methodGVKe KEVKdMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K512,
  &KEVKdMM20I
};

_KLsimple_methodGVKe KEVKdMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K510,
  &KEVKdMM21I
};

_KLsimple_methodGVKe KEVKdMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K508,
  &KEVKdMM22I
};

_KLsimple_methodGVKe KEVKdMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K507,
  &KEVKdMM23I
};

_KLsimple_methodGVKe KEVKdMM24 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K506,
  &KEVKdMM24I
};

_KLsimple_methodGVKe KEVKdMM25 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K505,
  &KEVKdMM25I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_6,
  &KEVKdMM25
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_7,
  &KEVKdMM24
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_8,
  &KEVKdMM23
};

_KLsimple_methodGVKe KemptyQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K504,
  &KemptyQVKdMM0I
};

_KLsimple_methodGVKe KsizeVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K408,
  &KsizeVKdMM2I
};

_KLsimple_methodGVKe Kshallow_copyVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K503,
  &Kshallow_copyVKdMM2I
};

_KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K264,
  (D) 1,
  &K502,
  &K468,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_20,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kkey_testVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K466,
  (D) 1,
  &K467,
  &K459,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kkey_testVKdRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLunionGVKe KLmutable_collection_typeGVKi = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K458,
  &KLlimited_mutable_collection_typeGVKe
};

_KLclassGVKd KLkey_test_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K457,
  &K451,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLkey_test_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K451,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLiteration_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K450,
  &K444,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLiteration_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K444,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe Kelement_no_bounds_checkVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K440,
  (D) 1,
  &K441,
  &K414,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_24,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe Knot_found_objectVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_0,
  &K410,
  &KPfalseVKi,
  &K411,
  &KPempty_listVKi,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kmaximum_sequence_keyVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K408,
  (D) 1,
  &K409,
  &K406,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kmap_as_oneVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K383,
  (D) 9,
  &K384,
  &K367,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLclassGVKd KLsubscript_out_of_bounds_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K350,
  &K343,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsubscript_out_of_bounds_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K343,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe KmemberQVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K338,
  (D) 1,
  &K339,
  &K331,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_11,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe KaddXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K327,
  (D) 1,
  &K328,
  &K311,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_18,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe KreduceVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K308,
  (D) 1,
  &K309,
  &K306,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_8,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLempty_collection_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K303,
  &K297,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLempty_collection_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K297,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLnatural_number_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K296,
  &K286,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLnatural_number_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K286,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe KremoveXVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K282,
  (D) 1,
  &K283,
  &K267,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_19,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kbackward_iteration_protocolVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K264,
  (D) 1,
  &K265,
  &K243,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_13,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe KeveryQVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K241,
  &KPfalseVKi,
  &K242,
  &K240,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLincremental_generic_functionGVKe Kreduce1VKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K236,
  &KPfalseVKi,
  &K237,
  &K234,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_7,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe KanyQVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K210,
  &KPfalseVKi,
  &K211,
  &K209,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KasVKdMM37 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K203,
  &KasVKdMM37I
};

_KLincremental_generic_functionGVKe Kkey_sequenceVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K90,
  &KPfalseVKi,
  &K91,
  &K87,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kkey_sequenceVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsealed_generic_functionGVKe Kmap_asVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K84,
  &KPfalseVKi,
  &K85,
  &K83,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KdoVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K77,
  &KPfalseVKi,
  &K78,
  &K76,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KdoVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K77,
  &KdoVKdMM0I
};

static _KLpairGVKd K76 = {
  &KLpairGVKdW /* wrapper */,
  &KdoVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K77 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604041,
  &K79,
  &K80
};

static _KLbyte_stringGVKd_2 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "do"
};

static _KLsimple_object_vectorGVKd_2 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLcollectionGVKd
};

static _KLsimple_object_vectorGVKd_1 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K81
};

static _KLsingletonGVKd K81 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsimple_methodGVKe Kmap_asVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_3,
  &K84,
  &Kmap_asVKdMM0I
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_asVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K84 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604045,
  &K86,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLbyte_stringGVKd_6 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "map-as"
};

static _KLsimple_object_vectorGVKd_3 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_collection_typeGVKi,
  &KLfunctionGVKd,
  &KLcollectionGVKd
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_sequenceVKdMM0,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_sequenceVKdMM1,
  &K89
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_sequenceVKdMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K90 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LcollectionG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_12 K91 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "key-sequence"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_map_intoF197 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_map_intoF197I,
  (D) 1
};

static _KLbyte_stringGVKd_46 K94 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "Collections %= and %= have different key tests"
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K95 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_into_stretchy_oneVKi
};

_KLsealed_generic_functionGVKe Kmap_into_stretchy_oneVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 5,
  &K192,
  &K183,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K97 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_into_rigid_oneVKi
};

_KLsealed_generic_functionGVKe Kmap_into_rigid_oneVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 5,
  &K140,
  &K125,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K165,
  &Kmap_into_rigid_oneVKiMM0I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K163,
  &Kmap_into_rigid_oneVKiMM1I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K161,
  &Kmap_into_rigid_oneVKiMM2I
};

_KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM3 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K159,
  &Kmap_into_rigid_oneVKiMM3I
};

_KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM4 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K157,
  &Kmap_into_rigid_oneVKiMM4I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K155,
  &Kmap_into_rigid_oneVKiMM5I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K153,
  &Kmap_into_rigid_oneVKiMM6I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K151,
  &Kmap_into_rigid_oneVKiMM7I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K149,
  &Kmap_into_rigid_oneVKiMM8I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K147,
  &Kmap_into_rigid_oneVKiMM9I
};

_KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM10 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K145,
  &Kmap_into_rigid_oneVKiMM10I
};

_KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM11 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K143,
  &Kmap_into_rigid_oneVKiMM11I
};

_KLsimple_methodGVKe Kmap_into_rigid_oneVKiMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K141,
  &Kmap_into_rigid_oneVKiMM12I
};

static _KLpairGVKd K125 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM0,
  &K126
};

static _KLpairGVKd K126 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM1,
  &K127
};

static _KLpairGVKd K127 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM2,
  &K128
};

static _KLpairGVKd K128 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM3,
  &K129
};

static _KLpairGVKd K129 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM4,
  &K130
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM5,
  &K131
};

static _KLpairGVKd K131 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM6,
  &K132
};

static _KLpairGVKd K132 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM7,
  &K133
};

static _KLpairGVKd K133 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM8,
  &K134
};

static _KLpairGVKd K134 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM9,
  &K135
};

static _KLpairGVKd K135 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM10,
  &K136
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM11,
  &K137
};

static _KLpairGVKd K137 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM12,
  &K138
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM13,
  &K139
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_rigid_oneVKiMM14,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K140 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "map-into-rigid-one"
};

static _KLsignatureAvaluesGVKi K141 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K142,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K142 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLarrayGVKd,
  &KLarrayGVKd
};

static _KLsignatureAvaluesGVKi K143 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K144,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_sequenceGVKd,
  &KLsimple_object_vectorGVKd
};

static _KLsignatureAvaluesGVKi K145 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K146,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_sequenceGVKd,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K147 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K148,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_sequenceGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K149 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K150,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd
};

static _KLsignatureAvaluesGVKi K151 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K152,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_collectionGVKd,
  &KLarrayGVKd
};

static _KLsignatureAvaluesGVKi K153 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K154,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLarrayGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K155 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K156,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLarrayGVKd,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K157 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K158,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K158 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_collectionGVKd,
  &KLsimple_object_vectorGVKd
};

static _KLsignatureAvaluesGVKi K159 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K160,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_collectionGVKd,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K161 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K162,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_collectionGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K163 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K164,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K164 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_sequenceGVKd,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K165 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K166,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K166 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_collectionGVKd,
  &KLcollectionGVKd
};

_KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K165,
  &Kmap_into_stretchy_oneVKiMM0I
};

_KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM1 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K161,
  &Kmap_into_stretchy_oneVKiMM1I
};

_KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K163,
  &Kmap_into_stretchy_oneVKiMM2I
};

_KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K147,
  &Kmap_into_stretchy_oneVKiMM3I
};

_KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K155,
  &Kmap_into_stretchy_oneVKiMM4I
};

_KLsimple_methodGVKe Kmap_into_stretchy_oneVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K153,
  &Kmap_into_stretchy_oneVKiMM5I
};

_KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM6 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K195,
  &Kmap_into_stretchy_oneVKiMM6I
};

_KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM7 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K193,
  &Kmap_into_stretchy_oneVKiMM7I
};

static _KLpairGVKd K183 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM0,
  &K184
};

static _KLpairGVKd K184 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM1,
  &K185
};

static _KLpairGVKd K185 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM2,
  &K186
};

static _KLpairGVKd K186 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM3,
  &K187
};

static _KLpairGVKd K187 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM4,
  &K188
};

static _KLpairGVKd K188 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM5,
  &K189
};

static _KLpairGVKd K189 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM6,
  &K190
};

static _KLpairGVKd K190 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM7,
  &K191
};

static _KLpairGVKd K191 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_into_stretchy_oneVKiMM8,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K192 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "map-into-stretchy-one"
};

static _KLsignatureAvaluesGVKi K193 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K194,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K194 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLarrayGVKd,
  &KLsimple_object_vectorGVKd
};

static _KLsignatureAvaluesGVKi K195 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K196,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K196 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLarrayGVKd,
  &KLlistGVKd
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_map_asF202 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_map_asF202I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K200 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_as_oneVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K201 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_as_oneVKi
};

static _KLsignatureAvaluesGVKi K203 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K204,
  &KDsignature_LcollectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K204 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcollection_typeGVKi,
  &KLcollectionGVKd
};

_KLunionGVKe KLcollection_typeGVKi = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K206,
  &KLlimited_collection_typeGVKe
};

static _KLsubclassGVKe K206 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLcollectionGVKd
};

_KLsimple_methodGVKe KanyQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K210,
  &KanyQVKdMM0I
};

static _KLpairGVKd K209 = {
  &KLpairGVKdW /* wrapper */,
  &KanyQVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K210 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42992649,
  &K79
};

static _KLbyte_stringGVKd_4 K211 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "any?"
};

_KLsealed_generic_functionGVKe KanyQ_twoVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K219,
  &KPfalseVKi,
  &K220,
  &K217,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KanyQ_twoVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K222,
  &KanyQ_twoVKiMM0I
};

_KLsimple_methodGVKe KanyQ_twoVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K219,
  &KanyQ_twoVKiMM1I
};

static _KLpairGVKd K217 = {
  &KLpairGVKdW /* wrapper */,
  &KanyQ_twoVKiMM0,
  &K218
};

static _KLpairGVKd K218 = {
  &KLpairGVKdW /* wrapper */,
  &KanyQ_twoVKiMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K219 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K221
};

static _KLbyte_stringGVKd_8 K220 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "any?-two"
};

static _KLsimple_object_vectorGVKd_3 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLcollectionGVKd,
  &KLcollectionGVKd
};

static _KLsignatureGVKe K222 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K223
};

static _KLsimple_object_vectorGVKd_3 K223 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd
};

_KLsealed_generic_functionGVKe KeveryQ_twoVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K219,
  &KPfalseVKi,
  &K231,
  &K229,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KeveryQ_twoVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K222,
  &KeveryQ_twoVKiMM0I
};

_KLsimple_methodGVKe KeveryQ_twoVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K219,
  &KeveryQ_twoVKiMM1I
};

static _KLpairGVKd K229 = {
  &KLpairGVKdW /* wrapper */,
  &KeveryQ_twoVKiMM0,
  &K230
};

static _KLpairGVKd K230 = {
  &KLpairGVKdW /* wrapper */,
  &KeveryQ_twoVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K231 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "every?-two"
};

_KLsimple_methodGVKe Kreduce1VKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K236,
  &Kreduce1VKdMM0I
};

static _KLpairGVKd K234 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce1VKdMM0,
  &K235
};

static _KLpairGVKd K235 = {
  &KLpairGVKdW /* wrapper */,
  &Kreduce1VKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K236 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K79
};

static _KLbyte_stringGVKd_7 K237 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "reduce1"
};

static _KLbyte_stringGVKd_39 K238 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "Reduce1 undefined for empty collections"
};

_KLsimple_methodGVKe KeveryQVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K241,
  &KeveryQVKdMM0I
};

static _KLpairGVKd K240 = {
  &KLpairGVKdW /* wrapper */,
  &KeveryQVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K241 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604041,
  &K79,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_6 K242 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "every?"
};

static _KLpairGVKd K243 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM0,
  &K244
};

static _KLpairGVKd K244 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM1,
  &K245
};

static _KLpairGVKd K245 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM2,
  &K246
};

static _KLpairGVKd K246 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM3,
  &K247
};

static _KLpairGVKd K247 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM4,
  &K248
};

static _KLpairGVKd K248 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM5,
  &K249
};

static _KLpairGVKd K249 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM6,
  &K250
};

static _KLpairGVKd K250 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM7,
  &K251
};

static _KLpairGVKd K251 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM8,
  &K252
};

static _KLpairGVKd K252 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM9,
  &K253
};

static _KLpairGVKd K253 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM10,
  &K254
};

static _KLpairGVKd K254 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM11,
  &K255
};

static _KLpairGVKd K255 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM12,
  &K256
};

static _KLpairGVKd K256 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM13,
  &K257
};

static _KLpairGVKd K257 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM14,
  &K258
};

static _KLpairGVKd K258 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM15,
  &K259
};

static _KLpairGVKd K259 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM16,
  &K260
};

static _KLpairGVKd K260 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM17,
  &K261
};

static _KLpairGVKd K261 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM18,
  &K262
};

static _KLpairGVKd K262 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM19,
  &K263
};

static _KLpairGVKd K263 = {
  &KLpairGVKdW /* wrapper */,
  &Kbackward_iteration_protocolVKdMM20,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K264 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_LcollectionG_typesVKi,
  &K266
};

static _KLbyte_stringGVKd_27 K265 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "backward-iteration-protocol"
};

static _KLsimple_object_vectorGVKd_8 K266 = {
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

static _KLpairGVKd K267 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM0,
  &K268
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM1,
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM2,
  &K270
};

static _KLpairGVKd K270 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM3,
  &K271
};

static _KLpairGVKd K271 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM4,
  &K272
};

static _KLpairGVKd K272 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM5,
  &K273
};

static _KLpairGVKd K273 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM6,
  &K274
};

static _KLpairGVKd K274 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM7,
  &K275
};

static _KLpairGVKd K275 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM8,
  &K276
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM9,
  &K277
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM10,
  &K278
};

static _KLpairGVKd K278 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM11,
  &K279
};

static _KLpairGVKd K279 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM12,
  &K280
};

static _KLpairGVKd K280 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM13,
  &K281
};

static _KLpairGVKd K281 = {
  &KLpairGVKdW /* wrapper */,
  &KremoveXVKdMM14,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K282 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K284,
  &K285,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LcollectionG_typesVKi
};

static _KLbyte_stringGVKd_7 K283 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "remove!"
};

static _KLsimple_object_vectorGVKd_2 K284 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcollectionGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K285 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLimplementation_classGVKe K286 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLnatural_number_errorGVKi,
  &KLnatural_number_errorGVKiW,
  &KPfalseVKi,
  &K287,
  (D) 6441,
  &KLnatural_number_errorGZ32ZconstructorVKiMM0,
  &K290,
  &K291,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K287 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLnatural_number_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K292,
  &key_mep_2,
  &KLnatural_number_errorGZ32ZconstructorVKiMM0I,
  &K293
};

static _KLsimple_object_vectorGVKd_1 K290 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K291 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLnatural_number_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K292 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K294,
  &KDsignature_LobjectG_typesVKi,
  &K295
};

static _KLsimple_object_vectorGVKd_4 K293 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K294 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K295 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLnatural_number_errorGVKi
};

static _KLbyte_stringGVKd_22 K296 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<natural-number-error>"
};

static _KLimplementation_classGVKe K297 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLempty_collection_errorGVKi,
  &KLempty_collection_errorGVKiW,
  &KPfalseVKi,
  &K287,
  (D) 6433,
  &KLempty_collection_errorGZ32ZconstructorVKiMM0,
  &K290,
  &K300,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLempty_collection_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K301,
  &key_mep_2,
  &KLempty_collection_errorGZ32ZconstructorVKiMM0I,
  &K293
};

static _KLsimple_object_vectorGVKd_7 K300 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLempty_collection_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K301 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K294,
  &KDsignature_LobjectG_typesVKi,
  &K302
};

static _KLsimple_object_vectorGVKd_1 K302 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLempty_collection_errorGVKi
};

static _KLbyte_stringGVKd_24 K303 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<empty-collection-error>"
};

_KLsimple_methodGVKe KreduceVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K308,
  &KreduceVKdMM0I
};

static _KLpairGVKd K306 = {
  &KLpairGVKdW /* wrapper */,
  &KreduceVKdMM0,
  &K307
};

static _KLpairGVKd K307 = {
  &KLpairGVKdW /* wrapper */,
  &KreduceVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K308 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K310
};

static _KLbyte_stringGVKd_6 K309 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "reduce"
};

static _KLsimple_object_vectorGVKd_3 K310 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLcollectionGVKd
};

static _KLpairGVKd K311 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM0,
  &K312
};

static _KLpairGVKd K312 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM1,
  &K313
};

static _KLpairGVKd K313 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM2,
  &K314
};

static _KLpairGVKd K314 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM3,
  &K315
};

static _KLpairGVKd K315 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM4,
  &K316
};

static _KLpairGVKd K316 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM5,
  &K317
};

static _KLpairGVKd K317 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM6,
  &K318
};

static _KLpairGVKd K318 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM7,
  &K319
};

static _KLpairGVKd K319 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM8,
  &K320
};

static _KLpairGVKd K320 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM9,
  &K321
};

static _KLpairGVKd K321 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM10,
  &K322
};

static _KLpairGVKd K322 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM11,
  &K323
};

static _KLpairGVKd K323 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM12,
  &K324
};

static _KLpairGVKd K324 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM13,
  &K325
};

static _KLpairGVKd K325 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM14,
  &K326
};

static _KLpairGVKd K326 = {
  &KLpairGVKdW /* wrapper */,
  &KaddXVKdMM15,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K327 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K284,
  &KDsignature_LcollectionG_typesVKi
};

static _KLbyte_stringGVKd_4 K328 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "add!"
};

_KLkeyword_methodGVKe KmemberQVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K338,
  &key_mep_4,
  &KmemberQVKdMM0I,
  &K342
};

static _KLpairGVKd K331 = {
  &KLpairGVKdW /* wrapper */,
  &KmemberQVKdMM0,
  &K332
};

static _KLpairGVKd K332 = {
  &KLpairGVKdW /* wrapper */,
  &KmemberQVKdMM1,
  &K333
};

static _KLpairGVKd K333 = {
  &KLpairGVKdW /* wrapper */,
  &KmemberQVKdMM2,
  &K334
};

static _KLpairGVKd K334 = {
  &KLpairGVKdW /* wrapper */,
  &KmemberQVKdMM3,
  &K335
};

static _KLpairGVKd K335 = {
  &KLpairGVKdW /* wrapper */,
  &KmemberQVKdMM4,
  &K336
};

static _KLpairGVKd K336 = {
  &KLpairGVKdW /* wrapper */,
  &KmemberQVKdMM5,
  &K337
};

static _KLpairGVKd K337 = {
  &KLpairGVKdW /* wrapper */,
  &KmemberQVKdMM6,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K338 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K340,
  &K341,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_7 K339 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "member?"
};

static _KLsimple_object_vectorGVKd_2 K340 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLcollectionGVKd
};

static _KLsimple_object_vectorGVKd_1 K341 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLsimple_object_vectorGVKd_2 K342 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

static _KLimplementation_classGVKe K343 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLsubscript_out_of_bounds_errorGVKi,
  &KLsubscript_out_of_bounds_errorGVKiW,
  &KPfalseVKi,
  &K287,
  (D) 6417,
  &KLsubscript_out_of_bounds_errorGZ32ZconstructorVKiMM0,
  &K346,
  &K347,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsubscript_out_of_bounds_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K348,
  &key_mep_2,
  &KLsubscript_out_of_bounds_errorGZ32ZconstructorVKiMM0I,
  &K293
};

static _KLsimple_object_vectorGVKd_1 K346 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinvalid_index_errorGVKi
};

static _KLsimple_object_vectorGVKd_9 K347 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLnot_found_errorGVKe,
  &KLinvalid_index_errorGVKi,
  &KLsubscript_out_of_bounds_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K348 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K294,
  &KDsignature_LobjectG_typesVKi,
  &K349
};

static _KLsimple_object_vectorGVKd_1 K349 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsubscript_out_of_bounds_errorGVKi
};

static _KLbyte_stringGVKd_31 K350 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "<subscript-out-of-bounds-error>"
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K404,
  &Kmap_as_oneVKiMM0I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K402,
  &Kmap_as_oneVKiMM1I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K400,
  &Kmap_as_oneVKiMM2I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K397,
  &Kmap_as_oneVKiMM3I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K394,
  &Kmap_as_oneVKiMM4I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K391,
  &Kmap_as_oneVKiMM5I
};

_KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM6 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K388,
  &Kmap_as_oneVKiMM6I
};

_KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM7 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K385,
  &Kmap_as_oneVKiMM7I
};

static _KLpairGVKd K367 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM0,
  &K368
};

static _KLpairGVKd K368 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM1,
  &K369
};

static _KLpairGVKd K369 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM2,
  &K370
};

static _KLpairGVKd K370 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM3,
  &K371
};

static _KLpairGVKd K371 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM4,
  &K372
};

static _KLpairGVKd K372 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM5,
  &K373
};

static _KLpairGVKd K373 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM6,
  &K374
};

static _KLpairGVKd K374 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM7,
  &K375
};

static _KLpairGVKd K375 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM8,
  &K376
};

static _KLpairGVKd K376 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM9,
  &K377
};

static _KLpairGVKd K377 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM10,
  &K378
};

static _KLpairGVKd K378 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM11,
  &K379
};

static _KLpairGVKd K379 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM12,
  &K380
};

static _KLpairGVKd K380 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM13,
  &K381
};

static _KLpairGVKd K381 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM14,
  &K382
};

static _KLpairGVKd K382 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_as_oneVKiMM15,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K383 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K86,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLbyte_stringGVKd_10 K384 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "map-as-one"
};

static _KLsignatureAvaluesGVKi K385 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K386,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K386 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K387,
  &KLfunctionGVKd,
  &KLexplicit_key_collectionGVKd
};

static _KLsingletonGVKd K387 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K388 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K389,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K389 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K390,
  &KLfunctionGVKd,
  &KLexplicit_key_collectionGVKd
};

static _KLsubclassGVKe K390 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLvectorGVKd
};

static _KLsignatureAvaluesGVKi K391 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K392,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K392 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K393,
  &KLfunctionGVKd,
  &KLsimple_object_vectorGVKd
};

static _KLsingletonGVKd K393 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_object_vectorGVKd
};

static _KLsignatureAvaluesGVKi K394 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K395,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K395 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K396,
  &KLfunctionGVKd,
  &KLarrayGVKd
};

static _KLsubclassGVKe K396 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLvectorGVKd
};

static _KLsignatureAvaluesGVKi K397 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K398,
  &KDsignature_LarrayG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K398 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K399,
  &KLfunctionGVKd,
  &KLarrayGVKd
};

static _KLsubclassGVKe K399 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLarrayGVKd
};

static _KLsignatureAvaluesGVKi K400 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K401,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K401 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K387,
  &KLfunctionGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K402 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K403,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K403 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_collection_typeGVKi,
  &KLfunctionGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K404 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K405,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K405 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_collection_typeGVKi,
  &KLfunctionGVKd,
  &KLexplicit_key_collectionGVKd
};

static _KLpairGVKd K406 = {
  &KLpairGVKdW /* wrapper */,
  &Kmaximum_sequence_keyVKiMM0,
  &K407
};

static _KLpairGVKd K407 = {
  &KLpairGVKdW /* wrapper */,
  &Kmaximum_sequence_keyVKiMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K408 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LcollectionG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_20 K409 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "maximum-sequence-key"
};

static _KLsignatureGVKe K410 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_16 K411 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "not-found-object"
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K440,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM0I,
  &K443
};

static _KLpairGVKd K414 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM0,
  &K415
};

static _KLpairGVKd K415 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM1,
  &K416
};

static _KLpairGVKd K416 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM2,
  &K417
};

static _KLpairGVKd K417 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM3,
  &K418
};

static _KLpairGVKd K418 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM4,
  &K419
};

static _KLpairGVKd K419 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM5,
  &K420
};

static _KLpairGVKd K420 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM6,
  &K421
};

static _KLpairGVKd K421 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM7,
  &K422
};

static _KLpairGVKd K422 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM8,
  &K423
};

static _KLpairGVKd K423 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM9,
  &K424
};

static _KLpairGVKd K424 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM10,
  &K425
};

static _KLpairGVKd K425 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM11,
  &K426
};

static _KLpairGVKd K426 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM12,
  &K427
};

static _KLpairGVKd K427 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM13,
  &K428
};

static _KLpairGVKd K428 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM14,
  &K429
};

static _KLpairGVKd K429 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM15,
  &K430
};

static _KLpairGVKd K430 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM16,
  &K431
};

static _KLpairGVKd K431 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM17,
  &K432
};

static _KLpairGVKd K432 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM18,
  &K433
};

static _KLpairGVKd K433 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM19,
  &K434
};

static _KLpairGVKd K434 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM20,
  &K435
};

static _KLpairGVKd K435 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM21,
  &K436
};

static _KLpairGVKd K436 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM22,
  &K437
};

static _KLpairGVKd K437 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM23,
  &K438
};

static _KLpairGVKd K438 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM24,
  &K439
};

static _KLpairGVKd K439 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_no_bounds_checkVKeMM25,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K440 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K284,
  &K442,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_23 K441 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "element-no-bounds-check"
};

static _KLsimple_object_vectorGVKd_1 K442 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_2 K443 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLimplementation_classGVKe K444 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLiteration_errorGVKi,
  &KLiteration_errorGVKiW,
  &KPfalseVKi,
  &K287,
  (D) 6425,
  &KLiteration_errorGZ32ZconstructorVKiMM0,
  &K290,
  &K447,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLiteration_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K448,
  &key_mep_2,
  &KLiteration_errorGZ32ZconstructorVKiMM0I,
  &K293
};

static _KLsimple_object_vectorGVKd_7 K447 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLiteration_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K448 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K294,
  &KDsignature_LobjectG_typesVKi,
  &K449
};

static _KLsimple_object_vectorGVKd_1 K449 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLiteration_errorGVKi
};

static _KLbyte_stringGVKd_17 K450 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<iteration-error>"
};

static _KLimplementation_classGVKe K451 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLkey_test_errorGVKi,
  &KLkey_test_errorGVKiW,
  &KPfalseVKi,
  &K287,
  (D) 6393,
  &KLkey_test_errorGZ32ZconstructorVKiMM0,
  &K290,
  &K454,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLkey_test_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K455,
  &key_mep_2,
  &KLkey_test_errorGZ32ZconstructorVKiMM0I,
  &K293
};

static _KLsimple_object_vectorGVKd_7 K454 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLkey_test_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K455 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K294,
  &KDsignature_LobjectG_typesVKi,
  &K456
};

static _KLsimple_object_vectorGVKd_1 K456 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLkey_test_errorGVKi
};

static _KLbyte_stringGVKd_16 K457 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<key-test-error>"
};

static _KLsubclassGVKe K458 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLmutable_collectionGVKd
};

static _KLpairGVKd K459 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_testVKdMM0,
  &K460
};

static _KLpairGVKd K460 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_testVKdMM1,
  &K461
};

static _KLpairGVKd K461 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_testVKdMM2,
  &K462
};

static _KLpairGVKd K462 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_testVKdMM3,
  &K463
};

static _KLpairGVKd K463 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_testVKdMM4,
  &K464
};

static _KLpairGVKd K464 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_testVKdMM5,
  &K465
};

static _KLpairGVKd K465 = {
  &KLpairGVKdW /* wrapper */,
  &Kkey_testVKdMM6,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K466 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LcollectionG_typesVKi,
  &KDsignature_LfunctionG_typesVKi
};

static _KLbyte_stringGVKd_8 K467 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "key-test"
};

static _KLpairGVKd K468 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM0,
  &K469
};

static _KLpairGVKd K469 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM1,
  &K470
};

static _KLpairGVKd K470 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM2,
  &K471
};

static _KLpairGVKd K471 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM3,
  &K472
};

static _KLpairGVKd K472 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM4,
  &K473
};

static _KLpairGVKd K473 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM5,
  &K474
};

static _KLpairGVKd K474 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM6,
  &K475
};

static _KLpairGVKd K475 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM7,
  &K476
};

static _KLpairGVKd K476 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM8,
  &K477
};

static _KLpairGVKd K477 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM9,
  &K478
};

static _KLpairGVKd K478 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM10,
  &K479
};

static _KLpairGVKd K479 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM11,
  &K480
};

static _KLpairGVKd K480 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM12,
  &K481
};

static _KLpairGVKd K481 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM13,
  &K482
};

static _KLpairGVKd K482 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM14,
  &K483
};

static _KLpairGVKd K483 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM15,
  &K484
};

static _KLpairGVKd K484 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM16,
  &K485
};

static _KLpairGVKd K485 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM17,
  &K486
};

static _KLpairGVKd K486 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM18,
  &K487
};

static _KLpairGVKd K487 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM19,
  &K488
};

static _KLpairGVKd K488 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM20,
  &K489
};

static _KLpairGVKd K489 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM21,
  &K490
};

static _KLpairGVKd K490 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM22,
  &K491
};

static _KLpairGVKd K491 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM23,
  &K492
};

static _KLpairGVKd K492 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM24,
  &K493
};

static _KLpairGVKd K493 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM25,
  &K494
};

static _KLpairGVKd K494 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM26,
  &K495
};

static _KLpairGVKd K495 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM27,
  &K496
};

static _KLpairGVKd K496 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM28,
  &K497
};

static _KLpairGVKd K497 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM29,
  &K498
};

static _KLpairGVKd K498 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM30,
  &K499
};

static _KLpairGVKd K499 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM31,
  &K500
};

static _KLpairGVKd K500 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM32,
  &K501
};

static _KLpairGVKd K501 = {
  &KLpairGVKdW /* wrapper */,
  &Kforward_iteration_protocolVKdMM33,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K502 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "forward-iteration-protocol"
};

static _KLsignatureAvaluesGVKi K503 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LcollectionG_typesVKi,
  &KDsignature_LcollectionG_typesVKi
};

static _KLsignatureAvaluesGVKi K504 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LcollectionG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K505 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K506 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lempty_listG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K507 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LpairG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K508 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K509,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K509 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K510 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K511,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K511 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K512 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K513,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K513 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcollectionGVKd,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K514 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K515,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K515 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K516 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LarrayG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K517 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LsequenceG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K518 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K519,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K519 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcollectionGVKd,
  &KLsequenceGVKd
};

static _KLsignatureAvaluesGVKi K520 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K521,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K521 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K522 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LcollectionG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_17 K523 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "unsupplied-object"
};

static _KLbyte_stringGVKd_28 K524 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "ELEMENT outside of range: %="
};

static _KLimplementation_classGVKe K525 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLinvalid_index_errorGVKi,
  &KLinvalid_index_errorGVKiW,
  &KPfalseVKi,
  &K287,
  (D) 6409,
  &KLinvalid_index_errorGZ32ZconstructorVKiMM0,
  &K528,
  &K529,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K666,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLinvalid_index_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K530,
  &key_mep_2,
  &KLinvalid_index_errorGZ32ZconstructorVKiMM0I,
  &K293
};

static _KLsimple_object_vectorGVKd_1 K528 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLnot_found_errorGVKe
};

static _KLsimple_object_vectorGVKd_8 K529 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLnot_found_errorGVKe,
  &KLinvalid_index_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K530 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K294,
  &KDsignature_LobjectG_typesVKi,
  &K346
};

static _KLbyte_stringGVKd_21 K531 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<invalid-index-error>"
};

static _KLpairGVKd K532 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM0,
  &K533
};

static _KLpairGVKd K533 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM1,
  &K534
};

static _KLpairGVKd K534 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM2,
  &K535
};

static _KLpairGVKd K535 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM3,
  &K536
};

static _KLpairGVKd K536 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM4,
  &K537
};

static _KLpairGVKd K537 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM5,
  &K538
};

static _KLpairGVKd K538 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM6,
  &K539
};

static _KLpairGVKd K539 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM7,
  &K540
};

static _KLpairGVKd K540 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM8,
  &K541
};

static _KLpairGVKd K541 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM9,
  &K542
};

static _KLpairGVKd K542 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM10,
  &K543
};

static _KLpairGVKd K543 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM11,
  &K544
};

static _KLpairGVKd K544 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM12,
  &K545
};

static _KLpairGVKd K545 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM13,
  &K546
};

static _KLpairGVKd K546 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM14,
  &K547
};

static _KLpairGVKd K547 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM15,
  &K548
};

static _KLpairGVKd K548 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM16,
  &K549
};

static _KLpairGVKd K549 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM17,
  &K550
};

static _KLpairGVKd K550 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM18,
  &K551
};

static _KLpairGVKd K551 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM19,
  &K552
};

static _KLpairGVKd K552 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM20,
  &K553
};

static _KLpairGVKd K553 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM21,
  &K554
};

static _KLpairGVKd K554 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM22,
  &K555
};

static _KLpairGVKd K555 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM23,
  &K556
};

static _KLpairGVKd K556 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM24,
  &K557
};

static _KLpairGVKd K557 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM25,
  &K558
};

static _KLpairGVKd K558 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM26,
  &K559
};

static _KLpairGVKd K559 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM27,
  &K560
};

static _KLpairGVKd K560 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM28,
  &K561
};

static _KLpairGVKd K561 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM29,
  &K562
};

static _KLpairGVKd K562 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM30,
  &K563
};

static _KLpairGVKd K563 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM31,
  &K564
};

static _KLpairGVKd K564 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM32,
  &K565
};

static _KLpairGVKd K565 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM33,
  &K566
};

static _KLpairGVKd K566 = {
  &KLpairGVKdW /* wrapper */,
  &KelementVKdMM34,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K567 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K569,
  &K442,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_7 K568 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "element"
};

static _KLsimple_object_vectorGVKd_2 K569 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_with_elementsGVKe,
  &KLobjectGVKd
};

static _KLimplementation_classGVKe K570 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLnot_found_errorGVKe,
  &KLnot_found_errorGVKeW,
  &KPfalseVKi,
  &K287,
  (D) 6401,
  &KLnot_found_errorGZ32ZconstructorVKiMM0,
  &K290,
  &K573,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K665,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLnot_found_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K574,
  &key_mep_2,
  &KLnot_found_errorGZ32ZconstructorVKiMM0I,
  &K293
};

static _KLsimple_object_vectorGVKd_7 K573 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLnot_found_errorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K574 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K294,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lnot_found_errorG_typesVKi
};

static _KLbyte_stringGVKd_17 K575 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<not-found-error>"
};

_KLsimple_methodGVKe Kelement_typeVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K601,
  &Kelement_typeVKeMM1I
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_36 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_35,
  (D) 5,
  &KLlimited_collectionGVKe
};

static _KLpairGVKd K579 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM0,
  &K580
};

static _KLpairGVKd K580 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM1,
  &K581
};

static _KLpairGVKd K581 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM2,
  &K582
};

static _KLpairGVKd K582 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM3,
  &K583
};

static _KLpairGVKd K583 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM4,
  &K584
};

static _KLpairGVKd K584 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM5,
  &K585
};

static _KLpairGVKd K585 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM6,
  &K586
};

static _KLpairGVKd K586 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM7,
  &K587
};

static _KLpairGVKd K587 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM8,
  &K588
};

static _KLpairGVKd K588 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM9,
  &K589
};

static _KLpairGVKd K589 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM10,
  &K590
};

static _KLpairGVKd K590 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM11,
  &K591
};

static _KLpairGVKd K591 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM12,
  &K592
};

static _KLpairGVKd K592 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM13,
  &K593
};

static _KLpairGVKd K593 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM14,
  &K594
};

static _KLpairGVKd K594 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM15,
  &K595
};

static _KLpairGVKd K595 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM16,
  &K596
};

static _KLpairGVKd K596 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM17,
  &K597
};

static _KLpairGVKd K597 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM18,
  &K598
};

static _KLpairGVKd K598 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_typeVKeMM19,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K599 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LcollectionG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_12 K600 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "element-type"
};

static _KLsignatureAvaluesGVKi K601 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LcollectionG_typesVKi,
  &K602
};

static _KLsimple_object_vectorGVKd_1 K602 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K603
};

static _KLsingletonGVKd K603 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kelement_range_errorVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K605,
  &Kelement_range_errorVKeI
};

static _KLsignatureAvaluesGVKi K605 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K284,
  &K606
};

static _KLsimple_object_vectorGVKd_1 K606 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbottomGVKe
};

_KLsealed_generic_functionGVKe KeveryQ_oneVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K611,
  &KPfalseVKi,
  &K612,
  &K610,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KeveryQ_oneVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K611,
  &KeveryQ_oneVKiMM0I
};

static _KLpairGVKd K610 = {
  &KLpairGVKdW /* wrapper */,
  &KeveryQ_oneVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K611 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K79,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_10 K612 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "every?-one"
};

_KLsealed_generic_functionGVKe KanyQ_oneVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K236,
  &KPfalseVKi,
  &K617,
  &K616,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KanyQ_oneVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K236,
  &KanyQ_oneVKiMM0I
};

static _KLpairGVKd K616 = {
  &KLpairGVKdW /* wrapper */,
  &KanyQ_oneVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K617 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "any?-one"
};

_KLsealed_generic_functionGVKe Kdo_oneVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K622,
  &KPfalseVKi,
  &K623,
  &K621,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kdo_oneVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K622,
  &Kdo_oneVKiMM0I
};

static _KLpairGVKd K621 = {
  &KLpairGVKdW /* wrapper */,
  &Kdo_oneVKiMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K622 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K79,
  &K80
};

static _KLbyte_stringGVKd_6 K623 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "do-one"
};

_KLsimple_methodGVKe KPcurry_current_element_setterVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPcurry_current_element_setterVKeI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_Pcurry_current_element_setterF628 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_Pcurry_current_element_setterF628I,
  (D) 1
};

_KLincremental_generic_functionGVKe Kfind_keyVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K635,
  &KPfalseVKi,
  &K636,
  &K632,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kfind_keyVKdRD_dylanRD_0,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kfind_keyVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K639,
  &key_mep_5,
  &Kfind_keyVKdMM0I,
  &K640
};

static _KLpairGVKd K632 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_keyVKdMM0,
  &K633
};

static _KLpairGVKd K633 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_keyVKdMM1,
  &K634
};

static _KLpairGVKd K634 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_keyVKdMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K635 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K637,
  &K638,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_8 K636 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "find-key"
};

static _KLsimple_object_vectorGVKd_2 K637 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcollectionGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_2 K638 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJskip_,
  &KJfailure_
};

static _KLkeyword_signatureGVKe K639 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K637,
  &K638,
  &K641
};

static _KLsimple_object_vectorGVKd_4 K640 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJskip_,
  (D) 1,
  &KJfailure_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K641 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kmap_intoVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_3,
  &K645,
  &KPfalseVKi,
  &K646,
  &K644,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kmap_intoVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_3,
  &K645,
  &Kmap_intoVKdMM0I
};

static _KLpairGVKd K644 = {
  &KLpairGVKdW /* wrapper */,
  &Kmap_intoVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K645 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604045,
  &K647,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLbyte_stringGVKd_8 K646 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "map-into"
};

static _KLsimple_object_vectorGVKd_3 K647 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_collectionGVKd,
  &KLfunctionGVKd,
  &KLcollectionGVKd
};

_KLsealed_generic_functionGVKe KmapVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K652,
  &KPfalseVKi,
  &K653,
  &K651,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KmapVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K652,
  &KmapVKdMM0I
};

static _KLpairGVKd K651 = {
  &KLpairGVKdW /* wrapper */,
  &KmapVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K652 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604041,
  &K79,
  &KDsignature_LcollectionG_typesVKi
};

static _KLbyte_stringGVKd_3 K653 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "map"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_mapF658 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_mapF658I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K656 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_as_oneVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K657 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_as_oneVKi
};

_KLsimple_methodGVKe KsuppliedQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KsuppliedQVKiI
};

_KLsimple_methodGVKe KunsuppliedQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KunsuppliedQVKiI
};

_KLsimple_methodGVKe KunsuppliedVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K410,
  &KunsuppliedVKiI
};

static _KLpairGVKd K665 = {
  &KLpairGVKdW /* wrapper */,
  &KLinvalid_index_errorGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K666 = {
  &KLpairGVKdW /* wrapper */,
  &KLsubscript_out_of_bounds_errorGVKi,
  &KPempty_listVKi
};

/* Code */

D Kelement_range_errorVKeI (D collection_, D key_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1061
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1069
  T4.vector_element_[0] = key_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1069
  T2 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1067
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K524;
  T5.vector_element_[2] = &KJformat_arguments_;
  T5.vector_element_[3] = T2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1067
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLinvalid_index_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1067
  T6_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1061
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM14I (D c1_, D c2_) {
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
  D T15T, T15;
  D eq_T, eq_;
  D T17;
  D T18;
  D k_;
  D T20;
  D e2_;
  D T22;
  D T23;
  D T24_0;
  D T25_0;
  D T26_0;
  D T27;
  D T28;
  D T29;
  D T30;
  _KLsimple_object_vectorGVKd_2 T31 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T32;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:913
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
  T3 = CONGRUENT_CALL1(c1_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
  T4 = CONGRUENT_CALL1(c2_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  T28 = primitive_idQ(T3,T4);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  T27 = primitive_not(T28);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T5 = CONGRUENT_CALL1(c1_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T6 = CONGRUENT_CALL1(c2_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T29 = CONGRUENT_CALL2(T5, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
    T30 = primitive_not(T29);
    T7 = T30;
  } else {
    T7 = T27;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
    T25_0 = &KPfalseVKi;
    T26_0 = T25_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T8 = CONGRUENT_CALL1(c1_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T10 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T11 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T12 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T13 = MV_GET_ELT(4);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T14 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T15T = T9;
    eq_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
      T15 = T15T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
      eq_ = eq_T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
      T17 = CALL3(T12, c1_, T15, T10);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
      if (T17 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
        T18 = CALL2(T14, c1_, T15);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
        k_ = CALL2(T13, c1_, T15);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
        if (eq_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
          T20 = CALL2(T11, c1_, T15);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:917
          T31.vector_element_[0] = &KJdefault_;
          T31.vector_element_[1] = &Knot_found_objectVKi;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:917
          CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
          e2_ = CONGRUENT_CALL3(c2_, k_, &T31);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:918
          T32 = primitive_idQ(e2_,&Knot_found_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:918
          if (T32 != &KPfalseVKi) {
            T23 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:918
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T22 = CONGRUENT_CALL2(T18, e2_);
            T23 = T22;
          }
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:918
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
          T15T = T20;
          eq_T = T23;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:922
      T24_0 = eq_;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:915
    T26_0 = T24_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:914
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:913
  MV_SET_COUNT(1);
  return(T26_0);
}

D KEVKdMM15I (D c1_, D c2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  DWORD key_T, key_;
  D eq_T, eq_;
  D T13;
  D T14;
  D T15;
  D e2_;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D T21_0;
  D T22_0;
  D T23_0;
  D T24_0;
  D T25;
  DWORD T26;
  D T27;
  _KLsimple_object_vectorGVKd_2 T28 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T29;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:932
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:933
  CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
  T3 = CONGRUENT_CALL1(c2_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:933
  T25 = primitive_idQ(T3,&KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:933
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T4 = CONGRUENT_CALL1(c1_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    T5 = T4;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    T6 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    T7 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    T8 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    T9 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    T10T = T5;
    key_T = 1;
    eq_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      T10 = T10T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      key_ = key_T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      T27 = primitive_cast_raw_as_integer(key_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      eq_ = eq_T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      T13 = CALL3(T8, c1_, T10, T6);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      if (T13 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
        T14 = CALL2(T9, c1_, T10);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
        if (eq_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
          T15 = CALL2(T7, c1_, T10);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
          T26 = primitive_machine_word_add_signal_overflow(key_,4);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:937
          T28.vector_element_[0] = &KJdefault_;
          T28.vector_element_[1] = &Knot_found_objectVKi;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:937
          CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
          e2_ = CONGRUENT_CALL3(c2_, T27, &T28);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:938
          T29 = primitive_idQ(e2_,&Knot_found_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:938
          if (T29 != &KPfalseVKi) {
            T18 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:938
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T17 = CONGRUENT_CALL2(T14, e2_);
            T18 = T17;
          }
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:938
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
          T10T = T15;
          key_T = T26;
          eq_T = T18;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:942
      if (eq_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:942
        CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
        T19 = CONGRUENT_CALL1(c2_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:942
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T20_0 = CONGRUENT_CALL2(T27, T19);
        T22_0 = T20_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:942
        T21_0 = &KPfalseVKi;
        T22_0 = T21_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:942
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:935
    T24_0 = T22_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:933
    T23_0 = &KPfalseVKi;
    T24_0 = T23_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:933
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:932
  MV_SET_COUNT(1);
  return(T24_0);
}

D KEVKdMM16I (D c1_, D c2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:947
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:948
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(c2_, c1_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:947
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM17I (D c1_, D c2_) {
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;
  D one_initial_state_;
  D one_limit_;
  D one_next_state_;
  D one_finished_stateQ_;
  D one_current_element_;
  D T9_0;
  D T9_1;
  D T9_2;
  D T9_3;
  D T9_4;
  D T9_5;
  D T9_6;
  D T9_7;
  D two_initial_state_;
  D two_limit_;
  D two_next_state_;
  D two_finished_stateQ_;
  D two_current_element_;
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
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D s1F30T, s1F30;
  D s2F31T, s2F31;
  D T32_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:954
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:955
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3_0 = CONGRUENT_CALL1(c1_);
  T3_1 = MV_GET_ELT(1);
  T3_2 = MV_GET_ELT(2);
  T3_3 = MV_GET_ELT(3);
  T3_4 = MV_GET_ELT(4);
  T3_5 = MV_GET_ELT(5);
  T3_6 = MV_GET_ELT(6);
  T3_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:955
  one_initial_state_ = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:955
  one_limit_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:955
  one_next_state_ = T3_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:955
  one_finished_stateQ_ = T3_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:955
  one_current_element_ = T3_5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:956
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T9_0 = CONGRUENT_CALL1(c2_);
  T9_1 = MV_GET_ELT(1);
  T9_2 = MV_GET_ELT(2);
  T9_3 = MV_GET_ELT(3);
  T9_4 = MV_GET_ELT(4);
  T9_5 = MV_GET_ELT(5);
  T9_6 = MV_GET_ELT(6);
  T9_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:956
  two_initial_state_ = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:956
  two_limit_ = T9_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:956
  two_next_state_ = T9_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:956
  two_finished_stateQ_ = T9_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:956
  two_current_element_ = T9_5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:965
  s1F30T = one_initial_state_;
  s2F31T = two_initial_state_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:965
    s1F30 = s1F30T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:965
    s2F31 = s2F31T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:959
    T16 = CALL3(one_finished_stateQ_, c1_, s1F30, one_limit_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:958
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:960
      T17 = CALL3(two_finished_stateQ_, c2_, s2F31, two_limit_);
      T28 = T17;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:961
      T18 = CALL3(two_finished_stateQ_, c2_, s2F31, two_limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:958
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:962
        T19 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T27 = T19;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:964
        T20 = CALL2(one_current_element_, c1_, s1F30);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:964
        T21 = CALL2(two_current_element_, c2_, s2F31);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:964
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T22 = CONGRUENT_CALL2(T20, T21);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:964
        if (T22 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:965
          T23 = CALL2(one_next_state_, c1_, s1F30);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:965
          T24 = CALL2(two_next_state_, c2_, s2F31);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:965
          s1F30T = T23;
          s2F31T = T24;
          goto L0;
          T26 = T29;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:964
          T25 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T26 = T25;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:964
        T27 = T26;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:958
      T28 = T27;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:958
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:965
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:957
  T32_0 = T28;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:954
  T15_0 = T32_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:954
  MV_SET_COUNT(1);
  return(T15_0);
}

D KEVKdMM18I (D c1_, D c2_) {
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
  D T17T, T17;
  D T18T, T18;
  D eq_T, eq_;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T29_0;
  D T30_0;
  D T31;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:973
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:974
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(c1_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:974
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(c2_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:974
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T31 = CONGRUENT_CALL2(T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:974
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T5 = CONGRUENT_CALL1(c1_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T6 = T5;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T7 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T8 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T9 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T10 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T11 = CONGRUENT_CALL1(c2_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T12 = T11;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T13 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T14 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T15 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T16 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T17T = T6;
    T18T = T12;
    eq_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      T17 = T17T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      T18 = T18T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      eq_ = eq_T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      T20 = CALL3(T9, c1_, T17, T7);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      if (T20 != &KPfalseVKi) {
        T22 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
        T21 = CALL3(T15, c2_, T18, T13);
        T22 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      if (T22 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
        T23 = CALL2(T10, c1_, T17);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
        T24 = CALL2(T16, c2_, T18);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
        if (eq_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
          T25 = CALL2(T8, c1_, T17);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
          T26 = CALL2(T14, c2_, T18);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:976
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T27 = CONGRUENT_CALL2(T23, T24);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
          T17T = T25;
          T18T = T26;
          eq_T = T27;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:979
      T28_0 = eq_;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:975
    T30_0 = T28_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:974
    T29_0 = &KPfalseVKi;
    T30_0 = T29_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:974
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:973
  MV_SET_COUNT(1);
  return(T30_0);
}

D KEVKdMM19I (D c1_, D c2_) {
  D returnPexit_12_;
  D T4;
  D l_T, l_;
  DWORD key_T, key_;
  D T7;
  D T8;
  D e_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T15_0;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_1 T20 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T21;
  _KLsimple_object_vectorGVKd_2 T22 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T23;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_1 T26 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T27;
  DWORD T28;
  D T29;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:988
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:989
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
  l_T = c1_;
  key_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
    l_ = l_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
    key_ = key_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
    T29 = primitive_cast_raw_as_integer(key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:992
    T16 = primitive_idQ(l_,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:991
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:992
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T7 = CONGRUENT_CALL1(c2_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:992
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T8 = CONGRUENT_CALL2(T29, T7);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:992
      T17.vector_element_[0] = T8;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:992
      T18 = MV_SET_REST_AT(&T17, 0);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:992
      T14_0 = T18;
      goto L1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:993
      T19 = primitive_instanceQ(l_,&KLpairGVKd);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:991
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:995
        T22.vector_element_[0] = &KJdefault_;
        T22.vector_element_[1] = &Knot_found_objectVKi;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:995
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        e_ = CONGRUENT_CALL3(c2_, T29, &T22);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
        T23 = primitive_idQ(e_,&Knot_found_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
        if (T23 != &KPfalseVKi) {
          T11 = T23;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
          T10 = CALL1(&KheadVKd, l_);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T24 = CONGRUENT_CALL2(e_, T10);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
          T25 = primitive_not(T24);
          T11 = T25;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
        if (T11 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
          T26.vector_element_[0] = &KPfalseVKi;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:989
          T27 = MV_SET_REST_AT(&T26, 0);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:989
          T14_0 = T27;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:996
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:993
        T20.vector_element_[0] = &KPfalseVKi;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:993
        T21 = MV_SET_REST_AT(&T20, 0);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:993
        T14_0 = T21;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:991
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:991
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
    T12 = CALL1(&KtailVKd, l_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
    T28 = primitive_machine_word_add_signal_overflow(key_,4);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
    l_T = T12;
    key_T = T28;
    goto L0;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
    T13 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:990
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:989
  T14_0 = T13;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:989
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:988
  T15_0 = T14_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:988
  MV_SET_COUNT(1);
  return(T15_0);
}

D KEVKdMM20I (D c1_, D c2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1003
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1004
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(c2_, c1_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1003
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM21I (D c1_, D c2_) {
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_;
  D returnPexit_13_;
  D T10;
  D l_T, l_;
  D state_T, state_;
  D T13;
  D UtmpF14;
  D UtmpF15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T23_0;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  _KLsimple_object_vectorGVKd_1 T31 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T32;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1007
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1008
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3_0 = CONGRUENT_CALL1(c2_);
  T3_1 = MV_GET_ELT(1);
  T3_2 = MV_GET_ELT(2);
  T3_3 = MV_GET_ELT(3);
  T3_4 = MV_GET_ELT(4);
  T3_5 = MV_GET_ELT(5);
  T3_6 = MV_GET_ELT(6);
  T3_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1008
  initial_state_ = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1008
  limit_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1008
  next_state_ = T3_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1008
  finished_stateQ_ = T3_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1008
  current_element_ = T3_5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1009
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1010
  l_T = c1_;
  state_T = initial_state_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1010
    l_ = l_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1010
    state_ = state_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1013
    T24 = primitive_idQ(l_,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1012
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1014
      T13 = CALL3(finished_stateQ_, c2_, state_, limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1014
      T25.vector_element_[0] = T13;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1014
      T26 = MV_SET_REST_AT(&T25, 0);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1014
      T22_0 = T26;
      goto L1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1015
      UtmpF14 = CALL3(finished_stateQ_, c2_, state_, limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1015
      if (UtmpF14 != &KPfalseVKi) {
        UtmpF15 = UtmpF14;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1016
        T27 = primitive_instanceQ(l_,&KLpairGVKd);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1016
        T28 = primitive_not(T27);
        UtmpF15 = T28;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1015
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1015
      if (UtmpF15 != &KPfalseVKi) {
        T18 = UtmpF15;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1017
        T16 = CALL2(current_element_, c2_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1017
        T17 = CALL1(&KheadVKd, l_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1017
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T29 = CONGRUENT_CALL2(T16, T17);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1017
        T30 = primitive_not(T29);
        T18 = T30;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1015
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1012
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1018
        T31.vector_element_[0] = &KPfalseVKi;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1009
        T32 = MV_SET_REST_AT(&T31, 0);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1009
        T22_0 = T32;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1012
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1012
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1010
    T19 = CALL1(&KtailVKd, l_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1011
    T20 = CALL2(next_state_, c2_, state_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1010
    l_T = T19;
    state_T = T20;
    goto L0;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1010
    T21 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1010
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1009
  T22_0 = T21;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1009
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1007
  T23_0 = T22_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1007
  MV_SET_COUNT(1);
  return(T23_0);
}

D KEVKdMM22I (D c1_, D c2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1026
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1027
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(c2_, c1_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1026
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM23I (D c1_, D c2_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1033
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
  T9 = primitive_idQ(c1_,c2_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
    T3_0 = T9;
    T8_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
    T10 = SLOT_VALUE_INITD(c1_, 0);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
    T11 = SLOT_VALUE_INITD(c2_, 0);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T4 = CONGRUENT_CALL2(T10, T11);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
      T12 = SLOT_VALUE_INITD(c1_, 1);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
      T13 = SLOT_VALUE_INITD(c2_, 1);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T5_0 = CONGRUENT_CALL2(T12, T13);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
      T6_0 = &KPfalseVKi;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1034
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1033
  MV_SET_COUNT(1);
  return(T8_0);
}

D KEVKdMM24I (D c1_, D c2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1037
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1039
  T3_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1037
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM25I (D c1_, D c2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1042
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1043
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1042
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyQVKdMM0I (D collection_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;
  D initial_state_;
  D limit_;
  D finished_stateQ_;
  D T6_0;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:899
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:900
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T2_0 = CONGRUENT_CALL1(collection_);
  T2_1 = MV_GET_ELT(1);
  T2_2 = MV_GET_ELT(2);
  T2_3 = MV_GET_ELT(3);
  T2_4 = MV_GET_ELT(4);
  T2_5 = MV_GET_ELT(5);
  T2_6 = MV_GET_ELT(6);
  T2_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:900
  initial_state_ = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:900
  limit_ = T2_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:900
  finished_stateQ_ = T2_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:901
  T6_0 = CALL3(finished_stateQ_, collection_, initial_state_, limit_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:899
  T7_0 = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:899
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsizeVKdMM2I (D collection_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8T, T8;
  DWORD size_T, size_;
  D T10;
  D T11;
  D T12_0;
  DWORD T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:886
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T2 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  T3 = T2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  T4 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  T5 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  T6 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  T7 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  T8T = T3;
  size_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
    T8 = T8T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
    size_ = size_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
    T14 = primitive_cast_raw_as_integer(size_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
    T10 = CALL3(T6, collection_, T8, T4);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
      CALL2(T7, collection_, T8);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
      T11 = CALL2(T5, collection_, T8);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
      T13 = primitive_machine_word_add_signal_overflow(size_,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
      T8T = T11;
      size_T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:889
    T12_0 = T14;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:887
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:886
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kshallow_copyVKdMM2I (D coll_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:877
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:878
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T2 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:878
  T3 = CALL3(&Kmap_as_oneVKi, T2, &KidentityVKd, coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:878
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:877
  MV_SET_COUNT(1);
  return(T4_0);
}

D KeveryQVKdMM0I (D test_, D coll_, D more_colls_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15T, T15;
  D resultF16T, resultF16;
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
  D T31;
  D T32T, T32;
  D resultF33T, resultF33;
  D T34;
  D T35;
  D T36;
  D T37_0;
  D T38;
  D T39;
  D T40;
  _KLsimple_object_vectorGVKd_1 T41 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T42_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:740
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:743
  T7 = SLOT_VALUE_INITD(more_colls_, 0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:743
  T8 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:743
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T9 = CONGRUENT_CALL1(coll_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    T10 = T9;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    T11 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    T12 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    T13 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    T14 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    T15T = T10;
    resultF16T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      T15 = T15T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      resultF16 = resultF16T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      T17 = CALL3(T13, coll_, T15, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      if (T17 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
        T18 = CALL2(T14, coll_, T15);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
        if (resultF16 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
          T19 = CALL2(T12, coll_, T15);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
          T20 = CALL1(test_, T18);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
          T15T = T19;
          resultF16T = T20;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      T22 = primitive_as_boolean(resultF16);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
      T21_0 = T22;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:745
    T6_0 = T21_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:743
    T23 = primitive_idQ(T7,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:743
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:747
      T24 = REPEATED_D_SLOT_VALUE_TAGGED(more_colls_, 1, 1);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:747
      T4_0 = CALL3(&KeveryQ_twoVKi, test_, coll_, T24);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:747
      T42_0 = T4_0;
      T5_0 = T42_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T25 = Kmultiple_collectionVKiI(coll_, more_colls_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T26 = CONGRUENT_CALL1(T25);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T27 = T26;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T28 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T29 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T30 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T31 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T32T = T27;
      resultF33T = &KPtrueVKi;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        T32 = T32T;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        resultF33 = resultF33T;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        T34 = CALL3(T30, T25, T32, T28);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        if (T34 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
          T35 = CALL2(T31, T25, T32);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
          if (resultF33 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
            T36 = CALL2(T29, T25, T32);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
            T41.vector_element_[0] = T35;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
            T40 = KapplyVKdI(test_, &T41);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
            T39 = T40;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
            T32T = T36;
            resultF33T = T39;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        T38 = primitive_as_boolean(resultF33);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
        T37_0 = T38;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:749
      T5_0 = T37_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:743
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:743
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:740
  MV_SET_COUNT(1);
  return(T6_0);
}

D KasVKdMM37I (D type_, D coll_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:866
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:869
  T6 = primitive_instanceQ(coll_,type_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:869
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:869
    T3_0 = coll_;
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:869
    T4_0 = CALL3(&Kmap_asVKd, type_, &KidentityVKd, coll_);
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:869
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:866
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kmap_asVKdMM0I (D type_, D function_, D collection_, D more_collections_) {
  D T5;
  D T6_0;
  D T7;
  DWORD T8;
  D T9;
  D T10_0;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:224
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:229
  T7 = SLOT_VALUE_INITD(more_collections_, 0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:229
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:229
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:229
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:230
    ENGINE_NODE_CALL_PROLOG(&Kmap_as_oneVKi, &K200, 3);
    T10_0 = ENGINE_NODE_CALL3(&K200, type_, function_, collection_);
    T6_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:232
    T5 = MAKE_CLOSURE_INITD(&Kanonymous_of_map_asF202, 1, function_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:233
    T11 = Kmultiple_collectionVKiI(collection_, more_collections_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:232
    ENGINE_NODE_CALL_PROLOG(&Kmap_as_oneVKi, &K201, 3);
    T12_0 = ENGINE_NODE_CALL3(&K201, type_, T5, T11);
    T6_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:229
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:224
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmap_intoVKdMM0I (D target_, D function_, D collection_, D more_collections_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11_0;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;
  D T20_0;
  D T21_0;
  D T22;
  D T23_0;
  D T24_0;
  D T25_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:376
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:381
  T13 = SLOT_VALUE_INITD(more_collections_, 0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:381
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:381
  T15 = primitive_machine_word_equalQ(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:381
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:382
    CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
    T5 = CONGRUENT_CALL1(target_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:382
    CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
    T6 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:382
    T16 = primitive_idQ(T5,T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:382
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:385
      T17.vector_element_[0] = target_;
      T17.vector_element_[1] = collection_;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:385
      T7 = KlistVKdI(&T17);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:383
      T18.vector_element_[0] = &KJformat_string_;
      T18.vector_element_[1] = &K94;
      T18.vector_element_[2] = &KJformat_arguments_;
      T18.vector_element_[3] = T7;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:383
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T8 = CONGRUENT_CALL2(&KLkey_test_errorGVKi, &T18);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:383
      KerrorVKdMM0I(T8, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:382
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:387
    T19 = primitive_instanceQ(target_,&KLstretchy_collectionGVKd);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:387
    if (T19 != &KPfalseVKi) {
      T12 = target_;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:388
      ENGINE_NODE_CALL_PROLOG(&Kmap_into_stretchy_oneVKi, &K95, 3);
      T20_0 = ENGINE_NODE_CALL3(&K95, function_, T12, collection_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:388
      T24_0 = T20_0;
      T9_0 = T24_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:390
      ENGINE_NODE_CALL_PROLOG(&Kmap_into_rigid_oneVKi, &K97, 3);
      T21_0 = ENGINE_NODE_CALL3(&K97, function_, target_, collection_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:390
      T25_0 = T21_0;
      T9_0 = T25_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:387
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:393
    T10 = MAKE_CLOSURE_INITD(&Kanonymous_of_map_intoF197, 1, function_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:394
    T22 = Kmultiple_collectionVKiI(collection_, more_collections_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:393
    T23_0 = Kmap_intoVKdMM0I(target_, T10, T22, &KPempty_vectorVKi);
    T11_0 = T23_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:381
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:376
  MV_SET_COUNT(1);
  return(T11_0);
}

D KdoVKdMM0I (D fn_, D coll_, D more_colls_) {
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
  D T14_0;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21T, T21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T26_0;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  _KLsimple_object_vectorGVKd_1 T31 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:168
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:171
  T27 = SLOT_VALUE_INITD(more_colls_, 0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:171
  T28 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:171
  T29 = primitive_machine_word_equalQ(T28,1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:171
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T4 = CONGRUENT_CALL1(coll_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    T5 = T4;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    T6 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    T7 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    T8 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    T9 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    T10T = T5;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
      T10 = T10T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
      T11 = CALL3(T8, coll_, T10, T6);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
      if (T11 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
        T12 = CALL2(T9, coll_, T10);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
        CALL1(fn_, T12);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
        T13 = CALL2(T7, coll_, T10);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
        T10T = T13;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
      T14_0 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:172
    T26_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T30 = Kmultiple_collectionVKiI(coll_, more_colls_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T15 = CONGRUENT_CALL1(T30);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T16 = T15;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T17 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T18 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T19 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T20 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T21T = T16;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
      T21 = T21T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
      T22 = CALL3(T19, T30, T21, T17);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
      if (T22 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
        T23 = CALL2(T20, T30, T21);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
        T31.vector_element_[0] = T23;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
        KapplyVKdI(fn_, &T31);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
        T24 = CALL2(T18, T30, T21);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
        T21T = T24;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
      T25_0 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:174
    T26_0 = T25_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:171
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:168
  MV_SET_COUNT(1);
  return(T26_0);
}

static D Kanonymous_of_map_intoF197I (D v_) {
  D T1;
  _KLsimple_object_vectorGVKd_1 T2 = {&KLsimple_object_vectorGVKdW, (D) 5};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:393
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:393
  T2.vector_element_[0] = v_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:393
  T1 = KapplyVKdI(CREF(0), &T2);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:393
  return(T1);
}

D Kmap_into_rigid_oneVKiMM0I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D T13;
  D key_;
  D T15;
  D T16;
  D T17;
  D T18_0;
  _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:545
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  T9 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  T11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
    T12 = CALL3(T8, coll_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
      T13 = CALL2(T10, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
      key_ = CALL2(T9, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:549
      T19.vector_element_[0] = &KJdefault_;
      T19.vector_element_[1] = &Knot_found_objectVKi;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:549
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T15 = CONGRUENT_CALL3(target_, key_, &T19);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:549
      T20 = primitive_idQ(T15,&Knot_found_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:549
      if (T20 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:550
        T16 = CALL1(fun_, T13);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:550
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T16, target_, key_);
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:549
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
      T17 = CALL2(T7, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
      T11T = T17;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:548
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:553
  T18_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:545
  MV_SET_COUNT(1);
  return(T18_0);
}

D Kmap_into_rigid_oneVKiMM1I (D fun_, D target_, D coll_) {
  D max_key_;
  D T5_0;
  D T5_1;
  D T5_2;
  D T5_3;
  D T5_4;
  D T5_5;
  D T5_6;
  D T5_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_setter_;
  DWORD key_T, key_;
  D state_T, state_;
  D val_;
  D T14;
  D T15;
  D T16;
  D T17_0;
  DWORD T18;
  D T19;
  _KLsimple_object_vectorGVKd_2 T20 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T21;
  DWORD T22;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:559
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:562
  CONGRUENT_CALL_PROLOG(&Kmaximum_sequence_keyVKi, 1);
  max_key_ = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
  T18 = primitive_cast_integer_as_raw(max_key_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:563
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5_0 = CONGRUENT_CALL1(target_);
  T5_1 = MV_GET_ELT(1);
  T5_2 = MV_GET_ELT(2);
  T5_3 = MV_GET_ELT(3);
  T5_4 = MV_GET_ELT(4);
  T5_5 = MV_GET_ELT(5);
  T5_6 = MV_GET_ELT(6);
  T5_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:563
  initial_state_ = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:563
  limit_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:563
  next_state_ = T5_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:563
  finished_stateQ_ = T5_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:563
  current_element_setter_ = T5_6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
  key_T = 1;
  state_T = initial_state_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
    key_ = key_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
    state_ = state_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
    T19 = primitive_machine_word_less_thanQ(T18,key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
    if (T19 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:566
      T16 = CALL3(finished_stateQ_, target_, state_, limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:567
        T20.vector_element_[0] = &KJdefault_;
        T20.vector_element_[1] = &Knot_found_objectVKi;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:567
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        val_ = CONGRUENT_CALL3(coll_, state_, &T20);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:568
        T21 = primitive_idQ(val_,&Knot_found_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:568
        if (T21 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:569
          T14 = CALL1(fun_, val_);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:569
          CALL3(current_element_setter_, T14, target_, state_);
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:568
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
        T22 = primitive_machine_word_add_signal_overflow(key_,4);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:565
        T15 = CALL2(next_state_, target_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
        key_T = T22;
        state_T = T15;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:564
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:573
  T17_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:559
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kmap_into_rigid_oneVKiMM2I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD key_T, key_;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  _KLsimple_object_vectorGVKd_2 T18 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T19;
  DWORD T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:576
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  key_T = 1;
  T11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
    key_ = key_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
    T21 = primitive_cast_raw_as_integer(key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
    T12 = CALL3(T8, coll_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
      T13 = CALL2(T9, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:580
      T18.vector_element_[0] = &KJdefault_;
      T18.vector_element_[1] = &Knot_found_objectVKi;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:580
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T14 = CONGRUENT_CALL3(target_, T21, &T18);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:580
      T19 = primitive_idQ(T14,&Knot_found_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:580
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:581
        T15 = CALL1(fun_, T13);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:581
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T15, target_, T21);
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:580
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
      T20 = primitive_machine_word_add_signal_overflow(key_,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
      T16 = CALL2(T7, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
      key_T = T20;
      T11T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:579
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:584
  T17_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:576
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kmap_into_rigid_oneVKiMM3I (D fun_, D target_, D coll_) {
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D initial_state_;
  D limitF6;
  D next_state_;
  D finished_stateQ_;
  D current_element_setter_;
  D stateF10T, stateF10;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20_0;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:588
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4_0 = CONGRUENT_CALL1(target_);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  initial_state_ = T4_0;
  limitF6 = T4_1;
  next_state_ = T4_2;
  finished_stateQ_ = T4_3;
  current_element_setter_ = T4_6;
  stateF10T = initial_state_;
  T11T = coll_;
L0: ;
    stateF10 = stateF10T;
    T11 = T11T;
    T16 = primitive_idQ(T11,&KPempty_listVKi);
    if (T16 == &KPfalseVKi) {
      T17 = SLOT_VALUE_INITD(T11, 0);
      T14 = CALL3(finished_stateQ_, target_, stateF10, limitF6);
      if (T14 == &KPfalseVKi) {
        T12 = CALL1(fun_, T17);
        CALL3(current_element_setter_, T12, target_, stateF10);
        T13 = CALL2(next_state_, target_, stateF10);
        T19 = SLOT_VALUE_INITD(T11, 1);
        T20_0 = T19;
        T18_0 = T20_0;
        T21 = T18_0;
        stateF10T = T13;
        T11T = T21;
        goto L0;
      }
    }
  T15_0 = target_;
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kmap_into_rigid_oneVKiMM4I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  DWORD i_T, i_;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:591
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(target_);
  T14 = SLOT_VALUE_INITD(coll_, 0);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  CONGRUENT_CALL2(T4, T14);
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(target_);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T10 = CONGRUENT_CALL2(T5, T14);
  if (T10 != &KPfalseVKi) {
    T11 = T5;
  } else {
    T11 = T14;
  }
  i_T = 1;
L0: ;
    i_ = i_T;
    T13 = primitive_cast_raw_as_integer(i_);
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T7 = CONGRUENT_CALL2(T13, T11);
    if (T7 != &KPfalseVKi) {
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(coll_, 1, i_);
      T8 = CALL1(fun_, T15);
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T8, target_, T13);
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      i_T = T12;
      goto L0;
    }
  T9_0 = target_;
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kmap_into_rigid_oneVKiMM5I (D fun_, D target_, D coll_) {
  D end_key_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  D T13;
  D T14;
  D key_;
  D T16;
  D Utmp_;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:598
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:601
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  end_key_ = CONGRUENT_CALL1(target_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  T6 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  T10 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  T11 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  T12T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
    T13 = CALL3(T9, coll_, T12, T7);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
      T14 = CALL2(T11, coll_, T12);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
      key_ = CALL2(T10, coll_, T12);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      T22 = primitive_instanceQ(key_,&KLintegerGVKd);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      T23 = primitive_not(T22);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      if (T22 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T16 = CONGRUENT_CALL2(key_, (D) 1);
        Utmp_ = T16;
      } else {
        Utmp_ = T23;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      if (Utmp_ != &KPfalseVKi) {
        T18 = Utmp_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T24 = CONGRUENT_CALL2(key_, end_key_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
        T25 = primitive_not(T24);
        T18 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      if (T18 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:604
        T19 = CALL1(fun_, T14);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:604
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T19, target_, key_);
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:603
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
      T20 = CALL2(T8, coll_, T12);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
      T12T = T20;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:602
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:607
  T21_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:598
  MV_SET_COUNT(1);
  return(T21_0);
}

D Kmap_into_rigid_oneVKiMM6I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  DWORD key_T, key_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20;
  DWORD T21;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:610
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T10 = CONGRUENT_CALL1(target_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  T11T = T5;
  key_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    key_ = key_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    T22 = primitive_cast_raw_as_integer(key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    T13 = CALL3(T8, coll_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    if (T13 != &KPfalseVKi) {
      T15 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T14 = CONGRUENT_CALL2(T22, T10);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
      T20 = primitive_not(T14);
      T15 = T20;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    if (T15 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
      T16 = CALL2(T9, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:614
      T17 = CALL1(fun_, T16);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:614
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T17, target_, T22);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
      T18 = CALL2(T7, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
      T21 = primitive_machine_word_add_signal_overflow(key_,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
      T11T = T18;
      key_T = T21;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:613
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:616
  T19_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:610
  MV_SET_COUNT(1);
  return(T19_0);
}

D Kmap_into_rigid_oneVKiMM7I (D fun_, D target_, D coll_) {
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_key_;
  D current_element_setter_;
  D end_key_;
  D state_T, state_;
  D key_;
  D T14;
  D Utmp_;
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

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:619
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:622
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4_0 = CONGRUENT_CALL1(coll_);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:622
  initial_state_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:622
  limit_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:622
  next_state_ = T4_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:622
  finished_stateQ_ = T4_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:622
  current_key_ = T4_4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:622
  current_element_setter_ = T4_6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:623
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  end_key_ = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:624
  state_T = initial_state_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:624
    state_ = state_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:625
    T20 = CALL3(finished_stateQ_, target_, state_, limit_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:624
    if (T20 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:626
      key_ = CALL2(current_key_, coll_, state_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      T22 = primitive_instanceQ(key_,&KLintegerGVKd);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      T23 = primitive_not(T22);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      if (T22 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T14 = CONGRUENT_CALL2(key_, (D) 1);
        Utmp_ = T14;
      } else {
        Utmp_ = T23;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      if (Utmp_ != &KPfalseVKi) {
        T16 = Utmp_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T24 = CONGRUENT_CALL2(key_, end_key_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
        T25 = primitive_not(T24);
        T16 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:628
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T17 = CONGRUENT_CALL3(coll_, key_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:628
        T18 = CALL1(fun_, T17);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:628
        CALL3(current_element_setter_, T18, target_, state_);
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:627
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:624
      T19 = CALL2(next_state_, target_, state_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:624
      state_T = T19;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:624
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:624
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:632
  T21_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:619
  MV_SET_COUNT(1);
  return(T21_0);
}

D Kmap_into_rigid_oneVKiMM8I (D fun_, D target_, D coll_) {
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_setter_;
  D T10;
  D state_T, state_;
  DWORD key_T, key_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  DWORD T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:635
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:638
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4_0 = CONGRUENT_CALL1(coll_);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:638
  initial_state_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:638
  limit_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:638
  next_state_ = T4_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:638
  finished_stateQ_ = T4_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:638
  current_element_setter_ = T4_6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:640
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T10 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
  state_T = initial_state_;
  key_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
    state_ = state_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
    key_ = key_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
    T20 = primitive_cast_raw_as_integer(key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T13 = CONGRUENT_CALL2(T20, T10);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:641
      T17 = CALL3(finished_stateQ_, target_, state_, limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
      if (T17 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:642
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T14 = CONGRUENT_CALL3(coll_, T20, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:642
        T15 = CALL1(fun_, T14);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:642
        CALL3(current_element_setter_, T15, target_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
        T16 = CALL2(next_state_, target_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
        T19 = primitive_machine_word_add_signal_overflow(key_,4);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
        state_T = T16;
        key_T = T19;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:639
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:645
  T18_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:635
  MV_SET_COUNT(1);
  return(T18_0);
}

D Kmap_into_rigid_oneVKiMM9I (D fun_, D target_, D coll_) {
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_setter_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D state_T, state_;
  D T17T, T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:650
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:653
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4_0 = CONGRUENT_CALL1(target_);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:653
  initial_state_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:653
  limit_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:653
  next_state_ = T4_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:653
  finished_stateQ_ = T4_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:653
  current_element_setter_ = T4_6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T10 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  T11 = T10;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  T12 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  T13 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  T14 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  T15 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  state_T = initial_state_;
  T17T = T11;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
    state_ = state_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
    T17 = T17T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
    T18 = CALL3(T14, coll_, T17, T12);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
    if (T18 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
      T19 = CALL2(T15, coll_, T17);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:656
      T23 = CALL3(finished_stateQ_, target_, state_, limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
      if (T23 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:657
        T20 = CALL1(fun_, T19);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:657
        CALL3(current_element_setter_, T20, target_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
        T21 = CALL2(next_state_, target_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
        T22 = CALL2(T13, coll_, T17);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
        state_T = T21;
        T17T = T22;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:654
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:660
  T24_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:650
  MV_SET_COUNT(1);
  return(T24_0);
}

D Kmap_into_rigid_oneVKiMM10I (D fun_, D target_, D coll_) {
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D initial_state_;
  D limitF6;
  D next_state_;
  D finished_stateQ_;
  D current_element_setter_;
  D stateF10T, stateF10;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20_0;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:664
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4_0 = CONGRUENT_CALL1(target_);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  initial_state_ = T4_0;
  limitF6 = T4_1;
  next_state_ = T4_2;
  finished_stateQ_ = T4_3;
  current_element_setter_ = T4_6;
  stateF10T = initial_state_;
  T11T = coll_;
L0: ;
    stateF10 = stateF10T;
    T11 = T11T;
    T16 = primitive_idQ(T11,&KPempty_listVKi);
    if (T16 == &KPfalseVKi) {
      T17 = SLOT_VALUE_INITD(T11, 0);
      T14 = CALL3(finished_stateQ_, target_, stateF10, limitF6);
      if (T14 == &KPfalseVKi) {
        T12 = CALL1(fun_, T17);
        CALL3(current_element_setter_, T12, target_, stateF10);
        T13 = CALL2(next_state_, target_, stateF10);
        T19 = SLOT_VALUE_INITD(T11, 1);
        T20_0 = T19;
        T18_0 = T20_0;
        T21 = T18_0;
        stateF10T = T13;
        T11T = T21;
        goto L0;
      }
    }
  T15_0 = target_;
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kmap_into_rigid_oneVKiMM11I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  DWORD i_T, i_;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:667
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(target_);
  T14 = SLOT_VALUE_INITD(coll_, 0);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  CONGRUENT_CALL2(T4, T14);
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(target_);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T10 = CONGRUENT_CALL2(T5, T14);
  if (T10 != &KPfalseVKi) {
    T11 = T5;
  } else {
    T11 = T14;
  }
  i_T = 1;
L0: ;
    i_ = i_T;
    T13 = primitive_cast_raw_as_integer(i_);
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T7 = CONGRUENT_CALL2(T13, T11);
    if (T7 != &KPfalseVKi) {
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(coll_, 1, i_);
      T8 = CALL1(fun_, T15);
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T8, target_, T13);
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      i_T = T12;
      goto L0;
    }
  T9_0 = target_;
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kmap_into_rigid_oneVKiMM12I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD i_T, i_;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14;
  DWORD T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:674
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:677
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(target_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:677
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:677
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  CONGRUENT_CALL2(T4, T5);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T6 = CONGRUENT_CALL1(target_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T7 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T13 = CONGRUENT_CALL2(T6, T7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
  if (T13 != &KPfalseVKi) {
    T14 = T6;
  } else {
    T14 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
    T16 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T9 = CONGRUENT_CALL2(T16, T14);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:680
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      T10 = CONGRUENT_CALL3(coll_, T16, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:680
      T11 = CALL1(fun_, T10);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:680
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T11, target_, T16);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
      T15 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
      i_T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:679
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:683
  T12_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:674
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kmap_into_stretchy_oneVKiMM0I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D T13;
  D key_;
  D T15;
  D T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:408
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  T9 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  T11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
    T12 = CALL3(T8, coll_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
      T13 = CALL2(T10, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
      key_ = CALL2(T9, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
      T15 = CALL1(fun_, T13);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T15, target_, key_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
      T16 = CALL2(T7, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
      T11T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:411
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:412
  T17_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:408
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kmap_into_stretchy_oneVKiMM1I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D T13;
  D key_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:415
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  T5 = T4;
  T6 = MV_GET_ELT(1);
;
  T7 = MV_GET_ELT(2);
;
  T8 = MV_GET_ELT(3);
;
  T9 = MV_GET_ELT(4);
;
  T10 = MV_GET_ELT(5);
;
  T11T = T5;
L0: ;
    T11 = T11T;
    T12 = CALL3(T8, coll_, T11, T6);
    if (T12 == &KPfalseVKi) {
      T13 = CALL2(T10, coll_, T11);
      key_ = CALL2(T9, coll_, T11);
      T20 = primitive_instanceQ(key_,&KLintegerGVKd);
      T21 = primitive_not(T20);
      if (T20 != &KPfalseVKi) {
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T15 = CONGRUENT_CALL2(key_, (D) 1);
        T16 = T15;
      } else {
        T16 = T21;
      }
      if (T16 == &KPfalseVKi) {
        T17 = CALL1(fun_, T13);
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T17, target_, key_);
      }
      T18 = CALL2(T7, coll_, T11);
      T11T = T18;
      goto L0;
    }
  T19_0 = target_;
  MV_SET_COUNT(1);
  return(T19_0);
}

D Kmap_into_stretchy_oneVKiMM2I (D fun_, D target_, D coll_) {
  D max_key_;
  D T5_0;
  D T5_1;
  D T5_2;
  D T5_3;
  D T5_4;
  D T5_5;
  D T5_6;
  D T5_7;
  D initial_stateF6;
  D limit_;
  D next_stateF8;
  D finished_stateQ_;
  D current_element_setterF10;
  D stateF11T, stateF11;
  DWORD keyF12T, keyF12;
  D valF13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T17_1;
  D T17_2;
  D T17_3;
  D T17_4;
  D T17_5;
  D T17_6;
  D T17_7;
  D initial_stateF18;
  D next_stateF19;
  D current_element_setterF20;
  DWORD keyF21T, keyF21;
  D stateF22T, stateF22;
  D T23;
  D stateF24T, stateF24;
  D keyF25T, keyF25;
  D T26;
  D valF27;
  D T28;
  D T29;
  D T30;
  D T31_0;
  DWORD T32;
  D T33;
  D T34;
  _KLsimple_object_vectorGVKd_2 T35 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T36;
  DWORD T37;
  DWORD T38;
  D T39;
  DWORD T40;
  DWORD T41;
  D T42;
  D T43;
  D T44;
  DWORD T45;
  _KLsimple_object_vectorGVKd_2 T46 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T47;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:428
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:431
  CONGRUENT_CALL_PROLOG(&Kmaximum_sequence_keyVKi, 1);
  max_key_ = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:433
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5_0 = CONGRUENT_CALL1(target_);
  T5_1 = MV_GET_ELT(1);
  T5_2 = MV_GET_ELT(2);
  T5_3 = MV_GET_ELT(3);
  T5_4 = MV_GET_ELT(4);
  T5_5 = MV_GET_ELT(5);
  T5_6 = MV_GET_ELT(6);
  T5_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:433
  initial_stateF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:433
  limit_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:433
  next_stateF8 = T5_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:433
  finished_stateQ_ = T5_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:433
  current_element_setterF10 = T5_6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
  stateF11T = initial_stateF6;
  keyF12T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    stateF11 = stateF11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    keyF12 = keyF12T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    T34 = primitive_cast_raw_as_integer(keyF12);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    T32 = primitive_cast_integer_as_raw(max_key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    T33 = primitive_machine_word_less_thanQ(T32,keyF12);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    if (T33 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:436
      T16 = CALL3(finished_stateQ_, target_, stateF11, limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:437
        T35.vector_element_[0] = &KJdefault_;
        T35.vector_element_[1] = &Knot_found_objectVKi;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:437
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        valF13 = CONGRUENT_CALL3(coll_, T34, &T35);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:438
        T36 = primitive_idQ(valF13,&Knot_found_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:438
        if (T36 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:439
          T14 = CALL1(fun_, valF13);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:439
          CALL3(current_element_setterF10, T14, target_, stateF11);
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:438
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
        T15 = CALL2(next_stateF8, target_, stateF11);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
        T37 = primitive_machine_word_add_signal_overflow(keyF12,4);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
        stateF11T = T15;
        keyF12T = T37;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:443
    T38 = primitive_cast_integer_as_raw(max_key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:443
    T39 = primitive_machine_word_less_thanQ(T38,keyF12);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:443
    if (T39 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:446
      T40 = primitive_cast_integer_as_raw(max_key_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:446
      T41 = primitive_machine_word_add_signal_overflow(T40,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:446
      T42 = primitive_cast_raw_as_integer(T41);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:446
      CONGRUENT_CALL_PROLOG(&Ksize_setterVKd, 2);
      CONGRUENT_CALL2(T42, target_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:450
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T17_0 = CONGRUENT_CALL1(target_);
      T17_1 = MV_GET_ELT(1);
      T17_2 = MV_GET_ELT(2);
      T17_3 = MV_GET_ELT(3);
      T17_4 = MV_GET_ELT(4);
      T17_5 = MV_GET_ELT(5);
      T17_6 = MV_GET_ELT(6);
      T17_7 = MV_GET_ELT(7);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:450
      initial_stateF18 = T17_0;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:450
      next_stateF19 = T17_2;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:450
      current_element_setterF20 = T17_6;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
      keyF21T = 1;
      stateF22T = initial_stateF18;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
        keyF21 = keyF21T;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
        T44 = primitive_cast_raw_as_integer(keyF21);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
        stateF22 = stateF22T;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
        T43 = primitive_machine_word_less_thanQ(keyF21,keyF12);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
        if (T43 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
          T45 = primitive_machine_word_add_signal_overflow(keyF21,4);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:452
          T23 = CALL2(next_stateF19, target_, stateF22);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
          keyF21T = T45;
          stateF22T = T23;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
        stateF24T = stateF22;
        keyF25T = T44;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
          stateF24 = stateF24T;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
          keyF25 = keyF25T;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T26 = CONGRUENT_CALL2(max_key_, keyF25);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
          if (T26 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:456
            T46.vector_element_[0] = &KJdefault_;
            T46.vector_element_[1] = &Knot_found_objectVKi;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:456
            CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
            valF27 = CONGRUENT_CALL3(coll_, keyF25, &T46);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:457
            T47 = primitive_idQ(valF27,&Knot_found_objectVKi);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:457
            if (T47 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/collection.dylan:458
              T28 = CALL1(fun_, valF27);
              // /opt/opendylan-2013.1/sources/dylan/collection.dylan:458
              CALL3(current_element_setterF20, T28, target_, stateF24);
            }
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:457
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
            T29 = CALL2(next_stateF19, target_, stateF24);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T30 = CONGRUENT_CALL2(keyF25, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
            stateF24T = T29;
            keyF25T = T30;
            goto L2;
          }
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:454
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:451
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:443
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:434
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:466
  T31_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:428
  MV_SET_COUNT(1);
  return(T31_0);
}

D Kmap_into_stretchy_oneVKiMM3I (D fun_, D target_, D coll_) {
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;
  D c_initial_state_;
  D c_limit_;
  D c_next_state_;
  D c_finished_stateQ_;
  D c_current_element_;
  D T10_0;
  D T10_1;
  D T10_2;
  D T10_3;
  D T10_4;
  D T10_5;
  D T10_6;
  D T10_7;
  D t_initial_stateF11;
  D t_limit_;
  D t_next_stateF13;
  D t_finished_stateQ_;
  D t_current_element_setterF15;
  D c_stateF16T, c_stateF16;
  DWORD keyF17T, keyF17;
  D T18;
  D T19;
  D T20_0;
  D T20_1;
  D T20_2;
  D T20_3;
  D T20_4;
  D T20_5;
  D T20_6;
  D T20_7;
  D t_initial_stateF21;
  D t_next_stateF22;
  D t_current_element_setterF23;
  DWORD keyF24T, keyF24;
  D t_stateF25T, t_stateF25;
  D T26;
  D t_stateF27T, t_stateF27;
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
  D t_stateF38;
  D T39;
  D T40;
  D T41;
  D c_stateF42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  DWORD T49;
  DWORD T50;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:469
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:473
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4_0 = CONGRUENT_CALL1(coll_);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:473
  c_initial_state_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:473
  c_limit_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:473
  c_next_state_ = T4_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:473
  c_finished_stateQ_ = T4_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:473
  c_current_element_ = T4_5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:474
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T10_0 = CONGRUENT_CALL1(target_);
  T10_1 = MV_GET_ELT(1);
  T10_2 = MV_GET_ELT(2);
  T10_3 = MV_GET_ELT(3);
  T10_4 = MV_GET_ELT(4);
  T10_5 = MV_GET_ELT(5);
  T10_6 = MV_GET_ELT(6);
  T10_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:474
  t_initial_stateF11 = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:474
  t_limit_ = T10_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:474
  t_next_stateF13 = T10_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:474
  t_finished_stateQ_ = T10_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:474
  t_current_element_setterF15 = T10_6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:475
  t_stateF38 = t_initial_stateF11;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
  c_stateF16T = c_initial_state_;
  keyF17T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
    c_stateF16 = c_stateF16T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
    c_stateF42 = c_stateF16;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
    keyF17 = keyF17T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:478
    T43 = c_stateF42;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:478
    T36 = CALL3(c_finished_stateQ_, coll_, T43, c_limit_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
    if (T36 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:479
      T41 = t_stateF38;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:479
      T18 = CALL3(t_finished_stateQ_, target_, T41, t_limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:479
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:481
        CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
        T19 = CONGRUENT_CALL1(coll_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:481
        CONGRUENT_CALL_PROLOG(&Ksize_setterVKd, 2);
        CONGRUENT_CALL2(T19, target_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:485
        CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
        T20_0 = CONGRUENT_CALL1(target_);
        T20_1 = MV_GET_ELT(1);
        T20_2 = MV_GET_ELT(2);
        T20_3 = MV_GET_ELT(3);
        T20_4 = MV_GET_ELT(4);
        T20_5 = MV_GET_ELT(5);
        T20_6 = MV_GET_ELT(6);
        T20_7 = MV_GET_ELT(7);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:485
        t_initial_stateF21 = T20_0;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:485
        t_next_stateF22 = T20_2;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:485
        t_current_element_setterF23 = T20_6;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
        keyF24T = 1;
        t_stateF25T = t_initial_stateF21;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
          keyF24 = keyF24T;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
          t_stateF25 = t_stateF25T;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
          T48 = primitive_machine_word_less_thanQ(keyF24,keyF17);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
          if (T48 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
            T49 = primitive_machine_word_add_signal_overflow(keyF24,4);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:487
            T26 = CALL2(t_next_stateF22, target_, t_stateF25);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
            keyF24T = T49;
            t_stateF25T = T26;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:489
          t_stateF27T = t_stateF25;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:489
            t_stateF27 = t_stateF27T;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:491
            T47 = c_stateF42;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:491
            T28 = CALL2(c_current_element_, coll_, T47);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:491
            T29 = CALL1(fun_, T28);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:490
            CALL3(t_current_element_setterF23, T29, target_, t_stateF27);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:492
            T46 = c_stateF42;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:492
            T30 = CALL2(c_next_state_, coll_, T46);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:492
            c_stateF42 = T30;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:489
            T31 = CALL2(t_next_stateF22, target_, t_stateF27);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:489
            t_stateF27T = T31;
            goto L2;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:489
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:486
      } else {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:498
        T45 = c_stateF42;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:498
        T32 = CALL2(c_current_element_, coll_, T45);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:498
        T33 = CALL1(fun_, T32);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:497
        T40 = t_stateF38;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:497
        CALL3(t_current_element_setterF15, T33, target_, T40);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:499
        T39 = t_stateF38;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:499
        T34 = CALL2(t_next_stateF13, target_, T39);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:499
        t_stateF38 = T34;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:479
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
      T44 = c_stateF42;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
      T35 = CALL2(c_next_state_, coll_, T44);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
      T50 = primitive_machine_word_add_signal_overflow(keyF17,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
      c_stateF16T = T35;
      keyF17T = T50;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:476
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:504
  T37_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:469
  MV_SET_COUNT(1);
  return(T37_0);
}

D Kmap_into_stretchy_oneVKiMM4I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D T13;
  D key_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:513
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  T9 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  T11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
    T12 = CALL3(T8, coll_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
      T13 = CALL2(T10, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
      key_ = CALL2(T9, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
      T20 = primitive_instanceQ(key_,&KLintegerGVKd);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
      T21 = primitive_not(T20);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T15 = CONGRUENT_CALL2(key_, (D) 1);
        T16 = T15;
      } else {
        T16 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
        T17 = CALL1(fun_, T13);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T17, target_, key_);
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:517
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
      T18 = CALL2(T7, coll_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
      T11T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:516
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:519
  T19_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:513
  MV_SET_COUNT(1);
  return(T19_0);
}

D Kmap_into_stretchy_oneVKiMM5I (D fun_, D target_, D coll_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  DWORD key_T, key_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;
  DWORD T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:524
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  T10T = T5;
  key_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
    T10 = T10T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
    key_ = key_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
    T18 = primitive_cast_raw_as_integer(key_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
    T12 = CALL3(T8, coll_, T10, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
      T13 = CALL2(T9, coll_, T10);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
      T14 = CALL1(fun_, T13);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T14, target_, T18);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
      T15 = CALL2(T7, coll_, T10);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
      T17 = primitive_machine_word_add_signal_overflow(key_,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
      T10T = T15;
      key_T = T17;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:527
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:528
  T16_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:524
  MV_SET_COUNT(1);
  return(T16_0);
}

D Kmap_into_stretchy_oneVKiMM6I (D fun_, D target_, D coll_) {
  D T4T, T4;
  DWORD key_T, key_;
  D T6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:532
  T4T = coll_;
  key_T = 1;
L0: ;
    T4 = T4T;
    key_ = key_T;
    T9 = primitive_cast_raw_as_integer(key_);
    T10 = primitive_idQ(T4,&KPempty_listVKi);
    if (T10 == &KPfalseVKi) {
      T11 = SLOT_VALUE_INITD(T4, 0);
      T6 = CALL1(fun_, T11);
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T6, target_, T9);
      T13 = SLOT_VALUE_INITD(T4, 1);
      T14_0 = T13;
      T12_0 = T14_0;
      T15 = T12_0;
      T8 = primitive_machine_word_add_signal_overflow(key_,4);
      T4T = T15;
      key_T = T8;
      goto L0;
    }
  T7_0 = target_;
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kmap_into_stretchy_oneVKiMM7I (D fun_, D target_, D coll_) {
  DWORD T4T, T4;
  DWORD key_T, key_;
  D T6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:535
  T10 = SLOT_VALUE_INITD(coll_, 0);
  T11 = primitive_cast_integer_as_raw(T10);
  T4T = 1;
  key_T = 1;
L0: ;
    T4 = T4T;
    key_ = key_T;
    T9 = primitive_cast_raw_as_integer(key_);
    T12 = primitive_machine_word_equalQ(T4,T11);
    if (T12 == &KPfalseVKi) {
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(coll_, 1, T4);
      T6 = CALL1(fun_, T13);
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T6, target_, T9);
      T14 = primitive_machine_word_add_signal_overflow(T4,4);
      T8 = primitive_machine_word_add_signal_overflow(key_,4);
      T4T = T14;
      key_T = T8;
      goto L0;
    }
  T7_0 = target_;
  MV_SET_COUNT(1);
  return(T7_0);
}

static D Kanonymous_of_map_asF202I (D v_) {
  D T1;
  _KLsimple_object_vectorGVKd_1 T2 = {&KLsimple_object_vectorGVKdW, (D) 5};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:232
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:232
  T2.vector_element_[0] = v_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:232
  T1 = KapplyVKdI(CREF(0), &T2);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:232
  return(T1);
}

D KanyQVKdMM0I (D test_, D coll_, D more_colls_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15T, T15;
  D resultF16T, resultF16;
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
  D T31T, T31;
  D resultF32T, resultF32;
  D T33;
  D T34;
  D T35;
  D T36_0;
  D T37;
  D T38;
  _KLsimple_object_vectorGVKd_1 T39 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:691
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:694
  T7 = SLOT_VALUE_INITD(more_colls_, 0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:694
  T8 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:694
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T9 = CONGRUENT_CALL1(coll_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    T10 = T9;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    T11 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    T12 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    T13 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    T14 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    T15T = T10;
    resultF16T = &KPfalseVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
      T15 = T15T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
      resultF16 = resultF16T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
      T17 = CALL3(T13, coll_, T15, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
      if (T17 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
        T18 = CALL2(T14, coll_, T15);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
        if (resultF16 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
          T19 = CALL2(T12, coll_, T15);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
          T20 = CALL1(test_, T18);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
          T15T = T19;
          resultF16T = T20;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
      T21_0 = resultF16;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:696
    T6_0 = T21_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:694
    T22 = primitive_idQ(T7,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:694
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:698
      T23 = REPEATED_D_SLOT_VALUE_TAGGED(more_colls_, 1, 1);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:698
      T4_0 = CALL3(&KanyQ_twoVKi, test_, coll_, T23);
      T5_0 = T4_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T24 = Kmultiple_collectionVKiI(coll_, more_colls_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T25 = CONGRUENT_CALL1(T24);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T26 = T25;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T27 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T28 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T29 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T30 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T31T = T26;
      resultF32T = &KPfalseVKi;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
        T31 = T31T;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
        resultF32 = resultF32T;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
        T33 = CALL3(T29, T24, T31, T27);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
        if (T33 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
          T34 = CALL2(T30, T24, T31);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
          if (resultF32 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
            T35 = CALL2(T28, T24, T31);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
            T39.vector_element_[0] = T34;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
            T38 = KapplyVKdI(test_, &T39);
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
            T37 = T38;
            // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
            T31T = T35;
            resultF32T = T37;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
        T36_0 = resultF32;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:700
      T5_0 = T36_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:694
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:694
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:691
  MV_SET_COUNT(1);
  return(T6_0);
}

D KanyQ_twoVKiMM0I (D test_, D c1_, D c2_) {
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
  D T16T, T16;
  D T17T, T17;
  D result_T, result_;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:721
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(c1_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T10 = CONGRUENT_CALL1(c2_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T11 = T10;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T12 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T13 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T14 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T15 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  T16T = T5;
  T17T = T11;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    T16 = T16T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    T17 = T17T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    T19 = CALL3(T8, c1_, T16, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    if (T19 != &KPfalseVKi) {
      T21 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
      T20 = CALL3(T14, c2_, T17, T12);
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    if (T21 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
      T22 = CALL2(T9, c1_, T16);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
      T23 = CALL2(T15, c2_, T17);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
        T24 = CALL2(T7, c1_, T16);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
        T25 = CALL2(T13, c2_, T17);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
        T26 = CALL2(test_, T22, T23);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
        T16T = T24;
        T17T = T25;
        result_T = T26;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:725
    T27_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:723
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:721
  MV_SET_COUNT(1);
  return(T27_0);
}

D KanyQ_twoVKiMM1I (D test_, D c1_, D c2_) {
  D T4;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  D result_T, result_;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_1 T20 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:729
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T5.vector_element_[0] = c2_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T4 = Kmultiple_collectionVKiI(c1_, &T5);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T6 = CONGRUENT_CALL1(T4);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T7 = T6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T8 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T9 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T10 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T11 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  T12T = T7;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
    T14 = CALL3(T10, T4, T12, T8);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
      T15 = CALL2(T11, T4, T12);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
        T16 = CALL2(T9, T4, T12);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
        T20.vector_element_[0] = T15;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
        T19 = KapplyVKdI(test_, &T20);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
        T18 = T19;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
        T12T = T16;
        result_T = T18;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
    T17_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:731
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:729
  MV_SET_COUNT(1);
  return(T17_0);
}

D KeveryQ_twoVKiMM0I (D test_, D c1_, D c2_) {
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
  D T16T, T16;
  D T17T, T17;
  D result_T, result_;
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

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:770
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(c1_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T10 = CONGRUENT_CALL1(c2_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T11 = T10;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T12 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T13 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T14 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T15 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  T16T = T5;
  T17T = T11;
  result_T = &KPtrueVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    T16 = T16T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    T17 = T17T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    T19 = CALL3(T8, c1_, T16, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    if (T19 != &KPfalseVKi) {
      T21 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
      T20 = CALL3(T14, c2_, T17, T12);
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    if (T21 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
      T22 = CALL2(T9, c1_, T16);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
      T23 = CALL2(T15, c2_, T17);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
      if (result_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
        T24 = CALL2(T7, c1_, T16);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
        T25 = CALL2(T13, c2_, T17);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
        T26 = CALL2(test_, T22, T23);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
        T16T = T24;
        T17T = T25;
        result_T = T26;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:774
    T28 = primitive_as_boolean(result_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:774
    T27_0 = T28;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:772
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:770
  MV_SET_COUNT(1);
  return(T27_0);
}

D KeveryQ_twoVKiMM1I (D test_, D c1_, D c2_) {
  D T4;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  D result_T, result_;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:778
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T5.vector_element_[0] = c2_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T4 = Kmultiple_collectionVKiI(c1_, &T5);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T6 = CONGRUENT_CALL1(T4);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T7 = T6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T8 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T9 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T10 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T11 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  T12T = T7;
  result_T = &KPtrueVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    T14 = CALL3(T10, T4, T12, T8);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
      T15 = CALL2(T11, T4, T12);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
      if (result_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
        T16 = CALL2(T9, T4, T12);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
        T21.vector_element_[0] = T15;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
        T20 = KapplyVKdI(test_, &T21);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
        T19 = T20;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
        T12T = T16;
        result_T = T19;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    T18 = primitive_as_boolean(result_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
    T17_0 = T18;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:780
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:778
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kreduce1VKdMM0I (D fn_, D collection_) {
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;
  D initial_state_;
  D limit_;
  D next_state_;
  D finished_stateQ_;
  D current_element_;
  D T9;
  D T10;
  D resultF11;
  D T12;
  D state_T, state_;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D resultF20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_2 T23 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T24_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:803
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:805
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3_0 = CONGRUENT_CALL1(collection_);
  T3_1 = MV_GET_ELT(1);
  T3_2 = MV_GET_ELT(2);
  T3_3 = MV_GET_ELT(3);
  T3_4 = MV_GET_ELT(4);
  T3_5 = MV_GET_ELT(5);
  T3_6 = MV_GET_ELT(6);
  T3_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:805
  initial_state_ = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:805
  limit_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:805
  next_state_ = T3_2;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:805
  finished_stateQ_ = T3_3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:805
  current_element_ = T3_5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:806
  T9 = CALL3(finished_stateQ_, collection_, initial_state_, limit_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:806
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:808
    T23.vector_element_[0] = &KJformat_string_;
    T23.vector_element_[1] = &K238;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:808
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T10 = CONGRUENT_CALL2(&KLempty_collection_errorGVKi, &T23);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:808
    T24_0 = KerrorVKdMM0I(T10, &KPempty_vectorVKi);
    T19_0 = T24_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:811
    resultF11 = CALL2(current_element_, collection_, initial_state_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:811
    resultF20 = resultF11;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:812
    T12 = CALL2(next_state_, collection_, initial_state_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:812
    state_T = T12;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:812
      state_ = state_T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:814
      T17 = CALL3(finished_stateQ_, collection_, state_, limit_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:812
      if (T17 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:815
        T14 = CALL2(current_element_, collection_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:815
        T22 = resultF20;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:815
        T15 = CALL2(fn_, T22, T14);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:815
        resultF20 = T15;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:813
        T16 = CALL2(next_state_, collection_, state_);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:812
        state_T = T16;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:812
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:817
      T21 = resultF20;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:817
      T18_0 = T21;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:812
    T19_0 = T18_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:806
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:803
  MV_SET_COUNT(1);
  return(T19_0);
}

D KLnatural_number_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1073
  T5 = primitive_object_allocate_filled(3,&KLnatural_number_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1073
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLempty_collection_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:142
  T5 = primitive_object_allocate_filled(3,&KLempty_collection_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:142
  MV_SET_COUNT(1);
  return(T6_0);
}

D KreduceVKdMM0I (D fn_, D init_value_, D collection_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D result_T, result_;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:789
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  result_T = init_value_;
  T11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
    T12 = CALL3(T8, collection_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
      T13 = CALL2(T9, collection_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
      T14 = CALL2(fn_, result_, T13);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
      T15 = CALL2(T7, collection_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
      result_T = T14;
      T11T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:794
    T16_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:791
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:789
  MV_SET_COUNT(1);
  return(T16_0);
}

D KmemberQVKdMM0I (D value_, D collection_, D Urest_, D test_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D result_T, result_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:829
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  T6 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  T11T = T6;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
    T13 = CALL3(T9, collection_, T11, T7);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
      T14 = CALL2(T10, collection_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
        T15 = CALL2(T8, collection_, T11);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:832
        T16 = test_;
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:832
        T17 = CALL2(T16, value_, T14);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
        T11T = T15;
        result_T = T17;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:835
    if (result_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:835
      T18_0 = &KPtrueVKi;
      T20_0 = T18_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:835
      T19_0 = &KPfalseVKi;
      T20_0 = T19_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:835
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:831
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:829
  MV_SET_COUNT(1);
  return(T20_0);
}

D KLsubscript_out_of_bounds_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:138
  T5 = primitive_object_allocate_filled(3,&KLsubscript_out_of_bounds_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:138
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmap_as_oneVKiMM0I (D type_, D function_, D collection_) {
  D T4;
  D acc_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13T, T13;
  D T14;
  D T15;
  D k_;
  D T17;
  D T18;
  D T19_0;
  _KLsimple_object_vectorGVKd_2 T20 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:244
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:248
  CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:248
  T20.vector_element_[0] = &KJkey_test_;
  T20.vector_element_[1] = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:248
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  acc_ = CONGRUENT_CALL2(&KLkeyed_accumulatorGVKi, &T20);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T6 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  T7 = T6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  T8 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  T9 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  T10 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  T11 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  T12 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  T13T = T7;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
    T13 = T13T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
    T14 = CALL3(T10, collection_, T13, T8);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
    if (T14 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
      T15 = CALL2(T12, collection_, T13);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
      k_ = CALL2(T11, collection_, T13);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
      T17 = CALL1(function_, T15);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T17, acc_, k_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
      T18 = CALL2(T9, collection_, T13);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
      T13T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:249
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:250
  CONGRUENT_CALL_PROLOG(&Kconvert_accumulator_asVKi, 2);
  T19_0 = CONGRUENT_CALL2(type_, acc_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:244
  MV_SET_COUNT(1);
  return(T19_0);
}

D Kmap_as_oneVKiMM1I (D type_, D function_, D collection_) {
  D T4;
  D acc_;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  _KLsimple_object_vectorGVKd_2 T18 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:257
  CONGRUENT_CALL_PROLOG(&Kkey_testVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:257
  T18.vector_element_[0] = &KJkey_test_;
  T18.vector_element_[1] = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:257
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  acc_ = CONGRUENT_CALL2(&KLsequence_accumulatorGVKi, &T18);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T6 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  T7 = T6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  T8 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  T9 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  T10 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  T11 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  T12T = T7;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
    T12 = T12T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
    T13 = CALL3(T10, collection_, T12, T8);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
      T14 = CALL2(T11, collection_, T12);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
      T15 = CALL1(function_, T14);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
      CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
      CONGRUENT_CALL2(acc_, T15);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
      T16 = CALL2(T9, collection_, T12);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
      T12T = T16;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:258
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:259
  CONGRUENT_CALL_PROLOG(&Kconvert_accumulator_asVKi, 2);
  T17_0 = CONGRUENT_CALL2(type_, acc_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:253
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kmap_as_oneVKiMM2I (D type_, D function_, D collection_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D result_T, result_;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:265
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  result_T = &KPempty_listVKi;
  T11T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
    T12 = CALL3(T8, collection_, T11, T6);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
      T13 = CALL2(T9, collection_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
      T14 = CALL1(function_, T13);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
      T16 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
      SLOT_VALUE_SETTER(T14, T16, 0);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
      SLOT_VALUE_SETTER(result_, T16, 1);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
      T15 = CALL2(T7, collection_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
      result_T = T16;
      T11T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:271
    T17_0 = KreverseXVKdMM2I(result_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:268
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:265
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kmap_as_oneVKiMM3I (D type_, D function_, D collection_) {
  D collection_size_;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D result_;
  DWORD i_T, i_;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16_0;
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T19;
  D T20;
  D T21_0;
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:278
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:282
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  collection_size_ = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:283
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T5 = CONGRUENT_CALL2(collection_size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:283
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:284
    T17.vector_element_[0] = &KJsize_;
    T17.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:284
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6_0 = CONGRUENT_CALL2(type_, &T17);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:284
    T21_0 = T6_0;
    T16_0 = T21_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:287
    CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
    T7 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:288
    CONGRUENT_CALL_PROLOG(&KfirstVKd, 2);
    T8 = CONGRUENT_CALL2(collection_, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:288
    T9 = CALL1(function_, T8);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:287
    T18.vector_element_[0] = &KJdimensions_;
    T18.vector_element_[1] = T7;
    T18.vector_element_[2] = &KJfill_;
    T18.vector_element_[3] = T9;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:287
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    result_ = CONGRUENT_CALL2(type_, &T18);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
    i_T = 5;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
      T20 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T12 = CONGRUENT_CALL2(T20, collection_size_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:291
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T13 = CONGRUENT_CALL3(collection_, T20, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:291
        T14 = CALL1(function_, T13);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:291
        CALL3(&Kelement_no_bounds_check_setterVKe, T14, result_, T20);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
        T19 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
        i_T = T19;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:290
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:294
    T15_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:294
    T22_0 = T15_0;
    T16_0 = T22_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:283
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:278
  MV_SET_COUNT(1);
  return(T16_0);
}

D Kmap_as_oneVKiMM4I (D type_, D function_, D collection_) {
  D collection_size_;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D result_;
  DWORD i_T, i_;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16_0;
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T19;
  D T20;
  D T21_0;
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:298
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:302
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  collection_size_ = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:303
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T5 = CONGRUENT_CALL2(collection_size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:303
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:304
    T17.vector_element_[0] = &KJsize_;
    T17.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:304
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6_0 = CONGRUENT_CALL2(type_, &T17);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:304
    T21_0 = T6_0;
    T16_0 = T21_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:307
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T7 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:308
    CONGRUENT_CALL_PROLOG(&KfirstVKd, 2);
    T8 = CONGRUENT_CALL2(collection_, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:308
    T9 = CALL1(function_, T8);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:307
    T18.vector_element_[0] = &KJsize_;
    T18.vector_element_[1] = T7;
    T18.vector_element_[2] = &KJfill_;
    T18.vector_element_[3] = T9;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:307
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    result_ = CONGRUENT_CALL2(type_, &T18);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
    i_T = 5;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
      T20 = primitive_cast_raw_as_integer(i_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T12 = CONGRUENT_CALL2(T20, collection_size_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:311
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T13 = CONGRUENT_CALL3(collection_, T20, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:311
        T14 = CALL1(function_, T13);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:311
        CALL3(&Kelement_no_bounds_check_setterVKe, T14, result_, T20);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
        T19 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
        i_T = T19;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:310
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:314
    T15_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:314
    T22_0 = T15_0;
    T16_0 = T22_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:303
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:298
  MV_SET_COUNT(1);
  return(T16_0);
}

D Kmap_as_oneVKiMM5I (D type_, D function_, D collection_) {
  DWORD i_T, i_;
  D T5;
  D T6_0;
  D T7;
  D result_;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:325
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:329
  T7 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:329
  result_ = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
    T10 = primitive_machine_word_less_thanQ(i_,T9);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:332
      T11 = REPEATED_D_SLOT_VALUE_TAGGED(collection_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:332
      T5 = CALL1(function_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:332
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T5, result_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
      i_T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:331
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:335
  T6_0 = result_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:325
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmap_as_oneVKiMM6I (D type_, D function_, D collection_) {
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

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:341
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

D Kmap_as_oneVKiMM7I (D type_, D function_, D collection_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D result_T, result_;
  D T11T, T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:346
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
  result_T = &KPempty_listVKi;
  T11T = T5;
L0: ;
    result_ = result_T;
    T11 = T11T;
    T12 = CALL3(T8, collection_, T11, T6);
    if (T12 == &KPfalseVKi) {
      T13 = CALL2(T9, collection_, T11);
      T14 = CALL1(function_, T13);
      T16 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      SLOT_VALUE_SETTER(T14, T16, 0);
      SLOT_VALUE_SETTER(result_, T16, 1);
      T15 = CALL2(T7, collection_, T11);
      result_T = T16;
      T11T = T15;
      goto L0;
    }
    T17_0 = KreverseXVKdMM2I(result_);
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kelement_no_bounds_checkVKeMM0I (D collection_, D key_, D Urest_, D default_) {
  D T5_0;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1055
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1057
  T6.vector_element_[0] = &KJdefault_;
  T6.vector_element_[1] = default_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1057
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T5_0 = CONGRUENT_CALL3(collection_, key_, &T6);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1055
  MV_SET_COUNT(1);
  return(T5_0);
}

D KLiteration_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:140
  T5 = primitive_object_allocate_filled(3,&KLiteration_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:140
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLkey_test_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:128
  T5 = primitive_object_allocate_filled(3,&KLkey_test_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:128
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLinvalid_index_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:136
  T5 = primitive_object_allocate_filled(3,&KLinvalid_index_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:136
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLnot_found_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:130
  T5 = primitive_object_allocate_filled(3,&KLnot_found_errorGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:130
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_typeVKeMM1I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1102
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1103
  T2_0 = &KLobjectGVKd;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:1102
  MV_SET_COUNT(1);
  return(T2_0);
}

D KeveryQ_oneVKiMM0I (D test_, D coll_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9T, T9;
  D result_T, result_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:757
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  T9T = T4;
  result_T = &KPtrueVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
    T11 = CALL3(T7, coll_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
      T12 = CALL2(T8, coll_, T9);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
      if (result_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
        T13 = CALL2(T6, coll_, T9);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
        T14 = CALL1(test_, T12);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
        T9T = T13;
        result_T = T14;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:761
    T16 = primitive_as_boolean(result_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:761
    T15_0 = T16;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:759
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:757
  MV_SET_COUNT(1);
  return(T15_0);
}

D KanyQ_oneVKiMM0I (D test_, D coll_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9T, T9;
  D result_T, result_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:708
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  T9T = T4;
  result_T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
    T11 = CALL3(T7, coll_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
      T12 = CALL2(T8, coll_, T9);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
      if (result_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
        T13 = CALL2(T6, coll_, T9);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
        T14 = CALL1(test_, T12);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
        T9T = T13;
        result_T = T14;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:712
    T15_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:710
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:708
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kdo_oneVKiMM0I (D function_, D collection_) {
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

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
    T10 = CALL3(T7, collection_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
      T11 = CALL2(T8, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
      CALL1(function_, T11);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
      T12 = CALL2(T6, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
    T13_0 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:189
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:186
  MV_SET_COUNT(1);
  return(T13_0);
}

D KPcurry_current_element_setterVKeI (D collection_, D state_, D current_element_setter_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:157
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:159
  T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_Pcurry_current_element_setterF628, 3, current_element_setter_, state_, collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:159
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:157
  return(T4);
}

static D Kanonymous_of_Pcurry_current_element_setterF628I (D new_value_) {
  D T1;
  D T2;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:159
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:160
  T1 = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:160
  CALL3(T1, new_value_, CREF(2), CREF(1));
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:160
  T2 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:159
  return(T2);
}

D Kfind_keyVKdMM0I (D collection_, D fn_, D Urest_, D skip_, D failure_) {
  D skipF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14T, T14;
  D found_T, found_;
  D kludge_T, kludge_;
  D T17;
  D T18;
  D k_;
  D T20;
  D T21;
  D T22;
  D T23_0;
  D T24_0;
  D T25_0;
  D skipF26;
  D T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:844
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:844
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF6 = skip_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:844
  skipF26 = skipF6;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T7 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  T8 = T7;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  T9 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  T10 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  T11 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  T12 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  T13 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  T14T = T8;
  found_T = &KPfalseVKi;
  kludge_T = (D) 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
    T14 = T14T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
    found_ = found_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
    kludge_ = kludge_T;
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
    T17 = CALL3(T11, collection_, T14, T9);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
      T18 = CALL2(T13, collection_, T14);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
      k_ = CALL2(T12, collection_, T14);
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
      if (found_ == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
        T20 = CALL2(T10, collection_, T14);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
        T21 = CALL1(fn_, T18);
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
        if (T21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
          T27 = skipF26;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
          T28 = primitive_cast_integer_as_raw(T27);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
          T29 = primitive_machine_word_subtract_signal_overflow(T28,4);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
          T30 = primitive_cast_raw_as_integer(T29);
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
          skipF26 = T30;
          // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
          T31 = primitive_machine_word_less_thanQ(T29,1);
          T22 = T31;
        } else {
          T22 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:848
        // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
        T14T = T20;
        found_T = T22;
        kludge_T = k_;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:852
    if (found_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:852
      T23_0 = kludge_;
      T25_0 = T23_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:852
      T24_0 = failure_;
      T25_0 = T24_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:852
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:847
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:844
  MV_SET_COUNT(1);
  return(T25_0);
}

D KmapVKdMM0I (D fn_, D coll_, D more_colls_) {
  D T4;
  D tfc_;
  D T6;
  D T7_0;
  D T8;
  DWORD T9;
  D T10;
  D T11_0;
  D T12;
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:204
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:207
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T4 = CONGRUENT_CALL1(coll_);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:207
  tfc_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:208
  T8 = SLOT_VALUE_INITD(more_colls_, 0);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:208
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:208
  T10 = primitive_machine_word_equalQ(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:208
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:209
    ENGINE_NODE_CALL_PROLOG(&Kmap_as_oneVKi, &K656, 3);
    T11_0 = ENGINE_NODE_CALL3(&K656, tfc_, fn_, coll_);
    T7_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:211
    T6 = MAKE_CLOSURE_INITD(&Kanonymous_of_mapF658, 1, fn_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:212
    T12 = Kmultiple_collectionVKiI(coll_, more_colls_);
    // /opt/opendylan-2013.1/sources/dylan/collection.dylan:211
    ENGINE_NODE_CALL_PROLOG(&Kmap_as_oneVKi, &K657, 3);
    T13_0 = ENGINE_NODE_CALL3(&K657, tfc_, T6, T12);
    T7_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:204
  MV_SET_COUNT(1);
  return(T7_0);
}

static D Kanonymous_of_mapF658I (D v_) {
  D T1;
  _KLsimple_object_vectorGVKd_1 T2 = {&KLsimple_object_vectorGVKdW, (D) 5};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:211
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:211
  T2.vector_element_[0] = v_;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:211
  T1 = KapplyVKdI(CREF(0), &T2);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:211
  return(T1);
}

D KsuppliedQVKiI (D x_) {
  D T1;
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:28
  T1 = primitive_idQ(x_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:28
  T3 = primitive_not(T1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:28
  T2_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:28
  MV_SET_COUNT(1);
  return(T2_0);
}

D KunsuppliedQVKiI (D x_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:27
  T1 = primitive_idQ(x_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:27
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:27
  return(T2);
}

D KunsuppliedVKiI () {
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:26
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:26
  T0 = &Kunsupplied_objectVKi;
  MV_SET_ELT(0, &Kunsupplied_objectVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/collection.dylan:26
  return(T0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_collection_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_collection_for_user () {
  return;
}


/* eof */
