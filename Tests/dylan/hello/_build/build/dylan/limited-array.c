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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(6);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

#define  define__KLsimple_integer_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D integer_vector_element_[nrepeated+1]; \
  } _KLsimple_integer_vectorGVKe_##nrepeated;

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
} _KLsignatureGVKe;

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
} _KLmultidimensional_arrayGVKi;

typedef struct {
  D wrapper;
} _KLsimple_arrayGVKi;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  DDFLT Pdouble_float_data_;
} _KLdouble_floatGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D value_class_comparitor_;
} _KLvalue_classGVKi;

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
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(42);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(43);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  DSFLT Psingle_float_data_;
} _KLsingle_floatGVKd;

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

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
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
} _KLlimited_mutable_sequence_typeGVKe;


/* Typedefs for defined classes */

#define  define__KLsimple_double_float_arrayGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_double_float_array_element_[nrepeated+1]; \
  } _KLsimple_double_float_arrayGVKe_##nrepeated;

#define  define__KLsimple_single_float_arrayGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_single_float_array_element_[nrepeated+1]; \
  } _KLsimple_single_float_arrayGVKe_##nrepeated;

#define  define__KLsimple_machine_word_arrayGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_machine_word_array_element_[nrepeated+1]; \
  } _KLsimple_machine_word_arrayGVKe_##nrepeated;

#define  define__KLsimple_element_type_arrayGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D element_type_; \
    D dimensions_; \
    D size_; \
    D row_major_element_type_array_element_[nrepeated+1]; \
  } _KLsimple_element_type_arrayGVKe_##nrepeated;

#define  define__KLsimple_double_byte_arrayGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_double_byte_array_element_[nrepeated+1]; \
  } _KLsimple_double_byte_arrayGVKe_##nrepeated;

#define  define__KLsimple_byte_arrayGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_byte_array_element_[nrepeated+1]; \
  } _KLsimple_byte_arrayGVKe_##nrepeated;

