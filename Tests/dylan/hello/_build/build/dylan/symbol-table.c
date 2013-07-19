#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(11);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
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
} _KLunboundGVKe;

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
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(31);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

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
} _KLobject_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLmutable_object_with_elementsGVKe;

typedef struct {
  D wrapper;
} _KLcollectionGVKd;

typedef struct {
  D wrapper;
  D element_type_;
} _KLlimited_collectionGVKe;

typedef struct {
  D wrapper;
} _KLstretchy_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_collectionGVKd;

typedef struct {
  D wrapper;
} _KLexplicit_key_collectionGVKd;

typedef struct {
  D wrapper;
} _KLmutable_explicit_key_collectionGVKd;

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLtableGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_copy_down_methodGVKi;

#define  define__KLsimple_byte_vectorGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D byte_vector_element_[nrepeated+1]; \
  } _KLsimple_byte_vectorGVKe_##nrepeated;

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
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D element_type_;
  D table_vector_;
  D initial_entries_;
  D grow_size_function_;
  D weakQ_;
} _KLsymbol_tableGVKi;


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJweak_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJsize_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLsimple_methodGVKe Kcase_insensitive_string_hashVKe;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D Kelement_range_errorVKeI (D, D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_64;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Krehash_tableVKeI (D, D, D);
D Ktry_to_puthash_newVKiI (D, D, D, D, D, D);
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsymbolGVKd KJlock_;
extern _KLsimple_methodGVKe KEEVKd;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D, D);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D, D);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
D KfullQVKiI (D);
D KmakeVKdMM33I (D, D, D, D);
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLsymbolGVKd KJtype_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
D KputhashVKiI (D, D, D);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLobject_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_with_elementsGVKeW;
extern _KLclassGVKd KLmutable_object_with_elementsGVKe;
extern _KLmm_wrapperGVKi_0 KLmutable_object_with_elementsGVKeW;
extern _KLclassGVKd KLcollectionGVKd;
extern _KLmm_wrapperGVKi_0 KLcollectionGVKdW;
extern _KLclassGVKd KLlimited_collectionGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_collectionGVKeW;
extern _KLclassGVKd KLstretchy_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLstretchy_collectionGVKdW;
extern _KLclassGVKd KLmutable_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_collectionGVKdW;
extern _KLclassGVKd KLexplicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLexplicit_key_collectionGVKdW;
extern _KLclassGVKd KLmutable_explicit_key_collectionGVKd;
extern _KLmm_wrapperGVKi_0 KLmutable_explicit_key_collectionGVKdW;
extern _KLclassGVKd KLtableGVKd;
extern _KLmm_wrapperGVKi_0 KLtableGVKdW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLinstance_slot_descriptorGVKe Ktable_vectorVKeHLtableG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
D Kinstall_and_return_make_method_init_dataVKiI (D);
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLsymbolGVKd KJkey_;
extern _KLsymbolGVKd KJelement_type_;
extern _KLsymbolGVKd KJgrow_size_function_;
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kelement_typeVKeHLlimited_collectionG;
extern _KLinstance_slot_descriptorGVKe Kinitial_entriesVKiHLtableG;
extern _KLinstance_slot_descriptorGVKe Kgrow_size_functionVKeHLtableG;
extern _KLinstance_slot_descriptorGVKe KweakQVKiHLtableG;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kinternal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kcase_insensitive_string_hash_2VKiMM1I (D, D, D);
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsimple_byte_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_byte_vectorGVKeW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLsealed_generic_functionGVKe Kcase_insensitive_string_hash_2VKi;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_4VKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern D Dlowercase_asciiVKi;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Dtable_entry_deletedVKi;
extern D Dtable_entry_emptyVKi;
extern D Dsecondary_stridesVKi;

/* Defined object declarations */

extern _KLclassGVKd KLsymbol_tableGVKi;
extern _KLmm_wrapperGVKi_0 KLsymbol_tableGVKiW;
D KPresolve_symbolVKiI (D);
D KmakeVKdMM59I (D, D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM59;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_65;
extern _KLmethod_domainGVKe Ktable_protocolVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe Ktable_protocolVKdMM2;
D Ktable_protocolVKdMM2I (D);
extern _KLsimple_methodGVKe Kcase_insensitive_string_equalVKi;
D Kcase_insensitive_string_equalVKiI (D, D);
static _KLsignatureGVKe K12;
static _KLsignatureAvaluesGVKi K13;
static _KLsimple_object_vectorGVKd_1 K14;
static _KLkeyword_signatureAvaluesGVKi K15;
static _KLsimple_object_vectorGVKd_2 K16;
static _KLsimple_object_vectorGVKd_1 K17;
static _KLsimple_object_vectorGVKd_1 K18;
static _KLsimple_object_vectorGVKd_1 K19;
static _KLsingletonGVKd K20;
D Kmake_symbolVKeMM1I (D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF35;
static D Kanonymous_of_make_symbolF35I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF33;
static D Kanonymous_of_make_symbolF33I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF30;
static D Kanonymous_of_make_symbolF30I ();
D Kcopy_byte_stringVKiMM0I (D, D, D);
D Kgethash_or_setVKiMM0I (D, D, D);
static _KLbyte_stringGVKd_31 K31;
static _KLsignatureGVKe K32;
static _KLbyte_stringGVKd_45 K34;
static _KLbyte_stringGVKd_33 K36;
extern _KLsimple_methodGVKe KPinstall_boot_symbolsVKi;
D KPinstall_boot_symbolsVKiI ();
static _KLsignatureGVKe K39;
extern _KLsimple_methodGVKe KPresolve_symbolVKi;
static _KLsignatureAvaluesGVKi K41;
static _KLimplementation_classGVKe K42;
static _KLsimple_object_vectorGVKd_5 K43;
extern _KLkeyword_methodGVKe KLsymbol_tableGZ32ZconstructorVKiMM0;
D KLsymbol_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K46;
static _KLsimple_object_vectorGVKd_11 K47;
static _KLunionGVKe K48;
static _KLunionGVKe K49;
static _KLsingletonGVKd K50;
static _KLsingletonGVKd K51;
static _KLsingletonGVKd K52;
static _KLkeyword_signatureAvaluesGVKi K53;
static _KLsimple_object_vectorGVKd_8 K54;
static _KLsimple_object_vectorGVKd_4 K55;
static _KLbyte_stringGVKd_14 K56;
extern _KLsealed_generic_functionGVKe Kmake_symbolVKe;
extern _KLkeyword_methodGVKe Kmake_symbolVKeMM0;
D Kmake_symbolVKeMM0I (D str_, D Urest_, D s_, D e_);
extern _KLkeyword_copy_down_methodGVKi Kmake_symbolVKeMM1;
extern _KLkeyword_copy_down_methodGVKi Kmake_symbolVKeMM2;
D Kmake_symbolVKeMM2I (D, D, D, D);
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLpairGVKd K65;
static _KLkeyword_signatureGVKe K66;
static _KLbyte_stringGVKd_11 K67;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF78;
static D Kanonymous_of_make_symbolF78I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF77;
static D Kanonymous_of_make_symbolF77I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF76;
static D Kanonymous_of_make_symbolF76I ();
D Kcase_insensitive_string_equal_2VKiMM1I (D, D, D, D);
D Kcopy_byte_stringVKiMM1I (D, D, D);
static _KLkeyword_signatureAvaluesGVKi K79;
static _KLsimple_object_vectorGVKd_4 K80;
static _KLsimple_object_vectorGVKd_1 K81;
static _KLsimple_object_vectorGVKd_2 K82;
static _KLkeyword_signatureAvaluesGVKi K83;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF117;
static D Kanonymous_of_make_symbolF117I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF116;
static D Kanonymous_of_make_symbolF116I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF115;
static D Kanonymous_of_make_symbolF115I ();
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K90;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K91;
extern _KLsealed_generic_functionGVKe Kcase_insensitive_string_equal_2VKi;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K93;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K94;
extern _KLsealed_generic_functionGVKe Kcopy_byte_stringVKi;
extern _KLsimple_methodGVKe Kcopy_byte_stringVKiMM0;
extern _KLsimple_methodGVKe Kcopy_byte_stringVKiMM1;
static _KLpairGVKd K98;
static _KLpairGVKd K99;
static _KLbyte_stringGVKd_16 K100;
static _KLsignatureAvaluesGVKi K101;
static _KLsimple_object_vectorGVKd_3 K102;
static _KLsignatureAvaluesGVKi K103;
static _KLsimple_object_vectorGVKd_3 K104;
extern _KLsimple_methodGVKe Kcase_insensitive_string_equal_2VKiMM0;
D Kcase_insensitive_string_equal_2VKiMM0I (D string1_, D string2_, D s2_, D e2_);
extern _KLsimple_methodGVKe Kcase_insensitive_string_equal_2VKiMM1;
static _KLpairGVKd K108;
static _KLpairGVKd K109;
static _KLbyte_stringGVKd_31 K110;
static _KLsignatureGVKe K111;
static _KLsimple_object_vectorGVKd_4 K112;
static _KLsignatureGVKe K113;
static _KLsimple_object_vectorGVKd_4 K114;
static _KLkeyword_signatureAvaluesGVKi K118;

/* Indirection variables */


/* Variables */

D make_symbolVKe = &Kmake_symbolVKe;
D Lsymbol_tableGVKi = &KLsymbol_tableGVKi;
D Tinitial_symbol_table_sizeTVKi = (D) 20481;
D TsymbolsTVKi = &KPunboundVKi;
D Presolve_symbolVKi = &KPresolve_symbolVKi;
D Pinstall_boot_symbolsVKi = &KPinstall_boot_symbolsVKi;
D Tsymbols_bootedQTVKi = &KPfalseVKi;

/* Objects */

_KLclassGVKd KLsymbol_tableGVKi = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K56,
  &K42,
  (D) 1,
  &Kinternal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLsymbol_tableGVKiW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K42,
  (D) 4097,
  21,
  33554439,
  (D) 1
};

_KLkeyword_methodGVKe KmakeVKdMM59 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K15,
  &key_mep_3,
  &KmakeVKdMM59I,
  &K16
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_65 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_64,
  &KmakeVKdMM59
};

_KLmethod_domainGVKe Ktable_protocolVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Ktable_protocolVKdMM2
};

_KLsimple_methodGVKe Ktable_protocolVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K13,
  &Ktable_protocolVKdMM2I
};

_KLsimple_methodGVKe Kcase_insensitive_string_equalVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K12,
  &Kcase_insensitive_string_equalVKiI
};

static _KLsignatureGVKe K12 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsignatureAvaluesGVKi K13 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &K14,
  &KDsignature_LfunctionG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K14 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbol_tableGVKi
};

static _KLkeyword_signatureAvaluesGVKi K15 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K17,
  &K18,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K19
};

static _KLsimple_object_vectorGVKd_2 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJname_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K20
};

static _KLsimple_object_vectorGVKd_1 K18 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJname_
};

static _KLsimple_object_vectorGVKd_1 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLsingletonGVKd K20 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsymbolGVKd
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF35 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF35I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF33 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF33I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF30 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF30I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K32 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_45 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLbyte_stringGVKd_33 K36 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

_KLsimple_methodGVKe KPinstall_boot_symbolsVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K39,
  &KPinstall_boot_symbolsVKiI
};

static _KLsignatureGVKe K39 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe KPresolve_symbolVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K41,
  &KPresolve_symbolVKiI
};

static _KLsignatureAvaluesGVKi K41 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K19,
  &K19
};

static _KLimplementation_classGVKe K42 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433749,
  &KLsymbol_tableGVKi,
  &KLsymbol_tableGVKiW,
  &KPfalseVKi,
  &K43,
  (D) 7369,
  &KLsymbol_tableGZ32ZconstructorVKiMM0,
  &K46,
  &K47,
  (D) 41,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K43,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_5 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kelement_typeVKeHLlimited_collectionG,
  &Ktable_vectorVKeHLtableG,
  &Kinitial_entriesVKiHLtableG,
  &Kgrow_size_functionVKeHLtableG,
  &KweakQVKiHLtableG
};

_KLkeyword_methodGVKe KLsymbol_tableGZ32ZconstructorVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K53,
  &key_mep_2,
  &KLsymbol_tableGZ32ZconstructorVKiMM0I,
  &K54
};

static _KLsimple_object_vectorGVKd_1 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLtableGVKd
};

static _KLsimple_object_vectorGVKd_11 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 45,
  &KLobjectGVKd,
  &KLobject_with_elementsGVKe,
  &KLmutable_object_with_elementsGVKe,
  &KLcollectionGVKd,
  &KLlimited_collectionGVKe,
  &KLstretchy_collectionGVKd,
  &KLmutable_collectionGVKd,
  &KLexplicit_key_collectionGVKd,
  &KLmutable_explicit_key_collectionGVKd,
  &KLtableGVKd,
  &KLsymbol_tableGVKi
};

static _KLunionGVKe K48 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K49,
  &K50
};

static _KLunionGVKe K49 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K51,
  &K52
};

static _KLsingletonGVKd K50 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsingletonGVKd K51 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJkey_
};

static _KLsingletonGVKd K52 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJvalue_
};

static _KLkeyword_signatureAvaluesGVKi K53 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K55,
  &KDsignature_LobjectG_typesVKi,
  &K14
};

