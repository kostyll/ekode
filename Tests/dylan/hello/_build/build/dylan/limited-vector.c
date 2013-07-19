#include "run-time.h"

/* Typedefs for referenced classes */

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLclassGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
} _KLsimple_arrayGVKi;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

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
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
} _KLvectorGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(34);

typedef struct {
  D wrapper;
} _KLstringGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

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
  D symbol_name_;
} _KLsymbolGVKd;

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
  DSFLT Psingle_float_data_;
} _KLsingle_floatGVKd;

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
} _KLarrayGVKd;

typedef struct {
  D wrapper;
} _KLsimple_vectorGVKd;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;


/* Typedefs for defined classes */

#define  define__KLsimple_integer_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D integer_vector_element_[nrepeated+1]; \
  } _KLsimple_integer_vectorGVKe_##nrepeated;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

#define  define__KLsimple_double_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D double_byte_vector_element_[nrepeated+1]; \
  } _KLsimple_double_byte_vectorGVKe_##nrepeated;

#define  define__KLsimple_machine_word_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D machine_word_vector_element_[nrepeated+1]; \
  } _KLsimple_machine_word_vectorGVKe_##nrepeated;

#define  define__KLsimple_single_float_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D single_float_vector_element_[nrepeated+1]; \
  } _KLsimple_single_float_vectorGVKe_##nrepeated;

#define  define__KLsimple_double_float_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D double_float_vector_element_[nrepeated+1]; \
  } _KLsimple_double_float_vectorGVKe_##nrepeated;

#define  define__KLsimple_element_type_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D element_type_; \
    D size_; \
    D element_type_vector_element_[nrepeated+1]; \
  } _KLsimple_element_type_vectorGVKe_##nrepeated;


/* Referenced object declarations */

extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLclassGVKd KLsimple_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_arrayGVKiW;
D KsubiclassQVKiI (D xiclass_, D x_, D yiclass_, D y_);
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_28;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
D KmakeVKdMM33I (D class_, D Urest_, D fill_, D size_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_27;
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJfill_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLlimited_integerGVKe KLdouble_byteGVKe;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_14;
extern _KLsymbolGVKd KJelement_type_;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_4;
D KsubtypeQVKdMM11I (D limint1_, D limint2_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Llimited_integerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_0;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe Kreplace_subsequenceXVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Ksubsequence_positionVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KaddVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_10;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_13;
D Kelement_range_errorVKeI (D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_Ldouble_floatG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsingle_floatG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLinstance_slot_descriptorGVKe Kelement_typeVKeHLlimited_collectionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
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
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLclassGVKd KLsimple_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_vectorGVKdW;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
D Kallocate_instanceVKeI (D class_, D init_args_);
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
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
extern _KLmethod_domainGVKe KreduceVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_10;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_8;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_15;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_12;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_11;
extern _KLincremental_generic_functionGVKe Klimited_vectorVKe;
extern _KLmethod_domainGVKe Kshallow_copyVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_21;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_12;

/* Defined object declarations */

extern _KLclassGVKd KLsimple_integer_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_integer_vectorGVKeW;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
extern _KLclassGVKd KLsimple_double_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_double_byte_vectorGVKeW;
extern _KLclassGVKd KLsimple_machine_word_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_machine_word_vectorGVKeW;
extern _KLclassGVKd KLsimple_single_float_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_single_float_vectorGVKeW;
extern _KLclassGVKd KLsimple_double_float_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_double_float_vectorGVKeW;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_19;
extern _KLgetter_methodGVKi KsizeVKdMM14;
extern _KLgetter_methodGVKi KsizeVKdMM15;
extern _KLgetter_methodGVKi KsizeVKdMM16;
extern _KLgetter_methodGVKi KsizeVKdMM17;
extern _KLgetter_methodGVKi KsizeVKdMM18;
extern _KLgetter_methodGVKi KsizeVKdMM19;
extern _KLgetter_methodGVKi KsizeVKdMM20;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_22;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_23;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_24;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_25;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_26;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_27;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_28;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_29;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_30;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_31;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_33;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_34;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_35;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_7;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM7;
D Ktype_for_copyVKdMM7I (D vector_);
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_18;
extern _KLsimple_methodGVKe Kelement_typeVKeMM9;
D Kelement_typeVKeMM9I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM10;
D Kelement_typeVKeMM10I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM11;
D Kelement_typeVKeMM11I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM12;
D Kelement_typeVKeMM12I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM13;
D Kelement_typeVKeMM13I (D t_);
extern _KLsimple_methodGVKe Kelement_typeVKeMM14;
D Kelement_typeVKeMM14I (D t_);
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
extern _KLkeyword_methodGVKe KelementVKdMM12;
D KelementVKdMM12I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM13;
D KelementVKdMM13I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM14;
D KelementVKdMM14I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM15;
D KelementVKdMM15I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM16;
D KelementVKdMM16I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM17;
D KelementVKdMM17I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe KelementVKdMM18;
D KelementVKdMM18I (D vector_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_20;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_22;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM10;
D Kelement_no_bounds_checkVKeMM10I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM11;
D Kelement_no_bounds_checkVKeMM11I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM12;
D Kelement_no_bounds_checkVKeMM12I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM13;
D Kelement_no_bounds_checkVKeMM13I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM14;
D Kelement_no_bounds_checkVKeMM14I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM15;
D Kelement_no_bounds_checkVKeMM15I (D vector_, D index_, D Urest_, D default_);
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM16;
D Kelement_no_bounds_checkVKeMM16I (D vector_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_9;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_10;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_12;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_13;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_14;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_15;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_19;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM14;
D Kforward_iteration_protocolVKdMM14I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM13;
D Kforward_iteration_protocolVKdMM13I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM12;
D Kforward_iteration_protocolVKdMM12I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM11;
D Kforward_iteration_protocolVKdMM11I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM10;
D Kforward_iteration_protocolVKdMM10I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM9;
D Kforward_iteration_protocolVKdMM9I (D sequence_);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM8;
D Kforward_iteration_protocolVKdMM8I (D sequence_);
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_13;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_14;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_17;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM3;
D Kbackward_iteration_protocolVKdMM3I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM4;
D Kbackward_iteration_protocolVKdMM4I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM5;
D Kbackward_iteration_protocolVKdMM5I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM6;
D Kbackward_iteration_protocolVKdMM6I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM7;
D Kbackward_iteration_protocolVKdMM7I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM8;
D Kbackward_iteration_protocolVKdMM8I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM9;
D Kbackward_iteration_protocolVKdMM9I (D sequence_);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_9;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_10;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_11;
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_7;
extern _KLclassGVKd KLsimple_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_element_type_vectorGVKeW;
D KmakeVKdMM27I (D, D, D, D, D);
D KmakeVKdMM24I (D, D, D, D);
extern _KLsimple_methodGVKe Kelement_setterVKdMM12;
D Kelement_setterVKdMM12I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM13;
D Kelement_setterVKdMM13I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM14;
D Kelement_setterVKdMM14I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM15;
D Kelement_setterVKdMM15I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM16;
D Kelement_setterVKdMM16I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM17;
D Kelement_setterVKdMM17I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM18;
D Kelement_setterVKdMM18I (D new_value_, D vector_, D index_);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_17;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_18;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_19;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_20;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM12;
D Kelement_no_bounds_check_setterVKeMM12I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM13;
D Kelement_no_bounds_check_setterVKeMM13I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM14;
D Kelement_no_bounds_check_setterVKeMM14I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM15;
D Kelement_no_bounds_check_setterVKeMM15I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM16;
D Kelement_no_bounds_check_setterVKeMM16I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM17;
D Kelement_no_bounds_check_setterVKeMM17I (D new_value_, D vector_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM18;
D Kelement_no_bounds_check_setterVKeMM18I (D new_value_, D vector_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_11;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_12;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_13;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_14;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_15;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_16;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_8;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_9;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_10;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_12;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_35;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_34;
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM1;
D Kconcrete_limited_vector_classVKiMM1I (D of_);
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM2;
D Kconcrete_limited_vector_classVKiMM2I (D of_);
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM3;
D Kconcrete_limited_vector_classVKiMM3I (D of_);
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM4;
D Kconcrete_limited_vector_classVKiMM4I (D of_);
extern _KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM5;
D Kconcrete_limited_vector_classVKiMM5I (D of_);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_21;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_5;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_6;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_7;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_8;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_9;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_10;
extern _KLsimple_methodGVKe KemptyVKeMM7;
D KemptyVKeMM7I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM6;
D KemptyVKeMM6I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM5;
D KemptyVKeMM5I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM4;
D KemptyVKeMM4I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM3;
D KemptyVKeMM3I (D class_);
extern _KLsimple_methodGVKe KemptyVKeMM2;
D KemptyVKeMM2I (D class_);
extern _KLkeyword_methodGVKe KmakeVKdMM27;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_16;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_17;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_18;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_19;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_20;
extern _KLkeyword_methodGVKe KmakeVKdMM24;
extern _KLkeyword_methodGVKe KmakeVKdMM25;
D KmakeVKdMM25I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM26;
D KmakeVKdMM26I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM28;
D KmakeVKdMM28I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM29;
D KmakeVKdMM29I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM30;
D KmakeVKdMM30I (D, D, D, D);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_28;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_29;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_30;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_31;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_33;
extern _KLsimple_methodGVKe KasVKdMM43;
D KasVKdMM43I (D, D);
extern _KLsimple_methodGVKe KasVKdMM44;
D KasVKdMM44I (D, D);
extern _KLsimple_methodGVKe KasVKdMM45;
D KasVKdMM45I (D, D);
extern _KLsimple_methodGVKe KasVKdMM46;
D KasVKdMM46I (D, D);
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_29;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_30;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_31;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_32;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_33;
extern _KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_34;
static _KLsingletonGVKd K399;
static _KLsingletonGVKd K400;
static _KLsingletonGVKd K401;
static _KLsingletonGVKd K402;
static _KLsingletonGVKd K403;
static _KLsingletonGVKd K404;
static _KLsignatureAvaluesGVKi K405;
static _KLsimple_object_vectorGVKd_2 K406;
static _KLsingletonGVKd K407;
static _KLsignatureAvaluesGVKi K408;
static _KLsimple_object_vectorGVKd_2 K409;
static _KLsingletonGVKd K410;
static _KLsignatureAvaluesGVKi K411;
static _KLsimple_object_vectorGVKd_2 K412;
static _KLsimple_object_vectorGVKd_1 K413;
static _KLsignatureAvaluesGVKi K414;
static _KLsimple_object_vectorGVKd_2 K415;
static _KLsingletonGVKd K416;
static _KLkeyword_signatureAvaluesGVKi K417;
static _KLsimple_object_vectorGVKd_4 K418;
static _KLdouble_floatGVKd K419;
static _KLsimple_object_vectorGVKd_1 K420;
static _KLsimple_object_vectorGVKd_2 K421;
static _KLsimple_object_vectorGVKd_2 K422;
static _KLsimple_object_vectorGVKd_1 K423;
static _KLkeyword_signatureAvaluesGVKi K424;
static _KLsimple_object_vectorGVKd_4 K425;
static _KLsingle_floatGVKd K426;
static _KLsimple_object_vectorGVKd_1 K427;
static _KLsimple_object_vectorGVKd_2 K428;
static _KLsimple_object_vectorGVKd_1 K429;
static _KLkeyword_signatureAvaluesGVKi K430;
static _KLsimple_object_vectorGVKd_4 K431;
static _KLmachine_wordGVKe K432;
static _KLsimple_object_vectorGVKd_1 K433;
static _KLsimple_object_vectorGVKd_2 K434;
static _KLsimple_object_vectorGVKd_1 K435;
static _KLkeyword_signatureAvaluesGVKi K436;
static _KLsimple_object_vectorGVKd_4 K437;
static _KLsimple_object_vectorGVKd_1 K438;
static _KLsimple_object_vectorGVKd_2 K439;
static _KLsimple_object_vectorGVKd_1 K440;
static _KLkeyword_signatureAvaluesGVKi K441;
static _KLsimple_object_vectorGVKd_1 K442;
static _KLsimple_object_vectorGVKd_2 K443;
static _KLkeyword_signatureAvaluesGVKi K444;
static _KLsimple_object_vectorGVKd_1 K445;
static _KLsimple_object_vectorGVKd_1 K446;
static _KLsingletonGVKd K447;
static _KLkeyword_signatureAvaluesGVKi K448;
static _KLsimple_object_vectorGVKd_6 K449;
static _KLsimple_object_vectorGVKd_1 K450;
static _KLsimple_object_vectorGVKd_3 K451;
static _KLsimple_object_vectorGVKd_3 K452;
static _KLsimple_object_vectorGVKd_1 K453;
static _KLsignatureAvaluesGVKi K454;
static _KLsignatureAvaluesGVKi K455;
static _KLsignatureAvaluesGVKi K456;
static _KLsignatureAvaluesGVKi K457;
static _KLsignatureAvaluesGVKi K458;
static _KLsignatureAvaluesGVKi K459;
static _KLsignatureAvaluesGVKi K460;
static _KLsimple_object_vectorGVKd_1 K461;
static _KLsingletonGVKd K462;
static _KLsignatureAvaluesGVKi K463;
static _KLsimple_object_vectorGVKd_1 K464;
static _KLsingletonGVKd K465;
static _KLsignatureAvaluesGVKi K466;
static _KLsimple_object_vectorGVKd_1 K467;
static _KLsingletonGVKd K468;
static _KLsignatureAvaluesGVKi K469;
static _KLsignatureAvaluesGVKi K470;
static _KLsimple_object_vectorGVKd_1 K471;
static _KLsingletonGVKd K472;
static _KLsignatureGVKe K473;
static _KLsimple_object_vectorGVKd_3 K474;
static _KLsignatureGVKe K475;
static _KLsimple_object_vectorGVKd_3 K476;
static _KLsignatureGVKe K477;
static _KLsimple_object_vectorGVKd_3 K478;
static _KLsignatureGVKe K479;
static _KLsimple_object_vectorGVKd_3 K480;
static _KLsignatureGVKe K481;
static _KLsimple_object_vectorGVKd_3 K482;
static _KLsignatureGVKe K483;
static _KLsimple_object_vectorGVKd_3 K484;
static _KLsignatureGVKe K485;
static _KLsimple_object_vectorGVKd_3 K486;
static _KLsignatureAvaluesGVKi K487;
static _KLsignatureAvaluesGVKi K488;
static _KLsignatureAvaluesGVKi K489;
static _KLsignatureAvaluesGVKi K490;
static _KLsimple_object_vectorGVKd_1 K491;
static _KLsignatureAvaluesGVKi K492;
static _KLsimple_object_vectorGVKd_1 K493;
static _KLsignatureAvaluesGVKi K494;
static _KLimplementation_classGVKe K495;
extern _KLrepeated_slot_descriptorGVKe Kelement_type_vector_elementVKiHLsimple_element_type_vectorG;
static _KLsimple_object_vectorGVKd_2 K497;
extern _KLkeyword_methodGVKe KLsimple_element_type_vectorGZ32ZconstructorVKiMM0;
D KLsimple_element_type_vectorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K500;
static _KLsimple_object_vectorGVKd_12 K501;
static _KLsimple_object_vectorGVKd_1 K502;
static _KLsimple_object_vectorGVKd_2 K503;
static _KLkeyword_signatureAvaluesGVKi K504;
static _KLsimple_object_vectorGVKd_4 K505;
static _KLsimple_object_vectorGVKd_2 K506;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_element_type_vectorG;
extern _KLsealed_generic_functionGVKe Kelement_type_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kelement_type_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kelement_type_vector_element_setterVKiMM0;
static _KLpairGVKd K511;
static _KLbyte_stringGVKd_34 K512;
extern _KLrepeated_getter_methodGVKi Kelement_type_vector_elementVKiMM0;
static _KLpairGVKd K514;
static _KLbyte_stringGVKd_27 K515;
static _KLbyte_stringGVKd_28 K516;
extern _KLsimple_methodGVKe Kdouble_float_vector_current_elementVKi;
D Kdouble_float_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kdouble_float_vector_current_element_setterVKi;
D Kdouble_float_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K521;
static _KLsignatureAvaluesGVKi K522;
static _KLsimple_object_vectorGVKd_2 K523;
static _KLsignatureAvaluesGVKi K524;
static _KLsimple_object_vectorGVKd_8 K525;
extern _KLsimple_methodGVKe Ksingle_float_vector_current_elementVKi;
D Ksingle_float_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Ksingle_float_vector_current_element_setterVKi;
D Ksingle_float_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K530;
static _KLsignatureAvaluesGVKi K531;
static _KLsimple_object_vectorGVKd_2 K532;
static _KLsignatureAvaluesGVKi K533;
extern _KLsimple_methodGVKe Kmachine_word_vector_current_elementVKi;
D Kmachine_word_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kmachine_word_vector_current_element_setterVKi;
D Kmachine_word_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K538;
static _KLsignatureAvaluesGVKi K539;
static _KLsimple_object_vectorGVKd_2 K540;
static _KLsignatureAvaluesGVKi K541;
extern _KLsimple_methodGVKe Kelement_type_vector_current_elementVKi;
D Kelement_type_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kelement_type_vector_current_element_setterVKi;
D Kelement_type_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K546;
static _KLsignatureGVKe K547;
static _KLsimple_object_vectorGVKd_2 K548;
static _KLsignatureAvaluesGVKi K549;
extern _KLsimple_methodGVKe Kdouble_byte_vector_current_elementVKi;
D Kdouble_byte_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kdouble_byte_vector_current_element_setterVKi;
D Kdouble_byte_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K554;
static _KLsignatureAvaluesGVKi K555;
static _KLsimple_object_vectorGVKd_2 K556;
static _KLsignatureAvaluesGVKi K557;
extern _KLsimple_methodGVKe Kbyte_vector_current_elementVKi;
D Kbyte_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kbyte_vector_current_element_setterVKi;
D Kbyte_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K562;
static _KLsignatureAvaluesGVKi K563;
static _KLsimple_object_vectorGVKd_2 K564;
static _KLsignatureAvaluesGVKi K565;
extern _KLsimple_methodGVKe Kinteger_vector_current_elementVKi;
D Kinteger_vector_current_elementVKiI (D vector_, D state_);
extern _KLsimple_methodGVKe Kinteger_vector_current_element_setterVKi;
D Kinteger_vector_current_element_setterVKiI (D new_value_, D vector_, D state_);
static _KLsignatureGVKe K570;
static _KLsignatureAvaluesGVKi K571;
static _KLsimple_object_vectorGVKd_2 K572;
static _KLsignatureAvaluesGVKi K573;
static _KLkeyword_signatureAvaluesGVKi K574;
static _KLsimple_object_vectorGVKd_2 K575;
static _KLsimple_object_vectorGVKd_1 K576;
static _KLkeyword_signatureAvaluesGVKi K577;
static _KLkeyword_signatureAvaluesGVKi K578;
static _KLkeyword_signatureGVKe K579;
static _KLkeyword_signatureAvaluesGVKi K580;
static _KLkeyword_signatureAvaluesGVKi K581;
static _KLkeyword_signatureAvaluesGVKi K582;
static _KLsimple_object_vectorGVKd_2 K583;
static _KLsignatureAvaluesGVKi K584;
static _KLsignatureAvaluesGVKi K585;
static _KLsignatureAvaluesGVKi K586;
static _KLsignatureAvaluesGVKi K587;
static _KLsignatureAvaluesGVKi K588;
static _KLsignatureAvaluesGVKi K589;
static _KLsignatureAvaluesGVKi K590;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_float_vectorG;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_single_float_vectorG;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_machine_word_vectorG;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_byte_vectorG;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_byte_vectorG;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_integer_vectorG;
static _KLimplementation_classGVKe K597;
extern _KLrepeated_slot_descriptorGVKe Kdouble_float_vector_elementVKiHLsimple_double_float_vectorG;
static _KLsimple_object_vectorGVKd_1 K599;
extern _KLkeyword_methodGVKe KLsimple_double_float_vectorGZ32ZconstructorVKiMM0;
D KLsimple_double_float_vectorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_1 K602;
static _KLsimple_object_vectorGVKd_11 K603;
static _KLsimple_object_vectorGVKd_1 K604;
static _KLkeyword_signatureAvaluesGVKi K605;
static _KLsimple_object_vectorGVKd_2 K606;
static _KLsimple_object_vectorGVKd_1 K607;
static _KLdouble_floatGVKd K608;
extern _KLsealed_generic_functionGVKe Kdouble_float_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kdouble_float_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kdouble_float_vector_element_setterVKiMM0;
static _KLpairGVKd K612;
static _KLbyte_stringGVKd_34 K613;
extern _KLrepeated_getter_methodGVKi Kdouble_float_vector_elementVKiMM0;
static _KLpairGVKd K615;
static _KLbyte_stringGVKd_27 K616;
static _KLbyte_stringGVKd_28 K617;
static _KLimplementation_classGVKe K618;
extern _KLrepeated_slot_descriptorGVKe Ksingle_float_vector_elementVKiHLsimple_single_float_vectorG;
static _KLsimple_object_vectorGVKd_1 K620;
extern _KLkeyword_methodGVKe KLsimple_single_float_vectorGZ32ZconstructorVKiMM0;
D KLsimple_single_float_vectorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_11 K623;
static _KLsimple_object_vectorGVKd_1 K624;
static _KLkeyword_signatureAvaluesGVKi K625;
static _KLsingle_floatGVKd K626;
extern _KLsealed_generic_functionGVKe Ksingle_float_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Ksingle_float_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Ksingle_float_vector_element_setterVKiMM0;
static _KLpairGVKd K630;
static _KLbyte_stringGVKd_34 K631;
extern _KLrepeated_getter_methodGVKi Ksingle_float_vector_elementVKiMM0;
static _KLpairGVKd K633;
static _KLbyte_stringGVKd_27 K634;
static _KLbyte_stringGVKd_28 K635;
static _KLimplementation_classGVKe K636;
extern _KLrepeated_slot_descriptorGVKe Kmachine_word_vector_elementVKiHLsimple_machine_word_vectorG;
static _KLsimple_object_vectorGVKd_1 K638;
extern _KLkeyword_methodGVKe KLsimple_machine_word_vectorGZ32ZconstructorVKiMM0;
D KLsimple_machine_word_vectorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_11 K641;
static _KLsimple_object_vectorGVKd_1 K642;
static _KLkeyword_signatureAvaluesGVKi K643;
static _KLmachine_wordGVKe K644;
extern _KLsealed_generic_functionGVKe Kmachine_word_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kmachine_word_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kmachine_word_vector_element_setterVKiMM0;
static _KLpairGVKd K648;
static _KLbyte_stringGVKd_34 K649;
extern _KLrepeated_getter_methodGVKi Kmachine_word_vector_elementVKiMM0;
static _KLpairGVKd K651;
static _KLbyte_stringGVKd_27 K652;
static _KLbyte_stringGVKd_28 K653;
static _KLimplementation_classGVKe K654;
extern _KLrepeated_slot_descriptorGVKe Kdouble_byte_vector_elementVKiHLsimple_double_byte_vectorG;
static _KLsimple_object_vectorGVKd_1 K656;
extern _KLkeyword_methodGVKe KLsimple_double_byte_vectorGZ32ZconstructorVKiMM0;
D KLsimple_double_byte_vectorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_11 K659;
static _KLsimple_object_vectorGVKd_1 K660;
static _KLkeyword_signatureAvaluesGVKi K661;
extern _KLsealed_generic_functionGVKe Kdouble_byte_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kdouble_byte_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kdouble_byte_vector_element_setterVKiMM0;
static _KLpairGVKd K665;
static _KLbyte_stringGVKd_33 K666;
extern _KLrepeated_getter_methodGVKi Kdouble_byte_vector_elementVKiMM0;
static _KLpairGVKd K668;
static _KLbyte_stringGVKd_26 K669;
static _KLbyte_stringGVKd_27 K670;
static _KLimplementation_classGVKe K671;
extern _KLrepeated_slot_descriptorGVKe Kbyte_vector_elementVKiHLsimple_byte_vectorG;
static _KLsimple_object_vectorGVKd_1 K673;
extern _KLkeyword_methodGVKe KLsimple_byte_vectorGZ32ZconstructorVKiMM0;
D KLsimple_byte_vectorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_11 K676;
static _KLsimple_object_vectorGVKd_1 K677;
static _KLkeyword_signatureAvaluesGVKi K678;
extern _KLsealed_generic_functionGVKe Kbyte_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kbyte_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kbyte_vector_element_setterVKiMM0;
static _KLpairGVKd K682;
static _KLbyte_stringGVKd_26 K683;
extern _KLrepeated_getter_methodGVKi Kbyte_vector_elementVKiMM0;
static _KLpairGVKd K685;
static _KLbyte_stringGVKd_19 K686;
static _KLbyte_stringGVKd_20 K687;
static _KLimplementation_classGVKe K688;
extern _KLrepeated_slot_descriptorGVKe Kinteger_vector_elementVKiHLsimple_integer_vectorG;
static _KLsimple_object_vectorGVKd_1 K690;
extern _KLkeyword_methodGVKe KLsimple_integer_vectorGZ32ZconstructorVKiMM0;
D KLsimple_integer_vectorGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_11 K693;
static _KLsimple_object_vectorGVKd_1 K694;
static _KLkeyword_signatureAvaluesGVKi K695;
extern _KLsealed_generic_functionGVKe Kinteger_vector_elementVKi;
extern _KLsealed_generic_functionGVKe Kinteger_vector_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Kinteger_vector_element_setterVKiMM0;
static _KLpairGVKd K699;
static _KLbyte_stringGVKd_29 K700;
extern _KLrepeated_getter_methodGVKi Kinteger_vector_elementVKiMM0;
static _KLpairGVKd K702;
static _KLbyte_stringGVKd_22 K703;
static _KLbyte_stringGVKd_23 K704;

/* Indirection variables */


/* Variables */

D Lsimple_integer_vectorGVKe = &KLsimple_integer_vectorGVKe;
D Dempty_Lsimple_integer_vectorGVKi = &KPunboundVKi;
D Lsimple_byte_vectorGVKe = &KLsimple_byte_vectorGVKe;
D Dempty_Lsimple_byte_vectorGVKi = &KPunboundVKi;
D Lsimple_double_byte_vectorGVKe = &KLsimple_double_byte_vectorGVKe;
D Dempty_Lsimple_double_byte_vectorGVKi = &KPunboundVKi;
D Lsimple_element_type_vectorGVKe = &KLsimple_element_type_vectorGVKe;
D Lsimple_machine_word_vectorGVKe = &KLsimple_machine_word_vectorGVKe;
D Dempty_Lsimple_machine_word_vectorGVKi = &KPunboundVKi;
D Lsimple_single_float_vectorGVKe = &KLsimple_single_float_vectorGVKe;
D Dempty_Lsimple_single_float_vectorGVKi = &KPunboundVKi;
D Lsimple_double_float_vectorGVKe = &KLsimple_double_float_vectorGVKe;
D Dempty_Lsimple_double_float_vectorGVKi = &KPunboundVKi;
D double_float_vector_current_elementVKi = &Kdouble_float_vector_current_elementVKi;
D double_float_vector_current_element_setterVKi = &Kdouble_float_vector_current_element_setterVKi;
D single_float_vector_current_elementVKi = &Ksingle_float_vector_current_elementVKi;
D single_float_vector_current_element_setterVKi = &Ksingle_float_vector_current_element_setterVKi;
D machine_word_vector_current_elementVKi = &Kmachine_word_vector_current_elementVKi;
D machine_word_vector_current_element_setterVKi = &Kmachine_word_vector_current_element_setterVKi;
D element_type_vector_current_elementVKi = &Kelement_type_vector_current_elementVKi;
D element_type_vector_current_element_setterVKi = &Kelement_type_vector_current_element_setterVKi;
D double_byte_vector_current_elementVKi = &Kdouble_byte_vector_current_elementVKi;
D double_byte_vector_current_element_setterVKi = &Kdouble_byte_vector_current_element_setterVKi;
D byte_vector_current_elementVKi = &Kbyte_vector_current_elementVKi;
D byte_vector_current_element_setterVKi = &Kbyte_vector_current_element_setterVKi;
D integer_vector_current_elementVKi = &Kinteger_vector_current_elementVKi;
D integer_vector_current_element_setterVKi = &Kinteger_vector_current_element_setterVKi;

/* Objects */

_KLclassGVKd KLsimple_integer_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K704,
  &K688,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_integer_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K688,
  (D) 4609,
  1,
  33554434,
  (D) 1
};

_KLclassGVKd KLsimple_byte_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K687,
  &K671,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K671,
  (D) 4609,
  1,
  33554460,
  (D) 1
};

_KLclassGVKd KLsimple_double_byte_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K670,
  &K654,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_double_byte_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K654,
  (D) 4609,
  1,
  33554468,
  (D) 1
};

_KLclassGVKd KLsimple_machine_word_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K653,
  &K636,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_machine_word_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K636,
  (D) 4609,
  1,
  33554432,
  (D) 1
};

_KLclassGVKd KLsimple_single_float_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K635,
  &K618,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_single_float_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K618,
  (D) 4609,
  1,
  33554476,
  (D) 1
};

_KLclassGVKd KLsimple_double_float_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K617,
  &K597,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_double_float_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K597,
  (D) 4609,
  1,
  33554432,
  (D) 1
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_12,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_13,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_15 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_14,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_16 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_15,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_17 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_16,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_18 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_17,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_19 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_18,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLgetter_methodGVKi KsizeVKdMM14 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_integer_vectorG
};

_KLgetter_methodGVKi KsizeVKdMM15 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_byte_vectorG
};

