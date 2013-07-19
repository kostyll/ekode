#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(12);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);

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
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(146);
define__KLbyte_stringGVKd(114);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(37);
define__KLbyte_stringGVKd(43);
define__KLbyte_stringGVKd(1);
define__KLbyte_stringGVKd(70);
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(0);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
} _KLmethodGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D gf_cache_info_users_;
  D simple_typechecked_gf_cache_info_entries_;
  D simple_typechecked_gf_cache_info_argmask_;
} _KLsimple_typechecked_gf_cache_infoGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLcache_header_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D gf_cache_info_users_;
} _KLgf_cache_infoGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLcommon_root_cache_header_engine_nodeGVKg;

#define  define__KLlinear_by_class_discriminatorGVKg(nrepeated) \
  typedef struct { \
    D wrapper; \
    D properties_; \
    D engine_node_callback_; \
    D engine_node_entry_point_; \
    D lckd_index_; \
    D lckd_hits_; \
    D class_keyed_discriminator_table_size_; \
    D class_keyed_discriminator_table_element_[nrepeated+1]; \
  } _KLlinear_by_class_discriminatorGVKg_##nrepeated;

#define  define__KLhashed_by_class_discriminatorGVKg(nrepeated) \
  typedef struct { \
    D wrapper; \
    D properties_; \
    D engine_node_callback_; \
    D engine_node_entry_point_; \
    D Phckd_count_; \
    D Phckd_limit_; \
    D class_keyed_discriminator_table_size_; \
    D class_keyed_discriminator_table_element_[nrepeated+1]; \
  } _KLhashed_by_class_discriminatorGVKg_##nrepeated;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D monomorphic_by_class_discriminator_key_;
  D monomorphic_by_class_discriminator_next_;
} _KLmonomorphic_by_class_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLclass_keyed_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D if_type_discriminator_type_;
  D if_type_discriminator_then_;
  D if_type_discriminator_else_;
} _KLif_type_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D typecheck_discriminator_type_;
  D typecheck_discriminator_next_;
} _KLtypecheck_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D singleton_discriminator_table_;
  D singleton_discriminator_default_;
} _KLsingleton_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLdiscriminatorGVKg;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D Pds_gf_;
  D Pds_parent_;
  D Pds_args_;
  D Pds_argnum_set_;
  D Pds_args_to_check_first_;
  D Pds_headed_methods_;
  D Pds_cache_;
  D Pds_result_;
  D Pds_conditions_;
  D Pds_argtypes_;
} _KLdispatch_stateGYdispatch_engine_internalVdylan;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLby_class_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLterminal_engine_nodeGVKg;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
  D profiling_call_site_cache_header_engine_node_count_1_;
  D profiling_call_site_cache_header_engine_node_count_2_;
  D profiling_call_site_cache_header_engine_node_id_;
  D profiling_call_site_cache_header_engine_node_library_;
} _KLprofiling_call_site_cache_header_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLaccessor_methodGVKe;

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
} _KLwarningGVKd;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_conditionGVKe;

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
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

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
} _KLserious_conditionGVKd;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

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
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

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
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_accessor_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_accessor_methodGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLslot_descriptorGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLlimited_typeGVKe;

#define  define__KLpartial_dispatch_cache_header_engine_nodeGVKg(nrepeated) \
  typedef struct { \
    D wrapper; \
    D properties_; \
    D engine_node_callback_; \
    D engine_node_entry_point_; \
    D cache_header_engine_node_next_; \
    D cache_header_engine_node_parent_; \
    D number_types_; \
    D partial_dispatch_type_[nrepeated+1]; \
  } _KLpartial_dispatch_cache_header_engine_nodeGVKg_##nrepeated;

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
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_call_site_cache_header_engine_nodeGVKg;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D ambiguous_methods_generic_;
  D ambiguous_methods_ordered_;
  D ambiguous_methods_ambiguous_;
  D ambiguous_methods_arguments_;
} _KLambiguous_methods_warningGVKg;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D ambiguous_methods_generic_;
  D ambiguous_methods_ordered_;
  D ambiguous_methods_ambiguous_;
  D ambiguous_methods_arguments_;
} _KLambiguous_methodsGVKe;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D ambiguous_methods_generic_;
  D ambiguous_methods_ordered_;
  D ambiguous_methods_ambiguous_;
  D ambiguous_methods_arguments_;
} _KLambiguous_methods_errorGVKg;


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsealed_generic_functionGVKe KsubtypeQVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D KlistVKdI (D objects_);
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D KPmethod_number_requiredVKgI (D);
D KPmethod_specializerVKgI (D, D);
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
D KsubtypeQVKdMM10I (D class_1_, D class_2_);
D Kobject_classVKdI (D);
D Kgrounded_subtypeQVKeI (D type1_, D type2_);
D KelementVKdMM11I (D vector_, D index_, D Urest_, D default_);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
D KerrorVKdMM1I (D string_, D arguments_);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLclassGVKd KLsimple_typechecked_gf_cache_infoGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_gf_cache_infoGVKgW;
extern _KLclassGVKd KLcache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLcache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLgf_cache_infoGVKg;
extern _KLmm_wrapperGVKi_0 KLgf_cache_infoGVKgW;
extern _KLclassGVKd KLcommon_root_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLcommon_root_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLlinear_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLlinear_by_class_discriminatorGVKgW;
extern _KLclassGVKd KLhashed_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLhashed_by_class_discriminatorGVKgW;
D Kcache_header_puntYdispatch_engine_internalVdylanI (D ds_, D cache_, D e_);
extern _KLclassGVKd KLmonomorphic_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLmonomorphic_by_class_discriminatorGVKgW;
extern _KLclassGVKd KLclass_keyed_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLclass_keyed_discriminatorGVKgW;
D Kckd_sizeVKgI (D);
extern _KLincremental_generic_functionGVKe KLVKd;
D Kckd_refVKgI (D, D);
D Kckd_ref_setterVKgI (D, D, D);
D Kgrounded_class_keyed_discriminator_defaultVKgI (D);
D Kgrounded_class_keyed_discriminator_default_setterYdispatch_engine_internalVdylanI (D, D);
extern _KLclassGVKd KLif_type_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLif_type_discriminatorGVKgW;
extern _KLclassGVKd KLtypecheck_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLtypecheck_discriminatorGVKgW;
extern _KLclassGVKd KLsingleton_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLsingleton_discriminatorGVKgW;
extern _KLclassGVKd KLdiscriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLdiscriminatorGVKgW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLdispatch_stateGYdispatch_engine_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLdispatch_stateGYdispatch_engine_internalVdylanW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
D KEEVKdI (D x_, D y_);
extern _KLclassGVKd KLby_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLby_class_discriminatorGVKgW;
D Kckd_lookupYdispatch_engine_internalVdylanI (D, D);
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
D Kadd_argnumYdispatch_engine_internalVdylanI (D, D);
D Kckd_addXYdispatch_engine_internalVdylanI (D, D, D);
D Ksingleton_discriminator_elementVKgI (D, D, D);
D Ksingleton_discriminator_element_setterVKgI (D, D, D);
D Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI (D old_, D next_, D gf_);
extern _KLclassGVKd KLterminal_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLterminal_engine_nodeGVKgW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KmemberQVKdMM3I (D value_, D list_, D Urest_, D test_);
extern _KLsimple_methodGVKe KEEVKd;
extern _KLclassGVKd KLprofiling_call_site_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLprofiling_call_site_cache_header_engine_nodeGVKgW;
D Kbootstrap_typed_allocate_engine_nodeVKgI (D, D, D);
D KdispinapplicableYdispatch_engine_internalVdylanI (D);
D Kreconstruct_args_from_mepargsVKeI (D, D);
extern _KLsymbolGVKd KJarguments_;
extern _KLsymbolGVKd KJformat_string_;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
D KdispwarnYdispatch_engine_internalVdylanI (D, D);
D Kmake_ambiguous_methods_engine_nodeVKgI (D, D);
extern _KLclassGVKd KLaccessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLaccessor_methodGVKeW;
D Kmake_slot_access_engine_nodeYdispatch_engine_internalVdylanI (D, D);
D Kmake_single_method_engine_nodeVKgI (D, D, D, D);
extern _KLsymbolGVKd KJordered_;
D Kmake_slot_accessing_next_method_chainVKgI (D, D);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLwarningGVKd;
extern _KLmm_wrapperGVKi_0 KLwarningGVKdW;
extern _KLclassGVKd KLsimple_conditionGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_conditionGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLserious_conditionGVKd;
extern _KLmm_wrapperGVKi_0 KLserious_conditionGVKdW;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
D Kgeneral_rcpl_class_instanceQVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_stringVKdHLsimple_conditionG;
extern _KLinstance_slot_descriptorGVKe Kcondition_format_argumentsVKdHLsimple_conditionG;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdispatch_engine_moduleYdylan_userVdylan;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLsealed_generic_functionGVKe Kfunction_signatureVKe;
extern _KLsealed_generic_functionGVKe Kkeyword_specifiersVKe;
D Kmake_by_class_discriminatorYdispatch_engine_internalVdylanI (D, D, D);
D Kmake_if_type_discriminatorVKgI (D, D, D, D, D);
D Kmake_typecheck_discriminatorVKgI (D, D, D, D);
extern _KLclassGVKd KLgetter_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLgetter_accessor_methodGVKeW;
extern _KLclassGVKd KLsetter_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsetter_accessor_methodGVKeW;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
D Kconcrete_subtypeQVKeI (D type1_, D type2_, D dep_);
D Kunion_instanceQVKiI (D x_, D u_);
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
D Kgrounded_has_instancesQVKeI (D class_, D type_);
D Knext_free_argnumYdispatch_engine_internalVdylanI (D, D);
D Kargnum_consideredQYdispatch_engine_internalVdylanI (D, D);
D Kmake_by_singleton_class_discriminatorYdispatch_engine_internalVdylanI (D, D, D, D);
D Kmake_single_class_singleton_discriminatorVKgI (D, D, D);
extern _KLclassGVKd KLlimited_typeGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_typeGVKeW;
D Kdispatch_startYdispatch_engine_internalVdylanI (D);
D Kdispatch_start_setterYdispatch_engine_internalVdylanI (D, D);
extern _KLclassGVKd KLpartial_dispatch_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLpartial_dispatch_cache_header_engine_nodeGVKgW;
D Khandle_partial_dispatch_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_);
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
D Khandle_simple_typechecked_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_);
D Khandle_simple_call_site_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_);
extern _KLclassGVKd KLsimple_call_site_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_call_site_cache_header_engine_nodeGVKgW;
D Khandle_profiling_call_site_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_);
D Khandle_unknown_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_);
D Kcompute_argument_precheck_maskYdispatch_engine_internalVdylanI (D ds_, D cache_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsignatureG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern D Tpartial_dispatch_megamorphic_puntQTYdispatch_engine_internalVdylan;
extern D Ddirect_object_mm_wrappersVKi;
extern D Dabsent_engine_nodeVKg;
extern D Tprofile_all_terminal_engine_nodesQTYdispatch_engine_internalVdylan;
extern D Tcall_site_caches_enabledQTYdispatch_engine_internalVdylan;
extern D Tpartial_dispatchQTYdispatch_engine_internalVdylan;

/* Defined object declarations */

D Kcompute_dispatch_engineYdispatch_engine_internalVdylanI (D);
D Kcompute_dispatch_from_rootYdispatch_engine_internalVdylanI (D, D);
D Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI (D, D, D);
D Kcompute_headed_methodsYdispatch_engine_internalVdylanI (D);
D Ksame_specializerQVKgI (D, D);
extern _KLsimple_methodGVKe Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan;
D Ksubst_engine_node_1Ydispatch_engine_internalVdylanI (D, D, D);
D Kcompute_sorted_applicable_methodsVKgI (D, D);
D KPmethod_applicableQYdispatch_engine_internalVdylanI (D, D);
D Kcompute_sorted_applicable_methods_1Ydispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe KPorder_methodsYdispatch_engine_internalVdylan;
D KPorder_methodsYdispatch_engine_internalVdylanI (D, D, D);
static _KLsymbolGVKd KJE_;
D KPorder_specializersYdispatch_engine_internalVdylanI (D, D, D);
static _KLsymbolGVKd KJLG_;
static _KLbyte_stringGVKd_2 K16;
static _KLsymbolGVKd KJL_;
static _KLsymbolGVKd KJG_;
D KPclassLYdispatch_engine_internalVdylanI (D, D, D);
D KPorder_specializers_defaultYdispatch_engine_internalVdylanI (D, D);
static _KLbyte_stringGVKd_70 K21;
static _KLbyte_stringGVKd_1 K22;
static _KLbyte_stringGVKd_1 K23;
static _KLbyte_stringGVKd_1 K24;
static _KLsignatureAvaluesGVKi K25;
static _KLsimple_object_vectorGVKd_3 K26;
static _KLsimple_object_vectorGVKd_1 K27;
static D Kcheck_subsequent_ambiguitiesF31I (D, D, D, D, D);
static D Kmake_ambiguousF30I (D, D, D);
static D Kprecedes_allQF33I (D, D, D, D);
D Ksubst_engine_node_2Ydispatch_engine_internalVdylanI (D, D, D);
static _KLbyte_stringGVKd_43 K35;
static _KLsignatureGVKe K36;
static _KLsimple_object_vectorGVKd_3 K37;
D Kprune_methods_by_known_classYdispatch_engine_internalVdylanI (D, D, D);
D Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI (D, D, D);
D Kcompute_subdiscriminator_for_argYdispatch_engine_internalVdylanI (D, D, D, D);
static _KLbyte_stringGVKd_37 K41;
static _KLbyte_stringGVKd_31 K42;
static _KLbyte_stringGVKd_32 K43;
D Kcompute_more_dispatch_engineYdispatch_engine_internalVdylanI (D);
D Kselect_next_arg_for_discriminationYdispatch_engine_internalVdylanI (D);
D Kcompute_discriminator_for_argYdispatch_engine_internalVdylanI (D, D);
D Kcompute_terminal_engine_nodeYdispatch_engine_internalVdylanI (D);
D Kdetermine_call_keywordsYdispatch_engine_internalVdylanI (D, D);
D Ktransmogrify_method_list_groundedYdispatch_engine_internalVdylanI (D, D, D, D, D);
extern _KLsimple_methodGVKe KPorder_methods_desperatelyYdispatch_engine_internalVdylan;
D KPorder_methods_desperatelyYdispatch_engine_internalVdylanI (D, D, D);
static _KLsymbolGVKd KJgeneric_;
static _KLsymbolGVKd KJambiguous_;
static _KLbyte_stringGVKd_114 K54;
extern _KLclassGVKd KLambiguous_methods_warningGVKg;
extern _KLmm_wrapperGVKi_0 KLambiguous_methods_warningGVKgW;
D Ktransmogrify_method_list_tail_groundedYdispatch_engine_internalVdylanI (D, D, D, D, D);
static _KLbyte_stringGVKd_146 K58;
static _KLimplementation_classGVKe K59;
static _KLsimple_object_vectorGVKd_6 K60;
extern _KLkeyword_methodGVKe KLambiguous_methods_warningGZ32ZconstructorYdispatch_engine_internalVdylanMM0;
D KLambiguous_methods_warningGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K63;
static _KLsimple_object_vectorGVKd_6 K64;
extern _KLclassGVKd KLambiguous_methodsGVKe;
extern _KLmm_wrapperGVKi_0 KLambiguous_methodsGVKeW;
static _KLimplementation_classGVKe K67;
static _KLsimple_object_vectorGVKd_1 K68;
static _KLsimple_object_vectorGVKd_6 K69;
static _KLsimple_object_vectorGVKd_2 K70;
static _KLsimple_object_vectorGVKd_3 K71;
static _KLsimple_object_vectorGVKd_4 K72;
extern _KLinstance_slot_descriptorGVKe Kambiguous_methods_genericVKeHLambiguous_methodsG;
extern _KLinstance_slot_descriptorGVKe Kambiguous_methods_orderedVKeHLambiguous_methodsG;
extern _KLinstance_slot_descriptorGVKe Kambiguous_methods_ambiguousVKeHLambiguous_methodsG;
extern _KLinstance_slot_descriptorGVKe Kambiguous_methods_argumentsVKeHLambiguous_methodsG;
extern _KLsealed_generic_functionGVKe Kambiguous_methods_argumentsVKe;
extern _KLgetter_methodGVKi Kambiguous_methods_argumentsVKeMM0;
static _KLpairGVKd K79;
static _KLbyte_stringGVKd_27 K80;
extern _KLsealed_generic_functionGVKe Kambiguous_methods_ambiguousVKe;
extern _KLgetter_methodGVKi Kambiguous_methods_ambiguousVKeMM0;
static _KLpairGVKd K83;
static _KLbyte_stringGVKd_27 K84;
extern _KLsealed_generic_functionGVKe Kambiguous_methods_orderedVKe;
extern _KLgetter_methodGVKi Kambiguous_methods_orderedVKeMM0;
static _KLpairGVKd K87;
static _KLbyte_stringGVKd_25 K88;
extern _KLsealed_generic_functionGVKe Kambiguous_methods_genericVKe;
extern _KLgetter_methodGVKi Kambiguous_methods_genericVKeMM0;
static _KLpairGVKd K91;
static _KLbyte_stringGVKd_25 K92;
static _KLbyte_stringGVKd_19 K93;
static _KLbyte_stringGVKd_23 K94;
static _KLkeyword_signatureAvaluesGVKi K95;
static _KLsimple_object_vectorGVKd_12 K96;
static _KLsimple_object_vectorGVKd_6 K97;
static _KLsimple_object_vectorGVKd_1 K98;
static _KLbyte_stringGVKd_27 K99;
static _KLbyte_stringGVKd_9 K100;
static _KLbyte_stringGVKd_7 K101;
D KPorder_specializers_desperatelyYdispatch_engine_internalVdylanI (D, D, D);
static _KLbyte_stringGVKd_23 K103;
static _KLbyte_stringGVKd_30 K104;
D Kponder_this_argYdispatch_engine_internalVdylanI (D, D, D, D);
D Ksecondary_dispatch_specializerQYdispatch_engine_internalVdylanI (D, D);
static _KLunionGVKe K107;
static _KLsingletonGVKd K108;
D Kcompute_default_subdiscriminatorYdispatch_engine_internalVdylanI (D, D, D, D, D);
D Kponder_a_specializerYdispatch_engine_internalVdylanI (D, D, D, D, D);
static D KfooF112I (D, D, D, D, D, D, D);
static D KsubsumedQF114I (D, D);
D Khandle_standard_dispatch_missYdispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe Ksame_specializersQVKg;
D Ksame_specializersQVKgI (D, D);
static _KLsignatureAvaluesGVKi K118;
extern _KLsimple_methodGVKe Ksame_specializers_spreadQVKg;
D Ksame_specializers_spreadQVKgI (D req1_, D nreq1_, D req2_, D nreq2_);
static _KLsignatureAvaluesGVKi K121;
static _KLsimple_object_vectorGVKd_4 K122;
extern _KLsimple_methodGVKe Ksame_specializerQVKg;
static _KLsignatureAvaluesGVKi K124;
extern _KLclassGVKd KLambiguous_methods_errorGVKg;
extern _KLmm_wrapperGVKi_0 KLambiguous_methods_errorGVKgW;
static _KLimplementation_classGVKe K127;
extern _KLkeyword_methodGVKe KLambiguous_methods_errorGZ32ZconstructorYdispatch_engine_internalVdylanMM0;
D KLambiguous_methods_errorGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_2 K130;
static _KLsimple_object_vectorGVKd_7 K131;
static _KLkeyword_signatureAvaluesGVKi K132;
static _KLsimple_object_vectorGVKd_1 K133;
static _KLbyte_stringGVKd_25 K134;
extern _KLsimple_methodGVKe Kcompute_sorted_applicable_methodsVKg;
static _KLsignatureAvaluesGVKi K136;
static _KLsimple_object_vectorGVKd_2 K137;
static _KLpairGVKd K138;
static _KLpairGVKd K139;

/* Indirection variables */

static D IKJE_ = &KJE_;
static D IKJLG_ = &KJLG_;
static D IKJL_ = &KJL_;
static D IKJG_ = &KJG_;
static D IKJgeneric_ = &KJgeneric_;
static D IKJambiguous_ = &KJambiguous_;

/* Variables */

D ambiguous_methods_genericVKe = &Kambiguous_methods_genericVKe;
D ambiguous_methods_orderedVKe = &Kambiguous_methods_orderedVKe;
D ambiguous_methods_ambiguousVKe = &Kambiguous_methods_ambiguousVKe;
D ambiguous_methods_argumentsVKe = &Kambiguous_methods_argumentsVKe;
D walk_existing_dispatch_engineYdispatch_engine_internalVdylan = &Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan;
D compute_sorted_applicable_methodsVKg = &Kcompute_sorted_applicable_methodsVKg;
D Tgracefully_dispatch_to_ambiguous_methodsTVKg = &KPtrueVKi;
D Tpermissibly_ambiguous_genericsTVKe = &KPunboundVKi;
D Lambiguous_methodsGVKe = &KLambiguous_methodsGVKe;
D Lambiguous_methods_warningGVKg = &KLambiguous_methods_warningGVKg;
D Lambiguous_methods_errorGVKg = &KLambiguous_methods_errorGVKg;
D same_specializerQVKg = &Ksame_specializerQVKg;
D same_specializers_spreadQVKg = &Ksame_specializers_spreadQVKg;
D same_specializersQVKg = &Ksame_specializersQVKg;
D Tgracefully_ignore_duplicate_methodsTYdispatch_engine_internalVdylan = &KPtrueVKi;

/* Objects */

_KLsimple_methodGVKe Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K36,
  &Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI
};

_KLsimple_methodGVKe KPorder_methodsYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K25,
  &KPorder_methodsYdispatch_engine_internalVdylanI
};

static _KLsymbolGVKd KJE_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K24
};

static _KLsymbolGVKd KJLG_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K16
};

static _KLbyte_stringGVKd_2 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "<>"
};

static _KLsymbolGVKd KJL_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K23
};

static _KLsymbolGVKd KJG_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K22
};

static _KLbyte_stringGVKd_70 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 281,
  "Can\'t order specializers - arg/reference class %= is neither %= nor %="
};

static _KLbyte_stringGVKd_1 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  ">"
};

