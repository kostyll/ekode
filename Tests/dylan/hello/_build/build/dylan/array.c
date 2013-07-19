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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
} _KLarrayGVKd;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

#define  define__KLsimple_object_arrayGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D dimensions_; \
    D size_; \
    D row_major_object_array_element_[nrepeated+1]; \
  } _KLsimple_object_arrayGVKi_##nrepeated;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(50);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(62);
define__KLbyte_stringGVKd(38);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_sequenceGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
define__KLstandalone_domainGVKe(2);
define__KLstandalone_domainGVKe(1);

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
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsubscript_out_of_bounds_errorGVKi;

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


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
} _KLsimple_arrayGVKi;

typedef struct {
  D wrapper;
} _KLmultidimensional_arrayGVKi;


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
D KasVKdMM41I (D class_, D collection_);
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LarrayG_typesVKi;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
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
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsealed_generic_functionGVKe KfirstVKd;
extern _KLkeyword_methodGVKe KmakeVKdMM23;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJsize_;
extern _KLkeyword_methodGVKe KmakeVKdMM13;
extern _KLclassGVKd KLsimple_object_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_object_arrayGVKiW;
extern _KLincremental_generic_functionGVKe KelementVKd;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLkeyword_methodGVKe KmakeVKdMM51;
extern _KLsymbolGVKd KJdimensions_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_methodGVKe Klimited_arrayVKeMM0;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLmutable_sequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_sequenceGVKdW;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLgetter_methodGVKi KdimensionsVKdMM0;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLgetter_methodGVKi KdimensionsVKdMM1;
extern _KLgetter_methodGVKi KdimensionsVKdMM2;
extern _KLgetter_methodGVKi KdimensionsVKdMM3;
extern _KLgetter_methodGVKi KdimensionsVKdMM4;
extern _KLgetter_methodGVKi KdimensionsVKdMM5;
extern _KLgetter_methodGVKi KdimensionsVKdMM6;
extern _KLgetter_methodGVKi KdimensionsVKdMM7;
extern _KLsimple_methodGVKe KdimensionsVKdMM8;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_0;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KdimensionsVKdRD_dylanRD_7;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_47;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLsymbolGVKd KJfill_;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KreduceVKd;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 KdimensionVKdRD_dylanRD_7;
extern _KLsimple_methodGVKe Karef_setterVKdMM1;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_2 Karef_setterVKdRD_dylanRD_7;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLsimple_methodGVKe Krow_major_indexVKdMM1;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 Krow_major_indexVKdRD_dylanRD_7;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_checkVKe;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
D KlistVKdI (D objects_);
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLclassGVKd KLsubscript_out_of_bounds_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLsubscript_out_of_bounds_errorGVKiW;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KrankVKdRD_dylanRD_7;
extern _KLsimple_methodGVKe KarefVKdMM1;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_0;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_1;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_4;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_6;
extern _KLstandalone_domainGVKe_1 KarefVKdRD_dylanRD_7;
extern _KLclassGVKd KLsimple_double_float_arrayGVKe;
extern _KLclassGVKd KLsimple_single_float_arrayGVKe;
extern _KLclassGVKd KLsimple_machine_word_arrayGVKe;
extern _KLclassGVKd KLsimple_element_type_arrayGVKe;
extern _KLclassGVKd KLsimple_double_byte_arrayGVKe;
extern _KLclassGVKd KLsimple_byte_arrayGVKe;
extern _KLclassGVKd KLsimple_integer_arrayGVKe;

/* Defined object declarations */

