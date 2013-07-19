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
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(6);

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
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLnumberGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(46);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(47);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(41);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(0);

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
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimmutable_errorGVKi;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLbottom_typeGVKe;

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
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(1);


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
} _KLempty_rangeGVKi;

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
} _KLrangeGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinfinite_range_errorGVKi;

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
} _KLinfinite_rangeGVKi;

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
  D size_;
} _KLconstant_rangeGVKi;

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
  D size_;
} _KLfinite_rangeGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLincompatible_range_errorGVKi;


/* Referenced object declarations */

extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJfrom_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJby_;
extern _KLsymbolGVKd KJpassword_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LrangeG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLincremental_generic_functionGVKe KzeroQVKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsymbolGVKd KJsize_;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLsealed_generic_functionGVKe KfloorSVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe Ksize_setterVKd;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLnumberGVKd;
extern _KLmm_wrapperGVKi_0 KLnumberGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLsymbolGVKd KJto_;
extern _KLsymbolGVKd KJbelow_;
extern _KLsymbolGVKd KJabove_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
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
extern _KLsymbolGVKd KJformat_string_;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLincremental_generic_functionGVKe KlcmVKd;
extern _KLincremental_generic_functionGVKe KnegativeQVKd;
extern _KLincremental_generic_functionGVKe KnegativeVKd;
extern _KLincremental_generic_functionGVKe KlastVKd;
extern _KLsealed_generic_functionGVKe KtruncateSVKd;
extern _KLsealed_generic_functionGVKe KremainderVKd;
extern _KLincremental_generic_functionGVKe KpositiveQVKd;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLincremental_generic_functionGVKe KmemberQVKd;
D KEEVKdI (D, D);
extern _KLsymbolGVKd KJtest_;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
D KerrorVKdMM0I (D, D);
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLincremental_generic_functionGVKe Kcopy_sequenceVKd;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLsymbolGVKd KJcount_;
extern _KLincremental_generic_functionGVKe KremoveXVKd;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_methodGVKe Ksequence_previous_stateVKe;
extern _KLsimple_methodGVKe Ksequence_finished_stateQVKe;
extern _KLsimple_methodGVKe Ksequence_current_keyVKe;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
D KlistVKdI (D);
extern _KLclassGVKd KLimmutable_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLimmutable_errorGVKiW;
extern _KLbottom_typeGVKe KLbottomGVKe;
extern _KLclassGVKd KLbottom_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLbottom_typeGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_0;
extern _KLincremental_generic_functionGVKe Kshallow_copyVKd;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_1;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
extern _KLunionGVKe KLmutable_collection_typeGVKi;
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLsimple_methodGVKe Ksequence_next_stateVKe;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_2;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe Kbackward_iteration_protocolVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLstandalone_domainGVKe_1 KsizeVKdRD_dylanRD_3;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;

/* Defined object declarations */

static _KLbyte_stringGVKd_11 K1;
extern _KLclassGVKd KLempty_rangeGVKi;
extern _KLmm_wrapperGVKi_0 KLempty_rangeGVKiW;
extern _KLclassGVKd KLrangeGVKd;
extern _KLmm_wrapperGVKi_0 KLrangeGVKdW;
extern _KLsimple_methodGVKe KEVKdMM29;
D KEVKdMM29I (D, D);
extern _KLsimple_methodGVKe KEVKdMM30;
D KEVKdMM30I (D, D);
extern _KLsimple_methodGVKe KEVKdMM31;
D KEVKdMM31I (D, D);
extern _KLsimple_methodGVKe KEVKdMM32;
D KEVKdMM32I (D, D);
extern _KLsimple_methodGVKe KEVKdMM33;
D KEVKdMM33I (D, D);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_3;
extern _KLsimple_methodGVKe KemptyQVKdMM15;
D KemptyQVKdMM15I (D);
extern _KLsimple_methodGVKe KemptyQVKdMM16;
D KemptyQVKdMM16I (D);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_1;
extern _KLsetter_methodGVKi Ksize_setterVKdMM6;
extern _KLsetter_methodGVKi Ksize_setterVKdMM7;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_1;
extern _KLgetter_methodGVKi KsizeVKdMM34;
extern _KLgetter_methodGVKi KsizeVKdMM35;
extern _KLsimple_methodGVKe KsizeVKdMM36;
D KsizeVKdMM36I (D);
extern _KLsimple_methodGVKe KsizeVKdMM37;
D KsizeVKdMM37I (D);
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_7;
extern _KLsimple_methodGVKe Kshallow_copyVKdMM7;
D Kshallow_copyVKdMM7I (D);
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM20;
D Ktype_for_copyVKdMM20I (D range_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe KelementVKdMM28;
D KelementVKdMM28I (D, D, D, D);
extern _KLkeyword_methodGVKe KelementVKdMM29;
D KelementVKdMM29I (D, D, D, D);
extern _KLkeyword_methodGVKe KelementVKdMM30;
D KelementVKdMM30I (D, D, D, D);
extern _KLkeyword_methodGVKe KelementVKdMM31;
D KelementVKdMM31I (D, D, D, D);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_6;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM30;
D Kforward_iteration_protocolVKdMM30I (D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM29;
D Kforward_iteration_protocolVKdMM29I (D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM28;
D Kforward_iteration_protocolVKdMM28I (D);
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM27;
D Kforward_iteration_protocolVKdMM27I (D);
extern _KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM15;
D Kmap_as_oneVKiMM15I (D type_, D function_, D collection_);
extern _KLsimple_methodGVKe Kmap_as_oneVKiMM14;
D Kmap_as_oneVKiMM14I (D type_, D function_, D collection_);
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe KaddXVKdMM13;
D KaddXVKdMM13I (D, D);
extern _KLsimple_methodGVKe KaddXVKdMM12;
D KaddXVKdMM12I (D, D);
extern _KLsimple_methodGVKe KaddXVKdMM11;
D KaddXVKdMM11I (D, D);
extern _KLsimple_methodGVKe KaddXVKdMM10;
D KaddXVKdMM10I (D, D);
extern _KLsimple_methodGVKe KaddXVKdMM9;
D KaddXVKdMM9I (D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM9;
D KremoveXVKdMM9I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM10;
D KremoveXVKdMM10I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM11;
D KremoveXVKdMM11I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM12;
D KremoveXVKdMM12I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KremoveXVKdMM13;
D KremoveXVKdMM13I (D, D, D, D, D);
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_3;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_4;
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM17;
D Kbackward_iteration_protocolVKdMM17I (D);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM18;
D Kbackward_iteration_protocolVKdMM18I (D);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM19;
D Kbackward_iteration_protocolVKdMM19I (D);
extern _KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM20;
D Kbackward_iteration_protocolVKdMM20I (D);
extern _KLkeyword_methodGVKe KmemberQVKdMM4;
D KmemberQVKdMM4I (D, D, D, D);
D KrangeVKdI (D, D, D, D, D, D, D);
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM7;
D Kcopy_sequenceVKdMM7I (D, D, D, D);
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM6;
D Kcopy_sequenceVKdMM6I (D, D, D, D);
extern _KLsimple_methodGVKe KreverseVKdMM4;
D KreverseVKdMM4I (D);
extern _KLkeyword_methodGVKe KremoveVKdMM8;
D KremoveVKdMM8I (D, D, D, D, D);
extern _KLsimple_methodGVKe KaddVKdMM5;
D KaddVKdMM5I (D, D);
extern _KLkeyword_methodGVKe KlastVKdMM2;
D KlastVKdMM2I (D, D, D);
extern _KLkeyword_methodGVKe KlastVKdMM3;
D KlastVKdMM3I (D, D, D);
extern _KLkeyword_methodGVKe KlastVKdMM4;
D KlastVKdMM4I (D, D, D);
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KreverseXVKdMM4;
D KreverseXVKdMM4I (D);
extern _KLsimple_methodGVKe KreverseXVKdMM5;
D KreverseXVKdMM5I (D);
extern _KLsimple_methodGVKe KreverseXVKdMM6;
D KreverseXVKdMM6I (D);
extern _KLsimple_methodGVKe KreverseXVKdMM7;
D KreverseXVKdMM7I (D);
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_3;
extern _KLkeyword_methodGVKe KintersectionVKdMM1;
D KintersectionVKdMM1I (D, D, D, D);
extern _KLclassGVKd KLinfinite_range_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLinfinite_range_errorGVKiW;
extern _KLclassGVKd KLinfinite_rangeGVKi;
extern _KLmm_wrapperGVKi_0 KLinfinite_rangeGVKiW;
extern _KLkeyword_methodGVKe KlimitedVKdMM2;
D KlimitedVKdMM2I (D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM41;
D KmakeVKdMM41I (D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM42;
D KmakeVKdMM42I (D, D, D, D, D, D, D, D);
extern _KLsimple_methodGVKe KasVKdMM73;
D KasVKdMM73I (D, D);
static _KLsignatureAvaluesGVKi K154;
static _KLsimple_object_vectorGVKd_2 K155;
static _KLsingletonGVKd K156;
extern _KLclassGVKd KLconstant_rangeGVKi;
extern _KLmm_wrapperGVKi_0 KLconstant_rangeGVKiW;
extern _KLclassGVKd KLfinite_rangeGVKi;
extern _KLmm_wrapperGVKi_0 KLfinite_rangeGVKiW;
static _KLimplementation_classGVKe K161;
static _KLsimple_object_vectorGVKd_3 K162;
extern _KLkeyword_methodGVKe KLfinite_rangeGZ32ZconstructorVKiMM0;
D KLfinite_rangeGZ32ZconstructorVKiMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K165;
static _KLsimple_object_vectorGVKd_6 K166;
static _KLsimple_object_vectorGVKd_1 K167;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLfinite_rangeG;
static _KLbyte_stringGVKd_23 K169;
static _KLkeyword_signatureAvaluesGVKi K170;
static _KLsimple_object_vectorGVKd_6 K171;
static _KLsimple_object_vectorGVKd_3 K172;
static _KLsimple_object_vectorGVKd_1 K173;
extern _KLinstance_slot_descriptorGVKe Krange_fromVKeHLrangeG;
extern _KLinstance_slot_descriptorGVKe Krange_byVKeHLrangeG;
extern _KLsealed_generic_functionGVKe Krange_byVKe;
extern _KLsealed_generic_functionGVKe Krange_by_setterVKi;
extern _KLsetter_methodGVKi Krange_by_setterVKiMM0;
static _KLpairGVKd K179;
static _KLbyte_stringGVKd_15 K180;
extern _KLgetter_methodGVKi Krange_byVKeMM0;
static _KLpairGVKd K182;
static _KLbyte_stringGVKd_8 K183;
extern _KLsealed_generic_functionGVKe Krange_fromVKe;
extern _KLsealed_generic_functionGVKe Krange_from_setterVKi;
extern _KLsetter_methodGVKi Krange_from_setterVKiMM0;
static _KLpairGVKd K187;
static _KLbyte_stringGVKd_17 K188;
extern _KLgetter_methodGVKi Krange_fromVKeMM0;
static _KLpairGVKd K190;
static _KLbyte_stringGVKd_10 K191;
static _KLbyte_stringGVKd_14 K192;
static _KLimplementation_classGVKe K193;
static _KLsimple_object_vectorGVKd_3 K194;
extern _KLkeyword_methodGVKe KLconstant_rangeGZ32ZconstructorVKiMM0;
D KLconstant_rangeGZ32ZconstructorVKiMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K197;
static _KLsimple_object_vectorGVKd_1 K198;
extern _KLinstance_slot_descriptorGVKe KsizeVKdHLconstant_rangeG;
static _KLunionGVKe K200;
static _KLsingletonGVKd K201;
static _KLkeyword_signatureAvaluesGVKi K202;
static _KLsimple_object_vectorGVKd_1 K203;
static _KLbyte_stringGVKd_16 K204;
static _KLkeyword_signatureAvaluesGVKi K205;
static _KLsimple_object_vectorGVKd_12 K206;
static _KLsimple_object_vectorGVKd_1 K207;
static _KLsimple_object_vectorGVKd_6 K208;
static _KLbyte_stringGVKd_15 K209;
static _KLkeyword_signatureAvaluesGVKi K210;
static _KLsimple_object_vectorGVKd_2 K211;
static _KLsimple_object_vectorGVKd_1 K212;
static _KLsimple_object_vectorGVKd_1 K213;
static _KLsingletonGVKd K214;
static _KLkeyword_signatureAvaluesGVKi K215;
static _KLsimple_object_vectorGVKd_2 K216;
static _KLsymbolGVKd KJof_;
static _KLbyte_stringGVKd_2 K218;
static _KLsimple_object_vectorGVKd_1 K219;
static _KLimplementation_classGVKe K220;
static _KLsimple_object_vectorGVKd_2 K221;
extern _KLkeyword_methodGVKe KLinfinite_rangeGZ32ZconstructorVKiMM0;
D KLinfinite_rangeGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K224;
static _KLkeyword_signatureAvaluesGVKi K225;
static _KLsimple_object_vectorGVKd_4 K226;
static _KLsimple_object_vectorGVKd_2 K227;
static _KLsimple_object_vectorGVKd_1 K228;
static _KLbyte_stringGVKd_16 K229;
static _KLimplementation_classGVKe K230;
static _KLsimple_object_vectorGVKd_2 K231;
extern _KLkeyword_methodGVKe KLinfinite_range_errorGZ32ZconstructorVKiMM0;
D KLinfinite_range_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K234;
static _KLsimple_object_vectorGVKd_7 K235;
static _KLkeyword_signatureAvaluesGVKi K236;
static _KLsimple_object_vectorGVKd_4 K237;
static _KLsimple_object_vectorGVKd_2 K238;
static _KLsimple_object_vectorGVKd_1 K239;
static _KLbyte_stringGVKd_22 K240;
extern _KLsealed_generic_functionGVKe KidQ_intersectionVKi;
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM0;
D KidQ_intersectionVKiMM0I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM1;
D KidQ_intersectionVKiMM1I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM2;
D KidQ_intersectionVKiMM2I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM3;
D KidQ_intersectionVKiMM3I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM4;
D KidQ_intersectionVKiMM4I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM5;
D KidQ_intersectionVKiMM5I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM6;
D KidQ_intersectionVKiMM6I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM7;
D KidQ_intersectionVKiMM7I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM8;
D KidQ_intersectionVKiMM8I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM9;
D KidQ_intersectionVKiMM9I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM10;
D KidQ_intersectionVKiMM10I (D, D);
extern _KLsimple_methodGVKe KidQ_intersectionVKiMM11;
D KidQ_intersectionVKiMM11I (D, D);
static _KLpairGVKd K266;
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
static _KLbyte_stringGVKd_16 K278;
D Ksame_signQVKiI (D, D);
D Kfirst_intersectionVKiI (D, D, D, D);
D Klast_of_inVKiI (D, D);
D Kfinite_intersectionVKiI (D, D, D, D, D, D);
D Kordered_finite_intersectionVKiI (D, D, D, D, D, D);
static _KLsignatureGVKe K284;
static _KLsimple_object_vectorGVKd_2 K285;
static _KLsignatureGVKe K286;
static _KLsimple_object_vectorGVKd_2 K287;
static _KLsignatureGVKe K288;
static _KLsimple_object_vectorGVKd_2 K289;
static _KLsignatureGVKe K290;
static _KLsimple_object_vectorGVKd_2 K291;
D KidQ_intersection_with_constantVKiI (D, D);
static _KLsignatureGVKe K293;
static _KLsimple_object_vectorGVKd_2 K294;
static _KLsignatureGVKe K295;
static _KLsimple_object_vectorGVKd_2 K296;
static _KLsignatureGVKe K297;
static _KLsimple_object_vectorGVKd_2 K298;
static _KLsignatureGVKe K299;
static _KLsimple_object_vectorGVKd_2 K300;
static _KLsignatureGVKe K301;
static _KLsimple_object_vectorGVKd_2 K302;
static _KLsignatureGVKe K303;
static _KLsimple_object_vectorGVKd_2 K304;
static _KLsignatureGVKe K305;
static _KLsimple_object_vectorGVKd_2 K306;
static _KLsignatureGVKe K307;
static _KLsimple_object_vectorGVKd_2 K308;
static _KLkeyword_signatureAvaluesGVKi K309;
static _KLsimple_object_vectorGVKd_2 K310;
static _KLsimple_object_vectorGVKd_1 K311;
static _KLsignatureAvaluesGVKi K312;
static _KLbyte_stringGVKd_33 K313;
static _KLsignatureAvaluesGVKi K314;
static _KLsignatureAvaluesGVKi K315;
static _KLsignatureAvaluesGVKi K316;
static _KLsimple_object_vectorGVKd_1 K317;
static _KLkeyword_signatureGVKe K318;
static _KLsimple_object_vectorGVKd_2 K319;
static _KLsimple_object_vectorGVKd_1 K320;
static _KLkeyword_signatureGVKe K321;
static _KLbyte_stringGVKd_41 K322;
static _KLkeyword_signatureGVKe K323;
static _KLsignatureAvaluesGVKi K324;
static _KLsimple_object_vectorGVKd_2 K325;
static _KLkeyword_signatureAvaluesGVKi K326;
static _KLsimple_object_vectorGVKd_4 K327;
static _KLsimple_object_vectorGVKd_2 K328;
static _KLsignatureAvaluesGVKi K329;
static _KLkeyword_signatureAvaluesGVKi K330;
static _KLsimple_object_vectorGVKd_4 K331;
static _KLsimple_object_vectorGVKd_2 K332;
static _KLkeyword_signatureAvaluesGVKi K333;
static _KLsimple_object_vectorGVKd_4 K334;
extern _KLsealed_generic_functionGVKe Kfind_key_for_elementVKi;
extern _KLsimple_methodGVKe Kfind_key_for_elementVKiMM0;
D Kfind_key_for_elementVKiMM0I (D, D);
extern _KLsimple_methodGVKe Kfind_key_for_elementVKiMM1;
D Kfind_key_for_elementVKiMM1I (D, D);
extern _KLsimple_methodGVKe Kfind_key_for_elementVKiMM2;
D Kfind_key_for_elementVKiMM2I (D, D);
extern _KLsimple_methodGVKe Kfind_key_for_elementVKiMM3;
D Kfind_key_for_elementVKiMM3I (D, D);
static _KLpairGVKd K344;
static _KLpairGVKd K345;
static _KLpairGVKd K346;
static _KLpairGVKd K347;
static _KLbyte_stringGVKd_20 K348;
static _KLsignatureGVKe K349;
static _KLsimple_object_vectorGVKd_2 K350;
static _KLsignatureGVKe K351;
static _KLsimple_object_vectorGVKd_2 K352;
static _KLsignatureGVKe K353;
static _KLsimple_object_vectorGVKd_2 K354;
static _KLsignatureGVKe K355;
static _KLsimple_object_vectorGVKd_2 K356;
static _KLkeyword_signatureAvaluesGVKi K357;
static _KLsimple_object_vectorGVKd_2 K358;
static _KLbyte_stringGVKd_47 K359;
extern _KLsimple_methodGVKe Kconstant_range_current_elementVKi;
D Kconstant_range_current_elementVKiI (D, D);
extern _KLsimple_methodGVKe Krange_current_element_setterVKi;
D Krange_current_element_setterVKiI (D, D, D);
static _KLbyte_stringGVKd_21 K364;
static _KLsignatureAvaluesGVKi K365;
static _KLsimple_object_vectorGVKd_3 K366;
static _KLsimple_object_vectorGVKd_1 K367;
static _KLsignatureGVKe K368;
static _KLsignatureAvaluesGVKi K369;
static _KLsimple_object_vectorGVKd_8 K370;
extern _KLsimple_methodGVKe Kdecreasing_range_finished_stateQVKi;
D Kdecreasing_range_finished_stateQVKiI (D, D, D);
extern _KLsimple_methodGVKe Kincreasing_range_finished_stateQVKi;
D Kincreasing_range_finished_stateQVKiI (D, D, D);
extern _KLsimple_methodGVKe Krange_previous_stateVKi;
D Krange_previous_stateVKiI (D, D);
extern _KLsimple_methodGVKe Krange_current_keyVKi;
D Krange_current_keyVKiI (D, D);
extern _KLsimple_methodGVKe Krange_current_elementVKi;
D Krange_current_elementVKiI (D, D);
static _KLsignatureAvaluesGVKi K381;
static _KLsignatureAvaluesGVKi K382;
static _KLsimple_object_vectorGVKd_3 K383;
static _KLsignatureAvaluesGVKi K384;
static _KLsignatureAvaluesGVKi K385;
static _KLsignatureAvaluesGVKi K386;
static _KLkeyword_signatureAvaluesGVKi K387;
static _KLsimple_object_vectorGVKd_2 K388;
static _KLkeyword_signatureAvaluesGVKi K389;
static _KLsimple_object_vectorGVKd_2 K390;
static _KLbyte_stringGVKd_46 K391;
extern _KLclassGVKd KLincompatible_range_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLincompatible_range_errorGVKiW;
static _KLimplementation_classGVKe K394;
extern _KLkeyword_methodGVKe KLincompatible_range_errorGZ32ZconstructorVKiMM0;
D KLincompatible_range_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K397;
static _KLkeyword_signatureAvaluesGVKi K398;
static _KLsimple_object_vectorGVKd_1 K399;
static _KLbyte_stringGVKd_26 K400;
static _KLkeyword_signatureAvaluesGVKi K401;
static _KLsimple_object_vectorGVKd_2 K402;
static _KLkeyword_signatureAvaluesGVKi K403;
static _KLsimple_object_vectorGVKd_2 K404;
static _KLkeyword_signatureAvaluesGVKi K405;
static _KLsimple_object_vectorGVKd_2 K406;
static _KLsignatureAvaluesGVKi K407;
static _KLsignatureAvaluesGVKi K408;
static _KLbyte_stringGVKd_41 K409;
static _KLsignatureAvaluesGVKi K410;
static _KLsignatureAvaluesGVKi K411;
static _KLsignatureAvaluesGVKi K412;
static _KLbyte_stringGVKd_33 K413;
static _KLsignatureAvaluesGVKi K414;
static _KLsimple_object_vectorGVKd_3 K415;
static _KLsignatureAvaluesGVKi K416;
static _KLsimple_object_vectorGVKd_3 K417;
static _KLsingletonGVKd K418;
extern _KLsimple_methodGVKe Krange_errorVKi;
D Krange_errorVKiI (D);
extern _KLsimple_methodGVKe Kempty_range_finished_stateQVKi;
D Kempty_range_finished_stateQVKiI (D, D, D);
static _KLbyte_stringGVKd_45 K423;
static _KLsignatureAvaluesGVKi K424;
extern _KLsimple_methodGVKe Krange_next_stateVKi;
D Krange_next_stateVKiI (D, D);
extern _KLsimple_methodGVKe Kinfinite_range_finished_stateQVKi;
D Kinfinite_range_finished_stateQVKiI (D, D, D);
static _KLkeyword_signatureGVKe K429;
static _KLsimple_object_vectorGVKd_2 K430;
static _KLsimple_object_vectorGVKd_2 K431;
static _KLkeyword_signatureGVKe K432;
static _KLsimple_object_vectorGVKd_2 K433;
static _KLkeyword_signatureGVKe K434;
static _KLsimple_object_vectorGVKd_2 K435;
static _KLkeyword_signatureGVKe K436;
static _KLsimple_object_vectorGVKd_2 K437;
static _KLsignatureAvaluesGVKi K438;
static _KLsimple_object_vectorGVKd_1 K439;
static _KLsignatureAvaluesGVKi K440;
static _KLsignatureAvaluesGVKi K441;
static _KLsimple_object_vectorGVKd_1 K442;
static _KLsignatureAvaluesGVKi K443;
static _KLsimple_object_vectorGVKd_1 K444;
static _KLsingletonGVKd K445;
static _KLsignatureAvaluesGVKi K446;
static _KLsimple_object_vectorGVKd_1 K447;
static _KLsingletonGVKd K448;
static _KLsignatureAvaluesGVKi K449;
static _KLsignatureAvaluesGVKi K450;
static _KLsignatureAvaluesGVKi K451;
static _KLsignatureAvaluesGVKi K452;
static _KLsignatureAvaluesGVKi K453;
static _KLsignatureAvaluesGVKi K454;
static _KLimplementation_classGVKe K455;
static _KLsimple_object_vectorGVKd_1 K456;
static _KLsimple_object_vectorGVKd_6 K457;
static _KLbyte_stringGVKd_7 K458;
extern _KLkeyword_methodGVKe KrangeVKd;
static _KLkeyword_signatureAvaluesGVKi K460;
static _KLsimple_object_vectorGVKd_12 K461;
static _KLimplementation_classGVKe K462;
extern _KLkeyword_methodGVKe KLempty_rangeGZ32ZconstructorVKiMM0;
D KLempty_rangeGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K465;
static _KLkeyword_signatureAvaluesGVKi K466;
static _KLbyte_stringGVKd_13 K467;
static _KLpairGVKd K468;
static _KLpairGVKd K469;
static _KLpairGVKd K470;
static _KLpairGVKd K471;

/* Indirection variables */

static D IKJof_ = &KJof_;

/* Variables */

D range_fromVKe = &Krange_fromVKe;
D range_byVKe = &Krange_byVKe;
D LrangeGVKd = &KLrangeGVKd;
D Lempty_rangeGVKi = &KLempty_rangeGVKi;
D Lconstant_rangeGVKi = &KLconstant_rangeGVKi;
D Lfinite_rangeGVKi = &KLfinite_rangeGVKi;
D Linfinite_rangeGVKi = &KLinfinite_rangeGVKi;
D Linfinite_range_errorGVKi = &KLinfinite_range_errorGVKi;
D Dempty_range_passwordVKi = &KPunboundVKi;
D Dempty_rangeVKi = &KPunboundVKi;
D rangeVKd = &KrangeVKd;
D Lincompatible_range_errorGVKi = &KLincompatible_range_errorGVKi;

/* Objects */

static _KLbyte_stringGVKd_11 K1 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "empty-range"
};

_KLclassGVKd KLempty_rangeGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K467,
  &K462,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLempty_rangeGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K462,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLrangeGVKd = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K458,
  &K455,
  (D) 1,
  &Kdylan_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLrangeGVKdW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K455,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe KEVKdMM29 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K454,
  &KEVKdMM29I
};

_KLsimple_methodGVKe KEVKdMM30 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K453,
  &KEVKdMM30I
};

_KLsimple_methodGVKe KEVKdMM31 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K452,
  &KEVKdMM31I
};

_KLsimple_methodGVKe KEVKdMM32 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K451,
  &KEVKdMM32I
};

_KLsimple_methodGVKe KEVKdMM33 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K450,
  &KEVKdMM33I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KEVKdMM33
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_0,
  &KEVKdMM32
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_1,
  &KEVKdMM31
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_2,
  &KEVKdMM30
};

