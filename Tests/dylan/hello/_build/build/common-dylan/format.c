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
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_byte_character_vectorGVKe;

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
} _KLstringGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(44);
define__KLbyte_stringGVKd(47);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(56);
define__KLbyte_stringGVKd(42);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(1);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(35);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(36);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
} _KLnumberGVKd;

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

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLconditionGVKd;

typedef struct {
  D wrapper;
} _KLlocatorGYlocators_protocolVcommon_dylan;

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
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

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
} _KLmethodGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

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
  DDFLT Pdouble_float_data_;
} _KLdouble_floatGVKd;

typedef struct {
  D wrapper;
} _KLmachine_numberGVKi;

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
} _KLvectorGVKd;

typedef struct {
  D wrapper;
} _KLrealGVKd;

typedef struct {
  D wrapper;
  D range_from_;
  D range_by_;
} _KLrangeGVKd;

typedef struct {
  D wrapper;
} _KLarrayGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

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


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan;


/* Referenced object declarations */

D KPadd_classVKeI (D);
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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
D KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLstretchy_byte_character_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_byte_character_vectorGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
D KerrorVKdMM0I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
D Kas_uppercaseVKdMM0I (D);
extern _KLclassGVKd KLnumberGVKd;
extern _KLmm_wrapperGVKi_0 KLnumberGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D KaddXVKdMM4I (D, D);
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
D Kobject_classVKdI (D);
extern _KLincremental_generic_functionGVKe Kdebug_nameVKe;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
extern _KLsealed_generic_functionGVKe Ksingleton_objectVKe;
D KmakeVKdMM33I (D, D, D, D);
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLlocatorGYlocators_protocolVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLlocatorGYlocators_protocolVcommon_dylanW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern _KLsealed_generic_functionGVKe Kfunction_specializersVKd;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsealed_generic_functionGVKe Kconcatenate_asVKd;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLsealed_generic_functionGVKe Kcontagious_typeVKi;
extern _KLsealed_generic_functionGVKe KroundSVKd;
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLincremental_generic_functionGVKe KzeroQVKd;
extern _KLincremental_generic_functionGVKe KSVKd;
extern _KLincremental_generic_functionGVKe KnegativeQVKd;
extern _KLincremental_generic_functionGVKe KnegativeVKd;
extern _KLincremental_generic_functionGVKe KlogYtranscendentalsVcommon_dylan;
extern _KLsealed_generic_functionGVKe KtruncateSVKd;
extern _KLincremental_generic_functionGVKe KabsVKd;
D KLVKdMM5I (D, D);
extern _KLincremental_generic_functionGVKe KTVKd;
extern _KLclassGVKd KLmachine_numberGVKi;
extern _KLmm_wrapperGVKi_0 KLmachine_numberGVKiW;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLsealed_generic_functionGVKe KroundVKd;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfloatG_typesVKi;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLclassGVKd KLrealGVKd;
extern _KLmm_wrapperGVKi_0 KLrealGVKdW;
extern _KLclassGVKd KLrangeGVKd;
extern _KLmm_wrapperGVKi_0 KLrangeGVKdW;
extern _KLincremental_generic_functionGVKe KdimensionsVKd;
extern _KLclassGVKd KLarrayGVKd;
extern _KLmm_wrapperGVKi_0 KLarrayGVKdW;
D Kas_lowercaseVKdMM2I (D);
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJfill_;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLmoduleGVKe Kcommon_extensions_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LnumberG_typesVKi;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LconditionG_typesVKi;
extern _KLsealed_generic_functionGVKe Ktype_error_valueVKd;
extern _KLsealed_generic_functionGVKe Ktype_error_expected_typeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Ltype_errorG_typesVKi;
D KapplyVKdI (D, D);
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lsimple_conditionG_typesVKi;
D Kconcatenate_asVKdMM3I (D, D, D);
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM0;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM1;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLincremental_generic_functionGVKe Kas_uppercaseVKd;
D KpositionYcommon_extensionsVcommon_dylanMM3I (D, D, D, D, D, D, D, D);
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJdefault_;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLclassGVKd KLsimple_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_errorGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan;
extern D DunsuppliedYcommon_extensionsVcommon_dylan;

/* Defined object declarations */

extern _KLclassGVKd KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylanW;
extern _KLincremental_generic_functionGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylan;
D Kformat_to_stringYcommon_extensionsVcommon_dylanI (D, D);
D Kinteger_to_stringYcommon_extensionsVcommon_dylanI (D, D, D, D, D);
D Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI (D, D);
static _KLbyte_stringGVKd_31 K7;
static _KLbyte_stringGVKd_36 K8;
D Kprint_formatYcommon_dylan_internalsVcommon_dylanI (D, D, D);
D Kbuffer_contentsYcommon_dylan_internalsVcommon_dylanI (D);
static _KLsimple_closure_methodGVKi_0 KargumentF239;
static D KargumentF239I (D, D, D, D, D);
extern _KLincremental_generic_functionGVKe Knumber_to_stringYcommon_extensionsVcommon_dylan;
static D KcollectF223I (D, D);
extern _KLkeyword_methodGVKe Kinteger_to_stringYcommon_extensionsVcommon_dylan;
static _KLsymbolGVKd KJbase_;
static _KLsimple_closure_methodGVKi_0 Kcollect_characterF215;
static D Kcollect_characterF215I (D, D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K19;
extern _KLsealed_generic_functionGVKe Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylan;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K21;
extern _KLsealed_generic_functionGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan;
static _KLbyte_stringGVKd_37 K23;
static _KLbyte_stringGVKd_35 K24;
extern _KLsimple_methodGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM0;
D Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM0I (D, D);
extern _KLsimple_methodGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM1;
D Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM1I (D, D);
extern _KLsimple_methodGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM2;
D Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM2I (D, D);
static _KLpairGVKd K31;
static _KLpairGVKd K32;
static _KLpairGVKd K33;
static _KLbyte_stringGVKd_17 K34;
D Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI (D);
static _KLbyte_stringGVKd_5 K36;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K37;
D Kprint_stringYcommon_dylan_internalsVcommon_dylanI (D, D);
static _KLbyte_stringGVKd_1 K39;
static _KLbyte_stringGVKd_7 K40;
D Kobject_nameYcommon_dylan_internalsVcommon_dylanI (D);
static _KLbyte_stringGVKd_3 K42;
static _KLsignatureGVKe K43;
static _KLsimple_object_vectorGVKd_2 K44;
static D Kprint_union_typeF47I (D, D);
static _KLbyte_stringGVKd_2 K46;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K48;
D Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0I (D, D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K50;
D Kprimitive_nameYcommon_dylan_internalsVcommon_dylanI (D);
extern _KLsimple_methodGVKe Kprint_stringYcommon_dylan_internalsVcommon_dylan;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K53;
static _KLsignatureGVKe K54;
static _KLsimple_object_vectorGVKd_2 K55;
static _KLunionGVKe K56;
static _KLsingletonGVKd K57;
static _KLsignatureGVKe K58;
static _KLsimple_object_vectorGVKd_2 K59;
static _KLbyte_stringGVKd_4 K60;
static _KLsimple_closure_methodGVKi_0 Ksymbol_nameF202;
static D Ksymbol_nameF202I (D);
static _KLbyte_stringGVKd_5 K63;
static _KLbyte_stringGVKd_4 K64;
extern _KLkeyword_methodGVKe Kprint_collectionYcommon_dylan_internalsVcommon_dylanMM0;
D Kprint_collectionYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D, D);
static _KLbyte_stringGVKd_2 K67;
static _KLbyte_stringGVKd_2 K68;
extern _KLkeyword_methodGVKe Kfloat_to_stringYcommon_extensionsVcommon_dylan;
D Kfloat_to_stringYcommon_extensionsVcommon_dylanI (D, D, D);
extern _KLkeyword_methodGVKe Kmachine_word_to_stringYcommon_extensionsVcommon_dylan;
D Kmachine_word_to_stringYcommon_extensionsVcommon_dylanI (D, D, D);
extern _KLsimple_methodGVKe Kprint_methodYcommon_dylan_internalsVcommon_dylan;
D Kprint_methodYcommon_dylan_internalsVcommon_dylanI (D, D);
D Kprint_basic_nameYcommon_dylan_internalsVcommon_dylanI (D, D, D, D, D);
static _KLbyte_stringGVKd_8 K76;
static _KLbyte_stringGVKd_4 K77;
static _KLbyte_stringGVKd_1 K78;
static _KLbyte_stringGVKd_2 K79;
static _KLbyte_stringGVKd_2 K80;
extern _KLkeyword_methodGVKe Kprint_elementsYcommon_dylan_internalsVcommon_dylan;
D Kprint_elementsYcommon_dylan_internalsVcommon_dylanI (D, D, D, D, D, D);
static _KLsymbolGVKd KJprint_function_;
extern _KLsealed_generic_functionGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylan;
static _KLbyte_stringGVKd_2 K85;
extern _KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM0;
D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM0I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM1;
D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM1I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM2;
D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM2I (D, D);
extern _KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM3;
D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM3I (D, D);
static _KLpairGVKd K94;
static _KLpairGVKd K95;
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLbyte_stringGVKd_17 K98;
static _KLbyte_stringGVKd_9 K99;
static _KLbyte_stringGVKd_1 K100;
static _KLsignatureGVKe K101;
static _KLsimple_object_vectorGVKd_2 K102;
static _KLbyte_stringGVKd_10 K103;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K104;
static _KLsignatureGVKe K105;
static _KLsimple_object_vectorGVKd_2 K106;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K107;
static _KLsignatureGVKe K108;
static _KLsimple_object_vectorGVKd_2 K109;
static _KLbyte_stringGVKd_14 K110;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K111;
static _KLbyte_stringGVKd_3 K112;
static _KLkeyword_signatureGVKe K113;
static _KLsimple_object_vectorGVKd_6 K114;
static _KLsymbolGVKd KJprint_length_;
static _KLsymbolGVKd KJseparator_;
static _KLbyte_stringGVKd_9 K117;
static _KLbyte_stringGVKd_12 K118;
static _KLsimple_object_vectorGVKd_2 K119;
static _KLsimple_object_vectorGVKd_3 K120;
static _KLsignatureGVKe K121;
static _KLsimple_object_vectorGVKd_2 K122;
static _KLkeyword_signatureAvaluesGVKi K123;
static _KLsimple_object_vectorGVKd_2 K124;
static _KLsymbolGVKd KJprefix_;
static _KLbyte_stringGVKd_2 K126;
static _KLbyte_stringGVKd_6 K127;
static _KLsimple_object_vectorGVKd_1 K128;
static _KLsimple_object_vectorGVKd_1 K129;
static _KLsimple_closure_methodGVKi_0 Ksub_printF146;
static D Ksub_printF146I (D, D, D, D);
static _KLunionGVKe K132;
static _KLbyte_stringGVKd_32 K133;
static _KLsingle_floatGVKd K134;
static _KLsingle_floatGVKd K135;
static _KLbyte_stringGVKd_5 K136;
static _KLbyte_stringGVKd_8 K137;
static _KLsingle_floatGVKd K138;
static _KLbyte_stringGVKd_12 K139;
static _KLbyte_stringGVKd_15 K140;
static _KLbyte_stringGVKd_3 K141;
static _KLbyte_stringGVKd_6 K142;
static _KLbyte_stringGVKd_3 K143;
static _KLsingle_floatGVKd K144;
static _KLsingle_floatGVKd K145;
static _KLsignatureGVKe K147;
static _KLsimple_object_vectorGVKd_4 K148;
static _KLkeyword_signatureAvaluesGVKi K149;
static _KLsimple_object_vectorGVKd_2 K150;
static _KLsymbolGVKd KJdecimal_points_;
static _KLbyte_stringGVKd_14 K152;
static _KLsimple_object_vectorGVKd_1 K153;
static _KLsimple_object_vectorGVKd_1 K154;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K155;
extern _KLsealed_generic_functionGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylan;
extern _KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM0;
D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D, D);
extern _KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM1;
D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM1I (D, D, D, D);
extern _KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM2;
D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM2I (D, D, D, D);
extern _KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3;
D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3I (D, D, D, D);
extern _KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM4;
D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM4I (D, D, D, D);
extern _KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM5;
D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM5I (D, D, D, D);
static _KLpairGVKd K169;
static _KLpairGVKd K170;
static _KLpairGVKd K171;
static _KLpairGVKd K172;
static _KLpairGVKd K173;
static _KLpairGVKd K174;
static _KLkeyword_signatureGVKe K175;
static _KLbyte_stringGVKd_25 K176;
static _KLbyte_stringGVKd_6 K177;
static _KLkeyword_signatureGVKe K178;
static _KLsimple_object_vectorGVKd_2 K179;
static _KLsimple_object_vectorGVKd_2 K180;
static _KLsimple_object_vectorGVKd_1 K181;
static _KLbyte_stringGVKd_6 K182;
static _KLkeyword_signatureGVKe K183;
static _KLsimple_object_vectorGVKd_2 K184;
static _KLkeyword_signatureGVKe K185;
static _KLsimple_closure_methodGVKi_0 Kprint_rangeF189;
static D Kprint_rangeF189I (D, D, D, D);
static _KLbyte_stringGVKd_8 K188;
static _KLbyte_stringGVKd_8 K190;
static _KLbyte_stringGVKd_14 K191;
static _KLsignatureGVKe K192;
static _KLsimple_object_vectorGVKd_4 K193;
static _KLkeyword_signatureGVKe K194;
static _KLsimple_object_vectorGVKd_2 K195;
static _KLbyte_stringGVKd_3 K196;
static _KLkeyword_signatureGVKe K197;
static _KLsimple_object_vectorGVKd_2 K198;
static _KLbyte_stringGVKd_7 K199;
static _KLkeyword_signatureGVKe K200;
static _KLsimple_object_vectorGVKd_2 K201;
static _KLsignatureAvaluesGVKi K203;
static _KLsimple_object_vectorGVKd_1 K204;
static _KLsignatureGVKe K205;
static _KLsimple_object_vectorGVKd_2 K206;
extern _KLsimple_methodGVKe Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0;
extern _KLsimple_methodGVKe Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM1;
D Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM1I (D, D);
static _KLpairGVKd K210;
static _KLpairGVKd K211;
static _KLbyte_stringGVKd_17 K212;
static _KLsignatureGVKe K213;
static _KLsimple_object_vectorGVKd_2 K214;
static _KLsignatureGVKe K216;
static _KLsimple_object_vectorGVKd_2 K217;
static _KLbyte_stringGVKd_4 K218;
static _KLkeyword_signatureAvaluesGVKi K219;
static _KLsimple_object_vectorGVKd_6 K220;
static _KLsimple_object_vectorGVKd_3 K221;
static _KLsimple_object_vectorGVKd_3 K222;
extern _KLsimple_methodGVKe Knumber_to_stringYcommon_extensionsVcommon_dylanMM0;
D Knumber_to_stringYcommon_extensionsVcommon_dylanMM0I (D);
extern _KLsimple_methodGVKe Knumber_to_stringYcommon_extensionsVcommon_dylanMM1;
D Knumber_to_stringYcommon_extensionsVcommon_dylanMM1I (D);
extern _KLsimple_methodGVKe Knumber_to_stringYcommon_extensionsVcommon_dylanMM2;
D Knumber_to_stringYcommon_extensionsVcommon_dylanMM2I (D);
static _KLpairGVKd K230;
static _KLpairGVKd K231;
static _KLpairGVKd K232;
static _KLsignatureAvaluesGVKi K233;
static _KLbyte_stringGVKd_16 K234;
static _KLsignatureAvaluesGVKi K235;
static _KLsignatureAvaluesGVKi K236;
D Kobject_unique_nameYcommon_dylan_internalsVcommon_dylanI (D);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K238;
static _KLbyte_stringGVKd_42 K240;
static _KLbyte_stringGVKd_56 K241;
static _KLsignatureGVKe K242;
static _KLsimple_object_vectorGVKd_5 K243;
extern _KLsimple_methodGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylanMM0;
D Kcondition_to_stringYcommon_extensionsVcommon_dylanMM0I (D);
extern _KLsimple_methodGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylanMM1;
D Kcondition_to_stringYcommon_extensionsVcommon_dylanMM1I (D);
extern _KLsimple_methodGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylanMM2;
D Kcondition_to_stringYcommon_extensionsVcommon_dylanMM2I (D);
static _KLpairGVKd K250;
static _KLpairGVKd K251;
static _KLpairGVKd K252;
static _KLsignatureAvaluesGVKi K253;
static _KLbyte_stringGVKd_19 K254;
static _KLbyte_stringGVKd_20 K255;
static _KLsignatureAvaluesGVKi K256;
extern _KLsimple_methodGVKe Kformat_to_stringYcommon_extensionsVcommon_dylan;
static _KLsignatureAvaluesGVKi K258;
static _KLsignatureAvaluesGVKi K259;
static _KLbyte_stringGVKd_9 K260;
static _KLbyte_stringGVKd_19 K261;
static _KLpairGVKd K262;
static _KLpairGVKd K263;
extern _KLkeyword_methodGVKe Kstring_to_machine_wordYcommon_extensionsVcommon_dylan;
D Kstring_to_machine_wordYcommon_extensionsVcommon_dylanI (D, D, D, D, D);
static _KLbyte_stringGVKd_47 K266;
static _KLbyte_stringGVKd_47 K267;
static _KLpairGVKd K268;
static _KLpairGVKd K269;
static _KLpairGVKd K270;
static _KLpairGVKd K271;
static _KLpairGVKd K272;
static _KLbyte_stringGVKd_44 K273;
static _KLkeyword_signatureAvaluesGVKi K274;
static _KLsimple_object_vectorGVKd_6 K275;
static _KLsimple_object_vectorGVKd_3 K276;
static _KLsimple_object_vectorGVKd_3 K277;
static _KLsimple_object_vectorGVKd_2 K278;
extern _KLkeyword_methodGVKe Kstring_to_integerYcommon_extensionsVcommon_dylan;
D Kstring_to_integerYcommon_extensionsVcommon_dylanI (D, D, D, D, D, D);
static _KLbyte_stringGVKd_47 K281;
static _KLbyte_stringGVKd_45 K282;
static _KLkeyword_signatureAvaluesGVKi K283;
static _KLsimple_object_vectorGVKd_8 K284;
static _KLsimple_object_vectorGVKd_4 K285;
static _KLsimple_object_vectorGVKd_4 K286;
static _KLimplementation_classGVKe K287;
static _KLsimple_object_vectorGVKd_2 K288;
extern _KLkeyword_methodGVKe KLuser_assertion_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0;
D KLuser_assertion_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K291;
static _KLsimple_object_vectorGVKd_7 K292;
static _KLkeyword_signatureAvaluesGVKi K293;
static _KLsimple_object_vectorGVKd_4 K294;
static _KLsimple_object_vectorGVKd_2 K295;
static _KLsimple_object_vectorGVKd_1 K296;
static _KLbyte_stringGVKd_22 K297;

