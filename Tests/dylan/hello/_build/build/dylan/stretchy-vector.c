#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(13);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(4);

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

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
  D mep_;
} _KLlambdaGVKe;

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
  D incremental_gf_module_;
  D incremental_gf_domain_info_;
  D incremental_gf_method_libraries_;
  D incremental_gf_properties_;
} _KLincremental_generic_functionGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(2);
define__KLstandalone_domainGVKe(1);

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
} _KLnatural_number_errorGVKi;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(39);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(0);

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
  D element_type_;
} _KLlimited_collectionGVKe;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

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
} _KLvectorGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D element_type_;
  D stretchy_representation_;
} _KLstretchy_element_type_vectorGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_stretchy_vector_typeGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

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
} _KLdequeGVKd;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_byte_vectorGVKi;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_byte_character_vectorGVKe;

#define  define__KLstretchy_element_type_vector_representationGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D Psize_; \
    D size_; \
    D stretchy_element_type_vector_element_[nrepeated+1]; \
  } _KLstretchy_element_type_vector_representationGVKi_##nrepeated;

#define  define__KLstretchy_byte_vector_representationGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D Psize_; \
    D size_; \
    D stretchy_byte_vector_element_[nrepeated+1]; \
  } _KLstretchy_byte_vector_representationGVKi_##nrepeated;

#define  define__KLstretchy_byte_character_vector_representationGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D Psize_; \
    D size_; \
    char stretchy_byte_character_vector_element_[nrepeated+1]; \
  } _KLstretchy_byte_character_vector_representationGVKi_##nrepeated;


/* Typedefs for defined classes */

#define  define__KLstretchy_object_vector_representationGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D Psize_; \
    D size_; \
    D stretchy_object_vector_element_[nrepeated+1]; \
  } _KLstretchy_object_vector_representationGVKi_##nrepeated;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

typedef struct {
  D wrapper;
} _KLstretchy_vectorGVKd;

typedef struct {
  D wrapper;
} _KLstretchy_sequenceGVKe;

typedef struct {
  D wrapper;
} _KLlimited_stretchy_vectorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLcapacity_size_errorGVKi;

typedef struct {
  D wrapper;
  D Psize_;
} _KLlimited_stretchy_vector_representationGVKe;

typedef struct {
  D wrapper;
} _KLstretchy_mutable_sequenceGVKe;


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJcapacity_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
D Kinstall_and_return_make_method_init_dataVKiI (D descriptor_);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_24;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lstretchy_object_vectorG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lstretchy_vectorG_typesVKi;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_24;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_12;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KlistVKdI (D objects_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLnatural_number_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLnatural_number_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
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
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM1;
extern _KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM2;
extern _KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM3;
extern _KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_2;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
D KerrorVKdMM1I (D, D);
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_);
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
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
extern _KLclassGVKd KLsimple_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_errorGVKdW;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLsetter_methodGVKi Kstretchy_representation_setterVKeMM1;
extern _KLsetter_methodGVKi Kstretchy_representation_setterVKeMM2;
extern _KLsetter_methodGVKi Kstretchy_representation_setterVKeMM3;
extern _KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_2;
extern _KLgetter_methodGVKi Kstretchy_representationVKeMM1;
extern _KLgetter_methodGVKi Kstretchy_representationVKeMM2;
extern _KLgetter_methodGVKi Kstretchy_representationVKeMM3;
extern _KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_2;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLsymbolGVKd KJclass_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLstretchy_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_element_type_vectorGVKeW;
extern _KLclassGVKd KLlimited_stretchy_vector_typeGVKi;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_vector_typeGVKiW;
extern _KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM1;
extern _KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM2;
extern _KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM3;
extern _KLunionGVKe KLvector_typeGVKi;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_4;
D KreverseXVKdMM2I (D l_);
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLincremental_generic_functionGVKe Ksize_setterVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLsymbolGVKd KJtest_;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLsymbolGVKd KJcount_;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_9;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_12;
D Kelement_range_errorVKeI (D, D);
D Kpower_of_two_ceilingVKeMM0I (D);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_4;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_9;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsimple_methodGVKe Kcollection_fillVKeMM2;
extern _KLsimple_methodGVKe Kcollection_fillVKeMM3;
extern _KLsimple_methodGVKe Kcollection_fillVKeMM4;
extern _KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_2;
extern _KLsimple_methodGVKe Kstretchy_vector_elementVKeMM1;
extern _KLsimple_methodGVKe Kstretchy_vector_elementVKeMM2;
extern _KLsimple_methodGVKe Kstretchy_vector_elementVKeMM3;
extern _KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_2;
extern _KLincremental_generic_functionGVKe Kelement_typeVKe;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM2;
extern _KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM3;
extern _KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM4;
extern _KLsimple_methodGVKe Ktrusted_size_setterVKiMM5;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_methodGVKe Kstretchy_representation_typeVKeMM1;
extern _KLsimple_methodGVKe Kstretchy_representation_typeVKeMM2;
extern _KLsimple_methodGVKe Kstretchy_representation_typeVKeMM3;
extern _KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_2;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_9;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lmutable_collectionG_typesVKi;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_7;
extern _KLsymbolGVKd KJdefault_;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_10;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_5;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_11;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
D Kallocate_instanceVKeI (D class_, D init_args_);
extern _KLclassGVKd KLdequeGVKd;
extern _KLclassGVKd KLstretchy_byte_vectorGVKi;
extern _KLclassGVKd KLstretchy_byte_character_vectorGVKe;
extern _KLclassGVKd KLstretchy_element_type_vector_representationGVKi;
extern _KLclassGVKd KLstretchy_byte_vector_representationGVKi;
extern _KLclassGVKd KLstretchy_byte_character_vector_representationGVKi;

/* Defined object declarations */

D KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd KLstretchy_object_vector_representationGVKi;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vector_representationGVKiW;
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
extern _KLclassGVKd KLstretchy_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_vectorGVKdW;
extern _KLclassGVKd KLstretchy_sequenceGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_sequenceGVKeW;
extern _KLsimple_methodGVKe KemptyQVKdMM3;
D KemptyQVKdMM3I (D vector_);
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM4;
D KemptyQVKdMM4I (D);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_12;
extern _KLsimple_methodGVKe Ksize_setterVKdMM0;
D Ksize_setterVKdMM0I (D new_size_, D vector_);
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM1;
D Ksize_setterVKdMM1I (D, D);
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_6;
extern _KLsimple_methodGVKe KsizeVKdMM21;
D KsizeVKdMM21I (D vector_);
extern _KLgetter_methodGVKi KsizeVKdMM22;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_21;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM8;
D Ktype_for_copyVKdMM8I (D);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM9;
D Ktype_for_copyVKdMM9I (D vector_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_11;
extern _KLsimple_methodGVKe Kelement_typeVKeMM15;
D Kelement_typeVKeMM15I (D t_);
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_12;
extern _KLkeyword_methodGVKe KelementVKdMM19;
D KelementVKdMM19I (D collection_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_15;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM17;
D Kelement_no_bounds_checkVKeMM17I (D collection_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_12;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM15;
D Kforward_iteration_protocolVKdMM15I (D sequence_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM14;
D Kmap_into_rigid_oneVKiMM14I (D fun_, D target_, D coll_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM13;
D Kmap_into_rigid_oneVKiMM13I (D fun_, D target_, D coll_);
extern _KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM8;
D Kmap_into_stretchy_oneVKiMM8I (D fun_, D target_, D coll_);
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_10;
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM3;
D KaddXVKdMM3I (D, D);
extern _KLsimple_methodGVKe KaddXVKdMM2;
D KaddXVKdMM2I (D vector_, D new_element_);
extern _KLkeyword_methodGVKe KremoveXVKdMM2;
D KremoveXVKdMM2I (D vector_, D target_, D Urest_, D test_, D count_);
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM3;
D KremoveXVKdMM3I (D, D, D, D, D);
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_10;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM10;
D Kbackward_iteration_protocolVKdMM10I (D sequence_);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe Kelement_setterVKdMM19;
D Kelement_setterVKdMM19I (D, D, D);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_13;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM19;
D Kelement_no_bounds_check_setterVKeMM19I (D new_value_, D collection_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_10;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_4;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM2;
D KremoveVKdMM2I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM3;
D Kreplace_subsequenceXVKdMM3I (D, D, D, D, D);
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM2;
D KchooseVKdMM2I (D, D);
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_28;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_27;
extern _KLincremental_generic_functionGVKe Klimited_stretchy_vectorVKe;
extern _KLincremental_generic_functionGVKe Kstretchy_representationVKe;
extern _KLincremental_generic_functionGVKe Kstretchy_representation_setterVKe;
extern _KLclassGVKd KLlimited_stretchy_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_vectorGVKeW;
extern _KLclassGVKd KLcapacity_size_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLcapacity_size_errorGVKiW;
extern _KLinstance_slot_descriptorGVKe KPsizeVKiHLlimited_stretchy_vector_representationG;
extern _KLclassGVKd KLlimited_stretchy_vector_representationGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_vector_representationGVKeW;
extern _KLincremental_generic_functionGVKe Kstretchy_vector_element_setterVKe;
extern _KLclassGVKd KLstretchy_mutable_sequenceGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_mutable_sequenceGVKeW;
extern _KLkeyword_methodGVKe KlimitedVKdMM0;
D KlimitedVKdMM0I (D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM2;
D KinitializeVKdMM2I (D, D, D, D, D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_13;
extern _KLkeyword_methodGVKe KmakeVKdMM31;
D KmakeVKdMM31I (D class_, D all_keys_, D size_, D capacity_, D fill_);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_25;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_26;
extern _KLsimple_methodGVKe KasVKdMM8;
D KasVKdMM8I (D, D);
extern _KLsimple_methodGVKe KasVKdMM9;
D KasVKdMM9I (D, D);
extern _KLsimple_methodGVKe KasVKdMM47;
D KasVKdMM47I (D, D);
extern _KLsimple_methodGVKe KasVKdMM48;
D KasVKdMM48I (D class_, D coll_);
extern _KLsimple_methodGVKe KasVKdMM49;
D KasVKdMM49I (D class_, D vector_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_26;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_27;
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_object_vectorG;
static _KLpairGVKd K116;
static _KLlambdaGVKe Kslot_initializerF119;
static D Kslot_initializerF119I ();
static _KLsignatureGVKe K120;
static _KLsignatureAvaluesGVKi K121;
static _KLsimple_object_vectorGVKd_2 K122;
static _KLsingletonGVKd K123;
static _KLsignatureAvaluesGVKi K124;
static _KLsimple_object_vectorGVKd_2 K125;
static _KLsingletonGVKd K126;
static _KLsignatureAvaluesGVKi K127;
static _KLsimple_object_vectorGVKd_2 K128;
static _KLsignatureAvaluesGVKi K129;
static _KLsimple_object_vectorGVKd_2 K130;
static _KLsignatureAvaluesGVKi K131;
static _KLsimple_object_vectorGVKd_2 K132;
static _KLsingletonGVKd K133;
static _KLkeyword_signatureAvaluesGVKi K134;
static _KLsimple_object_vectorGVKd_6 K135;
static _KLsimple_object_vectorGVKd_1 K136;
static _KLsimple_object_vectorGVKd_3 K137;
static _KLbyte_stringGVKd_34 K138;
static _KLbyte_stringGVKd_21 K139;
static _KLkeyword_signatureGVKe K140;
static _KLsimple_object_vectorGVKd_6 K141;
static _KLsimple_object_vectorGVKd_3 K142;
static _KLkeyword_signatureAvaluesGVKi K143;
static _KLsimple_object_vectorGVKd_2 K144;
static _KLsymbolGVKd KJof_;
static _KLbyte_stringGVKd_2 K146;
static _KLsimple_object_vectorGVKd_1 K147;
static _KLimplementation_classGVKe K148;
static _KLsimple_object_vectorGVKd_2 K149;
static _KLsimple_object_vectorGVKd_10 K150;
static _KLsimple_object_vectorGVKd_1 K151;
static _KLsimple_object_vectorGVKd_1 K152;
static _KLbyte_stringGVKd_27 K153;
extern _KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM0;
D Kstretchy_vector_element_setterVKeMM0I (D new_value_, D rep_, D key_);
extern _KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_3;
static _KLpairGVKd K157;
static _KLpairGVKd K158;
static _KLpairGVKd K159;
static _KLpairGVKd K160;
static _KLsignatureGVKe K161;
static _KLbyte_stringGVKd_30 K162;
static _KLsimple_object_vectorGVKd_3 K163;
static _KLsignatureGVKe K164;
static _KLsimple_object_vectorGVKd_3 K165;
static _KLimplementation_classGVKe K166;
static _KLsimple_object_vectorGVKd_1 K167;
extern _KLkeyword_methodGVKe KLlimited_stretchy_vector_representationGZ32ZconstructorVKiMM0;
D KLlimited_stretchy_vector_representationGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K170;
static _KLsimple_object_vectorGVKd_6 K171;
static _KLbyte_stringGVKd_23 K172;
static _KLkeyword_signatureAvaluesGVKi K173;
static _KLsimple_object_vectorGVKd_2 K174;
static _KLsimple_object_vectorGVKd_1 K175;
static _KLsimple_object_vectorGVKd_1 K176;
static _KLbyte_stringGVKd_40 K177;
extern _KLsealed_generic_functionGVKe KPsizeVKi;
extern _KLsealed_generic_functionGVKe KPsize_setterVKi;
extern _KLsetter_methodGVKi KPsize_setterVKiMM0;
static _KLpairGVKd K181;
static _KLbyte_stringGVKd_12 K182;
extern _KLgetter_methodGVKi KPsizeVKiMM0;
static _KLpairGVKd K184;
static _KLbyte_stringGVKd_5 K185;
static _KLimplementation_classGVKe K186;
static _KLsimple_object_vectorGVKd_2 K187;
extern _KLkeyword_methodGVKe KLcapacity_size_errorGZ32ZconstructorVKiMM0;
D KLcapacity_size_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K190;
static _KLsimple_object_vectorGVKd_7 K191;
static _KLkeyword_signatureAvaluesGVKi K192;
static _KLsimple_object_vectorGVKd_4 K193;
static _KLsimple_object_vectorGVKd_2 K194;
static _KLsimple_object_vectorGVKd_1 K195;
static _KLbyte_stringGVKd_21 K196;
static _KLimplementation_classGVKe K197;
extern _KLkeyword_methodGVKe KLlimited_stretchy_vectorGZ32ZconstructorVKiMM0;
D KLlimited_stretchy_vectorGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K200;
static _KLsimple_object_vectorGVKd_13 K201;
static _KLsimple_object_vectorGVKd_1 K202;
static _KLkeyword_signatureAvaluesGVKi K203;
static _KLsimple_object_vectorGVKd_1 K204;
static _KLbyte_stringGVKd_25 K205;
extern _KLsetter_methodGVKi Kstretchy_representation_setterVKeMM0;
extern _KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_3;
static _KLpairGVKd K208;
static _KLpairGVKd K209;
static _KLpairGVKd K210;
static _KLpairGVKd K211;
static _KLsignatureAvaluesGVKi K212;
static _KLbyte_stringGVKd_30 K213;
static _KLsimple_object_vectorGVKd_2 K214;
extern _KLgetter_methodGVKi Kstretchy_representationVKeMM0;
extern _KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_3;
static _KLpairGVKd K217;
static _KLpairGVKd K218;
static _KLpairGVKd K219;
static _KLpairGVKd K220;
static _KLsignatureAvaluesGVKi K221;
static _KLbyte_stringGVKd_23 K222;
extern _KLsimple_methodGVKe Klimited_stretchy_vectorVKeMM0;
D Klimited_stretchy_vectorVKeMM0I (D);
static _KLpairGVKd K225;
static _KLsignatureAvaluesGVKi K226;
static _KLbyte_stringGVKd_23 K227;
static _KLsimple_object_vectorGVKd_1 K228;
static _KLunionGVKe K229;
static _KLsingletonGVKd K230;
extern _KLsealed_generic_functionGVKe Kconcrete_limited_stretchy_vector_classVKi;
static _KLsymbolGVKd KJconcrete_class_;
static _KLbyte_stringGVKd_14 K233;
extern _KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM0;
D Kconcrete_limited_stretchy_vector_classVKiMM0I (D);
static _KLpairGVKd K236;
static _KLpairGVKd K237;
static _KLpairGVKd K238;
static _KLpairGVKd K239;
static _KLbyte_stringGVKd_38 K240;
static _KLsignatureAvaluesGVKi K241;
static _KLsimple_object_vectorGVKd_1 K242;
static _KLsingletonGVKd K243;
static _KLsignatureAvaluesGVKi K244;
static _KLsimple_object_vectorGVKd_1 K245;
static _KLsignatureAvaluesGVKi K246;
static _KLsimple_object_vectorGVKd_2 K247;
static _KLkeyword_signatureAvaluesGVKi K248;
static _KLsimple_object_vectorGVKd_4 K249;
static _KLsimple_object_vectorGVKd_2 K250;
static _KLsimple_object_vectorGVKd_2 K251;
static _KLsimple_object_vectorGVKd_1 K252;
static _KLunionGVKe K253;
static _KLkeyword_signatureAvaluesGVKi K254;
static _KLsimple_object_vectorGVKd_4 K255;
static _KLsimple_object_vectorGVKd_2 K256;
static _KLsimple_object_vectorGVKd_2 K257;
static _KLsimple_object_vectorGVKd_2 K258;
static _KLsignatureGVKe K259;
static _KLsimple_object_vectorGVKd_3 K260;
D Ktrusted_size_setterVKiMM1I (D, D);
extern _KLsimple_methodGVKe Kstretchy_object_vector_current_elementVKi;
D Kstretchy_object_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kstretchy_object_vector_current_element_setterVKi;
D Kstretchy_object_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K266;
static _KLsimple_object_vectorGVKd_2 K267;
static _KLsignatureAvaluesGVKi K268;
static _KLsimple_object_vectorGVKd_8 K269;
static _KLkeyword_signatureAvaluesGVKi K270;
static _KLsimple_object_vectorGVKd_4 K271;
extern _KLincremental_generic_functionGVKe Kstretchy_vector_elementVKe;
extern _KLincremental_generic_functionGVKe Kcollection_fillVKe;
extern _KLsimple_methodGVKe Kcollection_fillVKeMM0;
D Kcollection_fillVKeMM0I (D);
extern _KLsimple_methodGVKe Kcollection_fillVKeMM1;
D Kcollection_fillVKeMM1I (D vector_);
extern _KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_3;
static _KLpairGVKd K279;
static _KLpairGVKd K280;
static _KLpairGVKd K281;
static _KLpairGVKd K282;
static _KLpairGVKd K283;
static _KLsignatureGVKe K284;
static _KLbyte_stringGVKd_15 K285;
static _KLsignatureGVKe K286;
extern _KLsimple_methodGVKe Kstretchy_vector_elementVKeMM0;
D Kstretchy_vector_elementVKeMM0I (D rep_, D key_);
extern _KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_3;
static _KLpairGVKd K290;
static _KLpairGVKd K291;
static _KLpairGVKd K292;
static _KLpairGVKd K293;
static _KLsignatureGVKe K294;
static _KLbyte_stringGVKd_23 K295;
static _KLsimple_object_vectorGVKd_2 K296;
static _KLsignatureGVKe K297;
static _KLsimple_object_vectorGVKd_2 K298;
static _KLkeyword_signatureAvaluesGVKi K299;
static _KLsimple_object_vectorGVKd_2 K300;
extern _KLsealed_generic_functionGVKe Ktrusted_size_setterVKi;
extern _KLsimple_methodGVKe Ktrusted_size_setterVKiMM0;
D Ktrusted_size_setterVKiMM0I (D new_size_, D vector_);
extern _KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM1;
static _KLpairGVKd K305;
static _KLpairGVKd K306;
static _KLpairGVKd K307;
static _KLpairGVKd K308;
static _KLpairGVKd K309;
static _KLpairGVKd K310;
static _KLbyte_stringGVKd_19 K311;
static _KLsignatureAvaluesGVKi K312;
static _KLsimple_object_vectorGVKd_2 K313;
extern _KLincremental_generic_functionGVKe Kstretchy_representation_typeVKe;
extern _KLsimple_methodGVKe Kstretchy_representation_typeVKeMM0;
D Kstretchy_representation_typeVKeMM0I (D vector_);
extern _KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_3;
static _KLpairGVKd K318;
static _KLpairGVKd K319;
static _KLpairGVKd K320;
static _KLpairGVKd K321;
static _KLsignatureAvaluesGVKi K322;
static _KLbyte_stringGVKd_28 K323;
static _KLsimple_object_vectorGVKd_1 K324;
static _KLsubclassGVKe K325;
static _KLsignatureAvaluesGVKi K326;
static _KLsimple_object_vectorGVKd_1 K327;
static _KLsignatureAvaluesGVKi K328;
static _KLsimple_object_vectorGVKd_2 K329;
static _KLsignatureAvaluesGVKi K330;
static _KLsignatureAvaluesGVKi K331;
static _KLsignatureAvaluesGVKi K332;
static _KLsimple_object_vectorGVKd_3 K333;
static _KLsignatureAvaluesGVKi K334;
static _KLsimple_object_vectorGVKd_3 K335;
static _KLsignatureAvaluesGVKi K336;
static _KLsimple_object_vectorGVKd_3 K337;
static _KLkeyword_signatureGVKe K338;
static _KLsimple_object_vectorGVKd_2 K339;
static _KLsimple_object_vectorGVKd_1 K340;
static _KLsimple_object_vectorGVKd_2 K341;
static _KLsignatureAvaluesGVKi K342;
static _KLsignatureAvaluesGVKi K343;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_object_vector_representationG;
static _KLsignatureAvaluesGVKi K345;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K346;
static _KLsignatureAvaluesGVKi K347;
static _KLsignatureAvaluesGVKi K348;
static _KLimplementation_classGVKe K349;
static _KLsimple_object_vectorGVKd_2 K350;
static _KLsimple_object_vectorGVKd_6 K351;
static _KLsimple_object_vectorGVKd_4 K352;
static _KLsimple_object_vectorGVKd_6 K353;
static _KLbyte_stringGVKd_19 K354;
static _KLimplementation_classGVKe K355;
static _KLsimple_object_vectorGVKd_2 K356;
static _KLsimple_object_vectorGVKd_12 K357;
static _KLsimple_object_vectorGVKd_1 K358;
static _KLbyte_stringGVKd_17 K359;
static _KLimplementation_classGVKe K360;
static _KLsimple_object_vectorGVKd_1 K361;
extern _KLkeyword_methodGVKe KLstretchy_object_vectorGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_14 K363;
static _KLkeyword_signatureAvaluesGVKi K364;
static _KLbyte_stringGVKd_24 K365;
static _KLimplementation_classGVKe K366;
extern _KLrepeated_slot_descriptorGVKe Kstretchy_object_vector_elementVKiHLstretchy_object_vector_representationG;
static _KLsimple_object_vectorGVKd_2 K368;
extern _KLkeyword_methodGVKe KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_6 K370;
static _KLsimple_object_vectorGVKd_1 K371;
static _KLsimple_object_vectorGVKd_2 K372;
static _KLkeyword_signatureAvaluesGVKi K373;
static _KLsimple_object_vectorGVKd_4 K374;
static _KLsimple_object_vectorGVKd_2 K375;
static _KLsimple_object_vectorGVKd_1 K376;
extern _KLsealed_generic_functionGVKe Kstretchy_object_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kstretchy_object_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kstretchy_object_vector_element_setterVKiMM0;
static _KLpairGVKd K380;
static _KLbyte_stringGVKd_37 K381;
extern _KLrepeated_getter_methodGVKi Kstretchy_object_vector_elementVKiMM0;
static _KLpairGVKd K383;
static _KLbyte_stringGVKd_30 K384;
static _KLbyte_stringGVKd_39 K385;
extern _KLsimple_methodGVKe Kstretchy_initializeVKiMM0;
D Kstretchy_initializeVKiMM0I (D vector_, D capacity_, D size_, D fill_);
static _KLsignatureGVKe K388;
static _KLsimple_object_vectorGVKd_4 K389;
static _KLpairGVKd K390;
static _KLpairGVKd K391;
static _KLpairGVKd K392;
static _KLpairGVKd K393;
static _KLpairGVKd K394;
static _KLpairGVKd K395;
static _KLpairGVKd K396;
static _KLpairGVKd K397;
static _KLpairGVKd K398;
static _KLpairGVKd K399;
static _KLpairGVKd K400;
static _KLpairGVKd K401;

/* Indirection variables */

static D IKJof_ = &KJof_;
static D IKJconcrete_class_ = &KJconcrete_class_;

/* Variables */

D concrete_limited_stretchy_vector_classVKi = &Kconcrete_limited_stretchy_vector_classVKi;
D stretchy_initializeVKi = &Kstretchy_initializeVKiMM0;
D trusted_size_setterVKi = &Ktrusted_size_setterVKi;
D PsizeVKi = &KPsizeVKi;
D Lstretchy_sequenceGVKe = &KLstretchy_sequenceGVKe;
D Lstretchy_mutable_sequenceGVKe = &KLstretchy_mutable_sequenceGVKe;
D Lstretchy_vectorGVKd = &KLstretchy_vectorGVKd;
D limited_stretchy_vectorVKe = &Klimited_stretchy_vectorVKe;
D Lcapacity_size_errorGVKi = &KLcapacity_size_errorGVKi;
D Llimited_stretchy_vectorGVKe = &KLlimited_stretchy_vectorGVKe;
D Llimited_stretchy_vector_representationGVKe = &KLlimited_stretchy_vector_representationGVKe;
D collection_fillVKe = &Kcollection_fillVKe;
D stretchy_representationVKe = &Kstretchy_representationVKe;
D stretchy_representation_setterVKe = &Kstretchy_representation_setterVKe;
D stretchy_representation_typeVKe = &Kstretchy_representation_typeVKe;
D stretchy_vector_elementVKe = &Kstretchy_vector_elementVKe;
D stretchy_vector_element_setterVKe = &Kstretchy_vector_element_setterVKe;
D Lstretchy_object_vectorGVKe = &KLstretchy_object_vectorGVKe;
D Dempty_Lstretchy_object_vector_representationGVKi = &KPunboundVKi;
D Lstretchy_object_vector_representationGVKi = &KLstretchy_object_vector_representationGVKi;
D stretchy_object_vector_current_elementVKi = &Kstretchy_object_vector_current_elementVKi;
D stretchy_object_vector_current_element_setterVKi = &Kstretchy_object_vector_current_element_setterVKi;

/* Objects */

_KLclassGVKd KLstretchy_object_vector_representationGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K385,
  &K366,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_object_vector_representationGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K366,
  (D) 1,
  5,
  33554434,
  (D) 1
};

_KLclassGVKd KLstretchy_object_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K365,
  &K360,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K360,
  (D) 4609,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLstretchy_vectorGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K359,
  &K355,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_vectorGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K355,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLstretchy_sequenceGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K354,
  &K349,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_sequenceGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K349,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe KemptyQVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K348,
  &KemptyQVKdMM3I
};

_KLsimple_copy_down_methodGVKi KemptyQVKdMM4 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_1,
  &K347,
  &KemptyQVKdMM4I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_11,
  &KemptyQVKdMM4
};

_KLsimple_methodGVKe Ksize_setterVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K328,
  &Ksize_setterVKdMM0I
};

_KLsimple_copy_down_methodGVKi Ksize_setterVKdMM1 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K312,
  &Ksize_setterVKdMM1I
};

_KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksize_setterVKdRD_dylanRD_5,
  &Ksize_setterVKdMM1
};

_KLsimple_methodGVKe KsizeVKdMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K345,
  &KsizeVKdMM21I
};

_KLgetter_methodGVKi KsizeVKdMM22 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLstretchy_object_vector_representationG
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_19,
  &KsizeVKdMM21
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_21 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_20,
  (D) 5,
  &KLstretchy_object_vector_representationGVKi
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K343,
  &Ktype_for_copyVKdMM8I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K342,
  &Ktype_for_copyVKdMM9I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_10,
  &Ktype_for_copyVKdMM9
};

_KLsimple_methodGVKe Kelement_typeVKeMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K342,
  &Kelement_typeVKeMM15I
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_10,
  &Kelement_typeVKeMM15
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_11,
  (D) 5,
  &KLstretchy_object_vectorGVKe
};