static _KLsimple_object_vectorGVKd_8 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJelement_type_,
  &KLobjectGVKd,
  &KJsize_,
  (D) 41,
  &KJgrow_size_function_,
  &Kdefault_grow_sizeVKe,
  &KJweak_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJelement_type_,
  &KJsize_,
  &KJgrow_size_function_,
  &KJweak_
};

static _KLbyte_stringGVKd_14 K56 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "<symbol-table>"
};

_KLsealed_generic_functionGVKe Kmake_symbolVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K66,
  &KPfalseVKi,
  &K67,
  &K63,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe Kmake_symbolVKeMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K118,
  &key_mep_4,
  &Kmake_symbolVKeMM0I,
  &K80
};

_KLkeyword_copy_down_methodGVKi Kmake_symbolVKeMM1 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_4,
  &K83,
  &key_mep_4,
  &Kmake_symbolVKeMM1I,
  &K80
};

_KLkeyword_copy_down_methodGVKi Kmake_symbolVKeMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_4,
  &K79,
  &key_mep_4,
  &Kmake_symbolVKeMM2I,
  &K80
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kmake_symbolVKeMM0,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &Kmake_symbolVKeMM1,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &Kmake_symbolVKeMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K66 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_11 K67 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "make-symbol"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF78 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF78I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF77 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF77I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF76 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF76I,
  (D) 1
};

static _KLkeyword_signatureAvaluesGVKi K79 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K81,
  &K82,
  &KDsignature_LintegerG_typesVKi,
  &K19
};

static _KLsimple_object_vectorGVKd_4 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_1 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_byte_vectorGVKe
};

static _KLsimple_object_vectorGVKd_2 K82 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLkeyword_signatureAvaluesGVKi K83 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K82,
  &KDsignature_LintegerG_typesVKi,
  &K19
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF117 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF117I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF116 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF116I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_make_symbolF115 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K32,
  &Kanonymous_of_make_symbolF115I,
  (D) 1
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K90 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcase_insensitive_string_hash_2VKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K91 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 852025,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcase_insensitive_string_equal_2VKi
};

_KLsealed_generic_functionGVKe Kcase_insensitive_string_equal_2VKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &KDsignature_LobjectG_object_rest_value_4VKi,
  (D) 53,
  &K110,
  &K108,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K93 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 852025,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcase_insensitive_string_equal_2VKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K94 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kcopy_byte_stringVKi
};

_KLsealed_generic_functionGVKe Kcopy_byte_stringVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 25,
  &K100,
  &K98,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kcopy_byte_stringVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K103,
  &Kcopy_byte_stringVKiMM0I
};

_KLsimple_methodGVKe Kcopy_byte_stringVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K101,
  &Kcopy_byte_stringVKiMM1I
};

static _KLpairGVKd K98 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_byte_stringVKiMM0,
  &K99
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &Kcopy_byte_stringVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "copy-byte-string"
};

static _KLsignatureAvaluesGVKi K101 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K102,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K103 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K104,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kcase_insensitive_string_equal_2VKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K113,
  &Kcase_insensitive_string_equal_2VKiMM0I
};

_KLsimple_methodGVKe Kcase_insensitive_string_equal_2VKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K111,
  &Kcase_insensitive_string_equal_2VKiMM1I
};

static _KLpairGVKd K108 = {
  &KLpairGVKdW /* wrapper */,
  &Kcase_insensitive_string_equal_2VKiMM0,
  &K109
};

static _KLpairGVKd K109 = {
  &KLpairGVKdW /* wrapper */,
  &Kcase_insensitive_string_equal_2VKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_31 K110 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "case-insensitive-string-equal-2"
};

static _KLsignatureGVKe K111 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K112
};

static _KLsimple_object_vectorGVKd_4 K112 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_stringGVKd,
  &KLsimple_byte_vectorGVKe,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K113 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K114
};

static _KLsimple_object_vectorGVKd_4 K114 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLbyte_stringGVKd,
  &KLbyte_stringGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K118 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LsequenceG_typesVKi,
  &K82,
  &KDsignature_LintegerG_typesVKi,
  &K19
};

/* Code */