extern _KLclassGVKd KLsimple_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_arrayGVKiW;
extern _KLsimple_methodGVKe KsizeVKdMM5;
D KsizeVKdMM5I (D);
extern _KLsimple_methodGVKe Kshallow_copyVKdMM4;
D Kshallow_copyVKdMM4I (D);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM3;
D Ktype_for_copyVKdMM3I (D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_48;
extern _KLincremental_generic_functionGVKe KdimensionsVKd;
extern _KLkeyword_methodGVKe KfillXVKdMM2;
D KfillXVKdMM2I (D, D, D, D, D);
extern _KLclassGVKd KLmultidimensional_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLmultidimensional_arrayGVKiW;
extern _KLincremental_generic_functionGVKe Klimited_arrayVKe;
extern _KLkeyword_methodGVKe KmakeVKdMM11;
D KmakeVKdMM11I (D, D, D, D);
extern _KLsimple_methodGVKe KasVKdMM38;
D KasVKdMM38I (D, D);
extern _KLsimple_methodGVKe KasVKdMM39;
D KasVKdMM39I (D, D);
static _KLsignatureAvaluesGVKi K21;
static _KLsimple_object_vectorGVKd_2 K22;
static _KLsingletonGVKd K23;
static _KLsignatureAvaluesGVKi K24;
static _KLsimple_object_vectorGVKd_2 K25;
static _KLbyte_stringGVKd_38 K26;
static _KLpairGVKd K27;
static _KLbyte_stringGVKd_62 K28;
static _KLkeyword_signatureAvaluesGVKi K29;
static _KLsimple_object_vectorGVKd_4 K30;
static _KLsimple_object_vectorGVKd_1 K31;
static _KLsimple_object_vectorGVKd_2 K32;
static _KLpairGVKd K33;
static _KLsignatureAvaluesGVKi K34;
static _KLbyte_stringGVKd_13 K35;
static _KLsimple_object_vectorGVKd_2 K36;
static _KLunionGVKe K37;
static _KLsingletonGVKd K38;
static _KLimplementation_classGVKe K39;
static _KLsimple_object_vectorGVKd_1 K40;
static _KLsimple_object_vectorGVKd_9 K41;
static _KLsimple_object_vectorGVKd_1 K42;
static _KLsimple_object_vectorGVKd_1 K43;
static _KLbyte_stringGVKd_24 K44;
static _KLkeyword_signatureAvaluesGVKi K45;
static _KLsimple_object_vectorGVKd_4 K46;
static _KLsimple_object_vectorGVKd_2 K47;
static _KLsimple_object_vectorGVKd_2 K48;
static _KLsimple_object_vectorGVKd_2 K49;
static _KLpairGVKd K50;
static _KLpairGVKd K51;
static _KLpairGVKd K52;
static _KLpairGVKd K53;
static _KLpairGVKd K54;
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLpairGVKd K57;
static _KLpairGVKd K58;
static _KLsignatureAvaluesGVKi K59;
static _KLbyte_stringGVKd_10 K60;
static _KLsignatureAvaluesGVKi K61;
static _KLsignatureAvaluesGVKi K62;
static _KLsignatureAvaluesGVKi K63;
static _KLimplementation_classGVKe K64;
static _KLsimple_object_vectorGVKd_1 K65;
static _KLsimple_object_vectorGVKd_10 K66;
static _KLsimple_object_vectorGVKd_1 K67;
static _KLbyte_stringGVKd_14 K68;
extern _KLincremental_generic_functionGVKe KdimensionVKd;
extern _KLsimple_methodGVKe KdimensionVKdMM0;
D KdimensionVKdMM0I (D array_, D axis_);
static _KLpairGVKd K72;
static _KLsignatureAvaluesGVKi K73;
static _KLbyte_stringGVKd_9 K74;
static _KLsimple_object_vectorGVKd_2 K75;
extern _KLincremental_generic_functionGVKe Karef_setterVKd;
extern _KLsimple_methodGVKe Karef_setterVKdMM0;
D Karef_setterVKdMM0I (D new_value_, D array_, D indices_);
static _KLpairGVKd K79;
static _KLpairGVKd K80;
static _KLsignatureGVKe K81;
static _KLbyte_stringGVKd_11 K82;
static _KLsimple_object_vectorGVKd_2 K83;
extern _KLincremental_generic_functionGVKe Krow_major_indexVKd;
extern _KLsimple_methodGVKe Krow_major_indexVKdMM0;
D Krow_major_indexVKdMM0I (D array_, D subscripts_);
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLsignatureAvaluesGVKi K89;
static _KLbyte_stringGVKd_15 K90;
extern _KLincremental_generic_functionGVKe KrankVKd;
D Karef_rank_errorVKiI (D, D);
D Kgeneral_row_major_indexVKiMM0I (D, D);
static _KLbyte_stringGVKd_50 K94;
extern _KLsimple_methodGVKe KrankVKdMM0;
D KrankVKdMM0I (D array_);
static _KLpairGVKd K97;
static _KLbyte_stringGVKd_4 K98;
extern _KLincremental_generic_functionGVKe KarefVKd;
extern _KLsimple_methodGVKe KarefVKdMM0;
D KarefVKdMM0I (D array_, D indices_);
static _KLpairGVKd K102;
static _KLpairGVKd K103;
static _KLsignatureGVKe K104;
static _KLbyte_stringGVKd_4 K105;
static _KLpairGVKd K106;
static _KLpairGVKd K107;
static _KLpairGVKd K108;
static _KLpairGVKd K109;
static _KLpairGVKd K110;
static _KLpairGVKd K111;
static _KLpairGVKd K112;
static _KLpairGVKd K113;
static _KLpairGVKd K114;

/* Indirection variables */


/* Variables */

D rankVKd = &KrankVKd;
D row_major_indexVKd = &Krow_major_indexVKd;
D arefVKd = &KarefVKd;
D aref_setterVKd = &Karef_setterVKd;
D dimensionsVKd = &KdimensionsVKd;
D dimensionVKd = &KdimensionVKd;
D limited_arrayVKe = &Klimited_arrayVKe;
D Lmultidimensional_arrayGVKi = &KLmultidimensional_arrayGVKi;
D Lsimple_arrayGVKi = &KLsimple_arrayGVKi;

/* Objects */

_KLclassGVKd KLsimple_arrayGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K68,
  &K64,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsimple_arrayGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K64,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe KsizeVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K63,
  &KsizeVKdMM5I
};