_KLkeyword_methodGVKe KelementVKdMM19 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K338,
  &key_mep_4,
  &KelementVKdMM19I,
  &K341
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_14,
  &KelementVKdMM19
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM17 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K338,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM17I,
  &K339
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_7,
  &Kelement_no_bounds_checkVKeMM17
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_11,
  &Kforward_iteration_protocolVKdMM15
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K268,
  &Kforward_iteration_protocolVKdMM15I
};

_KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM14 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K336,
  &Kmap_into_rigid_oneVKiMM14I
};

_KLsimple_copy_down_methodGVKi Kmap_into_rigid_oneVKiMM13 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K334,
  &Kmap_into_rigid_oneVKiMM13I
};

_KLsimple_copy_down_methodGVKi Kmap_into_stretchy_oneVKiMM8 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K332,
  &Kmap_into_stretchy_oneVKiMM8I
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_9,
  &KaddXVKdMM3
};

_KLsimple_copy_down_methodGVKi KaddXVKdMM3 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K331,
  &KaddXVKdMM3I
};

_KLsimple_methodGVKe KaddXVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K330,
  &KaddXVKdMM2I
};

_KLkeyword_methodGVKe KremoveXVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K299,
  &key_mep_5,
  &KremoveXVKdMM2I,
  &K271
};

_KLkeyword_copy_down_methodGVKi KremoveXVKdMM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K270,
  &key_mep_5,
  &KremoveXVKdMM3I,
  &K271
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_9,
  &KremoveXVKdMM3
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K268,
  &Kbackward_iteration_protocolVKdMM10I
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_4,
  &Kbackward_iteration_protocolVKdMM10
};

_KLsimple_methodGVKe Kelement_setterVKdMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K259,
  &Kelement_setterVKdMM19I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_12,
  &Kelement_setterVKdMM19
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K259,
  &Kelement_no_bounds_check_setterVKeMM19I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_9,
  &Kelement_no_bounds_check_setterVKeMM19
};

_KLmethod_domainGVKe KremoveVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_3,
  &KremoveVKdMM2
};

_KLkeyword_copy_down_methodGVKi KremoveVKdMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K254,
  &key_mep_5,
  &KremoveVKdMM2I,
  &K255
};

_KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K248,
  &key_mep_5,
  &Kreplace_subsequenceXVKdMM3I,
  &K249
};

_KLsimple_copy_down_methodGVKi KchooseVKdMM2 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K246,
  &KchooseVKdMM2I
};

_KLmethod_domainGVKe KchooseVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_4,
  &KchooseVKdMM2
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_28 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_27,
  &KasVKdMM48
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_13,
  (D) 5,
  &KLstretchy_object_vector_representationGVKi
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_27 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_26,
  &KmakeVKdMM31
};

_KLincremental_generic_functionGVKe Klimited_stretchy_vectorVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K226,
  (D) 1,
  &K227,
  &K225,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstretchy_representationVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K221,
  (D) 1,
  &K222,
  &K217,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kstretchy_representationVKeRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kstretchy_representation_setterVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K212,
  (D) 1,
  &K213,
  &K208,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kstretchy_representation_setterVKeRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLlimited_stretchy_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K205,
  &K197,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLlimited_stretchy_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K197,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLclassGVKd KLcapacity_size_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K196,
  &K186,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLcapacity_size_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K186,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLinstance_slot_descriptorGVKe KPsizeVKiHLlimited_stretchy_vector_representationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLlimited_stretchy_vector_representationGVKe,
  &KJsize_,
  &KPsizeVKi,
  &KPsize_setterVKi,
  &KLintegerGVKd
};

_KLclassGVKd KLlimited_stretchy_vector_representationGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K177,
  &K166,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLlimited_stretchy_vector_representationGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K166,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe Kstretchy_vector_element_setterVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K161,
  (D) 1,
  &K162,
  &K157,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kstretchy_vector_element_setterVKeRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLclassGVKd KLstretchy_mutable_sequenceGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K153,
  &K148,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_mutable_sequenceGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K148,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KlimitedVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K143,
  &key_mep_3,
  &KlimitedVKdMM0I,
  &K144
};

_KLkeyword_methodGVKe KinitializeVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K140,
  &key_mep_5,
  &KinitializeVKdMM2I,
  &K141
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_12,
  (D) 5,
  &KLstretchy_object_vectorGVKe
};

_KLkeyword_methodGVKe KmakeVKdMM31 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K134,
  &key_mep_5,
  &KmakeVKdMM31I,
  &K135
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_25 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_24,
  (D) 5,
  &K123
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_26 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_25,
  (D) 5,
  &K133
};

_KLsimple_methodGVKe KasVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K131,
  &KasVKdMM8I
};

_KLsimple_methodGVKe KasVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K129,
  &KasVKdMM9I
};

_KLsimple_methodGVKe KasVKdMM47 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K127,
  &KasVKdMM47I
};

_KLsimple_methodGVKe KasVKdMM48 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K124,
  &KasVKdMM48I
};

_KLsimple_methodGVKe KasVKdMM49 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K121,
  &KasVKdMM49I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_25 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_24,
  &KasVKdMM8
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_26 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_25,
  &KasVKdMM9
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_27 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_26,
  &KasVKdMM49
};

_KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_object_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF119,
  &KLstretchy_object_vectorGVKe,
  &KPfalseVKi,
  &Kstretchy_representationVKe,
  &Kstretchy_representation_setterVKe,
  &KLstretchy_object_vector_representationGVKi
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

static _KLlambdaGVKe Kslot_initializerF119 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K120,
  &Kslot_initializerF119I
};

static _KLsignatureGVKe K120 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K121 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K122,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K123,
  &KLstretchy_object_vectorGVKe
};

static _KLsingletonGVKd K123 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_object_vectorGVKe
};

static _KLsignatureAvaluesGVKi K124 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K125,
  &KDsignature_Lstretchy_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K126,
  &KLstretchy_vectorGVKd
};

static _KLsingletonGVKd K126 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_vectorGVKd
};

static _KLsignatureAvaluesGVKi K127 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K128,
  &KDsignature_Lstretchy_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K126,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K129 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K130,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K123,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K131 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K132,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K123,
  &KLarrayGVKd
};

static _KLsingletonGVKd K133 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_object_vector_representationGVKi
};

static _KLkeyword_signatureAvaluesGVKi K134 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &K136,
  &K137,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K135 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJsize_,
  &KPfalseVKi,
  &KJcapacity_,
  &KPfalseVKi,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K136 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K126
};

static _KLsimple_object_vectorGVKd_3 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJsize_,
  &KJcapacity_,
  &KJfill_
};

static _KLbyte_stringGVKd_34 K138 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "number >= 0 expected instead of %="
};

static _KLbyte_stringGVKd_21 K139 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "capacity %= < size %="
};

static _KLkeyword_signatureGVKe K140 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &KDsignature_Lstretchy_object_vectorG_typesVKi,
  &K137,
  &K142
};

static _KLsimple_object_vectorGVKd_6 K141 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJsize_,
  (D) 1,
  &KJcapacity_,
  &KPunboundVKi,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K142 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K143 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K136,
  &K147,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJof_,
  &KLobjectGVKd
};

static _KLsymbolGVKd KJof_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K146
};

static _KLbyte_stringGVKd_2 K146 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "of"
};

static _KLsimple_object_vectorGVKd_1 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJof_
};

static _KLimplementation_classGVKe K148 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLstretchy_mutable_sequenceGVKe,
  &KLstretchy_mutable_sequenceGVKeW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6649,
  &Kdefault_class_constructorVKi,
  &K149,
  &K150,
  (D) 37,
  &K151,
  &K152,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K392,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K149 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_sequenceGVKe,
  &KLmutable_sequenceGVKd
};

static _KLsimple_object_vectorGVKd_10 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_mutable_sequenceGVKe
};

static _KLsimple_object_vectorGVKd_1 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 41
};

static _KLsimple_object_vectorGVKd_1 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_collectionGVKe
};

static _KLbyte_stringGVKd_27 K153 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<stretchy-mutable-sequence>"
};

_KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K164,
  &Kstretchy_vector_element_setterVKeMM0I
};

_KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_vector_element_setterVKeRD_dylanRD_2,
  &Kstretchy_vector_element_setterVKeMM0
};

static _KLpairGVKd K157 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_element_setterVKeMM0,
  &K158
};

static _KLpairGVKd K158 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_element_setterVKeMM1,
  &K159
};

static _KLpairGVKd K159 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_element_setterVKeMM2,
  &K160
};

static _KLpairGVKd K160 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_element_setterVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureGVKe K161 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K163
};

static _KLbyte_stringGVKd_30 K162 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "stretchy-vector-element-setter"
};

static _KLsimple_object_vectorGVKd_3 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLlimited_stretchy_vector_representationGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K164 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K165
};

static _KLsimple_object_vectorGVKd_3 K165 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLstretchy_object_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLimplementation_classGVKe K166 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 392691717,
  &KLlimited_stretchy_vector_representationGVKe,
  &KLlimited_stretchy_vector_representationGVKeW,
  &KPfalseVKi,
  &K167,
  (D) 6681,
  &KLlimited_stretchy_vector_representationGZ32ZconstructorVKiMM0,
  &K170,
  &K171,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K398,
  &KPempty_vectorVKi,
  &K167,
  &K167,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K167 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KPsizeVKiHLlimited_stretchy_vector_representationG
};

_KLkeyword_methodGVKe KLlimited_stretchy_vector_representationGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K173,
  &key_mep_2,
  &KLlimited_stretchy_vector_representationGZ32ZconstructorVKiMM0I,
  &K174
};

static _KLsimple_object_vectorGVKd_1 K170 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlimited_stretchy_vector_representationGVKe,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_23 K172 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K173 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K175,
  &KDsignature_LobjectG_typesVKi,
  &K176
};

static _KLsimple_object_vectorGVKd_2 K174 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K175 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K176 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_stretchy_vector_representationGVKe
};

static _KLbyte_stringGVKd_40 K177 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "<limited-stretchy-vector-representation>"
};

_KLsealed_generic_functionGVKe KPsizeVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K185,
  &K184,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPsize_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K182,
  &K181,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPsize_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPsizeVKiHLlimited_stretchy_vector_representationG
};

static _KLpairGVKd K181 = {
  &KLpairGVKdW /* wrapper */,
  &KPsize_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K182 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "%size-setter"
};

_KLgetter_methodGVKi KPsizeVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPsizeVKiHLlimited_stretchy_vector_representationG
};

static _KLpairGVKd K184 = {
  &KLpairGVKdW /* wrapper */,
  &KPsizeVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_5 K185 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "%size"
};

static _KLimplementation_classGVKe K186 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLcapacity_size_errorGVKi,
  &KLcapacity_size_errorGVKiW,
  &KPfalseVKi,
  &K187,
  (D) 6665,
  &KLcapacity_size_errorGZ32ZconstructorVKiMM0,
  &K190,
  &K191,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K187,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K187 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLcapacity_size_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K192,
  &key_mep_2,
  &KLcapacity_size_errorGZ32ZconstructorVKiMM0I,
  &K193
};

