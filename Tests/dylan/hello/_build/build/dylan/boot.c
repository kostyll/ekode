#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
} _KLunicode_characterGVKe;

typedef struct {
  D wrapper;
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(51);
define__KLbyte_stringGVKd(47);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(41);
define__KLbyte_stringGVKd(43);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(62);
define__KLbyte_stringGVKd(29);
define__KLbyte_stringGVKd(79);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(87);
define__KLbyte_stringGVKd(130);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(96);
define__KLbyte_stringGVKd(223);
define__KLbyte_stringGVKd(5);
define__KLbyte_stringGVKd(88);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(40);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(54);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  DSFLT Psingle_float_data_;
} _KLsingle_floatGVKd;

typedef struct {
  D wrapper;
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
} _KLsimple_arrayGVKi;

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
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

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
} _KLinstance_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_restartGVKd;

typedef struct {
  D wrapper;
  D handler_type_;
  D handler_function_;
  D handler_test_;
  D handler_init_arguments_;
} _KLhandlerGVKi;

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
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLgeneric_functionGVKd;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLobject_tableGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D single_method_engine_node_method_;
  D single_method_engine_node_data_;
} _KLsingle_method_engine_nodeGVKg;

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLinvalid_index_errorGVKi;

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
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLimmutable_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLmissing_keyword_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLkeyword_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLdispatch_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLlibrary_version_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLunknown_keyword_argument_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLodd_keyword_arguments_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLstack_overflow_errorGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_count_overflow_errorGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLargument_count_errorGVKi;

typedef struct {
  D wrapper;
  D value_cell_raw_object_1_;
  D value_cell_raw_object_2_;
} _KLuntraceable_double_value_cellGVKi;

typedef struct {
  D wrapper;
  D value_cell_raw_object_;
} _KLuntraceable_value_cellGVKi;

typedef struct {
  D wrapper;
  D value_cell_object_;
} _KLtraceable_value_cellGVKi;


/* Referenced object declarations */

extern _KLclassGVKd KLunboundGVKe;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLclassGVKd KLunicode_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLunicode_characterGVKeW;
D KPresolve_symbolVKiI (D x_);
D Kmake_empty_subjunctive_class_universeVKeI ();
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
D Kclass_instance_headerVKiI (D class_);
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_61;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM9;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLlimited_integerGVKe KLdouble_byteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLclassGVKd KLsimple_arrayGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_arrayGVKiW;
D KsubiclassQVKiI (D xiclass_, D x_, D yiclass_, D y_);
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
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
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_rcpl_single_largeVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
D KerrorVKdMM1I (D string_, D arguments_);
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lsimple_conditionG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LconditionG_typesVKi;
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLsimple_restartGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_restartGVKdW;
D KLhandlerGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_handler_type_, D Uunique_handler_function_, D Uunique_handler_test_, D Uunique_handler_init_arguments_);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
D KlistVKdI (D objects_);
D KerrorVKdMM0I (D condition_, D noise_);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Limplementation_classG_typesVKi;
extern _KLincremental_generic_functionGVKe KEVKd;
D KLobject_tableGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_, D Uunique_initial_entries_, D Uunique_grow_size_function_, D Uunique_weakQ_);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
D KmakeVKdMM59I (D class_, D Urest_, D name_);
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe Kelement_setterVKd;
extern _KLincremental_generic_functionGVKe KelementVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
D Kparent_gfVKgI (D parent_);
D KsignalVKdMM1I (D string_, D arguments_);
extern _KLunionGVKe KLdispatch_starterGVKg;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLclassGVKd KLsingle_method_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsingle_method_engine_nodeGVKgW;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLclassGVKd KLinvalid_index_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLinvalid_index_errorGVKiW;
D Kcurrent_threadYthreadsVdylanI ();
extern _KLbottom_typeGVKe KLbottomGVKe;
extern _KLclassGVKd KLbottom_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLbottom_typeGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLsealed_generic_functionGVKe Kfunction_signatureVKe;
extern _KLsealed_generic_functionGVKe Ksignature_rest_valueVKi;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLsealed_generic_functionGVKe Ksignature_valuesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLsealed_generic_functionGVKe Ksignature_key_typesVKi;
extern _KLsealed_generic_functionGVKe Ksignature_requiredVKe;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsignatureG_typesVKi;
extern D Tcurrent_handlersTVKi;
extern D Tdylan_library_initializedQTYthreads_primitivesVdylan;

/* Defined object declarations */