D KPresolve_symbolVKiI (D x_) {
  D T1;
  D T2_0;
  D T3;
  D T4_0;
  D T5_0;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:109
  T1 = Tsymbols_bootedQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:109
  if (T1 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:110
    T6 = SLOT_VALUE_INITD(x_, 0);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:111
    T2_0 = Kgethash_or_setVKiMM0I(TsymbolsTVKi, T6, x_);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:111
    T7_0 = T2_0;
    T5_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:113
    T3 = primitive_resolve_symbol(x_);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:113
    T4_0 = T3;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:109
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:108
  MV_SET_COUNT(1);
  return(T5_0);
}

D KmakeVKdMM59I (D class_, D Urest_, D name_) {
  D nameF4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:124
  primitive_type_check(name_, &KLbyte_stringGVKd);
  nameF4 = name_;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:126
  T5 = Tsymbols_bootedQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:126
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:127
    T9_0 = Kmake_symbolVKeMM1I(nameF4, &KPempty_vectorVKi, (D) 1, &KPunboundVKi);
    T8_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:129
    T6 = primitive_string_as_symbol(nameF4);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:129
    T7_0 = T6;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:124
  MV_SET_COUNT(1);
  return(T8_0);
}

D Ktable_protocolVKdMM2I (D table_) {
  D T2_0;
  D T2_1;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:11
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:14
  T2_0 = &Kcase_insensitive_string_equalVKi;
  T2_1 = &Kcase_insensitive_string_hashVKe;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:11
  MV_SET_ELT(1, T2_1);
  MV_SET_COUNT(2);
  return(T2_0);
}

D Kcase_insensitive_string_equalVKiI (D string1_, D string2_) {
  D T2;
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
  D T13_0;
  DWORD T14;
  D T15;
  DBCHR T16;
  D T17;
  DBCHR T18;
  D T19_0;
  DWORD T20;
  D T21;
  DBCHR T22;
  D T23;
  DBCHR T24;
  D T25;
  DWORD T26;
  DWORD T27;
  DBCHR T28;
  D T29;
  DSINT T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DBCHR T34;
  D T35;
  DSINT T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  DWORD iF41T, iF41;
  D T42;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:22
  T2 = SLOT_VALUE_INITD(string2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
  T5 = SLOT_VALUE_INITD(string1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
  T6 = primitive_idQ(T5,T2);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
    iF41T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
      iF41 = iF41T;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
      T42 = primitive_cast_raw_as_integer(iF41);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
      T12 = primitive_idQ(T42,T2);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T7 = T12;
        MV_SET_ELT(0, T12);
        MV_SET_COUNT(1);
        T11 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T14 = primitive_cast_integer_as_raw(T5);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T15 = primitive_machine_word_unsigned_less_thanQ(iF41,T14);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        if (T15 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T16 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string1_, 1, iF41);
          T18 = T16;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T13_0 = Kelement_range_errorVKeI(string1_, T42);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T17 = T13_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T30 = primitive_byte_character_as_raw(T17);
          T18 = T30;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T31 = primitive_raw_as_byte_character(T18);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T20 = primitive_cast_integer_as_raw(T2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T21 = primitive_machine_word_unsigned_less_thanQ(iF41,T20);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        if (T21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T22 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string2_, 1, iF41);
          T24 = T22;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T19_0 = Kelement_range_errorVKeI(string2_, T42);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T23 = T19_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T36 = primitive_byte_character_as_raw(T23);
          T24 = T36;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T37 = primitive_raw_as_byte_character(T24);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T25 = primitive_idQ(T31,T37);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        if (T25 != &KPfalseVKi) {
          T8 = T25;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T26 = primitive_machine_word_shift_left_signal_overflow(T18,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T27 = primitive_machine_word_logior(T26,1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T28 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T27);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T29 = primitive_raw_as_byte_character(T28);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T32 = primitive_machine_word_shift_left_signal_overflow(T24,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T33 = primitive_machine_word_logior(T32,1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T34 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T33);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T35 = primitive_raw_as_byte_character(T34);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T38 = primitive_idQ(T29,T35);
          T8 = T38;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        if (T8 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T39 = primitive_machine_word_add_signal_overflow(iF41,4);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          iF41T = T39;
          goto L0;
          T10 = T40;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
          T9 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T10 = T9;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
        T11 = T10;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
    T4 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
    T3 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:19
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:17
  return(T4);
}

D Kmake_symbolVKeMM1I (D str_, D Urest_, D s_, D e_) {
  D sF5;
  D T6;
  DWORD eF7;
  D T8_0;
  D T9;
  D T10;
  D UtmpF11;
  D fkeyF12;
  D T13;
  D T14;
  D T15_0;
  D T15_1;
  D indexF16;
  D fkeyF17;
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
  DWORD rmremainderF33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  DADDR T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45_0;
  D T45_1;
  D T46_0;
  DWORD T47;
  D T48;
  D T49_0;
  D stride_;
  D UtmpF51;
  D fkeyF52;
  D T53;
  D T54;
  D T55_0;
  D T55_1;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  D T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DADDR T63;
  D T64;
  D T65;
  D T66;
  D T67;
  D T68;
  D T69_0;
  D T69_1;
  D T70_0;
  D T70_1;
  DWORD previous_indexF71T, previous_indexF71;
  D T72;
  DADDR T73;
  D T74;
  D T75;
  DWORD T76;
  D T77;
  D T78;
  D T79;
  D T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94_0;
  D T95;
  D T96;
  D T97;
  D T98;
  D T99;
  D T100;
  D T101;
  D T102;
  D T103;
  D T104_0;
  D T105;
  D T106;
  D T107;
  D T108_0;
  D T109;
  D T110;
  D T111;
  D T112;
  D T113;
  D T114;
  D res_;
  D T116;
  D T117;
  D T118;
  D T119;
  D T120;
  D T121;
  D T122_0;
  D T123;
  D T124;
  D T125;
  D T126;
  _KLsimple_object_vectorGVKd_2 T127 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T128;
  D T129;
  D T130;
  D T131;
  D T132;
  D T133;
  D T134;
  DSINT T135;
  DWORD T136;
  DWORD T137;
  D T138;
  D T139;
  D T140;
  D first_attemptQF141T, first_attemptQF141;
  D T142;
  D T143;
  D T144;
  DWORD T145;
  DWORD T146;
  DWORD T147;
  DWORD T148;
  D T149_0;
  D T150;
  D T151_0;
  D T152;
  DWORD T153;
  D T154;
  D T155;
  DWORD iF156T, iF156;
  DWORD hash_T, hash_;
  D T158;
  DWORD T159;
  D T160;
  DWORD T161;
  D shiftF162;
  D T163;
  D T164;
  D T165;
  DWORD mx_;
  DWORD T167;
  DWORD T168;
  DWORD T169;
  DWORD T170;
  D T171;
  DWORD T172;
  DWORD T173;
  DWORD T174;
  DWORD T175;
  DWORD T176;
  DWORD T177;
  DWORD T178;
  D T179_0;
  D T180;
  DWORD T181;
  D T182;
  DBCHR T183;
  D T184;
  DBCHR T185;
  DWORD T186;
  DWORD T187;
  DSINT T188;
  DWORD T189;
  DWORD T190;
  DWORD T191;
  DWORD rmremainderF192;
  DWORD T193;
  DWORD T194;
  DWORD T195;
  DWORD T196;
  DWORD T197;
  D T198;
  D T199;
  DWORD T200;
  DWORD T201;
  DWORD T202;
  D T203;
  D T204;
  D T205;
  D T206;
  DWORD T207;
  D T208;
  D T209_0;
  DWORD T210;
  D T211;
  DBCHR T212;
  D T213;
  DBCHR T214;
  D T215_0;
  D T216;
  DWORD T217;
  D T218;
  DBCHR T219;
  D T220;
  DBCHR T221;
  D T222;
  DWORD T223;
  DWORD T224;
  DBCHR T225;
  D T226;
  DSINT T227;
  D T228;
  DWORD T229;
  DWORD T230;
  DBCHR T231;
  D T232;
  DSINT T233;
  D T234;
  D T235;
  DWORD T236;
  D T237;
  DWORD iF238T, iF238;
  D T239;
  D T240;
  D T241;
  D T242;
  D T243;
  D T244;
  DWORD T245;
  DWORD T246;
  DWORD T247;
  D T248;
  D T249;
  D T250;
  D T251;
  DWORD T252;
  D T253;
  D T254_0;
  DWORD T255;
  D T256;
  DBCHR T257;
  D T258;
  DBCHR T259;
  D T260_0;
  D T261;
  DWORD T262;
  D T263;
  DBCHR T264;
  D T265;
  DBCHR T266;
  D T267;
  DWORD T268;
  DWORD T269;
  DBCHR T270;
  D T271;
  DSINT T272;
  D T273;
  DWORD T274;
  DWORD T275;
  DBCHR T276;
  D T277;
  DSINT T278;
  D T279;
  D T280;
  DWORD T281;
  D T282;
  DWORD iF283T, iF283;
  D T284;
  D T285;
  D T286;
  D T287;
  D T288;
  D name_;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:186
  primitive_type_check(s_, &KLintegerGVKd);
  sF5 = s_;
  T9 = primitive_idQ(e_,&KPunboundVKi);
  if (T9 != &KPfalseVKi) {
    T155 = SLOT_VALUE_INITD(str_, 0);
    T6 = T155;
    T196 = primitive_cast_integer_as_raw(T6);
    eF7 = T196;
  } else {
    primitive_type_check(e_, &KLintegerGVKd);
    T10 = e_;
    T197 = primitive_cast_integer_as_raw(T10);
    eF7 = T197;
  }
  T198 = primitive_cast_raw_as_integer(eF7);
  first_attemptQF141T = &KPtrueVKi;
L0: ;
    first_attemptQF141 = first_attemptQF141T;
    T29 = SLOT_VALUE_INITD(TsymbolsTVKi, 1);
    T30 = SLOT_VALUE_INITD(T29, 3);
    T159 = primitive_cast_integer_as_raw(sF5);
    iF156T = T159;
    hash_T = 1;
  L1: ;
      iF156 = iF156T;
      T160 = primitive_cast_raw_as_integer(iF156);
      hash_ = hash_T;
      T158 = primitive_machine_word_less_thanQ(iF156,eF7);
      if (T158 != &KPfalseVKi) {
        T161 = primitive_machine_word_add_signal_overflow(iF156,4);
        shiftF162 = (D) 25;
        T169 = primitive_machine_word_logxor(hash_,1);
        mx_ = T169;
        T165 = shiftF162;
        T170 = primitive_cast_integer_as_raw(T165);
        T171 = primitive_machine_word_equalQ(T170,257);
        if (T171 != &KPfalseVKi) {
          shiftF162 = (D) 129;
          T164 = shiftF162;
          T168 = mx_;
          T174 = primitive_cast_integer_as_raw(T164);
          T173 = primitive_machine_word_shift_right(T174,2);
          T172 = primitive_machine_word_shift_left_signal_overflow(T168,T173);
          mx_ = T172;
        }
        T163 = shiftF162;
        T167 = mx_;
        T177 = primitive_cast_integer_as_raw(T163);
        T176 = primitive_machine_word_shift_right(T177,2);
        T175 = primitive_machine_word_shift_left_signal_overflow(T167,T176);
        T178 = primitive_machine_word_logior(T175,1);
        T180 = SLOT_VALUE_INITD(str_, 0);
        T181 = primitive_cast_integer_as_raw(T180);
        T182 = primitive_machine_word_unsigned_less_thanQ(iF156,T181);
        if (T182 != &KPfalseVKi) {
          T183 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(str_, 1, iF156);
          T185 = T183;
        } else {
          T179_0 = Kelement_range_errorVKeI(str_, T160);
          T184 = T179_0;
          T188 = primitive_byte_character_as_raw(T184);
          T185 = T188;
        }
        T186 = primitive_machine_word_shift_left_signal_overflow(T185,2);
        T187 = primitive_machine_word_logior(T186,1);
        T189 = primitive_machine_word_logand(T187,637);
        T190 = primitive_machine_word_logxor(T189,1);
        T191 = primitive_machine_word_add_signal_overflow(T178,T190);
        T193 = primitive_machine_word_shift_right(T191,2);
        rmremainderF192 = primitive_machine_word_floorS_remainder(T193,970747);
        T194 = primitive_machine_word_shift_left_signal_overflow(rmremainderF192,2);
        T195 = primitive_machine_word_logior(T194,1);
        iF156T = T161;
        hash_T = T195;
        goto L1;
      }
    T31 = SLOT_VALUE_INITD(T29, 8);
    T32 = SLOT_VALUE_INITD(T31, 1);
    T34 = primitive_machine_word_shift_right(hash_,2);
    T36 = primitive_cast_integer_as_raw(T32);
    T35 = primitive_machine_word_shift_right(T36,2);
    rmremainderF33 = primitive_machine_word_floorS_remainder(T34,T35);
    T37 = primitive_machine_word_shift_left_signal_overflow(rmremainderF33,2);
    T38 = primitive_machine_word_logior(T37,1);
    T39 = primitive_cast_raw_as_integer(T38);
    T42 = REPEATED_D_SLOT_VALUE_TAGGED(T31, 2, T38);
    T40 = primitive_cast_pointer_as_raw(T42);
    T41 = primitive_machine_word_equalQ(T40,0);
    if (T41 != &KPfalseVKi) {
      T43 = Dtable_entry_deletedVKi;
    } else {
      T43 = T42;
    }
    UtmpF11 = primitive_idQ(T43,Dtable_entry_emptyVKi);
    if (UtmpF11 != &KPfalseVKi) {
      T14 = UtmpF11;
    } else {
      T44 = primitive_idQ(T43,Dtable_entry_deletedVKi);
      if (T44 != &KPfalseVKi) {
        T13 = &KPfalseVKi;
      } else {
        fkeyF12 = T43;
        T199 = SLOT_VALUE_INITD(fkeyF12, 0);
        T200 = primitive_cast_integer_as_raw(sF5);
        T201 = primitive_machine_word_logxor(T200,1);
        T202 = primitive_machine_word_subtract_signal_overflow(eF7,T201);
        T203 = primitive_cast_raw_as_integer(T202);
        T204 = primitive_idQ(T199,T203);
        if (T204 != &KPfalseVKi) {
          iF238T = T200;
        L2: ;
            iF238 = iF238T;
            T239 = primitive_cast_raw_as_integer(iF238);
            T206 = primitive_idQ(T239,T198);
            if (T206 != &KPfalseVKi) {
              T242 = T206;
            } else {
              T207 = primitive_machine_word_subtract_signal_overflow(iF238,T201);
              T208 = primitive_cast_raw_as_integer(T207);
              T210 = primitive_cast_integer_as_raw(T199);
              T211 = primitive_machine_word_unsigned_less_thanQ(T207,T210);
              if (T211 != &KPfalseVKi) {
                T212 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(fkeyF12, 1, T207);
                T214 = T212;
              } else {
                T209_0 = Kelement_range_errorVKeI(fkeyF12, T208);
                T213 = T209_0;
                T227 = primitive_byte_character_as_raw(T213);
                T214 = T227;
              }
              T228 = primitive_raw_as_byte_character(T214);
              T216 = SLOT_VALUE_INITD(str_, 0);
              T217 = primitive_cast_integer_as_raw(T216);
              T218 = primitive_machine_word_unsigned_less_thanQ(iF238,T217);
              if (T218 != &KPfalseVKi) {
                T219 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(str_, 1, iF238);
                T221 = T219;
              } else {
                T215_0 = Kelement_range_errorVKeI(str_, T239);
                T220 = T215_0;
                T233 = primitive_byte_character_as_raw(T220);
                T221 = T233;
              }
              T234 = primitive_raw_as_byte_character(T221);
              T222 = primitive_idQ(T228,T234);
              if (T222 != &KPfalseVKi) {
                T205 = T222;
              } else {
                T223 = primitive_machine_word_shift_left_signal_overflow(T214,2);
                T224 = primitive_machine_word_logior(T223,1);
                T225 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T224);
                T226 = primitive_raw_as_byte_character(T225);
                T229 = primitive_machine_word_shift_left_signal_overflow(T221,2);
                T230 = primitive_machine_word_logior(T229,1);
                T231 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T230);
                T232 = primitive_raw_as_byte_character(T231);
                T235 = primitive_idQ(T226,T232);
                T205 = T235;
              }
              if (T205 != &KPfalseVKi) {
                T236 = primitive_machine_word_add_signal_overflow(iF238,4);
                iF238T = T236;
                goto L2;
                T240 = T237;
                T241 = T240;
              } else {
                T241 = &KPfalseVKi;
              }
              T242 = T241;
            }
          T243 = T242;
        } else {
          T243 = &KPfalseVKi;
        }
        T13 = T243;
      }
      T14 = T13;
    }
    if (T14 != &KPfalseVKi) {
      T45_0 = T39;
      T45_1 = T43;
      T15_0 = T45_0;
      T15_1 = T45_1;
    } else {
      T47 = primitive_machine_word_logand(hash_,29);
      T48 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T47);
      T49_0 = T48;
      T46_0 = T49_0;
      stride_ = T46_0;
      T56 = primitive_cast_integer_as_raw(stride_);
      T57 = primitive_machine_word_logxor(T56,1);
      T60 = primitive_machine_word_logxor(T36,1);
      previous_indexF71T = T38;
    L3: ;
        previous_indexF71 = previous_indexF71T;
        T58 = primitive_machine_word_subtract_signal_overflow(previous_indexF71,T57);
        T59 = primitive_machine_word_less_thanQ(T58,1);
        if (T59 != &KPfalseVKi) {
          T61 = primitive_machine_word_add_signal_overflow(T58,T60);
          T62 = T61;
        } else {
          T62 = T58;
        }
        T67 = primitive_cast_raw_as_integer(T62);
        T65 = REPEATED_D_SLOT_VALUE_TAGGED(T31, 2, T62);
        T63 = primitive_cast_pointer_as_raw(T65);
        T64 = primitive_machine_word_equalQ(T63,0);
        if (T64 != &KPfalseVKi) {
          T66 = Dtable_entry_deletedVKi;
        } else {
          T66 = T65;
        }
        UtmpF51 = primitive_idQ(T66,Dtable_entry_emptyVKi);
        if (UtmpF51 != &KPfalseVKi) {
          T54 = UtmpF51;
        } else {
          T68 = primitive_idQ(T66,Dtable_entry_deletedVKi);
          if (T68 != &KPfalseVKi) {
            T53 = &KPfalseVKi;
          } else {
            fkeyF52 = T66;
            T244 = SLOT_VALUE_INITD(fkeyF52, 0);
            T245 = primitive_cast_integer_as_raw(sF5);
            T246 = primitive_machine_word_logxor(T245,1);
            T247 = primitive_machine_word_subtract_signal_overflow(eF7,T246);
            T248 = primitive_cast_raw_as_integer(T247);
            T249 = primitive_idQ(T244,T248);
            if (T249 != &KPfalseVKi) {
              iF283T = T245;
            L4: ;
                iF283 = iF283T;
                T284 = primitive_cast_raw_as_integer(iF283);
                T251 = primitive_idQ(T284,T198);
                if (T251 != &KPfalseVKi) {
                  T287 = T251;
                } else {
                  T252 = primitive_machine_word_subtract_signal_overflow(iF283,T246);
                  T253 = primitive_cast_raw_as_integer(T252);
                  T255 = primitive_cast_integer_as_raw(T244);
                  T256 = primitive_machine_word_unsigned_less_thanQ(T252,T255);
                  if (T256 != &KPfalseVKi) {
                    T257 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(fkeyF52, 1, T252);
                    T259 = T257;
                  } else {
                    T254_0 = Kelement_range_errorVKeI(fkeyF52, T253);
                    T258 = T254_0;
                    T272 = primitive_byte_character_as_raw(T258);
                    T259 = T272;
                  }
                  T273 = primitive_raw_as_byte_character(T259);
                  T261 = SLOT_VALUE_INITD(str_, 0);
                  T262 = primitive_cast_integer_as_raw(T261);
                  T263 = primitive_machine_word_unsigned_less_thanQ(iF283,T262);
                  if (T263 != &KPfalseVKi) {
                    T264 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(str_, 1, iF283);
                    T266 = T264;
                  } else {
                    T260_0 = Kelement_range_errorVKeI(str_, T284);
                    T265 = T260_0;
                    T278 = primitive_byte_character_as_raw(T265);
                    T266 = T278;
                  }
                  T279 = primitive_raw_as_byte_character(T266);
                  T267 = primitive_idQ(T273,T279);
                  if (T267 != &KPfalseVKi) {
                    T250 = T267;
                  } else {
                    T268 = primitive_machine_word_shift_left_signal_overflow(T259,2);
                    T269 = primitive_machine_word_logior(T268,1);
                    T270 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T269);
                    T271 = primitive_raw_as_byte_character(T270);
                    T274 = primitive_machine_word_shift_left_signal_overflow(T266,2);
                    T275 = primitive_machine_word_logior(T274,1);
                    T276 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T275);
                    T277 = primitive_raw_as_byte_character(T276);
                    T280 = primitive_idQ(T271,T277);
                    T250 = T280;
                  }
                  if (T250 != &KPfalseVKi) {
                    T281 = primitive_machine_word_add_signal_overflow(iF283,4);
                    iF283T = T281;
                    goto L4;
                    T285 = T282;
                    T286 = T285;
                  } else {
                    T286 = &KPfalseVKi;
                  }
                  T287 = T286;
                }
              T288 = T287;
            } else {
              T288 = &KPfalseVKi;
            }
            T53 = T288;
          }
          T54 = T53;
        }
        if (T54 != &KPfalseVKi) {
          T69_0 = T67;
          T69_1 = T66;
          T55_0 = T69_0;
          T55_1 = T69_1;
        } else {
          previous_indexF71T = T62;
          goto L3;
          T55_0 = T70_0;
          T55_1 = T70_1;
        }
      T15_0 = T55_0;
      T15_1 = T55_1;
    }
    indexF16 = T15_0;
    fkeyF17 = T15_1;
    T72 = SLOT_VALUE_INITD(T29, 9);
    T18 = primitive_idQ(fkeyF17,Dtable_entry_emptyVKi);
    if (T18 != &KPfalseVKi) {
      T130 = SLOT_VALUE_INITD(T30, 0);
      if (T130 != &KPfalseVKi) {
        T132 = &KPfalseVKi;
      } else {
        T131 = SLOT_VALUE_INITD(T29, 3);
        T129 = primitive_idQ(T30,T131);
        T132 = T129;
      }
      T133 = primitive_not(T132);
      if (T132 != &KPfalseVKi) {
        T134 = SLOT_VALUE_INITD(T29, 7);
        T135 = primitive_mps_ld_isstale(T134);
        T136 = primitive_machine_word_shift_left_signal_overflow(T135,2);
        T137 = primitive_machine_word_logior(T136,1);
        T138 = primitive_machine_word_less_thanQ(1,T137);
        T139 = T138;
      } else {
        T139 = T133;
      }
      if (T139 != &KPfalseVKi) {
        Krehash_tableVKeI(TsymbolsTVKi, T29, &KPfalseVKi);
        first_attemptQF141T = &KPfalseVKi;
        goto L0;
        T27 = T140;
      } else {
        name_ = Kcopy_byte_stringVKiMM0I(str_, sF5, T198);
        T142 = SLOT_VALUE(&KLsymbolGVKd, 2);
        T144 = SLOT_VALUE_INITD(T142, 0);
        T145 = primitive_cast_integer_as_raw(T144);
        T146 = primitive_machine_word_logand(T145,262140);
        T147 = primitive_machine_word_add_signal_overflow(5,T146);
        T148 = primitive_machine_word_shift_right(T147,2);
        T150 = SLOT_VALUE_INITD(T142, 2);
        T151_0 = T150;
        T149_0 = T151_0;
        T152 = T149_0;
        T153 = primitive_machine_word_shift_right(T146,2);
        T143 = primitive_object_allocate_filled(T148,T152,T153,name_,0,0,name_);
        T154 = SLOT_VALUE_INITD(T29, 7);
        T23 = Ktry_to_puthash_newVKiI(T29, T30, T154, indexF16, name_, T143);
        if (T23 != &KPfalseVKi) {
          T24 = T143;
          MV_SET_ELT(0, T143);
          MV_SET_COUNT(1);
          T26 = T24;
        } else {
          T25 = Kgethash_or_setVKiMM0I(TsymbolsTVKi, name_, T143);
          T26 = T25;
        }
        T27 = T26;
      }
      T28 = T27;
    } else {
      T76 = primitive_cast_integer_as_raw(indexF16);
      T75 = REPEATED_D_SLOT_VALUE_TAGGED(T72, 2, T76);
      T73 = primitive_cast_pointer_as_raw(T75);
      T74 = primitive_machine_word_equalQ(T73,0);
      if (T74 != &KPfalseVKi) {
        T77 = Dtable_entry_deletedVKi;
      } else {
        T77 = T75;
      }
      T79 = SLOT_VALUE_INITD(T30, 0);
      if (T79 != &KPfalseVKi) {
        T81 = &KPfalseVKi;
      } else {
        T80 = SLOT_VALUE_INITD(T29, 3);
        T78 = primitive_idQ(T30,T80);
        T81 = T78;
      }
      if (T81 != &KPfalseVKi) {
        T82 = primitive_idQ(T77,Dtable_entry_deletedVKi);
        T83 = primitive_not(T82);
        T19 = T83;
      } else {
        T19 = &KPfalseVKi;
      }
      if (T19 != &KPfalseVKi) {
        T20 = T77;
        MV_SET_ELT(0, T77);
        MV_SET_COUNT(1);
        T22 = T20;
      } else {
        T84 = SLOT_VALUE_INITD(T29, 0);
        T89 = TdebuggingQTVKi;
        if (T89 != &KPfalseVKi) {
          T90 = Tdebug_partsTVKi;
          T91 = primitive_idQ(T90,&KPempty_listVKi);
          T92 = primitive_not(T91);
          T88 = T92;
        } else {
          T88 = &KPfalseVKi;
        }
        if (T88 != &KPfalseVKi) {
          T93 = Tdebug_partsTVKi;
          T94_0 = KmemberQVKdMM3I(&KJlock_, T93, &KPempty_vectorVKi, &KEEVKd);
          T95 = T94_0;
          T96 = T95;
        } else {
          T96 = &KPfalseVKi;
        }
        if (T96 != &KPfalseVKi) {
          T97 = Tdebug_out_functionTVKi;
          T85 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF35, 1, T84);
          CALL1(T97, T85);
        }
        T86 = primitive_wait_for_simple_lock(T84);
        T99 = TdebuggingQTVKi;
        if (T99 != &KPfalseVKi) {
          T100 = Tdebug_partsTVKi;
          T101 = primitive_idQ(T100,&KPempty_listVKi);
          T102 = primitive_not(T101);
          T98 = T102;
        } else {
          T98 = &KPfalseVKi;
        }
        if (T98 != &KPfalseVKi) {
          T103 = Tdebug_partsTVKi;
          T104_0 = KmemberQVKdMM3I(&KJlock_, T103, &KPempty_vectorVKi, &KEEVKd);
          T105 = T104_0;
          T106 = T105;
        } else {
          T106 = &KPfalseVKi;
        }
        if (T106 != &KPfalseVKi) {
          T107 = Tdebug_out_functionTVKi;
          T87 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF33, 2, T86, T84);
          CALL1(T107, T87);
        }
        T109 = primitive_idQ(T86,(D) 1);
        if (T109 != &KPfalseVKi) {
          T113 = &KPtrueVKi;
        } else {
          T110 = primitive_idQ(T86,(D) 5);
          if (T110 != &KPfalseVKi) {
            T112 = &KPfalseVKi;
          } else {
            T108_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T84, T86);
            T111 = T108_0;
            T112 = T111;
          }
          T113 = T112;
        }
        if (T113 != &KPfalseVKi) {
          T117 = TdebuggingQTVKi;
          if (T117 != &KPfalseVKi) {
            T118 = Tdebug_partsTVKi;
            T119 = primitive_idQ(T118,&KPempty_listVKi);
            T120 = primitive_not(T119);
            T116 = T120;
          } else {
            T116 = &KPfalseVKi;
          }
          if (T116 != &KPfalseVKi) {
            T121 = Tdebug_partsTVKi;
            T122_0 = KmemberQVKdMM3I(&KJlock_, T121, &KPempty_vectorVKi, &KEEVKd);
            T123 = T122_0;
            T124 = T123;
          } else {
            T124 = &KPfalseVKi;
          }
          if (T124 != &KPfalseVKi) {
            T125 = Tdebug_out_functionTVKi;
            T114 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF30, 1, T84);
            CALL1(T125, T114);
          }
          res_ = primitive_release_simple_lock(T84);
          T126 = primitive_idQ(res_,(D) 1);
          if (T126 == &KPfalseVKi) {
            Klock_release_result_errorYthreads_internalVdylanMM0I(T84, res_);
          }
        } else {
          T127.vector_element_[0] = &KJsynchronization_;
          T127.vector_element_[1] = T84;
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T21 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T127);
          KsignalVKdMM0I(T21, &KPempty_vectorVKi);
        }
        first_attemptQF141T = &KPfalseVKi;
        goto L0;
        T22 = T128;
      }
      T28 = T22;
    }
  T8_0 = T28;
  MV_SET_COUNT(1);
  return(T8_0);
}

