#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(15);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
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

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
} _KLstretchy_collectionGVKd;

typedef struct {
  D wrapper;
} _KLstretchy_sequenceGVKe;

typedef struct {
  D wrapper;
} _KLstretchy_vectorGVKd;

typedef struct {
  D wrapper;
} _KLlimited_stretchy_vectorGVKe;

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
} _KLlambdaGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(47);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(43);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(22);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLcapacity_size_errorGVKi;

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
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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
  D Psize_;
} _KLlimited_stretchy_vector_representationGVKe;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

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

#define  define__KLstretchy_byte_character_vector_representationGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D Psize_; \
    D size_; \
    char stretchy_byte_character_vector_element_[nrepeated+1]; \
  } _KLstretchy_byte_character_vector_representationGVKi_##nrepeated;

#define  define__KLstretchy_byte_vector_representationGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D Psize_; \
    D size_; \
    D stretchy_byte_vector_element_[nrepeated+1]; \
  } _KLstretchy_byte_vector_representationGVKi_##nrepeated;

#define  define__KLstretchy_element_type_vector_representationGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D Psize_; \
    D size_; \
    D stretchy_element_type_vector_element_[nrepeated+1]; \
  } _KLstretchy_element_type_vector_representationGVKi_##nrepeated;

typedef struct {
  D wrapper;
  D element_type_;
  D stretchy_representation_;
} _KLstretchy_element_type_vectorGVKe;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_byte_vectorGVKi;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_byte_character_vectorGVKe;


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
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_15;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
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
extern _KLclassGVKd KLstretchy_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_collectionGVKdW;
extern _KLclassGVKd KLstretchy_sequenceGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_sequenceGVKeW;
extern _KLclassGVKd KLstretchy_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_vectorGVKdW;
extern _KLclassGVKd KLlimited_stretchy_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_vectorGVKeW;
D Kinstall_and_return_make_method_init_dataVKiI (D descriptor_);
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe Kstretchy_representationVKe;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe Kstretchy_representation_setterVKe;
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsymbolGVKd KJfill_;
extern _KLincremental_generic_functionGVKe Kstretchy_vector_element_setterVKe;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_6;
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
D KlistVKdI (D objects_);
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLnatural_number_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLnatural_number_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLcapacity_size_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLcapacity_size_errorGVKiW;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_characterG_typesVKi;
D Kpower_of_two_ceilingVKeMM0I (D);
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
D KsubtypeQVKdMM11I (D limint1_, D limint2_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Llimited_integerG_typesVKi;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kelement_typeVKeHLlimited_collectionG;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_1;
extern _KLincremental_generic_functionGVKe Klimited_stretchy_vectorVKe;
D KreverseXVKdMM2I (D l_);
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLsymbolGVKd KJtest_;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLsymbolGVKd KJcount_;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_9;
D Kelement_range_errorVKeI (D, D);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_1;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_6;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_6;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_4;
extern _KLsymbolGVKd KJdefault_;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_8;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLinstance_slot_descriptorGVKe KPsizeVKiHLlimited_stretchy_vector_representationG;
extern _KLclassGVKd KLlimited_stretchy_vector_representationGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_stretchy_vector_representationGVKeW;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
D KerrorVKdMM1I (D, D);
D Kallocate_instanceVKeI (D class_, D init_args_);

/* Defined object declarations */

D KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd KLstretchy_byte_character_vector_representationGVKi;
extern _KLmm_wrapperGVKi_0 KLstretchy_byte_character_vector_representationGVKiW;
D KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd KLstretchy_byte_vector_representationGVKi;
extern _KLmm_wrapperGVKi_0 KLstretchy_byte_vector_representationGVKiW;
D KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0I (D, D, D, D);
extern _KLclassGVKd KLstretchy_element_type_vector_representationGVKi;
extern _KLmm_wrapperGVKi_0 KLstretchy_element_type_vector_representationGVKiW;
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM5;
D KemptyQVKdMM5I (D);
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM6;
D KemptyQVKdMM6I (D);
extern _KLsimple_copy_down_methodGVKi KemptyQVKdMM7;
D KemptyQVKdMM7I (D);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_11;
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM2;
D Ksize_setterVKdMM2I (D, D);
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM3;
D Ksize_setterVKdMM3I (D, D);
extern _KLsimple_copy_down_methodGVKi Ksize_setterVKdMM4;
D Ksize_setterVKdMM4I (D, D);
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe KsizeVKdMM23;
D KsizeVKdMM23I (D vector_);
extern _KLgetter_methodGVKi KsizeVKdMM24;
extern _KLsimple_methodGVKe KsizeVKdMM25;
D KsizeVKdMM25I (D vector_);
extern _KLgetter_methodGVKi KsizeVKdMM26;
extern _KLsimple_methodGVKe KsizeVKdMM27;
D KsizeVKdMM27I (D vector_);
extern _KLgetter_methodGVKi KsizeVKdMM28;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_19;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM10;
D Ktype_for_copyVKdMM10I (D vector_);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM11;
D Ktype_for_copyVKdMM11I (D vector_);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM12;
D Ktype_for_copyVKdMM12I (D vector_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_10;
extern _KLsimple_methodGVKe Kelement_typeVKeMM16;
D Kelement_typeVKeMM16I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM17;
D Kelement_typeVKeMM17I (D t_);
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_10;
extern _KLkeyword_methodGVKe KelementVKdMM20;
D KelementVKdMM20I (D collection_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM21;
D KelementVKdMM21I (D collection_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM22;
D KelementVKdMM22I (D collection_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_14;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM18;
D Kelement_no_bounds_checkVKeMM18I (D collection_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM19;
D Kelement_no_bounds_checkVKeMM19I (D collection_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM20;
D Kelement_no_bounds_checkVKeMM20I (D collection_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_5;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_7;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_11;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM18;
D Kforward_iteration_protocolVKdMM18I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM17;
D Kforward_iteration_protocolVKdMM17I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM16;
D Kforward_iteration_protocolVKdMM16I (D sequence_);
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_9;
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM6;
D KaddXVKdMM6I (D, D);
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM5;
D KaddXVKdMM5I (D, D);
extern _KLsimple_copy_down_methodGVKi KaddXVKdMM4;
D KaddXVKdMM4I (D, D);
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM4;
D KremoveXVKdMM4I (D, D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM5;
D KremoveXVKdMM5I (D, D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi KremoveXVKdMM6;
D KremoveXVKdMM6I (D, D, D, D, D);
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_9;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM11;
D Kbackward_iteration_protocolVKdMM11I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM12;
D Kbackward_iteration_protocolVKdMM12I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM13;
D Kbackward_iteration_protocolVKdMM13I (D sequence_);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_4;
extern _KLsimple_methodGVKe Kelement_setterVKdMM20;
D Kelement_setterVKdMM20I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM21;
D Kelement_setterVKdMM21I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM22;
D Kelement_setterVKdMM22I (D new_value_, D collection_, D index_);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_12;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM20;
D Kelement_no_bounds_check_setterVKeMM20I (D new_value_, D collection_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM21;
D Kelement_no_bounds_check_setterVKeMM21I (D new_value_, D collection_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM22;
D Kelement_no_bounds_check_setterVKeMM22I (D new_value_, D collection_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_7;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_9;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_3;
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM5;
D KremoveVKdMM5I (D, D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM4;
D KremoveVKdMM4I (D, D, D, D, D);
extern _KLkeyword_copy_down_methodGVKi KremoveVKdMM3;
D KremoveVKdMM3I (D, D, D, D, D);
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM3;
D KchooseVKdMM3I (D, D);
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM4;
D KchooseVKdMM4I (D, D);
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM5;
D KchooseVKdMM5I (D, D);
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_2;
extern _KLsetter_methodGVKi Kstretchy_representation_setterVKeMM3;
extern _KLsetter_methodGVKi Kstretchy_representation_setterVKeMM2;
extern _KLsetter_methodGVKi Kstretchy_representation_setterVKeMM1;
extern _KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_2;
extern _KLgetter_methodGVKi Kstretchy_representationVKeMM3;
extern _KLgetter_methodGVKi Kstretchy_representationVKeMM2;
extern _KLgetter_methodGVKi Kstretchy_representationVKeMM1;
extern _KLclassGVKd KLstretchy_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_element_type_vectorGVKeW;
extern _KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM3;
D Kconcrete_limited_stretchy_vector_classVKiMM3I (D);
extern _KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM2;
D Kconcrete_limited_stretchy_vector_classVKiMM2I (D);
extern _KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM1;
D Kconcrete_limited_stretchy_vector_classVKiMM1I (D);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_24;
extern _KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_2;
extern _KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM2;
D Ktrusted_size_setterVKiMM2I (D, D);
extern _KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM3;
D Ktrusted_size_setterVKiMM3I (D, D);
extern _KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM4;
D Ktrusted_size_setterVKiMM4I (D, D);
extern _KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_1;
extern _KLsimple_methodGVKe Kstretchy_representation_typeVKeMM3;
D Kstretchy_representation_typeVKeMM3I (D vector_);
extern _KLsimple_methodGVKe Kstretchy_representation_typeVKeMM2;
D Kstretchy_representation_typeVKeMM2I (D vector_);
extern _KLsimple_methodGVKe Kstretchy_representation_typeVKeMM1;
D Kstretchy_representation_typeVKeMM1I (D vector_);
extern _KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_1;
extern _KLsimple_methodGVKe Kcollection_fillVKeMM4;
D Kcollection_fillVKeMM4I (D vector_);
extern _KLsimple_methodGVKe Kcollection_fillVKeMM3;
D Kcollection_fillVKeMM3I (D vector_);
extern _KLsimple_methodGVKe Kcollection_fillVKeMM2;
D Kcollection_fillVKeMM2I (D vector_);
extern _KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_1;
extern _KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM3;
D Kstretchy_vector_element_setterVKeMM3I (D new_value_, D rep_, D key_);
extern _KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM2;
D Kstretchy_vector_element_setterVKeMM2I (D new_value_, D rep_, D key_);
extern _KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM1;
D Kstretchy_vector_element_setterVKeMM1I (D new_value_, D rep_, D key_);
extern _KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_0;
extern _KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_1;
extern _KLsimple_methodGVKe Kstretchy_vector_elementVKeMM3;
D Kstretchy_vector_elementVKeMM3I (D rep_, D key_);
extern _KLsimple_methodGVKe Kstretchy_vector_elementVKeMM2;
D Kstretchy_vector_elementVKeMM2I (D rep_, D key_);
extern _KLsimple_methodGVKe Kstretchy_vector_elementVKeMM1;
D Kstretchy_vector_elementVKeMM1I (D rep_, D key_);
extern _KLkeyword_methodGVKe KinitializeVKdMM3;
D KinitializeVKdMM3I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM4;
D KinitializeVKdMM4I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM5;
D KinitializeVKdMM5I (D, D, D, D, D, D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_19;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_20;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_21;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_23;
extern _KLsimple_methodGVKe KasVKdMM2;
D KasVKdMM2I (D, D);
extern _KLsimple_methodGVKe KasVKdMM3;
D KasVKdMM3I (D, D);
extern _KLsimple_methodGVKe KasVKdMM4;
D KasVKdMM4I (D, D);
extern _KLsimple_methodGVKe KasVKdMM5;
D KasVKdMM5I (D, D);
extern _KLsimple_methodGVKe KasVKdMM6;
D KasVKdMM6I (D, D);
extern _KLsimple_methodGVKe KasVKdMM7;
D KasVKdMM7I (D, D);
extern _KLsimple_methodGVKe KasVKdMM50;
D KasVKdMM50I (D class_, D vector_);
extern _KLsimple_methodGVKe KasVKdMM51;
D KasVKdMM51I (D class_, D vector_);
extern _KLsimple_methodGVKe KasVKdMM52;
D KasVKdMM52I (D class_, D vector_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_20;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_22;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_23;
static _KLsignatureAvaluesGVKi K261;
static _KLsimple_object_vectorGVKd_2 K262;
static _KLsimple_object_vectorGVKd_1 K263;
static _KLsingletonGVKd K264;
static _KLsignatureAvaluesGVKi K265;
static _KLsimple_object_vectorGVKd_2 K266;
static _KLsimple_object_vectorGVKd_1 K267;
extern _KLclassGVKd KLstretchy_byte_vectorGVKi;
extern _KLmm_wrapperGVKi_0 KLstretchy_byte_vectorGVKiW;
static _KLimplementation_classGVKe K270;
static _KLsimple_object_vectorGVKd_1 K271;
extern _KLkeyword_methodGVKe KLstretchy_byte_vectorGZ32ZconstructorVKiMM0;
D KLstretchy_byte_vectorGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K274;
static _KLsimple_object_vectorGVKd_14 K275;
extern _KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_byte_vectorG;
static _KLpairGVKd K277;
static _KLlambdaGVKe Kslot_initializerF280;
static D Kslot_initializerF280I ();
static _KLsignatureGVKe K281;
static _KLkeyword_signatureAvaluesGVKi K282;
static _KLbyte_stringGVKd_22 K283;
static _KLsingletonGVKd K284;
static _KLsignatureAvaluesGVKi K285;
static _KLsimple_object_vectorGVKd_2 K286;
static _KLsimple_object_vectorGVKd_1 K287;
extern _KLclassGVKd KLstretchy_byte_character_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_byte_character_vectorGVKeW;
static _KLimplementation_classGVKe K290;
static _KLsimple_object_vectorGVKd_1 K291;
extern _KLkeyword_methodGVKe KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0;
D KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_14 K294;
extern _KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_byte_character_vectorG;
static _KLlambdaGVKe Kslot_initializerF298;
static D Kslot_initializerF298I ();
static _KLkeyword_signatureAvaluesGVKi K299;
static _KLbyte_stringGVKd_32 K300;
static _KLsingletonGVKd K301;
static _KLsignatureAvaluesGVKi K302;
static _KLsimple_object_vectorGVKd_2 K303;
static _KLsignatureAvaluesGVKi K304;
static _KLsimple_object_vectorGVKd_2 K305;
static _KLsignatureAvaluesGVKi K306;
static _KLsimple_object_vectorGVKd_2 K307;
static _KLsignatureAvaluesGVKi K308;
static _KLsimple_object_vectorGVKd_2 K309;
D KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0I (D, D, D);
extern _KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_element_type_vectorG;
static _KLlambdaGVKe Kslot_initializerF314;
static D Kslot_initializerF314I ();
static _KLsignatureAvaluesGVKi K315;
static _KLsimple_object_vectorGVKd_2 K316;
static _KLsignatureAvaluesGVKi K317;
static _KLsimple_object_vectorGVKd_2 K318;
static _KLsingletonGVKd K319;
static _KLsingletonGVKd K320;
static _KLbyte_stringGVKd_34 K321;
static _KLbyte_stringGVKd_21 K322;
static _KLkeyword_signatureGVKe K323;
static _KLsimple_object_vectorGVKd_8 K324;
static _KLsimple_object_vectorGVKd_4 K325;
static _KLsimple_object_vectorGVKd_4 K326;
static _KLkeyword_signatureGVKe K327;
static _KLsimple_object_vectorGVKd_6 K328;
static _KLsimple_object_vectorGVKd_3 K329;
static _KLsimple_object_vectorGVKd_3 K330;
static _KLkeyword_signatureGVKe K331;
static _KLsimple_object_vectorGVKd_6 K332;
static _KLsimple_object_vectorGVKd_3 K333;
static _KLsignatureAvaluesGVKi K334;
static _KLsimple_object_vectorGVKd_2 K335;
static _KLsignatureAvaluesGVKi K336;
static _KLsimple_object_vectorGVKd_2 K337;
static _KLsimple_object_vectorGVKd_1 K338;
static _KLsignatureGVKe K339;
static _KLsimple_object_vectorGVKd_2 K340;
static _KLsignatureAvaluesGVKi K341;
static _KLsimple_object_vectorGVKd_3 K342;
static _KLsignatureAvaluesGVKi K343;
static _KLsimple_object_vectorGVKd_3 K344;
static _KLsignatureGVKe K345;
static _KLsimple_object_vectorGVKd_3 K346;
static _KLsignatureGVKe K347;
static _KLsignatureGVKe K348;
static _KLsignatureGVKe K349;
static _KLsignatureAvaluesGVKi K350;
static _KLsimple_object_vectorGVKd_1 K351;
static _KLsingletonGVKd K352;
static _KLsignatureAvaluesGVKi K353;
static _KLsimple_object_vectorGVKd_1 K354;
static _KLsignatureAvaluesGVKi K355;
static _KLsimple_object_vectorGVKd_1 K356;
static _KLsignatureAvaluesGVKi K357;
static _KLsimple_object_vectorGVKd_2 K358;
static _KLsignatureAvaluesGVKi K359;
static _KLsimple_object_vectorGVKd_2 K360;
static _KLsignatureAvaluesGVKi K361;
static _KLsimple_object_vectorGVKd_2 K362;
static _KLsignatureAvaluesGVKi K363;
static _KLsimple_object_vectorGVKd_1 K364;
static _KLsingletonGVKd K365;
static _KLsignatureAvaluesGVKi K366;
static _KLsignatureAvaluesGVKi K367;
static _KLimplementation_classGVKe K368;
static _KLsimple_object_vectorGVKd_2 K369;
extern _KLkeyword_methodGVKe KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_2 K371;
static _KLsimple_object_vectorGVKd_15 K372;
static _KLsimple_object_vectorGVKd_1 K373;
static _KLkeyword_signatureAvaluesGVKi K374;
static _KLsimple_object_vectorGVKd_2 K375;
static _KLsimple_object_vectorGVKd_1 K376;
static _KLbyte_stringGVKd_30 K377;
static _KLsignatureAvaluesGVKi K378;
static _KLsimple_object_vectorGVKd_2 K379;
static _KLsignatureAvaluesGVKi K380;
static _KLsimple_object_vectorGVKd_2 K381;
static _KLsignatureAvaluesGVKi K382;
static _KLsimple_object_vectorGVKd_2 K383;
static _KLunionGVKe K384;
static _KLsingletonGVKd K385;
static _KLkeyword_signatureAvaluesGVKi K386;
static _KLsimple_object_vectorGVKd_4 K387;
static _KLsimple_object_vectorGVKd_2 K388;
static _KLsimple_object_vectorGVKd_2 K389;
static _KLsimple_object_vectorGVKd_2 K390;
static _KLkeyword_signatureAvaluesGVKi K391;
static _KLsimple_object_vectorGVKd_2 K392;
static _KLkeyword_signatureAvaluesGVKi K393;
static _KLsimple_object_vectorGVKd_2 K394;
static _KLsignatureGVKe K395;
static _KLsimple_object_vectorGVKd_3 K396;
static _KLsignatureAvaluesGVKi K397;
static _KLsimple_object_vectorGVKd_3 K398;
static _KLsignatureAvaluesGVKi K399;
static _KLsimple_object_vectorGVKd_3 K400;
extern _KLsimple_methodGVKe Kstretchy_element_type_vector_current_elementVKi;
D Kstretchy_element_type_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kstretchy_element_type_vector_current_element_setterVKi;
D Kstretchy_element_type_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K405;
static _KLsimple_object_vectorGVKd_2 K406;
static _KLsignatureAvaluesGVKi K407;
static _KLsimple_object_vectorGVKd_8 K408;
extern _KLsimple_methodGVKe Kstretchy_byte_vector_current_elementVKi;
D Kstretchy_byte_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kstretchy_byte_vector_current_element_setterVKi;
D Kstretchy_byte_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureAvaluesGVKi K413;
static _KLsimple_object_vectorGVKd_2 K414;
static _KLsignatureAvaluesGVKi K415;
extern _KLsimple_methodGVKe Kstretchy_byte_character_vector_current_elementVKi;
D Kstretchy_byte_character_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kstretchy_byte_character_vector_current_element_setterVKi;
D Kstretchy_byte_character_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureAvaluesGVKi K420;
static _KLsimple_object_vectorGVKd_2 K421;
static _KLsignatureAvaluesGVKi K422;
static _KLkeyword_signatureAvaluesGVKi K423;
static _KLsimple_object_vectorGVKd_4 K424;
static _KLkeyword_signatureAvaluesGVKi K425;
static _KLkeyword_signatureAvaluesGVKi K426;
static _KLsignatureAvaluesGVKi K427;
static _KLsignatureAvaluesGVKi K428;
static _KLsignatureAvaluesGVKi K429;
static _KLkeyword_signatureGVKe K430;
static _KLsimple_object_vectorGVKd_2 K431;
static _KLsimple_object_vectorGVKd_1 K432;
static _KLkeyword_signatureAvaluesGVKi K433;
static _KLkeyword_signatureAvaluesGVKi K434;
static _KLsimple_object_vectorGVKd_2 K435;
static _KLsignatureAvaluesGVKi K436;
static _KLsignatureAvaluesGVKi K437;
static _KLsignatureAvaluesGVKi K438;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_element_type_vector_representationG;
static _KLsignatureAvaluesGVKi K440;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_byte_vector_representationG;
static _KLsignatureAvaluesGVKi K442;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_byte_character_vector_representationG;
static _KLsignatureAvaluesGVKi K444;
static _KLsignatureAvaluesGVKi K445;
static _KLsignatureAvaluesGVKi K446;
static _KLsignatureAvaluesGVKi K447;
static _KLimplementation_classGVKe K448;
extern _KLrepeated_slot_descriptorGVKe Kstretchy_element_type_vector_elementVKiHLstretchy_element_type_vector_representationG;
static _KLsimple_object_vectorGVKd_2 K450;
extern _KLkeyword_methodGVKe KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_1 K452;
static _KLsimple_object_vectorGVKd_6 K453;
static _KLsimple_object_vectorGVKd_1 K454;
static _KLsimple_object_vectorGVKd_2 K455;
static _KLkeyword_signatureAvaluesGVKi K456;
static _KLsimple_object_vectorGVKd_4 K457;
static _KLsimple_object_vectorGVKd_2 K458;
static _KLsimple_object_vectorGVKd_1 K459;
extern _KLsealed_generic_functionGVKe Kstretchy_element_type_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kstretchy_element_type_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kstretchy_element_type_vector_element_setterVKiMM0;
static _KLpairGVKd K463;
static _KLbyte_stringGVKd_43 K464;
extern _KLrepeated_getter_methodGVKi Kstretchy_element_type_vector_elementVKiMM0;
static _KLpairGVKd K466;
static _KLbyte_stringGVKd_36 K467;
static _KLbyte_stringGVKd_45 K468;
static _KLbyte_stringGVKd_23 K469;
static _KLimplementation_classGVKe K470;
extern _KLrepeated_slot_descriptorGVKe Kstretchy_byte_vector_elementVKiHLstretchy_byte_vector_representationG;
static _KLsimple_object_vectorGVKd_2 K472;
extern _KLkeyword_methodGVKe KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_6 K474;
static _KLsimple_object_vectorGVKd_1 K475;
static _KLsimple_object_vectorGVKd_2 K476;
static _KLkeyword_signatureAvaluesGVKi K477;
static _KLsimple_object_vectorGVKd_1 K478;
extern _KLsealed_generic_functionGVKe Kstretchy_byte_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kstretchy_byte_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kstretchy_byte_vector_element_setterVKiMM0;
static _KLpairGVKd K482;
static _KLbyte_stringGVKd_35 K483;
extern _KLrepeated_getter_methodGVKi Kstretchy_byte_vector_elementVKiMM0;
static _KLpairGVKd K485;
static _KLbyte_stringGVKd_28 K486;
static _KLbyte_stringGVKd_37 K487;
static _KLimplementation_classGVKe K488;
extern _KLrepeated_slot_descriptorGVKe Kstretchy_byte_character_vector_elementVKiHLstretchy_byte_character_vector_representationG;
static _KLsimple_object_vectorGVKd_2 K490;
extern _KLkeyword_methodGVKe KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0;
static _KLsimple_object_vectorGVKd_6 K492;
static _KLsimple_object_vectorGVKd_1 K493;
static _KLsimple_object_vectorGVKd_2 K494;
static _KLkeyword_signatureAvaluesGVKi K495;
static _KLsimple_object_vectorGVKd_1 K496;
extern _KLsealed_generic_functionGVKe Kstretchy_byte_character_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kstretchy_byte_character_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kstretchy_byte_character_vector_element_setterVKiMM0;
static _KLpairGVKd K500;
static _KLbyte_stringGVKd_45 K501;
extern _KLrepeated_getter_methodGVKi Kstretchy_byte_character_vector_elementVKiMM0;
static _KLpairGVKd K503;
static _KLbyte_stringGVKd_38 K504;
static _KLbyte_stringGVKd_47 K505;

/* Indirection variables */


/* Variables */

D Lstretchy_byte_character_vectorGVKe = &KLstretchy_byte_character_vectorGVKe;
D Dempty_Lstretchy_byte_character_vector_representationGVKi = &KPunboundVKi;
D Lstretchy_byte_character_vector_representationGVKi = &KLstretchy_byte_character_vector_representationGVKi;
D Lstretchy_byte_vectorGVKi = &KLstretchy_byte_vectorGVKi;
D Dempty_Lstretchy_byte_vector_representationGVKi = &KPunboundVKi;
D Lstretchy_byte_vector_representationGVKi = &KLstretchy_byte_vector_representationGVKi;
D Lstretchy_element_type_vectorGVKe = &KLstretchy_element_type_vectorGVKe;
D Dempty_Lstretchy_element_type_vector_representationGVKi = &KPunboundVKi;
D Lstretchy_element_type_vector_representationGVKi = &KLstretchy_element_type_vector_representationGVKi;
D stretchy_element_type_vector_current_elementVKi = &Kstretchy_element_type_vector_current_elementVKi;
D stretchy_element_type_vector_current_element_setterVKi = &Kstretchy_element_type_vector_current_element_setterVKi;
D stretchy_byte_vector_current_elementVKi = &Kstretchy_byte_vector_current_elementVKi;
D stretchy_byte_vector_current_element_setterVKi = &Kstretchy_byte_vector_current_element_setterVKi;
D stretchy_byte_character_vector_current_elementVKi = &Kstretchy_byte_character_vector_current_elementVKi;
D stretchy_byte_character_vector_current_element_setterVKi = &Kstretchy_byte_character_vector_current_element_setterVKi;

/* Objects */

_KLclassGVKd KLstretchy_byte_character_vector_representationGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K505,
  &K488,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_byte_character_vector_representationGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K488,
  (D) 1,
  5,
  33554460,
  (D) 1
};

_KLclassGVKd KLstretchy_byte_vector_representationGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K487,
  &K470,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_byte_vector_representationGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K470,
  (D) 1,
  5,
  33554460,
  (D) 1
};

_KLclassGVKd KLstretchy_element_type_vector_representationGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K468,
  &K448,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_element_type_vector_representationGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K448,
  (D) 1,
  5,
  33554434,
  (D) 1
};

_KLsimple_copy_down_methodGVKi KemptyQVKdMM5 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_1,
  &K447,
  &KemptyQVKdMM5I
};

_KLsimple_copy_down_methodGVKi KemptyQVKdMM6 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_1,
  &K446,
  &KemptyQVKdMM6I
};

_KLsimple_copy_down_methodGVKi KemptyQVKdMM7 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_1,
  &K445,
  &KemptyQVKdMM7I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_8,
  &KemptyQVKdMM7
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_9,
  &KemptyQVKdMM6
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_10,
  &KemptyQVKdMM5
};

_KLsimple_copy_down_methodGVKi Ksize_setterVKdMM2 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K361,
  &Ksize_setterVKdMM2I
};

_KLsimple_copy_down_methodGVKi Ksize_setterVKdMM3 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K359,
  &Ksize_setterVKdMM3I
};

_KLsimple_copy_down_methodGVKi Ksize_setterVKdMM4 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K357,
  &Ksize_setterVKdMM4I
};

_KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksize_setterVKdRD_dylanRD_2,
  &Ksize_setterVKdMM4
};

_KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksize_setterVKdRD_dylanRD_3,
  &Ksize_setterVKdMM3
};

_KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksize_setterVKdRD_dylanRD_4,
  &Ksize_setterVKdMM2
};

_KLsimple_methodGVKe KsizeVKdMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K444,
  &KsizeVKdMM23I
};

_KLgetter_methodGVKi KsizeVKdMM24 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLstretchy_byte_character_vector_representationG
};

_KLsimple_methodGVKe KsizeVKdMM25 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K442,
  &KsizeVKdMM25I
};

_KLgetter_methodGVKi KsizeVKdMM26 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLstretchy_byte_vector_representationG
};