_KLsimple_methodGVKe Kshallow_copyVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K62,
  &Kshallow_copyVKdMM4I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K61,
  &Ktype_for_copyVKdMM3I
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_48 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_47,
  &KmakeVKdMM11
};

_KLincremental_generic_functionGVKe KdimensionsVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K59,
  (D) 1,
  &K60,
  &K50,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KdimensionsVKdRD_dylanRD_7,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KfillXVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K45,
  &key_mep_5,
  &KfillXVKdMM2I,
  &K46
};

_KLclassGVKd KLmultidimensional_arrayGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K44,
  &K39,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLmultidimensional_arrayGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K39,
  (D) 4609,
  1,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe Klimited_arrayVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K34,
  (D) 1,
  &K35,
  &K33,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KmakeVKdMM11 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K29,
  &key_mep_4,
  &KmakeVKdMM11I,
  &K30
};

_KLsimple_methodGVKe KasVKdMM38 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K24,
  &KasVKdMM38I
};

_KLsimple_methodGVKe KasVKdMM39 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &KasVKdMM39I
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K22,
  &KDsignature_LarrayG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K23,
  &KLcollectionGVKd
};

static _KLsingletonGVKd K23 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLarrayGVKd
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K25,
  &KDsignature_LarrayG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K23,
  &KLarrayGVKd
};

static _KLbyte_stringGVKd_38 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "No dimensions in call to make(<array>)"
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &KmakeVKdMM51,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_62 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 249,
  "Dimensions %= incompatible to size %= in call to make(<array>)"
};

static _KLkeyword_signatureAvaluesGVKi K29 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866181,
  &K31,
  &K32,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LarrayG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdimensions_,
  &Kunsupplied_objectVKi,
  &KJsize_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_1 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K23
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdimensions_,
  &KJsize_
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &Klimited_arrayVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K34 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K36,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_13 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "limited-array"
};

static _KLsimple_object_vectorGVKd_2 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &K37
};

static _KLunionGVKe K37 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K38,
  &KLsequenceGVKd
};

static _KLsingletonGVKd K38 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLimplementation_classGVKe K39 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255361,
  &KLmultidimensional_arrayGVKi,
  &KLmultidimensional_arrayGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6505,
  &Kdefault_class_constructorVKi,
  &K40,
  &K41,
  (D) 33,
  &K42,
  &K43,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K106,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLarrayGVKd
};

static _KLsimple_object_vectorGVKd_9 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi
};

static _KLsimple_object_vectorGVKd_1 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 37
};

static _KLsimple_object_vectorGVKd_1 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlimited_collectionGVKe
};

static _KLbyte_stringGVKd_24 K44 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<multidimensional-array>"
};

