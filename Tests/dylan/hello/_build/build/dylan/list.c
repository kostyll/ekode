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
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

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
  D symbol_name_;
} _KLsymbolGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(46);
define__KLbyte_stringGVKd(0);

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLnatural_number_errorGVKi;

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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimproper_list_errorGVKi;


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
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_6;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LpairG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_12;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D Ksubclass_instanceQVKiI (D x_, D sc_);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lempty_listG_typesVKi;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsymbolGVKd KJsize_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJfill_;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_3;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsymbolGVKd KJtest_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLsealed_generic_functionGVKe KheadVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsealed_generic_functionGVKe KtailVKd;
extern _KLincremental_generic_functionGVKe KmemberQVKd;
extern _KLsealed_generic_functionGVKe Ktail_setterVKd;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
D KerrorVKdMM0I (D, D);
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
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_2;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsymbolGVKd KJdefault_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLnatural_number_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLnatural_number_errorGVKiW;
extern _KLsymbolGVKd KJcount_;
extern _KLsealed_generic_functionGVKe Kconcatenate_as_twoVKi;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
D Kinvalid_sequence_start_errorVKiI (D, D);
D Kinvalid_sequence_bounds_errorVKiI (D, D, D);
D Kinvalid_sequence_end_errorVKiI (D, D);
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_1;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe Kidentity_copy_stateVKe;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_1;
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_4;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_9;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_5;
D KelementVKdMM11I (D, D, D, D);

/* Defined object declarations */

D KmemberQVKdMM3I (D, D, D, D);
D KlistVKdI (D);
D KsizeVKdMM30I (D);
extern _KLsimple_methodGVKe KemptyQVKdMM10;
D KemptyQVKdMM10I (D list_);
extern _KLmethod_domainGVKe KemptyQVKdRD_dylanRD_6;
extern _KLsimple_methodGVKe KsizeVKdMM30;
extern _KLmethod_domainGVKe KsizeVKdRD_dylanRD_10;
extern _KLsimple_methodGVKe Ktype_for_copyVKdMM15;
D Ktype_for_copyVKdMM15I (D object_);
extern _KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_5;
extern _KLkeyword_methodGVKe KelementVKdMM25;
D KelementVKdMM25I (D, D, D, D);
extern _KLmethod_domainGVKe KelementVKdRD_dylanRD_9;
extern _KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM23;
D Kelement_no_bounds_checkVKeMM23I (D, D, D, D);
extern _KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_2;
extern _KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_6;
extern _KLsimple_methodGVKe Kforward_iteration_protocolVKdMM21;
D Kforward_iteration_protocolVKdMM21I (D collection_);
D KreverseXVKdMM2I (D);
extern _KLmethod_domainGVKe KaddXVKdRD_dylanRD_6;
extern _KLsimple_methodGVKe KaddXVKdMM7;
D KaddXVKdMM7I (D list_, D value_);
extern _KLkeyword_methodGVKe KremoveXVKdMM7;
D KremoveXVKdMM7I (D, D, D, D, D);
extern _KLmethod_domainGVKe KremoveXVKdRD_dylanRD_6;
extern _KLkeyword_methodGVKe KmemberQVKdMM3;
extern _KLmethod_domainGVKe KmemberQVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KreduceVKdMM1;
D KreduceVKdMM1I (D, D, D);
extern _KLmethod_domainGVKe KreduceVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kelement_setterVKdMM25;
D Kelement_setterVKdMM25I (D, D, D);
extern _KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_5;
extern _KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM25;
D Kelement_no_bounds_check_setterVKeMM25I (D, D, D);
extern _KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_2;
extern _KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_2;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM4;
D Kcopy_sequenceVKdMM4I (D, D, D, D);
extern _KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KreverseVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KreverseVKdMM2;
D KreverseVKdMM2I (D);
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM4;
D Kconcatenate_asVKdMM4I (D, D, D);
extern _KLmethod_domainGVKe Kremove_duplicatesVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kremove_duplicatesVKdMM1;
D Kremove_duplicatesVKdMM1I (D, D, D);
extern _KLmethod_domainGVKe KremoveVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe KremoveVKdMM6;
D KremoveVKdMM6I (D, D, D, D, D);
extern _KLmethod_domainGVKe KaddVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KaddVKdMM3;
D KaddVKdMM3I (D list_, D value_);
extern _KLsimple_methodGVKe Kconcatenate_as_twoVKiMM1;
D Kconcatenate_as_twoVKiMM1I (D, D, D);
extern _KLkeyword_methodGVKe KlastVKdMM1;
D KlastVKdMM1I (D, D, D);
extern _KLmethod_domainGVKe KlastVKdRD_dylanRD_3;
extern _KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KreverseXVKdMM2;
extern _KLmethod_domainGVKe KreverseXVKdRD_dylanRD_5;
extern _KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM4;
D Kreplace_subsequenceXVKdMM4I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kreplace_subsequenceXVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kremove_duplicatesXVKdMM1;
D Kremove_duplicatesXVKdMM1I (D, D, D);
extern _KLmethod_domainGVKe Kremove_duplicatesXVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kadd_newXVKdMM3;
D Kadd_newXVKdMM3I (D, D, D, D);
extern _KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_0;
extern _KLkeyword_methodGVKe Kadd_newVKdMM3;
D Kadd_newVKdMM3I (D, D, D, D);
extern _KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Klast_setterVKdMM1;
D Klast_setterVKdMM1I (D, D);
extern _KLmethod_domainGVKe Klast_setterVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Kthird_setterVKdMM1;
D Kthird_setterVKdMM1I (D, D);
extern _KLsimple_methodGVKe Kthird_setterVKdMM2;
D Kthird_setterVKdMM2I (D, D);
extern _KLsimple_methodGVKe Ksecond_setterVKdMM1;
D Ksecond_setterVKdMM1I (D, D);
extern _KLsimple_methodGVKe Ksecond_setterVKdMM2;
D Ksecond_setterVKdMM2I (D, D);
extern _KLsimple_methodGVKe Kfirst_setterVKdMM1;
D Kfirst_setterVKdMM1I (D, D);
extern _KLsimple_methodGVKe Kfirst_setterVKdMM2;
D Kfirst_setterVKdMM2I (D, D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_4;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_9;
extern _KLkeyword_methodGVKe KmakeVKdMM35;
D KmakeVKdMM35I (D, D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM36;
D KmakeVKdMM36I (D class_, D Urest_);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_14;
extern _KLsimple_methodGVKe KasVKdMM60;
D KasVKdMM60I (D class_, D list_);
extern _KLsimple_methodGVKe KasVKdMM61;
D KasVKdMM61I (D, D);
extern _KLsimple_methodGVKe KasVKdMM62;
D KasVKdMM62I (D, D);
extern _KLsimple_methodGVKe KasVKdMM63;
D KasVKdMM63I (D class_, D collection_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_8;
static _KLsignatureAvaluesGVKi K111;
static _KLsimple_object_vectorGVKd_2 K112;
static _KLsingletonGVKd K113;
static _KLsignatureAvaluesGVKi K114;
static _KLsimple_object_vectorGVKd_2 K115;
static _KLsingletonGVKd K116;
static _KLsignatureAvaluesGVKi K117;
static _KLsimple_object_vectorGVKd_2 K118;
static _KLsignatureAvaluesGVKi K119;
static _KLsimple_object_vectorGVKd_2 K120;
static _KLsubclassGVKe K121;
static _KLkeyword_signatureAvaluesGVKi K122;
static _KLsimple_object_vectorGVKd_1 K123;
static _KLsingletonGVKd K124;
static _KLkeyword_signatureAvaluesGVKi K125;
static _KLsimple_object_vectorGVKd_4 K126;
static _KLsimple_object_vectorGVKd_1 K127;
static _KLsimple_object_vectorGVKd_2 K128;
static _KLsignatureGVKe K129;
static _KLsimple_object_vectorGVKd_2 K130;
static _KLsignatureGVKe K131;
static _KLsimple_object_vectorGVKd_2 K132;
static _KLsignatureGVKe K133;
static _KLsimple_object_vectorGVKd_2 K134;
D KxmemberQVKiI (D, D, D);
static _KLkeyword_signatureAvaluesGVKi K136;
static _KLsimple_object_vectorGVKd_2 K137;
static _KLsimple_object_vectorGVKd_2 K138;
static _KLsimple_object_vectorGVKd_1 K139;
static _KLbyte_stringGVKd_46 K140;
extern _KLclassGVKd KLimproper_list_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLimproper_list_errorGVKiW;
static _KLimplementation_classGVKe K143;
static _KLsimple_object_vectorGVKd_2 K144;
extern _KLkeyword_methodGVKe KLimproper_list_errorGZ32ZconstructorVKiMM0;
D KLimproper_list_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K147;
static _KLsimple_object_vectorGVKd_7 K148;
static _KLkeyword_signatureAvaluesGVKi K149;
static _KLsimple_object_vectorGVKd_4 K150;
static _KLsimple_object_vectorGVKd_2 K151;
static _KLsimple_object_vectorGVKd_1 K152;
static _KLbyte_stringGVKd_21 K153;
static _KLkeyword_signatureAvaluesGVKi K154;
static _KLkeyword_signatureAvaluesGVKi K155;
static _KLsimple_object_vectorGVKd_4 K156;
static _KLsimple_object_vectorGVKd_2 K157;
static _KLsimple_object_vectorGVKd_2 K158;
static _KLsimple_object_vectorGVKd_2 K159;
static _KLsignatureAvaluesGVKi K160;
static _KLkeyword_signatureGVKe K161;
static _KLsimple_object_vectorGVKd_2 K162;
static _KLsimple_object_vectorGVKd_1 K163;
static _KLsignatureAvaluesGVKi K164;
static _KLsimple_object_vectorGVKd_3 K165;
static _KLsubclassGVKe K166;
static _KLsignatureAvaluesGVKi K167;
static _KLbyte_stringGVKd_34 K168;
static _KLbyte_stringGVKd_34 K169;
static _KLkeyword_signatureAvaluesGVKi K170;
static _KLsimple_object_vectorGVKd_4 K171;
static _KLsimple_object_vectorGVKd_2 K172;
static _KLbyte_stringGVKd_45 K173;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K174;
static _KLsignatureAvaluesGVKi K175;
static _KLsimple_object_vectorGVKd_2 K176;
static _KLkeyword_signatureAvaluesGVKi K177;
static _KLsimple_object_vectorGVKd_4 K178;
static _KLsignatureGVKe K179;
static _KLsimple_object_vectorGVKd_3 K180;
static _KLsignatureGVKe K181;
static _KLsimple_object_vectorGVKd_3 K182;
static _KLkeyword_signatureAvaluesGVKi K183;
static _KLbyte_stringGVKd_35 K184;
static _KLkeyword_signatureAvaluesGVKi K185;
static _KLsimple_object_vectorGVKd_2 K186;
extern _KLsimple_methodGVKe Klist_next_stateVKi;
D Klist_next_stateVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe Klist_finished_stateQVKi;
D Klist_finished_stateQVKiI (D collection_, D state_, D limit_);
extern _KLsimple_methodGVKe Klist_current_keyVKi;
D Klist_current_keyVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe Klist_current_elementVKi;
D Klist_current_elementVKiI (D collection_, D state_);
extern _KLsimple_methodGVKe Klist_current_element_setterVKi;
D Klist_current_element_setterVKiI (D new_value_, D collection_, D state_);
static _KLsignatureGVKe K197;
static _KLsimple_object_vectorGVKd_3 K198;
static _KLsignatureGVKe K199;
static _KLsignatureAvaluesGVKi K200;
static _KLsignatureAvaluesGVKi K201;
static _KLsimple_object_vectorGVKd_3 K202;
static _KLsignatureAvaluesGVKi K203;
static _KLsignatureAvaluesGVKi K204;
static _KLsimple_object_vectorGVKd_8 K205;
static _KLkeyword_signatureGVKe K206;
static _KLsimple_object_vectorGVKd_2 K207;
static _KLsimple_object_vectorGVKd_2 K208;
static _KLsignatureAvaluesGVKi K209;
static _KLsignatureAvaluesGVKi K210;
static _KLsimple_object_vectorGVKd_1 K211;
static _KLunionGVKe K212;
static _KLsingletonGVKd K213;
static _KLsignatureAvaluesGVKi K214;
static _KLbyte_stringGVKd_31 K215;
D Kmember_eqlQVKiI (D, D);
extern _KLsimple_methodGVKe KlistVKd;
static _KLsignatureAvaluesGVKi K218;
extern _KLsimple_methodGVKe KpairVKd;
D KpairVKdI (D head_, D tail_);
static _KLsignatureAvaluesGVKi K221;

/* Indirection variables */


/* Variables */

D pairVKd = &KpairVKd;
D listVKd = &KlistVKd;
D Limproper_list_errorGVKi = &KLimproper_list_errorGVKi;
D list_next_stateVKi = &Klist_next_stateVKi;
D list_finished_stateQVKi = &Klist_finished_stateQVKi;
D list_current_keyVKi = &Klist_current_keyVKi;
D list_current_elementVKi = &Klist_current_elementVKi;
D list_current_element_setterVKi = &Klist_current_element_setterVKi;

/* Objects */

_KLsimple_methodGVKe KemptyQVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K214,
  &KemptyQVKdMM10I
};

_KLmethod_domainGVKe KemptyQVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KemptyQVKdRD_dylanRD_5,
  &KemptyQVKdMM10
};

_KLsimple_methodGVKe KsizeVKdMM30 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K210,
  &KsizeVKdMM30I
};