_KLsimple_methodGVKe KsizeVKdMM27 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K440,
  &KsizeVKdMM27I
};

_KLgetter_methodGVKi KsizeVKdMM28 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLstretchy_element_type_vector_representationG
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_13,
  &KsizeVKdMM27
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_15 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_14,
  (D) 5,
  &KLstretchy_element_type_vector_representationGVKi
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_15,
  &KsizeVKdMM25
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_17 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_16,
  (D) 5,
  &KLstretchy_byte_vector_representationGVKi
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_17,
  &KsizeVKdMM23
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_19 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_18,
  (D) 5,
  &KLstretchy_byte_character_vector_representationGVKi
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K437,
  &Ktype_for_copyVKdMM10I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K436,
  &Ktype_for_copyVKdMM11I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K438,
  &Ktype_for_copyVKdMM12I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_7,
  &Ktype_for_copyVKdMM12
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_8,
  &Ktype_for_copyVKdMM11
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_9,
  &Ktype_for_copyVKdMM10
};

_KLsimple_methodGVKe Kelement_typeVKeMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K437,
  &Kelement_typeVKeMM16I
};

_KLsimple_methodGVKe Kelement_typeVKeMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K436,
  &Kelement_typeVKeMM17I
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_4,
  (D) 5,
  &KLstretchy_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_5,
  (D) 5,
  &KLstretchy_element_type_vectorGVKe
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_6,
  &Kelement_typeVKeMM17
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_7,
  (D) 5,
  &KLstretchy_byte_vectorGVKi
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_8,
  &Kelement_typeVKeMM16
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_10 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_9,
  (D) 5,
  &KLstretchy_byte_character_vectorGVKe
};

_KLkeyword_methodGVKe KelementVKdMM20 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K434,
  &key_mep_4,
  &KelementVKdMM20I,
  &K435
};

_KLkeyword_methodGVKe KelementVKdMM21 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K433,
  &key_mep_4,
  &KelementVKdMM21I,
  &K435
};

_KLkeyword_methodGVKe KelementVKdMM22 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K430,
  &key_mep_4,
  &KelementVKdMM22I,
  &K435
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_11,
  &KelementVKdMM22
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_12,
  &KelementVKdMM21
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_13,
  &KelementVKdMM20
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM18 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K434,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM18I,
  &K431
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM19 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K433,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM19I,
  &K431
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM20 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K430,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM20I,
  &K431
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_4,
  &Kelement_no_bounds_checkVKeMM20
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_5,
  &Kelement_no_bounds_checkVKeMM19
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_6,
  &Kelement_no_bounds_checkVKeMM18
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_8,
  &Kforward_iteration_protocolVKdMM18
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_9,
  &Kforward_iteration_protocolVKdMM17
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_10,
  &Kforward_iteration_protocolVKdMM16
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K407,
  &Kforward_iteration_protocolVKdMM18I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K415,
  &Kforward_iteration_protocolVKdMM17I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K422,
  &Kforward_iteration_protocolVKdMM16I
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_6,
  &KaddXVKdMM6
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_7,
  &KaddXVKdMM5
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_8,
  &KaddXVKdMM4
};

_KLsimple_copy_down_methodGVKi KaddXVKdMM6 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K429,
  &KaddXVKdMM6I
};

_KLsimple_copy_down_methodGVKi KaddXVKdMM5 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K428,
  &KaddXVKdMM5I
};

_KLsimple_copy_down_methodGVKi KaddXVKdMM4 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K427,
  &KaddXVKdMM4I
};

_KLkeyword_copy_down_methodGVKi KremoveXVKdMM4 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K426,
  &key_mep_5,
  &KremoveXVKdMM4I,
  &K424
};

_KLkeyword_copy_down_methodGVKi KremoveXVKdMM5 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K425,
  &key_mep_5,
  &KremoveXVKdMM5I,
  &K424
};