static _KLsimple_object_vectorGVKd_1 K190 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K191 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLcapacity_size_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K192 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K194,
  &KDsignature_LobjectG_typesVKi,
  &K195
};

static _KLsimple_object_vectorGVKd_4 K193 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K194 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLcapacity_size_errorGVKi
};

static _KLbyte_stringGVKd_21 K196 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<capacity-size-error>"
};

static _KLimplementation_classGVKe K197 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 341835777,
  &KLlimited_stretchy_vectorGVKe,
  &KLlimited_stretchy_vectorGVKeW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6673,
  &KLlimited_stretchy_vectorGZ32ZconstructorVKiMM0,
  &K200,
  &K201,
  (D) 49,
  &K202,
  &K152,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K394,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLlimited_stretchy_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K203,
  &key_mep_2,
  &KLlimited_stretchy_vectorGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_vectorGVKd
};

static _KLsimple_object_vectorGVKd_13 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 53,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLvectorGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_vectorGVKd,
  &KLlimited_stretchy_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 53
};

static _KLkeyword_signatureAvaluesGVKi K203 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K204
};

static _KLsimple_object_vectorGVKd_1 K204 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_stretchy_vectorGVKe
};

static _KLbyte_stringGVKd_25 K205 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "<limited-stretchy-vector>"
};

_KLsetter_methodGVKi Kstretchy_representation_setterVKeMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstretchy_representationVKeHLstretchy_object_vectorG
};

_KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representation_setterVKeRD_dylanRD_2,
  (D) 9,
  &KLstretchy_object_vector_representationGVKi,
  &KLstretchy_object_vectorGVKe
};

static _KLpairGVKd K208 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_setterVKeMM0,
  &K209
};

static _KLpairGVKd K209 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_setterVKeMM1,
  &K210
};

static _KLpairGVKd K210 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_setterVKeMM2,
  &K211
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_setterVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K212 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K214,
  &K176
};

static _KLbyte_stringGVKd_30 K213 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "stretchy-representation-setter"
};

static _KLsimple_object_vectorGVKd_2 K214 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLlimited_stretchy_vectorGVKe
};

_KLgetter_methodGVKi Kstretchy_representationVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstretchy_representationVKeHLstretchy_object_vectorG
};

_KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representationVKeRD_dylanRD_2,
  (D) 5,
  &KLstretchy_object_vectorGVKe
};

static _KLpairGVKd K217 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representationVKeMM0,
  &K218
};

static _KLpairGVKd K218 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representationVKeMM1,
  &K219
};

static _KLpairGVKd K219 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representationVKeMM2,
  &K220
};

static _KLpairGVKd K220 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representationVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K221 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K204,
  &K176
};

static _KLbyte_stringGVKd_23 K222 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "stretchy-representation"
};

_KLsimple_methodGVKe Klimited_stretchy_vectorVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K244,
  &Klimited_stretchy_vectorVKeMM0I
};

static _KLpairGVKd K225 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_stretchy_vectorVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K226 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K228,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_23 K227 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "limited-stretchy-vector"
};

static _KLsimple_object_vectorGVKd_1 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K229
};

static _KLunionGVKe K229 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K230,
  &KLtypeGVKd
};

static _KLsingletonGVKd K230 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsealed_generic_functionGVKe Kconcrete_limited_stretchy_vector_classVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K240,
  &K236,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsymbolGVKd KJconcrete_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K233
};

static _KLbyte_stringGVKd_14 K233 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concrete-class"
};

_KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K241,
  &Kconcrete_limited_stretchy_vector_classVKiMM0I
};

static _KLpairGVKd K236 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_stretchy_vector_classVKiMM0,
  &K237
};

static _KLpairGVKd K237 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_stretchy_vector_classVKiMM1,
  &K238
};

static _KLpairGVKd K238 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_stretchy_vector_classVKiMM2,
  &K239
};

static _KLpairGVKd K239 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_stretchy_vector_classVKiMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_38 K240 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "concrete-limited-stretchy-vector-class"
};

static _KLsignatureAvaluesGVKi K241 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K242,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K242 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K243
};

static _KLsingletonGVKd K243 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K244 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &K245
};

static _KLsimple_object_vectorGVKd_1 K245 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLvector_typeGVKi
};

static _KLsignatureAvaluesGVKi K246 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K247,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K247 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLstretchy_object_vectorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K248 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K250,
  &K251,
  &KDsignature_LobjectG_typesVKi,
  &K252
};

static _KLsimple_object_vectorGVKd_4 K249 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K250 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_mutable_sequenceGVKe,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K251 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_1 K252 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_mutable_sequenceGVKe
};

static _KLunionGVKe K253 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K230,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K254 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K256,
  &K257,
  &K258,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K255 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K256 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_object_vectorGVKe,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_2 K258 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &K253
};

static _KLsignatureGVKe K259 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K260
};

static _KLsimple_object_vectorGVKd_3 K260 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLstretchy_object_vectorGVKe,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kstretchy_object_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K266,
  &Kstretchy_object_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kstretchy_object_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K259,
  &Kstretchy_object_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K266 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K267
};

static _KLsimple_object_vectorGVKd_2 K267 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_object_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K268 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_Lstretchy_object_vectorG_typesVKi,
  &K269
};

static _KLsimple_object_vectorGVKd_8 K269 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K270 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K256,
  &K257,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K271 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &Kunsupplied_objectVKi
};

_KLincremental_generic_functionGVKe Kstretchy_vector_elementVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K294,
  (D) 1,
  &K295,
  &K290,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kstretchy_vector_elementVKeRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLincremental_generic_functionGVKe Kcollection_fillVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K284,
  (D) 1,
  &K285,
  &K279,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kcollection_fillVKeRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kcollection_fillVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K284,
  &Kcollection_fillVKeMM0I
};

_KLsimple_methodGVKe Kcollection_fillVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K286,
  &Kcollection_fillVKeMM1I
};

_KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcollection_fillVKeRD_dylanRD_2,
  &Kcollection_fillVKeMM1
};

static _KLpairGVKd K279 = {
  &KLpairGVKdW /* wrapper */,
  &Kcollection_fillVKeMM0,
  &K280
};

static _KLpairGVKd K280 = {
  &KLpairGVKdW /* wrapper */,
  &Kcollection_fillVKeMM1,
  &K281
};

static _KLpairGVKd K281 = {
  &KLpairGVKdW /* wrapper */,
  &Kcollection_fillVKeMM2,
  &K282
};

static _KLpairGVKd K282 = {
  &KLpairGVKdW /* wrapper */,
  &Kcollection_fillVKeMM3,
  &K283
};

static _KLpairGVKd K283 = {
  &KLpairGVKdW /* wrapper */,
  &Kcollection_fillVKeMM4,
  &KPempty_listVKi
};

static _KLsignatureGVKe K284 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K204
};

static _KLbyte_stringGVKd_15 K285 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "collection-fill"
};

static _KLsignatureGVKe K286 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kstretchy_vector_elementVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K297,
  &Kstretchy_vector_elementVKeMM0I
};

_KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_vector_elementVKeRD_dylanRD_2,
  &Kstretchy_vector_elementVKeMM0
};

static _KLpairGVKd K290 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_elementVKeMM0,
  &K291
};

static _KLpairGVKd K291 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_elementVKeMM1,
  &K292
};

static _KLpairGVKd K292 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_elementVKeMM2,
  &K293
};

static _KLpairGVKd K293 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_vector_elementVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureGVKe K294 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K296
};

static _KLbyte_stringGVKd_23 K295 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "stretchy-vector-element"
};

static _KLsimple_object_vectorGVKd_2 K296 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_stretchy_vector_representationGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K297 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K298
};

static _KLsimple_object_vectorGVKd_2 K298 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_object_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K299 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K300,
  &K257,
  &KDsignature_LobjectG_typesVKi,
  &K204
};

static _KLsimple_object_vectorGVKd_2 K300 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_stretchy_vectorGVKe,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Ktrusted_size_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 5,
  &K311,
  &K305,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Ktrusted_size_setterVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K328,
  &Ktrusted_size_setterVKiMM0I
};

_KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM1 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K312,
  &Ktrusted_size_setterVKiMM1I
};

static _KLpairGVKd K305 = {
  &KLpairGVKdW /* wrapper */,
  &Ktrusted_size_setterVKiMM0,
  &K306
};

static _KLpairGVKd K306 = {
  &KLpairGVKdW /* wrapper */,
  &Ktrusted_size_setterVKiMM1,
  &K307
};

static _KLpairGVKd K307 = {
  &KLpairGVKdW /* wrapper */,
  &Ktrusted_size_setterVKiMM2,
  &K308
};

static _KLpairGVKd K308 = {
  &KLpairGVKdW /* wrapper */,
  &Ktrusted_size_setterVKiMM3,
  &K309
};

static _KLpairGVKd K309 = {
  &KLpairGVKdW /* wrapper */,
  &Ktrusted_size_setterVKiMM4,
  &K310
};

static _KLpairGVKd K310 = {
  &KLpairGVKdW /* wrapper */,
  &Ktrusted_size_setterVKiMM5,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K311 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "trusted-size-setter"
};

static _KLsignatureAvaluesGVKi K312 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K313,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K313 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLstretchy_object_vectorGVKe
};

_KLincremental_generic_functionGVKe Kstretchy_representation_typeVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K322,
  (D) 1,
  &K323,
  &K318,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &Kstretchy_representation_typeVKeRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kstretchy_representation_typeVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K326,
  &Kstretchy_representation_typeVKeMM0I
};

_KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representation_typeVKeRD_dylanRD_2,
  &Kstretchy_representation_typeVKeMM0
};

static _KLpairGVKd K318 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_typeVKeMM0,
  &K319
};

static _KLpairGVKd K319 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_typeVKeMM1,
  &K320
};

static _KLpairGVKd K320 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_typeVKeMM2,
  &K321
};

static _KLpairGVKd K321 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_representation_typeVKeMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K322 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K204,
  &K324
};

static _KLbyte_stringGVKd_28 K323 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "stretchy-representation-type"
};

static _KLsimple_object_vectorGVKd_1 K324 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K325
};

static _KLsubclassGVKe K325 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlimited_stretchy_vector_representationGVKe
};

static _KLsignatureAvaluesGVKi K326 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lstretchy_object_vectorG_typesVKi,
  &K327
};

static _KLsimple_object_vectorGVKd_1 K327 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K133
};

static _KLsignatureAvaluesGVKi K328 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K329,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K329 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLlimited_stretchy_vectorGVKe
};

static _KLsignatureAvaluesGVKi K330 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K300,
  &K204
};

static _KLsignatureAvaluesGVKi K331 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K256,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLsignatureAvaluesGVKi K332 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K333,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K333 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLarrayGVKd,
  &KLstretchy_object_vectorGVKe
};

static _KLsignatureAvaluesGVKi K334 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K335,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K335 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_collectionGVKd,
  &KLstretchy_object_vectorGVKe
};

static _KLsignatureAvaluesGVKi K336 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K337,
  &KDsignature_Lmutable_collectionG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K337 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLmutable_sequenceGVKd,
  &KLstretchy_object_vectorGVKe
};

static _KLkeyword_signatureGVKe K338 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K267,
  &K340,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K339 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K340 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_2 K341 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K342 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lstretchy_object_vectorG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K343 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lstretchy_vectorG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_object_vector_representationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLstretchy_object_vector_representationGVKi,
  &KJcapacity_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K345 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lstretchy_object_vectorG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K346 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ktrusted_size_setterVKi
};

static _KLsignatureAvaluesGVKi K347 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lstretchy_object_vectorG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K348 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K204,
  &KDsignature_LbooleanG_typesVKi
};

static _KLimplementation_classGVKe K349 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_sequenceGVKeW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6641,
  &Kdefault_class_constructorVKi,
  &K350,
  &K351,
  (D) 21,
  &K352,
  &K353,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K390,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K350 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_collectionGVKd,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_6 K351 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe
};

static _KLsimple_object_vectorGVKd_4 K352 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  (D) 33,
  (D) 37,
  (D) 41,
  (D) 45
};

static _KLsimple_object_vectorGVKd_6 K353 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLlimited_collectionGVKe,
  &KLarrayGVKd,
  &KLvectorGVKd,
  &KLmutable_object_with_elementsGVKe,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd
};

static _KLbyte_stringGVKd_19 K354 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<stretchy-sequence>"
};

static _KLimplementation_classGVKe K355 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989057,
  &KLstretchy_vectorGVKd,
  &KLstretchy_vectorGVKdW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6657,
  &Kdefault_class_constructorVKi,
  &K356,
  &K357,
  (D) 45,
  &K358,
  &K152,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K393,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K356 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_sequenceGVKe,
  &KLvectorGVKd
};

static _KLsimple_object_vectorGVKd_12 K357 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLvectorGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_vectorGVKd
};

static _KLsimple_object_vectorGVKd_1 K358 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 49
};

static _KLbyte_stringGVKd_17 K359 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<stretchy-vector>"
};