_KLgetter_methodGVKi KsizeVKdMM16 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_double_byte_vectorG
};

_KLgetter_methodGVKi KsizeVKdMM17 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_element_type_vectorG
};

_KLgetter_methodGVKi KsizeVKdMM18 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_machine_word_vectorG
};

_KLgetter_methodGVKi KsizeVKdMM19 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_single_float_vectorG
};

_KLgetter_methodGVKi KsizeVKdMM20 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_double_float_vectorG
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_22 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_21,
  &KsizeVKdMM20
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_23 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_22,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_24 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_23,
  &KsizeVKdMM19
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_25 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_24,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_26 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_25,
  &KsizeVKdMM18
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_27 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_26,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_28 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_27,
  &KsizeVKdMM17
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_29 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_28,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_30 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_29,
  &KsizeVKdMM16
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_31 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_30,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_32 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_31,
  &KsizeVKdMM15
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_33 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_32,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_34 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_33,
  &KsizeVKdMM14
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_35 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_34,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kshallow_copyVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kshallow_copyVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K590,
  &Ktype_for_copyVKdMM7I
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_11,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_12,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_13,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_15 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_14,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_16 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_15,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_17 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_16,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 Ktype_for_copyVKdRD_dylanRD_18 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_17,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLsimple_methodGVKe Kelement_typeVKeMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K589,
  &Kelement_typeVKeMM9I
};

_KLsimple_methodGVKe Kelement_typeVKeMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K588,
  &Kelement_typeVKeMM10I
};

_KLsimple_methodGVKe Kelement_typeVKeMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K587,
  &Kelement_typeVKeMM11I
};

_KLsimple_methodGVKe Kelement_typeVKeMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K586,
  &Kelement_typeVKeMM12I
};

_KLsimple_methodGVKe Kelement_typeVKeMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K585,
  &Kelement_typeVKeMM13I
};

_KLsimple_methodGVKe Kelement_typeVKeMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K584,
  &Kelement_typeVKeMM14I
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_12,
  &Kelement_typeVKeMM14
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_13,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_14,
  &Kelement_typeVKeMM13
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_16 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_15,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_16,
  &Kelement_typeVKeMM12
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_18 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_17,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_19 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_18,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_20 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_19,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_21 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_20,
  &Kelement_typeVKeMM11
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_22 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_21,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_23 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_22,
  &Kelement_typeVKeMM10
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_24 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_23,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_25 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_24,
  &Kelement_typeVKeMM9
};

_KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_26 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_25,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLkeyword_methodGVKe KelementVKdMM12 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K582,
  &key_mep_4,
  &KelementVKdMM12I,
  &K583
};

_KLkeyword_methodGVKe KelementVKdMM13 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K581,
  &key_mep_4,
  &KelementVKdMM13I,
  &K583
};

_KLkeyword_methodGVKe KelementVKdMM14 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K580,
  &key_mep_4,
  &KelementVKdMM14I,
  &K583
};

_KLkeyword_methodGVKe KelementVKdMM15 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K579,
  &key_mep_4,
  &KelementVKdMM15I,
  &K583
};

_KLkeyword_methodGVKe KelementVKdMM16 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K578,
  &key_mep_4,
  &KelementVKdMM16I,
  &K583
};

_KLkeyword_methodGVKe KelementVKdMM17 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K577,
  &key_mep_4,
  &KelementVKdMM17I,
  &K583
};

_KLkeyword_methodGVKe KelementVKdMM18 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K574,
  &key_mep_4,
  &KelementVKdMM18I,
  &K583
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_15,
  &KelementVKdMM18
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_16,
  &KelementVKdMM17
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_17,
  &KelementVKdMM16
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_19 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_18,
  &KelementVKdMM15
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_19,
  &KelementVKdMM14
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_21 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_20,
  &KelementVKdMM13
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_22 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_21,
  &KelementVKdMM12
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM10 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K582,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM10I,
  &K575
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM11 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K581,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM11I,
  &K575
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM12 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K580,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM12I,
  &K575
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM13 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K579,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM13I,
  &K575
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM14 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K578,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM14I,
  &K575
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM15 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K577,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM15I,
  &K575
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM16 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K574,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM16I,
  &K575
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_8,
  &Kelement_no_bounds_checkVKeMM16
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_9,
  &Kelement_no_bounds_checkVKeMM15
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_10,
  &Kelement_no_bounds_checkVKeMM14
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_11,
  &Kelement_no_bounds_checkVKeMM13
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_12,
  &Kelement_no_bounds_checkVKeMM12
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_13,
  &Kelement_no_bounds_checkVKeMM11
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_14,
  &Kelement_no_bounds_checkVKeMM10
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_12,
  &Kforward_iteration_protocolVKdMM14
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_13,
  &Kforward_iteration_protocolVKdMM13
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_14,
  &Kforward_iteration_protocolVKdMM12
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_15,
  &Kforward_iteration_protocolVKdMM11
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_16,
  &Kforward_iteration_protocolVKdMM10
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_17,
  &Kforward_iteration_protocolVKdMM9
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_19 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_18,
  &Kforward_iteration_protocolVKdMM8
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K524,
  &Kforward_iteration_protocolVKdMM14I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K533,
  &Kforward_iteration_protocolVKdMM13I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K541,
  &Kforward_iteration_protocolVKdMM12I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K549,
  &Kforward_iteration_protocolVKdMM11I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K557,
  &Kforward_iteration_protocolVKdMM10I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K565,
  &Kforward_iteration_protocolVKdMM9I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K573,
  &Kforward_iteration_protocolVKdMM8I
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_11 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_10,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_11,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_12,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_13,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_15 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_14,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_16 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_15,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddXVKdRD_dylanRD_17 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_16,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_11 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_10,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_11,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_12,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_14 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_13,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_15 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_14,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_16 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_15,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveXVKdRD_dylanRD_17 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_16,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K573,
  &Kbackward_iteration_protocolVKdMM3I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K565,
  &Kbackward_iteration_protocolVKdMM4I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K557,
  &Kbackward_iteration_protocolVKdMM5I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K549,
  &Kbackward_iteration_protocolVKdMM6I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K541,
  &Kbackward_iteration_protocolVKdMM7I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K533,
  &Kbackward_iteration_protocolVKdMM8I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K524,
  &Kbackward_iteration_protocolVKdMM9I
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_5,
  &Kbackward_iteration_protocolVKdMM9
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_6,
  &Kbackward_iteration_protocolVKdMM8
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_7,
  &Kbackward_iteration_protocolVKdMM7
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_8,
  &Kbackward_iteration_protocolVKdMM6
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_9,
  &Kbackward_iteration_protocolVKdMM5
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_10,
  &Kbackward_iteration_protocolVKdMM4
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kbackward_iteration_protocolVKdRD_dylanRD_11,
  &Kbackward_iteration_protocolVKdMM3
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_2,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_3,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_4,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_5,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_6,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_7,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 KmemberQVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_8,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_0,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_1,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_2,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_3,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_4,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreduce1VKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreduce1VKdRD_dylanRD_5,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_0,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_1,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_2,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_3,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_4,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_5,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_3 KreduceVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreduceVKdRD_dylanRD_6,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLsimple_integer_vectorGVKe
};

_KLclassGVKd KLsimple_element_type_vectorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K516,
  &K495,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_element_type_vectorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K495,
  (D) 4609,
  5,
  33554434,
  (D) 1
};

_KLsimple_methodGVKe Kelement_setterVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K494,
  &Kelement_setterVKdMM12I
};

_KLsimple_methodGVKe Kelement_setterVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K492,
  &Kelement_setterVKdMM13I
};

_KLsimple_methodGVKe Kelement_setterVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K490,
  &Kelement_setterVKdMM14I
};

_KLsimple_methodGVKe Kelement_setterVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K479,
  &Kelement_setterVKdMM15I
};

_KLsimple_methodGVKe Kelement_setterVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K489,
  &Kelement_setterVKdMM16I
};

_KLsimple_methodGVKe Kelement_setterVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K488,
  &Kelement_setterVKdMM17I
};

_KLsimple_methodGVKe Kelement_setterVKdMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K487,
  &Kelement_setterVKdMM18I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_13,
  &Kelement_setterVKdMM18
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_14,
  &Kelement_setterVKdMM17
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_15,
  &Kelement_setterVKdMM16
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_16,
  &Kelement_setterVKdMM15
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_18 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_17,
  &Kelement_setterVKdMM14
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_19 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_18,
  &Kelement_setterVKdMM13
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_20 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_19,
  &Kelement_setterVKdMM12
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K485,
  &Kelement_no_bounds_check_setterVKeMM12I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K483,
  &Kelement_no_bounds_check_setterVKeMM13I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K481,
  &Kelement_no_bounds_check_setterVKeMM14I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K479,
  &Kelement_no_bounds_check_setterVKeMM15I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K477,
  &Kelement_no_bounds_check_setterVKeMM16I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K475,
  &Kelement_no_bounds_check_setterVKeMM17I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K473,
  &Kelement_no_bounds_check_setterVKeMM18I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_10,
  &Kelement_no_bounds_check_setterVKeMM18
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_11,
  &Kelement_no_bounds_check_setterVKeMM17
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_12,
  &Kelement_no_bounds_check_setterVKeMM16
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_13,
  &Kelement_no_bounds_check_setterVKeMM15
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_14,
  &Kelement_no_bounds_check_setterVKeMM14
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_15,
  &Kelement_no_bounds_check_setterVKeMM13
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_17 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_16,
  &Kelement_no_bounds_check_setterVKeMM12
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfillXVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_7,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_8,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 Kcopy_sequenceVKdRD_dylanRD_10 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_9,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortXVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_4,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_5,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_6,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_7,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_8,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_10 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_9,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KremoveVKdRD_dylanRD_11 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveVKdRD_dylanRD_10,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_0,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_1,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_2,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_3,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_4,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_5,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KaddVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddVKdRD_dylanRD_6,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_0,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_1,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_2,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_3,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_4,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_5,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 Ksubsequence_positionVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksubsequence_positionVKdRD_dylanRD_6,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_0,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_1,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_2,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_3,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_4,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_5,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsortVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_0,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_1,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_2,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_3,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_4,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_5,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kreplace_subsequenceXVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kreplace_subsequenceXVKdRD_dylanRD_6,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_5,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_6,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_8 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_7,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_9 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_8,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_10 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_9,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_11 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_10,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_byte_vectorGVKe
};