static _KLkeyword_signatureAvaluesGVKi K45 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K47,
  &K48,
  &K49,
  &KDsignature_LarrayG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLarrayGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_2 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM0,
  &K51
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM1,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM2,
  &K53
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM3,
  &K54
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM4,
  &K55
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM5,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM6,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM7,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionsVKdMM8,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LarrayG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_10 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "dimensions"
};

static _KLsignatureAvaluesGVKi K61 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LarrayG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

static _KLsignatureAvaluesGVKi K62 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LarrayG_typesVKi,
  &KDsignature_LarrayG_typesVKi
};

static _KLsignatureAvaluesGVKi K63 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LarrayG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLimplementation_classGVKe K64 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255361,
  &KLsimple_arrayGVKi,
  &KLsimple_arrayGVKiW,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 6513,
  &Kdefault_class_constructorVKi,
  &K65,
  &K66,
  (D) 37,
  &K67,
  &K43,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K107,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmultidimensional_arrayGVKi
};

static _KLsimple_object_vectorGVKd_10 K66 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLmutable_collectionGVKd,
  &KLmutable_sequenceGVKd,
  &KLarrayGVKd,
  &KLmultidimensional_arrayGVKi,
  &KLsimple_arrayGVKi
};

static _KLsimple_object_vectorGVKd_1 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  (D) 41
};

static _KLbyte_stringGVKd_14 K68 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<simple-array>"
};

_KLincremental_generic_functionGVKe KdimensionVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K73,
  &KPfalseVKi,
  &K74,
  &K72,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KdimensionVKdRD_dylanRD_7,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KdimensionVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K73,
  &KdimensionVKdMM0I
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &KdimensionVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K73 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K75,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_9 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "dimension"
};

static _KLsimple_object_vectorGVKd_2 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLarrayGVKd,
  &KLintegerGVKd
};

_KLincremental_generic_functionGVKe Karef_setterVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K81,
  &KPfalseVKi,
  &K82,
  &K79,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Karef_setterVKdRD_dylanRD_7,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Karef_setterVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K81,
  &Karef_setterVKdMM0I
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &Karef_setterVKdMM0,
  &K80
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &Karef_setterVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K81 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42992649,
  &K83
};

static _KLbyte_stringGVKd_11 K82 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "aref-setter"
};

static _KLsimple_object_vectorGVKd_2 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLarrayGVKd
};

_KLincremental_generic_functionGVKe Krow_major_indexVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K89,
  &KPfalseVKi,
  &K90,
  &K87,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Krow_major_indexVKdRD_dylanRD_7,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Krow_major_indexVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K89,
  &Krow_major_indexVKdMM0I
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_indexVKdMM0,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &Krow_major_indexVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K89 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LarrayG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_15 K90 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "row-major-index"
};

_KLincremental_generic_functionGVKe KrankVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K63,
  (D) 1,
  &K98,
  &K97,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KrankVKdRD_dylanRD_7,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_50 K94 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 201,
  "Number of subscripts not equal to rank of array %="
};

_KLsimple_methodGVKe KrankVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K63,
  &KrankVKdMM0I
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &KrankVKdMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "rank"
};

_KLincremental_generic_functionGVKe KarefVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K104,
  &KPfalseVKi,
  &K105,
  &K102,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &KarefVKdRD_dylanRD_7,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KarefVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K104,
  &KarefVKdMM0I
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &KarefVKdMM0,
  &K103
};

static _KLpairGVKd K103 = {
  &KLpairGVKdW /* wrapper */,
  &KarefVKdMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K104 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42992645,
  &KDsignature_LarrayG_typesVKi
};

static _KLbyte_stringGVKd_4 K105 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "aref"
};

static _KLpairGVKd K106 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_arrayGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K107 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_double_float_arrayGVKe,
  &K108
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_single_float_arrayGVKe,
  &K109
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_machine_word_arrayGVKe,
  &K110
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_element_type_arrayGVKe,
  &K111
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_double_byte_arrayGVKe,
  &K112
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_byte_arrayGVKe,
  &K113
};

static _KLpairGVKd K113 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_integer_arrayGVKe,
  &K114
};

static _KLpairGVKd K114 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_object_arrayGVKi,
  &KPempty_listVKi
};