_KLsimple_methodGVKe KemptyQVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K449,
  &KemptyQVKdMM15I
};

_KLsimple_methodGVKe KemptyQVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K446,
  &KemptyQVKdMM16I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_0,
  &KemptyQVKdMM16
};

_KLsetter_methodGVKi Ksize_setterVKdMM6 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KsizeVKdHLconstant_rangeG
};

_KLsetter_methodGVKi Ksize_setterVKdMM7 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KsizeVKdHLfinite_rangeG
};

_KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Ksize_setterVKdMM7
};

_KLmethod_domainGVKe Ksize_setterVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ksize_setterVKdRD_dylanRD_0,
  &Ksize_setterVKdMM6
};

_KLgetter_methodGVKi KsizeVKdMM34 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLconstant_rangeG
};

_KLgetter_methodGVKi KsizeVKdMM35 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KsizeVKdHLfinite_rangeG
};

_KLsimple_methodGVKe KsizeVKdMM36 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K443,
  &KsizeVKdMM36I
};

_KLsimple_methodGVKe KsizeVKdMM37 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K441,
  &KsizeVKdMM37I
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_3,
  &KsizeVKdMM37
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_4,
  &KsizeVKdMM36
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_5,
  &KsizeVKdMM35
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_6,
  &KsizeVKdMM34
};

_KLsimple_methodGVKe Kshallow_copyVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K440,
  &Kshallow_copyVKdMM7I
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K438,
  &Ktype_for_copyVKdMM20I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Ktype_for_copyVKdMM20
};

_KLkeyword_methodGVKe KelementVKdMM28 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K436,
  &key_mep_4,
  &KelementVKdMM28I,
  &K430
};

_KLkeyword_methodGVKe KelementVKdMM29 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K434,
  &key_mep_4,
  &KelementVKdMM29I,
  &K430
};

_KLkeyword_methodGVKe KelementVKdMM30 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K432,
  &key_mep_4,
  &KelementVKdMM30I,
  &K319
};

_KLkeyword_methodGVKe KelementVKdMM31 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K429,
  &key_mep_4,
  &KelementVKdMM31I,
  &K430
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_2,
  &KelementVKdMM31
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_3,
  &KelementVKdMM30
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_4,
  &KelementVKdMM29
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_5,
  &KelementVKdMM28
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM30 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K369,
  &Kforward_iteration_protocolVKdMM30I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM29 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K384,
  &Kforward_iteration_protocolVKdMM29I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM28 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K385,
  &Kforward_iteration_protocolVKdMM28I
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM27 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K386,
  &Kforward_iteration_protocolVKdMM27I
};

_KLsimple_copy_down_methodGVKi Kmap_as_oneVKiMM15 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_3,
  &K416,
  &Kmap_as_oneVKiMM15I
};

_KLsimple_methodGVKe Kmap_as_oneVKiMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K414,
  &Kmap_as_oneVKiMM14I
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_1,
  &KaddXVKdMM13
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_2,
  &KaddXVKdMM12
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_3,
  &KaddXVKdMM11
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_4,
  &KaddXVKdMM10
};

_KLsimple_methodGVKe KaddXVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K412,
  &KaddXVKdMM13I
};

_KLsimple_methodGVKe KaddXVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K411,
  &KaddXVKdMM12I
};

_KLsimple_methodGVKe KaddXVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K410,
  &KaddXVKdMM11I
};

_KLsimple_methodGVKe KaddXVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K408,
  &KaddXVKdMM10I
};

_KLsimple_methodGVKe KaddXVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K407,
  &KaddXVKdMM9I
};

_KLkeyword_methodGVKe KremoveXVKdMM9 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K405,
  &key_mep_5,
  &KremoveXVKdMM9I,
  &K327
};

_KLkeyword_methodGVKe KremoveXVKdMM10 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K403,
  &key_mep_5,
  &KremoveXVKdMM10I,
  &K327
};

_KLkeyword_methodGVKe KremoveXVKdMM11 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K401,
  &key_mep_5,
  &KremoveXVKdMM11I,
  &K327
};

_KLkeyword_methodGVKe KremoveXVKdMM12 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K389,
  &key_mep_5,
  &KremoveXVKdMM12I,
  &K327
};

_KLkeyword_methodGVKe KremoveXVKdMM13 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K387,
  &key_mep_5,
  &KremoveXVKdMM13I,
  &K327
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_0,
  &KremoveXVKdMM13
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_1,
  &KremoveXVKdMM12
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_2,
  &KremoveXVKdMM11
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_3,
  &KremoveXVKdMM10
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K386,
  &Kbackward_iteration_protocolVKdMM17I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K385,
  &Kbackward_iteration_protocolVKdMM18I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K384,
  &Kbackward_iteration_protocolVKdMM19I
};

_KLsimple_methodGVKe Kbackward_iteration_protocolVKdMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K369,
  &Kbackward_iteration_protocolVKdMM20I
};

_KLkeyword_methodGVKe KmemberQVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K357,
  &key_mep_4,
  &KmemberQVKdMM4I,
  &K310
};

_KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kcopy_sequenceVKdMM6
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K333,
  &key_mep_4,
  &Kcopy_sequenceVKdMM7I,
  &K334
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K330,
  &key_mep_4,
  &Kcopy_sequenceVKdMM6I,
  &K331
};

_KLsimple_methodGVKe KreverseVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K329,
  &KreverseVKdMM4I
};

_KLkeyword_methodGVKe KremoveVKdMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K326,
  &key_mep_5,
  &KremoveVKdMM8I,
  &K327
};

_KLsimple_methodGVKe KaddVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K324,
  &KaddVKdMM5I
};

_KLkeyword_methodGVKe KlastVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K323,
  &key_mep_3,
  &KlastVKdMM2I,
  &K319
};

_KLkeyword_methodGVKe KlastVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K321,
  &key_mep_3,
  &KlastVKdMM3I,
  &K319
};

_KLkeyword_methodGVKe KlastVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K318,
  &key_mep_3,
  &KlastVKdMM4I,
  &K319
};

_KLmethod_domainGVKe KlastVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KlastVKdMM4
};