D Kinstall_direct_object_classVKiI (D, D);
extern _KLsymbolGVKd KJabove_;
extern _KLsymbolGVKd KJabstractQ_;
extern _KLsymbolGVKd KJall_keysQ_;
extern _KLsymbolGVKd KJallocation_;
extern _KLsymbolGVKd KJallow_other_keys_;
extern _KLsymbolGVKd KJarguments_;
extern _KLsymbolGVKd KJbelow_;
extern _KLsymbolGVKd KJby_;
extern _KLsymbolGVKd KJcapacity_;
extern _KLsymbolGVKd KJclass_;
extern _KLsymbolGVKd KJcode_;
extern _KLsymbolGVKd KJcollections_;
extern _KLsymbolGVKd KJconstant_;
extern _KLsymbolGVKd KJcount_;
extern _KLsymbolGVKd KJdebug_name_;
extern _KLsymbolGVKd KJdefault_;
extern _KLsymbolGVKd KJdimensions_;
extern _KLsymbolGVKd KJdomain_types_;
extern _KLsymbolGVKd KJeach_subclass_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLsymbolGVKd KJend_;
extern _KLsymbolGVKd KJfailure_;
extern _KLsymbolGVKd KJfill_;
extern _KLsymbolGVKd KJfixed_part_;
extern _KLsymbolGVKd KJformat_argument_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJfrom_;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJgeneric_function_;
extern _KLsymbolGVKd KJgetter_;
extern _KLsymbolGVKd KJgrow_size_function_;
extern _KLsymbolGVKd KJhash_function_;
extern _KLsymbolGVKd KJhigh_;
extern _KLsymbolGVKd KJimplementation_class_;
extern _KLsymbolGVKd KJinherited_slots_;
extern _KLsymbolGVKd KJinit_arguments_;
extern _KLsymbolGVKd KJinit_data_;
extern _KLsymbolGVKd KJinit_evaluatedQ_;
extern _KLsymbolGVKd KJinit_function_;
extern _KLsymbolGVKd KJinit_keyword_;
extern _KLsymbolGVKd KJinit_keyword_requiredQ_;
extern _KLsymbolGVKd KJinit_suppliedQ_;
extern _KLsymbolGVKd KJinit_value_;
extern _KLsymbolGVKd KJinit_valueQ_;
extern _KLsymbolGVKd KJinitial_count_;
extern _KLsymbolGVKd KJinstance_storage_size_;
extern _KLsymbolGVKd KJkey_;
extern _KLsymbolGVKd KJkey_test_;
extern _KLsymbolGVKd KJkey_types_;
extern _KLsymbolGVKd KJkeyQ_;
extern _KLsymbolGVKd KJkeys_;
extern _KLsymbolGVKd KJkeyword_specifiers_;
extern _KLsymbolGVKd KJkeywords_;
extern _KLsymbolGVKd KJlock_;
extern _KLsymbolGVKd KJlow_;
extern _KLsymbolGVKd KJmax_;
extern _KLsymbolGVKd KJmaximum_count_;
extern _KLsymbolGVKd KJmin_;
extern _KLsymbolGVKd KJmode_;
extern _KLsymbolGVKd KJname_;
extern _KLsymbolGVKd KJnext_;
extern _KLsymbolGVKd KJnextQ_;
extern _KLsymbolGVKd KJnumber_patterns_;
extern _KLsymbolGVKd KJnumber_required_;
extern _KLsymbolGVKd KJnumber_values_;
extern _KLsymbolGVKd KJobject_;
extern _KLsymbolGVKd KJoperation_;
extern _KLsymbolGVKd KJordered_;
extern _KLsymbolGVKd KJowner_;
extern _KLsymbolGVKd KJpassword_;
extern _KLsymbolGVKd KJprimaryQ_;
extern _KLsymbolGVKd KJpriority_;
extern _KLsymbolGVKd KJprocessing_;
extern _KLsymbolGVKd KJproperties_;
extern _KLsymbolGVKd KJread_;
extern _KLsymbolGVKd KJrehash_limit_;
extern _KLsymbolGVKd KJrepeated_;
extern _KLsymbolGVKd KJrequired_;
extern _KLsymbolGVKd KJrequired_init_keyword_;
extern _KLsymbolGVKd KJrest_value_;
extern _KLsymbolGVKd KJrest_valueQ_;
extern _KLsymbolGVKd KJrestQ_;
extern _KLsymbolGVKd KJsealedQ_;
extern _KLsymbolGVKd KJsequences_;
extern _KLsymbolGVKd KJsetter_;
extern _KLsymbolGVKd KJsignature_;
extern _KLsymbolGVKd KJsize_;
extern _KLsymbolGVKd KJskip_;
extern _KLsymbolGVKd KJslot_descriptor_;
extern _KLsymbolGVKd KJslots_;
extern _KLsymbolGVKd KJstable_;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJstorage_size_;
extern _KLsymbolGVKd KJsuperclasses_;
extern _KLsymbolGVKd KJsynchronization_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJtest_function_;
extern _KLsymbolGVKd KJthread_;
extern _KLsymbolGVKd KJtimeout_;
extern _KLsymbolGVKd KJto_;
extern _KLsymbolGVKd KJtoken_;
extern _KLsymbolGVKd KJtype_;
extern _KLsymbolGVKd KJtype1_;
extern _KLsymbolGVKd KJtype2_;
extern _KLsymbolGVKd KJunknown_;
extern _KLsymbolGVKd KJusers_;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJvalues_;
extern _KLsymbolGVKd KJvaluesQ_;
extern _KLsymbolGVKd KJvector_;
extern _KLsymbolGVKd KJvirtual_;
extern _KLsymbolGVKd KJweak_;
extern _KLsymbolGVKd KJwrite_;
extern _KLsymbolGVKd KJdirection_;
extern _KLsymbolGVKd KJlocator_;
extern _KLsymbolGVKd KJencoding_;
extern _KLsymbolGVKd KJouter_stream_;
extern _KLsymbolGVKd KJif_exists_;
extern _KLsymbolGVKd KJif_does_not_exist_;
extern _KLsymbolGVKd KJabortQ_;
extern _KLsymbolGVKd KJwaitQ_;
extern _KLsymbolGVKd KJinput_;
extern _KLsymbolGVKd KJoutput_;
extern _KLsymbolGVKd KJinput_output_;
extern _KLsymbolGVKd KJnew_version_;
extern _KLsymbolGVKd KJoverwrite_;
extern _KLsymbolGVKd KJreplace_;
extern _KLsymbolGVKd KJtruncate_;
extern _KLsymbolGVKd KJsignal_;
extern _KLsymbolGVKd KJappend_;
D KPlibrary_version_checkVKeI (D, D);
D KLintegerG_instanceQVKiI (D, D);
D KLbyte_characterG_instanceQVKiI (D, D);
D Kall_superclasses_setterVKeMM1I (D, D);
D Kall_superclassesVKdMM1I (D);
D KLunicode_characterG_instanceQVKiI (D, D);
extern _KLsimple_methodGVKe Kall_superclassesVKdMM1;
extern _KLsimple_methodGVKe Kall_superclasses_setterVKeMM1;
D KapplyVKdI (D, D);
extern _KLincremental_generic_functionGVKe Kambiguous_method_errorVKe;
D Kno_applicable_method_errorVKeI (D, D);
D Kobject_classVKdI (D);
D Kreconstruct_args_from_mepargsVKeI (D, D);
extern _KLsimple_methodGVKe KvaluesVKd;
D KvaluesVKdI (D);
D Kinside_debuggerQVKeMM0I ();
extern _KLsealed_generic_functionGVKe Kinvoke_debuggerVKi;
D Kuninstantiable_errorVKiMM0I (D);
extern _KLclassGVKd KLimmutable_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLimmutable_errorGVKiW;
extern _KLclassGVKd KLmissing_keyword_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLmissing_keyword_errorGVKiW;
extern _KLclassGVKd KLargument_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLargument_errorGVKiW;
D Ktype_check_errorVKiI (D, D);
extern _KLsealed_generic_functionGVKe Ksystem_allocate_repeated_instanceVKe;
extern _KLkeyword_methodGVKe KmakeVKdMM0;
D KmakeVKdMM0I (D, D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_62;
D Kmake_mm_wrapperVKiI (D, D, D);
static _KLkeyword_signatureGVKe K302;
static _KLsimple_object_vectorGVKd_1 K303;
static _KLsingletonGVKd K304;
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM0;
D Ksystem_allocate_repeated_instanceVKeMM0I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM1;
D Ksystem_allocate_repeated_instanceVKeMM1I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM2;
D Ksystem_allocate_repeated_instanceVKeMM2I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM3;
D Ksystem_allocate_repeated_instanceVKeMM3I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM4;
D Ksystem_allocate_repeated_instanceVKeMM4I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM5;
D Ksystem_allocate_repeated_instanceVKeMM5I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM6;
D Ksystem_allocate_repeated_instanceVKeMM6I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM7;
D Ksystem_allocate_repeated_instanceVKeMM7I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
extern _KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM8;
D Ksystem_allocate_repeated_instanceVKeMM8I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_);
static _KLpairGVKd K323;
static _KLpairGVKd K324;
static _KLpairGVKd K325;
static _KLpairGVKd K326;
static _KLpairGVKd K327;
static _KLpairGVKd K328;
static _KLpairGVKd K329;
static _KLpairGVKd K330;
static _KLpairGVKd K331;
static _KLpairGVKd K332;
static _KLsignatureGVKe K333;
static _KLbyte_stringGVKd_33 K334;
static _KLsimple_object_vectorGVKd_5 K335;
static _KLsignatureGVKe K336;
static _KLsimple_object_vectorGVKd_5 K337;
static _KLsingletonGVKd K338;
static _KLsignatureGVKe K339;
static _KLsimple_object_vectorGVKd_5 K340;
static _KLsingletonGVKd K341;
static _KLsignatureGVKe K342;
static _KLsimple_object_vectorGVKd_5 K343;
static _KLsingletonGVKd K344;
static _KLsignatureGVKe K345;
static _KLsimple_object_vectorGVKd_5 K346;
static _KLsingletonGVKd K347;
static _KLsignatureGVKe K348;
static _KLsimple_object_vectorGVKd_5 K349;
static _KLsingletonGVKd K350;
static _KLsignatureGVKe K351;
static _KLsimple_object_vectorGVKd_5 K352;
static _KLsingletonGVKd K353;
static _KLsignatureGVKe K354;
static _KLsimple_object_vectorGVKd_5 K355;
static _KLsingletonGVKd K356;
static _KLsignatureGVKe K357;
static _KLsimple_object_vectorGVKd_5 K358;
static _KLsingletonGVKd K359;
static _KLimplementation_classGVKe K360;
static _KLsimple_object_vectorGVKd_2 K361;
extern _KLkeyword_methodGVKe KLargument_errorGZ32ZconstructorVKiMM0;
D KLargument_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K364;
static _KLsimple_object_vectorGVKd_7 K365;
static _KLkeyword_signatureAvaluesGVKi K366;
static _KLsimple_object_vectorGVKd_4 K367;
static _KLsimple_object_vectorGVKd_2 K368;
static _KLsimple_object_vectorGVKd_1 K369;
static _KLbyte_stringGVKd_16 K370;
static _KLimplementation_classGVKe K371;
extern _KLkeyword_methodGVKe KLmissing_keyword_errorGZ32ZconstructorVKiMM0;
D KLmissing_keyword_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K374;
static _KLsimple_object_vectorGVKd_9 K375;
extern _KLclassGVKd KLkeyword_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_errorGVKiW;
static _KLimplementation_classGVKe K378;
extern _KLkeyword_methodGVKe KLkeyword_errorGZ32ZconstructorVKiMM0;
D KLkeyword_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_8 K381;
static _KLkeyword_signatureAvaluesGVKi K382;
static _KLbyte_stringGVKd_15 K383;
static _KLkeyword_signatureAvaluesGVKi K384;
static _KLsimple_object_vectorGVKd_1 K385;
static _KLbyte_stringGVKd_23 K386;
static _KLimplementation_classGVKe K387;
extern _KLkeyword_methodGVKe KLimmutable_errorGZ32ZconstructorVKiMM0;
D KLimmutable_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K390;
static _KLkeyword_signatureAvaluesGVKi K391;
static _KLsimple_object_vectorGVKd_1 K392;
static _KLbyte_stringGVKd_17 K393;
static _KLbyte_stringGVKd_54 K394;
extern _KLsimple_methodGVKe Kinvoke_debuggerVKiMM0;
D Kinvoke_debuggerVKiMM0I (D);
extern _KLsimple_methodGVKe Kinvoke_debuggerVKiMM1;
D Kinvoke_debuggerVKiMM1I (D);
static _KLpairGVKd K399;
static _KLpairGVKd K400;
static _KLbyte_stringGVKd_15 K401;
static _KLsignatureGVKe K402;
static _KLbyte_stringGVKd_30 K403;
static _KLsignatureGVKe K404;
static _KLsignatureGVKe K405;
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF419;
static D KUhandler_functionUF419I (D, D);
static _KLbyte_stringGVKd_40 K408;
static _KLbyte_stringGVKd_40 K409;
extern _KLclassGVKd KLdispatch_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLdispatch_errorGVKiW;
static _KLimplementation_classGVKe K412;
extern _KLkeyword_methodGVKe KLdispatch_errorGZ32ZconstructorVKiMM0;
D KLdispatch_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K415;
static _KLkeyword_signatureAvaluesGVKi K416;
static _KLsimple_object_vectorGVKd_1 K417;
static _KLbyte_stringGVKd_16 K418;
static _KLsignatureGVKe K420;
static _KLsimple_object_vectorGVKd_2 K421;
extern _KLsimple_methodGVKe Kambiguous_method_errorVKeMM0;
D Kambiguous_method_errorVKeMM0I (D, D, D, D);
static _KLpairGVKd K424;
static _KLsignatureGVKe K425;
static _KLbyte_stringGVKd_22 K426;
static _KLsimple_object_vectorGVKd_4 K427;
static _KLbyte_stringGVKd_88 K428;
static _KLsignatureAvaluesGVKi K429;
static _KLsimple_object_vectorGVKd_2 K430;
static _KLsignatureAvaluesGVKi K431;
D KPused_library_version_checkVKiI (D, D);
D Kdylan_runtime_module_handle_setterVKiI (D, D);
static _KLbyte_stringGVKd_5 K434;
D Klibrary_version_errorVKiMM0I (D, D);
static _KLsymbolGVKd KJtight_;
D Klibrary_incompatibility_errorVKiMM0I (D, D);
static _KLbyte_stringGVKd_223 K438;
extern _KLclassGVKd KLlibrary_version_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLlibrary_version_errorGVKiW;
static _KLimplementation_classGVKe K441;
extern _KLkeyword_methodGVKe KLlibrary_version_errorGZ32ZconstructorVKiMM0;
D KLlibrary_version_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K444;
static _KLkeyword_signatureAvaluesGVKi K445;
static _KLsimple_object_vectorGVKd_1 K446;
static _KLbyte_stringGVKd_23 K447;
static _KLbyte_stringGVKd_5 K448;
static _KLbyte_stringGVKd_96 K449;
static _KLbyte_stringGVKd_6 K450;
static _KLbyte_stringGVKd_6 K451;
static _KLbyte_stringGVKd_8 K452;
static _KLbyte_stringGVKd_7 K453;
static _KLbyte_stringGVKd_9 K454;
static _KLbyte_stringGVKd_11 K455;
static _KLbyte_stringGVKd_12 K456;
static _KLbyte_stringGVKd_6 K457;
static _KLbyte_stringGVKd_5 K458;
static _KLbyte_stringGVKd_5 K459;
static _KLbyte_stringGVKd_6 K460;
static _KLbyte_stringGVKd_17 K461;
static _KLbyte_stringGVKd_9 K462;
static _KLbyte_stringGVKd_12 K463;
static _KLbyte_stringGVKd_8 K464;
static _KLbyte_stringGVKd_7 K465;
static _KLbyte_stringGVKd_9 K466;
static _KLbyte_stringGVKd_5 K467;
static _KLbyte_stringGVKd_4 K468;
static _KLbyte_stringGVKd_7 K469;
static _KLbyte_stringGVKd_6 K470;
static _KLbyte_stringGVKd_7 K471;
static _KLbyte_stringGVKd_6 K472;
static _KLbyte_stringGVKd_5 K473;
static _KLbyte_stringGVKd_5 K474;
static _KLbyte_stringGVKd_7 K475;
static _KLbyte_stringGVKd_5 K476;
static _KLbyte_stringGVKd_5 K477;
static _KLbyte_stringGVKd_4 K478;
static _KLbyte_stringGVKd_5 K479;
static _KLbyte_stringGVKd_2 K480;
static _KLbyte_stringGVKd_7 K481;
static _KLbyte_stringGVKd_6 K482;
static _KLbyte_stringGVKd_13 K483;
static _KLbyte_stringGVKd_4 K484;
static _KLbyte_stringGVKd_15 K485;
static _KLbyte_stringGVKd_12 K486;
static _KLbyte_stringGVKd_12 K487;
static _KLbyte_stringGVKd_5 K488;
static _KLbyte_stringGVKd_6 K489;
static _KLbyte_stringGVKd_5 K490;
static _KLbyte_stringGVKd_15 K491;
static _KLbyte_stringGVKd_4 K492;
static _KLbyte_stringGVKd_4 K493;
static _KLbyte_stringGVKd_9 K494;
static _KLbyte_stringGVKd_6 K495;
static _KLbyte_stringGVKd_9 K496;
static _KLbyte_stringGVKd_7 K497;
static _KLbyte_stringGVKd_5 K498;
static _KLbyte_stringGVKd_11 K499;
static _KLbyte_stringGVKd_10 K500;
static _KLbyte_stringGVKd_21 K501;
static _KLbyte_stringGVKd_8 K502;
static _KLbyte_stringGVKd_8 K503;
static _KLbyte_stringGVKd_12 K504;
static _KLbyte_stringGVKd_4 K505;
static _KLbyte_stringGVKd_10 K506;
static _KLbyte_stringGVKd_10 K507;
static _KLbyte_stringGVKd_8 K508;
static _KLbyte_stringGVKd_8 K509;
static _KLbyte_stringGVKd_8 K510;
static _KLbyte_stringGVKd_5 K511;
static _KLbyte_stringGVKd_7 K512;
static _KLbyte_stringGVKd_9 K513;
static _KLbyte_stringGVKd_6 K514;
static _KLbyte_stringGVKd_13 K515;
static _KLbyte_stringGVKd_15 K516;
static _KLbyte_stringGVKd_15 K517;
static _KLbyte_stringGVKd_5 K518;
static _KLbyte_stringGVKd_4 K519;
static _KLbyte_stringGVKd_4 K520;
static _KLbyte_stringGVKd_4 K521;
static _KLbyte_stringGVKd_3 K522;
static _KLbyte_stringGVKd_13 K523;
static _KLbyte_stringGVKd_3 K524;
static _KLbyte_stringGVKd_3 K525;
static _KLbyte_stringGVKd_4 K526;
static _KLbyte_stringGVKd_8 K527;
static _KLbyte_stringGVKd_18 K528;
static _KLbyte_stringGVKd_4 K529;
static _KLbyte_stringGVKd_4 K530;
static _KLbyte_stringGVKd_9 K531;
static _KLbyte_stringGVKd_8 K532;
static _KLbyte_stringGVKd_3 K533;
static _KLbyte_stringGVKd_21 K534;
static _KLbyte_stringGVKd_13 K535;
static _KLbyte_stringGVKd_11 K536;
static _KLbyte_stringGVKd_10 K537;
static _KLbyte_stringGVKd_14 K538;
static _KLbyte_stringGVKd_22 K539;
static _KLbyte_stringGVKd_12 K540;
static _KLbyte_stringGVKd_13 K541;
static _KLbyte_stringGVKd_15 K542;
static _KLbyte_stringGVKd_9 K543;
static _KLbyte_stringGVKd_14 K544;
static _KLbyte_stringGVKd_15 K545;
static _KLbyte_stringGVKd_20 K546;
static _KLbyte_stringGVKd_4 K547;
static _KLbyte_stringGVKd_13 K548;
static _KLbyte_stringGVKd_18 K549;
static _KLbyte_stringGVKd_6 K550;
static _KLbyte_stringGVKd_16 K551;
static _KLbyte_stringGVKd_8 K552;
static _KLbyte_stringGVKd_4 K553;
static _KLbyte_stringGVKd_13 K554;
static _KLbyte_stringGVKd_16 K555;
static _KLbyte_stringGVKd_15 K556;
static _KLbyte_stringGVKd_10 K557;
static _KLbyte_stringGVKd_4 K558;
static _KLbyte_stringGVKd_7 K559;
static _KLbyte_stringGVKd_3 K560;
static _KLbyte_stringGVKd_12 K561;
static _KLbyte_stringGVKd_13 K562;
static _KLbyte_stringGVKd_12 K563;
static _KLbyte_stringGVKd_10 K564;
static _KLbyte_stringGVKd_7 K565;
static _KLbyte_stringGVKd_10 K566;
static _KLbyte_stringGVKd_5 K567;
static _KLbyte_stringGVKd_8 K568;
static _KLbyte_stringGVKd_11 K569;
static _KLbyte_stringGVKd_4 K570;
static _KLbyte_stringGVKd_5 K571;
static _KLbyte_stringGVKd_8 K572;
static _KLbyte_stringGVKd_2 K573;
static _KLbyte_stringGVKd_5 K574;
static _KLbyte_stringGVKd_9 K575;
static _KLbyte_stringGVKd_16 K576;
static _KLbyte_stringGVKd_10 K577;
static _KLbyte_stringGVKd_9 K578;
static _KLbyte_stringGVKd_9 K579;
static _KLbyte_stringGVKd_5 K580;
extern _KLsimple_methodGVKe Klookup_runtime_moduleVKe;
D Klookup_runtime_moduleVKeI (D);
D Kdylan_runtime_module_handleVKiI (D);
static _KLsymbolGVKd KJdylan_;
static _KLsignatureGVKe K585;
static _KLsimple_object_vectorGVKd_1 K586;
extern _KLsimple_methodGVKe KPlibrary_version_checkVKe;
static _KLsignatureGVKe K588;
static _KLsimple_object_vectorGVKd_2 K589;
extern _KLsimple_methodGVKe Kversion_checksQVKe;
D Kversion_checksQVKeI ();
static _KLsignatureAvaluesGVKi K592;
extern _KLsimple_methodGVKe Kversion_checksQ_setterVKe;
D Kversion_checksQ_setterVKeI (D);
static _KLpairGVKd K595;
static _KLbyte_stringGVKd_9 K596;
extern _KLsimple_methodGVKe Kaddress_ofVKe;
D Kaddress_ofVKeI (D object_);
static _KLsignatureAvaluesGVKi K599;
extern _KLsimple_methodGVKe KPmethod_apply_with_optionalsVKe;
D KPmethod_apply_with_optionalsVKeI (D function_, D next_methods_, D arguments_);
extern _KLsimple_methodGVKe KapplyVKd;
static _KLsignatureGVKe K603;
extern _KLsimple_methodGVKe Kinvalid_keyword_trapVKe;
D Kinvalid_keyword_trapVKeI (D, D, D, D, D, D);
D Kreconstruct_keywordsVKiI (D, D);
static _KLbyte_stringGVKd_130 K607;
extern _KLclassGVKd KLunknown_keyword_argument_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLunknown_keyword_argument_errorGVKiW;
static _KLbyte_stringGVKd_87 K610;
static _KLimplementation_classGVKe K611;
extern _KLkeyword_methodGVKe KLunknown_keyword_argument_errorGZ32ZconstructorVKiMM0;
D KLunknown_keyword_argument_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_9 K614;
static _KLkeyword_signatureAvaluesGVKi K615;
static _KLsimple_object_vectorGVKd_1 K616;
static _KLbyte_stringGVKd_32 K617;
static _KLsignatureGVKe K618;
static _KLsimple_object_vectorGVKd_6 K619;
extern _KLsimple_methodGVKe Kodd_number_of_keyword_args_trapVKe;
D Kodd_number_of_keyword_args_trapVKeI (D, D, D);
static _KLbyte_stringGVKd_79 K622;
extern _KLclassGVKd KLodd_keyword_arguments_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLodd_keyword_arguments_errorGVKiW;
static _KLimplementation_classGVKe K625;
extern _KLkeyword_methodGVKe KLodd_keyword_arguments_errorGZ32ZconstructorVKiMM0;
D KLodd_keyword_arguments_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_9 K628;
static _KLkeyword_signatureAvaluesGVKi K629;
static _KLsimple_object_vectorGVKd_1 K630;
static _KLbyte_stringGVKd_29 K631;
static _KLsignatureGVKe K632;
static _KLsimple_object_vectorGVKd_3 K633;
extern _KLsimple_methodGVKe Kreconstruct_args_from_mepargsVKe;
static _KLsignatureGVKe K635;
static _KLsimple_object_vectorGVKd_2 K636;
extern _KLsimple_methodGVKe Krepeated_slot_setter_index_out_of_range_trapVKe;
D Krepeated_slot_setter_index_out_of_range_trapVKeI (D, D, D);
static _KLbyte_stringGVKd_62 K639;
static _KLsignatureGVKe K640;
static _KLsimple_object_vectorGVKd_3 K641;
extern _KLsimple_methodGVKe Krepeated_slot_getter_index_out_of_range_trapVKe;
D Krepeated_slot_getter_index_out_of_range_trapVKeI (D, D);
static _KLbyte_stringGVKd_54 K644;
static _KLsignatureGVKe K645;
static _KLsimple_object_vectorGVKd_2 K646;
extern _KLsimple_methodGVKe Kno_applicable_method_errorVKe;
extern _KLsimple_methodGVKe Kstack_overflow_errorVKi;
D Kstack_overflow_errorVKiI ();
static _KLbyte_stringGVKd_37 K650;
extern _KLclassGVKd KLstack_overflow_errorGVKe;
extern _KLmm_wrapperGVKi_0 KLstack_overflow_errorGVKeW;
static _KLbyte_stringGVKd_43 K653;
static _KLimplementation_classGVKe K654;
extern _KLkeyword_methodGVKe KLstack_overflow_errorGZ32ZconstructorVKiMM0;
D KLstack_overflow_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_7 K657;
static _KLkeyword_signatureAvaluesGVKi K658;
static _KLsimple_object_vectorGVKd_1 K659;
static _KLbyte_stringGVKd_22 K660;
static _KLsignatureAvaluesGVKi K661;
static _KLsimple_object_vectorGVKd_1 K662;
extern _KLsimple_methodGVKe Ktype_check_errorVKi;
static _KLsignatureAvaluesGVKi K664;
extern _KLsimple_methodGVKe Kargument_count_overflow_errorVKi;
D Kargument_count_overflow_errorVKiI (D, D, D);
static _KLbyte_stringGVKd_41 K667;
extern _KLclassGVKd KLargument_count_overflow_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLargument_count_overflow_errorGVKiW;
static _KLimplementation_classGVKe K670;
extern _KLkeyword_methodGVKe KLargument_count_overflow_errorGZ32ZconstructorVKiMM0;
D KLargument_count_overflow_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_8 K673;
static _KLkeyword_signatureAvaluesGVKi K674;
static _KLsimple_object_vectorGVKd_1 K675;
static _KLbyte_stringGVKd_31 K676;
static _KLsignatureAvaluesGVKi K677;
static _KLsimple_object_vectorGVKd_3 K678;
extern _KLsimple_methodGVKe Kargument_count_errorVKi;
D Kargument_count_errorVKiI (D, D);
static _KLbyte_stringGVKd_38 K681;
extern _KLclassGVKd KLargument_count_errorGVKi;
extern _KLmm_wrapperGVKi_0 KLargument_count_errorGVKiW;
static _KLimplementation_classGVKe K684;
extern _KLkeyword_methodGVKe KLargument_count_errorGZ32ZconstructorVKiMM0;
D KLargument_count_errorGZ32ZconstructorVKiMM0I (D, D, D, D);
static _KLsimple_object_vectorGVKd_8 K687;
static _KLkeyword_signatureAvaluesGVKi K688;
static _KLsimple_object_vectorGVKd_1 K689;
static _KLbyte_stringGVKd_22 K690;
static _KLsignatureAvaluesGVKi K691;
static _KLsimple_object_vectorGVKd_2 K692;
extern _KLsimple_methodGVKe Kunknown_keyword_argument_errorVKi;
D Kunknown_keyword_argument_errorVKiI (D, D);
static _KLbyte_stringGVKd_47 K695;
static _KLsignatureAvaluesGVKi K696;
static _KLsimple_object_vectorGVKd_2 K697;
extern _KLsimple_methodGVKe Kodd_keyword_arguments_errorVKi;
D Kodd_keyword_arguments_errorVKiI (D);
static _KLbyte_stringGVKd_51 K700;
static _KLsignatureAvaluesGVKi K701;
extern _KLsimple_methodGVKe KunboundQVKe;
D KunboundQVKeI (D object_);
extern _KLsimple_methodGVKe KunboundVKe;
D KunboundVKeI ();
static _KLsignatureGVKe K706;
extern _KLclassGVKd KLuntraceable_double_value_cellGVKi;
extern _KLmm_wrapperGVKi_1 KLuntraceable_double_value_cellGVKiW;
static _KLimplementation_classGVKe K709;
static _KLsimple_object_vectorGVKd_2 K710;
extern _KLkeyword_methodGVKe KLuntraceable_double_value_cellGZ32ZconstructorVKiMM0;
D KLuntraceable_double_value_cellGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K713;
static _KLsimple_object_vectorGVKd_6 K714;
static _KLkeyword_signatureAvaluesGVKi K715;
static _KLsimple_object_vectorGVKd_1 K716;
extern _KLinstance_slot_descriptorGVKe Kvalue_cell_raw_object_1VKiHLuntraceable_double_value_cellG;
extern _KLinstance_slot_descriptorGVKe Kvalue_cell_raw_object_2VKiHLuntraceable_double_value_cellG;
extern _KLsealed_generic_functionGVKe Kvalue_cell_raw_object_2VKi;
extern _KLgetter_methodGVKi Kvalue_cell_raw_object_2VKiMM0;
static _KLpairGVKd K721;
static _KLbyte_stringGVKd_23 K722;
extern _KLsealed_generic_functionGVKe Kvalue_cell_raw_object_1VKi;
extern _KLgetter_methodGVKi Kvalue_cell_raw_object_1VKiMM0;
static _KLpairGVKd K725;
static _KLbyte_stringGVKd_23 K726;
static _KLbyte_stringGVKd_31 K727;
extern _KLclassGVKd KLuntraceable_value_cellGVKi;
extern _KLmm_wrapperGVKi_1 KLuntraceable_value_cellGVKiW;
static _KLimplementation_classGVKe K730;
static _KLsimple_object_vectorGVKd_1 K731;
extern _KLkeyword_methodGVKe KLuntraceable_value_cellGZ32ZconstructorVKiMM0;
D KLuntraceable_value_cellGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_6 K734;
static _KLkeyword_signatureAvaluesGVKi K735;
static _KLsimple_object_vectorGVKd_1 K736;
extern _KLinstance_slot_descriptorGVKe Kvalue_cell_raw_objectVKiHLuntraceable_value_cellG;
extern _KLsealed_generic_functionGVKe Kvalue_cell_raw_objectVKi;
extern _KLgetter_methodGVKi Kvalue_cell_raw_objectVKiMM0;
static _KLpairGVKd K740;
static _KLbyte_stringGVKd_21 K741;
static _KLbyte_stringGVKd_24 K742;
extern _KLclassGVKd KLtraceable_value_cellGVKi;
extern _KLmm_wrapperGVKi_0 KLtraceable_value_cellGVKiW;
static _KLimplementation_classGVKe K745;
static _KLsimple_object_vectorGVKd_1 K746;
extern _KLkeyword_methodGVKe KLtraceable_value_cellGZ32ZconstructorVKiMM0;
D KLtraceable_value_cellGZ32ZconstructorVKiMM0I (D, D);
static _KLsimple_object_vectorGVKd_6 K749;
static _KLkeyword_signatureAvaluesGVKi K750;
static _KLsimple_object_vectorGVKd_1 K751;
extern _KLinstance_slot_descriptorGVKe Kvalue_cell_objectVKiHLtraceable_value_cellG;
extern _KLsealed_generic_functionGVKe Kvalue_cell_objectVKi;
extern _KLgetter_methodGVKi Kvalue_cell_objectVKiMM0;
static _KLpairGVKd K755;
static _KLbyte_stringGVKd_17 K756;
static _KLbyte_stringGVKd_22 K757;
extern _KLsimple_methodGVKe Kfunction_rest_value_typeVKi;
D Kfunction_rest_value_typeVKiI (D);
static _KLunionGVKe K760;
static _KLsingletonGVKd K761;
static _KLsignatureAvaluesGVKi K762;
static _KLsimple_object_vectorGVKd_1 K763;
extern _KLsimple_methodGVKe Kfunction_value_typeVKi;
D Kfunction_value_typeVKiI (D, D);
static _KLsignatureAvaluesGVKi K766;
extern _KLsimple_methodGVKe Kfunction_key_typeVKi;
D Kfunction_key_typeVKiI (D, D);
extern _KLsimple_methodGVKe Kfunction_required_typeVKi;
D Kfunction_required_typeVKiI (D, D);
extern _KLsimple_methodGVKe Kmake_Lkeyword_signatureGVKi;
D Kmake_Lkeyword_signatureGVKiI (D, D, D, D, D, D, D);
static _KLsignatureAvaluesGVKi K773;
static _KLsimple_object_vectorGVKd_7 K774;
extern _KLsimple_methodGVKe Kmake_LsignatureGVKi;
D Kmake_LsignatureGVKiI (D, D, D, D, D);
static _KLsignatureAvaluesGVKi K777;
static _KLsimple_object_vectorGVKd_5 K778;
extern _KLkeyword_methodGVKe Ksystem_allocate_simple_instanceVKe;
D Ksystem_allocate_simple_instanceVKeI (D class_, D Urest_, D fill_);
static _KLkeyword_signatureGVKe K781;
static _KLsimple_object_vectorGVKd_2 K782;
static _KLsimple_object_vectorGVKd_1 K783;
extern _KLkeyword_methodGVKe Ksystem_allocate_simple_instance_iVKe;
D Ksystem_allocate_simple_instance_iVKeI (D iclass_, D Urest_, D fill_);
static _KLkeyword_signatureGVKe K786;
extern _KLsimple_methodGVKe Kobject_implementation_classVKe;
D Kobject_implementation_classVKeI (D instance_);
static _KLsignatureAvaluesGVKi K789;
extern _KLsimple_methodGVKe Kobject_mm_wrapperVKe;
D Kobject_mm_wrapperVKeI (D instance_);
static _KLsignatureAvaluesGVKi K792;
static _KLsimple_object_vectorGVKd_1 K793;
extern _KLsimple_methodGVKe Kobject_classVKd;
static _KLsignatureAvaluesGVKi K795;
extern _KLsimple_methodGVKe Kinside_debuggerQVKeMM0;
static _KLpairGVKd K797;
static _KLpairGVKd K798;
static _KLpairGVKd K799;
static _KLpairGVKd K800;
static _KLpairGVKd K801;
static _KLpairGVKd K802;

