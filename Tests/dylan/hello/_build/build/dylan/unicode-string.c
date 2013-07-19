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
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLunicode_characterGVKe;

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
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
} _KLrepeated_getter_methodGVKi;

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
  D function_signature_;
  D mep_;
} _KLlambdaGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_setter_methodGVKi;

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
} _KLarrayGVKd;

typedef struct {
  D wrapper;
} _KLvectorGVKd;

typedef struct {
  D wrapper;
} _KLstringGVKd;

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
define__KLbyte_stringGVKd(16);


/* Typedefs for defined classes */

#define  define__KLunicode_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D string_element_[nrepeated+1]; \
  } _KLunicode_stringGVKd_##nrepeated;


/* Referenced object declarations */

extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lunicode_stringG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLincremental_generic_functionGVKe Kreplace_subsequenceXVKd;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLunicode_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLunicode_characterGVKeW;
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
D Kas_lowercaseVKdMM0I (D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_9;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_15;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_2;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsealed_generic_functionGVKe Kstring_element_setterVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_5;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_2;
extern _KLsymbolGVKd KJdefault_;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_9;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLstandalone_domainGVKe_1 Kelement_typeVKeRD_dylanRD_2;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
D Kas_uppercaseVKdMM0I (D);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_5;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_10;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_3;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLsealed_generic_functionGVKe Kstring_elementVKi;
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
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
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
D Kallocate_instanceVKeI (D class_, D init_args_);
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;

/* Defined object declarations */

extern _KLclassGVKd KLunicode_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLunicode_stringGVKdW;
extern _KLrepeated_setter_methodGVKi Kstring_element_setterVKiMM1;
extern _KLrepeated_getter_methodGVKi Kstring_elementVKiMM1;
extern _KLsimple_methodGVKe KLVKdMM15;
D KLVKdMM15I (D, D);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KEVKdMM28;
D KEVKdMM28I (D, D);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_4;
extern _KLsimple_methodGVKe Kas_uppercaseXVKdMM1;
D Kas_uppercaseXVKdMM1I (D);
extern _KLmethod_domainGVKe Kas_uppercaseXVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kas_lowercaseXVKdMM1;
D Kas_lowercaseXVKdMM1I (D);
extern _KLmethod_domainGVKe Kas_lowercaseXVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KemptyQVKdMM9;
D KemptyQVKdMM9I (D string_);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_7;
extern _KLgetter_methodGVKi KsizeVKdMM29;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_11;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_12;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM14;
D Ktype_for_copyVKdMM14I (D object_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_6;
extern _KLsimple_methodGVKe Kas_lowercaseVKdMM3;
D Kas_lowercaseVKdMM3I (D);
extern _KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kas_uppercaseVKdMM2;
D Kas_uppercaseVKdMM2I (D);
extern _KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kelement_typeVKeMM19;
D Kelement_typeVKeMM19I (D t_);
extern _KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_3;
extern _KLkeyword_methodGVKe KelementVKdMM24;
D KelementVKdMM24I (D string_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_10;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM22;
D Kelement_no_bounds_checkVKeMM22I (D string_, D index_, D Urest_, D default_);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_3;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_7;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM20;
D Kforward_iteration_protocolVKdMM20I (D sequence_);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM15;
D Kbackward_iteration_protocolVKdMM15I (D sequence_);
extern _KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kelement_setterVKdMM1;
D Kelement_setterVKdMM1I (D new_value_, D string_, D index_);
extern _KLsimple_methodGVKe Kelement_setterVKdMM24;
D Kelement_setterVKdMM24I (D new_value_, D string_, D index_);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_7;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM0;
D Kelement_no_bounds_check_setterVKeMM0I (D new_value_, D string_, D index_);
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM24;
D Kelement_no_bounds_check_setterVKeMM24I (D new_value_, D string_, D index_);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_3;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_4;
extern _KLmethod_domainGVKe KemptyVKeRD_dylanRD_3;
extern _KLsimple_methodGVKe KemptyVKeMM9;
D KemptyVKeMM9I (D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_5;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_10;
extern _KLsimple_methodGVKe Kconcrete_limited_string_classVKiMM1;
D Kconcrete_limited_string_classVKiMM1I (D of_);
extern _KLsimple_methodGVKe Kcase_insensitive_equalVKeMM1;
D Kcase_insensitive_equalVKeMM1I (D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM34;
D KmakeVKdMM34I (D, D, D, D);
extern _KLsimple_methodGVKe KasVKdMM0;
D KasVKdMM0I (D, D);
extern _KLsimple_methodGVKe KasVKdMM59;
D KasVKdMM59I (D class_, D string_);
static _KLsignatureAvaluesGVKi K75;
static _KLsimple_object_vectorGVKd_2 K76;
static _KLsingletonGVKd K77;
static _KLsignatureAvaluesGVKi K78;
static _KLsimple_object_vectorGVKd_2 K79;
static _KLkeyword_signatureAvaluesGVKi K80;
static _KLsimple_object_vectorGVKd_4 K81;
static _KLsimple_object_vectorGVKd_1 K82;
static _KLsimple_object_vectorGVKd_2 K83;
static _KLsimple_object_vectorGVKd_2 K84;
static _KLsignatureAvaluesGVKi K85;
static _KLsignatureAvaluesGVKi K86;
static _KLsimple_object_vectorGVKd_1 K87;
static _KLsingletonGVKd K88;
static _KLsignatureAvaluesGVKi K89;
static _KLsignatureAvaluesGVKi K90;
static _KLsimple_object_vectorGVKd_3 K91;
static _KLsimple_object_vectorGVKd_1 K92;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K93;
static _KLsignatureAvaluesGVKi K94;
static _KLsimple_object_vectorGVKd_3 K95;
extern _KLsimple_methodGVKe Kunicode_string_current_elementVKi;
D Kunicode_string_current_elementVKiI (D string_, D state_);
extern _KLsimple_methodGVKe Kunicode_string_current_element_setterVKi;
D Kunicode_string_current_element_setterVKiI (D new_value_, D string_, D state_);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K100;
static _KLsignatureGVKe K101;
static _KLsignatureGVKe K102;
static _KLsimple_object_vectorGVKd_2 K103;
static _KLsignatureAvaluesGVKi K104;
static _KLsimple_object_vectorGVKd_8 K105;
static _KLkeyword_signatureAvaluesGVKi K106;
static _KLsimple_object_vectorGVKd_2 K107;
static _KLsimple_object_vectorGVKd_1 K108;
static _KLsimple_object_vectorGVKd_2 K109;
static _KLsignatureAvaluesGVKi K110;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K111;
static _KLsignatureAvaluesGVKi K112;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K113;
static _KLsignatureAvaluesGVKi K114;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLunicode_stringG;
static _KLsignatureAvaluesGVKi K116;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K117;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K118;
extern _KLrepeated_slot_descriptorGVKe Kstring_elementVKiHLunicode_stringG;
static _KLlambdaGVKe Kslot_initializerF122;
static D Kslot_initializerF122I ();
static _KLsignatureGVKe K123;
static _KLimplementation_classGVKe K124;
static _KLsimple_object_vectorGVKd_1 K125;
extern _KLkeyword_methodGVKe KLunicode_stringGZ32ZconstructorVKiMM0;
D KLunicode_stringGZ32ZconstructorVKiMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_2 K128;
static _KLsimple_object_vectorGVKd_11 K129;
static _KLsimple_object_vectorGVKd_1 K130;
static _KLkeyword_signatureAvaluesGVKi K131;
static _KLsimple_object_vectorGVKd_2 K132;
static _KLsimple_object_vectorGVKd_1 K133;
static _KLbyte_stringGVKd_16 K134;

/* Indirection variables */


/* Variables */

D Lunicode_stringGVKd = &KLunicode_stringGVKd;
D Dempty_Lunicode_stringGVKi = &KPunboundVKi;
D unicode_string_current_elementVKi = &Kunicode_string_current_elementVKi;
D unicode_string_current_element_setterVKi = &Kunicode_string_current_element_setterVKi;

/* Objects */

_KLclassGVKd KLunicode_stringGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K134,
  &K124,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLunicode_stringGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K124,
  (D) 5633,
  1,
  33554432,
  (D) 1
};

_KLrepeated_setter_methodGVKi Kstring_element_setterVKiMM1 = {
  &KLrepeated_setter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_setter_xep,
  &Kstring_elementVKiHLunicode_stringG
};

_KLrepeated_getter_methodGVKi Kstring_elementVKiMM1 = {
  &KLrepeated_getter_methodGVKiW /* wrapper */,
  &slotacc_repeated_instance_getter_xep,
  &Kstring_elementVKiHLunicode_stringG
};

_KLsimple_methodGVKe KLVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K85,
  &KLVKdMM15I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KLVKdMM15
};

_KLsimple_methodGVKe KEVKdMM28 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K85,
  &KEVKdMM28I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_3,
  &KEVKdMM28
};

_KLsimple_methodGVKe Kas_uppercaseXVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K112,
  &Kas_uppercaseXVKdMM1I
};

_KLmethod_domainGVKe Kas_uppercaseXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kas_uppercaseXVKdMM1
};