static _KLimplementation_classGVKe K360 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433733,
  &KLstretchy_object_vectorGVKe,
  &KLstretchy_object_vectorGVKeW,
  &KPfalseVKi,
  &K361,
  (D) 6689,
  &KLstretchy_object_vectorGZ32ZconstructorVKiMM0,
  &K204,
  &K363,
  (D) 53,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K361,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K361 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_representationVKeHLstretchy_object_vectorG
};

_KLkeyword_methodGVKe KLstretchy_object_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K364,
  &key_mep_2,
  &KLstretchy_object_vectorGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_14 K363 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLvectorGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_vectorGVKd,
  &KLlimited_stretchy_vectorGVKe,
  &KLstretchy_object_vectorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K364 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_Lstretchy_object_vectorG_typesVKi
};

static _KLbyte_stringGVKd_24 K365 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<stretchy-object-vector>"
};

static _KLimplementation_classGVKe K366 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLstretchy_object_vector_representationGVKi,
  &KLstretchy_object_vector_representationGVKiW,
  &Kstretchy_object_vector_elementVKiHLstretchy_object_vector_representationG,
  &K368,
  (D) 6697,
  &KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0,
  &K176,
  &K370,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K371,
  &K372,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kstretchy_object_vector_elementVKiHLstretchy_object_vector_representationG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLstretchy_object_vector_representationGVKi,
  &KJfill_,
  &Kstretchy_object_vector_elementVKi,
  &Kstretchy_object_vector_element_setterVKi,
  &KLobjectGVKd,
  &KsizeVKdHLstretchy_object_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K368 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &KsizeVKdHLstretchy_object_vector_representationG
};

_KLkeyword_methodGVKe KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K373,
  &key_mep_2,
  &KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0I,
  &K374
};

static _KLsimple_object_vectorGVKd_6 K370 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlimited_stretchy_vector_representationGVKe,
  &KLstretchy_object_vector_representationGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K371 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_object_vector_elementVKiHLstretchy_object_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K372 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &Kstretchy_object_vector_elementVKiHLstretchy_object_vector_representationG
};

static _KLkeyword_signatureAvaluesGVKi K373 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K375,
  &KDsignature_LobjectG_typesVKi,
  &K376
};

static _KLsimple_object_vectorGVKd_4 K374 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  &KPunboundVKi,
  &KJcapacity_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K375 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJcapacity_
};

static _KLsimple_object_vectorGVKd_1 K376 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_object_vector_representationGVKi
};

_KLsealed_generic_functionGVKe Kstretchy_object_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K384,
  &K383,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstretchy_object_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K381,
  &K380,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kstretchy_object_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kstretchy_object_vector_elementVKiHLstretchy_object_vector_representationG
};

static _KLpairGVKd K380 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_object_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_37 K381 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "stretchy-object-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kstretchy_object_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kstretchy_object_vector_elementVKiHLstretchy_object_vector_representationG
};

static _KLpairGVKd K383 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_object_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_30 K384 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "stretchy-object-vector-element"
};

static _KLbyte_stringGVKd_39 K385 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 157,
  "<stretchy-object-vector-representation>"
};

_KLsimple_methodGVKe Kstretchy_initializeVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K388,
  &Kstretchy_initializeVKiMM0I
};

static _KLsignatureGVKe K388 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K389
};

static _KLsimple_object_vectorGVKd_4 K389 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLstretchy_vectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLpairGVKd K390 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_vectorGVKd,
  &K391
};

static _KLpairGVKd K391 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_mutable_sequenceGVKe,
  &KPempty_listVKi
};

static _KLpairGVKd K392 = {
  &KLpairGVKdW /* wrapper */,
  &KLdequeGVKd,
  &KPempty_listVKi
};

static _KLpairGVKd K393 = {
  &KLpairGVKdW /* wrapper */,
  &KLlimited_stretchy_vectorGVKe,
  &KPempty_listVKi
};

static _KLpairGVKd K394 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_element_type_vectorGVKe,
  &K395
};

static _KLpairGVKd K395 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_byte_vectorGVKi,
  &K396
};

static _KLpairGVKd K396 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_byte_character_vectorGVKe,
  &K397
};

static _KLpairGVKd K397 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_object_vectorGVKe,
  &KPempty_listVKi
};

static _KLpairGVKd K398 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_element_type_vector_representationGVKi,
  &K399
};

static _KLpairGVKd K399 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_byte_vector_representationGVKi,
  &K400
};

static _KLpairGVKd K400 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_byte_character_vector_representationGVKi,
  &K401
};

static _KLpairGVKd K401 = {
  &KLpairGVKdW /* wrapper */,
  &KLstretchy_object_vector_representationGVKi,
  &KPempty_listVKi
};

/* Code */

D KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Psize_, D Uunique_size_) {
  D T5;
  D Uunique_PsizeF6;
  D T7;
  D object_;
  D Uunique_PsizeF9;
  D Uunique_sizeF10;
  D T11_0;
  D T12;
  _KLsimple_object_vectorGVKd_1 T13 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T12 = primitive_idQ(Uunique_Psize_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T12 != &KPfalseVKi) {
    T13.vector_element_[0] = &KJsize_;
    T14 = KerrorVKdMM1I(&K172, &T13);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T5 = T14;
    Uunique_PsizeF6 = T5;
  } else {
    Uunique_PsizeF6 = Uunique_Psize_;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T7 = Kallocate_instanceVKeI(&KLstretchy_object_vector_representationGVKi, init_args_);
  object_ = T7;
  Uunique_PsizeF9 = Uunique_PsizeF6;
  SLOT_VALUE_SETTER(Uunique_PsizeF9, object_, 0);
  Uunique_sizeF10 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF10, object_, 1);
  T11_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T11_0);
}

