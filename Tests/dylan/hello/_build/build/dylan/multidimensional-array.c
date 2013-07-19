#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_integer_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D integer_vector_element_[nrepeated+1]; \
  } _KLsimple_integer_vectorGVKe_##nrepeated;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLmultidimensional_arrayGVKi;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLmissing_keyword_errorGVKi;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(28);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(38);

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

#define  define__KLsimple_element_type_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D element_type_; \
    D size_; \
    D element_type_vector_element_[nrepeated+1]; \
  } _KLsimple_element_type_vectorGVKe_##nrepeated;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_collection_class_;
  D limited_collection_element_type_;
  D limited_collection_concrete_class_;
  D limited_collection_size_;
  D limited_collection_dimensions_;
} _KLlimited_array_typeGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
} _KLsimple_arrayGVKi;

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

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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


/* Typedefs for defined classes */

#define  define__KLsimple_object_arrayGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_object_array_element_[nrepeated+1]; \
  } _KLsimple_object_arrayGVKi_##nrepeated;


/* Referenced object declarations */

D KmakeVKdMM24I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLsimple_integer_vectorGVKe;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_integer_vectorGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
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
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_45;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLkeyword_methodGVKe KmakeVKdMM51;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LarrayG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLmultidimensional_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLmultidimensional_arrayGVKiW;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLmissing_keyword_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLmissing_keyword_errorGVKiW;
D KerrorVKdMM0I (D, D);
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe KreduceVKd;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_6;
extern _KLsealed_generic_functionGVKe Kconcrete_limited_vector_classVKi;
extern _KLclassGVKd KLsimple_element_type_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_element_type_vectorGVKeW;
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLsymbolGVKd KJelement_type_;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJdimensions_;
extern _KLclassGVKd KLlimited_array_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_array_typeGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_6;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe KdimensionsVKd;
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
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
extern _KLclassGVKd KLsimple_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_arrayGVKiW;
D Kallocate_instanceVKeI (D class_, D init_args_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJfill_;
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
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
D Kclass_constructor_atomicallyVKiI (D class_);
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_6;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_25;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_28;
D Kelement_range_errorVKeI (D, D);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_23;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_30;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_34;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_29;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_43;
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_27;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM1;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM2;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM3;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM4;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM5;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM6;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe KemptyQVKdMM1;
D KemptyQVKdMM1I (D array_);
extern _KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_28;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_29;
extern _KLgetter_methodGVKi KsizeVKdMM6;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_44;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_30;
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_35;
extern _KLsimple_methodGVKe Kelement_typeVKeMM2;
D Kelement_typeVKeMM2I (D t_);
extern _KLkeyword_methodGVKe KelementVKdMM3;
D KelementVKdMM3I (D array_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_31;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM1;
D Kelement_no_bounds_checkVKeMM1I (D array_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_24;
extern _KLsimple_methodGVKe Kelement_setterVKdMM3;
D Kelement_setterVKdMM3I (D, D, D);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_29;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM3;
D Kelement_no_bounds_check_setterVKeMM3I (D new_value_, D array_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_26;
extern _KLkeyword_methodGVKe KfillXVKdMM3;
D KfillXVKdMM3I (D, D, D, D, D);
extern _KLgetter_methodGVKi KdimensionsVKdMM0;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_47;
extern _KLkeyword_methodGVKe KmakeVKdMM13;
D KmakeVKdMM13I (D, D, D, D);
extern _KLclassGVKd KLsimple_object_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_object_arrayGVKiW;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_7;
extern _KLsimple_methodGVKe Klimited_arrayVKeMM0;
D Klimited_arrayVKeMM0I (D, D);
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_7;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_7;
D Kcompute_array_dimensions_and_sizeVKiI (D);
extern _KLkeyword_methodGVKe KmakeVKdMM12;
D KmakeVKdMM12I (D class_, D all_keys_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_46;
static _KLpairGVKd K43;
static _KLkeyword_signatureAvaluesGVKi K44;
static _KLsimple_object_vectorGVKd_1 K45;
static _KLsingletonGVKd K46;
static _KLbyte_stringGVKd_38 K47;
static _KLunionGVKe K48;
static _KLsingletonGVKd K49;
static _KLsymbolGVKd KJconcrete_class_;
static _KLbyte_stringGVKd_14 K51;
static _KLsignatureAvaluesGVKi K52;
static _KLsimple_object_vectorGVKd_2 K53;
static _KLunionGVKe K54;
static _KLimplementation_classGVKe K55;
extern _KLrepeated_slot_descriptorGVKe Krow_major_object_array_elementVKiHLsimple_object_arrayG;
static _KLsimple_object_vectorGVKd_2 K57;
extern _KLkeyword_methodGVKe KLsimple_object_arrayGZ32ZconstructorVKiMM0;
D KLsimple_object_arrayGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K60;
static _KLsimple_object_vectorGVKd_11 K61;
static _KLsimple_object_vectorGVKd_2 K62;
extern _KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_object_arrayG;
static _KLsimple_closure_methodGVKi_0 K66;
static D K66I ();
static _KLsignatureGVKe K67;
static D K69I ();
static _KLkeyword_signatureAvaluesGVKi K70;
static _KLsimple_object_vectorGVKd_4 K71;
static _KLsimple_object_vectorGVKd_2 K72;
static _KLsimple_object_vectorGVKd_1 K73;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_object_arrayG;
extern _KLsealed_generic_functionGVKe Krow_major_object_array_elementVKi;
extern _KLsealed_generic_functionGVKe Krow_major_object_array_element_setterVKi;
extern _KLrepeated_setter_methodGVKi Krow_major_object_array_element_setterVKiMM0;
static _KLpairGVKd K78;
static _KLbyte_stringGVKd_37 K79;
extern _KLrepeated_getter_methodGVKi Krow_major_object_array_elementVKiMM0;
static _KLpairGVKd K81;
static _KLbyte_stringGVKd_30 K82;
static _KLbyte_stringGVKd_21 K83;
static _KLkeyword_signatureAvaluesGVKi K84;
static _KLsimple_object_vectorGVKd_4 K85;
static _KLsimple_object_vectorGVKd_1 K86;
static _KLsimple_object_vectorGVKd_2 K87;
static _KLsingletonGVKd K88;
static _KLkeyword_signatureAvaluesGVKi K89;
static _KLsimple_object_vectorGVKd_4 K90;
static _KLsimple_object_vectorGVKd_2 K91;
static _KLsimple_object_vectorGVKd_2 K92;
static _KLsimple_object_vectorGVKd_2 K93;
static _KLsignatureGVKe K94;
static _KLsimple_object_vectorGVKd_3 K95;
static _KLkeyword_signatureGVKe K96;
static _KLsimple_object_vectorGVKd_2 K97;
static _KLsimple_object_vectorGVKd_2 K98;
static _KLsimple_object_vectorGVKd_1 K99;
static _KLsimple_object_vectorGVKd_2 K100;
static _KLsignatureAvaluesGVKi K101;
static _KLsignatureAvaluesGVKi K102;
extern _KLsimple_methodGVKe Kcompute_array_dimensions_and_sizeVKi;
static _KLsignatureAvaluesGVKi K104;
static _KLsimple_object_vectorGVKd_2 K105;
extern _KLsealed_generic_functionGVKe Kconcrete_limited_array_classVKi;
extern _KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM0;
D Kconcrete_limited_array_classVKiMM0I (D);
static _KLpairGVKd K109;
static _KLpairGVKd K110;
static _KLpairGVKd K111;
static _KLpairGVKd K112;
static _KLpairGVKd K113;
static _KLpairGVKd K114;
static _KLpairGVKd K115;
static _KLbyte_stringGVKd_28 K116;
static _KLsignatureAvaluesGVKi K117;
static _KLsimple_object_vectorGVKd_1 K118;
static _KLsingletonGVKd K119;

/* Indirection variables */

static D IKJconcrete_class_ = &KJconcrete_class_;

/* Variables */

D concrete_limited_array_classVKi = &Kconcrete_limited_array_classVKi;
D LdimensionsGVKi = &KLsimple_integer_vectorGVKe;
D Dempty_dimensionsVKi = &KPunboundVKi;
D compute_array_dimensions_and_sizeVKi = &Kcompute_array_dimensions_and_sizeVKi;
D Lsimple_object_arrayGVKi = &KLsimple_object_arrayGVKi;

/* Objects */

_KLsimple_methodGVKe KemptyQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K102,
  &KemptyQVKdMM1I
};

_KLstandalone_domainGVKe_1 KemptyQVKdRD_dylanRD_28 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_27,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_29 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_28,
  &KemptyQVKdMM1
};

_KLgetter_methodGVKi KsizeVKdMM6 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLsimple_object_arrayG
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_44 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_43,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_30 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_29,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_35 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_34,
  &Kelement_typeVKeMM2
};

_KLsimple_methodGVKe Kelement_typeVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K101,
  &Kelement_typeVKeMM2I
};

_KLkeyword_methodGVKe KelementVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K96,
  &key_mep_4,
  &KelementVKdMM3I,
  &K100
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_31 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_30,
  &KelementVKdMM3
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K96,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM1I,
  &K97
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_24 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_23,
  &Kelement_no_bounds_checkVKeMM1
};