_KLsimple_methodGVKe Kas_lowercaseXVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K112,
  &Kas_lowercaseXVKdMM1I
};

_KLmethod_domainGVKe Kas_lowercaseXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kas_lowercaseXVKdMM1
};

_KLsimple_methodGVKe KemptyQVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K116,
  &KemptyQVKdMM9I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_6,
  &KemptyQVKdMM9
};

_KLgetter_methodGVKi KsizeVKdMM29 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLunicode_stringG
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_11 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_10,
  &KsizeVKdMM29
};

_KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_12 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_11,
  (D) 5,
  &KLunicode_stringGVKd
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K114,
  &Ktype_for_copyVKdMM14I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_5,
  &Ktype_for_copyVKdMM14
};

_KLsimple_methodGVKe Kas_lowercaseVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K112,
  &Kas_lowercaseVKdMM3I
};

_KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kas_lowercaseVKdMM3
};

_KLsimple_methodGVKe Kas_uppercaseVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K112,
  &Kas_uppercaseVKdMM2I
};

_KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kas_uppercaseVKdMM2
};

_KLsimple_methodGVKe Kelement_typeVKeMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K110,
  &Kelement_typeVKeMM19I
};

_KLmethod_domainGVKe Kelement_typeVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_typeVKeRD_dylanRD_2,
  &Kelement_typeVKeMM19
};