_KLstandalone_domainGVKe_2 KchooseVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_11,
  (D) 9,
  &KLfunctionGVKd,
  &KLsimple_integer_vectorGVKe
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_0,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_1,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_2,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_3,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_4,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_5,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newXVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newXVKdRD_dylanRD_6,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_1 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_0,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_2 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_1,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_3 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_2,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_3,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_4,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_6 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_5,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 Kadd_newVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kadd_newVKdRD_dylanRD_6,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLobjectGVKd
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_35 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_34,
  (D) 9,
  &K447,
  &KLcollectionGVKd
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_34 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_33,
  (D) 5,
  &K447
};

_KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K470,
  &Kconcrete_limited_vector_classVKiMM1I
};

_KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K469,
  &Kconcrete_limited_vector_classVKiMM2I
};

_KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K466,
  &Kconcrete_limited_vector_classVKiMM3I
};

_KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K463,
  &Kconcrete_limited_vector_classVKiMM4I
};

_KLsimple_methodGVKe Kconcrete_limited_vector_classVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K460,
  &Kconcrete_limited_vector_classVKiMM5I
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_21 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_20,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_4,
  &KemptyVKeMM7
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_5,
  &KemptyVKeMM6
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_6,
  &KemptyVKeMM5
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_7,
  &KemptyVKeMM4
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_8,
  &KemptyVKeMM3
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_9,
  &KemptyVKeMM2
};

_KLsimple_methodGVKe KemptyVKeMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K459,
  &KemptyVKeMM7I
};

_KLsimple_methodGVKe KemptyVKeMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K458,
  &KemptyVKeMM6I
};

_KLsimple_methodGVKe KemptyVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K457,
  &KemptyVKeMM5I
};

_KLsimple_methodGVKe KemptyVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K456,
  &KemptyVKeMM4I
};

_KLsimple_methodGVKe KemptyVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K455,
  &KemptyVKeMM3I
};

_KLsimple_methodGVKe KemptyVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K454,
  &KemptyVKeMM2I
};

_KLkeyword_methodGVKe KmakeVKdMM27 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K448,
  &key_mep_5,
  &KmakeVKdMM27I,
  &K449
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_15 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_14,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_16 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_15,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_17 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_16,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_18 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_17,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_19 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_18,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_20 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_19,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

_KLkeyword_methodGVKe KmakeVKdMM24 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K444,
  &key_mep_4,
  &KmakeVKdMM24I,
  &K437
};

_KLkeyword_methodGVKe KmakeVKdMM25 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K441,
  &key_mep_4,
  &KmakeVKdMM25I,
  &K437
};

_KLkeyword_methodGVKe KmakeVKdMM26 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K436,
  &key_mep_4,
  &KmakeVKdMM26I,
  &K437
};

_KLkeyword_methodGVKe KmakeVKdMM28 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K430,
  &key_mep_4,
  &KmakeVKdMM28I,
  &K431
};

_KLkeyword_methodGVKe KmakeVKdMM29 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K424,
  &key_mep_4,
  &KmakeVKdMM29I,
  &K425
};

_KLkeyword_methodGVKe KmakeVKdMM30 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K417,
  &key_mep_4,
  &KmakeVKdMM30I,
  &K418
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_28 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_27,
  (D) 5,
  &K404
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_29 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_28,
  (D) 5,
  &K403
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_30 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_29,
  (D) 5,
  &K402
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_31 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_30,
  (D) 5,
  &K401
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_32 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_31,
  (D) 5,
  &K400
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_33 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_32,
  (D) 5,
  &K399
};

_KLsimple_methodGVKe KasVKdMM43 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K414,
  &KasVKdMM43I
};

_KLsimple_methodGVKe KasVKdMM44 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K411,
  &KasVKdMM44I
};

_KLsimple_methodGVKe KasVKdMM45 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K408,
  &KasVKdMM45I
};

_KLsimple_methodGVKe KasVKdMM46 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K405,
  &KasVKdMM46I
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_29 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_28,
  (D) 9,
  &K404,
  &KLcollectionGVKd
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_30 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_29,
  (D) 9,
  &K403,
  &KLcollectionGVKd
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_31 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_30,
  (D) 9,
  &K402,
  &KLcollectionGVKd
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_32 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_31,
  (D) 9,
  &K401,
  &KLcollectionGVKd
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_33 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_32,
  (D) 9,
  &K400,
  &KLcollectionGVKd
};

_KLstandalone_domainGVKe_2 KasVKdRD_dylanRD_34 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_33,
  (D) 9,
  &K399,
  &KLcollectionGVKd
};

static _KLsingletonGVKd K399 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_byte_vectorGVKe
};

static _KLsingletonGVKd K400 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_double_byte_vectorGVKe
};

static _KLsingletonGVKd K401 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_element_type_vectorGVKe
};

static _KLsingletonGVKd K402 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_machine_word_vectorGVKe
};

static _KLsingletonGVKd K403 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_single_float_vectorGVKe
};

static _KLsingletonGVKd K404 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_double_float_vectorGVKe
};

static _KLsignatureAvaluesGVKi K405 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K406,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K406 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K407,
  &KLsimple_byte_vectorGVKe
};

static _KLsingletonGVKd K407 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLvectorGVKd
};

static _KLsignatureAvaluesGVKi K408 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K409,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K409 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K410,
  &KLsimple_byte_vectorGVKe
};

static _KLsingletonGVKd K410 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLstringGVKd
};

static _KLsignatureAvaluesGVKi K411 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K412,
  &K413
};

static _KLsimple_object_vectorGVKd_2 K412 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K399,
  &KLbyte_stringGVKd
};

static _KLsimple_object_vectorGVKd_1 K413 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

static _KLsignatureAvaluesGVKi K414 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K415,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K415 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K416,
  &KLsimple_byte_vectorGVKe
};

static _KLsingletonGVKd K416 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_stringGVKd
};

static _KLkeyword_signatureAvaluesGVKi K417 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K420,
  &K421,
  &K422,
  &K423
};

static _KLsimple_object_vectorGVKd_4 K418 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfill_,
  &K419,
  &KJsize_,
  (D) 1
};

static _KLdouble_floatGVKd K419 = {
  &KLdouble_floatGVKdW /* wrapper */,
  0.0e0
};

static _KLsimple_object_vectorGVKd_1 K420 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K404
};

static _KLsimple_object_vectorGVKd_2 K421 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfill_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_2 K422 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_floatGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K423 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_double_float_vectorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K424 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K427,
  &K421,
  &K428,
  &K429
};

static _KLsimple_object_vectorGVKd_4 K425 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfill_,
  &K426,
  &KJsize_,
  (D) 1
};

static _KLsingle_floatGVKd K426 = {
  &KLsingle_floatGVKdW /* wrapper */,
  0.0
};

static _KLsimple_object_vectorGVKd_1 K427 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K403
};

static _KLsimple_object_vectorGVKd_2 K428 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K429 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_single_float_vectorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K430 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K433,
  &K421,
  &K434,
  &K435
};

static _KLsimple_object_vectorGVKd_4 K431 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfill_,
  &K432,
  &KJsize_,
  (D) 1
};

static _KLmachine_wordGVKe K432 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

static _KLsimple_object_vectorGVKd_1 K433 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K402
};

static _KLsimple_object_vectorGVKd_2 K434 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K435 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_machine_word_vectorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K436 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K438,
  &K421,
  &K439,
  &K440
};

static _KLsimple_object_vectorGVKd_4 K437 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfill_,
  (D) 1,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K438 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K400
};

static _KLsimple_object_vectorGVKd_2 K439 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_byteGVKe,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K440 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_double_byte_vectorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K441 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K442,
  &K421,
  &K443,
  &K413
};

static _KLsimple_object_vectorGVKd_1 K442 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K399
};

static _KLsimple_object_vectorGVKd_2 K443 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbyteGVKe,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K444 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K445,
  &K421,
  &KDsignature_LintegerG_typesVKi,
  &K446
};

static _KLsimple_object_vectorGVKd_1 K445 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K447
};

static _KLsimple_object_vectorGVKd_1 K446 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_integer_vectorGVKe
};

static _KLsingletonGVKd K447 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_integer_vectorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K448 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K450,
  &K451,
  &K452,
  &K453
};

static _KLsimple_object_vectorGVKd_6 K449 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJfill_,
  &KPfalseVKi,
  &KJelement_type_,
  &KPfalseVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K450 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K401
};

static _KLsimple_object_vectorGVKd_3 K451 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJfill_,
  &KJelement_type_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_3 K452 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLtypeGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K453 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_element_type_vectorGVKe
};

static _KLsignatureAvaluesGVKi K454 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K445,
  &K446
};

static _KLsignatureAvaluesGVKi K455 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K442,
  &K413
};

static _KLsignatureAvaluesGVKi K456 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K438,
  &K440
};

static _KLsignatureAvaluesGVKi K457 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K433,
  &K435
};

static _KLsignatureAvaluesGVKi K458 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K427,
  &K429
};

static _KLsignatureAvaluesGVKi K459 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K420,
  &K423
};

static _KLsignatureAvaluesGVKi K460 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K461,
  &K420
};

static _KLsimple_object_vectorGVKd_1 K461 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K462
};

static _KLsingletonGVKd K462 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdouble_floatGVKd
};

static _KLsignatureAvaluesGVKi K463 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K464,
  &K427
};

static _KLsimple_object_vectorGVKd_1 K464 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K465
};

static _KLsingletonGVKd K465 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsingle_floatGVKd
};

static _KLsignatureAvaluesGVKi K466 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K467,
  &K433
};

static _KLsimple_object_vectorGVKd_1 K467 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K468
};

static _KLsingletonGVKd K468 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K469 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Llimited_integerG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K470 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K471,
  &K445
};

static _KLsimple_object_vectorGVKd_1 K471 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K472
};

static _KLsingletonGVKd K472 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLintegerGVKd
};

static _KLsignatureGVKe K473 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K474
};

static _KLsimple_object_vectorGVKd_3 K474 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdouble_floatGVKd,
  &KLsimple_double_float_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K475 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K476
};

static _KLsimple_object_vectorGVKd_3 K476 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingle_floatGVKd,
  &KLsimple_single_float_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K477 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K478
};

static _KLsimple_object_vectorGVKd_3 K478 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLsimple_machine_word_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K479 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K480
};

static _KLsimple_object_vectorGVKd_3 K480 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsimple_element_type_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K481 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K482
};

static _KLsimple_object_vectorGVKd_3 K482 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdouble_byteGVKe,
  &KLsimple_double_byte_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K483 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K484
};

static _KLsimple_object_vectorGVKd_3 K484 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyteGVKe,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureGVKe K485 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K486
};

static _KLsimple_object_vectorGVKd_3 K486 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLsimple_integer_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K487 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K474,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K488 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K476,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsignatureAvaluesGVKi K489 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K478,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K490 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K482,
  &K491
};

static _KLsimple_object_vectorGVKd_1 K491 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdouble_byteGVKe
};

static _KLsignatureAvaluesGVKi K492 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K484,
  &K493
};

static _KLsimple_object_vectorGVKd_1 K493 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyteGVKe
};

static _KLsignatureAvaluesGVKi K494 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K486,
  &KDsignature_LintegerG_typesVKi
};

static _KLimplementation_classGVKe K495 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_element_type_vectorGVKe,
  &KLsimple_element_type_vectorGVKeW,
  &Kelement_type_vector_elementVKiHLsimple_element_type_vectorG,
  &K497,
  (D) 6609,
  &KLsimple_element_type_vectorGZ32ZconstructorVKiMM0,
  &K500,
  &K501,
  (D) 45,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K502,
  &K503,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kelement_type_vector_elementVKiHLsimple_element_type_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLsimple_element_type_vectorGVKe,
  &KJfill_,
  &Kelement_type_vector_elementVKi,
  &Kelement_type_vector_element_setterVKi,
  &KLobjectGVKd,
  &KsizeVKdHLsimple_element_type_vectorG
};

static _KLsimple_object_vectorGVKd_2 K497 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kelement_typeVKeHLlimited_collectionG,
  &KsizeVKdHLsimple_element_type_vectorG
};

_KLkeyword_methodGVKe KLsimple_element_type_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K504,
  &key_mep_2,
  &KLsimple_element_type_vectorGZ32ZconstructorVKiMM0I,
  &K505
};

static _KLsimple_object_vectorGVKd_2 K500 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_collectionGVKe,
  &KLsimple_vectorGVKd
};

static _KLsimple_object_vectorGVKd_12 K501 = {
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
  &KLsimple_vectorGVKd,
  &KLlimited_collectionGVKe,
  &KLsimple_element_type_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K502 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kelement_type_vector_elementVKiHLsimple_element_type_vectorG
};