_KLsimple_methodGVKe Kelement_setterVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K94,
  &Kelement_setterVKdMM3I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_29 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_28,
  &Kelement_setterVKdMM3
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K94,
  &Kelement_no_bounds_check_setterVKeMM3I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_26 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_25,
  &Kelement_no_bounds_check_setterVKeMM3
};

_KLkeyword_methodGVKe KfillXVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K89,
  &key_mep_5,
  &KfillXVKdMM3I,
  &K90
};

_KLgetter_methodGVKi KdimensionsVKdMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KdimensionsVKdHLsimple_object_arrayG
};

_KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_47 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_46,
  &KmakeVKdMM12
};

_KLkeyword_methodGVKe KmakeVKdMM13 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K84,
  &key_mep_4,
  &KmakeVKdMM13I,
  &K85
};

_KLclassGVKd KLsimple_object_arrayGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K83,
  &K55,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_object_arrayGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K55,
  (D) 4609,
  5,
  33554434,
  (D) 1
};

_KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KrankVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLsimple_methodGVKe Klimited_arrayVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K52,
  &Klimited_arrayVKeMM0I
};

_KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_6,
  (D) 9,
  &KLsimple_object_arrayGVKi,
  &KLintegerGVKd
};

_KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_6,
  (D) 9,
  &KLobjectGVKd,
  &KLsimple_object_arrayGVKi
};

_KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_7 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KarefVKdRD_dylanRD_6,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLkeyword_methodGVKe KmakeVKdMM12 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K44,
  &key_mep_2,
  &KmakeVKdMM12I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_46 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_45,
  &KmakeVKdMM13
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM51,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K44 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &K45,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_LarrayG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K46
};

static _KLsingletonGVKd K46 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmultidimensional_arrayGVKi
};

static _KLbyte_stringGVKd_38 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "No dimensions in call to make(<array>)"
};

static _KLunionGVKe K48 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K49,
  &KLintegerGVKd
};

static _KLsingletonGVKd K49 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsymbolGVKd KJconcrete_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K51
};

static _KLbyte_stringGVKd_14 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "concrete-class"
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K53,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &K54
};

static _KLunionGVKe K54 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K49,
  &KLsequenceGVKd
};

static _KLimplementation_classGVKe K55 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLsimple_object_arrayGVKi,
  &KLsimple_object_arrayGVKiW,
  &Krow_major_object_array_elementVKiHLsimple_object_arrayG,
  &K57,
  (D) 6521,
  &KLsimple_object_arrayGZ32ZconstructorVKiMM0,
  &K60,
  &K61,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K62,
  &K62,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLrepeated_slot_descriptorGVKe Krow_major_object_array_elementVKiHLsimple_object_arrayG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLsimple_object_arrayGVKi,
  &KJfill_,
  &Krow_major_object_array_elementVKi,
  &Krow_major_object_array_element_setterVKi,
  &KLobjectGVKd,
  &KsizeVKdHLsimple_object_arrayG
};