_KLkeyword_methodGVKe KelementVKdMM24 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K106,
  &key_mep_4,
  &KelementVKdMM24I,
  &K109
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_9,
  &KelementVKdMM24
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM22 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K106,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM22I,
  &K107
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_2,
  &Kelement_no_bounds_checkVKeMM22
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_6,
  &Kforward_iteration_protocolVKdMM20
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kforward_iteration_protocolVKdMM20I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K104,
  &Kbackward_iteration_protocolVKdMM15I
};

_KLmethod_domainGVKe Kbackward_iteration_protocolVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kbackward_iteration_protocolVKdMM15
};

_KLsimple_methodGVKe Kelement_setterVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K94,
  &Kelement_setterVKdMM1I
};

_KLsimple_methodGVKe Kelement_setterVKdMM24 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K90,
  &Kelement_setterVKdMM24I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_5,
  &Kelement_setterVKdMM1
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_6,
  &Kelement_setterVKdMM24
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K94,
  &Kelement_no_bounds_check_setterVKeMM0I
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM24 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K90,
  &Kelement_no_bounds_check_setterVKeMM24I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_2,
  &Kelement_no_bounds_check_setterVKeMM0
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_3,
  &Kelement_no_bounds_check_setterVKeMM24
};

_KLmethod_domainGVKe KemptyVKeRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyVKeRD_dylanRD_2,
  &KemptyVKeMM9
};

_KLsimple_methodGVKe KemptyVKeMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K89,
  &KemptyVKeMM9I
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_5 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_4,
  (D) 5,
  &KLunicode_stringGVKd
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_16 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_15,
  (D) 5,
  &K77
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_9,
  &KasVKdMM59
};

_KLsimple_methodGVKe Kconcrete_limited_string_classVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K86,
  &Kconcrete_limited_string_classVKiMM1I
};