#define  define__KLsimple_integer_arrayGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_integer_array_element_[nrepeated+1]; \
  } _KLsimple_integer_arrayGVKe_##nrepeated;


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
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_38;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D Kcompute_array_dimensions_and_sizeVKiI (D);
extern _KLsymbolGVKd KJdimensions_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJfill_;
D Kclass_constructor_atomicallyVKiI (D class_);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe KdimensionsVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsimple_integer_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_integer_vectorGVKeW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
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
extern _KLclassGVKd KLmultidimensional_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLmultidimensional_arrayGVKiW;
extern _KLclassGVKd KLsimple_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_arrayGVKiW;
D Kallocate_instanceVKeI (D class_, D init_args_);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLsealed_generic_functionGVKe KinstanceQVKd;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLsymbolGVKd KJelement_type_;
extern _KLinstance_slot_descriptorGVKe Kelement_typeVKeHLlimited_collectionG;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLlimited_integerGVKe KLdouble_byteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_22;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
D KsubtypeQVKdMM11I (D limint1_, D limint2_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Llimited_integerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
D Kelement_range_errorVKeI (D, D);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_18;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Ldouble_floatG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsingle_floatG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_16;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_23;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_27;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_19;
extern _KLincremental_generic_functionGVKe Klimited_arrayVKe;
extern _KLclassGVKd KLlimited_mutable_sequence_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_mutable_sequence_typeGVKeW;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_36;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_20;
extern D Dempty_dimensionsVKi;

/* Defined object declarations */

extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_21;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_23;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_25;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_27;
extern _KLgetter_methodGVKi KsizeVKdMM7;
extern _KLgetter_methodGVKi KsizeVKdMM8;
extern _KLgetter_methodGVKi KsizeVKdMM9;
extern _KLgetter_methodGVKi KsizeVKdMM10;
extern _KLgetter_methodGVKi KsizeVKdMM11;
extern _KLgetter_methodGVKi KsizeVKdMM12;
extern _KLgetter_methodGVKi KsizeVKdMM13;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_37;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_38;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_39;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_40;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_41;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_42;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_43;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM4;
D Ktype_for_copyVKdMM4I (D array_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_20;
extern _KLsimple_methodGVKe Kelement_typeVKeMM3;
D Kelement_typeVKeMM3I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM4;
D Kelement_typeVKeMM4I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM5;
D Kelement_typeVKeMM5I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM6;
D Kelement_typeVKeMM6I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM7;
D Kelement_typeVKeMM7I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM8;
D Kelement_typeVKeMM8I (D t_);
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_28;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_29;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_30;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_31;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_32;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_33;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_34;
extern _KLkeyword_methodGVKe KelementVKdMM4;
D KelementVKdMM4I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM5;
D KelementVKdMM5I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM6;
D KelementVKdMM6I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM7;
D KelementVKdMM7I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM8;
D KelementVKdMM8I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM9;
D KelementVKdMM9I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM10;
D KelementVKdMM10I (D array_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_24;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_26;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_27;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_28;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_29;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_30;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM2;
D Kelement_no_bounds_checkVKeMM2I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM3;
D Kelement_no_bounds_checkVKeMM3I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM4;
D Kelement_no_bounds_checkVKeMM4I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM5;
D Kelement_no_bounds_checkVKeMM5I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM6;
D Kelement_no_bounds_checkVKeMM6I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM7;
D Kelement_no_bounds_checkVKeMM7I (D array_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM8;
D Kelement_no_bounds_checkVKeMM8I (D array_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_17;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_18;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_19;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_20;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_21;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_22;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_23;
extern _KLsimple_methodGVKe Kelement_setterVKdMM4;
D Kelement_setterVKdMM4I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM5;
D Kelement_setterVKdMM5I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM6;
D Kelement_setterVKdMM6I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM7;
D Kelement_setterVKdMM7I (D new_value_, D array_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM8;
D Kelement_setterVKdMM8I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM9;
D Kelement_setterVKdMM9I (D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM10;
D Kelement_setterVKdMM10I (D, D, D);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_22;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_23;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_24;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_26;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_27;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_28;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM4;
D Kelement_no_bounds_check_setterVKeMM4I (D new_value_, D array_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM5;
D Kelement_no_bounds_check_setterVKeMM5I (D new_value_, D array_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM6;
D Kelement_no_bounds_check_setterVKeMM6I (D new_value_, D array_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM7;
D Kelement_no_bounds_check_setterVKeMM7I (D new_value_, D array_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM8;
D Kelement_no_bounds_check_setterVKeMM8I (D new_value_, D array_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM9;
D Kelement_no_bounds_check_setterVKeMM9I (D new_value_, D array_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM10;
D Kelement_no_bounds_check_setterVKeMM10I (D new_value_, D array_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_19;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_20;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_21;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_22;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_23;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_24;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_25;
extern _KLkeyword_methodGVKe KfillXVKdMM4;
D KfillXVKdMM4I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KfillXVKdMM5;
D KfillXVKdMM5I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KfillXVKdMM6;
D KfillXVKdMM6I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KfillXVKdMM7;
D KfillXVKdMM7I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KfillXVKdMM8;
D KfillXVKdMM8I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KfillXVKdMM9;
D KfillXVKdMM9I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KfillXVKdMM10;
D KfillXVKdMM10I (D, D, D, D, D);
extern _KLgetter_methodGVKi KdimensionsVKdMM1;
extern _KLgetter_methodGVKi KdimensionsVKdMM2;
extern _KLgetter_methodGVKi KdimensionsVKdMM3;
extern _KLgetter_methodGVKi KdimensionsVKdMM4;
extern _KLgetter_methodGVKi KdimensionsVKdMM5;
extern _KLgetter_methodGVKi KdimensionsVKdMM6;
extern _KLgetter_methodGVKi KdimensionsVKdMM7;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_45;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_29;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM1;
D Kconcrete_limited_array_classVKiMM1I (D);
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM2;
D Kconcrete_limited_array_classVKiMM2I (D);
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM3;
D Kconcrete_limited_array_classVKiMM3I (D);
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM4;
D Kconcrete_limited_array_classVKiMM4I (D);
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM5;
D Kconcrete_limited_array_classVKiMM5I (D);
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM6;
D Kconcrete_limited_array_classVKiMM6I (D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_23;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_25;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_27;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_28;
extern _KLkeyword_methodGVKe KmakeVKdMM14;
D KmakeVKdMM14I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM15;
D KmakeVKdMM15I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM16;
D KmakeVKdMM16I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM17;
D KmakeVKdMM17I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM18;
D KmakeVKdMM18I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM19;
D KmakeVKdMM19I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM20;
D KmakeVKdMM20I (D, D, D, D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_39;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_40;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_41;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_42;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_43;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_44;
extern _KLclassGVKd KLsimple_double_float_arrayGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_double_float_arrayGVKeW;
static _KLimplementation_classGVKe K232;
extern _KLrepeated_slot_descriptorGVKe Krow_major_double_float_array_elementVKiHLsimple_double_float_arrayG;
static _KLsimple_object_vectorGVKd_2 K234;
extern _KLkeyword_methodGVKe KLsimple_double_float_arrayGZ32ZconstructorVKiMM0;
D KLsimple_double_float_arrayGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K237;
static _KLsimple_object_vectorGVKd_11 K238;
static _KLsimple_object_vectorGVKd_2 K239;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_double_float_arrayG;
static _KLsimple_closure_methodGVKi_0 K243;
static D K243I ();
static _KLsignatureGVKe K244;
static D K246I ();
static _KLkeyword_signatureAvaluesGVKi K247;
static _KLsimple_object_vectorGVKd_4 K248;
static _KLsimple_object_vectorGVKd_2 K249;
static _KLsimple_object_vectorGVKd_1 K250;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_float_arrayG;
static _KLdouble_floatGVKd K252;
extern _KLsealed_generic_functionGVKe Krow_major_double_float_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_double_float_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_double_float_array_element_setterVKiMM0;
static _KLpairGVKd K256;
static _KLbyte_stringGVKd_43 K257;
extern _KLrepeated_getter_methodGVKi Krow_major_double_float_array_elementVKiMM0;
static _KLpairGVKd K259;
static _KLbyte_stringGVKd_36 K260;
static _KLbyte_stringGVKd_27 K261;
static _KLkeyword_signatureAvaluesGVKi K262;
static _KLsimple_object_vectorGVKd_4 K263;
static _KLsimple_object_vectorGVKd_1 K264;
static _KLsimple_object_vectorGVKd_2 K265;
static _KLsingletonGVKd K266;
extern _KLclassGVKd KLsimple_single_float_arrayGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_single_float_arrayGVKeW;
static _KLimplementation_classGVKe K269;
extern _KLrepeated_slot_descriptorGVKe Krow_major_single_float_array_elementVKiHLsimple_single_float_arrayG;
static _KLsimple_object_vectorGVKd_2 K271;
extern _KLkeyword_methodGVKe KLsimple_single_float_arrayGZ32ZconstructorVKiMM0;
D KLsimple_single_float_arrayGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_11 K274;
static _KLsimple_object_vectorGVKd_2 K275;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_single_float_arrayG;
static _KLsimple_closure_methodGVKi_0 K279;
static D K279I ();
static D K281I ();
static _KLkeyword_signatureAvaluesGVKi K282;
static _KLsimple_object_vectorGVKd_1 K283;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_single_float_arrayG;
static _KLsingle_floatGVKd K285;
extern _KLsealed_generic_functionGVKe Krow_major_single_float_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_single_float_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_single_float_array_element_setterVKiMM0;
static _KLpairGVKd K289;
static _KLbyte_stringGVKd_43 K290;
extern _KLrepeated_getter_methodGVKi Krow_major_single_float_array_elementVKiMM0;
static _KLpairGVKd K292;
static _KLbyte_stringGVKd_36 K293;
static _KLbyte_stringGVKd_27 K294;
static _KLkeyword_signatureAvaluesGVKi K295;
static _KLsimple_object_vectorGVKd_1 K296;
static _KLsingletonGVKd K297;
extern _KLclassGVKd KLsimple_machine_word_arrayGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_machine_word_arrayGVKeW;
static _KLimplementation_classGVKe K300;
extern _KLrepeated_slot_descriptorGVKe Krow_major_machine_word_array_elementVKiHLsimple_machine_word_arrayG;
static _KLsimple_object_vectorGVKd_2 K302;
extern _KLkeyword_methodGVKe KLsimple_machine_word_arrayGZ32ZconstructorVKiMM0;
D KLsimple_machine_word_arrayGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_11 K305;
static _KLsimple_object_vectorGVKd_2 K306;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_machine_word_arrayG;
static _KLsimple_closure_methodGVKi_0 K310;
static D K310I ();
static D K312I ();
static _KLkeyword_signatureAvaluesGVKi K313;
static _KLsimple_object_vectorGVKd_1 K314;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_machine_word_arrayG;
static _KLmachine_wordGVKe K316;
extern _KLsealed_generic_functionGVKe Krow_major_machine_word_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_machine_word_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_machine_word_array_element_setterVKiMM0;
static _KLpairGVKd K320;
static _KLbyte_stringGVKd_43 K321;
extern _KLrepeated_getter_methodGVKi Krow_major_machine_word_array_elementVKiMM0;
static _KLpairGVKd K323;
static _KLbyte_stringGVKd_36 K324;
static _KLbyte_stringGVKd_27 K325;
static _KLkeyword_signatureAvaluesGVKi K326;
static _KLsimple_object_vectorGVKd_1 K327;
static _KLsingletonGVKd K328;
extern _KLclassGVKd KLsimple_element_type_arrayGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_element_type_arrayGVKeW;
static _KLimplementation_classGVKe K331;
extern _KLrepeated_slot_descriptorGVKe Krow_major_element_type_array_elementVKiHLsimple_element_type_arrayG;
static _KLsimple_object_vectorGVKd_3 K333;
extern _KLkeyword_methodGVKe KLsimple_element_type_arrayGZ32ZconstructorVKiMM0;
D KLsimple_element_type_arrayGZ32ZconstructorVKiMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K336;
static _KLsimple_object_vectorGVKd_12 K337;
static _KLsimple_object_vectorGVKd_2 K338;
static _KLsimple_object_vectorGVKd_3 K339;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_element_type_arrayG;
static _KLsimple_closure_methodGVKi_0 K343;
static D K343I ();
static D K345I ();
static _KLkeyword_signatureAvaluesGVKi K346;
static _KLsimple_object_vectorGVKd_6 K347;
static _KLsimple_object_vectorGVKd_3 K348;
static _KLsimple_object_vectorGVKd_1 K349;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_element_type_arrayG;
extern _KLsealed_generic_functionGVKe Krow_major_element_type_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_element_type_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_element_type_array_element_setterVKiMM0;
static _KLpairGVKd K354;
static _KLbyte_stringGVKd_43 K355;
extern _KLrepeated_getter_methodGVKi Krow_major_element_type_array_elementVKiMM0;
static _KLpairGVKd K357;
static _KLbyte_stringGVKd_36 K358;
static _KLbyte_stringGVKd_27 K359;
static _KLkeyword_signatureAvaluesGVKi K360;
static _KLsimple_object_vectorGVKd_6 K361;
static _KLsimple_object_vectorGVKd_1 K362;
static _KLsimple_object_vectorGVKd_3 K363;
static _KLsingletonGVKd K364;
extern _KLclassGVKd KLsimple_double_byte_arrayGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_double_byte_arrayGVKeW;
static _KLimplementation_classGVKe K367;
extern _KLrepeated_slot_descriptorGVKe Krow_major_double_byte_array_elementVKiHLsimple_double_byte_arrayG;
static _KLsimple_object_vectorGVKd_2 K369;
extern _KLkeyword_methodGVKe KLsimple_double_byte_arrayGZ32ZconstructorVKiMM0;
D KLsimple_double_byte_arrayGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_11 K372;
static _KLsimple_object_vectorGVKd_2 K373;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_double_byte_arrayG;
static _KLsimple_closure_methodGVKi_0 K377;
static D K377I ();
static D K379I ();
static _KLkeyword_signatureAvaluesGVKi K380;
static _KLsimple_object_vectorGVKd_1 K381;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_byte_arrayG;
extern _KLsealed_generic_functionGVKe Krow_major_double_byte_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_double_byte_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_double_byte_array_element_setterVKiMM0;
static _KLpairGVKd K386;
static _KLbyte_stringGVKd_42 K387;
extern _KLrepeated_getter_methodGVKi Krow_major_double_byte_array_elementVKiMM0;
static _KLpairGVKd K389;
static _KLbyte_stringGVKd_35 K390;
static _KLbyte_stringGVKd_26 K391;
static _KLkeyword_signatureAvaluesGVKi K392;
static _KLsimple_object_vectorGVKd_1 K393;
static _KLsingletonGVKd K394;
extern _KLclassGVKd KLsimple_byte_arrayGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_arrayGVKeW;
static _KLimplementation_classGVKe K397;
extern _KLrepeated_slot_descriptorGVKe Krow_major_byte_array_elementVKiHLsimple_byte_arrayG;
static _KLsimple_object_vectorGVKd_2 K399;
extern _KLkeyword_methodGVKe KLsimple_byte_arrayGZ32ZconstructorVKiMM0;
D KLsimple_byte_arrayGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_11 K402;
static _KLsimple_object_vectorGVKd_2 K403;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_byte_arrayG;
static _KLsimple_closure_methodGVKi_0 K407;
static D K407I ();
static D K409I ();
static _KLkeyword_signatureAvaluesGVKi K410;
static _KLsimple_object_vectorGVKd_1 K411;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_byte_arrayG;
extern _KLsealed_generic_functionGVKe Krow_major_byte_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_byte_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_byte_array_element_setterVKiMM0;
static _KLpairGVKd K416;
static _KLbyte_stringGVKd_35 K417;
extern _KLrepeated_getter_methodGVKi Krow_major_byte_array_elementVKiMM0;
static _KLpairGVKd K419;
static _KLbyte_stringGVKd_28 K420;
static _KLbyte_stringGVKd_19 K421;
static _KLkeyword_signatureAvaluesGVKi K422;
static _KLsimple_object_vectorGVKd_1 K423;
static _KLsingletonGVKd K424;
extern _KLclassGVKd KLsimple_integer_arrayGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_integer_arrayGVKeW;
static _KLimplementation_classGVKe K427;
extern _KLrepeated_slot_descriptorGVKe Krow_major_integer_array_elementVKiHLsimple_integer_arrayG;
static _KLsimple_object_vectorGVKd_2 K429;
extern _KLkeyword_methodGVKe KLsimple_integer_arrayGZ32ZconstructorVKiMM0;
D KLsimple_integer_arrayGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_11 K432;
static _KLsimple_object_vectorGVKd_2 K433;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_integer_arrayG;
static _KLsimple_closure_methodGVKi_0 K437;
static D K437I ();
static D K439I ();
static _KLkeyword_signatureAvaluesGVKi K440;
static _KLsimple_object_vectorGVKd_1 K441;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_integer_arrayG;
extern _KLsealed_generic_functionGVKe Krow_major_integer_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_integer_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_integer_array_element_setterVKiMM0;
static _KLpairGVKd K446;
static _KLbyte_stringGVKd_38 K447;
extern _KLrepeated_getter_methodGVKi Krow_major_integer_array_elementVKiMM0;
static _KLpairGVKd K449;
static _KLbyte_stringGVKd_31 K450;
static _KLbyte_stringGVKd_22 K451;
static _KLkeyword_signatureAvaluesGVKi K452;
static _KLsimple_object_vectorGVKd_1 K453;
static _KLsingletonGVKd K454;
static _KLsignatureAvaluesGVKi K455;
static _KLsimple_object_vectorGVKd_1 K456;
static _KLsingletonGVKd K457;
static _KLsignatureAvaluesGVKi K458;
static _KLsimple_object_vectorGVKd_1 K459;
static _KLsingletonGVKd K460;
static _KLsignatureAvaluesGVKi K461;
static _KLsimple_object_vectorGVKd_1 K462;
static _KLsingletonGVKd K463;
static _KLsignatureAvaluesGVKi K464;
static _KLsignatureAvaluesGVKi K465;
static _KLsignatureAvaluesGVKi K466;
static _KLsimple_object_vectorGVKd_1 K467;
static _KLsingletonGVKd K468;
static _KLkeyword_signatureAvaluesGVKi K469;
static _KLsimple_object_vectorGVKd_4 K470;
static _KLsimple_object_vectorGVKd_2 K471;
static _KLsimple_object_vectorGVKd_2 K472;
static _KLsimple_object_vectorGVKd_2 K473;
static _KLkeyword_signatureAvaluesGVKi K474;
static _KLsimple_object_vectorGVKd_2 K475;
static _KLkeyword_signatureAvaluesGVKi K476;
static _KLsimple_object_vectorGVKd_2 K477;
static _KLkeyword_signatureAvaluesGVKi K478;
static _KLsimple_object_vectorGVKd_2 K479;
static _KLkeyword_signatureAvaluesGVKi K480;
static _KLsimple_object_vectorGVKd_2 K481;
static _KLkeyword_signatureAvaluesGVKi K482;
static _KLsimple_object_vectorGVKd_2 K483;
static _KLkeyword_signatureAvaluesGVKi K484;
static _KLsimple_object_vectorGVKd_2 K485;
static _KLsignatureAvaluesGVKi K486;
static _KLsimple_object_vectorGVKd_3 K487;
static _KLsignatureAvaluesGVKi K488;
static _KLsimple_object_vectorGVKd_3 K489;
static _KLsignatureAvaluesGVKi K490;
static _KLsimple_object_vectorGVKd_3 K491;
static _KLsignatureGVKe K492;
static _KLsimple_object_vectorGVKd_3 K493;
static _KLsignatureAvaluesGVKi K494;
static _KLsimple_object_vectorGVKd_3 K495;
static _KLsimple_object_vectorGVKd_1 K496;
static _KLsignatureAvaluesGVKi K497;
static _KLsimple_object_vectorGVKd_3 K498;
static _KLsimple_object_vectorGVKd_1 K499;
static _KLsignatureAvaluesGVKi K500;
static _KLsimple_object_vectorGVKd_3 K501;
static _KLkeyword_signatureAvaluesGVKi K502;
static _KLsimple_object_vectorGVKd_2 K503;
static _KLsimple_object_vectorGVKd_2 K504;
static _KLsimple_object_vectorGVKd_1 K505;
static _KLkeyword_signatureAvaluesGVKi K506;
static _KLsimple_object_vectorGVKd_2 K507;
static _KLkeyword_signatureAvaluesGVKi K508;
static _KLsimple_object_vectorGVKd_2 K509;
static _KLkeyword_signatureGVKe K510;
static _KLsimple_object_vectorGVKd_2 K511;
static _KLkeyword_signatureAvaluesGVKi K512;
static _KLsimple_object_vectorGVKd_2 K513;
static _KLkeyword_signatureAvaluesGVKi K514;
static _KLsimple_object_vectorGVKd_2 K515;
static _KLkeyword_signatureAvaluesGVKi K516;
static _KLsimple_object_vectorGVKd_2 K517;
static _KLsignatureAvaluesGVKi K518;
static _KLsignatureAvaluesGVKi K519;
static _KLsignatureAvaluesGVKi K520;
static _KLsignatureAvaluesGVKi K521;
static _KLsignatureAvaluesGVKi K522;
static _KLsignatureAvaluesGVKi K523;
static _KLsignatureAvaluesGVKi K524;
static _KLsimple_object_vectorGVKd_1 K525;

/* Indirection variables */


/* Variables */

D Lsimple_integer_arrayGVKe = &KLsimple_integer_arrayGVKe;
D Lsimple_byte_arrayGVKe = &KLsimple_byte_arrayGVKe;
D Lsimple_double_byte_arrayGVKe = &KLsimple_double_byte_arrayGVKe;
D Lsimple_element_type_arrayGVKe = &KLsimple_element_type_arrayGVKe;
D Lsimple_machine_word_arrayGVKe = &KLsimple_machine_word_arrayGVKe;
D Lsimple_single_float_arrayGVKe = &KLsimple_single_float_arrayGVKe;
D Lsimple_double_float_arrayGVKe = &KLsimple_double_float_arrayGVKe;

/* Objects */

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_21 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_20,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_22 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_21,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_23 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_22,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_24 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_23,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_25 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_24,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_26 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_25,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_27 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_26,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLgetter_methodGVKi KsizeVKdMM7 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_integer_arrayG
};

_KLgetter_methodGVKi KsizeVKdMM8 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_byte_arrayG
};

_KLgetter_methodGVKi KsizeVKdMM9 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_double_byte_arrayG
};

_KLgetter_methodGVKi KsizeVKdMM10 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_element_type_arrayG
};

_KLgetter_methodGVKi KsizeVKdMM11 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_machine_word_arrayG
};

_KLgetter_methodGVKi KsizeVKdMM12 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_single_float_arrayG
};

_KLgetter_methodGVKi KsizeVKdMM13 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_double_float_arrayG
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_37 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_36,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_38 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_37,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_39 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_38,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_40 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_39,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_41 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_40,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_42 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_41,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_43 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_42,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K524,
  &Ktype_for_copyVKdMM4I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_19,
  &Ktype_for_copyVKdMM4
};

_KLsimple_methodGVKe Kelement_typeVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K523,
  &Kelement_typeVKeMM3I
};

_KLsimple_methodGVKe Kelement_typeVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K522,
  &Kelement_typeVKeMM4I
};

_KLsimple_methodGVKe Kelement_typeVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K521,
  &Kelement_typeVKeMM5I
};

_KLsimple_methodGVKe Kelement_typeVKeMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K520,
  &Kelement_typeVKeMM6I
};

_KLsimple_methodGVKe Kelement_typeVKeMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K519,
  &Kelement_typeVKeMM7I
};

_KLsimple_methodGVKe Kelement_typeVKeMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K518,
  &Kelement_typeVKeMM8I
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_28 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_27,
  &Kelement_typeVKeMM8
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_29 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_28,
  &Kelement_typeVKeMM7
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_30 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_29,
  &Kelement_typeVKeMM6
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_31 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_30,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_32 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_31,
  &Kelement_typeVKeMM5
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_33 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_32,
  &Kelement_typeVKeMM4
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_34 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_33,
  &Kelement_typeVKeMM3
};

_KLkeyword_methodGVKe KelementVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K516,
  &key_mep_4,
  &KelementVKdMM4I,
  &K517
};

_KLkeyword_methodGVKe KelementVKdMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K514,
  &key_mep_4,
  &KelementVKdMM5I,
  &K517
};

_KLkeyword_methodGVKe KelementVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K512,
  &key_mep_4,
  &KelementVKdMM6I,
  &K517
};