_KLmethod_domainGVKe KlastVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KlastVKdRD_dylanRD_0,
  &KlastVKdMM3
};

_KLmethod_domainGVKe KlastVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KlastVKdRD_dylanRD_1,
  &KlastVKdMM2
};

_KLsimple_methodGVKe KreverseXVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K316,
  &KreverseXVKdMM4I
};

_KLsimple_methodGVKe KreverseXVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K315,
  &KreverseXVKdMM5I
};

_KLsimple_methodGVKe KreverseXVKdMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K314,
  &KreverseXVKdMM6I
};

_KLsimple_methodGVKe KreverseXVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K312,
  &KreverseXVKdMM7I
};

_KLmethod_domainGVKe KreverseXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KreverseXVKdMM7
};

_KLmethod_domainGVKe KreverseXVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreverseXVKdRD_dylanRD_0,
  &KreverseXVKdMM6
};

_KLmethod_domainGVKe KreverseXVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreverseXVKdRD_dylanRD_1,
  &KreverseXVKdMM5
};

_KLmethod_domainGVKe KreverseXVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreverseXVKdRD_dylanRD_2,
  &KreverseXVKdMM4
};

_KLkeyword_methodGVKe KintersectionVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K309,
  &key_mep_4,
  &KintersectionVKdMM1I,
  &K310
};

_KLclassGVKd KLinfinite_range_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K240,
  &K230,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLinfinite_range_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K230,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLinfinite_rangeGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K229,
  &K220,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLinfinite_rangeGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K220,
  (D) 4609,
  9,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KlimitedVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K215,
  &key_mep_3,
  &KlimitedVKdMM2I,
  &K216
};

_KLkeyword_methodGVKe KmakeVKdMM41 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K210,
  &key_mep_3,
  &KmakeVKdMM41I,
  &K211
};

_KLkeyword_methodGVKe KmakeVKdMM42 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K205,
  &key_mep_8,
  &KmakeVKdMM42I,
  &K206
};

_KLsimple_methodGVKe KasVKdMM73 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K154,
  &KasVKdMM73I
};

static _KLsignatureAvaluesGVKi K154 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K155,
  &KDsignature_LrangeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K155 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K156,
  &KLrangeGVKd
};

static _KLsingletonGVKd K156 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLrangeGVKd
};

_KLclassGVKd KLconstant_rangeGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K204,
  &K193,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLconstant_rangeGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K193,
  (D) 4609,
  13,
  33554439,
  (D) 1
};

_KLclassGVKd KLfinite_rangeGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K192,
  &K161,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLfinite_rangeGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K161,
  (D) 4609,
  13,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K161 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433741,
  &KLfinite_rangeGVKi,
  &KLfinite_rangeGVKiW,
  &KPfalseVKi,
  &K162,
  (D) 6913,
  &KLfinite_rangeGZ32ZconstructorVKiMM0,
  &K165,
  &K166,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K167,
  &K162,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Krange_fromVKeHLrangeG,
  &Krange_byVKeHLrangeG,
  &KsizeVKdHLfinite_rangeG
};

_KLkeyword_methodGVKe KLfinite_rangeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K170,
  &key_mep_2,
  &KLfinite_rangeGZ32ZconstructorVKiMM0I,
  &K171
};

static _KLsimple_object_vectorGVKd_1 K165 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrangeGVKd
};

static _KLsimple_object_vectorGVKd_6 K166 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLrangeGVKd,
  &KLfinite_rangeGVKi
};

static _KLsimple_object_vectorGVKd_1 K167 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLfinite_rangeG
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLfinite_rangeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLfinite_rangeGVKi,
  &KJsize_,
  &KsizeVKd,
  &Ksize_setterVKd,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_23 K169 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K170 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K172,
  &KDsignature_LobjectG_typesVKi,
  &K173
};

static _KLsimple_object_vectorGVKd_6 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJfrom_,
  &KPunboundVKi,
  &KJby_,
  &KPunboundVKi,
  &KJsize_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K172 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJfrom_,
  &KJby_,
  &KJsize_
};

static _KLsimple_object_vectorGVKd_1 K173 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLfinite_rangeGVKi
};

_KLinstance_slot_descriptorGVKe Krange_fromVKeHLrangeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLrangeGVKd,
  &KJfrom_,
  &Krange_fromVKe,
  &Krange_from_setterVKi,
  &KLnumberGVKd
};

_KLinstance_slot_descriptorGVKe Krange_byVKeHLrangeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLrangeGVKd,
  &KJby_,
  &Krange_byVKe,
  &Krange_by_setterVKi,
  &KLnumberGVKd
};

_KLsealed_generic_functionGVKe Krange_byVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K183,
  &K182,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krange_by_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K180,
  &K179,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Krange_by_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Krange_byVKeHLrangeG
};

static _KLpairGVKd K179 = {
  &KLpairGVKdW /* wrapper */,
  &Krange_by_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K180 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "range-by-setter"
};

_KLgetter_methodGVKi Krange_byVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Krange_byVKeHLrangeG
};

static _KLpairGVKd K182 = {
  &KLpairGVKdW /* wrapper */,
  &Krange_byVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K183 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "range-by"
};

_KLsealed_generic_functionGVKe Krange_fromVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K191,
  &K190,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Krange_from_setterVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K188,
  &K187,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Krange_from_setterVKiMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Krange_fromVKeHLrangeG
};

static _KLpairGVKd K187 = {
  &KLpairGVKdW /* wrapper */,
  &Krange_from_setterVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K188 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "range-from-setter"
};

_KLgetter_methodGVKi Krange_fromVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Krange_fromVKeHLrangeG
};

static _KLpairGVKd K190 = {
  &KLpairGVKdW /* wrapper */,
  &Krange_fromVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K191 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "range-from"
};

static _KLbyte_stringGVKd_14 K192 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<finite-range>"
};

static _KLimplementation_classGVKe K193 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433741,
  &KLconstant_rangeGVKi,
  &KLconstant_rangeGVKiW,
  &KPfalseVKi,
  &K194,
  (D) 6905,
  &KLconstant_rangeGZ32ZconstructorVKiMM0,
  &K165,
  &K197,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K198,
  &K194,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K194 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Krange_fromVKeHLrangeG,
  &Krange_byVKeHLrangeG,
  &KsizeVKdHLconstant_rangeG
};

_KLkeyword_methodGVKe KLconstant_rangeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K202,
  &key_mep_2,
  &KLconstant_rangeGZ32ZconstructorVKiMM0I,
  &K171
};

static _KLsimple_object_vectorGVKd_6 K197 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLrangeGVKd,
  &KLconstant_rangeGVKi
};

static _KLsimple_object_vectorGVKd_1 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KsizeVKdHLconstant_rangeG
};

_KLinstance_slot_descriptorGVKe KsizeVKdHLconstant_rangeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLconstant_rangeGVKi,
  &KJsize_,
  &KsizeVKd,
  &Ksize_setterVKd,
  &K200
};

static _KLunionGVKe K200 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLintegerGVKd,
  &K201
};

static _KLsingletonGVKd K201 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K202 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K172,
  &KDsignature_LobjectG_typesVKi,
  &K203
};

static _KLsimple_object_vectorGVKd_1 K203 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLconstant_rangeGVKi
};

static _KLbyte_stringGVKd_16 K204 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<constant-range>"
};

static _KLkeyword_signatureAvaluesGVKi K205 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K207,
  &K208,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LrangeG_typesVKi
};

static _KLsimple_object_vectorGVKd_12 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJfrom_,
  (D) 1,
  &KJby_,
  (D) 5,
  &KJto_,
  &KPfalseVKi,
  &KJbelow_,
  &KPfalseVKi,
  &KJabove_,
  &KPfalseVKi,
  &KJsize_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K207 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K156
};

static _KLsimple_object_vectorGVKd_6 K208 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJfrom_,
  &KJby_,
  &KJto_,
  &KJbelow_,
  &KJabove_,
  &KJsize_
};

static _KLbyte_stringGVKd_15 K209 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureAvaluesGVKi K210 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38536197,
  &K212,
  &K213,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LrangeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJpassword_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K212 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K214
};

static _KLsimple_object_vectorGVKd_1 K213 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJpassword_
};

static _KLsingletonGVKd K214 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLempty_rangeGVKi
};

static _KLkeyword_signatureAvaluesGVKi K215 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34341893,
  &K207,
  &K219,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K216 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJof_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJof_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K218
};

static _KLbyte_stringGVKd_2 K218 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "of"
};

static _KLsimple_object_vectorGVKd_1 K219 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJof_
};

static _KLimplementation_classGVKe K220 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433737,
  &KLinfinite_rangeGVKi,
  &KLinfinite_rangeGVKiW,
  &KPfalseVKi,
  &K221,
  (D) 6921,
  &KLinfinite_rangeGZ32ZconstructorVKiMM0,
  &K165,
  &K224,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K221,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Krange_fromVKeHLrangeG,
  &Krange_byVKeHLrangeG
};

_KLkeyword_methodGVKe KLinfinite_rangeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K225,
  &key_mep_2,
  &KLinfinite_rangeGZ32ZconstructorVKiMM0I,
  &K226
};

static _KLsimple_object_vectorGVKd_6 K224 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLrangeGVKd,
  &KLinfinite_rangeGVKi
};

static _KLkeyword_signatureAvaluesGVKi K225 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K227,
  &KDsignature_LobjectG_typesVKi,
  &K228
};

static _KLsimple_object_vectorGVKd_4 K226 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJfrom_,
  &KPunboundVKi,
  &KJby_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K227 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfrom_,
  &KJby_
};

static _KLsimple_object_vectorGVKd_1 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinfinite_rangeGVKi
};

static _KLbyte_stringGVKd_16 K229 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<infinite-range>"
};

static _KLimplementation_classGVKe K230 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLinfinite_range_errorGVKi,
  &KLinfinite_range_errorGVKiW,
  &KPfalseVKi,
  &K231,
  (D) 6929,
  &KLinfinite_range_errorGZ32ZconstructorVKiMM0,
  &K234,
  &K235,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K231,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K231 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLinfinite_range_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K236,
  &key_mep_2,
  &KLinfinite_range_errorGZ32ZconstructorVKiMM0I,
  &K237
};

static _KLsimple_object_vectorGVKd_1 K234 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K235 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLinfinite_range_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K236 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K238,
  &KDsignature_LobjectG_typesVKi,
  &K239
};

static _KLsimple_object_vectorGVKd_4 K237 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K238 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K239 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLinfinite_range_errorGVKi
};

static _KLbyte_stringGVKd_22 K240 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<infinite-range-error>"
};

_KLsealed_generic_functionGVKe KidQ_intersectionVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K278,
  &K266,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K307,
  &KidQ_intersectionVKiMM0I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K305,
  &KidQ_intersectionVKiMM1I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K303,
  &KidQ_intersectionVKiMM2I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K301,
  &KidQ_intersectionVKiMM3I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K299,
  &KidQ_intersectionVKiMM4I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K297,
  &KidQ_intersectionVKiMM5I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K295,
  &KidQ_intersectionVKiMM6I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K293,
  &KidQ_intersectionVKiMM7I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K290,
  &KidQ_intersectionVKiMM8I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K288,
  &KidQ_intersectionVKiMM9I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K286,
  &KidQ_intersectionVKiMM10I
};

_KLsimple_methodGVKe KidQ_intersectionVKiMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K284,
  &KidQ_intersectionVKiMM11I
};

static _KLpairGVKd K266 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM0,
  &K267
};

static _KLpairGVKd K267 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM1,
  &K268
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM2,
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM3,
  &K270
};

static _KLpairGVKd K270 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM4,
  &K271
};

static _KLpairGVKd K271 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM5,
  &K272
};

static _KLpairGVKd K272 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM6,
  &K273
};

static _KLpairGVKd K273 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM7,
  &K274
};

static _KLpairGVKd K274 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM8,
  &K275
};

static _KLpairGVKd K275 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM9,
  &K276
};

static _KLpairGVKd K276 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM10,
  &K277
};

static _KLpairGVKd K277 = {
  &KLpairGVKdW /* wrapper */,
  &KidQ_intersectionVKiMM11,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K278 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "id?-intersection"
};

static _KLsignatureGVKe K284 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K285
};

static _KLsimple_object_vectorGVKd_2 K285 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLinfinite_rangeGVKi,
  &KLinfinite_rangeGVKi
};

static _KLsignatureGVKe K286 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K287
};

static _KLsimple_object_vectorGVKd_2 K287 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLinfinite_rangeGVKi,
  &KLfinite_rangeGVKi
};

static _KLsignatureGVKe K288 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K289
};

static _KLsimple_object_vectorGVKd_2 K289 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfinite_rangeGVKi,
  &KLinfinite_rangeGVKi
};

static _KLsignatureGVKe K290 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K291
};

static _KLsimple_object_vectorGVKd_2 K291 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfinite_rangeGVKi,
  &KLfinite_rangeGVKi
};

static _KLsignatureGVKe K293 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K294
};

static _KLsimple_object_vectorGVKd_2 K294 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLinfinite_rangeGVKi,
  &KLconstant_rangeGVKi
};

static _KLsignatureGVKe K295 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K296
};

static _KLsimple_object_vectorGVKd_2 K296 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfinite_rangeGVKi,
  &KLconstant_rangeGVKi
};

static _KLsignatureGVKe K297 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K298
};

static _KLsimple_object_vectorGVKd_2 K298 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLconstant_rangeGVKi,
  &KLinfinite_rangeGVKi
};

static _KLsignatureGVKe K299 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K300
};

static _KLsimple_object_vectorGVKd_2 K300 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLconstant_rangeGVKi,
  &KLfinite_rangeGVKi
};

static _KLsignatureGVKe K301 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K302
};

static _KLsimple_object_vectorGVKd_2 K302 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLconstant_rangeGVKi,
  &KLconstant_rangeGVKi
};

static _KLsignatureGVKe K303 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K304
};

static _KLsimple_object_vectorGVKd_2 K304 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLempty_rangeGVKi,
  &KLrangeGVKd
};

static _KLsignatureGVKe K305 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K306
};

static _KLsimple_object_vectorGVKd_2 K306 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLrangeGVKd,
  &KLempty_rangeGVKi
};

static _KLsignatureGVKe K307 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K308
};

static _KLsimple_object_vectorGVKd_2 K308 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLempty_rangeGVKi,
  &KLempty_rangeGVKi
};

static _KLkeyword_signatureAvaluesGVKi K309 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011913,
  &KDsignature_LrangeG_typesVKi,
  &K311,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LrangeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K310 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

static _KLsimple_object_vectorGVKd_1 K311 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLsignatureAvaluesGVKi K312 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K173,
  &K173
};

static _KLbyte_stringGVKd_33 K313 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Cannot reverse! an infinite range"
};

static _KLsignatureAvaluesGVKi K314 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K203,
  &KDsignature_LrangeG_typesVKi
};

static _KLsignatureAvaluesGVKi K315 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K228,
  &KDsignature_LrangeG_typesVKi
};

static _KLsignatureAvaluesGVKi K316 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K317,
  &K317
};

static _KLsimple_object_vectorGVKd_1 K317 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLempty_rangeGVKi
};

static _KLkeyword_signatureGVKe K318 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K173,
  &K320,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K319 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K320 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLkeyword_signatureGVKe K321 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K203,
  &K320,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_41 K322 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Cannot apply \'last\' to an unbounded range"
};

static _KLkeyword_signatureGVKe K323 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K228,
  &K320,
  &KDsignature_LobjectG_typesVKi
};

static _KLsignatureAvaluesGVKi K324 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K325,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K325 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLrangeGVKd,
  &KLnumberGVKd
};

static _KLkeyword_signatureAvaluesGVKi K326 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K325,
  &K328,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K327 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KPfalseVKi,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K328 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsignatureAvaluesGVKi K329 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LrangeG_typesVKi,
  &KDsignature_LrangeG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K330 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K317,
  &K332,
  &KDsignature_LobjectG_typesVKi,
  &K317
};

static _KLsimple_object_vectorGVKd_4 K331 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  &KPfalseVKi,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K332 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLkeyword_signatureAvaluesGVKi K333 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LrangeG_typesVKi,
  &K332,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LrangeG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K334 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

_KLsealed_generic_functionGVKe Kfind_key_for_elementVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 1,
  &K348,
  &K344,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kfind_key_for_elementVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K355,
  &Kfind_key_for_elementVKiMM0I
};

_KLsimple_methodGVKe Kfind_key_for_elementVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K353,
  &Kfind_key_for_elementVKiMM1I
};