_KLsimple_methodGVKe Kcase_insensitive_equalVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K85,
  &Kcase_insensitive_equalVKeMM1I
};

_KLkeyword_methodGVKe KmakeVKdMM34 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K80,
  &key_mep_4,
  &KmakeVKdMM34I,
  &K81
};

_KLsimple_methodGVKe KasVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K78,
  &KasVKdMM0I
};

_KLsimple_methodGVKe KasVKdMM59 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K75,
  &KasVKdMM59I
};

static _KLsignatureAvaluesGVKi K75 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K76,
  &KDsignature_Lunicode_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K77,
  &KLunicode_stringGVKd
};

static _KLsingletonGVKd K77 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLunicode_stringGVKd
};

static _KLsignatureAvaluesGVKi K78 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K79,
  &KDsignature_Lunicode_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K77,
  &KLcollectionGVKd
};

static _KLkeyword_signatureAvaluesGVKi K80 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K82,
  &K83,
  &K84,
  &KDsignature_Lunicode_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfill_,
  &KPunboundVKi,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K77
};

static _KLsimple_object_vectorGVKd_2 K83 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfill_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_2 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLunicode_characterGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K85 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lunicode_stringG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K86 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K87,
  &K82
};

static _KLsimple_object_vectorGVKd_1 K87 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K88
};

static _KLsingletonGVKd K88 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLunicode_characterGVKe
};

static _KLsignatureAvaluesGVKi K89 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K82,
  &KDsignature_Lunicode_stringG_typesVKi
};

static _KLsignatureAvaluesGVKi K90 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K91,
  &K92
};

static _KLsimple_object_vectorGVKd_3 K91 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLunicode_characterGVKe,
  &KLunicode_stringGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLunicode_characterGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K93 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureAvaluesGVKi K94 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K95,
  &K92
};

static _KLsimple_object_vectorGVKd_3 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLcharacterGVKd,
  &KLunicode_stringGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kunicode_string_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K102,
  &Kunicode_string_current_elementVKiI
};

_KLsimple_methodGVKe Kunicode_string_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K101,
  &Kunicode_string_current_element_setterVKiI
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K100 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureGVKe K101 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K95
};

static _KLsignatureGVKe K102 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K103
};

static _KLsimple_object_vectorGVKd_2 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLunicode_stringGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K104 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_Lunicode_stringG_typesVKi,
  &K105
};

static _KLsimple_object_vectorGVKd_8 K105 = {
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

static _KLkeyword_signatureAvaluesGVKi K106 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K103,
  &K108,
  &KDsignature_LobjectG_typesVKi,
  &K92
};

static _KLsimple_object_vectorGVKd_2 K107 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K108 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_2 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsignatureAvaluesGVKi K110 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lunicode_stringG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K111 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureAvaluesGVKi K112 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lunicode_stringG_typesVKi,
  &KDsignature_Lunicode_stringG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K113 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsignatureAvaluesGVKi K114 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lunicode_stringG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLunicode_stringG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLunicode_stringGVKd,
  &KJsize_,
  &KsizeVKd,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K116 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lunicode_stringG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K117 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K118 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kstring_element_setterVKi
};

_KLrepeated_slot_descriptorGVKe Kstring_elementVKiHLunicode_stringG = {
  &KLrepeated_slot_descriptorGVKeW /* wrapper */,
  (D) 141,
  &Kslot_initializerF122,
  &KLunicode_stringGVKd,
  &KJfill_,
  &Kstring_elementVKi,
  &Kstring_element_setterVKi,
  &KLunicode_characterGVKe,
  &KsizeVKdHLunicode_stringG
};

static _KLlambdaGVKe Kslot_initializerF122 = {
  &KLlambdaGVKeW /* wrapper */,
  &xep_0,
  &K123,
  &Kslot_initializerF122I
};

static _KLsignatureGVKe K123 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLimplementation_classGVKe K124 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLunicode_stringGVKd,
  &KLunicode_stringGVKdW,
  &Kstring_elementVKiHLunicode_stringG,
  &K125,
  (D) 6753,
  &KLunicode_stringGZ32ZconstructorVKiMM0,
  &K128,
  &K129,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K130,
  &K130,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K125 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLunicode_stringG
};