_KLkeyword_methodGVKe KelementVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K510,
  &key_mep_4,
  &KelementVKdMM7I,
  &K517
};

_KLkeyword_methodGVKe KelementVKdMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K508,
  &key_mep_4,
  &KelementVKdMM8I,
  &K517
};

_KLkeyword_methodGVKe KelementVKdMM9 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K506,
  &key_mep_4,
  &KelementVKdMM9I,
  &K517
};

_KLkeyword_methodGVKe KelementVKdMM10 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K502,
  &key_mep_4,
  &KelementVKdMM10I,
  &K517
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_24 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_23,
  &KelementVKdMM10
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_25 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_24,
  &KelementVKdMM9
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_26 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_25,
  &KelementVKdMM8
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_27 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_26,
  &KelementVKdMM7
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_28 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_27,
  &KelementVKdMM6
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_29 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_28,
  &KelementVKdMM5
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_30 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_29,
  &KelementVKdMM4
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K516,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM2I,
  &K503
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K514,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM3I,
  &K503
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K512,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM4I,
  &K503
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K510,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM5I,
  &K503
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K508,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM6I,
  &K503
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K506,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM7I,
  &K503
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K502,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM8I,
  &K503
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_16,
  &Kelement_no_bounds_checkVKeMM8
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_17,
  &Kelement_no_bounds_checkVKeMM7
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_19 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_18,
  &Kelement_no_bounds_checkVKeMM6
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_19,
  &Kelement_no_bounds_checkVKeMM5
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_21 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_20,
  &Kelement_no_bounds_checkVKeMM4
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_22 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_21,
  &Kelement_no_bounds_checkVKeMM3
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_23 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_22,
  &Kelement_no_bounds_checkVKeMM2
};

_KLsimple_methodGVKe Kelement_setterVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K500,
  &Kelement_setterVKdMM4I
};

_KLsimple_methodGVKe Kelement_setterVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K497,
  &Kelement_setterVKdMM5I
};

_KLsimple_methodGVKe Kelement_setterVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K494,
  &Kelement_setterVKdMM6I
};

_KLsimple_methodGVKe Kelement_setterVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K492,
  &Kelement_setterVKdMM7I
};

_KLsimple_methodGVKe Kelement_setterVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K490,
  &Kelement_setterVKdMM8I
};

_KLsimple_methodGVKe Kelement_setterVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K488,
  &Kelement_setterVKdMM9I
};

_KLsimple_methodGVKe Kelement_setterVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K486,
  &Kelement_setterVKdMM10I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_22 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_21,
  &Kelement_setterVKdMM10
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_23 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_22,
  &Kelement_setterVKdMM9
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_24 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_23,
  &Kelement_setterVKdMM8
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_25 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_24,
  &Kelement_setterVKdMM7
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_26 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_25,
  &Kelement_setterVKdMM6
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_27 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_26,
  &Kelement_setterVKdMM5
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_28 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_27,
  &Kelement_setterVKdMM4
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K500,
  &Kelement_no_bounds_check_setterVKeMM4I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K497,
  &Kelement_no_bounds_check_setterVKeMM5I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K494,
  &Kelement_no_bounds_check_setterVKeMM6I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K492,
  &Kelement_no_bounds_check_setterVKeMM7I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K490,
  &Kelement_no_bounds_check_setterVKeMM8I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K488,
  &Kelement_no_bounds_check_setterVKeMM9I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K486,
  &Kelement_no_bounds_check_setterVKeMM10I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_19 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_18,
  &Kelement_no_bounds_check_setterVKeMM10
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_19,
  &Kelement_no_bounds_check_setterVKeMM9
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_21 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_20,
  &Kelement_no_bounds_check_setterVKeMM8
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_22 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_21,
  &Kelement_no_bounds_check_setterVKeMM7
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_23 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_22,
  &Kelement_no_bounds_check_setterVKeMM6
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_24 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_23,
  &Kelement_no_bounds_check_setterVKeMM5
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_25 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_24,
  &Kelement_no_bounds_check_setterVKeMM4
};

_KLkeyword_methodGVKe KfillXVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K484,
  &key_mep_5,
  &KfillXVKdMM4I,
  &K470
};

_KLkeyword_methodGVKe KfillXVKdMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K482,
  &key_mep_5,
  &KfillXVKdMM5I,
  &K470
};

_KLkeyword_methodGVKe KfillXVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K480,
  &key_mep_5,
  &KfillXVKdMM6I,
  &K470
};

_KLkeyword_methodGVKe KfillXVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K478,
  &key_mep_5,
  &KfillXVKdMM7I,
  &K470
};

_KLkeyword_methodGVKe KfillXVKdMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K476,
  &key_mep_5,
  &KfillXVKdMM8I,
  &K470
};