static _KLsimple_object_vectorGVKd_2 K503 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kelement_typeVKeHLlimited_collectionG,
  &Kelement_type_vector_elementVKiHLsimple_element_type_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K504 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K506,
  &KDsignature_LobjectG_typesVKi,
  &K453
};

static _KLsimple_object_vectorGVKd_4 K505 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K506 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJelement_type_,
  &KJsize_
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_element_type_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_element_type_vectorGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kelement_type_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K515,
  &K514,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kelement_type_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K512,
  &K511,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kelement_type_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kelement_type_vector_elementVKiHLsimple_element_type_vectorG
};

static _KLpairGVKd K511 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_type_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_34 K512 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "element-type-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kelement_type_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kelement_type_vector_elementVKiHLsimple_element_type_vectorG
};

static _KLpairGVKd K514 = {
  &KLpairGVKdW /* wrapper */,
  &Kelement_type_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K515 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "element-type-vector-element"
};

static _KLbyte_stringGVKd_28 K516 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "<simple-element-type-vector>"
};

_KLsimple_methodGVKe Kdouble_float_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K522,
  &Kdouble_float_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kdouble_float_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K521,
  &Kdouble_float_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K521 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K474
};

static _KLsignatureAvaluesGVKi K522 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K523,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K523 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_double_float_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K524 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K423,
  &K525
};

static _KLsimple_object_vectorGVKd_8 K525 = {
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

_KLsimple_methodGVKe Ksingle_float_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K531,
  &Ksingle_float_vector_current_elementVKiI
};

_KLsimple_methodGVKe Ksingle_float_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K530,
  &Ksingle_float_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K530 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K476
};

static _KLsignatureAvaluesGVKi K531 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K532,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K532 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_single_float_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K533 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K429,
  &K525
};

_KLsimple_methodGVKe Kmachine_word_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K539,
  &Kmachine_word_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kmachine_word_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K538,
  &Kmachine_word_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K538 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K478
};

static _KLsignatureAvaluesGVKi K539 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K540,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K540 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_machine_word_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K541 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K435,
  &K525
};

_KLsimple_methodGVKe Kelement_type_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K547,
  &Kelement_type_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kelement_type_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K546,
  &Kelement_type_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K546 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K480
};

static _KLsignatureGVKe K547 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K548
};

static _KLsimple_object_vectorGVKd_2 K548 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_element_type_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K549 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K453,
  &K525
};

_KLsimple_methodGVKe Kdouble_byte_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K555,
  &Kdouble_byte_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kdouble_byte_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K554,
  &Kdouble_byte_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K554 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K482
};

static _KLsignatureAvaluesGVKi K555 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K556,
  &K491
};

static _KLsimple_object_vectorGVKd_2 K556 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_double_byte_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K557 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K440,
  &K525
};

_KLsimple_methodGVKe Kbyte_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K563,
  &Kbyte_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kbyte_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K562,
  &Kbyte_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K562 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K484
};

static _KLsignatureAvaluesGVKi K563 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K564,
  &K493
};

static _KLsimple_object_vectorGVKd_2 K564 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K565 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K413,
  &K525
};

_KLsimple_methodGVKe Kinteger_vector_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K571,
  &Kinteger_vector_current_elementVKiI
};

_KLsimple_methodGVKe Kinteger_vector_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K570,
  &Kinteger_vector_current_element_setterVKiI
};

static _KLsignatureGVKe K570 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K486
};

static _KLsignatureAvaluesGVKi K571 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K572,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K572 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_integer_vectorGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K573 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K446,
  &K525
};

static _KLkeyword_signatureAvaluesGVKi K574 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K523,
  &K576,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K575 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K576 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLkeyword_signatureAvaluesGVKi K577 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K532,
  &K576,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K578 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K540,
  &K576,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLkeyword_signatureGVKe K579 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K548,
  &K576,
  &KDsignature_LobjectG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K580 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K556,
  &K576,
  &KDsignature_LobjectG_typesVKi,
  &K491
};

static _KLkeyword_signatureAvaluesGVKi K581 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K564,
  &K576,
  &KDsignature_LobjectG_typesVKi,
  &K493
};

static _KLkeyword_signatureAvaluesGVKi K582 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K572,
  &K576,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K583 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K584 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K423,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K585 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K429,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K586 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K435,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K587 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K440,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K588 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K413,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K589 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K446,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K590 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K453,
  &KDsignature_LtypeG_typesVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_float_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_double_float_vectorGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_single_float_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_single_float_vectorGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_machine_word_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_machine_word_vectorGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_double_byte_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_double_byte_vectorGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_byte_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_byte_vectorGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_integer_vectorG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_integer_vectorGVKe,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLimplementation_classGVKe K597 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLsimple_double_float_vectorGVKe,
  &KLsimple_double_float_vectorGVKeW,
  &Kdouble_float_vector_elementVKiHLsimple_double_float_vectorG,
  &K599,
  (D) 6633,
  &KLsimple_double_float_vectorGZ32ZconstructorVKiMM0,
  &K602,
  &K603,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K604,
  &K604,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kdouble_float_vector_elementVKiHLsimple_double_float_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K608,
  &KLsimple_double_float_vectorGVKe,
  &KJfill_,
  &Kdouble_float_vector_elementVKi,
  &Kdouble_float_vector_element_setterVKi,
  &KLdouble_floatGVKd,
  &KsizeVKdHLsimple_double_float_vectorG
};

static _KLsimple_object_vectorGVKd_1 K599 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLsimple_double_float_vectorG
};

_KLkeyword_methodGVKe KLsimple_double_float_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K605,
  &key_mep_2,
  &KLsimple_double_float_vectorGZ32ZconstructorVKiMM0I,
  &K606
};

static _KLsimple_object_vectorGVKd_1 K602 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_vectorGVKd
};

static _KLsimple_object_vectorGVKd_11 K603 = {
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
  &KLvectorGVKd,
  &KLsimple_vectorGVKd,
  &KLsimple_double_float_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K604 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kdouble_float_vector_elementVKiHLsimple_double_float_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K605 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K607,
  &KDsignature_LobjectG_typesVKi,
  &K423
};

static _KLsimple_object_vectorGVKd_2 K606 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K607 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsize_
};

static _KLdouble_floatGVKd K608 = {
  &KLdouble_floatGVKdW /* wrapper */,
  0.0e0
};

_KLsealed_generic_functionGVKe Kdouble_float_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K616,
  &K615,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kdouble_float_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K613,
  &K612,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kdouble_float_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kdouble_float_vector_elementVKiHLsimple_double_float_vectorG
};

static _KLpairGVKd K612 = {
  &KLpairGVKdW /* wrapper */,
  &Kdouble_float_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_34 K613 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "double-float-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kdouble_float_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kdouble_float_vector_elementVKiHLsimple_double_float_vectorG
};

static _KLpairGVKd K615 = {
  &KLpairGVKdW /* wrapper */,
  &Kdouble_float_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K616 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "double-float-vector-element"
};

static _KLbyte_stringGVKd_28 K617 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "<simple-double-float-vector>"
};

static _KLimplementation_classGVKe K618 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLsimple_single_float_vectorGVKe,
  &KLsimple_single_float_vectorGVKeW,
  &Ksingle_float_vector_elementVKiHLsimple_single_float_vectorG,
  &K620,
  (D) 6625,
  &KLsimple_single_float_vectorGZ32ZconstructorVKiMM0,
  &K602,
  &K623,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K624,
  &K624,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Ksingle_float_vector_elementVKiHLsimple_single_float_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K626,
  &KLsimple_single_float_vectorGVKe,
  &KJfill_,
  &Ksingle_float_vector_elementVKi,
  &Ksingle_float_vector_element_setterVKi,
  &KLsingle_floatGVKd,
  &KsizeVKdHLsimple_single_float_vectorG
};

static _KLsimple_object_vectorGVKd_1 K620 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLsimple_single_float_vectorG
};

_KLkeyword_methodGVKe KLsimple_single_float_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K625,
  &key_mep_2,
  &KLsimple_single_float_vectorGZ32ZconstructorVKiMM0I,
  &K606
};

static _KLsimple_object_vectorGVKd_11 K623 = {
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
  &KLvectorGVKd,
  &KLsimple_vectorGVKd,
  &KLsimple_single_float_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K624 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Ksingle_float_vector_elementVKiHLsimple_single_float_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K625 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K607,
  &KDsignature_LobjectG_typesVKi,
  &K429
};

static _KLsingle_floatGVKd K626 = {
  &KLsingle_floatGVKdW /* wrapper */,
  0.0
};

_KLsealed_generic_functionGVKe Ksingle_float_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K634,
  &K633,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Ksingle_float_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K631,
  &K630,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Ksingle_float_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Ksingle_float_vector_elementVKiHLsimple_single_float_vectorG
};

static _KLpairGVKd K630 = {
  &KLpairGVKdW /* wrapper */,
  &Ksingle_float_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_34 K631 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "single-float-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Ksingle_float_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Ksingle_float_vector_elementVKiHLsimple_single_float_vectorG
};

static _KLpairGVKd K633 = {
  &KLpairGVKdW /* wrapper */,
  &Ksingle_float_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K634 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "single-float-vector-element"
};

static _KLbyte_stringGVKd_28 K635 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "<simple-single-float-vector>"
};

static _KLimplementation_classGVKe K636 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLsimple_machine_word_vectorGVKe,
  &KLsimple_machine_word_vectorGVKeW,
  &Kmachine_word_vector_elementVKiHLsimple_machine_word_vectorG,
  &K638,
  (D) 6617,
  &KLsimple_machine_word_vectorGZ32ZconstructorVKiMM0,
  &K602,
  &K641,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K642,
  &K642,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kmachine_word_vector_elementVKiHLsimple_machine_word_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &K644,
  &KLsimple_machine_word_vectorGVKe,
  &KJfill_,
  &Kmachine_word_vector_elementVKi,
  &Kmachine_word_vector_element_setterVKi,
  &KLmachine_wordGVKe,
  &KsizeVKdHLsimple_machine_word_vectorG
};

static _KLsimple_object_vectorGVKd_1 K638 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLsimple_machine_word_vectorG
};

_KLkeyword_methodGVKe KLsimple_machine_word_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K643,
  &key_mep_2,
  &KLsimple_machine_word_vectorGZ32ZconstructorVKiMM0I,
  &K606
};

static _KLsimple_object_vectorGVKd_11 K641 = {
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
  &KLvectorGVKd,
  &KLsimple_vectorGVKd,
  &KLsimple_machine_word_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K642 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kmachine_word_vector_elementVKiHLsimple_machine_word_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K643 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K607,
  &KDsignature_LobjectG_typesVKi,
  &K435
};

static _KLmachine_wordGVKe K644 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

_KLsealed_generic_functionGVKe Kmachine_word_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K652,
  &K651,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kmachine_word_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K649,
  &K648,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kmachine_word_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kmachine_word_vector_elementVKiHLsimple_machine_word_vectorG
};

static _KLpairGVKd K648 = {
  &KLpairGVKdW /* wrapper */,
  &Kmachine_word_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_34 K649 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "machine-word-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kmachine_word_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kmachine_word_vector_elementVKiHLsimple_machine_word_vectorG
};

static _KLpairGVKd K651 = {
  &KLpairGVKdW /* wrapper */,
  &Kmachine_word_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K652 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "machine-word-vector-element"
};

static _KLbyte_stringGVKd_28 K653 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "<simple-machine-word-vector>"
};

static _KLimplementation_classGVKe K654 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLsimple_double_byte_vectorGVKe,
  &KLsimple_double_byte_vectorGVKeW,
  &Kdouble_byte_vector_elementVKiHLsimple_double_byte_vectorG,
  &K656,
  (D) 6601,
  &KLsimple_double_byte_vectorGZ32ZconstructorVKiMM0,
  &K602,
  &K659,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K660,
  &K660,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kdouble_byte_vector_elementVKiHLsimple_double_byte_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_double_byte_vectorGVKe,
  &KJfill_,
  &Kdouble_byte_vector_elementVKi,
  &Kdouble_byte_vector_element_setterVKi,
  &KLdouble_byteGVKe,
  &KsizeVKdHLsimple_double_byte_vectorG
};

static _KLsimple_object_vectorGVKd_1 K656 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLsimple_double_byte_vectorG
};

_KLkeyword_methodGVKe KLsimple_double_byte_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K661,
  &key_mep_2,
  &KLsimple_double_byte_vectorGZ32ZconstructorVKiMM0I,
  &K606
};

static _KLsimple_object_vectorGVKd_11 K659 = {
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
  &KLvectorGVKd,
  &KLsimple_vectorGVKd,
  &KLsimple_double_byte_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K660 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kdouble_byte_vector_elementVKiHLsimple_double_byte_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K661 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K607,
  &KDsignature_LobjectG_typesVKi,
  &K440
};

_KLsealed_generic_functionGVKe Kdouble_byte_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K669,
  &K668,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kdouble_byte_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K666,
  &K665,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kdouble_byte_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kdouble_byte_vector_elementVKiHLsimple_double_byte_vectorG
};

static _KLpairGVKd K665 = {
  &KLpairGVKdW /* wrapper */,
  &Kdouble_byte_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_33 K666 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "double-byte-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kdouble_byte_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kdouble_byte_vector_elementVKiHLsimple_double_byte_vectorG
};