static _KLbyte_stringGVKd_1 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "<"
};

static _KLbyte_stringGVKd_1 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 5,
  "="
};

static _KLsignatureAvaluesGVKi K25 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K26,
  &K27
};

static _KLsimple_object_vectorGVKd_3 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmethodGVKd,
  &KLmethodGVKd,
  &KLsimple_object_vectorGVKd
};

static _KLsimple_object_vectorGVKd_1 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

static _KLbyte_stringGVKd_43 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 173,
  "Unhandled discriminator in substitution: %="
};

static _KLsignatureGVKe K36 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K37
};

static _KLsimple_object_vectorGVKd_3 K37 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KLobjectGVKd,
  &KLfunctionGVKd
};

static _KLbyte_stringGVKd_37 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Hey, you\'re not supposed to get here!"
};

static _KLbyte_stringGVKd_31 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Method list incorrectly pruned?"
};

static _KLbyte_stringGVKd_32 K43 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

_KLsimple_methodGVKe KPorder_methods_desperatelyYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K25,
  &KPorder_methods_desperatelyYdispatch_engine_internalVdylanI
};

static _KLsymbolGVKd KJgeneric_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K101
};

static _KLsymbolGVKd KJambiguous_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K100
};

static _KLbyte_stringGVKd_114 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 457,
  "Method specificity of unorderable methods %= applying %= to %= was determined with arbitrary and capricious rules."
};

_KLclassGVKd KLambiguous_methods_warningGVKg = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K99,
  &K59,
  (D) 1,
  &Kdispatch_engine_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLambiguous_methods_warningGVKgW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K59,
  (D) 1,
  25,
  33554439,
  (D) 1
};

static _KLbyte_stringGVKd_146 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 585,
  "Applying %= to %=, ambiguous method ordering of group %= after successfully ordered methods %= was determined with arbitrary and capricious rules."
};

static _KLimplementation_classGVKe K59 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102105,
  &KLambiguous_methods_warningGVKg,
  &KLambiguous_methods_warningGVKgW,
  &KPfalseVKi,
  &K60,
  (D) 6225,
  &KLambiguous_methods_warningGZ32ZconstructorYdispatch_engine_internalVdylanMM0,
  &K63,
  &K64,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K60,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &Kcondition_format_stringVKdHLsimple_conditionG,
  &Kcondition_format_argumentsVKdHLsimple_conditionG,
  &Kambiguous_methods_genericVKeHLambiguous_methodsG,
  &Kambiguous_methods_orderedVKeHLambiguous_methodsG,
  &Kambiguous_methods_ambiguousVKeHLambiguous_methodsG,
  &Kambiguous_methods_argumentsVKeHLambiguous_methodsG
};

_KLkeyword_methodGVKe KLambiguous_methods_warningGZ32ZconstructorYdispatch_engine_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K95,
  &key_mep_2,
  &KLambiguous_methods_warningGZ32ZconstructorYdispatch_engine_internalVdylanMM0I,
  &K96
};

static _KLsimple_object_vectorGVKd_2 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLambiguous_methodsGVKe,
  &KLwarningGVKd
};

static _KLsimple_object_vectorGVKd_6 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLwarningGVKd,
  &KLsimple_conditionGVKe,
  &KLambiguous_methodsGVKe,
  &KLambiguous_methods_warningGVKg
};

_KLclassGVKd KLambiguous_methodsGVKe = {
  &KLclassGVKdW /* wrapper */,
  &Kgeneral_rcpl_class_instanceQVKiI,
  &K93,
  &K67,
  (D) 1,
  &Kdylan_extensions_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLambiguous_methodsGVKeW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K67,
  (D) 1,
  25,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K67 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 410255385,
  &KLambiguous_methodsGVKe,
  &KLambiguous_methodsGVKeW,
  &KPfalseVKi,
  &K60,
  (D) 6217,
  &Kdefault_class_constructorVKi,
  &K68,
  &K69,
  (D) 13,
  &K70,
  &K71,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K138,
  &KPempty_vectorVKi,
  &K72,
  &K60,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_conditionGVKe
};

static _KLsimple_object_vectorGVKd_6 K69 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLsimple_conditionGVKe,
  &KLambiguous_methodsGVKe,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  (D) 17,
  (D) 21
};

static _KLsimple_object_vectorGVKd_3 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLwarningGVKd
};

static _KLsimple_object_vectorGVKd_4 K72 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kambiguous_methods_genericVKeHLambiguous_methodsG,
  &Kambiguous_methods_orderedVKeHLambiguous_methodsG,
  &Kambiguous_methods_ambiguousVKeHLambiguous_methodsG,
  &Kambiguous_methods_argumentsVKeHLambiguous_methodsG
};

_KLinstance_slot_descriptorGVKe Kambiguous_methods_genericVKeHLambiguous_methodsG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLambiguous_methodsGVKe,
  &KJgeneric_,
  &Kambiguous_methods_genericVKe,
  &KPfalseVKi,
  &KLgeneric_functionGVKd
};

_KLinstance_slot_descriptorGVKe Kambiguous_methods_orderedVKeHLambiguous_methodsG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_listVKi,
  &KLambiguous_methodsGVKe,
  &KJordered_,
  &Kambiguous_methods_orderedVKe,
  &KPfalseVKi,
  &KLlistGVKd
};

_KLinstance_slot_descriptorGVKe Kambiguous_methods_ambiguousVKeHLambiguous_methodsG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLambiguous_methodsGVKe,
  &KJambiguous_,
  &Kambiguous_methods_ambiguousVKe,
  &KPfalseVKi,
  &KLlistGVKd
};

_KLinstance_slot_descriptorGVKe Kambiguous_methods_argumentsVKeHLambiguous_methodsG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLambiguous_methodsGVKe,
  &KJarguments_,
  &Kambiguous_methods_argumentsVKe,
  &KPfalseVKi,
  &KLsequenceGVKd
};

_KLsealed_generic_functionGVKe Kambiguous_methods_argumentsVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K80,
  &K79,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kambiguous_methods_argumentsVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kambiguous_methods_argumentsVKeHLambiguous_methodsG
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &Kambiguous_methods_argumentsVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K80 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "ambiguous-methods-arguments"
};

_KLsealed_generic_functionGVKe Kambiguous_methods_ambiguousVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K84,
  &K83,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kambiguous_methods_ambiguousVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kambiguous_methods_ambiguousVKeHLambiguous_methodsG
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &Kambiguous_methods_ambiguousVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K84 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "ambiguous-methods-ambiguous"
};

_KLsealed_generic_functionGVKe Kambiguous_methods_orderedVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K88,
  &K87,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kambiguous_methods_orderedVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kambiguous_methods_orderedVKeHLambiguous_methodsG
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &Kambiguous_methods_orderedVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K88 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "ambiguous-methods-ordered"
};

_KLsealed_generic_functionGVKe Kambiguous_methods_genericVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K92,
  &K91,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kambiguous_methods_genericVKeMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kambiguous_methods_genericVKeHLambiguous_methodsG
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &Kambiguous_methods_genericVKeMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K92 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "ambiguous-methods-generic"
};

static _KLbyte_stringGVKd_19 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<ambiguous-methods>"
};

static _KLbyte_stringGVKd_23 K94 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLkeyword_signatureAvaluesGVKi K95 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K97,
  &KDsignature_LobjectG_typesVKi,
  &K98
};

static _KLsimple_object_vectorGVKd_12 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 49,
  &KJformat_string_,
  &KPempty_stringVKi,
  &KJformat_arguments_,
  &KPempty_vectorVKi,
  &KJgeneric_,
  &KPunboundVKi,
  &KJordered_,
  &KPempty_listVKi,
  &KJambiguous_,
  &KPunboundVKi,
  &KJarguments_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_6 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJformat_string_,
  &KJformat_arguments_,
  &KJgeneric_,
  &KJordered_,
  &KJambiguous_,
  &KJarguments_
};

static _KLsimple_object_vectorGVKd_1 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLambiguous_methods_warningGVKg
};

static _KLbyte_stringGVKd_27 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "<ambiguous-methods-warning>"
};

static _KLbyte_stringGVKd_9 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "ambiguous"
};

static _KLbyte_stringGVKd_7 K101 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "generic"
};

static _KLbyte_stringGVKd_23 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "You shouldn\'t get here!"
};

static _KLbyte_stringGVKd_30 K104 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "You shouldn\'t get here either!"
};

static _KLunionGVKe K107 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K108,
  &KLtypeGVKd
};

static _KLsingletonGVKd K108 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsimple_methodGVKe Ksame_specializersQVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K118,
  &Ksame_specializersQVKgI
};

static _KLsignatureAvaluesGVKi K118 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LsignatureG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Ksame_specializers_spreadQVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K121,
  &Ksame_specializers_spreadQVKgI
};

static _KLsignatureAvaluesGVKi K121 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K122,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K122 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Ksame_specializerQVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K124,
  &Ksame_specializerQVKgI
};

static _KLsignatureAvaluesGVKi K124 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLclassGVKd KLambiguous_methods_errorGVKg = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K134,
  &K127,
  (D) 1,
  &Kdispatch_engine_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLambiguous_methods_errorGVKgW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K127,
  (D) 2049,
  25,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K127 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102105,
  &KLambiguous_methods_errorGVKg,
  &KLambiguous_methods_errorGVKgW,
  &KPfalseVKi,
  &K60,
  (D) 6233,
  &KLambiguous_methods_errorGZ32ZconstructorYdispatch_engine_internalVdylanMM0,
  &K130,
  &K131,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K60,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLambiguous_methods_errorGZ32ZconstructorYdispatch_engine_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_8,
  &K132,
  &key_mep_2,
  &KLambiguous_methods_errorGZ32ZconstructorYdispatch_engine_internalVdylanMM0I,
  &K96
};

static _KLsimple_object_vectorGVKd_2 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLambiguous_methodsGVKe,
  &KLerrorGVKd
};

static _KLsimple_object_vectorGVKd_7 K131 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLconditionGVKd,
  &KLserious_conditionGVKd,
  &KLerrorGVKd,
  &KLsimple_conditionGVKe,
  &KLambiguous_methodsGVKe,
  &KLambiguous_methods_errorGVKg
};

static _KLkeyword_signatureAvaluesGVKi K132 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K97,
  &KDsignature_LobjectG_typesVKi,
  &K133
};

static _KLsimple_object_vectorGVKd_1 K133 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLambiguous_methods_errorGVKg
};

static _KLbyte_stringGVKd_25 K134 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "<ambiguous-methods-error>"
};

_KLsimple_methodGVKe Kcompute_sorted_applicable_methodsVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K136,
  &Kcompute_sorted_applicable_methodsVKgI
};

static _KLsignatureAvaluesGVKi K136 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K137,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K137 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLsimple_object_vectorGVKd
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &KLambiguous_methods_errorGVKg,
  &K139
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &KLambiguous_methods_warningGVKg,
  &KPempty_listVKi
};

/* Code */