/* Indirection variables */

static D IKJtight_ = &KJtight_;
static D IKJdylan_ = &KJdylan_;

/* Variables */

D inside_debuggerQVKe = &Kinside_debuggerQVKeMM0;
D invoke_debuggerVKi = &Kinvoke_debuggerVKi;
D Ddirect_object_classesVKi = &KPunboundVKi;
D Ddirect_object_mm_wrappersVKi = &KPunboundVKi;
D object_classVKd = &Kobject_classVKd;
D object_mm_wrapperVKe = &Kobject_mm_wrapperVKe;
D object_implementation_classVKe = &Kobject_implementation_classVKe;
D system_allocate_simple_instance_iVKe = &Ksystem_allocate_simple_instance_iVKe;
D system_allocate_simple_instanceVKe = &Ksystem_allocate_simple_instanceVKe;
D system_allocate_repeated_instanceVKe = &Ksystem_allocate_repeated_instanceVKe;
D make_LsignatureGVKi = &Kmake_LsignatureGVKi;
D make_Lkeyword_signatureGVKi = &Kmake_Lkeyword_signatureGVKi;
D function_required_typeVKi = &Kfunction_required_typeVKi;
D function_key_typeVKi = &Kfunction_key_typeVKi;
D function_value_typeVKi = &Kfunction_value_typeVKi;
D function_rest_value_typeVKi = &Kfunction_rest_value_typeVKi;
D Ltraceable_value_cellGVKi = &KLtraceable_value_cellGVKi;
D Luntraceable_value_cellGVKi = &KLuntraceable_value_cellGVKi;
D Luntraceable_double_value_cellGVKi = &KLuntraceable_double_value_cellGVKi;
D unboundVKe = &KunboundVKe;
D unboundQVKe = &KunboundQVKe;
D PunsuppliedQVKi = &KPunboundVKi;
D valuesVKd = &KvaluesVKd;
D Limmutable_errorGVKi = &KLimmutable_errorGVKi;
D Largument_errorGVKi = &KLargument_errorGVKi;
D Lkeyword_errorGVKi = &KLkeyword_errorGVKi;
D Lmissing_keyword_errorGVKi = &KLmissing_keyword_errorGVKi;
D Lodd_keyword_arguments_errorGVKi = &KLodd_keyword_arguments_errorGVKi;
D odd_keyword_arguments_errorVKi = &Kodd_keyword_arguments_errorVKi;
D Lunknown_keyword_argument_errorGVKi = &KLunknown_keyword_argument_errorGVKi;
D unknown_keyword_argument_errorVKi = &Kunknown_keyword_argument_errorVKi;
D Largument_count_errorGVKi = &KLargument_count_errorGVKi;
D argument_count_errorVKi = &Kargument_count_errorVKi;
D Largument_count_overflow_errorGVKi = &KLargument_count_overflow_errorGVKi;
D argument_count_overflow_errorVKi = &Kargument_count_overflow_errorVKi;
D type_check_errorVKi = &Ktype_check_errorVKi;
D Lstack_overflow_errorGVKe = &KLstack_overflow_errorGVKe;
D stack_overflow_errorVKi = &Kstack_overflow_errorVKi;
D Ldispatch_errorGVKi = &KLdispatch_errorGVKi;
D ambiguous_method_errorVKe = &Kambiguous_method_errorVKe;
D no_applicable_method_errorVKe = &Kno_applicable_method_errorVKe;
D repeated_slot_getter_index_out_of_range_trapVKe = &Krepeated_slot_getter_index_out_of_range_trapVKe;
D repeated_slot_setter_index_out_of_range_trapVKe = &Krepeated_slot_setter_index_out_of_range_trapVKe;
D reconstruct_args_from_mepargsVKe = &Kreconstruct_args_from_mepargsVKe;
D odd_number_of_keyword_args_trapVKe = &Kodd_number_of_keyword_args_trapVKe;
D Tgf_invalid_keyword_error_is_warningTVKg = &KPtrueVKi;
D invalid_keyword_trapVKe = &Kinvalid_keyword_trapVKe;
D applyVKd = &KapplyVKd;
D Pmethod_apply_with_optionalsVKe = &KPmethod_apply_with_optionalsVKe;
D address_ofVKe = &Kaddress_ofVKe;
D Dnot_foundVKi = &K595;
D Llibrary_version_errorGVKi = &KLlibrary_version_errorGVKi;
D Tversion_checksQTVKi = &KPtrueVKi;
D version_checksQ_setterVKe = &Kversion_checksQ_setterVKe;
D version_checksQVKe = &Kversion_checksQVKe;
D Plibrary_version_checkVKe = &KPlibrary_version_checkVKe;
D lookup_runtime_moduleVKe = &Klookup_runtime_moduleVKe;
D Pshared_dylan_symbolsVKi = (D) 1;
D Pshared_streams_symbolsVKi = (D) 1;
D Dempty_subjunctive_class_universeVKe = &KPunboundVKi;
D Tdylan_runtime_moduleTVKi = &KPfalseVKi;
D Tdylan_runtime_modulesTVKi = &KPfalseVKi;

/* Objects */

_KLsymbolGVKd KJabove_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K580
};

_KLsymbolGVKd KJabstractQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K579
};

_KLsymbolGVKd KJall_keysQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K578
};

_KLsymbolGVKd KJallocation_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K577
};

_KLsymbolGVKd KJallow_other_keys_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K576
};

_KLsymbolGVKd KJarguments_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K575
};

_KLsymbolGVKd KJbelow_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K574
};

_KLsymbolGVKd KJby_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K573
};

_KLsymbolGVKd KJcapacity_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K572
};

_KLsymbolGVKd KJclass_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K571
};

_KLsymbolGVKd KJcode_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K570
};

_KLsymbolGVKd KJcollections_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K569
};

_KLsymbolGVKd KJconstant_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K568
};

_KLsymbolGVKd KJcount_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K567
};

_KLsymbolGVKd KJdebug_name_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K566
};

_KLsymbolGVKd KJdefault_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K565
};

_KLsymbolGVKd KJdimensions_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K564
};

_KLsymbolGVKd KJdomain_types_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K563
};

_KLsymbolGVKd KJeach_subclass_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K562
};

_KLsymbolGVKd KJelement_type_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K561
};

_KLsymbolGVKd KJend_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K560
};

_KLsymbolGVKd KJfailure_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K559
};

_KLsymbolGVKd KJfill_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K558
};

_KLsymbolGVKd KJfixed_part_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K557
};

_KLsymbolGVKd KJformat_argument_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K556
};

_KLsymbolGVKd KJformat_arguments_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K555
};

_KLsymbolGVKd KJformat_string_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K554
};

_KLsymbolGVKd KJfrom_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K553
};

_KLsymbolGVKd KJfunction_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K552
};

_KLsymbolGVKd KJgeneric_function_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K551
};

_KLsymbolGVKd KJgetter_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K550
};

_KLsymbolGVKd KJgrow_size_function_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K549
};

_KLsymbolGVKd KJhash_function_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K548
};

_KLsymbolGVKd KJhigh_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K547
};

_KLsymbolGVKd KJimplementation_class_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K546
};

_KLsymbolGVKd KJinherited_slots_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K545
};

_KLsymbolGVKd KJinit_arguments_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K544
};

_KLsymbolGVKd KJinit_data_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K543
};

_KLsymbolGVKd KJinit_evaluatedQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K542
};

_KLsymbolGVKd KJinit_function_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K541
};

_KLsymbolGVKd KJinit_keyword_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K540
};

_KLsymbolGVKd KJinit_keyword_requiredQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K539
};

_KLsymbolGVKd KJinit_suppliedQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K538
};

_KLsymbolGVKd KJinit_value_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K537
};

_KLsymbolGVKd KJinit_valueQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K536
};

_KLsymbolGVKd KJinitial_count_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K535
};

_KLsymbolGVKd KJinstance_storage_size_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K534
};

_KLsymbolGVKd KJkey_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K533
};

_KLsymbolGVKd KJkey_test_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K532
};

_KLsymbolGVKd KJkey_types_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K531
};

_KLsymbolGVKd KJkeyQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K530
};

_KLsymbolGVKd KJkeys_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K529
};

_KLsymbolGVKd KJkeyword_specifiers_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K528
};

_KLsymbolGVKd KJkeywords_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K527
};

_KLsymbolGVKd KJlock_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K526
};

_KLsymbolGVKd KJlow_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K525
};

_KLsymbolGVKd KJmax_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K524
};

_KLsymbolGVKd KJmaximum_count_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K523
};

_KLsymbolGVKd KJmin_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K522
};

_KLsymbolGVKd KJmode_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K521
};

_KLsymbolGVKd KJname_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K520
};

_KLsymbolGVKd KJnext_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K519
};

_KLsymbolGVKd KJnextQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K518
};

_KLsymbolGVKd KJnumber_patterns_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K517
};

_KLsymbolGVKd KJnumber_required_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K516
};

_KLsymbolGVKd KJnumber_values_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K515
};

_KLsymbolGVKd KJobject_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K514
};

_KLsymbolGVKd KJoperation_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K513
};

_KLsymbolGVKd KJordered_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K512
};

_KLsymbolGVKd KJowner_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K511
};

_KLsymbolGVKd KJpassword_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K510
};

_KLsymbolGVKd KJprimaryQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K509
};

_KLsymbolGVKd KJpriority_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K508
};

_KLsymbolGVKd KJprocessing_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K507
};

_KLsymbolGVKd KJproperties_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K506
};

_KLsymbolGVKd KJread_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K505
};

_KLsymbolGVKd KJrehash_limit_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K504
};

_KLsymbolGVKd KJrepeated_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K503
};

_KLsymbolGVKd KJrequired_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K502
};

_KLsymbolGVKd KJrequired_init_keyword_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K501
};

_KLsymbolGVKd KJrest_value_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K500
};

_KLsymbolGVKd KJrest_valueQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K499
};

_KLsymbolGVKd KJrestQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K498
};

_KLsymbolGVKd KJsealedQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K497
};

_KLsymbolGVKd KJsequences_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K496
};

_KLsymbolGVKd KJsetter_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K495
};

_KLsymbolGVKd KJsignature_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K494
};

_KLsymbolGVKd KJsize_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K493
};

_KLsymbolGVKd KJskip_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K492
};

_KLsymbolGVKd KJslot_descriptor_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K491
};

_KLsymbolGVKd KJslots_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K490
};

_KLsymbolGVKd KJstable_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K489
};

_KLsymbolGVKd KJstart_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K488
};

_KLsymbolGVKd KJstorage_size_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K487
};

_KLsymbolGVKd KJsuperclasses_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K486
};

_KLsymbolGVKd KJsynchronization_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K485
};

_KLsymbolGVKd KJtest_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K484
};

_KLsymbolGVKd KJtest_function_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K483
};

_KLsymbolGVKd KJthread_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K482
};

_KLsymbolGVKd KJtimeout_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K481
};

_KLsymbolGVKd KJto_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K480
};

_KLsymbolGVKd KJtoken_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K479
};

_KLsymbolGVKd KJtype_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K478
};

_KLsymbolGVKd KJtype1_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K477
};

_KLsymbolGVKd KJtype2_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K476
};

_KLsymbolGVKd KJunknown_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K475
};

_KLsymbolGVKd KJusers_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K474
};

_KLsymbolGVKd KJvalue_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K473
};

_KLsymbolGVKd KJvalues_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K472
};

_KLsymbolGVKd KJvaluesQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K471
};

_KLsymbolGVKd KJvector_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K470
};

_KLsymbolGVKd KJvirtual_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K469
};

_KLsymbolGVKd KJweak_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K468
};

_KLsymbolGVKd KJwrite_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K467
};

_KLsymbolGVKd KJdirection_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K466
};

_KLsymbolGVKd KJlocator_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K465
};

_KLsymbolGVKd KJencoding_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K464
};

_KLsymbolGVKd KJouter_stream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K463
};

_KLsymbolGVKd KJif_exists_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K462
};

_KLsymbolGVKd KJif_does_not_exist_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K461
};

_KLsymbolGVKd KJabortQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K460
};

_KLsymbolGVKd KJwaitQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K459
};

_KLsymbolGVKd KJinput_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K458
};

_KLsymbolGVKd KJoutput_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K457
};

_KLsymbolGVKd KJinput_output_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K456
};

_KLsymbolGVKd KJnew_version_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K455
};

_KLsymbolGVKd KJoverwrite_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K454
};

_KLsymbolGVKd KJreplace_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K453
};

_KLsymbolGVKd KJtruncate_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K452
};

_KLsymbolGVKd KJsignal_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K451
};

_KLsymbolGVKd KJappend_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K450
};

_KLsimple_methodGVKe Kall_superclassesVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K431,
  &Kall_superclassesVKdMM1I
};

_KLsimple_methodGVKe Kall_superclasses_setterVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K429,
  &Kall_superclasses_setterVKeMM1I
};

_KLincremental_generic_functionGVKe Kambiguous_method_errorVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &K425,
  (D) 1,
  &K426,
  &K424,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KvaluesVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K405,
  &KvaluesVKdI
};

_KLsealed_generic_functionGVKe Kinvoke_debuggerVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K401,
  &K399,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLclassGVKd KLimmutable_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K393,
  &K387,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLimmutable_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K387,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLmissing_keyword_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K386,
  &K371,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLmissing_keyword_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K371,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLclassGVKd KLargument_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K370,
  &K360,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLargument_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K360,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Ksystem_allocate_repeated_instanceVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_5,
  &K333,
  (D) 33,
  &K334,
  &K323,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KmakeVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K302,
  &key_mep_2,
  &KmakeVKdMM0I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_62 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_61,
  &KmakeVKdMM0
};

static _KLkeyword_signatureGVKe K302 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 43254789,
  &K303,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K303 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K304
};

static _KLsingletonGVKd K304 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbooleanGVKd
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K333,
  &Ksystem_allocate_repeated_instanceVKeMM0I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K357,
  &Ksystem_allocate_repeated_instanceVKeMM1I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K354,
  &Ksystem_allocate_repeated_instanceVKeMM2I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K351,
  &Ksystem_allocate_repeated_instanceVKeMM3I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K348,
  &Ksystem_allocate_repeated_instanceVKeMM4I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K345,
  &Ksystem_allocate_repeated_instanceVKeMM5I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K342,
  &Ksystem_allocate_repeated_instanceVKeMM6I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K339,
  &Ksystem_allocate_repeated_instanceVKeMM7I
};

_KLsimple_methodGVKe Ksystem_allocate_repeated_instanceVKeMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K336,
  &Ksystem_allocate_repeated_instanceVKeMM8I
};

static _KLpairGVKd K323 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM0,
  &K324
};

static _KLpairGVKd K324 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM1,
  &K325
};

static _KLpairGVKd K325 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM2,
  &K326
};

static _KLpairGVKd K326 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM3,
  &K327
};

static _KLpairGVKd K327 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM4,
  &K328
};

static _KLpairGVKd K328 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM5,
  &K329
};

static _KLpairGVKd K329 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM6,
  &K330
};

static _KLpairGVKd K330 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM7,
  &K331
};

static _KLpairGVKd K331 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM8,
  &K332
};

static _KLpairGVKd K332 = {
  &KLpairGVKdW /* wrapper */,
  &Ksystem_allocate_repeated_instanceVKeMM9,
  &KPempty_listVKi
};

static _KLsignatureGVKe K333 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K335
};

static _KLbyte_stringGVKd_33 K334 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "system-allocate-repeated-instance"
};

static _KLsimple_object_vectorGVKd_5 K335 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &KLtypeGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K336 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K337
};

static _KLsimple_object_vectorGVKd_5 K337 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K338,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLdouble_floatGVKd
};

static _KLsingletonGVKd K338 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdouble_floatGVKd
};

static _KLsignatureGVKe K339 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K340
};

static _KLsimple_object_vectorGVKd_5 K340 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K341,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLsingle_floatGVKd
};

static _KLsingletonGVKd K341 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsingle_floatGVKd
};

static _KLsignatureGVKe K342 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K343
};

static _KLsimple_object_vectorGVKd_5 K343 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K344,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLmachine_wordGVKe
};

static _KLsingletonGVKd K344 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmachine_wordGVKe
};

static _KLsignatureGVKe K345 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K346
};

static _KLsimple_object_vectorGVKd_5 K346 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K347,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLdouble_byteGVKe
};

static _KLsingletonGVKd K347 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdouble_byteGVKe
};

static _KLsignatureGVKe K348 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K349
};

static _KLsimple_object_vectorGVKd_5 K349 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K350,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLbyteGVKe
};

static _KLsingletonGVKd K350 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyteGVKe
};

static _KLsignatureGVKe K351 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K352
};

static _KLsimple_object_vectorGVKd_5 K352 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K353,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLunicode_characterGVKe
};

static _KLsingletonGVKd K353 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLunicode_characterGVKe
};

static _KLsignatureGVKe K354 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K355
};

static _KLsimple_object_vectorGVKd_5 K355 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K356,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLbyte_characterGVKe
};

static _KLsingletonGVKd K356 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_characterGVKe
};

static _KLsignatureGVKe K357 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944085,
  &K358
};

static _KLsimple_object_vectorGVKd_5 K358 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLclassGVKd,
  &K359,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLobjectGVKd
};

static _KLsingletonGVKd K359 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLobjectGVKd
};

static _KLimplementation_classGVKe K360 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLargument_errorGVKi,
  &KLargument_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6121,
  &KLargument_errorGZ32ZconstructorVKiMM0,
  &K364,
  &K365,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K797,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K361 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG
};

_KLkeyword_methodGVKe KLargument_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K366,
  &key_mep_2,
  &KLargument_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_1 K364 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_errorGVKd
};

static _KLsimple_object_vectorGVKd_7 K365 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLargument_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K366 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K369
};

static _KLsimple_object_vectorGVKd_4 K367 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K368 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJformat_string_,
  &KJformat_arguments_
};

static _KLsimple_object_vectorGVKd_1 K369 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLargument_errorGVKi
};