_KLsimple_methodGVKe Kfind_key_for_elementVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K351,
  &Kfind_key_for_elementVKiMM2I
};

_KLsimple_methodGVKe Kfind_key_for_elementVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K349,
  &Kfind_key_for_elementVKiMM3I
};

static _KLpairGVKd K344 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_key_for_elementVKiMM0,
  &K345
};

static _KLpairGVKd K345 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_key_for_elementVKiMM1,
  &K346
};

static _KLpairGVKd K346 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_key_for_elementVKiMM2,
  &K347
};

static _KLpairGVKd K347 = {
  &KLpairGVKdW /* wrapper */,
  &Kfind_key_for_elementVKiMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K348 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "find-key-for-element"
};

static _KLsignatureGVKe K349 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K350
};

static _KLsimple_object_vectorGVKd_2 K350 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLfinite_rangeGVKi
};

static _KLsignatureGVKe K351 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K352
};

static _KLsimple_object_vectorGVKd_2 K352 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLinfinite_rangeGVKi
};

static _KLsignatureGVKe K353 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K354
};

static _KLsimple_object_vectorGVKd_2 K354 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLconstant_rangeGVKi
};

static _KLsignatureGVKe K355 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K356
};

static _KLsimple_object_vectorGVKd_2 K356 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLempty_rangeGVKi
};

static _KLkeyword_signatureAvaluesGVKi K357 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 38011913,
  &K358,
  &K311,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K358 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLnumberGVKd,
  &KLrangeGVKd
};

static _KLbyte_stringGVKd_47 K359 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "Cannot iterate backwards over an infinite range"
};

_KLsimple_methodGVKe Kconstant_range_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K368,
  &Kconstant_range_current_elementVKiI
};

_KLsimple_methodGVKe Krange_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K365,
  &Krange_current_element_setterVKiI
};

static _KLbyte_stringGVKd_21 K364 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "range %= is immutable"
};

static _KLsignatureAvaluesGVKi K365 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K366,
  &K367
};

static _KLsimple_object_vectorGVKd_3 K366 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLrangeGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K367 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbottomGVKe
};

static _KLsignatureGVKe K368 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K325
};

static _KLsignatureAvaluesGVKi K369 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K203,
  &K370
};

static _KLsimple_object_vectorGVKd_8 K370 = {
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

_KLsimple_methodGVKe Kdecreasing_range_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K382,
  &Kdecreasing_range_finished_stateQVKiI
};

_KLsimple_methodGVKe Kincreasing_range_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K382,
  &Kincreasing_range_finished_stateQVKiI
};

_KLsimple_methodGVKe Krange_previous_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K381,
  &Krange_previous_stateVKiI
};

_KLsimple_methodGVKe Krange_current_keyVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K368,
  &Krange_current_keyVKiI
};

_KLsimple_methodGVKe Krange_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K368,
  &Krange_current_elementVKiI
};

static _KLsignatureAvaluesGVKi K381 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K325,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K382 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K383,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K383 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLrangeGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K384 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K173,
  &K370
};

static _KLsignatureAvaluesGVKi K385 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K228,
  &K370
};

static _KLsignatureAvaluesGVKi K386 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &K317,
  &K370
};

static _KLkeyword_signatureAvaluesGVKi K387 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K388,
  &K328,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K388 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfinite_rangeGVKi,
  &KLnumberGVKd
};

static _KLkeyword_signatureAvaluesGVKi K389 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K390,
  &K328,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K390 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLconstant_rangeGVKi,
  &KLnumberGVKd
};

static _KLbyte_stringGVKd_46 K391 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "You can\'t remove %= from the infinite range %="
};

_KLclassGVKd KLincompatible_range_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K400,
  &K394,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLincompatible_range_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K394,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K394 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLincompatible_range_errorGVKi,
  &KLincompatible_range_errorGVKiW,
  &KPfalseVKi,
  &K231,
  (D) 6937,
  &KLincompatible_range_errorGZ32ZconstructorVKiMM0,
  &K234,
  &K397,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K231,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLincompatible_range_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K398,
  &key_mep_2,
  &KLincompatible_range_errorGZ32ZconstructorVKiMM0I,
  &K237
};

static _KLsimple_object_vectorGVKd_7 K397 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLincompatible_range_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K398 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K238,
  &KDsignature_LobjectG_typesVKi,
  &K399
};

static _KLsimple_object_vectorGVKd_1 K399 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLincompatible_range_errorGVKi
};

static _KLbyte_stringGVKd_26 K400 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "<incompatible-range-error>"
};

static _KLkeyword_signatureAvaluesGVKi K401 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K402,
  &K328,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K402 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLinfinite_rangeGVKi,
  &KLnumberGVKd
};

static _KLkeyword_signatureAvaluesGVKi K403 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K404,
  &K328,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K404 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLempty_rangeGVKi,
  &KLnumberGVKd
};

static _KLkeyword_signatureAvaluesGVKi K405 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K406,
  &K328,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K406 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLrangeGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K407 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K406,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsignatureAvaluesGVKi K408 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K404,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_41 K409 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "You can\'t add %= to the infinite range %="
};

static _KLsignatureAvaluesGVKi K410 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K402,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsignatureAvaluesGVKi K411 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K390,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsignatureAvaluesGVKi K412 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K388,
  &KDsignature_LsequenceG_typesVKi
};

static _KLbyte_stringGVKd_33 K413 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Cannot map over an infinite range"
};

static _KLsignatureAvaluesGVKi K414 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K415,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K415 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmutable_collection_typeGVKi,
  &KLfunctionGVKd,
  &KLinfinite_rangeGVKi
};

static _KLsignatureAvaluesGVKi K416 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K417,
  &KDsignature_LvectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K417 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K418,
  &KLfunctionGVKd,
  &KLinfinite_rangeGVKi
};

static _KLsingletonGVKd K418 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLlistGVKd
};

_KLsimple_methodGVKe Krange_errorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K424,
  &Krange_errorVKiI
};

_KLsimple_methodGVKe Kempty_range_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K382,
  &Kempty_range_finished_stateQVKiI
};

static _KLbyte_stringGVKd_45 K423 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "RANGE iteration protocol -- illegal operation"
};

static _KLsignatureAvaluesGVKi K424 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604033,
  &KPempty_vectorVKi,
  &K367
};

_KLsimple_methodGVKe Krange_next_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K381,
  &Krange_next_stateVKiI
};

_KLsimple_methodGVKe Kinfinite_range_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K382,
  &Kinfinite_range_finished_stateQVKiI
};

static _KLkeyword_signatureGVKe K429 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K431,
  &K320,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K430 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_2 K431 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfinite_rangeGVKi,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K432 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K433,
  &K320,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K433 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLinfinite_rangeGVKi,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K434 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K435,
  &K320,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K435 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLconstant_rangeGVKi,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K436 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K437,
  &K320,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K437 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLempty_rangeGVKi,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K438 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LrangeG_typesVKi,
  &K439
};

static _KLsimple_object_vectorGVKd_1 K439 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K418
};

static _KLsignatureAvaluesGVKi K440 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LrangeG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLsignatureAvaluesGVKi K441 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K228,
  &K442
};

static _KLsimple_object_vectorGVKd_1 K442 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K201
};

static _KLsignatureAvaluesGVKi K443 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K317,
  &K444
};

static _KLsimple_object_vectorGVKd_1 K444 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K445
};

static _KLsingletonGVKd K445 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  (D) 1
};

static _KLsignatureAvaluesGVKi K446 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K317,
  &K447
};

static _KLsimple_object_vectorGVKd_1 K447 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K448
};

static _KLsingletonGVKd K448 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPtrueVKi
};

static _KLsignatureAvaluesGVKi K449 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LrangeG_typesVKi,
  &K442
};

static _KLsignatureAvaluesGVKi K450 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K291,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K451 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K285,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K452 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K302,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K453 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K308,
  &K447
};

static _KLsignatureAvaluesGVKi K454 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LrangeG_typesVKi,
  &K442
};

static _KLimplementation_classGVKe K455 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 461111305,
  &KLrangeGVKd,
  &KLrangeGVKdW,
  &KPfalseVKi,
  &K221,
  (D) 6889,
  &Kdefault_class_constructorVKi,
  &K456,
  &K457,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K468,
  &KPempty_vectorVKi,
  &K221,
  &K221,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K456 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_6 K457 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLrangeGVKd,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_7 K458 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "<range>"
};

_KLkeyword_methodGVKe KrangeVKd = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_7,
  &K460,
  &key_mep_7,
  &KrangeVKdI,
  &K461
};

static _KLkeyword_signatureAvaluesGVKi K460 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 34866177,
  &KPempty_vectorVKi,
  &K208,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LrangeG_typesVKi
};

static _KLsimple_object_vectorGVKd_12 K461 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJfrom_,
  &KPfalseVKi,
  &KJby_,
  &KPfalseVKi,
  &KJto_,
  &KPfalseVKi,
  &KJbelow_,
  &KPfalseVKi,
  &KJabove_,
  &KPfalseVKi,
  &KJsize_,
  &KPfalseVKi
};

static _KLimplementation_classGVKe K462 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLempty_rangeGVKi,
  &KLempty_rangeGVKiW,
  &KPfalseVKi,
  &K221,
  (D) 6897,
  &KLempty_rangeGZ32ZconstructorVKiMM0,
  &K165,
  &K465,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K221,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLempty_rangeGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K466,
  &key_mep_2,
  &KLempty_rangeGZ32ZconstructorVKiMM0I,
  &K226
};

static _KLsimple_object_vectorGVKd_6 K465 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLsequenceGVKd,
  &KLrangeGVKd,
  &KLempty_rangeGVKi
};

static _KLkeyword_signatureAvaluesGVKi K466 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K227,
  &KDsignature_LobjectG_typesVKi,
  &K317
};

static _KLbyte_stringGVKd_13 K467 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "<empty-range>"
};

static _KLpairGVKd K468 = {
  &KLpairGVKdW /* wrapper */,
  &KLinfinite_rangeGVKi,
  &K469
};

static _KLpairGVKd K469 = {
  &KLpairGVKdW /* wrapper */,
  &KLfinite_rangeGVKi,
  &K470
};

static _KLpairGVKd K470 = {
  &KLpairGVKdW /* wrapper */,
  &KLconstant_rangeGVKi,
  &K471
};

static _KLpairGVKd K471 = {
  &KLpairGVKdW /* wrapper */,
  &KLempty_rangeGVKi,
  &KPempty_listVKi
};

/* Code */