_KLkeyword_methodGVKe KfillXVKdMM9 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K474,
  &key_mep_5,
  &KfillXVKdMM9I,
  &K470
};

_KLkeyword_methodGVKe KfillXVKdMM10 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K469,
  &key_mep_5,
  &KfillXVKdMM10I,
  &K470
};

_KLgetter_methodGVKi KdimensionsVKdMM1 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_integer_arrayG
};

_KLgetter_methodGVKi KdimensionsVKdMM2 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_byte_arrayG
};

_KLgetter_methodGVKi KdimensionsVKdMM3 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_double_byte_arrayG
};

_KLgetter_methodGVKi KdimensionsVKdMM4 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_element_type_arrayG
};

_KLgetter_methodGVKi KdimensionsVKdMM5 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_machine_word_arrayG
};

_KLgetter_methodGVKi KdimensionsVKdMM6 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_single_float_arrayG
};

_KLgetter_methodGVKi KdimensionsVKdMM7 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_double_float_arrayG
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KrankVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KrankVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KrankVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KrankVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KrankVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KrankVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 9,
  &KLsimple_double_float_arrayGVKe,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_0,
  (D) 9,
  &KLsimple_single_float_arrayGVKe,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_1,
  (D) 9,
  &KLsimple_machine_word_arrayGVKe,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_2,
  (D) 9,
  &KLsimple_element_type_arrayGVKe,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_3,
  (D) 9,
  &KLsimple_double_byte_arrayGVKe,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_4,
  (D) 9,
  &KLsimple_byte_arrayGVKe,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_5,
  (D) 9,
  &KLsimple_integer_arrayGVKe,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 9,
  &KLdouble_floatGVKd,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_0,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_1,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_2,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_3,
  (D) 9,
  &KLdouble_byteGVKe,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_4,
  (D) 9,
  &KLbyteGVKe,
  &KLsimple_byte_arrayGVKe
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_5,
  (D) 9,
  &KLintegerGVKd,
  &KLsimple_integer_arrayGVKe
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KarefVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KarefVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KarefVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KarefVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KarefVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KarefVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_45 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_44,
  &KmakeVKdMM14
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_29 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_28,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K466,
  &Kconcrete_limited_array_classVKiMM1I
};

_KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K465,
  &Kconcrete_limited_array_classVKiMM2I
};

_KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K464,
  &Kconcrete_limited_array_classVKiMM3I
};

_KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K461,
  &Kconcrete_limited_array_classVKiMM4I
};

_KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K458,
  &Kconcrete_limited_array_classVKiMM5I
};

_KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K455,
  &Kconcrete_limited_array_classVKiMM6I
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_23 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_22,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_24 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_23,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_25 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_24,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_26 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_25,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_27 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_26,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_28 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_27,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLkeyword_methodGVKe KmakeVKdMM14 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K452,
  &key_mep_4,
  &KmakeVKdMM14I,
  &K263
};

_KLkeyword_methodGVKe KmakeVKdMM15 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K422,
  &key_mep_4,
  &KmakeVKdMM15I,
  &K263
};

_KLkeyword_methodGVKe KmakeVKdMM16 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K392,
  &key_mep_4,
  &KmakeVKdMM16I,
  &K263
};

_KLkeyword_methodGVKe KmakeVKdMM17 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K360,
  &key_mep_5,
  &KmakeVKdMM17I,
  &K361
};

_KLkeyword_methodGVKe KmakeVKdMM18 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K326,
  &key_mep_4,
  &KmakeVKdMM18I,
  &K263
};

_KLkeyword_methodGVKe KmakeVKdMM19 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K295,
  &key_mep_4,
  &KmakeVKdMM19I,
  &K263
};

_KLkeyword_methodGVKe KmakeVKdMM20 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K262,
  &key_mep_4,
  &KmakeVKdMM20I,
  &K263
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_39 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_38,
  &KmakeVKdMM20
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_40 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_39,
  &KmakeVKdMM19
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_41 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_40,
  &KmakeVKdMM18
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_42 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_41,
  &KmakeVKdMM17
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_43 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_42,
  &KmakeVKdMM16
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_44 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_43,
  &KmakeVKdMM15
};

_KLclassGVKd KLsimple_double_float_arrayGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K261,
  &K232,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_double_float_arrayGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K232,
  (D) 4609,
  5,
  33554432,
  (D) 1
};

static _KLimplementation_classGVKe K232 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_double_float_arrayGVKe,
  &KLsimple_double_float_arrayGVKeW,
  &Krow_major_double_float_array_elementVKiHLsimple_double_float_arrayG,
  &K234,
  (D) 6577,
  &KLsimple_double_float_arrayGZ32ZconstructorVKiMM0,
  &K237,
  &K238,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K239,
  &K239,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_double_float_array_elementVKiHLsimple_double_float_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K252,
  &KLsimple_double_float_arrayGVKe,
  &KJfill_,
  &Krow_major_double_float_array_elementVKi,
  &Krow_major_double_float_array_element_setterVKi,
  &KLdouble_floatGVKd,
  &KsizeVKdHLsimple_double_float_arrayG
};

static _KLsimple_object_vectorGVKd_2 K234 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_double_float_arrayG,
  &KsizeVKdHLsimple_double_float_arrayG
};

_KLkeyword_methodGVKe KLsimple_double_float_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K247,
  &key_mep_2,
  &KLsimple_double_float_arrayGZ32ZconstructorVKiMM0I,
  &K248
};

static _KLsimple_object_vectorGVKd_1 K237 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_arrayGVKi
};

static _KLsimple_object_vectorGVKd_11 K238 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi,
  &KLsimple_double_float_arrayGVKe
};

static _KLsimple_object_vectorGVKd_2 K239 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_double_float_arrayG,
  &Krow_major_double_float_array_elementVKiHLsimple_double_float_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_double_float_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K243,
  &KLsimple_double_float_arrayGVKe,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K243 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K244,
  &K243I,
  (D) 1
};

static _KLsignatureGVKe K244 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K247 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K249,
  &KDsignature_LobjectG_typesVKi,
  &K250
};

static _KLsimple_object_vectorGVKd_4 K248 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdimensions_,
  &KPunboundVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K249 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdimensions_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K250 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_double_float_arrayGVKe
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_float_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_double_float_arrayGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLdouble_floatGVKd K252 = {
  &KLdouble_floatGVKdW /* wrapper */,
  0.0e0
};

_KLsealed_generic_functionGVKe Krow_major_double_float_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K260,
  &K259,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_double_float_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K257,
  &K256,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_double_float_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_double_float_array_elementVKiHLsimple_double_float_arrayG
};

static _KLpairGVKd K256 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_double_float_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_43 K257 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "row-major-double-float-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_double_float_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_double_float_array_elementVKiHLsimple_double_float_arrayG
};

static _KLpairGVKd K259 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_double_float_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_36 K260 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "row-major-double-float-array-element"
};

static _KLbyte_stringGVKd_27 K261 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<simple-double-float-array>"
};

static _KLkeyword_signatureAvaluesGVKi K262 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K264,
  &K265,
  &KDsignature_LobjectG_typesVKi,
  &K250
};

static _KLsimple_object_vectorGVKd_4 K263 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdimensions_,
  &Kunsupplied_objectVKi,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K264 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K266
};

static _KLsimple_object_vectorGVKd_2 K265 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdimensions_,
  &KJfill_
};

static _KLsingletonGVKd K266 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_double_float_arrayGVKe
};

_KLclassGVKd KLsimple_single_float_arrayGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K294,
  &K269,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_single_float_arrayGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K269,
  (D) 4609,
  5,
  33554476,
  (D) 1
};

static _KLimplementation_classGVKe K269 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_single_float_arrayGVKe,
  &KLsimple_single_float_arrayGVKeW,
  &Krow_major_single_float_array_elementVKiHLsimple_single_float_arrayG,
  &K271,
  (D) 6569,
  &KLsimple_single_float_arrayGZ32ZconstructorVKiMM0,
  &K237,
  &K274,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K275,
  &K275,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_single_float_array_elementVKiHLsimple_single_float_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K285,
  &KLsimple_single_float_arrayGVKe,
  &KJfill_,
  &Krow_major_single_float_array_elementVKi,
  &Krow_major_single_float_array_element_setterVKi,
  &KLsingle_floatGVKd,
  &KsizeVKdHLsimple_single_float_arrayG
};

static _KLsimple_object_vectorGVKd_2 K271 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_single_float_arrayG,
  &KsizeVKdHLsimple_single_float_arrayG
};

_KLkeyword_methodGVKe KLsimple_single_float_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K282,
  &key_mep_2,
  &KLsimple_single_float_arrayGZ32ZconstructorVKiMM0I,
  &K248
};

static _KLsimple_object_vectorGVKd_11 K274 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi,
  &KLsimple_single_float_arrayGVKe
};

static _KLsimple_object_vectorGVKd_2 K275 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_single_float_arrayG,
  &Krow_major_single_float_array_elementVKiHLsimple_single_float_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_single_float_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K279,
  &KLsimple_single_float_arrayGVKe,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K279 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K244,
  &K279I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K282 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K249,
  &KDsignature_LobjectG_typesVKi,
  &K283
};

static _KLsimple_object_vectorGVKd_1 K283 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_single_float_arrayGVKe
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_single_float_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_single_float_arrayGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsingle_floatGVKd K285 = {
  &KLsingle_floatGVKdW /* wrapper */,
  0.0
};

_KLsealed_generic_functionGVKe Krow_major_single_float_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K293,
  &K292,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_single_float_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K290,
  &K289,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_single_float_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_single_float_array_elementVKiHLsimple_single_float_arrayG
};

static _KLpairGVKd K289 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_single_float_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_43 K290 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "row-major-single-float-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_single_float_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_single_float_array_elementVKiHLsimple_single_float_arrayG
};

static _KLpairGVKd K292 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_single_float_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_36 K293 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "row-major-single-float-array-element"
};

static _KLbyte_stringGVKd_27 K294 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<simple-single-float-array>"
};

static _KLkeyword_signatureAvaluesGVKi K295 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K296,
  &K265,
  &KDsignature_LobjectG_typesVKi,
  &K283
};

static _KLsimple_object_vectorGVKd_1 K296 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K297
};

static _KLsingletonGVKd K297 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_single_float_arrayGVKe
};

_KLclassGVKd KLsimple_machine_word_arrayGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K325,
  &K300,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_machine_word_arrayGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K300,
  (D) 4609,
  5,
  33554432,
  (D) 1
};