static _KLbyte_stringGVKd_16 K370 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<argument-error>"
};

static _KLimplementation_classGVKe K371 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLmissing_keyword_errorGVKi,
  &KLmissing_keyword_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6137,
  &KLmissing_keyword_errorGZ32ZconstructorVKiMM0,
  &K374,
  &K375,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLmissing_keyword_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K384,
  &key_mep_2,
  &KLmissing_keyword_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_1 K374 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLkeyword_errorGVKi
};

static _KLsimple_object_vectorGVKd_9 K375 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLargument_errorGVKi,
  &KLkeyword_errorGVKi,
  &KLmissing_keyword_errorGVKi
};

_KLclassGVKd KLkeyword_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_largeVKiI,
  &K383,
  &K378,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLkeyword_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K378,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K378 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLkeyword_errorGVKi,
  &KLkeyword_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6129,
  &KLkeyword_errorGZ32ZconstructorVKiMM0,
  &K369,
  &K381,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K800,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLkeyword_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K382,
  &key_mep_2,
  &KLkeyword_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_8 K381 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLargument_errorGVKi,
  &KLkeyword_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K382 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K374
};

static _KLbyte_stringGVKd_15 K383 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<keyword-error>"
};

static _KLkeyword_signatureAvaluesGVKi K384 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K385
};

static _KLsimple_object_vectorGVKd_1 K385 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmissing_keyword_errorGVKi
};

static _KLbyte_stringGVKd_23 K386 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<missing-keyword-error>"
};

static _KLimplementation_classGVKe K387 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLimmutable_errorGVKi,
  &KLimmutable_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6113,
  &KLimmutable_errorGZ32ZconstructorVKiMM0,
  &K364,
  &K390,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLimmutable_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K391,
  &key_mep_2,
  &KLimmutable_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_7 K390 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLimmutable_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K391 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K392
};

static _KLsimple_object_vectorGVKd_1 K392 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLimmutable_errorGVKi
};

static _KLbyte_stringGVKd_17 K393 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<immutable-error>"
};

static _KLbyte_stringGVKd_54 K394 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Cannot instantiate %=, it is not an instantiable type."
};

_KLsimple_methodGVKe Kinvoke_debuggerVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K404,
  &Kinvoke_debuggerVKiMM0I
};

_KLsimple_methodGVKe Kinvoke_debuggerVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K402,
  &Kinvoke_debuggerVKiMM1I
};

static _KLpairGVKd K399 = {
  &KLpairGVKdW /* wrapper */,
  &Kinvoke_debuggerVKiMM0,
  &K400
};

static _KLpairGVKd K400 = {
  &KLpairGVKdW /* wrapper */,
  &Kinvoke_debuggerVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K401 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "invoke-debugger"
};

static _KLsignatureGVKe K402 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_Lsimple_conditionG_typesVKi
};

static _KLbyte_stringGVKd_30 K403 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "Condition of class %= occurred"
};

static _KLsignatureGVKe K404 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LconditionG_typesVKi
};

static _KLsignatureGVKe K405 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088769,
  &KPempty_vectorVKi
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF419 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K420,
  &KUhandler_functionUF419I,
  (D) 1
};

static _KLbyte_stringGVKd_40 K408 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "Try calling %= again with arguments: %=."
};

static _KLbyte_stringGVKd_40 K409 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 161,
  "No applicable method, applying %= to %=."
};

_KLclassGVKd KLdispatch_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K418,
  &K412,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLdispatch_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K412,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K412 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLdispatch_errorGVKi,
  &KLdispatch_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6185,
  &KLdispatch_errorGZ32ZconstructorVKiMM0,
  &K364,
  &K415,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLdispatch_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K416,
  &key_mep_2,
  &KLdispatch_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_7 K415 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLdispatch_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K416 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K417
};

static _KLsimple_object_vectorGVKd_1 K417 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdispatch_errorGVKi
};

static _KLbyte_stringGVKd_16 K418 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<dispatch-error>"
};

static _KLsignatureGVKe K420 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K421
};

static _KLsimple_object_vectorGVKd_2 K421 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_restartGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kambiguous_method_errorVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K425,
  &Kambiguous_method_errorVKeMM0I
};

static _KLpairGVKd K424 = {
  &KLpairGVKdW /* wrapper */,
  &Kambiguous_method_errorVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureGVKe K425 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K427
};

static _KLbyte_stringGVKd_22 K426 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "ambiguous-method-error"
};

static _KLsimple_object_vectorGVKd_4 K427 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLgeneric_functionGVKd,
  &KLsequenceGVKd,
  &KLsequenceGVKd,
  &KLcollectionGVKd
};

static _KLbyte_stringGVKd_88 K428 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 353,
  "Method selection is ambiguous applying %= to %= - got %= ordered methods, %= unorderable"
};

static _KLsignatureAvaluesGVKi K429 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K430,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K430 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLimplementation_classGVKe
};

static _KLsignatureAvaluesGVKi K431 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Limplementation_classG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLbyte_stringGVKd_5 K434 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "dylan"
};

static _KLsymbolGVKd KJtight_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K448
};

static _KLbyte_stringGVKd_223 K438 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 893,
  "Library incompatibility: library %= was compiled in production mode against an older version of used library %=, and is not compatible with the newer version.  Library %= must be recompiled to use this version of library %="
};

_KLclassGVKd KLlibrary_version_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K447,
  &K441,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLlibrary_version_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K441,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K441 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLlibrary_version_errorGVKi,
  &KLlibrary_version_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6193,
  &KLlibrary_version_errorGZ32ZconstructorVKiMM0,
  &K364,
  &K444,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLlibrary_version_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K445,
  &key_mep_2,
  &KLlibrary_version_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_7 K444 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLlibrary_version_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K445 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K446
};

static _KLsimple_object_vectorGVKd_1 K446 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlibrary_version_errorGVKi
};

static _KLbyte_stringGVKd_23 K447 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "<library-version-error>"
};

static _KLbyte_stringGVKd_5 K448 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "tight"
};

static _KLbyte_stringGVKd_96 K449 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 385,
  "Version mismatch: Library %= expected version %=.%= of library %=, but got version %=.%= instead"
};

static _KLbyte_stringGVKd_6 K450 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "append"
};

static _KLbyte_stringGVKd_6 K451 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "signal"
};

static _KLbyte_stringGVKd_8 K452 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "truncate"
};

static _KLbyte_stringGVKd_7 K453 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "replace"
};

static _KLbyte_stringGVKd_9 K454 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "overwrite"
};

static _KLbyte_stringGVKd_11 K455 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "new-version"
};

static _KLbyte_stringGVKd_12 K456 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "input-output"
};

static _KLbyte_stringGVKd_6 K457 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "output"
};

static _KLbyte_stringGVKd_5 K458 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "input"
};

static _KLbyte_stringGVKd_5 K459 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "wait?"
};

static _KLbyte_stringGVKd_6 K460 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "abort?"
};

static _KLbyte_stringGVKd_17 K461 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "if-does-not-exist"
};

static _KLbyte_stringGVKd_9 K462 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "if-exists"
};

static _KLbyte_stringGVKd_12 K463 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "outer-stream"
};

static _KLbyte_stringGVKd_8 K464 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "encoding"
};

static _KLbyte_stringGVKd_7 K465 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "locator"
};

static _KLbyte_stringGVKd_9 K466 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "direction"
};

static _KLbyte_stringGVKd_5 K467 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "write"
};

static _KLbyte_stringGVKd_4 K468 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "weak"
};

static _KLbyte_stringGVKd_7 K469 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "virtual"
};

static _KLbyte_stringGVKd_6 K470 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "vector"
};

static _KLbyte_stringGVKd_7 K471 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "values?"
};

static _KLbyte_stringGVKd_6 K472 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "values"
};

static _KLbyte_stringGVKd_5 K473 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "value"
};

static _KLbyte_stringGVKd_5 K474 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "users"
};

static _KLbyte_stringGVKd_7 K475 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "unknown"
};

static _KLbyte_stringGVKd_5 K476 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "type2"
};

static _KLbyte_stringGVKd_5 K477 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "type1"
};

static _KLbyte_stringGVKd_4 K478 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "type"
};

static _KLbyte_stringGVKd_5 K479 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "token"
};

static _KLbyte_stringGVKd_2 K480 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "to"
};

static _KLbyte_stringGVKd_7 K481 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "timeout"
};

static _KLbyte_stringGVKd_6 K482 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "thread"
};

static _KLbyte_stringGVKd_13 K483 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "test-function"
};

static _KLbyte_stringGVKd_4 K484 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "test"
};

static _KLbyte_stringGVKd_15 K485 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "synchronization"
};

static _KLbyte_stringGVKd_12 K486 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "superclasses"
};

static _KLbyte_stringGVKd_12 K487 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "storage-size"
};

static _KLbyte_stringGVKd_5 K488 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "start"
};

static _KLbyte_stringGVKd_6 K489 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stable"
};

static _KLbyte_stringGVKd_5 K490 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "slots"
};

static _KLbyte_stringGVKd_15 K491 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "slot-descriptor"
};

static _KLbyte_stringGVKd_4 K492 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "skip"
};

static _KLbyte_stringGVKd_4 K493 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "size"
};

static _KLbyte_stringGVKd_9 K494 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "signature"
};

static _KLbyte_stringGVKd_6 K495 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "setter"
};

static _KLbyte_stringGVKd_9 K496 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "sequences"
};

static _KLbyte_stringGVKd_7 K497 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "sealed?"
};

static _KLbyte_stringGVKd_5 K498 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "rest?"
};

static _KLbyte_stringGVKd_11 K499 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "rest-value?"
};

static _KLbyte_stringGVKd_10 K500 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "rest-value"
};

static _KLbyte_stringGVKd_21 K501 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "required-init-keyword"
};

static _KLbyte_stringGVKd_8 K502 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "required"
};

static _KLbyte_stringGVKd_8 K503 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "repeated"
};

static _KLbyte_stringGVKd_12 K504 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "rehash-limit"
};

static _KLbyte_stringGVKd_4 K505 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "read"
};

static _KLbyte_stringGVKd_10 K506 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "properties"
};

static _KLbyte_stringGVKd_10 K507 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "processing"
};

static _KLbyte_stringGVKd_8 K508 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "priority"
};

static _KLbyte_stringGVKd_8 K509 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "primary?"
};

static _KLbyte_stringGVKd_8 K510 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "password"
};

static _KLbyte_stringGVKd_5 K511 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "owner"
};

static _KLbyte_stringGVKd_7 K512 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "ordered"
};

static _KLbyte_stringGVKd_9 K513 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "operation"
};

static _KLbyte_stringGVKd_6 K514 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "object"
};

static _KLbyte_stringGVKd_13 K515 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "number-values"
};

static _KLbyte_stringGVKd_15 K516 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "number-required"
};

static _KLbyte_stringGVKd_15 K517 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "number-patterns"
};

static _KLbyte_stringGVKd_5 K518 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "next?"
};

static _KLbyte_stringGVKd_4 K519 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "next"
};

static _KLbyte_stringGVKd_4 K520 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "name"
};

static _KLbyte_stringGVKd_4 K521 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "mode"
};

static _KLbyte_stringGVKd_3 K522 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "min"
};

static _KLbyte_stringGVKd_13 K523 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "maximum-count"
};

static _KLbyte_stringGVKd_3 K524 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "max"
};

static _KLbyte_stringGVKd_3 K525 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "low"
};

static _KLbyte_stringGVKd_4 K526 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "lock"
};

static _KLbyte_stringGVKd_8 K527 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "keywords"
};

static _KLbyte_stringGVKd_18 K528 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "keyword-specifiers"
};

static _KLbyte_stringGVKd_4 K529 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "keys"
};

static _KLbyte_stringGVKd_4 K530 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "key?"
};

static _KLbyte_stringGVKd_9 K531 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "key-types"
};

static _KLbyte_stringGVKd_8 K532 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "key-test"
};

static _KLbyte_stringGVKd_3 K533 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "key"
};

static _KLbyte_stringGVKd_21 K534 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "instance-storage-size"
};

static _KLbyte_stringGVKd_13 K535 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "initial-count"
};

static _KLbyte_stringGVKd_11 K536 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "init-value?"
};

static _KLbyte_stringGVKd_10 K537 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "init-value"
};

static _KLbyte_stringGVKd_14 K538 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "init-supplied?"
};

static _KLbyte_stringGVKd_22 K539 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "init-keyword-required?"
};

static _KLbyte_stringGVKd_12 K540 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "init-keyword"
};

static _KLbyte_stringGVKd_13 K541 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "init-function"
};

static _KLbyte_stringGVKd_15 K542 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "init-evaluated?"
};

static _KLbyte_stringGVKd_9 K543 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "init-data"
};

static _KLbyte_stringGVKd_14 K544 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "init-arguments"
};

static _KLbyte_stringGVKd_15 K545 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "inherited-slots"
};

static _KLbyte_stringGVKd_20 K546 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "implementation-class"
};

static _KLbyte_stringGVKd_4 K547 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "high"
};

static _KLbyte_stringGVKd_13 K548 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "hash-function"
};

static _KLbyte_stringGVKd_18 K549 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "grow-size-function"
};

static _KLbyte_stringGVKd_6 K550 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "getter"
};

static _KLbyte_stringGVKd_16 K551 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "generic-function"
};

static _KLbyte_stringGVKd_8 K552 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "function"
};

static _KLbyte_stringGVKd_4 K553 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "from"
};

static _KLbyte_stringGVKd_13 K554 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "format-string"
};

static _KLbyte_stringGVKd_16 K555 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "format-arguments"
};

static _KLbyte_stringGVKd_15 K556 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "format-argument"
};

static _KLbyte_stringGVKd_10 K557 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "fixed-part"
};

static _KLbyte_stringGVKd_4 K558 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "fill"
};

static _KLbyte_stringGVKd_7 K559 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "failure"
};

static _KLbyte_stringGVKd_3 K560 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "end"
};

static _KLbyte_stringGVKd_12 K561 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "element-type"
};

static _KLbyte_stringGVKd_13 K562 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "each-subclass"
};

static _KLbyte_stringGVKd_12 K563 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "domain-types"
};

static _KLbyte_stringGVKd_10 K564 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "dimensions"
};

static _KLbyte_stringGVKd_7 K565 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "default"
};

static _KLbyte_stringGVKd_10 K566 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "debug-name"
};

static _KLbyte_stringGVKd_5 K567 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "count"
};

static _KLbyte_stringGVKd_8 K568 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "constant"
};

static _KLbyte_stringGVKd_11 K569 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "collections"
};

static _KLbyte_stringGVKd_4 K570 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "code"
};

static _KLbyte_stringGVKd_5 K571 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "class"
};

static _KLbyte_stringGVKd_8 K572 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "capacity"
};

static _KLbyte_stringGVKd_2 K573 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "by"
};

static _KLbyte_stringGVKd_5 K574 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "below"
};

static _KLbyte_stringGVKd_9 K575 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "arguments"
};

static _KLbyte_stringGVKd_16 K576 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "allow-other-keys"
};

static _KLbyte_stringGVKd_10 K577 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "allocation"
};

static _KLbyte_stringGVKd_9 K578 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "all-keys?"
};

static _KLbyte_stringGVKd_9 K579 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "abstract?"
};

static _KLbyte_stringGVKd_5 K580 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 21,
  "above"
};

_KLsimple_methodGVKe Klookup_runtime_moduleVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K585,
  &Klookup_runtime_moduleVKeI
};

static _KLsymbolGVKd KJdylan_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K434
};

static _KLsignatureGVKe K585 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K586
};

static _KLsimple_object_vectorGVKd_1 K586 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

_KLsimple_methodGVKe KPlibrary_version_checkVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K588,
  &KPlibrary_version_checkVKeI
};

static _KLsignatureGVKe K588 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K589
};

static _KLsimple_object_vectorGVKd_2 K589 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlibraryGVKe,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kversion_checksQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K592,
  &Kversion_checksQVKeI
};

static _KLsignatureAvaluesGVKi K592 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kversion_checksQ_setterVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kversion_checksQ_setterVKeI
};

static _KLpairGVKd K595 = {
  &KLpairGVKdW /* wrapper */,
  &K596,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K596 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "NOT FOUND"
};

_KLsimple_methodGVKe Kaddress_ofVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K599,
  &Kaddress_ofVKeI
};

static _KLsignatureAvaluesGVKi K599 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsimple_methodGVKe KPmethod_apply_with_optionalsVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  &KPmethod_apply_with_optionalsVKeI
};

_KLsimple_methodGVKe KapplyVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K603,
  &KapplyVKdI
};

static _KLsignatureGVKe K603 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LfunctionG_typesVKi
};

_KLsimple_methodGVKe Kinvalid_keyword_trapVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_6,
  &K618,
  &Kinvalid_keyword_trapVKeI
};

static _KLbyte_stringGVKd_130 K607 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 521,
  "The function %= was given the unrecognized keyword %= in the call with arguments %=.\nThe keywords recognized for this call are %=."
};

_KLclassGVKd KLunknown_keyword_argument_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K617,
  &K611,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLunknown_keyword_argument_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K611,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLbyte_stringGVKd_87 K610 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 349,
  "The function %= was given %= where a keyword was expected in the call with arguments %="
};

static _KLimplementation_classGVKe K611 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLunknown_keyword_argument_errorGVKi,
  &KLunknown_keyword_argument_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6153,
  &KLunknown_keyword_argument_errorGZ32ZconstructorVKiMM0,
  &K374,
  &K614,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLunknown_keyword_argument_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K615,
  &key_mep_2,
  &KLunknown_keyword_argument_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_9 K614 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLargument_errorGVKi,
  &KLkeyword_errorGVKi,
  &KLunknown_keyword_argument_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K615 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K616
};

static _KLsimple_object_vectorGVKd_1 K616 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLunknown_keyword_argument_errorGVKi
};

static _KLbyte_stringGVKd_32 K617 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "<unknown-keyword-argument-error>"
};

static _KLsignatureGVKe K618 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040217,
  &K619
};

static _KLsimple_object_vectorGVKd_6 K619 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLsimple_object_vectorGVKd,
  &KLdispatch_starterGVKg,
  &KLsingle_method_engine_nodeGVKg,
  &KLobjectGVKd,
  &KLsimple_object_vectorGVKd,
  &KLbooleanGVKd
};

_KLsimple_methodGVKe Kodd_number_of_keyword_args_trapVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K632,
  &Kodd_number_of_keyword_args_trapVKeI
};

static _KLbyte_stringGVKd_79 K622 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 317,
  "The function %= was called with an odd number of keyworded arguments in args %="
};

_KLclassGVKd KLodd_keyword_arguments_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K631,
  &K625,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLodd_keyword_arguments_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K625,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K625 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLodd_keyword_arguments_errorGVKi,
  &KLodd_keyword_arguments_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6145,
  &KLodd_keyword_arguments_errorGZ32ZconstructorVKiMM0,
  &K374,
  &K628,
  (D) 33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLodd_keyword_arguments_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K629,
  &key_mep_2,
  &KLodd_keyword_arguments_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_9 K628 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLargument_errorGVKi,
  &KLkeyword_errorGVKi,
  &KLodd_keyword_arguments_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K629 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K630
};