static _KLsimple_object_vectorGVKd_2 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_object_arrayG,
  &KsizeVKdHLsimple_object_arrayG
};

_KLkeyword_methodGVKe KLsimple_object_arrayGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K70,
  &key_mep_2,
  &KLsimple_object_arrayGZ32ZconstructorVKiMM0I,
  &K71
};

static _KLsimple_object_vectorGVKd_1 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_arrayGVKi
};

static _KLsimple_object_vectorGVKd_11 K61 = {
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
  &KLsimple_object_arrayGVKi
};

static _KLsimple_object_vectorGVKd_2 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KdimensionsVKdHLsimple_object_arrayG,
  &Krow_major_object_array_elementVKiHLsimple_object_arrayG
};

_KLinstance_slot_descriptorGVKe KdimensionsVKdHLsimple_object_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K66,
  &KLsimple_object_arrayGVKi,
  &KJdimensions_,
  &KdimensionsVKd,
  &KPfalseVKi,
  &KLsimple_integer_vectorGVKe
};

static _KLsimple_closure_methodGVKi_0 K66 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K67,
  &K66I,
  (D) 1
};

static _KLsignatureGVKe K67 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureAvaluesGVKi K70 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K72,
  &KDsignature_LobjectG_typesVKi,
  &K73
};

static _KLsimple_object_vectorGVKd_4 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdimensions_,
  &KPunboundVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_2 K72 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdimensions_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_object_arrayGVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLsimple_object_arrayG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsimple_object_arrayGVKi,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Krow_major_object_array_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K82,
  &K81,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krow_major_object_array_element_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPfalseVKi,
  &K79,
  &K78,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLrepeated_setter_methodGVKi Krow_major_object_array_element_setterVKiMM0 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Krow_major_object_array_elementVKiHLsimple_object_arrayG
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_object_array_element_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_37 K79 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "row-major-object-array-element-setter"
};

_KLrepeated_getter_methodGVKi Krow_major_object_array_elementVKiMM0 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Krow_major_object_array_elementVKiHLsimple_object_arrayG
};

static _KLpairGVKd K81 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_object_array_elementVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_30 K82 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "row-major-object-array-element"
};

static _KLbyte_stringGVKd_21 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<simple-object-array>"
};

static _KLkeyword_signatureAvaluesGVKi K84 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011909,
  &K86,
  &K87,
  &KDsignature_LobjectG_typesVKi,
  &K73
};

static _KLsimple_object_vectorGVKd_4 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdimensions_,
  &Kunsupplied_objectVKi,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K86 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K88
};

static _KLsimple_object_vectorGVKd_2 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdimensions_,
  &KJfill_
};

static _KLsingletonGVKd K88 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_object_arrayGVKi
};

static _KLkeyword_signatureAvaluesGVKi K89 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K91,
  &K92,
  &K93,
  &K73
};

static _KLsimple_object_vectorGVKd_4 K90 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_arrayGVKi,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K93 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K94 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K95
};

static _KLsimple_object_vectorGVKd_3 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsimple_object_arrayGVKi,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K96 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K98,
  &K99,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_object_arrayGVKi,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_2 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K101 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K73,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K102 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K60,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kcompute_array_dimensions_and_sizeVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kcompute_array_dimensions_and_sizeVKiI
};

static _KLsignatureAvaluesGVKi K104 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_LobjectG_typesVKi,
  &K105
};

static _KLsimple_object_vectorGVKd_2 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kconcrete_limited_array_classVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K116,
  &K109,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kconcrete_limited_array_classVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K117,
  &Kconcrete_limited_array_classVKiMM0I
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_array_classVKiMM0,
  &K110
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_array_classVKiMM1,
  &K111
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_array_classVKiMM2,
  &K112
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_array_classVKiMM3,
  &K113
};

static _KLpairGVKd K113 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_array_classVKiMM4,
  &K114
};

static _KLpairGVKd K114 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_array_classVKiMM5,
  &K115
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcrete_limited_array_classVKiMM6,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_28 K116 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 113,
  "concrete-limited-array-class"
};