D Kcompute_dispatch_engineYdispatch_engine_internalVdylanI (D ds_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20_0;
  D T21_0;
  D T22_0;
  D T23_0;
  D T24_0;
  D T25_0;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_1 T37 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T38_0;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:71
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:77
  T26 = SLOT_VALUE_INITD(ds_, 6);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:78
  T27 = SLOT_VALUE(ds_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:80
  T2 = Tcall_site_caches_enabledQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:80
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
    T30 = primitive_instanceQ(T27,&KLgeneric_functionGVKd);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
    if (T30 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:92
      T8_0 = Khandle_standard_dispatch_missYdispatch_engine_internalVdylanI(ds_, T26, T27);
      T24_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
      T31 = primitive_instanceQ(T27,&KLpartial_dispatch_cache_header_engine_nodeGVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:94
        T9_0 = Khandle_partial_dispatch_cache_headYdispatch_engine_internalVdylanI(ds_, T26, T27);
        T23_0 = T9_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
        T32 = primitive_instanceQ(T27,&KLsimple_typechecked_cache_header_engine_nodeGVKg);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
        if (T32 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:96
          T10_0 = Khandle_simple_typechecked_cache_headYdispatch_engine_internalVdylanI(ds_, T26, T27);
          T22_0 = T10_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
          T33 = primitive_instanceQ(T27,&KLcommon_root_cache_header_engine_nodeGVKg);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
          if (T33 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:98
            T11_0 = Khandle_simple_call_site_cache_headYdispatch_engine_internalVdylanI(ds_, T26, T27);
            T21_0 = T11_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
            T34 = primitive_instanceQ(T27,&KLsimple_call_site_cache_header_engine_nodeGVKg);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
            if (T34 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:100
              T12 = Tpartial_dispatchQTYdispatch_engine_internalVdylan;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:100
              if (T12 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:101
                T13_0 = Kcache_header_puntYdispatch_engine_internalVdylanI(ds_, T26, T27);
                T15_0 = T13_0;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:103
                T14_0 = Khandle_simple_call_site_cache_headYdispatch_engine_internalVdylanI(ds_, T26, T27);
                T15_0 = T14_0;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:100
              T20_0 = T15_0;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
              T35 = primitive_instanceQ(T27,&KLprofiling_call_site_cache_header_engine_nodeGVKg);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
              if (T35 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:106
                T16_0 = Khandle_profiling_call_site_cache_headYdispatch_engine_internalVdylanI(ds_, T26, T27);
                T19_0 = T16_0;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
                T36 = primitive_instanceQ(T27,&KLcache_header_engine_nodeGVKg);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
                if (T36 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:108
                  T17_0 = Khandle_unknown_cache_headYdispatch_engine_internalVdylanI(ds_, T26, T27);
                  T18_0 = T17_0;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
                  T37.vector_element_[0] = T27;
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
                  T38_0 = KerrorVKdMM1I(&K43, &T37);
                  T18_0 = T38_0;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
                T19_0 = T18_0;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
              T20_0 = T19_0;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
            T21_0 = T20_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
          T22_0 = T21_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
        T23_0 = T22_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
      T24_0 = T23_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:90
    T25_0 = T24_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:81
    T28 = primitive_instanceQ(T27,&KLcommon_root_cache_header_engine_nodeGVKg);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:81
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:83
      T3_0 = Khandle_simple_call_site_cache_headYdispatch_engine_internalVdylanI(ds_, T26, T27);
      T7_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:81
      T29 = primitive_instanceQ(T27,&KLcache_header_engine_nodeGVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:81
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:85
        T4_0 = Kcache_header_puntYdispatch_engine_internalVdylanI(ds_, T26, T27);
        T6_0 = T4_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:87
        T5_0 = Khandle_standard_dispatch_missYdispatch_engine_internalVdylanI(ds_, T26, T27);
        T6_0 = T5_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:81
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:81
    T25_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:80
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:71
  MV_SET_COUNT(1);
  return(T25_0);
}

D Kcompute_dispatch_from_rootYdispatch_engine_internalVdylanI (D ds_, D parent_) {
  D oengine_;
  D nengine_;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:128
  oengine_ = Kdispatch_startYdispatch_engine_internalVdylanI(parent_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:129
  nengine_ = Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI(ds_, oengine_, &Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:130
  T6 = KEEVKdI(oengine_, nengine_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:130
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
    T7 = primitive_idQ(nengine_,oengine_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
    if (T7 != &KPfalseVKi) {
      T8 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
      T10 = primitive_idQ(oengine_,Dabsent_engine_nodeVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
      T9 = primitive_not(T10);
      T8 = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
      Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(nengine_, oengine_, ds_);
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:131
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:132
    Kdispatch_start_setterYdispatch_engine_internalVdylanI(nengine_, parent_);
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:134
  T5_0 = nengine_;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:126
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI (D ds_, D e_, D recurse_) {
  D eF3;
  D T4;
  D all_accounted_forQ_;
  D next_eF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D new_eF11;
  D T12_0;
  D T13_0;
  D T14_0;
  D eF15;
  D eF16;
  D key_;
  D next_eF18;
  D new_eF19;
  D T20_0;
  D T21_0;
  D T22_0;
  D eF23;
  D testp_;
  D next_eF25;
  D new_eF26;
  D T27;
  D T28_0;
  D eF29;
  D T30;
  D new_eF31;
  D T32;
  D T33_0;
  D T34_0;
  D eF35;
  D lookup_;
  D next_eF37;
  D new_eF38;
  D T39_0;
  D T40_0;
  D T41_0;
  D T42_0;
  D T43_0;
  D eF44;
  D new_;
  D T46_0;
  D T47;
  D T48_0;
  D T49_0;
  D T50_0;
  D T51_0;
  D T52_0;
  D T53_0;
  D T54_0;
  D T55_0;
  D T56;
  D T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  D shiftF62;
  D T63;
  D T64;
  D T65;
  DWORD mxF66;
  DWORD T67;
  DWORD T68;
  DWORD T69;
  D T70;
  DWORD T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  D T80;
  D T81;
  D T82;
  DADDR T83;
  DWORD bitsF84;
  D T85;
  D T86;
  D mm_wrapperF87;
  D T88;
  D mm_wrapperF89;
  DADDR T90;
  D T91;
  DWORD T92;
  DWORD T93;
  DADDR T94;
  DADDR T95;
  D T96;
  D T97;
  D T98;
  D T99;
  D T100;
  D T101;
  D T102;
  D T103;
  D T104;
  D T105;
  D T106;
  D T107;
  DWORD T108;
  DWORD T109;
  DWORD T110;
  DWORD T111;
  D shiftF112;
  D T113;
  D T114;
  D T115;
  DWORD mxF116;
  DWORD T117;
  DWORD T118;
  DWORD T119;
  D T120;
  DWORD T121;
  DWORD T122;
  DWORD T123;
  DWORD T124;
  DWORD T125;
  DWORD T126;
  DWORD T127;
  DWORD T128;
  DWORD T129;
  D T130;
  D T131;
  D T132;
  D T133;
  D T134;
  DADDR T135;
  DWORD bitsF136;
  D T137;
  D T138;
  D mm_wrapperF139;
  D T140;
  D mm_wrapperF141;
  DADDR T142;
  D T143;
  DWORD T144;
  DWORD T145;
  DADDR T146;
  DADDR T147;
  D T148;
  D T149;
  DADDR T150;
  D T151;
  DWORD T152;
  DWORD T153;
  D T154;
  D T155;
  D T156;
  D T157;
  D T158;
  D T159;
  D T160;
  D T161;
  D T162;
  D T163;
  D T164;
  D T165;
  D T166;
  D T167;
  D T168;
  D T169;
  D T170;
  D T171;
  D T172;
  D T173;
  D T174_0;
  D T175;
  D T176;
  D T177;
  D T178;
  D T179;
  D T180;
  D T181;
  D T182;
  D T183;
  _KLsimple_object_vectorGVKd_1 T184 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T185_0;
  D T186;
  D T187;
  D T188;
  D T189;
  D T190;
  D T191;
  D T192;
  D T193;
  D T194;
  D T195;
  D T196;
  D T197_0;
  D T198;
  _KLsimple_object_vectorGVKd_1 T199 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T200_0;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:284
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
  T56 = primitive_instanceQ(e_,&KLby_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
  if (T56 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:288
    eF3 = e_;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T57 = SLOT_VALUE_INITD(eF3, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T58 = primitive_cast_integer_as_raw(T57);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T59 = primitive_machine_word_shift_right(T58,6);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T60 = primitive_machine_word_logand(T59,-4);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T61 = primitive_machine_word_logior(T60,1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    shiftF62 = (D) 33;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    mxF66 = 4;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T65 = shiftF62;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T69 = primitive_cast_integer_as_raw(T65);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T70 = primitive_machine_word_equalQ(T69,257);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    if (T70 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
      shiftF62 = (D) 129;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
      T64 = shiftF62;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
      T68 = mxF66;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
      T73 = primitive_cast_integer_as_raw(T64);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
      T72 = primitive_machine_word_shift_right(T73,2);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
      T71 = primitive_machine_word_shift_left_signal_overflow(T68,T72);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
      mxF66 = T71;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T63 = shiftF62;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T67 = mxF66;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T76 = primitive_cast_integer_as_raw(T63);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T75 = primitive_machine_word_shift_right(T76,2);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T74 = primitive_machine_word_shift_left_signal_overflow(T67,T75);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T77 = primitive_machine_word_logior(T74,1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T78 = primitive_machine_word_subtract_signal_overflow(T77,4);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T79 = primitive_machine_word_logand(T61,T78);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:291
    T80 = primitive_cast_raw_as_integer(T79);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:293
    T81 = SLOT_VALUE(ds_, 2);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:293
    T82 = REPEATED_D_SLOT_VALUE_TAGGED(T81, 1, T79);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:294
    T4 = Kobject_classVKdI(T82);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:295
    all_accounted_forQ_ = Kprune_methods_by_known_classYdispatch_engine_internalVdylanI(T80, T4, ds_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    T83 = primitive_cast_pointer_as_raw(T82);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    bitsF84 = primitive_machine_word_logand(T83,3);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    T85 = primitive_machine_word_equalQ(bitsF84,0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    if (T85 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
      T86 = primitive_element(T82,0,0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
      mm_wrapperF87 = T86;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
      T94 = primitive_cast_pointer_as_raw(mm_wrapperF87);
      T90 = T94;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
      T88 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF84,0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
      mm_wrapperF89 = T88;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
      T95 = primitive_cast_pointer_as_raw(mm_wrapperF89);
      T90 = T95;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    T92 = primitive_machine_word_logand(T90,-4);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    T93 = primitive_machine_word_logior(T92,1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:296
    T91 = primitive_cast_raw_as_integer(T93);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:297
    next_eF6 = Kckd_lookupYdispatch_engine_internalVdylanI(T91, eF3);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
    if (all_accounted_forQ_ != &KPfalseVKi) {
      T7 = all_accounted_forQ_;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
      T96 = primitive_instanceQ(next_eF6,&KLabsent_engine_nodeGVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
      T97 = primitive_not(T96);
      T7 = T97;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:299
      T98 = SLOT_VALUE(ds_, 3);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:299
      Kadd_argnumYdispatch_engine_internalVdylanI(T80, T98);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:300
      Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI(ds_, T80, T82);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:301
      T8 = CALL3(recurse_, ds_, next_eF6, recurse_);
      new_eF11 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:302
      T99 = primitive_idQ(recurse_,&Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
      if (T99 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:305
        T9 = Kcompute_subdiscriminator_for_argYdispatch_engine_internalVdylanI(ds_, T80, T82, T4);
        T10 = T9;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:303
        T100 = KerrorVKdMM1I(&K41, &KPempty_vectorVKi);
        T10 = T100;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
      new_eF11 = T10;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:298
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:307
    T101 = KEEVKdI(next_eF6, new_eF11);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:307
    if (T101 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:311
      T13_0 = eF3;
      T14_0 = T13_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
      T102 = primitive_idQ(new_eF11,next_eF6);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
      if (T102 != &KPfalseVKi) {
        T103 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
        T105 = primitive_idQ(next_eF6,Dabsent_engine_nodeVKg);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
        T104 = primitive_not(T105);
        T103 = T104;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
      if (T103 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
        Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(new_eF11, next_eF6, ds_);
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:309
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:310
      T12_0 = Kckd_addXYdispatch_engine_internalVdylanI(eF3, T91, new_eF11);
      T14_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:307
    T55_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
    T106 = primitive_instanceQ(e_,&KLdiscriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
    if (T106 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:314
      eF15 = e_;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T107 = SLOT_VALUE_INITD(eF15, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T108 = primitive_cast_integer_as_raw(T107);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T109 = primitive_machine_word_shift_right(T108,6);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T110 = primitive_machine_word_logand(T109,-4);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T111 = primitive_machine_word_logior(T110,1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      shiftF112 = (D) 33;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      mxF116 = 4;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T115 = shiftF112;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T119 = primitive_cast_integer_as_raw(T115);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T120 = primitive_machine_word_equalQ(T119,257);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      if (T120 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
        shiftF112 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
        T114 = shiftF112;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
        T118 = mxF116;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
        T123 = primitive_cast_integer_as_raw(T114);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
        T122 = primitive_machine_word_shift_right(T123,2);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
        T121 = primitive_machine_word_shift_left_signal_overflow(T118,T122);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
        mxF116 = T121;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T113 = shiftF112;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T117 = mxF116;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T126 = primitive_cast_integer_as_raw(T113);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T125 = primitive_machine_word_shift_right(T126,2);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T124 = primitive_machine_word_shift_left_signal_overflow(T117,T125);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T127 = primitive_machine_word_logior(T124,1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T128 = primitive_machine_word_subtract_signal_overflow(T127,4);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T129 = primitive_machine_word_logand(T111,T128);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:315
      T130 = primitive_cast_raw_as_integer(T129);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:317
      T131 = SLOT_VALUE(ds_, 2);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:317
      T132 = REPEATED_D_SLOT_VALUE_TAGGED(T131, 1, T129);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:318
      Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI(ds_, T130, T132);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
      T133 = primitive_instanceQ(eF15,&KLclass_keyed_discriminatorGVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
      if (T133 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:321
        eF16 = eF15;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:322
        T134 = primitive_instanceQ(eF16,&KLby_class_discriminatorGVKg);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:322
        if (T134 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          T135 = primitive_cast_pointer_as_raw(T132);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          bitsF136 = primitive_machine_word_logand(T135,3);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          T137 = primitive_machine_word_equalQ(bitsF136,0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          if (T137 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
            T138 = primitive_element(T132,0,0);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
            mm_wrapperF139 = T138;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
            T146 = primitive_cast_pointer_as_raw(mm_wrapperF139);
            T142 = T146;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
            T140 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF136,0);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
            mm_wrapperF141 = T140;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
            T147 = primitive_cast_pointer_as_raw(mm_wrapperF141);
            T142 = T147;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          T144 = primitive_machine_word_logand(T142,-4);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          T145 = primitive_machine_word_logior(T144,1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:323
          T143 = primitive_cast_raw_as_integer(T145);
          key_ = T143;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:325
          T148 = SLOT_VALUE(T132, 2);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:325
          T149 = SLOT_VALUE_INITD(T148, 2);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:325
          T150 = primitive_cast_pointer_as_raw(T149);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:325
          T152 = primitive_machine_word_logand(T150,-4);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:325
          T153 = primitive_machine_word_logior(T152,1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:325
          T151 = primitive_cast_raw_as_integer(T153);
          key_ = T151;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:322
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:327
        next_eF18 = Kckd_lookupYdispatch_engine_internalVdylanI(key_, eF16);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:328
        new_eF19 = CALL3(recurse_, ds_, next_eF18, recurse_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:329
        T154 = KEEVKdI(next_eF18, new_eF19);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:329
        if (T154 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:333
          T21_0 = eF16;
          T22_0 = T21_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
          T155 = primitive_idQ(new_eF19,next_eF18);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
          if (T155 != &KPfalseVKi) {
            T156 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
            T158 = primitive_idQ(next_eF18,Dabsent_engine_nodeVKg);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
            T157 = primitive_not(T158);
            T156 = T157;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
          if (T156 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
            Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(new_eF19, next_eF18, ds_);
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:331
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:332
          T20_0 = Kckd_addXYdispatch_engine_internalVdylanI(eF16, key_, new_eF19);
          T22_0 = T20_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:329
        T43_0 = T22_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
        T159 = primitive_instanceQ(eF15,&KLif_type_discriminatorGVKg);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
        if (T159 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:336
          eF23 = eF15;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:337
          T160 = SLOT_VALUE_INITD(eF23, 3);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:337
          testp_ = primitive_instanceQ(T132,T160);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:338
          if (testp_ != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:338
            T161 = SLOT_VALUE_INITD(eF23, 4);
            next_eF25 = T161;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:338
            T162 = SLOT_VALUE_INITD(eF23, 5);
            next_eF25 = T162;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:338
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:339
          new_eF26 = CALL3(recurse_, ds_, next_eF25, recurse_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:340
          T27 = KEEVKdI(next_eF25, new_eF26);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:340
          if (T27 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
            T163 = primitive_idQ(new_eF26,next_eF25);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
            if (T163 != &KPfalseVKi) {
              T164 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
              T166 = primitive_idQ(next_eF25,Dabsent_engine_nodeVKg);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
              T165 = primitive_not(T166);
              T164 = T165;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
            if (T164 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
              Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(new_eF26, next_eF25, ds_);
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:341
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:342
            if (testp_ != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:344
              SLOT_VALUE_SETTER(new_eF26, eF23, 4);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:347
              SLOT_VALUE_SETTER(new_eF26, eF23, 5);
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:342
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:340
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:350
          T28_0 = eF23;
          T42_0 = T28_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
          T167 = primitive_instanceQ(eF15,&KLtypecheck_discriminatorGVKg);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
          if (T167 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:352
            eF29 = eF15;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:353
            T168 = SLOT_VALUE_INITD(eF29, 3);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:353
            T30 = primitive_instanceQ(T132,T168);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:353
            if (T30 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:354
              T169 = SLOT_VALUE_INITD(eF29, 4);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:355
              new_eF31 = CALL3(recurse_, ds_, T169, recurse_);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:356
              T32 = KEEVKdI(T169, new_eF31);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:356
              if (T32 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                T170 = primitive_idQ(new_eF31,T169);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                if (T170 != &KPfalseVKi) {
                  T171 = &KPfalseVKi;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                  T173 = primitive_idQ(T169,Dabsent_engine_nodeVKg);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                  T172 = primitive_not(T173);
                  T171 = T172;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                if (T171 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                  Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(new_eF31, T169, ds_);
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:358
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:359
                SLOT_VALUE_SETTER(new_eF31, eF29, 4);
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:356
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:361
              T33_0 = eF29;
              T34_0 = T33_0;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:363
              T174_0 = KerrorVKdMM1I(&K42, &KPempty_vectorVKi);
              T34_0 = T174_0;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:353
            T41_0 = T34_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
            T175 = primitive_instanceQ(eF15,&KLsingleton_discriminatorGVKg);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
            if (T175 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:366
              eF35 = eF15;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:367
              T176 = SLOT_VALUE(ds_, 2);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:367
              T177 = REPEATED_D_SLOT_VALUE_TAGGED(T176, 1, T129);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:368
              lookup_ = Ksingleton_discriminator_elementVKgI(eF35, T177, &KPfalseVKi);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:369
              if (lookup_ != &KPfalseVKi) {
                next_eF37 = lookup_;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:369
                T178 = SLOT_VALUE_INITD(eF35, 4);
                next_eF37 = T178;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:369
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:370
              new_eF38 = CALL3(recurse_, ds_, next_eF37, recurse_);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:371
              T179 = KEEVKdI(next_eF37, new_eF38);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:371
              if (T179 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                T180 = primitive_idQ(new_eF38,next_eF37);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                if (T180 != &KPfalseVKi) {
                  T181 = &KPfalseVKi;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                  T183 = primitive_idQ(next_eF37,Dabsent_engine_nodeVKg);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                  T182 = primitive_not(T183);
                  T181 = T182;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                if (T181 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                  Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(new_eF38, next_eF37, ds_);
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:372
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:373
                if (lookup_ != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:375
                  Ksingleton_discriminator_element_setterVKgI(new_eF38, eF35, T177);
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:378
                  SLOT_VALUE_SETTER(new_eF38, eF35, 4);
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:373
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:371
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:381
              T39_0 = eF35;
              T40_0 = T39_0;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
              T184.vector_element_[0] = eF15;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
              T185_0 = KerrorVKdMM1I(&K43, &T184);
              T40_0 = T185_0;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
            T41_0 = T40_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
          T42_0 = T41_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
        T43_0 = T42_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:319
      T54_0 = T43_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
      T186 = primitive_instanceQ(e_,&KLcache_header_engine_nodeGVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
      if (T186 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:384
        eF44 = e_;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:385
        T187 = SLOT_VALUE_INITD(eF44, 3);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:386
        new_ = CALL3(recurse_, ds_, T187, recurse_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:387
        T188 = KEEVKdI(T187, new_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:387
        if (T188 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
          T189 = primitive_idQ(new_,T187);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
          if (T189 != &KPfalseVKi) {
            T190 = &KPfalseVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
            T192 = primitive_idQ(T187,Dabsent_engine_nodeVKg);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
            T191 = primitive_not(T192);
            T190 = T191;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
          if (T190 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
            Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(new_, T187, ds_);
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:388
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:389
          T193 = SLOT_VALUE(ds_, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:389
          Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(new_, eF44, T193);
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:387
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:391
        T46_0 = eF44;
        T53_0 = T46_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
        T194 = primitive_instanceQ(e_,&KLmethodGVKd);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
        if (T194 != &KPfalseVKi) {
          T47 = T194;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
          T195 = primitive_instanceQ(e_,&KLterminal_engine_nodeGVKg);
          T47 = T195;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
        if (T47 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:398
          T196 = primitive_idQ(recurse_,&Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:398
          if (T196 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:400
            T198 = primitive_idQ(e_,Dabsent_engine_nodeVKg);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:398
            if (T198 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:401
              T48_0 = Kcompute_more_dispatch_engineYdispatch_engine_internalVdylanI(ds_);
              T50_0 = T48_0;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:406
              T49_0 = e_;
              T50_0 = T49_0;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:398
            T51_0 = T50_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:399
            T197_0 = KerrorVKdMM1I(&K41, &KPempty_vectorVKi);
            T51_0 = T197_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:398
          T52_0 = T51_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
          T199.vector_element_[0] = e_;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
          T200_0 = KerrorVKdMM1I(&K43, &T199);
          T52_0 = T200_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
        T53_0 = T52_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
      T54_0 = T53_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
    T55_0 = T54_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:286
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:284
  MV_SET_COUNT(1);
  return(T55_0);
}

D Kcompute_headed_methodsYdispatch_engine_internalVdylanI (D ds_) {
  D T1T, T1;
  D ptr_T, ptr_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:9
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:11
  T5 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:11
  SLOT_VALUE_SETTER(&KPfalseVKi, T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:11
  SLOT_VALUE_SETTER(&KPempty_listVKi, T5, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
  T6 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
  T7 = SLOT_VALUE_INITD(T6, 4);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
  T1T = T7;
  ptr_T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
    T1 = T1T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
    ptr_ = ptr_T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
    T8 = primitive_idQ(T1,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T9 = SLOT_VALUE_INITD(T1, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:13
      T10 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:13
      SLOT_VALUE_SETTER(T9, T10, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:13
      SLOT_VALUE_SETTER(&KPempty_listVKi, T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:13
      SLOT_VALUE_SETTER(T10, ptr_, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T12 = SLOT_VALUE_INITD(T1, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T13_0 = T12;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T11_0 = T13_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T14 = T11_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T15 = SLOT_VALUE_INITD(ptr_, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T3 = T15;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
      T1T = T14;
      ptr_T = T3;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:15
  SLOT_VALUE_SETTER(T5, ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:15
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:9
  MV_SET_COUNT(0);
  return(T4);
}

D Ksame_specializerQVKgI (D s1_, D s2_) {
  D s1F2;
  D T3_0;
  D T4_0;
  D T5_0;
  D s1F6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34_0;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1220
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
  T20 = primitive_instanceQ(s1_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1223
    T21 = primitive_idQ(s1_,s2_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1223
    T22_0 = T21;
    T17_0 = T22_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
    T23 = primitive_instanceQ(s1_,&KLsingletonGVKd);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1225
      s1F2 = s1_;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1226
      T24 = primitive_instanceQ(s2_,&KLsingletonGVKd);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1226
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/domain.dylan:403
        T18 = s2_;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1228
        T25 = SLOT_VALUE_INITD(s1F2, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1228
        T26 = SLOT_VALUE_INITD(T18, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1228
        T3_0 = KEEVKdI(T25, T26);
        T5_0 = T3_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1230
        T4_0 = &KPfalseVKi;
        T5_0 = T4_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1226
      T16_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
      T27 = primitive_instanceQ(s1_,&KLsubclassGVKe);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1233
        s1F6 = s1_;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1234
        T28 = primitive_instanceQ(s2_,&KLsubclassGVKe);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1234
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/domain.dylan:403
          T19 = s2_;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1236
          T29 = SLOT_VALUE_INITD(s1F6, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1236
          T30 = SLOT_VALUE_INITD(T19, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1236
          T31 = primitive_idQ(T29,T30);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1236
          T32_0 = T31;
          T8_0 = T32_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1238
          T7_0 = &KPfalseVKi;
          T8_0 = T7_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1234
        T15_0 = T8_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
        T33 = primitive_idQ(s1_,s2_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
        if (T33 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
          T9_0 = T33;
          T14_0 = T9_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
          T10 = Kgrounded_subtypeQVKeI(s1_, s2_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
          if (T10 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
            T11_0 = Kgrounded_subtypeQVKeI(s2_, s1_);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
            T34_0 = T11_0;
            T13_0 = T34_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
            T12_0 = &KPfalseVKi;
            T13_0 = T12_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
          T14_0 = T13_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
        T15_0 = T14_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
      T16_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1221
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1220
  MV_SET_COUNT(1);
  return(T17_0);
}

D Ksubst_engine_node_1Ydispatch_engine_internalVdylanI (D new_e_, D old_e_, D ds_) {
  D cacheF4;
  DWORD iF5T, iF5;
  D T6;
  DWORD T7T, T7;
  D e_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D cacheF15;
  DWORD iF16T, iF16;
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
  DWORD T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;
  D T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  DWORD T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  DWORD T47;
  D T48;
  D T49;
  DWORD T50;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:164
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:165
  T23 = SLOT_VALUE_INITD(ds_, 6);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:166
  T24 = primitive_instanceQ(T23,&KLsimple_typechecked_gf_cache_infoGVKg);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:166
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:172
    cacheF4 = T23;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:173
    T25 = SLOT_VALUE_INITD(cacheF4, 1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
    T26 = SLOT_VALUE_INITD(T25, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
    T27 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
    iF5T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
      iF5 = iF5T;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
      T28 = primitive_machine_word_less_thanQ(iF5,T27);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:175
        T29 = REPEATED_D_SLOT_VALUE_TAGGED(T25, 1, iF5);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:175
        T6 = primitive_idQ(old_e_,T29);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:175
        if (T6 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:175
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_e_, T25, 1, iF5);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:175
          Ksubst_engine_node_2Ydispatch_engine_internalVdylanI(new_e_, old_e_, T29);
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:175
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
        T30 = primitive_machine_word_add_signal_overflow(iF5,4);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
        iF5T = T30;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:174
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
    T31 = SLOT_VALUE_INITD(cacheF4, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
    T32 = SLOT_VALUE_INITD(T31, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
    T33 = primitive_cast_integer_as_raw(T32);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
    T7T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
      T7 = T7T;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
      T34 = primitive_machine_word_equalQ(T7,T33);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
      if (T34 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
        T35 = REPEATED_D_SLOT_VALUE_TAGGED(T31, 1, T7);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
        e_ = T35;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:178
        T36 = SLOT_VALUE_INITD(e_, 3);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:178
        T9 = primitive_idQ(T36,old_e_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:178
        if (T9 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:179
          SLOT_VALUE_SETTER(new_e_, e_, 3);
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:178
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
        T37 = primitive_machine_word_add_signal_overflow(T7,4);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
        T7T = T37;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
      T10 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:177
    T22 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:166
    T38 = primitive_instanceQ(T23,&KLgf_cache_infoGVKg);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:166
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      T39 = Tpartial_dispatch_megamorphic_puntQTYdispatch_engine_internalVdylan;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:184
        T40 = primitive_instanceQ(T23,&KLcommon_root_cache_header_engine_nodeGVKg);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:184
        T41 = primitive_not(T40);
        T11 = T41;
      } else {
        T11 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:186
        T42 = primitive_instanceQ(old_e_,&KLlinear_by_class_discriminatorGVKg);
        T12 = T42;
      } else {
        T12 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:187
        T43 = primitive_instanceQ(new_e_,&KLhashed_by_class_discriminatorGVKg);
        T13 = T43;
      } else {
        T13 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:188
        T44 = SLOT_VALUE(ds_, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:188
        Kcache_header_puntYdispatch_engine_internalVdylanI(ds_, T23, T44);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:189
        T14 = &KPfalseVKi;
        T19 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:192
        cacheF15 = T23;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:193
        T45 = SLOT_VALUE_INITD(cacheF15, 0);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
        T46 = SLOT_VALUE_INITD(T45, 0);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
        T47 = primitive_cast_integer_as_raw(T46);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
        iF16T = 1;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
          iF16 = iF16T;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
          T48 = primitive_machine_word_less_thanQ(iF16,T47);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
          if (T48 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:195
            T49 = REPEATED_D_SLOT_VALUE_TAGGED(T45, 1, iF16);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:195
            T17 = primitive_idQ(old_e_,T49);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:195
            if (T17 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:195
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(new_e_, T45, 1, iF16);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:195
              Ksubst_engine_node_2Ydispatch_engine_internalVdylanI(new_e_, old_e_, T49);
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:195
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
            T50 = primitive_machine_word_add_signal_overflow(iF16,4);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
            iF16T = T50;
            goto L2;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
          T18 = &KPfalseVKi;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:194
        T19 = T18;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:183
      T21 = T19;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:198
      T20 = &KPfalseVKi;
      T21 = T20;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:166
    T22 = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:164
  MV_SET_COUNT(0);
  return(T22);
}

D Kcompute_sorted_applicable_methodsVKgI (D gf_, D args_) {
  D ans_T, ans_;
  D T3T, T3;
  D T4;
  D T5;
  D T6_0;
  D T6_1;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
  D T13;
  D T14_0;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:862
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:865
  T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:865
  SLOT_VALUE_SETTER(&KPfalseVKi, T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:865
  SLOT_VALUE_SETTER(&KPempty_listVKi, T7, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:867
  T8 = SLOT_VALUE_INITD(gf_, 4);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
  ans_T = &KPempty_listVKi;
  T3T = T8;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
    ans_ = ans_T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
    T9 = primitive_idQ(T3,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
    if (T9 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      T10 = SLOT_VALUE_INITD(T3, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      T4 = KPmethod_applicableQYdispatch_engine_internalVdylanI(T10, args_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
        T11 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
        SLOT_VALUE_SETTER(T10, T11, 0);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
        SLOT_VALUE_SETTER(ans_, T11, 1);
        T5 = T11;
      } else {
        T5 = ans_;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      T13 = SLOT_VALUE_INITD(T3, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      T14_0 = T13;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      T12_0 = T14_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      T15 = T12_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
      ans_T = T5;
      T3T = T15;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:866
  T6_0 = Kcompute_sorted_applicable_methods_1Ydispatch_engine_internalVdylanI(ans_, args_, &KPorder_methodsYdispatch_engine_internalVdylan);
  T6_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:862
  MV_SET_ELT(1, T6_1);
  MV_SET_COUNT(2);
  return(T6_0);
}

D KPmethod_applicableQYdispatch_engine_internalVdylanI (D meth_, D args_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD iF13T, iF13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:831
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:834
  T2 = SLOT_VALUE_INITD(args_, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:839
  iF13T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:839
    iF13 = iF13T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:838
    T14 = primitive_cast_raw_as_integer(iF13);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:836
    T9 = primitive_idQ(T14,T2);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:836
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:837
      T3 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T8 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:838
      T10 = REPEATED_D_SLOT_VALUE_TAGGED(args_, 1, iF13);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:838
      T4 = KPmethod_specializerVKgI(meth_, T14);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:838
      T5 = primitive_instanceQ(T10,T4);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:836
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:839
        T11 = primitive_machine_word_add_signal_overflow(iF13,4);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:839
        iF13T = T11;
        goto L0;
        T7 = T12;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:841
        T6 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T7 = T6;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:836
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:836
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:839
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:831
  return(T8);
}

D Kcompute_sorted_applicable_methods_1Ydispatch_engine_internalVdylanI (D methlist_, D args_, D order_the_methods_) {
  D T3_0;
  D T3_1;
  D T4;
  D T5;
  D meth_;
  D T7;
  D T8;
  D T9;
  D indic_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D oprevF19T, oprevF19;
  D T20;
  D osubF21T, osubF21;
  D T22;
  D T23;
  D methlistF24T, methlistF24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T28_1;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:874
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:877
  T4 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:877
  SLOT_VALUE_SETTER(&KPfalseVKi, T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:877
  SLOT_VALUE_SETTER(&KPempty_listVKi, T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:878
  T5 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:878
  SLOT_VALUE_SETTER(&KPfalseVKi, T5, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:878
  SLOT_VALUE_SETTER(&KPempty_listVKi, T5, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:931
  methlistF24T = methlist_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:931
    methlistF24 = methlistF24T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:931
    T25 = methlistF24;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:880
    T7 = primitive_idQ(T25,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:880
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:881
      T8 = SLOT_VALUE_INITD(T25, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:881
      meth_ = T8;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:930
      T9 = SLOT_VALUE_INITD(T4, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
      oprevF19T = T4;
      osubF21T = T9;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
        oprevF19 = oprevF19T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
        T20 = oprevF19;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
        osubF21 = osubF21T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
        T22 = osubF21;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:915
        T13 = primitive_idQ(T22,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:915
        if (T13 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:916
          Kcheck_subsequent_ambiguitiesF31I(meth_, T5, order_the_methods_, args_, T20);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:918
          T14 = SLOT_VALUE_INITD(T22, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:918
          indic_ = CALL3(order_the_methods_, meth_, T14, args_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:919
          T15 = primitive_idQ(indic_,IKJL_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:919
          if (T15 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:920
            Kcheck_subsequent_ambiguitiesF31I(meth_, T5, order_the_methods_, args_, T20);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:921
            T16 = primitive_idQ(indic_,IKJG_);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:919
            if (T16 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
              T17 = SLOT_VALUE_INITD(T22, 1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
              oprevF19T = T22;
              osubF21T = T17;
              goto L1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:924
              T18 = primitive_idQ(indic_,IKJE_);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:924
              if (T18 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:924
                T11 = Tgracefully_ignore_duplicate_methodsTYdispatch_engine_internalVdylan;
                T12 = T11;
              } else {
                T12 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:924
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:924
              if (T12 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:925
                Kmake_ambiguousF30I(meth_, T5, T20);
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:924
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:919
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:919
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:915
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:922
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:931
      T23 = SLOT_VALUE_INITD(T25, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:931
      methlistF24T = T23;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:880
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:931
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:935
  T26 = SLOT_VALUE_INITD(T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:935
  T27 = SLOT_VALUE_INITD(T5, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:935
  T28_0 = T26;
  T28_1 = T27;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:874
  T3_0 = T28_0;
  T3_1 = T28_1;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:874
  MV_SET_ELT(1, T3_1);
  MV_SET_COUNT(2);
  return(T3_0);
}

D KPorder_methodsYdispatch_engine_internalVdylanI (D meth1_, D meth2_, D args_) {
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
  DWORD T16;
  D T17;
  D T18;
  D stateF19;
  DWORD idxF20;
  D T21;
  D T22;
  D T23;
  D T24;
  D stateF25T, stateF25;
  DWORD idxF26T, idxF26;
  D T27;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:993
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:996
  T3 = KPmethod_number_requiredVKgI(meth1_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1007
  stateF25T = IKJE_;
  idxF26T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1009
    stateF25 = stateF25T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1009
    idxF26 = idxF26T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1007
    stateF19 = stateF25;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1007
    idxF20 = idxF26;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1004
    T27 = primitive_cast_raw_as_integer(idxF20);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:998
    T14 = primitive_idQ(T27,T3);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:998
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:999
      T4 = stateF19;
      MV_SET_ELT(0, stateF19);
      MV_SET_COUNT(1);
      T13 = T4;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1001
      T5 = KPmethod_specializerVKgI(meth1_, T27);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1002
      T6 = KPmethod_specializerVKgI(meth2_, T27);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1004
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(args_, 1, idxF20);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1003
      T7 = KPorder_specializersYdispatch_engine_internalVdylanI(T5, T6, T15);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1005
      T16 = primitive_machine_word_add_signal_overflow(idxF20,4);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1006
      T17 = primitive_idQ(T7,IKJE_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1006
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1007
        stateF25T = stateF25;
        idxF26T = T16;
        goto L0;
        T12 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1008
        T21 = primitive_idQ(T7,IKJLG_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1008
        if (T21 != &KPfalseVKi) {
          T9 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1008
          T22 = primitive_idQ(stateF19,IKJE_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1008
          if (T22 != &KPfalseVKi) {
            T8 = T22;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1008
            T23 = primitive_idQ(T7,stateF19);
            T8 = T23;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1008
          T9 = T8;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1008
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1006
        if (T9 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1009
          stateF25T = T7;
          idxF26T = T16;
          goto L0;
          T11 = T24;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1011
          T10 = IKJLG_;
          MV_SET_ELT(0, IKJLG_);
          MV_SET_COUNT(1);
          T11 = T10;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1006
        T12 = T11;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1006
      T13 = T12;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:998
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1007
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:993
  return(T13);
}

D KPorder_specializersYdispatch_engine_internalVdylanI (D t1_, D t2_, D arg_) {
  D T3;
  D argF4;
  D T5;
  D T6_0;
  D T6_1;
  D T7_0;
  D T7_1;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T11_1;
  D T12_0;
  D T12_1;
  D T13_0;
  D T13_1;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T17_1;
  D T18_0;
  D T18_1;
  D T19;
  D T20;
  D T21_0;
  D T21_1;
  D T22_0;
  D T22_1;
  D T23_0;
  D T23_1;
  D T24_0;
  D T24_1;
  D T25_0;
  D T25_1;
  D T26_0;
  D T26_1;
  D T27_0;
  D T27_1;
  D T28_0;
  D T28_1;
  D T29_0;
  D T29_1;
  D T30_0;
  D T30_1;
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
  D T41_1;
  D T42;
  D T43;
  D T44_0;
  D T44_1;
  D T45;
  D T46_0;
  D T46_1;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52_0;
  D T52_1;
  D T53_0;
  D T53_1;
  D T54_0;
  D T54_1;
  D T55;
  D T56;
  D T57;
  D T58_0;
  D T58_1;
  D T59;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64_0;
  D T64_1;
  D T65;
  D T66;
  D T67_0;
  D T67_1;
  D T68_0;
  D T68_1;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1163
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
  T40 = primitive_idQ(t1_,t2_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
  if (T40 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1166
    T41_0 = IKJE_;
    T41_1 = t1_;
    T30_0 = T41_0;
    T30_1 = T41_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1167
    T42 = primitive_instanceQ(t1_,&KLsingletonGVKd);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
    if (T42 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
      T31 = t1_;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1168
      T43 = primitive_instanceQ(t2_,&KLsingletonGVKd);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1168
      if (T43 != &KPfalseVKi) {
        T3 = IKJE_;
      } else {
        T3 = IKJL_;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1168
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1168
      T44_0 = T3;
      T44_1 = T31;
      T29_0 = T44_0;
      T29_1 = T44_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1169
      T45 = primitive_instanceQ(t2_,&KLsingletonGVKd);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
        T32 = t2_;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1170
        T46_0 = IKJG_;
        T46_1 = T32;
        T28_0 = T46_0;
        T28_1 = T46_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1171
        T47 = primitive_instanceQ(t1_,&KLsubclassGVKe);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
        if (T47 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
          T33 = t1_;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1173
          T48 = SLOT_VALUE_INITD(T33, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1174
          T49 = primitive_instanceQ(t2_,&KLsubclassGVKe);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1174
          if (T49 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
            T34 = t2_;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1175
            argF4 = arg_;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1177
            T50 = SLOT_VALUE_INITD(T34, 1);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1179
            T51 = primitive_idQ(T48,T50);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1178
            if (T51 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1179
              T52_0 = IKJE_;
              T52_1 = T33;
              T7_0 = T52_0;
              T7_1 = T52_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1180
              T5 = KPclassLYdispatch_engine_internalVdylanI(T48, T50, argF4);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1178
              if (T5 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1180
                T53_0 = IKJL_;
                T53_1 = T33;
                T6_0 = T53_0;
                T6_1 = T53_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1181
                T54_0 = IKJG_;
                T54_1 = T34;
                T6_0 = T54_0;
                T6_1 = T54_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1178
              T7_0 = T6_0;
              T7_1 = T6_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1178
            T13_0 = T7_0;
            T13_1 = T7_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1183
            T55 = primitive_instanceQ(t2_,&KLclassGVKd);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1174
            if (T55 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
              T35 = t2_;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1185
              T56 = KsubtypeQVKdMM10I(&KLclassGVKd, T35);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1185
              if (T56 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1186
                T57 = primitive_idQ(T48,&KLobjectGVKd);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1186
                if (T57 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1186
                  T8 = KPorder_specializersYdispatch_engine_internalVdylanI(&KLclassGVKd, T35, arg_);
                  T9 = T8;
                } else {
                  T9 = IKJL_;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1186
                T10 = T9;
              } else {
                T10 = IKJLG_;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1185
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1185
              T58_0 = T10;
              T58_1 = T33;
              T12_0 = T58_0;
              T12_1 = T58_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1191
              T11_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(T33, t2_);
              T11_1 = MV_GET_ELT(1);
              T12_0 = T11_0;
              T12_1 = T11_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1174
            T13_0 = T12_0;
            T13_1 = T12_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1174
          T27_0 = T13_0;
          T27_1 = T13_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1193
          T59 = primitive_instanceQ(t2_,&KLsubclassGVKe);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
          if (T59 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
            T36 = t2_;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1195
            T60 = primitive_instanceQ(t1_,&KLclassGVKd);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1195
            if (T60 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
              T37 = t1_;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1196
              T61 = SLOT_VALUE_INITD(T36, 1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1198
              T62 = KsubtypeQVKdMM10I(&KLclassGVKd, T37);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1198
              if (T62 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1199
                T63 = primitive_idQ(T61,&KLobjectGVKd);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1199
                if (T63 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1199
                  T14 = KPorder_specializersYdispatch_engine_internalVdylanI(T37, &KLclassGVKd, arg_);
                  T15 = T14;
                } else {
                  T15 = IKJG_;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1199
                T16 = T15;
              } else {
                T16 = IKJLG_;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1198
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1198
              T64_0 = T16;
              T64_1 = T36;
              T18_0 = T64_0;
              T18_1 = T64_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1204
              T17_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(t1_, T36);
              T17_1 = MV_GET_ELT(1);
              T18_0 = T17_0;
              T18_1 = T17_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1195
            T26_0 = T18_0;
            T26_1 = T18_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1206
            T65 = primitive_instanceQ(t1_,&KLclassGVKd);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
            if (T65 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
              T38 = t1_;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1208
              T66 = primitive_instanceQ(t2_,&KLclassGVKd);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1208
              if (T66 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
                T39 = t2_;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1210
                T19 = Kobject_classVKdI(arg_);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1210
                T20 = KPclassLYdispatch_engine_internalVdylanI(T38, T39, T19);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1210
                if (T20 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1210
                  T67_0 = IKJL_;
                  T67_1 = T38;
                  T21_0 = T67_0;
                  T21_1 = T67_1;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1210
                  T68_0 = IKJG_;
                  T68_1 = T39;
                  T21_0 = T68_0;
                  T21_1 = T68_1;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1210
                T23_0 = T21_0;
                T23_1 = T21_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1212
                T22_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(T38, t2_);
                T22_1 = MV_GET_ELT(1);
                T23_0 = T22_0;
                T23_1 = T22_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1208
              T25_0 = T23_0;
              T25_1 = T23_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1215
              T24_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(t1_, t2_);
              T24_1 = MV_GET_ELT(1);
              T25_0 = T24_0;
              T25_1 = T24_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
            T26_0 = T25_0;
            T26_1 = T25_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
          T27_0 = T26_0;
          T27_1 = T26_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
        T28_0 = T27_0;
        T28_1 = T27_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
      T29_0 = T28_0;
      T29_1 = T28_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
    T30_0 = T29_0;
    T30_1 = T29_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1165
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1163
  MV_SET_ELT(1, T30_1);
  MV_SET_COUNT(2);
  return(T30_0);
}

D KPclassLYdispatch_engine_internalVdylanI (D c1_, D c2_, D wrt_) {
  D returnPexit_6_;
  D T4;
  DWORD super_i_T, super_i_;
  D cF6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T19;
  D T20;
  _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T22;
  DWORD T23;
  _KLsimple_object_vectorGVKd_3 T24 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1018
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1038
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
  T9 = SLOT_VALUE(wrt_, 2);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
  T10 = SLOT_VALUE_INITD(T9, 8);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
  T11 = SLOT_VALUE(wrt_, 2);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
  T12 = SLOT_VALUE_INITD(T11, 9);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
  T14 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
  super_i_T = T14;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
    super_i_ = super_i_T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
    T15 = primitive_cast_raw_as_integer(super_i_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
    T13 = primitive_machine_word_less_thanQ(super_i_,1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
      T16 = KelementVKdMM11I(T10, T15, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
      cF6 = T16;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1040
      T17 = primitive_idQ(cF6,c1_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1040
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1041
        T18.vector_element_[0] = &KPtrueVKi;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1041
        T19 = MV_SET_REST_AT(&T18, 0);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1041
        T7_0 = T19;
        goto L1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1042
        T20 = primitive_idQ(cF6,c2_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1040
        if (T20 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1043
          T21.vector_element_[0] = &KPfalseVKi;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1038
          T22 = MV_SET_REST_AT(&T21, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1038
          T7_0 = T22;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1040
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1040
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
      T23 = primitive_machine_word_add_signal_overflow(super_i_,0xFFFFFFFFFFFFFFFCL);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
      super_i_T = T23;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1039
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1048
  T24.vector_element_[0] = wrt_;
  T24.vector_element_[1] = c1_;
  T24.vector_element_[2] = c2_;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1048
  T25 = KerrorVKdMM1I(&K21, &T24);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1038
  T7_0 = T25;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1038
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1018
  T8_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1018
  MV_SET_COUNT(1);
  return(T8_0);
}

D KPorder_specializers_defaultYdispatch_engine_internalVdylanI (D t1_, D t2_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T6_1;
  D T7_0;
  D T7_1;
  D T8_0;
  D T8_1;
  D T9_0;
  D T9_1;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1054
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1056
  T2 = Kgrounded_subtypeQVKeI(t1_, t2_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1056
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1057
    T3 = Kgrounded_subtypeQVKeI(t2_, t1_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1057
    if (T3 != &KPfalseVKi) {
      T4 = IKJE_;
    } else {
      T4 = IKJL_;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1057
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1057
    T8_0 = T4;
    T8_1 = t1_;
    T7_0 = T8_0;
    T7_1 = T8_1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1058
    T5 = Kgrounded_subtypeQVKeI(t2_, t1_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1056
    if (T5 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1059
      T9_0 = IKJG_;
      T9_1 = t2_;
      T6_0 = T9_0;
      T6_1 = T9_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1061
      T10_0 = IKJLG_;
      T10_1 = &KLobjectGVKd;
      T6_0 = T10_0;
      T6_1 = T10_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1056
    T7_0 = T6_0;
    T7_1 = T6_1;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1056
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1054
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

static D Kcheck_subsequent_ambiguitiesF31I (D meth_, D implicit_argument_, D order_the_methods_, D args_, D oprev_) {
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

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:907
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
  T11 = SLOT_VALUE_INITD(oprev_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
  T5 = Kprecedes_allQF33I(meth_, order_the_methods_, args_, T11);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
  T12 = primitive_not(T5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
    T13 = SLOT_VALUE_INITD(implicit_argument_, 1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
    T6 = Kprecedes_allQF33I(meth_, order_the_methods_, args_, T13);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
    T14 = primitive_not(T6);
    T7 = T14;
  } else {
    T7 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:909
    T8 = Kmake_ambiguousF30I(meth_, implicit_argument_, oprev_);
    T10 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:911
    T15 = SLOT_VALUE_INITD(oprev_, 1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:911
    T16 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:911
    SLOT_VALUE_SETTER(meth_, T16, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:911
    SLOT_VALUE_SETTER(T15, T16, 1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:911
    SLOT_VALUE_SETTER(T16, oprev_, 1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:911
    T9 = &KPfalseVKi;
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:908
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:907
  MV_SET_COUNT(0);
  return(T10);
}

static D Kmake_ambiguousF30I (D meth_, D implicit_argument_, D headed_list_) {
  D T3;
  D T4;
  D t1_;
  D T6;
  D T7;
  D T8;
  D lF9T, lF9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:882
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:891
  T4 = SLOT_VALUE_INITD(headed_list_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:888
  lF9T = T4;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:888
    lF9 = lF9T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:888
    T10 = lF9;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:884
    T6 = primitive_idQ(T10,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:884
    if (T6 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:885
      T7 = SLOT_VALUE_INITD(T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:885
      t1_ = T7;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:886
      T8 = SLOT_VALUE_INITD(implicit_argument_, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:886
      SLOT_VALUE_SETTER(T8, T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:887
      SLOT_VALUE_SETTER(T10, implicit_argument_, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:888
      lF9T = t1_;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:884
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:888
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:892
  SLOT_VALUE_SETTER(&KPempty_listVKi, headed_list_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:893
  T11 = SLOT_VALUE_INITD(implicit_argument_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:893
  T12 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:893
  SLOT_VALUE_SETTER(meth_, T12, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:893
  SLOT_VALUE_SETTER(T11, T12, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:893
  SLOT_VALUE_SETTER(T12, implicit_argument_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:893
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:882
  MV_SET_COUNT(0);
  return(T3);
}

static D Kprecedes_allQF33I (D meth_, D order_the_methods_, D args_, D l_) {
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
  D lF15T, lF15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:895
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:902
  lF15T = l_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:902
    lF15 = lF15T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:902
    T16 = lF15;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:897
    T10 = primitive_idQ(T16,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:897
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:898
      T5 = &KPtrueVKi;
      MV_SET_ELT(0, &KPtrueVKi);
      MV_SET_COUNT(1);
      T9 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:899
      T11 = SLOT_VALUE_INITD(T16, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:899
      T6 = CALL3(order_the_methods_, meth_, T11, args_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:899
      T12 = primitive_idQ(T6,IKJL_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:897
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:902
        T13 = SLOT_VALUE_INITD(T16, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:902
        lF15T = T13;
        goto L0;
        T8 = T14;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:900
        T7 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T8 = T7;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:897
      T9 = T8;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:897
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:902
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:895
  return(T9);
}

D Ksubst_engine_node_2Ydispatch_engine_internalVdylanI (D new_e_, D old_e_, D e_) {
  D eF3;
  D T4;
  D T5;
  D T6;
  D eF7;
  D T8;
  DWORD iF9T, iF9;
  D T10;
  D UvUF11;
  D T12;
  D UvUF13;
  D T14;
  D T15;
  D T16;
  D eF17;
  D T18;
  D T19;
  D T20;
  D T21;
  D eF22;
  D T23;
  D T24;
  D T25;
  D eF26;
  DWORD iF27T, iF27;
  D T28;
  D T29;
  D T30;
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
  D T41;
  D new_eF42;
  D T43;
  D old_eF44;
  D T45;
  D eF46;
  D T47;
  D T48;
  DWORD T49;
  D T50;
  D T51;
  D new_eF52;
  D old_eF53;
  D eF54;
  D T55;
  D T56;
  D T57;
  D T58;
  D new_eF59;
  D old_eF60;
  D eF61;
  D T62;
  D T63;
  D T64;
  D new_eF65;
  D old_eF66;
  D eF67;
  D T68;
  D T69;
  D T70;
  DWORD T71;
  D T72;
  D T73;
  DWORD T74;
  D T75;
  D T76;
  D new_eF77T, new_eF77;
  D old_eF78T, old_eF78;
  D eF79T, eF79;
  D T80;
  _KLsimple_object_vectorGVKd_1 T81 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T82;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:203
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
  new_eF77T = new_e_;
  old_eF78T = old_e_;
  eF79T = e_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
    new_eF77 = new_eF77T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
    old_eF78 = old_eF78T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
    eF79 = eF79T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
    new_eF65 = new_eF77;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
    old_eF66 = old_eF78;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
    eF67 = eF79;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
    new_eF59 = new_eF65;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
    old_eF60 = old_eF66;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
    eF61 = eF67;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
    new_eF52 = new_eF59;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
    old_eF53 = old_eF60;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
    eF54 = eF61;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
    new_eF42 = new_eF52;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
    T43 = new_eF42;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
    old_eF44 = old_eF53;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
    T45 = old_eF44;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
    eF46 = eF54;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
    T47 = eF46;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
    T39 = primitive_instanceQ(T47,&KLmonomorphic_by_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:206
      eF3 = T47;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
      T40 = SLOT_VALUE_INITD(eF3, 4);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
      T4 = primitive_idQ(T45,T40);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
      if (T4 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
        SLOT_VALUE_SETTER(T43, eF3, 4);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
        T5 = &KPfalseVKi;
        T6 = T5;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
        new_eF77T = new_eF52;
        old_eF78T = old_eF53;
        eF79T = T40;
        goto L0;
        T6 = T41;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
      T38 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
      T48 = primitive_instanceQ(T47,&KLclass_keyed_discriminatorGVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
      if (T48 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:209
        eF7 = T47;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
        T8 = Kckd_sizeVKgI(eF7);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
        iF9T = 5;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
          iF9 = iF9T;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
          T50 = primitive_cast_raw_as_integer(iF9);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
          CONGRUENT_CALL_PROLOG(&KLVKd, 2);
          T10 = CONGRUENT_CALL2(T50, T8);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
          if (T10 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
            UvUF11 = Kckd_refVKgI(eF7, T50);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
            T12 = primitive_idQ(T45,UvUF11);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
            if (T12 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
              Kckd_ref_setterVKgI(T43, eF7, T50);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
              Ksubst_engine_node_2Ydispatch_engine_internalVdylanI(T43, T45, UvUF11);
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
            T49 = primitive_machine_word_add_signal_overflow(iF9,8);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
            iF9T = T49;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
        UvUF13 = Kgrounded_class_keyed_discriminator_defaultVKgI(eF7);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
        T14 = primitive_idQ(T45,UvUF13);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
        if (T14 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
          Kgrounded_class_keyed_discriminator_default_setterYdispatch_engine_internalVdylanI(T43, eF7);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
          T15 = &KPfalseVKi;
          T16 = T15;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
          new_eF77T = T43;
          old_eF78T = T45;
          eF79T = UvUF13;
          goto L0;
          T16 = T51;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:213
        T37 = T16;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
        T55 = primitive_instanceQ(T47,&KLif_type_discriminatorGVKg);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
        if (T55 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:215
          eF17 = T47;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:216
          T56 = SLOT_VALUE_INITD(eF17, 4);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:216
          T18 = primitive_idQ(T45,T56);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:216
          if (T18 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:216
            SLOT_VALUE_SETTER(T43, eF17, 4);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:216
            Ksubst_engine_node_2Ydispatch_engine_internalVdylanI(T43, T45, T56);
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:216
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
          T57 = SLOT_VALUE_INITD(eF17, 5);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
          T19 = primitive_idQ(T45,T57);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
          if (T19 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
            SLOT_VALUE_SETTER(T43, eF17, 5);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
            T20 = &KPfalseVKi;
            T21 = T20;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
            new_eF77T = T43;
            old_eF78T = T45;
            eF79T = T57;
            goto L0;
            T21 = T58;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:217
          T36 = T21;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
          T62 = primitive_instanceQ(T47,&KLtypecheck_discriminatorGVKg);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
          if (T62 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:219
            eF22 = T47;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
            T63 = SLOT_VALUE_INITD(eF22, 4);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
            T23 = primitive_idQ(T45,T63);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
            if (T23 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
              SLOT_VALUE_SETTER(T43, eF22, 4);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
              T24 = &KPfalseVKi;
              T25 = T24;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
              new_eF77T = T43;
              old_eF78T = T45;
              eF79T = T63;
              goto L0;
              T25 = T64;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:220
            T35 = T25;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
            T68 = primitive_instanceQ(T47,&KLsingleton_discriminatorGVKg);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
            if (T68 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:222
              eF26 = T47;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:223
              T69 = SLOT_VALUE_INITD(eF26, 3);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
              T70 = SLOT_VALUE_INITD(T69, 0);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
              T71 = primitive_cast_integer_as_raw(T70);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
              iF27T = 5;
            L2: ;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
                iF27 = iF27T;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
                T72 = primitive_machine_word_less_thanQ(iF27,T71);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
                if (T72 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:225
                  T73 = REPEATED_D_SLOT_VALUE_TAGGED(T69, 1, iF27);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:225
                  T28 = primitive_idQ(T45,T73);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:225
                  if (T28 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:225
                    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T43, T69, 1, iF27);
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:225
                    Ksubst_engine_node_2Ydispatch_engine_internalVdylanI(T43, T45, T73);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:225
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
                  T74 = primitive_machine_word_add_signal_overflow(iF27,8);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
                  iF27T = T74;
                  goto L2;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:224
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
              T75 = SLOT_VALUE_INITD(eF26, 4);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
              T29 = primitive_idQ(T45,T75);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
              if (T29 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
                SLOT_VALUE_SETTER(T43, eF26, 4);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
                T30 = &KPfalseVKi;
                T31 = T30;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
                new_eF77T = T43;
                old_eF78T = T45;
                eF79T = T75;
                goto L0;
                T31 = T76;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:227
              T34 = T31;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
              T80 = primitive_instanceQ(T47,&KLdiscriminatorGVKg);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
              if (T80 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:229
                T81.vector_element_[0] = T47;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:229
                T82 = KerrorVKdMM1I(&K35, &T81);
                T33 = T82;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:230
                T32 = &KPfalseVKi;
                T33 = T32;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
              T34 = T33;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
            T35 = T34;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
          T36 = T35;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
        T37 = T36;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
      T38 = T37;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:204
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:207
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:203
  MV_SET_COUNT(0);
  return(T38);
}

D Kprune_methods_by_known_classYdispatch_engine_internalVdylanI (D argnum_, D cls_, D ds_) {
  D the_methods_;
  D T4;
  D T5;
  D T6;
  D meth_;
  D nxt_;
  D T9;
  D T10_0;
  D T10_1;
  D someQ_;
  D allQ_;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D prevF20;
  D T21;
  D sublF22;
  D allallQF23;
  D T24;
  D prevF25T, prevF25;
  D sublF26T, sublF26;
  D allallQF27T, allallQF27;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:25
  T4 = SLOT_VALUE(ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:41
  T5 = SLOT_VALUE_INITD(T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:41
  the_methods_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
  prevF25T = T4;
  sublF26T = the_methods_;
  allallQF27T = &KPtrueVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:37
    prevF25 = prevF25T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:37
    sublF26 = sublF26T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:37
    allallQF27 = allallQF27T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
    prevF20 = prevF25;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
    T21 = prevF20;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
    sublF22 = sublF26;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
    allallQF23 = allallQF27;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:27
    T16 = primitive_idQ(sublF22,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:27
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:28
      T6 = allallQF23;
      MV_SET_ELT(0, allallQF23);
      MV_SET_COUNT(1);
      T15 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:30
      T17 = SLOT_VALUE_INITD(sublF22, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:30
      meth_ = T17;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:31
      T18 = SLOT_VALUE_INITD(sublF22, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:31
      nxt_ = T18;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:32
      T9 = KPmethod_specializerVKgI(meth_, argnum_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:32
      T10_0 = Kgrounded_has_instancesQVKeI(cls_, T9);
      T10_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:32
      someQ_ = T10_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:32
      allQ_ = T10_1;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:33
      if (someQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
        if (allQ_ != &KPfalseVKi) {
          T13 = allallQF23;
        } else {
          T13 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
        prevF25T = sublF22;
        sublF26T = nxt_;
        allallQF27T = T13;
        goto L0;
        T14 = T19;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:36
        SLOT_VALUE_SETTER(nxt_, T21, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:37
        prevF25T = T21;
        sublF26T = nxt_;
        allallQF27T = allallQF23;
        goto L0;
        T14 = T24;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:33
      T15 = T14;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:27
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:34
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:22
  return(T15);
}

D Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI (D ds_, D argnum_, D arg_) {
  D the_methods_;
  D T4;
  D T5;
  D meth_;
  D T7;
  D nxt_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D prevF14;
  D T15;
  D sublF16;
  D T17;
  D T18;
  D prevF19T, prevF19;
  D sublF20T, sublF20;
  D T21;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:64
  T4 = SLOT_VALUE(ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:65
  T5 = SLOT_VALUE_INITD(T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:65
  the_methods_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
  prevF19T = T4;
  sublF20T = the_methods_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:60
    prevF19 = prevF19T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:60
    sublF20 = sublF20T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
    prevF14 = prevF19;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
    T15 = prevF14;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
    sublF16 = sublF20;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
    T17 = sublF16;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:51
    T9 = primitive_idQ(T17,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:51
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:52
      T10 = SLOT_VALUE(ds_, 3);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:52
      Kadd_argnumYdispatch_engine_internalVdylanI(argnum_, T10);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:54
      T11 = SLOT_VALUE_INITD(T17, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:54
      meth_ = T11;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:55
      T7 = KPmethod_specializerVKgI(meth_, argnum_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:55
      T12 = primitive_instanceQ(arg_,T7);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:55
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
        T13 = SLOT_VALUE_INITD(T17, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
        prevF19T = T17;
        sublF20T = T13;
        goto L0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:58
        T18 = SLOT_VALUE_INITD(T17, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:58
        nxt_ = T18;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:59
        SLOT_VALUE_SETTER(nxt_, T15, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:60
        prevF19T = T15;
        sublF20T = nxt_;
        goto L0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:55
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:51
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:66
  T21 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:48
  MV_SET_COUNT(0);
  return(T21);
}

D Kcompute_subdiscriminator_for_argYdispatch_engine_internalVdylanI (D ds_, D argnum_, D thisarg_, D thisargclass_) {
  D methlist_;
  D T5;
  D T6;
  D nextd_;
  D T8;
  D T9;
  D T10;
  D T11;
  D d_;
  D T13;
  D T14;
  D T15;
  D T16;
  D meth_;
  D T18;
  D T19_0;
  D T19_1;
  D T19_2;
  D subclass_pF20;
  D singletonsF21;
  D othersF22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  DADDR T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D lF40T, lF40;
  D T41;
  D T42;
  D T43;
  D T44;
  D methodsF45T, methodsF45;
  D T46;
  D subclass_pF47T, subclass_pF47;
  D singletonsF48T, singletonsF48;
  D othersF49T, othersF49;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:466
  T5 = SLOT_VALUE(ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:466
  T6 = SLOT_VALUE_INITD(T5, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:466
  methlist_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
  methodsF45T = methlist_;
  subclass_pF47T = &KPfalseVKi;
  singletonsF48T = &KPempty_listVKi;
  othersF49T = &KPempty_listVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
    methodsF45 = methodsF45T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
    T46 = methodsF45;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
    subclass_pF47 = subclass_pF47T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
    singletonsF48 = singletonsF48T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
    othersF49 = othersF49T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:432
    T24 = primitive_idQ(T46,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:432
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:433
      Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI(ds_, argnum_, thisarg_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:434
      nextd_ = Kcompute_more_dispatch_engineYdispatch_engine_internalVdylanI(ds_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:435
      T25 = SLOT_VALUE(ds_, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
      if (subclass_pF47 != &KPfalseVKi) {
        T9 = subclass_pF47;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
        T26 = primitive_idQ(singletonsF48,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
        if (T26 != &KPfalseVKi) {
          T8 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
          T27 = KsubtypeQVKdMM10I(thisargclass_, &KLclassGVKd);
          T8 = T27;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
        T9 = T8;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:437
        T10 = Kmake_by_singleton_class_discriminatorYdispatch_engine_internalVdylanI(argnum_, T25, (D) 17, Dabsent_engine_nodeVKg);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:438
        T28 = SLOT_VALUE(thisarg_, 2);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:438
        T29 = SLOT_VALUE_INITD(T28, 2);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:438
        T30 = primitive_cast_pointer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:438
        T32 = primitive_machine_word_logand(T30,-4);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:438
        T33 = primitive_machine_word_logior(T32,1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:438
        T31 = primitive_cast_raw_as_integer(T33);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:437
        T11 = Kckd_addXYdispatch_engine_internalVdylanI(T10, T31, nextd_);
        T16 = T11;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:439
        T34 = primitive_idQ(singletonsF48,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
        if (T34 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:456
          T14 = Kcompute_default_subdiscriminatorYdispatch_engine_internalVdylanI(argnum_, T25, thisarg_, othersF49, nextd_);
          T15 = T14;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:440
          d_ = Kmake_single_class_singleton_discriminatorVKgI(singletonsF48, argnum_, T25);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:450
          lF40T = singletonsF48;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:450
            lF40 = lF40T;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:450
            T41 = lF40;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:442
            T37 = primitive_idQ(T41,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:442
            if (T37 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:445
              T35 = Kcompute_default_subdiscriminatorYdispatch_engine_internalVdylanI(argnum_, T25, thisarg_, othersF49, nextd_);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:444
              SLOT_VALUE_SETTER(T35, d_, 4);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:446
              T38 = SLOT_VALUE_INITD(T41, 0);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:446
              T36 = KEEVKdI(thisarg_, T38);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:442
              if (T36 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:448
                Ksingleton_discriminator_element_setterVKgI(nextd_, d_, thisarg_);
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:450
                T39 = SLOT_VALUE_INITD(T41, 1);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:450
                lF40T = T39;
                goto L1;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:442
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:442
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:450
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:454
          T13 = d_;
          MV_SET_ELT(0, d_);
          MV_SET_COUNT(1);
          T15 = T13;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
        T16 = T15;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:436
      T23 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:459
      T42 = SLOT_VALUE_INITD(T46, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:459
      meth_ = T42;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:460
      T18 = KPmethod_specializerVKgI(meth_, argnum_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:462
      T19_0 = Kponder_a_specializerYdispatch_engine_internalVdylanI(T18, thisargclass_, subclass_pF47, singletonsF48, othersF49);
      T19_1 = MV_GET_ELT(1);
      T19_2 = MV_GET_ELT(2);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:461
      subclass_pF20 = T19_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:461
      singletonsF21 = T19_1;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:461
      othersF22 = T19_2;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
      T43 = SLOT_VALUE_INITD(T46, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
      methodsF45T = T43;
      subclass_pF47T = subclass_pF20;
      singletonsF48T = singletonsF21;
      othersF49T = othersF22;
      goto L0;
      T23 = T44;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:432
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:463
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:427
  return(T23);
}

D Kcompute_more_dispatch_engineYdispatch_engine_internalVdylanI (D ds_) {
  D argnumQ_;
  D T3_0;
  D argnum_;
  D T5_0;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:412
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:415
  argnumQ_ = Kselect_next_arg_for_discriminationYdispatch_engine_internalVdylanI(ds_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:416
  if (argnumQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:419
    argnum_ = argnumQ_;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:420
    T5_0 = Kcompute_discriminator_for_argYdispatch_engine_internalVdylanI(argnum_, ds_);
    T6_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:417
    T3_0 = Kcompute_terminal_engine_nodeYdispatch_engine_internalVdylanI(ds_);
    T6_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:416
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:412
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kselect_next_arg_for_discriminationYdispatch_engine_internalVdylanI (D ds_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D mF6;
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
  D T17;
  D T18;
  D nxt_;
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
  DWORD T32;
  D T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  D shiftF40;
  D T41;
  D T42;
  D T43;
  DWORD mx_;
  DWORD T45;
  DWORD T46;
  D T47;
  D T48;
  DWORD T49;
  DWORD T50;
  D T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  D T59;
  D T60;
  D T61;
  D T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  D T67;
  DWORD mF68T, mF68;
  DWORD iF69T, iF69;
  D T70;
  DWORD T71;
  D T72;
  D T73;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:250
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:252
  T1 = SLOT_VALUE(ds_, 3);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:269
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:254
    T8 = SLOT_VALUE_INITD(ds_, 4);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:255
    T9 = primitive_idQ(T8,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:255
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:256
      T10 = SLOT_VALUE(ds_, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:256
      T11 = SLOT_VALUE_INITD(T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:256
      T12 = SLOT_VALUE_INITD(T11, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:256
      T13 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:256
      T14 = primitive_machine_word_logand(T13,1020);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:256
      T15 = primitive_machine_word_logior(T14,1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:257
      T2 = Knext_free_argnumYdispatch_engine_internalVdylanI((D) -3, T1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:258
      T16 = primitive_cast_integer_as_raw(T2);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:258
      T17 = primitive_machine_word_less_thanQ(T16,T15);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:258
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:259
        T3 = T2;
        MV_SET_ELT(0, T2);
        MV_SET_COUNT(1);
        T5 = T3;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:261
        T4 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T5 = T4;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:258
      T7 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:264
      T18 = SLOT_VALUE_INITD(T8, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:264
      mF6 = T18;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:270
      T71 = primitive_cast_integer_as_raw(mF6);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
      mF68T = T71;
      iF69T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
        mF68 = mF68T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:270
        T72 = primitive_cast_raw_as_integer(mF68);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
        iF69 = iF69T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
        T73 = primitive_cast_raw_as_integer(iF69);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:266
        T25 = primitive_idQ(T72,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:266
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:267
          T26 = SLOT_VALUE_INITD(T8, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:267
          nxt_ = T26;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:268
          SLOT_VALUE_SETTER(nxt_, ds_, 4);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:269
          goto L0;
          T24 = T70;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:270
          T27 = primitive_machine_word_logbitQ(2,mF68);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:270
          if (T27 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:270
            T20 = Kargnum_consideredQYdispatch_engine_internalVdylanI(T73, T1);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:270
            T28 = primitive_not(T20);
            T21 = T28;
          } else {
            T21 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:270
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:266
          if (T21 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
            T29 = primitive_machine_word_less_thanQ(iF69,1);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
            if (T29 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T30 = primitive_machine_word_logxor(iF69,1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T31 = primitive_machine_word_negative_signal_overflow(T30);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T32 = primitive_machine_word_logior(T31,1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T33 = primitive_machine_word_less_thanQ(T32,257);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              if (T33 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T35 = primitive_machine_word_shift_right(T31,2);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T34 = primitive_machine_word_shift_right(mF68,T35);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T36 = primitive_machine_word_logand(T34,-4);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T37 = primitive_machine_word_logior(T36,1);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T38 = primitive_cast_raw_as_integer(T37);
                T61 = T38;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T39 = primitive_machine_word_less_thanQ(mF68,1);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                if (T39 != &KPfalseVKi) {
                  T60 = (D) -3;
                } else {
                  T60 = (D) 1;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T61 = T60;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T62 = T61;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T48 = primitive_machine_word_less_thanQ(iF69,257);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              if (T48 != &KPfalseVKi) {
                T47 = T73;
              } else {
                T47 = (D) 257;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              shiftF40 = T47;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T49 = primitive_machine_word_logxor(mF68,1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              mx_ = T49;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T43 = shiftF40;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T50 = primitive_cast_integer_as_raw(T43);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T51 = primitive_machine_word_equalQ(T50,257);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              if (T51 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                shiftF40 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T42 = shiftF40;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T46 = mx_;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T54 = primitive_cast_integer_as_raw(T42);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T53 = primitive_machine_word_shift_right(T54,2);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                T52 = primitive_machine_word_shift_left_signal_overflow(T46,T53);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
                mx_ = T52;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T41 = shiftF40;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T45 = mx_;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T57 = primitive_cast_integer_as_raw(T41);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T56 = primitive_machine_word_shift_right(T57,2);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T55 = primitive_machine_word_shift_left_signal_overflow(T45,T56);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T58 = primitive_machine_word_logior(T55,1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
              T59 = primitive_cast_raw_as_integer(T58);
              T62 = T59;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:271
            SLOT_VALUE_SETTER(T62, T8, 0);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:272
            T22 = T73;
            MV_SET_ELT(0, T73);
            MV_SET_COUNT(1);
            T23 = T22;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
            T63 = primitive_machine_word_shift_right(mF68,1);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
            T64 = primitive_machine_word_logand(T63,-4);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
            T65 = primitive_machine_word_logior(T64,1);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
            T66 = primitive_machine_word_add_signal_overflow(iF69,4);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
            mF68T = T65;
            iF69T = T66;
            goto L1;
            T23 = T67;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:266
          T24 = T23;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:266
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:274
      T7 = T24;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:255
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:269
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:250
  return(T7);
}

D Kcompute_discriminator_for_argYdispatch_engine_internalVdylanI (D argnum_, D ds_) {
  D thisargclass_;
  D T4_0;
  D T5_0;
  D T5_1;
  D T5_2;
  D T5_3;
  D T5_4;
  D secondary_p_;
  D force_blowup_p_;
  D all_subtypes_p_;
  D some_subtypes_p_;
  D subtype_exception_;
  D T11;
  D T12_0;
  D T13;
  D T14;
  D T15;
  D nextdF16;
  D T17;
  D T18_0;
  D nextdF19;
  D T20;
  D T21_0;
  D T21_1;
  D thend_;
  D elsed_;
  D T24_0;
  D T25_0;
  D T26_0;
  D T27_0;
  D T28_0;
  D T29_0;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  DADDR T40;
  D T41;
  DWORD T42;
  DWORD T43;
  D T44_0;
  D T44_1;
  D T45_0;
  D T45_1;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:542
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:544
  T30 = SLOT_VALUE(ds_, 2);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:544
  T32 = primitive_cast_integer_as_raw(argnum_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:544
  T31 = REPEATED_D_SLOT_VALUE_TAGGED(T30, 1, T32);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:545
  thisargclass_ = Kobject_classVKdI(T31);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:546
  T33 = SLOT_VALUE(ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:546
  T34 = SLOT_VALUE_INITD(T33, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:546
  T35 = primitive_idQ(T34,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:546
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:548
    T4_0 = KdispinapplicableYdispatch_engine_internalVdylanI(ds_);
    T29_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:553
    T5_0 = Kponder_this_argYdispatch_engine_internalVdylanI(ds_, T31, thisargclass_, argnum_);
    T5_1 = MV_GET_ELT(1);
    T5_2 = MV_GET_ELT(2);
    T5_3 = MV_GET_ELT(3);
    T5_4 = MV_GET_ELT(4);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:550
    secondary_p_ = T5_0;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:550
    force_blowup_p_ = T5_1;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:550
    all_subtypes_p_ = T5_2;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:550
    some_subtypes_p_ = T5_3;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:550
    subtype_exception_ = T5_4;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:554
    if (force_blowup_p_ != &KPfalseVKi) {
      T11 = &KPfalseVKi;
    } else {
      T11 = all_subtypes_p_;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:554
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:554
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:556
      Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI(ds_, argnum_, T31);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:557
      T12_0 = Kcompute_more_dispatch_engineYdispatch_engine_internalVdylanI(ds_);
      T28_0 = T12_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:559
      T36 = SLOT_VALUE(ds_, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:560
      if (force_blowup_p_ != &KPfalseVKi) {
        T13 = force_blowup_p_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:560
        T37 = primitive_not(subtype_exception_);
        T13 = T37;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:560
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:560
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:562
        if (secondary_p_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:563
          Kprune_methods_by_known_classYdispatch_engine_internalVdylanI(argnum_, thisargclass_, ds_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:564
          T14 = Kcompute_subdiscriminator_for_argYdispatch_engine_internalVdylanI(ds_, argnum_, T31, thisargclass_);
          nextdF16 = T14;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:566
          Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI(ds_, argnum_, T31);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:567
          T15 = Kcompute_more_dispatch_engineYdispatch_engine_internalVdylanI(ds_);
          nextdF16 = T15;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:562
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:569
        T17 = Kmake_by_class_discriminatorYdispatch_engine_internalVdylanI(argnum_, T36, (D) 5);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:570
        T38 = SLOT_VALUE(thisargclass_, 2);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:570
        T39 = SLOT_VALUE_INITD(T38, 2);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:570
        T40 = primitive_cast_pointer_as_raw(T39);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:570
        T42 = primitive_machine_word_logand(T40,-4);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:570
        T43 = primitive_machine_word_logior(T42,1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:570
        T41 = primitive_cast_raw_as_integer(T43);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:569
        T18_0 = Kckd_addXYdispatch_engine_internalVdylanI(T17, T41, nextdF16);
        T27_0 = T18_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:572
        Kconsider_arg_discriminatedYdispatch_engine_internalVdylanI(ds_, argnum_, T31);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:573
        nextdF19 = Kcompute_more_dispatch_engineYdispatch_engine_internalVdylanI(ds_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:574
        if (some_subtypes_p_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:576
          T20 = primitive_instanceQ(T31,subtype_exception_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:576
          if (T20 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:577
            T44_0 = nextdF19;
            T44_1 = Dabsent_engine_nodeVKg;
            T21_0 = T44_0;
            T21_1 = T44_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:579
            T45_0 = Dabsent_engine_nodeVKg;
            T45_1 = nextdF19;
            T21_0 = T45_0;
            T21_1 = T45_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:576
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:576
          thend_ = T21_0;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:576
          elsed_ = T21_1;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:581
          T24_0 = Kmake_if_type_discriminatorVKgI(argnum_, T36, subtype_exception_, thend_, elsed_);
          T26_0 = T24_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:584
          T25_0 = Kmake_typecheck_discriminatorVKgI(argnum_, T36, subtype_exception_, nextdF19);
          T26_0 = T25_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:574
        T27_0 = T26_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:560
      T28_0 = T27_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:554
    T29_0 = T28_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:546
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:542
  MV_SET_COUNT(1);
  return(T29_0);
}

D Kcompute_terminal_engine_nodeYdispatch_engine_internalVdylanI (D ds_) {
  D methlistF1;
  D keys_;
  D ordered_;
  D ambig_;
  D UtmpF5;
  D T6;
  D T7;
  D ans_;
  D profiling_parent_;
  D UtmpF10;
  D T11;
  D T12;
  D new_;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22_0;
  D T22_1;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:691
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:693
  T18 = SLOT_VALUE(ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:693
  T19 = SLOT_VALUE_INITD(T18, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:693
  methlistF1 = T19;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:694
  T20 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:694
  keys_ = Kdetermine_call_keywordsYdispatch_engine_internalVdylanI(T20, methlistF1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:695
  T21 = SLOT_VALUE(ds_, 2);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:695
  T22_0 = Kcompute_sorted_applicable_methods_1Ydispatch_engine_internalVdylanI(methlistF1, T21, &KPorder_methodsYdispatch_engine_internalVdylan);
  T22_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:695
  ordered_ = T22_0;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:695
  ambig_ = T22_1;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:699
  UtmpF5 = Tgracefully_dispatch_to_ambiguous_methodsTVKg;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:699
  if (UtmpF5 != &KPfalseVKi) {
    T7 = UtmpF5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:700
    T23 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:700
    T6 = Tpermissibly_ambiguous_genericsTVKe;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:700
    T24 = KmemberQVKdMM3I(T23, T6, &KPempty_vectorVKi, &KEEVKd);
    T7 = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:699
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:697
  ans_ = Ktransmogrify_method_list_groundedYdispatch_engine_internalVdylanI(ds_, ordered_, ambig_, keys_, T7);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:703
  T25 = SLOT_VALUE(ds_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:705
  T26 = primitive_instanceQ(T25,&KLcache_header_engine_nodeGVKg);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:705
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:417
    T17 = T25;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:706
    T27 = SLOT_VALUE_INITD(T17, 4);
    profiling_parent_ = T27;
  } else {
    profiling_parent_ = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:705
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:710
  UtmpF10 = Tprofile_all_terminal_engine_nodesQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:710
  if (UtmpF10 != &KPfalseVKi) {
    T11 = UtmpF10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:711
    T28 = primitive_instanceQ(profiling_parent_,&KLprofiling_call_site_cache_header_engine_nodeGVKg);
    T11 = T28;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:710
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:710
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:713
    T12 = Kbootstrap_typed_allocate_engine_nodeVKgI(&KLprofiling_call_site_cache_header_engine_nodeGVKg, (D) 53, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:712
    new_ = T12;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:716
    primitive_initialize_discriminator(new_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:717
    T29 = primitive_cast_raw_as_pointer(0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:717
    primitive_slot_value_setter(T29,new_,5);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:718
    primitive_slot_value_setter(T29,new_,6);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:719
    SLOT_VALUE_SETTER(T25, new_, 4);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:720
    T30 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:720
    Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(new_, ans_, T30);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:721
    T14_0 = new_;
    T16_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:723
    T15_0 = ans_;
    T16_0 = T15_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:710
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:691
  MV_SET_COUNT(1);
  return(T16_0);
}

D Kdetermine_call_keywordsYdispatch_engine_internalVdylanI (D gf_, D methods_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD iF13T, iF13;
  D T14T, T14;
  D T15;
  D m_;
  D T17;
  D T18;
  D T19;
  D keys_;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  D T28_0;
  D T29;
  D T30_0;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  DWORD iF45;
  D ansF46;
  DWORD nansF47;
  DWORD T48;
  D T49;
  DWORD T50;
  D T51;
  DWORD iF52T, iF52;
  D ansF53T, ansF53;
  DWORD nansF54T, nansF54;
  D T55;
  D methsF56T, methsF56;
  D T57;
  D ansF58T, ansF58;
  DWORD nansF59T, nansF59;
  D T60;
  D T61;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:652
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:653
  T6 = SLOT_VALUE_INITD(gf_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:654
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:654
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:654
  T9 = primitive_machine_word_logbitQ(19,T8);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:654
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:655
    T2 = &KPtrueVKi;
    MV_SET_ELT(0, &KPtrueVKi);
    MV_SET_COUNT(1);
    T5 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:656
    T10 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:656
    T11 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:656
    T12 = primitive_machine_word_logbitQ(18,T11);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:654
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
      methsF56T = methods_;
      ansF58T = &KPempty_listVKi;
      nansF59T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
        methsF56 = methsF56T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
        T57 = methsF56;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
        ansF58 = ansF58T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
        nansF59 = nansF59T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
        T61 = primitive_cast_raw_as_integer(nansF59);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:658
        T23 = primitive_idQ(T57,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:658
        if (T23 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:659
          T24 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T61);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
          iF13T = 1;
          T14T = ansF58;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
            iF13 = iF13T;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
            T14 = T14T;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
            T25 = primitive_idQ(T14,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
            if (T25 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              T26 = SLOT_VALUE_INITD(T14, 0);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T26, T24, 1, iF13);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              T27 = primitive_machine_word_add_signal_overflow(iF13,4);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              T29 = SLOT_VALUE_INITD(T14, 1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              T30_0 = T29;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              T28_0 = T30_0;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              T31 = T28_0;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
              iF13T = T27;
              T14T = T31;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:660
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:661
          T15 = T24;
          MV_SET_ELT(0, T24);
          MV_SET_COUNT(1);
          T22 = T15;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:663
          T32 = SLOT_VALUE_INITD(T57, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:663
          m_ = T32;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:664
          CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
          T17 = CONGRUENT_CALL1(m_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:664
          T33 = SLOT_VALUE_INITD(T17, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:664
          T34 = primitive_cast_integer_as_raw(T33);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:664
          T35 = primitive_machine_word_logbitQ(19,T34);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:664
          if (T35 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:665
            T18 = &KPtrueVKi;
            MV_SET_ELT(0, &KPtrueVKi);
            MV_SET_COUNT(1);
            T21 = T18;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:667
            T19 = CALL1(&Kkeyword_specifiersVKe, m_);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:667
            keys_ = T19;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:668
            T36 = SLOT_VALUE_INITD(keys_, 0);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:675
            iF52T = 1;
            ansF53T = ansF58;
            nansF54T = nansF59;
          L2: ;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
              iF52 = iF52T;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
              ansF53 = ansF53T;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
              nansF54 = nansF54T;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:675
              iF45 = iF52;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:673
              T60 = primitive_cast_raw_as_integer(iF45);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:675
              ansF46 = ansF53;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:675
              nansF47 = nansF54;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:670
              T39 = primitive_idQ(T60,T36);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:670
              if (T39 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
                T40 = SLOT_VALUE_INITD(T57, 1);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
                methsF56T = T40;
                ansF58T = ansF46;
                nansF59T = nansF47;
                goto L0;
                T38 = T55;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:673
                T41 = REPEATED_D_SLOT_VALUE_TAGGED(keys_, 1, iF45);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:674
                T42 = KmemberQVKdMM3I(T41, ansF46, &KPempty_vectorVKi, &KEEVKd);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:674
                if (T42 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:675
                  T43 = primitive_machine_word_add_signal_overflow(iF45,8);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:675
                  iF52T = T43;
                  ansF53T = ansF53;
                  nansF54T = nansF54;
                  goto L2;
                  T37 = T44;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
                  T48 = primitive_machine_word_add_signal_overflow(iF45,8);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
                  T49 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
                  SLOT_VALUE_SETTER(T41, T49, 0);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
                  SLOT_VALUE_SETTER(ansF46, T49, 1);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
                  T50 = primitive_machine_word_add_signal_overflow(nansF47,4);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:677
                  iF52T = T48;
                  ansF53T = T49;
                  nansF54T = T50;
                  goto L2;
                  T37 = T51;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:674
                T38 = T37;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:670
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:675
            T21 = T38;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:664
          T22 = T21;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:658
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:671
      T4 = T22;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:687
      T3 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T4 = T3;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:654
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:654
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:652
  return(T5);
}

D Ktransmogrify_method_list_groundedYdispatch_engine_internalVdylanI (D ds_, D ordered_, D ambig_, D keyspec_, D kludgeQ_) {
  D T5_0;
  D nordered_;
  D nambig_;
  D T8;
  D T9;
  D argsF10;
  D T11;
  D T12_0;
  D T13_0;
  D T14_0;
  D mF15;
  D mF16;
  D T17_0;
  D moremeths_;
  D T19;
  D more_;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25_0;
  D T26_0;
  D T27_0;
  D T28_0;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33_0;
  D T33_1;
  D T34;
  D T35;
  D T36;
  _KLsimple_object_vectorGVKd_3 T37 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T38;
  _KLsimple_object_vectorGVKd_10 T39 = {&KLsimple_object_vectorGVKdW, (D) 41};
  D T40_0;
  D dsF41T, dsF41;
  D T42;
  D orderedF43T, orderedF43;
  D T44;
  D ambigF45T, ambigF45;
  D T46;
  D keyspecF47T, keyspecF47;
  D T48;
  D kludgeQF49T, kludgeQF49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  DWORD T55;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:729
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
  dsF41T = ds_;
  orderedF43T = ordered_;
  ambigF45T = ambig_;
  keyspecF47T = keyspec_;
  kludgeQF49T = kludgeQ_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    dsF41 = dsF41T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    T42 = dsF41;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    orderedF43 = orderedF43T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    T44 = orderedF43;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    ambigF45 = ambigF45T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    T46 = ambigF45;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    keyspecF47 = keyspecF47T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    T48 = keyspecF47;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    kludgeQF49 = kludgeQF49T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
    T50 = kludgeQF49;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:732
    T29 = SLOT_VALUE(T42, 0);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:733
    T30 = SLOT_VALUE(T42, 2);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:734
    T31 = primitive_idQ(T44,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:734
    if (T31 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:735
      T32 = primitive_idQ(T46,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:735
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:737
        T5_0 = KdispinapplicableYdispatch_engine_internalVdylanI(T42);
        T14_0 = T5_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:735
        if (T50 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:741
          T33_0 = Kcompute_sorted_applicable_methods_1Ydispatch_engine_internalVdylanI(T46, T30, &KPorder_methods_desperatelyYdispatch_engine_internalVdylan);
          T33_1 = MV_GET_ELT(1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:739
          nordered_ = T33_0;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:739
          nambig_ = T33_1;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
          T34 = primitive_idQ(nordered_,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
          if (T34 != &KPfalseVKi) {
            T9 = T34;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
            T35 = SLOT_VALUE(T42, 0);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
            T8 = Tpermissibly_ambiguous_genericsTVKe;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
            T36 = KmemberQVKdMM3I(T35, T8, &KPempty_vectorVKi, &KEEVKd);
            T9 = T36;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
          if (T9 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:743
            argsF10 = Kreconstruct_args_from_mepargsVKeI(T29, T30);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:749
            T37.vector_element_[0] = T46;
            T37.vector_element_[1] = T29;
            T37.vector_element_[2] = argsF10;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:749
            T38 = primitive_copy_vector(&T37);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:744
            T39.vector_element_[0] = IKJgeneric_;
            T39.vector_element_[1] = T29;
            T39.vector_element_[2] = &KJarguments_;
            T39.vector_element_[3] = argsF10;
            T39.vector_element_[4] = IKJambiguous_;
            T39.vector_element_[5] = T46;
            T39.vector_element_[6] = &KJformat_string_;
            T39.vector_element_[7] = &K54;
            T39.vector_element_[8] = &KJformat_arguments_;
            T39.vector_element_[9] = T38;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:744
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T11 = CONGRUENT_CALL2(&KLambiguous_methods_warningGVKg, &T39);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:744
            KdispwarnYdispatch_engine_internalVdylanI(T11, T42);
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:742
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
          dsF41T = ds_;
          orderedF43T = nordered_;
          ambigF45T = nambig_;
          keyspecF47T = keyspec_;
          kludgeQF49T = &KPfalseVKi;
          goto L0;
          T13_0 = T40_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:755
          T12_0 = Kmake_ambiguous_methods_engine_nodeVKgI(T44, T46);
          T13_0 = T12_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:735
        T14_0 = T13_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:735
      T28_0 = T14_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:758
      T51 = SLOT_VALUE_INITD(T44, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:758
      mF15 = T51;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:759
      T52 = primitive_instanceQ(mF15,&KLaccessor_methodGVKe);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:759
      if (T52 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:761
        mF16 = mF15;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:762
        T17_0 = Kmake_slot_access_engine_nodeYdispatch_engine_internalVdylanI(mF16, T42);
        T27_0 = T17_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:764
        T53 = SLOT_VALUE_INITD(mF15, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:764
        T54 = SLOT_VALUE_INITD(T53, 0);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:764
        T55 = primitive_cast_integer_as_raw(T54);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:764
        T56 = primitive_machine_word_logbitQ(22,T55);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:766
        if (T56 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:767
          T57 = SLOT_VALUE_INITD(T44, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:767
          moremeths_ = T57;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:768
          T19 = Ktransmogrify_method_list_tail_groundedYdispatch_engine_internalVdylanI(T42, T44, moremeths_, T46, T50);
          more_ = T19;
        } else {
          more_ = &KPempty_listVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:766
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
        if (T56 != &KPfalseVKi) {
          T21 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
          T58 = primitive_idQ(more_,&KPempty_listVKi);
          T21 = T58;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
        if (T21 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
          T59 = primitive_idQ(T48,&KPtrueVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
          if (T59 != &KPfalseVKi) {
            T22 = T59;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
            T60 = primitive_not(T48);
            T22 = T60;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
          T23 = T22;
        } else {
          T23 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:773
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:771
        if (T23 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:774
          T24_0 = mF15;
          T26_0 = T24_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:776
          T25_0 = Kmake_single_method_engine_nodeVKgI(mF15, &KPempty_vectorVKi, more_, T48);
          T26_0 = T25_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:771
        T27_0 = T26_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:759
      T28_0 = T27_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:734
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:752
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:729
  MV_SET_COUNT(1);
  return(T28_0);
}

D KPorder_methods_desperatelyYdispatch_engine_internalVdylanI (D m1_, D m2_, D args_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D cmp_;
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
  DWORD T22;
  D T23;
  D T24;
  DWORD idxF25T, idxF25;
  D ambigpF26T, ambigpF26;
  D T27;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:969
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:972
  T3 = KPmethod_number_requiredVKgI(m1_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
  idxF25T = 1;
  ambigpF26T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
    idxF25 = idxF25T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:979
    T27 = primitive_cast_raw_as_integer(idxF25);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
    ambigpF26 = ambigpF26T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:974
    T17 = primitive_idQ(T27,T3);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:974
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:975
      if (ambigpF26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:975
        T4 = IKJLG_;
        MV_SET_ELT(0, IKJLG_);
        MV_SET_COUNT(1);
        T6 = T4;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:975
        T5 = IKJE_;
        MV_SET_ELT(0, IKJE_);
        MV_SET_COUNT(1);
        T6 = T5;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:975
      T16 = T6;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:977
      T7 = KPmethod_specializerVKgI(m1_, T27);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:978
      T8 = KPmethod_specializerVKgI(m2_, T27);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:979
      T18 = REPEATED_D_SLOT_VALUE_TAGGED(args_, 1, idxF25);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:980
      T9 = KPorder_specializersYdispatch_engine_internalVdylanI(T7, T8, T18);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
      T19 = primitive_idQ(T9,IKJLG_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
      if (T19 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
        T10 = KPorder_specializers_desperatelyYdispatch_engine_internalVdylanI(T7, T8, T18);
        cmp_ = T10;
      } else {
        cmp_ = T9;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:982
      T20 = primitive_idQ(cmp_,IKJL_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:982
      if (T20 != &KPfalseVKi) {
        T12 = T20;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:982
        T21 = primitive_idQ(cmp_,IKJG_);
        T12 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:982
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:982
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:983
        T13 = cmp_;
        MV_SET_ELT(0, cmp_);
        MV_SET_COUNT(1);
        T15 = T13;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
        T22 = primitive_machine_word_add_signal_overflow(idxF25,4);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
        if (ambigpF26 != &KPfalseVKi) {
          T14 = ambigpF26;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
          T23 = primitive_idQ(cmp_,IKJLG_);
          T14 = T23;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
        idxF25T = T22;
        ambigpF26T = T14;
        goto L0;
        T15 = T24;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:982
      T16 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:974
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:985
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:969
  return(T16);
}

D Ktransmogrify_method_list_tail_groundedYdispatch_engine_internalVdylanI (D ds_, D ordered_, D subordered_, D ambig_, D kludgeQ_) {
  D T5_0;
  D nordered_;
  D nambig_;
  D argsF8;
  D T9;
  D T10_0;
  D T11_0;
  D mF12;
  D othermeths_;
  D T14;
  D more_;
  D mF16;
  D T17_0;
  D T18_0;
  D T19_0;
  D T20;
  D T21;
  D T22;
  D T23_0;
  D T23_1;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_4 T26 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T27;
  _KLsimple_object_vectorGVKd_12 T28 = {&KLsimple_object_vectorGVKdW, (D) 49};
  D T29_0;
  D dsF30T, dsF30;
  D T31;
  D orderedF32T, orderedF32;
  D T33;
  D suborderedF34T, suborderedF34;
  D T35;
  D ambigF36T, ambigF36;
  D T37;
  D kludgeQF38T, kludgeQF38;
  D T39;
  D T40;
  D T41;
  D T42;
  D T43_0;
  D T44;
  D T45;
  D T46;
  DWORD T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52_0;
  D T53_0;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:783
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
  dsF30T = ds_;
  orderedF32T = ordered_;
  suborderedF34T = subordered_;
  ambigF36T = ambig_;
  kludgeQF38T = kludgeQ_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    dsF30 = dsF30T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    T31 = dsF30;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    orderedF32 = orderedF32T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    T33 = orderedF32;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    suborderedF34 = suborderedF34T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    T35 = suborderedF34;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    ambigF36 = ambigF36T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    T37 = ambigF36;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    kludgeQF38 = kludgeQF38T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
    T39 = kludgeQF38;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:787
    T20 = primitive_idQ(T35,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:787
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:788
      T21 = primitive_idQ(T37,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:788
      if (T21 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:789
        T5_0 = &KPempty_listVKi;
        T11_0 = T5_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:788
        if (T39 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:792
          T22 = SLOT_VALUE(T31, 2);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:794
          T23_0 = Kcompute_sorted_applicable_methods_1Ydispatch_engine_internalVdylanI(T37, T22, &KPorder_methods_desperatelyYdispatch_engine_internalVdylan);
          T23_1 = MV_GET_ELT(1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:793
          nordered_ = T23_0;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:793
          nambig_ = T23_1;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:795
          T24 = primitive_idQ(nordered_,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:795
          if (T24 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:796
            T25 = SLOT_VALUE(T31, 0);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:797
            argsF8 = Kreconstruct_args_from_mepargsVKeI(T25, T22);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:805
            T26.vector_element_[0] = T25;
            T26.vector_element_[1] = argsF8;
            T26.vector_element_[2] = T37;
            T26.vector_element_[3] = T33;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:805
            T27 = primitive_copy_vector(&T26);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:798
            T28.vector_element_[0] = IKJgeneric_;
            T28.vector_element_[1] = T25;
            T28.vector_element_[2] = &KJarguments_;
            T28.vector_element_[3] = argsF8;
            T28.vector_element_[4] = &KJordered_;
            T28.vector_element_[5] = T33;
            T28.vector_element_[6] = IKJambiguous_;
            T28.vector_element_[7] = T37;
            T28.vector_element_[8] = &KJformat_string_;
            T28.vector_element_[9] = &K58;
            T28.vector_element_[10] = &KJformat_arguments_;
            T28.vector_element_[11] = T27;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:798
            CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
            T9 = CONGRUENT_CALL2(&KLambiguous_methods_warningGVKg, &T28);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:798
            KdispwarnYdispatch_engine_internalVdylanI(T9, T31);
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:795
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
          dsF30T = ds_;
          orderedF32T = ordered_;
          suborderedF34T = nordered_;
          ambigF36T = nambig_;
          kludgeQF38T = &KPfalseVKi;
          goto L0;
          T10_0 = T29_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:810
          T40 = SLOT_VALUE(T31, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:810
          T41 = Kmake_ambiguous_methods_engine_nodeVKgI(T33, T37);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:810
          T42 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:810
          SLOT_VALUE_SETTER(T41, T42, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:810
          SLOT_VALUE_SETTER(T40, T42, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:810
          T43_0 = T42;
          T10_0 = T43_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:788
        T11_0 = T10_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:788
      T19_0 = T11_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:813
      T44 = SLOT_VALUE_INITD(T35, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:813
      mF12 = T44;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:815
      T45 = SLOT_VALUE_INITD(mF12, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:815
      T46 = SLOT_VALUE_INITD(T45, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:815
      T47 = primitive_cast_integer_as_raw(T46);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:815
      T48 = primitive_machine_word_logbitQ(22,T47);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:815
      if (T48 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:816
        T49 = SLOT_VALUE_INITD(T35, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:816
        othermeths_ = T49;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:817
        T14 = Ktransmogrify_method_list_tail_groundedYdispatch_engine_internalVdylanI(T31, T33, othermeths_, T37, T39);
        more_ = T14;
      } else {
        more_ = &KPempty_listVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:815
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:822
      T50 = primitive_instanceQ(mF12,&KLaccessor_methodGVKe);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:822
      if (T50 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:824
        mF16 = mF12;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:825
        T17_0 = Kmake_slot_accessing_next_method_chainVKgI(T31, mF16);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:825
        T53_0 = T17_0;
        T18_0 = T53_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:826
        T51 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:826
        SLOT_VALUE_SETTER(mF12, T51, 0);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:826
        SLOT_VALUE_SETTER(more_, T51, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:826
        T52_0 = T51;
        T18_0 = T52_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:822
      T19_0 = T18_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:787
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:808
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:783
  MV_SET_COUNT(1);
  return(T19_0);
}

D KLambiguous_methods_warningGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_ambiguous_methods_generic_, D Uunique_ambiguous_methods_ordered_, D Uunique_ambiguous_methods_ambiguous_, D Uunique_ambiguous_methods_arguments_) {
  D T9;
  D Uunique_ambiguous_methods_genericF10;
  D T11;
  D Uunique_ambiguous_methods_ambiguousF12;
  D T13;
  D Uunique_ambiguous_methods_argumentsF14;
  D T15;
  D Uunique_ambiguous_methods_genericF16;
  D Uunique_ambiguous_methods_orderedF17;
  D Uunique_ambiguous_methods_ambiguousF18;
  D Uunique_ambiguous_methods_argumentsF19;
  D T20_0;
  D T21;
  _KLsimple_object_vectorGVKd_1 T22 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T29;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  T21 = primitive_idQ(Uunique_ambiguous_methods_generic_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  if (T21 != &KPfalseVKi) {
    T22.vector_element_[0] = IKJgeneric_;
    T23 = KerrorVKdMM1I(&K94, &T22);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
    T9 = T23;
    Uunique_ambiguous_methods_genericF10 = T9;
  } else {
    Uunique_ambiguous_methods_genericF10 = Uunique_ambiguous_methods_generic_;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  T24 = primitive_idQ(Uunique_ambiguous_methods_ambiguous_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = IKJambiguous_;
    T26 = KerrorVKdMM1I(&K94, &T25);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
    T11 = T26;
    Uunique_ambiguous_methods_ambiguousF12 = T11;
  } else {
    Uunique_ambiguous_methods_ambiguousF12 = Uunique_ambiguous_methods_ambiguous_;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  T27 = primitive_idQ(Uunique_ambiguous_methods_arguments_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  if (T27 != &KPfalseVKi) {
    T28.vector_element_[0] = &KJarguments_;
    T29 = KerrorVKdMM1I(&K94, &T28);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
    T13 = T29;
    Uunique_ambiguous_methods_argumentsF14 = T13;
  } else {
    Uunique_ambiguous_methods_argumentsF14 = Uunique_ambiguous_methods_arguments_;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  T15 = primitive_object_allocate_filled(7,&KLambiguous_methods_warningGVKgW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T15, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T15, 1);
  Uunique_ambiguous_methods_genericF16 = Uunique_ambiguous_methods_genericF10;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_genericF16, T15, 2);
  Uunique_ambiguous_methods_orderedF17 = Uunique_ambiguous_methods_ordered_;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_orderedF17, T15, 3);
  Uunique_ambiguous_methods_ambiguousF18 = Uunique_ambiguous_methods_ambiguousF12;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_ambiguousF18, T15, 4);
  Uunique_ambiguous_methods_argumentsF19 = Uunique_ambiguous_methods_argumentsF14;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_argumentsF19, T15, 5);
  APPLY2(&KinitializeVKd, T15, init_args_);
  T20_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:962
  MV_SET_COUNT(1);
  return(T20_0);
}

D KPorder_specializers_desperatelyYdispatch_engine_internalVdylanI (D t1_, D t2_, D arg_) {
  D T3;
  D T4;
  D T5_0;
  D T5_1;
  D orderF6;
  D ntypeF7;
  D T8_0;
  D T8_1;
  D T9_0;
  D T9_1;
  D T10;
  D T11_0;
  D T11_1;
  D T12_0;
  D T12_1;
  D T13;
  D T14;
  D T15_0;
  D T15_1;
  D orderF16;
  D ntypeF17;
  D T18_0;
  D T18_1;
  D T19_0;
  D T19_1;
  D T20;
  D T21_0;
  D T21_1;
  D T22_0;
  D T22_1;
  D T23;
  D argF24;
  D T25;
  D T26_0;
  D T26_1;
  D T27_0;
  D T27_1;
  D T28;
  D T29;
  D T30;
  D T31_0;
  D T31_1;
  D T32_0;
  D T32_1;
  D T33_0;
  D T33_1;
  D T34;
  D T35;
  D T36;
  D T37_0;
  D T37_1;
  D T38_0;
  D T38_1;
  D T39;
  D T40;
  D T41_0;
  D T41_1;
  D T42_0;
  D T42_1;
  D T43_0;
  D T43_1;
  D T44_0;
  D T44_1;
  D T45_0;
  D T45_1;
  D T46_0;
  D T46_1;
  D T47_0;
  D T47_1;
  D T48_0;
  D T48_1;
  D T49_0;
  D T49_1;
  D T50_0;
  D T50_1;
  D T51_0;
  D T51_1;
  D T52_0;
  D T52_1;
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
  D T65_0;
  D T65_1;
  D T66;
  D T67;
  D T68;
  D T69;
  D T70_0;
  D T70_1;
  D t1F71;
  D T72;
  D t2F73;
  D T74;
  D argF75;
  D T76;
  D T77_0;
  D T77_1;
  D T78_0;
  D T78_1;
  D t1F79;
  D t2F80;
  D argF81;
  D T82_0;
  D T82_1;
  D t1F83;
  D t2F84;
  D argF85;
  D T86_0;
  D T86_1;
  D T87;
  D T88;
  D T89;
  D T90;
  D T91_0;
  D T91_1;
  D t1F92;
  D t2F93;
  D argF94;
  D T95_0;
  D T95_1;
  D T96_0;
  D T96_1;
  D t1F97;
  D t2F98;
  D argF99;
  D T100_0;
  D T100_1;
  D t1F101T, t1F101;
  D t2F102T, t2F102;
  D argF103T, argF103;
  D T104_0;
  D T104_1;
  D T105;
  D T106;
  D T107_0;
  D T107_1;
  D T108;
  D T109_0;
  D T109_1;
  D T110;
  D T111;
  D T112;
  D T113;
  D T114;
  D T115_0;
  D T115_1;
  D T116_0;
  D T116_1;
  D T117_0;
  D T117_1;
  D T118;
  D T119;
  D T120;
  D T121_0;
  D T121_1;
  D T122;
  D T123;
  D T124;
  D T125;
  D T126;
  D T127_0;
  D T127_1;
  D T128;
  D T129;
  D T130_0;
  D T130_1;
  D T131_0;
  D T131_1;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1066
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
  t1F101T = t1_;
  t2F102T = t2_;
  argF103T = arg_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1106
    t1F101 = t1F101T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1106
    t2F102 = t2F102T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1106
    argF103 = argF103T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1103
    t1F97 = t1F101;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1103
    t2F98 = t2F102;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1103
    argF99 = argF103;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1098
    t1F92 = t1F97;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1098
    t2F93 = t2F98;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1098
    argF94 = argF99;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1086
    t1F83 = t1F92;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1086
    t2F84 = t2F93;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1086
    argF85 = argF94;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1083
    t1F79 = t1F83;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1083
    t2F80 = t2F84;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1083
    argF81 = argF85;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
    t1F71 = t1F79;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
    T72 = t1F71;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
    t2F73 = t2F80;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
    T74 = t2F73;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
    argF75 = argF81;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
    T76 = argF75;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
    T64 = primitive_idQ(T72,T74);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
    if (T64 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1069
      T65_0 = IKJE_;
      T65_1 = T72;
      T52_0 = T65_0;
      T52_1 = T65_1;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1070
      T66 = primitive_instanceQ(T72,&KLunionGVKe);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
      if (T66 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
        T53 = T72;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1072
        T67 = SLOT_VALUE_INITD(T53, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1073
        T68 = SLOT_VALUE_INITD(T53, 2);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1074
        T3 = primitive_instanceQ(T76,T67);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1074
        if (T3 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1075
          T4 = primitive_instanceQ(T76,T68);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1075
          if (T4 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1076
            T5_0 = KPorder_specializers_desperatelyYdispatch_engine_internalVdylanI(T67, T68, T76);
            T5_1 = MV_GET_ELT(1);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1076
            orderF6 = T5_0;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1076
            ntypeF7 = T5_1;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1077
            T69 = primitive_idQ(orderF6,IKJLG_);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1077
            if (T69 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1080
              T77_0 = orderF6;
              T77_1 = ntypeF7;
              T8_0 = T77_0;
              T8_1 = T77_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
              t1F101T = ntypeF7;
              t2F102T = t2F80;
              argF103T = argF81;
              goto L0;
              T8_0 = T70_0;
              T8_1 = T70_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1077
            T9_0 = T8_0;
            T9_1 = T8_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1083
            t1F101T = T67;
            t2F102T = T74;
            argF103T = T76;
            goto L0;
            T9_0 = T78_0;
            T9_1 = T78_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1075
          T12_0 = T9_0;
          T12_1 = T9_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1085
          T10 = primitive_instanceQ(T76,T68);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1074
          if (T10 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1086
            t1F101T = T68;
            t2F102T = T74;
            argF103T = T76;
            goto L0;
            T11_0 = T82_0;
            T11_1 = T82_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1088
            T86_0 = KerrorVKdMM1I(&K103, &KPempty_vectorVKi);
            T86_1 = MV_GET_ELT(1);
            T11_0 = T86_0;
            T11_1 = T86_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1074
          T12_0 = T11_0;
          T12_1 = T11_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1074
        T51_0 = T12_0;
        T51_1 = T12_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1090
        T87 = primitive_instanceQ(T74,&KLunionGVKe);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
        if (T87 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
          T54 = T74;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1092
          T88 = SLOT_VALUE_INITD(T54, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1093
          T89 = SLOT_VALUE_INITD(T54, 2);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1094
          T13 = primitive_instanceQ(T76,T88);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1094
          if (T13 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1095
            T14 = primitive_instanceQ(T76,T89);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1095
            if (T14 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1096
              T15_0 = KPorder_specializers_desperatelyYdispatch_engine_internalVdylanI(T88, T89, T76);
              T15_1 = MV_GET_ELT(1);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1096
              orderF16 = T15_0;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1096
              ntypeF17 = T15_1;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1097
              T90 = primitive_idQ(orderF16,IKJLG_);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1097
              if (T90 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1100
                T95_0 = orderF16;
                T95_1 = ntypeF17;
                T18_0 = T95_0;
                T18_1 = T95_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1098
                t1F101T = T72;
                t2F102T = ntypeF17;
                argF103T = T76;
                goto L0;
                T18_0 = T91_0;
                T18_1 = T91_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1097
              T19_0 = T18_0;
              T19_1 = T18_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1103
              t1F101T = T72;
              t2F102T = T88;
              argF103T = T76;
              goto L0;
              T19_0 = T96_0;
              T19_1 = T96_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1095
            T22_0 = T19_0;
            T22_1 = T19_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1105
            T20 = primitive_instanceQ(T76,T89);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1094
            if (T20 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1106
              t1F101T = T72;
              t2F102T = T89;
              argF103T = T76;
              goto L0;
              T21_0 = T100_0;
              T21_1 = T100_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1108
              T104_0 = KerrorVKdMM1I(&K104, &KPempty_vectorVKi);
              T104_1 = MV_GET_ELT(1);
              T21_0 = T104_0;
              T21_1 = T104_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1094
            T22_0 = T21_0;
            T22_1 = T21_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1094
          T50_0 = T22_0;
          T50_1 = T22_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1110
          T105 = primitive_instanceQ(T72,&KLsingletonGVKd);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
          if (T105 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
            T55 = T72;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1111
            T106 = primitive_instanceQ(T74,&KLsingletonGVKd);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1111
            if (T106 != &KPfalseVKi) {
              T23 = IKJE_;
            } else {
              T23 = IKJL_;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1111
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1111
            T107_0 = T23;
            T107_1 = T55;
            T49_0 = T107_0;
            T49_1 = T107_1;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1112
            T108 = primitive_instanceQ(T74,&KLsingletonGVKd);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
            if (T108 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
              T56 = T74;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1113
              T109_0 = IKJG_;
              T109_1 = T56;
              T48_0 = T109_0;
              T48_1 = T109_1;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1114
              T110 = primitive_instanceQ(T72,&KLsubclassGVKe);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
              if (T110 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
                T57 = T72;
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1116
                T111 = SLOT_VALUE_INITD(T57, 1);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1117
                T112 = primitive_instanceQ(T74,&KLsubclassGVKe);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1117
                if (T112 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
                  T58 = T74;
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1118
                  argF24 = T76;
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1120
                  T113 = SLOT_VALUE_INITD(T58, 1);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1122
                  T114 = primitive_idQ(T111,T113);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1121
                  if (T114 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1122
                    T115_0 = IKJE_;
                    T115_1 = T57;
                    T27_0 = T115_0;
                    T27_1 = T115_1;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1123
                    T25 = KPclassLYdispatch_engine_internalVdylanI(T111, T113, argF24);
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1121
                    if (T25 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1123
                      T116_0 = IKJL_;
                      T116_1 = T57;
                      T26_0 = T116_0;
                      T26_1 = T116_1;
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1124
                      T117_0 = IKJG_;
                      T117_1 = T58;
                      T26_0 = T117_0;
                      T26_1 = T117_1;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1121
                    T27_0 = T26_0;
                    T27_1 = T26_1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1121
                  T33_0 = T27_0;
                  T33_1 = T27_1;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1126
                  T118 = primitive_instanceQ(T74,&KLclassGVKd);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1117
                  if (T118 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
                    T59 = T74;
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1128
                    T119 = KsubtypeQVKdMM10I(&KLclassGVKd, T59);
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1128
                    if (T119 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1129
                      T120 = primitive_idQ(T111,&KLobjectGVKd);
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1129
                      if (T120 != &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1129
                        T28 = KPorder_specializersYdispatch_engine_internalVdylanI(&KLclassGVKd, T59, T76);
                        T29 = T28;
                      } else {
                        T29 = IKJL_;
                      }
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1129
                      T30 = T29;
                    } else {
                      T30 = IKJLG_;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1128
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1128
                    T121_0 = T30;
                    T121_1 = T57;
                    T32_0 = T121_0;
                    T32_1 = T121_1;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1134
                    T31_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(T57, T74);
                    T31_1 = MV_GET_ELT(1);
                    T32_0 = T31_0;
                    T32_1 = T31_1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1117
                  T33_0 = T32_0;
                  T33_1 = T32_1;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1117
                T47_0 = T33_0;
                T47_1 = T33_1;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1136
                T122 = primitive_instanceQ(T74,&KLsubclassGVKe);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
                if (T122 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
                  T60 = T74;
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1138
                  T123 = primitive_instanceQ(T72,&KLclassGVKd);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1138
                  if (T123 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
                    T61 = T72;
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1139
                    T124 = SLOT_VALUE_INITD(T60, 1);
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1141
                    T125 = KsubtypeQVKdMM10I(&KLclassGVKd, T61);
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1141
                    if (T125 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1142
                      T126 = primitive_idQ(T124,&KLobjectGVKd);
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1142
                      if (T126 != &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1142
                        T34 = KPorder_specializersYdispatch_engine_internalVdylanI(T61, &KLclassGVKd, T76);
                        T35 = T34;
                      } else {
                        T35 = IKJG_;
                      }
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1142
                      T36 = T35;
                    } else {
                      T36 = IKJLG_;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1141
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1141
                    T127_0 = T36;
                    T127_1 = T60;
                    T38_0 = T127_0;
                    T38_1 = T127_1;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1147
                    T37_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(T72, T60);
                    T37_1 = MV_GET_ELT(1);
                    T38_0 = T37_0;
                    T38_1 = T37_1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1138
                  T46_0 = T38_0;
                  T46_1 = T38_1;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1149
                  T128 = primitive_instanceQ(T72,&KLclassGVKd);
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
                  if (T128 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
                    T62 = T72;
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1151
                    T129 = primitive_instanceQ(T74,&KLclassGVKd);
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1151
                    if (T129 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:981
                      T63 = T74;
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1153
                      T39 = Kobject_classVKdI(T76);
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1153
                      T40 = KPclassLYdispatch_engine_internalVdylanI(T62, T63, T39);
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1153
                      if (T40 != &KPfalseVKi) {
                        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1153
                        T130_0 = IKJL_;
                        T130_1 = T62;
                        T41_0 = T130_0;
                        T41_1 = T130_1;
                      } else {
                        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1153
                        T131_0 = IKJG_;
                        T131_1 = T63;
                        T41_0 = T131_0;
                        T41_1 = T131_1;
                      }
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1153
                      T43_0 = T41_0;
                      T43_1 = T41_1;
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1155
                      T42_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(T62, T74);
                      T42_1 = MV_GET_ELT(1);
                      T43_0 = T42_0;
                      T43_1 = T42_1;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1151
                    T45_0 = T43_0;
                    T45_1 = T43_1;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1158
                    T44_0 = KPorder_specializers_defaultYdispatch_engine_internalVdylanI(T72, T74);
                    T44_1 = MV_GET_ELT(1);
                    T45_0 = T44_0;
                    T45_1 = T44_1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
                  T46_0 = T45_0;
                  T46_1 = T45_1;
                }
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
                T47_0 = T46_0;
                T47_1 = T46_1;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
              T48_0 = T47_0;
              T48_1 = T47_1;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
            T49_0 = T48_0;
            T49_1 = T48_1;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
          T50_0 = T49_0;
          T50_1 = T49_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
        T51_0 = T50_0;
        T51_1 = T50_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
      T52_0 = T51_0;
      T52_1 = T51_1;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1068
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1078
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1066
  MV_SET_ELT(1, T52_1);
  MV_SET_COUNT(2);
  return(T52_0);
}

D Kponder_this_argYdispatch_engine_internalVdylanI (D ds_, D thisarg_, D thisargclass_, D argnum_) {
  D methodsF4;
  D knownargtype_;
  D T6_0;
  D T6_1;
  D T6_2;
  D T6_3;
  D T6_4;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D meth_;
  D T15;
  D T16;
  D T17;
  D T18;
  D methodsF19;
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
  D mF33;
  D sd_;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D methodsF49;
  D secondary_pF50;
  D force_blowup_pF51;
  D all_subtypes_pF52;
  D some_subtypes_pF53;
  D subtype_exceptionF54;
  D T55;
  D T56;
  D T57;
  D methodsF58T, methodsF58;
  D secondary_pF59T, secondary_pF59;
  D force_blowup_pF60T, force_blowup_pF60;
  D all_subtypes_pF61T, all_subtypes_pF61;
  D some_subtypes_pF62T, some_subtypes_pF62;
  D subtype_exceptionF63T, subtype_exceptionF63;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:605
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:611
  T7 = SLOT_VALUE(ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:611
  T8 = SLOT_VALUE_INITD(T7, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:611
  methodsF4 = T8;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:612
  T9 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:613
  T10 = SLOT_VALUE_INITD(ds_, 9);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:613
  T11 = KelementVKdMM11I(T10, argnum_, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:613
  T12 = T11;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:613
  knownargtype_ = T12;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
  methodsF58T = methodsF4;
  secondary_pF59T = &KPfalseVKi;
  force_blowup_pF60T = &KPfalseVKi;
  all_subtypes_pF61T = &KPtrueVKi;
  some_subtypes_pF62T = &KPfalseVKi;
  subtype_exceptionF63T = &KPfalseVKi;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:634
    methodsF58 = methodsF58T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:634
    secondary_pF59 = secondary_pF59T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:634
    force_blowup_pF60 = force_blowup_pF60T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:634
    all_subtypes_pF61 = all_subtypes_pF61T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:634
    some_subtypes_pF62 = some_subtypes_pF62T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:634
    subtype_exceptionF63 = subtype_exceptionF63T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
    methodsF49 = methodsF58;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
    secondary_pF50 = secondary_pF59;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
    force_blowup_pF51 = force_blowup_pF60;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
    all_subtypes_pF52 = all_subtypes_pF61;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
    some_subtypes_pF53 = some_subtypes_pF62;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
    subtype_exceptionF54 = subtype_exceptionF63;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:620
    T27 = primitive_idQ(methodsF49,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:620
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:622
      T28 = primitive_idQ(subtype_exceptionF54,&KPtrueVKi);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:622
      if (T28 != &KPfalseVKi) {
        T13 = &KPfalseVKi;
      } else {
        T13 = subtype_exceptionF54;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:622
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:621
      T29 = secondary_pF50;
      MV_SET_ELT(0, secondary_pF50);
      MV_SET_ELT(1, force_blowup_pF51);
      MV_SET_ELT(2, all_subtypes_pF52);
      MV_SET_ELT(3, some_subtypes_pF53);
      MV_SET_ELT(4, T13);
      MV_SET_COUNT(5);
      T26 = T29;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:624
      T30 = SLOT_VALUE_INITD(methodsF49, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:624
      meth_ = T30;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:625
      T15 = KPmethod_specializerVKgI(meth_, argnum_);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:627
      if (secondary_pF50 != &KPfalseVKi) {
        T17 = secondary_pF50;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:627
        T16 = Ksecondary_dispatch_specializerQYdispatch_engine_internalVdylanI(T15, thisargclass_);
        T17 = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:627
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
      if (force_blowup_pF51 != &KPfalseVKi) {
        T18 = force_blowup_pF51;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
        T35 = primitive_idQ(argnum_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
        if (T35 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T36 = primitive_instanceQ(meth_,&KLgetter_accessor_methodGVKe);
          T32 = T36;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T37 = primitive_idQ(argnum_,(D) 5);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          if (T37 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
            T38 = primitive_instanceQ(meth_,&KLsetter_accessor_methodGVKe);
            T31 = T38;
          } else {
            T31 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T32 = T31;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
        if (T32 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          mF33 = meth_;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T39 = SLOT_VALUE_INITD(mF33, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          sd_ = T39;
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T40 = SLOT_VALUE_INITD(sd_, 2);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T41 = SLOT_VALUE(T40, 2);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T42 = SLOT_VALUE_INITD(T41, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T43 = primitive_cast_integer_as_raw(T42);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T44 = primitive_machine_word_logbitQ(19,T43);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
          T45 = primitive_not(T44);
          T46 = T45;
        } else {
          T46 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
        T18 = T46;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:629
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:630
      T47 = SLOT_VALUE_INITD(methodsF49, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:630
      methodsF19 = T47;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:631
      T20 = Kconcrete_subtypeQVKeI(knownargtype_, T15, T9);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:631
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
        methodsF58T = methodsF19;
        secondary_pF59T = T17;
        force_blowup_pF60T = T18;
        all_subtypes_pF61T = all_subtypes_pF61;
        some_subtypes_pF62T = &KPtrueVKi;
        subtype_exceptionF63T = subtype_exceptionF63;
        goto L0;
        T25 = T48;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:635
        if (subtype_exceptionF54 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:636
          T55 = primitive_idQ(subtype_exceptionF54,&KPtrueVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:636
          if (T55 != &KPfalseVKi) {
            T22 = T55;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:636
            T21 = Ksame_specializerQVKgI(subtype_exceptionF54, T15);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:636
            T56 = primitive_not(T21);
            T22 = T56;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:636
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:636
          if (T22 != &KPfalseVKi) {
            T23 = &KPtrueVKi;
          } else {
            T23 = T15;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:636
          T24 = T23;
        } else {
          T24 = T15;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:635
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:634
        methodsF58T = methodsF19;
        secondary_pF59T = T17;
        force_blowup_pF60T = T18;
        all_subtypes_pF61T = &KPfalseVKi;
        some_subtypes_pF62T = some_subtypes_pF53;
        subtype_exceptionF63T = T24;
        goto L0;
        T25 = T57;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:631
      T26 = T25;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:620
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:632
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:605
  T6_0 = T26;
  T6_1 = MV_GET_ELT(1);
  T6_2 = MV_GET_ELT(2);
  T6_3 = MV_GET_ELT(3);
  T6_4 = MV_GET_ELT(4);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:605
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_ELT(3, T6_3);
  MV_SET_ELT(4, T6_4);
  MV_SET_COUNT(5);
  return(T6_0);
}

D Ksecondary_dispatch_specializerQYdispatch_engine_internalVdylanI (D spec_, D thisargclass_) {
  D Utmp_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T6_1;
  D someQ_;
  D allQ_;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16_0;
  D specF17T, specF17;
  D T18;
  D thisargclassF19T, thisargclassF19;
  D T20;
  D T21_0;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:592
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
  specF17T = spec_;
  thisargclassF19T = thisargclass_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
    specF17 = specF17T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
    T18 = specF17;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
    thisargclassF19 = thisargclassF19T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
    T20 = thisargclassF19;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:594
    T13 = primitive_instanceQ(T18,&KLunionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:594
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:627
      T12 = T18;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:596
      T14 = SLOT_VALUE_INITD(T12, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:596
      Utmp_ = Ksecondary_dispatch_specializerQYdispatch_engine_internalVdylanI(T14, T20);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:596
      if (Utmp_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:596
        T4_0 = Utmp_;
        T5_0 = T4_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
        T15 = SLOT_VALUE_INITD(T12, 2);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
        specF17T = T15;
        thisargclassF19T = thisargclass_;
        goto L0;
        T5_0 = T16_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:596
      T11_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:599
      T6_0 = Kgrounded_has_instancesQVKeI(T20, T18);
      T6_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:599
      someQ_ = T6_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:599
      allQ_ = T6_1;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:600
      if (someQ_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:600
        T22 = primitive_not(allQ_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:600
        T21_0 = T22;
        T10_0 = T21_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:600
        T9_0 = &KPfalseVKi;
        T10_0 = T9_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:600
      T11_0 = T10_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:594
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:597
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:592
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kcompute_default_subdiscriminatorYdispatch_engine_internalVdylanI (D argnum_, D gf_, D thisarg_, D specs_, D nextd_) {
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:502
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:537
  T5 = KfooF112I(thisarg_, gf_, argnum_, specs_, &KPempty_listVKi, &KPempty_listVKi, nextd_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:502
  return(T5);
}

D Kponder_a_specializerYdispatch_engine_internalVdylanI (D spec_, D thisargclass_, D subclass_p_, D singletons_, D others_) {
  D specF5;
  D T6;
  D T7;
  D specF8;
  D T9_0;
  D T9_1;
  D T9_2;
  D subclass_pF10;
  D singletonsF11;
  D othersF12;
  D T13;
  D T14;
  D T15_0;
  D T15_1;
  D T15_2;
  D T16_0;
  D T16_1;
  D T16_2;
  D T17_0;
  D T17_1;
  D T17_2;
  D T18_0;
  D T18_1;
  D T18_2;
  D T19_0;
  D T19_1;
  D T19_2;
  D T20;
  D T21_0;
  D T21_1;
  D T21_2;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26_0;
  D T26_1;
  D T26_2;
  D T27;
  D T28_0;
  D T28_1;
  D T28_2;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T32_1;
  D T32_2;
  D specF33T, specF33;
  D T34;
  D thisargclassF35T, thisargclassF35;
  D T36;
  D subclass_pF37T, subclass_pF37;
  D T38;
  D singletonsF39T, singletonsF39;
  D T40;
  D othersF41T, othersF41;
  D T42;
  D T43;
  D T44;
  D T45_0;
  D T45_1;
  D T45_2;
  _KLsimple_object_vectorGVKd_1 T46 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T47_0;
  D T47_1;
  D T47_2;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:471
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
  specF33T = spec_;
  thisargclassF35T = thisargclass_;
  subclass_pF37T = subclass_p_;
  singletonsF39T = singletons_;
  othersF41T = others_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    specF33 = specF33T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    T34 = specF33;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    thisargclassF35 = thisargclassF35T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    T36 = thisargclassF35;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    subclass_pF37 = subclass_pF37T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    T38 = subclass_pF37;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    singletonsF39 = singletonsF39T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    T40 = singletonsF39;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    othersF41 = othersF41T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
    T42 = othersF41;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
    T20 = primitive_instanceQ(T34,&KLclassGVKd);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:476
      T21_0 = T38;
      T21_1 = T40;
      T21_2 = T42;
      T19_0 = T21_0;
      T19_1 = T21_1;
      T19_2 = T21_2;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
      T22 = primitive_instanceQ(T34,&KLsingletonGVKd);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
      if (T22 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:478
        specF5 = T34;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:479
        T23 = SLOT_VALUE_INITD(specF5, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:481
        T6 = Kobject_classVKdI(T23);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:481
        T24 = primitive_idQ(T6,T36);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:481
        if (T24 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:481
          T25 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:481
          SLOT_VALUE_SETTER(T23, T25, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:481
          SLOT_VALUE_SETTER(T40, T25, 1);
          T7 = T25;
        } else {
          T7 = T40;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:481
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:482
        T26_0 = T38;
        T26_1 = T7;
        T26_2 = T42;
        T18_0 = T26_0;
        T18_1 = T26_1;
        T18_2 = T26_2;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
        T27 = primitive_instanceQ(T34,&KLsubclassGVKe);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:489
          T28_0 = &KPtrueVKi;
          T28_1 = T40;
          T28_2 = T42;
          T17_0 = T28_0;
          T17_1 = T28_1;
          T17_2 = T28_2;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
          T29 = primitive_instanceQ(T34,&KLunionGVKe);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
          if (T29 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:491
            specF8 = T34;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:493
            T30 = SLOT_VALUE_INITD(specF8, 1);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:493
            T9_0 = Kponder_a_specializerYdispatch_engine_internalVdylanI(T30, T36, T38, T40, T42);
            T9_1 = MV_GET_ELT(1);
            T9_2 = MV_GET_ELT(2);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:492
            subclass_pF10 = T9_0;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:492
            singletonsF11 = T9_1;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:492
            othersF12 = T9_2;
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
            T31 = SLOT_VALUE_INITD(specF8, 2);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
            specF33T = T31;
            thisargclassF35T = thisargclass_;
            subclass_pF37T = subclass_pF10;
            singletonsF39T = singletonsF11;
            othersF41T = othersF12;
            goto L0;
            T16_0 = T32_0;
            T16_1 = T32_1;
            T16_2 = T32_2;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
            T43 = primitive_instanceQ(T34,&KLlimited_typeGVKe);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
            if (T43 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:497
              T13 = Kgrounded_has_instancesQVKeI(T36, T34);
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:497
              if (T13 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:497
                T44 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:497
                SLOT_VALUE_SETTER(T34, T44, 0);
                // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:497
                SLOT_VALUE_SETTER(T42, T44, 1);
                T14 = T44;
              } else {
                T14 = T42;
              }
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:497
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:496
              T45_0 = T38;
              T45_1 = T40;
              T45_2 = T14;
              T15_0 = T45_0;
              T15_1 = T45_1;
              T15_2 = T45_2;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
              T46.vector_element_[0] = T34;
              // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
              T47_0 = KerrorVKdMM1I(&K43, &T46);
              T47_1 = MV_GET_ELT(1);
              T47_2 = MV_GET_ELT(2);
              T15_0 = T47_0;
              T15_1 = T47_1;
              T15_2 = T47_2;
            }
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
            T16_0 = T15_0;
            T16_1 = T15_1;
            T16_2 = T15_2;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
          T17_0 = T16_0;
          T17_1 = T16_1;
          T17_2 = T16_2;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
        T18_0 = T17_0;
        T18_1 = T17_1;
        T18_2 = T17_2;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
      T19_0 = T18_0;
      T19_1 = T18_1;
      T19_2 = T18_2;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:474
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:494
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:471
  MV_SET_ELT(1, T19_1);
  MV_SET_ELT(2, T19_2);
  MV_SET_COUNT(3);
  return(T19_0);
}

static D KfooF112I (D thisarg_, D gf_, D argnum_, D specs_, D truelist_, D falselist_, D nextd_) {
  D T7;
  D spec_;
  D nextspecs_;
  D T10;
  D T11_0;
  D T11_1;
  D T12_0;
  D T12_1;
  D thend_;
  D elsed_;
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
  D T27_0;
  D T27_1;
  D T28_0;
  D T28_1;
  D T29_0;
  D T29_1;
  D T30;
  D specsF31;
  D T32;
  D truelistF33;
  D T34;
  D falselistF35;
  D T36;
  D nextdF37;
  D T38;
  D specsF39T, specsF39;
  D truelistF40T, truelistF40;
  D falselistF41T, falselistF41;
  D nextdF42T, nextdF42;
  D T43;
  D T44;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:513
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
  specsF39T = specs_;
  truelistF40T = truelist_;
  falselistF41T = falselist_;
  nextdF42T = nextd_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:529
    specsF39 = specsF39T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:529
    truelistF40 = truelistF40T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:529
    falselistF41 = falselistF41T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:529
    nextdF42 = nextdF42T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
    specsF31 = specsF39;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
    T32 = specsF31;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
    truelistF33 = truelistF40;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
    T34 = truelistF33;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
    falselistF35 = falselistF41;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
    T36 = falselistF35;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
    nextdF37 = nextdF42;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:514
    T23 = primitive_idQ(T32,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:514
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:515
      T7 = nextdF37;
      MV_SET_ELT(0, nextdF37);
      MV_SET_COUNT(1);
      T22 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:517
      T24 = SLOT_VALUE_INITD(T32, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:517
      spec_ = T24;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:518
      T25 = SLOT_VALUE_INITD(T32, 1);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:518
      nextspecs_ = T25;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:519
      T26 = primitive_idQ(nextdF37,Dabsent_engine_nodeVKg);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:519
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:520
        T27_0 = nextdF37;
        T27_1 = nextdF37;
        T12_0 = T27_0;
        T12_1 = T27_1;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:521
        T10 = primitive_instanceQ(thisarg_,spec_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:519
        if (T10 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:522
          T28_0 = nextdF37;
          T28_1 = Dabsent_engine_nodeVKg;
          T11_0 = T28_0;
          T11_1 = T28_1;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:524
          T29_0 = Dabsent_engine_nodeVKg;
          T29_1 = nextdF37;
          T11_0 = T29_0;
          T11_1 = T29_1;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:519
        T12_0 = T11_0;
        T12_1 = T11_1;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:519
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:519
      thend_ = T12_0;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:519
      elsed_ = T12_1;
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:526
      T15 = KsubsumedQF114I(spec_, T34);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:526
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
        specsF39T = nextspecs_;
        truelistF40T = truelistF40;
        falselistF41T = falselistF41;
        nextdF42T = thend_;
        goto L0;
        T21 = T30;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:528
        T16 = KsubsumedQF114I(spec_, T36);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:526
        if (T16 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:529
          specsF39T = nextspecs_;
          truelistF40T = T34;
          falselistF41T = T36;
          nextdF42T = elsed_;
          goto L0;
          T20 = T38;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:532
          T43 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:532
          SLOT_VALUE_SETTER(spec_, T43, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:532
          SLOT_VALUE_SETTER(T34, T43, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:532
          T17 = KfooF112I(thisarg_, gf_, argnum_, nextspecs_, T43, T36, thend_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:533
          T44 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:533
          SLOT_VALUE_SETTER(spec_, T44, 0);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:533
          SLOT_VALUE_SETTER(T36, T44, 1);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:533
          T18 = KfooF112I(thisarg_, gf_, argnum_, nextspecs_, T34, T44, elsed_);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:531
          T19 = Kmake_if_type_discriminatorVKgI(argnum_, gf_, spec_, T17, T18);
          T20 = T19;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:526
        T21 = T20;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:526
      T22 = T21;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:514
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:527
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:513
  return(T22);
}

static D KsubsumedQF114I (D t_, D l_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D tF11T, tF11;
  D T12;
  D lF13T, lF13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:504
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
  tF11T = t_;
  lF13T = l_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
    tF11 = tF11T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
    T12 = tF11;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
    lF13 = lF13T;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
    T14 = lF13;
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:505
    T7 = primitive_idQ(T14,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:505
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:506
      T2 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T6 = T2;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:507
      T8 = SLOT_VALUE_INITD(T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:507
      T3 = Kgrounded_subtypeQVKeI(T12, T8);
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:505
      if (T3 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:508
        T4 = &KPtrueVKi;
        MV_SET_ELT(0, &KPtrueVKi);
        MV_SET_COUNT(1);
        T5 = T4;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
        T9 = SLOT_VALUE_INITD(T14, 1);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
        tF11T = t_;
        lF13T = T9;
        goto L0;
        T5 = T10;
      }
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:505
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:505
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:510
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:504
  return(T6);
}

D Khandle_standard_dispatch_missYdispatch_engine_internalVdylanI (D ds_, D cache_, D parent_) {
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:117
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:119
  Kcompute_headed_methodsYdispatch_engine_internalVdylanI(ds_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:120
  Kcompute_argument_precheck_maskYdispatch_engine_internalVdylanI(ds_, cache_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:121
  T4 = SLOT_VALUE(ds_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:122
  T3_0 = Kcompute_dispatch_from_rootYdispatch_engine_internalVdylanI(ds_, T4);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:117
  MV_SET_COUNT(1);
  return(T3_0);
}

D Ksame_specializersQVKgI (D sig1_, D sig2_) {
  D T2;
  D T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14_0;
  D T15_0;
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
  DWORD T28;
  D T29;
  DWORD iF30T, iF30;
  D T31;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1268
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1271
  T2 = SLOT_VALUE_INITD(sig1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1271
  T3 = SLOT_VALUE_INITD(sig1_, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1271
  T4 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1271
  T5 = primitive_machine_word_logand(T4,1020);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1271
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1271
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1272
  T8 = SLOT_VALUE_INITD(sig2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1272
  T9 = SLOT_VALUE_INITD(sig2_, 0);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1272
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1272
  T11 = primitive_machine_word_logand(T10,1020);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1272
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1272
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
  T18 = primitive_idQ(T7,T13);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
    T19 = primitive_idQ(T2,T8);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
      T14_0 = T19;
      T15_0 = T14_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
      iF30T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
        iF30 = iF30T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
        T31 = primitive_cast_raw_as_integer(iF30);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
        T25 = primitive_idQ(T31,T7);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
          T20 = &KPtrueVKi;
          MV_SET_ELT(0, &KPtrueVKi);
          MV_SET_COUNT(1);
          T24 = T20;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
          T26 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 1, iF30);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
          T27 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, iF30);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
          T21 = Ksame_specializerQVKgI(T26, T27);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
          if (T21 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
            T28 = primitive_machine_word_add_signal_overflow(iF30,4);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
            iF30T = T28;
            goto L0;
            T23 = T29;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
            T22 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T23 = T22;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
          T24 = T23;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
      T15_0 = T24;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
    T17_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
    T16_0 = &KPfalseVKi;
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1270
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1268
  MV_SET_COUNT(1);
  return(T17_0);
}

D Ksame_specializers_spreadQVKgI (D req1_, D nreq1_, D req2_, D nreq2_) {
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
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
  DWORD T19;
  D T20;
  DWORD iF21T, iF21;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1246
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1250
  T9 = primitive_idQ(nreq1_,nreq2_);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1250
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1251
    T10 = primitive_idQ(req1_,req2_);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1251
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1251
      T5_0 = T10;
      T6_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1259
      iF21T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1259
        iF21 = iF21T;
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1257
        T22 = primitive_cast_raw_as_integer(iF21);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1254
        T16 = primitive_idQ(T22,nreq1_);
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1254
        if (T16 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1255
          T11 = &KPtrueVKi;
          MV_SET_ELT(0, &KPtrueVKi);
          MV_SET_COUNT(1);
          T15 = T11;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1257
          T17 = REPEATED_D_SLOT_VALUE_TAGGED(req1_, 1, iF21);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1258
          T18 = REPEATED_D_SLOT_VALUE_TAGGED(req2_, 1, iF21);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1256
          T12 = Ksame_specializerQVKgI(T17, T18);
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1254
          if (T12 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1259
            T19 = primitive_machine_word_add_signal_overflow(iF21,4);
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1259
            iF21T = T19;
            goto L0;
            T14 = T20;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1261
            T13 = &KPfalseVKi;
            MV_SET_ELT(0, &KPfalseVKi);
            MV_SET_COUNT(1);
            T14 = T13;
          }
          // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1254
          T15 = T14;
        }
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1254
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1259
      T6_0 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1251
    T8_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1250
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1250
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1246
  MV_SET_COUNT(1);
  return(T8_0);
}

D KLambiguous_methods_errorGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D class_, D init_args_, D Uunique_condition_format_string_, D Uunique_condition_format_arguments_, D Uunique_ambiguous_methods_generic_, D Uunique_ambiguous_methods_ordered_, D Uunique_ambiguous_methods_ambiguous_, D Uunique_ambiguous_methods_arguments_) {
  D T9;
  D Uunique_ambiguous_methods_genericF10;
  D T11;
  D Uunique_ambiguous_methods_ambiguousF12;
  D T13;
  D Uunique_ambiguous_methods_argumentsF14;
  D T15;
  D Uunique_ambiguous_methods_genericF16;
  D Uunique_ambiguous_methods_orderedF17;
  D Uunique_ambiguous_methods_ambiguousF18;
  D Uunique_ambiguous_methods_argumentsF19;
  D T20_0;
  D T21;
  _KLsimple_object_vectorGVKd_1 T22 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T23;
  D T24;
  _KLsimple_object_vectorGVKd_1 T25 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T26;
  D T27;
  _KLsimple_object_vectorGVKd_1 T28 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T29;

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  T21 = primitive_idQ(Uunique_ambiguous_methods_generic_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  if (T21 != &KPfalseVKi) {
    T22.vector_element_[0] = IKJgeneric_;
    T23 = KerrorVKdMM1I(&K94, &T22);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
    T9 = T23;
    Uunique_ambiguous_methods_genericF10 = T9;
  } else {
    Uunique_ambiguous_methods_genericF10 = Uunique_ambiguous_methods_generic_;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  T24 = primitive_idQ(Uunique_ambiguous_methods_ambiguous_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  if (T24 != &KPfalseVKi) {
    T25.vector_element_[0] = IKJambiguous_;
    T26 = KerrorVKdMM1I(&K94, &T25);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
    T11 = T26;
    Uunique_ambiguous_methods_ambiguousF12 = T11;
  } else {
    Uunique_ambiguous_methods_ambiguousF12 = Uunique_ambiguous_methods_ambiguous_;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  T27 = primitive_idQ(Uunique_ambiguous_methods_arguments_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  if (T27 != &KPfalseVKi) {
    T28.vector_element_[0] = &KJarguments_;
    T29 = KerrorVKdMM1I(&K94, &T28);
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
    T13 = T29;
    Uunique_ambiguous_methods_argumentsF14 = T13;
  } else {
    Uunique_ambiguous_methods_argumentsF14 = Uunique_ambiguous_methods_arguments_;
  }
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  T15 = primitive_object_allocate_filled(7,&KLambiguous_methods_errorGVKgW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(Uunique_condition_format_string_, T15, 0);
  SLOT_VALUE_SETTER(Uunique_condition_format_arguments_, T15, 1);
  Uunique_ambiguous_methods_genericF16 = Uunique_ambiguous_methods_genericF10;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_genericF16, T15, 2);
  Uunique_ambiguous_methods_orderedF17 = Uunique_ambiguous_methods_ordered_;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_orderedF17, T15, 3);
  Uunique_ambiguous_methods_ambiguousF18 = Uunique_ambiguous_methods_ambiguousF12;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_ambiguousF18, T15, 4);
  Uunique_ambiguous_methods_argumentsF19 = Uunique_ambiguous_methods_argumentsF14;
  SLOT_VALUE_SETTER(Uunique_ambiguous_methods_argumentsF19, T15, 5);
  APPLY2(&KinitializeVKd, T15, init_args_);
  T20_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:965
  MV_SET_COUNT(1);
  return(T20_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_discrimination_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJE_);
    if (T0 != &KJE_) {
      IKJE_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJLG_);
    if (T0 != &KJLG_) {
      IKJLG_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJL_);
    if (T0 != &KJL_) {
      IKJL_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJG_);
    if (T0 != &KJG_) {
      IKJG_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJgeneric_);
    if (T0 != &KJgeneric_) {
      IKJgeneric_ = T0;
      primitive_repeated_slot_value_setter(T0, &K97, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K96, 1, 4);
      primitive_slot_value_setter(T0, &Kambiguous_methods_genericVKeHLambiguous_methodsG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJambiguous_);
    if (T0 != &KJambiguous_) {
      IKJambiguous_ = T0;
      primitive_repeated_slot_value_setter(T0, &K97, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K96, 1, 8);
      primitive_slot_value_setter(T0, &Kambiguous_methods_ambiguousVKeHLambiguous_methodsG, 3);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_discrimination_for_user () {
{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_2 T2 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:951
  T2.vector_element_[0] = &KsubtypeQVKd;
  T2.vector_element_[1] = &KasVKd;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:951
  T0 = KlistVKdI(&T2);
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:950
  Tpermissibly_ambiguous_genericsTVKe = T0;
  // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:950
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