static _KLsimple_object_vectorGVKd_1 K630 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLodd_keyword_arguments_errorGVKi
};

static _KLbyte_stringGVKd_29 K631 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 117,
  "<odd-keyword-arguments-error>"
};

static _KLsignatureGVKe K632 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K633
};

static _KLsimple_object_vectorGVKd_3 K633 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_object_vectorGVKd,
  &KLdispatch_starterGVKg,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kreconstruct_args_from_mepargsVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K635,
  &Kreconstruct_args_from_mepargsVKeI
};

static _KLsignatureGVKe K635 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K636
};

static _KLsimple_object_vectorGVKd_2 K636 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Krepeated_slot_setter_index_out_of_range_trapVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K640,
  &Krepeated_slot_setter_index_out_of_range_trapVKeI
};

static _KLbyte_stringGVKd_62 K639 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 249,
  "Out of range attempting to store %= into %= of %= at index %=."
};

static _KLsignatureGVKe K640 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K641
};

static _KLsimple_object_vectorGVKd_3 K641 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Krepeated_slot_getter_index_out_of_range_trapVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K645,
  &Krepeated_slot_getter_index_out_of_range_trapVKeI
};

static _KLbyte_stringGVKd_54 K644 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 217,
  "Out of range attempting to fetch %= of %= at index %=."
};

static _KLsignatureGVKe K645 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K646
};

static _KLsimple_object_vectorGVKd_2 K646 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kno_applicable_method_errorVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K635,
  &Kno_applicable_method_errorVKeI
};

_KLsimple_methodGVKe Kstack_overflow_errorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K661,
  &Kstack_overflow_errorVKiI
};

static _KLbyte_stringGVKd_37 K650 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Stack overflow on current thread, %=."
};

_KLclassGVKd KLstack_overflow_errorGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K660,
  &K654,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLstack_overflow_errorGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K654,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLbyte_stringGVKd_43 K653 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "Stack overflow on current (unnamed) thread."
};

static _KLimplementation_classGVKe K654 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLstack_overflow_errorGVKe,
  &KLstack_overflow_errorGVKeW,
  &KPfalseVKi,
  &K361,
  (D) 6177,
  &KLstack_overflow_errorGZ32ZconstructorVKiMM0,
  &K364,
  &K657,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLstack_overflow_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K658,
  &key_mep_2,
  &KLstack_overflow_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_7 K657 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLstack_overflow_errorGVKe
};

static _KLkeyword_signatureAvaluesGVKi K658 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K659
};

static _KLsimple_object_vectorGVKd_1 K659 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLstack_overflow_errorGVKe
};

static _KLbyte_stringGVKd_22 K660 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<stack-overflow-error>"
};

static _KLsignatureAvaluesGVKi K661 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &K662
};

static _KLsimple_object_vectorGVKd_1 K662 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbottomGVKe
};

_KLsimple_methodGVKe Ktype_check_errorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K664,
  &Ktype_check_errorVKiI
};

static _KLsignatureAvaluesGVKi K664 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &K662
};

_KLsimple_methodGVKe Kargument_count_overflow_errorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K677,
  &Kargument_count_overflow_errorVKiI
};

static _KLbyte_stringGVKd_41 K667 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 165,
  "Function %= called with %d > %d arguments"
};

_KLclassGVKd KLargument_count_overflow_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K676,
  &K670,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLargument_count_overflow_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K670,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K670 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLargument_count_overflow_errorGVKi,
  &KLargument_count_overflow_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6169,
  &KLargument_count_overflow_errorGZ32ZconstructorVKiMM0,
  &K369,
  &K673,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLargument_count_overflow_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K674,
  &key_mep_2,
  &KLargument_count_overflow_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_8 K673 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLargument_errorGVKi,
  &KLargument_count_overflow_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K674 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K675
};

static _KLsimple_object_vectorGVKd_1 K675 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLargument_count_overflow_errorGVKi
};

static _KLbyte_stringGVKd_31 K676 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "<argument-count-overflow-error>"
};

static _KLsignatureAvaluesGVKi K677 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K678,
  &K662
};

static _KLsimple_object_vectorGVKd_3 K678 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kargument_count_errorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K691,
  &Kargument_count_errorVKiI
};

static _KLbyte_stringGVKd_38 K681 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "Attempted to call %= with %d arguments"
};

_KLclassGVKd KLargument_count_errorGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K690,
  &K684,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLargument_count_errorGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K684,
  (D) 2049,
  9,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K684 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLargument_count_errorGVKi,
  &KLargument_count_errorGVKiW,
  &KPfalseVKi,
  &K361,
  (D) 6161,
  &KLargument_count_errorGZ32ZconstructorVKiMM0,
  &K369,
  &K687,
  (D) 29,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K361,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLargument_count_errorGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K688,
  &key_mep_2,
  &KLargument_count_errorGZ32ZconstructorVKiMM0I,
  &K367
};

static _KLsimple_object_vectorGVKd_8 K687 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_errorGVKd,
  &KLargument_errorGVKi,
  &KLargument_count_errorGVKi
};

static _KLkeyword_signatureAvaluesGVKi K688 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K368,
  &KDsignature_LobjectG_typesVKi,
  &K689
};

static _KLsimple_object_vectorGVKd_1 K689 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLargument_count_errorGVKi
};

static _KLbyte_stringGVKd_22 K690 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<argument-count-error>"
};

static _KLsignatureAvaluesGVKi K691 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K692,
  &K662
};

static _KLsimple_object_vectorGVKd_2 K692 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kunknown_keyword_argument_errorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K696,
  &Kunknown_keyword_argument_errorVKiI
};

static _KLbyte_stringGVKd_47 K695 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 189,
  "Attempted to call %= with an unknown keyword %="
};

static _KLsignatureAvaluesGVKi K696 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K697,
  &K662
};

static _KLsimple_object_vectorGVKd_2 K697 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsymbolGVKd
};

_KLsimple_methodGVKe Kodd_keyword_arguments_errorVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K701,
  &Kodd_keyword_arguments_errorVKiI
};

static _KLbyte_stringGVKd_51 K700 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "Attempted to call %= with an odd number of keywords"
};

static _KLsignatureAvaluesGVKi K701 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LfunctionG_typesVKi,
  &K662
};

_KLsimple_methodGVKe KunboundQVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KunboundQVKeI
};

_KLsimple_methodGVKe KunboundVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K706,
  &KunboundVKeI
};

static _KLsignatureGVKe K706 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

_KLclassGVKd KLuntraceable_double_value_cellGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K727,
  &K709,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLuntraceable_double_value_cellGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K709,
  (D) 1,
  10,
  33554439,
  (D) 5,
  0
};

static _KLimplementation_classGVKe K709 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958025,
  &KLuntraceable_double_value_cellGVKi,
  &KLuntraceable_double_value_cellGVKiW,
  &KPfalseVKi,
  &K710,
  (D) 6105,
  &KLuntraceable_double_value_cellGZ32ZconstructorVKiMM0,
  &K713,
  &K714,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K710,
  &K710,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K710 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kvalue_cell_raw_object_1VKiHLuntraceable_double_value_cellG,
  &Kvalue_cell_raw_object_2VKiHLuntraceable_double_value_cellG
};

_KLkeyword_methodGVKe KLuntraceable_double_value_cellGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K715,
  &key_mep_2,
  &KLuntraceable_double_value_cellGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K713 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K714 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLuntraceable_double_value_cellGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K715 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K716
};

static _KLsimple_object_vectorGVKd_1 K716 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLuntraceable_double_value_cellGVKi
};

_KLinstance_slot_descriptorGVKe Kvalue_cell_raw_object_1VKiHLuntraceable_double_value_cellG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLuntraceable_double_value_cellGVKi,
  &KPfalseVKi,
  &Kvalue_cell_raw_object_1VKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Kvalue_cell_raw_object_2VKiHLuntraceable_double_value_cellG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLuntraceable_double_value_cellGVKi,
  &KPfalseVKi,
  &Kvalue_cell_raw_object_2VKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kvalue_cell_raw_object_2VKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K722,
  &K721,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kvalue_cell_raw_object_2VKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kvalue_cell_raw_object_2VKiHLuntraceable_double_value_cellG
};

static _KLpairGVKd K721 = {
  &KLpairGVKdW /* wrapper */,
  &Kvalue_cell_raw_object_2VKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K722 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "value-cell-raw-object-2"
};

_KLsealed_generic_functionGVKe Kvalue_cell_raw_object_1VKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K726,
  &K725,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kvalue_cell_raw_object_1VKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kvalue_cell_raw_object_1VKiHLuntraceable_double_value_cellG
};

static _KLpairGVKd K725 = {
  &KLpairGVKdW /* wrapper */,
  &Kvalue_cell_raw_object_1VKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K726 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "value-cell-raw-object-1"
};

static _KLbyte_stringGVKd_31 K727 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "<untraceable-double-value-cell>"
};

_KLclassGVKd KLuntraceable_value_cellGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K742,
  &K730,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLuntraceable_value_cellGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K730,
  (D) 1,
  6,
  33554439,
  (D) 5,
  0
};

static _KLimplementation_classGVKe K730 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLuntraceable_value_cellGVKi,
  &KLuntraceable_value_cellGVKiW,
  &KPfalseVKi,
  &K731,
  (D) 6097,
  &KLuntraceable_value_cellGZ32ZconstructorVKiMM0,
  &K713,
  &K734,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K731,
  &K731,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K731 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kvalue_cell_raw_objectVKiHLuntraceable_value_cellG
};

_KLkeyword_methodGVKe KLuntraceable_value_cellGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K735,
  &key_mep_2,
  &KLuntraceable_value_cellGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K734 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLuntraceable_value_cellGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K735 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K736
};

static _KLsimple_object_vectorGVKd_1 K736 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLuntraceable_value_cellGVKi
};

_KLinstance_slot_descriptorGVKe Kvalue_cell_raw_objectVKiHLuntraceable_value_cellG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLuntraceable_value_cellGVKi,
  &KPfalseVKi,
  &Kvalue_cell_raw_objectVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kvalue_cell_raw_objectVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K741,
  &K740,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kvalue_cell_raw_objectVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kvalue_cell_raw_objectVKiHLuntraceable_value_cellG
};

static _KLpairGVKd K740 = {
  &KLpairGVKdW /* wrapper */,
  &Kvalue_cell_raw_objectVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K741 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "value-cell-raw-object"
};

static _KLbyte_stringGVKd_24 K742 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "<untraceable-value-cell>"
};

_KLclassGVKd KLtraceable_value_cellGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K757,
  &K745,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLtraceable_value_cellGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K745,
  (D) 1,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K745 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLtraceable_value_cellGVKi,
  &KLtraceable_value_cellGVKiW,
  &KPfalseVKi,
  &K746,
  (D) 6089,
  &KLtraceable_value_cellGZ32ZconstructorVKiMM0,
  &K713,
  &K749,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K746,
  &K746,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K746 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kvalue_cell_objectVKiHLtraceable_value_cellG
};

_KLkeyword_methodGVKe KLtraceable_value_cellGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K750,
  &key_mep_2,
  &KLtraceable_value_cellGZ32ZconstructorVKiMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K749 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLtraceable_value_cellGVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K750 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K751
};

static _KLsimple_object_vectorGVKd_1 K751 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLtraceable_value_cellGVKi
};

_KLinstance_slot_descriptorGVKe Kvalue_cell_objectVKiHLtraceable_value_cellG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLtraceable_value_cellGVKi,
  &KPfalseVKi,
  &Kvalue_cell_objectVKi,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLsealed_generic_functionGVKe Kvalue_cell_objectVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K756,
  &K755,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kvalue_cell_objectVKiMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kvalue_cell_objectVKiHLtraceable_value_cellG
};

static _KLpairGVKd K755 = {
  &KLpairGVKdW /* wrapper */,
  &Kvalue_cell_objectVKiMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K756 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "value-cell-object"
};

static _KLbyte_stringGVKd_22 K757 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "<traceable-value-cell>"
};

_KLsimple_methodGVKe Kfunction_rest_value_typeVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K762,
  &Kfunction_rest_value_typeVKiI
};

static _KLunionGVKe K760 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K761,
  &KLtypeGVKd
};

static _KLsingletonGVKd K761 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K762 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LfunctionG_typesVKi,
  &K763
};

static _KLsimple_object_vectorGVKd_1 K763 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K760
};

_KLsimple_methodGVKe Kfunction_value_typeVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K766,
  &Kfunction_value_typeVKiI
};

static _KLsignatureAvaluesGVKi K766 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K692,
  &KDsignature_LtypeG_typesVKi
};

_KLsimple_methodGVKe Kfunction_key_typeVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K766,
  &Kfunction_key_typeVKiI
};

_KLsimple_methodGVKe Kfunction_required_typeVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K766,
  &Kfunction_required_typeVKiI
};

_KLsimple_methodGVKe Kmake_Lkeyword_signatureGVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_7,
  &K773,
  &Kmake_Lkeyword_signatureGVKiI
};

static _KLsignatureAvaluesGVKi K773 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555485,
  &K774,
  &KDsignature_LsignatureG_typesVKi
};

static _KLsimple_object_vectorGVKd_7 K774 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLbooleanGVKd,
  &KLsimple_object_vectorGVKd,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd,
  &KLsimple_object_vectorGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kmake_LsignatureGVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K777,
  &Kmake_LsignatureGVKiI
};

static _KLsignatureAvaluesGVKi K777 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K778,
  &KDsignature_LsignatureG_typesVKi
};

static _KLsimple_object_vectorGVKd_5 K778 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLbooleanGVKd,
  &KLsimple_object_vectorGVKd,
  &KLsimple_object_vectorGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd
};

_KLkeyword_methodGVKe Ksystem_allocate_simple_instanceVKe = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K781,
  &key_mep_3,
  &Ksystem_allocate_simple_instanceVKeI,
  &K782
};

static _KLkeyword_signatureGVKe K781 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_LclassG_typesVKi,
  &K783,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K782 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJfill_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K783 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJfill_
};

_KLkeyword_methodGVKe Ksystem_allocate_simple_instance_iVKe = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K786,
  &key_mep_3,
  &Ksystem_allocate_simple_instance_iVKeI,
  &K782
};

static _KLkeyword_signatureGVKe K786 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_Limplementation_classG_typesVKi,
  &K783,
  &KDsignature_LobjectG_typesVKi
};

_KLsimple_methodGVKe Kobject_implementation_classVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K789,
  &Kobject_implementation_classVKeI
};

static _KLsignatureAvaluesGVKi K789 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Limplementation_classG_typesVKi
};

_KLsimple_methodGVKe Kobject_mm_wrapperVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K792,
  &Kobject_mm_wrapperVKeI
};

static _KLsignatureAvaluesGVKi K792 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &K793
};

static _KLsimple_object_vectorGVKd_1 K793 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLmm_wrapperGVKi
};

_KLsimple_methodGVKe Kobject_classVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K795,
  &Kobject_classVKdI
};

static _KLsignatureAvaluesGVKi K795 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

_KLsimple_methodGVKe Kinside_debuggerQVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K592,
  &Kinside_debuggerQVKeMM0I
};

static _KLpairGVKd K797 = {
  &KLpairGVKdW /* wrapper */,
  &KLargument_count_overflow_errorGVKi,
  &K798
};

static _KLpairGVKd K798 = {
  &KLpairGVKdW /* wrapper */,
  &KLargument_count_errorGVKi,
  &K799
};

static _KLpairGVKd K799 = {
  &KLpairGVKdW /* wrapper */,
  &KLkeyword_errorGVKi,
  &KPempty_listVKi
};

static _KLpairGVKd K800 = {
  &KLpairGVKdW /* wrapper */,
  &KLunknown_keyword_argument_errorGVKi,
  &K801
};

static _KLpairGVKd K801 = {
  &KLpairGVKdW /* wrapper */,
  &KLodd_keyword_arguments_errorGVKi,
  &K802
};

static _KLpairGVKd K802 = {
  &KLpairGVKdW /* wrapper */,
  &KLmissing_keyword_errorGVKi,
  &KPempty_listVKi
};

/* Code */