_KLmethod_domainGVKe KsizeVKdRD_dylanRD_10 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KsizeVKdRD_dylanRD_9,
  &KsizeVKdMM30
};

_KLsimple_methodGVKe Ktype_for_copyVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K209,
  &Ktype_for_copyVKdMM15I
};

_KLmethod_domainGVKe Ktype_for_copyVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Ktype_for_copyVKdRD_dylanRD_4,
  &Ktype_for_copyVKdMM15
};

_KLkeyword_methodGVKe KelementVKdMM25 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K206,
  &key_mep_4,
  &KelementVKdMM25I,
  &K162
};

_KLmethod_domainGVKe KelementVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KelementVKdRD_dylanRD_8,
  &KelementVKdMM25
};

_KLkeyword_methodGVKe Kelement_no_bounds_checkVKeMM23 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K206,
  &key_mep_4,
  &Kelement_no_bounds_checkVKeMM23I,
  &K207
};

_KLmethod_domainGVKe Kelement_no_bounds_checkVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_checkVKeRD_dylanRD_1,
  &Kelement_no_bounds_checkVKeMM23
};

_KLmethod_domainGVKe Kforward_iteration_protocolVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kforward_iteration_protocolVKdRD_dylanRD_5,
  &Kforward_iteration_protocolVKdMM21
};

_KLsimple_methodGVKe Kforward_iteration_protocolVKdMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K204,
  &Kforward_iteration_protocolVKdMM21I
};

_KLmethod_domainGVKe KaddXVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KaddXVKdRD_dylanRD_5,
  &KaddXVKdMM7
};

_KLsimple_methodGVKe KaddXVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K167,
  &KaddXVKdMM7I
};

_KLkeyword_methodGVKe KremoveXVKdMM7 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K185,
  &key_mep_5,
  &KremoveXVKdMM7I,
  &K171
};

_KLmethod_domainGVKe KremoveXVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KremoveXVKdRD_dylanRD_5,
  &KremoveXVKdMM7
};

_KLkeyword_methodGVKe KmemberQVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K183,
  &key_mep_4,
  &KmemberQVKdMM3I,
  &K137
};

_KLmethod_domainGVKe KmemberQVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmemberQVKdRD_dylanRD_1,
  &KmemberQVKdMM3
};

_KLsimple_methodGVKe KreduceVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K181,
  &KreduceVKdMM1I
};

_KLmethod_domainGVKe KreduceVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KreduceVKdMM1
};

_KLsimple_methodGVKe Kelement_setterVKdMM25 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K179,
  &Kelement_setterVKdMM25I
};

_KLmethod_domainGVKe Kelement_setterVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_setterVKdRD_dylanRD_4,
  &Kelement_setterVKdMM25
};

_KLsimple_methodGVKe Kelement_no_bounds_check_setterVKeMM25 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K179,
  &Kelement_no_bounds_check_setterVKeMM25I
};

_KLmethod_domainGVKe Kelement_no_bounds_check_setterVKeRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kelement_no_bounds_check_setterVKeRD_dylanRD_1,
  &Kelement_no_bounds_check_setterVKeMM25
};

_KLstandalone_domainGVKe_1 KfillXVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLlistGVKd
};

_KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_1,
  &Kcopy_sequenceVKdMM4
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K177,
  &key_mep_4,
  &Kcopy_sequenceVKdMM4I,
  &K178
};

_KLstandalone_domainGVKe_1 KsortXVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLlistGVKd
};

_KLmethod_domainGVKe KreverseVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KreverseVKdMM2
};

_KLsimple_methodGVKe KreverseVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K160,
  &KreverseVKdMM2I
};

_KLsimple_methodGVKe Kconcatenate_asVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K175,
  &Kconcatenate_asVKdMM4I
};

_KLmethod_domainGVKe Kremove_duplicatesVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kremove_duplicatesVKdMM1
};

_KLkeyword_methodGVKe Kremove_duplicatesVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K154,
  &key_mep_3,
  &Kremove_duplicatesVKdMM1I,
  &K137
};

_KLmethod_domainGVKe KremoveVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KremoveVKdMM6
};

_KLkeyword_methodGVKe KremoveVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K170,
  &key_mep_5,
  &KremoveVKdMM6I,
  &K171
};

_KLmethod_domainGVKe KaddVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KaddVKdMM3
};

_KLsimple_methodGVKe KaddVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K167,
  &KaddVKdMM3I
};

_KLsimple_methodGVKe Kconcatenate_as_twoVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K164,
  &Kconcatenate_as_twoVKiMM1I
};

_KLkeyword_methodGVKe KlastVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K161,
  &key_mep_3,
  &KlastVKdMM1I,
  &K162
};

_KLmethod_domainGVKe KlastVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KlastVKdRD_dylanRD_2,
  &KlastVKdMM1
};

_KLstandalone_domainGVKe_1 KsortVKdRD_dylanRD_0 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  (D) 5,
  &KLlistGVKd
};

_KLsimple_methodGVKe KreverseXVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K160,
  &KreverseXVKdMM2I
};

_KLmethod_domainGVKe KreverseXVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreverseXVKdRD_dylanRD_4,
  &KreverseXVKdMM2
};

_KLkeyword_methodGVKe Kreplace_subsequenceXVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K155,
  &key_mep_5,
  &Kreplace_subsequenceXVKdMM4I,
  &K156
};

_KLmethod_domainGVKe Kreplace_subsequenceXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kreplace_subsequenceXVKdMM4
};

_KLkeyword_methodGVKe Kremove_duplicatesXVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K154,
  &key_mep_3,
  &Kremove_duplicatesXVKdMM1I,
  &K137
};

_KLmethod_domainGVKe Kremove_duplicatesXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kremove_duplicatesXVKdMM1
};

_KLkeyword_methodGVKe Kadd_newXVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K136,
  &key_mep_4,
  &Kadd_newXVKdMM3I,
  &K137
};

_KLmethod_domainGVKe Kadd_newXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kadd_newXVKdMM3
};

_KLkeyword_methodGVKe Kadd_newVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K136,
  &key_mep_4,
  &Kadd_newVKdMM3I,
  &K137
};

_KLmethod_domainGVKe Kadd_newVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kadd_newVKdMM3
};

_KLsimple_methodGVKe Klast_setterVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K133,
  &Klast_setterVKdMM1I
};

_KLmethod_domainGVKe Klast_setterVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Klast_setterVKdMM1
};

_KLsimple_methodGVKe Kthird_setterVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K131,
  &Kthird_setterVKdMM1I
};

_KLsimple_methodGVKe Kthird_setterVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K129,
  &Kthird_setterVKdMM2I
};

_KLsimple_methodGVKe Ksecond_setterVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K131,
  &Ksecond_setterVKdMM1I
};

_KLsimple_methodGVKe Ksecond_setterVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K129,
  &Ksecond_setterVKdMM2I
};

_KLsimple_methodGVKe Kfirst_setterVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K131,
  &Kfirst_setterVKdMM1I
};

_KLsimple_methodGVKe Kfirst_setterVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K129,
  &Kfirst_setterVKdMM2I
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_4 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_3,
  (D) 5,
  &KLlistGVKd
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_14,
  &KmakeVKdMM35
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_8,
  &KasVKdMM60
};

_KLkeyword_methodGVKe KmakeVKdMM35 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K125,
  &key_mep_4,
  &KmakeVKdMM35I,
  &K126
};

_KLkeyword_methodGVKe KmakeVKdMM36 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K122,
  &key_mep_2,
  &KmakeVKdMM36I,
  &KPempty_vectorVKi
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_13 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_12,
  (D) 5,
  &K121
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_13,
  &KmakeVKdMM36
};

_KLsimple_methodGVKe KasVKdMM60 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K119,
  &KasVKdMM60I
};

_KLsimple_methodGVKe KasVKdMM61 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K117,
  &KasVKdMM61I
};

_KLsimple_methodGVKe KasVKdMM62 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K114,
  &KasVKdMM62I
};

_KLsimple_methodGVKe KasVKdMM63 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K111,
  &KasVKdMM63I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_6,
  &KasVKdMM63
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_7,
  &KasVKdMM62
};

static _KLsignatureAvaluesGVKi K111 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K112,
  &KDsignature_LpairG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K113,
  &KLpairGVKd
};