_KLkeyword_methodGVKe KLunicode_stringGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K131,
  &key_mep_2,
  &KLunicode_stringGZ32ZconstructorVKiMM0I,
  &K132
};

static _KLsimple_object_vectorGVKd_2 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstringGVKd,
  &KLvectorGVKd
};

static _KLsimple_object_vectorGVKd_11 K129 = {
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
  &KLstringGVKd,
  &KLunicode_stringGVKd
};

static _KLsimple_object_vectorGVKd_1 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kstring_elementVKiHLunicode_stringG
};

static _KLkeyword_signatureAvaluesGVKi K131 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K133,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lunicode_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  (D) 1
};

static _KLsimple_object_vectorGVKd_1 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJsize_
};

static _KLbyte_stringGVKd_16 K134 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<unicode-string>"
};

/* Code */

D KLVKdMM15I (D string_1_, D string_2_) {
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  DWORD T13;
  D T14;
  DWORD T15;
  D T16;
  DSINT T17;
  DWORD T18;
  DWORD T19;
  DSINT T20;
  DWORD T21;
  DWORD T22;
  D T23;
  DWORD T24;
  D T25;
  DWORD indexF26T, indexF26;
  DSINT T27;
  DWORD T28;
  DWORD T29;
  DSINT T30;
  DWORD T31;
  DWORD T32;
  D T33;
  D T34_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3 = SLOT_VALUE_INITD(string_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = SLOT_VALUE_INITD(string_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T7 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T8 = primitive_machine_word_less_thanQ(T6,T7);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  if (T8 != &KPfalseVKi) {
    T5 = T6;
  } else {
    T5 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  indexF26T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    indexF26 = indexF26T;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T11 = primitive_machine_word_less_thanQ(indexF26,T5);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T13 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_1_, 1, indexF26);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T14 = primitive_raw_as_unicode_character(T13);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T15 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_2_, 1, indexF26);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T16 = primitive_raw_as_unicode_character(T15);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T17 = primitive_unicode_character_as_raw(T14);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T18 = primitive_machine_word_shift_left_signal_overflow(T17,2);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T19 = primitive_machine_word_logior(T18,1);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T20 = primitive_unicode_character_as_raw(T16);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T21 = primitive_machine_word_shift_left_signal_overflow(T20,2);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T22 = primitive_machine_word_logior(T21,1);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T23 = primitive_machine_word_equalQ(T19,T22);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T24 = primitive_machine_word_add_signal_overflow(indexF26,4);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        indexF26T = T24;
        goto L0;
        T9 = T25;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T27 = primitive_unicode_character_as_raw(T14);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T28 = primitive_machine_word_shift_left_signal_overflow(T27,2);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T29 = primitive_machine_word_logior(T28,1);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T30 = primitive_unicode_character_as_raw(T16);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T31 = primitive_machine_word_shift_left_signal_overflow(T30,2);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T32 = primitive_machine_word_logior(T31,1);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T33 = primitive_machine_word_less_thanQ(T29,T32);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T34_0 = T33;
        T9 = T34_0;
        MV_SET_COUNT(1);
      }
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T10 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T12_0 = T8;
      T10 = T12_0;
      MV_SET_COUNT(1);
    }
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  return(T10);
}