static _KLsignatureAvaluesGVKi K117 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K118,
  &KDsignature_LclassG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K118 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K119
};

static _KLsingletonGVKd K119 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobjectGVKd
};

/* Code */

D KemptyQVKdMM1I (D array_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:15
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T2 = CONGRUENT_CALL1(array_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:15
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(T2, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:14
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kelement_typeVKeMM2I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T2_0 = &KLobjectGVKd;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM3I (D array_, D index_, D Urest_, D default_) {
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

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T9 = SLOT_VALUE_INITD(array_, 1);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(array_, 2, T10);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T14_0 = T13;
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T15 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
      T5_0 = Kelement_range_errorVKeI(array_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM1I (D array_, D index_, D Urest_, D default_) {
  D T5;
  D T6_0;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T7 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T5 = REPEATED_D_SLOT_VALUE_TAGGED(array_, 2, T7);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM3I (D new_value_, D array_, D index_) {
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T9 = primitive_machine_word_less_thanQ(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  if (T9 != &KPfalseVKi) {
    T4 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T10 = SLOT_VALUE_INITD(array_, 1);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T12 = primitive_machine_word_less_thanQ(T8,T11);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, array_, 2, T8);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T5_0 = new_value_;
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T6_0 = Kelement_range_errorVKeI(array_, index_);
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_no_bounds_check_setterVKeMM3I (D new_value_, D array_, D index_) {
  D T4_0;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T5 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_value_, array_, 2, T5);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T4_0);
}

D KfillXVKdMM3I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
      Kelement_setterVKdMM3I(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T9_0);
}

D KmakeVKdMM13I (D class_, D Urest_, D dimensions_, D fill_) {
  D T5_0;
  D T5_1;
  D dimensionsF6;
  D size_;
  D T8_0;
  D T9_0;
  _KLsimple_object_vectorGVKd_6 T10 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T5_0 = Kcompute_array_dimensions_and_sizeVKiI(dimensions_);
  T5_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  dimensionsF6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  size_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T10.vector_element_[0] = &KJdimensions_;
  T10.vector_element_[1] = dimensionsF6;
  T10.vector_element_[2] = &KJsize_;
  T10.vector_element_[3] = size_;
  T10.vector_element_[4] = &KJfill_;
  T10.vector_element_[5] = fill_;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T11 = Kclass_constructor_atomicallyVKiI(class_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T12_0 = APPLY2(T11, class_, &T10);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T9_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T8_0 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T8_0);
}

D Klimited_arrayVKeMM0I (D of_, D dimensions_) {
  D concrete_class_;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_10 T17 = {&KLsimple_object_vectorGVKdW, (D) 41};
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:154
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:157
  CONGRUENT_CALL_PROLOG(&Kconcrete_limited_vector_classVKi, 1);
  concrete_class_ = CONGRUENT_CALL1(of_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:160
  if (dimensions_ != &KPfalseVKi) {
    T4 = dimensions_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:160
    T8 = primitive_idQ(concrete_class_,&KLsimple_element_type_vectorGVKe);
    T4 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:160
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:160
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
    if (dimensions_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
      T12 = dimensions_;
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T9 = CONGRUENT_CALL1(T12);
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T10 = CONGRUENT_CALL2(T9, (D) 1);
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
      if (T10 != &KPfalseVKi) {
        T15 = (D) 1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
        CONGRUENT_CALL_PROLOG(&KreduceVKd, 3);
        T11_0 = CONGRUENT_CALL3(&KTVKd, (D) 5, T12);
        // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
        T13_0 = T11_0;
        // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
        T14 = T13_0;
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
      T16 = T15;
    } else {
      T16 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:161
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:162
    T17.vector_element_[0] = &KJclass_;
    T17.vector_element_[1] = &KLarrayGVKd;
    T17.vector_element_[2] = &KJelement_type_;
    T17.vector_element_[3] = of_;
    T17.vector_element_[4] = IKJconcrete_class_;
    T17.vector_element_[5] = concrete_class_;
    T17.vector_element_[6] = &KJsize_;
    T17.vector_element_[7] = T16;
    T17.vector_element_[8] = &KJdimensions_;
    T17.vector_element_[9] = dimensions_;
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:162
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5_0 = CONGRUENT_CALL2(&KLlimited_array_typeGVKe, &T17);
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:169
    T6_0 = concrete_class_;
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:169
    T18_0 = T6_0;
    T7_0 = T18_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:160
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:154
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kcompute_array_dimensions_and_sizeVKiI (D dimensions_) {
  D canonical_dimensions_;
  D T3;
  D T4_0;
  D T4_1;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T14_1;
  _KLsimple_object_vectorGVKd_2 T15 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T16_0;
  D T16_1;
  D T17_0;
  D T17_1;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:102
  T5 = primitive_idQ(dimensions_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:102
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:106
    T15.vector_element_[0] = &KJformat_string_;
    T15.vector_element_[1] = &K47;
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:106
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLmissing_keyword_errorGVKi, &T15);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:106
    T16_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
    T16_1 = MV_GET_ELT(1);
    T4_0 = T16_0;
    T4_1 = T16_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:103
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    canonical_dimensions_ = CONGRUENT_CALL2(&KLsimple_integer_vectorGVKe, dimensions_);
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
    if (canonical_dimensions_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
      T9 = canonical_dimensions_;
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T6 = CONGRUENT_CALL1(T9);
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T7 = CONGRUENT_CALL2(T6, (D) 1);
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
      if (T7 != &KPfalseVKi) {
        T12 = (D) 1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
        CONGRUENT_CALL_PROLOG(&KreduceVKd, 3);
        T8_0 = CONGRUENT_CALL3(&KTVKd, (D) 5, T9);
        // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
        T10_0 = T8_0;
        // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
        T11 = T10_0;
        T12 = T11;
      }
      // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
      T13 = T12;
    } else {
      T13 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
    T14_0 = canonical_dimensions_;
    T14_1 = T13;
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:104
    T17_0 = T14_0;
    T17_1 = T14_1;
    T4_0 = T17_0;
    T4_1 = T17_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:102
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:99
  MV_SET_ELT(1, T4_1);
  MV_SET_COUNT(2);
  return(T4_0);
}

D KmakeVKdMM12I (D class_, D all_keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:11
  T3_0 = MEP_APPLY2(&KmakeVKdMM13, &K43, &KLsimple_object_arrayGVKi, all_keys_);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLsimple_object_arrayGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_dimensions_, D Uunique_size_) {
  D T5;
  D T6;
  D Uunique_dimensionsF7;
  D T8;
  D object_;
  D Uunique_dimensionsF10;
  D Uunique_sizeF11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T13 = primitive_idQ(Uunique_dimensions_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  if (T13 != &KPfalseVKi) {
    T5 = K69I();
    // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
    T6 = T5;
    Uunique_dimensionsF7 = T6;
  } else {
    Uunique_dimensionsF7 = Uunique_dimensions_;
  }
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T8 = Kallocate_instanceVKeI(&KLsimple_object_arrayGVKi, init_args_);
  object_ = T8;
  Uunique_dimensionsF10 = Uunique_dimensionsF7;
  SLOT_VALUE_SETTER(Uunique_dimensionsF10, object_, 0);
  Uunique_sizeF11 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF11, object_, 1);
  T12_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T12_0);
}

static D K66I () {
  D init_value_;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  init_value_ = Dempty_dimensionsVKi;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T1_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T1_0);
}

static D K69I () {
  D init_value_;
  D T1_0;

  init_value_ = Dempty_dimensionsVKi;
  T1_0 = init_value_;
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kconcrete_limited_array_classVKiMM0I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  T2_0 = &KLsimple_object_arrayGVKi;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:152
  MV_SET_COUNT(1);
  return(T2_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_multidimensional_array_for_system () {
  extern D KPresolve_symbolVKiI(D);
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

void _Init_dylan__X_multidimensional_array_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:19
  T1 = KmakeVKdMM24I(&KLsimple_integer_vectorGVKe, &KPempty_vectorVKi, (D) 1, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:19
  Dempty_dimensionsVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/multidimensional-array.dylan:19
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