static _KLsingletonGVKd K113 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLpairGVKd
};

static _KLsignatureAvaluesGVKi K114 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K115,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K115 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K116,
  &KLsimple_object_vectorGVKd
};

static _KLsingletonGVKd K116 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K117 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K118,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K118 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K116,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K119 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K120,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K116,
  &KLlistGVKd
};

static _KLsubclassGVKe K121 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlistGVKd
};

static _KLkeyword_signatureAvaluesGVKi K122 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K123,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_Lempty_listG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K123 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K124
};

static _KLsingletonGVKd K124 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLempty_listGVKd
};

static _KLkeyword_signatureAvaluesGVKi K125 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K127,
  &K128,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K126 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJsize_,
  (D) 1,
  &KJfill_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K127 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K116
};

static _KLsimple_object_vectorGVKd_2 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJsize_,
  &KJfill_
};

static _KLsignatureGVKe K129 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K130
};

static _KLsimple_object_vectorGVKd_2 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLpairGVKd
};

static _KLsignatureGVKe K131 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K132
};

static _KLsimple_object_vectorGVKd_2 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLempty_listGVKd
};

static _KLsignatureGVKe K133 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K134
};

static _KLsimple_object_vectorGVKd_2 K134 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLlistGVKd
};

static _KLkeyword_signatureAvaluesGVKi K136 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K138,
  &K139,
  &KDsignature_LfunctionG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KEEVKd
};

static _KLsimple_object_vectorGVKd_2 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K139 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtest_
};

static _KLbyte_stringGVKd_46 K140 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 185,
  "Improper list %= in call to remove-duplicates!"
};

_KLclassGVKd KLimproper_list_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K153,
  &K143,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLimproper_list_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K143,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K143 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLimproper_list_errorGVKi,
  &KLimproper_list_errorGVKiW,
  &KPfalseVKi,
  &K144,
  (D) 6761,
  &KLimproper_list_errorGZ32ZconstructorVKiMM0,
  &K147,
  &K148,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K144,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLimproper_list_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K149,
  &key_mep_2,
  &KLimproper_list_errorGZ32ZconstructorVKiMM0I,
  &K150
};

static _KLsimple_object_vectorGVKd_1 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLimproper_list_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K149 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K151,
  &KDsignature_LobjectG_typesVKi,
  &K152
};

static _KLsimple_object_vectorGVKd_4 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K151 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K152 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLimproper_list_errorGVKi
};

static _KLbyte_stringGVKd_21 K153 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "<improper-list-error>"
};

static _KLkeyword_signatureAvaluesGVKi K154 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LlistG_typesVKi,
  &K139,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K155 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K157,
  &K158,
  &K159,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K157 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_2 K158 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K159 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K160 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLkeyword_signatureGVKe K161 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &KDsignature_LlistG_typesVKi,
  &K163,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &Kunsupplied_objectVKi
};

static _KLsimple_object_vectorGVKd_1 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdefault_
};

static _KLsignatureAvaluesGVKi K164 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K165,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K165 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &K166,
  &KLsequenceGVKd,
  &KLsequenceGVKd
};

static _KLsubclassGVKe K166 = {
  &KLsubclassGVKeW /* wrapper */,
  &Ksubclass_instanceQVKiI,
  &KLlistGVKd
};

static _KLsignatureAvaluesGVKi K167 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K138,
  &KDsignature_LpairG_typesVKi
};

static _KLbyte_stringGVKd_34 K168 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "number >= 0 expected instead of %="
};

static _KLbyte_stringGVKd_34 K169 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "Improper list %= in call to remove"
};

static _KLkeyword_signatureAvaluesGVKi K170 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K138,
  &K172,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K171 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K172 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLbyte_stringGVKd_45 K173 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Improper list %= in call to remove-duplicates"
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K174 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kconcatenate_as_twoVKi
};

static _KLsignatureAvaluesGVKi K175 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604041,
  &K176,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K176 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K116,
  &KLsequenceGVKd
};

static _KLkeyword_signatureAvaluesGVKi K177 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LlistG_typesVKi,
  &K158,
  &K159,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K178 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &Kunsupplied_objectVKi
};

static _KLsignatureGVKe K179 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K180
};

static _KLsimple_object_vectorGVKd_3 K180 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLlistGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K181 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K182
};

static _KLsimple_object_vectorGVKd_3 K182 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLobjectGVKd,
  &KLlistGVKd
};

static _KLkeyword_signatureAvaluesGVKi K183 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K134,
  &K139,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_35 K184 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "Improper list %= in call to remove!"
};

static _KLkeyword_signatureAvaluesGVKi K185 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K138,
  &K172,
  &K186,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K186 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Klist_next_stateVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K203,
  &Klist_next_stateVKiI
};

_KLsimple_methodGVKe Klist_finished_stateQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K201,
  &Klist_finished_stateQVKiI
};

_KLsimple_methodGVKe Klist_current_keyVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K200,
  &Klist_current_keyVKiI
};

_KLsimple_methodGVKe Klist_current_elementVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K199,
  &Klist_current_elementVKiI
};

_KLsimple_methodGVKe Klist_current_element_setterVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K197,
  &Klist_current_element_setterVKiI
};

static _KLsignatureGVKe K197 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K198
};

static _KLsimple_object_vectorGVKd_3 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLlistGVKd,
  &KLlistGVKd
};

static _KLsignatureGVKe K199 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &KDsignature_LlistG_typesVKi
};

static _KLsignatureAvaluesGVKi K200 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K201 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K202,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlistGVKd,
  &KLlistGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K203 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLsignatureAvaluesGVKi K204 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33562629,
  &KDsignature_LlistG_typesVKi,
  &K205
};

static _KLsimple_object_vectorGVKd_8 K205 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLlistGVKd,
  &KLlistGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLkeyword_signatureGVKe K206 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K208,
  &K163,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K207 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdefault_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K208 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K209 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureAvaluesGVKi K210 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LlistG_typesVKi,
  &K211
};

static _KLsimple_object_vectorGVKd_1 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K212
};

static _KLunionGVKe K212 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K213,
  &KLintegerGVKd
};

static _KLsingletonGVKd K213 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K214 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_31 K215 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Taking size of an improper list"
};

_KLsimple_methodGVKe KlistVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K218,
  &KlistVKdI
};

static _KLsignatureAvaluesGVKi K218 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604033,
  &KPempty_vectorVKi,
  &KDsignature_LlistG_typesVKi
};

_KLsimple_methodGVKe KpairVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K221,
  &KpairVKdI
};

static _KLsignatureAvaluesGVKi K221 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LpairG_typesVKi
};

/* Code */