_KLkeyword_copy_down_methodGVKi KremoveXVKdMM6 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K423,
  &key_mep_5,
  &KremoveXVKdMM6I,
  &K424
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_6,
  &KremoveXVKdMM6
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_7,
  &KremoveXVKdMM5
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_8,
  &KremoveXVKdMM4
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K422,
  &Kbackward_iteration_protocolVKdMM11I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K415,
  &Kbackward_iteration_protocolVKdMM12I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K407,
  &Kbackward_iteration_protocolVKdMM13I
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_1,
  &Kbackward_iteration_protocolVKdMM13
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_2,
  &Kbackward_iteration_protocolVKdMM12
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_3,
  &Kbackward_iteration_protocolVKdMM11
};

_KLsimple_methodGVKe Kelement_setterVKdMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K399,
  &Kelement_setterVKdMM20I
};

_KLsimple_methodGVKe Kelement_setterVKdMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K397,
  &Kelement_setterVKdMM21I
};

_KLsimple_methodGVKe Kelement_setterVKdMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K395,
  &Kelement_setterVKdMM22I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_9,
  &Kelement_setterVKdMM22
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_10,
  &Kelement_setterVKdMM21
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_11,
  &Kelement_setterVKdMM20
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K399,
  &Kelement_no_bounds_check_setterVKeMM20I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K397,
  &Kelement_no_bounds_check_setterVKeMM21I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K395,
  &Kelement_no_bounds_check_setterVKeMM22I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_6,
  &Kelement_no_bounds_check_setterVKeMM22
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_7,
  &Kelement_no_bounds_check_setterVKeMM21
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_8,
  &Kelement_no_bounds_check_setterVKeMM20
};

_KLmethod_domainGVKe KremoveVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_0,
  &KremoveVKdMM5
};

_KLmethod_domainGVKe KremoveVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_1,
  &KremoveVKdMM4
};

_KLmethod_domainGVKe KremoveVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_2,
  &KremoveVKdMM3
};

_KLkeyword_copy_down_methodGVKi KremoveVKdMM5 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K393,
  &key_mep_5,
  &KremoveVKdMM5I,
  &K387
};

_KLkeyword_copy_down_methodGVKi KremoveVKdMM4 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K391,
  &key_mep_5,
  &KremoveVKdMM4I,
  &K387
};

_KLkeyword_copy_down_methodGVKi KremoveVKdMM3 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K386,
  &key_mep_5,
  &KremoveVKdMM3I,
  &K387
};

_KLsimple_copy_down_methodGVKi KchooseVKdMM3 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K382,
  &KchooseVKdMM3I
};

_KLsimple_copy_down_methodGVKi KchooseVKdMM4 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K380,
  &KchooseVKdMM4I
};

_KLsimple_copy_down_methodGVKi KchooseVKdMM5 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K378,
  &KchooseVKdMM5I
};

_KLmethod_domainGVKe KchooseVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_1,
  &KchooseVKdMM5
};

_KLmethod_domainGVKe KchooseVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_2,
  &KchooseVKdMM4
};

_KLmethod_domainGVKe KchooseVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_3,
  &KchooseVKdMM3
};

_KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 9,
  &KLstretchy_element_type_vector_representationGVKi,
  &KLstretchy_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representation_setterVKeRD_dylanRD_0,
  (D) 9,
  &KLstretchy_byte_vector_representationGVKi,
  &KLstretchy_byte_vectorGVKi
};

_KLstandalone_domainGVKe_2 Kstretchy_representation_setterVKeRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representation_setterVKeRD_dylanRD_1,
  (D) 9,
  &KLstretchy_byte_character_vector_representationGVKi,
  &KLstretchy_byte_character_vectorGVKe
};

_KLsetter_methodGVKi Kstretchy_representation_setterVKeMM3 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstretchy_representationVKeHLstretchy_element_type_vectorG
};

_KLsetter_methodGVKi Kstretchy_representation_setterVKeMM2 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstretchy_representationVKeHLstretchy_byte_vectorG
};

_KLsetter_methodGVKi Kstretchy_representation_setterVKeMM1 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kstretchy_representationVKeHLstretchy_byte_character_vectorG
};

_KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLstretchy_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representationVKeRD_dylanRD_0,
  (D) 5,
  &KLstretchy_byte_vectorGVKi
};

_KLstandalone_domainGVKe_1 Kstretchy_representationVKeRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representationVKeRD_dylanRD_1,
  (D) 5,
  &KLstretchy_byte_character_vectorGVKe
};

_KLgetter_methodGVKi Kstretchy_representationVKeMM3 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstretchy_representationVKeHLstretchy_element_type_vectorG
};

_KLgetter_methodGVKi Kstretchy_representationVKeMM2 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstretchy_representationVKeHLstretchy_byte_vectorG
};

_KLgetter_methodGVKi Kstretchy_representationVKeMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kstretchy_representationVKeHLstretchy_byte_character_vectorG
};

_KLclassGVKd KLstretchy_element_type_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K377,
  &K368,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_element_type_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K368,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K367,
  &Kconcrete_limited_stretchy_vector_classVKiMM3I
};

_KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K366,
  &Kconcrete_limited_stretchy_vector_classVKiMM2I
};

_KLsimple_methodGVKe Kconcrete_limited_stretchy_vector_classVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K363,
  &Kconcrete_limited_stretchy_vector_classVKiMM1I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_24 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_23,
  &KasVKdMM50
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_11,
  (D) 5,
  &KLstretchy_byte_character_vector_representationGVKi
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_24 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_23,
  (D) 5,
  &K352
};

_KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representation_typeVKeRD_dylanRD_1,
  &Kstretchy_representation_typeVKeMM1
};

_KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcollection_fillVKeRD_dylanRD_1,
  &Kcollection_fillVKeMM2
};

_KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_vector_element_setterVKeRD_dylanRD_1,
  &Kstretchy_vector_element_setterVKeMM1
};

_KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_vector_elementVKeRD_dylanRD_1,
  &Kstretchy_vector_elementVKeMM1
};

_KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM2 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K361,
  &Ktrusted_size_setterVKiMM2I
};

_KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM3 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K359,
  &Ktrusted_size_setterVKiMM3I
};

_KLsimple_copy_down_methodGVKi Ktrusted_size_setterVKiMM4 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K357,
  &Ktrusted_size_setterVKiMM4I
};

_KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kstretchy_representation_typeVKeMM3
};

_KLmethod_domainGVKe Kstretchy_representation_typeVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_representation_typeVKeRD_dylanRD_0,
  &Kstretchy_representation_typeVKeMM2
};

_KLsimple_methodGVKe Kstretchy_representation_typeVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K355,
  &Kstretchy_representation_typeVKeMM3I
};

_KLsimple_methodGVKe Kstretchy_representation_typeVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K353,
  &Kstretchy_representation_typeVKeMM2I
};

_KLsimple_methodGVKe Kstretchy_representation_typeVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K350,
  &Kstretchy_representation_typeVKeMM1I
};

_KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kcollection_fillVKeMM4
};

_KLmethod_domainGVKe Kcollection_fillVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcollection_fillVKeRD_dylanRD_0,
  &Kcollection_fillVKeMM3
};

_KLsimple_methodGVKe Kcollection_fillVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K349,
  &Kcollection_fillVKeMM4I
};

_KLsimple_methodGVKe Kcollection_fillVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K348,
  &Kcollection_fillVKeMM3I
};

_KLsimple_methodGVKe Kcollection_fillVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K347,
  &Kcollection_fillVKeMM2I
};

_KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kstretchy_vector_element_setterVKeMM3
};

_KLmethod_domainGVKe Kstretchy_vector_element_setterVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_vector_element_setterVKeRD_dylanRD_0,
  &Kstretchy_vector_element_setterVKeMM2
};

_KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K345,
  &Kstretchy_vector_element_setterVKeMM3I
};

_KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K343,
  &Kstretchy_vector_element_setterVKeMM2I
};

_KLsimple_methodGVKe Kstretchy_vector_element_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K341,
  &Kstretchy_vector_element_setterVKeMM1I
};

_KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kstretchy_vector_elementVKeMM3
};

_KLmethod_domainGVKe Kstretchy_vector_elementVKeRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kstretchy_vector_elementVKeRD_dylanRD_0,
  &Kstretchy_vector_elementVKeMM2
};

_KLsimple_methodGVKe Kstretchy_vector_elementVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K339,
  &Kstretchy_vector_elementVKeMM3I
};

_KLsimple_methodGVKe Kstretchy_vector_elementVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K336,
  &Kstretchy_vector_elementVKeMM2I
};

_KLsimple_methodGVKe Kstretchy_vector_elementVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K334,
  &Kstretchy_vector_elementVKeMM1I
};

_KLkeyword_methodGVKe KinitializeVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K331,
  &key_mep_5,
  &KinitializeVKdMM3I,
  &K332
};

_KLkeyword_methodGVKe KinitializeVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K327,
  &key_mep_5,
  &KinitializeVKdMM4I,
  &K328
};

_KLkeyword_methodGVKe KinitializeVKdMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K323,
  &key_mep_6,
  &KinitializeVKdMM5I,
  &K324
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_6,
  (D) 5,
  &KLstretchy_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_7,
  (D) 5,
  &KLstretchy_element_type_vector_representationGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_8,
  (D) 5,
  &KLstretchy_byte_vectorGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_10 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_9,
  (D) 5,
  &KLstretchy_byte_vector_representationGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_11 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_10,
  (D) 5,
  &KLstretchy_byte_character_vectorGVKe
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_19 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_18,
  (D) 5,
  &K264
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_20 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_19,
  (D) 5,
  &K320
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_21 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_20,
  (D) 5,
  &K284
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_22 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_21,
  (D) 5,
  &K319
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_23 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_22,
  (D) 5,
  &K301
};

_KLsimple_methodGVKe KasVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K317,
  &KasVKdMM2I
};

_KLsimple_methodGVKe KasVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K315,
  &KasVKdMM3I
};

_KLsimple_methodGVKe KasVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K308,
  &KasVKdMM4I
};

_KLsimple_methodGVKe KasVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K306,
  &KasVKdMM5I
};

_KLsimple_methodGVKe KasVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K304,
  &KasVKdMM6I
};

_KLsimple_methodGVKe KasVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K302,
  &KasVKdMM7I
};

_KLsimple_methodGVKe KasVKdMM50 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K285,
  &KasVKdMM50I
};

_KLsimple_methodGVKe KasVKdMM51 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K265,
  &KasVKdMM51I
};

_KLsimple_methodGVKe KasVKdMM52 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K261,
  &KasVKdMM52I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_15,
  &KasVKdMM2
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_16,
  &KasVKdMM3
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_17,
  &KasVKdMM52
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_19 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_18,
  &KasVKdMM4
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_19,
  &KasVKdMM5
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_21 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_20,
  &KasVKdMM51
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_22 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_21,
  &KasVKdMM6
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_23 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_22,
  &KasVKdMM7
};

static _KLsignatureAvaluesGVKi K261 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K262,
  &K263
};

static _KLsimple_object_vectorGVKd_2 K262 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K264,
  &KLstretchy_element_type_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K263 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_element_type_vectorGVKe
};

static _KLsingletonGVKd K264 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_element_type_vectorGVKe
};

static _KLsignatureAvaluesGVKi K265 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K266,
  &K267
};

static _KLsimple_object_vectorGVKd_2 K266 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K284,
  &KLstretchy_byte_vectorGVKi
};

static _KLsimple_object_vectorGVKd_1 K267 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_byte_vectorGVKi
};

_KLclassGVKd KLstretchy_byte_vectorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K283,
  &K270,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_byte_vectorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K270,
  (D) 4609,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K270 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433733,
  &KLstretchy_byte_vectorGVKi,
  &KLstretchy_byte_vectorGVKiW,
  &KPfalseVKi,
  &K271,
  (D) 6721,
  &KLstretchy_byte_vectorGZ32ZconstructorVKiMM0,
  &K274,
  &K275,
  (D) 53,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K271,
  &K271,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K271 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_representationVKeHLstretchy_byte_vectorG
};

_KLkeyword_methodGVKe KLstretchy_byte_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K282,
  &key_mep_2,
  &KLstretchy_byte_vectorGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K274 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_stretchy_vectorGVKe
};

static _KLsimple_object_vectorGVKd_14 K275 = {
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
  &KLstretchy_byte_vectorGVKi
};

_KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_byte_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF280,
  &KLstretchy_byte_vectorGVKi,
  &KPfalseVKi,
  &Kstretchy_representationVKe,
  &Kstretchy_representation_setterVKe,
  &KLstretchy_byte_vector_representationGVKi
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

static _KLlambdaGVKe Kslot_initializerF280 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K281,
  &Kslot_initializerF280I
};

static _KLsignatureGVKe K281 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K282 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K267
};

static _KLbyte_stringGVKd_22 K283 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<stretchy-byte-vector>"
};

static _KLsingletonGVKd K284 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_byte_vectorGVKi
};

static _KLsignatureAvaluesGVKi K285 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K286,
  &K287
};

static _KLsimple_object_vectorGVKd_2 K286 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K301,
  &KLstretchy_byte_character_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K287 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_byte_character_vectorGVKe
};

_KLclassGVKd KLstretchy_byte_character_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K300,
  &K290,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstretchy_byte_character_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K290,
  (D) 4609,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K290 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433733,
  &KLstretchy_byte_character_vectorGVKe,
  &KLstretchy_byte_character_vectorGVKeW,
  &KPfalseVKi,
  &K291,
  (D) 6705,
  &KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0,
  &K274,
  &K294,
  (D) 53,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K291,
  &K291,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K291 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_representationVKeHLstretchy_byte_character_vectorG
};

_KLkeyword_methodGVKe KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K299,
  &key_mep_2,
  &KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_14 K294 = {
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
  &KLstretchy_byte_character_vectorGVKe
};

_KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_byte_character_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF298,
  &KLstretchy_byte_character_vectorGVKe,
  &KPfalseVKi,
  &Kstretchy_representationVKe,
  &Kstretchy_representation_setterVKe,
  &KLstretchy_byte_character_vector_representationGVKi
};

static _KLlambdaGVKe Kslot_initializerF298 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K281,
  &Kslot_initializerF298I
};

static _KLkeyword_signatureAvaluesGVKi K299 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K287
};

static _KLbyte_stringGVKd_32 K300 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "<stretchy-byte-character-vector>"
};

static _KLsingletonGVKd K301 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_byte_character_vectorGVKe
};

static _KLsignatureAvaluesGVKi K302 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K303,
  &K287
};

static _KLsimple_object_vectorGVKd_2 K303 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K301,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K304 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K305,
  &K287
};

static _KLsimple_object_vectorGVKd_2 K305 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K301,
  &KLarrayGVKd
};

static _KLsignatureAvaluesGVKi K306 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K307,
  &K267
};

static _KLsimple_object_vectorGVKd_2 K307 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K284,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K308 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K309,
  &K267
};

static _KLsimple_object_vectorGVKd_2 K309 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K284,
  &KLarrayGVKd
};

_KLinstance_slot_descriptorGVKe Kstretchy_representationVKeHLstretchy_element_type_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF314,
  &KLstretchy_element_type_vectorGVKe,
  &KPfalseVKi,
  &Kstretchy_representationVKe,
  &Kstretchy_representation_setterVKe,
  &KLstretchy_element_type_vector_representationGVKi
};

static _KLlambdaGVKe Kslot_initializerF314 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K281,
  &Kslot_initializerF314I
};

static _KLsignatureAvaluesGVKi K315 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K316,
  &K263
};

static _KLsimple_object_vectorGVKd_2 K316 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K264,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K317 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K318,
  &K263
};

static _KLsimple_object_vectorGVKd_2 K318 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K264,
  &KLarrayGVKd
};

static _KLsingletonGVKd K319 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_byte_vector_representationGVKi
};

static _KLsingletonGVKd K320 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_element_type_vector_representationGVKi
};

static _KLbyte_stringGVKd_34 K321 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "number >= 0 expected instead of %="
};

static _KLbyte_stringGVKd_21 K322 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "capacity %= < size %="
};

static _KLkeyword_signatureGVKe K323 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K263,
  &K325,
  &K326
};

static _KLsimple_object_vectorGVKd_8 K324 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJsize_,
  (D) 1,
  &KJcapacity_,
  &KPunboundVKi,
  &KJelement_type_,
  &KPfalseVKi,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K325 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  &KJcapacity_,
  &KJelement_type_,
  &KJfill_
};