/* Code */

D KsizeVKdMM5I (D x_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:245
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:246
  CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
  T2 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:246
  CONGRUENT_CALL_PROLOG(&KreduceVKd, 3);
  T3_0 = CONGRUENT_CALL3(&KTVKd, (D) 5, T2);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:245
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:245
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kshallow_copyVKdMM4I (D array_) {
  D size_;
  D T3;
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  D new_array_;
  DWORD key_T, key_;
  D T12;
  D T13;
  D T14_0;
  D T15_0;
  _KLsimple_object_vectorGVKd_2 T16 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};
  DWORD T18;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:185
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:186
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  size_ = CONGRUENT_CALL1(array_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:187
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(size_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:187
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:188
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T4 = CONGRUENT_CALL1(array_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:188
    T16.vector_element_[0] = &KJdimensions_;
    T16.vector_element_[1] = &KdimensionsVKd;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:188
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5_0 = CONGRUENT_CALL2(T4, &T16);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:188
    T20_0 = T5_0;
    T15_0 = T20_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:190
    CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
    T6 = CONGRUENT_CALL1(array_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:192
    CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
    T7 = CONGRUENT_CALL1(array_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:192
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T8 = CONGRUENT_CALL3(array_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:192
    T17.vector_element_[0] = &KJdimensions_;
    T17.vector_element_[1] = T6;
    T17.vector_element_[2] = &KJfill_;
    T17.vector_element_[3] = T8;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:192
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(T7, &T17);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:191
    new_array_ = T9;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
    key_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
      key_ = key_T;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
      T19 = primitive_cast_raw_as_integer(key_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T12 = CONGRUENT_CALL2(T19, size_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:195
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T13 = CONGRUENT_CALL3(array_, T19, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:195
        CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
        CONGRUENT_CALL3(T13, new_array_, T19);
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
        T18 = primitive_machine_word_add_signal_overflow(key_,4);
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
        key_T = T18;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:194
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:197
    T14_0 = new_array_;
    T15_0 = T14_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:187
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:185
  MV_SET_COUNT(1);
  return(T15_0);
}

D Ktype_for_copyVKdMM3I (D array_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:206
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:207
  T2_0 = &KLarrayGVKd;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:206
  MV_SET_COUNT(1);
  return(T2_0);
}

D KfillXVKdMM2I (D target_, D value_, D Urest_, D start_, D last_) {
  D startF6;
  D T7;
  DWORD index_T, index_;
  D T9_0;
  DWORD T10;
  D T11;
  DWORD T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:229
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:229
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:233
  T7 = Kcheck_start_compute_endVKeMM0I(target_, startF6, last_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
  T10 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
  T12 = primitive_cast_integer_as_raw(startF6);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
  index_T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
    T13 = primitive_cast_raw_as_integer(index_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
    T11 = primitive_machine_word_less_thanQ(index_,T10);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:235
      CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
      CONGRUENT_CALL3(value_, target_, T13);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
      T14 = primitive_machine_word_add_signal_overflow(index_,4);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
      index_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:234
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:237
  T9_0 = target_;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:229
  MV_SET_COUNT(1);
  return(T9_0);
}

D KmakeVKdMM11I (D class_, D args_, D dimensions_, D sz_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  _KLsimple_object_vectorGVKd_2 T22 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T23_0;
  D T24;
  _KLsimple_object_vectorGVKd_2 T25 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T26_0;
  D T27_0;
  D T28_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:161
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:166
  T16 = primitive_idQ(sz_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:165
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:172
    T24 = primitive_idQ(dimensions_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:165
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:173
      T25.vector_element_[0] = &KJformat_string_;
      T25.vector_element_[1] = &K26;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:173
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T9 = CONGRUENT_CALL2(&KLmissing_keyword_errorGVKi, &T25);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:173
      T26_0 = KerrorVKdMM0I(T9, &KPempty_vectorVKi);
      T14_0 = T26_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:174
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T10 = CONGRUENT_CALL1(dimensions_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:174
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T11 = CONGRUENT_CALL2(T10, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:165
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:175
        T12 = CALL1(&KfirstVKd, dimensions_);
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:175
        T27_0 = MEP_APPLY4(&KmakeVKdMM23, &KPempty_listVKi, &KLsimple_object_vectorGVKd, &KJsize_, T12, args_);
        T13_0 = T27_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:177
        T28_0 = MEP_APPLY2(&KmakeVKdMM13, &K27, &KLsimple_object_arrayGVKi, args_);
        T13_0 = T28_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:165
      T14_0 = T13_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:165
    T15_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
    T17 = primitive_idQ(dimensions_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
    if (T17 != &KPfalseVKi) {
      T8 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T5 = CONGRUENT_CALL1(dimensions_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T18 = CONGRUENT_CALL2(T5, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
      T19 = primitive_not(T18);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
        T6 = CALL2(&KelementVKd, dimensions_, (D) 1);
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T20 = CONGRUENT_CALL2(T6, sz_);
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
        T21 = primitive_not(T20);
        T7 = T21;
      } else {
        T7 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:168
      T22.vector_element_[0] = dimensions_;
      T22.vector_element_[1] = sz_;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:168
      KerrorVKdMM1I(&K28, &T22);
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:167
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:171
    T23_0 = MEP_APPLY2(&KmakeVKdMM23, &KPempty_listVKi, &KLsimple_object_vectorGVKd, args_);
    T15_0 = T23_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:165
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:161
  MV_SET_COUNT(1);
  return(T15_0);
}

D KasVKdMM38I (D class_, D array_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:215
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:216
  T3_0 = array_;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:215
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM39I (D class_, D collection_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:219
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:221
  T3_0 = KasVKdMM41I(&KLsimple_object_vectorGVKd, collection_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:219
  MV_SET_COUNT(1);
  return(T3_0);
}

D KdimensionVKdMM0I (D array_, D axis_) {
  D T3;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:145
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:147
  CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
  T3 = CONGRUENT_CALL1(array_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:147
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  T4_0 = CONGRUENT_CALL3(T3, axis_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:145
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:145
  MV_SET_COUNT(1);
  return(T5_0);
}

D Karef_setterVKdMM0I (D new_value_, D array_, D indices_) {
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:132
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:136
  T5 = APPLY2(&Krow_major_indexVKd, array_, indices_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:136
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
  CONGRUENT_CALL3(new_value_, array_, T5);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:136
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:132
  MV_SET_COUNT(1);
  return(T4_0);
}

D Krow_major_indexVKdMM0I (D array_, D subscripts_) {
  D T3;
  D T4_0;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  D dimensions_;
  D T11;
  D dim_0_;
  D idx_0_;
  D T14;
  D dim_1_;
  D idx_1_;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36_0;
  D T37_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:102
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:105
  T5 = SLOT_VALUE_INITD(subscripts_, 0);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:106
  CONGRUENT_CALL_PROLOG(&KrankVKd, 1);
  T3 = CONGRUENT_CALL1(array_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:106
  T6 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:106
  T7 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:106
  T8 = primitive_machine_word_equalQ(T6,T7);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:106
  if (T8 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:107
    Karef_rank_errorVKiI(array_, subscripts_);
  }
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:109
  T9 = primitive_machine_word_equalQ(T7,9);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:109
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
    dimensions_ = CONGRUENT_CALL1(array_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
    T11 = CONGRUENT_CALL3(dimensions_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    dim_0_ = T11;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T18 = REPEATED_D_SLOT_VALUE_TAGGED(subscripts_, 1, 1);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    idx_0_ = T18;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
    T14 = CONGRUENT_CALL3(dimensions_, (D) 5, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    dim_1_ = T14;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T19 = REPEATED_D_SLOT_VALUE_TAGGED(subscripts_, 1, 5);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    idx_1_ = T19;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T20 = primitive_cast_integer_as_raw(idx_0_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T21 = primitive_cast_integer_as_raw(dim_0_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T22 = primitive_machine_word_unsigned_less_thanQ(T20,T21);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
      T23 = primitive_cast_integer_as_raw(idx_1_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
      T24 = primitive_cast_integer_as_raw(dim_1_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
      T25 = primitive_machine_word_unsigned_less_thanQ(T23,T24);
      T17 = T25;
    } else {
      T17 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
      Kelement_range_errorVKeI(array_, subscripts_);
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T26 = primitive_cast_integer_as_raw(idx_0_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T27 = primitive_machine_word_logxor(T26,1);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T29 = primitive_cast_integer_as_raw(dim_1_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T28 = primitive_machine_word_shift_right(T29,2);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T30 = primitive_machine_word_multiply_signal_overflow(T27,T28);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T31 = primitive_machine_word_logior(T30,1);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T32 = primitive_cast_integer_as_raw(idx_1_);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T33 = primitive_machine_word_logxor(T32,1);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T34 = primitive_machine_word_add_signal_overflow(T31,T33);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T35 = primitive_cast_raw_as_integer(T34);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:110
    T36_0 = T35;
    T4_0 = T36_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:112
    T37_0 = Kgeneral_row_major_indexVKiMM0I(array_, subscripts_);
    T4_0 = T37_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:109
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:102
  MV_SET_COUNT(1);
  return(T4_0);
}

D Karef_rank_errorVKiI (D array_, D subscripts_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:69
  T4.vector_element_[0] = array_;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:69
  T2 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:66
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K94;
  T5.vector_element_[2] = &KJformat_arguments_;
  T5.vector_element_[3] = T2;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:66
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsubscript_out_of_bounds_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:66
  T6_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:60
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kgeneral_row_major_indexVKiMM0I (D array_, D subscripts_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  DWORD T11T, T11;
  D T12;
  D T13;
  D dimension_;
  D T15;
  D indexF16;
  D T17;
  D T18_0;
  D sum_;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  D T25;
  DWORD T26;
  DWORD T27;
  D T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  D T38;
  DWORD T39;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:74
  sum_ = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
  T3 = CONGRUENT_CALL1(array_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(T3);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T5 = T4;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T22 = SLOT_VALUE_INITD(subscripts_, 0);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T23 = primitive_cast_integer_as_raw(T22);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  T10T = T5;
  T11T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
    T10 = T10T;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
    T12 = CALL3(T8, T3, T10, T6);
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
    if (T12 != &KPfalseVKi) {
      T13 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      T24 = primitive_machine_word_equalQ(T11,T23);
      T13 = T24;
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      T15 = CALL2(T9, T3, T10);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      dimension_ = T15;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      T25 = REPEATED_D_SLOT_VALUE_TAGGED(subscripts_, 1, T11);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      indexF16 = T25;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:78
      T26 = primitive_cast_integer_as_raw(indexF16);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:78
      T27 = primitive_cast_integer_as_raw(dimension_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:78
      T28 = primitive_machine_word_unsigned_less_thanQ(T26,T27);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:78
      if (T28 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/array.dylan:79
        Kelement_range_errorVKeI(array_, subscripts_);
      }
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:78
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T21 = sum_;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T29 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T30 = primitive_machine_word_logxor(T29,1);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T32 = primitive_cast_integer_as_raw(dimension_);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T31 = primitive_machine_word_shift_right(T32,2);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T33 = primitive_machine_word_multiply_signal_overflow(T30,T31);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T34 = primitive_machine_word_logior(T33,1);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T35 = primitive_cast_integer_as_raw(indexF16);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T36 = primitive_machine_word_logxor(T35,1);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T37 = primitive_machine_word_add_signal_overflow(T34,T36);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      T38 = primitive_cast_raw_as_integer(T37);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:81
      sum_ = T38;
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      T17 = CALL2(T7, T3, T10);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      T39 = primitive_machine_word_add_signal_overflow(T11,4);
      // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
      T10T = T17;
      T11T = T39;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
    // /opt/opendylan-2013.1/sources/dylan/array.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:83
  T20 = sum_;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:83
  T18_0 = T20;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:72
  MV_SET_COUNT(1);
  return(T18_0);
}

D KrankVKdMM0I (D array_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:51
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:52
  CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
  T2 = CONGRUENT_CALL1(array_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:52
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:51
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:51
  MV_SET_COUNT(1);
  return(T4_0);
}

D KarefVKdMM0I (D array_, D indices_) {
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/array.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:123
  T4 = APPLY2(&Krow_major_indexVKd, array_, indices_);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:123
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
  T3_0 = CONGRUENT_CALL3(array_, T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/array.dylan:120
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_array_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_array_for_user () {
  return;
}


/* eof */