static _KLimplementation_classGVKe K300 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_machine_word_arrayGVKe,
  &KLsimple_machine_word_arrayGVKeW,
  &Krow_major_machine_word_array_elementVKiHLsimple_machine_word_arrayG,
  &K302,
  (D) 6561,
  &KLsimple_machine_word_arrayGZ32ZconstructorVKiMM0,
  &K237,
  &K305,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K306,
  &K306,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_machine_word_array_elementVKiHLsimple_machine_word_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K316,
  &KLsimple_machine_word_arrayGVKe,
  &KJfill_,
  &Krow_major_machine_word_array_elementVKi,
  &Krow_major_machine_word_array_element_setterVKi,
  &KLmachine_wordGVKe,
  &KsizeVKdHLsimple_machine_word_arrayG
};

static _KLsimple_object_vectorGVKd_2 K302 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_machine_word_arrayG,
  &KsizeVKdHLsimple_machine_word_arrayG
};

_KLkeyword_methodGVKe KLsimple_machine_word_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K313,
  &key_mep_2,
  &KLsimple_machine_word_arrayGZ32ZconstructorVKiMM0I,
  &K248
};

static _KLsimple_object_vectorGVKd_11 K305 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi,
  &KLsimple_machine_word_arrayGVKe
};

static _KLsimple_object_vectorGVKd_2 K306 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_machine_word_arrayG,
  &Krow_major_machine_word_array_elementVKiHLsimple_machine_word_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_machine_word_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K310,
  &KLsimple_machine_word_arrayGVKe,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K310 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K244,
  &K310I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K313 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K249,
  &KDsignature_LobjectG_typesVKi,
  &K314
};

static _KLsimple_object_vectorGVKd_1 K314 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_machine_word_arrayGVKe
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_machine_word_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_machine_word_arrayGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLmachine_wordGVKe K316 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

_KLsealed_generic_functionGVKe Krow_major_machine_word_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K324,
  &K323,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_machine_word_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K321,
  &K320,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_machine_word_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_machine_word_array_elementVKiHLsimple_machine_word_arrayG
};

static _KLpairGVKd K320 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_machine_word_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_43 K321 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "row-major-machine-word-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_machine_word_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_machine_word_array_elementVKiHLsimple_machine_word_arrayG
};

static _KLpairGVKd K323 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_machine_word_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_36 K324 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "row-major-machine-word-array-element"
};

static _KLbyte_stringGVKd_27 K325 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<simple-machine-word-array>"
};

static _KLkeyword_signatureAvaluesGVKi K326 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K327,
  &K265,
  &KDsignature_LobjectG_typesVKi,
  &K314
};

static _KLsimple_object_vectorGVKd_1 K327 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K328
};

static _KLsingletonGVKd K328 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_machine_word_arrayGVKe
};

_KLclassGVKd KLsimple_element_type_arrayGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K359,
  &K331,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_element_type_arrayGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K331,
  (D) 4609,
  9,
  33554434,
  (D) 1
};

static _KLimplementation_classGVKe K331 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958029,
  &KLsimple_element_type_arrayGVKe,
  &KLsimple_element_type_arrayGVKeW,
  &Krow_major_element_type_array_elementVKiHLsimple_element_type_arrayG,
  &K333,
  (D) 6553,
  &KLsimple_element_type_arrayGZ32ZconstructorVKiMM0,
  &K336,
  &K337,
  (D) 45,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K338,
  &K339,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_element_type_array_elementVKiHLsimple_element_type_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLsimple_element_type_arrayGVKe,
  &KJfill_,
  &Krow_major_element_type_array_elementVKi,
  &Krow_major_element_type_array_element_setterVKi,
  &KLobjectGVKd,
  &KsizeVKdHLsimple_element_type_arrayG
};

static _KLsimple_object_vectorGVKd_3 K333 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kelement_typeVKeHLlimited_collectionG,
  &KdimensionsVKdHLsimple_element_type_arrayG,
  &KsizeVKdHLsimple_element_type_arrayG
};

_KLkeyword_methodGVKe KLsimple_element_type_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K346,
  &key_mep_2,
  &KLsimple_element_type_arrayGZ32ZconstructorVKiMM0I,
  &K347
};

static _KLsimple_object_vectorGVKd_2 K336 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_arrayGVKi,
  &KLlimited_collectionGVKe
};

static _KLsimple_object_vectorGVKd_12 K337 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLlimited_collectionGVKe,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi,
  &KLsimple_element_type_arrayGVKe
};

static _KLsimple_object_vectorGVKd_2 K338 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_element_type_arrayG,
  &Krow_major_element_type_array_elementVKiHLsimple_element_type_arrayG
};

static _KLsimple_object_vectorGVKd_3 K339 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Kelement_typeVKeHLlimited_collectionG,
  &KdimensionsVKdHLsimple_element_type_arrayG,
  &Krow_major_element_type_array_elementVKiHLsimple_element_type_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_element_type_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K343,
  &KLsimple_element_type_arrayGVKe,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K343 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K244,
  &K343I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K346 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K348,
  &KDsignature_LobjectG_typesVKi,
  &K349
};

static _KLsimple_object_vectorGVKd_6 K347 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJdimensions_,
  &KPunboundVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_3 K348 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJelement_type_,
  &KJdimensions_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K349 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_element_type_arrayGVKe
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_element_type_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_element_type_arrayGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Krow_major_element_type_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K358,
  &K357,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_element_type_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K355,
  &K354,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_element_type_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_element_type_array_elementVKiHLsimple_element_type_arrayG
};

static _KLpairGVKd K354 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_element_type_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_43 K355 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "row-major-element-type-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_element_type_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_element_type_array_elementVKiHLsimple_element_type_arrayG
};

static _KLpairGVKd K357 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_element_type_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_36 K358 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "row-major-element-type-array-element"
};

static _KLbyte_stringGVKd_27 K359 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<simple-element-type-array>"
};

static _KLkeyword_signatureAvaluesGVKi K360 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K362,
  &K363,
  &KDsignature_LobjectG_typesVKi,
  &K349
};

static _KLsimple_object_vectorGVKd_6 K361 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJdimensions_,
  &Kunsupplied_objectVKi,
  &KJelement_type_,
  &KPfalseVKi,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K362 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K364
};

static _KLsimple_object_vectorGVKd_3 K363 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJdimensions_,
  &KJelement_type_,
  &KJfill_
};

static _KLsingletonGVKd K364 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_element_type_arrayGVKe
};

_KLclassGVKd KLsimple_double_byte_arrayGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K391,
  &K367,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_double_byte_arrayGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K367,
  (D) 4609,
  5,
  33554468,
  (D) 1
};

static _KLimplementation_classGVKe K367 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_double_byte_arrayGVKe,
  &KLsimple_double_byte_arrayGVKeW,
  &Krow_major_double_byte_array_elementVKiHLsimple_double_byte_arrayG,
  &K369,
  (D) 6545,
  &KLsimple_double_byte_arrayGZ32ZconstructorVKiMM0,
  &K237,
  &K372,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K373,
  &K373,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_double_byte_array_elementVKiHLsimple_double_byte_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_double_byte_arrayGVKe,
  &KJfill_,
  &Krow_major_double_byte_array_elementVKi,
  &Krow_major_double_byte_array_element_setterVKi,
  &KLdouble_byteGVKe,
  &KsizeVKdHLsimple_double_byte_arrayG
};

static _KLsimple_object_vectorGVKd_2 K369 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_double_byte_arrayG,
  &KsizeVKdHLsimple_double_byte_arrayG
};

_KLkeyword_methodGVKe KLsimple_double_byte_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K380,
  &key_mep_2,
  &KLsimple_double_byte_arrayGZ32ZconstructorVKiMM0I,
  &K248
};

static _KLsimple_object_vectorGVKd_11 K372 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi,
  &KLsimple_double_byte_arrayGVKe
};

static _KLsimple_object_vectorGVKd_2 K373 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_double_byte_arrayG,
  &Krow_major_double_byte_array_elementVKiHLsimple_double_byte_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_double_byte_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K377,
  &KLsimple_double_byte_arrayGVKe,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K377 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K244,
  &K377I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K380 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K249,
  &KDsignature_LobjectG_typesVKi,
  &K381
};

static _KLsimple_object_vectorGVKd_1 K381 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_double_byte_arrayGVKe
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_byte_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_double_byte_arrayGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Krow_major_double_byte_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K390,
  &K389,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_double_byte_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K387,
  &K386,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_double_byte_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_double_byte_array_elementVKiHLsimple_double_byte_arrayG
};

static _KLpairGVKd K386 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_double_byte_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_42 K387 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 169,
  "row-major-double-byte-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_double_byte_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_double_byte_array_elementVKiHLsimple_double_byte_arrayG
};

static _KLpairGVKd K389 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_double_byte_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_35 K390 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "row-major-double-byte-array-element"
};

static _KLbyte_stringGVKd_26 K391 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "<simple-double-byte-array>"
};

static _KLkeyword_signatureAvaluesGVKi K392 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K393,
  &K265,
  &KDsignature_LobjectG_typesVKi,
  &K381
};

static _KLsimple_object_vectorGVKd_1 K393 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K394
};

static _KLsingletonGVKd K394 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_double_byte_arrayGVKe
};

_KLclassGVKd KLsimple_byte_arrayGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K421,
  &K397,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_byte_arrayGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K397,
  (D) 4609,
  5,
  33554460,
  (D) 1
};

static _KLimplementation_classGVKe K397 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_byte_arrayGVKe,
  &KLsimple_byte_arrayGVKeW,
  &Krow_major_byte_array_elementVKiHLsimple_byte_arrayG,
  &K399,
  (D) 6537,
  &KLsimple_byte_arrayGZ32ZconstructorVKiMM0,
  &K237,
  &K402,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K403,
  &K403,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_byte_array_elementVKiHLsimple_byte_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_byte_arrayGVKe,
  &KJfill_,
  &Krow_major_byte_array_elementVKi,
  &Krow_major_byte_array_element_setterVKi,
  &KLbyteGVKe,
  &KsizeVKdHLsimple_byte_arrayG
};

static _KLsimple_object_vectorGVKd_2 K399 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_byte_arrayG,
  &KsizeVKdHLsimple_byte_arrayG
};

_KLkeyword_methodGVKe KLsimple_byte_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K410,
  &key_mep_2,
  &KLsimple_byte_arrayGZ32ZconstructorVKiMM0I,
  &K248
};

static _KLsimple_object_vectorGVKd_11 K402 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi,
  &KLsimple_byte_arrayGVKe
};