static _KLsimple_object_vectorGVKd_4 K326 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLtypeGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureGVKe K327 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K267,
  &K329,
  &K330
};

static _KLsimple_object_vectorGVKd_6 K328 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJsize_,
  (D) 1,
  &KJcapacity_,
  &KPunboundVKi,
  &KJfill_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_3 K329 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJsize_,
  &KJcapacity_,
  &KJfill_
};

static _KLsimple_object_vectorGVKd_3 K330 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLbyteGVKe
};

static _KLkeyword_signatureGVKe K331 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K287,
  &K329,
  &K333
};

static _KLsimple_object_vectorGVKd_6 K332 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJsize_,
  (D) 1,
  &KJcapacity_,
  &KPunboundVKi,
  &KJfill_,
  C(' ')
};

static _KLsimple_object_vectorGVKd_3 K333 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLbyte_characterGVKe
};

static _KLsignatureAvaluesGVKi K334 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K335,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K335 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K336 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K337,
  &K338
};

static _KLsimple_object_vectorGVKd_2 K337 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K338 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyteGVKe
};

static _KLsignatureGVKe K339 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K340
};

static _KLsimple_object_vectorGVKd_2 K340 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_element_type_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K341 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K342,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K342 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_characterGVKe,
  &KLstretchy_byte_character_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K343 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K344,
  &K338
};

static _KLsimple_object_vectorGVKd_3 K344 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyteGVKe,
  &KLstretchy_byte_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLsignatureGVKe K345 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K346
};

static _KLsimple_object_vectorGVKd_3 K346 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLstretchy_element_type_vector_representationGVKi,
  &KLintegerGVKd
};

static _KLsignatureGVKe K347 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K287
};

static _KLsignatureGVKe K348 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K267
};

static _KLsignatureGVKe K349 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K263
};

static _KLsignatureAvaluesGVKi K350 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K287,
  &K351
};

static _KLsimple_object_vectorGVKd_1 K351 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K352
};

static _KLsingletonGVKd K352 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstretchy_byte_character_vector_representationGVKi
};

static _KLsignatureAvaluesGVKi K353 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K267,
  &K354
};

static _KLsimple_object_vectorGVKd_1 K354 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K319
};

static _KLsignatureAvaluesGVKi K355 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K263,
  &K356
};

static _KLsimple_object_vectorGVKd_1 K356 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K320
};

static _KLsignatureAvaluesGVKi K357 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K358,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K358 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLstretchy_element_type_vectorGVKe
};

static _KLsignatureAvaluesGVKi K359 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K360,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K360 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLstretchy_byte_vectorGVKi
};

static _KLsignatureAvaluesGVKi K361 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K362,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K362 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLstretchy_byte_character_vectorGVKe
};

static _KLsignatureAvaluesGVKi K363 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K364,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K364 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K365
};

static _KLsingletonGVKd K365 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_characterGVKe
};

static _KLsignatureAvaluesGVKi K366 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K367 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Llimited_integerG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLimplementation_classGVKe K368 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &KLstretchy_element_type_vectorGVKe,
  &KLstretchy_element_type_vectorGVKeW,
  &KPfalseVKi,
  &K369,
  (D) 6737,
  &KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0,
  &K371,
  &K372,
  (D) 57,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K373,
  &K369,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K369 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kelement_typeVKeHLlimited_collectionG,
  &Kstretchy_representationVKeHLstretchy_element_type_vectorG
};

_KLkeyword_methodGVKe KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K374,
  &key_mep_2,
  &KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0I,
  &K375
};

static _KLsimple_object_vectorGVKd_2 K371 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_stretchy_vectorGVKe,
  &KLlimited_collectionGVKe
};

static _KLsimple_object_vectorGVKd_15 K372 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 61,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLlimited_collectionGVKe,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLvectorGVKd,
  &KLstretchy_collectionGVKd,
  &KLstretchy_sequenceGVKe,
  &KLstretchy_vectorGVKd,
  &KLlimited_stretchy_vectorGVKe,
  &KLstretchy_element_type_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K373 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_representationVKeHLstretchy_element_type_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K374 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K376,
  &KDsignature_LobjectG_typesVKi,
  &K263
};

static _KLsimple_object_vectorGVKd_2 K375 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJelement_type_,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K376 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJelement_type_
};

static _KLbyte_stringGVKd_30 K377 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "<stretchy-element-type-vector>"
};

static _KLsignatureAvaluesGVKi K378 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K379,
  &K263
};

static _KLsimple_object_vectorGVKd_2 K379 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLstretchy_element_type_vectorGVKe
};

static _KLsignatureAvaluesGVKi K380 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K381,
  &K267
};

static _KLsimple_object_vectorGVKd_2 K381 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLstretchy_byte_vectorGVKi
};

static _KLsignatureAvaluesGVKi K382 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K383,
  &K287
};

static _KLsimple_object_vectorGVKd_2 K383 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLstretchy_byte_character_vectorGVKe
};

static _KLunionGVKe K384 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K385,
  &KLintegerGVKd
};

static _KLsingletonGVKd K385 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K386 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K388,
  &K389,
  &K390,
  &K287
};

static _KLsimple_object_vectorGVKd_4 K387 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K388 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLbyte_characterGVKe
};

static _KLsimple_object_vectorGVKd_2 K389 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_2 K390 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &K384
};

static _KLkeyword_signatureAvaluesGVKi K391 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K392,
  &K389,
  &K390,
  &K267
};

static _KLsimple_object_vectorGVKd_2 K392 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_vectorGVKi,
  &KLbyteGVKe
};

static _KLkeyword_signatureAvaluesGVKi K393 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K394,
  &K389,
  &K390,
  &K263
};

static _KLsimple_object_vectorGVKd_2 K394 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_element_type_vectorGVKe,
  &KLobjectGVKd
};

static _KLsignatureGVKe K395 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K396
};

static _KLsimple_object_vectorGVKd_3 K396 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLstretchy_element_type_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K397 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K398,
  &K338
};

static _KLsimple_object_vectorGVKd_3 K398 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyteGVKe,
  &KLstretchy_byte_vectorGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K399 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K400,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K400 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_characterGVKe,
  &KLstretchy_byte_character_vectorGVKe,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kstretchy_element_type_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K405,
  &Kstretchy_element_type_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kstretchy_element_type_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K395,
  &Kstretchy_element_type_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K405 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K406
};

static _KLsimple_object_vectorGVKd_2 K406 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_element_type_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K407 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K263,
  &K408
};

static _KLsimple_object_vectorGVKd_8 K408 = {
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

_KLsimple_methodGVKe Kstretchy_byte_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K413,
  &Kstretchy_byte_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kstretchy_byte_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K397,
  &Kstretchy_byte_vector_current_element_setterVKiI
};

static _KLsignatureAvaluesGVKi K413 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K414,
  &K338
};

static _KLsimple_object_vectorGVKd_2 K414 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_vectorGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K415 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K267,
  &K408
};

_KLsimple_methodGVKe Kstretchy_byte_character_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K420,
  &Kstretchy_byte_character_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kstretchy_byte_character_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K399,
  &Kstretchy_byte_character_vector_current_element_setterVKiI
};

static _KLsignatureAvaluesGVKi K420 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K421,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K421 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K422 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K287,
  &K408
};

static _KLkeyword_signatureAvaluesGVKi K423 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K394,
  &K389,
  &KDsignature_LobjectG_typesVKi,
  &K263
};

static _KLsimple_object_vectorGVKd_4 K424 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &Kunsupplied_objectVKi
};

static _KLkeyword_signatureAvaluesGVKi K425 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K392,
  &K389,
  &KDsignature_LobjectG_typesVKi,
  &K267
};

static _KLkeyword_signatureAvaluesGVKi K426 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K388,
  &K389,
  &KDsignature_LobjectG_typesVKi,
  &K287
};

static _KLsignatureAvaluesGVKi K427 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K388,
  &K287
};

static _KLsignatureAvaluesGVKi K428 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K392,
  &K267
};

static _KLsignatureAvaluesGVKi K429 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K394,
  &K263
};

static _KLkeyword_signatureGVKe K430 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K406,
  &K432,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K431 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K432 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLkeyword_signatureAvaluesGVKi K433 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K414,
  &K432,
  &KDsignature_LobjectG_typesVKi,
  &K338
};

static _KLkeyword_signatureAvaluesGVKi K434 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K421,
  &K432,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K435 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K436 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K267,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K437 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K287,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K438 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K263,
  &KDsignature_LtypeG_typesVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_element_type_vector_representationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLstretchy_element_type_vector_representationGVKi,
  &KJcapacity_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K440 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K263,
  &KDsignature_LintegerG_typesVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_byte_vector_representationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLstretchy_byte_vector_representationGVKi,
  &KJcapacity_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K442 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K267,
  &KDsignature_LintegerG_typesVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLstretchy_byte_character_vector_representationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLstretchy_byte_character_vector_representationGVKi,
  &KJcapacity_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K444 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K287,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K445 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K263,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K446 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K267,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K447 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K287,
  &KDsignature_LbooleanG_typesVKi
};

static _KLimplementation_classGVKe K448 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLstretchy_element_type_vector_representationGVKi,
  &KLstretchy_element_type_vector_representationGVKiW,
  &Kstretchy_element_type_vector_elementVKiHLstretchy_element_type_vector_representationG,
  &K450,
  (D) 6745,
  &KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0,
  &K452,
  &K453,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K454,
  &K455,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kstretchy_element_type_vector_elementVKiHLstretchy_element_type_vector_representationG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLstretchy_element_type_vector_representationGVKi,
  &KJfill_,
  &Kstretchy_element_type_vector_elementVKi,
  &Kstretchy_element_type_vector_element_setterVKi,
  &KLobjectGVKd,
  &KsizeVKdHLstretchy_element_type_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K450 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &KsizeVKdHLstretchy_element_type_vector_representationG
};

_KLkeyword_methodGVKe KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K456,
  &key_mep_2,
  &KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0I,
  &K457
};

static _KLsimple_object_vectorGVKd_1 K452 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_stretchy_vector_representationGVKe
};

static _KLsimple_object_vectorGVKd_6 K453 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlimited_stretchy_vector_representationGVKe,
  &KLstretchy_element_type_vector_representationGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K454 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_element_type_vector_elementVKiHLstretchy_element_type_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K455 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &Kstretchy_element_type_vector_elementVKiHLstretchy_element_type_vector_representationG
};

static _KLkeyword_signatureAvaluesGVKi K456 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K458,
  &KDsignature_LobjectG_typesVKi,
  &K459
};

static _KLsimple_object_vectorGVKd_4 K457 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  &KPunboundVKi,
  &KJcapacity_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K458 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJcapacity_
};

static _KLsimple_object_vectorGVKd_1 K459 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_element_type_vector_representationGVKi
};

_KLsealed_generic_functionGVKe Kstretchy_element_type_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K467,
  &K466,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstretchy_element_type_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K464,
  &K463,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kstretchy_element_type_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kstretchy_element_type_vector_elementVKiHLstretchy_element_type_vector_representationG
};

static _KLpairGVKd K463 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_element_type_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_43 K464 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "stretchy-element-type-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kstretchy_element_type_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kstretchy_element_type_vector_elementVKiHLstretchy_element_type_vector_representationG
};

static _KLpairGVKd K466 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_element_type_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_36 K467 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "stretchy-element-type-vector-element"
};

static _KLbyte_stringGVKd_45 K468 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "<stretchy-element-type-vector-representation>"
};

static _KLbyte_stringGVKd_23 K469 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLimplementation_classGVKe K470 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLstretchy_byte_vector_representationGVKi,
  &KLstretchy_byte_vector_representationGVKiW,
  &Kstretchy_byte_vector_elementVKiHLstretchy_byte_vector_representationG,
  &K472,
  (D) 6729,
  &KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0,
  &K452,
  &K474,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K475,
  &K476,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kstretchy_byte_vector_elementVKiHLstretchy_byte_vector_representationG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLstretchy_byte_vector_representationGVKi,
  &KJfill_,
  &Kstretchy_byte_vector_elementVKi,
  &Kstretchy_byte_vector_element_setterVKi,
  &KLbyteGVKe,
  &KsizeVKdHLstretchy_byte_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K472 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &KsizeVKdHLstretchy_byte_vector_representationG
};

_KLkeyword_methodGVKe KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K477,
  &key_mep_2,
  &KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0I,
  &K457
};

static _KLsimple_object_vectorGVKd_6 K474 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlimited_stretchy_vector_representationGVKe,
  &KLstretchy_byte_vector_representationGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K475 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_byte_vector_elementVKiHLstretchy_byte_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K476 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &Kstretchy_byte_vector_elementVKiHLstretchy_byte_vector_representationG
};

static _KLkeyword_signatureAvaluesGVKi K477 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K458,
  &KDsignature_LobjectG_typesVKi,
  &K478
};

static _KLsimple_object_vectorGVKd_1 K478 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_byte_vector_representationGVKi
};

_KLsealed_generic_functionGVKe Kstretchy_byte_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K486,
  &K485,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstretchy_byte_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K483,
  &K482,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kstretchy_byte_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kstretchy_byte_vector_elementVKiHLstretchy_byte_vector_representationG
};

static _KLpairGVKd K482 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_byte_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_35 K483 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "stretchy-byte-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kstretchy_byte_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kstretchy_byte_vector_elementVKiHLstretchy_byte_vector_representationG
};

static _KLpairGVKd K485 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_byte_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K486 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "stretchy-byte-vector-element"
};

static _KLbyte_stringGVKd_37 K487 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "<stretchy-byte-vector-representation>"
};

static _KLimplementation_classGVKe K488 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLstretchy_byte_character_vector_representationGVKi,
  &KLstretchy_byte_character_vector_representationGVKiW,
  &Kstretchy_byte_character_vector_elementVKiHLstretchy_byte_character_vector_representationG,
  &K490,
  (D) 6713,
  &KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0,
  &K452,
  &K492,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K493,
  &K494,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kstretchy_byte_character_vector_elementVKiHLstretchy_byte_character_vector_representationG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  C(' '),
  &KLstretchy_byte_character_vector_representationGVKi,
  &KJfill_,
  &Kstretchy_byte_character_vector_elementVKi,
  &Kstretchy_byte_character_vector_element_setterVKi,
  &KLbyte_characterGVKe,
  &KsizeVKdHLstretchy_byte_character_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K490 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &KsizeVKdHLstretchy_byte_character_vector_representationG
};

_KLkeyword_methodGVKe KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K495,
  &key_mep_2,
  &KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0I,
  &K457
};

static _KLsimple_object_vectorGVKd_6 K492 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLlimited_stretchy_vector_representationGVKe,
  &KLstretchy_byte_character_vector_representationGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K493 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstretchy_byte_character_vector_elementVKiHLstretchy_byte_character_vector_representationG
};

static _KLsimple_object_vectorGVKd_2 K494 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KPsizeVKiHLlimited_stretchy_vector_representationG,
  &Kstretchy_byte_character_vector_elementVKiHLstretchy_byte_character_vector_representationG
};

static _KLkeyword_signatureAvaluesGVKi K495 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K458,
  &KDsignature_LobjectG_typesVKi,
  &K496
};

static _KLsimple_object_vectorGVKd_1 K496 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstretchy_byte_character_vector_representationGVKi
};

_KLsealed_generic_functionGVKe Kstretchy_byte_character_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K504,
  &K503,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kstretchy_byte_character_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K501,
  &K500,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kstretchy_byte_character_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kstretchy_byte_character_vector_elementVKiHLstretchy_byte_character_vector_representationG
};

static _KLpairGVKd K500 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_byte_character_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_45 K501 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "stretchy-byte-character-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kstretchy_byte_character_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kstretchy_byte_character_vector_elementVKiHLstretchy_byte_character_vector_representationG
};

static _KLpairGVKd K503 = {
  &KLpairGVKdW /* wrapper */,
  &Kstretchy_byte_character_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_38 K504 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "stretchy-byte-character-vector-element"
};

static _KLbyte_stringGVKd_47 K505 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "<stretchy-byte-character-vector-representation>"
};

/* Code */

D KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Psize_, D Uunique_size_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T12 = primitive_idQ(Uunique_Psize_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T12 != &KPfalseVKi) {
    T13.vector_element_[0] = &KJsize_;
    T14 = KerrorVKdMM1I(&K469, &T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T5 = T14;
    Uunique_PsizeF6 = T5;
  } else {
    Uunique_PsizeF6 = Uunique_Psize_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T7 = Kallocate_instanceVKeI(&KLstretchy_byte_character_vector_representationGVKi, init_args_);
  object_ = T7;
  Uunique_PsizeF9 = Uunique_PsizeF6;
  SLOT_VALUE_SETTER(Uunique_PsizeF9, object_, 0);
  Uunique_sizeF10 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF10, object_, 1);
  T11_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T11_0);
}

D KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Psize_, D Uunique_size_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T12 = primitive_idQ(Uunique_Psize_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T12 != &KPfalseVKi) {
    T13.vector_element_[0] = &KJsize_;
    T14 = KerrorVKdMM1I(&K469, &T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T5 = T14;
    Uunique_PsizeF6 = T5;
  } else {
    Uunique_PsizeF6 = Uunique_Psize_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = Kallocate_instanceVKeI(&KLstretchy_byte_vector_representationGVKi, init_args_);
  object_ = T7;
  Uunique_PsizeF9 = Uunique_PsizeF6;
  SLOT_VALUE_SETTER(Uunique_PsizeF9, object_, 0);
  Uunique_sizeF10 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF10, object_, 1);
  T11_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T11_0);
}

D KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_Psize_, D Uunique_size_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T12 = primitive_idQ(Uunique_Psize_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  if (T12 != &KPfalseVKi) {
    T13.vector_element_[0] = &KJsize_;
    T14 = KerrorVKdMM1I(&K469, &T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T5 = T14;
    Uunique_PsizeF6 = T5;
  } else {
    Uunique_PsizeF6 = Uunique_Psize_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T7 = Kallocate_instanceVKeI(&KLstretchy_element_type_vector_representationGVKi, init_args_);
  object_ = T7;
  Uunique_PsizeF9 = Uunique_PsizeF6;
  SLOT_VALUE_SETTER(Uunique_PsizeF9, object_, 0);
  Uunique_sizeF10 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF10, object_, 1);
  T11_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T11_0);
}

D KemptyQVKdMM5I (D vector_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = SLOT_VALUE_INITD(vector_, 0);
  T2 = SLOT_VALUE_INITD(T6, 0);
  T3 = primitive_cast_integer_as_raw(T2);
  T4 = primitive_machine_word_equalQ(T3,1);
  T5_0 = T4;
  MV_SET_COUNT(1);
  return(T5_0);
}

D KemptyQVKdMM6I (D vector_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = SLOT_VALUE_INITD(vector_, 0);
  T2 = SLOT_VALUE_INITD(T6, 0);
  T3 = primitive_cast_integer_as_raw(T2);
  T4 = primitive_machine_word_equalQ(T3,1);
  T5_0 = T4;
  MV_SET_COUNT(1);
  return(T5_0);
}