D KEVKdMM29I (D range_1_, D range_2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:247
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:249
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:247
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM30I (D range_1_, D range_2_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:252
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:254
  T3_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:252
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM31I (D range_1_, D range_2_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:257
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:259
  T7 = SLOT_VALUE_INITD(range_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:259
  T8 = SLOT_VALUE_INITD(range_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:259
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(T7, T8);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:259
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:260
    T9 = SLOT_VALUE_INITD(range_1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:260
    T10 = SLOT_VALUE_INITD(range_2_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:260
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T4_0 = CONGRUENT_CALL2(T9, T10);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:259
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:259
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:257
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM32I (D range_1_, D range_2_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:263
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:265
  T7 = SLOT_VALUE_INITD(range_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:265
  T8 = SLOT_VALUE_INITD(range_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:265
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(T7, T8);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:265
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:266
    T9 = SLOT_VALUE_INITD(range_1_, 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:266
    T10 = SLOT_VALUE_INITD(range_2_, 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:266
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T4_0 = CONGRUENT_CALL2(T9, T10);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:265
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:265
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:263
  MV_SET_COUNT(1);
  return(T6_0);
}

D KEVKdMM33I (D range_1_, D range_2_) {
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:269
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
  T8 = SLOT_VALUE_INITD(range_1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
  T9 = SLOT_VALUE_INITD(range_2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(T8, T9);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:272
    T10 = SLOT_VALUE_INITD(range_1_, 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:272
    T11 = SLOT_VALUE_INITD(range_2_, 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:272
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T4 = CONGRUENT_CALL2(T10, T11);
    T5 = T4;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:273
    T12 = SLOT_VALUE_INITD(range_1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:273
    T13 = SLOT_VALUE_INITD(range_2_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:273
    T14 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:273
    T15 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:273
    T16 = primitive_machine_word_equalQ(T14,T15);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:273
    T17_0 = T16;
    T7_0 = T17_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
    T6_0 = &KPfalseVKi;
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:271
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:269
  MV_SET_COUNT(1);
  return(T7_0);
}

D KemptyQVKdMM15I (D range_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:124
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:122
  MV_SET_COUNT(1);
  return(T2_0);
}

D KemptyQVKdMM16I (D range_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:127
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:129
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:127
  MV_SET_COUNT(1);
  return(T2_0);
}

D KsizeVKdMM36I (D range_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:135
  T2_0 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:133
  MV_SET_COUNT(1);
  return(T2_0);
}

D KsizeVKdMM37I (D range_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:140
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:138
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kshallow_copyVKdMM7I (D range_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8T, T8;
  D list_T, list_;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  CONGRUENT_CALL_PROLOG(&Kbackward_iteration_protocolVKd, 1);
  T2 = CONGRUENT_CALL1(range_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  T3 = T2;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  T4 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  T5 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  T6 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  T7 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  T8T = T3;
  list_T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
    T8 = T8T;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
    list_ = list_T;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
    T10 = CALL3(T6, range_, T8, T4);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
      T11 = CALL2(T7, range_, T8);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
      T12 = CALL2(T5, range_, T8);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:115
      T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:115
      SLOT_VALUE_SETTER(T11, T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:115
      SLOT_VALUE_SETTER(list_, T14, 1);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
      T8T = T12;
      list_T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:117
    T13_0 = list_;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:112
  MV_SET_COUNT(1);
  return(T13_0);
}

D Ktype_for_copyVKdMM20I (D range_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:109
  T2_0 = &KLlistGVKd;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:107
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM28I (D range_, D key_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:144
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:147
  T8 = primitive_idQ(default_,&Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:147
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:148
    T5_0 = Kelement_range_errorVKeI(range_, key_);
    T7_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:150
    T6_0 = default_;
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:144
  MV_SET_COUNT(1);
  return(T7_0);
}

D KelementVKdMM29I (D range_, D key_, D Urest_, D default_) {
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:154
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
  T11 = SLOT_VALUE_INITD(range_, 2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
  T12 = primitive_not(T11);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
    T13 = SLOT_VALUE_INITD(range_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T5 = CONGRUENT_CALL2(key_, T13);
    T6 = T5;
  } else {
    T6 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:158
    T14 = SLOT_VALUE_INITD(range_, 0);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:158
    T15_0 = T14;
    T10_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:160
    T16 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:160
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:161
      T7_0 = Kelement_range_errorVKeI(range_, key_);
      T9_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:163
      T8_0 = default_;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:160
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:157
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:154
  MV_SET_COUNT(1);
  return(T10_0);
}

D KelementVKdMM30I (D range_, D key_, D Urest_, D default_) {
  D T5;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:168
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:171
  T7 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:171
  T8 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:171
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  T5 = CONGRUENT_CALL2(key_, T8);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:171
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T6_0 = CONGRUENT_CALL2(T7, T5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:168
  MV_SET_COUNT(1);
  return(T6_0);
}

D KelementVKdMM31I (D range_, D key_, D Urest_, D default_) {
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
  T12 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
  T13 = primitive_machine_word_less_thanQ(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
  if (T13 != &KPfalseVKi) {
    T5 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
    T14 = SLOT_VALUE_INITD(range_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
    T15 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
    T16 = primitive_machine_word_less_thanQ(T12,T15);
    T5 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:178
    T17 = SLOT_VALUE_INITD(range_, 0);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:178
    T18 = SLOT_VALUE_INITD(range_, 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:178
    CONGRUENT_CALL_PROLOG(&KTVKd, 2);
    T6 = CONGRUENT_CALL2(key_, T18);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:178
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T7_0 = CONGRUENT_CALL2(T17, T6);
    T11_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:180
    T19 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:180
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:181
      T8_0 = Kelement_range_errorVKeI(range_, key_);
      T10_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:183
      T9_0 = default_;
      T10_0 = T9_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:180
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:177
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:174
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kforward_iteration_protocolVKdMM30I (D range_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T5_1;
  D T5_2;
  D T5_3;
  D T5_4;
  D T5_5;
  D T5_6;
  D T5_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:821
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:828
  T3 = SLOT_VALUE_INITD(range_, 2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:830
  T4 = SLOT_VALUE_INITD(range_, 2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:830
  if (T4 != &KPfalseVKi) {
    T2 = &Ksequence_finished_stateQVKe;
  } else {
    T2 = &Kinfinite_range_finished_stateQVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:830
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:827
  T5_0 = (D) 1;
  T5_1 = T3;
  T5_2 = &Ksequence_next_stateVKe;
  T5_3 = T2;
  T5_4 = &Ksequence_current_keyVKe;
  T5_5 = &Kconstant_range_current_elementVKi;
  T5_6 = &Krange_current_element_setterVKi;
  T5_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:821
  MV_SET_ELT(1, T5_1);
  MV_SET_ELT(2, T5_2);
  MV_SET_ELT(3, T5_3);
  MV_SET_ELT(4, T5_4);
  MV_SET_ELT(5, T5_5);
  MV_SET_ELT(6, T5_6);
  MV_SET_ELT(7, T5_7);
  MV_SET_COUNT(8);
  return(T5_0);
}

D Kforward_iteration_protocolVKdMM29I (D range_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T7_1;
  D T7_2;
  D T7_3;
  D T7_4;
  D T7_5;
  D T7_6;
  D T7_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:781
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:787
  T4 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:788
  T5 = KlastVKdMM4I(range_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:790
  T6 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:790
  CONGRUENT_CALL_PROLOG(&KpositiveQVKd, 1);
  T2 = CONGRUENT_CALL1(T6);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:790
  if (T2 != &KPfalseVKi) {
    T3 = &Kincreasing_range_finished_stateQVKi;
  } else {
    T3 = &Kdecreasing_range_finished_stateQVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:790
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:787
  T7_0 = T4;
  T7_1 = T5;
  T7_2 = &Krange_next_stateVKi;
  T7_3 = T3;
  T7_4 = &Krange_current_keyVKi;
  T7_5 = &Krange_current_elementVKi;
  T7_6 = &Krange_current_element_setterVKi;
  T7_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:781
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

D Kforward_iteration_protocolVKdMM28I (D range_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;
  D T3_3;
  D T3_4;
  D T3_5;
  D T3_6;
  D T3_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:755
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:761
  T2 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:761
  T3_0 = T2;
  T3_1 = &KPfalseVKi;
  T3_2 = &Krange_next_stateVKi;
  T3_3 = &Kinfinite_range_finished_stateQVKi;
  T3_4 = &Krange_current_keyVKi;
  T3_5 = &Krange_current_elementVKi;
  T3_6 = &Krange_current_element_setterVKi;
  T3_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:755
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

D Kforward_iteration_protocolVKdMM27I (D range_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:730
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:736
  T2_0 = &KPfalseVKi;
  T2_1 = &KPfalseVKi;
  T2_2 = &Krange_errorVKi;
  T2_3 = &Kempty_range_finished_stateQVKi;
  T2_4 = &Krange_errorVKi;
  T2_5 = &Krange_errorVKi;
  T2_6 = &Krange_current_element_setterVKi;
  T2_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:730
  MV_SET_ELT(1, T2_1);
  MV_SET_ELT(2, T2_2);
  MV_SET_ELT(3, T2_3);
  MV_SET_ELT(4, T2_4);
  MV_SET_ELT(5, T2_5);
  MV_SET_ELT(6, T2_6);
  MV_SET_ELT(7, T2_7);
  MV_SET_COUNT(8);
  return(T2_0);
}

D Kmap_as_oneVKiMM15I (D type_, D function_, D collection_) {
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:878
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K413;
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T5);
  T6_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmap_as_oneVKiMM14I (D type_, D function_, D collection_) {
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:870
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:875
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K413;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:875
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:875
  T6_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:870
  MV_SET_COUNT(1);
  return(T6_0);
}

D KaddXVKdMM13I (D range_, D elt_) {
  D T3;
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14_0;
  D T15;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;
  D T32;
  D T33;
  D T34;
  DWORD T35;
  D T36;
  D T37;
  _KLsimple_object_vectorGVKd_6 T38 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T39;
  DWORD T40;
  DWORD T41;
  D T42;
  D T43;
  D T44_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:333
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:336
  T20 = KlastVKdMM4I(range_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:336
  T21 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:336
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T3 = CONGRUENT_CALL2(T20, T21);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:336
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(elt_, T3);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:335
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:337
    T22 = SLOT_VALUE_INITD(range_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:337
    T23 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:337
    T24 = primitive_machine_word_add_signal_overflow(T23,4);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:337
    T25 = primitive_cast_raw_as_integer(T24);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:337
    SLOT_VALUE_SETTER(T25, range_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:338
    T5_0 = range_;
    T19_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:339
    T26 = SLOT_VALUE_INITD(range_, 0);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:339
    T27 = SLOT_VALUE_INITD(range_, 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:339
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T6 = CONGRUENT_CALL2(T26, T27);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:339
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T7 = CONGRUENT_CALL2(elt_, T6);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:335
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:340
      T28 = SLOT_VALUE_INITD(range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:340
      T29 = primitive_cast_integer_as_raw(T28);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:340
      T30 = primitive_machine_word_add_signal_overflow(T29,4);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:340
      T31 = primitive_cast_raw_as_integer(T30);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:340
      SLOT_VALUE_SETTER(T31, range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:341
      T32 = SLOT_VALUE_INITD(range_, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:341
      T33 = SLOT_VALUE_INITD(range_, 1);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:341
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T8 = CONGRUENT_CALL2(T32, T33);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:341
      CALL2(&Krange_from_setterVKi, T8, range_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:342
      T9_0 = range_;
      T18_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:343
      T34 = SLOT_VALUE_INITD(range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:343
      T35 = primitive_cast_integer_as_raw(T34);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:343
      T36 = primitive_machine_word_equalQ(T35,5);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:335
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:344
        T37 = SLOT_VALUE_INITD(range_, 0);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:344
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T10 = CONGRUENT_CALL2(elt_, T37);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:344
        if (T10 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:345
          T38.vector_element_[0] = &KJfrom_;
          T38.vector_element_[1] = elt_;
          T38.vector_element_[2] = &KJby_;
          T38.vector_element_[3] = (D) 1;
          T38.vector_element_[4] = &KJsize_;
          T38.vector_element_[5] = (D) 9;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:345
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T11_0 = CONGRUENT_CALL2(&KLrangeGVKd, &T38);
          T14_0 = T11_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:347
          T39 = SLOT_VALUE_INITD(range_, 2);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:347
          T40 = primitive_cast_integer_as_raw(T39);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:347
          T41 = primitive_machine_word_add_signal_overflow(T40,4);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:347
          T42 = primitive_cast_raw_as_integer(T41);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:347
          SLOT_VALUE_SETTER(T42, range_, 2);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:348
          T43 = SLOT_VALUE_INITD(range_, 0);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:348
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          T12 = CONGRUENT_CALL2(elt_, T43);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:348
          CALL2(&Krange_by_setterVKi, T12, range_);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:349
          T13_0 = range_;
          T14_0 = T13_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:344
        T17_0 = T14_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:352
        CONGRUENT_CALL_PROLOG(&Kshallow_copyVKd, 1);
        T15 = CONGRUENT_CALL1(range_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:352
        T16_0 = CALL2(&KaddXVKd, T15, elt_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:352
        T44_0 = T16_0;
        T17_0 = T44_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:335
      T18_0 = T17_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:335
    T19_0 = T18_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:335
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:333
  MV_SET_COUNT(1);
  return(T19_0);
}

D KaddXVKdMM12I (D range_, D elt_) {
  D T3;
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8_0;
  D T9;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_6 T19 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:317
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:320
  T13 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:320
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(elt_, T13);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:319
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:321
    T14 = SLOT_VALUE_INITD(range_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:321
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:322
      T15 = SLOT_VALUE_INITD(range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:322
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T4 = CONGRUENT_CALL2(T15, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:322
      CONGRUENT_CALL_PROLOG(&Ksize_setterVKd, 2);
      CONGRUENT_CALL2(T4, range_);
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:321
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:324
    T5_0 = range_;
    T12_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:325
    T16 = SLOT_VALUE_INITD(range_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:325
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T6 = CONGRUENT_CALL2(T16, (D) 5);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:319
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:326
      T17 = SLOT_VALUE_INITD(range_, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:327
      T18 = SLOT_VALUE_INITD(range_, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:327
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T7 = CONGRUENT_CALL2(elt_, T18);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:326
      T19.vector_element_[0] = &KJfrom_;
      T19.vector_element_[1] = T17;
      T19.vector_element_[2] = &KJby_;
      T19.vector_element_[3] = T7;
      T19.vector_element_[4] = &KJsize_;
      T19.vector_element_[5] = (D) 9;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:326
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T8_0 = CONGRUENT_CALL2(&KLrangeGVKd, &T19);
      T11_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:329
      CONGRUENT_CALL_PROLOG(&Kshallow_copyVKd, 1);
      T9 = CONGRUENT_CALL1(range_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:329
      T10_0 = CALL2(&KaddXVKd, T9, elt_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:329
      T20_0 = T10_0;
      T11_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:319
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:319
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:317
  MV_SET_COUNT(1);
  return(T12_0);
}

D KaddXVKdMM11I (D range_, D elt_) {
  D prev_;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_2 T10 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:305
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:307
  T8 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:307
  T9 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:307
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  prev_ = CONGRUENT_CALL2(T8, T9);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:308
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(elt_, prev_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:308
  if (T4 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:311
    T10.vector_element_[0] = elt_;
    T10.vector_element_[1] = range_;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:311
    T5 = KlistVKdI(&T10);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:309
    T11.vector_element_[0] = &KJformat_string_;
    T11.vector_element_[1] = &K409;
    T11.vector_element_[2] = &KJformat_arguments_;
    T11.vector_element_[3] = T5;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:309
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLincompatible_range_errorGVKi, &T11);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:309
    KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:308
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:313
  CALL2(&Krange_from_setterVKi, prev_, range_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:314
  T7_0 = range_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:305
  MV_SET_COUNT(1);
  return(T7_0);
}

D KaddXVKdMM10I (D range_, D elt_) {
  D T3_0;
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:300
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:302
  T4.vector_element_[0] = &KJfrom_;
  T4.vector_element_[1] = elt_;
  T4.vector_element_[2] = &KJsize_;
  T4.vector_element_[3] = (D) 5;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:302
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLrangeGVKd, &T4);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:300
  MV_SET_COUNT(1);
  return(T3_0);
}

D KaddXVKdMM9I (D range_, D elt_) {
  D T3;
  D T4_0;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:290
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:292
  T5.vector_element_[0] = &KJvalue_;
  T5.vector_element_[1] = elt_;
  T5.vector_element_[2] = &KJtype_;
  T5.vector_element_[3] = &KLnumberGVKd;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:292
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:292
  CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
  T4_0 = CONGRUENT_CALL2(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:290
  MV_SET_COUNT(1);
  return(T4_0);
}

D KremoveXVKdMM9I (D range_, D elt_, D Urest_, D test_, D count_) {
  D T6;
  D T7_0;
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:357
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:359
  T8.vector_element_[0] = &KJvalue_;
  T8.vector_element_[1] = elt_;
  T8.vector_element_[2] = &KJtype_;
  T8.vector_element_[3] = &KLnumberGVKd;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:359
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T8);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:359
  CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
  T7_0 = CONGRUENT_CALL2(T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:357
  MV_SET_COUNT(1);
  return(T7_0);
}

D KremoveXVKdMM10I (D range_, D elt_, D Urest_, D test_, D count_) {
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:367
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:369
  T6_0 = range_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:367
  MV_SET_COUNT(1);
  return(T6_0);
}

D KremoveXVKdMM11I (D range_, D elt_, D Urest_, D test_, D count_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D next_;
  D T11_0;
  D T12;
  _KLsimple_object_vectorGVKd_2 T13 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T14 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T15;
  D T16_0;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:372
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:375
  T12 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:375
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T6 = CONGRUENT_CALL2(elt_, T12);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:375
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:378
    T13.vector_element_[0] = elt_;
    T13.vector_element_[1] = range_;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:378
    T7 = KlistVKdI(&T13);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:376
    T14.vector_element_[0] = &KJformat_string_;
    T14.vector_element_[1] = &K391;
    T14.vector_element_[2] = &KJformat_arguments_;
    T14.vector_element_[3] = T7;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:376
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(&KLincompatible_range_errorGVKi, &T14);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:376
    KerrorVKdMM0I(T8, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:375
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:380
  T15 = primitive_not(count_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:380
  if (count_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:380
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T16_0 = CONGRUENT_CALL2((D) 1, count_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:380
    T17 = T16_0;
    T9 = T17;
  } else {
    T9 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:380
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:380
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:381
    T18 = SLOT_VALUE_INITD(range_, 0);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:381
    T19 = SLOT_VALUE_INITD(range_, 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:381
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    next_ = CONGRUENT_CALL2(T18, T19);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:382
    CALL2(&Krange_from_setterVKi, next_, range_);
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:380
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:384
  T11_0 = range_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:372
  MV_SET_COUNT(1);
  return(T11_0);
}

D KremoveXVKdMM12I (D range_, D elt_, D Urest_, D test_, D count_) {
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11_0;
  D T12;
  D T13;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20_0;
  D T21;
  D T22_0;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:387
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:390
  T21 = primitive_not(count_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:390
  if (count_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:390
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T22_0 = CONGRUENT_CALL2((D) 1, count_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:390
    T23 = T22_0;
    T6 = T23;
  } else {
    T6 = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:390
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:390
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:392
    T24 = SLOT_VALUE_INITD(range_, 0);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:392
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T7 = CONGRUENT_CALL2(elt_, T24);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:391
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:393
      T25 = SLOT_VALUE_INITD(range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:393
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:394
        T26 = SLOT_VALUE_INITD(range_, 2);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:394
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T8 = CONGRUENT_CALL2(T26, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:394
        CONGRUENT_CALL_PROLOG(&Ksize_setterVKd, 2);
        CONGRUENT_CALL2(T8, range_);
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:393
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:396
      T9_0 = range_;
      T18_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:397
      T27 = SLOT_VALUE_INITD(range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:397
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T10 = CONGRUENT_CALL2(T27, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:391
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:398
        T11_0 = Dempty_rangeVKi;
        T17_0 = T11_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:400
        CONGRUENT_CALL_PROLOG(&KmemberQVKd, 3);
        T12 = CONGRUENT_CALL3(elt_, range_, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:400
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:401
          CONGRUENT_CALL_PROLOG(&Kshallow_copyVKd, 1);
          T13 = CONGRUENT_CALL1(range_);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:401
          T14_0 = CALL6(&KremoveXVKd, T13, elt_, &KJtest_, test_, &KJcount_, count_);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:401
          T28_0 = T14_0;
          T16_0 = T28_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:403
          T15_0 = range_;
          T16_0 = T15_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:400
        T17_0 = T16_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:391
      T18_0 = T17_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:391
    T20_0 = T18_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:407
    T19_0 = range_;
    T20_0 = T19_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:390
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:387
  MV_SET_COUNT(1);
  return(T20_0);
}

D KremoveXVKdMM13I (D range_, D elt_, D Urest_, D test_, D count_) {
  D T6;
  D T7;
  D T8_0;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13;
  D T14_0;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20_0;
  D T21_0;
  D T22_0;
  D T23_0;
  D T24_0;
  D T25_0;
  D T26_0;
  D T27;
  D T28_0;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  DWORD T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  D T45;
  D T46_0;
  D T47;
  D T48_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:411
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:414
  T27 = primitive_not(count_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:414
  if (count_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:414
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T28_0 = CONGRUENT_CALL2((D) 1, count_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:414
    T29 = T28_0;
    T6 = T29;
  } else {
    T6 = T27;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:414
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:414
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:416
    T30 = KlastVKdMM4I(range_, &KPempty_vectorVKi, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:416
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T7 = CONGRUENT_CALL2(elt_, T30);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:415
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:417
      T31 = SLOT_VALUE_INITD(range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:417
      T32 = primitive_cast_integer_as_raw(T31);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:417
      T33 = primitive_machine_word_subtract_signal_overflow(T32,4);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:417
      T34 = primitive_cast_raw_as_integer(T33);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:417
      SLOT_VALUE_SETTER(T34, range_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:418
      T8_0 = range_;
      T24_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:419
      T35 = SLOT_VALUE_INITD(range_, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:419
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T9 = CONGRUENT_CALL2(elt_, T35);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:415
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:420
        T36 = SLOT_VALUE_INITD(range_, 2);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:420
        T37 = primitive_cast_integer_as_raw(T36);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:420
        T38 = primitive_machine_word_subtract_signal_overflow(T37,4);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:420
        T39 = primitive_cast_raw_as_integer(T38);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:420
        SLOT_VALUE_SETTER(T39, range_, 2);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:421
        T40 = SLOT_VALUE_INITD(range_, 0);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:421
        T41 = SLOT_VALUE_INITD(range_, 1);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:421
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T10 = CONGRUENT_CALL2(T40, T41);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:421
        CALL2(&Krange_from_setterVKi, T10, range_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:422
        T11_0 = range_;
        T23_0 = T11_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:423
        T42 = SLOT_VALUE_INITD(range_, 2);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:423
        T43 = primitive_cast_integer_as_raw(T42);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:423
        T44 = primitive_machine_word_equalQ(T43,5);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:423
        if (T44 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:423
          T45 = SLOT_VALUE_INITD(range_, 0);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:423
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T12 = CONGRUENT_CALL2(elt_, T45);
          T13 = T12;
        } else {
          T13 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:423
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:415
        if (T13 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:424
          T14_0 = Dempty_rangeVKi;
          T22_0 = T14_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
          if (count_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T46_0 = CONGRUENT_CALL2((D) 1, count_);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
            T47 = T46_0;
            T15 = T47;
          } else {
            T15 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
          if (T15 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
            CONGRUENT_CALL_PROLOG(&KmemberQVKd, 3);
            T16 = CONGRUENT_CALL3(elt_, range_, &KPempty_vectorVKi);
            T17 = T16;
          } else {
            T17 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
          if (T17 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:427
            CONGRUENT_CALL_PROLOG(&Kshallow_copyVKd, 1);
            T18 = CONGRUENT_CALL1(range_);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:427
            T19_0 = CALL6(&KremoveXVKd, T18, elt_, &KJtest_, test_, &KJcount_, count_);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:427
            T48_0 = T19_0;
            T21_0 = T48_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:429
            T20_0 = range_;
            T21_0 = T20_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:426
          T22_0 = T21_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:415
        T23_0 = T22_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:415
      T24_0 = T23_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:415
    T26_0 = T24_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:433
    T25_0 = range_;
    T26_0 = T25_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:414
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:411
  MV_SET_COUNT(1);
  return(T26_0);
}

D Kbackward_iteration_protocolVKdMM17I (D range_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:746
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:752
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T2_0 = CONGRUENT_CALL1(range_);
  T2_1 = MV_GET_ELT(1);
  T2_2 = MV_GET_ELT(2);
  T2_3 = MV_GET_ELT(3);
  T2_4 = MV_GET_ELT(4);
  T2_5 = MV_GET_ELT(5);
  T2_6 = MV_GET_ELT(6);
  T2_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:746
  MV_SET_ELT(1, T2_1);
  MV_SET_ELT(2, T2_2);
  MV_SET_ELT(3, T2_3);
  MV_SET_ELT(4, T2_4);
  MV_SET_ELT(5, T2_5);
  MV_SET_ELT(6, T2_6);
  MV_SET_ELT(7, T2_7);
  MV_SET_COUNT(8);
  return(T2_0);
}

D Kbackward_iteration_protocolVKdMM18I (D range_) {
  D T2;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T4_0;
  D T4_1;
  D T4_2;
  D T4_3;
  D T4_4;
  D T4_5;
  D T4_6;
  D T4_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:771
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:777
  T3.vector_element_[0] = &KJformat_string_;
  T3.vector_element_[1] = &K359;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:777
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T3);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:777
  T4_0 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  T4_1 = MV_GET_ELT(1);
  T4_2 = MV_GET_ELT(2);
  T4_3 = MV_GET_ELT(3);
  T4_4 = MV_GET_ELT(4);
  T4_5 = MV_GET_ELT(5);
  T4_6 = MV_GET_ELT(6);
  T4_7 = MV_GET_ELT(7);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:771
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

D Kbackward_iteration_protocolVKdMM19I (D range_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T7_1;
  D T7_2;
  D T7_3;
  D T7_4;
  D T7_5;
  D T7_6;
  D T7_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:801
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:807
  T4 = KlastVKdMM4I(range_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:808
  T5 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:810
  T6 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:810
  CONGRUENT_CALL_PROLOG(&KpositiveQVKd, 1);
  T2 = CONGRUENT_CALL1(T6);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:810
  if (T2 != &KPfalseVKi) {
    T3 = &Kdecreasing_range_finished_stateQVKi;
  } else {
    T3 = &Kincreasing_range_finished_stateQVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:810
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:807
  T7_0 = T4;
  T7_1 = T5;
  T7_2 = &Krange_previous_stateVKi;
  T7_3 = T3;
  T7_4 = &Krange_current_keyVKi;
  T7_5 = &Krange_current_elementVKi;
  T7_6 = &Krange_current_element_setterVKi;
  T7_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:801
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

D Kbackward_iteration_protocolVKdMM20I (D range_) {
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T6;
  D T7_0;
  D T7_1;
  D T7_2;
  D T7_3;
  D T7_4;
  D T7_5;
  D T7_6;
  D T7_7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:841
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:847
  T4 = SLOT_VALUE_INITD(range_, 2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:847
  if (T4 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:848
    T5.vector_element_[0] = &KJformat_string_;
    T5.vector_element_[1] = &K359;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:848
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T2 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T5);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:848
    KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:847
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:851
  T6 = SLOT_VALUE_INITD(range_, 2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:851
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T3 = CONGRUENT_CALL2(T6, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:851
  T7_0 = T3;
  T7_1 = (D) -3;
  T7_2 = &Ksequence_previous_stateVKe;
  T7_3 = &Ksequence_finished_stateQVKe;
  T7_4 = &Ksequence_current_keyVKe;
  T7_5 = &Kconstant_range_current_elementVKi;
  T7_6 = &Krange_current_element_setterVKi;
  T7_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:841
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

D KmemberQVKdMM4I (D value_, D range_, D Urest_, D test_) {
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
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:277
  T11 = primitive_copy_vector(Urest_);
  T10 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:280
  T12 = primitive_idQ(test_,&KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:280
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:281
    CONGRUENT_CALL_PROLOG(&Kfind_key_for_elementVKi, 2);
    T5 = CONGRUENT_CALL2(value_, range_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:281
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:281
      T6_0 = &KPtrueVKi;
      T8_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:281
      T7_0 = &KPfalseVKi;
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:281
    T9_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
    T15 = primitive_idQ(T10,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
      T18 = KerrorVKdMM1I(&K209, &KPempty_vectorVKi);
      T14 = T18;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
      T16 = SLOT_VALUE_INITD(T10, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
      T17 = SLOT_VALUE_INITD(T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
      MEP_CALL_PROLOG(T16, T17, 3);
      T13 = MEP_CALL3(T16, value_, range_, T11);
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
    T19_0 = T14;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:283
    T20_0 = T19_0;
    T9_0 = T20_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:280
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:277
  MV_SET_COUNT(1);
  return(T9_0);
}

D KrangeVKdI (D keys_, D from_, D by_, D to_, D below_, D above_, D size_) {
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:101
  T8_0 = APPLY2(&KmakeVKd, &KLrangeGVKd, keys_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:99
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kcopy_sequenceVKdMM7I (D range_, D Urest_, D start_, D endp_) {
  D T5;
  D T6;
  D endpF7;
  D from_;
  D T9;
  D T10;
  D T11;
  D T12;
  D new_end_;
  D T14;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18;
  D T19;
  D T20_0;
  D T21;
  _KLsimple_object_vectorGVKd_6 T22 = {&KLsimple_object_vectorGVKdW, (D) 25};
  _KLsimple_object_vectorGVKd_4 T23 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:443
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:443
  T18 = primitive_idQ(endp_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:443
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:444
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T5 = CONGRUENT_CALL1(range_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:443
    T6 = T5;
    endpF7 = T6;
  } else {
    endpF7 = endp_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:443
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:445
  CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
  from_ = CONGRUENT_CALL3(range_, start_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:446
  T19 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:447
  if (endpF7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T9 = CONGRUENT_CALL1(range_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T10 = CONGRUENT_CALL1(range_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T20_0 = CONGRUENT_CALL2(T10, endpF7);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
      T21 = T20_0;
      T11 = T21;
    } else {
      T11 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:449
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T12 = CONGRUENT_CALL1(range_);
      new_end_ = T12;
    } else {
      new_end_ = endpF7;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:448
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:453
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T14 = CONGRUENT_CALL2(new_end_, start_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:453
    T22.vector_element_[0] = &KJfrom_;
    T22.vector_element_[1] = from_;
    T22.vector_element_[2] = &KJby_;
    T22.vector_element_[3] = T19;
    T22.vector_element_[4] = &KJsize_;
    T22.vector_element_[5] = T14;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:453
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T15_0 = CONGRUENT_CALL2(&KLrangeGVKd, &T22);
    T17_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:455
    T23.vector_element_[0] = &KJfrom_;
    T23.vector_element_[1] = from_;
    T23.vector_element_[2] = &KJby_;
    T23.vector_element_[3] = T19;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:455
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T16_0 = CONGRUENT_CALL2(&KLrangeGVKd, &T23);
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:447
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:443
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kcopy_sequenceVKdMM6I (D range_, D Urest_, D start_, D endp_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:438
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:440
  T5_0 = Dempty_rangeVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:438
  MV_SET_COUNT(1);
  return(T5_0);
}

D KreverseVKdMM4I (D range_) {
  D T2;
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:634
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:636
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T2 = CONGRUENT_CALL2(range_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:636
  CONGRUENT_CALL_PROLOG(&KreverseXVKd, 1);
  T3_0 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:634
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:634
  MV_SET_COUNT(1);
  return(T4_0);
}

D KremoveVKdMM8I (D range_, D elt_, D Urest_, D test_, D count_) {
  D T6;
  D T7_0;
  D T8_0;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:362
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:364
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T6 = CONGRUENT_CALL2(range_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:364
  T9.vector_element_[0] = &KJtest_;
  T9.vector_element_[1] = test_;
  T9.vector_element_[2] = &KJcount_;
  T9.vector_element_[3] = count_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:364
  CONGRUENT_CALL_PROLOG(&KremoveXVKd, 3);
  T7_0 = CONGRUENT_CALL3(T6, elt_, &T9);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:362
  T8_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:362
  MV_SET_COUNT(1);
  return(T8_0);
}

D KaddVKdMM5I (D range_, D elt_) {
  D T3;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:295
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:297
  CONGRUENT_CALL_PROLOG(&Kcopy_sequenceVKd, 2);
  T3 = CONGRUENT_CALL2(range_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:297
  CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
  T4_0 = CONGRUENT_CALL2(T3, elt_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:295
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:295
  MV_SET_COUNT(1);
  return(T5_0);
}

D KlastVKdMM2I (D range_, D Urest_, D default_) {
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:189
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:191
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K322;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:191
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:191
  T6_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:189
  MV_SET_COUNT(1);
  return(T6_0);
}

D KlastVKdMM3I (D range_, D Urest_, D default_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:195
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:197
  T4 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:197
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:195
  MV_SET_COUNT(1);
  return(T5_0);
}

D KlastVKdMM4I (D range_, D Urest_, D default_) {
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:200
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  T6 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  T7 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  T8 = SLOT_VALUE_INITD(range_, 2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  T10 = primitive_machine_word_subtract_signal_overflow(T9,4);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  T4 = CONGRUENT_CALL2(T7, T11);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:202
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T5_0 = CONGRUENT_CALL2(T6, T4);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:200
  MV_SET_COUNT(1);
  return(T5_0);
}

D KreverseXVKdMM4I (D range_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:639
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:641
  T2_0 = Dempty_rangeVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:639
  MV_SET_COUNT(1);
  return(T2_0);
}

D KreverseXVKdMM5I (D range_) {
  D T2;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:644
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:646
  T3.vector_element_[0] = &KJformat_string_;
  T3.vector_element_[1] = &K313;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:646
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T3);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:646
  T4_0 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:644
  MV_SET_COUNT(1);
  return(T4_0);
}

D KreverseXVKdMM6I (D range_) {
  D T2;
  D T3_0;
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:650
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:652
  T4 = SLOT_VALUE_INITD(range_, 2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:652
  if (T4 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:653
    T5.vector_element_[0] = &KJformat_string_;
    T5.vector_element_[1] = &K313;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:653
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T2 = CONGRUENT_CALL2(&KLinfinite_range_errorGVKi, &T5);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:653
    KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:652
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:656
  T3_0 = range_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:650
  MV_SET_COUNT(1);
  return(T3_0);
}

D KreverseXVKdMM7I (D range_) {
  D T2;
  D T3_0;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:659
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:661
  T4 = KlastVKdMM4I(range_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:661
  CALL2(&Krange_from_setterVKi, T4, range_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:662
  T5 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:662
  CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
  T2 = CONGRUENT_CALL1(T5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:662
  CALL2(&Krange_by_setterVKi, T2, range_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:663
  T3_0 = range_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:659
  MV_SET_COUNT(1);
  return(T3_0);
}

D KintersectionVKdMM1I (D range_1_, D range_2_, D Urest_, D test_) {
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
  D T15;
  D T16_0;
  D T17_0;
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:623
  T8 = primitive_copy_vector(Urest_);
  T7 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:626
  T9 = primitive_idQ(test_,&KEEVKd);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:626
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:627
    CONGRUENT_CALL_PROLOG(&KidQ_intersectionVKi, 2);
    T5_0 = CONGRUENT_CALL2(range_1_, range_2_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:627
    T17_0 = T5_0;
    T6_0 = T17_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
    T12 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
      T15 = KerrorVKdMM1I(&K209, &KPempty_vectorVKi);
      T11 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
      T13 = SLOT_VALUE_INITD(T7, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
      T14 = SLOT_VALUE_INITD(T7, 1);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
      MEP_CALL_PROLOG(T13, T14, 3);
      T10 = MEP_CALL3(T13, range_1_, range_2_, T8);
      T11 = T10;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
    T16_0 = T11;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:629
    T18_0 = T16_0;
    T6_0 = T18_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:626
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:623
  MV_SET_COUNT(1);
  return(T6_0);
}

D KlimitedVKdMM2I (D class_, D Urest_, D of_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:862
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:864
  T4_0 = class_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:862
  MV_SET_COUNT(1);
  return(T4_0);
}

D KmakeVKdMM41I (D class_, D Urest_, D password_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:41
  T7 = primitive_copy_vector(Urest_);
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:43
  T8 = primitive_idQ(password_,Dempty_range_passwordVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:43
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
    T11 = primitive_idQ(T6,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
      T14 = KerrorVKdMM1I(&K209, &KPempty_vectorVKi);
      T10 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
      T12 = SLOT_VALUE_INITD(T6, 0);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
      T13 = SLOT_VALUE_INITD(T6, 1);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
      MEP_CALL_PROLOG(T12, T13, 2);
      T9 = MEP_CALL2(T12, class_, T7);
      T10 = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
    T15_0 = T10;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:44
    T16_0 = T15_0;
    T5_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:46
    T4_0 = Dempty_rangeVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:43
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:41
  MV_SET_COUNT(1);
  return(T5_0);
}

D KmakeVKdMM42I (D class_, D Urest_, D from_, D by_, D to_, D below_, D above_, D size_) {
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T15_0;
  D T16_0;
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
  D T27_0;
  D T28;
  D T29;
  D new_to_;
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
  D T41_0;
  D T42_0;
  D T43_0;
  D T44_0;
  D T45_0;
  D toF46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D sizeF56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65_0;
  D T66;
  D T67;
  _KLsimple_object_vectorGVKd_6 T68 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T69_0;
  D T70;
  D T71;
  D T72;
  D T73_0;
  D T74;
  D T75;
  _KLsimple_object_vectorGVKd_4 T76 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T77;
  _KLsimple_object_vectorGVKd_6 T78 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:50
  sizeF56 = size_;
  toF46 = to_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:55
  CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
  T9 = CONGRUENT_CALL1(by_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:55
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
    T64 = primitive_not(above_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
    if (above_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T65_0 = CONGRUENT_CALL2(above_, from_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
      T66 = T65_0;
      T10 = T66;
    } else {
      T10 = T64;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
      T67 = primitive_not(below_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
      if (below_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T11 = CONGRUENT_CALL2(from_, below_);
        T12 = T11;
      } else {
        T12 = T67;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
      T13 = T12;
    } else {
      T13 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:57
      T63 = sizeF56;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:57
      T68.vector_element_[0] = &KJfrom_;
      T68.vector_element_[1] = from_;
      T68.vector_element_[2] = &KJby_;
      T68.vector_element_[3] = (D) 1;
      T68.vector_element_[4] = &KJsize_;
      T68.vector_element_[5] = T63;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:57
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T14_0 = CONGRUENT_CALL2(&KLconstant_rangeGVKi, &T68);
      T16_0 = T14_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:59
      T15_0 = Dempty_rangeVKi;
      T16_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:56
    T45_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:63
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T69_0 = CONGRUENT_CALL2((D) 1, by_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:63
    T70 = T69_0;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:63
    if (T70 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
      if (below_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
        T55 = toF46;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
        T71 = primitive_not(T55);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
        if (T55 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          T17 = CONGRUENT_CALL2(below_, by_);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
          T54 = toF46;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T18 = CONGRUENT_CALL2(T54, T17);
          T19 = T18;
        } else {
          T19 = T71;
        }
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
        T20 = T19;
      } else {
        T20 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:65
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T21 = CONGRUENT_CALL2(below_, by_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:65
        toF46 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:64
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
      if (above_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
        T53 = toF46;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
        T72 = primitive_not(T53);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
        if (T53 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          T22 = CONGRUENT_CALL2(above_, by_);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
          T52 = toF46;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T73_0 = CONGRUENT_CALL2(T22, T52);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
          T74 = T73_0;
          T23 = T74;
        } else {
          T23 = T72;
        }
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
        T24 = T23;
      } else {
        T24 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:69
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T25 = CONGRUENT_CALL2(above_, by_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:69
        toF46 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:68
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:63
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:73
    T51 = toF46;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:73
    if (T51 != &KPfalseVKi) {
      T26 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:73
      T62 = sizeF56;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:73
      T75 = primitive_not(T62);
      T26 = T75;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:73
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:73
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:74
      T76.vector_element_[0] = &KJfrom_;
      T76.vector_element_[1] = from_;
      T76.vector_element_[2] = &KJby_;
      T76.vector_element_[3] = by_;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:74
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T27_0 = CONGRUENT_CALL2(&KLinfinite_rangeGVKi, &T76);
      T44_0 = T27_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:76
      T59 = sizeF56;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:76
      if (T59 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:77
        T48 = toF46;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:77
        if (T48 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:78
          T61 = sizeF56;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:78
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T28 = CONGRUENT_CALL2(T61, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:78
          CONGRUENT_CALL_PROLOG(&KTVKd, 2);
          T29 = CONGRUENT_CALL2(by_, T28);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:78
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          new_to_ = CONGRUENT_CALL2(from_, T29);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:79
          T50 = toF46;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:79
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T77 = CONGRUENT_CALL2(T50, new_to_);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:79
          if (T77 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:82
            T49 = toF46;
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:82
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T31 = CONGRUENT_CALL2(T49, by_);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:82
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T32 = CONGRUENT_CALL2(T31, from_);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:82
            T33 = CALL2(&KfloorSVKd, T32, by_);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:82
            sizeF56 = T33;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:80
            toF46 = new_to_;
          }
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:79
        } else {
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:85
          T60 = sizeF56;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:85
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T34 = CONGRUENT_CALL2(T60, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:85
          CONGRUENT_CALL_PROLOG(&KTVKd, 2);
          T35 = CONGRUENT_CALL2(by_, T34);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:85
          CONGRUENT_CALL_PROLOG(&KAVKd, 2);
          T36 = CONGRUENT_CALL2(from_, T35);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:85
          toF46 = T36;
        }
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:77
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:88
        T47 = toF46;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:88
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T37 = CONGRUENT_CALL2(T47, by_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:88
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T38 = CONGRUENT_CALL2(T37, from_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:88
        T39 = CALL2(&KfloorSVKd, T38, by_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:88
        sizeF56 = T39;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:76
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:90
      T58 = sizeF56;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:90
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T40 = CONGRUENT_CALL2(T58, (D) 1);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:90
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:91
        T41_0 = Dempty_rangeVKi;
        T43_0 = T41_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:93
        T57 = sizeF56;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:93
        T78.vector_element_[0] = &KJfrom_;
        T78.vector_element_[1] = from_;
        T78.vector_element_[2] = &KJby_;
        T78.vector_element_[3] = by_;
        T78.vector_element_[4] = &KJsize_;
        T78.vector_element_[5] = T57;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:93
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T42_0 = CONGRUENT_CALL2(&KLfinite_rangeGVKi, &T78);
        T43_0 = T42_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:90
      T44_0 = T43_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:73
    T45_0 = T44_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:50
  MV_SET_COUNT(1);
  return(T45_0);
}

D KasVKdMM73I (D class_, D range_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:241
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:243
  T3_0 = range_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:241
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLfinite_rangeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_range_from_, D Uunique_range_by_, D Uunique_size_) {
  D T6;
  D Uunique_range_fromF7;
  D T8;
  D Uunique_range_byF9;
  D T10;
  D Uunique_sizeF11;
  D T12;
  D Uunique_range_fromF13;
  D Uunique_range_byF14;
  D Uunique_sizeF15;
  D T16_0;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  T17 = primitive_idQ(Uunique_range_from_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  if (T17 != &KPfalseVKi) {
    T18.vector_element_[0] = &KJfrom_;
    T19 = KerrorVKdMM1I(&K169, &T18);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
    T6 = T19;
    Uunique_range_fromF7 = T6;
  } else {
    Uunique_range_fromF7 = Uunique_range_from_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  T20 = primitive_idQ(Uunique_range_by_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  if (T20 != &KPfalseVKi) {
    T21.vector_element_[0] = &KJby_;
    T22 = KerrorVKdMM1I(&K169, &T21);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
    T8 = T22;
    Uunique_range_byF9 = T8;
  } else {
    Uunique_range_byF9 = Uunique_range_by_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  T23 = primitive_idQ(Uunique_size_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = &KJsize_;
    T25 = KerrorVKdMM1I(&K169, &T24);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
    T10 = T25;
    Uunique_sizeF11 = T10;
  } else {
    Uunique_sizeF11 = Uunique_size_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  T12 = primitive_object_allocate_filled(4,&KLfinite_rangeGVKiW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_range_fromF13 = Uunique_range_fromF7;
  SLOT_VALUE_SETTER(Uunique_range_fromF13, T12, 0);
  Uunique_range_byF14 = Uunique_range_byF9;
  SLOT_VALUE_SETTER(Uunique_range_byF14, T12, 1);
  Uunique_sizeF15 = Uunique_sizeF11;
  SLOT_VALUE_SETTER(Uunique_sizeF15, T12, 2);
  APPLY2(&KinitializeVKd, T12, init_args_);
  T16_0 = T12;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:23
  MV_SET_COUNT(1);
  return(T16_0);
}

D KLconstant_rangeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_range_from_, D Uunique_range_by_, D Uunique_size_) {
  D T6;
  D Uunique_range_fromF7;
  D T8;
  D Uunique_range_byF9;
  D T10;
  D Uunique_sizeF11;
  D T12;
  D Uunique_range_fromF13;
  D Uunique_range_byF14;
  D Uunique_sizeF15;
  D T16_0;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22;
  D T23;
  _KLsimple_object_vectorGVKd_1 T24 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  T17 = primitive_idQ(Uunique_range_from_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  if (T17 != &KPfalseVKi) {
    T18.vector_element_[0] = &KJfrom_;
    T19 = KerrorVKdMM1I(&K169, &T18);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
    T6 = T19;
    Uunique_range_fromF7 = T6;
  } else {
    Uunique_range_fromF7 = Uunique_range_from_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  T20 = primitive_idQ(Uunique_range_by_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  if (T20 != &KPfalseVKi) {
    T21.vector_element_[0] = &KJby_;
    T22 = KerrorVKdMM1I(&K169, &T21);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
    T8 = T22;
    Uunique_range_byF9 = T8;
  } else {
    Uunique_range_byF9 = Uunique_range_by_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  T23 = primitive_idQ(Uunique_size_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  if (T23 != &KPfalseVKi) {
    T24.vector_element_[0] = &KJsize_;
    T25 = KerrorVKdMM1I(&K169, &T24);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
    T10 = T25;
    Uunique_sizeF11 = T10;
  } else {
    Uunique_sizeF11 = Uunique_size_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  T12 = primitive_object_allocate_filled(4,&KLconstant_rangeGVKiW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_range_fromF13 = Uunique_range_fromF7;
  SLOT_VALUE_SETTER(Uunique_range_fromF13, T12, 0);
  Uunique_range_byF14 = Uunique_range_byF9;
  SLOT_VALUE_SETTER(Uunique_range_byF14, T12, 1);
  Uunique_sizeF15 = Uunique_sizeF11;
  SLOT_VALUE_SETTER(Uunique_sizeF15, T12, 2);
  APPLY2(&KinitializeVKd, T12, init_args_);
  T16_0 = T12;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:18
  MV_SET_COUNT(1);
  return(T16_0);
}

D KLinfinite_rangeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_range_from_, D Uunique_range_by_) {
  D T5;
  D Uunique_range_fromF6;
  D T7;
  D Uunique_range_byF8;
  D T9;
  D Uunique_range_fromF10;
  D Uunique_range_byF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  T13 = primitive_idQ(Uunique_range_from_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = &KJfrom_;
    T15 = KerrorVKdMM1I(&K169, &T14);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
    T5 = T15;
    Uunique_range_fromF6 = T5;
  } else {
    Uunique_range_fromF6 = Uunique_range_from_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  T16 = primitive_idQ(Uunique_range_by_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  if (T16 != &KPfalseVKi) {
    T17.vector_element_[0] = &KJby_;
    T18 = KerrorVKdMM1I(&K169, &T17);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
    T7 = T18;
    Uunique_range_byF8 = T7;
  } else {
    Uunique_range_byF8 = Uunique_range_by_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  T9 = primitive_object_allocate_filled(3,&KLinfinite_rangeGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_range_fromF10 = Uunique_range_fromF6;
  SLOT_VALUE_SETTER(Uunique_range_fromF10, T9, 0);
  Uunique_range_byF11 = Uunique_range_byF8;
  SLOT_VALUE_SETTER(Uunique_range_byF11, T9, 1);
  APPLY2(&KinitializeVKd, T9, init_args_);
  T12_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:28
  MV_SET_COUNT(1);
  return(T12_0);
}

D KLinfinite_range_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:31
  T5 = primitive_object_allocate_filled(3,&KLinfinite_range_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:31
  MV_SET_COUNT(1);
  return(T6_0);
}

D KidQ_intersectionVKiMM0I (D r1_, D r2_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:460
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:461
  T3 = Dempty_rangeVKi;
  MV_SET_ELT(0, Dempty_rangeVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:460
  return(T3);
}

D KidQ_intersectionVKiMM1I (D r1_, D r2_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:464
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:465
  T3 = Dempty_rangeVKi;
  MV_SET_ELT(0, Dempty_rangeVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:464
  return(T3);
}

D KidQ_intersectionVKiMM2I (D r1_, D r2_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:468
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:469
  T3 = Dempty_rangeVKi;
  MV_SET_ELT(0, Dempty_rangeVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:468
  return(T3);
}

D KidQ_intersectionVKiMM3I (D r1_, D r2_) {
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
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:472
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:473
  T12 = SLOT_VALUE_INITD(r1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:473
  T13 = SLOT_VALUE_INITD(r2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:473
  T3 = KEEVKdI(T12, T13);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:473
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
    T14 = SLOT_VALUE_INITD(r1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
      T15 = SLOT_VALUE_INITD(r2_, 2);
      T4 = T15;
    } else {
      T4 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
      T16 = SLOT_VALUE_INITD(r1_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
      T17 = SLOT_VALUE_INITD(r2_, 2);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T5 = CONGRUENT_CALL2(T16, T17);
      T6 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
      T18 = SLOT_VALUE_INITD(r1_, 2);
      T6 = T18;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:475
      T7 = r1_;
      MV_SET_ELT(0, r1_);
      MV_SET_COUNT(1);
      T9 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:477
      T8 = r2_;
      MV_SET_ELT(0, r2_);
      MV_SET_COUNT(1);
      T9 = T8;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:474
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:480
    T10 = Dempty_rangeVKi;
    MV_SET_ELT(0, Dempty_rangeVKi);
    MV_SET_COUNT(1);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:473
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:472
  return(T11);
}

D KidQ_intersectionVKiMM4I (D r1_, D r2_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:493
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:494
  T4 = SLOT_VALUE_INITD(r1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:494
  T3 = KidQ_intersection_with_constantVKiI(T4, r2_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:493
  return(T3);
}

D KidQ_intersectionVKiMM5I (D r1_, D r2_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:497
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:498
  T4 = SLOT_VALUE_INITD(r1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:498
  T3 = KidQ_intersection_with_constantVKiI(T4, r2_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:497
  return(T3);
}

D KidQ_intersectionVKiMM6I (D r1_, D r2_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:501
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:502
  T4 = SLOT_VALUE_INITD(r2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:502
  T3 = KidQ_intersection_with_constantVKiI(T4, r1_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:501
  return(T3);
}

D KidQ_intersectionVKiMM7I (D r1_, D r2_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:505
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:506
  T4 = SLOT_VALUE_INITD(r2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:506
  T3 = KidQ_intersection_with_constantVKiI(T4, r1_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:505
  return(T3);
}

D KidQ_intersectionVKiMM8I (D r1_, D r2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:590
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:591
  T4 = SLOT_VALUE_INITD(r1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:591
  T5 = SLOT_VALUE_INITD(r1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:591
  T6 = KlastVKdMM4I(r1_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:592
  T7 = SLOT_VALUE_INITD(r2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:592
  T8 = SLOT_VALUE_INITD(r2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:592
  T9 = KlastVKdMM4I(r2_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:591
  T3 = Kfinite_intersectionVKiI(T4, T5, T6, T7, T8, T9);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:590
  return(T3);
}

D KidQ_intersectionVKiMM9I (D r1_, D r2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:595
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:596
  T5 = SLOT_VALUE_INITD(r1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:596
  T6 = SLOT_VALUE_INITD(r1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:596
  T7 = KlastVKdMM4I(r1_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:597
  T8 = SLOT_VALUE_INITD(r2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:597
  T9 = SLOT_VALUE_INITD(r2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:597
  T3 = Klast_of_inVKiI(r2_, r1_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:596
  T4 = Kfinite_intersectionVKiI(T5, T6, T7, T8, T9, T3);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:595
  return(T4);
}

D KidQ_intersectionVKiMM10I (D r1_, D r2_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:600
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:601
  T5 = SLOT_VALUE_INITD(r1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:601
  T6 = SLOT_VALUE_INITD(r1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:601
  T3 = Klast_of_inVKiI(r1_, r2_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:602
  T7 = SLOT_VALUE_INITD(r2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:602
  T8 = SLOT_VALUE_INITD(r2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:602
  T9 = KlastVKdMM4I(r2_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:601
  T4 = Kfinite_intersectionVKiI(T5, T6, T3, T7, T8, T9);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:600
  return(T4);
}

D KidQ_intersectionVKiMM11I (D r1_, D r2_) {
  D T3;
  D from_;
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
  _KLsimple_object_vectorGVKd_4 T17 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:605
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:606
  T13 = SLOT_VALUE_INITD(r1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:607
  T14 = SLOT_VALUE_INITD(r2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:608
  T15 = SLOT_VALUE_INITD(r1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:609
  T16 = SLOT_VALUE_INITD(r2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:610
  T3 = Ksame_signQVKiI(T13, T14);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:610
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:611
    from_ = Kfirst_intersectionVKiI(T15, T13, T16, T14);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:612
    if (from_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:613
      CONGRUENT_CALL_PROLOG(&KlcmVKd, 2);
      T5 = CONGRUENT_CALL2(T13, T14);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:613
      T17.vector_element_[0] = &KJfrom_;
      T17.vector_element_[1] = from_;
      T17.vector_element_[2] = &KJby_;
      T17.vector_element_[3] = T5;
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:613
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T6 = CONGRUENT_CALL2(&KLrangeGVKd, &T17);
      T8 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:615
      T7 = Dempty_rangeVKi;
      MV_SET_ELT(0, Dempty_rangeVKi);
      MV_SET_COUNT(1);
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:612
    T12 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:618
    T9 = Klast_of_inVKiI(r1_, r2_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:619
    T10 = Klast_of_inVKiI(r2_, r1_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:618
    T11 = Kfinite_intersectionVKiI(T15, T13, T9, T16, T14, T10);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:610
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:605
  return(T12);
}

D Ksame_signQVKiI (D x_, D y_) {
  D T2;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:509
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:511
  CONGRUENT_CALL_PROLOG(&KpositiveQVKd, 1);
  T2 = CONGRUENT_CALL1(x_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:511
  if (T2 != &KPfalseVKi) {
    T3 = &KpositiveQVKd;
  } else {
    T3 = &KnegativeQVKd;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:511
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:511
  T4 = CALL1(T3, y_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:509
  return(T4);
}

D Kfirst_intersectionVKiI (D from1_, D by1_, D from2_, D by2_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D neg_;
  D T10;
  D T11;
  D T12;
  D T13;
  D returnPexit_20_;
  D T15;
  DWORD i_T, i_;
  D n_T, n_;
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
  D from1F28T, from1F28;
  D by1F29T, by1F29;
  D from2F30T, from2F30;
  D by2F31T, by2F31;
  _KLsimple_object_vectorGVKd_1 T32 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T33;
  DWORD T34;
  D T35;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:514
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:524
  from1F28T = from1_;
  by1F29T = by1_;
  from2F30T = from2_;
  by2F31T = by2_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:524
    from1F28 = from1F28T;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:524
    by1F29 = by1F29T;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:524
    from2F30 = from2F30T;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:524
    by2F31 = by2F31T;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:516
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T4 = CONGRUENT_CALL2(by1F29, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:516
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:517
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T5 = CONGRUENT_CALL1(from1F28);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:517
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T6 = CONGRUENT_CALL1(by1F29);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:517
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T7 = CONGRUENT_CALL1(from2F30);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:517
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T8 = CONGRUENT_CALL1(by2F31);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:517
      neg_ = Kfirst_intersectionVKiI(T5, T6, T7, T8);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:518
      if (neg_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:519
        CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
        T10 = CONGRUENT_CALL1(neg_);
        T12 = T10;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:521
        T11 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T12 = T11;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:518
      T26 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:523
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T13 = CONGRUENT_CALL2(from1F28, from2F30);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:516
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:524
        from1F28T = from2F30;
        by1F29T = by2F31;
        from2F30T = from1F28;
        by2F31T = by1F29;
        goto L0;
        T25 = T27;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:527
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        CONGRUENT_CALL2(by1F29, (D) 1);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
        i_T = 1;
        n_T = from1F28;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
          i_ = i_T;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
          T35 = primitive_cast_raw_as_integer(i_);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
          n_ = n_T;
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T18 = CONGRUENT_CALL2(T35, by2F31);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
          if (T18 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:530
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T19 = CONGRUENT_CALL2(n_, from2F30);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:530
            T20 = CALL2(&KremainderVKd, T19, by2F31);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:530
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T21 = CONGRUENT_CALL2(T20, (D) 1);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:530
            if (T21 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/range.dylan:531
              T32.vector_element_[0] = n_;
              // /opt/opendylan-2013.1/sources/dylan/range.dylan:527
              T33 = MV_SET_REST_AT(&T32, 0);
              // /opt/opendylan-2013.1/sources/dylan/range.dylan:527
              T24 = T33;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:530
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
            T34 = primitive_machine_word_add_signal_overflow(i_,4);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T22 = CONGRUENT_CALL2(n_, by1F29);
            // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
            i_T = T34;
            n_T = T22;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:534
          T23 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          // /opt/opendylan-2013.1/sources/dylan/range.dylan:528
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:527
        T24 = T23;
        L2: ;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:527
        T25 = T24;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:516
      T26 = T25;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:516
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:524
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:514
  return(T26);
}

D Klast_of_inVKiI (D of_, D in_) {
  D T2;
  D T3;
  D bound_;
  D T5;
  D n_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:577
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:581
  T9 = SLOT_VALUE_INITD(in_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:581
  T10 = SLOT_VALUE_INITD(of_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:581
  T2 = Ksame_signQVKiI(T9, T10);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:581
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:582
    CONGRUENT_CALL_PROLOG(&KlastVKd, 2);
    T3 = CONGRUENT_CALL2(in_, &KPempty_vectorVKi);
    bound_ = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:584
    T11 = SLOT_VALUE_INITD(in_, 0);
    bound_ = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:581
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:586
  T12 = SLOT_VALUE_INITD(of_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:586
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T5 = CONGRUENT_CALL2(bound_, T12);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:586
  T13 = SLOT_VALUE_INITD(of_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:586
  n_ = CALL2(&KtruncateSVKd, T5, T13);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:587
  T14 = SLOT_VALUE_INITD(of_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:587
  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
  T7 = CONGRUENT_CALL2(n_, T14);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:587
  T15 = SLOT_VALUE_INITD(of_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:587
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T8 = CONGRUENT_CALL2(T7, T15);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:577
  return(T8);
}

D Kfinite_intersectionVKiI (D from1_, D by1_, D to1_, D from2_, D by2_, D to2_) {
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
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:560
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:562
  CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
  T6 = CONGRUENT_CALL1(by1_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:562
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:563
    CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
    T7 = CONGRUENT_CALL1(by2_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:563
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:564
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T8 = CONGRUENT_CALL1(by1_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:564
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T9 = CONGRUENT_CALL1(by2_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:564
      T10 = Kordered_finite_intersectionVKiI(to1_, T8, from1_, to2_, T9, from2_);
      T13 = T10;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:566
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T11 = CONGRUENT_CALL1(by1_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:566
      T12 = Kordered_finite_intersectionVKiI(to1_, T11, from1_, from2_, by2_, to2_);
      T13 = T12;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:563
    T19 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:569
    CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
    T14 = CONGRUENT_CALL1(by2_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:569
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:570
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T15 = CONGRUENT_CALL1(by2_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:570
      T16 = Kordered_finite_intersectionVKiI(from1_, by1_, to1_, to2_, T15, from2_);
      T18 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:572
      T17 = Kordered_finite_intersectionVKiI(from1_, by1_, to1_, from2_, by2_, to2_);
      T18 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:569
    T19 = T18;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:562
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:560
  return(T19);
}

D Kordered_finite_intersectionVKiI (D lo1_, D by1_, D hi1_, D lo2_, D by2_, D hi2_) {
  D Utmp_;
  D T8;
  D T9;
  D T10;
  D from_;
  D T12;
  D T13;
  D T14;
  D T15;
  D to_;
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
  D T30;
  D T31;
  D T32;
  D T33;
  _KLsimple_object_vectorGVKd_6 T34 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:540
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:543
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  Utmp_ = CONGRUENT_CALL2(hi1_, lo2_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:543
  if (Utmp_ != &KPfalseVKi) {
    T9 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:543
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T8 = CONGRUENT_CALL2(hi2_, lo1_);
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:543
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:543
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:544
    T10 = Dempty_rangeVKi;
    MV_SET_ELT(0, Dempty_rangeVKi);
    MV_SET_COUNT(1);
    T25 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:546
    from_ = Kfirst_intersectionVKiI(lo1_, by1_, lo2_, by2_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
    if (from_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T26 = CONGRUENT_CALL2(from_, lo1_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
      T27 = primitive_not(T26);
      T12 = T27;
    } else {
      T12 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T28 = CONGRUENT_CALL2(from_, lo2_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
      T29 = primitive_not(T28);
      T13 = T29;
    } else {
      T13 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:548
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T14 = CONGRUENT_CALL1(by1_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:548
      CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
      T15 = CONGRUENT_CALL1(by2_);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:548
      to_ = Kfirst_intersectionVKiI(hi1_, T14, hi2_, T15);
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
      if (to_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T30 = CONGRUENT_CALL2(hi1_, to_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
        T31 = primitive_not(T30);
        T17 = T31;
      } else {
        T17 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T32 = CONGRUENT_CALL2(hi2_, to_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
        T33 = primitive_not(T32);
        T18 = T33;
      } else {
        T18 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:550
        CONGRUENT_CALL_PROLOG(&KlcmVKd, 2);
        T19 = CONGRUENT_CALL2(by1_, by2_);
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:550
        T34.vector_element_[0] = &KJfrom_;
        T34.vector_element_[1] = from_;
        T34.vector_element_[2] = &KJto_;
        T34.vector_element_[3] = to_;
        T34.vector_element_[4] = &KJby_;
        T34.vector_element_[5] = T19;
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:550
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T20 = CONGRUENT_CALL2(&KLrangeGVKd, &T34);
        T22 = T20;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/range.dylan:552
        T21 = Dempty_rangeVKi;
        MV_SET_ELT(0, Dempty_rangeVKi);
        MV_SET_COUNT(1);
        T22 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:549
      T24 = T22;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/range.dylan:555
      T23 = Dempty_rangeVKi;
      MV_SET_ELT(0, Dempty_rangeVKi);
      MV_SET_COUNT(1);
      T24 = T23;
    }
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:547
    T25 = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:543
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:540
  return(T25);
}

D KidQ_intersection_with_constantVKiI (D value_, D range_) {
  D T2;
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:484
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:486
  CONGRUENT_CALL_PROLOG(&KmemberQVKd, 3);
  T2 = CONGRUENT_CALL3(value_, range_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:486
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:487
    T6.vector_element_[0] = &KJfrom_;
    T6.vector_element_[1] = value_;
    T6.vector_element_[2] = &KJsize_;
    T6.vector_element_[3] = (D) 5;
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:487
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLrangeGVKd, &T6);
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:489
    T4 = Dempty_rangeVKi;
    MV_SET_ELT(0, Dempty_rangeVKi);
    MV_SET_COUNT(1);
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:486
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:484
  return(T5);
}

D Kfind_key_for_elementVKiMM0I (D value_, D range_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:206
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:208
  T3 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:206
  return(T3);
}

D Kfind_key_for_elementVKiMM1I (D value_, D range_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:211
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:213
  T7 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:213
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3 = CONGRUENT_CALL2(value_, T7);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:213
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:214
    T4 = (D) 1;
    MV_SET_ELT(0, (D) 1);
    MV_SET_COUNT(1);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:216
    T5 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:213
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:211
  return(T6);
}

D Kfind_key_for_elementVKiMM2I (D value_, D range_) {
  D T3;
  D T4_0;
  D T4_1;
  D key_;
  D rem_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:220
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:222
  T12 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:222
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T3 = CONGRUENT_CALL2(value_, T12);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:222
  T13 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:222
  T4_0 = CALL2(&KtruncateSVKd, T3, T13);
  T4_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:222
  key_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:222
  rem_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T7 = CONGRUENT_CALL2(rem_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
    T15 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
    T16 = primitive_machine_word_less_thanQ(T15,1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
    T14 = primitive_not(T16);
    T8 = T14;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:224
    T9 = key_;
    MV_SET_ELT(0, key_);
    MV_SET_COUNT(1);
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:226
    T10 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:223
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:220
  return(T11);
}

D Kfind_key_for_elementVKiMM3I (D value_, D range_) {
  D T3;
  D T4_0;
  D T4_1;
  D key_;
  D rem_;
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
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:230
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:232
  T13 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:232
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T3 = CONGRUENT_CALL2(value_, T13);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:232
  T14 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:232
  T4_0 = CALL2(&KtruncateSVKd, T3, T14);
  T4_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:232
  key_ = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:232
  rem_ = T4_1;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T7 = CONGRUENT_CALL2(rem_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
    T16 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
    T17 = primitive_machine_word_less_thanQ(T16,1);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
    T15 = primitive_not(T17);
    T8 = T15;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
    T18 = SLOT_VALUE_INITD(range_, 2);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
    T19 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
    T20 = primitive_cast_integer_as_raw(T18);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
    T21 = primitive_machine_word_less_thanQ(T19,T20);
    T9 = T21;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:234
    T10 = key_;
    MV_SET_ELT(0, key_);
    MV_SET_COUNT(1);
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:236
    T11 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:233
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:230
  return(T12);
}

D Kconstant_range_current_elementVKiI (D range_, D state_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:719
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:721
  T2 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:721
  T3 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:719
  return(T3);
}

D Krange_current_element_setterVKiI (D new_value_, D range_, D state_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:711
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:716
  T5.vector_element_[0] = range_;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:716
  T3 = KlistVKdI(&T5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:714
  T6.vector_element_[0] = &KJformat_string_;
  T6.vector_element_[1] = &K364;
  T6.vector_element_[2] = &KJformat_arguments_;
  T6.vector_element_[3] = T3;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:714
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLimmutable_errorGVKi, &T6);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:714
  T7_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:711
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdecreasing_range_finished_stateQVKiI (D range_, D state_, D limit_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:696
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:698
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T3_0 = CONGRUENT_CALL2(state_, limit_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:696
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kincreasing_range_finished_stateQVKiI (D range_, D state_, D limit_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:691
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:693
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T4_0 = CONGRUENT_CALL2(limit_, state_);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:691
  MV_SET_COUNT(1);
  return(T4_0);
}

D Krange_previous_stateVKiI (D range_, D state_) {
  D T2_0;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:675
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:678
  T4 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:678
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T2_0 = CONGRUENT_CALL2(state_, T4);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:675
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:675
  MV_SET_COUNT(1);
  return(T3_0);
}

D Krange_current_keyVKiI (D range_, D state_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:701
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:703
  T4 = SLOT_VALUE_INITD(range_, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:703
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T2 = CONGRUENT_CALL2(state_, T4);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:703
  T5 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:703
  T3 = CALL2(&KfloorSVKd, T2, T5);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:701
  return(T3);
}

D Krange_current_elementVKiI (D range_, D state_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:706
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:708
  T2 = state_;
  MV_SET_ELT(0, state_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:706
  return(T2);
}

D KLincompatible_range_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:288
  T5 = primitive_object_allocate_filled(3,&KLincompatible_range_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:288
  MV_SET_COUNT(1);
  return(T6_0);
}

D Krange_errorVKiI (D ignored_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:724
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:727
  T2_0 = KerrorVKdMM1I(&K423, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:724
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kempty_range_finished_stateQVKiI (D range_, D state_, D limit_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:681
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:683
  T3_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:681
  MV_SET_COUNT(1);
  return(T3_0);
}

D Krange_next_stateVKiI (D range_, D state_) {
  D T2_0;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:669
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:672
  T4 = SLOT_VALUE_INITD(range_, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:672
  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
  T2_0 = CONGRUENT_CALL2(state_, T4);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:669
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:669
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinfinite_range_finished_stateQVKiI (D range_, D state_, D limit_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:686
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:688
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:686
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLempty_rangeGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_range_from_, D Uunique_range_by_) {
  D T5;
  D Uunique_range_fromF6;
  D T7;
  D Uunique_range_byF8;
  D T9;
  D Uunique_range_fromF10;
  D Uunique_range_byF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_1 T17 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  T13 = primitive_idQ(Uunique_range_from_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = &KJfrom_;
    T15 = KerrorVKdMM1I(&K169, &T14);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
    T5 = T15;
    Uunique_range_fromF6 = T5;
  } else {
    Uunique_range_fromF6 = Uunique_range_from_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  T16 = primitive_idQ(Uunique_range_by_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  if (T16 != &KPfalseVKi) {
    T17.vector_element_[0] = &KJby_;
    T18 = KerrorVKdMM1I(&K169, &T17);
    // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
    T7 = T18;
    Uunique_range_byF8 = T7;
  } else {
    Uunique_range_byF8 = Uunique_range_by_;
  }
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  T9 = primitive_object_allocate_filled(3,&KLempty_rangeGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_range_fromF10 = Uunique_range_fromF6;
  SLOT_VALUE_SETTER(Uunique_range_fromF10, T9, 0);
  Uunique_range_byF11 = Uunique_range_byF8;
  SLOT_VALUE_SETTER(Uunique_range_byF11, T9, 1);
  APPLY2(&KinitializeVKd, T9, init_args_);
  T12_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:15
  MV_SET_COUNT(1);
  return(T12_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_range_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJof_);
    if (T0 != &KJof_) {
      primitive_repeated_slot_value_setter(T0, &K219, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K216, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_range_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:36
  T1 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:36
  SLOT_VALUE_SETTER(&K1, T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:36
  SLOT_VALUE_SETTER(&KPempty_listVKi, T1, 1);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:36
  Dempty_range_passwordVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:36
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_6 T2 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/range.dylan:39
  T2.vector_element_[0] = &KJfrom_;
  T2.vector_element_[1] = (D) 1;
  T2.vector_element_[2] = &KJby_;
  T2.vector_element_[3] = (D) 1;
  T2.vector_element_[4] = &KJpassword_;
  T2.vector_element_[5] = Dempty_range_passwordVKi;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:39
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLempty_rangeGVKi, &T2);
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:38
  Dempty_rangeVKi = T0;
  // /opt/opendylan-2013.1/sources/dylan/range.dylan:38
  T1 = &KPfalseVKi;
  goto I2;
}
I2:

  return;
}


/* eof */