static _KLpairGVKd K668 = {
  &KLpairGVKdW /* wrapper */,
  &Kdouble_byte_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K669 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "double-byte-vector-element"
};

static _KLbyte_stringGVKd_27 K670 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<simple-double-byte-vector>"
};

static _KLimplementation_classGVKe K671 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLsimple_byte_vectorGVKe,
  &KLsimple_byte_vectorGVKeW,
  &Kbyte_vector_elementVKiHLsimple_byte_vectorG,
  &K673,
  (D) 6593,
  &KLsimple_byte_vectorGZ32ZconstructorVKiMM0,
  &K602,
  &K676,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K677,
  &K677,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kbyte_vector_elementVKiHLsimple_byte_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_byte_vectorGVKe,
  &KJfill_,
  &Kbyte_vector_elementVKi,
  &Kbyte_vector_element_setterVKi,
  &KLbyteGVKe,
  &KsizeVKdHLsimple_byte_vectorG
};

static _KLsimple_object_vectorGVKd_1 K673 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLsimple_byte_vectorG
};

_KLkeyword_methodGVKe KLsimple_byte_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K678,
  &key_mep_2,
  &KLsimple_byte_vectorGZ32ZconstructorVKiMM0I,
  &K606
};

static _KLsimple_object_vectorGVKd_11 K676 = {
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
  &KLvectorGVKd,
  &KLsimple_vectorGVKd,
  &KLsimple_byte_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K677 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kbyte_vector_elementVKiHLsimple_byte_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K678 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K607,
  &KDsignature_LobjectG_typesVKi,
  &K413
};

_KLsealed_generic_functionGVKe Kbyte_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K686,
  &K685,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kbyte_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K683,
  &K682,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kbyte_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kbyte_vector_elementVKiHLsimple_byte_vectorG
};

static _KLpairGVKd K682 = {
  &KLpairGVKdW /* wrapper */,
  &Kbyte_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_26 K683 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "byte-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kbyte_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kbyte_vector_elementVKiHLsimple_byte_vectorG
};

static _KLpairGVKd K685 = {
  &KLpairGVKdW /* wrapper */,
  &Kbyte_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K686 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "byte-vector-element"
};

static _KLbyte_stringGVKd_20 K687 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<simple-byte-vector>"
};

static _KLimplementation_classGVKe K688 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLsimple_integer_vectorGVKe,
  &KLsimple_integer_vectorGVKeW,
  &Kinteger_vector_elementVKiHLsimple_integer_vectorG,
  &K690,
  (D) 6585,
  &KLsimple_integer_vectorGZ32ZconstructorVKiMM0,
  &K602,
  &K693,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K694,
  &K694,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Kinteger_vector_elementVKiHLsimple_integer_vectorG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_integer_vectorGVKe,
  &KJfill_,
  &Kinteger_vector_elementVKi,
  &Kinteger_vector_element_setterVKi,
  &KLintegerGVKd,
  &KsizeVKdHLsimple_integer_vectorG
};

static _KLsimple_object_vectorGVKd_1 K690 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLsimple_integer_vectorG
};

_KLkeyword_methodGVKe KLsimple_integer_vectorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K695,
  &key_mep_2,
  &KLsimple_integer_vectorGZ32ZconstructorVKiMM0I,
  &K606
};

static _KLsimple_object_vectorGVKd_11 K693 = {
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
  &KLvectorGVKd,
  &KLsimple_vectorGVKd,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_object_vectorGVKd_1 K694 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kinteger_vector_elementVKiHLsimple_integer_vectorG
};

static _KLkeyword_signatureAvaluesGVKi K695 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K607,
  &KDsignature_LobjectG_typesVKi,
  &K446
};

_KLsealed_generic_functionGVKe Kinteger_vector_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K703,
  &K702,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kinteger_vector_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K700,
  &K699,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Kinteger_vector_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kinteger_vector_elementVKiHLsimple_integer_vectorG
};

static _KLpairGVKd K699 = {
  &KLpairGVKdW /* wrapper */,
  &Kinteger_vector_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_29 K700 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "integer-vector-element-setter"
};

_KLrepeated_getter_methodGVKi Kinteger_vector_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kinteger_vector_elementVKiHLsimple_integer_vectorG
};

static _KLpairGVKd K702 = {
  &KLpairGVKdW /* wrapper */,
  &Kinteger_vector_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K703 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "integer-vector-element"
};

static _KLbyte_stringGVKd_23 K704 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<simple-integer-vector>"
};

/* Code */