D KemptyQVKdMM7I (D vector_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T6 = SLOT_VALUE_INITD(vector_, 1);
  T2 = SLOT_VALUE_INITD(T6, 0);
  T3 = primitive_cast_integer_as_raw(T2);
  T4 = primitive_machine_word_equalQ(T3,1);
  T5_0 = T4;
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksize_setterVKdMM2I (D new_size_, D vector_) {
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T8 = primitive_cast_integer_as_raw(new_size_);
  T9 = primitive_machine_word_less_thanQ(T8,1);
  if (T9 != &KPfalseVKi) {
    T6.vector_element_[0] = new_size_;
    T4 = KlistVKdI(&T6);
    T7.vector_element_[0] = &KJformat_string_;
    T7.vector_element_[1] = &K321;
    T7.vector_element_[2] = &KJformat_arguments_;
    T7.vector_element_[3] = T4;
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T7);
    KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  }
  Ktrusted_size_setterVKiMM2I(new_size_, vector_);
  T3_0 = new_size_;
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksize_setterVKdMM3I (D new_size_, D vector_) {
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T8 = primitive_cast_integer_as_raw(new_size_);
  T9 = primitive_machine_word_less_thanQ(T8,1);
  if (T9 != &KPfalseVKi) {
    T6.vector_element_[0] = new_size_;
    T4 = KlistVKdI(&T6);
    T7.vector_element_[0] = &KJformat_string_;
    T7.vector_element_[1] = &K321;
    T7.vector_element_[2] = &KJformat_arguments_;
    T7.vector_element_[3] = T4;
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T7);
    KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  }
  Ktrusted_size_setterVKiMM3I(new_size_, vector_);
  T3_0 = new_size_;
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksize_setterVKdMM4I (D new_size_, D vector_) {
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T8 = primitive_cast_integer_as_raw(new_size_);
  T9 = primitive_machine_word_less_thanQ(T8,1);
  if (T9 != &KPfalseVKi) {
    T6.vector_element_[0] = new_size_;
    T4 = KlistVKdI(&T6);
    T7.vector_element_[0] = &KJformat_string_;
    T7.vector_element_[1] = &K321;
    T7.vector_element_[2] = &KJformat_arguments_;
    T7.vector_element_[3] = T4;
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T7);
    KerrorVKdMM0I(T5, &KPempty_vectorVKi);
  }
  Ktrusted_size_setterVKiMM4I(new_size_, vector_);
  T3_0 = new_size_;
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsizeVKdMM23I (D vector_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsizeVKdMM25I (D vector_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsizeVKdMM27I (D vector_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T2 = SLOT_VALUE_INITD(vector_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktype_for_copyVKdMM10I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2_0 = &KLstretchy_byte_character_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_copyVKdMM11I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2_0 = &KLstretchy_byte_vectorGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktype_for_copyVKdMM12I (D vector_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:68
  T3 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:68
  CONGRUENT_CALL_PROLOG(&Klimited_stretchy_vectorVKe, 1);
  T2_0 = CONGRUENT_CALL1(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:66
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM16I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2_0 = &KLbyte_characterGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM17I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2_0 = &KLbyteGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM20I (D collection_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DBCHR T14;
  D T15;
  D T16_0;
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T20;
  D T21_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T9 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T11 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T13 = primitive_machine_word_unsigned_less_thanQ(T11,T12);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T14 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T9, 2, T11);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T15 = primitive_raw_as_byte_character(T14);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T16_0 = T15;
    T8_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T17 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T5_0 = Kelement_range_errorVKeI(collection_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T20 = primitive_instanceQ(default_,&KLbyte_characterGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      if (T20 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        T19.vector_element_[0] = &KJvalue_;
        T19.vector_element_[1] = default_;
        T19.vector_element_[2] = &KJtype_;
        T19.vector_element_[3] = &KLbyte_characterGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T18 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T19);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T18, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T21_0 = T6_0;
      T7_0 = T21_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM21I (D collection_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DBYTE T14;
  D T15_0;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22;
  D T23_0;
  D T24_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T9 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T11 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T13 = primitive_machine_word_unsigned_less_thanQ(T11,T12);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T14 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T9, 2, T11);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T16 = primitive_machine_word_shift_left_signal_overflow(T14,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T17 = primitive_machine_word_logior(T16,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T18 = primitive_cast_raw_as_integer(T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T15_0 = T18;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T23_0 = T15_0;
    T8_0 = T23_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T19 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T5_0 = Kelement_range_errorVKeI(collection_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T22 = primitive_instanceQ(default_,&KLbyteGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      if (T22 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        T21.vector_element_[0] = &KJvalue_;
        T21.vector_element_[1] = default_;
        T21.vector_element_[2] = &KJtype_;
        T21.vector_element_[3] = &KLbyteGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T20 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T21);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T20, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T24_0 = T6_0;
      T7_0 = T24_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM22I (D collection_, D index_, D Urest_, D default_) {
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
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T9 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T10 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T11 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T13 = primitive_machine_word_unsigned_less_thanQ(T11,T12);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T14 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 2, T11);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T5_0 = Kelement_range_errorVKeI(collection_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T17 = SLOT_VALUE_INITD(collection_, 0);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T20 = primitive_instanceQ(default_,T17);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      if (T20 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        T19.vector_element_[0] = &KJvalue_;
        T19.vector_element_[1] = default_;
        T19.vector_element_[2] = &KJtype_;
        T19.vector_element_[3] = T17;
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T18 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T19);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T18, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM18I (D collection_, D index_, D Urest_, D default_) {
  D T5;
  DBCHR T6;
  D T7;
  D T8_0;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T5, 2, T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T7 = primitive_raw_as_byte_character(T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM19I (D collection_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6;
  DBYTE T7;
  D T8_0;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T6, 2, T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T10 = primitive_machine_word_shift_left_signal_overflow(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T8_0 = T12;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kelement_no_bounds_checkVKeMM20I (D collection_, D index_, D Urest_, D default_) {
  D T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T6 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 2, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kforward_iteration_protocolVKdMM18I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T2 = SLOT_VALUE_INITD(sequence_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4_0 = (D) 1;
  T4_1 = T3;
  T4_2 = &Ksequence_next_stateVKe;
  T4_3 = &Ksequence_finished_stateQVKe;
  T4_4 = &Ksequence_current_keyVKe;
  T4_5 = &Kstretchy_element_type_vector_current_elementVKi;
  T4_6 = &Kstretchy_element_type_vector_current_element_setterVKi;
  T4_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
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

D Kforward_iteration_protocolVKdMM17I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4_0 = (D) 1;
  T4_1 = T3;
  T4_2 = &Ksequence_next_stateVKe;
  T4_3 = &Ksequence_finished_stateQVKe;
  T4_4 = &Ksequence_current_keyVKe;
  T4_5 = &Kstretchy_byte_vector_current_elementVKi;
  T4_6 = &Kstretchy_byte_vector_current_element_setterVKi;
  T4_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
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

D Kforward_iteration_protocolVKdMM16I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4_0 = (D) 1;
  T4_1 = T3;
  T4_2 = &Ksequence_next_stateVKe;
  T4_3 = &Ksequence_finished_stateQVKe;
  T4_4 = &Ksequence_current_keyVKe;
  T4_5 = &Kstretchy_byte_character_vector_current_elementVKi;
  T4_6 = &Kstretchy_byte_character_vector_current_element_setterVKi;
  T4_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
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

D KaddXVKdMM6I (D vector_, D new_element_) {
  D T3_0;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T7 = SLOT_VALUE_INITD(vector_, 1);
  T8 = SLOT_VALUE_INITD(T7, 0);
  T9 = primitive_cast_integer_as_raw(T8);
  T10 = primitive_machine_word_add_signal_overflow(T9,4);
  T11 = primitive_cast_raw_as_integer(T10);
  Ktrusted_size_setterVKiMM4I(T11, vector_);
  T12 = SLOT_VALUE_INITD(vector_, 0);
  T6 = primitive_instanceQ(new_element_,T12);
  if (T6 == &KPfalseVKi) {
    T5.vector_element_[0] = &KJvalue_;
    T5.vector_element_[1] = new_element_;
    T5.vector_element_[2] = &KJtype_;
    T5.vector_element_[3] = T12;
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T5);
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T4, &KPempty_vectorVKi);
  }
  T13 = SLOT_VALUE_INITD(vector_, 1);
  T14 = primitive_cast_integer_as_raw(T8);
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_element_, T13, 2, T14);
  T3_0 = vector_;
  MV_SET_COUNT(1);
  return(T3_0);
}

D KaddXVKdMM5I (D vector_, D new_element_) {
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4 = SLOT_VALUE_INITD(vector_, 0);
  T5 = SLOT_VALUE_INITD(T4, 0);
  T6 = primitive_cast_integer_as_raw(T5);
  T7 = primitive_machine_word_add_signal_overflow(T6,4);
  T8 = primitive_cast_raw_as_integer(T7);
  Ktrusted_size_setterVKiMM3I(T8, vector_);
  T9 = SLOT_VALUE_INITD(vector_, 0);
  T10 = primitive_cast_integer_as_raw(T5);
  T12 = primitive_cast_integer_as_raw(new_element_);
  T11 = primitive_machine_word_shift_right(T12,2);
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T11, T9, 2, T10);
  T3_0 = vector_;
  MV_SET_COUNT(1);
  return(T3_0);
}

D KaddXVKdMM4I (D vector_, D new_element_) {
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  DSINT T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4 = SLOT_VALUE_INITD(vector_, 0);
  T5 = SLOT_VALUE_INITD(T4, 0);
  T6 = primitive_cast_integer_as_raw(T5);
  T7 = primitive_machine_word_add_signal_overflow(T6,4);
  T8 = primitive_cast_raw_as_integer(T7);
  Ktrusted_size_setterVKiMM2I(T8, vector_);
  T9 = SLOT_VALUE_INITD(vector_, 0);
  T11 = primitive_cast_integer_as_raw(T5);
  T10 = primitive_byte_character_as_raw(new_element_);
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T10, T9, 2, T11);
  T3_0 = vector_;
  MV_SET_COUNT(1);
  return(T3_0);
}

D KremoveXVKdMM4I (D vector_, D target_, D Urest_, D test_, D count_) {
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
  DBCHR T36;
  D T37;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
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
      T36 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T35, 2, src_indexF19);
      T37 = primitive_raw_as_byte_character(T36);
      T15 = primitive_machine_word_less_thanQ(1,countF18);
      if (T15 != &KPfalseVKi) {
        T11 = test_;
        T12 = CALL2(T11, T37, target_);
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
        REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T36, T35, 2, dst_indexF20);
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
          REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(32, T35, 2, i_);
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

D KremoveXVKdMM5I (D vector_, D target_, D Urest_, D test_, D count_) {
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
  D T36_0;
  DBYTE T37;
  D T38_0;
  DWORD T39;
  DWORD T40;
  D T41;
  D item_;
  DWORD T43;
  DWORD T44;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
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
      T37 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T35, 2, src_indexF19);
      T39 = primitive_machine_word_shift_left_signal_overflow(T37,2);
      T40 = primitive_machine_word_logior(T39,1);
      T41 = primitive_cast_raw_as_integer(T40);
      T38_0 = T41;
      T36_0 = T38_0;
      item_ = T36_0;
      T15 = primitive_machine_word_less_thanQ(1,countF18);
      if (T15 != &KPfalseVKi) {
        T11 = test_;
        T12 = CALL2(T11, item_, target_);
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
        T44 = primitive_cast_integer_as_raw(item_);
        T43 = primitive_machine_word_shift_right(T44,2);
        REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T43, T35, 2, dst_indexF20);
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
          REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(0, T35, 2, i_);
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

D KremoveXVKdMM6I (D vector_, D target_, D Urest_, D test_, D count_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T8 = primitive_idQ(count_,&Kunsupplied_objectVKi);
  if (T8 != &KPfalseVKi) {
    T33 = SLOT_VALUE_INITD(vector_, 1);
    T34 = SLOT_VALUE_INITD(T33, 0);
    T30 = primitive_cast_integer_as_raw(T34);
    T6 = T30;
  } else {
    T9 = count_;
    T31 = primitive_cast_integer_as_raw(T9);
    T6 = T31;
  }
  T35 = SLOT_VALUE_INITD(vector_, 1);
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

D Kbackward_iteration_protocolVKdMM11I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5 = primitive_machine_word_subtract_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T7_0 = T6;
  T7_1 = (D) -3;
  T7_2 = &Ksequence_previous_stateVKe;
  T7_3 = &Ksequence_finished_stateQVKe;
  T7_4 = &Ksequence_current_keyVKe;
  T7_5 = &Kstretchy_byte_character_vector_current_elementVKi;
  T7_6 = &Kstretchy_byte_character_vector_current_element_setterVKi;
  T7_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
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

D Kbackward_iteration_protocolVKdMM12I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5 = primitive_machine_word_subtract_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7_0 = T6;
  T7_1 = (D) -3;
  T7_2 = &Ksequence_previous_stateVKe;
  T7_3 = &Ksequence_finished_stateQVKe;
  T7_4 = &Ksequence_current_keyVKe;
  T7_5 = &Kstretchy_byte_vector_current_elementVKi;
  T7_6 = &Kstretchy_byte_vector_current_element_setterVKi;
  T7_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
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

D Kbackward_iteration_protocolVKdMM13I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T2 = SLOT_VALUE_INITD(sequence_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = primitive_machine_word_subtract_signal_overflow(T4,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T7_0 = T6;
  T7_1 = (D) -3;
  T7_2 = &Ksequence_previous_stateVKe;
  T7_3 = &Ksequence_finished_stateQVKe;
  T7_4 = &Ksequence_current_keyVKe;
  T7_5 = &Kstretchy_element_type_vector_current_elementVKi;
  T7_6 = &Kstretchy_element_type_vector_current_element_setterVKi;
  T7_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
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

D Kelement_setterVKdMM20I (D new_value_, D collection_, D index_) {
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
  DSINT T20;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = primitive_machine_word_less_thanQ(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    Kelement_range_errorVKeI(collection_, index_);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T7 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T10 = primitive_machine_word_less_thanQ(T5,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T11 = SLOT_VALUE_INITD(collection_, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T12 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T14 = primitive_machine_word_equalQ(T5,T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T15 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T16 = primitive_cast_raw_as_integer(T15);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      Ktrusted_size_setterVKiMM2I(T16, collection_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T17 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T18 = primitive_cast_raw_as_integer(T17);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      Ksize_setterVKdMM2I(T18, collection_);
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T19 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T20 = primitive_byte_character_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T20, T19, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_setterVKdMM21I (D new_value_, D collection_, D index_) {
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
  DWORD T20;
  DWORD T21;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = primitive_machine_word_less_thanQ(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    Kelement_range_errorVKeI(collection_, index_);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T10 = primitive_machine_word_less_thanQ(T5,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T11 = SLOT_VALUE_INITD(collection_, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T12 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T13 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T14 = primitive_machine_word_equalQ(T5,T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T15 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T16 = primitive_cast_raw_as_integer(T15);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      Ktrusted_size_setterVKiMM3I(T16, collection_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T17 = primitive_machine_word_add_signal_overflow(T5,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T18 = primitive_cast_raw_as_integer(T17);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      Ksize_setterVKdMM3I(T18, collection_);
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T19 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T21 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T20 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T20, T19, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_setterVKdMM22I (D new_value_, D collection_, D index_) {
  D T4_0;
  D T5;
  D T6;
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
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
  DWORD T19;
  D T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:45
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:48
  T5 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:48
  T8 = primitive_instanceQ(new_value_,T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:48
  if (T8 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:48
    T7.vector_element_[0] = &KJvalue_;
    T7.vector_element_[1] = new_value_;
    T7.vector_element_[2] = &KJtype_;
    T7.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:48
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T7);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:48
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T6, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:49
  T9 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:49
  T10 = primitive_machine_word_less_thanQ(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:49
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:49
    Kelement_range_errorVKeI(collection_, index_);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:49
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:50
  T11 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:50
  T12 = SLOT_VALUE_INITD(T11, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:51
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:51
  T14 = primitive_machine_word_less_thanQ(T9,T13);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:51
  if (T14 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:52
    T15 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:52
    T16 = primitive_machine_word_equalQ(T9,T15);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:52
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:53
      T17 = primitive_machine_word_add_signal_overflow(T9,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:53
      T18 = primitive_cast_raw_as_integer(T17);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:53
      Ktrusted_size_setterVKiMM4I(T18, collection_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:55
      T19 = primitive_machine_word_add_signal_overflow(T9,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:55
      T20 = primitive_cast_raw_as_integer(T19);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:55
      Ksize_setterVKdMM4I(T20, collection_);
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:52
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:51
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:61
  T21 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:60
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T21, 2, T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:60
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:45
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM20I (D new_value_, D collection_, D index_) {
  D T4_0;
  D T5;
  DSINT T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = primitive_byte_character_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T6, T5, 2, T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM21I (D new_value_, D collection_, D index_) {
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5 = SLOT_VALUE_INITD(collection_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T8 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T7, T5, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM22I (D new_value_, D collection_, D index_) {
  D T4_0;
  D T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = SLOT_VALUE_INITD(collection_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T5, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T4_0);
}

D KremoveVKdMM5I (D sequence_, D value_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  DWORD T8T, T8;
  D T9;
  D T10;
  DWORD T11T, T11;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D new_sequence_;
  D T17;
  D T18;
  D T19;
  D changedQ_;
  D T21;
  D countF22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  DWORD T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34_0;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  D T39;
  D T40;
  DWORD T41;
  D T42;
  D T43;
  DWORD T44;
  D T45;
  D T46;
  D T47;
  DWORD T48;
  D T49_0;
  D T50;
  D T51;
  D T52;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  primitive_type_check(count_, &K384);
  countF7 = count_;
  new_sequence_ = &KPempty_listVKi;
  changedQ_ = &KPfalseVKi;
  if (countF7 != &KPfalseVKi) {
    T52 = countF7;
    T25 = T52;
    countF22 = T25;
    T35 = SLOT_VALUE_INITD(sequence_, 1);
    T36 = SLOT_VALUE_INITD(T35, 0);
    T37 = primitive_cast_integer_as_raw(T36);
    T8T = 1;
  L0: ;
      T8 = T8T;
      T38 = primitive_machine_word_equalQ(T8,T37);
      if (T38 == &KPfalseVKi) {
        T39 = SLOT_VALUE_INITD(sequence_, 1);
        T40 = REPEATED_D_SLOT_VALUE_TAGGED(T39, 2, T8);
        T24 = countF22;
        T26 = primitive_cast_integer_as_raw(T24);
        T27 = primitive_machine_word_less_thanQ(1,T26);
        if (T27 != &KPfalseVKi) {
          T9 = CALL2(testF6, T40, value_);
          T10 = T9;
        } else {
          T10 = &KPfalseVKi;
        }
        if (T10 != &KPfalseVKi) {
          T23 = countF22;
          T28 = primitive_cast_integer_as_raw(T23);
          T29 = primitive_machine_word_subtract_signal_overflow(T28,4);
          T30 = primitive_cast_raw_as_integer(T29);
          countF22 = T30;
          changedQ_ = &KPtrueVKi;
        } else {
          T19 = new_sequence_;
          T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T40, T31, 0);
          SLOT_VALUE_SETTER(T19, T31, 1);
          new_sequence_ = T31;
        }
        T41 = primitive_machine_word_add_signal_overflow(T8,4);
        T8T = T41;
        goto L0;
      }
  } else {
    T42 = SLOT_VALUE_INITD(sequence_, 1);
    T43 = SLOT_VALUE_INITD(T42, 0);
    T44 = primitive_cast_integer_as_raw(T43);
    T11T = 1;
  L1: ;
      T11 = T11T;
      T45 = primitive_machine_word_equalQ(T11,T44);
      if (T45 == &KPfalseVKi) {
        T46 = SLOT_VALUE_INITD(sequence_, 1);
        T47 = REPEATED_D_SLOT_VALUE_TAGGED(T46, 2, T11);
        T12 = CALL2(testF6, T47, value_);
        if (T12 != &KPfalseVKi) {
          changedQ_ = &KPtrueVKi;
        } else {
          T18 = new_sequence_;
          T32 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T47, T32, 0);
          SLOT_VALUE_SETTER(T18, T32, 1);
          new_sequence_ = T32;
        }
        T48 = primitive_machine_word_add_signal_overflow(T11,4);
        T11T = T48;
        goto L1;
      }
  }
  T21 = changedQ_;
  if (T21 != &KPfalseVKi) {
    T50 = SLOT_VALUE_INITD(sequence_, 0);
    CONGRUENT_CALL_PROLOG(&Klimited_stretchy_vectorVKe, 1);
    T49_0 = CONGRUENT_CALL1(T50);
    T51 = T49_0;
    T17 = new_sequence_;
    T33 = KreverseXVKdMM2I(T17);
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T13_0 = CONGRUENT_CALL2(T51, T33);
    T34_0 = T13_0;
    T15_0 = T34_0;
  } else {
    T14_0 = sequence_;
    T15_0 = T14_0;
  }
  MV_SET_COUNT(1);
  return(T15_0);
}

D KremoveVKdMM4I (D sequence_, D value_, D Urest_, D test_, D count_) {
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
  D T37_0;
  D T38;
  DBYTE T39;
  D T40_0;
  DWORD T41;
  DWORD T42;
  D T43;
  D T44;
  DWORD T45;
  D T46;
  D T47;
  DWORD T48;
  D T49;
  D T50_0;
  D T51;
  DBYTE T52;
  D T53_0;
  DWORD T54;
  DWORD T55;
  D T56;
  D T57;
  DWORD T58;
  D T59_0;
  D T60;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  primitive_type_check(count_, &K384);
  countF7 = count_;
  new_sequence_ = &KPempty_listVKi;
  changedQ_ = &KPfalseVKi;
  if (countF7 != &KPfalseVKi) {
    T60 = countF7;
    T24 = T60;
    countF21 = T24;
    T33 = SLOT_VALUE_INITD(sequence_, 0);
    T34 = SLOT_VALUE_INITD(T33, 0);
    T35 = primitive_cast_integer_as_raw(T34);
    T8T = 1;
  L0: ;
      T8 = T8T;
      T36 = primitive_machine_word_equalQ(T8,T35);
      if (T36 == &KPfalseVKi) {
        T38 = SLOT_VALUE_INITD(sequence_, 0);
        T39 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T38, 2, T8);
        T41 = primitive_machine_word_shift_left_signal_overflow(T39,2);
        T42 = primitive_machine_word_logior(T41,1);
        T43 = primitive_cast_raw_as_integer(T42);
        T40_0 = T43;
        T37_0 = T40_0;
        T44 = T37_0;
        T23 = countF21;
        T25 = primitive_cast_integer_as_raw(T23);
        T26 = primitive_machine_word_less_thanQ(1,T25);
        if (T26 != &KPfalseVKi) {
          T9 = CALL2(testF6, T44, value_);
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
          SLOT_VALUE_SETTER(T44, T30, 0);
          SLOT_VALUE_SETTER(T18, T30, 1);
          new_sequence_ = T30;
        }
        T45 = primitive_machine_word_add_signal_overflow(T8,4);
        T8T = T45;
        goto L0;
      }
  } else {
    T46 = SLOT_VALUE_INITD(sequence_, 0);
    T47 = SLOT_VALUE_INITD(T46, 0);
    T48 = primitive_cast_integer_as_raw(T47);
    T11T = 1;
  L1: ;
      T11 = T11T;
      T49 = primitive_machine_word_equalQ(T11,T48);
      if (T49 == &KPfalseVKi) {
        T51 = SLOT_VALUE_INITD(sequence_, 0);
        T52 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T51, 2, T11);
        T54 = primitive_machine_word_shift_left_signal_overflow(T52,2);
        T55 = primitive_machine_word_logior(T54,1);
        T56 = primitive_cast_raw_as_integer(T55);
        T53_0 = T56;
        T50_0 = T53_0;
        T57 = T50_0;
        T12 = CALL2(testF6, T57, value_);
        if (T12 != &KPfalseVKi) {
          changedQ_ = &KPtrueVKi;
        } else {
          T17 = new_sequence_;
          T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T57, T31, 0);
          SLOT_VALUE_SETTER(T17, T31, 1);
          new_sequence_ = T31;
        }
        T58 = primitive_machine_word_add_signal_overflow(T11,4);
        T11T = T58;
        goto L1;
      }
  }
  T20 = changedQ_;
  if (T20 != &KPfalseVKi) {
    T16 = new_sequence_;
    T32 = KreverseXVKdMM2I(T16);
    T59_0 = KasVKdMM5I(&KLstretchy_byte_vectorGVKi, T32);
    T14_0 = T59_0;
  } else {
    T13_0 = sequence_;
    T14_0 = T13_0;
  }
  MV_SET_COUNT(1);
  return(T14_0);
}

D KremoveVKdMM3I (D sequence_, D value_, D Urest_, D test_, D count_) {
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
  DBCHR T38;
  D T39;
  DWORD T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  D T45;
  DBCHR T46;
  D T47;
  DWORD T48;
  D T49_0;
  D T50;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  primitive_type_check(count_, &K384);
  countF7 = count_;
  new_sequence_ = &KPempty_listVKi;
  changedQ_ = &KPfalseVKi;
  if (countF7 != &KPfalseVKi) {
    T50 = countF7;
    T24 = T50;
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
        T38 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T37, 2, T8);
        T39 = primitive_raw_as_byte_character(T38);
        T23 = countF21;
        T25 = primitive_cast_integer_as_raw(T23);
        T26 = primitive_machine_word_less_thanQ(1,T25);
        if (T26 != &KPfalseVKi) {
          T9 = CALL2(testF6, T39, value_);
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
          SLOT_VALUE_SETTER(T39, T30, 0);
          SLOT_VALUE_SETTER(T18, T30, 1);
          new_sequence_ = T30;
        }
        T40 = primitive_machine_word_add_signal_overflow(T8,4);
        T8T = T40;
        goto L0;
      }
  } else {
    T41 = SLOT_VALUE_INITD(sequence_, 0);
    T42 = SLOT_VALUE_INITD(T41, 0);
    T43 = primitive_cast_integer_as_raw(T42);
    T11T = 1;
  L1: ;
      T11 = T11T;
      T44 = primitive_machine_word_equalQ(T11,T43);
      if (T44 == &KPfalseVKi) {
        T45 = SLOT_VALUE_INITD(sequence_, 0);
        T46 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T45, 2, T11);
        T47 = primitive_raw_as_byte_character(T46);
        T12 = CALL2(testF6, T47, value_);
        if (T12 != &KPfalseVKi) {
          changedQ_ = &KPtrueVKi;
        } else {
          T17 = new_sequence_;
          T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          SLOT_VALUE_SETTER(T47, T31, 0);
          SLOT_VALUE_SETTER(T17, T31, 1);
          new_sequence_ = T31;
        }
        T48 = primitive_machine_word_add_signal_overflow(T11,4);
        T11T = T48;
        goto L1;
      }
  }
  T20 = changedQ_;
  if (T20 != &KPfalseVKi) {
    T16 = new_sequence_;
    T32 = KreverseXVKdMM2I(T16);
    T49_0 = KasVKdMM7I(&KLstretchy_byte_character_vectorGVKe, T32);
    T14_0 = T49_0;
  } else {
    T13_0 = sequence_;
    T14_0 = T13_0;
  }
  MV_SET_COUNT(1);
  return(T14_0);
}

D KchooseVKdMM3I (D test_, D sequence_) {
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
  DBCHR T14;
  D T15;
  DWORD T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
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
      T14 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T13, 2, T4);
      T15 = primitive_raw_as_byte_character(T14);
      T5 = CALL1(test_, T15);
      if (T5 != &KPfalseVKi) {
        T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        SLOT_VALUE_SETTER(T15, T7, 0);
        SLOT_VALUE_SETTER(result_, T7, 1);
        T6 = T7;
      } else {
        T6 = result_;
      }
      T16 = primitive_machine_word_add_signal_overflow(T4,4);
      result_T = T6;
      T4T = T16;
      goto L0;
    }
    T8 = KreverseXVKdMM2I(result_);
    T17_0 = KasVKdMM7I(&KLstretchy_byte_character_vectorGVKe, T8);
  MV_SET_COUNT(1);
  return(T17_0);
}

D KchooseVKdMM4I (D test_, D sequence_) {
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
  D T13_0;
  D T14;
  DBYTE T15;
  D T16_0;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  DWORD T21;
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
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
      T14 = SLOT_VALUE_INITD(sequence_, 0);
      T15 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T14, 2, T4);
      T17 = primitive_machine_word_shift_left_signal_overflow(T15,2);
      T18 = primitive_machine_word_logior(T17,1);
      T19 = primitive_cast_raw_as_integer(T18);
      T16_0 = T19;
      T13_0 = T16_0;
      T20 = T13_0;
      T5 = CALL1(test_, T20);
      if (T5 != &KPfalseVKi) {
        T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        SLOT_VALUE_SETTER(T20, T7, 0);
        SLOT_VALUE_SETTER(result_, T7, 1);
        T6 = T7;
      } else {
        T6 = result_;
      }
      T21 = primitive_machine_word_add_signal_overflow(T4,4);
      result_T = T6;
      T4T = T21;
      goto L0;
    }
    T8 = KreverseXVKdMM2I(result_);
    T22_0 = KasVKdMM5I(&KLstretchy_byte_vectorGVKi, T8);
  MV_SET_COUNT(1);
  return(T22_0);
}

D KchooseVKdMM5I (D test_, D sequence_) {
  D result_T, result_;
  DWORD T4T, T4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  D T18_0;
  D T19;
  D T20;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T11 = SLOT_VALUE_INITD(sequence_, 1);
  T12 = SLOT_VALUE_INITD(T11, 0);
  T13 = primitive_cast_integer_as_raw(T12);
  result_T = &KPempty_listVKi;
  T4T = 1;
L0: ;
    result_ = result_T;
    T4 = T4T;
    T14 = primitive_machine_word_equalQ(T4,T13);
    if (T14 == &KPfalseVKi) {
      T15 = SLOT_VALUE_INITD(sequence_, 1);
      T16 = REPEATED_D_SLOT_VALUE_TAGGED(T15, 2, T4);
      T5 = CALL1(test_, T16);
      if (T5 != &KPfalseVKi) {
        T9 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        SLOT_VALUE_SETTER(T16, T9, 0);
        SLOT_VALUE_SETTER(result_, T9, 1);
        T6 = T9;
      } else {
        T6 = result_;
      }
      T17 = primitive_machine_word_add_signal_overflow(T4,4);
      result_T = T6;
      T4T = T17;
      goto L0;
    }
    T19 = SLOT_VALUE_INITD(sequence_, 0);
    CONGRUENT_CALL_PROLOG(&Klimited_stretchy_vectorVKe, 1);
    T18_0 = CONGRUENT_CALL1(T19);
    T20 = T18_0;
    T10 = KreverseXVKdMM2I(result_);
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T7_0 = CONGRUENT_CALL2(T20, T10);
  T8_0 = T7_0;
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kconcrete_limited_stretchy_vector_classVKiMM3I (D of_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:38
  T5 = KsubtypeQVKdMM11I(of_, &KLbyteGVKe);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:38
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:39
    T2_0 = &KLstretchy_byte_vectorGVKi;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:41
    T3_0 = &KLstretchy_element_type_vectorGVKe;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:36
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kconcrete_limited_stretchy_vector_classVKiMM2I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:32
  T2_0 = &KLstretchy_element_type_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:30
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_stretchy_vector_classVKiMM1I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2_0 = &KLstretchy_byte_character_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ktrusted_size_setterVKiMM2I (D new_size_, D vector_) {
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
  DBCHR T33;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T25 = SLOT_VALUE_INITD(vector_, 0);
  T26 = SLOT_VALUE_INITD(T25, 1);
  T27 = primitive_cast_integer_as_raw(T26);
  T28 = primitive_cast_integer_as_raw(new_size_);
  T29 = primitive_machine_word_less_thanQ(T27,T28);
  if (T29 != &KPfalseVKi) {
    T3 = Kpower_of_two_ceilingVKeMM0I(new_size_);
    T32.vector_element_[0] = &KJcapacity_;
    T32.vector_element_[1] = T3;
    T32.vector_element_[2] = &KJsize_;
    T32.vector_element_[3] = new_size_;
    T31_0 = KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vector_representationGVKi, &T32, new_size_, T3);
    T30 = T31_0;
    T12 = SLOT_VALUE_INITD(T25, 0);
    T13 = primitive_cast_integer_as_raw(T12);
    iF4T = 1;
  L0: ;
      iF4 = iF4T;
      T14 = primitive_machine_word_less_thanQ(iF4,T13);
      if (T14 != &KPfalseVKi) {
        T33 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T25, 2, iF4);
        REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T33, T30, 2, iF4);
        T15 = primitive_machine_word_add_signal_overflow(iF4,4);
        iF4T = T15;
        goto L0;
      }
      j_T = iF4;
    L1: ;
        j_ = j_T;
        T16 = primitive_machine_word_less_thanQ(j_,T28);
        if (T16 != &KPfalseVKi) {
          REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(32, T30, 2, j_);
          T17 = primitive_machine_word_add_signal_overflow(j_,4);
          j_T = T17;
          goto L1;
        }
    SLOT_VALUE_SETTER(T30, vector_, 0);
    T6_0 = new_size_;
    T11_0 = T6_0;
  } else {
    T18 = SLOT_VALUE_INITD(T25, 0);
    T19 = primitive_cast_integer_as_raw(T18);
    T20 = primitive_machine_word_less_thanQ(T28,T19);
    if (T20 != &KPfalseVKi) {
      T21 = SLOT_VALUE_INITD(T25, 0);
      T22 = primitive_cast_integer_as_raw(T21);
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      iF7T = T28;
    L2: ;
        iF7 = iF7T;
        T23 = primitive_machine_word_less_thanQ(iF7,T22);
        if (T23 != &KPfalseVKi) {
          REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(32, T25, 2, iF7);
          T24 = primitive_machine_word_add_signal_overflow(iF7,4);
          iF7T = T24;
          goto L2;
        }
      T8_0 = new_size_;
      T10_0 = T8_0;
    } else {
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      T9_0 = new_size_;
      T10_0 = T9_0;
    }
    T11_0 = T10_0;
  }
  MV_SET_COUNT(1);
  return(T11_0);
}

D Ktrusted_size_setterVKiMM3I (D new_size_, D vector_) {
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
  D T33_0;
  DBYTE T34;
  D T35_0;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  DWORD T40;
  DWORD T41;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T25 = SLOT_VALUE_INITD(vector_, 0);
  T26 = SLOT_VALUE_INITD(T25, 1);
  T27 = primitive_cast_integer_as_raw(T26);
  T28 = primitive_cast_integer_as_raw(new_size_);
  T29 = primitive_machine_word_less_thanQ(T27,T28);
  if (T29 != &KPfalseVKi) {
    T3 = Kpower_of_two_ceilingVKeMM0I(new_size_);
    T32.vector_element_[0] = &KJcapacity_;
    T32.vector_element_[1] = T3;
    T32.vector_element_[2] = &KJsize_;
    T32.vector_element_[3] = new_size_;
    T31_0 = KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_byte_vector_representationGVKi, &T32, new_size_, T3);
    T30 = T31_0;
    T12 = SLOT_VALUE_INITD(T25, 0);
    T13 = primitive_cast_integer_as_raw(T12);
    iF4T = 1;
  L0: ;
      iF4 = iF4T;
      T14 = primitive_machine_word_less_thanQ(iF4,T13);
      if (T14 != &KPfalseVKi) {
        T34 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T25, 2, iF4);
        T36 = primitive_machine_word_shift_left_signal_overflow(T34,2);
        T37 = primitive_machine_word_logior(T36,1);
        T38 = primitive_cast_raw_as_integer(T37);
        T35_0 = T38;
        T33_0 = T35_0;
        T39 = T33_0;
        T41 = primitive_cast_integer_as_raw(T39);
        T40 = primitive_machine_word_shift_right(T41,2);
        REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T40, T30, 2, iF4);
        T15 = primitive_machine_word_add_signal_overflow(iF4,4);
        iF4T = T15;
        goto L0;
      }
      j_T = iF4;
    L1: ;
        j_ = j_T;
        T16 = primitive_machine_word_less_thanQ(j_,T28);
        if (T16 != &KPfalseVKi) {
          REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(0, T30, 2, j_);
          T17 = primitive_machine_word_add_signal_overflow(j_,4);
          j_T = T17;
          goto L1;
        }
    SLOT_VALUE_SETTER(T30, vector_, 0);
    T6_0 = new_size_;
    T11_0 = T6_0;
  } else {
    T18 = SLOT_VALUE_INITD(T25, 0);
    T19 = primitive_cast_integer_as_raw(T18);
    T20 = primitive_machine_word_less_thanQ(T28,T19);
    if (T20 != &KPfalseVKi) {
      T21 = SLOT_VALUE_INITD(T25, 0);
      T22 = primitive_cast_integer_as_raw(T21);
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      iF7T = T28;
    L2: ;
        iF7 = iF7T;
        T23 = primitive_machine_word_less_thanQ(iF7,T22);
        if (T23 != &KPfalseVKi) {
          REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(0, T25, 2, iF7);
          T24 = primitive_machine_word_add_signal_overflow(iF7,4);
          iF7T = T24;
          goto L2;
        }
      T8_0 = new_size_;
      T10_0 = T8_0;
    } else {
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      T9_0 = new_size_;
      T10_0 = T9_0;
    }
    T11_0 = T10_0;
  }
  MV_SET_COUNT(1);
  return(T11_0);
}

D Ktrusted_size_setterVKiMM4I (D new_size_, D vector_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T25 = SLOT_VALUE_INITD(vector_, 1);
  T26 = SLOT_VALUE_INITD(T25, 1);
  T27 = primitive_cast_integer_as_raw(T26);
  T28 = primitive_cast_integer_as_raw(new_size_);
  T29 = primitive_machine_word_less_thanQ(T27,T28);
  if (T29 != &KPfalseVKi) {
    T3 = Kpower_of_two_ceilingVKeMM0I(new_size_);
    T32.vector_element_[0] = &KJcapacity_;
    T32.vector_element_[1] = T3;
    T32.vector_element_[2] = &KJsize_;
    T32.vector_element_[3] = new_size_;
    T31_0 = KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_element_type_vector_representationGVKi, &T32, new_size_, T3);
    T30 = T31_0;
    T12 = SLOT_VALUE_INITD(T25, 0);
    T13 = primitive_cast_integer_as_raw(T12);
    iF4T = 1;
  L0: ;
      iF4 = iF4T;
      T14 = primitive_machine_word_less_thanQ(iF4,T13);
      if (T14 != &KPfalseVKi) {
        T33 = REPEATED_D_SLOT_VALUE_TAGGED(T25, 2, iF4);
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T33, T30, 2, iF4);
        T15 = primitive_machine_word_add_signal_overflow(iF4,4);
        iF4T = T15;
        goto L0;
      }
      j_T = iF4;
    L1: ;
        j_ = j_T;
        T16 = primitive_machine_word_less_thanQ(j_,T28);
        if (T16 != &KPfalseVKi) {
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T30, 2, j_);
          T17 = primitive_machine_word_add_signal_overflow(j_,4);
          j_T = T17;
          goto L1;
        }
    SLOT_VALUE_SETTER(T30, vector_, 1);
    T6_0 = new_size_;
    T11_0 = T6_0;
  } else {
    T18 = SLOT_VALUE_INITD(T25, 0);
    T19 = primitive_cast_integer_as_raw(T18);
    T20 = primitive_machine_word_less_thanQ(T28,T19);
    if (T20 != &KPfalseVKi) {
      T21 = SLOT_VALUE_INITD(T25, 0);
      T22 = primitive_cast_integer_as_raw(T21);
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      iF7T = T28;
    L2: ;
        iF7 = iF7T;
        T23 = primitive_machine_word_less_thanQ(iF7,T22);
        if (T23 != &KPfalseVKi) {
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(&KPfalseVKi, T25, 2, iF7);
          T24 = primitive_machine_word_add_signal_overflow(iF7,4);
          iF7T = T24;
          goto L2;
        }
      T8_0 = new_size_;
      T10_0 = T8_0;
    } else {
      SLOT_VALUE_SETTER(new_size_, T25, 0);
      T9_0 = new_size_;
      T10_0 = T9_0;
    }
    T11_0 = T10_0;
  }
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kstretchy_representation_typeVKeMM3I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T2_0 = &KLstretchy_element_type_vector_representationGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstretchy_representation_typeVKeMM2I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2_0 = &KLstretchy_byte_vector_representationGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstretchy_representation_typeVKeMM1I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2_0 = &KLstretchy_byte_character_vector_representationGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kcollection_fillVKeMM4I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:13
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kcollection_fillVKeMM3I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2_0 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kcollection_fillVKeMM2I (D vector_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2_0 = C(' ');
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstretchy_vector_element_setterVKeMM3I (D new_value_, D rep_, D key_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, rep_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstretchy_vector_element_setterVKeMM2I (D new_value_, D rep_, D key_) {
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T6, rep_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstretchy_vector_element_setterVKeMM1I (D new_value_, D rep_, D key_) {
  D T4_0;
  DSINT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5 = primitive_byte_character_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T5, rep_, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstretchy_vector_elementVKeMM3I (D rep_, D key_) {
  D T3;
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3 = REPEATED_D_SLOT_VALUE_TAGGED(rep_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstretchy_vector_elementVKeMM2I (D rep_, D key_) {
  D T3_0;
  DBYTE T4;
  D T5_0;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(rep_, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstretchy_vector_elementVKeMM1I (D rep_, D key_) {
  DBCHR T3;
  D T4;
  D T5_0;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(rep_, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4 = primitive_raw_as_byte_character(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T5_0);
}

D KinitializeVKdMM3I (D vector_, D Urest_, D size_, D capacity_, D fill_) {
  D sizeF6;
  D T7;
  DWORD capacityF8;
  D fillF9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T19;
  D T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_1 T23 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T24 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T25;
  D T26;
  _KLsimple_object_vectorGVKd_2 T27 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T28 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  D T34_0;
  _KLsimple_object_vectorGVKd_6 T35 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T11 = primitive_idQ(capacity_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T7 = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T30 = primitive_cast_integer_as_raw(T7);
    capacityF8 = T30;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    primitive_type_check(capacity_, &KLintegerGVKd);
    T12 = capacity_;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T31 = primitive_cast_integer_as_raw(T12);
    capacityF8 = T31;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T32 = primitive_cast_raw_as_integer(capacityF8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  primitive_type_check(fill_, &KLbyte_characterGVKe);
  fillF9 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T19 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T20 = primitive_machine_word_less_thanQ(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T17.vector_element_[0] = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T15 = KlistVKdI(&T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T18.vector_element_[0] = &KJformat_string_;
    T18.vector_element_[1] = &K321;
    T18.vector_element_[2] = &KJformat_arguments_;
    T18.vector_element_[3] = T15;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T16 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T18);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    KerrorVKdMM0I(T16, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T25 = primitive_machine_word_less_thanQ(capacityF8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T23.vector_element_[0] = T32;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T21 = KlistVKdI(&T23);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T24.vector_element_[0] = &KJformat_string_;
    T24.vector_element_[1] = &K321;
    T24.vector_element_[2] = &KJformat_arguments_;
    T24.vector_element_[3] = T21;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T22 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T24);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    KerrorVKdMM0I(T22, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T26 = primitive_machine_word_less_thanQ(capacityF8,T19);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T27.vector_element_[0] = T32;
    T27.vector_element_[1] = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T13 = KlistVKdI(&T27);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T28.vector_element_[0] = &KJformat_string_;
    T28.vector_element_[1] = &K322;
    T28.vector_element_[2] = &KJformat_arguments_;
    T28.vector_element_[3] = T13;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T14 = CONGRUENT_CALL2(&KLcapacity_size_errorGVKi, &T28);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    KerrorVKdMM0I(T14, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T29 = primitive_machine_word_less_thanQ(1,capacityF8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T35.vector_element_[0] = &KJcapacity_;
    T35.vector_element_[1] = T32;
    T35.vector_element_[2] = &KJsize_;
    T35.vector_element_[3] = sizeF6;
    T35.vector_element_[4] = &KJfill_;
    T35.vector_element_[5] = fillF9;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T34_0 = KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vector_representationGVKi, &T35, sizeF6, T32);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T33 = T34_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    SLOT_VALUE_SETTER(T33, vector_, 0);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T10 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(0);
  return(T10);
}

D KinitializeVKdMM4I (D vector_, D Urest_, D size_, D capacity_, D fill_) {
  D sizeF6;
  D T7;
  DWORD capacityF8;
  D fillF9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T19;
  D T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_1 T23 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T24 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T25;
  D T26;
  _KLsimple_object_vectorGVKd_2 T27 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T28 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  D T34_0;
  _KLsimple_object_vectorGVKd_6 T35 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T11 = primitive_idQ(capacity_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T7 = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T30 = primitive_cast_integer_as_raw(T7);
    capacityF8 = T30;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    primitive_type_check(capacity_, &KLintegerGVKd);
    T12 = capacity_;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T31 = primitive_cast_integer_as_raw(T12);
    capacityF8 = T31;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T32 = primitive_cast_raw_as_integer(capacityF8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  primitive_type_check(fill_, &KLbyteGVKe);
  fillF9 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T19 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T20 = primitive_machine_word_less_thanQ(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T17.vector_element_[0] = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T15 = KlistVKdI(&T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T18.vector_element_[0] = &KJformat_string_;
    T18.vector_element_[1] = &K321;
    T18.vector_element_[2] = &KJformat_arguments_;
    T18.vector_element_[3] = T15;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T16 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T18);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    KerrorVKdMM0I(T16, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T25 = primitive_machine_word_less_thanQ(capacityF8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T23.vector_element_[0] = T32;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T21 = KlistVKdI(&T23);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T24.vector_element_[0] = &KJformat_string_;
    T24.vector_element_[1] = &K321;
    T24.vector_element_[2] = &KJformat_arguments_;
    T24.vector_element_[3] = T21;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T22 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T24);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    KerrorVKdMM0I(T22, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T26 = primitive_machine_word_less_thanQ(capacityF8,T19);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T27.vector_element_[0] = T32;
    T27.vector_element_[1] = sizeF6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T13 = KlistVKdI(&T27);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T28.vector_element_[0] = &KJformat_string_;
    T28.vector_element_[1] = &K322;
    T28.vector_element_[2] = &KJformat_arguments_;
    T28.vector_element_[3] = T13;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T14 = CONGRUENT_CALL2(&KLcapacity_size_errorGVKi, &T28);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    KerrorVKdMM0I(T14, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T29 = primitive_machine_word_less_thanQ(1,capacityF8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T35.vector_element_[0] = &KJcapacity_;
    T35.vector_element_[1] = T32;
    T35.vector_element_[2] = &KJsize_;
    T35.vector_element_[3] = sizeF6;
    T35.vector_element_[4] = &KJfill_;
    T35.vector_element_[5] = fillF9;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T34_0 = KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_byte_vector_representationGVKi, &T35, sizeF6, T32);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T33 = T34_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    SLOT_VALUE_SETTER(T33, vector_, 0);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T10 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(0);
  return(T10);
}

D KinitializeVKdMM5I (D vector_, D Urest_, D size_, D capacity_, D element_type_, D fill_) {
  D sizeF7;
  D T8;
  DWORD capacityF9;
  D element_typeF10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_1 T23 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T24 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T25;
  D T26;
  D T27;
  D T28;
  _KLsimple_object_vectorGVKd_1 T29 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T30 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T31;
  D T32;
  _KLsimple_object_vectorGVKd_2 T33 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T34 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T35;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  D T40_0;
  _KLsimple_object_vectorGVKd_6 T41 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF7 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
  T12 = primitive_idQ(capacity_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
    T8 = sizeF7;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T36 = primitive_cast_integer_as_raw(T8);
    capacityF9 = T36;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
    primitive_type_check(capacity_, &KLintegerGVKd);
    T13 = capacity_;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T37 = primitive_cast_integer_as_raw(T13);
    capacityF9 = T37;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  T38 = primitive_cast_raw_as_integer(capacityF9);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
  primitive_type_check(element_type_, &KLtypeGVKd);
  element_typeF10 = element_type_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:21
  T14 = primitive_cast_integer_as_raw(sizeF7);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:21
  T15 = primitive_machine_word_equalQ(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:21
  if (T15 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:22
    T18 = primitive_instanceQ(fill_,element_typeF10);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:22
    if (T18 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:22
      T17.vector_element_[0] = &KJvalue_;
      T17.vector_element_[1] = fill_;
      T17.vector_element_[2] = &KJtype_;
      T17.vector_element_[3] = element_typeF10;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:22
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T16 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T17);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:22
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T16, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:22
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:21
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  T25 = primitive_cast_integer_as_raw(sizeF7);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  T26 = primitive_machine_word_less_thanQ(T25,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T23.vector_element_[0] = sizeF7;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T21 = KlistVKdI(&T23);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T24.vector_element_[0] = &KJformat_string_;
    T24.vector_element_[1] = &K321;
    T24.vector_element_[2] = &KJformat_arguments_;
    T24.vector_element_[3] = T21;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T22 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T24);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    KerrorVKdMM0I(T22, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  T31 = primitive_machine_word_less_thanQ(capacityF9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T29.vector_element_[0] = T38;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T27 = KlistVKdI(&T29);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T30.vector_element_[0] = &KJformat_string_;
    T30.vector_element_[1] = &K321;
    T30.vector_element_[2] = &KJformat_arguments_;
    T30.vector_element_[3] = T27;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T28 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T30);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    KerrorVKdMM0I(T28, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  T32 = primitive_machine_word_less_thanQ(capacityF9,T25);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T33.vector_element_[0] = T38;
    T33.vector_element_[1] = sizeF7;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T19 = KlistVKdI(&T33);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T34.vector_element_[0] = &KJformat_string_;
    T34.vector_element_[1] = &K322;
    T34.vector_element_[2] = &KJformat_arguments_;
    T34.vector_element_[3] = T19;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T20 = CONGRUENT_CALL2(&KLcapacity_size_errorGVKi, &T34);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    KerrorVKdMM0I(T20, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  T35 = primitive_machine_word_less_thanQ(1,capacityF9);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T41.vector_element_[0] = &KJcapacity_;
    T41.vector_element_[1] = T38;
    T41.vector_element_[2] = &KJsize_;
    T41.vector_element_[3] = sizeF7;
    T41.vector_element_[4] = &KJfill_;
    T41.vector_element_[5] = fill_;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T40_0 = KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_element_type_vector_representationGVKi, &T41, sizeF7, T38);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    T39 = T40_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
    SLOT_VALUE_SETTER(T39, vector_, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:25
  T11 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:15
  MV_SET_COUNT(0);
  return(T11);
}

D KasVKdMM2I (D class_, D collection_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  size_ = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T20.vector_element_[0] = &KJsize_;
    T20.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T19_0 = KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_element_type_vectorGVKe, &T20, &KLobjectGVKd);
    T18_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T5 = CONGRUENT_CALL3(collection_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T23.vector_element_[0] = &KJsize_;
    T23.vector_element_[1] = size_;
    T23.vector_element_[2] = &KJfill_;
    T23.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T22_0 = KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_element_type_vectorGVKe, &T23, &KLobjectGVKd);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T21 = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T24 = SLOT_VALUE_INITD(T21, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T6 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T7 = T6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T8 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T9 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T10 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T11 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T12T = T7;
    index_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T12 = T12T;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      index_ = index_T;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T14 = CALL3(T10, collection_, T12, T8);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      if (T14 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        T15 = CALL2(T11, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T15, T24, 2, index_);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        T16 = CALL2(T9, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        T25 = primitive_machine_word_add_signal_overflow(index_,4);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
        T12T = T16;
        index_T = T25;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T17_0 = T21;
    T18_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T18_0);
}

D KasVKdMM3I (D class_, D collection_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T18_0 = KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_element_type_vectorGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T17 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  new_vector_ = T17;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    T10 = CALL3(T7, collection_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T11 = CALL2(T8, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T16 = new_vector_;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T19 = KaddXVKdMM6I(T16, T11);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      new_vector_ = T19;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T12 = CALL2(T6, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T15 = new_vector_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T13_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T13_0);
}

D KasVKdMM4I (D class_, D collection_) {
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
  D T26;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  size_ = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T20.vector_element_[0] = &KJsize_;
    T20.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T19_0 = KLstretchy_byte_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_vectorGVKi, &T20);
    T18_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T5 = CONGRUENT_CALL3(collection_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T23.vector_element_[0] = &KJsize_;
    T23.vector_element_[1] = size_;
    T23.vector_element_[2] = &KJfill_;
    T23.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T22_0 = KLstretchy_byte_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_vectorGVKi, &T23);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T21 = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T24 = SLOT_VALUE_INITD(T21, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T6 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T7 = T6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T8 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T9 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T10 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T11 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T12T = T7;
    index_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T12 = T12T;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      index_ = index_T;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T26 = primitive_cast_raw_as_integer(index_);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T14 = CALL3(T10, collection_, T12, T8);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      if (T14 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        T15 = CALL2(T11, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        CONGRUENT_CALL_PROLOG(&Kstretchy_vector_element_setterVKe, 3);
        CONGRUENT_CALL3(T15, T24, T26);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        T16 = CALL2(T9, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        T25 = primitive_machine_word_add_signal_overflow(index_,4);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
        T12T = T16;
        index_T = T25;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T17_0 = T21;
    T18_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T18_0);
}

D KasVKdMM5I (D class_, D collection_) {
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
  D T15_0;
  D new_vector_;
  D T17;
  D T18;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T20_0 = KLstretchy_byte_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_vectorGVKi, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T19 = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  new_vector_ = T19;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    T10 = CALL3(T7, collection_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T11 = CALL2(T8, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T18 = new_vector_;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
      T12 = CONGRUENT_CALL2(T18, T11);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T13 = T12;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      new_vector_ = T13;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T14 = CALL2(T6, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
      T9T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T17 = new_vector_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T15_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T15_0);
}

D KasVKdMM6I (D class_, D collection_) {
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
  D T26;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  size_ = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T20.vector_element_[0] = &KJsize_;
    T20.vector_element_[1] = (D) 1;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T19_0 = KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vectorGVKe, &T20);
    T18_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T5 = CONGRUENT_CALL3(collection_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T23.vector_element_[0] = &KJsize_;
    T23.vector_element_[1] = size_;
    T23.vector_element_[2] = &KJfill_;
    T23.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T22_0 = KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vectorGVKe, &T23);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T21 = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T24 = SLOT_VALUE_INITD(T21, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
    T6 = CONGRUENT_CALL1(collection_);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T7 = T6;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T8 = MV_GET_ELT(1);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T9 = MV_GET_ELT(2);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T10 = MV_GET_ELT(3);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T11 = MV_GET_ELT(5);
;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T12T = T7;
    index_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T12 = T12T;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      index_ = index_T;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T26 = primitive_cast_raw_as_integer(index_);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T14 = CALL3(T10, collection_, T12, T8);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      if (T14 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        T15 = CALL2(T11, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        CONGRUENT_CALL_PROLOG(&Kstretchy_vector_element_setterVKe, 3);
        CONGRUENT_CALL3(T15, T24, T26);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        T16 = CALL2(T9, collection_, T12);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        T25 = primitive_machine_word_add_signal_overflow(index_,4);
        // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
        T12T = T16;
        index_T = T25;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T17_0 = T21;
    T18_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T18_0);
}

D KasVKdMM7I (D class_, D collection_) {
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
  D T15_0;
  D new_vector_;
  D T17;
  D T18;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T20_0 = KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T19 = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  new_vector_ = T19;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    T10 = CALL3(T7, collection_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T11 = CALL2(T8, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T18 = new_vector_;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
      T12 = CONGRUENT_CALL2(T18, T11);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T13 = T12;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      new_vector_ = T13;
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T14 = CALL2(T6, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
      T9T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T17 = new_vector_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T15_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T15_0);
}

D KasVKdMM50I (D class_, D vector_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM51I (D class_, D vector_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM52I (D class_, D vector_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLstretchy_byte_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3 = primitive_object_allocate_filled(2,&KLstretchy_byte_vectorGVKiW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  T6 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_byte_vectorG, 0);
  T7 = primitive_cast_integer_as_raw(T6);
  T8 = primitive_machine_word_logbitQ(4,T7);
  if (T8 != &KPfalseVKi) {
    T9 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_byte_vectorG, 1);
    T11 = T9;
  } else {
    T5_0 = Kinstall_and_return_make_method_init_dataVKiI(&Kstretchy_representationVKeHLstretchy_byte_vectorG);
    T10 = T5_0;
    T11 = T10;
  }
  SLOT_VALUE_SETTER(T11, T3, 0);
  MEP_APPLY2(&KinitializeVKdMM4, &K277, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kslot_initializerF280I () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T0_0 = Dempty_Lstretchy_byte_vector_representationGVKi;
  MV_SET_COUNT(1);
  return(T0_0);
}

D KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3 = primitive_object_allocate_filled(2,&KLstretchy_byte_character_vectorGVKeW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  T6 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_byte_character_vectorG, 0);
  T7 = primitive_cast_integer_as_raw(T6);
  T8 = primitive_machine_word_logbitQ(4,T7);
  if (T8 != &KPfalseVKi) {
    T9 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_byte_character_vectorG, 1);
    T11 = T9;
  } else {
    T5_0 = Kinstall_and_return_make_method_init_dataVKiI(&Kstretchy_representationVKeHLstretchy_byte_character_vectorG);
    T10 = T5_0;
    T11 = T10;
  }
  SLOT_VALUE_SETTER(T11, T3, 0);
  MEP_APPLY2(&KinitializeVKdMM3, &K277, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kslot_initializerF298I () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T0_0 = Dempty_Lstretchy_byte_character_vector_representationGVKi;
  MV_SET_COUNT(1);
  return(T0_0);
}

D KLstretchy_element_type_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4 = primitive_object_allocate_filled(3,&KLstretchy_element_type_vectorGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_element_typeF5 = Uunique_element_type_;
  SLOT_VALUE_SETTER(Uunique_element_typeF5, T4, 0);
  T8 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_element_type_vectorG, 0);
  T9 = primitive_cast_integer_as_raw(T8);
  T10 = primitive_machine_word_logbitQ(4,T9);
  if (T10 != &KPfalseVKi) {
    T11 = SLOT_VALUE_INITD(&Kstretchy_representationVKeHLstretchy_element_type_vectorG, 1);
    T13 = T11;
  } else {
    T7_0 = Kinstall_and_return_make_method_init_dataVKiI(&Kstretchy_representationVKeHLstretchy_element_type_vectorG);
    T12 = T7_0;
    T13 = T12;
  }
  SLOT_VALUE_SETTER(T13, T4, 1);
  MEP_APPLY2(&KinitializeVKdMM5, &K277, T4, init_args_);
  T6_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kslot_initializerF314I () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T0_0 = Dempty_Lstretchy_element_type_vector_representationGVKi;
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kstretchy_element_type_vector_current_elementVKiI (D vector_, D state_) {
  D T2;
  D T3;
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T2 = SLOT_VALUE_INITD(vector_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstretchy_element_type_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3_0;
  D T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T4 = SLOT_VALUE_INITD(vector_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, T4, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstretchy_byte_vector_current_elementVKiI (D vector_, D state_) {
  D T2_0;
  D T3;
  DBYTE T4;
  D T5_0;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(T3, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T9 = primitive_cast_raw_as_integer(T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstretchy_byte_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3_0;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T4 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T7 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T6, T4, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kstretchy_byte_character_vector_current_elementVKiI (D vector_, D state_) {
  D T2;
  DBCHR T3;
  D T4;
  D T5_0;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T2, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4 = primitive_raw_as_byte_character(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kstretchy_byte_character_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3_0;
  D T4;
  DSINT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T4 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T6 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T5 = primitive_byte_character_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T5, T4, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_limited_stretchy_vector_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_limited_stretchy_vector_for_user () {
{
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_4 T3 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T3.vector_element_[0] = &KJcapacity_;
  T3.vector_element_[1] = (D) 1;
  T3.vector_element_[2] = &KJsize_;
  T3.vector_element_[3] = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T2_0 = KLstretchy_byte_character_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vector_representationGVKi, &T3, (D) 1, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  Dempty_Lstretchy_byte_character_vector_representationGVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:8
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_4 T3 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T3.vector_element_[0] = &KJcapacity_;
  T3.vector_element_[1] = (D) 1;
  T3.vector_element_[2] = &KJsize_;
  T3.vector_element_[3] = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T2_0 = KLstretchy_byte_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_byte_vector_representationGVKi, &T3, (D) 1, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  Dempty_Lstretchy_byte_vector_representationGVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:10
  T0 = &KPfalseVKi;
  goto I4;
}
I4:

{
  D T0;
  D T1;
  D T2_0;
  _KLsimple_object_vectorGVKd_4 T3 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T3.vector_element_[0] = &KJcapacity_;
  T3.vector_element_[1] = (D) 1;
  T3.vector_element_[2] = &KJsize_;
  T3.vector_element_[3] = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T2_0 = KLstretchy_element_type_vector_representationGZ32ZconstructorVKiMM0I(&KLstretchy_element_type_vector_representationGVKi, &T3, (D) 1, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  Dempty_Lstretchy_element_type_vector_representationGVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/limited-stretchy-vector.dylan:12
  T0 = &KPfalseVKi;
  goto I8;
}
I8:

  return;
}


/* eof */