D KemptyQVKdMM3I (D vector_) {
  D T2;
  D T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:157
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:159
  CONGRUENT_CALL_PROLOG(&Kstretchy_representationVKe, 1);
  T2 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:159
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:159
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:159
  T5 = primitive_machine_word_equalQ(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:159
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:157
  MV_SET_COUNT(1);
  return(T6_0);
}

D KemptyQVKdMM4I (D vector_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T6 = SLOT_VALUE_INITD(vector_, 0);
  T2 = SLOT_VALUE_INITD(T6, 0);
  T3 = primitive_cast_integer_as_raw(T2);
  T4 = primitive_machine_word_equalQ(T3,1);
  T5_0 = T4;
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksize_setterVKdMM0I (D new_size_, D vector_) {
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:214
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
  T8 = primitive_cast_integer_as_raw(new_size_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
    T6.vector_element_[0] = new_size_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
    T4 = KlistVKdI(&T6);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
    T7.vector_element_[0] = &KJformat_string_;
    T7.vector_element_[1] = &K138;
    T7.vector_element_[2] = &KJformat_arguments_;
    T7.vector_element_[3] = T4;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T7);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
    KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:217
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:218
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:219
  ENGINE_NODE_CALL_PROLOG(&Ktrusted_size_setterVKi, &K346, 2);
  ENGINE_NODE_CALL2(&K346, new_size_, vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:219
  T3_0 = new_size_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:214
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksize_setterVKdMM1I (D new_size_, D vector_) {
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T8 = primitive_cast_integer_as_raw(new_size_);
  T9 = primitive_machine_word_less_thanQ(T8,1);
  if (T9 != &KPfalseVKi) {
    T6.vector_element_[0] = new_size_;
    T4 = KlistVKdI(&T6);
    T7.vector_element_[0] = &KJformat_string_;
    T7.vector_element_[1] = &K138;
    T7.vector_element_[2] = &KJformat_arguments_;
    T7.vector_element_[3] = T4;
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T7);
    KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  }
  Ktrusted_size_setterVKiMM1I(new_size_, vector_);
  T3_0 = new_size_;
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsizeVKdMM21I (D vector_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktype_for_copyVKdMM8I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:109
  T2_0 = &KLstretchy_object_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:108
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_copyVKdMM9I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2_0 = &KLstretchy_object_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM15I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2_0 = &KLobjectGVKd;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM19I (D collection_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  D T15_0;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T9 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T11 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T13 = primitive_machine_word_unsigned_less_thanQ(T11,T12);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T14 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, T11);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T5_0 = Kelement_range_errorVKeI(collection_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM17I (D collection_, D index_, D Urest_, D default_) {
  D T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T6 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 2, T8);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kforward_iteration_protocolVKdMM15I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4_0 = (D) 1;
  T4_1 = T3;
  T4_2 = &Ksequence_next_stateVKe;
  T4_3 = &Ksequence_finished_stateQVKe;
  T4_4 = &Ksequence_current_keyVKe;
  T4_5 = &Kstretchy_object_vector_current_elementVKi;
  T4_6 = &Kstretchy_object_vector_current_element_setterVKi;
  T4_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
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

D Kmap_into_rigid_oneVKiMM14I (D fun_, D target_, D coll_) {
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
  D T16;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:669
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(target_);
  T14 = SLOT_VALUE_INITD(coll_, 0);
  T15 = SLOT_VALUE_INITD(T14, 0);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  CONGRUENT_CALL2(T4, T15);
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(target_);
  T16 = SLOT_VALUE_INITD(coll_, 0);
  T17 = SLOT_VALUE_INITD(T16, 0);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T10 = CONGRUENT_CALL2(T5, T17);
  if (T10 != &KPfalseVKi) {
    T11 = T5;
  } else {
    T11 = T17;
  }
  i_T = 1;
L0: ;
    i_ = i_T;
    T13 = primitive_cast_raw_as_integer(i_);
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T7 = CONGRUENT_CALL2(T13, T11);
    if (T7 != &KPfalseVKi) {
      T18 = SLOT_VALUE_INITD(coll_, 0);
      T19 = REPEATED_D_SLOT_VALUE_TAGGED(T18, 2, i_);
      T8 = CALL1(fun_, T19);
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

D Kmap_into_rigid_oneVKiMM13I (D fun_, D target_, D coll_) {
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
  D T16;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:665
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(target_);
  T14 = SLOT_VALUE_INITD(coll_, 0);
  T15 = SLOT_VALUE_INITD(T14, 0);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  CONGRUENT_CALL2(T4, T15);
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(target_);
  T16 = SLOT_VALUE_INITD(coll_, 0);
  T17 = SLOT_VALUE_INITD(T16, 0);
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T10 = CONGRUENT_CALL2(T5, T17);
  if (T10 != &KPfalseVKi) {
    T11 = T5;
  } else {
    T11 = T17;
  }
  i_T = 1;
L0: ;
    i_ = i_T;
    T13 = primitive_cast_raw_as_integer(i_);
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T7 = CONGRUENT_CALL2(T13, T11);
    if (T7 != &KPfalseVKi) {
      T18 = SLOT_VALUE_INITD(coll_, 0);
      T19 = REPEATED_D_SLOT_VALUE_TAGGED(T18, 2, i_);
      T8 = CALL1(fun_, T19);
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

D Kmap_into_stretchy_oneVKiMM8I (D fun_, D target_, D coll_) {
  DWORD T4T, T4;
  DWORD key_T, key_;
  D T6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;
  DWORD T16;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:661
  T10 = SLOT_VALUE_INITD(coll_, 0);
  T11 = SLOT_VALUE_INITD(T10, 0);
  T12 = primitive_cast_integer_as_raw(T11);
  T4T = 1;
  key_T = 1;
L0: ;
    T4 = T4T;
    key_ = key_T;
    T9 = primitive_cast_raw_as_integer(key_);
    T13 = primitive_machine_word_equalQ(T4,T12);
    if (T13 == &KPfalseVKi) {
      T14 = SLOT_VALUE_INITD(coll_, 0);
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(T14, 2, T4);
      T6 = CALL1(fun_, T15);
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(T6, target_, T9);
      T16 = primitive_machine_word_add_signal_overflow(T4,4);
      T8 = primitive_machine_word_add_signal_overflow(key_,4);
      T4T = T16;
      key_T = T8;
      goto L0;
    }
  T7_0 = target_;
  MV_SET_COUNT(1);
  return(T7_0);
}

D KaddXVKdMM3I (D vector_, D new_element_) {
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = SLOT_VALUE_INITD(T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T7 = primitive_machine_word_add_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  Ktrusted_size_setterVKiMM1I(T8, vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T10 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_element_, T9, 2, T10);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T3_0);
}

D KaddXVKdMM2I (D vector_, D new_element_) {
  D old_size_;
  D T4;
  D T5;
  D T6_0;
  D T7;
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:169
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  old_size_ = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:170
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T4 = CONGRUENT_CALL2(old_size_, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:170
  CONGRUENT_CALL_PROLOG(&Ktrusted_size_setterVKi, 2);
  CONGRUENT_CALL2(T4, vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:171
  CONGRUENT_CALL_PROLOG(&Kelement_typeVKe, 1);
  T5 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:171
  T9 = primitive_instanceQ(new_element_,T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:171
  if (T9 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:171
    T8.vector_element_[0] = &KJvalue_;
    T8.vector_element_[1] = new_element_;
    T8.vector_element_[2] = &KJtype_;
    T8.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:171
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T7 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T8);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:171
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T7, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:171
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:173
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
  CONGRUENT_CALL3(new_element_, vector_, old_size_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:175
  T6_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:167
  MV_SET_COUNT(1);
  return(T6_0);
}

D KremoveXVKdMM2I (D vector_, D target_, D Urest_, D test_, D count_) {
  D T6;
  DWORD T7;
  D src_;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D item_;
  D T15;
  D T16;
  D T17;
  DWORD i_T, i_;
  D T19;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD countF23;
  DWORD src_indexF24;
  DWORD dst_indexF25;
  DWORD T26;
  DWORD T27;
  DWORD countF28T, countF28;
  DWORD src_indexF29T, src_indexF29;
  DWORD dst_indexF30T, dst_indexF30;
  D T31;
  D T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36;
  DWORD T37;
  DWORD T38;
  D T39;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:232
  T10 = primitive_idQ(count_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:232
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:232
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T6 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:232
    T11 = T6;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:241
    T37 = primitive_cast_integer_as_raw(T11);
    T7 = T37;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:231
    T12 = count_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:241
    T38 = primitive_cast_integer_as_raw(T12);
    T7 = T38;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:232
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:233
  CONGRUENT_CALL_PROLOG(&Kstretchy_representationVKe, 1);
  src_ = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:234
  T13 = SLOT_VALUE_INITD(src_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:238
  T34 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
  countF28T = T7;
  src_indexF29T = 1;
  dst_indexF30T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:245
    countF28 = countF28T;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:245
    src_indexF29 = src_indexF29T;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:245
    dst_indexF30 = dst_indexF30T;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
    countF23 = countF28;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
    src_indexF24 = src_indexF29;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:238
    T36 = primitive_cast_raw_as_integer(src_indexF24);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
    dst_indexF25 = dst_indexF30;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:245
    T39 = primitive_cast_raw_as_integer(dst_indexF25);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:238
    T35 = primitive_machine_word_less_thanQ(src_indexF24,T34);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:238
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:239
      CONGRUENT_CALL_PROLOG(&Kstretchy_vector_elementVKe, 2);
      item_ = CONGRUENT_CALL2(src_, T36);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:241
      T20 = primitive_machine_word_less_thanQ(1,countF23);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:241
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:241
        T15 = test_;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:241
        T16 = CALL2(T15, item_, target_);
        T17 = T16;
      } else {
        T17 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:241
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:240
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
        T21 = primitive_machine_word_subtract_signal_overflow(countF23,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
        T22 = primitive_machine_word_add_signal_overflow(src_indexF24,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
        countF28T = T21;
        src_indexF29T = T22;
        dst_indexF30T = dst_indexF30;
        goto L0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:244
        CONGRUENT_CALL_PROLOG(&Kstretchy_vector_element_setterVKe, 3);
        CONGRUENT_CALL3(item_, src_, T39);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:245
        T26 = primitive_machine_word_add_signal_overflow(src_indexF24,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:245
        T27 = primitive_machine_word_add_signal_overflow(dst_indexF25,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:245
        countF28T = countF23;
        src_indexF29T = T26;
        dst_indexF30T = T27;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:240
    } else {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
      i_T = dst_indexF25;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
        i_ = i_T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
        T32 = primitive_cast_raw_as_integer(i_);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
        T31 = primitive_machine_word_less_thanQ(i_,src_indexF24);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
        if (T31 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:249
          CONGRUENT_CALL_PROLOG(&Kcollection_fillVKe, 1);
          T19 = CONGRUENT_CALL1(vector_);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:249
          CONGRUENT_CALL_PROLOG(&Kstretchy_vector_element_setterVKe, 3);
          CONGRUENT_CALL3(T19, src_, T32);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
          T33 = primitive_machine_word_add_signal_overflow(i_,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
          i_T = T33;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:248
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:251
      SLOT_VALUE_SETTER(T39, src_, 0);
    }
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:238
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:242
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:254
  T9_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:227
  MV_SET_COUNT(1);
  return(T9_0);
}

D KremoveXVKdMM3I (D vector_, D target_, D Urest_, D test_, D count_) {
  DWORD T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD i_T, i_;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD countF18;
  DWORD src_indexF19;
  DWORD dst_indexF20;
  DWORD T21;
  DWORD T22;
  DWORD countF23T, countF23;
  DWORD src_indexF24T, src_indexF24;
  DWORD dst_indexF25T, dst_indexF25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T8 = primitive_idQ(count_,&Kunsupplied_objectVKi);
  if (T8 != &KPfalseVKi) {
    T33 = SLOT_VALUE_INITD(vector_, 0);
    T34 = SLOT_VALUE_INITD(T33, 0);
    T30 = primitive_cast_integer_as_raw(T34);
    T6 = T30;
  } else {
    T9 = count_;
    T31 = primitive_cast_integer_as_raw(T9);
    T6 = T31;
  }
  T35 = SLOT_VALUE_INITD(vector_, 0);
  T10 = SLOT_VALUE_INITD(T35, 0);
  T28 = primitive_cast_integer_as_raw(T10);
  countF23T = T6;
  src_indexF24T = 1;
  dst_indexF25T = 1;
L0: ;
    countF23 = countF23T;
    src_indexF24 = src_indexF24T;
    dst_indexF25 = dst_indexF25T;
    countF18 = countF23;
    src_indexF19 = src_indexF24;
    dst_indexF20 = dst_indexF25;
    T32 = primitive_cast_raw_as_integer(dst_indexF20);
    T29 = primitive_machine_word_less_thanQ(src_indexF19,T28);
    if (T29 != &KPfalseVKi) {
      T36 = REPEATED_D_SLOT_VALUE_TAGGED(T35, 2, src_indexF19);
      T15 = primitive_machine_word_less_thanQ(1,countF18);
      if (T15 != &KPfalseVKi) {
        T11 = test_;
        T12 = CALL2(T11, T36, target_);
        T13 = T12;
      } else {
        T13 = &KPfalseVKi;
      }
      if (T13 != &KPfalseVKi) {
        T16 = primitive_machine_word_subtract_signal_overflow(countF18,4);
        T17 = primitive_machine_word_add_signal_overflow(src_indexF19,4);
        countF23T = T16;
        src_indexF24T = T17;
        dst_indexF25T = dst_indexF25;
        goto L0;
      } else {
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T36, T35, 2, dst_indexF20);
        T21 = primitive_machine_word_add_signal_overflow(src_indexF19,4);
        T22 = primitive_machine_word_add_signal_overflow(dst_indexF20,4);
        countF23T = countF18;
        src_indexF24T = T21;
        dst_indexF25T = T22;
        goto L0;
      }
    } else {
      i_T = dst_indexF20;
    L1: ;
        i_ = i_T;
        T26 = primitive_machine_word_less_thanQ(i_,src_indexF19);
        if (T26 != &KPfalseVKi) {
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T35, 2, i_);
          T27 = primitive_machine_word_add_signal_overflow(i_,4);
          i_T = T27;
          goto L1;
        }
      SLOT_VALUE_SETTER(T32, T35, 0);
    }
  T7_0 = vector_;
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbackward_iteration_protocolVKdMM10I (D sequence_) {
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;
  D T7_1;
  D T7_2;
  D T7_3;
  D T7_4;
  D T7_5;
  D T7_6;
  D T7_7;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = primitive_machine_word_subtract_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T7_0 = T6;
  T7_1 = (D) -3;
  T7_2 = &Ksequence_previous_stateVKe;
  T7_3 = &Ksequence_finished_stateQVKe;
  T7_4 = &Ksequence_current_keyVKe;
  T7_5 = &Kstretchy_object_vector_current_elementVKi;
  T7_6 = &Kstretchy_object_vector_current_element_setterVKi;
  T7_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_ELT(1, T7_1);
  MV_SET_ELT(2, T7_2);
  MV_SET_ELT(3, T7_3);
  MV_SET_ELT(4, T7_4);
  MV_SET_ELT(5, T7_5);
  MV_SET_ELT(6, T7_6);
  MV_SET_ELT(7, T7_7);
  MV_SET_COUNT(8);
  return(T7_0);
}

D Kelement_setterVKdMM19I (D new_value_, D collection_, D index_) {
  D T4_0;
  DWORD T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
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

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T6 = primitive_machine_word_less_thanQ(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    Kelement_range_errorVKeI(collection_, index_);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T7 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T10 = primitive_machine_word_less_thanQ(T5,T9);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T11 = SLOT_VALUE_INITD(collection_, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T12 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T14 = primitive_machine_word_equalQ(T5,T13);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T15 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T16 = primitive_cast_raw_as_integer(T15);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      Ktrusted_size_setterVKiMM1I(T16, collection_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T17 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T18 = primitive_cast_raw_as_integer(T17);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      Ksize_setterVKdMM1I(T18, collection_);
    }
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T19 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T19, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM19I (D new_value_, D collection_, D index_) {
  D T4_0;
  D T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T5, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T4_0);
}

D KremoveVKdMM2I (D sequence_, D value_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  DWORD T8T, T8;
  D T9;
  D T10;
  DWORD T11T, T11;
  D T12;
  D T13_0;
  D T14_0;
  D new_sequence_;
  D T16;
  D T17;
  D T18;
  D changedQ_;
  D T20;
  D countF21;
  D T22;
  D T23;
  D T24;
  DWORD T25;
  D T26;
  DWORD T27;
  DWORD T28;
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
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  D T43;
  D T44;
  D T45;
  DWORD T46;
  D T47_0;
  D T48;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  primitive_type_check(count_, &K253);
  countF7 = count_;
  new_sequence_ = &KPempty_listVKi;
  changedQ_ = &KPfalseVKi;
  if (countF7 != &KPfalseVKi) {
    T48 = countF7;
    T24 = T48;
    countF21 = T24;
    T33 = SLOT_VALUE_INITD(sequence_, 0);
    T34 = SLOT_VALUE_INITD(T33, 0);
    T35 = primitive_cast_integer_as_raw(T34);
    T8T = 1;
  L0: ;
      T8 = T8T;
      T36 = primitive_machine_word_equalQ(T8,T35);
      if (T36 == &KPfalseVKi) {
        T37 = SLOT_VALUE_INITD(sequence_, 0);
        T38 = REPEATED_D_SLOT_VALUE_TAGGED(T37, 2, T8);
        T23 = countF21;
        T25 = primitive_cast_integer_as_raw(T23);
        T26 = primitive_machine_word_less_thanQ(1,T25);
        if (T26 != &KPfalseVKi) {
          T9 = CALL2(testF6, T38, value_);
          T10 = T9;
        } else {
          T10 = &KPfalseVKi;
        }
        if (T10 != &KPfalseVKi) {
          T22 = countF21;
          T27 = primitive_cast_integer_as_raw(T22);
          T28 = primitive_machine_word_subtract_signal_overflow(T27,4);
          T29 = primitive_cast_raw_as_integer(T28);
          countF21 = T29;
          changedQ_ = &KPtrueVKi;
        } else {
          T18 = new_sequence_;
          T30 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T38, T30, 0);
          SLOT_VALUE_SETTER(T18, T30, 1);
          new_sequence_ = T30;
        }
        T39 = primitive_machine_word_add_signal_overflow(T8,4);
        T8T = T39;
        goto L0;
      }
  } else {
    T40 = SLOT_VALUE_INITD(sequence_, 0);
    T41 = SLOT_VALUE_INITD(T40, 0);
    T42 = primitive_cast_integer_as_raw(T41);
    T11T = 1;
  L1: ;
      T11 = T11T;
      T43 = primitive_machine_word_equalQ(T11,T42);
      if (T43 == &KPfalseVKi) {
        T44 = SLOT_VALUE_INITD(sequence_, 0);
        T45 = REPEATED_D_SLOT_VALUE_TAGGED(T44, 2, T11);
        T12 = CALL2(testF6, T45, value_);
        if (T12 != &KPfalseVKi) {
          changedQ_ = &KPtrueVKi;
        } else {
          T17 = new_sequence_;
          T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T45, T31, 0);
          SLOT_VALUE_SETTER(T17, T31, 1);
          new_sequence_ = T31;
        }
        T46 = primitive_machine_word_add_signal_overflow(T11,4);
        T11T = T46;
        goto L1;
      }
  }
  T20 = changedQ_;
  if (T20 != &KPfalseVKi) {
    T16 = new_sequence_;
    T32 = KreverseXVKdMM2I(T16);
    T47_0 = KasVKdMM9I(&KLstretchy_object_vectorGVKe, T32);
    T14_0 = T47_0;
  } else {
    T13_0 = sequence_;
    T14_0 = T13_0;
  }
  MV_SET_COUNT(1);
  return(T14_0);
}

D Kreplace_subsequenceXVKdMM3I (D dst_, D src_, D Urest_, D start_, D last_) {
  D T6;
  D T7;
  D lastF8;
  D T9;
  D dst_size_;
  D T11;
  D T12;
  D T13;
  D T14;
  D new_size_;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD diF22T, diF22;
  D T23;
  D T24T, T24;
  D T25;
  D T26;
  D T27;
  DWORD diF28T, diF28;
  DWORD siF29T, siF29;
  D T30;
  D T31;
  DWORD siF32T, siF32;
  DWORD diF33T, diF33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  DWORD diF42T, diF42;
  D T43;
  D T44T, T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  DWORD diF54T, diF54;
  D T55;
  D T56T, T56;
  D T57;
  D T58;
  D T59;
  D T60_0;
  D T61;
  DWORD T62;
  DWORD T63;
  D T64;
  DWORD T65;
  DWORD T66;
  D T67;
  DWORD T68;
  D T69;
  DWORD T70;
  D T71;
  DWORD T72;
  D T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  D T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  DWORD T81;
  DWORD T82;
  D T83;
  DWORD T84;
  D T85;
  DWORD T86;
  DWORD T87;
  D T88;
  DWORD T89;
  DWORD T90;
  D T91;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:27
  T61 = primitive_idQ(last_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:27
  if (T61 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:29
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T6 = CONGRUENT_CALL1(dst_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:27
    T7 = T6;
    lastF8 = T7;
  } else {
    lastF8 = last_;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:31
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T9 = CONGRUENT_CALL1(dst_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:31
  dst_size_ = T9;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:32
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T11 = CONGRUENT_CALL1(src_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:32
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T12 = CONGRUENT_CALL2(dst_size_, lastF8);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:32
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T13 = CONGRUENT_CALL2(T11, T12);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:32
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T14 = CONGRUENT_CALL2(start_, T13);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:32
  new_size_ = T14;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:34
  T62 = primitive_cast_integer_as_raw(new_size_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:34
  T63 = primitive_cast_integer_as_raw(dst_size_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:34
  T64 = primitive_machine_word_less_thanQ(T62,T63);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:33
  if (T64 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T16 = CONGRUENT_CALL1(src_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    T17 = T16;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    T18 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    T19 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    T20 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    T21 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    T23 = start_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    T66 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    diF22T = T66;
    T24T = T17;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
      diF22 = diF22T;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
      T67 = primitive_cast_raw_as_integer(diF22);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
      T24 = T24T;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
      T25 = CALL3(T20, src_, T24, T18);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
      if (T25 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
        T26 = CALL2(T21, src_, T24);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:36
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T26, dst_, T67);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
        T65 = primitive_machine_word_add_signal_overflow(diF22,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
        T27 = CALL2(T19, src_, T24);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
        diF22T = T65;
        T24T = T27;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
      T30 = lastF8;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
      T70 = primitive_cast_integer_as_raw(T30);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
      diF28T = diF22;
      siF29T = T70;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        diF28 = diF28T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        T73 = primitive_cast_raw_as_integer(diF28);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        siF29 = siF29T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        T71 = primitive_cast_raw_as_integer(siF29);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        T68 = primitive_cast_integer_as_raw(dst_size_);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        T69 = primitive_machine_word_less_thanQ(siF29,T68);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        if (T69 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:40
          CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
          T31 = CONGRUENT_CALL3(dst_, T71, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:40
          CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
          CONGRUENT_CALL3(T31, dst_, T73);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
          T72 = primitive_machine_word_add_signal_overflow(diF28,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
          T74 = primitive_machine_word_add_signal_overflow(siF29,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
          diF28T = T72;
          siF29T = T74;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:38
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:35
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:43
    CONGRUENT_CALL_PROLOG(&Ksize_setterVKd, 2);
    CONGRUENT_CALL2(new_size_, dst_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:44
    T75 = primitive_cast_integer_as_raw(dst_size_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:44
    T76 = primitive_cast_integer_as_raw(new_size_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:44
    T77 = primitive_machine_word_less_thanQ(T75,T76);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:33
    if (T77 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:45
      CONGRUENT_CALL_PROLOG(&Ksize_setterVKd, 2);
      CONGRUENT_CALL2(new_size_, dst_);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
      T78 = primitive_cast_integer_as_raw(dst_size_);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
      T79 = primitive_machine_word_subtract_signal_overflow(T78,4);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:47
      T80 = primitive_cast_integer_as_raw(new_size_);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:47
      T81 = primitive_machine_word_subtract_signal_overflow(T80,4);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
      siF32T = T79;
      diF33T = T81;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
        siF32 = siF32T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
        T83 = primitive_cast_raw_as_integer(siF32);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
        diF33 = diF33T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
        T85 = primitive_cast_raw_as_integer(diF33);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T34 = CONGRUENT_CALL2(T83, lastF8);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
        if (T34 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:48
          CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
          T35 = CONGRUENT_CALL3(dst_, T83, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:48
          CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
          CONGRUENT_CALL3(T35, dst_, T85);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
          T82 = primitive_machine_word_add_signal_overflow(siF32,0xFFFFFFFFFFFFFFFCL);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
          T84 = primitive_machine_word_add_signal_overflow(diF33,0xFFFFFFFFFFFFFFFCL);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
          siF32T = T82;
          diF33T = T84;
          goto L2;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:46
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T36 = CONGRUENT_CALL1(src_);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      T37 = T36;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      T38 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      T39 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      T40 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      T41 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      T43 = start_;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      T87 = primitive_cast_integer_as_raw(T43);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
      diF42T = T87;
      T44T = T37;
    L3: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
        diF42 = diF42T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
        T88 = primitive_cast_raw_as_integer(diF42);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
        T44 = T44T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
        T45 = CALL3(T40, src_, T44, T38);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
        if (T45 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
          T46 = CALL2(T41, src_, T44);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:51
          CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
          CONGRUENT_CALL3(T46, dst_, T88);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
          T86 = primitive_machine_word_add_signal_overflow(diF42,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
          T47 = CALL2(T39, src_, T44);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
          diF42T = T86;
          T44T = T47;
          goto L3;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:50
    } else {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T48 = CONGRUENT_CALL1(src_);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      T49 = T48;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      T50 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      T51 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      T52 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      T53 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      T55 = start_;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      T90 = primitive_cast_integer_as_raw(T55);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
      diF54T = T90;
      T56T = T49;
    L4: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
        diF54 = diF54T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
        T91 = primitive_cast_raw_as_integer(diF54);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
        T56 = T56T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
        T57 = CALL3(T52, src_, T56, T50);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
        if (T57 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
          T58 = CALL2(T53, src_, T56);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:55
          CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
          CONGRUENT_CALL3(T58, dst_, T91);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
          T89 = primitive_machine_word_add_signal_overflow(diF54,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
          T59 = CALL2(T51, src_, T56);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
          diF54T = T89;
          T56T = T59;
          goto L4;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:54
    }
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:33
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:58
  T60_0 = dst_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:27
  MV_SET_COUNT(1);
  return(T60_0);
}

D KchooseVKdMM2I (D test_, D sequence_) {
  D result_T, result_;
  DWORD T4T, T4;
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
  DWORD T15;
  D T16_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T9 = SLOT_VALUE_INITD(sequence_, 0);
  T10 = SLOT_VALUE_INITD(T9, 0);
  T11 = primitive_cast_integer_as_raw(T10);
  result_T = &KPempty_listVKi;
  T4T = 1;
L0: ;
    result_ = result_T;
    T4 = T4T;
    T12 = primitive_machine_word_equalQ(T4,T11);
    if (T12 == &KPfalseVKi) {
      T13 = SLOT_VALUE_INITD(sequence_, 0);
      T14 = REPEATED_D_SLOT_VALUE_TAGGED(T13, 2, T4);
      T5 = CALL1(test_, T14);
      if (T5 != &KPfalseVKi) {
        T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        SLOT_VALUE_SETTER(T14, T7, 0);
        SLOT_VALUE_SETTER(result_, T7, 1);
        T6 = T7;
      } else {
        T6 = result_;
      }
      T15 = primitive_machine_word_add_signal_overflow(T4,4);
      result_T = T6;
      T4T = T15;
      goto L0;
    }
    T8 = KreverseXVKdMM2I(result_);
    T16_0 = KasVKdMM9I(&KLstretchy_object_vectorGVKe, T8);
  MV_SET_COUNT(1);
  return(T16_0);
}

D KlimitedVKdMM0I (D class_, D Urest_, D of_) {
  D ofF4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:656
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:656
  primitive_type_check(of_, &KLtypeGVKd);
  ofF4 = of_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:658
  CONGRUENT_CALL_PROLOG(&Klimited_stretchy_vectorVKe, 1);
  T5_0 = CONGRUENT_CALL1(ofF4);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:656
  MV_SET_COUNT(1);
  return(T5_0);
}

D KinitializeVKdMM2I (D vector_, D Urest_, D size_, D capacity_, D fill_) {
  D sizeF6;
  D T7;
  DWORD capacityF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T18;
  D T19;
  D T20;
  D T21;
  _KLsimple_object_vectorGVKd_1 T22 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T23 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_2 T26 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T27 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;
  D T32;
  D T33_0;
  _KLsimple_object_vectorGVKd_6 T34 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T10 = primitive_idQ(capacity_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T7 = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T29 = primitive_cast_integer_as_raw(T7);
    capacityF8 = T29;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    primitive_type_check(capacity_, &KLintegerGVKd);
    T11 = capacity_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T30 = primitive_cast_integer_as_raw(T11);
    capacityF8 = T30;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T31 = primitive_cast_raw_as_integer(capacityF8);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T18 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T19 = primitive_machine_word_less_thanQ(T18,1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T16.vector_element_[0] = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T14 = KlistVKdI(&T16);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T17.vector_element_[0] = &KJformat_string_;
    T17.vector_element_[1] = &K138;
    T17.vector_element_[2] = &KJformat_arguments_;
    T17.vector_element_[3] = T14;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T15 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T17);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    KerrorVKdMM0I(T15, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T24 = primitive_machine_word_less_thanQ(capacityF8,1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T22.vector_element_[0] = T31;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T20 = KlistVKdI(&T22);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T23.vector_element_[0] = &KJformat_string_;
    T23.vector_element_[1] = &K138;
    T23.vector_element_[2] = &KJformat_arguments_;
    T23.vector_element_[3] = T20;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T21 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T23);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    KerrorVKdMM0I(T21, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T25 = primitive_machine_word_less_thanQ(capacityF8,T18);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T26.vector_element_[0] = T31;
    T26.vector_element_[1] = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T12 = KlistVKdI(&T26);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T27.vector_element_[0] = &KJformat_string_;
    T27.vector_element_[1] = &K139;
    T27.vector_element_[2] = &KJformat_arguments_;
    T27.vector_element_[3] = T12;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T13 = CONGRUENT_CALL2(&KLcapacity_size_errorGVKi, &T27);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    KerrorVKdMM0I(T13, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T28 = primitive_machine_word_less_thanQ(1,capacityF8);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T34.vector_element_[0] = &KJcapacity_;
    T34.vector_element_[1] = T31;
    T34.vector_element_[2] = &KJsize_;
    T34.vector_element_[3] = sizeF6;
    T34.vector_element_[4] = &KJfill_;
    T34.vector_element_[5] = fill_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T33_0 = KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_object_vector_representationGVKi, &T34, sizeF6, T31);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T32 = T33_0;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    SLOT_VALUE_SETTER(T32, vector_, 0);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(0);
  return(T9);
}

D KmakeVKdMM31I (D class_, D all_keys_, D size_, D capacity_, D fill_) {
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:85
  T6_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:82
  MV_SET_COUNT(1);
  return(T6_0);
}

D KasVKdMM8I (D class_, D collection_) {
  D size_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12T, T12;
  DWORD index_T, index_;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18_0;
  D T19_0;
  _KLsimple_object_vectorGVKd_2 T20 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T21;
  D T22_0;
  _KLsimple_object_vectorGVKd_4 T23 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T24;
  DWORD T25;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  size_ = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T20.vector_element_[0] = &KJsize_;
    T20.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T19_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &T20);
    T18_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T5 = CONGRUENT_CALL3(collection_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T23.vector_element_[0] = &KJsize_;
    T23.vector_element_[1] = size_;
    T23.vector_element_[2] = &KJfill_;
    T23.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T22_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &T23);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T21 = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T24 = SLOT_VALUE_INITD(T21, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T6 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T7 = T6;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T8 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T9 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T10 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T11 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T12T = T7;
    index_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T12 = T12T;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      index_ = index_T;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T14 = CALL3(T10, collection_, T12, T8);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      if (T14 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T15 = CALL2(T11, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T15, T24, 2, index_);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T16 = CALL2(T9, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T25 = primitive_machine_word_add_signal_overflow(index_,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T12T = T16;
        index_T = T25;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T17_0 = T21;
    T18_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T18_0);
}

D KasVKdMM9I (D class_, D collection_) {
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
  D new_vector_;
  D T15;
  D T16;
  D T17;
  D T18_0;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T18_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T17 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  new_vector_ = T17;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T10 = CALL3(T7, collection_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T11 = CALL2(T8, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T16 = new_vector_;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T19 = KaddXVKdMM3I(T16, T11);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      new_vector_ = T19;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T12 = CALL2(T6, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T15 = new_vector_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T13_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T13_0);
}

D KasVKdMM47I (D class_, D coll_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:95
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLstretchy_object_vectorGVKe, coll_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:93
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:93
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM48I (D class_, D coll_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:100
  T3_0 = coll_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:98
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM49I (D class_, D vector_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3 = primitive_object_allocate_filled(2,&KLstretchy_object_vectorGVKeW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  T6 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_object_vectorG, 0);
  T7 = primitive_cast_integer_as_raw(T6);
  T8 = primitive_machine_word_logbitQ(4,T7);
  if (T8 != &KPfalseVKi) {
    T9 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_object_vectorG, 1);
    T11 = T9;
  } else {
    T5_0 = Kinstall_and_return_make_method_init_dataVKiI(&Kstretchy_representationVKeHLstretchy_object_vectorG);
    T10 = T5_0;
    T11 = T10;
  }
  SLOT_VALUE_SETTER(T11, T3, 0);
  MEP_APPLY2(&KinitializeVKdMM2, &K116, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kslot_initializerF119I () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T0_0 = Dempty_Lstretchy_object_vector_representationGVKi;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kstretchy_vector_element_setterVKeMM0I (D new_value_, D rep_, D key_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, rep_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLlimited_stretchy_vector_representationGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Psize_) {
  D T4;
  D Uunique_PsizeF5;
  D T6;
  D Uunique_PsizeF7;
  D T8_0;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:122
  T9 = primitive_idQ(Uunique_Psize_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:122
  if (T9 != &KPfalseVKi) {
    T10.vector_element_[0] = &KJsize_;
    T11 = KerrorVKdMM1I(&K172, &T10);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:122
    T4 = T11;
    Uunique_PsizeF5 = T4;
  } else {
    Uunique_PsizeF5 = Uunique_Psize_;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:122
  T6 = primitive_object_allocate_filled(2,&KLlimited_stretchy_vector_representationGVKeW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_PsizeF7 = Uunique_PsizeF5;
  SLOT_VALUE_SETTER(Uunique_PsizeF7, T6, 0);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T8_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:122
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLcapacity_size_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:113
  T5 = primitive_object_allocate_filled(3,&KLcapacity_size_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:113
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLlimited_stretchy_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:119
  T3 = primitive_object_allocate_filled(1,&KLlimited_stretchy_vectorGVKeW,0,&KPunboundVKi,0,0,&KPunboundVKi);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:119
  MV_SET_COUNT(1);
  return(T4_0);
}

D Klimited_stretchy_vectorVKeMM0I (D of_) {
  D T2_0;
  _KLsimple_object_vectorGVKd_6 T3 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:640
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:643
  CONGRUENT_CALL_PROLOG(&Kconcrete_limited_stretchy_vector_classVKi, 1);
  CONGRUENT_CALL1(of_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:647
  T3.vector_element_[0] = &KJclass_;
  T3.vector_element_[1] = &KLstretchy_vectorGVKd;
  T3.vector_element_[2] = &KJelement_type_;
  T3.vector_element_[3] = of_;
  T3.vector_element_[4] = IKJconcrete_class_;
  T3.vector_element_[5] = &KLstretchy_element_type_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:647
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2_0 = CONGRUENT_CALL2(&KLlimited_stretchy_vector_typeGVKi, &T3);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:640
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_stretchy_vector_classVKiMM0I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2_0 = &KLstretchy_object_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktrusted_size_setterVKiMM1I (D new_size_, D vector_) {
  D T3;
  DWORD iF4T, iF4;
  DWORD j_T, j_;
  D T6_0;
  DWORD iF7T, iF7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  DWORD T13;
  D T14;
  DWORD T15;
  D T16;
  DWORD T17;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  DWORD T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;
  D T31_0;
  _KLsimple_object_vectorGVKd_4 T32 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T33;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T25 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T26 = SLOT_VALUE_INITD(T25, 1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T27 = primitive_cast_integer_as_raw(T26);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T28 = primitive_cast_integer_as_raw(new_size_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T29 = primitive_machine_word_less_thanQ(T27,T28);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T3 = Kpower_of_two_ceilingVKeMM0I(new_size_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T32.vector_element_[0] = &KJcapacity_;
    T32.vector_element_[1] = T3;
    T32.vector_element_[2] = &KJsize_;
    T32.vector_element_[3] = new_size_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T31_0 = KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_object_vector_representationGVKi, &T32, new_size_, T3);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T30 = T31_0;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T12 = SLOT_VALUE_INITD(T25, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    iF4T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      iF4 = iF4T;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T14 = primitive_machine_word_less_thanQ(iF4,T13);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T33 = REPEATED_D_SLOT_VALUE_TAGGED(T25, 2, iF4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T33, T30, 2, iF4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T15 = primitive_machine_word_add_signal_overflow(iF4,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        iF4T = T15;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      j_T = iF4;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        j_ = j_T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T16 = primitive_machine_word_less_thanQ(j_,T28);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        if (T16 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T30, 2, j_);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
          T17 = primitive_machine_word_add_signal_overflow(j_,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
          j_T = T17;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    SLOT_VALUE_SETTER(T30, vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T6_0 = new_size_;
    T11_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T18 = SLOT_VALUE_INITD(T25, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T19 = primitive_cast_integer_as_raw(T18);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T20 = primitive_machine_word_less_thanQ(T28,T19);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T21 = SLOT_VALUE_INITD(T25, 0);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T22 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      iF7T = T28;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        iF7 = iF7T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        T23 = primitive_machine_word_less_thanQ(iF7,T22);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        if (T23 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T25, 2, iF7);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
          T24 = primitive_machine_word_add_signal_overflow(iF7,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
          iF7T = T24;
          goto L2;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T8_0 = new_size_;
      T10_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
      T9_0 = new_size_;
      T10_0 = T9_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kstretchy_object_vector_current_elementVKiI (D vector_, D state_) {
  D T2;
  D T3;
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstretchy_object_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3_0;
  D T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T4, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcollection_fillVKeMM0I (D x_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:148
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:149
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:148
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kcollection_fillVKeMM1I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstretchy_vector_elementVKeMM0I (D rep_, D key_) {
  D T3;
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T5 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3 = REPEATED_D_SLOT_VALUE_TAGGED(rep_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktrusted_size_setterVKiMM0I (D new_size_, D vector_) {
  D v_;
  D T4;
  D T5;
  D T6;
  D T7;
  D nv_;
  DWORD iF9T, iF9;
  D T10;
  DWORD j_T, j_;
  D T12;
  D T13_0;
  DWORD iF14T, iF14;
  D T15;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20_0;
  D T21;
  _KLsimple_object_vectorGVKd_4 T22 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T23;
  DWORD T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  D T39;
  DWORD T40;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:183
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:187
  CONGRUENT_CALL_PROLOG(&Kstretchy_representationVKe, 1);
  v_ = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:188
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T4 = CONGRUENT_CALL1(v_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:188
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T20_0 = CONGRUENT_CALL2(T4, new_size_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:188
  T21 = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:188
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:190
    CONGRUENT_CALL_PROLOG(&Kstretchy_representation_typeVKe, 1);
    T5 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:191
    T6 = Kpower_of_two_ceilingVKeMM0I(new_size_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:190
    T22.vector_element_[0] = &KJcapacity_;
    T22.vector_element_[1] = T6;
    T22.vector_element_[2] = &KJsize_;
    T22.vector_element_[3] = new_size_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:190
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T7 = CONGRUENT_CALL2(T5, &T22);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:189
    nv_ = T7;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
    T23 = SLOT_VALUE_INITD(v_, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
    T24 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
    iF9T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
      iF9 = iF9T;
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
      T26 = primitive_cast_raw_as_integer(iF9);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
      T25 = primitive_machine_word_less_thanQ(iF9,T24);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:194
        CONGRUENT_CALL_PROLOG(&Kstretchy_vector_elementVKe, 2);
        T10 = CONGRUENT_CALL2(v_, T26);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:194
        CONGRUENT_CALL_PROLOG(&Kstretchy_vector_element_setterVKe, 3);
        CONGRUENT_CALL3(T10, nv_, T26);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
        T27 = primitive_machine_word_add_signal_overflow(iF9,4);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
        iF9T = T27;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
      j_T = iF9;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
        j_ = j_T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
        T30 = primitive_cast_raw_as_integer(j_);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
        T28 = primitive_cast_integer_as_raw(new_size_);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
        T29 = primitive_machine_word_less_thanQ(j_,T28);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:197
          CONGRUENT_CALL_PROLOG(&Kcollection_fillVKe, 1);
          T12 = CONGRUENT_CALL1(vector_);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:197
          CONGRUENT_CALL_PROLOG(&Kstretchy_vector_element_setterVKe, 3);
          CONGRUENT_CALL3(T12, nv_, T30);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
          T31 = primitive_machine_word_add_signal_overflow(j_,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
          j_T = T31;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:196
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:193
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:200
    CONGRUENT_CALL_PROLOG(&Kstretchy_representation_setterVKe, 2);
    CONGRUENT_CALL2(nv_, vector_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:201
    T13_0 = new_size_;
    T19_0 = T13_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:202
    T32 = SLOT_VALUE_INITD(v_, 0);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:202
    T33 = primitive_cast_integer_as_raw(new_size_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:202
    T34 = primitive_cast_integer_as_raw(T32);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:202
    T35 = primitive_machine_word_less_thanQ(T33,T34);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:188
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:203
      T36 = SLOT_VALUE_INITD(v_, 0);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
      T37 = primitive_cast_integer_as_raw(T36);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:204
      SLOT_VALUE_SETTER(new_size_, v_, 0);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
      iF14T = T33;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
        iF14 = iF14T;
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
        T39 = primitive_cast_raw_as_integer(iF14);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
        T38 = primitive_machine_word_less_thanQ(iF14,T37);
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
        if (T38 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:206
          CONGRUENT_CALL_PROLOG(&Kcollection_fillVKe, 1);
          T15 = CONGRUENT_CALL1(vector_);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:206
          CONGRUENT_CALL_PROLOG(&Kstretchy_vector_element_setterVKe, 3);
          CONGRUENT_CALL3(T15, v_, T39);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
          T40 = primitive_machine_word_add_signal_overflow(iF14,4);
          // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
          iF14T = T40;
          goto L2;
        }
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
        // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:205
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:208
      T16_0 = new_size_;
      T18_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:210
      SLOT_VALUE_SETTER(new_size_, v_, 0);
      // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:210
      T17_0 = new_size_;
      T18_0 = T17_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:188
    T19_0 = T18_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:188
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:183
  MV_SET_COUNT(1);
  return(T19_0);
}

D Kstretchy_representation_typeVKeMM0I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2_0 = &KLstretchy_object_vector_representationGVKi;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstretchy_initializeVKiMM0I (D vector_, D capacity_, D size_, D fill_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T15 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T16;
  D T17;
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_1 T20 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T22;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_2 T25 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T26 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T27;
  _KLsimple_object_vectorGVKd_6 T28 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:560
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
  T16 = primitive_cast_integer_as_raw(size_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
  T17 = primitive_machine_word_less_thanQ(T16,1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
    T14.vector_element_[0] = size_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
    T12 = KlistVKdI(&T14);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
    T15.vector_element_[0] = &KJformat_string_;
    T15.vector_element_[1] = &K138;
    T15.vector_element_[2] = &KJformat_arguments_;
    T15.vector_element_[3] = T12;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T13 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T15);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
    KerrorVKdMM0I(T13, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:563
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
  T22 = primitive_cast_integer_as_raw(capacity_);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
  T23 = primitive_machine_word_less_thanQ(T22,1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
    T20.vector_element_[0] = capacity_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
    T18 = KlistVKdI(&T20);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
    T21.vector_element_[0] = &KJformat_string_;
    T21.vector_element_[1] = &K138;
    T21.vector_element_[2] = &KJformat_arguments_;
    T21.vector_element_[3] = T18;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T19 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T21);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
    KerrorVKdMM0I(T19, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:564
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:565
  T24 = primitive_machine_word_less_thanQ(T22,T16);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:565
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:568
    T25.vector_element_[0] = capacity_;
    T25.vector_element_[1] = size_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:568
    T5 = KlistVKdI(&T25);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:566
    T26.vector_element_[0] = &KJformat_string_;
    T26.vector_element_[1] = &K139;
    T26.vector_element_[2] = &KJformat_arguments_;
    T26.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:566
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLcapacity_size_errorGVKi, &T26);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:566
    KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:565
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:570
  T27 = primitive_machine_word_less_thanQ(1,T22);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:570
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:572
    T7 = CALL1(&Kstretchy_representation_typeVKe, vector_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:572
    T28.vector_element_[0] = &KJcapacity_;
    T28.vector_element_[1] = capacity_;
    T28.vector_element_[2] = &KJsize_;
    T28.vector_element_[3] = size_;
    T28.vector_element_[4] = &KJfill_;
    T28.vector_element_[5] = fill_;
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:572
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(T7, &T28);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:571
    CALL2(&Kstretchy_representation_setterVKe, T8, vector_);
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:571
    T9 = &KPfalseVKi;
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:570
    T10 = &KPfalseVKi;
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:570
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:560
  MV_SET_COUNT(0);
  return(T11);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_stretchy_vector_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJof_);
    if (T0 != &KJof_) {
      primitive_repeated_slot_value_setter(T0, &K147, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K144, 1, 0);
    }
  }
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

void _Init_dylan__X_stretchy_vector_for_user () {
{
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_4 T3 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T3.vector_element_[0] = &KJcapacity_;
  T3.vector_element_[1] = (D) 1;
  T3.vector_element_[2] = &KJsize_;
  T3.vector_element_[3] = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T2_0 = KLstretchy_object_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_object_vector_representationGVKi, &T3, (D) 1, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  Dempty_Lstretchy_object_vector_representationGVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/stretchy-vector.dylan:638
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