D KEVKdMM28I (D string_1_, D string_2_) {
  DWORD T3T, T3;
  DWORD T4T, T4;
  D eq_T, eq_;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  D T18;
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T10 = SLOT_VALUE_INITD(string_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T11 = SLOT_VALUE_INITD(string_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T14 = primitive_machine_word_equalQ(T12,T13);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T3T = 1;
    T4T = 1;
    eq_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T3 = T3T;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T4 = T4T;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      eq_ = eq_T;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T15 = primitive_machine_word_equalQ(T3,T12);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      if (T15 != &KPfalseVKi) {
        T6 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T16 = primitive_machine_word_equalQ(T4,T13);
        T6 = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      if (T6 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T17 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_1_, 1, T3);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T18 = primitive_raw_as_unicode_character(T17);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T19 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_2_, 1, T4);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T20 = primitive_raw_as_unicode_character(T19);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        if (eq_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T21 = primitive_machine_word_add_signal_overflow(T3,4);
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T22 = primitive_machine_word_add_signal_overflow(T4,4);
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T23 = primitive_idQ(T18,T20);
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T3T = T21;
          T4T = T22;
          eq_T = T23;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      }
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T7_0 = eq_;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T8_0 = &KPfalseVKi;
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kas_uppercaseXVKdMM1I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T7 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T6 = primitive_machine_word_less_thanQ(i_,T5);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T8 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T9 = primitive_raw_as_unicode_character(T8);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T10 = Kas_uppercaseVKdMM0I(T9);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K118, 3);
      ENGINE_NODE_CALL3(&K118, T10, string_, T7);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T11 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      i_T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3_0 = string_;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kas_lowercaseXVKdMM1I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  DWORD T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T7 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T6 = primitive_machine_word_less_thanQ(i_,T5);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T8 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T9 = primitive_raw_as_unicode_character(T8);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T10 = Kas_lowercaseVKdMM0I(T9);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K117, 3);
      ENGINE_NODE_CALL3(&K117, T10, string_, T7);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T11 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      i_T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3_0 = string_;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D KemptyQVKdMM9I (D string_) {
  D T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = primitive_machine_word_equalQ(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_for_copyVKdMM14I (D object_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2_0 = &KLunicode_stringGVKd;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kas_lowercaseVKdMM3I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = KmakeVKdMM34I(&KLunicode_stringGVKd, &KPempty_vectorVKi, &KPunboundVKi, T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T8 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T7 = primitive_machine_word_less_thanQ(i_,T6);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T9 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T10 = primitive_raw_as_unicode_character(T9);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T11 = Kas_lowercaseVKdMM0I(T10);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K113, 3);
      ENGINE_NODE_CALL3(&K113, T11, T5, T8);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      i_T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kas_uppercaseVKdMM2I (D string_) {
  DWORD i_T, i_;
  D T3_0;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = KmakeVKdMM34I(&KLunicode_stringGVKd, &KPempty_vectorVKi, &KPunboundVKi, T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T8 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T7 = primitive_machine_word_less_thanQ(i_,T6);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T9 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_, 1, i_);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T10 = primitive_raw_as_unicode_character(T9);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T11 = Kas_uppercaseVKdMM0I(T10);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K111, 3);
      ENGINE_NODE_CALL3(&K111, T11, T5, T8);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T12 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      i_T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kelement_typeVKeMM19I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2_0 = &KLunicode_characterGVKe;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM24I (D string_, D index_, D Urest_, D default_) {
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

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T9 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T10 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T12 = primitive_machine_word_unsigned_less_thanQ(T10,T11);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T13 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T14 = primitive_raw_as_unicode_character(T13);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T15_0 = T14;
    T8_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T5_0 = Kelement_range_errorVKeI(string_, index_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T19 = primitive_instanceQ(default_,&KLunicode_characterGVKe);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      if (T19 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T18.vector_element_[0] = &KJvalue_;
        T18.vector_element_[1] = default_;
        T18.vector_element_[2] = &KJtype_;
        T18.vector_element_[3] = &KLunicode_characterGVKe;
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T17 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T18);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T17, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T6_0 = default_;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T20_0 = T6_0;
      T7_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM22I (D string_, D index_, D Urest_, D default_) {
  DWORD T5;
  D T6;
  D T7_0;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6 = primitive_raw_as_unicode_character(T5);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kforward_iteration_protocolVKdMM20I (D sequence_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3_0 = (D) 1;
  T3_1 = T2;
  T3_2 = &Ksequence_next_stateVKe;
  T3_3 = &Ksequence_finished_stateQVKe;
  T3_4 = &Ksequence_current_keyVKe;
  T3_5 = &Kunicode_string_current_elementVKi;
  T3_6 = &Kunicode_string_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
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

D Kbackward_iteration_protocolVKdMM15I (D sequence_) {
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

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2 = SLOT_VALUE_INITD(sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6_0 = T5;
  T6_1 = (D) -3;
  T6_2 = &Ksequence_previous_stateVKe;
  T6_3 = &Ksequence_finished_stateQVKe;
  T6_4 = &Ksequence_current_keyVKe;
  T6_5 = &Kunicode_string_current_elementVKi;
  T6_6 = &Kunicode_string_current_element_setterVKi;
  T6_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
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

D Kelement_setterVKdMM1I (D new_value_, D string_, D index_) {
  D T4;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLunicode_characterGVKe, new_value_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  CONGRUENT_CALL_PROLOG(&Kelement_setterVKd, 3);
  CONGRUENT_CALL3(T4, string_, index_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_setterVKdMM24I (D new_value_, D string_, D index_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DSINT T11;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T7 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T8 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T9 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T10 = primitive_machine_word_unsigned_less_thanQ(T8,T9);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T11 = primitive_unicode_character_as_raw(new_value_);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T11, string_, 1, T8);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T4_0 = new_value_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T5_0 = Kelement_range_errorVKeI(string_, index_);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_check_setterVKeMM0I (D new_value_, D string_, D index_) {
  D T4;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLunicode_characterGVKe, new_value_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K93, 3);
  ENGINE_NODE_CALL3(&K93, T4, string_, index_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kelement_no_bounds_check_setterVKeMM24I (D new_value_, D string_, D index_) {
  D T4_0;
  DSINT T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = primitive_unicode_character_as_raw(new_value_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  REPEATED_DWORD_SLOT_VALUE_TAGGED_SETTER(T5, string_, 1, T6);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D KemptyVKeMM9I (D class_) {
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2_0 = Dempty_Lunicode_stringGVKi;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kconcrete_limited_string_classVKiMM1I (D of_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2_0 = &KLunicode_stringGVKd;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kcase_insensitive_equalVKeMM1I (D string_1_, D string_2_) {
  DWORD T3T, T3;
  DWORD T4T, T4;
  D eq_T, eq_;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;
  D T25;
  D T26;
  D T27;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T11 = SLOT_VALUE_INITD(string_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T12 = SLOT_VALUE_INITD(string_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T15 = primitive_machine_word_equalQ(T13,T14);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T3T = 1;
    T4T = 1;
    eq_T = &KPtrueVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T3 = T3T;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T4 = T4T;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      eq_ = eq_T;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T16 = primitive_machine_word_equalQ(T3,T13);
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      if (T16 != &KPfalseVKi) {
        T6 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T17 = primitive_machine_word_equalQ(T4,T14);
        T6 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      if (T6 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T18 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_1_, 1, T3);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T19 = primitive_raw_as_unicode_character(T18);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T20 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_2_, 1, T4);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        T21 = primitive_raw_as_unicode_character(T20);
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
        if (eq_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T22 = primitive_machine_word_add_signal_overflow(T3,4);
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T23 = primitive_machine_word_add_signal_overflow(T4,4);
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T24 = primitive_idQ(T19,T21);
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          if (T24 != &KPfalseVKi) {
            T7 = T24;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
            T25 = Kas_lowercaseVKdMM0I(T19);
            // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
            T26 = Kas_lowercaseVKdMM0I(T21);
            // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
            T27 = primitive_idQ(T25,T26);
            T7 = T27;
          }
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
          T3T = T22;
          T4T = T23;
          eq_T = T7;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      }
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
      T8_0 = eq_;
      // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T9_0 = &KPfalseVKi;
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T10_0);
}

D KmakeVKdMM34I (D class_, D Urest_, D fill_, D size_) {
  D T5;
  D fillF6;
  D sizeF7;
  D T8_0;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14_0;
  D T15;
  DSINT raw_repeated_fill_;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25_0;
  D T26;
  D T27_0;
  D mm_wrapper_;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T9 = primitive_idQ(fill_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T10 = primitive_raw_as_unicode_character(32);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T5 = T10;
    fillF6 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    primitive_type_check(fill_, &KLunicode_characterGVKe);
    T11 = fill_;
    fillF6 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  primitive_type_check(size_, &KLintegerGVKd);
  sizeF7 = size_;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T12 = primitive_cast_integer_as_raw(sizeF7);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T13 = primitive_machine_word_equalQ(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T14_0 = KemptyVKeMM9I(class_);
    T8_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T15 = SLOT_VALUE(&KLunicode_stringGVKd, 2);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T19 = SLOT_VALUE_INITD(T15, 0);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T20 = primitive_cast_integer_as_raw(T19);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T21 = primitive_machine_word_logand(T20,262140);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T22 = primitive_machine_word_logior(T21,1);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T23 = primitive_machine_word_add_signal_overflow(5,T21);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T24 = primitive_machine_word_shift_right(T23,2);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T26 = SLOT_VALUE_INITD(T15, 2);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T27_0 = T26;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T25_0 = T27_0;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    mm_wrapper_ = T25_0;
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T29 = primitive_machine_word_subtract_signal_overflow(T22,4);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T30 = primitive_machine_word_shift_right(T29,2);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T32 = primitive_cast_integer_as_raw(sizeF7);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T31 = primitive_machine_word_shift_right(T32,2);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T33 = primitive_machine_word_shift_right(T21,2);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    raw_repeated_fill_ = primitive_unicode_character_as_raw(fillF6);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T17 = primitive_word_allocate_filled(T24,mm_wrapper_,T30,&KPunboundVKi,T31,T33,raw_repeated_fill_);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T18 = T17;
    MV_SET_ELT(0, T17);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
    T34_0 = T18;
    T8_0 = T34_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T8_0);
}

D KasVKdMM0I (D class_, D collection_) {
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = KmakeVKdMM34I(&KLunicode_stringGVKd, &KPempty_vectorVKi, &KPunboundVKi, T3);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  CALL2(&Kreplace_subsequenceXVKd, T5, collection_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM59I (D class_, D string_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3_0 = string_;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kunicode_string_current_elementVKiI (D string_, D state_) {
  DWORD T2;
  D T3;
  D T4;
  DWORD T5;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = primitive_cast_integer_as_raw(state_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2 = REPEATED_DWORD_SLOT_VALUE_TAGGED(string_, 1, T5);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T3 = primitive_raw_as_unicode_character(T2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  return(T4);
}

D Kunicode_string_current_element_setterVKiI (D new_value_, D string_, D state_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLunicode_characterGVKe, new_value_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  ENGINE_NODE_CALL_PROLOG(&Kstring_element_setterVKi, &K100, 3);
  ENGINE_NODE_CALL3(&K100, T3, string_, state_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  return(T4);
}

static D Kslot_initializerF122I () {
  D T0_0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T1 = primitive_raw_as_unicode_character(32);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T0_0 = T1;
  MV_SET_COUNT(1);
  return(T0_0);
}

D KLunicode_stringGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_size_) {
  D T4;
  D object_;
  D Uunique_sizeF6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = Kallocate_instanceVKeI(&KLunicode_stringGVKd, init_args_);
  object_ = T4;
  Uunique_sizeF6 = Uunique_size_;
  SLOT_VALUE_SETTER(Uunique_sizeF6, object_, 0);
  T7_0 = object_;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_unicode_string_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_unicode_string_for_user () {
{
  D T0;
  D T1;
  D T2;
  DSINT raw_repeated_fill_;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11_0;
  D T12;
  D T13_0;
  D mm_wrapper_;
  DWORD T15;
  DWORD T16;
  DWORD T17;

  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T1 = primitive_raw_as_unicode_character(32);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T2 = SLOT_VALUE(&KLunicode_stringGVKd, 2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T5 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T7 = primitive_machine_word_logand(T6,262140);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T8 = primitive_machine_word_logior(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T9 = primitive_machine_word_add_signal_overflow(5,T7);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T10 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T12 = SLOT_VALUE_INITD(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T13_0 = T12;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T11_0 = T13_0;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  mm_wrapper_ = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T15 = primitive_machine_word_subtract_signal_overflow(T8,4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T16 = primitive_machine_word_shift_right(T15,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T17 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  raw_repeated_fill_ = primitive_unicode_character_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T4 = primitive_word_allocate_filled(T10,mm_wrapper_,T16,&KPunboundVKi,0,T17,raw_repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  Dempty_Lunicode_stringGVKi = T4;
  // /opt/opendylan-2013.1/sources/dylan/unicode-string.dylan:8
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