/* Indirection variables */

static D IKJbase_ = &KJbase_;
static D IKJprint_function_ = &KJprint_function_;
static D IKJprint_length_ = &KJprint_length_;
static D IKJseparator_ = &KJseparator_;
static D IKJprefix_ = &KJprefix_;
static D IKJdecimal_points_ = &KJdecimal_points_;

/* Variables */

D Luser_assertion_errorGYcommon_dylan_internalsVcommon_dylan = &KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan;
D format_to_stringYcommon_extensionsVcommon_dylan = &Kformat_to_stringYcommon_extensionsVcommon_dylan;
D integer_to_stringYcommon_extensionsVcommon_dylan = &Kinteger_to_stringYcommon_extensionsVcommon_dylan;
D string_to_integerYcommon_extensionsVcommon_dylan = &Kstring_to_integerYcommon_extensionsVcommon_dylan;
D float_to_stringYcommon_extensionsVcommon_dylan = &Kfloat_to_stringYcommon_extensionsVcommon_dylan;
D number_to_stringYcommon_extensionsVcommon_dylan = &Knumber_to_stringYcommon_extensionsVcommon_dylan;
D machine_word_to_stringYcommon_extensionsVcommon_dylan = &Kmachine_word_to_stringYcommon_extensionsVcommon_dylan;
D string_to_machine_wordYcommon_extensionsVcommon_dylan = &Kstring_to_machine_wordYcommon_extensionsVcommon_dylan;
D condition_to_stringYcommon_extensionsVcommon_dylan = &Kcondition_to_stringYcommon_extensionsVcommon_dylan;
D Dnumber_charactersYcommon_dylan_internalsVcommon_dylan = &K8;
D Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan = (D) 41;
D Dcollection_empty_textYcommon_dylan_internalsVcommon_dylan = &K182;

/* Objects */

_KLclassGVKd KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K297,
  &K287,
  (D) 1,
  &Kcommon_dylan_internals_moduleYdylan_userVcommon_dylan
};

_KLmm_wrapperGVKi_0 KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K287,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K253,
  (D) 1,
  &K254,
  &K250,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

static _KLbyte_stringGVKd_31 K7 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Base %d is not between 2 and 36"
};

static _KLbyte_stringGVKd_36 K8 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 145,
  "0123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ"
};

static _KLsimple_closure_methodGVKi_0 KargumentF239 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &K242,
  &KargumentF239I,
  (D) 1
};

_KLincremental_generic_functionGVKe Knumber_to_stringYcommon_extensionsVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K233,
  &KPfalseVKi,
  &K234,
  &K230,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcommon_extensions_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kinteger_to_stringYcommon_extensionsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K219,
  &key_mep_5,
  &Kinteger_to_stringYcommon_extensionsVcommon_dylanI,
  &K220
};

static _KLsymbolGVKd KJbase_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K218
};

static _KLsimple_closure_methodGVKi_0 Kcollect_characterF215 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K216,
  &Kcollect_characterF215I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K19 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylan
};

_KLsealed_generic_functionGVKe Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 5,
  &K212,
  &K210,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K21 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

_KLsealed_generic_functionGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  (D) 5,
  &K34,
  &K31,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLbyte_stringGVKd_37 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Invalid format directive \'%s\' in \"%s\""
};

static _KLbyte_stringGVKd_35 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 141,
  "Incomplete format directive in \"%s\""
};

_KLsimple_methodGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K205,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K43,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM2I
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM0,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM1,
  &K33
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "print-unique-name"
};

static _KLbyte_stringGVKd_5 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "{%s: "
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K37 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

static _KLbyte_stringGVKd_1 K39 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "}"
};

static _KLbyte_stringGVKd_7 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "<class>"
};

static _KLbyte_stringGVKd_3 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "???"
};

static _KLsignatureGVKe K43 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K44
};

static _KLsimple_object_vectorGVKd_2 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLsingletonGVKd
};

static _KLbyte_stringGVKd_2 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  ", "
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K48 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K50 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

_KLsimple_methodGVKe Kprint_stringYcommon_dylan_internalsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K54,
  &Kprint_stringYcommon_dylan_internalsVcommon_dylanI
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K53 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

static _KLsignatureGVKe K54 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K55
};

static _KLsimple_object_vectorGVKd_2 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLbyte_stringGVKd
};

static _KLunionGVKe K56 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLstringGVKd
};

static _KLsingletonGVKd K57 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureGVKe K58 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K59
};

static _KLsimple_object_vectorGVKd_2 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLunionGVKe
};

static _KLbyte_stringGVKd_4 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "\"%s\""
};

static _KLsimple_closure_methodGVKi_0 Ksymbol_nameF202 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &K203,
  &Ksymbol_nameF202I,
  (D) 1
};

static _KLbyte_stringGVKd_5 K63 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "#\"%s\""
};

static _KLbyte_stringGVKd_4 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "\'%c\'"
};

_KLkeyword_methodGVKe Kprint_collectionYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K200,
  &key_mep_4,
  &Kprint_collectionYcommon_dylan_internalsVcommon_dylanMM0I,
  &K179
};

static _KLbyte_stringGVKd_2 K67 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "#t"
};

static _KLbyte_stringGVKd_2 K68 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "#f"
};

_KLkeyword_methodGVKe Kfloat_to_stringYcommon_extensionsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K149,
  &key_mep_3,
  &Kfloat_to_stringYcommon_extensionsVcommon_dylanI,
  &K150
};

_KLkeyword_methodGVKe Kmachine_word_to_stringYcommon_extensionsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K123,
  &key_mep_3,
  &Kmachine_word_to_stringYcommon_extensionsVcommon_dylanI,
  &K124
};

_KLsimple_methodGVKe Kprint_methodYcommon_dylan_internalsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K121,
  &Kprint_methodYcommon_dylan_internalsVcommon_dylanI
};

static _KLbyte_stringGVKd_8 K76 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "{%s: %s}"
};

static _KLbyte_stringGVKd_4 K77 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "{%s}"
};

static _KLbyte_stringGVKd_1 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "{"
};

static _KLbyte_stringGVKd_2 K79 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  ": "
};

static _KLbyte_stringGVKd_2 K80 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  " ("
};

_KLkeyword_methodGVKe Kprint_elementsYcommon_dylan_internalsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K113,
  &key_mep_6,
  &Kprint_elementsYcommon_dylan_internalsVcommon_dylanI,
  &K114
};

static _KLsymbolGVKd KJprint_function_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K110
};

_KLsealed_generic_functionGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K98,
  &K94,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLbyte_stringGVKd_2 K85 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  ")}"
};

_KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K108,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K105,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K43,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM2I
};

_KLsimple_methodGVKe Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K101,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM3I
};

static _KLpairGVKd K94 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM0,
  &K95
};

static _KLpairGVKd K95 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM1,
  &K96
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM2,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K98 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "print-specializer"
};

static _KLbyte_stringGVKd_9 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "subclass("
};

static _KLbyte_stringGVKd_1 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  ")"
};

static _KLsignatureGVKe K101 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K102
};

static _KLsimple_object_vectorGVKd_2 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLsubclassGVKe
};

static _KLbyte_stringGVKd_10 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "singleton("
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K104 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

static _KLsignatureGVKe K105 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K106
};

static _KLsimple_object_vectorGVKd_2 K106 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLclassGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K107 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

static _KLsignatureGVKe K108 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K109
};

static _KLsimple_object_vectorGVKd_2 K109 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLtypeGVKd
};

static _KLbyte_stringGVKd_14 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "print-function"
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K111 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

static _KLbyte_stringGVKd_3 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "..."
};

static _KLkeyword_signatureGVKe K113 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K119,
  &K120,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJprint_length_,
  &KPunboundVKi,
  &KJseparator_,
  &K46,
  &KJprint_function_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJprint_length_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K118
};

static _KLsymbolGVKd KJseparator_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K117
};

static _KLbyte_stringGVKd_9 K117 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "separator"
};

static _KLbyte_stringGVKd_12 K118 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "print-length"
};

static _KLsimple_object_vectorGVKd_2 K119 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLsequenceGVKd
};

static _KLsimple_object_vectorGVKd_3 K120 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJprint_length_,
  &KJseparator_,
  &KJprint_function_
};

static _KLsignatureGVKe K121 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K122
};

static _KLsimple_object_vectorGVKd_2 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLmethodGVKd
};

static _KLkeyword_signatureAvaluesGVKi K123 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_Lmachine_wordG_typesVKi,
  &K128,
  &K129,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K124 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJprefix_,
  &K126
};

static _KLsymbolGVKd KJprefix_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K127
};

static _KLbyte_stringGVKd_2 K126 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "#x"
};

static _KLbyte_stringGVKd_6 K127 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "prefix"
};

static _KLsimple_object_vectorGVKd_1 K128 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJprefix_
};

static _KLsimple_object_vectorGVKd_1 K129 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K56
};

static _KLsimple_closure_methodGVKi_0 Ksub_printF146 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &K147,
  &Ksub_printF146I,
  (D) 1
};

static _KLunionGVKe K132 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K57,
  &KLintegerGVKd
};

static _KLbyte_stringGVKd_32 K133 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLsingle_floatGVKd K134 = {
  &KLsingle_floatGVKdW /* wrapper */,
  0.0
};

static _KLsingle_floatGVKd K135 = {
  &KLsingle_floatGVKdW /* wrapper */,
  1.0000000
};

static _KLbyte_stringGVKd_5 K136 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "{NaN}"
};

static _KLbyte_stringGVKd_8 K137 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "{NaN}%c0"
};

static _KLsingle_floatGVKd K138 = {
  &KLsingle_floatGVKdW /* wrapper */,
  2.0000000
};

static _KLbyte_stringGVKd_12 K139 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "%c{infinity}"
};

static _KLbyte_stringGVKd_15 K140 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "%c{infinity}%c0"
};

static _KLbyte_stringGVKd_3 K141 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "0.0"
};

static _KLbyte_stringGVKd_6 K142 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "0.0%c0"
};

static _KLbyte_stringGVKd_3 K143 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "-%s"
};

static _KLsingle_floatGVKd K144 = {
  &KLsingle_floatGVKdW /* wrapper */,
  10.000000
};

static _KLsingle_floatGVKd K145 = {
  &KLsingle_floatGVKdW /* wrapper */,
  2.0000000
};

static _KLsignatureGVKe K147 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K148
};

static _KLsimple_object_vectorGVKd_4 K148 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K149 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LfloatG_typesVKi,
  &K153,
  &K154,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K150 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdecimal_points_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJdecimal_points_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K152
};

static _KLbyte_stringGVKd_14 K152 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "decimal-points"
};

static _KLsimple_object_vectorGVKd_1 K153 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdecimal_points_
};

static _KLsimple_object_vectorGVKd_1 K154 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K132
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K155 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylan
};

_KLsealed_generic_functionGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K175,
  (D) 5,
  &K176,
  &K169,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K200,
  &key_mep_4,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM0I,
  &K179
};

_KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K197,
  &key_mep_4,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM1I,
  &K179
};

_KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K194,
  &key_mep_4,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM2I,
  &K179
};

_KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K185,
  &key_mep_4,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3I,
  &K179
};

_KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K183,
  &key_mep_4,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM4I,
  &K179
};

_KLkeyword_methodGVKe Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K178,
  &key_mep_4,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM5I,
  &K179
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM0,
  &K170
};

static _KLpairGVKd K170 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM1,
  &K171
};

static _KLpairGVKd K171 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM2,
  &K172
};

static _KLpairGVKd K172 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3,
  &K173
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM4,
  &K174
};

static _KLpairGVKd K174 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM5,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K175 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302345,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_25 K176 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "print-collection-contents"
};

static _KLbyte_stringGVKd_6 K177 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "%=, %="
};

static _KLkeyword_signatureGVKe K178 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399497,
  &K180,
  &K181,
  &K154
};

static _KLsimple_object_vectorGVKd_2 K179 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJprint_length_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K180 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLpairGVKd
};

static _KLsimple_object_vectorGVKd_1 K181 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJprint_length_
};

static _KLbyte_stringGVKd_6 K182 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "size 0"
};

static _KLkeyword_signatureGVKe K183 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K184,
  &K181,
  &K154
};

static _KLsimple_object_vectorGVKd_2 K184 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLvectorGVKd
};

static _KLkeyword_signatureGVKe K185 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K119,
  &K181,
  &K154
};

static _KLsimple_closure_methodGVKi_0 Kprint_rangeF189 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &K192,
  &Kprint_rangeF189I,
  (D) 1
};

static _KLbyte_stringGVKd_8 K188 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "%d by %d"
};

static _KLbyte_stringGVKd_8 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "%d to %d"
};

static _KLbyte_stringGVKd_14 K191 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "%d to %d by %d"
};

static _KLsignatureGVKe K192 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943057,
  &K193
};

static _KLsimple_object_vectorGVKd_4 K193 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLstretchy_byte_character_vectorGVKe,
  &KLrealGVKd,
  &KLrealGVKd,
  &KLrealGVKd
};