D Ktype_for_copyVKdMM7I (D vector_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:43
  T3 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:43
  CONGRUENT_CALL_PROLOG(&Klimited_vectorVKe, 2);
  T2_0 = CONGRUENT_CALL2(T3, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:41
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM9I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T2_0 = &KLintegerGVKd;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM10I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T2_0 = &KLbyteGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM11I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T2_0 = &KLdouble_byteGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM12I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T2_0 = &KLmachine_wordGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM13I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T2_0 = &KLsingle_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kelement_typeVKeMM14I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T2_0 = &KLdouble_floatGVKd;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM12I (D vector_, D index_, D Urest_, D default_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T14_0 = T13;
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T15 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
      T18 = primitive_instanceQ(default_,&KLintegerGVKd);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
      if (T18 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
        T17.vector_element_[0] = &KJvalue_;
        T17.vector_element_[1] = default_;
        T17.vector_element_[2] = &KJtype_;
        T17.vector_element_[3] = &KLintegerGVKd;
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T16 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T17);
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T16, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
      T19_0 = T6_0;
      T7_0 = T19_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM13I (D vector_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13_0;
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

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T14 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(vector_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T16 = primitive_machine_word_shift_left_signal_overflow(T14,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T17 = primitive_machine_word_logior(T16,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T18 = primitive_cast_raw_as_integer(T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T15_0 = T18;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T13_0 = T15_0;
    T8_0 = T13_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T19 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T22 = primitive_instanceQ(default_,&KLbyteGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      if (T22 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
        T21.vector_element_[0] = &KJvalue_;
        T21.vector_element_[1] = default_;
        T21.vector_element_[2] = &KJtype_;
        T21.vector_element_[3] = &KLbyteGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T20 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T21);
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T20, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T23_0 = T6_0;
      T7_0 = T23_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM14I (D vector_, D index_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13_0;
  DDBYTE T14;
  D T15_0;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22;
  D T23_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T14 = REPEATED_DDBYTE_SLOT_VALUE_TAGGED(vector_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T16 = primitive_machine_word_shift_left_signal_overflow(T14,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T17 = primitive_machine_word_logior(T16,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T18 = primitive_cast_raw_as_integer(T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T15_0 = T18;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T13_0 = T15_0;
    T8_0 = T13_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T19 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
      T22 = primitive_instanceQ(default_,&KLdouble_byteGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
      if (T22 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
        T21.vector_element_[0] = &KJvalue_;
        T21.vector_element_[1] = default_;
        T21.vector_element_[2] = &KJtype_;
        T21.vector_element_[3] = &KLdouble_byteGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T20 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T21);
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T20, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
      T23_0 = T6_0;
      T7_0 = T23_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM15I (D vector_, D index_, D Urest_, D default_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T9 = SLOT_VALUE_INITD(vector_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
    T14_0 = T13;
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
    T15 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
      T16 = SLOT_VALUE_INITD(vector_, 0);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
      T19 = primitive_instanceQ(default_,T16);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = T16;
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM16I (D vector_, D index_, D Urest_, D default_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T13 = REPEATED_DWORD_SLOT_VALUE_TAGGED(vector_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T14 = primitive_wrap_machine_word(T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
      T19 = primitive_instanceQ(default_,&KLmachine_wordGVKe);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLmachine_wordGVKe;
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM17I (D vector_, D index_, D Urest_, D default_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T13 = REPEATED_DSFLT_SLOT_VALUE_TAGGED(vector_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T14 = primitive_raw_as_single_float(T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
      T19 = primitive_instanceQ(default_,&KLsingle_floatGVKd);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLsingle_floatGVKd;
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T8_0);
}

D KelementVKdMM18I (D vector_, D index_, D Urest_, D default_) {
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

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T9 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T13 = REPEATED_DDFLT_SLOT_VALUE_TAGGED(vector_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T14 = primitive_raw_as_double_float(T13);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
      T5_0 = Kelement_range_errorVKeI(vector_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
      T19 = primitive_instanceQ(default_,&KLdouble_floatGVKd);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLdouble_floatGVKd;
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM10I (D vector_, D index_, D Urest_, D default_) {
  D T5;
  D T6_0;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T5 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_checkVKeMM11I (D vector_, D index_, D Urest_, D default_) {
  D T5_0;
  DBYTE T6;
  D T7_0;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T6 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T9 = primitive_machine_word_shift_left_signal_overflow(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T7_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T5_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kelement_no_bounds_checkVKeMM12I (D vector_, D index_, D Urest_, D default_) {
  D T5_0;
  DDBYTE T6;
  D T7_0;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T6 = REPEATED_DDBYTE_SLOT_VALUE_TAGGED(vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T9 = primitive_machine_word_shift_left_signal_overflow(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T7_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T5_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kelement_no_bounds_checkVKeMM13I (D vector_, D index_, D Urest_, D default_) {
  D T5;
  D T6_0;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T5 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 2, T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_checkVKeMM14I (D vector_, D index_, D Urest_, D default_) {
  DWORD T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T5 = REPEATED_DWORD_SLOT_VALUE_TAGGED(vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_no_bounds_checkVKeMM15I (D vector_, D index_, D Urest_, D default_) {
  DSFLT T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T5 = REPEATED_DSFLT_SLOT_VALUE_TAGGED(vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T6 = primitive_raw_as_single_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_no_bounds_checkVKeMM16I (D vector_, D index_, D Urest_, D default_) {
  DDFLT T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T5 = REPEATED_DDFLT_SLOT_VALUE_TAGGED(vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T6 = primitive_raw_as_double_float(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kforward_iteration_protocolVKdMM14I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kdouble_float_vector_current_elementVKi;
  T3_6 = &Kdouble_float_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kforward_iteration_protocolVKdMM13I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Ksingle_float_vector_current_elementVKi;
  T3_6 = &Ksingle_float_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kforward_iteration_protocolVKdMM12I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kmachine_word_vector_current_elementVKi;
  T3_6 = &Kmachine_word_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kforward_iteration_protocolVKdMM11I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T2 = SLOT_VALUE_INITD(sequence_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kelement_type_vector_current_elementVKi;
  T3_6 = &Kelement_type_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kforward_iteration_protocolVKdMM10I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kdouble_byte_vector_current_elementVKi;
  T3_6 = &Kdouble_byte_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kforward_iteration_protocolVKdMM9I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kbyte_vector_current_elementVKi;
  T3_6 = &Kbyte_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kforward_iteration_protocolVKdMM8I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kinteger_vector_current_elementVKi;
  T3_6 = &Kinteger_vector_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_ELT(3, T3_3);
  MV_SET_ELT(4, T3_4);
  MV_SET_ELT(5, T3_5);
  MV_SET_ELT(6, T3_6);
  MV_SET_ELT(7, T3_7);
  MV_SET_COUNT(8);
  return(T3_0);
}

D Kbackward_iteration_protocolVKdMM3I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kinteger_vector_current_elementVKi;
  T6_6 = &Kinteger_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kbackward_iteration_protocolVKdMM4I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kbyte_vector_current_elementVKi;
  T6_6 = &Kbyte_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kbackward_iteration_protocolVKdMM5I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kdouble_byte_vector_current_elementVKi;
  T6_6 = &Kdouble_byte_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kbackward_iteration_protocolVKdMM6I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T2 = SLOT_VALUE_INITD(sequence_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kelement_type_vector_current_elementVKi;
  T6_6 = &Kelement_type_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kbackward_iteration_protocolVKdMM7I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kmachine_word_vector_current_elementVKi;
  T6_6 = &Kmachine_word_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kbackward_iteration_protocolVKdMM8I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Ksingle_float_vector_current_elementVKi;
  T6_6 = &Ksingle_float_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D Kbackward_iteration_protocolVKdMM9I (D sequence_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T6_5;
  D T6_6;
  D T6_7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kdouble_float_vector_current_elementVKi;
  T6_6 = &Kdouble_float_vector_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_ELT(5, T6_5);
  MV_SET_ELT(6, T6_6);
  MV_SET_ELT(7, T6_7);
  MV_SET_COUNT(8);
  return(T6_0);
}

D KmakeVKdMM27I (D class_, D Urest_, D fill_, D element_type_, D size_) {
  D element_typeF6;
  D sizeF7;
  D T8_0;
  DWORD T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  D T23_0;
  D T24;
  D T25_0;
  D mm_wrapper_;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:16
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:16
  primitive_type_check(element_type_, &KLtypeGVKd);
  element_typeF6 = element_type_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:16
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF7 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:20
  T9 = primitive_cast_integer_as_raw(sizeF7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:20
  T10 = primitive_machine_word_equalQ(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:20
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:21
    T13 = primitive_instanceQ(fill_,element_typeF6);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:21
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:21
      T12.vector_element_[0] = &KJvalue_;
      T12.vector_element_[1] = fill_;
      T12.vector_element_[2] = &KJtype_;
      T12.vector_element_[3] = element_typeF6;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:21
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T11 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T12);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:21
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T11, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:21
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T14 = SLOT_VALUE(&KLsimple_element_type_vectorGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T17 = SLOT_VALUE_INITD(T14, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T18 = primitive_cast_integer_as_raw(T17);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T19 = primitive_machine_word_logand(T18,262140);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T20 = primitive_machine_word_logior(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T21 = primitive_machine_word_add_signal_overflow(5,T19);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T22 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T24 = SLOT_VALUE_INITD(T14, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T25_0 = T24;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T23_0 = T25_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  mm_wrapper_ = T23_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T27 = primitive_machine_word_subtract_signal_overflow(T20,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T28 = primitive_machine_word_shift_right(T27,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T30 = primitive_cast_integer_as_raw(sizeF7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T29 = primitive_machine_word_shift_right(T30,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T31 = primitive_machine_word_shift_right(T19,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T15 = primitive_object_allocate_filled(T22,mm_wrapper_,T28,element_typeF6,T29,T31,fill_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:23
  T16 = T15;
  MV_SET_ELT(0, T15);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:16
  T8_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:16
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM24I (D class_, D Urest_, D fill_, D size_) {
  D fillF5;
  D sizeF6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21_0;
  D T22;
  D T23_0;
  D mm_wrapper_;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  D T30_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  primitive_type_check(fill_, &KLintegerGVKd);
  fillF5 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T8 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T10_0 = Dempty_Lsimple_integer_vectorGVKi;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T11_0 = T10_0;
    T7_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T12 = SLOT_VALUE(&KLsimple_integer_vectorGVKe, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T15 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T16 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T17 = primitive_machine_word_logand(T16,262140);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T18 = primitive_machine_word_logior(T17,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T19 = primitive_machine_word_add_signal_overflow(5,T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T20 = primitive_machine_word_shift_right(T19,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T22 = SLOT_VALUE_INITD(T12, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T23_0 = T22;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T21_0 = T23_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    mm_wrapper_ = T21_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T25 = primitive_machine_word_subtract_signal_overflow(T18,4);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T26 = primitive_machine_word_shift_right(T25,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T28 = primitive_cast_integer_as_raw(sizeF6);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T27 = primitive_machine_word_shift_right(T28,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T29 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T13 = primitive_object_allocate_filled(T20,mm_wrapper_,T26,&KPunboundVKi,T27,T29,fillF5);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T14 = T13;
    MV_SET_ELT(0, T13);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T30_0 = T14;
    T7_0 = T30_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM12I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM13I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T12 = primitive_cast_integer_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T11 = primitive_machine_word_shift_right(T12,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T11, vector_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM14I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T12 = primitive_cast_integer_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T11 = primitive_machine_word_shift_right(T12,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    REPEATED_DDBYTE_SLOT_VALUE_TAGGED_SETTER(T11, vector_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM15I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:31
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:31
  T10 = primitive_instanceQ(new_value_,T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:31
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:31
    T9.vector_element_[0] = &KJvalue_;
    T9.vector_element_[1] = new_value_;
    T9.vector_element_[2] = &KJtype_;
    T9.vector_element_[3] = T7;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:31
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T9);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:31
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    CONGRUENT_CALL2(T8, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:32
  T11 = SLOT_VALUE_INITD(vector_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:32
  T12 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:32
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:32
  T14 = primitive_machine_word_unsigned_less_thanQ(T12,T13);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:32
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:33
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 2, T12);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:33
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:35
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:32
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:29
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM16I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T11 = primitive_unwrap_machine_word(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T11, vector_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM17I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DSFLT T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T11 = primitive_single_float_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    REPEATED_DSFLT_SLOT_VALUE_TAGGED_SETTER(T11, vector_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM18I (D new_value_, D vector_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DDFLT T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T7 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T11 = primitive_double_float_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    REPEATED_DDFLT_SLOT_VALUE_TAGGED_SETTER(T11, vector_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T5_0 = Kelement_range_errorVKeI(vector_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_check_setterVKeMM12I (D new_value_, D vector_, D index_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM13I (D new_value_, D vector_, D index_) {
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T7 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T6, vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM14I (D new_value_, D vector_, D index_) {
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T7 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  REPEATED_DDBYTE_SLOT_VALUE_TAGGED_SETTER(T6, vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM15I (D new_value_, D vector_, D index_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM16I (D new_value_, D vector_, D index_) {
  D T4_0;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T5 = primitive_unwrap_machine_word(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T5, vector_, 1, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM17I (D new_value_, D vector_, D index_) {
  D T4_0;
  DSFLT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T5 = primitive_single_float_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  REPEATED_DSFLT_SLOT_VALUE_TAGGED_SETTER(T5, vector_, 1, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kelement_no_bounds_check_setterVKeMM18I (D new_value_, D vector_, D index_) {
  D T4_0;
  DDFLT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T5 = primitive_double_float_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  REPEATED_DDFLT_SLOT_VALUE_TAGGED_SETTER(T5, vector_, 1, T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kconcrete_limited_vector_classVKiMM1I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T2_0 = &KLsimple_integer_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_vector_classVKiMM2I (D of_) {
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:50
  T7 = KsubtypeQVKdMM11I(of_, &KLbyteGVKe);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:50
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:51
    T2_0 = &KLsimple_byte_vectorGVKe;
    T6_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:50
    T8 = KsubtypeQVKdMM11I(of_, &KLdouble_byteGVKe);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:50
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:52
      T3_0 = &KLsimple_double_byte_vectorGVKe;
      T5_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:53
      T4_0 = &KLsimple_element_type_vectorGVKe;
      T5_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:50
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:50
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:48
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kconcrete_limited_vector_classVKiMM3I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T2_0 = &KLsimple_machine_word_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_vector_classVKiMM4I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T2_0 = &KLsimple_single_float_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kconcrete_limited_vector_classVKiMM5I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T2_0 = &KLsimple_double_float_vectorGVKe;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T2_0);
}

D KemptyVKeMM7I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T2_0 = Dempty_Lsimple_double_float_vectorGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyVKeMM6I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T2_0 = Dempty_Lsimple_single_float_vectorGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyVKeMM5I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T2_0 = Dempty_Lsimple_machine_word_vectorGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyVKeMM4I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T2_0 = Dempty_Lsimple_double_byte_vectorGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyVKeMM3I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T2_0 = Dempty_Lsimple_byte_vectorGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyVKeMM2I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T2_0 = Dempty_Lsimple_integer_vectorGVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM25I (D class_, D Urest_, D fill_, D size_) {
  D fillF5;
  D sizeF6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  D T24_0;
  D T25;
  D T26_0;
  D mm_wrapper_;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36_0;
  D T37;
  D T38;
  D T39;
  D T40_0;
  D T41_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  primitive_type_check(fill_, &KLbyteGVKe);
  fillF5 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T8 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T10_0 = Dempty_Lsimple_byte_vectorGVKi;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T11_0 = T10_0;
    T7_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T12 = SLOT_VALUE(&KLsimple_byte_vectorGVKe, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T18 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T19 = primitive_cast_integer_as_raw(T18);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T20 = primitive_machine_word_logand(T19,262140);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T21 = primitive_machine_word_logior(T20,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T22 = primitive_machine_word_add_signal_overflow(5,T20);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T23 = primitive_machine_word_shift_right(T22,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T25 = SLOT_VALUE_INITD(T12, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T26_0 = T25;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T24_0 = T26_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    mm_wrapper_ = T24_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T28 = primitive_machine_word_subtract_signal_overflow(T21,4);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T29 = primitive_machine_word_shift_right(T28,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T31 = primitive_cast_integer_as_raw(sizeF6);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T30 = primitive_machine_word_shift_right(T31,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T32 = primitive_machine_word_shift_right(T20,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T34 = primitive_cast_integer_as_raw(fillF5);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T33 = primitive_machine_word_shift_right(T34,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T35 = SLOT_VALUE_INITD(T12, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T37 = SLOT_VALUE(T35, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T38 = SLOT_VALUE(&KLsimple_arrayGVKi, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T36_0 = KsubiclassQVKiI(T37, T35, T38, &KLsimple_arrayGVKi);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T39 = T36_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T15 = primitive_byte_allocate_filled(T23,mm_wrapper_,T29,&KPunboundVKi,T30,T32,T33);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T16 = T15;
      MV_SET_ELT(0, T15);
      MV_SET_COUNT(1);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T40_0 = T16;
      T17 = T40_0;
      MV_SET_COUNT(1);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T13 = primitive_byte_allocate_leaf_filled(T23,mm_wrapper_,T29,&KPunboundVKi,T30,T32,T33);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T14 = T13;
      MV_SET_ELT(0, T13);
      MV_SET_COUNT(1);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
      T41_0 = T14;
      T17 = T41_0;
      MV_SET_COUNT(1);
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T7_0 = T17;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T7_0);
}

D KmakeVKdMM26I (D class_, D Urest_, D fill_, D size_) {
  D fillF5;
  D sizeF6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21_0;
  D T22;
  D T23_0;
  D mm_wrapper_;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  primitive_type_check(fill_, &KLdouble_byteGVKe);
  fillF5 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T8 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T10_0 = Dempty_Lsimple_double_byte_vectorGVKi;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T11_0 = T10_0;
    T7_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T12 = SLOT_VALUE(&KLsimple_double_byte_vectorGVKe, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T15 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T16 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T17 = primitive_machine_word_logand(T16,262140);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T18 = primitive_machine_word_logior(T17,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T19 = primitive_machine_word_add_signal_overflow(5,T17);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T20 = primitive_machine_word_shift_right(T19,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T22 = SLOT_VALUE_INITD(T12, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T23_0 = T22;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T21_0 = T23_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    mm_wrapper_ = T21_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T25 = primitive_machine_word_subtract_signal_overflow(T18,4);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T26 = primitive_machine_word_shift_right(T25,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T28 = primitive_cast_integer_as_raw(sizeF6);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T27 = primitive_machine_word_shift_right(T28,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T29 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T31 = primitive_cast_integer_as_raw(fillF5);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T30 = primitive_machine_word_shift_right(T31,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T13 = primitive_double_byte_allocate_filled(T20,mm_wrapper_,T26,&KPunboundVKi,T27,T29,T30);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T14 = T13;
    MV_SET_ELT(0, T13);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
    T32_0 = T14;
    T7_0 = T32_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T7_0);
}

D KmakeVKdMM28I (D class_, D Urest_, D fill_, D size_) {
  D fillF5;
  D sizeF6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  DWORD raw_repeated_fill_;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22_0;
  D T23;
  D T24_0;
  D mm_wrapper_;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  primitive_type_check(fill_, &KLmachine_wordGVKe);
  fillF5 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T8 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T10_0 = Dempty_Lsimple_machine_word_vectorGVKi;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T11_0 = T10_0;
    T7_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T12 = SLOT_VALUE(&KLsimple_machine_word_vectorGVKe, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T16 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T18 = primitive_machine_word_logand(T17,262140);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T19 = primitive_machine_word_logior(T18,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T20 = primitive_machine_word_add_signal_overflow(5,T18);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T21 = primitive_machine_word_shift_right(T20,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T23 = SLOT_VALUE_INITD(T12, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T24_0 = T23;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T22_0 = T24_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    mm_wrapper_ = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T26 = primitive_machine_word_subtract_signal_overflow(T19,4);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T27 = primitive_machine_word_shift_right(T26,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T29 = primitive_cast_integer_as_raw(sizeF6);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T28 = primitive_machine_word_shift_right(T29,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T30 = primitive_machine_word_shift_right(T18,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    raw_repeated_fill_ = primitive_unwrap_machine_word(fillF5);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T14 = primitive_word_allocate_filled(T21,mm_wrapper_,T27,&KPunboundVKi,T28,T30,raw_repeated_fill_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T15 = T14;
    MV_SET_ELT(0, T14);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
    T31_0 = T15;
    T7_0 = T31_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T7_0);
}

D KmakeVKdMM29I (D class_, D Urest_, D fill_, D size_) {
  D fillF5;
  D sizeF6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  DSFLT raw_repeated_fill_;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22_0;
  D T23;
  D T24_0;
  D mm_wrapper_;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  primitive_type_check(fill_, &KLsingle_floatGVKd);
  fillF5 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T8 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T10_0 = Dempty_Lsimple_single_float_vectorGVKi;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T11_0 = T10_0;
    T7_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T12 = SLOT_VALUE(&KLsimple_single_float_vectorGVKe, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T16 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T18 = primitive_machine_word_logand(T17,262140);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T19 = primitive_machine_word_logior(T18,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T20 = primitive_machine_word_add_signal_overflow(5,T18);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T21 = primitive_machine_word_shift_right(T20,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T23 = SLOT_VALUE_INITD(T12, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T24_0 = T23;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T22_0 = T24_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    mm_wrapper_ = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T26 = primitive_machine_word_subtract_signal_overflow(T19,4);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T27 = primitive_machine_word_shift_right(T26,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T29 = primitive_cast_integer_as_raw(sizeF6);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T28 = primitive_machine_word_shift_right(T29,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T30 = primitive_machine_word_shift_right(T18,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    raw_repeated_fill_ = primitive_single_float_as_raw(fillF5);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T14 = primitive_single_float_allocate_filled(T21,mm_wrapper_,T27,&KPunboundVKi,T28,T30,raw_repeated_fill_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T15 = T14;
    MV_SET_ELT(0, T14);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
    T31_0 = T15;
    T7_0 = T31_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T7_0);
}

D KmakeVKdMM30I (D class_, D Urest_, D fill_, D size_) {
  D fillF5;
  D sizeF6;
  D T7_0;
  DWORD T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12;
  DDFLT raw_repeated_fill_;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22_0;
  D T23;
  D T24_0;
  D mm_wrapper_;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  primitive_type_check(fill_, &KLdouble_floatGVKd);
  fillF5 = fill_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF6 = size_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T8 = primitive_cast_integer_as_raw(sizeF6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T9 = primitive_machine_word_equalQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T10_0 = Dempty_Lsimple_double_float_vectorGVKi;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T11_0 = T10_0;
    T7_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T12 = SLOT_VALUE(&KLsimple_double_float_vectorGVKe, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T16 = SLOT_VALUE_INITD(T12, 0);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T18 = primitive_machine_word_logand(T17,262140);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T19 = primitive_machine_word_logior(T18,1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T20 = primitive_machine_word_add_signal_overflow(5,T18);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T21 = primitive_machine_word_shift_right(T20,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T23 = SLOT_VALUE_INITD(T12, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T24_0 = T23;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T22_0 = T24_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    mm_wrapper_ = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T26 = primitive_machine_word_subtract_signal_overflow(T19,4);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T27 = primitive_machine_word_shift_right(T26,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T29 = primitive_cast_integer_as_raw(sizeF6);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T28 = primitive_machine_word_shift_right(T29,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T30 = primitive_machine_word_shift_right(T18,2);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    raw_repeated_fill_ = primitive_double_float_as_raw(fillF5);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T14 = primitive_double_float_allocate_filled(T21,mm_wrapper_,T27,&KPunboundVKi,T28,T30,raw_repeated_fill_);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T15 = T14;
    MV_SET_ELT(0, T14);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
    T31_0 = T15;
    T7_0 = T31_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T7_0);
}

D KasVKdMM43I (D bsc_, D bv_) {
  DWORD i_T, i_;
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  D T9_0;
  DBYTE T10;
  D T11_0;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:70
  T5 = SLOT_VALUE_INITD(bv_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:70
  T6 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
  T7 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
    T8 = primitive_machine_word_less_thanQ(i_,T7);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T10 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(bv_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T12 = primitive_machine_word_shift_left_signal_overflow(T10,2);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T13 = primitive_machine_word_logior(T12,1);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T14 = primitive_cast_raw_as_integer(T13);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T11_0 = T14;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T9_0 = T11_0;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T15 = T9_0;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T17 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      T16 = primitive_machine_word_shift_right(T17,2);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:73
      REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T16, T6, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
      T18 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
      i_T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:76
  T4_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:68
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM44I (D bvc_, D bs_) {
  DWORD i_T, i_;
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  DBCHR T9;
  D T10_0;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14_0;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:81
  T5 = SLOT_VALUE_INITD(bs_, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:81
  T6 = KmakeVKdMM25I(&KLsimple_byte_vectorGVKe, &KPempty_vectorVKi, (D) 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
  T7 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
    T8 = primitive_machine_word_less_thanQ(i_,T7);
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T9 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(bs_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T11 = primitive_machine_word_shift_left_signal_overflow(T9,2);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T12 = primitive_machine_word_logior(T11,1);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T13 = primitive_cast_raw_as_integer(T12);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T14_0 = T13;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T10_0 = T14_0;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T15 = T10_0;
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T17 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      T16 = primitive_machine_word_shift_right(T17,2);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:84
      REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T16, T6, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
      T18 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
      i_T = T18;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:83
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:87
  T4_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:79
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM45I (D class_, D x_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:90
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:92
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLbyte_stringGVKd, x_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:90
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:90
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM46I (D class_, D x_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:96
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:98
  T3_0 = x_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:96
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLsimple_element_type_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_, D Uunique_size_) {
  D T5;
  D object_;
  D Uunique_element_typeF7;
  D Uunique_sizeF8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T5 = Kallocate_instanceVKeI(&KLsimple_element_type_vectorGVKe, init_args_);
  object_ = T5;
  Uunique_element_typeF7 = Uunique_element_type_;
  SLOT_VALUE_SETTER(Uunique_element_typeF7, object_, 0);
  Uunique_sizeF8 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF8, object_, 1);
  T9_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kdouble_float_vector_current_elementVKiI (D vector_, D state_) {
  DDFLT T2;
  D T3;
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T2 = REPEATED_DDFLT_SLOT_VALUE_TAGGED(vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T3 = primitive_raw_as_double_float(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kdouble_float_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DDFLT T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T4 = primitive_double_float_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  REPEATED_DDFLT_SLOT_VALUE_TAGGED_SETTER(T4, vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  return(T3);
}

D Ksingle_float_vector_current_elementVKiI (D vector_, D state_) {
  DSFLT T2;
  D T3;
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T2 = REPEATED_DSFLT_SLOT_VALUE_TAGGED(vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T3 = primitive_raw_as_single_float(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksingle_float_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DSFLT T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T4 = primitive_single_float_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  REPEATED_DSFLT_SLOT_VALUE_TAGGED_SETTER(T4, vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  return(T3);
}

D Kmachine_word_vector_current_elementVKiI (D vector_, D state_) {
  DWORD T2;
  D T3;
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T2 = REPEATED_DWORD_SLOT_VALUE_TAGGED(vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T3 = primitive_wrap_machine_word(T2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kmachine_word_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DWORD T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T4 = primitive_unwrap_machine_word(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T4, vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  return(T3);
}

D Kelement_type_vector_current_elementVKiI (D vector_, D state_) {
  D T2;
  D T3_0;
  DWORD T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T2 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 2, T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kelement_type_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DWORD T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 2, T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:13
  return(T3);
}

D Kdouble_byte_vector_current_elementVKiI (D vector_, D state_) {
  D T2_0;
  DDBYTE T3;
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T3 = REPEATED_DDBYTE_SLOT_VALUE_TAGGED(vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T6 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T4_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T2_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdouble_byte_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T6 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  REPEATED_DDBYTE_SLOT_VALUE_TAGGED_SETTER(T5, vector_, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  return(T3);
}

D Kbyte_vector_current_elementVKiI (D vector_, D state_) {
  D T2_0;
  DBYTE T3;
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T3 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(vector_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T6 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T4_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T2_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kbyte_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T6 = primitive_cast_integer_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  REPEATED_DBYTE_SLOT_VALUE_TAGGED_SETTER(T5, vector_, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  return(T3);
}

D Kinteger_vector_current_elementVKiI (D vector_, D state_) {
  D T2;
  D T3_0;
  DWORD T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T2 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinteger_vector_current_element_setterVKiI (D new_value_, D vector_, D state_) {
  D T3;
  DWORD T4;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T4 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, vector_, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T3 = new_value_;
  MV_SET_ELT(0, new_value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  return(T3);
}

D KLsimple_double_float_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T4 = Kallocate_instanceVKeI(&KLsimple_double_float_vectorGVKe, init_args_);
  object_ = T4;
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLsimple_single_float_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T4 = Kallocate_instanceVKeI(&KLsimple_single_float_vectorGVKe, init_args_);
  object_ = T4;
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLsimple_machine_word_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T4 = Kallocate_instanceVKeI(&KLsimple_machine_word_vectorGVKe, init_args_);
  object_ = T4;
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLsimple_double_byte_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T4 = Kallocate_instanceVKeI(&KLsimple_double_byte_vectorGVKe, init_args_);
  object_ = T4;
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLsimple_byte_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T4 = Kallocate_instanceVKeI(&KLsimple_byte_vectorGVKe, init_args_);
  object_ = T4;
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLsimple_integer_vectorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T4 = Kallocate_instanceVKeI(&KLsimple_integer_vectorGVKe, init_args_);
  object_ = T4;
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_limited_vector_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_limited_vector_for_user () {
{
  D T0;
  D T1;
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9_0;
  D T10;
  D T11_0;
  D mm_wrapper_;
  DWORD T13;
  DWORD T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T1 = SLOT_VALUE(&KLsimple_integer_vectorGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T3 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T5 = primitive_machine_word_logand(T4,262140);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T7 = primitive_machine_word_add_signal_overflow(5,T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T8 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T10 = SLOT_VALUE_INITD(T1, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T9_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  mm_wrapper_ = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T13 = primitive_machine_word_subtract_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T15 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T2 = primitive_object_allocate_filled(T8,mm_wrapper_,T14,&KPunboundVKi,0,T15,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  Dempty_Lsimple_integer_vectorGVKi = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:8
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  D T2;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10_0;
  D T11;
  D T12_0;
  D mm_wrapper_;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T1 = SLOT_VALUE(&KLsimple_byte_vectorGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T4 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T6 = primitive_machine_word_logand(T5,262140);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T8 = primitive_machine_word_add_signal_overflow(5,T6);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T9 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T11 = SLOT_VALUE_INITD(T1, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T10_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  mm_wrapper_ = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T14 = primitive_machine_word_subtract_signal_overflow(T7,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T16 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T17 = SLOT_VALUE_INITD(T1, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T19 = SLOT_VALUE(T17, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T20 = SLOT_VALUE(&KLsimple_arrayGVKi, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T18_0 = KsubiclassQVKiI(T19, T17, T20, &KLsimple_arrayGVKi);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T21 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T3 = primitive_byte_allocate_filled(T9,mm_wrapper_,T15,&KPunboundVKi,0,T16,0);
    T22 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
    T2 = primitive_byte_allocate_leaf_filled(T9,mm_wrapper_,T15,&KPunboundVKi,0,T16,0);
    T22 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  Dempty_Lsimple_byte_vectorGVKi = T22;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:10
  T0 = &KPfalseVKi;
  goto I3;
}
I3:

{
  D T0;
  D T1;
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9_0;
  D T10;
  D T11_0;
  D mm_wrapper_;
  DWORD T13;
  DWORD T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T1 = SLOT_VALUE(&KLsimple_double_byte_vectorGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T3 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T5 = primitive_machine_word_logand(T4,262140);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T7 = primitive_machine_word_add_signal_overflow(5,T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T8 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T10 = SLOT_VALUE_INITD(T1, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T9_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  mm_wrapper_ = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T13 = primitive_machine_word_subtract_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T15 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T2 = primitive_double_byte_allocate_filled(T8,mm_wrapper_,T14,&KPunboundVKi,0,T15,0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  Dempty_Lsimple_double_byte_vectorGVKi = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:11
  T0 = &KPfalseVKi;
  goto I6;
}
I6:

{
  D T0;
  D T1;
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9_0;
  D T10;
  D T11_0;
  D mm_wrapper_;
  DWORD T13;
  DWORD T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T1 = SLOT_VALUE(&KLsimple_machine_word_vectorGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T3 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T5 = primitive_machine_word_logand(T4,262140);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T7 = primitive_machine_word_add_signal_overflow(5,T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T8 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T10 = SLOT_VALUE_INITD(T1, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T9_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  mm_wrapper_ = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T13 = primitive_machine_word_subtract_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T15 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T2 = primitive_word_allocate_filled(T8,mm_wrapper_,T14,&KPunboundVKi,0,T15,0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  Dempty_Lsimple_machine_word_vectorGVKi = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:57
  T0 = &KPfalseVKi;
  goto I9;
}
I9:

{
  D T0;
  D T1;
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9_0;
  D T10;
  D T11_0;
  D mm_wrapper_;
  DWORD T13;
  DWORD T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T1 = SLOT_VALUE(&KLsimple_single_float_vectorGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T3 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T5 = primitive_machine_word_logand(T4,262140);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T7 = primitive_machine_word_add_signal_overflow(5,T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T8 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T10 = SLOT_VALUE_INITD(T1, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T9_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  mm_wrapper_ = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T13 = primitive_machine_word_subtract_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T15 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T2 = primitive_single_float_allocate_filled(T8,mm_wrapper_,T14,&KPunboundVKi,0,T15,0.0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  Dempty_Lsimple_single_float_vectorGVKi = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:58
  T0 = &KPfalseVKi;
  goto I12;
}
I12:

{
  D T0;
  D T1;
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9_0;
  D T10;
  D T11_0;
  D mm_wrapper_;
  DWORD T13;
  DWORD T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T1 = SLOT_VALUE(&KLsimple_double_float_vectorGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T3 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T5 = primitive_machine_word_logand(T4,262140);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T7 = primitive_machine_word_add_signal_overflow(5,T5);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T8 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T10 = SLOT_VALUE_INITD(T1, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T9_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  mm_wrapper_ = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T13 = primitive_machine_word_subtract_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T15 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T2 = primitive_double_float_allocate_filled(T8,mm_wrapper_,T14,&KPunboundVKi,0,T15,0.0e0);
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  Dempty_Lsimple_double_float_vectorGVKi = T2;
  // /opt/opendylan-2013.1/sources/dylan/limited-vector.dylan:59
  T0 = &KPfalseVKi;
  goto I15;
}
I15:

  return;
}


/* eof */