static _KLsimple_object_vectorGVKd_2 K403 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_byte_arrayG,
  &Krow_major_byte_array_elementVKiHLsimple_byte_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_byte_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K407,
  &KLsimple_byte_arrayGVKe,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K407 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K244,
  &K407I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K410 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K249,
  &KDsignature_LobjectG_typesVKi,
  &K411
};

static _KLsimple_object_vectorGVKd_1 K411 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_byte_arrayGVKe
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_byte_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_byte_arrayGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Krow_major_byte_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K420,
  &K419,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_byte_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K417,
  &K416,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_byte_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_byte_array_elementVKiHLsimple_byte_arrayG
};

static _KLpairGVKd K416 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_byte_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_35 K417 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "row-major-byte-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_byte_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_byte_array_elementVKiHLsimple_byte_arrayG
};

static _KLpairGVKd K419 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_byte_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K420 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "row-major-byte-array-element"
};

static _KLbyte_stringGVKd_19 K421 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<simple-byte-array>"
};

static _KLkeyword_signatureAvaluesGVKi K422 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K423,
  &K265,
  &KDsignature_LobjectG_typesVKi,
  &K411
};

static _KLsimple_object_vectorGVKd_1 K423 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K424
};

static _KLsingletonGVKd K424 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_byte_arrayGVKe
};

_KLclassGVKd KLsimple_integer_arrayGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K451,
  &K427,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_integer_arrayGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K427,
  (D) 4609,
  5,
  33554434,
  (D) 1
};

static _KLimplementation_classGVKe K427 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_integer_arrayGVKe,
  &KLsimple_integer_arrayGVKeW,
  &Krow_major_integer_array_elementVKiHLsimple_integer_arrayG,
  &K429,
  (D) 6529,
  &KLsimple_integer_arrayGZ32ZconstructorVKiMM0,
  &K237,
  &K432,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K433,
  &K433,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_integer_array_elementVKiHLsimple_integer_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_integer_arrayGVKe,
  &KJfill_,
  &Krow_major_integer_array_elementVKi,
  &Krow_major_integer_array_element_setterVKi,
  &KLintegerGVKd,
  &KsizeVKdHLsimple_integer_arrayG
};

static _KLsimple_object_vectorGVKd_2 K429 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_integer_arrayG,
  &KsizeVKdHLsimple_integer_arrayG
};

_KLkeyword_methodGVKe KLsimple_integer_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K440,
  &key_mep_2,
  &KLsimple_integer_arrayGZ32ZconstructorVKiMM0I,
  &K248
};

static _KLsimple_object_vectorGVKd_11 K432 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi,
  &KLsimple_integer_arrayGVKe
};

static _KLsimple_object_vectorGVKd_2 K433 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_integer_arrayG,
  &Krow_major_integer_array_elementVKiHLsimple_integer_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_integer_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K437,
  &KLsimple_integer_arrayGVKe,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K437 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K244,
  &K437I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K440 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K249,
  &KDsignature_LobjectG_typesVKi,
  &K441
};

static _KLsimple_object_vectorGVKd_1 K441 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_integer_arrayGVKe
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_integer_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_integer_arrayGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Krow_major_integer_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K450,
  &K449,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_integer_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K447,
  &K446,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_integer_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_integer_array_elementVKiHLsimple_integer_arrayG
};

static _KLpairGVKd K446 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_integer_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_38 K447 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "row-major-integer-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_integer_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_integer_array_elementVKiHLsimple_integer_arrayG
};

static _KLpairGVKd K449 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_integer_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_31 K450 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "row-major-integer-array-element"
};

static _KLbyte_stringGVKd_22 K451 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<simple-integer-array>"
};

static _KLkeyword_signatureAvaluesGVKi K452 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K453,
  &K265,
  &KDsignature_LobjectG_typesVKi,
  &K441
};

static _KLsimple_object_vectorGVKd_1 K453 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K454
};

static _KLsingletonGVKd K454 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_integer_arrayGVKe
};

static _KLsignatureAvaluesGVKi K455 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K456,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K456 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K457
};

static _KLsingletonGVKd K457 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdouble_floatGVKd
};

static _KLsignatureAvaluesGVKi K458 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K459,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K459 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K460
};

static _KLsingletonGVKd K460 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsingle_floatGVKd
};

static _KLsignatureAvaluesGVKi K461 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K462,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K462 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K463
};

static _KLsingletonGVKd K463 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K464 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Llimited_integerG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K465 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K466 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K467,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K467 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K468
};

static _KLsingletonGVKd K468 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K469 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K471,
  &K472,
  &K473,
  &K250
};

static _KLsimple_object_vectorGVKd_4 K470 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K471 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_double_float_arrayGVKe,
  &KLdouble_floatGVKd
};

static _KLsimple_object_vectorGVKd_2 K472 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K473 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K474 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K475,
  &K472,
  &K473,
  &K283
};

static _KLsimple_object_vectorGVKd_2 K475 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_single_float_arrayGVKe,
  &KLsingle_floatGVKd
};

static _KLkeyword_signatureAvaluesGVKi K476 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K477,
  &K472,
  &K473,
  &K314
};

static _KLsimple_object_vectorGVKd_2 K477 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_machine_word_arrayGVKe,
  &KLmachine_wordGVKe
};

static _KLkeyword_signatureAvaluesGVKi K478 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K479,
  &K472,
  &K473,
  &K349
};

static _KLsimple_object_vectorGVKd_2 K479 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_element_type_arrayGVKe,
  &KLobjectGVKd
};

static _KLkeyword_signatureAvaluesGVKi K480 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K481,
  &K472,
  &K473,
  &K381
};

static _KLsimple_object_vectorGVKd_2 K481 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_double_byte_arrayGVKe,
  &KLdouble_byteGVKe
};

static _KLkeyword_signatureAvaluesGVKi K482 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K483,
  &K472,
  &K473,
  &K411
};

static _KLsimple_object_vectorGVKd_2 K483 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_byte_arrayGVKe,
  &KLbyteGVKe
};

static _KLkeyword_signatureAvaluesGVKi K484 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K485,
  &K472,
  &K473,
  &K441
};

static _KLsimple_object_vectorGVKd_2 K485 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_integer_arrayGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K486 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K487,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K487 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdouble_floatGVKd,
  &KLsimple_double_float_arrayGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K488 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K489,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K489 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingle_floatGVKd,
  &KLsimple_single_float_arrayGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K490 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K491,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K491 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLsimple_machine_word_arrayGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K492 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K493
};

static _KLsimple_object_vectorGVKd_3 K493 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsimple_element_type_arrayGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K494 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K495,
  &K496
};

static _KLsimple_object_vectorGVKd_3 K495 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdouble_byteGVKe,
  &KLsimple_double_byte_arrayGVKe,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K496 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdouble_byteGVKe
};

static _KLsignatureAvaluesGVKi K497 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K498,
  &K499
};

static _KLsimple_object_vectorGVKd_3 K498 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyteGVKe,
  &KLsimple_byte_arrayGVKe,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K499 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyteGVKe
};

static _KLsignatureAvaluesGVKi K500 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K501,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K501 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLsimple_integer_arrayGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K502 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K504,
  &K505,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K503 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K504 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_double_float_arrayGVKe,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K505 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLkeyword_signatureAvaluesGVKi K506 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K507,
  &K505,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K507 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_single_float_arrayGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K508 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K509,
  &K505,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K509 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_machine_word_arrayGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K510 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K511,
  &K505,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K511 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_element_type_arrayGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K512 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K513,
  &K505,
  &KDsignature_LobjectG_typesVKi,
  &K496
};

static _KLsimple_object_vectorGVKd_2 K513 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_double_byte_arrayGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K514 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K515,
  &K505,
  &KDsignature_LobjectG_typesVKi,
  &K499
};

static _KLsimple_object_vectorGVKd_2 K515 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_byte_arrayGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K516 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K485,
  &K505,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K517 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K518 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K250,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K519 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K283,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K520 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K314,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K521 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K381,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K522 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K411,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K523 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K441,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K524 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K349,
  &K525
};

static _KLsimple_object_vectorGVKd_1 K525 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_mutable_sequence_typeGVKe
};

/* Code */