static _KLkeyword_signatureGVKe K194 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K195,
  &K181,
  &K154
};

static _KLsimple_object_vectorGVKd_2 K195 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLrangeGVKd
};

static _KLbyte_stringGVKd_3 K196 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  " x "
};

static _KLkeyword_signatureGVKe K197 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K198,
  &K181,
  &K154
};

static _KLsimple_object_vectorGVKd_2 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLarrayGVKd
};

static _KLbyte_stringGVKd_7 K199 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "size %d"
};

static _KLkeyword_signatureGVKe K200 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205193,
  &K201,
  &K181,
  &K154
};

static _KLsimple_object_vectorGVKd_2 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLcollectionGVKd
};

static _KLsignatureAvaluesGVKi K203 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K204,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K204 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLsignatureGVKe K205 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K206
};

static _KLsimple_object_vectorGVKd_2 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K205,
  &Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K213,
  &Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM1I
};

static _KLpairGVKd K210 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0,
  &K211
};

static _KLpairGVKd K211 = {
  &KLpairGVKdW /* wrapper */,
  &Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K212 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "print-pretty-name"
};

static _KLsignatureGVKe K213 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K214
};

static _KLsimple_object_vectorGVKd_2 K214 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLstretchy_byte_character_vectorGVKe,
  &KLconditionGVKd
};

static _KLsignatureGVKe K216 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K217
};

static _KLsimple_object_vectorGVKd_2 K217 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLcharacterGVKd
};

static _KLbyte_stringGVKd_4 K218 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "base"
};

static _KLkeyword_signatureAvaluesGVKi K219 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LintegerG_typesVKi,
  &K221,
  &K222,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_6 K220 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJbase_,
  (D) 41,
  &KJsize_,
  (D) 1,
  &KJfill_,
  C('0')
};

static _KLsimple_object_vectorGVKd_3 K221 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJbase_,
  &KJsize_,
  &KJfill_
};

static _KLsimple_object_vectorGVKd_3 K222 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLbyte_characterGVKe
};

_KLsimple_methodGVKe Knumber_to_stringYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K233,
  &Knumber_to_stringYcommon_extensionsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Knumber_to_stringYcommon_extensionsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K236,
  &Knumber_to_stringYcommon_extensionsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Knumber_to_stringYcommon_extensionsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K235,
  &Knumber_to_stringYcommon_extensionsVcommon_dylanMM2I
};

static _KLpairGVKd K230 = {
  &KLpairGVKdW /* wrapper */,
  &Knumber_to_stringYcommon_extensionsVcommon_dylanMM0,
  &K231
};

static _KLpairGVKd K231 = {
  &KLpairGVKdW /* wrapper */,
  &Knumber_to_stringYcommon_extensionsVcommon_dylanMM1,
  &K232
};

static _KLpairGVKd K232 = {
  &KLpairGVKdW /* wrapper */,
  &Knumber_to_stringYcommon_extensionsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K233 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LnumberG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLbyte_stringGVKd_16 K234 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "number-to-string"
};

static _KLsignatureAvaluesGVKi K235 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLsignatureAvaluesGVKi K236 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LfloatG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K238 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan
};

static _KLbyte_stringGVKd_42 K240 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 169,
  "Too few arguments for format string %=: %="
};

static _KLbyte_stringGVKd_56 K241 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 225,
  "Format argument for directive \'%%%c\' not of class %s: %="
};

static _KLsignatureGVKe K242 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K243
};

static _KLsimple_object_vectorGVKd_5 K243 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLcharacterGVKd,
  &KLclassGVKd
};

_KLsimple_methodGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K253,
  &Kcondition_to_stringYcommon_extensionsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K259,
  &Kcondition_to_stringYcommon_extensionsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K256,
  &Kcondition_to_stringYcommon_extensionsVcommon_dylanMM2I
};

static _KLpairGVKd K250 = {
  &KLpairGVKdW /* wrapper */,
  &Kcondition_to_stringYcommon_extensionsVcommon_dylanMM0,
  &K251
};

static _KLpairGVKd K251 = {
  &KLpairGVKdW /* wrapper */,
  &Kcondition_to_stringYcommon_extensionsVcommon_dylanMM1,
  &K252
};

static _KLpairGVKd K252 = {
  &KLpairGVKdW /* wrapper */,
  &Kcondition_to_stringYcommon_extensionsVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K253 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LconditionG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLbyte_stringGVKd_19 K254 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "condition-to-string"
};

static _KLbyte_stringGVKd_20 K255 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "%= is not of type %="
};

static _KLsignatureAvaluesGVKi K256 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ltype_errorG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

_KLsimple_methodGVKe Kformat_to_stringYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K258,
  &Kformat_to_stringYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K258 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LstringG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLsignatureAvaluesGVKi K259 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lsimple_conditionG_typesVKi,
  &KDsignature_LstringG_typesVKi
};

static _KLbyte_stringGVKd_9 K260 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  " occurred"
};

static _KLbyte_stringGVKd_19 K261 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "Condition of class "
};

static _KLpairGVKd K262 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM1,
  &K263
};

static _KLpairGVKd K263 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM0,
  &KPempty_listVKi
};

_KLkeyword_methodGVKe Kstring_to_machine_wordYcommon_extensionsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K274,
  &key_mep_5,
  &Kstring_to_machine_wordYcommon_extensionsVcommon_dylanI,
  &K275
};

static _KLbyte_stringGVKd_47 K266 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "Start: %d is out of range [0, %d] for string %s"
};

static _KLbyte_stringGVKd_47 K267 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "Stop: %d is out of range [0, %d] for string %s."
};

static _KLpairGVKd K268 = {
  &KLpairGVKdW /* wrapper */,
  C(' '),
  &K269
};

static _KLpairGVKd K269 = {
  &KLpairGVKdW /* wrapper */,
  C('\n'),
  &K270
};

static _KLpairGVKd K270 = {
  &KLpairGVKdW /* wrapper */,
  C('\r'),
  &K271
};

static _KLpairGVKd K271 = {
  &KLpairGVKdW /* wrapper */,
  C('\f'),
  &K272
};

static _KLpairGVKd K272 = {
  &KLpairGVKdW /* wrapper */,
  C('\t'),
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_44 K273 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 177,
  "Reached end of %s without finding an integer"
};

static _KLkeyword_signatureAvaluesGVKi K274 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818629,
  &KDsignature_LstringG_typesVKi,
  &K276,
  &K277,
  &K278
};

static _KLsimple_object_vectorGVKd_6 K275 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJstart_,
  (D) 1,
  &KJdefault_,
  &KPunboundVKi,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K276 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJstart_,
  &KJdefault_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_3 K277 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLobjectGVKd,
  &K132
};

static _KLsimple_object_vectorGVKd_2 K278 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLintegerGVKd
};

_KLkeyword_methodGVKe Kstring_to_integerYcommon_extensionsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K283,
  &key_mep_6,
  &Kstring_to_integerYcommon_extensionsVcommon_dylanI,
  &K284
};

static _KLbyte_stringGVKd_47 K281 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "start: %d is out of range [0, %d] for string %="
};

static _KLbyte_stringGVKd_45 K282 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "end: %d is out of range [0, %d] for string %="
};

static _KLkeyword_signatureAvaluesGVKi K283 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33818629,
  &KDsignature_LstringG_typesVKi,
  &K285,
  &K286,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_8 K284 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJbase_,
  (D) 41,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPfalseVKi,
  &KJdefault_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_4 K285 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJbase_,
  &KJstart_,
  &KJend_,
  &KJdefault_
};

static _KLsimple_object_vectorGVKd_4 K286 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &K132,
  &KLobjectGVKd
};

static _KLimplementation_classGVKe K287 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan,
  &KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylanW,
  &KPfalseVKi,
  &K288,
  (D) -3,
  &KLuser_assertion_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0,
  &K291,
  &K292,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K288,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K288 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLuser_assertion_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K293,
  &key_mep_2,
  &KLuser_assertion_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I,
  &K294
};

static _KLsimple_object_vectorGVKd_1 K291 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K292 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan
};

static _KLkeyword_signatureAvaluesGVKi K293 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K295,
  &KDsignature_LobjectG_typesVKi,
  &K296
};

static _KLsimple_object_vectorGVKd_4 K294 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K295 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K296 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan
};

static _KLbyte_stringGVKd_22 K297 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<user-assertion-error>"
};

/* Code */