D KmemberQVKdMM3I (D value_, D list_, D Urest_, D test_) {
  D T5_0;
  D testF6;
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
  D T19;
  D T20;
  D T21;
  D T22;
  D firstF23T, firstF23;
  D remainingF24T, remainingF24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:311
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:313
  T10 = primitive_idQ(list_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:313
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:313
    T8_0 = &KPfalseVKi;
    T9_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:314
    T11 = primitive_idQ(test_,&KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:314
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:315
      T5_0 = Kmember_eqlQVKiI(value_, list_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:317
      testF6 = test_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:318
      T12 = SLOT_VALUE_INITD(list_, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:318
      T13 = SLOT_VALUE_INITD(list_, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
      firstF23T = T12;
      remainingF24T = T13;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
        firstF23 = firstF23T;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
        remainingF24 = remainingF24T;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
        T25 = remainingF24;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:319
        T14 = CALL2(testF6, value_, firstF23);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:319
        if (T14 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:320
          T15 = &KPtrueVKi;
          MV_SET_ELT(0, &KPtrueVKi);
          MV_SET_COUNT(1);
          T18 = T15;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:321
          T19 = primitive_idQ(T25,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:319
          if (T19 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:319
            T16 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T17 = T16;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
            T20 = SLOT_VALUE_INITD(T25, 0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
            T21 = SLOT_VALUE_INITD(T25, 1);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
            firstF23T = T20;
            remainingF24T = T21;
            goto L0;
            T17 = T22;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:319
          T18 = T17;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:319
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:322
      T7_0 = T18;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:314
    T9_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:313
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:311
  MV_SET_COUNT(1);
  return(T9_0);
}

D KlistVKdI (D objects_) {
  D T2;
  DWORD T3;
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD indexF12T, indexF12;
  D resultF13T, resultF13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:37
  T2 = SLOT_VALUE_INITD(objects_, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:37
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:37
  T4 = primitive_machine_word_subtract_signal_overflow(T3,4);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
  indexF12T = T4;
  resultF13T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
    indexF12 = indexF12T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:39
    T14 = primitive_cast_raw_as_integer(indexF12);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
    resultF13 = resultF13T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:39
    T7 = primitive_machine_word_less_thanQ(indexF12,1);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:39
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:40
      T5 = resultF13;
      MV_SET_ELT(0, resultF13);
      MV_SET_COUNT(1);
      T6 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
      T8 = primitive_machine_word_subtract_signal_overflow(indexF12,4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
      T9 = KelementVKdMM11I(objects_, T14, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
      T10 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
      SLOT_VALUE_SETTER(T9, T10, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
      SLOT_VALUE_SETTER(resultF13, T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
      indexF12T = T8;
      resultF13T = T10;
      goto L0;
      T6 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:39
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:42
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:35
  return(T6);
}

D KsizeVKdMM30I (D list_) {
  D T2_0;
  D listF3;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D slowtail_;
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
  DWORD T20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30_0;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  DWORD countF35T, countF35;
  D fastF36T, fastF36;
  D slowF37T, slowF37;
  _KLsimple_object_vectorGVKd_2 T38 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T39;
  _KLsimple_object_vectorGVKd_2 T40 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T41;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:167
  T5 = primitive_idQ(list_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:167
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:168
    T2_0 = (D) 1;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:170
    listF3 = list_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:186
    countF35T = 1;
    fastF36T = listF3;
    slowF37T = listF3;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:186
      countF35 = countF35T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:186
      fastF36 = fastF36T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:186
      slowF37 = slowF37T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:173
      T18 = SLOT_VALUE_INITD(fastF36, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:174
      T19 = primitive_idQ(T18,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:174
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:175
        T20 = primitive_machine_word_add_signal_overflow(countF35,4);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:175
        T21 = primitive_cast_raw_as_integer(T20);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:175
        T22_0 = T21;
        T15 = T22_0;
        MV_SET_COUNT(1);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:176
        T23 = primitive_idQ(fastF36,slowF37);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:176
        if (T23 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:176
          T24 = primitive_machine_word_less_thanQ(1,countF35);
          T6 = T24;
        } else {
          T6 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:176
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:174
        if (T6 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:177
          T7 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T14 = T7;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:178
          T25 = primitive_instanceQ(T18,&KLpairGVKd);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:174
          if (T25 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1403
            T16 = T18;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:180
            T26 = SLOT_VALUE_INITD(T16, 1);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:182
            T27 = primitive_idQ(T26,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:181
            if (T27 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:182
              T28 = primitive_machine_word_add_signal_overflow(countF35,8);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:182
              T29 = primitive_cast_raw_as_integer(T28);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:182
              T30_0 = T29;
              T11 = T30_0;
              MV_SET_COUNT(1);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:183
              T31 = primitive_instanceQ(T26,&KLpairGVKd);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:181
              if (T31 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1403
                T17 = T26;
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:185
                T32 = SLOT_VALUE_INITD(slowF37, 1);
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:185
                slowtail_ = T32;
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:186
                T33 = primitive_machine_word_add_signal_overflow(countF35,8);
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:186
                countF35T = T33;
                fastF36T = T17;
                slowF37T = slowtail_;
                goto L0;
                T10 = T34;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:187
                T38.vector_element_[0] = &KJformat_string_;
                T38.vector_element_[1] = &K215;
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:187
                CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
                T9 = CONGRUENT_CALL2(&KLimproper_list_errorGVKi, &T38);
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:187
                T39 = KerrorVKdMM0I(T9, &KPempty_vectorVKi);
                T10 = T39;
              }
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:181
              T11 = T10;
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:181
            T13 = T11;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:190
            T40.vector_element_[0] = &KJformat_string_;
            T40.vector_element_[1] = &K215;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:190
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T12 = CONGRUENT_CALL2(&KLimproper_list_errorGVKi, &T40);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:190
            T41 = KerrorVKdMM0I(T12, &KPempty_vectorVKi);
            T13 = T41;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:174
          T14 = T13;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:174
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:174
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:186
    T4_0 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:166
  MV_SET_COUNT(1);
  return(T4_0);
}

D KemptyQVKdMM10I (D list_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:67
  T2 = primitive_idQ(list_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:67
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:66
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ktype_for_copyVKdMM15I (D object_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:58
  T2_0 = &KLlistGVKd;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:57
  MV_SET_COUNT(1);
  return(T2_0);
}

D KelementVKdMM25I (D lst_, D key_, D Urest_, D default_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  DWORD T9;
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
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  D lF25T, lF25;
  DWORD iF26T, iF26;
  D T27;
  D T28;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:224
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:227
  T9 = primitive_cast_integer_as_raw(key_);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:227
  T10 = primitive_machine_word_less_thanQ(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:227
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:228
    T11 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:228
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:228
      T5_0 = Kelement_range_errorVKeI(lst_, key_);
      T7_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:228
      T6_0 = default_;
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:228
    T8_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
    lF25T = lst_;
    iF26T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
      lF25 = lF25T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
      iF26 = iF26T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
      T28 = primitive_cast_raw_as_integer(iF26);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:231
      T18 = primitive_instanceQ(lF25,&KLpairGVKd);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:231
      if (T18 != &KPfalseVKi) {
        T17 = lF25;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
        T19 = primitive_idQ(T28,key_);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
        if (T19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
          T20 = SLOT_VALUE_INITD(T17, 0);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
          T21 = T20;
          MV_SET_ELT(0, T20);
          MV_SET_COUNT(1);
          T12 = T21;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
          T22 = SLOT_VALUE_INITD(T17, 1);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
          T23 = primitive_machine_word_add_signal_overflow(iF26,4);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
          lF25T = T22;
          iF26T = T23;
          goto L0;
          T12 = T24;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
        T16 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:234
        T27 = primitive_idQ(default_,&Kunsupplied_objectVKi);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:231
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:235
          T13 = Kelement_range_errorVKeI(lst_, key_);
          T15 = T13;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:237
          T14 = default_;
          MV_SET_ELT(0, default_);
          MV_SET_COUNT(1);
          T15 = T14;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:231
        T16 = T15;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:231
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:233
    T8_0 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:224
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kelement_no_bounds_checkVKeMM23I (D lst_, D key_, D Urest_, D default_) {
  DWORD k_T, k_;
  D remain_T, remain_;
  D T7;
  DWORD T8;
  D T9;
  DWORD T10;
  D T11;
  D T12;
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:248
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
  k_T = 1;
  remain_T = lst_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
    k_ = k_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
    remain_ = remain_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
    T8 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
    T9 = primitive_machine_word_less_thanQ(k_,T8);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
      T10 = primitive_machine_word_add_signal_overflow(k_,4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:251
      T11 = SLOT_VALUE_INITD(remain_, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
      T7 = T11;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
      k_T = T10;
      remain_T = T7;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:253
    T12 = SLOT_VALUE_INITD(remain_, 0);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:253
    T13_0 = T12;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:250
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:248
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kforward_iteration_protocolVKdMM21I (D collection_) {
  D T2_0;
  D T2_1;
  D T2_2;
  D T2_3;
  D T2_4;
  D T2_5;
  D T2_6;
  D T2_7;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:679
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:685
  T2_0 = collection_;
  T2_1 = &KPempty_listVKi;
  T2_2 = &Klist_next_stateVKi;
  T2_3 = &Klist_finished_stateQVKi;
  T2_4 = &Klist_current_keyVKi;
  T2_5 = &Klist_current_elementVKi;
  T2_6 = &Klist_current_element_setterVKi;
  T2_7 = &Kidentity_copy_stateVKe;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:679
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

D KreverseXVKdMM2I (D l_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D lF8T, lF8;
  D resultF9T, resultF9;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:822
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:828
  lF8T = l_;
  resultF9T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:828
    lF8 = lF8T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:828
    resultF9 = resultF9T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:824
    T5 = primitive_instanceQ(lF8,&KLpairGVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:824
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/collection.dylan:271
      T4 = lF8;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:826
      T6 = SLOT_VALUE_INITD(T4, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:827
      SLOT_VALUE_SETTER(resultF9, T4, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:828
      lF8T = T6;
      resultF9T = T4;
      goto L0;
      T3 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:830
      T2 = resultF9;
      MV_SET_ELT(0, resultF9);
      MV_SET_COUNT(1);
      T3 = T2;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:824
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:828
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:822
  return(T3);
}

D KaddXVKdMM7I (D list_, D value_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:377
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:378
  T3 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:378
  SLOT_VALUE_SETTER(value_, T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:378
  SLOT_VALUE_SETTER(list_, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:378
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:377
  MV_SET_COUNT(1);
  return(T4_0);
}

D KremoveXVKdMM7I (D l_, D value_, D Urest_, D test_, D count_) {
  D testF6;
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
  D result_;
  D T18;
  D prev_;
  D T20;
  D T21;
  D remaining_;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D countF30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36_0;
  D T37_0;
  D T38;
  _KLsimple_object_vectorGVKd_4 T39 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T40;
  D T41;
  _KLsimple_object_vectorGVKd_1 T42 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T43 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T44;
  D T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;
  DWORD T50;
  D T51;
  D T52;
  _KLsimple_object_vectorGVKd_1 T53 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T54 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:501
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:501
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:504
  result_ = l_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:505
  prev_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:506
  remaining_ = l_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
  if (count_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    T40 = primitive_instanceQ(count_,&KLintegerGVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    if (T40 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      T39.vector_element_[0] = &KJvalue_;
      T39.vector_element_[1] = count_;
      T39.vector_element_[2] = &KJtype_;
      T39.vector_element_[3] = &KLintegerGVKd;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T38 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T39);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T38, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T41 = CONGRUENT_CALL2(count_, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    if (T41 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      T42.vector_element_[0] = count_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      T34 = KlistVKdI(&T42);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      T43.vector_element_[0] = &KJformat_string_;
      T43.vector_element_[1] = &K168;
      T43.vector_element_[2] = &KJformat_arguments_;
      T43.vector_element_[3] = T34;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T35 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T43);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
      KerrorVKdMM0I(T35, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    T36_0 = count_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    T37_0 = T36_0;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
    T44 = T37_0;
    T7 = T44;
  } else {
    T7 = (D) -3;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:507
  countF30 = T7;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:509
  T33 = countF30;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:509
  T45 = primitive_idQ(T33,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:509
  if (T45 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:510
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:510
      T24 = remaining_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:510
      T46 = primitive_instanceQ(T24,&KLpairGVKd);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:510
      if (T46 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:511
        T29 = remaining_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:511
        T8 = CALL1(&KheadVKd, T29);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:511
        T9 = CALL2(testF6, T8, value_);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:511
        if (T9 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:514
          T20 = prev_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:514
          if (T20 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:515
            T27 = remaining_;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:515
            T10 = CALL1(&KtailVKd, T27);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:515
            T21 = prev_;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:515
            CALL2(&Ktail_setterVKd, T10, T21);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:517
            T26 = remaining_;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:517
            T11 = CALL1(&KtailVKd, T26);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:517
            result_ = T11;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:514
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:519
          T32 = countF30;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:519
          T47 = primitive_cast_integer_as_raw(T32);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:519
          T48 = primitive_machine_word_subtract_signal_overflow(T47,4);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:519
          T49 = primitive_cast_raw_as_integer(T48);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:519
          countF30 = T49;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:520
          T31 = countF30;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:520
          T50 = primitive_cast_integer_as_raw(T31);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:520
          T51 = primitive_machine_word_equalQ(T50,1);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:520
          if (T51 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:520
            remaining_ = &KPempty_listVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:520
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:512
          T28 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:512
          prev_ = T28;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:511
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:522
        T25 = remaining_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:522
        T12 = CALL1(&KtailVKd, T25);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:522
        remaining_ = T12;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:510
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:510
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:510
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:525
    T23 = remaining_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:525
    T52 = primitive_idQ(T23,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:525
    if (T52 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:528
      T53.vector_element_[0] = l_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:528
      T13 = KlistVKdI(&T53);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:526
      T54.vector_element_[0] = &KJformat_string_;
      T54.vector_element_[1] = &K184;
      T54.vector_element_[2] = &KJformat_arguments_;
      T54.vector_element_[3] = T13;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:526
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T14 = CONGRUENT_CALL2(&KLimproper_list_errorGVKi, &T54);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:526
      KerrorVKdMM0I(T14, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:525
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:509
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:532
  T18 = result_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:532
  T15_0 = T18;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:501
  T16_0 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:501
  MV_SET_COUNT(1);
  return(T16_0);
}

D KreduceVKdMM1I (D fn_, D init_value_, D collection_) {
  D result_T, result_;
  D T5T, T5;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12_0;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:884
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
  result_T = init_value_;
  T5T = collection_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
    T5 = T5T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
    T8 = primitive_idQ(T5,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
      T9 = SLOT_VALUE_INITD(T5, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
      T6 = CALL2(fn_, result_, T9);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
      T11 = SLOT_VALUE_INITD(T5, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
      T12_0 = T11;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
      T10_0 = T12_0;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
      T13 = T10_0;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
      result_T = T6;
      T5T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:890
    T7_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:887
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:884
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kelement_setterVKdMM25I (D new_value_, D lst_, D key_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D lF14T, lF14;
  DWORD iF15T, iF15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:280
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
  lF14T = lst_;
  iF15T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
    lF14 = lF14T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
    iF15 = iF15T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
    T16 = primitive_cast_raw_as_integer(iF15);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:283
    T9 = primitive_instanceQ(lF14,&KLpairGVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:283
    if (T9 != &KPfalseVKi) {
      T8 = lF14;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
      T10 = primitive_idQ(T16,key_);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
        SLOT_VALUE_SETTER(new_value_, T8, 0);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
        T4 = new_value_;
        MV_SET_ELT(0, new_value_);
        MV_SET_COUNT(1);
        T5 = T4;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
        T11 = SLOT_VALUE_INITD(T8, 1);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
        T12 = primitive_machine_word_add_signal_overflow(iF15,4);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
        lF14T = T11;
        iF15T = T12;
        goto L0;
        T5 = T13;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
      T7 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:287
      T6 = Kelement_range_errorVKeI(lst_, key_);
      T7 = T6;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:283
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:285
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:280
  return(T7);
}

D Kelement_no_bounds_check_setterVKeMM25I (D new_value_, D lst_, D key_) {
  DWORD k_T, k_;
  D remain_T, remain_;
  D T6;
  D T7_0;
  DWORD T8;
  D T9;
  DWORD T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:297
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
  k_T = 1;
  remain_T = lst_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
    k_ = k_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
    remain_ = remain_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
    T8 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
    T9 = primitive_machine_word_less_thanQ(k_,T8);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
      T10 = primitive_machine_word_add_signal_overflow(k_,4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:300
      T11 = SLOT_VALUE_INITD(remain_, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
      T6 = T11;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
      k_T = T10;
      remain_T = T6;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:302
    SLOT_VALUE_SETTER(new_value_, remain_, 0);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:302
    T7_0 = new_value_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:299
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:297
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kcopy_sequenceVKdMM4I (D source_, D Urest_, D first_, D last_) {
  D firstF5;
  D T6;
  D T7T, T7;
  D resultF8T, resultF8;
  D lF9T, lF9;
  DWORD iF10T, iF10;
  D T11;
  D T12;
  D T13;
  D lF14T, lF14;
  D iF15T, iF15;
  D resultF16T, resultF16;
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
  D T29T, T29;
  D resultF30T, resultF30;
  D T31;
  D T32;
  D T33;
  D T34_0;
  D T35_0;
  DWORD T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41_0;
  D T42;
  D T43_0;
  D T44;
  D T45;
  D T46_0;
  DWORD T47;
  D T48;
  DWORD T49;
  D T50;
  D T51;
  D T52;
  D T53;
  DWORD T54;
  DWORD T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61_0;
  D T62;
  D T63_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:700
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:700
  primitive_type_check(first_, &KLintegerGVKd);
  firstF5 = first_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:704
  T36 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:704
  T37 = primitive_machine_word_equalQ(T36,1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:704
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:704
    T38 = primitive_idQ(last_,&Kunsupplied_objectVKi);
    T6 = T38;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:704
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:704
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
    T7T = source_;
    resultF8T = &KPempty_listVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
      T7 = T7T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
      resultF8 = resultF8T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
      T39 = primitive_idQ(T7,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
      if (T39 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        T40 = SLOT_VALUE_INITD(T7, 0);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        T42 = SLOT_VALUE_INITD(T7, 1);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        T43_0 = T42;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        T41_0 = T43_0;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        T44 = T41_0;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        T45 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        SLOT_VALUE_SETTER(T40, T45, 0);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        SLOT_VALUE_SETTER(resultF8, T45, 1);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
        T7T = T44;
        resultF8T = T45;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:707
      T46_0 = KreverseXVKdMM2I(resultF8);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:705
    T35_0 = T46_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:710
    T47 = primitive_cast_integer_as_raw(firstF5);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:710
    T48 = primitive_machine_word_less_thanQ(T47,1);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:710
    if (T48 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:710
      Kinvalid_sequence_start_errorVKiI(source_, firstF5);
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:710
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
    lF9T = source_;
    iF10T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
      lF9 = lF9T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
      iF10 = iF10T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:713
      T51 = primitive_cast_raw_as_integer(iF10);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:713
      T49 = primitive_cast_integer_as_raw(firstF5);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:713
      T50 = primitive_machine_word_less_thanQ(iF10,T49);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:713
      if (T50 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:713
        T53 = primitive_idQ(lF9,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:713
        T52 = primitive_not(T53);
        T12 = T52;
      } else {
        T12 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:713
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
        T11 = CALL1(&KtailVKd, lF9);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
        T54 = primitive_machine_word_add_signal_overflow(iF10,4);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
        lF9T = T11;
        iF10T = T54;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:715
      T55 = primitive_cast_integer_as_raw(firstF5);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:715
      T56 = primitive_machine_word_less_thanQ(iF10,T55);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:715
      if (T56 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:715
        Kinvalid_sequence_start_errorVKiI(source_, firstF5);
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:715
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:716
      T57 = primitive_idQ(last_,&Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:716
      if (T57 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T23 = CALL1(&Kforward_iteration_protocolVKd, lF9);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T24 = T23;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T25 = MV_GET_ELT(1);
;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T26 = MV_GET_ELT(2);
;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T27 = MV_GET_ELT(3);
;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T28 = MV_GET_ELT(5);
;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T29T = T24;
        resultF30T = &KPempty_listVKi;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
          T29 = T29T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
          resultF30 = resultF30T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
          T31 = CALL3(T27, lF9, T29, T25);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
          if (T31 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
            T32 = CALL2(T28, lF9, T29);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
            T33 = CALL2(T26, lF9, T29);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
            T62 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
            SLOT_VALUE_SETTER(T32, T62, 0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
            SLOT_VALUE_SETTER(resultF30, T62, 1);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
            T29T = T33;
            resultF30T = T62;
            goto L2;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:730
          T63_0 = KreverseXVKdMM2I(resultF30);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:728
        T34_0 = T63_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:717
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T13 = CONGRUENT_CALL2(last_, firstF5);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:717
        if (T13 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:718
          Kinvalid_sequence_bounds_errorVKiI(source_, firstF5, last_);
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:717
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
        lF14T = lF9;
        iF15T = T51;
        resultF16T = &KPempty_listVKi;
      L3: ;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
          lF14 = lF14T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
          iF15 = iF15T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
          resultF16 = resultF16T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:722
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T20 = CONGRUENT_CALL2(iF15, last_);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:722
          if (T20 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:722
            T59 = primitive_idQ(lF14,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:722
            T58 = primitive_not(T59);
            T21 = T58;
          } else {
            T21 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:722
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
          if (T21 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
            T17 = CALL1(&KtailVKd, lF14);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T18 = CONGRUENT_CALL2(iF15, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:721
            T19 = CALL1(&KheadVKd, lF14);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:721
            T60 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:721
            SLOT_VALUE_SETTER(T19, T60, 0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:721
            SLOT_VALUE_SETTER(resultF16, T60, 1);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
            lF14T = T17;
            iF15T = T18;
            resultF16T = T60;
            goto L3;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:724
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T22 = CONGRUENT_CALL2(iF15, last_);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:724
          if (T22 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:724
            Kinvalid_sequence_end_errorVKiI(source_, last_);
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:724
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:725
          T61_0 = KreverseXVKdMM2I(resultF16);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:719
        T34_0 = T61_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:716
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:711
    T35_0 = T34_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:704
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:700
  MV_SET_COUNT(1);
  return(T35_0);
}

D KreverseVKdMM2I (D l_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D lF10T, lF10;
  D ansF11T, ansF11;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:792
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
  lF10T = l_;
  ansF11T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
    lF10 = lF10T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
    ansF11 = ansF11T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:794
    T5 = primitive_instanceQ(lF10,&KLpairGVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:794
    if (T5 != &KPfalseVKi) {
      T4 = lF10;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
      T6 = SLOT_VALUE_INITD(T4, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
      T7 = SLOT_VALUE_INITD(T4, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
      T8 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
      SLOT_VALUE_SETTER(T7, T8, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
      SLOT_VALUE_SETTER(ansF11, T8, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
      lF10T = T6;
      ansF11T = T8;
      goto L0;
      T3 = T9;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:798
      T2 = ansF11;
      MV_SET_ELT(0, ansF11);
      MV_SET_COUNT(1);
      T3 = T2;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:794
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:796
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:792
  return(T3);
}

D Kconcatenate_asVKdMM4I (D type_, D first_seq_, D rest_seqs_) {
  DWORD T4T, T4;
  D T5;
  D T6_0;
  D acc_;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:869
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:872
  acc_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
  T10 = SLOT_VALUE_INITD(rest_seqs_, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
  T12 = primitive_machine_word_subtract_signal_overflow(T11,4);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
  T4T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
    T4 = T4T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
    T13 = primitive_machine_word_equalQ(T4,-3);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
      T14 = REPEATED_D_SLOT_VALUE_TAGGED(rest_seqs_, 1, T4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:874
      T9 = acc_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:874
      CONGRUENT_CALL_PROLOG(&Kconcatenate_as_twoVKi, 3);
      T5 = CONGRUENT_CALL3(&KLlistGVKd, T14, T9);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:874
      acc_ = T5;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
      T15 = primitive_machine_word_subtract_signal_overflow(T4,4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
      T4T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:873
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:876
  T8 = acc_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:876
  ENGINE_NODE_CALL_PROLOG(&Kconcatenate_as_twoVKi, &K174, 3);
  T16_0 = ENGINE_NODE_CALL3(&K174, &KLlistGVKd, first_seq_, T8);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:869
  T6_0 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:869
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kremove_duplicatesVKdMM1I (D l_, D Urest_, D test_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D next_;
  D T10;
  D T11;
  D new_;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D result_;
  D T18;
  D prev_;
  D T20;
  D T21;
  D remaining_;
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
  _KLsimple_object_vectorGVKd_1 T33 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_1 T34 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T35;
  _KLsimple_object_vectorGVKd_1 T36 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T37 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:540
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:542
  result_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:543
  prev_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:544
  remaining_ = l_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:546
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:546
    T24 = remaining_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:546
    T32 = primitive_instanceQ(T24,&KLpairGVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:546
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      T31 = remaining_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      T4 = CALL1(&KheadVKd, T31);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      T30 = remaining_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      T5 = CALL1(&KtailVKd, T30);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      T6 = CALL4(&KmemberQVKd, T4, T5, &KJtest_, test_);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:548
        T29 = remaining_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:548
        T7 = CALL1(&KtailVKd, T29);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:548
        remaining_ = T7;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
        T20 = prev_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
        if (T20 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:550
          T28 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:550
          T8 = CALL1(&KheadVKd, T28);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:550
          T33.vector_element_[0] = T8;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:550
          next_ = KlistVKdI(&T33);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:551
          T21 = prev_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:551
          CALL2(&Ktail_setterVKd, next_, T21);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:552
          prev_ = next_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:553
          T27 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:553
          T10 = CALL1(&KtailVKd, T27);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:553
          remaining_ = T10;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:555
          T26 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:555
          T11 = CALL1(&KheadVKd, T26);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:555
          T34.vector_element_[0] = T11;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:555
          new_ = KlistVKdI(&T34);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:556
          result_ = new_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:557
          prev_ = new_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:558
          T25 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:558
          T13 = CALL1(&KtailVKd, T25);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:558
          remaining_ = T13;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:547
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:546
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:546
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:546
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:562
  T23 = remaining_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:562
  T35 = primitive_idQ(T23,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:562
  if (T35 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:565
    T36.vector_element_[0] = l_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:565
    T14 = KlistVKdI(&T36);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:563
    T37.vector_element_[0] = &KJformat_string_;
    T37.vector_element_[1] = &K173;
    T37.vector_element_[2] = &KJformat_arguments_;
    T37.vector_element_[3] = T14;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:563
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T15 = CONGRUENT_CALL2(&KLimproper_list_errorGVKi, &T37);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:563
    KerrorVKdMM0I(T15, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:562
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:568
  T18 = result_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:568
  T16_0 = T18;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:540
  MV_SET_COUNT(1);
  return(T16_0);
}

D KremoveVKdMM6I (D l_, D value_, D Urest_, D test_, D count_) {
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D t_;
  D T17_0;
  D T18_0;
  D rev_accumulator_;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D remaining_;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D result_;
  D T34;
  D T35;
  D countF36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42_0;
  D T43_0;
  D T44;
  _KLsimple_object_vectorGVKd_4 T45 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T46;
  D T47;
  _KLsimple_object_vectorGVKd_1 T48 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T49 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T50;
  D T51;
  D T52;
  DWORD T53;
  DWORD T54;
  D T55;
  DWORD T56;
  D T57;
  D T58;
  D T59;
  _KLsimple_object_vectorGVKd_1 T60 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T61 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T62;
  D T63_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:418
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:421
  rev_accumulator_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:422
  remaining_ = l_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:423
  result_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
  if (count_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    T46 = primitive_instanceQ(count_,&KLintegerGVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    if (T46 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      T45.vector_element_[0] = &KJvalue_;
      T45.vector_element_[1] = count_;
      T45.vector_element_[2] = &KJtype_;
      T45.vector_element_[3] = &KLintegerGVKd;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T44 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T45);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T44, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T47 = CONGRUENT_CALL2(count_, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    if (T47 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      T48.vector_element_[0] = count_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      T40 = KlistVKdI(&T48);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      T49.vector_element_[0] = &KJformat_string_;
      T49.vector_element_[1] = &K168;
      T49.vector_element_[2] = &KJformat_arguments_;
      T49.vector_element_[3] = T40;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T41 = CONGRUENT_CALL2(&KLnatural_number_errorGVKi, &T49);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
      KerrorVKdMM0I(T41, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    T42_0 = count_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    T43_0 = T42_0;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
    T50 = T43_0;
    T6 = T50;
  } else {
    T6 = (D) -3;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:424
  countF36 = T6;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:426
  T39 = countF36;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:426
  T51 = primitive_idQ(T39,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:426
  if (T51 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:426
    T7_0 = l_;
    T18_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:428
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:428
      T27 = remaining_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:428
      T52 = primitive_instanceQ(T27,&KLpairGVKd);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:428
      if (T52 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:429
        T8 = test_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:429
        T32 = remaining_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:429
        T9 = CALL1(&KheadVKd, T32);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:429
        T10 = CALL2(T8, T9, value_);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:429
        if (T10 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:430
          T31 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:430
          T11 = CALL1(&KtailVKd, T31);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:430
          remaining_ = T11;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:431
          T38 = countF36;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:431
          T53 = primitive_cast_integer_as_raw(T38);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:431
          T54 = primitive_machine_word_subtract_signal_overflow(T53,4);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:431
          T55 = primitive_cast_raw_as_integer(T54);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:431
          countF36 = T55;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:432
          T37 = countF36;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:432
          T56 = primitive_cast_integer_as_raw(T37);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:432
          T57 = primitive_machine_word_equalQ(T56,1);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:432
          if (T57 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:433
            T30 = remaining_;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:433
            result_ = T30;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:434
            remaining_ = &KPempty_listVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:432
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:437
          T29 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:437
          T12 = CALL1(&KheadVKd, T29);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:437
          T24 = rev_accumulator_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:437
          T58 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:437
          SLOT_VALUE_SETTER(T12, T58, 0);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:437
          SLOT_VALUE_SETTER(T24, T58, 1);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:437
          rev_accumulator_ = T58;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:438
          T28 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:438
          T13 = CALL1(&KtailVKd, T28);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:438
          remaining_ = T13;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:429
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:428
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:428
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:428
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:442
    T26 = remaining_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:442
    T59 = primitive_idQ(T26,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:442
    if (T59 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:445
      T60.vector_element_[0] = l_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:445
      T14 = KlistVKdI(&T60);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:443
      T61.vector_element_[0] = &KJformat_string_;
      T61.vector_element_[1] = &K169;
      T61.vector_element_[2] = &KJformat_arguments_;
      T61.vector_element_[3] = T14;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:443
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T15 = CONGRUENT_CALL2(&KLimproper_list_errorGVKi, &T61);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:443
      KerrorVKdMM0I(T15, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:442
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:448
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:448
      T20 = rev_accumulator_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:448
      T62 = primitive_idQ(T20,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:448
      if (T62 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:449
        T23 = rev_accumulator_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:449
        t_ = CALL1(&KtailVKd, T23);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:450
        T35 = result_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:450
        T22 = rev_accumulator_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:450
        CALL2(&Ktail_setterVKd, T35, T22);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:451
        T21 = rev_accumulator_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:451
        result_ = T21;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:452
        rev_accumulator_ = t_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:448
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:448
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:448
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:455
    T34 = result_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:455
    T17_0 = T34;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:455
    T63_0 = T17_0;
    T18_0 = T63_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:426
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:418
  MV_SET_COUNT(1);
  return(T18_0);
}

D KaddVKdMM3I (D list_, D value_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:368
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:369
  T3 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:369
  SLOT_VALUE_SETTER(value_, T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:369
  SLOT_VALUE_SETTER(list_, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:369
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:368
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kconcatenate_as_twoVKiMM1I (D type_, D first_seq_, D second_seq_) {
  D T4;
  D T5_0;
  D l_;
  D T7;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15T, T15;
  D revcpyF16T, revcpyF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22_0;
  D T23_0;
  D revcpyF24;
  D T25;
  D T26;
  D T27;
  D result_;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33_0;
  D T34_0;
  D T35_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:840
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:843
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T4 = CONGRUENT_CALL1(second_seq_);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:843
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:844
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T5_0 = CONGRUENT_CALL2(&KLlistGVKd, first_seq_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:844
    T33_0 = T5_0;
    T23_0 = T33_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:846
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    l_ = CONGRUENT_CALL2(&KLlistGVKd, second_seq_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:847
    CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
    T7 = CONGRUENT_CALL1(first_seq_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:847
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:848
      T8_0 = l_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:848
      T34_0 = T8_0;
      T22_0 = T34_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
      T9 = CONGRUENT_CALL1(first_seq_);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      T10 = T9;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      T11 = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      T12 = MV_GET_ELT(2);
;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      T13 = MV_GET_ELT(3);
;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      T14 = MV_GET_ELT(5);
;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      T15T = T10;
      revcpyF16T = &KPempty_listVKi;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
        T15 = T15T;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
        revcpyF16 = revcpyF16T;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
        revcpyF24 = revcpyF16;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
        T17 = CALL3(T13, first_seq_, T15, T11);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
        if (T17 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
          T18 = CALL2(T14, first_seq_, T15);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
          T19 = CALL2(T12, first_seq_, T15);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
          T27 = revcpyF24;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
          T31 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
          SLOT_VALUE_SETTER(T18, T31, 0);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
          SLOT_VALUE_SETTER(T27, T31, 1);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
          T15T = T19;
          revcpyF16T = T31;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:853
        result_ = l_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:854
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:854
          T25 = revcpyF24;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:854
          T32 = primitive_idQ(T25,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:854
          if (T32 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:855
            T26 = revcpyF24;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:855
            T20 = CALL1(&KtailVKd, T26);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:855
            revcpyF24 = T20;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:855
            T30 = result_;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:855
            CALL2(&Ktail_setterVKd, T30, T26);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:856
            result_ = T26;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:854
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:854
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:854
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:858
        T29 = result_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:858
        T21_0 = T29;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:851
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:858
      T35_0 = T21_0;
      T22_0 = T35_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:847
    T23_0 = T22_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:843
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:840
  MV_SET_COUNT(1);
  return(T23_0);
}

D KlastVKdMM1I (D lst_, D Urest_, D default_) {
  D T4_0;
  D T5_0;
  D T6_0;
  D sub_list_T, sub_list_;
  D T8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:609
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:611
  T10 = primitive_idQ(lst_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:611
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:612
    T11 = primitive_idQ(default_,&Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:612
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:613
      T4_0 = Kelement_range_errorVKeI(lst_, (D) 1);
      T6_0 = T4_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:615
      T5_0 = default_;
      T6_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:612
    T9_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
    sub_list_T = lst_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
      sub_list_ = sub_list_T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:619
      T12 = SLOT_VALUE_INITD(sub_list_, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:619
      T13 = primitive_instanceQ(T12,&KLpairGVKd);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
        T14 = SLOT_VALUE_INITD(sub_list_, 1);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
        T8 = T14;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
        sub_list_T = T8;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:621
      T15 = SLOT_VALUE_INITD(sub_list_, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:621
      T16_0 = T15;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:618
    T9_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:611
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:609
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kreplace_subsequenceXVKdMM4I (D target_, D insert_, D Urest_, D start_, D last_) {
  D startF6;
  DWORD i_T, i_;
  D T8;
  D T9;
  D T10;
  D T11;
  D after_hole_T, after_hole_;
  D index_T, index_;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23T, T23;
  D T24;
  D T25;
  D T26;
  D T27_0;
  D lastF28;
  D T29;
  D T30;
  D prev_;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  D T42_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:742
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:742
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:742
  lastF28 = last_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:746
  T36 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:746
  SLOT_VALUE_SETTER(&KPfalseVKi, T36, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:746
  SLOT_VALUE_SETTER(target_, T36, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:747
  prev_ = T36;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
  i_T = 5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
    T37 = primitive_cast_integer_as_raw(startF6);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
    T38 = primitive_machine_word_less_thanQ(T37,i_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
    if (T38 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:750
      T35 = prev_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:750
      T8 = CALL1(&KtailVKd, T35);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:750
      prev_ = T8;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
      T39 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
      i_T = T39;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:749
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:753
  T30 = lastF28;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:753
  if (T30 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:754
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T9 = CONGRUENT_CALL1(insert_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:754
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T10 = CONGRUENT_CALL2(startF6, T9);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:754
    lastF28 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:753
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
  T34 = prev_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
  T11 = CALL1(&KtailVKd, T34);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
  after_hole_T = T11;
  index_T = startF6;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
    after_hole_ = after_hole_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:760
    T29 = lastF28;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:760
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T16 = CONGRUENT_CALL2(index_, T29);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
      T14 = CALL1(&KtailVKd, after_hole_);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:759
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T15 = CONGRUENT_CALL2(index_, (D) 5);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
      after_hole_T = T14;
      index_T = T15;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:758
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T17 = CONGRUENT_CALL1(insert_);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  T18 = T17;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  T19 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  T20 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  T21 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  T22 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  T23T = T18;
L2: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
    T23 = T23T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
    T24 = CALL3(T21, insert_, T23, T19);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
    if (T24 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
      T25 = CALL2(T22, insert_, T23);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:766
      T40 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:766
      SLOT_VALUE_SETTER(T25, T40, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:766
      SLOT_VALUE_SETTER(&KPfalseVKi, T40, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:767
      T33 = prev_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:767
      CALL2(&Ktail_setterVKd, T40, T33);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:768
      prev_ = T40;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
      T26 = CALL2(T20, insert_, T23);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
      T23T = T26;
      goto L2;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:765
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:771
  T32 = prev_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:771
  CALL2(&Ktail_setterVKd, after_hole_, T32);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:772
  T41 = SLOT_VALUE_INITD(T36, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:772
  T42_0 = T41;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:742
  T27_0 = T42_0;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:742
  MV_SET_COUNT(1);
  return(T27_0);
}

D Kremove_duplicatesXVKdMM1I (D l_, D Urest_, D test_) {
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
  D T14_0;
  D T15_0;
  D result_;
  D T17;
  D prev_;
  D T19;
  D T20;
  D remaining_;
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
  _KLsimple_object_vectorGVKd_1 T34 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T35 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:576
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:578
  result_ = l_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:579
  prev_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:580
  remaining_ = l_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:582
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:582
    T23 = remaining_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:582
    T32 = primitive_instanceQ(T23,&KLpairGVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:582
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      T31 = remaining_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      T4 = CALL1(&KheadVKd, T31);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      T30 = remaining_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      T5 = CALL1(&KtailVKd, T30);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      T6 = CALL4(&KmemberQVKd, T4, T5, &KJtest_, test_);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
        T19 = prev_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
        if (T19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:587
          T27 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:587
          T8 = CALL1(&KtailVKd, T27);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:587
          T20 = prev_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:587
          CALL2(&Ktail_setterVKd, T8, T20);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:588
          T26 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:588
          T9 = CALL1(&KtailVKd, T26);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:588
          remaining_ = T9;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:590
          T25 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:590
          T10 = CALL1(&KtailVKd, T25);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:590
          result_ = T10;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:591
          T24 = remaining_;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:591
          T11 = CALL1(&KtailVKd, T24);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:591
          remaining_ = T11;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:584
        T29 = remaining_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:584
        prev_ = T29;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:585
        T28 = remaining_;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:585
        T7 = CALL1(&KtailVKd, T28);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:585
        remaining_ = T7;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:583
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:582
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:582
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:582
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:595
  T22 = remaining_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:595
  T33 = primitive_idQ(T22,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:595
  if (T33 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:598
    T34.vector_element_[0] = l_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:598
    T12 = KlistVKdI(&T34);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:596
    T35.vector_element_[0] = &KJformat_string_;
    T35.vector_element_[1] = &K140;
    T35.vector_element_[2] = &KJformat_arguments_;
    T35.vector_element_[3] = T12;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:596
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T13 = CONGRUENT_CALL2(&KLimproper_list_errorGVKi, &T35);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:596
    KerrorVKdMM0I(T13, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:595
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:601
  T17 = result_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:601
  T14_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:576
  T15_0 = T14_0;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:576
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kadd_newXVKdMM3I (D list_, D new_element_, D Urest_, D test_) {
  D testF5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:401
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:404
  T6 = KxmemberQVKiI(list_, new_element_, testF5);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:404
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:405
    T7_0 = list_;
    T8_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:407
    T9 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:407
    SLOT_VALUE_SETTER(new_element_, T9, 0);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:407
    SLOT_VALUE_SETTER(list_, T9, 1);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:407
    T10_0 = T9;
    T8_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:404
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:401
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kadd_newVKdMM3I (D list_, D new_element_, D Urest_, D test_) {
  D testF5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:386
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:386
  primitive_type_check(test_, &KLfunctionGVKd);
  testF5 = test_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:389
  T6 = KxmemberQVKiI(list_, new_element_, testF5);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:389
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:390
    T7_0 = list_;
    T8_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:392
    T9 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:392
    SLOT_VALUE_SETTER(new_element_, T9, 0);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:392
    SLOT_VALUE_SETTER(list_, T9, 1);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:392
    T10_0 = T9;
    T8_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:389
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:386
  MV_SET_COUNT(1);
  return(T8_0);
}

D Klast_setterVKdMM1I (D new_value_, D lst_) {
  D T3_0;
  D sub_list_T, sub_list_;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:631
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:632
  T9 = primitive_idQ(lst_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:632
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:633
    T3_0 = Kelement_range_errorVKeI(lst_, (D) 1);
    T8_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
    sub_list_T = lst_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
      sub_list_ = sub_list_T;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:636
      T10 = SLOT_VALUE_INITD(sub_list_, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:636
      CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
      T6 = CONGRUENT_CALL1(T10);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
      if (T6 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
        T11 = SLOT_VALUE_INITD(sub_list_, 1);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
        T5 = T11;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
        sub_list_T = T5;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:638
      SLOT_VALUE_SETTER(new_value_, sub_list_, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:638
      T7_0 = new_value_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:635
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:632
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:631
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kthird_setterVKdMM1I (D value_, D sequence_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:132
  T3_0 = Kelement_range_errorVKeI(sequence_, (D) 9);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:130
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kthird_setterVKdMM2I (D value_, D sequence_) {
  D T3_0;
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:926
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
  T4 = SLOT_VALUE_INITD(sequence_, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
  T7 = SLOT_VALUE_INITD(T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
  T8 = primitive_instanceQ(T7,&KLpairGVKd);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
    T6 = T7;
    T10 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
    T5_0 = Kelement_range_errorVKeI(T7, (D) 9);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
    T9 = T5_0;
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
  SLOT_VALUE_SETTER(value_, T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:928
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:926
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksecond_setterVKdMM1I (D value_, D sequence_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:125
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:127
  T3_0 = Kelement_range_errorVKeI(sequence_, (D) 5);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:125
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksecond_setterVKdMM2I (D value_, D sequence_) {
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:921
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
  T6 = SLOT_VALUE_INITD(sequence_, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
  T7 = primitive_instanceQ(T6,&KLpairGVKd);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
    T5 = T6;
    T9 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
    T4_0 = Kelement_range_errorVKeI(T6, (D) 5);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
    T8 = T4_0;
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
  SLOT_VALUE_SETTER(value_, T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:923
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:921
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kfirst_setterVKdMM1I (D value_, D sequence_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:122
  T3_0 = Kelement_range_errorVKeI(sequence_, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:120
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kfirst_setterVKdMM2I (D value_, D sequence_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:906
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:908
  SLOT_VALUE_SETTER(value_, sequence_, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:908
  T3_0 = value_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:906
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM35I (D class_, D Urest_, D size_, D fill_) {
  DWORD i_T, i_;
  D result_T, result_;
  D T7;
  D T8_0;
  DWORD T9;
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
  i_T = 1;
  result_T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
    T10 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T7 = CONGRUENT_CALL2(T10, size_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
      T9 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:109
      T11 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:109
      SLOT_VALUE_SETTER(fill_, T11, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:109
      SLOT_VALUE_SETTER(result_, T11, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
      i_T = T9;
      result_T = T11;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:111
    T8_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:106
  MV_SET_COUNT(1);
  return(T8_0);
}

D KmakeVKdMM36I (D class_, D Urest_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:115
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:117
  T3_0 = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:115
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM60I (D class_, D list_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:75
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:76
  T3_0 = list_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:75
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM61I (D class_, D collection_) {
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
  D result_;
  D T14;
  D T15;
  D T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:79
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:81
  result_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T3 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  T4 = T3;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  T5 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  T6 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  T7 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  T9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
    T10 = CALL3(T7, collection_, T9, T5);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
      T11 = CALL2(T8, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:83
      T15 = result_;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:83
      T16 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:83
      SLOT_VALUE_SETTER(T11, T16, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:83
      SLOT_VALUE_SETTER(T15, T16, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:83
      result_ = T16;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
      T12 = CALL2(T6, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:85
  T14 = result_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:85
  T17_0 = KreverseXVKdMM2I(T14);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:79
  MV_SET_COUNT(1);
  return(T17_0);
}

D KasVKdMM62I (D class_, D v_) {
  D result_T, result_;
  DWORD index_T, index_;
  D T5_0;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:91
  T6 = SLOT_VALUE_INITD(v_, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:91
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:91
  T8 = primitive_machine_word_subtract_signal_overflow(T7,4);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
  result_T = &KPempty_listVKi;
  index_T = T8;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
    index_ = index_T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
    T9 = primitive_machine_word_less_thanQ(index_,1);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
    if (T9 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
      T10 = REPEATED_D_SLOT_VALUE_TAGGED(v_, 1, index_);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
      T11 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
      SLOT_VALUE_SETTER(T10, T11, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
      SLOT_VALUE_SETTER(result_, T11, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
      T12 = primitive_machine_word_add_signal_overflow(index_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
      result_T = T11;
      index_T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:93
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:90
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:88
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM63I (D class_, D collection_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:97
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:98
  T3_0 = collection_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:97
  MV_SET_COUNT(1);
  return(T3_0);
}

D KxmemberQVKiI (D list_, D value_, D test_) {
  DADDR T3;
  DWORD T4;
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
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D xF24T, xF24;
  D T25;
  D mm_wrapperF26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D mm_wrapperF31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D Utmp_;
  DADDR T41;
  DWORD T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D mm_wrapperF50;
  D T51;
  D T52;
  D T53;
  D T54;
  D xF55T, xF55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D xF66T, xF66;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:354
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:355
  T11 = primitive_idQ(list_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:355
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:355
    T9_0 = &KPfalseVKi;
    T10_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
    T12 = primitive_idQ(test_,&KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
      T3 = primitive_cast_pointer_as_raw(value_);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
      T4 = primitive_machine_word_logand(T3,3);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
      T5 = primitive_machine_word_equalQ(T4,0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        T25 = primitive_element(value_,0,0);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        mm_wrapperF26 = T25;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        T27 = SLOT_VALUE_INITD(mm_wrapperF26, 1);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        T28 = primitive_cast_integer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        T29 = primitive_machine_word_logbitQ(2,T28);
        T6 = T29;
      } else {
        T6 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        T30 = primitive_element(value_,0,0);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        mm_wrapperF31 = T30;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
        T32 = SLOT_VALUE_INITD(mm_wrapperF31, 0);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        xF55T = list_;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          xF55 = xF55T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          T38 = primitive_instanceQ(xF55,&KLpairGVKd);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          if (T38 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:389
            T37 = xF55;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T39 = SLOT_VALUE_INITD(T37, 0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
            Utmp_ = primitive_idQ(T39,value_);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
            if (Utmp_ != &KPfalseVKi) {
              T48 = Utmp_;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
              T41 = primitive_cast_pointer_as_raw(T39);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
              T42 = primitive_machine_word_logand(T41,3);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
              T43 = primitive_machine_word_equalQ(T42,0);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
              if (T43 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
                T49 = primitive_element(T39,0,0);
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
                mm_wrapperF50 = T49;
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
                T51 = SLOT_VALUE_INITD(mm_wrapperF50, 0);
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
                T52 = primitive_idQ(T51,T32);
                T44 = T52;
              } else {
                T44 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
              if (T44 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
                CONGRUENT_CALL_PROLOG(&KEVKd, 2);
                T45 = CONGRUENT_CALL2(T39, value_);
                // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
                T46 = T45;
                T47 = T46;
              } else {
                T47 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
              T48 = T47;
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            if (T48 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
              T33 = &KPtrueVKi;
              MV_SET_ELT(0, &KPtrueVKi);
              MV_SET_COUNT(1);
              T34 = T33;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
              T53 = SLOT_VALUE_INITD(T37, 1);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
              xF55T = T53;
              goto L0;
              T34 = T54;
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T36 = T34;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T35 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T36 = T35;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        T7_0 = T36;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        xF66T = list_;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          xF66 = xF66T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          T61 = primitive_instanceQ(xF66,&KLpairGVKd);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          if (T61 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:389
            T60 = xF66;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T62 = SLOT_VALUE_INITD(T60, 0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
            T63 = primitive_idQ(T62,value_);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            if (T63 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
              T56 = &KPtrueVKi;
              MV_SET_ELT(0, &KPtrueVKi);
              MV_SET_COUNT(1);
              T57 = T56;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
              T64 = SLOT_VALUE_INITD(T60, 1);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
              xF66T = T64;
              goto L1;
              T57 = T65;
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T59 = T57;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T58 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T59 = T58;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        T7_0 = T59;
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
      T8_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
      xF24T = list_;
    L2: ;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        xF24 = xF24T;
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        T18 = primitive_instanceQ(xF24,&KLpairGVKd);
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:389
          T17 = xF24;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          T19 = SLOT_VALUE_INITD(T17, 0);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
          T20 = CALL2(test_, T19, value_);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          T21 = T20;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          if (T21 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T13 = &KPtrueVKi;
            MV_SET_ELT(0, &KPtrueVKi);
            MV_SET_COUNT(1);
            T14 = T13;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            T22 = SLOT_VALUE_INITD(T17, 1);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
            xF24T = T22;
            goto L2;
            T14 = T23;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          T16 = T14;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
          T15 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T16 = T15;
        }
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:358
      T8_0 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:356
    T10_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:355
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:354
  MV_SET_COUNT(1);
  return(T10_0);
}

D KLimproper_list_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:416
  T5 = primitive_object_allocate_filled(3,&KLimproper_list_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:416
  MV_SET_COUNT(1);
  return(T6_0);
}

D Klist_next_stateVKiI (D collection_, D state_) {
  D T2_0;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:648
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:650
  T3 = SLOT_VALUE_INITD(state_, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:650
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:648
  T2_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:648
  MV_SET_COUNT(1);
  return(T2_0);
}

D Klist_finished_stateQVKiI (D collection_, D state_, D limit_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:653
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:655
  T3 = primitive_idQ(state_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:655
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:653
  MV_SET_COUNT(1);
  return(T4_0);
}

D Klist_current_keyVKiI (D collection_, D state_) {
  D T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  D lF9T, lF9;
  D T10;
  DWORD kF11T, kF11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:658
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
  lF9T = collection_;
  kF11T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
    lF9 = lF9T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
    T10 = lF9;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
    kF11 = kF11T;
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
    T12 = primitive_cast_raw_as_integer(kF11);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:661
    T5 = primitive_idQ(T10,state_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:661
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:662
      T3 = T12;
      MV_SET_ELT(0, T12);
      MV_SET_COUNT(1);
      T4 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
      T6 = SLOT_VALUE_INITD(T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
      T7 = primitive_machine_word_add_signal_overflow(kF11,4);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
      lF9T = T6;
      kF11T = T7;
      goto L0;
      T4 = T8;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:661
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:664
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:658
  return(T4);
}

D Klist_current_elementVKiI (D collection_, D state_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:669
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:671
  T2 = SLOT_VALUE_INITD(state_, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:671
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:669
  MV_SET_COUNT(1);
  return(T3_0);
}

D Klist_current_element_setterVKiI (D new_value_, D collection_, D state_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:674
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:676
  SLOT_VALUE_SETTER(new_value_, state_, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:676
  T3_0 = new_value_;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:674
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kmember_eqlQVKiI (D value_, D list_) {
  volatile DADDR T2;
  volatile DWORD T3;
  volatile D T4;
  volatile D T5;
  volatile D returnPexit_0_;
  volatile D T7;
  volatile D T8T, T8;
  volatile DADDR T9;
  volatile DWORD T10;
  volatile D T11;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D T15;
  volatile D T16_0;
  volatile D returnPexit_1_;
  volatile D T18;
  volatile D T19T, T19;
  volatile D T20;
  volatile D T21;
  volatile D T22_0;
  volatile D T23_0;
  volatile D T24_0;
  volatile D T25_0;
  volatile D T26;
  volatile D T27;
  volatile D mm_wrapperF28;
  volatile D T29;
  volatile DWORD T30;
  volatile D T31;
  volatile D T32;
  volatile D mm_wrapperF33;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D mm_wrapperF38;
  volatile D T39;
  volatile D T40;
  volatile _KLsimple_object_vectorGVKd_1 T41 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T42;
  volatile D T43_0;
  volatile D T44;
  volatile D T45_0;
  volatile D T46;
  volatile D T47;
  volatile D T48;
  volatile _KLsimple_object_vectorGVKd_1 T49 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T50;
  volatile D T51_0;
  volatile D T52;
  volatile D T53_0;
  volatile D T54;
  volatile D T55_0;
  volatile D T56_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:330
  T26 = primitive_idQ(list_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:330
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:330
    T24_0 = &KPfalseVKi;
    T25_0 = T24_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
    T2 = primitive_cast_pointer_as_raw(value_);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
    T3 = primitive_machine_word_logand(T2,3);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
    T4 = primitive_machine_word_equalQ(T3,0);
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
      T27 = primitive_element(value_,0,0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
      mm_wrapperF28 = T27;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
      T29 = SLOT_VALUE_INITD(mm_wrapperF28, 1);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
      T30 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
      T31 = primitive_machine_word_logbitQ(2,T30);
      T5 = T31;
    } else {
      T5 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:332
      T32 = primitive_element(value_,0,0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:332
      mm_wrapperF33 = T32;
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:332
      T34 = SLOT_VALUE_INITD(mm_wrapperF33, 0);
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:333
      ENTER_EXIT_FRAME(returnPexit_0_);
      if (nlx_setjmp(FRAME_DEST(returnPexit_0_))) {
            T16_0 = FRAME_RETVAL(returnPexit_0_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
        T8T = list_;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
          T8 = T8T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
          T35 = primitive_idQ(T8,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
          if (T35 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
            T36 = SLOT_VALUE_INITD(T8, 0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            T9 = primitive_cast_pointer_as_raw(T36);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            T10 = primitive_machine_word_logand(T9,3);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            T11 = primitive_machine_word_equalQ(T10,0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            if (T11 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:336
              T37 = primitive_element(T36,0,0);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:336
              mm_wrapperF38 = T37;
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:336
              T39 = SLOT_VALUE_INITD(mm_wrapperF38, 0);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:336
              T40 = primitive_idQ(T39,T34);
              T12 = T40;
            } else {
              T12 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            if (T12 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:337
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T13 = CONGRUENT_CALL2(value_, T36);
              T14 = T13;
            } else {
              T14 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            if (T14 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:338
              T41.vector_element_[0] = &KPtrueVKi;
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:333
              T42 = MV_SET_REST_AT(&T41, 0);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:333
              NLX(returnPexit_0_, T42);
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:335
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
            T44 = SLOT_VALUE_INITD(T8, 1);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
            T45_0 = T44;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
            T43_0 = T45_0;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
            T46 = T43_0;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
            T8T = T46;
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
          T15 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:334
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:333
      T16_0 = T15;
        /* invalidate returnPexit_0_ */
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:333
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:333
      T55_0 = T16_0;
      T23_0 = T55_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:343
      ENTER_EXIT_FRAME(returnPexit_1_);
      if (nlx_setjmp(FRAME_DEST(returnPexit_1_))) {
            T22_0 = FRAME_RETVAL(returnPexit_1_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
        T19T = list_;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
          T19 = T19T;
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
          T47 = primitive_idQ(T19,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
          if (T47 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
            T48 = SLOT_VALUE_INITD(T19, 0);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:345
            T20 = primitive_idQ(value_,T48);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:345
            if (T20 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:346
              T49.vector_element_[0] = &KPtrueVKi;
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:343
              T50 = MV_SET_REST_AT(&T49, 0);
              // /opt/opendylan-2013.1/sources/dylan/list.dylan:343
              NLX(returnPexit_1_, T50);
            }
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:345
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
            T52 = SLOT_VALUE_INITD(T19, 1);
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
            T53_0 = T52;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
            T51_0 = T53_0;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
            T54 = T51_0;
            // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
            T19T = T54;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
          T21 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          // /opt/opendylan-2013.1/sources/dylan/list.dylan:344
        // /opt/opendylan-2013.1/sources/dylan/list.dylan:343
      T22_0 = T21;
        /* invalidate returnPexit_1_ */
      }
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:343
      // /opt/opendylan-2013.1/sources/dylan/list.dylan:343
      T56_0 = T22_0;
      T23_0 = T56_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/list.dylan:331
    T25_0 = T23_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:330
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:329
  MV_SET_COUNT(1);
  return(T25_0);
}

D KpairVKdI (D head_, D tail_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/list.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:24
  T3 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:24
  SLOT_VALUE_SETTER(head_, T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:24
  SLOT_VALUE_SETTER(tail_, T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:24
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/list.dylan:23
  MV_SET_COUNT(1);
  return(T4_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_list_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_list_for_user () {
  return;
}


/* eof */