static D Kanonymous_of_make_symbolF35I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  T0 = Kcurrent_threadYthreadsVdylanI();
  T2 = SLOT_VALUE_INITD(T0, 3);
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    T3 = T1_0;
    T4 = T3;
  }
  T5.vector_element_[0] = &K36;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  T7 = primitive_copy_vector(&T5);
  T6_0 = T7;
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_make_symbolF33I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  T0 = Kcurrent_threadYthreadsVdylanI();
  T2 = SLOT_VALUE_INITD(T0, 3);
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    T3 = T1_0;
    T4 = T3;
  }
  T5.vector_element_[0] = &K34;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  T7 = primitive_copy_vector(&T5);
  T6_0 = T7;
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_make_symbolF30I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  T0 = Kcurrent_threadYthreadsVdylanI();
  T2 = SLOT_VALUE_INITD(T0, 3);
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    T3 = T1_0;
    T4 = T3;
  }
  T5.vector_element_[0] = &K31;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  T7 = primitive_copy_vector(&T5);
  T6_0 = T7;
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcopy_byte_stringVKiMM0I (D src_, D s_, D e_) {
  DSINT T4;
  D T5_0;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:196
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:199
  T6 = primitive_cast_integer_as_raw(e_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:199
  T7 = primitive_cast_integer_as_raw(s_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:199
  T8 = primitive_machine_word_logxor(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:199
  T9 = primitive_machine_word_subtract_signal_overflow(T6,T8);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:199
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:200
  T11 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T10);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:202
  T4 = primitive_repeated_slot_offset(T11);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:203
  T12 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:204
  T13 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:201
  primitive_replace_bytesX(T11,T4,0,src_,2,T12,T13);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:205
  T5_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:196
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kgethash_or_setVKiMM0I (D table_, D key_, D new_value_) {
  D UtmpF4;
  D fkeyF5;
  D T6;
  D T7;
  D T8_0;
  D T8_1;
  D indexF9;
  D fkeyF10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D T14_1;
  D successQ_;
  D valueF16;
  D T17_0;
  D T18;
  D T19;
  D T20_0;
  D T21;
  D T22;
  D T23;
  DWORD iF24T, iF24;
  DWORD hash_T, hash_;
  DWORD T26;
  D T27;
  D T28;
  DWORD T29;
  D shiftF30;
  D T31;
  D T32;
  D T33;
  DWORD mx_;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  D T47_0;
  D T48;
  DBCHR T49;
  D T50;
  DBCHR T51;
  DWORD T52;
  DWORD T53;
  DSINT T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  DWORD rmremainderF58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  D T62;
  D T63;
  DWORD rmremainderF64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  DWORD T69;
  D T70;
  DADDR T71;
  D T72;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;
  D T79;
  D T80_0;
  DWORD T81;
  D T82;
  DBCHR T83;
  D T84;
  DBCHR T85;
  D T86_0;
  DWORD T87;
  D T88;
  DBCHR T89;
  D T90;
  DBCHR T91;
  D T92;
  DWORD T93;
  DWORD T94;
  DBCHR T95;
  D T96;
  DSINT T97;
  D T98;
  DWORD T99;
  DWORD T100;
  DBCHR T101;
  D T102;
  DSINT T103;
  D T104;
  D T105;
  DWORD T106;
  D T107;
  DWORD iF108T, iF108;
  D T109;
  D T110;
  D T111;
  D T112;
  D T113;
  D T114_0;
  D T114_1;
  D T115_0;
  DWORD T116;
  D T117;
  D T118_0;
  D stride_;
  D UtmpF120;
  D fkeyF121;
  D T122;
  D T123;
  D T124_0;
  D T124_1;
  DWORD T125;
  DWORD T126;
  DWORD T127;
  D T128;
  DWORD T129;
  DWORD T130;
  DWORD T131;
  DADDR T132;
  D T133;
  D T134;
  D T135;
  D T136;
  D T137;
  D T138;
  D T139;
  D T140;
  D T141;
  D T142_0;
  DWORD T143;
  D T144;
  DBCHR T145;
  D T146;
  DBCHR T147;
  D T148_0;
  DWORD T149;
  D T150;
  DBCHR T151;
  D T152;
  DBCHR T153;
  D T154;
  DWORD T155;
  DWORD T156;
  DBCHR T157;
  D T158;
  DSINT T159;
  D T160;
  DWORD T161;
  DWORD T162;
  DBCHR T163;
  D T164;
  DSINT T165;
  D T166;
  D T167;
  DWORD T168;
  D T169;
  DWORD iF170T, iF170;
  D T171;
  D T172;
  D T173;
  D T174;
  D T175;
  D T176_0;
  D T176_1;
  D T177_0;
  D T177_1;
  DWORD previous_indexF178T, previous_indexF178;
  D T179;
  DADDR T180;
  D T181;
  D T182;
  DWORD T183;
  D T184;
  D T185;
  D T186;
  D T187;
  D T188;
  D T189;
  D T190;
  D T191_0;
  D T191_1;
  D T192;
  D T193_0;
  D T193_1;
  D T194;
  D T195;
  D T196;
  D T197;
  D T198;
  D T199;
  DSINT T200;
  DWORD T201;
  DWORD T202;
  D T203;
  D T204;
  D T205_0;
  D tableF206T, tableF206;
  D T207;
  D keyF208T, keyF208;
  D T209;
  D new_valueF210T, new_valueF210;
  D T211;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:64
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
  tableF206T = table_;
  keyF208T = key_;
  new_valueF210T = new_value_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
    tableF206 = tableF206T;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
    T207 = tableF206;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
    keyF208 = keyF208T;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
    T209 = keyF208;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
    new_valueF210 = new_valueF210T;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
    T211 = new_valueF210;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:66
    T21 = SLOT_VALUE_INITD(T209, 0);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:67
    T22 = SLOT_VALUE_INITD(T207, 1);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:68
    T23 = SLOT_VALUE_INITD(T22, 3);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
    iF24T = 1;
    hash_T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
      iF24 = iF24T;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
      T28 = primitive_cast_raw_as_integer(iF24);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
      hash_ = hash_T;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
      T26 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
      T27 = primitive_machine_word_less_thanQ(iF24,T26);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T29 = primitive_machine_word_add_signal_overflow(iF24,4);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        shiftF30 = (D) 25;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T37 = primitive_machine_word_logxor(hash_,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        mx_ = T37;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T33 = shiftF30;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T38 = primitive_cast_integer_as_raw(T33);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T39 = primitive_machine_word_equalQ(T38,257);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        if (T39 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          shiftF30 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T32 = shiftF30;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T36 = mx_;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T42 = primitive_cast_integer_as_raw(T32);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T41 = primitive_machine_word_shift_right(T42,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T40 = primitive_machine_word_shift_left_signal_overflow(T36,T41);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          mx_ = T40;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T31 = shiftF30;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T35 = mx_;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T45 = primitive_cast_integer_as_raw(T31);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T44 = primitive_machine_word_shift_right(T45,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T43 = primitive_machine_word_shift_left_signal_overflow(T35,T44);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T46 = primitive_machine_word_logior(T43,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T48 = primitive_machine_word_unsigned_less_thanQ(iF24,T26);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        if (T48 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T49 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T209, 1, iF24);
          T51 = T49;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T47_0 = Kelement_range_errorVKeI(T209, T28);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T50 = T47_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
          T54 = primitive_byte_character_as_raw(T50);
          T51 = T54;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T52 = primitive_machine_word_shift_left_signal_overflow(T51,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T53 = primitive_machine_word_logior(T52,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T55 = primitive_machine_word_logand(T53,637);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T56 = primitive_machine_word_logxor(T55,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T57 = primitive_machine_word_add_signal_overflow(T46,T56);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T59 = primitive_machine_word_shift_right(T57,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        rmremainderF58 = primitive_machine_word_floorS_remainder(T59,970747);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T60 = primitive_machine_word_shift_left_signal_overflow(rmremainderF58,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        T61 = primitive_machine_word_logior(T60,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
        iF24T = T29;
        hash_T = T61;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:73
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T62 = SLOT_VALUE_INITD(T22, 8);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T63 = SLOT_VALUE_INITD(T62, 1);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T65 = primitive_machine_word_shift_right(hash_,2);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T67 = primitive_cast_integer_as_raw(T63);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T66 = primitive_machine_word_shift_right(T67,2);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    rmremainderF64 = primitive_machine_word_floorS_remainder(T65,T66);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T68 = primitive_machine_word_shift_left_signal_overflow(rmremainderF64,2);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T69 = primitive_machine_word_logior(T68,1);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T70 = primitive_cast_raw_as_integer(T69);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T73 = REPEATED_D_SLOT_VALUE_TAGGED(T62, 2, T69);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T71 = primitive_cast_pointer_as_raw(T73);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    T72 = primitive_machine_word_equalQ(T71,0);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    if (T72 != &KPfalseVKi) {
      T74 = Dtable_entry_deletedVKi;
    } else {
      T74 = T73;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    UtmpF4 = primitive_idQ(T74,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    if (UtmpF4 != &KPfalseVKi) {
      T7 = UtmpF4;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T75 = primitive_idQ(T74,Dtable_entry_deletedVKi);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      if (T75 != &KPfalseVKi) {
        T6 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:75
        fkeyF5 = T74;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
        T76 = SLOT_VALUE_INITD(fkeyF5, 0);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
        T77 = primitive_idQ(T76,T21);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
        if (T77 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
          iF108T = 1;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            iF108 = iF108T;
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            T109 = primitive_cast_raw_as_integer(iF108);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            T79 = primitive_idQ(T109,T21);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            if (T79 != &KPfalseVKi) {
              T112 = T79;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T81 = primitive_cast_integer_as_raw(T76);
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T82 = primitive_machine_word_unsigned_less_thanQ(iF108,T81);
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              if (T82 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T83 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(fkeyF5, 1, iF108);
                T85 = T83;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T80_0 = Kelement_range_errorVKeI(fkeyF5, T109);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T84 = T80_0;
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T97 = primitive_byte_character_as_raw(T84);
                T85 = T97;
              }
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T98 = primitive_raw_as_byte_character(T85);
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T87 = primitive_cast_integer_as_raw(T21);
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T88 = primitive_machine_word_unsigned_less_thanQ(iF108,T87);
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              if (T88 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T89 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T209, 1, iF108);
                T91 = T89;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T86_0 = Kelement_range_errorVKeI(T209, T109);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T90 = T86_0;
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T103 = primitive_byte_character_as_raw(T90);
                T91 = T103;
              }
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T104 = primitive_raw_as_byte_character(T91);
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T92 = primitive_idQ(T98,T104);
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              if (T92 != &KPfalseVKi) {
                T78 = T92;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T93 = primitive_machine_word_shift_left_signal_overflow(T85,2);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T94 = primitive_machine_word_logior(T93,1);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T95 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T94);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T96 = primitive_raw_as_byte_character(T95);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T99 = primitive_machine_word_shift_left_signal_overflow(T91,2);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T100 = primitive_machine_word_logior(T99,1);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T101 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T100);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T102 = primitive_raw_as_byte_character(T101);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T105 = primitive_idQ(T96,T102);
                T78 = T105;
              }
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              if (T78 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T106 = primitive_machine_word_add_signal_overflow(iF108,4);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                iF108T = T106;
                goto L2;
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T110 = T107;
                T111 = T110;
              } else {
                T111 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T112 = T111;
            }
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
          T113 = T112;
        } else {
          T113 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
        T6 = T113;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T7 = T6;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T114_0 = T70;
      T114_1 = T74;
      T8_0 = T114_0;
      T8_1 = T114_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T116 = primitive_machine_word_logand(hash_,29);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T117 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T116);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T118_0 = T117;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T115_0 = T118_0;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      stride_ = T115_0;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T125 = primitive_cast_integer_as_raw(stride_);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T126 = primitive_machine_word_logxor(T125,1);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T129 = primitive_machine_word_logxor(T67,1);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      previous_indexF178T = T69;
    L3: ;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        previous_indexF178 = previous_indexF178T;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        T127 = primitive_machine_word_subtract_signal_overflow(previous_indexF178,T126);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        T128 = primitive_machine_word_less_thanQ(T127,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        if (T128 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
          T130 = primitive_machine_word_add_signal_overflow(T127,T129);
          T131 = T130;
        } else {
          T131 = T127;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        T136 = primitive_cast_raw_as_integer(T131);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        T134 = REPEATED_D_SLOT_VALUE_TAGGED(T62, 2, T131);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        T132 = primitive_cast_pointer_as_raw(T134);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        T133 = primitive_machine_word_equalQ(T132,0);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        if (T133 != &KPfalseVKi) {
          T135 = Dtable_entry_deletedVKi;
        } else {
          T135 = T134;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        UtmpF120 = primitive_idQ(T135,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        if (UtmpF120 != &KPfalseVKi) {
          T123 = UtmpF120;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
          T137 = primitive_idQ(T135,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
          if (T137 != &KPfalseVKi) {
            T122 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:75
            fkeyF121 = T135;
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            T138 = SLOT_VALUE_INITD(fkeyF121, 0);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            T139 = primitive_idQ(T138,T21);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            if (T139 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              iF170T = 1;
            L4: ;
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                iF170 = iF170T;
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T171 = primitive_cast_raw_as_integer(iF170);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                T141 = primitive_idQ(T171,T21);
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                if (T141 != &KPfalseVKi) {
                  T174 = T141;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T143 = primitive_cast_integer_as_raw(T138);
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T144 = primitive_machine_word_unsigned_less_thanQ(iF170,T143);
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  if (T144 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T145 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(fkeyF121, 1, iF170);
                    T147 = T145;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T142_0 = Kelement_range_errorVKeI(fkeyF121, T171);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T146 = T142_0;
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T159 = primitive_byte_character_as_raw(T146);
                    T147 = T159;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T160 = primitive_raw_as_byte_character(T147);
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T149 = primitive_cast_integer_as_raw(T21);
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T150 = primitive_machine_word_unsigned_less_thanQ(iF170,T149);
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  if (T150 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T151 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T209, 1, iF170);
                    T153 = T151;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T148_0 = Kelement_range_errorVKeI(T209, T171);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T152 = T148_0;
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T165 = primitive_byte_character_as_raw(T152);
                    T153 = T165;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T166 = primitive_raw_as_byte_character(T153);
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T154 = primitive_idQ(T160,T166);
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  if (T154 != &KPfalseVKi) {
                    T140 = T154;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T155 = primitive_machine_word_shift_left_signal_overflow(T147,2);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T156 = primitive_machine_word_logior(T155,1);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T157 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T156);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T158 = primitive_raw_as_byte_character(T157);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T161 = primitive_machine_word_shift_left_signal_overflow(T153,2);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T162 = primitive_machine_word_logior(T161,1);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T163 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T162);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T164 = primitive_raw_as_byte_character(T163);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T167 = primitive_idQ(T158,T164);
                    T140 = T167;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  if (T140 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T168 = primitive_machine_word_add_signal_overflow(iF170,4);
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    iF170T = T168;
                    goto L4;
                    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                    T172 = T169;
                    T173 = T172;
                  } else {
                    T173 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                  T174 = T173;
                }
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
                // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
              T175 = T174;
            } else {
              T175 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:76
            T122 = T175;
          }
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
          T123 = T122;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        if (T123 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
          T176_0 = T136;
          T176_1 = T135;
          T124_0 = T176_0;
          T124_1 = T176_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
          previous_indexF178T = T131;
          goto L3;
          T124_0 = T177_0;
          T124_1 = T177_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
      T8_0 = T124_0;
      T8_1 = T124_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    indexF9 = T8_0;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:74
    fkeyF10 = T8_1;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:78
    T179 = SLOT_VALUE_INITD(T22, 9);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:80
    T11 = primitive_idQ(fkeyF10,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:80
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:91
      T192 = SLOT_VALUE_INITD(T22, 7);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:90
      T13 = Ktry_to_puthash_newVKiI(T22, T23, T192, indexF9, T209, T211);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:90
      T193_0 = T13;
      T193_1 = T211;
      T14_0 = T193_0;
      T14_1 = T193_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:82
      T183 = primitive_cast_integer_as_raw(indexF9);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:82
      T182 = REPEATED_D_SLOT_VALUE_TAGGED(T179, 2, T183);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:82
      T180 = primitive_cast_pointer_as_raw(T182);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:82
      T181 = primitive_machine_word_equalQ(T180,0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:82
      if (T181 != &KPfalseVKi) {
        T184 = Dtable_entry_deletedVKi;
      } else {
        T184 = T182;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:82
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
      T186 = SLOT_VALUE_INITD(T23, 0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
      if (T186 != &KPfalseVKi) {
        T188 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
        T187 = SLOT_VALUE_INITD(T22, 3);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
        T185 = primitive_idQ(T23,T187);
        T188 = T185;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
      if (T188 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
        T189 = primitive_idQ(T184,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
        T190 = primitive_not(T189);
        T12 = T190;
      } else {
        T12 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:87
      T191_0 = T12;
      T191_1 = T184;
      T14_0 = T191_0;
      T14_1 = T191_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:80
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:79
    successQ_ = T14_0;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:79
    valueF16 = T14_1;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:95
    if (successQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:96
      T17_0 = valueF16;
      T20_0 = T17_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      T195 = SLOT_VALUE_INITD(T23, 0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      if (T195 != &KPfalseVKi) {
        T197 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        T196 = SLOT_VALUE_INITD(T22, 3);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        T194 = primitive_idQ(T23,T196);
        T197 = T194;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      T198 = primitive_not(T197);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      if (T197 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        T199 = SLOT_VALUE_INITD(T22, 7);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        T200 = primitive_mps_ld_isstale(T199);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        T201 = primitive_machine_word_shift_left_signal_overflow(T200,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        T202 = primitive_machine_word_logior(T201,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        T203 = primitive_machine_word_less_thanQ(1,T202);
        T204 = T203;
      } else {
        T204 = T198;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      if (T204 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:100
        T18 = KfullQVKiI(T22);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:100
        Krehash_tableVKeI(T207, T22, T18);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:101
        T19 = KfullQVKiI(T22);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
        if (T19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:102
          Krehash_tableVKeI(T207, T22, &KPtrueVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:99
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
      tableF206T = table_;
      keyF208T = key_;
      new_valueF210T = new_value_;
      goto L0;
      T20_0 = T205_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:95
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:104
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:64
  MV_SET_COUNT(1);
  return(T20_0);
}

D KPinstall_boot_symbolsVKiI () {
  D T1;
  DWORD T2T, T2;
  D xF3;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:117
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:118
  Tsymbols_bootedQTVKi = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
  T1 = primitive_preboot_symbols();
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
  T5 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
  T2T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
    T7 = primitive_machine_word_equalQ(T2,T6);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
      T8 = REPEATED_D_SLOT_VALUE_TAGGED(T1, 1, T2);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
      xF3 = T8;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
      T9 = SLOT_VALUE_INITD(xF3, 0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
      T10 = SLOT_VALUE_INITD(TsymbolsTVKi, 0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
      T13 = primitive_instanceQ(xF3,T10);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
      if (T13 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
        T12.vector_element_[0] = &KJvalue_;
        T12.vector_element_[1] = xF3;
        T12.vector_element_[2] = &KJtype_;
        T12.vector_element_[3] = T10;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T11 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T12);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
        CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
        CONGRUENT_CALL2(T11, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:120
      KputhashVKiI(xF3, TsymbolsTVKi, T9);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
      T14 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
      T2T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
    T4 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:117
  MV_SET_COUNT(0);
  return(T4);
}

D KLsymbol_tableGZ32ZconstructorVKiMM0I (D class_, D init_args_, D Uunique_element_type_, D Uunique_initial_entries_, D Uunique_grow_size_function_, D Uunique_weakQ_) {
  D T7;
  D Uunique_element_typeF8;
  D Uunique_initial_entriesF9;
  D Uunique_grow_size_functionF10;
  D Uunique_weakQF11;
  D T12_0;
  D T13_0;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:8
  T7 = primitive_object_allocate_filled(6,&KLsymbol_tableGVKiW,5,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_element_typeF8 = Uunique_element_type_;
  SLOT_VALUE_SETTER(Uunique_element_typeF8, T7, 0);
  T14 = SLOT_VALUE_INITD(&Ktable_vectorVKeHLtableG, 0);
  T15 = primitive_cast_integer_as_raw(T14);
  T16 = primitive_machine_word_logbitQ(4,T15);
  if (T16 != &KPfalseVKi) {
    T17 = SLOT_VALUE_INITD(&Ktable_vectorVKeHLtableG, 1);
    T19 = T17;
  } else {
    T13_0 = Kinstall_and_return_make_method_init_dataVKiI(&Ktable_vectorVKeHLtableG);
    T18 = T13_0;
    T19 = T18;
  }
  SLOT_VALUE_SETTER(T19, T7, 1);
  Uunique_initial_entriesF9 = Uunique_initial_entries_;
  SLOT_VALUE_SETTER(Uunique_initial_entriesF9, T7, 2);
  Uunique_grow_size_functionF10 = Uunique_grow_size_function_;
  SLOT_VALUE_SETTER(Uunique_grow_size_functionF10, T7, 3);
  Uunique_weakQF11 = Uunique_weakQ_;
  SLOT_VALUE_SETTER(Uunique_weakQF11, T7, 4);
  APPLY2(&KinitializeVKd, T7, init_args_);
  T12_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:8
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kmake_symbolVKeMM0I (D str_, D Urest_, D s_, D e_) {
  D sF5;
  D T6;
  D T7;
  D eF8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D UtmpF13;
  D fkeyF14;
  D T15;
  D T16;
  D T17_0;
  D T17_1;
  D indexF18;
  D fkeyF19;
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
  D id_;
  D T34;
  D T35;
  DWORD rmremainder_;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DADDR T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50_0;
  D T50_1;
  D T51_0;
  DWORD T52;
  DWORD T53;
  D T54;
  D T55_0;
  D stride_;
  D UtmpF57;
  D fkeyF58;
  D T59;
  D T60;
  D T61_0;
  D T61_1;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  D T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  DADDR T69;
  D T70;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75;
  D T76_0;
  D T76_1;
  D T77_0;
  D T77_1;
  DWORD previous_indexF78T, previous_indexF78;
  D T79;
  DADDR T80;
  D T81;
  D T82;
  DWORD T83;
  D T84;
  D T85;
  D T86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94;
  D T95;
  D T96;
  D T97;
  D T98;
  D T99;
  D T100;
  D T101_0;
  D T102;
  D T103;
  D T104;
  D T105;
  D T106;
  D T107;
  D T108;
  D T109;
  D T110;
  D T111_0;
  D T112;
  D T113;
  D T114;
  D T115_0;
  D T116;
  D T117;
  D T118;
  D T119;
  D T120;
  D T121;
  D res_;
  D T123;
  D T124;
  D T125;
  D T126;
  D T127;
  D T128;
  D T129_0;
  D T130;
  D T131;
  D T132;
  D T133;
  _KLsimple_object_vectorGVKd_2 T134 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T135;
  D T136;
  D T137;
  D T138;
  D T139;
  D T140;
  D T141;
  DSINT T142;
  DWORD T143;
  DWORD T144;
  D T145;
  D T146;
  D T147;
  D first_attemptQF148T, first_attemptQF148;
  D name_;
  D T150;
  D T151;
  D T152;
  DWORD T153;
  DWORD T154;
  DWORD T155;
  DWORD T156;
  D T157_0;
  D T158;
  D T159_0;
  D T160;
  DWORD T161;
  D T162;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
  primitive_type_check(s_, &KLintegerGVKd);
  sF5 = s_;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
  T10 = primitive_idQ(e_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:136
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T6 = CONGRUENT_CALL1(str_);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
    T7 = T6;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
    primitive_type_check(T7, &KLintegerGVKd);
    T11 = T7;
    eF8 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
    primitive_type_check(e_, &KLintegerGVKd);
    T12 = e_;
    eF8 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:167
  first_attemptQF148T = &KPtrueVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:173
    first_attemptQF148 = first_attemptQF148T;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:140
    T31 = SLOT_VALUE_INITD(TsymbolsTVKi, 1);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:141
    T32 = SLOT_VALUE_INITD(T31, 3);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:145
    ENGINE_NODE_CALL_PROLOG(&Kcase_insensitive_string_hash_2VKi, &K90, 3);
    id_ = ENGINE_NODE_CALL3(&K90, str_, sF5, eF8);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T34 = SLOT_VALUE_INITD(T31, 8);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T35 = SLOT_VALUE_INITD(T34, 1);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T38 = primitive_cast_integer_as_raw(id_);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T37 = primitive_machine_word_shift_right(T38,2);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T40 = primitive_cast_integer_as_raw(T35);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T39 = primitive_machine_word_shift_right(T40,2);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    rmremainder_ = primitive_machine_word_floorS_remainder(T37,T39);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T41 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T42 = primitive_machine_word_logior(T41,1);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T43 = primitive_cast_raw_as_integer(T42);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T46 = REPEATED_D_SLOT_VALUE_TAGGED(T34, 2, T42);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T44 = primitive_cast_pointer_as_raw(T46);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    T45 = primitive_machine_word_equalQ(T44,0);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    if (T45 != &KPfalseVKi) {
      T47 = Dtable_entry_deletedVKi;
    } else {
      T47 = T46;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    UtmpF13 = primitive_idQ(T47,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    if (UtmpF13 != &KPfalseVKi) {
      T16 = UtmpF13;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T48 = primitive_idQ(T47,Dtable_entry_deletedVKi);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      if (T48 != &KPfalseVKi) {
        T15 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:148
        fkeyF14 = T47;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:149
        ENGINE_NODE_CALL_PROLOG(&Kcase_insensitive_string_equal_2VKi, &K91, 4);
        T49 = ENGINE_NODE_CALL4(&K91, fkeyF14, str_, sF5, eF8);
        T15 = T49;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T16 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T50_0 = T43;
      T50_1 = T47;
      T17_0 = T50_0;
      T17_1 = T50_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T52 = primitive_cast_integer_as_raw(id_);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T53 = primitive_machine_word_logand(T52,29);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T54 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T53);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T55_0 = T54;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T51_0 = T55_0;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      stride_ = T51_0;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T62 = primitive_cast_integer_as_raw(stride_);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T63 = primitive_machine_word_logxor(T62,1);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T66 = primitive_machine_word_logxor(T40,1);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      previous_indexF78T = T42;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        previous_indexF78 = previous_indexF78T;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        T64 = primitive_machine_word_subtract_signal_overflow(previous_indexF78,T63);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        T65 = primitive_machine_word_less_thanQ(T64,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        if (T65 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
          T67 = primitive_machine_word_add_signal_overflow(T64,T66);
          T68 = T67;
        } else {
          T68 = T64;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        T73 = primitive_cast_raw_as_integer(T68);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        T71 = REPEATED_D_SLOT_VALUE_TAGGED(T34, 2, T68);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        T69 = primitive_cast_pointer_as_raw(T71);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        T70 = primitive_machine_word_equalQ(T69,0);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        if (T70 != &KPfalseVKi) {
          T72 = Dtable_entry_deletedVKi;
        } else {
          T72 = T71;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        UtmpF57 = primitive_idQ(T72,Dtable_entry_emptyVKi);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        if (UtmpF57 != &KPfalseVKi) {
          T60 = UtmpF57;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
          T74 = primitive_idQ(T72,Dtable_entry_deletedVKi);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
          if (T74 != &KPfalseVKi) {
            T59 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:148
            fkeyF58 = T72;
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:149
            ENGINE_NODE_CALL_PROLOG(&Kcase_insensitive_string_equal_2VKi, &K93, 4);
            T75 = ENGINE_NODE_CALL4(&K93, fkeyF58, str_, sF5, eF8);
            T59 = T75;
          }
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
          T60 = T59;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        if (T60 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
          T76_0 = T73;
          T76_1 = T72;
          T61_0 = T76_0;
          T61_1 = T76_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
          previous_indexF78T = T68;
          goto L1;
          T61_0 = T77_0;
          T61_1 = T77_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
      T17_0 = T61_0;
      T17_1 = T61_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:147
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:146
    indexF18 = T17_0;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:146
    fkeyF19 = T17_1;
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:152
    T79 = SLOT_VALUE_INITD(T31, 9);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:153
    T20 = primitive_idQ(fkeyF19,Dtable_entry_emptyVKi);
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:153
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
      T137 = SLOT_VALUE_INITD(T32, 0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
      if (T137 != &KPfalseVKi) {
        T139 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
        T138 = SLOT_VALUE_INITD(T31, 3);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
        T136 = primitive_idQ(T32,T138);
        T139 = T136;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
      T140 = primitive_not(T139);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
      if (T139 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
        T141 = SLOT_VALUE_INITD(T31, 7);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
        T142 = primitive_mps_ld_isstale(T141);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
        T143 = primitive_machine_word_shift_left_signal_overflow(T142,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
        T144 = primitive_machine_word_logior(T143,1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
        T145 = primitive_machine_word_less_thanQ(1,T144);
        T146 = T145;
      } else {
        T146 = T140;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:169
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:153
      if (T146 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:172
        Krehash_tableVKeI(TsymbolsTVKi, T31, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:173
        first_attemptQF148T = &KPfalseVKi;
        goto L0;
        T29 = T147;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:175
        ENGINE_NODE_CALL_PROLOG(&Kcopy_byte_stringVKi, &K94, 3);
        name_ = ENGINE_NODE_CALL3(&K94, str_, sF5, eF8);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T150 = SLOT_VALUE(&KLsymbolGVKd, 2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T152 = SLOT_VALUE_INITD(T150, 0);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T153 = primitive_cast_integer_as_raw(T152);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T154 = primitive_machine_word_logand(T153,262140);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T155 = primitive_machine_word_add_signal_overflow(5,T154);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T156 = primitive_machine_word_shift_right(T155,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T158 = SLOT_VALUE_INITD(T150, 2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T159_0 = T158;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T157_0 = T159_0;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T160 = T157_0;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T161 = primitive_machine_word_shift_right(T154,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:176
        T151 = primitive_object_allocate_filled(T156,T160,T161,name_,0,0,name_);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:177
        T162 = SLOT_VALUE_INITD(T31, 7);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:177
        T25 = Ktry_to_puthash_newVKiI(T31, T32, T162, indexF18, name_, T151);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:177
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:178
          T26 = T151;
          MV_SET_ELT(0, T151);
          MV_SET_COUNT(1);
          T28 = T26;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:180
          T27 = Kgethash_or_setVKiMM0I(TsymbolsTVKi, name_, T151);
          T28 = T27;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:177
        T29 = T28;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:153
      T30 = T29;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:156
      T83 = primitive_cast_integer_as_raw(indexF18);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:156
      T82 = REPEATED_D_SLOT_VALUE_TAGGED(T79, 2, T83);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:156
      T80 = primitive_cast_pointer_as_raw(T82);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:156
      T81 = primitive_machine_word_equalQ(T80,0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:156
      if (T81 != &KPfalseVKi) {
        T84 = Dtable_entry_deletedVKi;
      } else {
        T84 = T82;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:156
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
      T86 = SLOT_VALUE_INITD(T32, 0);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
      if (T86 != &KPfalseVKi) {
        T88 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
        T87 = SLOT_VALUE_INITD(T31, 3);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
        T85 = primitive_idQ(T32,T87);
        T88 = T85;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
      if (T88 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
        T89 = primitive_idQ(T84,Dtable_entry_deletedVKi);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
        T90 = primitive_not(T89);
        T21 = T90;
      } else {
        T21 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:162
        T22 = T84;
        MV_SET_ELT(0, T84);
        MV_SET_COUNT(1);
        T24 = T22;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        T91 = SLOT_VALUE_INITD(T31, 0);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        T96 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T96 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T97 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T98 = primitive_idQ(T97,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T99 = primitive_not(T98);
          T95 = T99;
        } else {
          T95 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T95 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T100 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T101_0 = KmemberQVKdMM3I(&KJlock_, T100, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T102 = T101_0;
          T103 = T102;
        } else {
          T103 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T103 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T104 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T92 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF117, 1, T91);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          CALL1(T104, T92);
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        T93 = primitive_wait_for_simple_lock(T91);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        T106 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T106 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T107 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T108 = primitive_idQ(T107,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T109 = primitive_not(T108);
          T105 = T109;
        } else {
          T105 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T105 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T110 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T111_0 = KmemberQVKdMM3I(&KJlock_, T110, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T112 = T111_0;
          T113 = T112;
        } else {
          T113 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T113 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T114 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T94 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF116, 2, T93, T91);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          CALL1(T114, T94);
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        T116 = primitive_idQ(T93,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T116 != &KPfalseVKi) {
          T120 = &KPtrueVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T117 = primitive_idQ(T93,(D) 5);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          if (T117 != &KPfalseVKi) {
            T119 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T115_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T91, T93);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T118 = T115_0;
            T119 = T118;
          }
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T120 = T119;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        if (T120 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T124 = TdebuggingQTVKi;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          if (T124 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T125 = Tdebug_partsTVKi;
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T126 = primitive_idQ(T125,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T127 = primitive_not(T126);
            T123 = T127;
          } else {
            T123 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          if (T123 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T128 = Tdebug_partsTVKi;
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T129_0 = KmemberQVKdMM3I(&KJlock_, T128, &KPempty_vectorVKi, &KEEVKd);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T130 = T129_0;
            T131 = T130;
          } else {
            T131 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          if (T131 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T132 = Tdebug_out_functionTVKi;
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            T121 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF115, 1, T91);
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            CALL1(T132, T121);
          }
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          res_ = primitive_release_simple_lock(T91);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T133 = primitive_idQ(res_,(D) 1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          if (T133 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
            Klock_release_result_errorYthreads_internalVdylanMM0I(T91, res_);
          }
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          T134.vector_element_[0] = &KJsynchronization_;
          T134.vector_element_[1] = T91;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T23 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T134);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
          KsignalVKdMM0I(T23, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:167
        first_attemptQF148T = &KPfalseVKi;
        goto L0;
        T24 = T135;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:161
      T30 = T24;
    }
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:153
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:167
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
  T9_0 = T30;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:134
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kmake_symbolVKeMM2I (D str_, D Urest_, D s_, D e_) {
  D sF5;
  D T6;
  D eF7;
  D T8_0;
  D T9;
  D T10;
  D UtmpF11;
  D fkeyF12;
  D T13;
  D T14;
  D T15_0;
  D T15_1;
  D indexF16;
  D fkeyF17;
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
  DWORD rmremainder_;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  D T40;
  DADDR T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46_0;
  D T46_1;
  D T47_0;
  DWORD T48;
  DWORD T49;
  D T50;
  D T51_0;
  D stride_;
  D UtmpF53;
  D fkeyF54;
  D T55;
  D T56;
  D T57_0;
  D T57_1;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  D T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DADDR T65;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70;
  D T71_0;
  D T71_1;
  D T72_0;
  D T72_1;
  DWORD previous_indexF73T, previous_indexF73;
  D T74;
  DADDR T75;
  D T76;
  D T77;
  DWORD T78;
  D T79;
  D T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91;
  D T92;
  D T93;
  D T94;
  D T95;
  D T96_0;
  D T97;
  D T98;
  D T99;
  D T100;
  D T101;
  D T102;
  D T103;
  D T104;
  D T105;
  D T106_0;
  D T107;
  D T108;
  D T109;
  D T110_0;
  D T111;
  D T112;
  D T113;
  D T114;
  D T115;
  D T116;
  D res_;
  D T118;
  D T119;
  D T120;
  D T121;
  D T122;
  D T123;
  D T124_0;
  D T125;
  D T126;
  D T127;
  D T128;
  _KLsimple_object_vectorGVKd_2 T129 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T130;
  D T131;
  D T132;
  D T133;
  D T134;
  D T135;
  D T136;
  DSINT T137;
  DWORD T138;
  DWORD T139;
  D T140;
  D T141;
  D T142;
  D first_attemptQF143T, first_attemptQF143;
  D T144;
  D T145;
  D T146;
  DWORD T147;
  DWORD T148;
  DWORD T149;
  DWORD T150;
  D T151_0;
  D T152;
  D T153_0;
  D T154;
  DWORD T155;
  D T156;
  D T157;
  D id_;
  D T159;
  D T160;
  D name_;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:190
  primitive_type_check(s_, &KLintegerGVKd);
  sF5 = s_;
  T9 = primitive_idQ(e_,&KPunboundVKi);
  if (T9 != &KPfalseVKi) {
    T157 = SLOT_VALUE_INITD(str_, 0);
    T6 = T157;
    eF7 = T6;
  } else {
    primitive_type_check(e_, &KLintegerGVKd);
    T10 = e_;
    eF7 = T10;
  }
  first_attemptQF143T = &KPtrueVKi;
L0: ;
    first_attemptQF143 = first_attemptQF143T;
    T29 = SLOT_VALUE_INITD(TsymbolsTVKi, 1);
    T30 = SLOT_VALUE_INITD(T29, 3);
    id_ = Kcase_insensitive_string_hash_2VKiMM1I(str_, sF5, eF7);
    T31 = SLOT_VALUE_INITD(T29, 8);
    T32 = SLOT_VALUE_INITD(T31, 1);
    T35 = primitive_cast_integer_as_raw(id_);
    T34 = primitive_machine_word_shift_right(T35,2);
    T37 = primitive_cast_integer_as_raw(T32);
    T36 = primitive_machine_word_shift_right(T37,2);
    rmremainder_ = primitive_machine_word_floorS_remainder(T34,T36);
    T38 = primitive_machine_word_shift_left_signal_overflow(rmremainder_,2);
    T39 = primitive_machine_word_logior(T38,1);
    T40 = primitive_cast_raw_as_integer(T39);
    T43 = REPEATED_D_SLOT_VALUE_TAGGED(T31, 2, T39);
    T41 = primitive_cast_pointer_as_raw(T43);
    T42 = primitive_machine_word_equalQ(T41,0);
    if (T42 != &KPfalseVKi) {
      T44 = Dtable_entry_deletedVKi;
    } else {
      T44 = T43;
    }
    UtmpF11 = primitive_idQ(T44,Dtable_entry_emptyVKi);
    if (UtmpF11 != &KPfalseVKi) {
      T14 = UtmpF11;
    } else {
      T45 = primitive_idQ(T44,Dtable_entry_deletedVKi);
      if (T45 != &KPfalseVKi) {
        T13 = &KPfalseVKi;
      } else {
        fkeyF12 = T44;
        T159 = Kcase_insensitive_string_equal_2VKiMM1I(fkeyF12, str_, sF5, eF7);
        T13 = T159;
      }
      T14 = T13;
    }
    if (T14 != &KPfalseVKi) {
      T46_0 = T40;
      T46_1 = T44;
      T15_0 = T46_0;
      T15_1 = T46_1;
    } else {
      T48 = primitive_cast_integer_as_raw(id_);
      T49 = primitive_machine_word_logand(T48,29);
      T50 = REPEATED_D_SLOT_VALUE_TAGGED(Dsecondary_stridesVKi, 1, T49);
      T51_0 = T50;
      T47_0 = T51_0;
      stride_ = T47_0;
      T58 = primitive_cast_integer_as_raw(stride_);
      T59 = primitive_machine_word_logxor(T58,1);
      T62 = primitive_machine_word_logxor(T37,1);
      previous_indexF73T = T39;
    L1: ;
        previous_indexF73 = previous_indexF73T;
        T60 = primitive_machine_word_subtract_signal_overflow(previous_indexF73,T59);
        T61 = primitive_machine_word_less_thanQ(T60,1);
        if (T61 != &KPfalseVKi) {
          T63 = primitive_machine_word_add_signal_overflow(T60,T62);
          T64 = T63;
        } else {
          T64 = T60;
        }
        T69 = primitive_cast_raw_as_integer(T64);
        T67 = REPEATED_D_SLOT_VALUE_TAGGED(T31, 2, T64);
        T65 = primitive_cast_pointer_as_raw(T67);
        T66 = primitive_machine_word_equalQ(T65,0);
        if (T66 != &KPfalseVKi) {
          T68 = Dtable_entry_deletedVKi;
        } else {
          T68 = T67;
        }
        UtmpF53 = primitive_idQ(T68,Dtable_entry_emptyVKi);
        if (UtmpF53 != &KPfalseVKi) {
          T56 = UtmpF53;
        } else {
          T70 = primitive_idQ(T68,Dtable_entry_deletedVKi);
          if (T70 != &KPfalseVKi) {
            T55 = &KPfalseVKi;
          } else {
            fkeyF54 = T68;
            T160 = Kcase_insensitive_string_equal_2VKiMM1I(fkeyF54, str_, sF5, eF7);
            T55 = T160;
          }
          T56 = T55;
        }
        if (T56 != &KPfalseVKi) {
          T71_0 = T69;
          T71_1 = T68;
          T57_0 = T71_0;
          T57_1 = T71_1;
        } else {
          previous_indexF73T = T64;
          goto L1;
          T57_0 = T72_0;
          T57_1 = T72_1;
        }
      T15_0 = T57_0;
      T15_1 = T57_1;
    }
    indexF16 = T15_0;
    fkeyF17 = T15_1;
    T74 = SLOT_VALUE_INITD(T29, 9);
    T18 = primitive_idQ(fkeyF17,Dtable_entry_emptyVKi);
    if (T18 != &KPfalseVKi) {
      T132 = SLOT_VALUE_INITD(T30, 0);
      if (T132 != &KPfalseVKi) {
        T134 = &KPfalseVKi;
      } else {
        T133 = SLOT_VALUE_INITD(T29, 3);
        T131 = primitive_idQ(T30,T133);
        T134 = T131;
      }
      T135 = primitive_not(T134);
      if (T134 != &KPfalseVKi) {
        T136 = SLOT_VALUE_INITD(T29, 7);
        T137 = primitive_mps_ld_isstale(T136);
        T138 = primitive_machine_word_shift_left_signal_overflow(T137,2);
        T139 = primitive_machine_word_logior(T138,1);
        T140 = primitive_machine_word_less_thanQ(1,T139);
        T141 = T140;
      } else {
        T141 = T135;
      }
      if (T141 != &KPfalseVKi) {
        Krehash_tableVKeI(TsymbolsTVKi, T29, &KPfalseVKi);
        first_attemptQF143T = &KPfalseVKi;
        goto L0;
        T27 = T142;
      } else {
        name_ = Kcopy_byte_stringVKiMM1I(str_, sF5, eF7);
        T144 = SLOT_VALUE(&KLsymbolGVKd, 2);
        T146 = SLOT_VALUE_INITD(T144, 0);
        T147 = primitive_cast_integer_as_raw(T146);
        T148 = primitive_machine_word_logand(T147,262140);
        T149 = primitive_machine_word_add_signal_overflow(5,T148);
        T150 = primitive_machine_word_shift_right(T149,2);
        T152 = SLOT_VALUE_INITD(T144, 2);
        T153_0 = T152;
        T151_0 = T153_0;
        T154 = T151_0;
        T155 = primitive_machine_word_shift_right(T148,2);
        T145 = primitive_object_allocate_filled(T150,T154,T155,name_,0,0,name_);
        T156 = SLOT_VALUE_INITD(T29, 7);
        T23 = Ktry_to_puthash_newVKiI(T29, T30, T156, indexF16, name_, T145);
        if (T23 != &KPfalseVKi) {
          T24 = T145;
          MV_SET_ELT(0, T145);
          MV_SET_COUNT(1);
          T26 = T24;
        } else {
          T25 = Kgethash_or_setVKiMM0I(TsymbolsTVKi, name_, T145);
          T26 = T25;
        }
        T27 = T26;
      }
      T28 = T27;
    } else {
      T78 = primitive_cast_integer_as_raw(indexF16);
      T77 = REPEATED_D_SLOT_VALUE_TAGGED(T74, 2, T78);
      T75 = primitive_cast_pointer_as_raw(T77);
      T76 = primitive_machine_word_equalQ(T75,0);
      if (T76 != &KPfalseVKi) {
        T79 = Dtable_entry_deletedVKi;
      } else {
        T79 = T77;
      }
      T81 = SLOT_VALUE_INITD(T30, 0);
      if (T81 != &KPfalseVKi) {
        T83 = &KPfalseVKi;
      } else {
        T82 = SLOT_VALUE_INITD(T29, 3);
        T80 = primitive_idQ(T30,T82);
        T83 = T80;
      }
      if (T83 != &KPfalseVKi) {
        T84 = primitive_idQ(T79,Dtable_entry_deletedVKi);
        T85 = primitive_not(T84);
        T19 = T85;
      } else {
        T19 = &KPfalseVKi;
      }
      if (T19 != &KPfalseVKi) {
        T20 = T79;
        MV_SET_ELT(0, T79);
        MV_SET_COUNT(1);
        T22 = T20;
      } else {
        T86 = SLOT_VALUE_INITD(T29, 0);
        T91 = TdebuggingQTVKi;
        if (T91 != &KPfalseVKi) {
          T92 = Tdebug_partsTVKi;
          T93 = primitive_idQ(T92,&KPempty_listVKi);
          T94 = primitive_not(T93);
          T90 = T94;
        } else {
          T90 = &KPfalseVKi;
        }
        if (T90 != &KPfalseVKi) {
          T95 = Tdebug_partsTVKi;
          T96_0 = KmemberQVKdMM3I(&KJlock_, T95, &KPempty_vectorVKi, &KEEVKd);
          T97 = T96_0;
          T98 = T97;
        } else {
          T98 = &KPfalseVKi;
        }
        if (T98 != &KPfalseVKi) {
          T99 = Tdebug_out_functionTVKi;
          T87 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF78, 1, T86);
          CALL1(T99, T87);
        }
        T88 = primitive_wait_for_simple_lock(T86);
        T101 = TdebuggingQTVKi;
        if (T101 != &KPfalseVKi) {
          T102 = Tdebug_partsTVKi;
          T103 = primitive_idQ(T102,&KPempty_listVKi);
          T104 = primitive_not(T103);
          T100 = T104;
        } else {
          T100 = &KPfalseVKi;
        }
        if (T100 != &KPfalseVKi) {
          T105 = Tdebug_partsTVKi;
          T106_0 = KmemberQVKdMM3I(&KJlock_, T105, &KPempty_vectorVKi, &KEEVKd);
          T107 = T106_0;
          T108 = T107;
        } else {
          T108 = &KPfalseVKi;
        }
        if (T108 != &KPfalseVKi) {
          T109 = Tdebug_out_functionTVKi;
          T89 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF77, 2, T88, T86);
          CALL1(T109, T89);
        }
        T111 = primitive_idQ(T88,(D) 1);
        if (T111 != &KPfalseVKi) {
          T115 = &KPtrueVKi;
        } else {
          T112 = primitive_idQ(T88,(D) 5);
          if (T112 != &KPfalseVKi) {
            T114 = &KPfalseVKi;
          } else {
            T110_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(T86, T88);
            T113 = T110_0;
            T114 = T113;
          }
          T115 = T114;
        }
        if (T115 != &KPfalseVKi) {
          T119 = TdebuggingQTVKi;
          if (T119 != &KPfalseVKi) {
            T120 = Tdebug_partsTVKi;
            T121 = primitive_idQ(T120,&KPempty_listVKi);
            T122 = primitive_not(T121);
            T118 = T122;
          } else {
            T118 = &KPfalseVKi;
          }
          if (T118 != &KPfalseVKi) {
            T123 = Tdebug_partsTVKi;
            T124_0 = KmemberQVKdMM3I(&KJlock_, T123, &KPempty_vectorVKi, &KEEVKd);
            T125 = T124_0;
            T126 = T125;
          } else {
            T126 = &KPfalseVKi;
          }
          if (T126 != &KPfalseVKi) {
            T127 = Tdebug_out_functionTVKi;
            T116 = MAKE_CLOSURE_INITD(&Kanonymous_of_make_symbolF76, 1, T86);
            CALL1(T127, T116);
          }
          res_ = primitive_release_simple_lock(T86);
          T128 = primitive_idQ(res_,(D) 1);
          if (T128 == &KPfalseVKi) {
            Klock_release_result_errorYthreads_internalVdylanMM0I(T86, res_);
          }
        } else {
          T129.vector_element_[0] = &KJsynchronization_;
          T129.vector_element_[1] = T86;
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T21 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T129);
          KsignalVKdMM0I(T21, &KPempty_vectorVKi);
        }
        first_attemptQF143T = &KPfalseVKi;
        goto L0;
        T22 = T130;
      }
      T28 = T22;
    }
  T8_0 = T28;
  MV_SET_COUNT(1);
  return(T8_0);
}

static D Kanonymous_of_make_symbolF78I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  T0 = Kcurrent_threadYthreadsVdylanI();
  T2 = SLOT_VALUE_INITD(T0, 3);
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    T3 = T1_0;
    T4 = T3;
  }
  T5.vector_element_[0] = &K36;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  T7 = primitive_copy_vector(&T5);
  T6_0 = T7;
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_make_symbolF77I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  T0 = Kcurrent_threadYthreadsVdylanI();
  T2 = SLOT_VALUE_INITD(T0, 3);
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    T3 = T1_0;
    T4 = T3;
  }
  T5.vector_element_[0] = &K34;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  T7 = primitive_copy_vector(&T5);
  T6_0 = T7;
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_make_symbolF76I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  T0 = Kcurrent_threadYthreadsVdylanI();
  T2 = SLOT_VALUE_INITD(T0, 3);
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    T3 = T1_0;
    T4 = T3;
  }
  T5.vector_element_[0] = &K31;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  T7 = primitive_copy_vector(&T5);
  T6_0 = T7;
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcase_insensitive_string_equal_2VKiMM1I (D string1_, D string2_, D s2_, D e2_) {
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
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  D T21;
  D T22_0;
  DWORD T23;
  D T24;
  DBCHR T25;
  D T26;
  DBCHR T27;
  D T28_0;
  D T29;
  DWORD T30;
  D T31;
  D T32_0;
  DBYTE T33;
  D T34_0;
  DWORD T35;
  DWORD T36;
  D T37;
  D T38;
  D T39;
  DWORD T40;
  D T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  D T45;
  DWORD T46;
  DWORD T47;
  DBCHR T48;
  D T49;
  DSINT T50;
  D T51;
  DWORD T52;
  DWORD T53;
  DBCHR T54;
  D T55;
  D T56;
  DWORD T57;
  D T58;
  DWORD iF59T, iF59;
  D T60;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:40
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  T7 = SLOT_VALUE_INITD(string1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  T8 = primitive_cast_integer_as_raw(e2_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  T9 = primitive_cast_integer_as_raw(s2_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  T10 = primitive_machine_word_logxor(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  T11 = primitive_machine_word_subtract_signal_overflow(T8,T10);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  T13 = primitive_idQ(T7,T12);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:49
    iF59T = T9;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:49
      iF59 = iF59T;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
      T60 = primitive_cast_raw_as_integer(iF59);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:45
      T19 = primitive_idQ(T60,e2_);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:45
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:45
        T14 = T19;
        MV_SET_ELT(0, T19);
        MV_SET_COUNT(1);
        T18 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
        T20 = primitive_machine_word_subtract_signal_overflow(iF59,T10);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
        T21 = primitive_cast_raw_as_integer(T20);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
        T23 = primitive_cast_integer_as_raw(T7);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
        T24 = primitive_machine_word_unsigned_less_thanQ(T20,T23);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
        if (T24 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
          T25 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string1_, 1, T20);
          T27 = T25;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
          T22_0 = Kelement_range_errorVKeI(string1_, T21);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
          T26 = T22_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T50 = primitive_byte_character_as_raw(T26);
          T27 = T50;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:46
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
        T51 = primitive_raw_as_byte_character(T27);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
        T29 = SLOT_VALUE_INITD(string2_, 0);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
        T30 = primitive_cast_integer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
        T31 = primitive_machine_word_unsigned_less_thanQ(iF59,T30);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
        if (T31 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T33 = REPEATED_DBYTE_SLOT_VALUE_TAGGED(string2_, 1, iF59);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T35 = primitive_machine_word_shift_left_signal_overflow(T33,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T36 = primitive_machine_word_logior(T35,1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T37 = primitive_cast_raw_as_integer(T36);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T34_0 = T37;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T32_0 = T34_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T38 = T32_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T43 = primitive_cast_integer_as_raw(T38);
          T40 = T43;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T28_0 = Kelement_range_errorVKeI(string2_, T60);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T39 = T28_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
          T44 = primitive_cast_integer_as_raw(T39);
          T40 = T44;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
        T42 = primitive_machine_word_shift_right(T40,2);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:47
        T41 = primitive_raw_as_byte_character(T42);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
        T45 = primitive_idQ(T51,T41);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
        if (T45 != &KPfalseVKi) {
          T15 = T45;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T46 = primitive_machine_word_shift_left_signal_overflow(T27,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T47 = primitive_machine_word_logior(T46,1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T48 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T47);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T49 = primitive_raw_as_byte_character(T48);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T52 = primitive_machine_word_shift_left_signal_overflow(T42,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T53 = primitive_machine_word_logior(T52,1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T54 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T53);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T55 = primitive_raw_as_byte_character(T54);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T56 = primitive_idQ(T49,T55);
          T15 = T56;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
        if (T15 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:49
          T57 = primitive_machine_word_add_signal_overflow(iF59,4);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:49
          iF59T = T57;
          goto L0;
          T17 = T58;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
          T16 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T17 = T16;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:48
        T18 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:45
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:49
    T6 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
    T5 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:43
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:40
  return(T6);
}

D Kcopy_byte_stringVKiMM1I (D src_, D s_, D e_) {
  DSINT T4;
  D T5_0;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:211
  T6 = primitive_cast_integer_as_raw(e_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:211
  T7 = primitive_cast_integer_as_raw(s_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:211
  T8 = primitive_machine_word_logxor(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:211
  T9 = primitive_machine_word_subtract_signal_overflow(T6,T8);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:211
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:212
  T11 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T10);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:214
  T4 = primitive_repeated_slot_offset(T11);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:215
  T12 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:216
  T13 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:213
  primitive_replace_bytesX(T11,T4,0,src_,2,T12,T13);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:217
  T5_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:208
  MV_SET_COUNT(1);
  return(T5_0);
}

static D Kanonymous_of_make_symbolF117I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T5.vector_element_[0] = &K36;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_make_symbolF116I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T5.vector_element_[0] = &K34;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_make_symbolF115I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T5.vector_element_[0] = &K31;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:166
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kcase_insensitive_string_equal_2VKiMM0I (D string1_, D string2_, D s2_, D e2_) {
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
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  D T21;
  D T22_0;
  DWORD T23;
  D T24;
  DBCHR T25;
  D T26;
  DBCHR T27;
  D T28_0;
  D T29;
  DWORD T30;
  D T31;
  DBCHR T32;
  D T33;
  DBCHR T34;
  D T35;
  DWORD T36;
  DWORD T37;
  DBCHR T38;
  D T39;
  DSINT T40;
  D T41;
  DWORD T42;
  DWORD T43;
  DBCHR T44;
  D T45;
  DSINT T46;
  D T47;
  D T48;
  DWORD T49;
  D T50;
  DWORD iF51T, iF51;
  D T52;

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  T7 = SLOT_VALUE_INITD(string1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  T8 = primitive_cast_integer_as_raw(e2_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  T9 = primitive_cast_integer_as_raw(s2_);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  T10 = primitive_machine_word_logxor(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  T11 = primitive_machine_word_subtract_signal_overflow(T8,T10);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  T13 = primitive_idQ(T7,T12);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:34
    iF51T = T9;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:34
      iF51 = iF51T;
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
      T52 = primitive_cast_raw_as_integer(iF51);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:30
      T19 = primitive_idQ(T52,e2_);
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:30
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:30
        T14 = T19;
        MV_SET_ELT(0, T19);
        MV_SET_COUNT(1);
        T18 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
        T20 = primitive_machine_word_subtract_signal_overflow(iF51,T10);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
        T21 = primitive_cast_raw_as_integer(T20);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
        T23 = primitive_cast_integer_as_raw(T7);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
        T24 = primitive_machine_word_unsigned_less_thanQ(T20,T23);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
        if (T24 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
          T25 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string1_, 1, T20);
          T27 = T25;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
          T22_0 = Kelement_range_errorVKeI(string1_, T21);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
          T26 = T22_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T40 = primitive_byte_character_as_raw(T26);
          T27 = T40;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:31
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
        T41 = primitive_raw_as_byte_character(T27);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
        T29 = SLOT_VALUE_INITD(string2_, 0);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
        T30 = primitive_cast_integer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
        T31 = primitive_machine_word_unsigned_less_thanQ(iF51,T30);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
        if (T31 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
          T32 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(string2_, 1, iF51);
          T34 = T32;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
          T28_0 = Kelement_range_errorVKeI(string2_, T52);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
          T33 = T28_0;
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T46 = primitive_byte_character_as_raw(T33);
          T34 = T46;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:32
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
        T47 = primitive_raw_as_byte_character(T34);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
        T35 = primitive_idQ(T41,T47);
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
        if (T35 != &KPfalseVKi) {
          T15 = T35;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T36 = primitive_machine_word_shift_left_signal_overflow(T27,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T37 = primitive_machine_word_logior(T36,1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T38 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T37);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T39 = primitive_raw_as_byte_character(T38);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T42 = primitive_machine_word_shift_left_signal_overflow(T34,2);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T43 = primitive_machine_word_logior(T42,1);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T44 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T43);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T45 = primitive_raw_as_byte_character(T44);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T48 = primitive_idQ(T39,T45);
          T15 = T48;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
        if (T15 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:34
          T49 = primitive_machine_word_add_signal_overflow(iF51,4);
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:34
          iF51T = T49;
          goto L0;
          T17 = T50;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
          T16 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T17 = T16;
        }
        // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:33
        T18 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:30
      // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:34
    T6 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
    T5 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:25
  return(T6);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_symbol_table_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_symbol_table_for_user () {
{
  D T0;
  D T1;
  D T2;
  _KLsimple_object_vectorGVKd_4 T3 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:60
  T0 = Tinitial_symbol_table_sizeTVKi;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:60
  T3.vector_element_[0] = &KJweak_;
  T3.vector_element_[1] = &KJvalue_;
  T3.vector_element_[2] = &KJsize_;
  T3.vector_element_[3] = T0;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:60
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T1 = CONGRUENT_CALL2(&KLsymbol_tableGVKi, &T3);
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:59
  TsymbolsTVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/symbol-table.dylan:59
  T2 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