D Ktype_for_copyVKdMM4I (D array_) {
  D T2_0;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:49
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:51
  T4 = SLOT_VALUE_INITD(array_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:51
  CONGRUENT_CALL_PROLOG(&Klimited_arrayVKe, 2);
  T2_0 = CONGRUENT_CALL2(T4, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:49
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:49
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kelement_typeVKeMM3I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T2_0 = &KLintegerGVKd;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM4I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T2_0 = &KLbyteGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM5I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T2_0 = &KLdouble_byteGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM6I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T2_0 = &KLmachine_wordGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM7I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T2_0 = &KLsingle_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM8I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T2_0 = &KLdouble_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM4I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  D T14_0;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T18;
  D T19_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T9 = SLOT_VALUE_INITD(array_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(array_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T14_0 = T13;
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T15 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      T18 = primitive_instanceQ(default_,&KLintegerGVKd);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      if (T18 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
        T17.vector_element_[0] = &KJvalue_;
        T17.vector_element_[1] = default_;
        T17.vector_element_[2] = &KJtype_;
        T17.vector_element_[3] = &KLintegerGVKd;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T16 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T17);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T16, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      T19_0 = T6_0;
      T7_0 = T19_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM5I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DBYTE T13;
  D T14_0;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T21;
  D T22_0;
  D T23_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T9 = SLOT_VALUE_INITD(array_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T13 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(array_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T15 = primitive_machine_word_shift_left_signal_overflow(T13,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T16 = primitive_machine_word_logior(T15,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T17 = primitive_cast_raw_as_integer(T16);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T14_0 = T17;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T22_0 = T14_0;
    T8_0 = T22_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T18 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      T21 = primitive_instanceQ(default_,&KLbyteGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      if (T21 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
        T20.vector_element_[0] = &KJvalue_;
        T20.vector_element_[1] = default_;
        T20.vector_element_[2] = &KJtype_;
        T20.vector_element_[3] = &KLbyteGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T19 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T20);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T19, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      T23_0 = T6_0;
      T7_0 = T23_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM6I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DDBYTE T13;
  D T14_0;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T21;
  D T22_0;
  D T23_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T9 = SLOT_VALUE_INITD(array_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T13 = REPEATED_DDBYTE_SLOT_VALUE_TAGGED(array_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T15 = primitive_machine_word_shift_left_signal_overflow(T13,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T16 = primitive_machine_word_logior(T15,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T17 = primitive_cast_raw_as_integer(T16);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T14_0 = T17;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T22_0 = T14_0;
    T8_0 = T22_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T18 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      T21 = primitive_instanceQ(default_,&KLdouble_byteGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      if (T21 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
        T20.vector_element_[0] = &KJvalue_;
        T20.vector_element_[1] = default_;
        T20.vector_element_[2] = &KJtype_;
        T20.vector_element_[3] = &KLdouble_byteGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T19 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T20);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T19, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      T23_0 = T6_0;
      T7_0 = T23_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM7I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  D T14_0;
  D T15;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T9 = SLOT_VALUE_INITD(array_, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(array_, 3, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    T14_0 = T13;
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    T15 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T16 = SLOT_VALUE_INITD(array_, 0);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T19 = primitive_instanceQ(default_,T16);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = T16;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM8I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T9 = SLOT_VALUE_INITD(array_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T13 = REPEATED_DWORD_SLOT_VALUE_TAGGED(array_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T14 = primitive_wrap_machine_word(T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      T19 = primitive_instanceQ(default_,&KLmachine_wordGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLmachine_wordGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM9I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DSFLT T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T9 = SLOT_VALUE_INITD(array_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T13 = REPEATED_DSFLT_SLOT_VALUE_TAGGED(array_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T14 = primitive_raw_as_single_float(T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      T19 = primitive_instanceQ(default_,&KLsingle_floatGVKd);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLsingle_floatGVKd;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM10I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DDFLT T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_4 T18 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T9 = SLOT_VALUE_INITD(array_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T13 = REPEATED_DDFLT_SLOT_VALUE_TAGGED(array_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T14 = primitive_raw_as_double_float(T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      T19 = primitive_instanceQ(default_,&KLdouble_floatGVKd);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLdouble_floatGVKd;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM2I (D array_, D index_, D Urest_, D default_) {
  D T5;
  D T6_0;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T5 = REPEATED_D_SLOT_VALUE_TAGGED(array_, 2, T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_checkVKeMM3I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  DBYTE T6;
  D T7_0;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T6 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(array_, 2, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T9 = primitive_machine_word_shift_left_signal_overflow(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T7_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T5_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kelement_no_bounds_checkVKeMM4I (D array_, D index_, D Urest_, D default_) {
  D T5_0;
  DDBYTE T6;
  D T7_0;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T6 = REPEATED_DDBYTE_SLOT_VALUE_TAGGED(array_, 2, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T9 = primitive_machine_word_shift_left_signal_overflow(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T7_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T5_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kelement_no_bounds_checkVKeMM5I (D array_, D index_, D Urest_, D default_) {
  D T5;
  D T6_0;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T5 = REPEATED_D_SLOT_VALUE_TAGGED(array_, 3, T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_checkVKeMM6I (D array_, D index_, D Urest_, D default_) {
  DWORD T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T5 = REPEATED_DWORD_SLOT_VALUE_TAGGED(array_, 2, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_no_bounds_checkVKeMM7I (D array_, D index_, D Urest_, D default_) {
  DSFLT T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T5 = REPEATED_DSFLT_SLOT_VALUE_TAGGED(array_, 2, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T6 = primitive_raw_as_single_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_no_bounds_checkVKeMM8I (D array_, D index_, D Urest_, D default_) {
  DDFLT T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T5 = REPEATED_DDFLT_SLOT_VALUE_TAGGED(array_, 2, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T6 = primitive_raw_as_double_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM4I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  if (T9 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T10 = SLOT_VALUE_INITD(array_, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T12 = primitive_machine_word_less_thanQ(T8,T11);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, array_, 2, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM5I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  if (T9 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T10 = SLOT_VALUE_INITD(array_, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T12 = primitive_machine_word_less_thanQ(T8,T11);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T14 = primitive_cast_integer_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T13 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T13, array_, 2, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM6I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  if (T9 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T10 = SLOT_VALUE_INITD(array_, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T12 = primitive_machine_word_less_thanQ(T8,T11);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T14 = primitive_cast_integer_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T13 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    REPEATED_DDBYTE_SLOT_VALUE_TAGGED_SETTER(T13, array_, 2, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM7I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:41
  T8 = SLOT_VALUE_INITD(array_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:41
  T11 = primitive_instanceQ(new_value_,T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:41
  if (T11 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:41
    T10.vector_element_[0] = &KJvalue_;
    T10.vector_element_[1] = new_value_;
    T10.vector_element_[2] = &KJtype_;
    T10.vector_element_[3] = T8;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:41
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:41
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T9, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
  T12 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
  T13 = primitive_machine_word_less_thanQ(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
  if (T13 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
    T14 = SLOT_VALUE_INITD(array_, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
    T15 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
    T16 = primitive_machine_word_less_thanQ(T12,T15);
    T4 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:43
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, array_, 3, T12);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:43
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:45
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:38
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM8I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  if (T9 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T10 = SLOT_VALUE_INITD(array_, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T12 = primitive_machine_word_less_thanQ(T8,T11);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T13 = primitive_unwrap_machine_word(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T13, array_, 2, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM9I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DSFLT T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  if (T9 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T10 = SLOT_VALUE_INITD(array_, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T12 = primitive_machine_word_less_thanQ(T8,T11);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T13 = primitive_single_float_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    REPEATED_DSFLT_SLOT_VALUE_TAGGED_SETTER(T13, array_, 2, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM10I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DDFLT T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  if (T9 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T10 = SLOT_VALUE_INITD(array_, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T12 = primitive_machine_word_less_thanQ(T8,T11);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T13 = primitive_double_float_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    REPEATED_DDFLT_SLOT_VALUE_TAGGED_SETTER(T13, array_, 2, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_no_bounds_check_setterVKeMM4I (D new_value_, D array_, D index_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, array_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM5I (D new_value_, D array_, D index_) {
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T7 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T6, array_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM6I (D new_value_, D array_, D index_) {
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T7 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  REPEATED_DDBYTE_SLOT_VALUE_TAGGED_SETTER(T6, array_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM7I (D new_value_, D array_, D index_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, array_, 3, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM8I (D new_value_, D array_, D index_) {
  D T4_0;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T5 = primitive_unwrap_machine_word(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T5, array_, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM9I (D new_value_, D array_, D index_) {
  D T4_0;
  DSFLT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T5 = primitive_single_float_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  REPEATED_DSFLT_SLOT_VALUE_TAGGED_SETTER(T5, array_, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM10I (D new_value_, D array_, D index_) {
  D T4_0;
  DDFLT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T5 = primitive_double_float_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  REPEATED_DDFLT_SLOT_VALUE_TAGGED_SETTER(T5, array_, 2, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T4_0);
}

D KfillXVKdMM4I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      Kelement_setterVKdMM4I(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T9_0);
}

D KfillXVKdMM5I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      Kelement_setterVKdMM5I(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T9_0);
}

D KfillXVKdMM6I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      Kelement_setterVKdMM6I(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T9_0);
}

D KfillXVKdMM7I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD indexF8T, indexF8;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  DWORD T23;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  indexF8T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    indexF8 = indexF8T;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    T13 = primitive_cast_raw_as_integer(indexF8);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    T11 = primitive_machine_word_less_thanQ(indexF8,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T15 = SLOT_VALUE_INITD(target_, 0);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T18 = primitive_instanceQ(value_,T15);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      if (T18 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        T17.vector_element_[0] = &KJvalue_;
        T17.vector_element_[1] = value_;
        T17.vector_element_[2] = &KJtype_;
        T17.vector_element_[3] = T15;
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T16 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T17);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T16, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T19 = primitive_machine_word_less_thanQ(indexF8,1);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      if (T19 != &KPfalseVKi) {
        T14 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        T20 = SLOT_VALUE_INITD(target_, 2);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        T21 = primitive_cast_integer_as_raw(T20);
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        T22 = primitive_machine_word_less_thanQ(indexF8,T21);
        T14 = T22;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, target_, 3, indexF8);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
        Kelement_range_errorVKeI(target_, T13);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      T23 = primitive_machine_word_add_signal_overflow(indexF8,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
      indexF8T = T23;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  MV_SET_COUNT(1);
  return(T9_0);
}

D KfillXVKdMM8I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      Kelement_setterVKdMM8I(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T9_0);
}

D KfillXVKdMM9I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      Kelement_setterVKdMM9I(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T9_0);
}

D KfillXVKdMM10I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      Kelement_setterVKdMM10I(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kconcrete_limited_array_classVKiMM1I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T2_0 = &KLsimple_integer_arrayGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_array_classVKiMM2I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:35
  T2_0 = &KLsimple_element_type_arrayGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:33
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_array_classVKiMM3I (D of_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:58
  T7 = KsubtypeQVKdMM11I(of_, &KLbyteGVKe);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:58
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:59
    T2_0 = &KLsimple_byte_arrayGVKe;
    T6_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:58
    T8 = KsubtypeQVKdMM11I(of_, &KLdouble_byteGVKe);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:58
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:60
      T3_0 = &KLsimple_double_byte_arrayGVKe;
      T5_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:61
      T4_0 = &KLsimple_element_type_arrayGVKe;
      T5_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:58
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:56
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kconcrete_limited_array_classVKiMM4I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T2_0 = &KLsimple_machine_word_arrayGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_array_classVKiMM5I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T2_0 = &KLsimple_single_float_arrayGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_array_classVKiMM6I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T2_0 = &KLsimple_double_float_arrayGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T2_0);
}

D KmakeVKdMM14I (D class_, D Urest_, D dimensions_, D fill_) {
  D T5_0;
  D T5_1;
  D dimensionsF6;
  D size_;
  D T8_0;
  D T9_0;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T5_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  dimensionsF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  size_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T10.vector_element_[0] = &KJdimensions_;
  T10.vector_element_[1] = dimensionsF6;
  T10.vector_element_[2] = &KJsize_;
  T10.vector_element_[3] = size_;
  T10.vector_element_[4] = &KJfill_;
  T10.vector_element_[5] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T11 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T12_0 = APPLY2(T11, class_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T9_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T8_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM15I (D class_, D Urest_, D dimensions_, D fill_) {
  D T5_0;
  D T5_1;
  D dimensionsF6;
  D size_;
  D T8_0;
  D T9_0;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T5_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  dimensionsF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  size_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T10.vector_element_[0] = &KJdimensions_;
  T10.vector_element_[1] = dimensionsF6;
  T10.vector_element_[2] = &KJsize_;
  T10.vector_element_[3] = size_;
  T10.vector_element_[4] = &KJfill_;
  T10.vector_element_[5] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T11 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T12_0 = APPLY2(T11, class_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T9_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T8_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM16I (D class_, D Urest_, D dimensions_, D fill_) {
  D T5_0;
  D T5_1;
  D dimensionsF6;
  D size_;
  D T8_0;
  D T9_0;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T5_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  dimensionsF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  size_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T10.vector_element_[0] = &KJdimensions_;
  T10.vector_element_[1] = dimensionsF6;
  T10.vector_element_[2] = &KJsize_;
  T10.vector_element_[3] = size_;
  T10.vector_element_[4] = &KJfill_;
  T10.vector_element_[5] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T11 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T12_0 = APPLY2(T11, class_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T9_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T8_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM17I (D class_, D Urest_, D dimensions_, D element_type_, D fill_) {
  D T6_0;
  D T6_1;
  D dimensionsF7;
  D size_;
  D T9_0;
  DWORD T10;
  D T11;
  D T12;
  D T13;
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T15_0;
  _KLsimple_object_vectorGVKd_8 T16 = {&KLsimple_object_vectorGVKdW, (D) 33};
  D T17;
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:22
  T6_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T6_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:22
  dimensionsF7 = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:22
  size_ = T6_1;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:23
  T10 = primitive_cast_integer_as_raw(size_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:23
  T11 = primitive_machine_word_equalQ(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:23
  if (T11 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:24
    T12 = CALL2(&KinstanceQVKd, fill_, element_type_);
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:24
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:24
      T14.vector_element_[0] = &KJvalue_;
      T14.vector_element_[1] = fill_;
      T14.vector_element_[2] = &KJtype_;
      T14.vector_element_[3] = element_type_;
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:24
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T13 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T14);
      // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:24
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T13, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:24
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:26
  T16.vector_element_[0] = &KJelement_type_;
  T16.vector_element_[1] = element_type_;
  T16.vector_element_[2] = &KJdimensions_;
  T16.vector_element_[3] = dimensionsF7;
  T16.vector_element_[4] = &KJsize_;
  T16.vector_element_[5] = size_;
  T16.vector_element_[6] = &KJfill_;
  T16.vector_element_[7] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:26
  T17 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:26
  T18_0 = APPLY2(T17, class_, &T16);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:26
  T15_0 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:18
  T9_0 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:18
  MV_SET_COUNT(1);
  return(T9_0);
}

D KmakeVKdMM18I (D class_, D Urest_, D dimensions_, D fill_) {
  D T5_0;
  D T5_1;
  D dimensionsF6;
  D size_;
  D T8_0;
  D T9_0;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T5_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  dimensionsF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  size_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T10.vector_element_[0] = &KJdimensions_;
  T10.vector_element_[1] = dimensionsF6;
  T10.vector_element_[2] = &KJsize_;
  T10.vector_element_[3] = size_;
  T10.vector_element_[4] = &KJfill_;
  T10.vector_element_[5] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T11 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T12_0 = APPLY2(T11, class_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T9_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T8_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM19I (D class_, D Urest_, D dimensions_, D fill_) {
  D T5_0;
  D T5_1;
  D dimensionsF6;
  D size_;
  D T8_0;
  D T9_0;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T5_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  dimensionsF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  size_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T10.vector_element_[0] = &KJdimensions_;
  T10.vector_element_[1] = dimensionsF6;
  T10.vector_element_[2] = &KJsize_;
  T10.vector_element_[3] = size_;
  T10.vector_element_[4] = &KJfill_;
  T10.vector_element_[5] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T11 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T12_0 = APPLY2(T11, class_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T9_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T8_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM20I (D class_, D Urest_, D dimensions_, D fill_) {
  D T5_0;
  D T5_1;
  D dimensionsF6;
  D size_;
  D T8_0;
  D T9_0;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T5_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  dimensionsF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  size_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T10.vector_element_[0] = &KJdimensions_;
  T10.vector_element_[1] = dimensionsF6;
  T10.vector_element_[2] = &KJsize_;
  T10.vector_element_[3] = size_;
  T10.vector_element_[4] = &KJfill_;
  T10.vector_element_[5] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T11 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T12_0 = APPLY2(T11, class_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T9_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T8_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLsimple_double_float_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_dimensions_, D Uunique_size_) {
  D T5;
  D T6;
  D Uunique_dimensionsF7;
  D T8;
  D object_;
  D Uunique_dimensionsF10;
  D Uunique_sizeF11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T13 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  if (T13 != &KPfalseVKi) {
    T5 = K246I();
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
    T6 = T5;
    Uunique_dimensionsF7 = T6;
  } else {
    Uunique_dimensionsF7 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T8 = Kallocate_instanceVKeI(&KLsimple_double_float_arrayGVKe, init_args_);
  object_ = T8;
  Uunique_dimensionsF10 = Uunique_dimensionsF7;
  SLOT_VALUE_SETTER(Uunique_dimensionsF10, object_, 0);
  Uunique_sizeF11 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF11, object_, 1);
  T12_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T12_0);
}

static D K243I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:67
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K246I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLsimple_single_float_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_dimensions_, D Uunique_size_) {
  D T5;
  D T6;
  D Uunique_dimensionsF7;
  D T8;
  D object_;
  D Uunique_dimensionsF10;
  D Uunique_sizeF11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T13 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  if (T13 != &KPfalseVKi) {
    T5 = K281I();
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
    T6 = T5;
    Uunique_dimensionsF7 = T6;
  } else {
    Uunique_dimensionsF7 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T8 = Kallocate_instanceVKeI(&KLsimple_single_float_arrayGVKe, init_args_);
  object_ = T8;
  Uunique_dimensionsF10 = Uunique_dimensionsF7;
  SLOT_VALUE_SETTER(Uunique_dimensionsF10, object_, 0);
  Uunique_sizeF11 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF11, object_, 1);
  T12_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T12_0);
}

static D K279I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:66
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K281I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLsimple_machine_word_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_dimensions_, D Uunique_size_) {
  D T5;
  D T6;
  D Uunique_dimensionsF7;
  D T8;
  D object_;
  D Uunique_dimensionsF10;
  D Uunique_sizeF11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T13 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  if (T13 != &KPfalseVKi) {
    T5 = K312I();
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
    T6 = T5;
    Uunique_dimensionsF7 = T6;
  } else {
    Uunique_dimensionsF7 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T8 = Kallocate_instanceVKeI(&KLsimple_machine_word_arrayGVKe, init_args_);
  object_ = T8;
  Uunique_dimensionsF10 = Uunique_dimensionsF7;
  SLOT_VALUE_SETTER(Uunique_dimensionsF10, object_, 0);
  Uunique_sizeF11 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF11, object_, 1);
  T12_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T12_0);
}

static D K310I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:65
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K312I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLsimple_element_type_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_, D Uunique_dimensions_, D Uunique_size_) {
  D T6;
  D T7;
  D Uunique_dimensionsF8;
  D T9;
  D object_;
  D Uunique_element_typeF11;
  D Uunique_dimensionsF12;
  D Uunique_sizeF13;
  D T14_0;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T15 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  if (T15 != &KPfalseVKi) {
    T6 = K345I();
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
    T7 = T6;
    Uunique_dimensionsF8 = T7;
  } else {
    Uunique_dimensionsF8 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T9 = Kallocate_instanceVKeI(&KLsimple_element_type_arrayGVKe, init_args_);
  object_ = T9;
  Uunique_element_typeF11 = Uunique_element_type_;
  SLOT_VALUE_SETTER(Uunique_element_typeF11, object_, 0);
  Uunique_dimensionsF12 = Uunique_dimensionsF8;
  SLOT_VALUE_SETTER(Uunique_dimensionsF12, object_, 1);
  Uunique_sizeF13 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF13, object_, 2);
  T14_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  MV_SET_COUNT(1);
  return(T14_0);
}

static D K343I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:13
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K345I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLsimple_double_byte_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_dimensions_, D Uunique_size_) {
  D T5;
  D T6;
  D Uunique_dimensionsF7;
  D T8;
  D object_;
  D Uunique_dimensionsF10;
  D Uunique_sizeF11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T13 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  if (T13 != &KPfalseVKi) {
    T5 = K379I();
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
    T6 = T5;
    Uunique_dimensionsF7 = T6;
  } else {
    Uunique_dimensionsF7 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T8 = Kallocate_instanceVKeI(&KLsimple_double_byte_arrayGVKe, init_args_);
  object_ = T8;
  Uunique_dimensionsF10 = Uunique_dimensionsF7;
  SLOT_VALUE_SETTER(Uunique_dimensionsF10, object_, 0);
  Uunique_sizeF11 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF11, object_, 1);
  T12_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T12_0);
}

static D K377I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:11
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K379I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLsimple_byte_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_dimensions_, D Uunique_size_) {
  D T5;
  D T6;
  D Uunique_dimensionsF7;
  D T8;
  D object_;
  D Uunique_dimensionsF10;
  D Uunique_sizeF11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T13 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  if (T13 != &KPfalseVKi) {
    T5 = K409I();
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
    T6 = T5;
    Uunique_dimensionsF7 = T6;
  } else {
    Uunique_dimensionsF7 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T8 = Kallocate_instanceVKeI(&KLsimple_byte_arrayGVKe, init_args_);
  object_ = T8;
  Uunique_dimensionsF10 = Uunique_dimensionsF7;
  SLOT_VALUE_SETTER(Uunique_dimensionsF10, object_, 0);
  Uunique_sizeF11 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF11, object_, 1);
  T12_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T12_0);
}

static D K407I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:10
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K409I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D KLsimple_integer_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_dimensions_, D Uunique_size_) {
  D T5;
  D T6;
  D Uunique_dimensionsF7;
  D T8;
  D object_;
  D Uunique_dimensionsF10;
  D Uunique_sizeF11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T13 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  if (T13 != &KPfalseVKi) {
    T5 = K439I();
    // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
    T6 = T5;
    Uunique_dimensionsF7 = T6;
  } else {
    Uunique_dimensionsF7 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T8 = Kallocate_instanceVKeI(&KLsimple_integer_arrayGVKe, init_args_);
  object_ = T8;
  Uunique_dimensionsF10 = Uunique_dimensionsF7;
  SLOT_VALUE_SETTER(Uunique_dimensionsF10, object_, 0);
  Uunique_sizeF11 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF11, object_, 1);
  T12_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T12_0);
}

static D K437I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-array.dylan:8
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K439I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_limited_array_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_limited_array_for_user () {
  return;
}


/* eof */