D Kinstall_direct_object_classVKiI (D tag_, D class_) {
  D T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:78
  T5 = primitive_cast_integer_as_raw(tag_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:78
  T4 = primitive_machine_word_shift_right(T5,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:78
  primitive_element_setter(class_,Ddirect_object_classesVKi,T4,0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:81
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:81
  T7 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:80
  primitive_element_setter(T7,Ddirect_object_mm_wrappersVKi,T4,0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:80
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:76
  MV_SET_COUNT(0);
  return(T3);
}

D KPlibrary_version_checkVKeI (D lib_, D module_) {
  DWORD T2T, T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  DWORD T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1141
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
  T4 = SLOT_VALUE_INITD(lib_, 4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
  T5 = SLOT_VALUE_INITD(T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
  T2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
    T7 = primitive_machine_word_equalQ(T2,T6);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(T4, 1, T2);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1143
      KPused_library_version_checkVKiI(lib_, T8);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
      T9 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
      T2T = T9;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1142
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1146
  T10 = SLOT_VALUE_INITD(lib_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1146
  Kdylan_runtime_module_handle_setterVKiI(module_, T10);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1146
  T3 = module_;
  MV_SET_ELT(0, module_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1141
  return(T3);
}

D KLintegerG_instanceQVKiI (D x_, D c_) {
  DADDR T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:92
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:93
  T2 = primitive_cast_pointer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:93
  T3 = primitive_machine_word_logand(T2,3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:93
  T4 = primitive_machine_word_equalQ(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:93
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:92
  MV_SET_COUNT(1);
  return(T5_0);
}

D KLbyte_characterG_instanceQVKiI (D x_, D c_) {
  DADDR T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:104
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:105
  T2 = primitive_cast_pointer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:105
  T3 = primitive_machine_word_logand(T2,3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:105
  T4 = primitive_machine_word_equalQ(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:105
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:104
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kall_superclasses_setterVKeMM1I (D supers_, D iclass_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1345
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1347
  T3_0 = supers_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1345
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kall_superclassesVKdMM1I (D iclass_) {
  DWORD T2T, T2;
  DWORD i_T, i_;
  D T4;
  D super_;
  D T6_0;
  D supers_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  DWORD T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1335
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1337
  supers_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
  T10 = SLOT_VALUE_INITD(iclass_, 8);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
  T11 = SLOT_VALUE_INITD(T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
  T13 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1339
  T12 = SLOT_VALUE_INITD(iclass_, 9);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
  T16 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
  T2T = 1;
  i_T = T16;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
    T14 = primitive_machine_word_equalQ(T2,T13);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
    if (T14 != &KPfalseVKi) {
      T4 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
      T15 = primitive_machine_word_less_thanQ(i_,1);
      T4 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
    if (T4 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
      T17 = REPEATED_D_SLOT_VALUE_TAGGED(T10, 1, T2);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
      super_ = T17;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1340
      T9 = supers_;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1340
      T18 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1340
      SLOT_VALUE_SETTER(super_, T18, 0);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1340
      SLOT_VALUE_SETTER(T9, T18, 1);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1340
      supers_ = T18;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
      T19 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
      T20 = primitive_machine_word_add_signal_overflow(i_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
      T2T = T19;
      i_T = T20;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1338
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1342
  T8 = supers_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1342
  T6_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1335
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLunicode_characterG_instanceQVKiI (D x_, D c_) {
  DADDR T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:116
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:117
  T2 = primitive_cast_pointer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:117
  T3 = primitive_machine_word_logand(T2,3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:117
  T4 = primitive_machine_word_equalQ(T3,3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:117
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:116
  MV_SET_COUNT(1);
  return(T5_0);
}

D KapplyVKdI (D function_, D arguments_) {
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1012
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1014
  T5 = SLOT_VALUE_INITD(arguments_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1016
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1016
  T7 = primitive_machine_word_subtract_signal_overflow(T6,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1016
  T8 = REPEATED_D_SLOT_VALUE_TAGGED(arguments_, 1, T7);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1016
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsimple_object_vectorGVKd, T8);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1015
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T3, arguments_, 1, T7);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1017
  T4 = primitive_apply(function_,arguments_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1012
  return(T4);
}

D Kno_applicable_method_errorVKeI (D gf_, D args_) {
  volatile D Uunwind_exceptionUPexit_4_;
  volatile D T3;
  volatile D Uoriginal_handlersU_;
  volatile D T5;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10;
  volatile _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T12;
  volatile _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T14;
  volatile D T15_0;
  volatile _KLsimple_object_vectorGVKd_8 T16 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T17;
  volatile D T18;
  volatile _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile _KLsimple_object_vectorGVKd_4 T20 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T21;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:887
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_4_);
  if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_4_))) {
    T10 = FRAME_RETVAL(Uunwind_exceptionUPexit_4_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    T5 = MAKE_CLOSURE_INITD(&KUhandler_functionUF419, 4, Uoriginal_handlersU_, Uunwind_exceptionUPexit_4_, args_, gf_);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:898
    T11.vector_element_[0] = gf_;
    T11.vector_element_[1] = args_;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:898
    T12 = primitive_copy_vector(&T11);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:895
    T13.vector_element_[0] = &KJformat_string_;
    T13.vector_element_[1] = &K408;
    T13.vector_element_[2] = &KJformat_arguments_;
    T13.vector_element_[3] = T12;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:895
    T14 = primitive_copy_vector(&T13);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    T16.vector_element_[0] = &KJtype_;
    T16.vector_element_[1] = &KLsimple_restartGVKd;
    T16.vector_element_[2] = &KJfunction_;
    T16.vector_element_[3] = T5;
    T16.vector_element_[4] = &KJtest_;
    T16.vector_element_[5] = &KPfalseVKi;
    T16.vector_element_[6] = &KJinit_arguments_;
    T16.vector_element_[7] = T14;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    T15_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T16, &KLsimple_restartGVKd, T5, &KPfalseVKi, T14);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    T17 = T15_0;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    T6 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    T18 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    SLOT_VALUE_SETTER(T17, T18, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    SLOT_VALUE_SETTER(T6, T18, 1);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    primitive_write_thread_variable(Tcurrent_handlersTVKi, T18);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    ENTER_UNWIND_FRAME(T7);
    if (!nlx_setjmp(FRAME_DEST(T7))) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:892
      T19.vector_element_[0] = gf_;
      T19.vector_element_[1] = args_;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:892
      T8 = KlistVKdI(&T19);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:890
      T20.vector_element_[0] = &KJformat_string_;
      T20.vector_element_[1] = &K409;
      T20.vector_element_[2] = &KJformat_arguments_;
      T20.vector_element_[3] = T8;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:890
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T9 = CONGRUENT_CALL2(&KLdispatch_errorGVKi, &T20);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:890
      T21 = KerrorVKdMM0I(T9, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
      FALL_THROUGH_UNWIND(T21);
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  T10 = T21;
    /* invalidate Uunwind_exceptionUPexit_4_ */
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:887
  return(T10);
}

D Kobject_classVKdI (D instance_) {
  DADDR T1;
  DWORD bits_;
  D T3;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  D mm_wrapper_;
  D T9;
  D T10;
  D T11_0;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:240
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:241
  T1 = primitive_cast_pointer_as_raw(instance_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:241
  bits_ = primitive_machine_word_logand(T1,3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:242
  T3 = primitive_machine_word_equalQ(bits_,0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:242
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:243
    T7 = primitive_element(instance_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:243
    mm_wrapper_ = T7;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:243
    T9 = SLOT_VALUE_INITD(mm_wrapper_, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:243
    T10 = SLOT_VALUE_INITD(T9, 1);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:243
    T11_0 = T10;
    T6_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:245
    T4 = primitive_element(Ddirect_object_classesVKi,bits_,0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:245
    T5_0 = T4;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:245
    T12_0 = T5_0;
    T6_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:242
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:240
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kreconstruct_args_from_mepargsVKeI (D gf_, D mepargs_) {
  D optvecF2;
  D T3_0;
  D T3_1;
  D T3_2;
  D nreq_;
  D nopt_;
  D optvecF6;
  DWORD iF7T, iF7;
  DWORD iF8T, iF8;
  DWORD j_T, j_;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  DWORD T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D T25_0;
  D T25_1;
  D T25_2;
  D T26_0;
  D T26_1;
  D T26_2;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:923
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:925
  T11 = SLOT_VALUE_INITD(gf_, 1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:926
  T12 = SLOT_VALUE_INITD(mepargs_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
  T13 = SLOT_VALUE_INITD(T11, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
  T15 = primitive_machine_word_logbitQ(18,T14);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
  if (T15 != &KPfalseVKi) {
    T19 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
    T16 = SLOT_VALUE_INITD(T11, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
    T18 = primitive_machine_word_logbitQ(20,T17);
    T19 = T18;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:929
    T20 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:929
    T21 = primitive_machine_word_subtract_signal_overflow(T20,4);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:929
    T22 = REPEATED_D_SLOT_VALUE_TAGGED(mepargs_, 1, T21);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:929
    optvecF2 = T22;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:930
    T23 = primitive_cast_raw_as_integer(T21);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:930
    T24 = SLOT_VALUE_INITD(optvecF2, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:930
    T25_0 = T23;
    T25_1 = T24;
    T25_2 = optvecF2;
    T3_0 = T25_0;
    T3_1 = T25_1;
    T3_2 = T25_2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:932
    T26_0 = T12;
    T26_1 = (D) 1;
    T26_2 = &KPempty_vectorVKi;
    T3_0 = T26_0;
    T3_1 = T26_1;
    T3_2 = T26_2;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:928
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:927
  nreq_ = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:927
  nopt_ = T3_1;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:927
  optvecF6 = T3_2;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:934
  T27 = primitive_cast_integer_as_raw(nopt_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:934
  T28 = primitive_cast_integer_as_raw(nreq_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:934
  T29 = primitive_machine_word_logxor(T28,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:934
  T30 = primitive_machine_word_add_signal_overflow(T27,T29);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:934
  T31 = primitive_cast_raw_as_integer(T30);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:934
  T32 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T31);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
  iF7T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
    iF7 = iF7T;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
    T33 = primitive_cast_integer_as_raw(nreq_);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
    T34 = primitive_machine_word_less_thanQ(iF7,T33);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
    if (T34 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:936
      T35 = REPEATED_D_SLOT_VALUE_TAGGED(mepargs_, 1, iF7);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:936
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T35, T32, 1, iF7);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
      T36 = primitive_machine_word_add_signal_overflow(iF7,4);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
      iF7T = T36;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:935
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:939
  T40 = primitive_cast_integer_as_raw(nreq_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
  iF8T = T40;
  j_T = 1;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
    iF8 = iF8T;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
    j_ = j_T;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
    T37 = primitive_cast_integer_as_raw(nopt_);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
    T38 = primitive_machine_word_less_thanQ(j_,T37);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:939
      T39 = REPEATED_D_SLOT_VALUE_TAGGED(optvecF6, 1, j_);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:939
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T39, T32, 1, iF8);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
      T41 = primitive_machine_word_add_signal_overflow(iF8,4);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
      T42 = primitive_machine_word_add_signal_overflow(j_,4);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
      iF8T = T41;
      j_T = T42;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:938
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:941
  T10 = T32;
  MV_SET_ELT(0, T32);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:923
  return(T10);
}

D KvaluesVKdI (D arguments_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:751
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:753
  T2 = primitive_values(arguments_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:751
  return(T2);
}

D Kinside_debuggerQVKeMM0I () {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1047
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1048
  T1 = primitive_inside_debuggerQ();
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1048
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1047
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kuninstantiable_errorVKiMM0I (D class_) {
  _KLsimple_object_vectorGVKd_1 T2 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:764
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:765
  T2.vector_element_[0] = class_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:765
  T3 = KerrorVKdMM1I(&K394, &T2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:764
  return(T3);
}

D Ktype_check_errorVKiI (D value_, D type_) {
  D T2;
  D T3_0;
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:841
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:843
  T4.vector_element_[0] = &KJvalue_;
  T4.vector_element_[1] = value_;
  T4.vector_element_[2] = &KJtype_;
  T4.vector_element_[3] = type_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:843
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:843
  CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
  T3_0 = CONGRUENT_CALL2(T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:841
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM0I (D class_, D all_keys_) {
  D T3_0;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:768
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:769
  T3_0 = Kuninstantiable_errorVKiMM0I(class_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:768
  T4_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:768
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kmake_mm_wrapperVKiI (D implementation_class_, D fixed_part_header_, D variable_part_header_) {
  D wrapper_;
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:132
  T6 = Kclass_instance_headerVKiI(&KLmm_wrapperGVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:132
  T7 = primitive_allocate_wrapper(6,T6,5,&KPunboundVKi,0,5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:132
  wrapper_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:133
  SLOT_VALUE_SETTER(implementation_class_, wrapper_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:134
  T9 = primitive_cast_integer_as_raw(fixed_part_header_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:134
  T8 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:134
  SLOT_VALUE_SETTER(T8, wrapper_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:140
  T11 = primitive_cast_integer_as_raw(variable_part_header_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:140
  T10 = primitive_machine_word_shift_right(T11,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:136
  T4 = primitive_machine_word_bit_field_deposit(2,56,8,T10);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:135
  SLOT_VALUE_SETTER(T4, wrapper_, 3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:142
  T5 = wrapper_;
  MV_SET_ELT(0, wrapper_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:128
  return(T5);
}

D Ksystem_allocate_repeated_instanceVKeMM0I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15_0;
  D T16;
  D T17_0;
  D mm_wrapper_;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:394
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T9 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T11 = primitive_machine_word_logand(T10,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T13 = primitive_machine_word_add_signal_overflow(5,T11);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T16 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T17_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T15_0 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  mm_wrapper_ = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T19 = primitive_machine_word_subtract_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T20 = primitive_machine_word_shift_right(T19,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T22 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T21 = primitive_machine_word_shift_right(T22,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T23 = primitive_machine_word_shift_right(T11,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T7 = primitive_object_allocate_filled(T14,mm_wrapper_,T20,fill_,T21,T23,repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:398
  T8 = T7;
  MV_SET_ELT(0, T7);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:394
  return(T8);
}

D Ksystem_allocate_repeated_instanceVKeMM1I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15_0;
  D T16;
  D T17_0;
  D mm_wrapper_;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:483
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T9 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T11 = primitive_machine_word_logand(T10,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T13 = primitive_machine_word_add_signal_overflow(5,T11);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T16 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T17_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T15_0 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  mm_wrapper_ = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T19 = primitive_machine_word_subtract_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T20 = primitive_machine_word_shift_right(T19,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T22 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T21 = primitive_machine_word_shift_right(T22,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T23 = primitive_machine_word_shift_right(T11,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T7 = primitive_object_allocate_filled(T14,mm_wrapper_,T20,fill_,T21,T23,repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:484
  T8 = T7;
  MV_SET_ELT(0, T7);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:483
  return(T8);
}

D Ksystem_allocate_repeated_instanceVKeMM2I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  DSINT raw_repeated_fill_;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19_0;
  D T20;
  D T21_0;
  D mm_wrapper_;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29_0;
  D T30;
  D T31;
  D T32;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:485
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T13 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T15 = primitive_machine_word_logand(T14,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T16 = primitive_machine_word_logior(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T17 = primitive_machine_word_add_signal_overflow(5,T15);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T18 = primitive_machine_word_shift_right(T17,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T20 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T21_0 = T20;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T19_0 = T21_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  mm_wrapper_ = T19_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T23 = primitive_machine_word_subtract_signal_overflow(T16,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T24 = primitive_machine_word_shift_right(T23,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T26 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T25 = primitive_machine_word_shift_right(T26,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T27 = primitive_machine_word_shift_right(T15,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  raw_repeated_fill_ = primitive_byte_character_as_raw(repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T28 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T30 = SLOT_VALUE(T28, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T31 = SLOT_VALUE(&KLsimple_arrayGVKi, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T29_0 = KsubiclassQVKiI(T30, T28, T31, &KLsimple_arrayGVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  T32 = T29_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
    T10 = primitive_byte_allocate_filled(T18,mm_wrapper_,T24,fill_,T25,T27,raw_repeated_fill_);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
    T11 = T10;
    MV_SET_ELT(0, T10);
    MV_SET_COUNT(1);
    T12 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
    T8 = primitive_byte_allocate_leaf_filled(T18,mm_wrapper_,T24,fill_,T25,T27,raw_repeated_fill_);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
    T9 = T8;
    MV_SET_ELT(0, T8);
    MV_SET_COUNT(1);
    T12 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:486
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:485
  return(T12);
}

D Ksystem_allocate_repeated_instanceVKeMM3I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  DSINT raw_repeated_fill_;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16_0;
  D T17;
  D T18_0;
  D mm_wrapper_;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:487
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T10 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T12 = primitive_machine_word_logand(T11,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T14 = primitive_machine_word_add_signal_overflow(5,T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T17 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T18_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T16_0 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  mm_wrapper_ = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T20 = primitive_machine_word_subtract_signal_overflow(T13,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T21 = primitive_machine_word_shift_right(T20,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T23 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T22 = primitive_machine_word_shift_right(T23,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T24 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  raw_repeated_fill_ = primitive_unicode_character_as_raw(repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T8 = primitive_word_allocate_filled(T15,mm_wrapper_,T21,fill_,T22,T24,raw_repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:488
  T9 = T8;
  MV_SET_ELT(0, T8);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:487
  return(T9);
}

D Ksystem_allocate_repeated_instanceVKeMM4I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18_0;
  D T19;
  D T20_0;
  D mm_wrapper_;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30_0;
  D T31;
  D T32;
  D T33;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:489
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T12 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T14 = primitive_machine_word_logand(T13,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T15 = primitive_machine_word_logior(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T16 = primitive_machine_word_add_signal_overflow(5,T14);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T17 = primitive_machine_word_shift_right(T16,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T19 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T20_0 = T19;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T18_0 = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  mm_wrapper_ = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T22 = primitive_machine_word_subtract_signal_overflow(T15,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T23 = primitive_machine_word_shift_right(T22,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T25 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T24 = primitive_machine_word_shift_right(T25,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T26 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T28 = primitive_cast_integer_as_raw(repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T27 = primitive_machine_word_shift_right(T28,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T29 = SLOT_VALUE_INITD(T6, 1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T31 = SLOT_VALUE(T29, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T32 = SLOT_VALUE(&KLsimple_arrayGVKi, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T30_0 = KsubiclassQVKiI(T31, T29, T32, &KLsimple_arrayGVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  T33 = T30_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  if (T33 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
    T9 = primitive_byte_allocate_filled(T17,mm_wrapper_,T23,fill_,T24,T26,T27);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
    T10 = T9;
    MV_SET_ELT(0, T9);
    MV_SET_COUNT(1);
    T11 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
    T7 = primitive_byte_allocate_leaf_filled(T17,mm_wrapper_,T23,fill_,T24,T26,T27);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
    T8 = T7;
    MV_SET_ELT(0, T7);
    MV_SET_COUNT(1);
    T11 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:490
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:489
  return(T11);
}

D Ksystem_allocate_repeated_instanceVKeMM5I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15_0;
  D T16;
  D T17_0;
  D mm_wrapper_;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:491
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T9 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T11 = primitive_machine_word_logand(T10,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T13 = primitive_machine_word_add_signal_overflow(5,T11);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T16 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T17_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T15_0 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  mm_wrapper_ = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T19 = primitive_machine_word_subtract_signal_overflow(T12,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T20 = primitive_machine_word_shift_right(T19,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T22 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T21 = primitive_machine_word_shift_right(T22,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T23 = primitive_machine_word_shift_right(T11,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T25 = primitive_cast_integer_as_raw(repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T24 = primitive_machine_word_shift_right(T25,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T7 = primitive_double_byte_allocate_filled(T14,mm_wrapper_,T20,fill_,T21,T23,T24);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:492
  T8 = T7;
  MV_SET_ELT(0, T7);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:491
  return(T8);
}

D Ksystem_allocate_repeated_instanceVKeMM6I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  DWORD raw_repeated_fill_;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16_0;
  D T17;
  D T18_0;
  D mm_wrapper_;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:493
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T10 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T12 = primitive_machine_word_logand(T11,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T14 = primitive_machine_word_add_signal_overflow(5,T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T17 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T18_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T16_0 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  mm_wrapper_ = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T20 = primitive_machine_word_subtract_signal_overflow(T13,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T21 = primitive_machine_word_shift_right(T20,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T23 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T22 = primitive_machine_word_shift_right(T23,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T24 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  raw_repeated_fill_ = primitive_unwrap_machine_word(repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T8 = primitive_word_allocate_filled(T15,mm_wrapper_,T21,fill_,T22,T24,raw_repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:494
  T9 = T8;
  MV_SET_ELT(0, T8);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:493
  return(T9);
}

D Ksystem_allocate_repeated_instanceVKeMM7I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  DSFLT raw_repeated_fill_;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16_0;
  D T17;
  D T18_0;
  D mm_wrapper_;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:497
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T10 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T12 = primitive_machine_word_logand(T11,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T14 = primitive_machine_word_add_signal_overflow(5,T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T17 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T18_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T16_0 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  mm_wrapper_ = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T20 = primitive_machine_word_subtract_signal_overflow(T13,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T21 = primitive_machine_word_shift_right(T20,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T23 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T22 = primitive_machine_word_shift_right(T23,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T24 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  raw_repeated_fill_ = primitive_single_float_as_raw(repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T8 = primitive_single_float_allocate_filled(T15,mm_wrapper_,T21,fill_,T22,T24,raw_repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:498
  T9 = T8;
  MV_SET_ELT(0, T8);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:497
  return(T9);
}

D Ksystem_allocate_repeated_instanceVKeMM8I (D class_, D type_, D fill_, D repeated_size_, D repeated_fill_) {
  D T6;
  DDFLT raw_repeated_fill_;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16_0;
  D T17;
  D T18_0;
  D mm_wrapper_;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:499
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T6 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T10 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T12 = primitive_machine_word_logand(T11,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T14 = primitive_machine_word_add_signal_overflow(5,T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T17 = SLOT_VALUE_INITD(T6, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T18_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T16_0 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  mm_wrapper_ = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T20 = primitive_machine_word_subtract_signal_overflow(T13,4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T21 = primitive_machine_word_shift_right(T20,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T23 = primitive_cast_integer_as_raw(repeated_size_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T22 = primitive_machine_word_shift_right(T23,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T24 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  raw_repeated_fill_ = primitive_double_float_as_raw(repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T8 = primitive_double_float_allocate_filled(T15,mm_wrapper_,T21,fill_,T22,T24,raw_repeated_fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:500
  T9 = T8;
  MV_SET_ELT(0, T8);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:499
  return(T9);
}

D KLargument_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:785
  T5 = primitive_object_allocate_filled(3,&KLargument_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:785
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLmissing_keyword_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:787
  T5 = primitive_object_allocate_filled(3,&KLmissing_keyword_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:787
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLkeyword_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:786
  T5 = primitive_object_allocate_filled(3,&KLkeyword_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:786
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLimmutable_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:783
  T5 = primitive_object_allocate_filled(3,&KLimmutable_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:783
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kinvoke_debuggerVKiMM0I (D condition_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1033
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1036
  T2 = Kobject_classVKdI(condition_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1036
  T4.vector_element_[0] = T2;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1036
  T5 = primitive_copy_vector(&T4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1034
  primitive_invoke_debugger(&K403,T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1037
  T3 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1033
  return(T3);
}

D Kinvoke_debuggerVKiMM1I (D condition_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1040
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1042
  T4 = SLOT_VALUE_INITD(condition_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1043
  T5 = SLOT_VALUE_INITD(condition_, 1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1043
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T2 = CONGRUENT_CALL2(&KLsimple_object_vectorGVKd, T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1041
  primitive_invoke_debugger(T4,T2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1044
  T3 = &KPfalseVKi;
  MV_SET_ELT(0, &KPfalseVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1040
  return(T3);
}

static D KUhandler_functionUF419I (D UdummyU_, D Unext_handlerU_) {
  D all_values_;
  D T4;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:899
  T4 = APPLY1(CREF(3), CREF(2));
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  all_values_ = MV_GET_REST_AT(T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  T5 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  T6 = NLX(CREF(1), T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:889
  return(T6);
}

D KLdispatch_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:870
  T5 = primitive_object_allocate_filled(3,&KLdispatch_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:870
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kambiguous_method_errorVKeMM0I (D gf_, D args_, D ordered_, D ambig_) {
  D T5;
  D T6;
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:877
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:882
  T7.vector_element_[0] = gf_;
  T7.vector_element_[1] = args_;
  T7.vector_element_[2] = ordered_;
  T7.vector_element_[3] = ambig_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:882
  T5 = KlistVKdI(&T7);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:879
  T8.vector_element_[0] = &KJformat_string_;
  T8.vector_element_[1] = &K428;
  T8.vector_element_[2] = &KJformat_arguments_;
  T8.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:879
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLdispatch_errorGVKi, &T8);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:879
  T9 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:877
  return(T9);
}

D KPused_library_version_checkVKiI (D lib_, D used_lib_) {
  D Utmp_;
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
  D T16_0;
  D T17_0;
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
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1123
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1125
  T14 = SLOT_VALUE_INITD(used_lib_, 3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  T15 = Tversion_checksQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  T16_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  T17_0 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  T18 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  T19 = primitive_not(T18);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1127
    T20 = SLOT_VALUE_INITD(T14, 3);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1127
    T21 = primitive_idQ(T20,(D) -3);
    Utmp_ = T21;
  } else {
    Utmp_ = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  if (Utmp_ != &KPfalseVKi) {
    T4 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1128
    T22 = SLOT_VALUE_INITD(lib_, 3);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1128
    T23 = primitive_idQ(T22,(D) -3);
    T4 = T23;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
    T12 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T13 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    T24 = SLOT_VALUE_INITD(T14, 1);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    T25 = SLOT_VALUE_INITD(used_lib_, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    T27 = primitive_idQ(T24,T25);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    T26 = primitive_not(T27);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1130
      T28 = SLOT_VALUE_INITD(T14, 2);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1130
      T29 = SLOT_VALUE_INITD(used_lib_, 1);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1130
      T30 = primitive_cast_integer_as_raw(T28);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1130
      T31 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1130
      T32 = primitive_machine_word_less_thanQ(T30,T31);
      T5 = T32;
    } else {
      T5 = T26;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1131
      T33 = Klibrary_version_errorVKiMM0I(lib_, used_lib_);
      T11 = T33;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      T34 = SLOT_VALUE_INITD(used_lib_, 4);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      T35 = primitive_idQ(T34,IKJtight_);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1133
        T36 = SLOT_VALUE_INITD(lib_, 3);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1133
        T37 = primitive_idQ(T36,(D) -7);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1133
        T38 = primitive_not(T37);
        T6 = T38;
      } else {
        T6 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1134
        T39 = SLOT_VALUE_INITD(T14, 3);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1134
        T40 = primitive_idQ(T39,(D) -7);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1134
        T41 = primitive_not(T40);
        T7 = T41;
      } else {
        T7 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      if (T7 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1135
        T42 = SLOT_VALUE_INITD(T14, 3);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1135
        T43 = SLOT_VALUE_INITD(used_lib_, 2);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1135
        T45 = primitive_idQ(T42,T43);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1135
        T44 = primitive_not(T45);
        T8 = T44;
      } else {
        T8 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1132
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
      if (T8 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1136
        T46 = Klibrary_incompatibility_errorVKiMM0I(lib_, used_lib_);
        T10 = T46;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
        T9 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T10 = T9;
      }
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
      T11 = T10;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1129
    T13 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1126
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1123
  return(T13);
}

D Kdylan_runtime_module_handle_setterVKiI (D module_, D library_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10;
  D T11_0;
  D T12_0;
  D T13;
  D T14_0;
  D T15;
  D T16_0;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1172
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1174
  T2 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1174
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1175
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T3 = CONGRUENT_CALL2(library_, &K434);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1175
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1176
      T4 = Tdylan_runtime_moduleTVKi = module_;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1176
      T5_0 = T4;
      T9_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1178
      T6 = Tdylan_runtime_modulesTVKi;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1178
      if (T6 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1179
        T14_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1179
        T13 = T14_0;
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1179
        Tdylan_runtime_modulesTVKi = T13;
      }
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1178
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1181
      T7 = Tdylan_runtime_modulesTVKi;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1181
      CONGRUENT_CALL_PROLOG(&KasVKd, 2);
      T15 = CONGRUENT_CALL2(&KLbyte_stringGVKd, library_);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1181
      T16_0 = KmakeVKdMM59I(&KLsymbolGVKd, &KPempty_vectorVKi, T15);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1181
      T17 = T16_0;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1181
      CALL3(&Kelement_setterVKd, module_, T7, T17);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1181
      T8_0 = module_;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1175
    T12_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1184
    T10 = Tdylan_runtime_moduleTVKi = module_;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1184
    T11_0 = T10;
    T12_0 = T11_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1174
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1172
  MV_SET_COUNT(1);
  return(T12_0);
}

D Klibrary_version_errorVKiMM0I (D lib_, D used_lib_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_6 T12 = {&KLsimple_object_vectorGVKdW, (D) 25};
  _KLsimple_object_vectorGVKd_4 T13 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1066
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1067
  T5 = SLOT_VALUE_INITD(used_lib_, 3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1073
  T6 = SLOT_VALUE_INITD(lib_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1074
  T7 = SLOT_VALUE_INITD(used_lib_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1075
  T8 = SLOT_VALUE_INITD(used_lib_, 1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1076
  T9 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1077
  T10 = SLOT_VALUE_INITD(T5, 1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1078
  T11 = SLOT_VALUE_INITD(T5, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1073
  T12.vector_element_[0] = T6;
  T12.vector_element_[1] = T7;
  T12.vector_element_[2] = T8;
  T12.vector_element_[3] = T9;
  T12.vector_element_[4] = T10;
  T12.vector_element_[5] = T11;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1073
  T3 = KlistVKdI(&T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1068
  T13.vector_element_[0] = &KJformat_string_;
  T13.vector_element_[1] = &K449;
  T13.vector_element_[2] = &KJformat_arguments_;
  T13.vector_element_[3] = T3;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1068
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLlibrary_version_errorGVKi, &T13);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1068
  T14 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1066
  return(T14);
}

D Klibrary_incompatibility_errorVKiMM0I (D lib_, D used_lib_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1086
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1088
  T5 = SLOT_VALUE_INITD(used_lib_, 3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1096
  T6 = SLOT_VALUE_INITD(lib_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1097
  T7 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1096
  T8.vector_element_[0] = T6;
  T8.vector_element_[1] = T7;
  T8.vector_element_[2] = T6;
  T8.vector_element_[3] = T7;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1096
  T3 = KlistVKdI(&T8);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1089
  T9.vector_element_[0] = &KJformat_string_;
  T9.vector_element_[1] = &K438;
  T9.vector_element_[2] = &KJformat_arguments_;
  T9.vector_element_[3] = T3;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1089
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLlibrary_version_errorGVKi, &T9);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1089
  T10 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1086
  return(T10);
}

D KLlibrary_version_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1062
  T5 = primitive_object_allocate_filled(3,&KLlibrary_version_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1062
  MV_SET_COUNT(1);
  return(T6_0);
}

D Klookup_runtime_moduleVKeI (D library_) {
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1188
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1189
  T1_0 = Kdylan_runtime_module_handleVKiI(library_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1188
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kdylan_runtime_module_handleVKiI (D library_) {
  D T1;
  D T2;
  D T3_0;
  D T4;
  D T5;
  D T6_0;
  D T7_0;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1157
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1158
  T1 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1158
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1159
    T11 = primitive_idQ(library_,IKJdylan_);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1159
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1160
      T2 = Tdylan_runtime_moduleTVKi;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1160
      T3_0 = T2;
      T7_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1162
      T4 = Tdylan_runtime_modulesTVKi;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1162
      if (T4 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1163
        T13_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1163
        T12 = T13_0;
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1163
        Tdylan_runtime_modulesTVKi = T12;
      }
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1162
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1165
      T5 = Tdylan_runtime_modulesTVKi;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1165
      T6_0 = CALL4(&KelementVKd, T5, library_, &KJdefault_, &KPfalseVKi);
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1159
    T10_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1168
    T8 = Tdylan_runtime_moduleTVKi;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1168
    T9_0 = T8;
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1158
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1157
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kversion_checksQVKeI () {
  D T0;
  D T1_0;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1119
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1120
  T0 = Tversion_checksQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1120
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1119
  T2_0 = T1_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1119
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kversion_checksQ_setterVKeI (D wellQ_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1115
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1116
  T1 = Tversion_checksQTVKi = wellQ_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1116
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1115
  return(T2);
}

D Kaddress_ofVKeI (D object_) {
  DADDR T1;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1027
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1028
  T1 = primitive_cast_pointer_as_raw(object_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1028
  T2 = primitive_wrap_machine_word(T1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1028
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1027
  MV_SET_COUNT(1);
  return(T3_0);
}

D KPmethod_apply_with_optionalsVKeI (D function_, D next_methods_, D arguments_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1020
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1022
  T3 = primitive_mep_apply_with_optionals(function_,next_methods_,arguments_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1020
  return(T3);
}

D Kinvalid_keyword_trapVKeI (D mepargs_, D disphdr_, D engine_node_, D key_, D keyvec_, D implicitQ_) {
  D T6;
  D args_;
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
  _KLsimple_object_vectorGVKd_3 T18 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T20;
  _KLsimple_object_vectorGVKd_4 T21 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T22;
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_4 T25 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T26 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T27;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:978
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:983
  T6 = Kparent_gfVKgI(disphdr_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:984
  args_ = Kreconstruct_args_from_mepargsVKeI(T6, mepargs_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:985
  T17 = primitive_instanceQ(key_,&KLsymbolGVKd);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:985
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:990
    T10 = Tgf_invalid_keyword_error_is_warningTVKg;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:985
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:993
      T11 = Kreconstruct_keywordsVKiI(keyvec_, implicitQ_);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:991
      T21.vector_element_[0] = T6;
      T21.vector_element_[1] = key_;
      T21.vector_element_[2] = args_;
      T21.vector_element_[3] = T11;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:991
      KsignalVKdMM1I(&K607, &T21);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:994
      T22 = SLOT_VALUE_INITD(engine_node_, 3);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:995
      T23 = SLOT_VALUE_INITD(engine_node_, 4);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:994
      T24 = primitive_mep_apply_with_optionals(T22,T23,mepargs_);
      T15 = T24;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1002
      T12 = Kreconstruct_keywordsVKiI(keyvec_, implicitQ_);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1002
      T25.vector_element_[0] = T6;
      T25.vector_element_[1] = key_;
      T25.vector_element_[2] = args_;
      T25.vector_element_[3] = T12;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1002
      T13 = KlistVKdI(&T25);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:998
      T26.vector_element_[0] = &KJformat_string_;
      T26.vector_element_[1] = &K607;
      T26.vector_element_[2] = &KJformat_arguments_;
      T26.vector_element_[3] = T13;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:998
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T14 = CONGRUENT_CALL2(&KLunknown_keyword_argument_errorGVKi, &T26);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:998
      T27 = KerrorVKdMM0I(T14, &KPempty_vectorVKi);
      T15 = T27;
    }
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:985
    T16 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:989
    T18.vector_element_[0] = T6;
    T18.vector_element_[1] = key_;
    T18.vector_element_[2] = args_;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:989
    T8 = KlistVKdI(&T18);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:986
    T19.vector_element_[0] = &KJformat_string_;
    T19.vector_element_[1] = &K610;
    T19.vector_element_[2] = &KJformat_arguments_;
    T19.vector_element_[3] = T8;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:986
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T9 = CONGRUENT_CALL2(&KLmissing_keyword_errorGVKi, &T19);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:986
    T20 = KerrorVKdMM0I(T9, &KPempty_vectorVKi);
    T16 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:985
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:978
  return(T16);
}

D Kreconstruct_keywordsVKiI (D keyvec_, D method_keyword_table_formatQ_) {
  DWORD i_T, i_;
  DWORD j_T, j_;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:945
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:947
  if (method_keyword_table_formatQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:948
    T7 = SLOT_VALUE_INITD(keyvec_, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:949
    T8 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:949
    T9 = primitive_machine_word_shift_right(T8,1);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:949
    T10 = primitive_machine_word_logand(T9,-4);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:949
    T11 = primitive_machine_word_logior(T10,1);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:949
    T12 = primitive_cast_raw_as_integer(T11);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:950
    T13 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T12);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
    i_T = 1;
    j_T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
      i_ = i_T;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
      j_ = j_T;
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
      T14 = primitive_machine_word_less_thanQ(i_,T11);
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:952
        T15 = REPEATED_D_SLOT_VALUE_TAGGED(keyvec_, 1, j_);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:952
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T15, T13, 1, i_);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
        T16 = primitive_machine_word_add_signal_overflow(i_,4);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
        T17 = primitive_machine_word_add_signal_overflow(j_,8);
        // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
        i_T = T16;
        j_T = T17;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
      // /opt/opendylan-2013.1/sources/dylan/boot.dylan:951
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:954
    T4 = T13;
    MV_SET_ELT(0, T13);
    MV_SET_COUNT(1);
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:957
    T5 = keyvec_;
    MV_SET_ELT(0, keyvec_);
    MV_SET_COUNT(1);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:947
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:945
  return(T6);
}

D KLunknown_keyword_argument_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:800
  T5 = primitive_object_allocate_filled(3,&KLunknown_keyword_argument_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:800
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kodd_number_of_keyword_args_trapVKeI (D mepargs_, D disphdr_, D engine_node_) {
  D T3;
  D T4;
  D T5;
  D T6;
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:962
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:965
  T3 = Kparent_gfVKgI(disphdr_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:969
  T4 = Kreconstruct_args_from_mepargsVKeI(T3, mepargs_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:969
  T7.vector_element_[0] = T3;
  T7.vector_element_[1] = T4;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:969
  T5 = KlistVKdI(&T7);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:966
  T8.vector_element_[0] = &KJformat_string_;
  T8.vector_element_[1] = &K622;
  T8.vector_element_[2] = &KJformat_arguments_;
  T8.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:966
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLodd_keyword_arguments_errorGVKi, &T8);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:966
  T9 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:962
  return(T9);
}

D KLodd_keyword_arguments_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:790
  T5 = primitive_object_allocate_filled(3,&KLodd_keyword_arguments_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:790
  MV_SET_COUNT(1);
  return(T6_0);
}

D Krepeated_slot_setter_index_out_of_range_trapVKeI (D value_, D inst_, D idx_) {
  D T3;
  D sd_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:912
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:914
  T3 = Kobject_classVKdI(inst_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:914
  T8 = SLOT_VALUE(T3, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:914
  T9 = SLOT_VALUE_INITD(T8, 3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:914
  sd_ = T9;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:917
  T10 = SLOT_VALUE_INITD(sd_, 4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:917
  if (T10 != &KPfalseVKi) {
    T5 = T10;
  } else {
    T5 = sd_;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:917
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:917
  T11.vector_element_[0] = value_;
  T11.vector_element_[1] = T5;
  T11.vector_element_[2] = inst_;
  T11.vector_element_[3] = idx_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:917
  T6 = KlistVKdI(&T11);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:915
  T12.vector_element_[0] = &KJformat_string_;
  T12.vector_element_[1] = &K639;
  T12.vector_element_[2] = &KJformat_arguments_;
  T12.vector_element_[3] = T6;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:915
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7 = CONGRUENT_CALL2(&KLinvalid_index_errorGVKi, &T12);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:915
  T13 = KerrorVKdMM0I(T7, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:912
  return(T13);
}

D Krepeated_slot_getter_index_out_of_range_trapVKeI (D inst_, D idx_) {
  D T2;
  D sd_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_3 T10 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T11 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:904
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:906
  T2 = Kobject_classVKdI(inst_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:906
  T7 = SLOT_VALUE(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:906
  T8 = SLOT_VALUE_INITD(T7, 3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:906
  sd_ = T8;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:909
  T9 = SLOT_VALUE_INITD(sd_, 4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:909
  if (T9 != &KPfalseVKi) {
    T4 = T9;
  } else {
    T4 = sd_;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:909
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:909
  T10.vector_element_[0] = T4;
  T10.vector_element_[1] = inst_;
  T10.vector_element_[2] = idx_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:909
  T5 = KlistVKdI(&T10);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:907
  T11.vector_element_[0] = &KJformat_string_;
  T11.vector_element_[1] = &K644;
  T11.vector_element_[2] = &KJformat_arguments_;
  T11.vector_element_[3] = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:907
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T6 = CONGRUENT_CALL2(&KLinvalid_index_errorGVKi, &T11);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:907
  T12 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:904
  return(T12);
}

D Kstack_overflow_errorVKiI () {
  D T0;
  D T1;
  D T2;
  D T3;
  D condition_;
  D T5;
  _KLsimple_object_vectorGVKd_1 T6 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T7 = {&KLsimple_object_vectorGVKdW, (D) 17};
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:848
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:850
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:850
  T5 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:852
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:855
    T6.vector_element_[0] = T5;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:855
    T1 = KlistVKdI(&T6);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:853
    T7.vector_element_[0] = &KJformat_string_;
    T7.vector_element_[1] = &K650;
    T7.vector_element_[2] = &KJformat_arguments_;
    T7.vector_element_[3] = T1;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:853
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T2 = CONGRUENT_CALL2(&KLstack_overflow_errorGVKe, &T7);
    condition_ = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:857
    T8.vector_element_[0] = &KJformat_string_;
    T8.vector_element_[1] = &K653;
    T8.vector_element_[2] = &KJformat_arguments_;
    T8.vector_element_[3] = &KPempty_listVKi;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:857
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLstack_overflow_errorGVKe, &T8);
    condition_ = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:852
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:861
  T9_0 = KerrorVKdMM0I(condition_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:848
  MV_SET_COUNT(1);
  return(T9_0);
}

D KLstack_overflow_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:846
  T5 = primitive_object_allocate_filled(3,&KLstack_overflow_errorGVKeW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:846
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kargument_count_overflow_errorVKiI (D function_, D argument_count_, D argument_count_max_) {
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  _KLsimple_object_vectorGVKd_4 T6 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:824
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:830
  T5.vector_element_[0] = function_;
  T5.vector_element_[1] = argument_count_;
  T5.vector_element_[2] = argument_count_max_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:830
  T3 = KlistVKdI(&T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:828
  T6.vector_element_[0] = &KJformat_string_;
  T6.vector_element_[1] = &K667;
  T6.vector_element_[2] = &KJformat_arguments_;
  T6.vector_element_[3] = T3;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:828
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T4 = CONGRUENT_CALL2(&KLargument_count_overflow_errorGVKi, &T6);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:828
  T7_0 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:824
  MV_SET_COUNT(1);
  return(T7_0);
}

D KLargument_count_overflow_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:822
  T5 = primitive_object_allocate_filled(3,&KLargument_count_overflow_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:822
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kargument_count_errorVKiI (D function_, D argument_count_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:813
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:818
  T4.vector_element_[0] = function_;
  T4.vector_element_[1] = argument_count_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:818
  T2 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:816
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K681;
  T5.vector_element_[2] = &KJformat_arguments_;
  T5.vector_element_[3] = T2;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:816
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLargument_count_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:816
  T6_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:813
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLargument_count_errorGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_) {
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:811
  T5 = primitive_object_allocate_filled(3,&KLargument_count_errorGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T5, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T5, 1);
  APPLY2(&KinitializeVKd, T5, init_args_);
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:811
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kunknown_keyword_argument_errorVKiI (D function_, D keyword_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:802
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:807
  T4.vector_element_[0] = function_;
  T4.vector_element_[1] = keyword_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:807
  T2 = KlistVKdI(&T4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:805
  T5.vector_element_[0] = &KJformat_string_;
  T5.vector_element_[1] = &K695;
  T5.vector_element_[2] = &KJformat_arguments_;
  T5.vector_element_[3] = T2;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:805
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLunknown_keyword_argument_errorGVKi, &T5);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:805
  T6_0 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:802
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kodd_keyword_arguments_errorVKiI (D function_) {
  D T1;
  D T2;
  _KLsimple_object_vectorGVKd_1 T3 = {&KLsimple_object_vectorGVKdW, (D) 5};
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:792
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:796
  T3.vector_element_[0] = function_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:796
  T1 = KlistVKdI(&T3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:794
  T4.vector_element_[0] = &KJformat_string_;
  T4.vector_element_[1] = &K700;
  T4.vector_element_[2] = &KJformat_arguments_;
  T4.vector_element_[3] = T1;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:794
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2 = CONGRUENT_CALL2(&KLodd_keyword_arguments_errorGVKi, &T4);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:794
  T5_0 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:792
  MV_SET_COUNT(1);
  return(T5_0);
}

D KunboundQVKeI (D object_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:710
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:711
  T1 = primitive_idQ(object_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:711
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:710
  return(T2);
}

D KunboundVKeI () {
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:706
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:707
  T0 = &KPunboundVKi;
  MV_SET_ELT(0, &KPunboundVKi);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:706
  return(T0);
}

D KLuntraceable_double_value_cellGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:687
  T3 = primitive_object_allocate_filled(3,&KLuntraceable_double_value_cellGVKiW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 0);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 1);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:687
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLuntraceable_value_cellGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:680
  T3 = primitive_object_allocate_filled(2,&KLuntraceable_value_cellGVKiW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 0);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:680
  MV_SET_COUNT(1);
  return(T4_0);
}

D KLtraceable_value_cellGZ32ZconstructorVKiMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:669
  T3 = primitive_object_allocate_filled(2,&KLtraceable_value_cellGVKiW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 0);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:669
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kfunction_rest_value_typeVKiI (D function_) {
  D T1;
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:636
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:638
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T1 = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:638
  CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
  T2_0 = CONGRUENT_CALL1(T1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:636
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:636
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kfunction_value_typeVKiI (D function_, D index_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:630
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:633
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T2 = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:633
  CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
  T3 = CONGRUENT_CALL1(T2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:633
  T4_0 = CALL2(&KelementVKd, T3, index_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:630
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:630
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kfunction_key_typeVKiI (D function_, D index_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:624
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:627
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T2 = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:627
  T3 = CALL1(&Ksignature_key_typesVKi, T2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:627
  T4_0 = CALL2(&KelementVKd, T3, index_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:624
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:624
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kfunction_required_typeVKiI (D function_, D index_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:618
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:621
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T2 = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:621
  T3 = CALL1(&Ksignature_requiredVKe, T2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:621
  T4_0 = CALL2(&KelementVKd, T3, index_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:618
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:618
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kmake_Lkeyword_signatureGVKiI (D nextQ_, D required_, D values_, D rest_value_, D signature_properties_, D keys_, D key_types_) {
  D T7_0;
  _KLsimple_object_vectorGVKd_16 T8 = {&KLsimple_object_vectorGVKdW, (D) 65};

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:598
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:607
  T8.vector_element_[0] = &KJkeyQ_;
  T8.vector_element_[1] = &KPtrueVKi;
  T8.vector_element_[2] = &KJrequired_;
  T8.vector_element_[3] = required_;
  T8.vector_element_[4] = &KJkeys_;
  T8.vector_element_[5] = keys_;
  T8.vector_element_[6] = &KJkey_types_;
  T8.vector_element_[7] = key_types_;
  T8.vector_element_[8] = &KJvalues_;
  T8.vector_element_[9] = values_;
  T8.vector_element_[10] = &KJrest_value_;
  T8.vector_element_[11] = rest_value_;
  T8.vector_element_[12] = &KJnextQ_;
  T8.vector_element_[13] = nextQ_;
  T8.vector_element_[14] = &KJproperties_;
  T8.vector_element_[15] = signature_properties_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:607
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7_0 = CONGRUENT_CALL2(&KLsignatureGVKe, &T8);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:598
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kmake_LsignatureGVKiI (D nextQ_, D required_, D values_, D rest_value_, D signature_properties_) {
  D T5_0;
  _KLsimple_object_vectorGVKd_12 T6 = {&KLsimple_object_vectorGVKdW, (D) 49};

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:582
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:589
  T6.vector_element_[0] = &KJkeyQ_;
  T6.vector_element_[1] = &KPfalseVKi;
  T6.vector_element_[2] = &KJrequired_;
  T6.vector_element_[3] = required_;
  T6.vector_element_[4] = &KJvalues_;
  T6.vector_element_[5] = values_;
  T6.vector_element_[6] = &KJrest_value_;
  T6.vector_element_[7] = rest_value_;
  T6.vector_element_[8] = &KJnextQ_;
  T6.vector_element_[9] = nextQ_;
  T6.vector_element_[10] = &KJproperties_;
  T6.vector_element_[11] = signature_properties_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:589
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T5_0 = CONGRUENT_CALL2(&KLsignatureGVKe, &T6);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:582
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksystem_allocate_simple_instanceVKeI (D class_, D Urest_, D fill_) {
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15;
  DWORD T16;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:380
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:383
  T4 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T7 = SLOT_VALUE_INITD(T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T9 = primitive_machine_word_logand(T8,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T10 = primitive_machine_word_add_signal_overflow(5,T9);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T11 = primitive_machine_word_shift_right(T10,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T13 = SLOT_VALUE_INITD(T4, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T14_0 = T13;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T12_0 = T14_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T15 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T16 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T5 = primitive_object_allocate_filled(T11,T15,T16,fill_,0,0,fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:382
  T6 = T5;
  MV_SET_ELT(0, T5);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:380
  return(T6);
}

D Ksystem_allocate_simple_instance_iVKeI (D iclass_, D Urest_, D fill_) {
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14;
  DWORD T15;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:366
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:368
  T6 = SLOT_VALUE_INITD(iclass_, 0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:368
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:368
  T8 = primitive_machine_word_logand(T7,262140);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:370
  T9 = primitive_machine_word_add_signal_overflow(5,T8);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:370
  T10 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:371
  T12 = SLOT_VALUE_INITD(iclass_, 2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:371
  T13_0 = T12;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:371
  T11_0 = T13_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:371
  T14 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:372
  T15 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:369
  T4 = primitive_object_allocate_filled(T10,T14,T15,fill_,0,0,fill_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:369
  T5 = T4;
  MV_SET_ELT(0, T4);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:366
  return(T5);
}

D Kobject_implementation_classVKeI (D instance_) {
  DADDR T1;
  DWORD bitsF2;
  D T3;
  D T4_0;
  D T5;
  D mm_wrapperF6;
  D T7;
  D T8_0;
  D T9;
  D mm_wrapperF10;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:284
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:286
  T1 = primitive_cast_pointer_as_raw(instance_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:286
  bitsF2 = primitive_machine_word_logand(T1,3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:287
  T3 = primitive_machine_word_equalQ(bitsF2,0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:287
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:288
    T5 = primitive_element(instance_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:288
    mm_wrapperF6 = T5;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:288
    T7 = SLOT_VALUE_INITD(mm_wrapperF6, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:288
    T8_0 = T7;
    T4_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:291
    T9 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF2,0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:291
    mm_wrapperF10 = T9;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:292
    T11 = SLOT_VALUE_INITD(mm_wrapperF10, 0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:292
    T12_0 = T11;
    T4_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:287
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:284
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kobject_mm_wrapperVKeI (D instance_) {
  DADDR T1;
  DWORD bitsF2;
  D T3;
  D T4_0;
  D T5;
  D mm_wrapperF6;
  D T7_0;
  D T8;
  D mm_wrapperF9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:275
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:276
  T1 = primitive_cast_pointer_as_raw(instance_);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:276
  bitsF2 = primitive_machine_word_logand(T1,3);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:277
  T3 = primitive_machine_word_equalQ(bitsF2,0);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:277
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:278
    T5 = primitive_element(instance_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:278
    mm_wrapperF6 = T5;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:278
    T7_0 = mm_wrapperF6;
    T4_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:280
    T8 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF2,0);
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:280
    mm_wrapperF9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/boot.dylan:280
    T10_0 = mm_wrapperF9;
    T4_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:277
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:275
  MV_SET_COUNT(1);
  return(T4_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_boot_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJtight_);
    if (T0 != &KJtight_) {
      IKJtight_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdylan_);
    if (T0 != &KJdylan_) {
      IKJdylan_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_boot_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:24
  T0 = primitive_untraced_allocate(32);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:23
  Ddirect_object_classesVKi = T0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:23
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:29
  T0 = primitive_untraced_allocate(32);
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:28
  Ddirect_object_mm_wrappersVKi = T0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:28
  T1 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:84
  T0 = Kinstall_direct_object_classVKiI((D) 1, &KLunboundGVKe);
  goto I2;
}
I2:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:90
  T0 = Kinstall_direct_object_classVKiI((D) 5, &KLintegerGVKd);
  goto I4;
}
I4:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:102
  T0 = Kinstall_direct_object_classVKiI((D) 9, &KLbyte_characterGVKe);
  goto I5;
}
I5:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:114
  T0 = Kinstall_direct_object_classVKiI((D) 13, &KLunicode_characterGVKe);
  goto I6;
}
I6:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:736
  PunsuppliedQVKi = PunsuppliedQVKi;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:736
  T0 = &KPfalseVKi;
  goto I7;
}
I7:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJabove_);
  goto I8;
}
I8:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJabstractQ_);
  goto I10;
}
I10:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJall_keysQ_);
  goto I12;
}
I12:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJallocation_);
  goto I14;
}
I14:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJallow_other_keys_);
  goto I16;
}
I16:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJarguments_);
  goto I18;
}
I18:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJbelow_);
  goto I20;
}
I20:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJby_);
  goto I22;
}
I22:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJcapacity_);
  goto I24;
}
I24:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJclass_);
  goto I26;
}
I26:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJcode_);
  goto I28;
}
I28:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJcollections_);
  goto I30;
}
I30:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJconstant_);
  goto I32;
}
I32:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJcount_);
  goto I34;
}
I34:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJdebug_name_);
  goto I36;
}
I36:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJdefault_);
  goto I38;
}
I38:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJdimensions_);
  goto I40;
}
I40:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJdomain_types_);
  goto I42;
}
I42:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJeach_subclass_);
  goto I44;
}
I44:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJelement_type_);
  goto I46;
}
I46:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJend_);
  goto I48;
}
I48:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJfailure_);
  goto I50;
}
I50:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJfill_);
  goto I52;
}
I52:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJfixed_part_);
  goto I54;
}
I54:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJformat_argument_);
  goto I56;
}
I56:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJformat_arguments_);
  goto I58;
}
I58:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJformat_string_);
  goto I60;
}
I60:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJfrom_);
  goto I62;
}
I62:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJfunction_);
  goto I64;
}
I64:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJgeneric_function_);
  goto I66;
}
I66:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJgetter_);
  goto I68;
}
I68:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJgrow_size_function_);
  goto I70;
}
I70:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJhash_function_);
  goto I72;
}
I72:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJhigh_);
  goto I74;
}
I74:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJimplementation_class_);
  goto I76;
}
I76:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinherited_slots_);
  goto I78;
}
I78:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_arguments_);
  goto I80;
}
I80:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_data_);
  goto I82;
}
I82:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_evaluatedQ_);
  goto I84;
}
I84:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_function_);
  goto I86;
}
I86:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_keyword_);
  goto I88;
}
I88:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_keyword_requiredQ_);
  goto I90;
}
I90:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_suppliedQ_);
  goto I92;
}
I92:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_value_);
  goto I94;
}
I94:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinit_valueQ_);
  goto I96;
}
I96:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinitial_count_);
  goto I98;
}
I98:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJinstance_storage_size_);
  goto I100;
}
I100:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJkey_);
  goto I102;
}
I102:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJkey_test_);
  goto I104;
}
I104:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJkey_types_);
  goto I106;
}
I106:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJkeyQ_);
  goto I108;
}
I108:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJkeys_);
  goto I110;
}
I110:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJkeyword_specifiers_);
  goto I112;
}
I112:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJkeywords_);
  goto I114;
}
I114:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJlock_);
  goto I116;
}
I116:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJlow_);
  goto I118;
}
I118:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJmax_);
  goto I120;
}
I120:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJmaximum_count_);
  goto I122;
}
I122:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJmin_);
  goto I124;
}
I124:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJmode_);
  goto I126;
}
I126:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJname_);
  goto I128;
}
I128:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJnext_);
  goto I130;
}
I130:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJnextQ_);
  goto I132;
}
I132:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJnumber_patterns_);
  goto I134;
}
I134:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJnumber_required_);
  goto I136;
}
I136:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJnumber_values_);
  goto I138;
}
I138:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJobject_);
  goto I140;
}
I140:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJoperation_);
  goto I142;
}
I142:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJordered_);
  goto I144;
}
I144:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJowner_);
  goto I146;
}
I146:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJpassword_);
  goto I148;
}
I148:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJprimaryQ_);
  goto I150;
}
I150:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJpriority_);
  goto I152;
}
I152:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJprocessing_);
  goto I154;
}
I154:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJproperties_);
  goto I156;
}
I156:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJread_);
  goto I158;
}
I158:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJrehash_limit_);
  goto I160;
}
I160:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJrepeated_);
  goto I162;
}
I162:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJrequired_);
  goto I164;
}
I164:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJrequired_init_keyword_);
  goto I166;
}
I166:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJrest_value_);
  goto I168;
}
I168:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJrest_valueQ_);
  goto I170;
}
I170:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJrestQ_);
  goto I172;
}
I172:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJsealedQ_);
  goto I174;
}
I174:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJsequences_);
  goto I176;
}
I176:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJsetter_);
  goto I178;
}
I178:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJsignature_);
  goto I180;
}
I180:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJsize_);
  goto I182;
}
I182:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJskip_);
  goto I184;
}
I184:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJslot_descriptor_);
  goto I186;
}
I186:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJslots_);
  goto I188;
}
I188:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJstable_);
  goto I190;
}
I190:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJstart_);
  goto I192;
}
I192:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJstorage_size_);
  goto I194;
}
I194:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJsuperclasses_);
  goto I196;
}
I196:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJsynchronization_);
  goto I198;
}
I198:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJtest_);
  goto I200;
}
I200:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJtest_function_);
  goto I202;
}
I202:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJthread_);
  goto I204;
}
I204:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJtimeout_);
  goto I206;
}
I206:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJto_);
  goto I208;
}
I208:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJtoken_);
  goto I210;
}
I210:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJtype_);
  goto I212;
}
I212:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJtype1_);
  goto I214;
}
I214:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJtype2_);
  goto I216;
}
I216:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJunknown_);
  goto I218;
}
I218:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJusers_);
  goto I220;
}
I220:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJvalue_);
  goto I222;
}
I222:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJvalues_);
  goto I224;
}
I224:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJvaluesQ_);
  goto I226;
}
I226:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJvector_);
  goto I228;
}
I228:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJvirtual_);
  goto I230;
}
I230:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJweak_);
  goto I232;
}
I232:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1195
  T0 = KPresolve_symbolVKiI(&KJwrite_);
  goto I234;
}
I234:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJelement_type_);
  goto I236;
}
I236:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJdirection_);
  goto I237;
}
I237:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJlocator_);
  goto I239;
}
I239:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJencoding_);
  goto I241;
}
I241:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJouter_stream_);
  goto I243;
}
I243:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJif_exists_);
  goto I245;
}
I245:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJif_does_not_exist_);
  goto I247;
}
I247:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJabortQ_);
  goto I249;
}
I249:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJwaitQ_);
  goto I251;
}
I251:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJinput_);
  goto I253;
}
I253:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJoutput_);
  goto I255;
}
I255:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJinput_output_);
  goto I257;
}
I257:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJnew_version_);
  goto I259;
}
I259:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJoverwrite_);
  goto I261;
}
I261:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJreplace_);
  goto I263;
}
I263:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJtruncate_);
  goto I265;
}
I265:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJsignal_);
  goto I267;
}
I267:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1312
  T0 = KPresolve_symbolVKiI(&KJappend_);
  goto I269;
}
I269:

{
  D T0;
  D Dempty_subjunctive_class_universe_tmp_;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1366
  T0 = Kmake_empty_subjunctive_class_universeVKeI();
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1365
  Dempty_subjunctive_class_universe_tmp_ = T0;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1365
  Dempty_subjunctive_class_universeVKe = Dempty_subjunctive_class_universe_tmp_;
  // /opt/opendylan-2013.1/sources/dylan/boot.dylan:1365
  T2 = &KPfalseVKi;
  goto I271;
}
I271:

  return;
}


/* eof */