D Kformat_to_stringYcommon_extensionsVcommon_dylanI (D format_string_, D format_arguments_) {
  D T3_0;
  D T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:105
  T4 = primitive_copy_vector(format_arguments_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:108
  T6_0 = KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:108
  T5 = T6_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:109
  Kprint_formatYcommon_dylan_internalsVcommon_dylanI(T5, format_string_, T4);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:110
  T3_0 = Kbuffer_contentsYcommon_dylan_internalsVcommon_dylanI(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:105
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kinteger_to_stringYcommon_extensionsVcommon_dylanI (D integer_, D Urest_, D base_, D string_size_, D fill_) {
  D baseF6;
  D string_sizeF7;
  D fillF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D remainingF14;
  D T15;
  DWORD i_T, i_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22_0;
  D integerF23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D bufferF29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D remainingF37;
  D T38;
  D T39;
  DWORD T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  _KLsimple_object_vectorGVKd_1 T45 = {&KLsimple_object_vectorGVKdW, (D) 5};
  DWORD T46;
  D T47;
  D bufferF48;
  D T49_0;
  DWORD T50;
  D T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56_0;
  DWORD T56_1;
  DWORD quotientF57;
  DWORD remainderF58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  D T63;
  D T64_0;
  D T65;
  DWORD T66;
  D T67;
  DBCHR T68;
  D T69;
  D T70;
  D T71;
  DWORD T72;
  DWORD T73;
  D T74;
  DWORD T75;
  D T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  DWORD T81_0;
  DWORD T81_1;
  DWORD quotientF82;
  DWORD remainderF83;
  DWORD T84;
  DWORD T85;
  D T86;
  DWORD T87;
  DWORD T88;
  D T89;
  D T90_0;
  D T91;
  DWORD T92;
  D T93;
  DBCHR T94;
  D T95;
  D T96;
  D T97;
  DWORD T98;
  D T99;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:240
  integerF23 = integer_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:240
  primitive_type_check(base_, &KLintegerGVKd);
  baseF6 = base_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:240
  primitive_type_check(string_size_, &KLintegerGVKd);
  string_sizeF7 = string_size_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:240
  primitive_type_check(fill_, &KLbyte_characterGVKe);
  fillF8 = fill_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
  T40 = primitive_cast_integer_as_raw(baseF6);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
  T41 = primitive_machine_word_less_thanQ(T40,9);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
  if (T41 != &KPfalseVKi) {
    T9 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
    T43 = primitive_cast_integer_as_raw(baseF6);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
    T44 = primitive_machine_word_less_thanQ(145,T43);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
    T42 = primitive_not(T44);
    T9 = T42;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
  if (T9 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
    T45.vector_element_[0] = baseF6;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
    Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K7, &T45);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:246
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:249
  T28 = integerF23;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:249
  T46 = primitive_cast_integer_as_raw(T28);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:249
  T47 = primitive_machine_word_less_thanQ(T46,1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:250
  T49_0 = KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:250
  bufferF48 = T49_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:250
  bufferF29 = bufferF48;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:251
  T27 = integerF23;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:251
  T50 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:251
  T51 = primitive_machine_word_equalQ(T50,1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:251
  if (T51 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:252
    T36 = bufferF29;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:252
    CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
    T10 = CONGRUENT_CALL2(T36, C('0'));
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:252
    bufferF29 = T10;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:251
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:254
  if (T47 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T26 = integerF23;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T53 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T52 = primitive_machine_word_shift_right(T53,2);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T55 = primitive_cast_integer_as_raw(baseF6);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T54 = primitive_machine_word_shift_right(T55,2);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T56_0 = primitive_machine_word_truncateS_byref(T52,T54,(DWORD*)&T56_1);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    quotientF57 = T56_0;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    remainderF58 = T56_1;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T59 = primitive_machine_word_shift_left_signal_overflow(quotientF57,2);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:257
    T60 = primitive_machine_word_shift_left_signal_overflow(remainderF58,2);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    T61 = primitive_machine_word_negative_signal_overflow(T60);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    T62 = primitive_machine_word_logior(T61,1);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    T63 = primitive_cast_raw_as_integer(T62);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    T65 = SLOT_VALUE_INITD(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    T66 = primitive_cast_integer_as_raw(T65);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    T67 = primitive_machine_word_unsigned_less_thanQ(T62,T66);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    if (T67 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
      T68 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, 1, T62);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
      T69 = primitive_raw_as_byte_character(T68);
      T71 = T69;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
      T64_0 = Kelement_range_errorVKeI(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, T63);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
      T70 = T64_0;
      T71 = T70;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    T35 = bufferF29;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
    T11 = CONGRUENT_CALL2(T35, T71);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:258
    bufferF29 = T11;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:259
    T72 = primitive_machine_word_negative_signal_overflow(T59);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:259
    T73 = primitive_machine_word_logior(T72,1);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:259
    T74 = primitive_cast_raw_as_integer(T73);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:259
    integerF23 = T74;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:254
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
    T24 = integerF23;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
    T75 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
    T76 = primitive_machine_word_equalQ(T75,1);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
    if (T76 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T25 = integerF23;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T78 = primitive_cast_integer_as_raw(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T77 = primitive_machine_word_shift_right(T78,2);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T80 = primitive_cast_integer_as_raw(baseF6);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T79 = primitive_machine_word_shift_right(T80,2);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T81_0 = primitive_machine_word_truncateS_byref(T77,T79,(DWORD*)&T81_1);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      quotientF82 = T81_0;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      remainderF83 = T81_1;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T84 = primitive_machine_word_shift_left_signal_overflow(quotientF82,2);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T85 = primitive_machine_word_logior(T84,1);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T86 = primitive_cast_raw_as_integer(T85);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T87 = primitive_machine_word_shift_left_signal_overflow(remainderF83,2);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T88 = primitive_machine_word_logior(T87,1);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:262
      T89 = primitive_cast_raw_as_integer(T88);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      T91 = SLOT_VALUE_INITD(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, 0);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      T92 = primitive_cast_integer_as_raw(T91);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      T93 = primitive_machine_word_unsigned_less_thanQ(T88,T92);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      if (T93 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
        T94 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, 1, T88);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
        T95 = primitive_raw_as_byte_character(T94);
        T97 = T95;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
        T90_0 = Kelement_range_errorVKeI(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, T89);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
        T96 = T90_0;
        T97 = T96;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      T34 = bufferF29;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
      T12 = CONGRUENT_CALL2(T34, T97);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:263
      bufferF29 = T12;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:264
      integerF23 = T86;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:261
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:266
  T33 = bufferF29;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:266
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T13 = CONGRUENT_CALL1(T33);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:266
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  remainingF14 = CONGRUENT_CALL2(string_sizeF7, T13);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:266
  remainingF37 = remainingF14;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:267
  if (T47 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:268
    T39 = remainingF37;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:268
    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
    T15 = CONGRUENT_CALL2(T39, (D) 5);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:268
    remainingF37 = T15;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:267
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
  i_T = 1;
L1: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
    T99 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
    T38 = remainingF37;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T17 = CONGRUENT_CALL2(T99, T38);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:271
      T32 = bufferF29;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:271
      CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
      T18 = CONGRUENT_CALL2(T32, fillF8);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:271
      bufferF29 = T18;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
      T98 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
      i_T = T98;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:270
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:273
  if (T47 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:274
    T31 = bufferF29;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:274
    CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
    T19 = CONGRUENT_CALL2(T31, C('-'));
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:274
    bufferF29 = T19;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:273
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:276
  T30 = bufferF29;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:276
  T20 = CALL1(&KreverseXVKd, T30);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:276
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T21_0 = CONGRUENT_CALL2(&KLstringGVKd, T20);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:240
  T22_0 = T21_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T21_0);
    primitive_type_check(T22_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:240
  MV_SET_COUNT(1);
  return(T22_0);
}

D Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI (D format_string_, D format_arguments_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:41
  T4 = primitive_copy_vector(format_arguments_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:43
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = format_string_;
  T5.vector_element_[2] = &KJformat_arguments_;
  T5.vector_element_[3] = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:43
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan, &T5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:43
  T6 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:41
  return(T6);
}

D Kprint_formatYcommon_dylan_internalsVcommon_dylanI (D buffer_, D format_string_, D format_arguments_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D char_;
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
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D found_percentQ_;
  D T32;
  D T33;
  D argument_index_;
  D T35;
  D Uobject_;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  _KLsimple_object_vectorGVKd_2 T45 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T46;
  _KLsimple_object_vectorGVKd_1 T47 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:51
  T30 = primitive_copy_vector(format_arguments_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:55
  found_percentQ_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:56
  argument_index_ = MAKE_D_CELL((D) 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:57
  T35 = SLOT_VALUE_INITD(T30, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:58
  T4 = MAKE_CLOSURE_INITD(&KargumentF239, 1, argument_index_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(format_string_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  T6 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  T11T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
    T12 = CALL3(T9, format_string_, T11, T7);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
      T14 = CALL2(T10, format_string_, T11);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
      primitive_type_check(T14, &KLcharacterGVKd);
      char_ = T14;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:78
      T33 = found_percentQ_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:78
      if (T33 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
        Uobject_ = Kas_uppercaseVKdMM0I(char_);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
        T37 = primitive_idQ(Uobject_,C('D'));
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
        if (T37 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:80
          get_teb()->function = T4;
          T15 = KargumentF239I(T35, T30, format_string_, char_, &KLnumberGVKd);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:80
          T16 = CALL1(&Knumber_to_stringYcommon_extensionsVcommon_dylan, T15);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:80
          KcollectF223I(buffer_, T16);
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
          T38 = primitive_idQ(Uobject_,C('B'));
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
          if (T38 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:81
            get_teb()->function = T4;
            T17 = KargumentF239I(T35, T30, format_string_, char_, &KLintegerGVKd);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:81
            T18 = CALL3(&Kinteger_to_stringYcommon_extensionsVcommon_dylan, T17, IKJbase_, (D) 9);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:81
            KcollectF223I(buffer_, T18);
          } else {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
            T39 = primitive_idQ(Uobject_,C('O'));
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
            if (T39 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:82
              get_teb()->function = T4;
              T19 = KargumentF239I(T35, T30, format_string_, char_, &KLintegerGVKd);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:82
              T20 = CALL3(&Kinteger_to_stringYcommon_extensionsVcommon_dylan, T19, IKJbase_, (D) 33);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:82
              KcollectF223I(buffer_, T20);
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
              T40 = primitive_idQ(Uobject_,C('X'));
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
              if (T40 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:83
                get_teb()->function = T4;
                T21 = KargumentF239I(T35, T30, format_string_, char_, &KLintegerGVKd);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:83
                T22 = CALL3(&Kinteger_to_stringYcommon_extensionsVcommon_dylan, T21, IKJbase_, (D) 65);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:83
                KcollectF223I(buffer_, T22);
              } else {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                T41 = primitive_idQ(Uobject_,C('C'));
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                if (T41 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:84
                  get_teb()->function = T4;
                  T23 = KargumentF239I(T35, T30, format_string_, char_, &KLcharacterGVKd);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:84
                  CALL2(&Kcollect_characterF215, buffer_, T23);
                } else {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                  T42 = primitive_idQ(Uobject_,C('S'));
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                  if (T42 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:85
                    get_teb()->function = T4;
                    T24 = KargumentF239I(T35, T30, format_string_, char_, &KLobjectGVKd);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:85
                    ENGINE_NODE_CALL_PROLOG(&Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylan, &K19, 2);
                    ENGINE_NODE_CALL2(&K19, buffer_, T24);
                  } else {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                    T43 = primitive_idQ(Uobject_,C('='));
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                    if (T43 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:86
                      get_teb()->function = T4;
                      T25 = KargumentF239I(T35, T30, format_string_, char_, &KLobjectGVKd);
                      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:86
                      ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K21, 2);
                      ENGINE_NODE_CALL2(&K21, buffer_, T25);
                    } else {
                      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                      T44 = primitive_idQ(Uobject_,C('%'));
                      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                      if (T44 != &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:87
                        Kcollect_characterF215I(buffer_, C('%'));
                      } else {
                        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:89
                        T45.vector_element_[0] = char_;
                        T45.vector_element_[1] = format_string_;
                        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:89
                        KerrorVKdMM1I(&K23, &T45);
                      }
                      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                    }
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
          }
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:79
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:92
        found_percentQ_ = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:94
        T46 = primitive_idQ(char_,C('%'));
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:94
        if (T46 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:95
          found_percentQ_ = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:97
          Kcollect_characterF215I(buffer_, char_);
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:94
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:78
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
      T26 = CALL2(T8, format_string_, T11);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
      T11T = T26;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:77
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:101
  T32 = found_percentQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:101
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:101
    T47.vector_element_[0] = format_string_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:101
    T27 = Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K24, &T47);
    T29 = T27;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:101
    T28 = &KPfalseVKi;
    T29 = T28;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:101
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:51
  MV_SET_COUNT(0);
  return(T29);
}

D Kbuffer_contentsYcommon_dylan_internalsVcommon_dylanI (D buffer_) {
  D T1_0;
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:23
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:25
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T1_0 = CONGRUENT_CALL2(&KLbyte_stringGVKd, buffer_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:23
  T2_0 = T1_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T1_0);
    primitive_type_check(T2_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:23
  MV_SET_COUNT(1);
  return(T2_0);
}

static D KargumentF239I (D implicit_argumentF24, D implicit_argumentF23, D format_string_, D char_, D class_) {
  D T6;
  D Utmp_;
  D T8_0;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  D T13;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D argument_;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_3 T18 = {&KLsimple_object_vectorGVKdW, (D) 13};
  DWORD T19;
  DWORD T20;
  D T21;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:58
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:60
  T10 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:61
  T9 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:61
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:61
  T12 = primitive_machine_word_add_signal_overflow(T11,4);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:61
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:61
  SET_D_CELL_VAL(CREF(0), T13);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:62
  T19 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:62
  T20 = primitive_cast_integer_as_raw(implicit_argumentF24);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:62
  T21 = primitive_machine_word_less_thanQ(T19,T20);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:62
  if (T21 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:62
    T14.vector_element_[0] = format_string_;
    T14.vector_element_[1] = implicit_argumentF23;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:62
    Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K240, &T14);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:62
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:65
  argument_ = KelementVKdMM11I(implicit_argumentF23, T10, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
  T16 = primitive_idQ(class_,&KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
  if (T16 != &KPfalseVKi) {
    T6 = T16;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
    T17 = primitive_instanceQ(argument_,class_);
    T6 = T17;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:68
    Utmp_ = Kobject_nameYcommon_dylan_internalsVcommon_dylanI(class_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
    T18.vector_element_[0] = char_;
    T18.vector_element_[1] = Utmp_;
    T18.vector_element_[2] = argument_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
    Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K241, &T18);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:66
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:69
  T8_0 = argument_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:58
  MV_SET_COUNT(1);
  return(T8_0);
}

static D KcollectF223I (D buffer_, D string_) {
  D T2;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:71
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:72
  T2 = CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, string_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:71
  MV_SET_COUNT(0);
  return(T2);
}

static D Kcollect_characterF215I (D buffer_, D character_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:74
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:75
  CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
  CONGRUENT_CALL2(buffer_, character_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:74
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:74
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM0I (D buffer_, D object_) {
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
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T29;
  _KLsimple_object_vectorGVKd_1 T30 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T31;
  _KLsimple_object_vectorGVKd_1 T32 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:157
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
  T27 = primitive_instanceQ(object_,&KLbyte_stringGVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:163
    T28.vector_element_[0] = object_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:163
    T3 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K60, &T28);
    T26 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
    T29 = primitive_instanceQ(object_,&KLsymbolGVKd);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
    if (T29 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:164
      T4 = CALL1(&Ksymbol_nameF202, object_);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:164
      T30.vector_element_[0] = T4;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:164
      T5 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K63, &T30);
      T25 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
      T31 = primitive_instanceQ(object_,&KLcharacterGVKd);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:165
        T32.vector_element_[0] = object_;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:165
        T6 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K64, &T32);
        T24 = T6;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
        T33 = primitive_instanceQ(object_,&KLcollectionGVKd);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
        if (T33 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:166
          T7 = CALL2(&Kprint_collectionYcommon_dylan_internalsVcommon_dylanMM0, buffer_, object_);
          T23 = T7;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
          T34 = primitive_instanceQ(object_,&KLbooleanGVKd);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
          if (T34 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:167
            if (object_ != &KPfalseVKi) {
              T8 = &K67;
            } else {
              T8 = &K68;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:167
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:167
            T9 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, T8);
            T22 = T9;
          } else {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
            T35 = primitive_instanceQ(object_,&KLintegerGVKd);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
            if (T35 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:168
              T10 = CALL1(&Kinteger_to_stringYcommon_extensionsVcommon_dylan, object_);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:168
              T11 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, T10);
              T21 = T11;
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
              T36 = primitive_instanceQ(object_,&KLfloatGVKd);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
              if (T36 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:169
                T12 = CALL1(&Kfloat_to_stringYcommon_extensionsVcommon_dylan, object_);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:169
                T13 = CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, T12);
                T20 = T13;
              } else {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
                T37 = primitive_instanceQ(object_,&KLmachine_wordGVKe);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
                if (T37 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:170
                  T14 = CALL1(&Kmachine_word_to_stringYcommon_extensionsVcommon_dylan, object_);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:170
                  T15 = CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, T14);
                  T19 = T15;
                } else {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
                  T38 = primitive_instanceQ(object_,&KLmethodGVKd);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
                  if (T38 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:171
                    T16 = CALL2(&Kprint_methodYcommon_dylan_internalsVcommon_dylan, buffer_, object_);
                    T18 = T16;
                  } else {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:172
                    T17 = Kprint_basic_nameYcommon_dylan_internalsVcommon_dylanI(buffer_, &KPempty_vectorVKi, object_, &KPunboundVKi, &KPunboundVKi);
                    T18 = T17;
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
                  T19 = T18;
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
                T20 = T19;
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
              T21 = T20;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
            T22 = T21;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
          T23 = T22;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
        T24 = T23;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
      T25 = T24;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
    T26 = T25;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:162
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:157
  MV_SET_COUNT(0);
  return(T26);
}

D Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM1I (D buffer_, D union_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:199
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:210
  T3 = Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI(union_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:210
  T5.vector_element_[0] = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:210
  Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K36, &T5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:211
  T6 = SLOT_VALUE_INITD(union_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:211
  Kprint_union_typeF47I(buffer_, T6);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:212
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K46);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:213
  T7 = SLOT_VALUE_INITD(union_, 2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:213
  Kprint_union_typeF47I(buffer_, T7);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:214
  T4 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K39);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:199
  MV_SET_COUNT(0);
  return(T4);
}

D Kprint_unique_nameYcommon_dylan_internalsVcommon_dylanMM2I (D buffer_, D singleton_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_1 T5 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:217
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:219
  T3 = Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI(singleton_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:219
  T5.vector_element_[0] = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:219
  Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K36, &T5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:220
  T6 = SLOT_VALUE_INITD(singleton_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:220
  ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K37, 2);
  ENGINE_NODE_CALL2(&K37, buffer_, T6);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:221
  T4 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K39);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:217
  MV_SET_COUNT(0);
  return(T4);
}

D Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI (D object_) {
  D T1_0;
  D T2;
  D T3_0;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:136
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:138
  T5 = primitive_instanceQ(object_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:138
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:139
    T1_0 = &K40;
    T4_0 = T1_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:140
    T2 = Kobject_classVKdI(object_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:140
    T3_0 = Kobject_nameYcommon_dylan_internalsVcommon_dylanI(T2);
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:138
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:136
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kprint_stringYcommon_dylan_internalsVcommon_dylanI (D buffer_, D string_) {
  DWORD T2T, T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  DBCHR T7;
  D T8;
  DWORD T9;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:16
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
  T4 = SLOT_VALUE_INITD(string_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
  T2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
    T6 = primitive_machine_word_equalQ(T2,T5);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
    if (T6 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
      T7 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string_, 1, T2);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
      T8 = primitive_raw_as_byte_character(T7);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:19
      KaddXVKdMM4I(buffer_, T8);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
      T9 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
      T2T = T9;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
    T3 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:18
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:16
  MV_SET_COUNT(0);
  return(T3);
}

D Kobject_nameYcommon_dylan_internalsVcommon_dylanI (D object_) {
  D maybe_name_;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:118
  CONGRUENT_CALL_PROLOG(&Kdebug_nameVKe, 1);
  maybe_name_ = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:119
  if (maybe_name_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:120
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T3_0 = CONGRUENT_CALL2(&KLbyte_stringGVKd, maybe_name_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:120
    T6_0 = T3_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T3_0);
      primitive_type_check(T6_0, &KLstringGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T5_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:122
    T4_0 = &K42;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:119
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:116
  MV_SET_COUNT(1);
  return(T5_0);
}

static D Kprint_union_typeF47I (D buffer_, D type_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;
  D T7_0;
  D T8;
  D T9_0;
  D T10_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:201
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:204
  T6 = primitive_instanceQ(type_,&KLsingletonGVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:204
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:205
    T2 = CALL1(&Ksingleton_objectVKe, type_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:205
    ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K48, 2);
    T7_0 = ENGINE_NODE_CALL2(&K48, buffer_, T2);
    T4_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:204
    T8 = primitive_instanceQ(type_,&KLclassGVKd);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:204
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:206
      T9_0 = Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0I(buffer_, type_);
      T3_0 = T9_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:207
      ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K50, 2);
      T10_0 = ENGINE_NODE_CALL2(&K50, buffer_, type_);
      T3_0 = T10_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:204
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:204
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:201
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:201
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0I (D buffer_, D object_) {
  D name_;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:126
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:129
  name_ = Kprimitive_nameYcommon_dylan_internalsVcommon_dylanI(object_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:130
  if (name_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:206
    T6 = name_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:131
    T4 = CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, T6);
    T5 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:132
    ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K53, 2);
    T7 = ENGINE_NODE_CALL2(&K53, buffer_, object_);
    T5 = T7;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:130
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:126
  MV_SET_COUNT(0);
  return(T5);
}

D Kprimitive_nameYcommon_dylan_internalsVcommon_dylanI (D object_) {
  D T1_0;
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D T21_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:183
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
  T13 = primitive_instanceQ(object_,&KLbyte_stringGVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:186
    T1_0 = object_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:186
    T20_0 = T1_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T1_0);
      primitive_type_check(T20_0, &K56);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T12_0 = T20_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
    T14 = primitive_instanceQ(object_,&KLcharacterGVKd);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:187
      T15_0 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, object_, (D) 5);
      T11_0 = T15_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
      T16 = primitive_instanceQ(object_,&KLconditionGVKd);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:188
        T2_0 = CALL1(&Kcondition_to_stringYcommon_extensionsVcommon_dylan, object_);
        T10_0 = T2_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
        T17 = primitive_instanceQ(object_,&KLlocatorGYlocators_protocolVcommon_dylan);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
        if (T17 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:189
          CONGRUENT_CALL_PROLOG(&KasVKd, 2);
          T3_0 = CONGRUENT_CALL2(&KLstringGVKd, object_);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:189
          T21_0 = T3_0;
          {
            MV_CHECK_TYPE_PROLOGUE(T3_0);
            primitive_type_check(T21_0, &K56);
            MV_CHECK_TYPE_EPILOGUE();
          }
          T9_0 = T21_0;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
          T18 = primitive_instanceQ(object_,&KLclassGVKd);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
          if (T18 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:190
            T4_0 = Kobject_nameYcommon_dylan_internalsVcommon_dylanI(object_);
            T8_0 = T4_0;
          } else {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
            T19 = primitive_instanceQ(object_,&KLfunctionGVKd);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
            if (T19 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:191
              T5_0 = Kobject_nameYcommon_dylan_internalsVcommon_dylanI(object_);
              T7_0 = T5_0;
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:192
              T6_0 = &KPfalseVKi;
              T7_0 = T6_0;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
            T8_0 = T7_0;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
          T9_0 = T8_0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
        T10_0 = T9_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
      T11_0 = T10_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:185
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:183
  MV_SET_COUNT(1);
  return(T12_0);
}

static D Ksymbol_nameF202I (D symbol_) {
  D T2_0;
  D T3;
  D T4_0;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:159
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:160
  T3 = SLOT_VALUE_INITD(symbol_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:160
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:160
  T2_0 = T4_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T4_0);
    primitive_type_check(T2_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:160
  T5 = T2_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:160
  T6_0 = Kas_lowercaseVKdMM2I(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:159
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kprint_collectionYcommon_dylan_internalsVcommon_dylanMM0I (D buffer_, D collection_, D Urest_, D print_length_) {
  D T5;
  D T6;
  D print_lengthF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_2 T13 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
  T10 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:586
    T5 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
    primitive_type_check(T6, &K132);
    T11 = T6;
    print_lengthF7 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
    primitive_type_check(print_length_, &K132);
    T12 = print_length_;
    print_lengthF7 = T12;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:588
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K78);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:589
  T8 = Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI(collection_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:589
  CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, T8);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:590
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K79);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:591
  T13.vector_element_[0] = IKJprint_length_;
  T13.vector_element_[1] = print_lengthF7;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:591
  ENGINE_NODE_CALL_PROLOG(&Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylan, &K155, 3);
  ENGINE_NODE_CALL3(&K155, buffer_, collection_, &T13);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:592
  T9 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K39);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:584
  MV_SET_COUNT(0);
  return(T9);
}

D Kfloat_to_stringYcommon_extensionsVcommon_dylanI (D float_, D Urest_, D decimal_points_) {
  D decimal_pointsF4;
  D T5;
  D T6_0;
  D classF7;
  D T8_0;
  D T8_1;
  D T8_2;
  D T9_0;
  D T9_1;
  D T9_2;
  D max_digits_;
  D marker_;
  D force_markerQ_;
  D T13;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17;
  D T18;
  D T19_0;
  D T20_0;
  D T21_0;
  D T22;
  D T23_0;
  D T24_0;
  D T25_0;
  D T26;
  D T27;
  D positive_string_;
  D T29_0;
  D ten_;
  D T31;
  D dec_pointF32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D tensF39;
  D T40;
  D T41;
  DWORD i_T, i_;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  DWORD T61T, T61;
  D T62_0;
  D T63_0;
  D T64_0;
  D T65_0;
  D T66_0;
  D T67_0;
  D dec_pointF68;
  D T69;
  D T70;
  D T71;
  D T72;
  D sub_float_;
  D T74;
  D T75;
  D T76;
  D T77;
  D tensF78;
  D T79;
  D T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  DWORD T86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94_0;
  D T94_1;
  D T94_2;
  D T95;
  D T96_0;
  D T96_1;
  D T96_2;
  _KLsimple_object_vectorGVKd_1 T97 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T98_0;
  D T98_1;
  D T98_2;
  D T99;
  D T100;
  D T101;
  D T102_0;
  D T103;
  D T104;
  D T105;
  _KLsimple_object_vectorGVKd_1 T106 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T107;
  D T108;
  D T109_0;
  D T110;
  D T111;
  D T112;
  _KLsimple_object_vectorGVKd_1 T113 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_2 T114 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T115;
  _KLsimple_object_vectorGVKd_1 T116 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_1 T117 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T118;
  D T119_0;
  DWORD T120;
  D T121;
  D T122;
  DWORD T123;
  DWORD T124;
  D T125;
  DWORD T126;
  DWORD T127;
  DWORD T128;
  DWORD T129;
  D T130;
  D T131;
  D T132;
  D T133;
  DWORD T134;
  D T135;
  D T136_0;
  D T136_1;
  D integerF137;
  D remainder_;
  D T139;
  D threshold_;
  D T141;
  D T142;
  D T143;
  D T144;
  D T145;
  D T146;
  D minus_threshold_;
  D UtmpF148;
  D T149;
  D T150;
  D T151;
  D T152;
  D T153;
  D T154;
  D T155_0;
  D UtmpF156;
  DWORD T157;
  D T158;
  DWORD T159;
  DWORD T160;
  D T161;
  D T162_0;
  D T162_1;
  DWORD T163;
  DWORD T164;
  D T165;
  D T166_0;
  D T166_1;
  DWORD T167;
  D T168;
  DWORD T169;
  DWORD T170;
  D T171;
  D T172_0;
  D T172_1;
  DWORD T173;
  DWORD T174;
  D T175;
  D T176_0;
  D T176_1;
  D T177_0;
  D T177_1;
  D T178_0;
  D T178_1;
  D T179_0;
  D T179_1;
  D T180_0;
  D T180_1;
  D T181;
  D T182;
  D T183;
  D T184;
  D T185;
  D T186;
  D T187;
  D T188;
  D T189;
  D T190_0;
  D T191_0;
  D T192;
  D T193;
  DWORD T194;
  D T195;
  D T196;
  DWORD T197;
  D T198;
  DBCHR T199;
  D T200;
  DWORD T201;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:352
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:352
  primitive_type_check(decimal_points_, &K132);
  decimal_pointsF4 = decimal_points_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:356
  if (decimal_pointsF4 != &KPfalseVKi) {
    T85 = decimal_pointsF4;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:356
    T86 = primitive_cast_integer_as_raw(T85);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:356
    T87 = primitive_machine_word_equalQ(T86,1);
    T5 = T87;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:356
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:356
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:357
    CONGRUENT_CALL_PROLOG(&Kcontagious_typeVKi, 2);
    T88 = CONGRUENT_CALL2(float_, (D) 5);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:357
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T89 = CONGRUENT_CALL2(T88, float_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:357
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T90 = CONGRUENT_CALL2(T88, (D) 5);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:357
    T91 = CALL2(&KroundSVKd, T89, T90);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:357
    T92 = T91;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:357
    T6_0 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T92, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
    T67_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:359
    classF7 = Kobject_classVKdI(float_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
    T93 = primitive_instanceQ(float_,&KLsingle_floatGVKd);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
    if (T93 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:364
      T94_0 = (D) 29;
      T94_1 = C('s');
      T94_2 = &KPfalseVKi;
      T9_0 = T94_0;
      T9_1 = T94_1;
      T9_2 = T94_2;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
      T95 = primitive_instanceQ(float_,&KLdouble_floatGVKd);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
      if (T95 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:365
        T96_0 = (D) 29;
        T96_1 = C('d');
        T96_2 = &KPtrueVKi;
        T8_0 = T96_0;
        T8_1 = T96_1;
        T8_2 = T96_2;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
        T97.vector_element_[0] = float_;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
        T98_0 = KerrorVKdMM1I(&K133, &T97);
        T98_1 = MV_GET_ELT(1);
        T98_2 = MV_GET_ELT(2);
        T8_0 = T98_0;
        T8_1 = T98_1;
        T8_2 = T98_2;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
      T9_0 = T8_0;
      T9_1 = T8_1;
      T9_2 = T8_2;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:363
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:362
    max_digits_ = T9_0;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:362
    marker_ = T9_1;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:362
    force_markerQ_ = T9_2;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:368
    if (decimal_pointsF4 != &KPfalseVKi) {
      T13 = decimal_pointsF4;
    } else {
      T13 = max_digits_;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:368
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:368
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T99 = CONGRUENT_CALL2(T13, max_digits_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:368
    if (T99 != &KPfalseVKi) {
      T100 = T13;
    } else {
      T100 = max_digits_;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:368
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:370
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T101 = CONGRUENT_CALL2(float_, &K134);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:370
    if (T101 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:370
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T102_0 = CONGRUENT_CALL2(float_, &K135);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:370
      T103 = T102_0;
      T104 = T103;
    } else {
      T104 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:370
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
    if (T104 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:372
      T105 = primitive_idQ(classF7,&KLsingle_floatGVKd);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:372
      if (T105 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:373
        T14_0 = &K136;
        T16_0 = T14_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:375
        T106.vector_element_[0] = marker_;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:375
        T15_0 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(&K137, &T106);
        T16_0 = T15_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:372
      T66_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:377
      CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
      T107 = CONGRUENT_CALL1(float_);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:377
      if (T107 != &KPfalseVKi) {
        T111 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:377
        CONGRUENT_CALL_PROLOG(&KSVKd, 2);
        T108 = CONGRUENT_CALL2(float_, &K138);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:377
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T109_0 = CONGRUENT_CALL2(T108, float_);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:377
        T110 = T109_0;
        T111 = T110;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:377
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
      if (T111 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:378
        CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
        T17 = CONGRUENT_CALL1(float_);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:378
        if (T17 != &KPfalseVKi) {
          T18 = C('-');
        } else {
          T18 = C('+');
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:378
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:379
        T112 = primitive_idQ(classF7,&KLsingle_floatGVKd);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:379
        if (T112 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:380
          T113.vector_element_[0] = T18;
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:380
          T19_0 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(&K139, &T113);
          T21_0 = T19_0;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:382
          T114.vector_element_[0] = T18;
          T114.vector_element_[1] = marker_;
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:382
          T20_0 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(&K140, &T114);
          T21_0 = T20_0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:379
        T65_0 = T21_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:384
        CONGRUENT_CALL_PROLOG(&KzeroQVKd, 1);
        T22 = CONGRUENT_CALL1(float_);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
        if (T22 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:385
          T115 = primitive_idQ(classF7,&KLsingle_floatGVKd);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:385
          if (T115 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:386
            T23_0 = &K141;
            T25_0 = T23_0;
          } else {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:388
            T116.vector_element_[0] = marker_;
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:388
            T24_0 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(&K142, &T116);
            T25_0 = T24_0;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:385
          T64_0 = T25_0;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:390
          CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
          T26 = CONGRUENT_CALL1(float_);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
          if (T26 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:391
            CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
            T27 = CONGRUENT_CALL1(float_);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:391
            positive_string_ = CALL1(&Kfloat_to_stringYcommon_extensionsVcommon_dylan, T27);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:392
            T117.vector_element_[0] = positive_string_;
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:392
            T29_0 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(&K143, &T117);
            T63_0 = T29_0;
          } else {
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:394
            T119_0 = KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vectorGVKe, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:394
            T118 = T119_0;
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:395
            CONGRUENT_CALL_PROLOG(&KasVKd, 2);
            ten_ = CONGRUENT_CALL2(classF7, &K144);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:396
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T31 = CONGRUENT_CALL2(T100, (D) 5);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:396
            primitive_type_check(T31, &KLintegerGVKd);
            dec_pointF32 = T31;
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:396
            dec_pointF68 = MAKE_D_CELL(dec_pointF32);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:397
            T33 = MAKE_CLOSURE(&Ksub_printF146, 2);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:397
            INIT_CLOSURE(T33, 2, dec_pointF68, T33);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:411
            CONGRUENT_CALL_PROLOG(&KlogYtranscendentalsVcommon_dylan, 1);
            T34 = CONGRUENT_CALL1(float_);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:411
            T35 = CALL1(&KlogYtranscendentalsVcommon_dylan, ten_);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:411
            T36 = CALL2(&KtruncateSVKd, T34, T35);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
            T120 = primitive_cast_integer_as_raw(T36);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
            T121 = primitive_machine_word_less_thanQ(1,T120);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
            if (T121 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
              T72 = GET_D_CELL_VAL(dec_pointF68);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
              T123 = primitive_cast_integer_as_raw(T72);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
              T124 = primitive_cast_integer_as_raw(T36);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
              T125 = primitive_machine_word_less_thanQ(T123,T124);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
              T122 = primitive_not(T125);
              T37 = T122;
            } else {
              T37 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
            if (T37 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:413
              T71 = GET_D_CELL_VAL(dec_pointF68);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:413
              T126 = primitive_cast_integer_as_raw(T71);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:413
              T127 = primitive_cast_integer_as_raw(T36);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:413
              T128 = primitive_machine_word_logxor(T127,1);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:413
              T129 = primitive_machine_word_subtract_signal_overflow(T126,T128);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:413
              T130 = primitive_cast_raw_as_integer(T129);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:413
              SET_D_CELL_VAL(dec_pointF68, T130);
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:412
            sub_float_ = float_;
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:417
            CONGRUENT_CALL_PROLOG(&KSVKd, 2);
            T38 = CONGRUENT_CALL2(ten_, ten_);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:417
            primitive_type_check(T38, &KLfloatGVKd);
            tensF39 = T38;
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:417
            tensF78 = tensF39;
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
            CONGRUENT_CALL_PROLOG(&K_VKd, 2);
            T40 = CONGRUENT_CALL2(T100, T36);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
            CONGRUENT_CALL_PROLOG(&KabsVKd, 1);
            T41 = CONGRUENT_CALL1(T40);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
            i_T = 5;
          L0: ;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
              i_ = i_T;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
              T135 = primitive_cast_raw_as_integer(i_);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
              CONGRUENT_CALL_PROLOG(&KLVKd, 2);
              T43 = CONGRUENT_CALL2(T41, T135);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
              if (T43 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:419
                T84 = tensF78;
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:419
                T131 = KLVKdMM5I(T84, (D) 400000001);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:419
                if (T131 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:420
                  T83 = tensF78;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:420
                  CONGRUENT_CALL_PROLOG(&KTVKd, 2);
                  T44 = CONGRUENT_CALL2(ten_, T83);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:420
                  primitive_type_check(T44, &KLfloatGVKd);
                  T45 = T44;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:420
                  tensF78 = T45;
                } else {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
                  T46 = CONGRUENT_CALL2(T100, T36);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                  if (T46 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    T77 = sub_float_;
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    T82 = tensF78;
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    CONGRUENT_CALL_PROLOG(&KSVKd, 2);
                    T47 = CONGRUENT_CALL2(T77, T82);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    primitive_type_check(T47, &KLfloatGVKd);
                    T132 = T47;
                    T49 = T132;
                  } else {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    T76 = sub_float_;
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    T81 = tensF78;
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    CONGRUENT_CALL_PROLOG(&KTVKd, 2);
                    T48 = CONGRUENT_CALL2(T76, T81);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                    primitive_type_check(T48, &KLfloatGVKd);
                    T133 = T48;
                    T49 = T133;
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:424
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:423
                  sub_float_ = T49;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:425
                  primitive_type_check(ten_, &KLfloatGVKd);
                  T50 = ten_;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:425
                  tensF78 = T50;
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:419
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
                T134 = primitive_machine_word_add_signal_overflow(i_,4);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
                i_T = T134;
                goto L0;
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:418
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:428
            CONGRUENT_CALL_PROLOG(&KLVKd, 2);
            T51 = CONGRUENT_CALL2(T100, T36);
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:428
            if (T51 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              T75 = sub_float_;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              T80 = tensF78;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              CONGRUENT_CALL_PROLOG(&KtruncateSVKd, 2);
              T136_0 = CONGRUENT_CALL2(T75, T80);
              T136_1 = MV_GET_ELT(1);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              integerF137 = T136_0;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              remainder_ = T136_1;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
              T189 = CONGRUENT_CALL1(T80);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              if (T189 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
                T190_0 = CONGRUENT_CALL1(T80);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                T191_0 = T190_0;
                {
                  MV_CHECK_TYPE_PROLOGUE(T190_0);
                  primitive_type_check(T191_0, &KLmachine_numberGVKi);
                  MV_CHECK_TYPE_EPILOGUE();
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                T192 = T191_0;
                T193 = T192;
              } else {
                T193 = T80;
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              CONGRUENT_CALL_PROLOG(&KSVKd, 2);
              T139 = CONGRUENT_CALL2(T193, &K145);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              primitive_type_check(T139, &KLmachine_numberGVKi);
              threshold_ = T139;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              CONGRUENT_CALL_PROLOG(&KLVKd, 2);
              T155_0 = CONGRUENT_CALL2(threshold_, remainder_);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              UtmpF156 = T155_0;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              if (UtmpF156 != &KPfalseVKi) {
                T143 = UtmpF156;
              } else {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                CONGRUENT_CALL_PROLOG(&KEVKd, 2);
                T141 = CONGRUENT_CALL2(remainder_, threshold_);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                if (T141 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T157 = primitive_cast_integer_as_raw(integerF137);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T158 = primitive_machine_word_logbitQ(2,T157);
                  T142 = T158;
                } else {
                  T142 = &KPfalseVKi;
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                T143 = T142;
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              if (T143 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
                T144 = CONGRUENT_CALL1(T80);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                if (T144 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T159 = primitive_cast_integer_as_raw(integerF137);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T160 = primitive_machine_word_subtract_signal_overflow(T159,4);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T161 = primitive_cast_raw_as_integer(T160);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                  T145 = CONGRUENT_CALL2(remainder_, T80);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T162_0 = T161;
                  T162_1 = T145;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T179_0 = T162_0;
                  T179_1 = T162_1;
                  {
                    MV_CHECK_TYPE_PROLOGUE(T162_0);
                    primitive_type_check(T179_0, &KLobjectGVKd);
                    primitive_type_check(T179_1, &KLmachine_numberGVKi);
                    MV_CHECK_TYPE_EPILOGUE();
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T181 = T179_0;
                  T183 = T181;
                } else {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T163 = primitive_cast_integer_as_raw(integerF137);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T164 = primitive_machine_word_add_signal_overflow(T163,4);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T165 = primitive_cast_raw_as_integer(T164);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
                  T146 = CONGRUENT_CALL2(remainder_, T80);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T166_0 = T165;
                  T166_1 = T146;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T180_0 = T166_0;
                  T180_1 = T166_1;
                  {
                    MV_CHECK_TYPE_PROLOGUE(T166_0);
                    primitive_type_check(T180_0, &KLobjectGVKd);
                    primitive_type_check(T180_1, &KLmachine_numberGVKi);
                    MV_CHECK_TYPE_EPILOGUE();
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T182 = T180_0;
                  T183 = T182;
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                T188 = T183;
              } else {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                CONGRUENT_CALL_PROLOG(&KnegativeVKd, 1);
                minus_threshold_ = CONGRUENT_CALL1(threshold_);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                CONGRUENT_CALL_PROLOG(&KLVKd, 2);
                UtmpF148 = CONGRUENT_CALL2(remainder_, minus_threshold_);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                if (UtmpF148 != &KPfalseVKi) {
                  T151 = UtmpF148;
                } else {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
                  T149 = CONGRUENT_CALL2(remainder_, minus_threshold_);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  if (T149 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T167 = primitive_cast_integer_as_raw(integerF137);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T168 = primitive_machine_word_logbitQ(2,T167);
                    T150 = T168;
                  } else {
                    T150 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T151 = T150;
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                if (T151 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  CONGRUENT_CALL_PROLOG(&KnegativeQVKd, 1);
                  T152 = CONGRUENT_CALL1(T80);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  if (T152 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T169 = primitive_cast_integer_as_raw(integerF137);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T170 = primitive_machine_word_add_signal_overflow(T169,4);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T171 = primitive_cast_raw_as_integer(T170);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    CONGRUENT_CALL_PROLOG(&K_VKd, 2);
                    T153 = CONGRUENT_CALL2(remainder_, T80);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T172_0 = T171;
                    T172_1 = T153;
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T177_0 = T172_0;
                    T177_1 = T172_1;
                    {
                      MV_CHECK_TYPE_PROLOGUE(T172_0);
                      primitive_type_check(T177_0, &KLobjectGVKd);
                      primitive_type_check(T177_1, &KLmachine_numberGVKi);
                      MV_CHECK_TYPE_EPILOGUE();
                    }
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T184 = T177_0;
                    T186 = T184;
                  } else {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T173 = primitive_cast_integer_as_raw(integerF137);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T174 = primitive_machine_word_subtract_signal_overflow(T173,4);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T175 = primitive_cast_raw_as_integer(T174);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                    T154 = CONGRUENT_CALL2(remainder_, T80);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T176_0 = T175;
                    T176_1 = T154;
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T178_0 = T176_0;
                    T178_1 = T176_1;
                    {
                      MV_CHECK_TYPE_PROLOGUE(T176_0);
                      primitive_type_check(T178_0, &KLobjectGVKd);
                      primitive_type_check(T178_1, &KLmachine_numberGVKi);
                      MV_CHECK_TYPE_EPILOGUE();
                    }
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                    T185 = T178_0;
                    T186 = T185;
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                  T187 = T186;
                } else {
                  T187 = integerF137;
                }
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
                T188 = T187;
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:429
              get_teb()->function = T33;
              Ksub_printF146I(T118, T100, T188, (D) 1);
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:431
              T74 = sub_float_;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:431
              T79 = tensF78;
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:431
              CONGRUENT_CALL_PROLOG(&KTVKd, 2);
              T52 = CONGRUENT_CALL2(T74, T79);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:431
              T53 = CALL1(&KroundVKd, T52);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:431
              get_teb()->function = T33;
              Ksub_printF146I(T118, T100, T53, (D) 1);
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:428
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
            if (force_markerQ_ != &KPfalseVKi) {
              T57 = force_markerQ_;
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
              T194 = primitive_cast_integer_as_raw(T36);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
              T195 = primitive_machine_word_equalQ(T194,1);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
              if (T195 != &KPfalseVKi) {
                T56 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
                CONGRUENT_CALL_PROLOG(&K_VKd, 2);
                T54 = CONGRUENT_CALL2(T100, (D) 5);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
                T70 = GET_D_CELL_VAL(dec_pointF68);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
                CONGRUENT_CALL_PROLOG(&KEVKd, 2);
                T55 = CONGRUENT_CALL2(T70, T54);
                T56 = T55;
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
              T57 = T56;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
            if (T57 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:434
              KaddXVKdMM4I(T118, marker_);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:435
              CONGRUENT_CALL_PROLOG(&K_VKd, 2);
              T58 = CONGRUENT_CALL2(T100, (D) 5);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:435
              T69 = GET_D_CELL_VAL(dec_pointF68);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:435
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T59 = CONGRUENT_CALL2(T69, T58);
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:435
              if (T59 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                T60 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T36, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                T196 = SLOT_VALUE_INITD(T60, 0);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                T197 = primitive_cast_integer_as_raw(T196);
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                T61T = 1;
              L1: ;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                  T61 = T61T;
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                  T198 = primitive_machine_word_equalQ(T61,T197);
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                  if (T198 == &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                    T199 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T60, 1, T61);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                    T200 = primitive_raw_as_byte_character(T199);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:437
                    KaddXVKdMM4I(T118, T200);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                    T201 = primitive_machine_word_add_signal_overflow(T61,4);
                    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                    T61T = T201;
                    goto L1;
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
                  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:436
              } else {
                // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:442
                KaddXVKdMM4I(T118, C('0'));
              }
              // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:435
            }
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:433
            // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:445
            T62_0 = Kbuffer_contentsYcommon_dylan_internalsVcommon_dylanI(T118);
            T63_0 = T62_0;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
          T64_0 = T63_0;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
        T65_0 = T64_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
      T66_0 = T65_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:369
    T67_0 = T66_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:356
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:352
  MV_SET_COUNT(1);
  return(T67_0);
}

D Kmachine_word_to_stringYcommon_extensionsVcommon_dylanI (D mw_, D Urest_, D prefix_) {
  D prefixF4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  DWORD raw_x_;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:471
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:471
  primitive_type_check(prefix_, &K56);
  prefixF4 = prefix_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:478
  raw_x_ = primitive_unwrap_machine_word(mw_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:478
  T11 = primitive_machine_word_unsigned_shift_right(raw_x_,32);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:477
  T12 = primitive_machine_word_shift_left_signal_overflow(T11,2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:477
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:477
  T14 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:482
  T15 = primitive_machine_word_unsigned_double_shift_left_high(0,raw_x_,32);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:481
  T16 = primitive_machine_word_unsigned_shift_right(T15,32);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:480
  T17 = primitive_machine_word_shift_left_signal_overflow(T16,2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:480
  T18 = primitive_machine_word_logior(T17,1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:480
  T19 = primitive_cast_raw_as_integer(T18);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:485
  if (prefixF4 != &KPfalseVKi) {
    T5 = prefixF4;
  } else {
    T5 = &KPempty_stringVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:485
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:486
  T6 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T14, &KPempty_vectorVKi, (D) 65, (D) 33, C('0'));
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:487
  T7 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T19, &KPempty_vectorVKi, (D) 65, (D) 33, C('0'));
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:484
  T8_0 = CALL4(&Kconcatenate_asVKd, &KLstringGVKd, T5, T6, T7);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:471
  T9_0 = T8_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T8_0);
    primitive_type_check(T9_0, &KLstringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:471
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kprint_methodYcommon_dylan_internalsVcommon_dylanI (D buffer_, D object_) {
  D T2;
  D T3;
  D specializers_;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:706
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:708
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K78);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:709
  T2 = Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI(object_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:709
  CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, T2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:710
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K79);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:711
  T3 = Kprimitive_nameYcommon_dylan_internalsVcommon_dylanI(object_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:711
  CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, T3);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:712
  CONGRUENT_CALL_PROLOG(&Kfunction_specializersVKd, 1);
  specializers_ = CONGRUENT_CALL1(object_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:713
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K80);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:714
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T5 = CONGRUENT_CALL1(specializers_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:714
  if (T5 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:715
    CALL4(&Kprint_elementsYcommon_dylan_internalsVcommon_dylan, buffer_, specializers_, IKJprint_function_, &Kprint_specializerYcommon_dylan_internalsVcommon_dylan);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:714
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:717
  T6 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K85);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:706
  MV_SET_COUNT(0);
  return(T6);
}

D Kprint_basic_nameYcommon_dylan_internalsVcommon_dylanI (D buffer_, D Urest_, D object_, D name_, D class_name_) {
  D T6;
  D T7;
  D nameF8;
  D T9;
  D T10;
  D class_nameF11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_2 T21 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_1 T22 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  T16 = primitive_idQ(name_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:147
    T6 = Kprimitive_nameYcommon_dylan_internalsVcommon_dylanI(object_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
    T7 = T6;
    nameF8 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
    primitive_type_check(name_, &K56);
    T17 = name_;
    nameF8 = T17;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  T18 = primitive_idQ(class_name_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:148
    T9 = Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI(object_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
    T10 = T9;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
    primitive_type_check(T10, &KLstringGVKd);
    T19 = T10;
    class_nameF11 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
    primitive_type_check(class_name_, &KLstringGVKd);
    T20 = class_name_;
    class_nameF11 = T20;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:150
  if (nameF8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:172
    T15 = nameF8;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:151
    T21.vector_element_[0] = class_nameF11;
    T21.vector_element_[1] = T15;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:151
    T12 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K76, &T21);
    T14 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:153
    T22.vector_element_[0] = class_nameF11;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:153
    T13 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K77, &T22);
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:150
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:144
  MV_SET_COUNT(0);
  return(T14);
}

D Kprint_elementsYcommon_dylan_internalsVcommon_dylanI (D buffer_, D sequence_, D Urest_, D print_length_, D separator_, D print_function_) {
  D T7;
  D T8;
  D print_lengthF9;
  D sequence_size_;
  D print_lengthF11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18T, T18;
  DWORD count_T, count_;
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
  D current_separator_;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  DWORD T38;
  D T39;
  D T40_0;
  D T41;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:675
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:675
  T33 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:675
  if (T33 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:677
    T7 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:675
    T8 = T7;
    print_lengthF9 = T8;
  } else {
    print_lengthF9 = print_length_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:675
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:681
  current_separator_ = &KPempty_stringVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:682
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  sequence_size_ = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:683
  if (print_lengthF9 != &KPfalseVKi) {
    print_lengthF11 = print_lengthF9;
  } else {
    print_lengthF11 = sequence_size_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:683
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T12 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  T13 = T12;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  T14 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  T15 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  T16 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  T17 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  T18T = T13;
  count_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    T18 = T18T;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    count_ = count_T;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    T39 = primitive_cast_raw_as_integer(count_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    T20 = CALL3(T16, sequence_, T18, T14);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    if (T20 != &KPfalseVKi) {
      T22 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T21 = CONGRUENT_CALL2(T39, print_lengthF11);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
      T34 = primitive_not(T21);
      T22 = T34;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    if (T22 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
      T23 = CALL2(T17, sequence_, T18);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:686
      T31 = current_separator_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:686
      CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, T31);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:687
      current_separator_ = separator_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:688
      if (print_function_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:690
        primitive_type_check(print_function_, &KLfunctionGVKd);
        T24 = print_function_;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:690
        CALL2(T24, buffer_, T23);
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:691
        T35 = primitive_instanceQ(T23,&KLcollectionGVKd);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:691
        if (T35 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:647
          T32 = T23;
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:691
          T36 = primitive_instanceQ(T32,&KLstringGVKd);
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:691
          T37 = primitive_not(T36);
          T25 = T37;
        } else {
          T25 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:691
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:688
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:692
          Kprint_basic_nameYcommon_dylan_internalsVcommon_dylanI(buffer_, &KPempty_vectorVKi, T23, &KPfalseVKi, &KPunboundVKi);
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:694
          ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K111, 2);
          ENGINE_NODE_CALL2(&K111, buffer_, T23);
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:688
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:688
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
      T26 = CALL2(T15, sequence_, T18);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
      T38 = primitive_machine_word_add_signal_overflow(count_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
      T18T = T26;
      count_T = T38;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:684
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:697
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T40_0 = CONGRUENT_CALL2(print_lengthF11, sequence_size_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:697
  T41 = T40_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:697
  if (T41 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:698
    CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, separator_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:699
    T27 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K112);
    T29 = T27;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:697
    T28 = &KPfalseVKi;
    T29 = T28;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:697
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:675
  MV_SET_COUNT(0);
  return(T29);
}

D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM0I (D buffer_, D type_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:720
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:722
  ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K107, 2);
  T3 = ENGINE_NODE_CALL2(&K107, buffer_, type_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:720
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM1I (D buffer_, D object_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:725
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:727
  T3 = Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0I(buffer_, object_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:725
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM2I (D buffer_, D type_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:730
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:732
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K103);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:733
  T4 = SLOT_VALUE_INITD(type_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:733
  ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K104, 2);
  ENGINE_NODE_CALL2(&K104, buffer_, T4);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:734
  T3 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K100);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:730
  MV_SET_COUNT(0);
  return(T3);
}

D Kprint_specializerYcommon_dylan_internalsVcommon_dylanMM3I (D buffer_, D type_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:737
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:739
  Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K99);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:740
  T4 = SLOT_VALUE_INITD(type_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:740
  Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM0I(buffer_, T4);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:741
  T3 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, &K100);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:737
  MV_SET_COUNT(0);
  return(T3);
}

static D Ksub_printF146I (D implicit_argumentF26, D implicit_argumentF25, D mantissa_, D count_) {
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8_0;
  DWORD T8_1;
  DWORD quotient_;
  DWORD remainder_;
  DWORD T11;
  DWORD T12;
  D T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  D T17;
  DWORD T18;
  DWORD T19;
  D T20;
  DWORD T21;
  D T22;
  DWORD T23;
  D T24;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:397
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  T7 = primitive_cast_integer_as_raw(mantissa_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  T6 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  T8_0 = primitive_machine_word_truncateS_byref(T6,10,(DWORD*)&T8_1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  quotient_ = T8_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  remainder_ = T8_1;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  T11 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:399
  T14 = primitive_machine_word_shift_left_signal_overflow(remainder_,2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:400
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(count_, implicit_argumentF25);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:400
  if (T4 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:402
    T15 = primitive_cast_integer_as_raw(count_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:402
    T16 = primitive_machine_word_add_signal_overflow(T15,4);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:402
    T17 = primitive_cast_raw_as_integer(T16);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:402
    get_teb()->function = CREF(1);
    Ksub_printF146I(implicit_argumentF26, implicit_argumentF25, T13, T17);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:400
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:406
  T5 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:406
  T18 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:406
  T19 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:406
  T20 = primitive_machine_word_equalQ(T18,T19);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:406
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:407
    KaddXVKdMM4I(implicit_argumentF26, C('.'));
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:406
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:409
  T21 = primitive_machine_word_add_signal_overflow(193,T14);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:409
  T23 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:409
  T22 = primitive_raw_as_byte_character(T23);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:409
  T24 = KaddXVKdMM4I(implicit_argumentF26, T22);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:397
  return(T24);
}

D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM0I (D buffer_, D collection_, D Urest_, D print_length_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
  T9 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:597
    T5 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
    primitive_type_check(T6, &K132);
    T6;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
    primitive_type_check(print_length_, &K132);
    print_length_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:600
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T7 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:600
  T10.vector_element_[0] = T7;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:600
  T8 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K199, &T10);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:595
  MV_SET_COUNT(0);
  return(T8);
}

D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM1I (D buffer_, D array_, D Urest_, D print_length_) {
  D T5;
  D T6;
  D print_lengthF7;
  D dimensions_;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
  T10 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:605
    T5 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
    primitive_type_check(T6, &K132);
    T11 = T6;
    print_lengthF7 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
    primitive_type_check(print_length_, &K132);
    T12 = print_length_;
    print_lengthF7 = T12;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:607
  CONGRUENT_CALL_PROLOG(&KdimensionsVKd, 1);
  dimensions_ = CONGRUENT_CALL1(array_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:608
  T9 = CALL6(&Kprint_elementsYcommon_dylan_internalsVcommon_dylan, buffer_, dimensions_, IKJprint_length_, print_lengthF7, IKJseparator_, &K196);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:603
  MV_SET_COUNT(0);
  return(T9);
}

D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM2I (D buffer_, D range_, D Urest_, D print_length_) {
  D T5;
  D T6;
  D range_size_;
  D T8;
  D T9;
  D from_;
  D T11;
  D T12;
  D T13;
  D by_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T26;
  D T27;
  _KLsimple_object_vectorGVKd_2 T28 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
  T23 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:614
    T5 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
    primitive_type_check(T6, &K132);
    T6;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
    primitive_type_check(print_length_, &K132);
    print_length_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:626
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  range_size_ = CONGRUENT_CALL1(range_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:627
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T8 = CONGRUENT_CALL2(range_size_, (D) 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:627
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:628
    T9 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, Dcollection_empty_textYcommon_dylan_internalsVcommon_dylan);
    T22 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:630
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    from_ = CONGRUENT_CALL3(range_, (D) 1, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
    T24 = primitive_not(range_size_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
    if (range_size_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T25_0 = CONGRUENT_CALL2((D) 5, range_size_);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
      T26 = T25_0;
      T11 = T26;
    } else {
      T11 = T24;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T12 = CONGRUENT_CALL3(range_, (D) 5, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
      CONGRUENT_CALL_PROLOG(&K_VKd, 2);
      T13 = CONGRUENT_CALL2(T12, from_);
      by_ = T13;
    } else {
      by_ = (D) 5;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:631
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:632
    T27 = primitive_idQ(range_size_,(D) 5);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:632
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:633
      T15 = CALL4(&Kprint_rangeF189, buffer_, from_, from_, by_);
      T21 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:632
      if (range_size_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:635
        CONGRUENT_CALL_PROLOG(&K_VKd, 2);
        T17 = CONGRUENT_CALL2(range_size_, (D) 5);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:635
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T18 = CONGRUENT_CALL3(range_, T17, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:635
        T19 = CALL4(&Kprint_rangeF189, buffer_, from_, T18, by_);
        T20 = T19;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:634
        T28.vector_element_[0] = from_;
        T28.vector_element_[1] = by_;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:634
        T16 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K188, &T28);
        T20 = T16;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:632
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:632
    T22 = T21;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:627
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:612
  MV_SET_COUNT(0);
  return(T22);
}

D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3I (D buffer_, D sequence_, D Urest_, D print_length_) {
  D T5;
  D T6;
  D print_lengthF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
  T12 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:642
    T5 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
    primitive_type_check(T6, &K132);
    T13 = T6;
    print_lengthF7 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
    primitive_type_check(print_length_, &K132);
    T14 = print_length_;
    print_lengthF7 = T14;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:644
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T8 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:644
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:645
    T9 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, Dcollection_empty_textYcommon_dylan_internalsVcommon_dylan);
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:647
    T10 = CALL4(&Kprint_elementsYcommon_dylan_internalsVcommon_dylan, buffer_, sequence_, IKJprint_length_, print_lengthF7);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:644
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:640
  MV_SET_COUNT(0);
  return(T11);
}

D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM4I (D buffer_, D sequence_, D Urest_, D print_length_) {
  D T5;
  D T6;
  D print_lengthF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
  T12 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:654
    T5 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
    primitive_type_check(T6, &K132);
    T13 = T6;
    print_lengthF7 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
    primitive_type_check(print_length_, &K132);
    T14 = print_length_;
    print_lengthF7 = T14;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:656
  CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
  T8 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:656
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:657
    T9 = Kprint_stringYcommon_dylan_internalsVcommon_dylanI(buffer_, Dcollection_empty_textYcommon_dylan_internalsVcommon_dylan);
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:659
    T10 = CALL4(&Kprint_elementsYcommon_dylan_internalsVcommon_dylan, buffer_, sequence_, IKJprint_length_, print_lengthF7);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:656
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:652
  MV_SET_COUNT(0);
  return(T11);
}

D Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM5I (D buffer_, D pair_, D Urest_, D print_length_) {
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
  T9 = primitive_idQ(print_length_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:665
    T5 = Tcollection_print_lengthTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
    primitive_type_check(T6, &K132);
    T6;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
    primitive_type_check(print_length_, &K132);
    print_length_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:667
  T10 = SLOT_VALUE_INITD(pair_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:668
  T11 = primitive_instanceQ(T10,&KLpairGVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:668
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:669
    MEP_CALL_PROLOG(&Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3, &KPempty_listVKi, 3);
    MEP_CALL3(&Kprint_collection_contentsYcommon_dylan_internalsVcommon_dylanMM3, buffer_, pair_, Urest_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:669
    T12 = &KPfalseVKi;
    T8 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:671
    T13 = SLOT_VALUE_INITD(pair_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:671
    T14.vector_element_[0] = T13;
    T14.vector_element_[1] = T10;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:671
    T7 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K177, &T14);
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:668
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:663
  MV_SET_COUNT(0);
  return(T8);
}

static D Kprint_rangeF189I (D buffer_, D from_, D to_, D by_) {
  D T4;
  D T5;
  D T6;
  D T7;
  _KLsimple_object_vectorGVKd_2 T8 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_3 T9 = {&KLsimple_object_vectorGVKdW, (D) 13};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:616
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:621
  T7 = primitive_idQ(by_,(D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:621
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:622
    T8.vector_element_[0] = from_;
    T8.vector_element_[1] = to_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:622
    T4 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K190, &T8);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:623
    T9.vector_element_[0] = from_;
    T9.vector_element_[1] = to_;
    T9.vector_element_[2] = by_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:623
    T5 = Kprint_formatYcommon_dylan_internalsVcommon_dylanI(buffer_, &K191, &T9);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:621
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:616
  MV_SET_COUNT(0);
  return(T6);
}

D Kprint_pretty_nameYcommon_dylan_internalsVcommon_dylanMM1I (D buffer_, D condition_) {
  D message_;
  D T4;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:571
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:574
  CONGRUENT_CALL_PROLOG(&Kcondition_to_stringYcommon_extensionsVcommon_dylan, 1);
  message_ = CONGRUENT_CALL1(condition_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:575
  T4 = CALL2(&Kprint_stringYcommon_dylan_internalsVcommon_dylan, buffer_, message_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:571
  MV_SET_COUNT(0);
  return(T4);
}

D Knumber_to_stringYcommon_extensionsVcommon_dylanMM0I (D number_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:453
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:455
  T2_0 = Kobject_unique_nameYcommon_dylan_internalsVcommon_dylanI(number_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:453
  MV_SET_COUNT(1);
  return(T2_0);
}

D Knumber_to_stringYcommon_extensionsVcommon_dylanMM1I (D float_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:458
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:460
  T2_0 = Kfloat_to_stringYcommon_extensionsVcommon_dylanI(float_, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:458
  MV_SET_COUNT(1);
  return(T2_0);
}

D Knumber_to_stringYcommon_extensionsVcommon_dylanMM2I (D integer_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:463
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:465
  T2_0 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(integer_, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:463
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kobject_unique_nameYcommon_dylan_internalsVcommon_dylanI (D object_) {
  D T1_0;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:176
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:178
  T3_0 = KLstretchy_byte_character_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_byte_character_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:178
  T2 = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:179
  ENGINE_NODE_CALL_PROLOG(&Kprint_unique_nameYcommon_dylan_internalsVcommon_dylan, &K238, 2);
  ENGINE_NODE_CALL2(&K238, T2, object_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:180
  T1_0 = Kbuffer_contentsYcommon_dylan_internalsVcommon_dylanI(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:176
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kcondition_to_stringYcommon_extensionsVcommon_dylanMM0I (D condition_) {
  D T2;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:552
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:554
  T2 = Kobject_class_nameYcommon_dylan_internalsVcommon_dylanI(condition_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:554
  T3.vector_element_[0] = T2;
  T3.vector_element_[1] = &K260;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:554
  MIEP_CALL_PROLOG(&K262);
  T4_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, &K261, &T3);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:552
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kcondition_to_stringYcommon_extensionsVcommon_dylanMM1I (D condition_) {
  D T2_0;
  D T3_0;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:557
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:560
  T4 = SLOT_VALUE_INITD(condition_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:561
  T5 = SLOT_VALUE_INITD(condition_, 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:559
  T6.vector_element_[0] = T4;
  T6.vector_element_[1] = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:559
  T2_0 = KapplyVKdI(&Kformat_to_stringYcommon_extensionsVcommon_dylan, &T6);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:557
  T3_0 = T2_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T2_0);
    primitive_type_check(T3_0, &KLstringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:557
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kcondition_to_stringYcommon_extensionsVcommon_dylanMM2I (D error_) {
  D T2;
  D T3;
  D T4_0;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:564
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:567
  CONGRUENT_CALL_PROLOG(&Ktype_error_valueVKd, 1);
  T2 = CONGRUENT_CALL1(error_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:568
  CONGRUENT_CALL_PROLOG(&Ktype_error_expected_typeVKd, 1);
  T3 = CONGRUENT_CALL1(error_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:566
  T5.vector_element_[0] = T2;
  T5.vector_element_[1] = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:566
  T4_0 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(&K255, &T5);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:564
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kstring_to_machine_wordYcommon_extensionsVcommon_dylanI (D str_, D Urest_, D start_, D default_, D stop_) {
  D startF6;
  D T7;
  D defaultF8;
  D stopF9;
  D T10;
  D string_length_;
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
  D Utmp_;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D returnPexit_46_;
  D T33;
  D i_T, i_;
  D T35;
  D T36;
  D T37;
  D ch_;
  D T39;
  D T40;
  D integer_digit_;
  D T42;
  D T43;
  D T44_0;
  D next_keyF45;
  D T46;
  D T47_0;
  D T47_1;
  D startF48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D stopF65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70;
  D T71;
  D T72;
  D T73;
  DWORD value_;
  DWORD T75;
  D T76;
  DWORD T77;
  DWORD T78;
  D next_keyF79;
  D T80;
  D T81;
  D T82;
  DWORD T83;
  D T84;
  DWORD T85;
  DWORD T86;
  D T87;
  _KLsimple_object_vectorGVKd_3 T88 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T89;
  D T90;
  D T91;
  _KLsimple_object_vectorGVKd_3 T92 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T93;
  DWORD T94;
  DWORD T95;
  D T96;
  DWORD T97;
  DWORD T98;
  D T99;
  DWORD T100;
  DWORD T101;
  D T102;
  DWORD T103;
  DWORD T104;
  D T105;
  D T106_0;
  D digit_;
  D T108;
  D T109;
  D T110;
  D T111_0;
  D T112;
  _KLsimple_object_vectorGVKd_1 T113 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T114;
  DWORD T115;
  DWORD T116;
  DWORD T117;
  DWORD T118;
  D T119;
  _KLsimple_object_vectorGVKd_1 T120 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T121_0;
  D T121_1;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  primitive_type_check(start_, &KLintegerGVKd);
  startF6 = start_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  startF48 = startF6;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  T82 = primitive_idQ(default_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  if (T82 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
    T7 = DunsuppliedYcommon_extensionsVcommon_dylan;
    defaultF8 = T7;
  } else {
    defaultF8 = default_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  primitive_type_check(stop_, &K132);
  stopF9 = stop_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  stopF65 = stopF9;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:496
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T10 = CONGRUENT_CALL1(str_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:496
  primitive_type_check(T10, &KLintegerGVKd);
  string_length_ = T10;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  T64 = startF48;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  T83 = primitive_cast_integer_as_raw(T64);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  T84 = primitive_machine_word_less_thanQ(T83,1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  if (T84 != &KPfalseVKi) {
    T12 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
    T63 = startF48;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
    T85 = primitive_cast_integer_as_raw(T63);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
    T86 = primitive_cast_integer_as_raw(string_length_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
    T87 = primitive_machine_word_less_thanQ(T85,T86);
    T12 = T87;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  if (T12 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
    T62 = startF48;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
    T88.vector_element_[0] = T62;
    T88.vector_element_[1] = string_length_;
    T88.vector_element_[2] = str_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
    Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K266, &T88);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:500
  T70 = stopF65;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:500
  if (T70 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
    T61 = startF48;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
    T73 = stopF65;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T89 = CONGRUENT_CALL2(T73, T61);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
    if (T89 != &KPfalseVKi) {
      T13 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
      T72 = stopF65;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T90 = CONGRUENT_CALL2(string_length_, T72);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
      T91 = primitive_not(T90);
      T13 = T91;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
      T71 = stopF65;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
      T92.vector_element_[0] = T71;
      T92.vector_element_[1] = string_length_;
      T92.vector_element_[2] = str_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
      Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K267, &T92);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:501
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:505
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T14 = CONGRUENT_CALL1(str_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:505
    stopF65 = T14;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:500
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
    T59 = startF48;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
    T69 = stopF65;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T15 = CONGRUENT_CALL2(T59, T69);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
    if (T15 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
      T58 = startF48;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T16 = CONGRUENT_CALL3(str_, T58, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
      T93 = KmemberQVKdMM3I(T16, &K268, &KPempty_vectorVKi, &KEEVKd);
      T17 = T93;
    } else {
      T17 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:508
      T60 = startF48;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:508
      T94 = primitive_cast_integer_as_raw(T60);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:508
      T95 = primitive_machine_word_add_signal_overflow(T94,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:508
      T96 = primitive_cast_raw_as_integer(T95);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:508
      startF48 = T96;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:507
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  T68 = stopF65;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T18 = CONGRUENT_CALL2(T68, (D) 9);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  T57 = startF48;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T19 = CONGRUENT_CALL2(T57, T18);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
    T56 = startF48;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T20 = CONGRUENT_CALL3(str_, T56, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T21 = CONGRUENT_CALL2(T20, C('#'));
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
      T55 = startF48;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
      T97 = primitive_cast_integer_as_raw(T55);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
      T98 = primitive_machine_word_add_signal_overflow(T97,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
      T99 = primitive_cast_raw_as_integer(T98);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T22 = CONGRUENT_CALL3(str_, T99, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T23 = CONGRUENT_CALL2(T22, C('x'));
      Utmp_ = T23;
    } else {
      Utmp_ = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
    if (Utmp_ != &KPfalseVKi) {
      T30 = Utmp_;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
      T54 = startF48;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T25 = CONGRUENT_CALL3(str_, T54, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T26 = CONGRUENT_CALL2(T25, C('0'));
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
        T53 = startF48;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
        T100 = primitive_cast_integer_as_raw(T53);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
        T101 = primitive_machine_word_add_signal_overflow(T100,4);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
        T102 = primitive_cast_raw_as_integer(T101);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
        CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
        T27 = CONGRUENT_CALL3(str_, T102, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T28 = CONGRUENT_CALL2(T27, C('x'));
        T29 = T28;
      } else {
        T29 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:513
      T30 = T29;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:512
    T31 = T30;
  } else {
    T31 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:514
    T52 = startF48;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:514
    T103 = primitive_cast_integer_as_raw(T52);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:514
    T104 = primitive_machine_word_add_signal_overflow(T103,8);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:514
    T105 = primitive_cast_raw_as_integer(T104);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:514
    startF48 = T105;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:511
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:497
  value_ = 0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:518
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
  T51 = startF48;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
  i_T = T51;
L1: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
    T67 = stopF65;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T35 = CONGRUENT_CALL2(i_, T67);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:520
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T36 = CONGRUENT_CALL3(str_, i_, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:520
      CONGRUENT_CALL_PROLOG(&Kas_uppercaseVKd, 1);
      T37 = CONGRUENT_CALL1(T36);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:520
      primitive_type_check(T37, &KLbyte_characterGVKe);
      ch_ = T37;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:521
      T106_0 = KpositionYcommon_extensionsVcommon_dylanMM3I(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, ch_, &KPempty_vectorVKi, &KEEVKd, (D) 1, &KPunboundVKi, (D) 1, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:521
      digit_ = T106_0;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
      T108 = primitive_not(digit_);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
      if (digit_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T109 = CONGRUENT_CALL2(digit_, (D) 65);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
        T110 = primitive_not(T109);
        T39 = T110;
      } else {
        T39 = T108;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:523
        T50 = startF48;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:523
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T111_0 = CONGRUENT_CALL2(T50, i_);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:523
        T112 = T111_0;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:523
        if (T112 != &KPfalseVKi) {
          T40 = i_;
        } else {
          T40 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:523
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:523
        T113.vector_element_[0] = T40;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:518
        T114 = MV_SET_REST_AT(&T113, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:518
        T44_0 = T114;
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:522
      primitive_type_check(digit_, &KLintegerGVKd);
      integer_digit_ = digit_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:531
      T77 = value_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:531
      T115 = primitive_machine_word_unsigned_double_shift_left_high(0,T77,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:532
      T117 = primitive_cast_integer_as_raw(integer_digit_);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:532
      T116 = primitive_machine_word_shift_right(T117,2);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:530
      T118 = primitive_machine_word_logior(T115,T116);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:529
      value_ = T118;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T42 = CONGRUENT_CALL2(i_, (D) 5);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
      i_T = T42;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:519
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:534
  T66 = stopF65;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:534
  T43 = T66;
  MV_SET_ELT(0, T66);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:518
  T44_0 = T43;
  L2: ;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:518
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:518
  next_keyF45 = T44_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:518
  next_keyF79 = next_keyF45;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:536
  T81 = next_keyF79;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:536
  if (T81 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:537
    T119 = primitive_idQ(defaultF8,DunsuppliedYcommon_extensionsVcommon_dylan);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:537
    if (T119 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:538
      T120.vector_element_[0] = str_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:538
      KerrorVKdMM1I(&K273, &T120);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:537
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:540
    primitive_type_check(defaultF8, &KLmachine_wordGVKe);
    T46 = defaultF8;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:540
    T78 = primitive_unwrap_machine_word(T46);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:540
    value_ = T78;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:541
    T49 = startF48;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:541
    next_keyF79 = T49;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:536
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:543
  T75 = value_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:543
  T76 = primitive_wrap_machine_word(T75);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:543
  T80 = next_keyF79;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:543
  T121_0 = T76;
  T121_1 = T80;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  T47_0 = T121_0;
  T47_1 = T121_1;
  {
    MV_CHECK_TYPE_PROLOGUE(T121_0);
    primitive_type_check(T47_0, &KLobjectGVKd);
    primitive_type_check(T47_1, &KLintegerGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:490
  MV_SET_ELT(1, T47_1);
  MV_SET_COUNT(2);
  return(T47_0);
}

D Kstring_to_integerYcommon_extensionsVcommon_dylanI (D string_, D Urest_, D base_, D start_, D stop_, D default_) {
  D baseF7;
  D startF8;
  D stopF9;
  D T10;
  D defaultF11;
  D T12;
  D string_length_;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D Uobject_;
  D T24;
  D T25;
  D returnPexit_45_;
  D T27;
  DWORD i_T, i_;
  D T29;
  D T30;
  D T31;
  D ch_;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38_0;
  D T39;
  D next_key_;
  D T41_0;
  D T41_1;
  D startF42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  D T55;
  D T56;
  D stopF57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  D T65;
  D value_;
  D T67;
  D T68;
  D validQ_;
  D T70;
  D T71;
  D T72;
  DWORD T73;
  D T74;
  DWORD T75;
  DWORD T76;
  D T77;
  _KLsimple_object_vectorGVKd_3 T78 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T79;
  D T80;
  D T81;
  _KLsimple_object_vectorGVKd_3 T82 = {&KLsimple_object_vectorGVKdW, (D) 13};
  DWORD T83;
  D T84;
  D T85;
  DWORD T86;
  D T87;
  _KLsimple_object_vectorGVKd_1 T88 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T89;
  DWORD T90;
  DWORD T91;
  D T92;
  D T93;
  DWORD T94;
  DWORD T95;
  D T96;
  D T97;
  DWORD T98;
  DWORD T99;
  D T100;
  D T101_0;
  D digit_;
  D T103;
  D T104;
  D T105;
  _KLsimple_object_vectorGVKd_1 T106 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T107;
  DWORD T108;
  DWORD T109;
  DWORD T110;
  DWORD T111;
  DWORD T112;
  DWORD T113;
  D T114;
  DWORD T115;
  DWORD T116;
  D T117;
  D T118_0;
  D T118_1;
  D T119;
  _KLsimple_object_vectorGVKd_1 T120 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T121_0;
  D T121_1;
  D T122_0;
  D T122_1;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  primitive_type_check(base_, &KLintegerGVKd);
  baseF7 = base_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  primitive_type_check(start_, &KLintegerGVKd);
  startF8 = start_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  startF42 = startF8;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  primitive_type_check(stop_, &K132);
  stopF9 = stop_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  stopF57 = stopF9;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  T71 = primitive_idQ(default_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  if (T71 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
    T10 = DunsuppliedYcommon_extensionsVcommon_dylan;
    defaultF11 = T10;
  } else {
    defaultF11 = default_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:287
  T56 = startF42;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:288
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T12 = CONGRUENT_CALL1(string_);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:288
  primitive_type_check(T12, &KLintegerGVKd);
  string_length_ = T12;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
  T55 = startF42;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
  T72 = primitive_idQ(T55,(D) 1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
  if (T72 != &KPfalseVKi) {
    T15 = T72;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    T54 = startF42;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    T73 = primitive_cast_integer_as_raw(T54);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    T74 = primitive_machine_word_less_thanQ(1,T73);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    if (T74 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
      T53 = startF42;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
      T75 = primitive_cast_integer_as_raw(T53);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
      T76 = primitive_cast_integer_as_raw(string_length_);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
      T77 = primitive_machine_word_less_thanQ(T75,T76);
      T14 = T77;
    } else {
      T14 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
  if (T15 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    T52 = startF42;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    T78.vector_element_[0] = T52;
    T78.vector_element_[1] = string_length_;
    T78.vector_element_[2] = string_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
    Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K281, &T78);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:289
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:292
  T62 = stopF57;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:292
  if (T62 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
    T51 = startF42;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
    T65 = stopF57;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T79 = CONGRUENT_CALL2(T65, T51);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
    if (T79 != &KPfalseVKi) {
      T16 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
      T64 = stopF57;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T80 = CONGRUENT_CALL2(string_length_, T64);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
      T81 = primitive_not(T80);
      T16 = T81;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
      T63 = stopF57;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
      T82.vector_element_[0] = T63;
      T82.vector_element_[1] = string_length_;
      T82.vector_element_[2] = string_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
      Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K282, &T82);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:293
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:297
    stopF57 = string_length_;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:292
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
  T83 = primitive_cast_integer_as_raw(baseF7);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
  T84 = primitive_machine_word_less_thanQ(T83,9);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
  if (T84 != &KPfalseVKi) {
    T17 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
    T86 = primitive_cast_integer_as_raw(baseF7);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
    T87 = primitive_machine_word_less_thanQ(145,T86);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
    T85 = primitive_not(T87);
    T17 = T85;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
  if (T17 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
    T88.vector_element_[0] = baseF7;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
    Kuser_assertion_errorYcommon_dylan_internalsVcommon_dylanI(&K7, &T88);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:299
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
    T49 = startF42;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
    T61 = stopF57;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T18 = CONGRUENT_CALL2(T49, T61);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
      T48 = startF42;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T19 = CONGRUENT_CALL3(string_, T48, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
      T89 = KmemberQVKdMM3I(T19, &K268, &KPempty_vectorVKi, &KEEVKd);
      T20 = T89;
    } else {
      T20 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:303
      T50 = startF42;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:303
      T90 = primitive_cast_integer_as_raw(T50);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:303
      T91 = primitive_machine_word_add_signal_overflow(T90,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:303
      T92 = primitive_cast_raw_as_integer(T91);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:303
      startF42 = T92;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:302
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  T47 = startF42;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  T60 = stopF57;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T21 = CONGRUENT_CALL2(T47, T60);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
    T46 = startF42;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
    CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
    T22 = CONGRUENT_CALL3(string_, T46, &KPempty_vectorVKi);
    Uobject_ = T22;
  } else {
    Uobject_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  T93 = primitive_idQ(Uobject_,C('+'));
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  if (T93 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:307
    T45 = startF42;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:307
    T94 = primitive_cast_integer_as_raw(T45);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:307
    T95 = primitive_machine_word_add_signal_overflow(T94,4);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:307
    T96 = primitive_cast_raw_as_integer(T95);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:307
    startF42 = T96;
    T25 = (D) 5;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
    T97 = primitive_idQ(Uobject_,C('-'));
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
    if (T97 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:308
      T44 = startF42;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:308
      T98 = primitive_cast_integer_as_raw(T44);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:308
      T99 = primitive_machine_word_add_signal_overflow(T98,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:308
      T100 = primitive_cast_raw_as_integer(T99);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:308
      startF42 = T100;
      T24 = (D) -3;
    } else {
      T24 = (D) 5;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
    T25 = T24;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:306
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:311
  value_ = (D) 1;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:312
  validQ_ = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:314
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
  T43 = startF42;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
  T116 = primitive_cast_integer_as_raw(T43);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
  i_T = T116;
L1: ;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
    T117 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
    T59 = stopF57;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T29 = CONGRUENT_CALL2(T117, T59);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
    if (T29 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:316
      CONGRUENT_CALL_PROLOG(&KelementVKd, 3);
      T30 = CONGRUENT_CALL3(string_, T117, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:316
      CONGRUENT_CALL_PROLOG(&Kas_uppercaseVKd, 1);
      T31 = CONGRUENT_CALL1(T30);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:316
      primitive_type_check(T31, &KLbyte_characterGVKe);
      ch_ = T31;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:317
      T101_0 = KpositionYcommon_extensionsVcommon_dylanMM3I(Dnumber_charactersYcommon_dylan_internalsVcommon_dylan, ch_, &KPempty_vectorVKi, &KEEVKd, (D) 1, &KPunboundVKi, (D) 1, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:317
      digit_ = T101_0;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:318
      T103 = primitive_not(digit_);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:318
      if (digit_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:318
        CONGRUENT_CALL_PROLOG(&KLVKd, 2);
        T104 = CONGRUENT_CALL2(digit_, baseF7);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:318
        T105 = primitive_not(T104);
        T33 = T105;
      } else {
        T33 = T103;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:318
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:318
      if (T33 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:319
        T106.vector_element_[0] = T117;
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:314
        T107 = MV_SET_REST_AT(&T106, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:314
        T38_0 = T107;
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:318
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:321
      validQ_ = &KPtrueVKi;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T68 = value_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T108 = primitive_cast_integer_as_raw(T68);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T109 = primitive_machine_word_logxor(T108,1);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T111 = primitive_cast_integer_as_raw(baseF7);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T110 = primitive_machine_word_shift_right(T111,2);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T112 = primitive_machine_word_multiply_signal_overflow(T109,T110);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T113 = primitive_machine_word_logior(T112,1);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      T114 = primitive_cast_raw_as_integer(T113);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      CONGRUENT_CALL_PROLOG(&KTVKd, 2);
      T34 = CONGRUENT_CALL2(digit_, T25);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      CONGRUENT_CALL_PROLOG(&KAVKd, 2);
      T35 = CONGRUENT_CALL2(T114, T34);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      primitive_type_check(T35, &KLintegerGVKd);
      T36 = T35;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:322
      value_ = T36;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
      T115 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
      i_T = T115;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:315
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:324
  T58 = stopF57;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:324
  T37 = T58;
  MV_SET_ELT(0, T58);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:314
  T38_0 = T37;
  L2: ;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:314
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:314
  T39 = T38_0;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:313
  primitive_type_check(T39, &KLintegerGVKd);
  next_key_ = T39;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:326
  T70 = validQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:326
  if (T70 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:327
    T67 = value_;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:327
    T118_0 = T67;
    T118_1 = next_key_;
    T41_0 = T118_0;
    T41_1 = T118_1;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:329
    T119 = primitive_idQ(defaultF11,DunsuppliedYcommon_extensionsVcommon_dylan);
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:329
    if (T119 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:330
      T120.vector_element_[0] = string_;
      // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:330
      KerrorVKdMM1I(&K273, &T120);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:329
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:332
    T121_0 = defaultF11;
    T121_1 = T56;
    // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:332
    T122_0 = T121_0;
    T122_1 = T121_1;
    {
      MV_CHECK_TYPE_PROLOGUE(T121_0);
      primitive_type_check(T122_0, &KLintegerGVKd);
      primitive_type_check(T122_1, &KLintegerGVKd);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T41_0 = T122_0;
    T41_1 = T122_1;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:326
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:280
  MV_SET_ELT(1, T41_1);
  MV_SET_COUNT(2);
  return(T41_0);
}

D KLuser_assertion_errorGZ32ZconstructorYcommon_dylan_internalsVcommon_dylanMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:38
  T5 = primitive_object_allocate_filled(3,&KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylanW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:38
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_format_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbase_);
    if (T0 != &KJbase_) {
      primitive_repeated_slot_value_setter(T0, &K285, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K284, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K221, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K220, 1, 0);
      IKJbase_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJprint_function_);
    if (T0 != &KJprint_function_) {
      primitive_repeated_slot_value_setter(T0, &K120, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K114, 1, 4);
      IKJprint_function_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJprint_length_);
    if (T0 != &KJprint_length_) {
      IKJprint_length_ = T0;
      primitive_repeated_slot_value_setter(T0, &K181, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K179, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K120, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K114, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJseparator_);
    if (T0 != &KJseparator_) {
      IKJseparator_ = T0;
      primitive_repeated_slot_value_setter(T0, &K120, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K114, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJprefix_);
    if (T0 != &KJprefix_) {
      primitive_repeated_slot_value_setter(T0, &K128, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K124, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdecimal_points_);
    if (T0 != &KJdecimal_points_) {
      primitive_repeated_slot_value_setter(T0, &K153, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K150, 1, 0);
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/format.dylan:38
  T0 = KPadd_classVKeI(&KLuser_assertion_errorGYcommon_dylan_internalsVcommon_dylan);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_format_for_user () {
  return;
}


/* eof */
