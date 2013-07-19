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
  D xep_;
} _KLmethodGVKd;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(10);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

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
  D symbol_name_;
} _KLsymbolGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(23);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(25);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(72);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(38);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(4);

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
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

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
} _KLgeneric_functionGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLcache_header_engine_nodeGVKg;

#define  define__KLlinear_by_singleton_class_discriminatorGVKg(nrepeated) \
  typedef struct { \
    D wrapper; \
    D properties_; \
    D engine_node_callback_; \
    D engine_node_entry_point_; \
    D lckd_index_; \
    D lckd_hits_; \
    D class_keyed_discriminator_default_; \
    D class_keyed_discriminator_table_size_; \
    D class_keyed_discriminator_table_element_[nrepeated+1]; \
  } _KLlinear_by_singleton_class_discriminatorGVKg_##nrepeated;

#define  define__KLhashed_by_singleton_class_discriminatorGVKg(nrepeated) \
  typedef struct { \
    D wrapper; \
    D properties_; \
    D engine_node_callback_; \
    D engine_node_entry_point_; \
    D Phckd_count_; \
    D Phckd_limit_; \
    D class_keyed_discriminator_default_; \
    D class_keyed_discriminator_table_size_; \
    D class_keyed_discriminator_table_element_[nrepeated+1]; \
  } _KLhashed_by_singleton_class_discriminatorGVKg_##nrepeated;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D monomorphic_by_class_discriminator_key_;
  D monomorphic_by_class_discriminator_next_;
} _KLmonomorphic_by_class_discriminatorGVKg;

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
  D lckd_index_;
  D lckd_hits_;
} _KLlinear_class_keyed_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D Phckd_count_;
  D Phckd_limit_;
} _KLhashed_class_keyed_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D singleton_discriminator_table_;
  D singleton_discriminator_default_;
  D lsd_index_;
  D lsd_hits_;
} _KLimmediate_linear_singleton_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D singleton_discriminator_table_;
  D singleton_discriminator_default_;
  D lsd_index_;
  D lsd_hits_;
} _KLvalue_object_linear_singleton_discriminatorGVKg;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D singleton_discriminator_table_;
  D singleton_discriminator_default_;
  D lsd_index_;
  D lsd_hits_;
} _KLlinear_singleton_discriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLdiscriminatorGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D class_keyed_discriminator_default_;
} _KLby_singleton_class_discriminatorGVKg;

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
} _KLclass_keyed_discriminatorGVKg;

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
} _KLengine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D single_method_engine_node_method_;
  D single_method_engine_node_data_;
  D single_method_engine_node_keys_;
} _KLexplicit_keyed_single_method_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D ambiguous_methods_engine_node_ordered_;
  D ambiguous_methods_engine_node_ambig_;
} _KLambiguous_methods_engine_nodeGVKg;

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
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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
} _KLinapplicable_engine_nodeGVKg;

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
} _KLconditionGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
  D instanceQ_iep_;
} _KLtypeGVKd;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;


/* Typedefs for defined classes */

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


/* Referenced object declarations */

D Kmake_simple_lockYthreads_primitivesVdylanI ();
D Kmake_notificationYthreads_primitivesVdylanI (D lock_);
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
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsingle_method_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsingle_method_engine_nodeGVKgW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJkeys_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KmemberQVKdMM3I (D value_, D list_, D Urest_, D test_);
extern _KLsymbolGVKd KJlock_;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D KreleaseYthreadsVdylanMM4I (D notif_, D Urest_);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D condition_, D noise_);
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D Kwait_forYthreadsVdylanMM4I (D notif_, D Urest_, D timeout_);
D KerrorVKdMM1I (D string_, D arguments_);
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdispatch_engine_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LconditionG_typesVKi;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LerrorG_typesVKi;
extern _KLsealed_generic_functionGVKe KsignalVKd;
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLcache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLcache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLlinear_by_singleton_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLlinear_by_singleton_class_discriminatorGVKgW;
extern _KLclassGVKd KLhashed_by_singleton_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLhashed_by_singleton_class_discriminatorGVKgW;
extern _KLclassGVKd KLmonomorphic_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLmonomorphic_by_class_discriminatorGVKgW;
extern _KLclassGVKd KLlinear_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLlinear_by_class_discriminatorGVKgW;
extern _KLclassGVKd KLhashed_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLhashed_by_class_discriminatorGVKgW;
extern _KLclassGVKd KLlinear_class_keyed_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLlinear_class_keyed_discriminatorGVKgW;
extern _KLclassGVKd KLhashed_class_keyed_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLhashed_class_keyed_discriminatorGVKgW;
extern _KLclassGVKd KLimmediate_linear_singleton_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLimmediate_linear_singleton_discriminatorGVKgW;
extern _KLclassGVKd KLvalue_object_linear_singleton_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLvalue_object_linear_singleton_discriminatorGVKgW;
extern _KLincremental_generic_functionGVKe KEVKd;
D KEEVKdI (D x_, D y_);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KsizeVKdMM30I (D list_);
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLlinear_singleton_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLlinear_singleton_discriminatorGVKgW;
extern _KLclassGVKd KLdiscriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLdiscriminatorGVKgW;
extern _KLclassGVKd KLby_singleton_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLby_singleton_class_discriminatorGVKgW;
extern _KLclassGVKd KLif_type_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLif_type_discriminatorGVKgW;
extern _KLclassGVKd KLclass_keyed_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLclass_keyed_discriminatorGVKgW;
extern _KLclassGVKd KLby_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLby_class_discriminatorGVKgW;
extern _KLclassGVKd KLengine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLengine_nodeGVKgW;
extern _KLsealed_generic_functionGVKe Kfunction_signatureVKe;
extern _KLsealed_generic_functionGVKe Kkeyword_specifiersVKe;
extern _KLclassGVKd KLexplicit_keyed_single_method_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLexplicit_keyed_single_method_engine_nodeGVKgW;
extern _KLclassGVKd KLambiguous_methods_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLambiguous_methods_engine_nodeGVKgW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLunionGVKe KLdispatch_starterGVKg;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdispatch_engine_internal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLtypecheck_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLtypecheck_discriminatorGVKgW;
D Kcopy_sequenceVKdMM2I (D source_, D Urest_, D first_, D last_);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLincremental_generic_functionGVKe Kambiguous_method_errorVKe;
extern _KLclassGVKd KLinapplicable_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLinapplicable_engine_nodeGVKgW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_60;
D Kno_applicable_method_errorVKeI (D, D);
D Kmake_argnum_setYdispatch_engine_internalVdylanI ();
D Kcall_to_type_incomplete_genericVKeI (D g_, D mepargs_);
D Kcompute_dispatch_engineYdispatch_engine_internalVdylanI (D ds_);
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsingleton_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLsingleton_discriminatorGVKgW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLsealed_generic_functionGVKe Kclass_keyed_discriminator_table_sizeVKg;
extern _KLincremental_generic_functionGVKe K_VKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsealed_generic_functionGVKe Kclass_keyed_discriminator_table_element_setterVKg;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLsealed_generic_functionGVKe Kclass_keyed_discriminator_table_elementVKg;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LpairG_typesVKi;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lgeneric_functionG_typesVKi;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Tdylan_library_initializedQTYthreads_primitivesVdylan;
extern D Dabsent_engine_nodeVKg;
extern D Tengine_node_classesTYdispatch_engine_internalVdylan;
extern D Tengine_node_callbacksTVKg;
extern D Dinapplicable_engine_nodeVKg;
extern D Ddirect_object_mm_wrappersVKi;

/* Defined object declarations */

D KPgf_dispatch_absentVKgI (D, D, D);
D KPgf_dispatch_inapplicableVKgI (D, D, D);
D Kparent_gfVKgI (D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_61;
extern _KLsimple_methodGVKe KPgf_dispatch_absentVKg;
extern _KLsimple_methodGVKe KPgf_dispatch_inapplicableVKg;
extern _KLsimple_methodGVKe KPgf_dispatch_ambiguous_methodsVKg;
D KPgf_dispatch_ambiguous_methodsVKgI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylan;
D KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylan;
D KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylan;
D KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylan;
D KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_typecheckVKg;
D KPgf_dispatch_typecheckVKgI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_if_typeVKg;
D KPgf_dispatch_if_typeVKgI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_immediate_linear_singletonVKg;
D KPgf_dispatch_immediate_linear_singletonVKgI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_value_object_linear_singletonVKg;
D KPgf_dispatch_value_object_linear_singletonVKgI (D, D, D);
D Kbootstrap_allocate_engine_nodeVKgI (D, D);
extern _KLclassGVKd KLdispatch_stateGYdispatch_engine_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLdispatch_stateGYdispatch_engine_internalVdylanW;
D KdispwarnYdispatch_engine_internalVdylanI (D, D);
D Kmake_ambiguous_methods_engine_nodeVKgI (D, D);
D KdispinapplicableYdispatch_engine_internalVdylanI (D);
D Kmake_single_method_engine_nodeVKgI (D, D, D, D);
D Kbootstrap_typed_allocate_engine_nodeVKgI (D, D, D);
D Kmake_by_class_discriminatorYdispatch_engine_internalVdylanI (D, D, D);
D Kckd_addXYdispatch_engine_internalVdylanI (D, D, D);
D Kmake_if_type_discriminatorVKgI (D, D, D, D, D);
D Kmake_typecheck_discriminatorVKgI (D, D, D, D);
D Kmake_by_singleton_class_discriminatorYdispatch_engine_internalVdylanI (D, D, D, D);
D Kmake_single_class_singleton_discriminatorVKgI (D, D, D);
D Ksingleton_discriminator_element_setterVKgI (D, D, D);
D Kckd_lookupYdispatch_engine_internalVdylanI (D, D);
D Ksingleton_discriminator_elementVKgI (D, D, D);
D Kckd_sizeVKgI (D);
D Kckd_refVKgI (D, D);
D Kckd_ref_setterVKgI (D, D, D);
D Kgrounded_class_keyed_discriminator_defaultVKgI (D);
D Kgrounded_class_keyed_discriminator_default_setterYdispatch_engine_internalVdylanI (D, D);
D Kdispatch_startYdispatch_engine_internalVdylanI (D);
D Kdispatch_start_setterYdispatch_engine_internalVdylanI (D, D);
extern _KLincremental_generic_functionGVKe KbletchVKg;
D Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
D Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI (D, D);
D Kbletch_stackVKgI (D);
extern _KLkeyword_methodGVKe KmakeVKdMM1;
D KmakeVKdMM1I (D c_, D Urest_, D meth_, D data_, D keys_);
static _KLkeyword_signatureAvaluesGVKi K56;
static _KLsimple_object_vectorGVKd_6 K57;
static _KLsymbolGVKd KJmeth_;
static _KLsymbolGVKd KJdata_;
static _KLbyte_stringGVKd_4 K60;
static _KLbyte_stringGVKd_4 K61;
static _KLsimple_object_vectorGVKd_1 K62;
static _KLsimple_object_vectorGVKd_3 K63;
static _KLsimple_object_vectorGVKd_3 K64;
static _KLsimple_object_vectorGVKd_1 K65;
static _KLsingletonGVKd K66;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_end_locking_multiple_objectsF79;
static D Kanonymous_of_end_locking_multiple_objectsF79I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_end_locking_multiple_objectsF77;
static D Kanonymous_of_end_locking_multiple_objectsF77I ();
D Kend_locking_object_cellYdispatch_engine_internalVdylanI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_end_locking_multiple_objectsF74;
static D Kanonymous_of_end_locking_multiple_objectsF74I ();
static _KLbyte_stringGVKd_31 K75;
static _KLsignatureGVKe K76;
static _KLbyte_stringGVKd_33 K78;
static _KLbyte_stringGVKd_45 K80;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_begin_locking_multiple_objectsF91;
static D Kanonymous_of_begin_locking_multiple_objectsF91I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_begin_locking_multiple_objectsF90;
static D Kanonymous_of_begin_locking_multiple_objectsF90I ();
D Kmultiple_objects_locked_pYdispatch_engine_internalVdylanI (D, D);
static _KLbyte_stringGVKd_38 K86;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_begin_locking_multiple_objectsF89;
static D Kanonymous_of_begin_locking_multiple_objectsF89I ();
extern _KLsimple_methodGVKe KbletchVKgMM0;
D KbletchVKgMM0I (D);
extern _KLsimple_methodGVKe KbletchVKgMM1;
D KbletchVKgMM1I (D);
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLsignatureGVKe K98;
static _KLbyte_stringGVKd_6 K99;
static _KLsignatureGVKe K100;
static _KLbyte_stringGVKd_32 K101;
D Kgrounded_linear_class_key_lookupYdispatch_engine_internalVdylanI (D, D, D);
D Kgrounded_hashed_class_key_lookupYdispatch_engine_internalVdylanI (D, D, D);
D KPsecond_hash_valuesVKgI ();
static _KLsimple_object_vectorGVKd_16 K105;
D Klinear_singleton_discriminator_element_setterVKgI (D, D, D);
static _KLbyte_stringGVKd_13 K107;
D Kmake_linear_singleton_discriminatorVKgI (D, D, D, D, D);
D Kstandard_discriminator_bitsVKgI (D);
D Kbootstrap_allocate_discriminatorVKgI (D, D, D);
static _KLbyte_stringGVKd_3 K111;
static _KLbyte_stringGVKd_72 K112;
D Kmake_initial_class_keyed_discriminatorYdispatch_engine_internalVdylanI (D, D, D, D);
D Kmake_linear_class_keyed_discriminatorYdispatch_engine_internalVdylanI (D, D, D, D);
D Khashed_class_keyed_discriminator_log2sizeYdispatch_engine_internalVdylanI (D);
D Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI (D, D, D, D);
D Kbootstrap_allocate_repeated_discriminatorYdispatch_engine_internalVdylanI (D, D, D, D, D);
D Kgrounded_lckd_addXYdispatch_engine_internalVdylanI (D, D, D);
D Kmckd_addXYdispatch_engine_internalVdylanI (D, D, D);
D Kgrounded_hckd_addXYdispatch_engine_internalVdylanI (D, D, D);
D Kcopy_class_keyed_discriminator_attributesYdispatch_engine_internalVdylanI (D, D);
D Kmake_monomorphic_by_class_discriminatorVKgI (D, D);
D KdispresultYdispatch_engine_internalVdylanI (D, D);
static _KLbyte_stringGVKd_32 K124;
static _KLimplementation_classGVKe K125;
static _KLsimple_object_vectorGVKd_10 K126;
extern _KLkeyword_methodGVKe KLdispatch_stateGZ32ZconstructorYdispatch_engine_internalVdylanMM0;
D KLdispatch_stateGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K129;
static _KLsimple_object_vectorGVKd_6 K130;
static _KLkeyword_signatureAvaluesGVKi K131;
static _KLsimple_object_vectorGVKd_1 K132;
extern _KLinstance_slot_descriptorGVKe KPds_gfYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_parentYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_argsYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_argnum_setYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_args_to_check_firstYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_headed_methodsYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_cacheYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_resultYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_conditionsYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLinstance_slot_descriptorGVKe KPds_argtypesYdispatch_engine_internalVdylanHLdispatch_stateG;
extern _KLsealed_generic_functionGVKe KPds_argtypesYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_argtypes_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_argtypes_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K146;
static _KLbyte_stringGVKd_19 K147;
extern _KLgetter_methodGVKi KPds_argtypesYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K149;
static _KLbyte_stringGVKd_12 K150;
extern _KLsealed_generic_functionGVKe KPds_conditionsYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_conditions_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_conditions_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K154;
static _KLbyte_stringGVKd_21 K155;
extern _KLgetter_methodGVKi KPds_conditionsYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K157;
static _KLbyte_stringGVKd_14 K158;
extern _KLsealed_generic_functionGVKe KPds_resultYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_result_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_result_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K162;
static _KLbyte_stringGVKd_17 K163;
extern _KLgetter_methodGVKi KPds_resultYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K165;
static _KLbyte_stringGVKd_10 K166;
extern _KLsealed_generic_functionGVKe KPds_cacheYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_cache_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_cache_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K170;
static _KLbyte_stringGVKd_16 K171;
extern _KLgetter_methodGVKi KPds_cacheYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K173;
static _KLbyte_stringGVKd_9 K174;
extern _KLsealed_generic_functionGVKe KPds_headed_methodsYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_headed_methods_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_headed_methods_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K178;
static _KLbyte_stringGVKd_25 K179;
extern _KLgetter_methodGVKi KPds_headed_methodsYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K181;
static _KLbyte_stringGVKd_18 K182;
extern _KLsealed_generic_functionGVKe KPds_args_to_check_firstYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_args_to_check_first_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_args_to_check_first_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K186;
static _KLbyte_stringGVKd_30 K187;
extern _KLgetter_methodGVKi KPds_args_to_check_firstYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K189;
static _KLbyte_stringGVKd_23 K190;
extern _KLsealed_generic_functionGVKe KPds_argnum_setYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_argnum_set_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_argnum_set_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K194;
static _KLbyte_stringGVKd_21 K195;
extern _KLgetter_methodGVKi KPds_argnum_setYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K197;
static _KLbyte_stringGVKd_14 K198;
extern _KLsealed_generic_functionGVKe KPds_argsYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_args_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_args_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K202;
static _KLbyte_stringGVKd_15 K203;
extern _KLgetter_methodGVKi KPds_argsYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K205;
static _KLbyte_stringGVKd_8 K206;
extern _KLsealed_generic_functionGVKe KPds_parentYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_parent_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_parent_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K210;
static _KLbyte_stringGVKd_17 K211;
extern _KLgetter_methodGVKi KPds_parentYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K213;
static _KLbyte_stringGVKd_10 K214;
extern _KLsealed_generic_functionGVKe KPds_gfYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe KPds_gf_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi KPds_gf_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K218;
static _KLbyte_stringGVKd_13 K219;
extern _KLgetter_methodGVKi KPds_gfYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K221;
static _KLbyte_stringGVKd_6 K222;
static _KLbyte_stringGVKd_16 K223;
static _KLsignatureGVKe K224;
static _KLsimple_object_vectorGVKd_3 K225;
static _KLsignatureGVKe K226;
static _KLsimple_object_vectorGVKd_3 K227;
static _KLsignatureGVKe K228;
static _KLsimple_object_vectorGVKd_3 K229;
static _KLsignatureGVKe K230;
static _KLsimple_object_vectorGVKd_3 K231;
static _KLsignatureGVKe K232;
static _KLsimple_object_vectorGVKd_3 K233;
static _KLsignatureGVKe K234;
static _KLsimple_object_vectorGVKd_3 K235;
static _KLsignatureGVKe K236;
static _KLsimple_object_vectorGVKd_3 K237;
static _KLsignatureGVKe K238;
static _KLsimple_object_vectorGVKd_3 K239;
static _KLsignatureGVKe K240;
static _KLsimple_object_vectorGVKd_3 K241;
static _KLsignatureGVKe K242;
static _KLsimple_object_vectorGVKd_3 K243;
D Khandle_missed_dispatchVKgI (D, D, D);
extern _KLsimple_methodGVKe Khandle_missed_dispatchVKg;
static _KLsignatureGVKe K246;
static _KLsimple_object_vectorGVKd_3 K247;
extern _KLsimple_methodGVKe Kmake_single_class_singleton_discriminatorVKg;
static _KLsignatureAvaluesGVKi K249;
static _KLsimple_object_vectorGVKd_3 K250;
static _KLsimple_object_vectorGVKd_1 K251;
extern _KLsimple_methodGVKe Ksingleton_discriminator_element_setterVKg;
static _KLsignatureGVKe K253;
static _KLsimple_object_vectorGVKd_3 K254;
extern _KLsimple_methodGVKe Ksingleton_discriminator_elementVKg;
static _KLsignatureGVKe K256;
static _KLsimple_object_vectorGVKd_3 K257;
extern _KLsimple_methodGVKe Klinear_singleton_discriminator_element_setterVKg;
static _KLsignatureGVKe K259;
static _KLsimple_object_vectorGVKd_3 K260;
extern _KLsimple_methodGVKe Kvalue_object_linear_singleton_discriminator_elementVKg;
D Kvalue_object_linear_singleton_discriminator_elementVKgI (D d_, D key_, D default_);
static _KLsignatureGVKe K263;
static _KLsimple_object_vectorGVKd_3 K264;
extern _KLsimple_methodGVKe Kimmediate_linear_singleton_discriminator_elementVKg;
D Kimmediate_linear_singleton_discriminator_elementVKgI (D d_, D key_, D default_);
extern _KLsimple_methodGVKe Kmake_linear_singleton_discriminatorVKg;
static _KLsignatureAvaluesGVKi K268;
static _KLsimple_object_vectorGVKd_5 K269;
static _KLsimple_object_vectorGVKd_1 K270;
extern _KLsimple_methodGVKe Kmake_if_type_discriminatorVKg;
static _KLsignatureGVKe K272;
static _KLsimple_object_vectorGVKd_5 K273;
extern _KLsimple_methodGVKe Kmake_monomorphic_by_class_discriminatorVKg;
static _KLsignatureAvaluesGVKi K275;
static _KLsimple_object_vectorGVKd_2 K276;
static _KLsimple_object_vectorGVKd_1 K277;
extern _KLsimple_methodGVKe Kmake_typecheck_discriminatorVKg;
static _KLsignatureAvaluesGVKi K279;
static _KLsimple_object_vectorGVKd_4 K280;
extern _KLsimple_methodGVKe Kckd_sizeVKg;
static _KLsignatureGVKe K282;
static _KLsimple_object_vectorGVKd_1 K283;
extern _KLsimple_methodGVKe Kckd_ref_setterVKg;
static _KLsignatureGVKe K285;
static _KLsimple_object_vectorGVKd_3 K286;
extern _KLsimple_methodGVKe Kckd_refVKg;
static _KLsignatureGVKe K288;
static _KLsimple_object_vectorGVKd_2 K289;
extern _KLsimple_methodGVKe KPsecond_hash_valuesVKg;
static _KLsignatureAvaluesGVKi K291;
extern _KLsimple_methodGVKe Kgrounded_class_keyed_discriminator_defaultVKg;
static _KLpairGVKd K293;
static _KLsymbolGVKd KJTemptyT_;
static _KLbyte_stringGVKd_7 K295;
extern _KLsimple_methodGVKe KPckd_maskVKg;
D KPckd_maskVKgI (D ckd_);
static _KLsignatureAvaluesGVKi K298;
extern _KLsimple_methodGVKe KPckd_sizeVKg;
D KPckd_sizeVKgI (D ckd_);
extern _KLsimple_methodGVKe KPckd_ref_setterVKg;
D KPckd_ref_setterVKgI (D value_, D ckd_, D idx_);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K303;
extern _KLsimple_methodGVKe KPckd_refVKg;
D KPckd_refVKgI (D ckd_, D idx_);
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K306;
static _KLsignatureGVKe K307;
extern _KLkeyword_methodGVKe Kmake_single_method_engine_nodeVKg;
static _KLkeyword_signatureGVKe K309;
static _KLsimple_object_vectorGVKd_4 K310;
static _KLsimple_object_vectorGVKd_2 K311;
extern _KLsimple_methodGVKe Kmake_ambiguous_methods_next_methodVKg;
D Kmake_ambiguous_methods_next_methodVKgI (D ordered_, D ambig_, D gf_);
static _KLsignatureAvaluesGVKi K314;
static _KLsimple_object_vectorGVKd_3 K315;
extern _KLsimple_methodGVKe Kmake_ambiguous_methods_engine_nodeVKg;
static _KLsignatureAvaluesGVKi K317;
static _KLsimple_object_vectorGVKd_1 K318;
extern _KLsimple_methodGVKe Kend_locking_multiple_objectsYdispatch_engine_internalVdylan;
static _KLsignatureGVKe K320;
extern _KLsimple_methodGVKe Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylan;
static _KLsignatureGVKe K322;
extern _KLsimple_methodGVKe Kbletch_stackVKg;
static _KLsignatureGVKe K324;
extern _KLsimple_methodGVKe Kbootstrap_allocate_discriminatorVKg;
static _KLsignatureAvaluesGVKi K326;
extern _KLsimple_methodGVKe Kstandard_discriminator_bitsVKg;
static _KLsignatureAvaluesGVKi K328;
extern _KLsimple_methodGVKe Kbootstrap_allocate_and_initialize_engine_nodeVKg;
D Kbootstrap_allocate_and_initialize_engine_nodeVKgI (D, D);
static _KLsignatureAvaluesGVKi K331;
static _KLsimple_object_vectorGVKd_1 K332;
extern _KLsimple_methodGVKe Kbootstrap_typed_allocate_engine_nodeVKg;
static _KLsignatureGVKe K334;
static _KLsimple_object_vectorGVKd_3 K335;
extern _KLsimple_methodGVKe Kbootstrap_allocate_engine_nodeVKg;
extern _KLsimple_methodGVKe Kparent_gfVKg;
static _KLsignatureAvaluesGVKi K338;
static _KLsimple_object_vectorGVKd_1 K339;

/* Indirection variables */

static D IKJmeth_ = &KJmeth_;
static D IKJdata_ = &KJdata_;
static D IKJTemptyT_ = &KJTemptyT_;

/* Variables */

D parent_gfVKg = &Kparent_gfVKg;
D bootstrap_allocate_engine_nodeVKg = &Kbootstrap_allocate_engine_nodeVKg;
D bootstrap_typed_allocate_engine_nodeVKg = &Kbootstrap_typed_allocate_engine_nodeVKg;
D bootstrap_allocate_and_initialize_engine_nodeVKg = &Kbootstrap_allocate_and_initialize_engine_nodeVKg;
D standard_discriminator_bitsVKg = &Kstandard_discriminator_bitsVKg;
D Dstandard_discriminator_bit_maskVKg = (D) 33488897;
D bootstrap_allocate_discriminatorVKg = &Kbootstrap_allocate_discriminatorVKg;
D bletchVKg = &KbletchVKg;
D bletch_stackVKg = &Kbletch_stackVKg;
D Dobject_lock_notification_lockYdispatch_engine_internalVdylan = &KPunboundVKi;
D Dobject_lock_notificationYdispatch_engine_internalVdylan = &KPunboundVKi;
D begin_locking_multiple_objectsYdispatch_engine_internalVdylan = &Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylan;
D end_locking_multiple_objectsYdispatch_engine_internalVdylan = &Kend_locking_multiple_objectsYdispatch_engine_internalVdylan;
D Pgf_dispatch_absentVKg = &KPgf_dispatch_absentVKg;
D Pgf_dispatch_inapplicableVKg = &KPgf_dispatch_inapplicableVKg;
D Pgf_dispatch_ambiguous_methodsVKg = &KPgf_dispatch_ambiguous_methodsVKg;
D make_ambiguous_methods_engine_nodeVKg = &Kmake_ambiguous_methods_engine_nodeVKg;
D make_ambiguous_methods_next_methodVKg = &Kmake_ambiguous_methods_next_methodVKg;
D make_single_method_engine_nodeVKg = &Kmake_single_method_engine_nodeVKg;
D ckdDv_log2sizeVKg = (D) 93;
D ckdDs_log2sizeVKg = (D) 21;
D Pckd_refVKg = &KPckd_refVKg;
D Pckd_ref_setterVKg = &KPckd_ref_setterVKg;
D Pckd_sizeVKg = &KPckd_sizeVKg;
D Pckd_maskVKg = &KPckd_maskVKg;
D Dckd_emptyVKg = &K293;
D grounded_class_keyed_discriminator_defaultVKg = &Kgrounded_class_keyed_discriminator_defaultVKg;
D Pgf_dispatch_linear_by_classYdispatch_engine_internalVdylan = &KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylan;
D Pgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylan = &KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylan;
D Psecond_hash_valuesVKg = &KPsecond_hash_valuesVKg;
D Pgf_dispatch_hashed_by_classYdispatch_engine_internalVdylan = &KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylan;
D Pgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylan = &KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylan;
D ckd_refVKg = &Kckd_refVKg;
D ckd_ref_setterVKg = &Kckd_ref_setterVKg;
D ckd_sizeVKg = &Kckd_sizeVKg;
D Pgf_dispatch_typecheckVKg = &KPgf_dispatch_typecheckVKg;
D make_typecheck_discriminatorVKg = &Kmake_typecheck_discriminatorVKg;
D make_monomorphic_by_class_discriminatorVKg = &Kmake_monomorphic_by_class_discriminatorVKg;
D Pgf_dispatch_if_typeVKg = &KPgf_dispatch_if_typeVKg;
D make_if_type_discriminatorVKg = &Kmake_if_type_discriminatorVKg;
D make_linear_singleton_discriminatorVKg = &Kmake_linear_singleton_discriminatorVKg;
D immediate_linear_singleton_discriminator_elementVKg = &Kimmediate_linear_singleton_discriminator_elementVKg;
D value_object_linear_singleton_discriminator_elementVKg = &Kvalue_object_linear_singleton_discriminator_elementVKg;
D linear_singleton_discriminator_element_setterVKg = &Klinear_singleton_discriminator_element_setterVKg;
D Pgf_dispatch_immediate_linear_singletonVKg = &KPgf_dispatch_immediate_linear_singletonVKg;
D Pgf_dispatch_value_object_linear_singletonVKg = &KPgf_dispatch_value_object_linear_singletonVKg;
D singleton_discriminator_elementVKg = &Ksingleton_discriminator_elementVKg;
D singleton_discriminator_element_setterVKg = &Ksingleton_discriminator_element_setterVKg;
D make_single_class_singleton_discriminatorVKg = &Kmake_single_class_singleton_discriminatorVKg;
D Ldispatch_stateGYdispatch_engine_internalVdylan = &KLdispatch_stateGYdispatch_engine_internalVdylan;
D Tdispatch_miss_countTVKg = (D) 1;
D Tdispatch_computation_countTVKg = (D) 1;
D handle_missed_dispatchVKg = &Khandle_missed_dispatchVKg;
D Tobject_lock_dataTYdispatch_engine_internalVdylan = &KPempty_listVKi;

/* Objects */

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_61 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_60,
  &KmakeVKdMM1
};

_KLsimple_methodGVKe KPgf_dispatch_absentVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K242,
  &KPgf_dispatch_absentVKgI
};

_KLsimple_methodGVKe KPgf_dispatch_inapplicableVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K240,
  &KPgf_dispatch_inapplicableVKgI
};

_KLsimple_methodGVKe KPgf_dispatch_ambiguous_methodsVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K238,
  &KPgf_dispatch_ambiguous_methodsVKgI
};

_KLsimple_methodGVKe KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K236,
  &KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylanI
};

_KLsimple_methodGVKe KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K234,
  &KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylanI
};

_KLsimple_methodGVKe KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K232,
  &KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylanI
};

_KLsimple_methodGVKe KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K230,
  &KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylanI
};

_KLsimple_methodGVKe KPgf_dispatch_typecheckVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K228,
  &KPgf_dispatch_typecheckVKgI
};

_KLsimple_methodGVKe KPgf_dispatch_if_typeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K226,
  &KPgf_dispatch_if_typeVKgI
};

_KLsimple_methodGVKe KPgf_dispatch_immediate_linear_singletonVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K224,
  &KPgf_dispatch_immediate_linear_singletonVKgI
};

_KLsimple_methodGVKe KPgf_dispatch_value_object_linear_singletonVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K224,
  &KPgf_dispatch_value_object_linear_singletonVKgI
};

_KLclassGVKd KLdispatch_stateGYdispatch_engine_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K223,
  &K125,
  (D) 1,
  &Kdispatch_engine_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLdispatch_stateGYdispatch_engine_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K125,
  (D) 1,
  41,
  33554439,
  (D) 1
};

_KLincremental_generic_functionGVKe KbletchVKg = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K98,
  (D) 1,
  &K99,
  &K96,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdispatch_engine_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe KmakeVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K56,
  &key_mep_5,
  &KmakeVKdMM1I,
  &K57
};

static _KLkeyword_signatureAvaluesGVKi K56 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K62,
  &K63,
  &K64,
  &K65
};

static _KLsimple_object_vectorGVKd_6 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJmeth_,
  &KPfalseVKi,
  &KJdata_,
  &KPfalseVKi,
  &KJkeys_,
  &KPfalseVKi
};

static _KLsymbolGVKd KJmeth_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K61
};

static _KLsymbolGVKd KJdata_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K60
};

static _KLbyte_stringGVKd_4 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "data"
};

static _KLbyte_stringGVKd_4 K61 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "meth"
};

static _KLsimple_object_vectorGVKd_1 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K66
};

static _KLsimple_object_vectorGVKd_3 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJmeth_,
  &KJdata_,
  &KJkeys_
};

static _KLsimple_object_vectorGVKd_3 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmethodGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsingle_method_engine_nodeGVKg
};

static _KLsingletonGVKd K66 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsingle_method_engine_nodeGVKg
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_end_locking_multiple_objectsF79 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K76,
  &Kanonymous_of_end_locking_multiple_objectsF79I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_end_locking_multiple_objectsF77 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K76,
  &Kanonymous_of_end_locking_multiple_objectsF77I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_end_locking_multiple_objectsF74 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K76,
  &Kanonymous_of_end_locking_multiple_objectsF74I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K76 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_33 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLbyte_stringGVKd_45 K80 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_begin_locking_multiple_objectsF91 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K76,
  &Kanonymous_of_begin_locking_multiple_objectsF91I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_begin_locking_multiple_objectsF90 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K76,
  &Kanonymous_of_begin_locking_multiple_objectsF90I,
  (D) 1
};

static _KLbyte_stringGVKd_38 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 153,
  "Attempt to recursively lock objects %="
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_begin_locking_multiple_objectsF89 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K76,
  &Kanonymous_of_begin_locking_multiple_objectsF89I,
  (D) 1
};

_KLsimple_methodGVKe KbletchVKgMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K98,
  &KbletchVKgMM0I
};

_KLsimple_methodGVKe KbletchVKgMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K100,
  &KbletchVKgMM1I
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &KbletchVKgMM0,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &KbletchVKgMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K98 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LconditionG_typesVKi
};

static _KLbyte_stringGVKd_6 K99 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "bletch"
};

static _KLsignatureGVKe K100 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LerrorG_typesVKi
};

static _KLbyte_stringGVKd_32 K101 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLsimple_object_vectorGVKd_16 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 65,
  (D) 9,
  (D) 25,
  (D) 41,
  (D) 57,
  (D) 89,
  (D) 105,
  (D) 137,
  (D) 153,
  (D) 185,
  (D) 233,
  (D) 249,
  (D) 297,
  (D) 329,
  (D) 345,
  (D) 377,
  (D) 425
};

static _KLbyte_stringGVKd_13 K107 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "key not found"
};

static _KLbyte_stringGVKd_3 K111 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "fmh"
};

static _KLbyte_stringGVKd_72 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 289,
  "Discriminator being created with conflicting nrequired %= and argnum %=."
};

static _KLbyte_stringGVKd_32 K124 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Bug!  Multiple dispatch results?"
};

static _KLimplementation_classGVKe K125 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958057,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KLdispatch_stateGYdispatch_engine_internalVdylanW,
  &KPfalseVKi,
  &K126,
  (D) 6201,
  &KLdispatch_stateGZ32ZconstructorYdispatch_engine_internalVdylanMM0,
  &K129,
  &K130,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K126,
  &K126,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_10 K126 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 41,
  &KPds_gfYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_parentYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_argsYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_argnum_setYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_args_to_check_firstYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_headed_methodsYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_cacheYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_resultYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_conditionsYdispatch_engine_internalVdylanHLdispatch_stateG,
  &KPds_argtypesYdispatch_engine_internalVdylanHLdispatch_stateG
};

_KLkeyword_methodGVKe KLdispatch_stateGZ32ZconstructorYdispatch_engine_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K131,
  &key_mep_2,
  &KLdispatch_stateGZ32ZconstructorYdispatch_engine_internalVdylanMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K129 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K131 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K132
};

static _KLsimple_object_vectorGVKd_1 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdispatch_stateGYdispatch_engine_internalVdylan
};

_KLinstance_slot_descriptorGVKe KPds_gfYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_gfYdispatch_engine_internalVdylan,
  &KPds_gf_setterYdispatch_engine_internalVdylan,
  &KLgeneric_functionGVKd
};

_KLinstance_slot_descriptorGVKe KPds_parentYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_parentYdispatch_engine_internalVdylan,
  &KPds_parent_setterYdispatch_engine_internalVdylan,
  &KLdispatch_starterGVKg
};

_KLinstance_slot_descriptorGVKe KPds_argsYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_argsYdispatch_engine_internalVdylan,
  &KPds_args_setterYdispatch_engine_internalVdylan,
  &KLsimple_object_vectorGVKd
};

_KLinstance_slot_descriptorGVKe KPds_argnum_setYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_argnum_setYdispatch_engine_internalVdylan,
  &KPds_argnum_set_setterYdispatch_engine_internalVdylan,
  &KLpairGVKd
};

_KLinstance_slot_descriptorGVKe KPds_args_to_check_firstYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_listVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_args_to_check_firstYdispatch_engine_internalVdylan,
  &KPds_args_to_check_first_setterYdispatch_engine_internalVdylan,
  &KLlistGVKd
};

_KLinstance_slot_descriptorGVKe KPds_headed_methodsYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_headed_methodsYdispatch_engine_internalVdylan,
  &KPds_headed_methods_setterYdispatch_engine_internalVdylan,
  &KLpairGVKd
};

_KLinstance_slot_descriptorGVKe KPds_cacheYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_cacheYdispatch_engine_internalVdylan,
  &KPds_cache_setterYdispatch_engine_internalVdylan,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe KPds_resultYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_resultYdispatch_engine_internalVdylan,
  &KPds_result_setterYdispatch_engine_internalVdylan,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe KPds_conditionsYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_listVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_conditionsYdispatch_engine_internalVdylan,
  &KPds_conditions_setterYdispatch_engine_internalVdylan,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe KPds_argtypesYdispatch_engine_internalVdylanHLdispatch_stateG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_vectorVKi,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPds_argtypesYdispatch_engine_internalVdylan,
  &KPds_argtypes_setterYdispatch_engine_internalVdylan,
  &KLsimple_object_vectorGVKd
};

_KLsealed_generic_functionGVKe KPds_argtypesYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K150,
  &K149,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_argtypes_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K147,
  &K146,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_argtypes_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_argtypesYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K146 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_argtypes_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K147 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "%ds-argtypes-setter"
};

_KLgetter_methodGVKi KPds_argtypesYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_argtypesYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K149 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_argtypesYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K150 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "%ds-argtypes"
};

_KLsealed_generic_functionGVKe KPds_conditionsYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K158,
  &K157,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_conditions_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K155,
  &K154,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_conditions_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_conditionsYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K154 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_conditions_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K155 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "%ds-conditions-setter"
};

_KLgetter_methodGVKi KPds_conditionsYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_conditionsYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K157 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_conditionsYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K158 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "%ds-conditions"
};

_KLsealed_generic_functionGVKe KPds_resultYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K166,
  &K165,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_result_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K163,
  &K162,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_result_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_resultYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K162 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_result_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K163 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "%ds-result-setter"
};

_KLgetter_methodGVKi KPds_resultYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_resultYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K165 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_resultYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K166 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "%ds-result"
};

_KLsealed_generic_functionGVKe KPds_cacheYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K174,
  &K173,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_cache_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K171,
  &K170,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_cache_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_cacheYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K170 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_cache_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K171 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "%ds-cache-setter"
};

_KLgetter_methodGVKi KPds_cacheYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_cacheYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_cacheYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K174 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "%ds-cache"
};

_KLsealed_generic_functionGVKe KPds_headed_methodsYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K182,
  &K181,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_headed_methods_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K179,
  &K178,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_headed_methods_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_headed_methodsYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K178 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_headed_methods_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_25 K179 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 101,
  "%ds-headed-methods-setter"
};

_KLgetter_methodGVKi KPds_headed_methodsYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_headed_methodsYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K181 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_headed_methodsYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K182 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "%ds-headed-methods"
};

_KLsealed_generic_functionGVKe KPds_args_to_check_firstYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K190,
  &K189,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_args_to_check_first_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K187,
  &K186,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_args_to_check_first_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_args_to_check_firstYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K186 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_args_to_check_first_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_30 K187 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "%ds-args-to-check-first-setter"
};

_KLgetter_methodGVKi KPds_args_to_check_firstYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_args_to_check_firstYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K189 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_args_to_check_firstYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K190 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "%ds-args-to-check-first"
};

_KLsealed_generic_functionGVKe KPds_argnum_setYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K198,
  &K197,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_argnum_set_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K195,
  &K194,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_argnum_set_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_argnum_setYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K194 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_argnum_set_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K195 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "%ds-argnum-set-setter"
};

_KLgetter_methodGVKi KPds_argnum_setYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_argnum_setYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K197 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_argnum_setYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K198 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "%ds-argnum-set"
};

_KLsealed_generic_functionGVKe KPds_argsYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K206,
  &K205,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_args_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K203,
  &K202,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_args_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_argsYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K202 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_args_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K203 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "%ds-args-setter"
};

_KLgetter_methodGVKi KPds_argsYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_argsYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K205 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_argsYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K206 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "%ds-args"
};

_KLsealed_generic_functionGVKe KPds_parentYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K214,
  &K213,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_parent_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K211,
  &K210,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_parent_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_parentYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K210 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_parent_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K211 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "%ds-parent-setter"
};

_KLgetter_methodGVKi KPds_parentYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_parentYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K213 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_parentYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K214 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "%ds-parent"
};

_KLsealed_generic_functionGVKe KPds_gfYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K222,
  &K221,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KPds_gf_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K219,
  &K218,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi KPds_gf_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &KPds_gfYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K218 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_gf_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K219 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "%ds-gf-setter"
};

_KLgetter_methodGVKi KPds_gfYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KPds_gfYdispatch_engine_internalVdylanHLdispatch_stateG
};

static _KLpairGVKd K221 = {
  &KLpairGVKdW /* wrapper */,
  &KPds_gfYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_6 K222 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "%ds-gf"
};

static _KLbyte_stringGVKd_16 K223 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<dispatch-state>"
};

static _KLsignatureGVKe K224 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K225
};

static _KLsimple_object_vectorGVKd_3 K225 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLdispatch_starterGVKg,
  &KLimmediate_linear_singleton_discriminatorGVKg
};

static _KLsignatureGVKe K226 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K227
};

static _KLsimple_object_vectorGVKd_3 K227 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLdispatch_starterGVKg,
  &KLif_type_discriminatorGVKg
};

static _KLsignatureGVKe K228 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K229
};

static _KLsimple_object_vectorGVKd_3 K229 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLdispatch_starterGVKg,
  &KLtypecheck_discriminatorGVKg
};

static _KLsignatureGVKe K230 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K231
};

static _KLsimple_object_vectorGVKd_3 K231 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLdispatch_starterGVKg,
  &KLhashed_by_singleton_class_discriminatorGVKg
};

static _KLsignatureGVKe K232 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K233
};

static _KLsimple_object_vectorGVKd_3 K233 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLdispatch_starterGVKg,
  &KLlinear_by_singleton_class_discriminatorGVKg
};

static _KLsignatureGVKe K234 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K235
};

static _KLsimple_object_vectorGVKd_3 K235 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLdispatch_starterGVKg,
  &KLhashed_by_class_discriminatorGVKg
};

static _KLsignatureGVKe K236 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K237
};

static _KLsimple_object_vectorGVKd_3 K237 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLdispatch_starterGVKg,
  &KLlinear_by_class_discriminatorGVKg
};

static _KLsignatureGVKe K238 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K239
};

static _KLsimple_object_vectorGVKd_3 K239 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_object_vectorGVKd,
  &KLambiguous_methods_engine_nodeGVKg,
  &KLdispatch_starterGVKg
};

static _KLsignatureGVKe K240 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K241
};

static _KLsimple_object_vectorGVKd_3 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_object_vectorGVKd,
  &KLinapplicable_engine_nodeGVKg,
  &KLdispatch_starterGVKg
};

static _KLsignatureGVKe K242 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K243
};

static _KLsimple_object_vectorGVKd_3 K243 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_object_vectorGVKd,
  &KLengine_nodeGVKg,
  &KLdispatch_starterGVKg
};

_KLsimple_methodGVKe Khandle_missed_dispatchVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K246,
  &Khandle_missed_dispatchVKgI
};

static _KLsignatureGVKe K246 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K247
};

static _KLsimple_object_vectorGVKd_3 K247 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLengine_nodeGVKg,
  &KLdispatch_starterGVKg,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kmake_single_class_singleton_discriminatorVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K249,
  &Kmake_single_class_singleton_discriminatorVKgI
};

static _KLsignatureAvaluesGVKi K249 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K250,
  &K251
};

static _KLsimple_object_vectorGVKd_3 K250 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlistGVKd,
  &KLintegerGVKd,
  &KLgeneric_functionGVKd
};

static _KLsimple_object_vectorGVKd_1 K251 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsingleton_discriminatorGVKg
};

_KLsimple_methodGVKe Ksingleton_discriminator_element_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K253,
  &Ksingleton_discriminator_element_setterVKgI
};

static _KLsignatureGVKe K253 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K254
};

static _KLsimple_object_vectorGVKd_3 K254 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLsingleton_discriminatorGVKg,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Ksingleton_discriminator_elementVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K256,
  &Ksingleton_discriminator_elementVKgI
};

static _KLsignatureGVKe K256 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K257
};

static _KLsimple_object_vectorGVKd_3 K257 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingleton_discriminatorGVKg,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Klinear_singleton_discriminator_element_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K259,
  &Klinear_singleton_discriminator_element_setterVKgI
};

static _KLsignatureGVKe K259 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K260
};

static _KLsimple_object_vectorGVKd_3 K260 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLlinear_singleton_discriminatorGVKg,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kvalue_object_linear_singleton_discriminator_elementVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K263,
  &Kvalue_object_linear_singleton_discriminator_elementVKgI
};

static _KLsignatureGVKe K263 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K264
};

static _KLsimple_object_vectorGVKd_3 K264 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlinear_singleton_discriminatorGVKg,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kimmediate_linear_singleton_discriminator_elementVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K263,
  &Kimmediate_linear_singleton_discriminator_elementVKgI
};

_KLsimple_methodGVKe Kmake_linear_singleton_discriminatorVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K268,
  &Kmake_linear_singleton_discriminatorVKgI
};

static _KLsignatureAvaluesGVKi K268 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555477,
  &K269,
  &K270
};

static _KLsimple_object_vectorGVKd_5 K269 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLgeneric_functionGVKd,
  &KLlistGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K270 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlinear_singleton_discriminatorGVKg
};

_KLsimple_methodGVKe Kmake_if_type_discriminatorVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_5,
  &K272,
  &Kmake_if_type_discriminatorVKgI
};

static _KLsignatureGVKe K272 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040213,
  &K273
};

static _KLsimple_object_vectorGVKd_5 K273 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLintegerGVKd,
  &KLgeneric_functionGVKd,
  &KLtypeGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kmake_monomorphic_by_class_discriminatorVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K275,
  &Kmake_monomorphic_by_class_discriminatorVKgI
};

static _KLsignatureAvaluesGVKi K275 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K276,
  &K277
};

static _KLsimple_object_vectorGVKd_2 K276 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLgeneric_functionGVKd
};

static _KLsimple_object_vectorGVKd_1 K277 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdiscriminatorGVKg
};

_KLsimple_methodGVKe Kmake_typecheck_discriminatorVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K279,
  &Kmake_typecheck_discriminatorVKgI
};

static _KLsignatureAvaluesGVKi K279 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K280,
  &K277
};

static _KLsimple_object_vectorGVKd_4 K280 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLintegerGVKd,
  &KLgeneric_functionGVKd,
  &KLtypeGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Kckd_sizeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K282,
  &Kckd_sizeVKgI
};

static _KLsignatureGVKe K282 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &K283
};

static _KLsimple_object_vectorGVKd_1 K283 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLclass_keyed_discriminatorGVKg
};

_KLsimple_methodGVKe Kckd_ref_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K285,
  &Kckd_ref_setterVKgI
};

static _KLsignatureGVKe K285 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K286
};

static _KLsimple_object_vectorGVKd_3 K286 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLclass_keyed_discriminatorGVKg,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kckd_refVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K288,
  &Kckd_refVKgI
};

static _KLsignatureGVKe K288 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K289
};

static _KLsimple_object_vectorGVKd_2 K289 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclass_keyed_discriminatorGVKg,
  &KLintegerGVKd
};

_KLsimple_methodGVKe KPsecond_hash_valuesVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K291,
  &KPsecond_hash_valuesVKgI
};

static _KLsignatureAvaluesGVKi K291 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kgrounded_class_keyed_discriminator_defaultVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K282,
  &Kgrounded_class_keyed_discriminator_defaultVKgI
};

static _KLpairGVKd K293 = {
  &KLpairGVKdW /* wrapper */,
  &KJTemptyT_,
  &KPempty_listVKi
};

static _KLsymbolGVKd KJTemptyT_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K295
};

static _KLbyte_stringGVKd_7 K295 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "*empty*"
};

_KLsimple_methodGVKe KPckd_maskVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K298,
  &KPckd_maskVKgI
};

static _KLsignatureAvaluesGVKi K298 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K283,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe KPckd_sizeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K298,
  &KPckd_sizeVKgI
};

_KLsimple_methodGVKe KPckd_ref_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K285,
  &KPckd_ref_setterVKgI
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K303 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kclass_keyed_discriminator_table_element_setterVKg
};

_KLsimple_methodGVKe KPckd_refVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K307,
  &KPckd_refVKgI
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K306 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 131129,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kclass_keyed_discriminator_table_elementVKg
};

static _KLsignatureGVKe K307 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K289
};

_KLkeyword_methodGVKe Kmake_single_method_engine_nodeVKg = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K309,
  &key_mep_4,
  &Kmake_single_method_engine_nodeVKgI,
  &K310
};

static _KLkeyword_signatureGVKe K309 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_LmethodG_typesVKi,
  &K311,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K310 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJdata_,
  &KPfalseVKi,
  &KJkeys_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K311 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdata_,
  &KJkeys_
};

_KLsimple_methodGVKe Kmake_ambiguous_methods_next_methodVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K314,
  &Kmake_ambiguous_methods_next_methodVKgI
};

static _KLsignatureAvaluesGVKi K314 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K315,
  &KDsignature_LpairG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K315 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsequenceGVKd,
  &KLsequenceGVKd,
  &KLgeneric_functionGVKd
};

_KLsimple_methodGVKe Kmake_ambiguous_methods_engine_nodeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K317,
  &Kmake_ambiguous_methods_engine_nodeVKgI
};

static _KLsignatureAvaluesGVKi K317 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LsequenceG_typesVKi,
  &K318
};

static _KLsimple_object_vectorGVKd_1 K318 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLambiguous_methods_engine_nodeGVKg
};

_KLsimple_methodGVKe Kend_locking_multiple_objectsYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K320,
  &Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI
};

static _KLsignatureGVKe K320 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &KDsignature_LpairG_typesVKi
};

_KLsimple_methodGVKe Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K322,
  &Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI
};

static _KLsignatureGVKe K322 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &KDsignature_LpairG_typesVKi
};

_KLsimple_methodGVKe Kbletch_stackVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K324,
  &Kbletch_stackVKgI
};

static _KLsignatureGVKe K324 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LlistG_typesVKi
};

_KLsimple_methodGVKe Kbootstrap_allocate_discriminatorVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K326,
  &Kbootstrap_allocate_discriminatorVKgI
};

static _KLsignatureAvaluesGVKi K326 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &KDsignature_LintegerG_typesVKi,
  &K277
};

_KLsimple_methodGVKe Kstandard_discriminator_bitsVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K328,
  &Kstandard_discriminator_bitsVKgI
};

static _KLsignatureAvaluesGVKi K328 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kbootstrap_allocate_and_initialize_engine_nodeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K331,
  &Kbootstrap_allocate_and_initialize_engine_nodeVKgI
};

static _KLsignatureAvaluesGVKi K331 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LintegerG_typesVKi,
  &K332
};

static _KLsimple_object_vectorGVKd_1 K332 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLengine_nodeGVKg
};

_KLsimple_methodGVKe Kbootstrap_typed_allocate_engine_nodeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K334,
  &Kbootstrap_typed_allocate_engine_nodeVKgI
};

static _KLsignatureGVKe K334 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K335
};

static _KLsimple_object_vectorGVKd_3 K335 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kbootstrap_allocate_engine_nodeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K331,
  &Kbootstrap_allocate_engine_nodeVKgI
};

_KLsimple_methodGVKe Kparent_gfVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K338,
  &Kparent_gfVKgI
};

static _KLsignatureAvaluesGVKi K338 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K339,
  &KDsignature_Lgeneric_functionG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K339 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdispatch_starterGVKg
};

/* Code */

D KPgf_dispatch_absentVKgI (D mepargs_, D e_, D parent_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:430
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:433
  T3 = Khandle_missed_dispatchVKgI(e_, parent_, mepargs_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:430
  return(T3);
}

D KPgf_dispatch_inapplicableVKgI (D spreadargs_, D e_, D parent_) {
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:436
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:440
  T3 = Kparent_gfVKgI(parent_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:440
  T5 = Kcopy_sequenceVKdMM2I(spreadargs_, &KPempty_vectorVKi, (D) 1, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:440
  T4 = Kno_applicable_method_errorVKeI(T3, T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:436
  return(T4);
}

D Kparent_gfVKgI (D parent_) {
  D g_;
  D T2_0;
  D c_;
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D parentF10T, parentF10;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:22
  parentF10T = parent_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:22
    parentF10 = parentF10T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:22
    T11 = parentF10;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
    T6 = primitive_instanceQ(T11,&KLgeneric_functionGVKd);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:18
      g_ = T11;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:19
      T2_0 = g_;
      T5_0 = T2_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
      T7 = primitive_instanceQ(T11,&KLcache_header_engine_nodeGVKg);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
      if (T7 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:21
        c_ = T11;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:22
        T8 = SLOT_VALUE_INITD(c_, 4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:22
        parentF10T = T8;
        goto L0;
        T4_0 = T9_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
        T12.vector_element_[0] = T11;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
        T13_0 = KerrorVKdMM1I(&K101, &T12);
        T4_0 = T13_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
      T5_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:16
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:15
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPgf_dispatch_ambiguous_methodsVKgI (D spreadargs_, D e_, D parent_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:445
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:448
  T3 = Kparent_gfVKgI(parent_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:448
  T5 = Kcopy_sequenceVKdMM2I(spreadargs_, &KPempty_vectorVKi, (D) 1, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:449
  T6 = SLOT_VALUE_INITD(e_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:450
  T7 = SLOT_VALUE_INITD(e_, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:448
  CONGRUENT_CALL_PROLOG(&Kambiguous_method_errorVKe, 4);
  T4 = CONGRUENT_CALL4(T3, T5, T6, T7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:445
  return(T4);
}

D KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylanI (D arg_, D parent_, D d_) {
  DADDR T4;
  DWORD bitsF5;
  D T6;
  D T7;
  D mm_wrapperF8;
  D T9;
  D mm_wrapperF10;
  DADDR T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DADDR T15;
  DADDR T16;
  D T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  DWORD iF26T, iF26;
  D T27;
  D T28;
  D T29;
  D T30;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:836
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  T4 = primitive_cast_pointer_as_raw(arg_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  bitsF5 = primitive_machine_word_logand(T4,3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  T6 = primitive_machine_word_equalQ(bitsF5,0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    T7 = primitive_element(arg_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    mm_wrapperF8 = T7;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    T15 = primitive_cast_pointer_as_raw(mm_wrapperF8);
    T11 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    T9 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF5,0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    mm_wrapperF10 = T9;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    T16 = primitive_cast_pointer_as_raw(mm_wrapperF10);
    T11 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  T13 = primitive_machine_word_logand(T11,-4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  T14 = primitive_machine_word_logior(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  T12 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  T27 = SLOT_VALUE_INITD(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  T21 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  iF26T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    iF26 = iF26T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    T22 = primitive_machine_word_equalQ(iF26,T21);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
      T17 = Dabsent_engine_nodeVKg;
      MV_SET_ELT(0, Dabsent_engine_nodeVKg);
      MV_SET_COUNT(1);
      T20 = T17;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
      T28 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 6, iF26);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
      T18 = primitive_idQ(T28,T12);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
        T23 = primitive_machine_word_add_signal_overflow(iF26,4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
        T29 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 6, T23);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
        T30 = T29;
        MV_SET_ELT(0, T29);
        MV_SET_COUNT(1);
        T19 = T30;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
        T24 = primitive_machine_word_add_signal_overflow(iF26,8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
        iF26T = T24;
        goto L0;
        T19 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
      T20 = T19;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:839
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:836
  return(T20);
}

D KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylanI (D arg_, D parent_, D d_) {
  DADDR T4;
  DWORD bitsF5;
  D T6;
  D T7;
  D mm_wrapperF8;
  D T9;
  D mm_wrapperF10;
  DADDR T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DADDR T15;
  DADDR T16;
  D T17;
  D T18;
  D T19;
  D T20_0;
  D stepF21;
  D maskF22;
  D T23_0;
  D T24_0;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28_0;
  D T28_1;
  D T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D shiftF34;
  D T35;
  D T36;
  D T37;
  DWORD mxF38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  D T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  D T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  D T56;
  D T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  D T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  D T66;
  D shiftF67;
  D T68;
  D T69;
  D T70;
  DWORD mxF71;
  DWORD T72;
  DWORD T73;
  D T74;
  D T75;
  DWORD T76;
  D T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  DWORD T81;
  DWORD T82;
  DWORD T83;
  DWORD T84;
  DSINT T85;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  D T89;
  D T90;
  DWORD T91;
  DWORD T92;
  DWORD T93;
  D T94;
  DWORD T95;
  DWORD T96;
  DWORD T97;
  DWORD T98;
  D shiftF99;
  D T100;
  D T101;
  D T102;
  DWORD mxF103;
  DWORD T104;
  DWORD T105;
  D T106;
  D T107;
  DWORD T108;
  D T109;
  DWORD T110;
  DWORD T111;
  DWORD T112;
  DWORD T113;
  DWORD T114;
  DWORD T115;
  DWORD T116;
  DWORD T117;
  DWORD T118;
  DWORD T119;
  D T120;
  D T121_0;
  D T121_1;
  D T122;
  D T123;
  D T124;
  D T125;
  D T126;
  D T127;
  DWORD T128;
  DWORD T129;
  DWORD T130;
  DWORD T131;
  DWORD T132;
  DWORD T133;
  D T134;
  DWORD iF135T, iF135;
  D T136;
  DWORD T137;
  DWORD T138;
  D T139;
  D T140;
  D T141;
  D T142;
  D T143;
  D T144;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:950
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T4 = primitive_cast_pointer_as_raw(arg_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  bitsF5 = primitive_machine_word_logand(T4,3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T6 = primitive_machine_word_equalQ(bitsF5,0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T7 = primitive_element(arg_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    mm_wrapperF8 = T7;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T15 = primitive_cast_pointer_as_raw(mm_wrapperF8);
    T11 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T9 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF5,0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    mm_wrapperF10 = T9;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T16 = primitive_cast_pointer_as_raw(mm_wrapperF10);
    T11 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T13 = primitive_machine_word_logand(T11,-4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T14 = primitive_machine_word_logior(T13,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T12 = primitive_cast_raw_as_integer(T14);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T136 = SLOT_VALUE_INITD(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T137 = primitive_cast_integer_as_raw(T136);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T138 = primitive_machine_word_subtract_signal_overflow(T137,8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T25 = primitive_machine_word_logand(T14,T138);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T139 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 6, T25);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  T17 = primitive_idQ(T139,T12);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T26 = primitive_machine_word_add_signal_overflow(T25,4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T140 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 6, T26);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T141 = T140;
    MV_SET_ELT(0, T140);
    MV_SET_COUNT(1);
    T24_0 = T141;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T18 = Dckd_emptyVKg;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T19 = primitive_idQ(T139,T18);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T20_0 = Dabsent_engine_nodeVKg;
      T23_0 = T20_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T29 = SLOT_VALUE_INITD(d_, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T30 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T31 = primitive_machine_word_shift_right(T30,23);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T32 = primitive_machine_word_logand(T31,-4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T33 = primitive_machine_word_logior(T32,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      shiftF34 = (D) 21;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      mxF38 = 4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T37 = shiftF34;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T41 = primitive_cast_integer_as_raw(T37);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T42 = primitive_machine_word_equalQ(T41,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      if (T42 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        shiftF34 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T36 = shiftF34;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T40 = mxF38;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T45 = primitive_cast_integer_as_raw(T36);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T44 = primitive_machine_word_shift_right(T45,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T43 = primitive_machine_word_shift_left_signal_overflow(T40,T44);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        mxF38 = T43;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T35 = shiftF34;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T39 = mxF38;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T48 = primitive_cast_integer_as_raw(T35);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T47 = primitive_machine_word_shift_right(T48,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T46 = primitive_machine_word_shift_left_signal_overflow(T39,T47);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T49 = primitive_machine_word_logior(T46,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T50 = primitive_machine_word_subtract_signal_overflow(T49,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T51 = primitive_machine_word_logand(T33,T50);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T52 = primitive_cast_raw_as_integer(T51);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T27 = KPsecond_hash_valuesVKgI();
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T53 = primitive_machine_word_logxor(T51,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T54 = primitive_machine_word_negative_signal_overflow(T53);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T55 = primitive_machine_word_logior(T54,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T56 = primitive_cast_raw_as_integer(T55);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T57 = primitive_machine_word_less_thanQ(T55,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      if (T57 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T58 = primitive_machine_word_logxor(T55,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T59 = primitive_machine_word_negative_signal_overflow(T58);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T60 = primitive_machine_word_logior(T59,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T61 = primitive_machine_word_less_thanQ(T60,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        if (T61 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T63 = primitive_machine_word_shift_right(T59,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T62 = primitive_machine_word_shift_right(T14,T63);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T64 = primitive_machine_word_logand(T62,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T65 = primitive_machine_word_logior(T64,1);
          T86 = T65;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T66 = primitive_machine_word_less_thanQ(T14,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          if (T66 != &KPfalseVKi) {
            T85 = -3;
          } else {
            T85 = 1;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T86 = T85;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T87 = T86;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T75 = primitive_machine_word_less_thanQ(T55,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        if (T75 != &KPfalseVKi) {
          T74 = T56;
        } else {
          T74 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        shiftF67 = T74;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        mxF71 = T13;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T70 = shiftF67;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T76 = primitive_cast_integer_as_raw(T70);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T77 = primitive_machine_word_equalQ(T76,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        if (T77 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          shiftF67 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T69 = shiftF67;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T73 = mxF71;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T80 = primitive_cast_integer_as_raw(T69);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T79 = primitive_machine_word_shift_right(T80,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T78 = primitive_machine_word_shift_left_signal_overflow(T73,T79);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          mxF71 = T78;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T68 = shiftF67;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T72 = mxF71;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T83 = primitive_cast_integer_as_raw(T68);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T82 = primitive_machine_word_shift_right(T83,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T81 = primitive_machine_word_shift_left_signal_overflow(T72,T82);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T84 = primitive_machine_word_logior(T81,1);
        T87 = T84;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T88 = primitive_machine_word_logand(T87,61);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T89 = REPEATED_D_SLOT_VALUE_TAGGED(T27, 1, T88);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T90 = primitive_machine_word_less_thanQ(T51,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      if (T90 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T91 = primitive_machine_word_logxor(T51,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T92 = primitive_machine_word_negative_signal_overflow(T91);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T93 = primitive_machine_word_logior(T92,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T94 = primitive_machine_word_less_thanQ(T93,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        if (T94 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T96 = primitive_machine_word_shift_right(T92,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T95 = primitive_machine_word_shift_right(5,T96);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T97 = primitive_machine_word_logand(T95,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T98 = primitive_machine_word_logior(T97,1);
          T117 = T98;
        } else {
          T117 = 1;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T118 = T117;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T107 = primitive_machine_word_less_thanQ(T51,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        if (T107 != &KPfalseVKi) {
          T106 = T52;
        } else {
          T106 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        shiftF99 = T106;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        mxF103 = 4;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T102 = shiftF99;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T108 = primitive_cast_integer_as_raw(T102);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T109 = primitive_machine_word_equalQ(T108,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        if (T109 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          shiftF99 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T101 = shiftF99;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T105 = mxF103;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T112 = primitive_cast_integer_as_raw(T101);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T111 = primitive_machine_word_shift_right(T112,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T110 = primitive_machine_word_shift_left_signal_overflow(T105,T111);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          mxF103 = T110;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T100 = shiftF99;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T104 = mxF103;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T115 = primitive_cast_integer_as_raw(T100);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T114 = primitive_machine_word_shift_right(T115,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T113 = primitive_machine_word_shift_left_signal_overflow(T104,T114);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T116 = primitive_machine_word_logior(T113,1);
        T118 = T116;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T119 = primitive_machine_word_subtract_signal_overflow(T118,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T120 = primitive_cast_raw_as_integer(T119);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T121_0 = T89;
      T121_1 = T120;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T28_0 = T121_0;
      T28_1 = T121_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      stepF21 = T28_0;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T128 = primitive_cast_integer_as_raw(stepF21);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T129 = primitive_machine_word_logxor(T128,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      maskF22 = T28_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T131 = primitive_cast_integer_as_raw(maskF22);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      iF135T = T25;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        iF135 = iF135T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T130 = primitive_machine_word_add_signal_overflow(iF135,T129);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T132 = primitive_machine_word_logand(T130,T131);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T142 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 6, T132);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        T122 = primitive_idQ(T142,T12);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        if (T122 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T133 = primitive_machine_word_add_signal_overflow(T132,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T143 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 6, T133);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T144 = T143;
          MV_SET_ELT(0, T143);
          MV_SET_COUNT(1);
          T127 = T144;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T123 = Dckd_emptyVKg;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T124 = primitive_idQ(T142,T123);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          if (T124 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
            T125 = Dabsent_engine_nodeVKg;
            MV_SET_ELT(0, Dabsent_engine_nodeVKg);
            MV_SET_COUNT(1);
            T126 = T125;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
            iF135T = T132;
            goto L0;
            T126 = T134;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
          T127 = T126;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
      T23_0 = T127;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
    T24_0 = T23_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:953
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:950
  MV_SET_COUNT(1);
  return(T24_0);
}

D KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylanI (D arg_, D parent_, D d_) {
  D T4;
  D T5;
  DADDR T6;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  DWORD iF20T, iF20;
  D T21;
  D T22;
  D T23;
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:842
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T4 = SLOT_VALUE(arg_, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T5 = SLOT_VALUE_INITD(T4, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T6 = primitive_cast_pointer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T8 = primitive_machine_word_logand(T6,-4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T7 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T10 = SLOT_VALUE(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T21 = SLOT_VALUE_INITD(d_, 6);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  T15 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  iF20T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
    iF20 = iF20T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
    T16 = primitive_machine_word_equalQ(iF20,T15);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
      T11 = T10;
      MV_SET_ELT(0, T10);
      MV_SET_COUNT(1);
      T14 = T11;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
      T22 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 7, iF20);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
      T12 = primitive_idQ(T22,T7);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
        T17 = primitive_machine_word_add_signal_overflow(iF20,4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
        T23 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 7, T17);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
        T24 = T23;
        MV_SET_ELT(0, T23);
        MV_SET_COUNT(1);
        T13 = T24;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
        T18 = primitive_machine_word_add_signal_overflow(iF20,8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
        iF20T = T18;
        goto L0;
        T13 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
      T14 = T13;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:845
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:842
  return(T14);
}

D KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylanI (D arg_, D parent_, D d_) {
  D T4;
  D T5;
  DADDR T6;
  D T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14_0;
  D stepF15;
  D maskF16;
  D T17_0;
  D T18_0;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22_0;
  D T22_1;
  D T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D shiftF28;
  D T29;
  D T30;
  D T31;
  DWORD mxF32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  D T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  D T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  D T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  D T60;
  D shiftF61;
  D T62;
  D T63;
  D T64;
  DWORD mxF65;
  DWORD T66;
  DWORD T67;
  D T68;
  D T69;
  DWORD T70;
  D T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  DSINT T79;
  DWORD T80;
  DWORD T81;
  DWORD T82;
  D T83;
  D T84;
  DWORD T85;
  DWORD T86;
  DWORD T87;
  D T88;
  DWORD T89;
  DWORD T90;
  DWORD T91;
  DWORD T92;
  D shiftF93;
  D T94;
  D T95;
  D T96;
  DWORD mxF97;
  DWORD T98;
  DWORD T99;
  D T100;
  D T101;
  DWORD T102;
  D T103;
  DWORD T104;
  DWORD T105;
  DWORD T106;
  DWORD T107;
  DWORD T108;
  DWORD T109;
  DWORD T110;
  DWORD T111;
  DWORD T112;
  DWORD T113;
  D T114;
  D T115_0;
  D T115_1;
  D T116;
  D T117;
  D T118;
  D T119;
  D T120;
  D T121;
  DWORD T122;
  DWORD T123;
  DWORD T124;
  DWORD T125;
  DWORD T126;
  DWORD T127;
  D T128;
  DWORD iF129T, iF129;
  D T130;
  DWORD T131;
  DWORD T132;
  D T133;
  D T134;
  D T135;
  D T136;
  D T137;
  D T138;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:956
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T4 = SLOT_VALUE(arg_, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T5 = SLOT_VALUE_INITD(T4, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T6 = primitive_cast_pointer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T8 = primitive_machine_word_logand(T6,-4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T7 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T10 = SLOT_VALUE(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T130 = SLOT_VALUE_INITD(d_, 6);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T131 = primitive_cast_integer_as_raw(T130);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T132 = primitive_machine_word_subtract_signal_overflow(T131,8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T19 = primitive_machine_word_logand(T9,T132);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T133 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 7, T19);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  T11 = primitive_idQ(T133,T7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
    T20 = primitive_machine_word_add_signal_overflow(T19,4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
    T134 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 7, T20);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
    T135 = T134;
    MV_SET_ELT(0, T134);
    MV_SET_COUNT(1);
    T18_0 = T135;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
    T12 = Dckd_emptyVKg;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
    T13 = primitive_idQ(T133,T12);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T14_0 = T10;
      T17_0 = T14_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T23 = SLOT_VALUE_INITD(d_, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T24 = primitive_cast_integer_as_raw(T23);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T25 = primitive_machine_word_shift_right(T24,23);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T26 = primitive_machine_word_logand(T25,-4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T27 = primitive_machine_word_logior(T26,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      shiftF28 = (D) 21;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      mxF32 = 4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T31 = shiftF28;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T35 = primitive_cast_integer_as_raw(T31);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T36 = primitive_machine_word_equalQ(T35,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        shiftF28 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T30 = shiftF28;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T34 = mxF32;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T39 = primitive_cast_integer_as_raw(T30);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T38 = primitive_machine_word_shift_right(T39,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T37 = primitive_machine_word_shift_left_signal_overflow(T34,T38);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        mxF32 = T37;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T29 = shiftF28;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T33 = mxF32;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T42 = primitive_cast_integer_as_raw(T29);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T41 = primitive_machine_word_shift_right(T42,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T40 = primitive_machine_word_shift_left_signal_overflow(T33,T41);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T43 = primitive_machine_word_logior(T40,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T44 = primitive_machine_word_subtract_signal_overflow(T43,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T45 = primitive_machine_word_logand(T27,T44);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T46 = primitive_cast_raw_as_integer(T45);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T21 = KPsecond_hash_valuesVKgI();
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T47 = primitive_machine_word_logxor(T45,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T48 = primitive_machine_word_negative_signal_overflow(T47);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T49 = primitive_machine_word_logior(T48,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T50 = primitive_cast_raw_as_integer(T49);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T51 = primitive_machine_word_less_thanQ(T49,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      if (T51 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T52 = primitive_machine_word_logxor(T49,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T53 = primitive_machine_word_negative_signal_overflow(T52);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T54 = primitive_machine_word_logior(T53,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T55 = primitive_machine_word_less_thanQ(T54,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        if (T55 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T57 = primitive_machine_word_shift_right(T53,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T56 = primitive_machine_word_shift_right(T9,T57);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T58 = primitive_machine_word_logand(T56,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T59 = primitive_machine_word_logior(T58,1);
          T80 = T59;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T60 = primitive_machine_word_less_thanQ(T9,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          if (T60 != &KPfalseVKi) {
            T79 = -3;
          } else {
            T79 = 1;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T80 = T79;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T81 = T80;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T69 = primitive_machine_word_less_thanQ(T49,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        if (T69 != &KPfalseVKi) {
          T68 = T50;
        } else {
          T68 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        shiftF61 = T68;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        mxF65 = T8;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T64 = shiftF61;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T70 = primitive_cast_integer_as_raw(T64);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T71 = primitive_machine_word_equalQ(T70,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        if (T71 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          shiftF61 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T63 = shiftF61;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T67 = mxF65;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T74 = primitive_cast_integer_as_raw(T63);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T73 = primitive_machine_word_shift_right(T74,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T72 = primitive_machine_word_shift_left_signal_overflow(T67,T73);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          mxF65 = T72;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T62 = shiftF61;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T66 = mxF65;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T77 = primitive_cast_integer_as_raw(T62);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T76 = primitive_machine_word_shift_right(T77,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T75 = primitive_machine_word_shift_left_signal_overflow(T66,T76);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T78 = primitive_machine_word_logior(T75,1);
        T81 = T78;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T82 = primitive_machine_word_logand(T81,61);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T83 = REPEATED_D_SLOT_VALUE_TAGGED(T21, 1, T82);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T84 = primitive_machine_word_less_thanQ(T45,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      if (T84 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T85 = primitive_machine_word_logxor(T45,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T86 = primitive_machine_word_negative_signal_overflow(T85);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T87 = primitive_machine_word_logior(T86,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T88 = primitive_machine_word_less_thanQ(T87,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        if (T88 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T90 = primitive_machine_word_shift_right(T86,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T89 = primitive_machine_word_shift_right(5,T90);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T91 = primitive_machine_word_logand(T89,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T92 = primitive_machine_word_logior(T91,1);
          T111 = T92;
        } else {
          T111 = 1;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T112 = T111;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T101 = primitive_machine_word_less_thanQ(T45,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        if (T101 != &KPfalseVKi) {
          T100 = T46;
        } else {
          T100 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        shiftF93 = T100;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        mxF97 = 4;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T96 = shiftF93;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T102 = primitive_cast_integer_as_raw(T96);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T103 = primitive_machine_word_equalQ(T102,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        if (T103 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          shiftF93 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T95 = shiftF93;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T99 = mxF97;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T106 = primitive_cast_integer_as_raw(T95);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T105 = primitive_machine_word_shift_right(T106,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T104 = primitive_machine_word_shift_left_signal_overflow(T99,T105);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          mxF97 = T104;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T94 = shiftF93;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T98 = mxF97;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T109 = primitive_cast_integer_as_raw(T94);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T108 = primitive_machine_word_shift_right(T109,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T107 = primitive_machine_word_shift_left_signal_overflow(T98,T108);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T110 = primitive_machine_word_logior(T107,1);
        T112 = T110;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T113 = primitive_machine_word_subtract_signal_overflow(T112,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T114 = primitive_cast_raw_as_integer(T113);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T115_0 = T83;
      T115_1 = T114;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T22_0 = T115_0;
      T22_1 = T115_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      stepF15 = T22_0;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T122 = primitive_cast_integer_as_raw(stepF15);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T123 = primitive_machine_word_logxor(T122,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      maskF16 = T22_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T125 = primitive_cast_integer_as_raw(maskF16);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      iF129T = T19;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        iF129 = iF129T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T124 = primitive_machine_word_add_signal_overflow(iF129,T123);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T126 = primitive_machine_word_logand(T124,T125);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T136 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 7, T126);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        T116 = primitive_idQ(T136,T7);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        if (T116 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T127 = primitive_machine_word_add_signal_overflow(T126,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T137 = REPEATED_D_SLOT_VALUE_TAGGED(d_, 7, T127);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T138 = T137;
          MV_SET_ELT(0, T137);
          MV_SET_COUNT(1);
          T121 = T138;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T117 = Dckd_emptyVKg;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T118 = primitive_idQ(T136,T117);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          if (T118 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
            T119 = T10;
            MV_SET_ELT(0, T10);
            MV_SET_COUNT(1);
            T120 = T119;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
            iF129T = T126;
            goto L0;
            T120 = T128;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
          T121 = T120;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
      T17_0 = T121;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
    T18_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:959
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:956
  MV_SET_COUNT(1);
  return(T18_0);
}

D KPgf_dispatch_typecheckVKgI (D arg_, D parent_, D d_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1145
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1148
  T6 = SLOT_VALUE_INITD(d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1148
  T3 = primitive_instanceQ(arg_,T6);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1148
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1149
    T7 = SLOT_VALUE_INITD(d_, 4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1149
    T8 = T7;
    MV_SET_ELT(0, T7);
    MV_SET_COUNT(1);
    T5 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1151
    T4 = Dinapplicable_engine_nodeVKg;
    MV_SET_ELT(0, Dinapplicable_engine_nodeVKg);
    MV_SET_COUNT(1);
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1148
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1145
  return(T5);
}

D KPgf_dispatch_if_typeVKgI (D arg_, D parent_, D disp_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1187
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1190
  T5 = SLOT_VALUE_INITD(disp_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1190
  T3 = primitive_instanceQ(arg_,T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1190
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1191
    T6 = SLOT_VALUE_INITD(disp_, 4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1191
    T7 = T6;
    MV_SET_ELT(0, T6);
    MV_SET_COUNT(1);
    T4 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1193
    T8 = SLOT_VALUE_INITD(disp_, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1193
    T9 = T8;
    MV_SET_ELT(0, T8);
    MV_SET_COUNT(1);
    T4 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1190
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1187
  return(T4);
}

D KPgf_dispatch_immediate_linear_singletonVKgI (D arg_, D parent_, D d_) {
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15_0;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  D T28;
  D T29;
  D T30;
  DWORD iF31T, iF31;
  DWORD T32;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1367
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  T4 = SLOT_VALUE_INITD(d_, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  T7 = SLOT_VALUE_INITD(d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  T9 = SLOT_VALUE_INITD(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  T10 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T11);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  T5 = primitive_idQ(T10,arg_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
    T12 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
    T13 = primitive_machine_word_add_signal_overflow(T12,4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
    T14 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T13);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
    T15_0 = T14;
    T6_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
    T32 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
    iF31T = T32;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      iF31 = iF31T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      T21 = primitive_machine_word_add_signal_overflow(iF31,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      T22 = primitive_cast_raw_as_integer(T21);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      T23 = primitive_idQ(T22,T8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      if (T23 != &KPfalseVKi) {
        T16 = 1;
      } else {
        T16 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      T26 = primitive_cast_raw_as_integer(T16);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      T24 = primitive_idQ(T26,T9);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
        T17 = T4;
        MV_SET_ELT(0, T4);
        MV_SET_COUNT(1);
        T20 = T17;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
        T25 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T16);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
        T18 = primitive_idQ(T25,arg_);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
          SLOT_VALUE_SETTER(T26, d_, 5);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
          T27 = primitive_machine_word_add_signal_overflow(T16,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
          T28 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T27);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
          T29 = T28;
          MV_SET_ELT(0, T28);
          MV_SET_COUNT(1);
          T19 = T29;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
          iF31T = T16;
          goto L0;
          T19 = T30;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
    T6_0 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1370
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1367
  MV_SET_COUNT(1);
  return(T6_0);
}

D KPgf_dispatch_value_object_linear_singletonVKgI (D arg_, D parent_, D d_) {
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15_0;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  DWORD iF33T, iF33;
  DWORD T34;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1374
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  T4 = SLOT_VALUE_INITD(d_, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  T7 = SLOT_VALUE_INITD(d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  T8 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  T9 = SLOT_VALUE_INITD(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  T11 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  T10 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T11);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T5 = CONGRUENT_CALL2(T10, arg_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
    T12 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
    T13 = primitive_machine_word_add_signal_overflow(T12,4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
    T14 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T13);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
    T15_0 = T14;
    T6_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
    T34 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
    iF33T = T34;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      iF33 = iF33T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      T22 = primitive_machine_word_add_signal_overflow(iF33,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      T23 = primitive_cast_raw_as_integer(T22);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      T24 = primitive_idQ(T23,T8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      if (T24 != &KPfalseVKi) {
        T16 = 1;
      } else {
        T16 = T22;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      T27 = primitive_cast_raw_as_integer(T16);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      T25 = primitive_idQ(T27,T9);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
        T17 = T4;
        MV_SET_ELT(0, T4);
        MV_SET_COUNT(1);
        T21 = T17;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
        T26 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T16);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
        T28 = primitive_idQ(T26,Dabsent_engine_nodeVKg);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
        if (T28 != &KPfalseVKi) {
          T19 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T18 = CONGRUENT_CALL2(T26, arg_);
          T19 = T18;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
        if (T19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
          SLOT_VALUE_SETTER(T27, d_, 5);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
          T29 = primitive_machine_word_add_signal_overflow(T16,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
          T30 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T29);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
          T31 = T30;
          MV_SET_ELT(0, T30);
          MV_SET_COUNT(1);
          T20 = T31;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
          iF33T = T16;
          goto L0;
          T20 = T32;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
        T21 = T20;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
    T6_0 = T21;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1377
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1374
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kbootstrap_allocate_engine_nodeVKgI (D entry_type_, D root_bits_) {
  D T2;
  D c_;
  D T4_0;
  D T5_0;
  D T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:51
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:53
  T2 = Tengine_node_classesTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:54
  T7 = primitive_cast_integer_as_raw(entry_type_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:54
  T6 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 1, T7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:54
  c_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:55
  T4_0 = Kbootstrap_typed_allocate_engine_nodeVKgI(c_, entry_type_, root_bits_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:51
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:51
  MV_SET_COUNT(1);
  return(T5_0);
}

D KdispwarnYdispatch_engine_internalVdylanI (D c_, D ds_) {
  D T2;
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1447
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1448
  T3 = SLOT_VALUE_INITD(ds_, 8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1448
  T4 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1448
  SLOT_VALUE_SETTER(c_, T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1448
  SLOT_VALUE_SETTER(T3, T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1448
  SLOT_VALUE_SETTER(T4, ds_, 8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1448
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1447
  MV_SET_COUNT(0);
  return(T2);
}

D Kmake_ambiguous_methods_engine_nodeVKgI (D ordered_, D ambig_) {
  D T2;
  D e_;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:453
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:457
  T2 = Kbootstrap_allocate_engine_nodeVKgI((D) 61, (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:456
  e_ = T2;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:458
  SLOT_VALUE_SETTER(ordered_, e_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:459
  SLOT_VALUE_SETTER(ambig_, e_, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:460
  primitive_initialize_engine_node(e_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:461
  T4_0 = e_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:453
  MV_SET_COUNT(1);
  return(T4_0);
}

D KdispinapplicableYdispatch_engine_internalVdylanI (D ds_) {
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1440
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1441
  KdispresultYdispatch_engine_internalVdylanI(Dinapplicable_engine_nodeVKg, ds_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1442
  T1 = Dabsent_engine_nodeVKg;
  MV_SET_ELT(0, Dabsent_engine_nodeVKg);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1440
  return(T1);
}

D Kmake_single_method_engine_nodeVKgI (D meth_, D Urest_, D data_, D keys_) {
  D T5;
  D sigF6;
  D T7;
  D T8;
  D T9;
  D keysF10;
  D T11;
  D mkeys_;
  D T13;
  D T14;
  D T15;
  D e_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  DWORD T23;
  D shiftF24;
  D T25;
  D T26;
  D T27;
  DWORD mx_;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  D T43;
  D T44;
  DWORD T45;
  D T46;
  D T47;
  DWORD T48;
  D T49;
  D T50;
  D T51;
  D T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  D T58;
  D k_;
  D T60;
  D T61;
  D T62;
  D T63;
  D T64;
  DWORD T65;
  DWORD T66;
  D T67;
  DWORD jF68T, jF68;
  D T69;
  DWORD iF70T, iF70;
  D T71;
  D T72;
  D T73;
  D T74;
  D T75;
  D T76;
  D T77;
  D T78;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:478
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:481
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  T5 = CONGRUENT_CALL1(meth_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:481
  sigF6 = T5;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T21 = SLOT_VALUE_INITD(sigF6, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T22 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T23 = primitive_machine_word_logand(T22,1020);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  shiftF24 = (D) 25;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  mx_ = T23;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T27 = shiftF24;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T31 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T32 = primitive_machine_word_equalQ(T31,257);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  if (T32 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
    shiftF24 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
    T26 = shiftF24;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
    T30 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
    T35 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
    T34 = primitive_machine_word_shift_right(T35,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
    T33 = primitive_machine_word_shift_left_signal_overflow(T30,T34);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
    mx_ = T33;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T25 = shiftF24;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T29 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T38 = primitive_cast_integer_as_raw(T25);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T37 = primitive_machine_word_shift_right(T38,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T36 = primitive_machine_word_shift_left_signal_overflow(T29,T37);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T39 = primitive_machine_word_logior(T36,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:482
  T40 = primitive_cast_raw_as_integer(T39);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
  T41 = SLOT_VALUE_INITD(sigF6, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
  T42 = primitive_cast_integer_as_raw(T41);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
  T43 = primitive_machine_word_logbitQ(18,T42);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
  if (T43 != &KPfalseVKi) {
    T47 = T43;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
    T44 = SLOT_VALUE_INITD(sigF6, 0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
    T45 = primitive_cast_integer_as_raw(T44);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
    T46 = primitive_machine_word_logbitQ(20,T45);
    T47 = T46;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
  if (T47 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
    T48 = primitive_machine_word_logior(65537,T39);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
    T49 = primitive_cast_raw_as_integer(T48);
    T7 = T49;
  } else {
    T7 = T40;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:483
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:485
  if (keys_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:487
    T50 = primitive_idQ(keys_,&KPtrueVKi);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:485
    if (T50 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:488
      T9 = Kbootstrap_allocate_engine_nodeVKgI((D) 21, T7);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:488
      T77 = T9;
      T18 = T77;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:490
      keysF10 = keys_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:491
      T11 = CALL1(&Kkeyword_specifiersVKe, meth_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:491
      mkeys_ = T11;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:492
      T51 = SLOT_VALUE_INITD(keysF10, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:493
      T52 = SLOT_VALUE_INITD(mkeys_, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      T53 = primitive_cast_integer_as_raw(T52);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      T54 = primitive_machine_word_shift_right(T53,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      T55 = primitive_machine_word_logand(T54,-4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      T56 = primitive_machine_word_logior(T55,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      T57 = primitive_cast_integer_as_raw(T51);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      T58 = primitive_machine_word_equalQ(T57,T56);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      if (T58 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:505
        iF70T = 1;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:505
          iF70 = iF70T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:497
          T60 = primitive_machine_word_equalQ(iF70,T57);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:497
          if (T60 != &KPfalseVKi) {
            T75 = &KPtrueVKi;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:500
            T61 = REPEATED_D_SLOT_VALUE_TAGGED(keysF10, 1, iF70);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:500
            k_ = T61;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:507
            jF68T = 1;
          L1: ;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:507
              jF68 = jF68T;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:502
              T63 = primitive_machine_word_equalQ(jF68,T53);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:502
              if (T63 != &KPfalseVKi) {
                T74 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:504
                T64 = REPEATED_D_SLOT_VALUE_TAGGED(mkeys_, 1, jF68);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:504
                T62 = primitive_idQ(k_,T64);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:502
                if (T62 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:505
                  T65 = primitive_machine_word_add_signal_overflow(iF70,4);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:505
                  iF70T = T65;
                  goto L0;
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:513
                  T71 = T69;
                  T73 = T71;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:507
                  T66 = primitive_machine_word_add_signal_overflow(jF68,8);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:507
                  jF68T = T66;
                  goto L1;
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:513
                  T72 = T67;
                  T73 = T72;
                }
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:502
                T74 = T73;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:502
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:507
            T75 = T74;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:497
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:505
        T13 = T75;
      } else {
        T13 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:515
        T14 = Kbootstrap_allocate_engine_nodeVKgI((D) 13, T7);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:515
        T78 = T14;
        T17 = T78;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:518
        T15 = Kbootstrap_allocate_engine_nodeVKgI((D) 17, T7);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:517
        e_ = T15;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:519
        SLOT_VALUE_SETTER(keysF10, e_, 5);
        T17 = e_;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:494
      T18 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:485
    T19 = T18;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:486
    T8 = Kbootstrap_allocate_engine_nodeVKgI((D) 9, T7);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:486
    T76 = T8;
    T19 = T76;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:485
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:523
  SLOT_VALUE_SETTER(meth_, T19, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:524
  SLOT_VALUE_SETTER(data_, T19, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:525
  primitive_initialize_engine_node(T19);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:526
  T20 = T19;
  MV_SET_ELT(0, T19);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:478
  return(T20);
}

D Kbootstrap_typed_allocate_engine_nodeVKgI (D c_, D entry_type_, D root_bits_) {
  D T3;
  D e_;
  D callback_;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14_0;
  D T15;
  D T16_0;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:61
  T3 = Tengine_node_callbacksTVKg;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T7 = SLOT_VALUE(c_, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T9 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T11 = primitive_machine_word_logand(T10,262140);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T12 = primitive_machine_word_add_signal_overflow(5,T11);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T13 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T15 = SLOT_VALUE_INITD(T7, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T16_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T14_0 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T17 = T14_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T18 = primitive_machine_word_shift_right(T11,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  T8 = primitive_object_allocate_filled(T13,T17,T18,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:62
  e_ = T8;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:63
  T19 = primitive_cast_integer_as_raw(root_bits_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:63
  T20 = primitive_machine_word_logand(T19,0xFFFFFFFFFFFFFF01L);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:64
  T21 = primitive_cast_integer_as_raw(entry_type_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:64
  T22 = primitive_machine_word_logior(T20,T21);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:64
  T23 = primitive_cast_raw_as_integer(T22);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:64
  SLOT_VALUE_SETTER(T23, e_, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:65
  T24 = REPEATED_D_SLOT_VALUE_TAGGED(T3, 1, T21);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:66
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:67
    callback_ = T24;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:68
    T25 = SLOT_VALUE(callback_, 2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:68
    SLOT_VALUE_SETTER(T25, e_, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:70
  T6 = e_;
  MV_SET_ELT(0, e_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:58
  return(T6);
}

D Kmake_by_class_discriminatorYdispatch_engine_internalVdylanI (D argnum_, D gf_, D number_of_keys_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;
  D T7_0;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:758
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:761
  T6 = primitive_idQ(number_of_keys_,(D) 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:761
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:762
    T3_0 = Kmake_monomorphic_by_class_discriminatorVKgI(argnum_, gf_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:762
    T7_0 = T3_0;
    T5_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:764
    T4_0 = Kmake_initial_class_keyed_discriminatorYdispatch_engine_internalVdylanI((D) 137, argnum_, gf_, number_of_keys_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:764
    T8_0 = T4_0;
    T5_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:761
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:758
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kckd_addXYdispatch_engine_internalVdylanI (D d_, D key_, D value_) {
  D T3;
  D T4;
  D dF5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1004
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1009
  T12 = primitive_instanceQ(d_,&KLlinear_class_keyed_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1009
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:569
    T10 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1011
    T3 = Kgrounded_lckd_addXYdispatch_engine_internalVdylanI(T10, key_, value_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1011
    T14 = T3;
    T8 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1012
    T13 = primitive_instanceQ(d_,&KLmonomorphic_by_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1009
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:569
      T11 = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1014
      T4 = Kmckd_addXYdispatch_engine_internalVdylanI(T11, key_, value_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1014
      T15 = T4;
      T7 = T15;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1016
      dF5 = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1017
      T6 = Kgrounded_hckd_addXYdispatch_engine_internalVdylanI(dF5, key_, value_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1017
      T16 = T6;
      T7 = T16;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1009
    T8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1009
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1020
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1004
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kmake_if_type_discriminatorVKgI (D argnum_, D gf_, D type_, D thend_, D elsed_) {
  D T5;
  D T6;
  D d_;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1197
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1201
  T5 = Kstandard_discriminator_bitsVKgI(gf_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1200
  T6 = Kbootstrap_allocate_discriminatorVKgI((D) 133, argnum_, T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1199
  d_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1202
  SLOT_VALUE_SETTER(type_, d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1203
  SLOT_VALUE_SETTER(thend_, d_, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1204
  SLOT_VALUE_SETTER(elsed_, d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1205
  primitive_initialize_discriminator(d_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1206
  T8 = d_;
  MV_SET_ELT(0, d_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1197
  return(T8);
}

D Kmake_typecheck_discriminatorVKgI (D argnum_, D gf_, D t_, D next_) {
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1155
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1165
  T4_0 = Kmake_if_type_discriminatorVKgI(argnum_, gf_, t_, next_, Dinapplicable_engine_nodeVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1155
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1155
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kmake_by_singleton_class_discriminatorYdispatch_engine_internalVdylanI (D argnum_, D gf_, D number_of_keys_, D default_) {
  D T4;
  D d_;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:768
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:772
  T4 = Kmake_initial_class_keyed_discriminatorYdispatch_engine_internalVdylanI((D) 145, argnum_, gf_, number_of_keys_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:771
  d_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:773
  Kgrounded_class_keyed_discriminator_default_setterYdispatch_engine_internalVdylanI(default_, d_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:774
  T6_0 = d_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:768
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmake_single_class_singleton_discriminatorVKgI (D keys_, D argnum_, D gf_) {
  D n_;
  DADDR T4;
  DWORD T5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D mm_wrapper_;
  D T15;
  DWORD T16;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1400
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1403
  T10 = KsizeVKdMM30I(keys_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1403
  n_ = T10;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  T11 = SLOT_VALUE_INITD(keys_, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  T4 = primitive_cast_pointer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  T5 = primitive_machine_word_logand(T4,3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  T6 = primitive_machine_word_equalQ(T5,0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
    T12 = SLOT_VALUE_INITD(keys_, 0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
    T13 = primitive_element(T12,0,0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
    mm_wrapper_ = T13;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
    T15 = SLOT_VALUE_INITD(mm_wrapper_, 1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
    T16 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
    T17 = primitive_machine_word_logbitQ(2,T16);
    T7 = T17;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  if (T7 != &KPfalseVKi) {
    T8 = (D) 165;
  } else {
    T8 = (D) 153;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1405
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1404
  T9_0 = Kmake_linear_singleton_discriminatorVKgI(T8, argnum_, gf_, keys_, n_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1400
  MV_SET_COUNT(1);
  return(T9_0);
}

D Ksingleton_discriminator_element_setterVKgI (D value_, D d_, D key_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1391
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1395
  T3 = Klinear_singleton_discriminator_element_setterVKgI(value_, d_, key_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1391
  return(T3);
}

D Kckd_lookupYdispatch_engine_internalVdylanI (D key_, D d_) {
  D default_;
  D T4;
  D T5_0;
  D T6_0;
  D T7_0;
  D dF8;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:962
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:964
  default_ = Kgrounded_class_keyed_discriminator_defaultVKgI(d_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:965
  T14 = primitive_instanceQ(d_,&KLmonomorphic_by_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:965
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:297
    T12 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:967
    T15 = SLOT_VALUE_INITD(T12, 3);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:967
    T4 = KEEVKdI(T15, key_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:967
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:968
      T16 = SLOT_VALUE_INITD(T12, 4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:968
      T17_0 = T16;
      T6_0 = T17_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:970
      T5_0 = default_;
      T6_0 = T5_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:967
    T11_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:973
    T18 = primitive_instanceQ(d_,&KLlinear_class_keyed_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:973
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:297
      T13 = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:975
      T7_0 = Kgrounded_linear_class_key_lookupYdispatch_engine_internalVdylanI(key_, T13, default_);
      T10_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:977
      dF8 = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:978
      T9_0 = Kgrounded_hashed_class_key_lookupYdispatch_engine_internalVdylanI(key_, dF8, default_);
      T10_0 = T9_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:973
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:965
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:962
  MV_SET_COUNT(1);
  return(T11_0);
}

D Ksingleton_discriminator_elementVKgI (D d_, D key_, D default_) {
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16_0;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  DWORD iF32T, iF32;
  DWORD T33;
  D T34;
  D T35;
  D T36_0;
  D T37;
  D T38;
  D T39;
  D T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  D T44;
  D T45_0;
  DWORD T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  DWORD T52;
  D T53;
  D T54;
  D T55;
  D T56;
  D T57;
  D T58;
  DWORD T59;
  D T60;
  D T61;
  D T62;
  DWORD iF63T, iF63;
  DWORD T64;
  _KLsimple_object_vectorGVKd_1 T65 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T66_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1381
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
  T5 = primitive_instanceQ(d_,&KLimmediate_linear_singleton_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    T8 = SLOT_VALUE_INITD(d_, 3);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    T9 = SLOT_VALUE_INITD(T8, 0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    T10 = SLOT_VALUE_INITD(d_, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    T12 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    T11 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T12);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    T6 = primitive_idQ(T11,key_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
      T13 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
      T14 = primitive_machine_word_add_signal_overflow(T13,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
      T15 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T14);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
      T16_0 = T15;
      T7_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
      T33 = primitive_cast_integer_as_raw(T10);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
      iF32T = T33;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        iF32 = iF32T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        T22 = primitive_machine_word_add_signal_overflow(iF32,8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        T23 = primitive_cast_raw_as_integer(T22);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        T24 = primitive_idQ(T23,T9);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        if (T24 != &KPfalseVKi) {
          T17 = 1;
        } else {
          T17 = T22;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        T27 = primitive_cast_raw_as_integer(T17);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        T25 = primitive_idQ(T27,T10);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
          T18 = default_;
          MV_SET_ELT(0, default_);
          MV_SET_COUNT(1);
          T21 = T18;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
          T26 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T17);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
          T19 = primitive_idQ(T26,key_);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
          if (T19 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
            SLOT_VALUE_SETTER(T27, d_, 5);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
            T28 = primitive_machine_word_add_signal_overflow(T17,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
            T29 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T28);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
            T30 = T29;
            MV_SET_ELT(0, T29);
            MV_SET_COUNT(1);
            T20 = T30;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
            iF32T = T17;
            goto L0;
            T20 = T31;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
          T21 = T20;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
      T7_0 = T21;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1385
    T4_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
    T34 = primitive_instanceQ(d_,&KLvalue_object_linear_singleton_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
    if (T34 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      T37 = SLOT_VALUE_INITD(d_, 3);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      T38 = SLOT_VALUE_INITD(T37, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      T39 = SLOT_VALUE_INITD(d_, 5);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      T41 = primitive_cast_integer_as_raw(T39);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      T40 = REPEATED_D_SLOT_VALUE_TAGGED(T37, 1, T41);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      CONGRUENT_CALL_PROLOG(&KEVKd, 2);
      T35 = CONGRUENT_CALL2(T40, key_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
        T42 = primitive_cast_integer_as_raw(T39);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
        T43 = primitive_machine_word_add_signal_overflow(T42,4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
        T44 = REPEATED_D_SLOT_VALUE_TAGGED(T37, 1, T43);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
        T45_0 = T44;
        T36_0 = T45_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
        T64 = primitive_cast_integer_as_raw(T39);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
        iF63T = T64;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          iF63 = iF63T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          T52 = primitive_machine_word_add_signal_overflow(iF63,8);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          T53 = primitive_cast_raw_as_integer(T52);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          T54 = primitive_idQ(T53,T38);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          if (T54 != &KPfalseVKi) {
            T46 = 1;
          } else {
            T46 = T52;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          T57 = primitive_cast_raw_as_integer(T46);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          T55 = primitive_idQ(T57,T39);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          if (T55 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
            T47 = default_;
            MV_SET_ELT(0, default_);
            MV_SET_COUNT(1);
            T51 = T47;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
            T56 = REPEATED_D_SLOT_VALUE_TAGGED(T37, 1, T46);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
            T58 = primitive_idQ(T56,Dabsent_engine_nodeVKg);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
            if (T58 != &KPfalseVKi) {
              T49 = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
              CONGRUENT_CALL_PROLOG(&KEVKd, 2);
              T48 = CONGRUENT_CALL2(T56, key_);
              T49 = T48;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
            if (T49 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
              SLOT_VALUE_SETTER(T57, d_, 5);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
              T59 = primitive_machine_word_add_signal_overflow(T46,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
              T60 = REPEATED_D_SLOT_VALUE_TAGGED(T37, 1, T59);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
              T61 = T60;
              MV_SET_ELT(0, T60);
              MV_SET_COUNT(1);
              T50 = T61;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
              iF63T = T46;
              goto L1;
              T50 = T62;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
            T51 = T50;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
        T36_0 = T51;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1387
      T3_0 = T36_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
      T65.vector_element_[0] = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
      T66_0 = KerrorVKdMM1I(&K101, &T65);
      T3_0 = T66_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1383
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1381
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kckd_sizeVKgI (D d_) {
  D dF1;
  D T2_0;
  D dF3;
  D dF4;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:997
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
  T10 = primitive_instanceQ(d_,&KLlinear_class_keyed_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
    T7 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
    T11 = primitive_instanceQ(T7,&KLlinear_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
      T8 = T7;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T12 = SLOT_VALUE_INITD(T8, 6);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T13_0 = T12;
      T2_0 = T13_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
      dF1 = T7;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T14 = SLOT_VALUE_INITD(dF1, 5);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T15_0 = T14;
      T2_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
    T6_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
    dF3 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
    T16 = primitive_instanceQ(dF3,&KLhashed_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:210
      T9 = dF3;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T17 = SLOT_VALUE_INITD(T9, 6);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T18_0 = T17;
      T5_0 = T18_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
      dF4 = dF3;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T19 = SLOT_VALUE_INITD(dF4, 5);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1000
      T20_0 = T19;
      T5_0 = T20_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:999
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:997
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kckd_refVKgI (D d_, D index_) {
  D dF2;
  D T3_0;
  D dF4;
  D dF5;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  DWORD T25;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:983
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
  T11 = primitive_instanceQ(d_,&KLlinear_class_keyed_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
    T8 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
    T12 = primitive_instanceQ(T8,&KLlinear_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
      T9 = T8;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T15 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 7, T15);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T14 = T13;
      MV_SET_ELT(0, T13);
      MV_SET_COUNT(1);
      T3_0 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
      dF2 = T8;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T18 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T16 = REPEATED_D_SLOT_VALUE_TAGGED(dF2, 6, T18);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T17 = T16;
      MV_SET_ELT(0, T16);
      MV_SET_COUNT(1);
      T3_0 = T17;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
    T7_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
    dF4 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
    T19 = primitive_instanceQ(dF4,&KLhashed_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
      T10 = dF4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T22 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T20 = REPEATED_D_SLOT_VALUE_TAGGED(T10, 7, T22);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T21 = T20;
      MV_SET_ELT(0, T20);
      MV_SET_COUNT(1);
      T6_0 = T21;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
      dF5 = dF4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T25 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T23 = REPEATED_D_SLOT_VALUE_TAGGED(dF5, 6, T25);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:986
      T24 = T23;
      MV_SET_ELT(0, T23);
      MV_SET_COUNT(1);
      T6_0 = T24;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:985
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:983
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kckd_ref_setterVKgI (D value_, D d_, D index_) {
  D T3;
  D dF4;
  D T5;
  D T6;
  D dF7;
  D T8;
  D dF9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:990
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
  T16 = primitive_instanceQ(d_,&KLlinear_class_keyed_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
    T13 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
    T17 = primitive_instanceQ(T13,&KLlinear_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
      T14 = T13;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T18 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, T14, 7, T18);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T3 = value_;
      MV_SET_ELT(0, value_);
      MV_SET_COUNT(1);
      T6 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
      dF4 = T13;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T19 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, dF4, 6, T19);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T5 = value_;
      MV_SET_ELT(0, value_);
      MV_SET_COUNT(1);
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
    T12 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
    dF7 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
    T20 = primitive_instanceQ(dF7,&KLhashed_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:211
      T15 = dF7;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T21 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, T15, 7, T21);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T8 = value_;
      MV_SET_ELT(0, value_);
      MV_SET_COUNT(1);
      T11 = T8;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
      dF9 = dF7;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T22 = primitive_cast_integer_as_raw(index_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, dF9, 6, T22);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:993
      T10 = value_;
      MV_SET_ELT(0, value_);
      MV_SET_COUNT(1);
      T11 = T10;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:992
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:990
  return(T12);
}

D Kgrounded_class_keyed_discriminator_defaultVKgI (D d_) {
  D Utmp_;
  D T3;
  D T4_0;
  D dF5;
  D dF6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18_0;
  _KLsimple_object_vectorGVKd_1 T19 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T20_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:689
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
  T10 = primitive_instanceQ(d_,&KLmonomorphic_by_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
  if (T10 != &KPfalseVKi) {
    Utmp_ = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
    T11 = primitive_instanceQ(d_,&KLlinear_by_class_discriminatorGVKg);
    Utmp_ = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
  if (Utmp_ != &KPfalseVKi) {
    T3 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
    T12 = primitive_instanceQ(d_,&KLhashed_by_class_discriminatorGVKg);
    T3 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:694
    T4_0 = Dabsent_engine_nodeVKg;
    T9_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
    T13 = primitive_instanceQ(d_,&KLlinear_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:696
      dF5 = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:697
      T14 = SLOT_VALUE(dF5, 5);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:697
      T15_0 = T14;
      T8_0 = T15_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
      T16 = primitive_instanceQ(d_,&KLhashed_by_singleton_class_discriminatorGVKg);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:699
        dF6 = d_;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:700
        T17 = SLOT_VALUE(dF6, 5);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:700
        T18_0 = T17;
        T7_0 = T18_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
        T19.vector_element_[0] = d_;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
        T20_0 = KerrorVKdMM1I(&K101, &T19);
        T7_0 = T20_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:692
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:689
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kgrounded_class_keyed_discriminator_default_setterYdispatch_engine_internalVdylanI (D value_, D d_) {
  D dF2;
  D T3_0;
  D dF4;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:704
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
  T8 = primitive_instanceQ(d_,&KLlinear_by_singleton_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:709
    dF2 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:710
    SLOT_VALUE_SETTER(value_, dF2, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:710
    T3_0 = value_;
    T7_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
    T9 = primitive_instanceQ(d_,&KLhashed_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:712
      dF4 = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:713
      SLOT_VALUE_SETTER(value_, dF4, 5);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:713
      T5_0 = value_;
      T6_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
      T10.vector_element_[0] = d_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
      T11_0 = KerrorVKdMM1I(&K101, &T10);
      T6_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:707
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:704
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdispatch_startYdispatch_engine_internalVdylanI (D dispatch_starter_) {
  D gf_;
  D e_;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  D T10_0;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_1 T13 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
  T8 = primitive_instanceQ(dispatch_starter_,&KLgeneric_functionGVKd);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:30
    gf_ = dispatch_starter_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:31
    T9 = SLOT_VALUE_INITD(gf_, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:31
    T10_0 = T9;
    T7_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
    T11 = primitive_instanceQ(dispatch_starter_,&KLcache_header_engine_nodeGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:33
      e_ = dispatch_starter_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:34
      T12 = SLOT_VALUE_INITD(e_, 3);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:34
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:34
        T3_0 = T12;
        T5_0 = T3_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:34
        T4_0 = Dabsent_engine_nodeVKg;
        T5_0 = T4_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:34
      T6_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
      T13.vector_element_[0] = dispatch_starter_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
      T14_0 = KerrorVKdMM1I(&K101, &T13);
      T6_0 = T14_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:27
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdispatch_start_setterYdispatch_engine_internalVdylanI (D v_, D dispatch_starter_) {
  D gf_;
  D T3_0;
  D e_;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_1 T10 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:39
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
  T8 = primitive_instanceQ(dispatch_starter_,&KLgeneric_functionGVKd);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:42
    gf_ = dispatch_starter_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:43
    SLOT_VALUE_SETTER(v_, gf_, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:43
    T3_0 = v_;
    T7_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
    T9 = primitive_instanceQ(dispatch_starter_,&KLcache_header_engine_nodeGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:45
      e_ = dispatch_starter_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:46
      SLOT_VALUE_SETTER(v_, e_, 3);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:46
      T5_0 = v_;
      T6_0 = T5_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
      T10.vector_element_[0] = dispatch_starter_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
      T11_0 = KerrorVKdMM1I(&K101, &T10);
      T6_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:40
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:39
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI (D hd_, D tl_) {
  D T3;
  D T4;
  D T5;
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
  D T16;
  D T17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28_0;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D stuff_;
  D T39T, T39;
  D xF40;
  D T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46_0;
  D T47;
  D T48_0;
  D T49;
  D T50;
  D T51;
  D T52;
  _KLsimple_object_vectorGVKd_1 T53 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T54;
  D res_;
  D T56;
  D T57;
  D T58;
  D T59;
  D T60;
  D T61;
  D T62_0;
  D T63;
  D T64;
  D T65;
  D T66;
  _KLsimple_object_vectorGVKd_2 T67 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T68;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:272
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:275
  T6 = Tdylan_library_initializedQTYthreads_primitivesVdylan;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:275
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:275
    T7_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:275
    T8 = T7_0;
    T9 = T8;
  } else {
    T9 = &KPtrueVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:275
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T13 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T15 = primitive_idQ(T14,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T16 = primitive_not(T15);
    T12 = T16;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T17 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T18_0 = KmemberQVKdMM3I(&KJlock_, T17, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T19 = T18_0;
    T20 = T19;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T21 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    CALL1(T21, &Kanonymous_of_begin_locking_multiple_objectsF90);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T10 = primitive_wait_for_simple_lock(Dobject_lock_notification_lockYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T23 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T25 = primitive_idQ(T24,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T26 = primitive_not(T25);
    T22 = T26;
  } else {
    T22 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T27 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T28_0 = KmemberQVKdMM3I(&KJlock_, T27, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T29 = T28_0;
    T30 = T29;
  } else {
    T30 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T31 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_begin_locking_multiple_objectsF91, 1, T10);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    CALL1(T31, T11);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T33 = primitive_idQ(T10,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T33 != &KPfalseVKi) {
    T37 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T34 = primitive_idQ(T10,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    if (T34 != &KPfalseVKi) {
      T36 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dobject_lock_notification_lockYdispatch_engine_internalVdylan, T10);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T35 = T32_0;
      T36 = T35;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T37 = T36;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    ENTER_UNWIND_FRAME(T3);
    if (!nlx_setjmp(FRAME_DEST(T3))) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:286
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:278
        stuff_ = Kmultiple_objects_locked_pYdispatch_engine_internalVdylanI(hd_, T9);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:279
        if (stuff_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:284
          T51 = primitive_idQ(stuff_,&KPtrueVKi);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:279
          if (T51 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:285
            Kwait_forYthreadsVdylanMM4I(Dobject_lock_notificationYdispatch_engine_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:286
            goto L0;
            T42 = T52;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:288
            T53.vector_element_[0] = stuff_;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:288
            T54 = KerrorVKdMM1I(&K86, &T53);
            T42 = T54;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:279
          T43 = T42;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
          T39T = hd_;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
            T39 = T39T;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
            T44 = primitive_idQ(T39,&KPempty_listVKi);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
            if (T44 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              T45 = SLOT_VALUE_INITD(T39, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              xF40 = T45;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              SLOT_VALUE_SETTER(T9, xF40, 1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              T47 = SLOT_VALUE_INITD(T39, 1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              T48_0 = T47;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              T46_0 = T48_0;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              T49 = T46_0;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
              T39T = T49;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:280
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:281
          T41 = Tobject_lock_dataTYdispatch_engine_internalVdylan;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:281
          SLOT_VALUE_SETTER(T41, tl_, 1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:282
          Tobject_lock_dataTYdispatch_engine_internalVdylan = hd_;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:283
          T50 = KreleaseYthreadsVdylanMM4I(Dobject_lock_notificationYdispatch_engine_internalVdylan, &KPempty_vectorVKi);
          T43 = T50;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:279
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:286
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      FALL_THROUGH_UNWIND(T43);
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T57 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    if (T57 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T58 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T59 = primitive_idQ(T58,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T60 = primitive_not(T59);
      T56 = T60;
    } else {
      T56 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    if (T56 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T61 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T62_0 = KmemberQVKdMM3I(&KJlock_, T61, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T63 = T62_0;
      T64 = T63;
    } else {
      T64 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    if (T64 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      T65 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      CALL1(T65, &Kanonymous_of_begin_locking_multiple_objectsF89);
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    res_ = primitive_release_simple_lock(Dobject_lock_notification_lockYdispatch_engine_internalVdylan);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T66 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    if (T66 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
      Klock_release_result_errorYthreads_internalVdylanMM0I(Dobject_lock_notification_lockYdispatch_engine_internalVdylan, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    CONTINUE_UNWIND();
    T5 = T43;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T67.vector_element_[0] = &KJsynchronization_;
    T67.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T67);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T68 = KsignalVKdMM0I(T4, &KPempty_vectorVKi);
    T5 = T68;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:272
  return(T5);
}

D Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI (D hd_, D tl_) {
  volatile D T2;
  volatile D donePexit_5_;
  volatile D xF4T, xF4;
  volatile D T5;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10;
  volatile D T11;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D T15_0;
  volatile D T16;
  volatile D T17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile D T23;
  volatile D T24;
  volatile D T25_0;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D T29_0;
  volatile D T30;
  volatile D T31;
  volatile D T32;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D res_;
  volatile D T39;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile D T43;
  volatile D T44;
  volatile D T45_0;
  volatile D T46;
  volatile D T47;
  volatile D T48;
  volatile D T49;
  volatile _KLsimple_object_vectorGVKd_2 T50 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T51;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:326
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T10 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T11 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T12 = primitive_idQ(T11,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T13 = primitive_not(T12);
    T9 = T13;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T15_0 = KmemberQVKdMM3I(&KJlock_, T14, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T16 = T15_0;
    T17 = T16;
  } else {
    T17 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T18 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    CALL1(T18, &Kanonymous_of_end_locking_multiple_objectsF77);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T7 = primitive_wait_for_simple_lock(Dobject_lock_notification_lockYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T20 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T21 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T22 = primitive_idQ(T21,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T23 = primitive_not(T22);
    T19 = T23;
  } else {
    T19 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T25_0 = KmemberQVKdMM3I(&KJlock_, T24, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T26 = T25_0;
    T27 = T26;
  } else {
    T27 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T28 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T8 = MAKE_CLOSURE_INITD(&Kanonymous_of_end_locking_multiple_objectsF79, 1, T7);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    CALL1(T28, T8);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T30 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T30 != &KPfalseVKi) {
    T34 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T31 = primitive_idQ(T7,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    if (T31 != &KPfalseVKi) {
      T33 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T29_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dobject_lock_notification_lockYdispatch_engine_internalVdylan, T7);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T32 = T29_0;
      T33 = T32;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T34 = T33;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:330
      ENTER_EXIT_FRAME(donePexit_5_);
      if (nlx_setjmp(FRAME_DEST(donePexit_5_))) {
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:331
        xF4T = hd_;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:331
          xF4 = xF4T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:332
          Kend_locking_object_cellYdispatch_engine_internalVdylanI(xF4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:333
          T35 = primitive_idQ(xF4,tl_);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:333
          if (T35 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:330
            T36 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:330
            NLX(donePexit_5_, T36);
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:333
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:331
          T37 = SLOT_VALUE_INITD(xF4, 1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:331
          T5 = T37;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:331
          xF4T = T5;
          goto L0;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:331
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:330
        /* invalidate donePexit_5_ */
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:336
      KreleaseYthreadsVdylanMM4I(Dobject_lock_notificationYdispatch_engine_internalVdylan, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      FALL_THROUGH_UNWIND(&KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T40 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    if (T40 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T41 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T42 = primitive_idQ(T41,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T43 = primitive_not(T42);
      T39 = T43;
    } else {
      T39 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    if (T39 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T44 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T45_0 = KmemberQVKdMM3I(&KJlock_, T44, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T46 = T45_0;
      T47 = T46;
    } else {
      T47 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    if (T47 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      T48 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      CALL1(T48, &Kanonymous_of_end_locking_multiple_objectsF74);
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    res_ = primitive_release_simple_lock(Dobject_lock_notification_lockYdispatch_engine_internalVdylan);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T49 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    if (T49 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
      Klock_release_result_errorYthreads_internalVdylanMM0I(Dobject_lock_notification_lockYdispatch_engine_internalVdylan, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    CONTINUE_UNWIND();
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T50.vector_element_[0] = &KJsynchronization_;
    T50.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T6 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T50);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    KsignalVKdMM0I(T6, &KPempty_vectorVKi);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:338
  T51 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:326
  MV_SET_COUNT(0);
  return(T51);
}

D Kbletch_stackVKgI (D l_) {
  D T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:151
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:152
  T4 = primitive_idQ(l_,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:152
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:153
    T1 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T3 = T1;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:155
    T5 = SLOT_VALUE_INITD(l_, 1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:155
    Kbletch_stackVKgI(T5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:156
    T6 = SLOT_VALUE_INITD(l_, 0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:156
    T2 = CALL1(&KbletchVKg, T6);
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:151
  return(T3);
}

D KmakeVKdMM1I (D c_, D Urest_, D meth_, D data_, D keys_) {
  D methF6;
  D T7_0;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:472
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:472
  primitive_type_check(meth_, &KLmethodGVKd);
  methF6 = meth_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:475
  T7_0 = Kmake_single_method_engine_nodeVKgI(methF6, &KPempty_vectorVKi, data_, keys_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:472
  T8_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:472
  MV_SET_COUNT(1);
  return(T8_0);
}

static D Kanonymous_of_end_locking_multiple_objectsF79I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T5.vector_element_[0] = &K80;
  T5.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_end_locking_multiple_objectsF77I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T5.vector_element_[0] = &K78;
  T5.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kend_locking_object_cellYdispatch_engine_internalVdylanI (D cell_) {
  D T1;
  D first_l_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D nxt_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D prevF19T, prevF19;
  D lF20T, lF20;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:295
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:296
  T1 = Tobject_lock_dataTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:297
  T7 = SLOT_VALUE_INITD(T1, 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:297
  first_l_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:298
  T8 = primitive_idQ(cell_,T1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:298
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:299
    T9 = SLOT_VALUE_INITD(T1, 1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:299
    T3 = T9;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:299
    T4 = Tobject_lock_dataTYdispatch_engine_internalVdylan = T3;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:299
    T5 = T4;
    MV_SET_ELT(0, T4);
    MV_SET_COUNT(1);
    T6 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:308
    prevF19T = T1;
    lF20T = first_l_;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:308
      prevF19 = prevF19T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:308
      lF20 = lF20T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:302
      T15 = primitive_idQ(lF20,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:302
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:303
        T10 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T14 = T10;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:305
        T16 = SLOT_VALUE_INITD(lF20, 1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:305
        nxt_ = T16;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:306
        T17 = primitive_idQ(lF20,cell_);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:306
        if (T17 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:307
          SLOT_VALUE_SETTER(nxt_, prevF19, 1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:307
          T12 = nxt_;
          MV_SET_ELT(0, nxt_);
          MV_SET_COUNT(1);
          T13 = T12;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:308
          prevF19T = lF20;
          lF20T = nxt_;
          goto L0;
          T13 = T18;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:306
        T14 = T13;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:302
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:308
    T6 = T14;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:298
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:295
  return(T6);
}

static D Kanonymous_of_end_locking_multiple_objectsF74I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T5.vector_element_[0] = &K75;
  T5.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:329
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_begin_locking_multiple_objectsF91I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T5.vector_element_[0] = &K80;
  T5.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_begin_locking_multiple_objectsF90I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T5.vector_element_[0] = &K78;
  T5.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kmultiple_objects_locked_pYdispatch_engine_internalVdylanI (D cells_, D tokin_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8;
  D cell_;
  D nxt_;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D this_;
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
  D lF31T, lF31;
  D T32;
  D T33;
  D cellsF34;
  D recursive_losersF35;
  D T36;
  D cellsF37T, cellsF37;
  D recursive_losersF38T, recursive_losersF38;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:213
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:214
  T2 = Tobject_lock_dataTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:214
  T5 = primitive_idQ(T2,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:214
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:215
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:226
    cellsF37T = cells_;
    recursive_losersF38T = &KPempty_listVKi;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:231
      cellsF37 = cellsF37T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:231
      recursive_losersF38 = recursive_losersF38T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:226
      cellsF34 = cellsF37;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:226
      recursive_losersF35 = recursive_losersF38;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:218
      T13 = primitive_idQ(cellsF34,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:218
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:219
        T14 = primitive_idQ(recursive_losersF35,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:219
        if (T14 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:219
          T6 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T8 = T6;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:219
          T7 = recursive_losersF35;
          MV_SET_ELT(0, recursive_losersF35);
          MV_SET_COUNT(1);
          T8 = T7;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:219
        T12 = T8;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:221
        T15 = SLOT_VALUE_INITD(cellsF34, 0);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:221
        cell_ = T15;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:222
        T16 = SLOT_VALUE_INITD(cell_, 0);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:223
        T17 = SLOT_VALUE_INITD(cellsF34, 1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:223
        nxt_ = T17;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:240
        T11 = Tobject_lock_dataTYdispatch_engine_internalVdylan;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:236
        lF31T = T11;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:236
          lF31 = lF31T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:236
          T32 = lF31;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:225
          T25 = primitive_idQ(T32,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:225
          if (T25 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:226
            cellsF37T = nxt_;
            recursive_losersF38T = recursive_losersF38;
            goto L0;
            T24 = T33;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:228
            T26 = SLOT_VALUE_INITD(T32, 0);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:228
            this_ = T26;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:229
            T19 = primitive_idQ(T16,this_);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:229
            if (T19 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:230
              T27 = SLOT_VALUE_INITD(this_, 1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:230
              T20 = primitive_idQ(tokin_,T27);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:230
              if (T20 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:231
                T28 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:231
                SLOT_VALUE_SETTER(T16, T28, 0);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:231
                SLOT_VALUE_SETTER(recursive_losersF35, T28, 1);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:231
                cellsF37T = nxt_;
                recursive_losersF38T = T28;
                goto L0;
                T22 = T36;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:233
                T21 = &KPtrueVKi;
                MV_SET_ELT(0, &KPtrueVKi);
                MV_SET_COUNT(1);
                T22 = T21;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:230
              T23 = T22;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:236
              T29 = SLOT_VALUE_INITD(T32, 1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:236
              lF31T = T29;
              goto L1;
              T23 = T30;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:229
            T24 = T23;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:225
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:236
        T12 = T24;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:218
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:226
    T4_0 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:214
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:213
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kanonymous_of_begin_locking_multiple_objectsF89I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T5.vector_element_[0] = &K75;
  T5.vector_element_[1] = Dobject_lock_notification_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:276
  MV_SET_COUNT(1);
  return(T6_0);
}

D KbletchVKgMM0I (D x_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:141
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:142
  CONGRUENT_CALL_PROLOG(&KsignalVKd, 2);
  T2 = CONGRUENT_CALL2(x_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:141
  MV_SET_COUNT(0);
  return(T2);
}

D KbletchVKgMM1I (D x_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:146
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:147
  CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
  T2 = CONGRUENT_CALL2(x_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:146
  MV_SET_COUNT(0);
  return(T2);
}

D Kgrounded_linear_class_key_lookupYdispatch_engine_internalVdylanI (D key_, D d_, D default_) {
  D dF3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  DWORD iF16T, iF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  DWORD T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  DWORD iF30T, iF30;
  D T31;
  D T32;
  D T33;
  D T34;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:829
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:831
  T6 = primitive_instanceQ(d_,&KLlinear_by_singleton_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:831
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:975
    T5 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    T17 = SLOT_VALUE_INITD(T5, 6);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    T11 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    iF16T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      iF16 = iF16T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      T12 = primitive_machine_word_equalQ(iF16,T11);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T7 = default_;
        MV_SET_ELT(0, default_);
        MV_SET_COUNT(1);
        T10 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T18 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, iF16);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T8 = primitive_idQ(T18,key_);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        if (T8 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T13 = primitive_machine_word_add_signal_overflow(iF16,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T19 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, T13);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T20 = T19;
          MV_SET_ELT(0, T19);
          MV_SET_COUNT(1);
          T9 = T20;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T14 = primitive_machine_word_add_signal_overflow(iF16,8);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          iF16T = T14;
          goto L0;
          T9 = T15;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T10 = T9;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    T4 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:831
    dF3 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    T31 = SLOT_VALUE_INITD(dF3, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    T25 = primitive_cast_integer_as_raw(T31);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    iF30T = 1;
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      iF30 = iF30T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      T26 = primitive_machine_word_equalQ(iF30,T25);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      if (T26 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T21 = default_;
        MV_SET_ELT(0, default_);
        MV_SET_COUNT(1);
        T24 = T21;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T32 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, iF30);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T22 = primitive_idQ(T32,key_);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        if (T22 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T27 = primitive_machine_word_add_signal_overflow(iF30,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T33 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, T27);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T34 = T33;
          MV_SET_ELT(0, T33);
          MV_SET_COUNT(1);
          T23 = T34;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          T28 = primitive_machine_word_add_signal_overflow(iF30,8);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
          iF30T = T28;
          goto L1;
          T23 = T29;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
        T24 = T23;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:832
    T4 = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:831
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:829
  return(T4);
}

D Kgrounded_hashed_class_key_lookupYdispatch_engine_internalVdylanI (D key_, D d_, D default_) {
  D dF3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;
  D stepF11;
  D maskF12;
  D T13_0;
  D T14_0;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19_0;
  D T19_1;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D shiftF25;
  D T26;
  D T27;
  D T28;
  DWORD mxF29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  D T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  D T47;
  D T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  D T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  D T57;
  D shiftF58;
  D T59;
  D T60;
  D T61;
  DWORD mxF62;
  DWORD T63;
  DWORD T64;
  D T65;
  D T66;
  DWORD T67;
  DWORD T68;
  D T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  DSINT T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  D T81;
  D T82;
  DWORD T83;
  DWORD T84;
  DWORD T85;
  D T86;
  DWORD T87;
  DWORD T88;
  DWORD T89;
  DWORD T90;
  D shiftF91;
  D T92;
  D T93;
  D T94;
  DWORD mxF95;
  DWORD T96;
  DWORD T97;
  D T98;
  D T99;
  DWORD T100;
  D T101;
  DWORD T102;
  DWORD T103;
  DWORD T104;
  DWORD T105;
  DWORD T106;
  DWORD T107;
  DWORD T108;
  DWORD T109;
  DWORD T110;
  DWORD T111;
  D T112;
  D T113_0;
  D T113_1;
  D T114;
  D T115;
  D T116;
  D T117;
  D T118;
  D T119;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  DWORD T123;
  DWORD T124;
  DWORD T125;
  D T126;
  DWORD iF127T, iF127;
  D T128;
  DWORD T129;
  DWORD T130;
  D T131;
  D T132;
  D T133;
  D T134;
  D T135;
  D T136;
  D T137;
  D T138;
  D T139;
  D T140_0;
  D stepF141;
  D maskF142;
  D T143_0;
  D T144_0;
  DWORD T145;
  DWORD T146;
  DWORD T147;
  D T148;
  D T149_0;
  D T149_1;
  D T150;
  DWORD T151;
  DWORD T152;
  DWORD T153;
  DWORD T154;
  D shiftF155;
  D T156;
  D T157;
  D T158;
  DWORD mxF159;
  DWORD T160;
  DWORD T161;
  DWORD T162;
  D T163;
  DWORD T164;
  DWORD T165;
  DWORD T166;
  DWORD T167;
  DWORD T168;
  DWORD T169;
  DWORD T170;
  DWORD T171;
  DWORD T172;
  D T173;
  DWORD T174;
  DWORD T175;
  DWORD T176;
  D T177;
  D T178;
  DWORD T179;
  DWORD T180;
  DWORD T181;
  D T182;
  DWORD T183;
  DWORD T184;
  DWORD T185;
  DWORD T186;
  D T187;
  D shiftF188;
  D T189;
  D T190;
  D T191;
  DWORD mxF192;
  DWORD T193;
  DWORD T194;
  D T195;
  D T196;
  DWORD T197;
  DWORD T198;
  D T199;
  DWORD T200;
  DWORD T201;
  DWORD T202;
  DWORD T203;
  DWORD T204;
  DWORD T205;
  DWORD T206;
  DSINT T207;
  DWORD T208;
  DWORD T209;
  DWORD T210;
  D T211;
  D T212;
  DWORD T213;
  DWORD T214;
  DWORD T215;
  D T216;
  DWORD T217;
  DWORD T218;
  DWORD T219;
  DWORD T220;
  D shiftF221;
  D T222;
  D T223;
  D T224;
  DWORD mxF225;
  DWORD T226;
  DWORD T227;
  D T228;
  D T229;
  DWORD T230;
  D T231;
  DWORD T232;
  DWORD T233;
  DWORD T234;
  DWORD T235;
  DWORD T236;
  DWORD T237;
  DWORD T238;
  DWORD T239;
  DWORD T240;
  DWORD T241;
  D T242;
  D T243_0;
  D T243_1;
  D T244;
  D T245;
  D T246;
  D T247;
  D T248;
  D T249;
  DWORD T250;
  DWORD T251;
  DWORD T252;
  DWORD T253;
  DWORD T254;
  DWORD T255;
  D T256;
  DWORD iF257T, iF257;
  D T258;
  DWORD T259;
  DWORD T260;
  D T261;
  D T262;
  D T263;
  D T264;
  D T265;
  D T266;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:943
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:945
  T6 = primitive_instanceQ(d_,&KLhashed_by_singleton_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:945
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:978
    T5 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T128 = SLOT_VALUE_INITD(T5, 6);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T129 = primitive_cast_integer_as_raw(T128);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T130 = primitive_machine_word_subtract_signal_overflow(T129,8);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T15 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T16 = primitive_machine_word_logand(T15,T130);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T131 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, T16);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T7 = primitive_idQ(T131,key_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T17 = primitive_machine_word_add_signal_overflow(T16,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T132 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, T17);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T133 = T132;
      MV_SET_ELT(0, T132);
      MV_SET_COUNT(1);
      T14_0 = T133;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T8 = Dckd_emptyVKg;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T9 = primitive_idQ(T131,T8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      if (T9 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T10_0 = default_;
        T13_0 = T10_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T20 = SLOT_VALUE_INITD(T5, 0);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T21 = primitive_cast_integer_as_raw(T20);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T22 = primitive_machine_word_shift_right(T21,23);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T23 = primitive_machine_word_logand(T22,-4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T24 = primitive_machine_word_logior(T23,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        shiftF25 = (D) 21;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        mxF29 = 4;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T28 = shiftF25;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T32 = primitive_cast_integer_as_raw(T28);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T33 = primitive_machine_word_equalQ(T32,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        if (T33 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          shiftF25 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T27 = shiftF25;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T31 = mxF29;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T36 = primitive_cast_integer_as_raw(T27);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T35 = primitive_machine_word_shift_right(T36,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T34 = primitive_machine_word_shift_left_signal_overflow(T31,T35);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          mxF29 = T34;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T26 = shiftF25;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T30 = mxF29;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T39 = primitive_cast_integer_as_raw(T26);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T38 = primitive_machine_word_shift_right(T39,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T37 = primitive_machine_word_shift_left_signal_overflow(T30,T38);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T40 = primitive_machine_word_logior(T37,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T41 = primitive_machine_word_subtract_signal_overflow(T40,4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T42 = primitive_machine_word_logand(T24,T41);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T43 = primitive_cast_raw_as_integer(T42);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T18 = KPsecond_hash_valuesVKgI();
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T44 = primitive_machine_word_logxor(T42,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T45 = primitive_machine_word_negative_signal_overflow(T44);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T46 = primitive_machine_word_logior(T45,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T47 = primitive_cast_raw_as_integer(T46);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T48 = primitive_machine_word_less_thanQ(T46,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        if (T48 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T49 = primitive_machine_word_logxor(T46,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T50 = primitive_machine_word_negative_signal_overflow(T49);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T51 = primitive_machine_word_logior(T50,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T52 = primitive_machine_word_less_thanQ(T51,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T52 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T54 = primitive_machine_word_shift_right(T50,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T53 = primitive_machine_word_shift_right(T15,T54);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T55 = primitive_machine_word_logand(T53,-4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T56 = primitive_machine_word_logior(T55,1);
            T78 = T56;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T57 = primitive_machine_word_less_thanQ(T15,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            if (T57 != &KPfalseVKi) {
              T77 = -3;
            } else {
              T77 = 1;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T78 = T77;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T79 = T78;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T66 = primitive_machine_word_less_thanQ(T46,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T66 != &KPfalseVKi) {
            T65 = T47;
          } else {
            T65 = (D) 257;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          shiftF58 = T65;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T67 = primitive_machine_word_logxor(T15,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          mxF62 = T67;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T61 = shiftF58;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T68 = primitive_cast_integer_as_raw(T61);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T69 = primitive_machine_word_equalQ(T68,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T69 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            shiftF58 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T60 = shiftF58;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T64 = mxF62;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T72 = primitive_cast_integer_as_raw(T60);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T71 = primitive_machine_word_shift_right(T72,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T70 = primitive_machine_word_shift_left_signal_overflow(T64,T71);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            mxF62 = T70;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T59 = shiftF58;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T63 = mxF62;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T75 = primitive_cast_integer_as_raw(T59);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T74 = primitive_machine_word_shift_right(T75,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T73 = primitive_machine_word_shift_left_signal_overflow(T63,T74);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T76 = primitive_machine_word_logior(T73,1);
          T79 = T76;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T80 = primitive_machine_word_logand(T79,61);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T81 = REPEATED_D_SLOT_VALUE_TAGGED(T18, 1, T80);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T82 = primitive_machine_word_less_thanQ(T42,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        if (T82 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T83 = primitive_machine_word_logxor(T42,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T84 = primitive_machine_word_negative_signal_overflow(T83);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T85 = primitive_machine_word_logior(T84,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T86 = primitive_machine_word_less_thanQ(T85,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T86 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T88 = primitive_machine_word_shift_right(T84,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T87 = primitive_machine_word_shift_right(5,T88);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T89 = primitive_machine_word_logand(T87,-4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T90 = primitive_machine_word_logior(T89,1);
            T109 = T90;
          } else {
            T109 = 1;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T110 = T109;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T99 = primitive_machine_word_less_thanQ(T42,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T99 != &KPfalseVKi) {
            T98 = T43;
          } else {
            T98 = (D) 257;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          shiftF91 = T98;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          mxF95 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T94 = shiftF91;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T100 = primitive_cast_integer_as_raw(T94);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T101 = primitive_machine_word_equalQ(T100,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T101 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            shiftF91 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T93 = shiftF91;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T97 = mxF95;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T104 = primitive_cast_integer_as_raw(T93);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T103 = primitive_machine_word_shift_right(T104,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T102 = primitive_machine_word_shift_left_signal_overflow(T97,T103);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            mxF95 = T102;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T92 = shiftF91;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T96 = mxF95;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T107 = primitive_cast_integer_as_raw(T92);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T106 = primitive_machine_word_shift_right(T107,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T105 = primitive_machine_word_shift_left_signal_overflow(T96,T106);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T108 = primitive_machine_word_logior(T105,1);
          T110 = T108;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T111 = primitive_machine_word_subtract_signal_overflow(T110,8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T112 = primitive_cast_raw_as_integer(T111);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T113_0 = T81;
        T113_1 = T112;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T19_0 = T113_0;
        T19_1 = T113_1;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        stepF11 = T19_0;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T120 = primitive_cast_integer_as_raw(stepF11);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T121 = primitive_machine_word_logxor(T120,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        maskF12 = T19_1;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T123 = primitive_cast_integer_as_raw(maskF12);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        iF127T = T16;
      L0: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          iF127 = iF127T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T122 = primitive_machine_word_add_signal_overflow(iF127,T121);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T124 = primitive_machine_word_logand(T122,T123);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T134 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, T124);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T114 = primitive_idQ(T134,key_);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T114 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T125 = primitive_machine_word_add_signal_overflow(T124,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T135 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, T125);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T136 = T135;
            MV_SET_ELT(0, T135);
            MV_SET_COUNT(1);
            T119 = T136;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T115 = Dckd_emptyVKg;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T116 = primitive_idQ(T134,T115);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            if (T116 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
              T117 = default_;
              MV_SET_ELT(0, default_);
              MV_SET_COUNT(1);
              T118 = T117;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
              iF127T = T124;
              goto L0;
              T118 = T126;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T119 = T118;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T13_0 = T119;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T14_0 = T13_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T4 = T14_0;
    MV_SET_COUNT(1);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:945
    dF3 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T258 = SLOT_VALUE_INITD(dF3, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T259 = primitive_cast_integer_as_raw(T258);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T260 = primitive_machine_word_subtract_signal_overflow(T259,8);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T145 = primitive_cast_integer_as_raw(key_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T146 = primitive_machine_word_logand(T145,T260);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T261 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, T146);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T137 = primitive_idQ(T261,key_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    if (T137 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T147 = primitive_machine_word_add_signal_overflow(T146,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T262 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, T147);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T263 = T262;
      MV_SET_ELT(0, T262);
      MV_SET_COUNT(1);
      T144_0 = T263;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T138 = Dckd_emptyVKg;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T139 = primitive_idQ(T261,T138);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      if (T139 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T140_0 = default_;
        T143_0 = T140_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T150 = SLOT_VALUE_INITD(dF3, 0);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T151 = primitive_cast_integer_as_raw(T150);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T152 = primitive_machine_word_shift_right(T151,23);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T153 = primitive_machine_word_logand(T152,-4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T154 = primitive_machine_word_logior(T153,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        shiftF155 = (D) 21;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        mxF159 = 4;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T158 = shiftF155;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T162 = primitive_cast_integer_as_raw(T158);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T163 = primitive_machine_word_equalQ(T162,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        if (T163 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          shiftF155 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T157 = shiftF155;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T161 = mxF159;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T166 = primitive_cast_integer_as_raw(T157);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T165 = primitive_machine_word_shift_right(T166,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T164 = primitive_machine_word_shift_left_signal_overflow(T161,T165);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          mxF159 = T164;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T156 = shiftF155;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T160 = mxF159;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T169 = primitive_cast_integer_as_raw(T156);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T168 = primitive_machine_word_shift_right(T169,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T167 = primitive_machine_word_shift_left_signal_overflow(T160,T168);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T170 = primitive_machine_word_logior(T167,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T171 = primitive_machine_word_subtract_signal_overflow(T170,4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T172 = primitive_machine_word_logand(T154,T171);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T173 = primitive_cast_raw_as_integer(T172);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T148 = KPsecond_hash_valuesVKgI();
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T174 = primitive_machine_word_logxor(T172,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T175 = primitive_machine_word_negative_signal_overflow(T174);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T176 = primitive_machine_word_logior(T175,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T177 = primitive_cast_raw_as_integer(T176);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T178 = primitive_machine_word_less_thanQ(T176,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        if (T178 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T179 = primitive_machine_word_logxor(T176,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T180 = primitive_machine_word_negative_signal_overflow(T179);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T181 = primitive_machine_word_logior(T180,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T182 = primitive_machine_word_less_thanQ(T181,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T182 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T184 = primitive_machine_word_shift_right(T180,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T183 = primitive_machine_word_shift_right(T145,T184);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T185 = primitive_machine_word_logand(T183,-4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T186 = primitive_machine_word_logior(T185,1);
            T208 = T186;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T187 = primitive_machine_word_less_thanQ(T145,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            if (T187 != &KPfalseVKi) {
              T207 = -3;
            } else {
              T207 = 1;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T208 = T207;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T209 = T208;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T196 = primitive_machine_word_less_thanQ(T176,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T196 != &KPfalseVKi) {
            T195 = T177;
          } else {
            T195 = (D) 257;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          shiftF188 = T195;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T197 = primitive_machine_word_logxor(T145,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          mxF192 = T197;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T191 = shiftF188;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T198 = primitive_cast_integer_as_raw(T191);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T199 = primitive_machine_word_equalQ(T198,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T199 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            shiftF188 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T190 = shiftF188;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T194 = mxF192;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T202 = primitive_cast_integer_as_raw(T190);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T201 = primitive_machine_word_shift_right(T202,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T200 = primitive_machine_word_shift_left_signal_overflow(T194,T201);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            mxF192 = T200;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T189 = shiftF188;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T193 = mxF192;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T205 = primitive_cast_integer_as_raw(T189);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T204 = primitive_machine_word_shift_right(T205,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T203 = primitive_machine_word_shift_left_signal_overflow(T193,T204);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T206 = primitive_machine_word_logior(T203,1);
          T209 = T206;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T210 = primitive_machine_word_logand(T209,61);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T211 = REPEATED_D_SLOT_VALUE_TAGGED(T148, 1, T210);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T212 = primitive_machine_word_less_thanQ(T172,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        if (T212 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T213 = primitive_machine_word_logxor(T172,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T214 = primitive_machine_word_negative_signal_overflow(T213);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T215 = primitive_machine_word_logior(T214,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T216 = primitive_machine_word_less_thanQ(T215,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T216 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T218 = primitive_machine_word_shift_right(T214,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T217 = primitive_machine_word_shift_right(5,T218);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T219 = primitive_machine_word_logand(T217,-4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T220 = primitive_machine_word_logior(T219,1);
            T239 = T220;
          } else {
            T239 = 1;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T240 = T239;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T229 = primitive_machine_word_less_thanQ(T172,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T229 != &KPfalseVKi) {
            T228 = T173;
          } else {
            T228 = (D) 257;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          shiftF221 = T228;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          mxF225 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T224 = shiftF221;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T230 = primitive_cast_integer_as_raw(T224);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T231 = primitive_machine_word_equalQ(T230,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T231 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            shiftF221 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T223 = shiftF221;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T227 = mxF225;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T234 = primitive_cast_integer_as_raw(T223);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T233 = primitive_machine_word_shift_right(T234,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T232 = primitive_machine_word_shift_left_signal_overflow(T227,T233);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            mxF225 = T232;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T222 = shiftF221;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T226 = mxF225;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T237 = primitive_cast_integer_as_raw(T222);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T236 = primitive_machine_word_shift_right(T237,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T235 = primitive_machine_word_shift_left_signal_overflow(T226,T236);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T238 = primitive_machine_word_logior(T235,1);
          T240 = T238;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T241 = primitive_machine_word_subtract_signal_overflow(T240,8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T242 = primitive_cast_raw_as_integer(T241);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T243_0 = T211;
        T243_1 = T242;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T149_0 = T243_0;
        T149_1 = T243_1;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        stepF141 = T149_0;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T250 = primitive_cast_integer_as_raw(stepF141);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T251 = primitive_machine_word_logxor(T250,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        maskF142 = T149_1;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T253 = primitive_cast_integer_as_raw(maskF142);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        iF257T = T146;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          iF257 = iF257T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T252 = primitive_machine_word_add_signal_overflow(iF257,T251);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T254 = primitive_machine_word_logand(T252,T253);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T264 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, T254);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          T244 = primitive_idQ(T264,key_);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          if (T244 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T255 = primitive_machine_word_add_signal_overflow(T254,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T265 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, T255);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T266 = T265;
            MV_SET_ELT(0, T265);
            MV_SET_COUNT(1);
            T249 = T266;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T245 = Dckd_emptyVKg;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T246 = primitive_idQ(T264,T245);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            if (T246 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
              T247 = default_;
              MV_SET_ELT(0, default_);
              MV_SET_COUNT(1);
              T248 = T247;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
              iF257T = T254;
              goto L1;
              T248 = T256;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
            T249 = T248;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
        T143_0 = T249;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
      T144_0 = T143_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:946
    T4 = T144_0;
    MV_SET_COUNT(1);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:945
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:943
  return(T4);
}

D KPsecond_hash_valuesVKgI () {
  D T0_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:877
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:878
  T0_0 = &K105;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:877
  MV_SET_COUNT(1);
  return(T0_0);
}

D Klinear_singleton_discriminator_element_setterVKgI (D value_, D d_, D key_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  DWORD iF15T, iF15;
  D T16;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1347
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1349
  T3 = SLOT_VALUE_INITD(d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1350
  T4 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1360
  iF15T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1360
    iF15 = iF15T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1355
    T16 = primitive_cast_raw_as_integer(iF15);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1352
    T9 = primitive_idQ(T16,T4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1352
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1353
      T10 = KerrorVKdMM1I(&K107, &KPempty_vectorVKi);
      T8 = T10;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1355
      T11 = REPEATED_D_SLOT_VALUE_TAGGED(T3, 1, iF15);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1356
      T5 = KEEVKdI(T11, key_);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1356
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1357
        SLOT_VALUE_SETTER(T16, d_, 5);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1358
        T12 = primitive_machine_word_add_signal_overflow(iF15,4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1358
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, T3, 1, T12);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1358
        T6 = value_;
        MV_SET_ELT(0, value_);
        MV_SET_COUNT(1);
        T7 = T6;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1360
        T13 = primitive_machine_word_add_signal_overflow(iF15,8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1360
        iF15T = T13;
        goto L0;
        T7 = T14;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1356
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1352
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1360
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1347
  return(T8);
}

D Kmake_linear_singleton_discriminatorVKgI (D entry_type_, D argnum_, D gf_, D keys_, D nkeys_) {
  D T5;
  D T6;
  D d_;
  D T8_0;
  D shiftF9;
  D T10;
  D T11;
  D T12;
  DWORD mx_;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  D nxt_;
  D T30;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  DWORD iF35T, iF35;
  D lF36T, lF36;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1219
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  shiftF9 = (D) 5;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T16 = primitive_cast_integer_as_raw(nkeys_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  mx_ = T17;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T12 = shiftF9;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T18 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T19 = primitive_machine_word_equalQ(T18,257);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
    shiftF9 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
    T11 = shiftF9;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
    T15 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
    T22 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
    T21 = primitive_machine_word_shift_right(T22,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
    T20 = primitive_machine_word_shift_left_signal_overflow(T15,T21);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
    mx_ = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T10 = shiftF9;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T14 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T25 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T24 = primitive_machine_word_shift_right(T25,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T23 = primitive_machine_word_shift_left_signal_overflow(T14,T24);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T26 = primitive_machine_word_logior(T23,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1222
  T27 = primitive_cast_raw_as_integer(T26);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1224
  T28 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, Dabsent_engine_nodeVKg, T27);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1226
  T5 = Kstandard_discriminator_bitsVKgI(gf_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1226
  T6 = Kbootstrap_allocate_discriminatorVKgI(entry_type_, argnum_, T5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1225
  d_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1227
  SLOT_VALUE_SETTER(T28, d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1228
  SLOT_VALUE_SETTER(Dabsent_engine_nodeVKg, d_, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1229
  SLOT_VALUE_SETTER((D) 1, d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1237
  iF35T = 1;
  lF36T = keys_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1237
    iF35 = iF35T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1237
    lF36 = lF36T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1231
    T30 = primitive_idQ(lF36,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1231
    if (T30 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1232
      T31 = primitive_machine_word_less_thanQ(iF35,T26);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1232
      if (T31 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1235
        T32 = SLOT_VALUE_INITD(lF36, 0);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1235
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T32, T28, 1, iF35);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1236
        T33 = SLOT_VALUE_INITD(lF36, 1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1235
        nxt_ = T33;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1237
        T34 = primitive_machine_word_add_signal_overflow(iF35,8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1237
        iF35T = T34;
        lF36T = nxt_;
        goto L0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1233
        KerrorVKdMM1I(&K111, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1232
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1231
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1237
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1242
  primitive_initialize_discriminator(d_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1243
  T8_0 = d_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1219
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kstandard_discriminator_bitsVKgI (D gf_) {
  D T1_0;
  D T2_0;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  D shiftF7;
  D T8;
  D T9;
  D T10;
  DWORD mx_;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31_0;
  DWORD T32;
  D T33;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:84
  T3 = SLOT_VALUE_INITD(gf_, 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T4 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T6 = primitive_machine_word_logand(T5,1020);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  shiftF7 = (D) 57;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  mx_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T10 = shiftF7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T14 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T15 = primitive_machine_word_equalQ(T14,257);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
    shiftF7 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
    T9 = shiftF7;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
    T13 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
    T18 = primitive_cast_integer_as_raw(T9);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
    T17 = primitive_machine_word_shift_right(T18,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
    T16 = primitive_machine_word_shift_left_signal_overflow(T13,T17);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
    mx_ = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T8 = shiftF7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T12 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T21 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T20 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T19 = primitive_machine_word_shift_left_signal_overflow(T12,T20);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T22 = primitive_machine_word_logior(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:85
  T23 = primitive_cast_raw_as_integer(T22);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
  T24 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
  T25 = primitive_cast_integer_as_raw(T24);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
  T26 = primitive_machine_word_logbitQ(18,T25);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
  if (T26 != &KPfalseVKi) {
    T30 = T26;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
    T27 = SLOT_VALUE_INITD(T3, 0);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
    T28 = primitive_cast_integer_as_raw(T27);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
    T29 = primitive_machine_word_logbitQ(20,T28);
    T30 = T29;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
    T32 = primitive_machine_word_logior(T19,16777217);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
    T33 = primitive_cast_raw_as_integer(T32);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
    T31_0 = T33;
    T2_0 = T31_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
    T1_0 = T23;
    T2_0 = T1_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:82
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kbootstrap_allocate_discriminatorVKgI (D entry_type_, D argnum_, D root_bits_) {
  D T3;
  D c_;
  D dF5;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D T15_0;
  D T16;
  D T17_0;
  D T18;
  DWORD T19;
  D T20;
  D callback_;
  D T22_0;
  D props_;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D shiftF33;
  D T34;
  D T35;
  D T36;
  DWORD mx_;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  D T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  D T58;
  D T59;
  _KLsimple_object_vectorGVKd_2 T60 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T61;
  D T62;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:121
  T3 = Tengine_node_classesTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:122
  T7 = primitive_cast_integer_as_raw(entry_type_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:122
  T6 = REPEATED_D_SLOT_VALUE_TAGGED(T3, 1, T7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:122
  c_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T8 = SLOT_VALUE(c_, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T10 = SLOT_VALUE_INITD(T8, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T12 = primitive_machine_word_logand(T11,262140);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T13 = primitive_machine_word_add_signal_overflow(5,T12);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T14 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T16 = SLOT_VALUE_INITD(T8, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T17_0 = T16;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T15_0 = T17_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T18 = T15_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T19 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  T9 = primitive_object_allocate_filled(T14,T18,T19,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:123
  dF5 = T9;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T20 = Tengine_node_callbacksTVKg;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T27 = primitive_cast_integer_as_raw(root_bits_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T28 = primitive_machine_word_logand(T27,0xFFFFFFFFFFFF0001L);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T29 = primitive_cast_raw_as_integer(T28);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  props_ = T29;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T26 = props_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T30 = primitive_cast_integer_as_raw(T26);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T31 = primitive_machine_word_logior(T30,T7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T32 = primitive_cast_raw_as_integer(T31);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  props_ = T32;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  shiftF33 = (D) 25;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T40 = primitive_cast_integer_as_raw(argnum_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T41 = primitive_machine_word_logxor(T40,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  mx_ = T41;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T36 = shiftF33;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T42 = primitive_cast_integer_as_raw(T36);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T43 = primitive_machine_word_equalQ(T42,257);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  if (T43 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    shiftF33 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    T35 = shiftF33;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    T39 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    T46 = primitive_cast_integer_as_raw(T35);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    T45 = primitive_machine_word_shift_right(T46,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    T44 = primitive_machine_word_shift_left_signal_overflow(T39,T45);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    mx_ = T44;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T34 = shiftF33;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T38 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T49 = primitive_cast_integer_as_raw(T34);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T48 = primitive_machine_word_shift_right(T49,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T47 = primitive_machine_word_shift_left_signal_overflow(T38,T48);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T50 = primitive_machine_word_logior(T47,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T25 = props_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T51 = primitive_cast_integer_as_raw(T25);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T52 = primitive_machine_word_logior(T51,T50);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T53 = primitive_cast_raw_as_integer(T52);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  props_ = T53;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T54 = primitive_machine_word_logand(T27,16711681);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T55 = primitive_machine_word_shift_right(T54,14);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T56 = primitive_machine_word_logand(T55,-4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T57 = primitive_machine_word_logior(T56,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T58 = primitive_cast_raw_as_integer(T57);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T59 = primitive_machine_word_less_thanQ(T40,T57);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  if (T59 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    T60.vector_element_[0] = T58;
    T60.vector_element_[1] = argnum_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    KerrorVKdMM1I(&K112, &T60);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T24 = props_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  SLOT_VALUE_SETTER(T24, dF5, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T61 = REPEATED_D_SLOT_VALUE_TAGGED(T20, 1, T7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  if (T61 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    callback_ = T61;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    T62 = SLOT_VALUE(callback_, 2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
    SLOT_VALUE_SETTER(T62, dF5, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:124
  T22_0 = dF5;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:118
  MV_SET_COUNT(1);
  return(T22_0);
}

D Kmake_initial_class_keyed_discriminatorYdispatch_engine_internalVdylanI (D code_, D argnum_, D gf_, D number_of_keys_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D shiftF9;
  D T10;
  D T11;
  D T12;
  DWORD mx_;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  DWORD T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  D T37;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:742
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  shiftF9 = (D) 5;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T16 = primitive_cast_integer_as_raw(number_of_keys_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  mx_ = T17;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T12 = shiftF9;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T18 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T19 = primitive_machine_word_equalQ(T18,257);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
    shiftF9 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
    T11 = shiftF9;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
    T15 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
    T22 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
    T21 = primitive_machine_word_shift_right(T22,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
    T20 = primitive_machine_word_shift_left_signal_overflow(T15,T21);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
    mx_ = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T10 = shiftF9;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T14 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T25 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T24 = primitive_machine_word_shift_right(T25,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T23 = primitive_machine_word_shift_left_signal_overflow(T14,T24);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T26 = primitive_machine_word_logior(T23,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:746
  T27 = primitive_cast_raw_as_integer(T26);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:747
  T4 = Kstandard_discriminator_bitsVKgI(gf_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:748
  T28 = primitive_machine_word_less_thanQ(T26,41);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:748
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:753
    T32 = primitive_cast_integer_as_raw(code_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:753
    T33 = primitive_machine_word_logand(T32,-7);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:753
    T34 = primitive_cast_raw_as_integer(T33);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:753
    T35 = primitive_machine_word_add_signal_overflow(T26,12);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:753
    T36 = primitive_machine_word_logand(T35,-31);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:753
    T37 = primitive_cast_raw_as_integer(T36);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:753
    T7 = Kmake_linear_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T34, argnum_, T37, T4);
    T8 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:749
    T29 = primitive_cast_integer_as_raw(code_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:749
    T30 = primitive_machine_word_logior(T29,5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:749
    T31 = primitive_cast_raw_as_integer(T30);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:750
    T5 = Khashed_class_keyed_discriminator_log2sizeYdispatch_engine_internalVdylanI(T27);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:749
    T6 = Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T31, argnum_, T5, T4);
    T8 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:748
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:742
  return(T8);
}

D Kmake_linear_class_keyed_discriminatorYdispatch_engine_internalVdylanI (D code_, D argnum_, D table_size_, D extra_bits_) {
  D T4;
  D T5;
  D d_;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:717
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:723
  T4 = Dckd_emptyVKg;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:723
  T5 = Kbootstrap_allocate_repeated_discriminatorYdispatch_engine_internalVdylanI(code_, argnum_, extra_bits_, table_size_, T4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:721
  d_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:724
  SLOT_VALUE_SETTER((D) 1, d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:725
  primitive_initialize_discriminator(d_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:726
  T7_0 = d_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:717
  MV_SET_COUNT(1);
  return(T7_0);
}

D Khashed_class_keyed_discriminator_log2sizeYdispatch_engine_internalVdylanI (D storage_size_) {
  D T2;
  D T3;
  DWORD T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  D shiftF15;
  D T16;
  D T17;
  D T18;
  DWORD mx_;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
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
  DWORD T35;
  D T36;
  D T37;
  DWORD iF38T, iF38;
  D T39;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:613
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
  iF38T = 17;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
    iF38 = iF38T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:616
    T39 = primitive_cast_raw_as_integer(iF38);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:616
    T4 = primitive_machine_word_add_signal_overflow(iF38,4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:616
    T5 = primitive_cast_raw_as_integer(T4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
    T6 = primitive_machine_word_less_thanQ(iF38,1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T7 = primitive_machine_word_logxor(iF38,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T8 = primitive_machine_word_negative_signal_overflow(T7);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T9 = primitive_machine_word_logior(T8,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T10 = primitive_machine_word_less_thanQ(T9,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T12 = primitive_machine_word_shift_right(T8,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T11 = primitive_machine_word_shift_right(5,T12);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T13 = primitive_machine_word_logand(T11,-4);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T14 = primitive_machine_word_logior(T13,1);
        T33 = T14;
      } else {
        T33 = 1;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T34 = T33;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T23 = primitive_machine_word_less_thanQ(iF38,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      if (T23 != &KPfalseVKi) {
        T22 = T39;
      } else {
        T22 = (D) 257;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      shiftF15 = T22;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      mx_ = 4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T18 = shiftF15;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T24 = primitive_cast_integer_as_raw(T18);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T25 = primitive_machine_word_equalQ(T24,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      if (T25 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        shiftF15 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T17 = shiftF15;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T21 = mx_;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T28 = primitive_cast_integer_as_raw(T17);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T27 = primitive_machine_word_shift_right(T28,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        T26 = primitive_machine_word_shift_left_signal_overflow(T21,T27);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
        mx_ = T26;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T16 = shiftF15;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T20 = mx_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T31 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T30 = primitive_machine_word_shift_right(T31,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T29 = primitive_machine_word_shift_left_signal_overflow(T20,T30);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
      T32 = primitive_machine_word_logior(T29,1);
      T34 = T32;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:617
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
    T35 = primitive_cast_integer_as_raw(storage_size_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
    T36 = primitive_machine_word_less_thanQ(T35,T34);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
      T2 = T5;
      MV_SET_ELT(0, T5);
      MV_SET_COUNT(1);
      T3 = T2;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
      iF38T = T4;
      goto L0;
      T3 = T37;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:619
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:613
  return(T3);
}

D Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI (D code_, D argnum_, D log2size_, D extra_bits_) {
  D T4;
  D T5;
  D d_;
  D T7_0;
  D shiftF8;
  D T9;
  D T10;
  D T11;
  DWORD mxF12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  D T37;
  D shiftF38;
  D T39;
  D T40;
  D T41;
  DWORD mxF42;
  DWORD T43;
  DWORD T44;
  D T45;
  D T46;
  DWORD T47;
  D T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  D T56;
  D T57;
  D T58;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:729
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  shiftF8 = (D) 93;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T15 = primitive_cast_integer_as_raw(log2size_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T16 = primitive_machine_word_logxor(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  mxF12 = T16;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T11 = shiftF8;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T17 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T18 = primitive_machine_word_equalQ(T17,257);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
    shiftF8 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
    T10 = shiftF8;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
    T14 = mxF12;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
    T21 = primitive_cast_integer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
    T20 = primitive_machine_word_shift_right(T21,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
    T19 = primitive_machine_word_shift_left_signal_overflow(T14,T20);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
    mxF12 = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T9 = shiftF8;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T13 = mxF12;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T24 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T23 = primitive_machine_word_shift_right(T24,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T22 = primitive_machine_word_shift_left_signal_overflow(T13,T23);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T25 = primitive_machine_word_logior(T22,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T26 = primitive_cast_integer_as_raw(extra_bits_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T27 = primitive_machine_word_logior(T26,T25);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:734
  T28 = primitive_cast_raw_as_integer(T27);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
  T29 = primitive_machine_word_less_thanQ(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
  if (T29 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T30 = primitive_machine_word_negative_signal_overflow(T16);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T31 = primitive_machine_word_logior(T30,1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T32 = primitive_machine_word_less_thanQ(T31,257);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T34 = primitive_machine_word_shift_right(T30,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T33 = primitive_machine_word_shift_right(5,T34);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T35 = primitive_machine_word_logand(T33,-4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T36 = primitive_machine_word_logior(T35,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T37 = primitive_cast_raw_as_integer(T36);
      T57 = T37;
    } else {
      T57 = (D) 1;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T58 = T57;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T46 = primitive_machine_word_less_thanQ(T15,257);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    if (T46 != &KPfalseVKi) {
      T45 = log2size_;
    } else {
      T45 = (D) 257;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    shiftF38 = T45;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    mxF42 = 4;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T41 = shiftF38;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T47 = primitive_cast_integer_as_raw(T41);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T48 = primitive_machine_word_equalQ(T47,257);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    if (T48 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      shiftF38 = (D) 129;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T40 = shiftF38;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T44 = mxF42;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T51 = primitive_cast_integer_as_raw(T40);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T50 = primitive_machine_word_shift_right(T51,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      T49 = primitive_machine_word_shift_left_signal_overflow(T44,T50);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
      mxF42 = T49;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T39 = shiftF38;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T43 = mxF42;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T54 = primitive_cast_integer_as_raw(T39);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T53 = primitive_machine_word_shift_right(T54,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T52 = primitive_machine_word_shift_left_signal_overflow(T43,T53);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T55 = primitive_machine_word_logior(T52,1);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
    T56 = primitive_cast_raw_as_integer(T55);
    T58 = T56;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:735
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:737
  T4 = Dckd_emptyVKg;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:737
  T5 = Kbootstrap_allocate_repeated_discriminatorYdispatch_engine_internalVdylanI(code_, argnum_, T28, T58, T4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:736
  d_ = T5;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:738
  primitive_initialize_discriminator(d_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:739
  T7_0 = d_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:729
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbootstrap_allocate_repeated_discriminatorYdispatch_engine_internalVdylanI (D entry_type_, D argnum_, D root_bits_, D size_, D default_) {
  D T5;
  D c_;
  D dF7;
  D T8;
  DWORD T9;
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
  D T27;
  D callback_;
  D T29_0;
  D props_;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  DWORD T35;
  D T36;
  DWORD T37;
  DWORD T38;
  D T39;
  D shiftF40;
  D T41;
  D T42;
  D T43;
  DWORD mx_;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  D T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  D T65;
  D T66;
  _KLsimple_object_vectorGVKd_2 T67 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T68;
  D T69;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:127
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:130
  T5 = Tengine_node_classesTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:131
  T9 = primitive_cast_integer_as_raw(entry_type_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:131
  T8 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 1, T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:131
  c_ = T8;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T10 = SLOT_VALUE(c_, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T12 = SLOT_VALUE_INITD(T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T14 = primitive_machine_word_logand(T13,262140);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T15 = primitive_machine_word_logior(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T16 = primitive_machine_word_add_signal_overflow(5,T14);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T17 = primitive_machine_word_shift_right(T16,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T19 = SLOT_VALUE_INITD(T10, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T20_0 = T19;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T18_0 = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  mm_wrapper_ = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T22 = primitive_machine_word_subtract_signal_overflow(T15,4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T23 = primitive_machine_word_shift_right(T22,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T25 = primitive_cast_integer_as_raw(size_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T24 = primitive_machine_word_shift_right(T25,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T26 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  T11 = primitive_object_allocate_filled(T17,mm_wrapper_,T23,&KPfalseVKi,T24,T26,default_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:132
  dF7 = T11;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T27 = Tengine_node_callbacksTVKg;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T34 = primitive_cast_integer_as_raw(root_bits_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T35 = primitive_machine_word_logand(T34,0xFFFFFFFFFFFF0001L);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T36 = primitive_cast_raw_as_integer(T35);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  props_ = T36;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T33 = props_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T37 = primitive_cast_integer_as_raw(T33);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T38 = primitive_machine_word_logior(T37,T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T39 = primitive_cast_raw_as_integer(T38);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  props_ = T39;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  shiftF40 = (D) 25;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T47 = primitive_cast_integer_as_raw(argnum_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T48 = primitive_machine_word_logxor(T47,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  mx_ = T48;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T43 = shiftF40;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T49 = primitive_cast_integer_as_raw(T43);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T50 = primitive_machine_word_equalQ(T49,257);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  if (T50 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    shiftF40 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    T42 = shiftF40;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    T46 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    T53 = primitive_cast_integer_as_raw(T42);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    T52 = primitive_machine_word_shift_right(T53,2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    T51 = primitive_machine_word_shift_left_signal_overflow(T46,T52);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    mx_ = T51;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T41 = shiftF40;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T45 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T56 = primitive_cast_integer_as_raw(T41);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T55 = primitive_machine_word_shift_right(T56,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T54 = primitive_machine_word_shift_left_signal_overflow(T45,T55);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T57 = primitive_machine_word_logior(T54,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T32 = props_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T58 = primitive_cast_integer_as_raw(T32);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T59 = primitive_machine_word_logior(T58,T57);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T60 = primitive_cast_raw_as_integer(T59);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  props_ = T60;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T61 = primitive_machine_word_logand(T34,16711681);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T62 = primitive_machine_word_shift_right(T61,14);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T63 = primitive_machine_word_logand(T62,-4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T64 = primitive_machine_word_logior(T63,1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T65 = primitive_cast_raw_as_integer(T64);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T66 = primitive_machine_word_less_thanQ(T47,T64);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  if (T66 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    T67.vector_element_[0] = T65;
    T67.vector_element_[1] = argnum_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    KerrorVKdMM1I(&K112, &T67);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T31 = props_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  SLOT_VALUE_SETTER(T31, dF7, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T68 = REPEATED_D_SLOT_VALUE_TAGGED(T27, 1, T9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  if (T68 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    callback_ = T68;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    T69 = SLOT_VALUE(callback_, 2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
    SLOT_VALUE_SETTER(T69, dF7, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:133
  T29_0 = dF7;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:127
  MV_SET_COUNT(1);
  return(T29_0);
}

D Kgrounded_lckd_addXYdispatch_engine_internalVdylanI (D d_, D key_, D value_) {
  D dF3;
  D T4_0;
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
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  D T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  D shiftF30;
  D T31;
  D T32;
  D T33;
  DWORD mxF34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  D shiftF48;
  D T49;
  D T50;
  D T51;
  DWORD mxF52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  D T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  D T67;
  D T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  D shiftF73;
  D T74;
  D T75;
  D T76;
  DWORD mxF77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  D T81;
  DWORD T82;
  DWORD T83;
  DWORD T84;
  DWORD T85;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  DWORD T89;
  DWORD T90;
  D T91;
  D T92;
  D shiftF93;
  D T94;
  D T95;
  D T96;
  DWORD mxF97;
  DWORD T98;
  DWORD T99;
  DWORD T100;
  DWORD T101;
  DWORD T102;
  D T103;
  DWORD T104;
  DWORD T105;
  DWORD T106;
  DWORD T107;
  DWORD T108;
  DWORD T109;
  DWORD T110;
  D shiftF111;
  D T112;
  D T113;
  D T114;
  DWORD mxF115;
  DWORD T116;
  DWORD T117;
  DWORD T118;
  D T119;
  DWORD T120;
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
  DWORD T132;
  DWORD T133;
  DWORD T134;
  DWORD T135;
  D shiftF136;
  D T137;
  D T138;
  D T139;
  DWORD mxF140;
  DWORD T141;
  DWORD T142;
  DWORD T143;
  D T144;
  DWORD T145;
  DWORD T146;
  DWORD T147;
  DWORD T148;
  DWORD T149;
  DWORD T150;
  DWORD T151;
  DWORD T152;
  DWORD T153;
  D T154;
  D T155;
  D T156;
  DWORD T157;
  DWORD T158;
  D T159;
  DWORD iF160T, iF160;
  D ndF161T, ndF161;
  D T162;
  D T163;
  DWORD T164;
  DWORD T165;
  DWORD T166;
  D T167;
  DWORD iF168T, iF168;
  D T169;
  D T170;
  D T171;
  D T172;
  D T173;
  D T174;
  D T175;
  D T176;
  D T177;
  D T178;
  D T179;
  D T180;
  D T181;
  D T182;
  DWORD T183;
  D T184;
  D T185;
  D T186;
  D T187;
  D T188;
  DWORD T189;
  D T190;
  D T191;
  DWORD T192;
  DWORD T193;
  D T194;
  D T195;
  D T196;
  D shiftF197;
  D T198;
  D T199;
  D T200;
  DWORD mxF201;
  DWORD T202;
  DWORD T203;
  DWORD T204;
  DWORD T205;
  DWORD T206;
  D T207;
  DWORD T208;
  DWORD T209;
  DWORD T210;
  DWORD T211;
  DWORD T212;
  DWORD T213;
  DWORD T214;
  D shiftF215;
  D T216;
  D T217;
  D T218;
  DWORD mxF219;
  DWORD T220;
  DWORD T221;
  DWORD T222;
  D T223;
  DWORD T224;
  DWORD T225;
  DWORD T226;
  DWORD T227;
  DWORD T228;
  DWORD T229;
  DWORD T230;
  DWORD T231;
  DWORD T232;
  DWORD T233;
  D T234;
  D T235;
  DWORD T236;
  DWORD T237;
  DWORD T238;
  DWORD T239;
  D shiftF240;
  D T241;
  D T242;
  D T243;
  DWORD mxF244;
  DWORD T245;
  DWORD T246;
  DWORD T247;
  D T248;
  DWORD T249;
  DWORD T250;
  DWORD T251;
  DWORD T252;
  DWORD T253;
  DWORD T254;
  DWORD T255;
  DWORD T256;
  DWORD T257;
  D T258;
  D T259;
  D shiftF260;
  D T261;
  D T262;
  D T263;
  DWORD mxF264;
  DWORD T265;
  DWORD T266;
  DWORD T267;
  DWORD T268;
  DWORD T269;
  D T270;
  DWORD T271;
  DWORD T272;
  DWORD T273;
  DWORD T274;
  DWORD T275;
  DWORD T276;
  DWORD T277;
  D shiftF278;
  D T279;
  D T280;
  D T281;
  DWORD mxF282;
  DWORD T283;
  DWORD T284;
  DWORD T285;
  D T286;
  DWORD T287;
  DWORD T288;
  DWORD T289;
  DWORD T290;
  DWORD T291;
  DWORD T292;
  DWORD T293;
  DWORD T294;
  DWORD T295;
  DWORD T296;
  D T297;
  D T298;
  DWORD T299;
  DWORD T300;
  DWORD T301;
  DWORD T302;
  D shiftF303;
  D T304;
  D T305;
  D T306;
  DWORD mxF307;
  DWORD T308;
  DWORD T309;
  DWORD T310;
  D T311;
  DWORD T312;
  DWORD T313;
  DWORD T314;
  DWORD T315;
  DWORD T316;
  DWORD T317;
  DWORD T318;
  DWORD T319;
  DWORD T320;
  D T321;
  D T322;
  D T323;
  DWORD T324;
  DWORD T325;
  D T326;
  DWORD iF327T, iF327;
  D ndF328T, ndF328;
  D T329;
  D T330;
  DWORD T331;
  DWORD T332;
  DWORD T333;
  D T334;
  DWORD iF335T, iF335;
  D T336;
  D T337;
  D T338;
  D T339;
  D T340;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1133
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1136
  T6 = primitive_instanceQ(d_,&KLlinear_by_singleton_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1136
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1011
    T5 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    T169 = SLOT_VALUE_INITD(T5, 6);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    T16 = primitive_cast_integer_as_raw(T169);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    iF168T = 1;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      iF168 = iF168T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      T17 = primitive_machine_word_equalQ(iF168,T16);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      if (T17 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T22 = primitive_machine_word_add_signal_overflow(T16,16);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T23 = primitive_cast_raw_as_integer(T22);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T24 = SLOT_VALUE_INITD(T5, 0);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T25 = primitive_cast_integer_as_raw(T24);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T26 = primitive_machine_word_logand(T25,33488897);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T27 = primitive_cast_raw_as_integer(T26);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T28 = primitive_machine_word_less_thanQ(T22,41);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T92 = SLOT_VALUE_INITD(T5, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF93 = (D) 1;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T100 = primitive_cast_integer_as_raw(T92);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T101 = primitive_machine_word_logxor(T100,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF97 = T101;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T96 = shiftF93;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T102 = primitive_cast_integer_as_raw(T96);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T103 = primitive_machine_word_equalQ(T102,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T103 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF93 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T95 = shiftF93;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T99 = mxF97;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T106 = primitive_cast_integer_as_raw(T95);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T105 = primitive_machine_word_shift_right(T106,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T104 = primitive_machine_word_shift_left_signal_overflow(T99,T105);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF97 = T104;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T94 = shiftF93;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T98 = mxF97;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T109 = primitive_cast_integer_as_raw(T94);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T108 = primitive_machine_word_shift_right(T109,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T107 = primitive_machine_word_shift_left_signal_overflow(T98,T108);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T110 = primitive_machine_word_logior(T107,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF111 = (D) 25;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF115 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T114 = shiftF111;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T118 = primitive_cast_integer_as_raw(T114);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T119 = primitive_machine_word_equalQ(T118,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T119 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF111 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T113 = shiftF111;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T117 = mxF115;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T122 = primitive_cast_integer_as_raw(T113);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T121 = primitive_machine_word_shift_right(T122,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T120 = primitive_machine_word_shift_left_signal_overflow(T117,T121);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF115 = T120;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T112 = shiftF111;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T116 = mxF115;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T125 = primitive_cast_integer_as_raw(T112);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T124 = primitive_machine_word_shift_right(T125,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T123 = primitive_machine_word_shift_left_signal_overflow(T116,T124);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T126 = primitive_machine_word_logior(T123,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T127 = primitive_machine_word_subtract_signal_overflow(T126,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T128 = primitive_machine_word_logand(T110,T127);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T129 = primitive_machine_word_logand(T128,-7);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T130 = primitive_cast_raw_as_integer(T129);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T131 = SLOT_VALUE_INITD(T5, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T132 = primitive_cast_integer_as_raw(T131);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T133 = primitive_machine_word_shift_right(T132,6);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T134 = primitive_machine_word_logand(T133,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T135 = primitive_machine_word_logior(T134,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF136 = (D) 33;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF140 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T139 = shiftF136;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T143 = primitive_cast_integer_as_raw(T139);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T144 = primitive_machine_word_equalQ(T143,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T144 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF136 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T138 = shiftF136;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T142 = mxF140;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T147 = primitive_cast_integer_as_raw(T138);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T146 = primitive_machine_word_shift_right(T147,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T145 = primitive_machine_word_shift_left_signal_overflow(T142,T146);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF140 = T145;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T137 = shiftF136;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T141 = mxF140;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T150 = primitive_cast_integer_as_raw(T137);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T149 = primitive_machine_word_shift_right(T150,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T148 = primitive_machine_word_shift_left_signal_overflow(T141,T149);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T151 = primitive_machine_word_logior(T148,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T152 = primitive_machine_word_subtract_signal_overflow(T151,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T153 = primitive_machine_word_logand(T135,T152);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T154 = primitive_cast_raw_as_integer(T153);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T20 = Kmake_linear_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T130, T154, T23, T27);
          T21 = T20;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T29 = SLOT_VALUE_INITD(T5, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF30 = (D) 1;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T37 = primitive_cast_integer_as_raw(T29);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T38 = primitive_machine_word_logxor(T37,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF34 = T38;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T33 = shiftF30;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T39 = primitive_cast_integer_as_raw(T33);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T40 = primitive_machine_word_equalQ(T39,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T40 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF30 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T32 = shiftF30;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T36 = mxF34;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T43 = primitive_cast_integer_as_raw(T32);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T42 = primitive_machine_word_shift_right(T43,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T41 = primitive_machine_word_shift_left_signal_overflow(T36,T42);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF34 = T41;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T31 = shiftF30;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T35 = mxF34;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T46 = primitive_cast_integer_as_raw(T31);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T45 = primitive_machine_word_shift_right(T46,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T44 = primitive_machine_word_shift_left_signal_overflow(T35,T45);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T47 = primitive_machine_word_logior(T44,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF48 = (D) 25;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF52 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T51 = shiftF48;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T55 = primitive_cast_integer_as_raw(T51);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T56 = primitive_machine_word_equalQ(T55,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T56 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF48 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T50 = shiftF48;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T54 = mxF52;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T59 = primitive_cast_integer_as_raw(T50);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T58 = primitive_machine_word_shift_right(T59,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T57 = primitive_machine_word_shift_left_signal_overflow(T54,T58);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF52 = T57;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T49 = shiftF48;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T53 = mxF52;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T62 = primitive_cast_integer_as_raw(T49);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T61 = primitive_machine_word_shift_right(T62,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T60 = primitive_machine_word_shift_left_signal_overflow(T53,T61);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T63 = primitive_machine_word_logior(T60,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T64 = primitive_machine_word_subtract_signal_overflow(T63,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T65 = primitive_machine_word_logand(T47,T64);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T66 = primitive_machine_word_logior(T65,5);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T67 = primitive_cast_raw_as_integer(T66);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T68 = SLOT_VALUE_INITD(T5, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T69 = primitive_cast_integer_as_raw(T68);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T70 = primitive_machine_word_shift_right(T69,6);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T71 = primitive_machine_word_logand(T70,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T72 = primitive_machine_word_logior(T71,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF73 = (D) 33;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF77 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T76 = shiftF73;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T80 = primitive_cast_integer_as_raw(T76);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T81 = primitive_machine_word_equalQ(T80,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T81 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF73 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T75 = shiftF73;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T79 = mxF77;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T84 = primitive_cast_integer_as_raw(T75);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T83 = primitive_machine_word_shift_right(T84,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T82 = primitive_machine_word_shift_left_signal_overflow(T79,T83);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF77 = T82;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T74 = shiftF73;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T78 = mxF77;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T87 = primitive_cast_integer_as_raw(T74);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T86 = primitive_machine_word_shift_right(T87,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T85 = primitive_machine_word_shift_left_signal_overflow(T78,T86);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T88 = primitive_machine_word_logior(T85,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T89 = primitive_machine_word_subtract_signal_overflow(T88,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T90 = primitive_machine_word_logand(T72,T89);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T91 = primitive_cast_raw_as_integer(T90);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T18 = Khashed_class_keyed_discriminator_log2sizeYdispatch_engine_internalVdylanI(T23);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T19 = Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T67, T91, T18, T27);
          T21 = T19;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        Kcopy_class_keyed_discriminator_attributesYdispatch_engine_internalVdylanI(T5, T21);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        iF160T = 1;
        ndF161T = T21;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          iF160 = iF160T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          ndF161 = ndF161T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T156 = primitive_machine_word_equalQ(iF160,T16);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T156 != &KPfalseVKi) {
            T163 = ndF161;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T157 = primitive_machine_word_add_signal_overflow(iF160,8);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T170 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, iF160);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T158 = primitive_machine_word_add_signal_overflow(iF160,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T171 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, T158);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T155 = Kckd_addXYdispatch_engine_internalVdylanI(ndF161, T170, T171);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            iF160T = T157;
            ndF161T = T155;
            goto L1;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T162 = T159;
            T163 = T162;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T7 = Kckd_addXYdispatch_engine_internalVdylanI(T163, key_, value_);
        T15 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T172 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, iF168);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T8 = Dckd_emptyVKg;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T9 = primitive_idQ(T172,T8);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        if (T9 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T164 = primitive_machine_word_add_signal_overflow(iF168,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, T5, 7, T164);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(key_, T5, 7, iF168);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T10 = T5;
          MV_SET_ELT(0, T5);
          MV_SET_COUNT(1);
          T14 = T10;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T173 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, iF168);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T11 = primitive_idQ(T173,key_);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T11 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T165 = primitive_machine_word_add_signal_overflow(iF168,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, T5, 7, T165);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T12 = T5;
            MV_SET_ELT(0, T5);
            MV_SET_COUNT(1);
            T13 = T12;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T166 = primitive_machine_word_add_signal_overflow(iF168,8);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            iF168T = T166;
            goto L0;
            T13 = T167;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T14 = T13;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T15 = T14;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    T4_0 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1136
    dF3 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    T336 = SLOT_VALUE_INITD(dF3, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    T183 = primitive_cast_integer_as_raw(T336);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    iF335T = 1;
  L2: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      iF335 = iF335T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      T184 = primitive_machine_word_equalQ(iF335,T183);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      if (T184 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T189 = primitive_machine_word_add_signal_overflow(T183,16);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T190 = primitive_cast_raw_as_integer(T189);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T191 = SLOT_VALUE_INITD(dF3, 0);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T192 = primitive_cast_integer_as_raw(T191);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T193 = primitive_machine_word_logand(T192,33488897);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T194 = primitive_cast_raw_as_integer(T193);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T195 = primitive_machine_word_less_thanQ(T189,41);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        if (T195 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T259 = SLOT_VALUE_INITD(dF3, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF260 = (D) 1;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T267 = primitive_cast_integer_as_raw(T259);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T268 = primitive_machine_word_logxor(T267,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF264 = T268;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T263 = shiftF260;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T269 = primitive_cast_integer_as_raw(T263);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T270 = primitive_machine_word_equalQ(T269,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T270 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF260 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T262 = shiftF260;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T266 = mxF264;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T273 = primitive_cast_integer_as_raw(T262);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T272 = primitive_machine_word_shift_right(T273,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T271 = primitive_machine_word_shift_left_signal_overflow(T266,T272);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF264 = T271;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T261 = shiftF260;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T265 = mxF264;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T276 = primitive_cast_integer_as_raw(T261);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T275 = primitive_machine_word_shift_right(T276,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T274 = primitive_machine_word_shift_left_signal_overflow(T265,T275);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T277 = primitive_machine_word_logior(T274,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF278 = (D) 25;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF282 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T281 = shiftF278;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T285 = primitive_cast_integer_as_raw(T281);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T286 = primitive_machine_word_equalQ(T285,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T286 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF278 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T280 = shiftF278;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T284 = mxF282;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T289 = primitive_cast_integer_as_raw(T280);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T288 = primitive_machine_word_shift_right(T289,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T287 = primitive_machine_word_shift_left_signal_overflow(T284,T288);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF282 = T287;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T279 = shiftF278;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T283 = mxF282;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T292 = primitive_cast_integer_as_raw(T279);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T291 = primitive_machine_word_shift_right(T292,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T290 = primitive_machine_word_shift_left_signal_overflow(T283,T291);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T293 = primitive_machine_word_logior(T290,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T294 = primitive_machine_word_subtract_signal_overflow(T293,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T295 = primitive_machine_word_logand(T277,T294);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T296 = primitive_machine_word_logand(T295,-7);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T297 = primitive_cast_raw_as_integer(T296);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T298 = SLOT_VALUE_INITD(dF3, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T299 = primitive_cast_integer_as_raw(T298);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T300 = primitive_machine_word_shift_right(T299,6);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T301 = primitive_machine_word_logand(T300,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T302 = primitive_machine_word_logior(T301,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF303 = (D) 33;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF307 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T306 = shiftF303;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T310 = primitive_cast_integer_as_raw(T306);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T311 = primitive_machine_word_equalQ(T310,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T311 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF303 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T305 = shiftF303;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T309 = mxF307;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T314 = primitive_cast_integer_as_raw(T305);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T313 = primitive_machine_word_shift_right(T314,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T312 = primitive_machine_word_shift_left_signal_overflow(T309,T313);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF307 = T312;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T304 = shiftF303;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T308 = mxF307;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T317 = primitive_cast_integer_as_raw(T304);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T316 = primitive_machine_word_shift_right(T317,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T315 = primitive_machine_word_shift_left_signal_overflow(T308,T316);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T318 = primitive_machine_word_logior(T315,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T319 = primitive_machine_word_subtract_signal_overflow(T318,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T320 = primitive_machine_word_logand(T302,T319);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T321 = primitive_cast_raw_as_integer(T320);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T187 = Kmake_linear_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T297, T321, T190, T194);
          T188 = T187;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T196 = SLOT_VALUE_INITD(dF3, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF197 = (D) 1;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T204 = primitive_cast_integer_as_raw(T196);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T205 = primitive_machine_word_logxor(T204,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF201 = T205;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T200 = shiftF197;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T206 = primitive_cast_integer_as_raw(T200);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T207 = primitive_machine_word_equalQ(T206,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T207 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF197 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T199 = shiftF197;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T203 = mxF201;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T210 = primitive_cast_integer_as_raw(T199);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T209 = primitive_machine_word_shift_right(T210,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T208 = primitive_machine_word_shift_left_signal_overflow(T203,T209);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF201 = T208;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T198 = shiftF197;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T202 = mxF201;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T213 = primitive_cast_integer_as_raw(T198);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T212 = primitive_machine_word_shift_right(T213,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T211 = primitive_machine_word_shift_left_signal_overflow(T202,T212);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T214 = primitive_machine_word_logior(T211,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF215 = (D) 25;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF219 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T218 = shiftF215;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T222 = primitive_cast_integer_as_raw(T218);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T223 = primitive_machine_word_equalQ(T222,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T223 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF215 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T217 = shiftF215;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T221 = mxF219;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T226 = primitive_cast_integer_as_raw(T217);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T225 = primitive_machine_word_shift_right(T226,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T224 = primitive_machine_word_shift_left_signal_overflow(T221,T225);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF219 = T224;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T216 = shiftF215;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T220 = mxF219;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T229 = primitive_cast_integer_as_raw(T216);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T228 = primitive_machine_word_shift_right(T229,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T227 = primitive_machine_word_shift_left_signal_overflow(T220,T228);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T230 = primitive_machine_word_logior(T227,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T231 = primitive_machine_word_subtract_signal_overflow(T230,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T232 = primitive_machine_word_logand(T214,T231);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T233 = primitive_machine_word_logior(T232,5);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T234 = primitive_cast_raw_as_integer(T233);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T235 = SLOT_VALUE_INITD(dF3, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T236 = primitive_cast_integer_as_raw(T235);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T237 = primitive_machine_word_shift_right(T236,6);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T238 = primitive_machine_word_logand(T237,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T239 = primitive_machine_word_logior(T238,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          shiftF240 = (D) 33;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          mxF244 = 4;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T243 = shiftF240;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T247 = primitive_cast_integer_as_raw(T243);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T248 = primitive_machine_word_equalQ(T247,257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T248 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            shiftF240 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T242 = shiftF240;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T246 = mxF244;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T251 = primitive_cast_integer_as_raw(T242);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T250 = primitive_machine_word_shift_right(T251,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T249 = primitive_machine_word_shift_left_signal_overflow(T246,T250);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            mxF244 = T249;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T241 = shiftF240;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T245 = mxF244;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T254 = primitive_cast_integer_as_raw(T241);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T253 = primitive_machine_word_shift_right(T254,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T252 = primitive_machine_word_shift_left_signal_overflow(T245,T253);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T255 = primitive_machine_word_logior(T252,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T256 = primitive_machine_word_subtract_signal_overflow(T255,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T257 = primitive_machine_word_logand(T239,T256);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T258 = primitive_cast_raw_as_integer(T257);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T185 = Khashed_class_keyed_discriminator_log2sizeYdispatch_engine_internalVdylanI(T190);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T186 = Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T234, T258, T185, T194);
          T188 = T186;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        Kcopy_class_keyed_discriminator_attributesYdispatch_engine_internalVdylanI(dF3, T188);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        iF327T = 1;
        ndF328T = T188;
      L3: ;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          iF327 = iF327T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          ndF328 = ndF328T;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T323 = primitive_machine_word_equalQ(iF327,T183);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T323 != &KPfalseVKi) {
            T330 = ndF328;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T324 = primitive_machine_word_add_signal_overflow(iF327,8);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T337 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, iF327);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T325 = primitive_machine_word_add_signal_overflow(iF327,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T338 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, T325);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T322 = Kckd_addXYdispatch_engine_internalVdylanI(ndF328, T337, T338);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            iF327T = T324;
            ndF328T = T322;
            goto L3;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T329 = T326;
            T330 = T329;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T174 = Kckd_addXYdispatch_engine_internalVdylanI(T330, key_, value_);
        T182 = T174;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T339 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, iF335);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T175 = Dckd_emptyVKg;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T176 = primitive_idQ(T339,T175);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        if (T176 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T331 = primitive_machine_word_add_signal_overflow(iF335,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, dF3, 6, T331);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(key_, dF3, 6, iF335);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T177 = dF3;
          MV_SET_ELT(0, dF3);
          MV_SET_COUNT(1);
          T181 = T177;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T340 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, iF335);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T178 = primitive_idQ(T340,key_);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          if (T178 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T332 = primitive_machine_word_add_signal_overflow(iF335,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(value_, dF3, 6, T332);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T179 = dF3;
            MV_SET_ELT(0, dF3);
            MV_SET_COUNT(1);
            T180 = T179;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            T333 = primitive_machine_word_add_signal_overflow(iF335,8);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
            iF335T = T333;
            goto L2;
            T180 = T334;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
          T181 = T180;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
        T182 = T181;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1137
    T4_0 = T182;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1136
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1133
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kmckd_addXYdispatch_engine_internalVdylanI (D d_, D key_, D value_) {
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8_0;
  D T9;
  D new_d_;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14;
  D T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D shiftF20;
  D T21;
  D T22;
  D T23;
  DWORD mxF24;
  DWORD T25;
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
  D T39;
  DWORD T40;
  DWORD T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  DWORD T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54;
  DWORD T55;
  D T56;
  D T57;
  DWORD T58;
  DWORD T59;
  D T60;
  D T61;
  D T62;
  D shiftF63;
  D T64;
  D T65;
  D T66;
  DWORD mxF67;
  DWORD T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  D T73;
  DWORD T74;
  DWORD T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  DWORD T80;
  D shiftF81;
  D T82;
  D T83;
  D T84;
  DWORD mxF85;
  DWORD T86;
  DWORD T87;
  DWORD T88;
  D T89;
  DWORD T90;
  DWORD T91;
  DWORD T92;
  DWORD T93;
  DWORD T94;
  DWORD T95;
  DWORD T96;
  DWORD T97;
  DWORD T98;
  DWORD T99;
  D T100;
  D T101;
  DWORD T102;
  DWORD T103;
  DWORD T104;
  DWORD T105;
  D shiftF106;
  D T107;
  D T108;
  D T109;
  DWORD mxF110;
  DWORD T111;
  DWORD T112;
  DWORD T113;
  D T114;
  DWORD T115;
  DWORD T116;
  DWORD T117;
  DWORD T118;
  DWORD T119;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  DWORD T123;
  D T124;
  D T125;
  D shiftF126;
  D T127;
  D T128;
  D T129;
  DWORD mxF130;
  DWORD T131;
  DWORD T132;
  DWORD T133;
  DWORD T134;
  DWORD T135;
  D T136;
  DWORD T137;
  DWORD T138;
  DWORD T139;
  DWORD T140;
  DWORD T141;
  DWORD T142;
  DWORD T143;
  D shiftF144;
  D T145;
  D T146;
  D T147;
  DWORD mxF148;
  DWORD T149;
  DWORD T150;
  DWORD T151;
  D T152;
  DWORD T153;
  DWORD T154;
  DWORD T155;
  DWORD T156;
  DWORD T157;
  DWORD T158;
  DWORD T159;
  DWORD T160;
  DWORD T161;
  DWORD T162;
  D T163;
  D T164;
  DWORD T165;
  DWORD T166;
  DWORD T167;
  DWORD T168;
  D shiftF169;
  D T170;
  D T171;
  D T172;
  DWORD mxF173;
  DWORD T174;
  DWORD T175;
  DWORD T176;
  D T177;
  DWORD T178;
  DWORD T179;
  DWORD T180;
  DWORD T181;
  DWORD T182;
  DWORD T183;
  DWORD T184;
  DWORD T185;
  DWORD T186;
  D T187;
  D T188;
  D T189;
  DWORD T190;
  DWORD T191;
  D T192;
  DWORD iF193T, iF193;
  D ndF194T, ndF194;
  D T195;
  D T196;
  DWORD T197;
  DWORD T198;
  DWORD T199;
  D T200;
  DWORD iF201T, iF201;
  D T202;
  D T203;
  D T204;
  D T205;
  D T206;
  D T207;
  D T208;
  D T209;
  D T210;
  D T211;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1025
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1028
  T14 = SLOT_VALUE_INITD(d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1029
  T4 = Dckd_emptyVKg;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1029
  T5 = primitive_idQ(T14,T4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1029
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1030
    SLOT_VALUE_SETTER(key_, d_, 3);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1031
    SLOT_VALUE_SETTER(value_, d_, 4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1032
    T6_0 = d_;
    T13_0 = T6_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1033
    T7 = primitive_idQ(T14,key_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1029
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1034
      SLOT_VALUE_SETTER(value_, d_, 4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1035
      T8_0 = d_;
      T12_0 = T8_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T15 = SLOT_VALUE_INITD(d_, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T16 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T17 = primitive_machine_word_shift_right(T16,6);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T18 = primitive_machine_word_logand(T17,-4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T19 = primitive_machine_word_logior(T18,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      shiftF20 = (D) 33;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      mxF24 = 4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T23 = shiftF20;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T27 = primitive_cast_integer_as_raw(T23);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T28 = primitive_machine_word_equalQ(T27,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
        shiftF20 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
        T22 = shiftF20;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
        T26 = mxF24;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
        T31 = primitive_cast_integer_as_raw(T22);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
        T30 = primitive_machine_word_shift_right(T31,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
        T29 = primitive_machine_word_shift_left_signal_overflow(T26,T30);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
        mxF24 = T29;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T21 = shiftF20;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T25 = mxF24;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T34 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T33 = primitive_machine_word_shift_right(T34,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T32 = primitive_machine_word_shift_left_signal_overflow(T25,T33);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T35 = primitive_machine_word_logior(T32,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T36 = primitive_machine_word_subtract_signal_overflow(T35,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T37 = primitive_machine_word_logand(T19,T36);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1039
      T38 = primitive_cast_raw_as_integer(T37);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1040
      T39 = SLOT_VALUE_INITD(d_, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1040
      T40 = primitive_cast_integer_as_raw(T39);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1040
      T41 = primitive_machine_word_logand(T40,33488897);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1040
      T42 = primitive_cast_raw_as_integer(T41);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1038
      T9 = Kmake_linear_class_keyed_discriminatorYdispatch_engine_internalVdylanI((D) 137, T38, (D) 9, T42);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1037
      new_d_ = T9;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
      T43 = SLOT_VALUE_INITD(d_, 3);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1042
      T44 = SLOT_VALUE_INITD(d_, 4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
      T207 = SLOT_VALUE_INITD(new_d_, 5);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
      T49 = primitive_cast_integer_as_raw(T207);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
      iF201T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
        iF201 = iF201T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
        T50 = primitive_machine_word_equalQ(iF201,T49);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
        if (T50 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T55 = primitive_machine_word_add_signal_overflow(T49,16);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T56 = primitive_cast_raw_as_integer(T55);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T57 = SLOT_VALUE_INITD(new_d_, 0);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T58 = primitive_cast_integer_as_raw(T57);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T59 = primitive_machine_word_logand(T58,33488897);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T60 = primitive_cast_raw_as_integer(T59);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T61 = primitive_machine_word_less_thanQ(T55,41);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          if (T61 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T125 = SLOT_VALUE_INITD(new_d_, 0);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            shiftF126 = (D) 1;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T133 = primitive_cast_integer_as_raw(T125);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T134 = primitive_machine_word_logxor(T133,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            mxF130 = T134;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T129 = shiftF126;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T135 = primitive_cast_integer_as_raw(T129);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T136 = primitive_machine_word_equalQ(T135,257);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T136 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              shiftF126 = (D) 129;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T128 = shiftF126;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T132 = mxF130;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T139 = primitive_cast_integer_as_raw(T128);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T138 = primitive_machine_word_shift_right(T139,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T137 = primitive_machine_word_shift_left_signal_overflow(T132,T138);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              mxF130 = T137;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T127 = shiftF126;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T131 = mxF130;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T142 = primitive_cast_integer_as_raw(T127);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T141 = primitive_machine_word_shift_right(T142,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T140 = primitive_machine_word_shift_left_signal_overflow(T131,T141);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T143 = primitive_machine_word_logior(T140,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            shiftF144 = (D) 25;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            mxF148 = 4;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T147 = shiftF144;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T151 = primitive_cast_integer_as_raw(T147);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T152 = primitive_machine_word_equalQ(T151,257);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T152 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              shiftF144 = (D) 129;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T146 = shiftF144;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T150 = mxF148;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T155 = primitive_cast_integer_as_raw(T146);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T154 = primitive_machine_word_shift_right(T155,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T153 = primitive_machine_word_shift_left_signal_overflow(T150,T154);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              mxF148 = T153;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T145 = shiftF144;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T149 = mxF148;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T158 = primitive_cast_integer_as_raw(T145);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T157 = primitive_machine_word_shift_right(T158,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T156 = primitive_machine_word_shift_left_signal_overflow(T149,T157);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T159 = primitive_machine_word_logior(T156,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T160 = primitive_machine_word_subtract_signal_overflow(T159,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T161 = primitive_machine_word_logand(T143,T160);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T162 = primitive_machine_word_logand(T161,-7);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T163 = primitive_cast_raw_as_integer(T162);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T164 = SLOT_VALUE_INITD(new_d_, 0);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T165 = primitive_cast_integer_as_raw(T164);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T166 = primitive_machine_word_shift_right(T165,6);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T167 = primitive_machine_word_logand(T166,-4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T168 = primitive_machine_word_logior(T167,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            shiftF169 = (D) 33;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            mxF173 = 4;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T172 = shiftF169;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T176 = primitive_cast_integer_as_raw(T172);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T177 = primitive_machine_word_equalQ(T176,257);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T177 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              shiftF169 = (D) 129;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T171 = shiftF169;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T175 = mxF173;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T180 = primitive_cast_integer_as_raw(T171);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T179 = primitive_machine_word_shift_right(T180,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T178 = primitive_machine_word_shift_left_signal_overflow(T175,T179);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              mxF173 = T178;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T170 = shiftF169;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T174 = mxF173;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T183 = primitive_cast_integer_as_raw(T170);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T182 = primitive_machine_word_shift_right(T183,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T181 = primitive_machine_word_shift_left_signal_overflow(T174,T182);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T184 = primitive_machine_word_logior(T181,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T185 = primitive_machine_word_subtract_signal_overflow(T184,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T186 = primitive_machine_word_logand(T168,T185);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T187 = primitive_cast_raw_as_integer(T186);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T53 = Kmake_linear_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T163, T187, T56, T60);
            T54 = T53;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T62 = SLOT_VALUE_INITD(new_d_, 0);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            shiftF63 = (D) 1;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T70 = primitive_cast_integer_as_raw(T62);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T71 = primitive_machine_word_logxor(T70,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            mxF67 = T71;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T66 = shiftF63;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T72 = primitive_cast_integer_as_raw(T66);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T73 = primitive_machine_word_equalQ(T72,257);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T73 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              shiftF63 = (D) 129;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T65 = shiftF63;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T69 = mxF67;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T76 = primitive_cast_integer_as_raw(T65);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T75 = primitive_machine_word_shift_right(T76,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T74 = primitive_machine_word_shift_left_signal_overflow(T69,T75);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              mxF67 = T74;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T64 = shiftF63;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T68 = mxF67;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T79 = primitive_cast_integer_as_raw(T64);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T78 = primitive_machine_word_shift_right(T79,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T77 = primitive_machine_word_shift_left_signal_overflow(T68,T78);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T80 = primitive_machine_word_logior(T77,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            shiftF81 = (D) 25;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            mxF85 = 4;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T84 = shiftF81;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T88 = primitive_cast_integer_as_raw(T84);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T89 = primitive_machine_word_equalQ(T88,257);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T89 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              shiftF81 = (D) 129;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T83 = shiftF81;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T87 = mxF85;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T92 = primitive_cast_integer_as_raw(T83);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T91 = primitive_machine_word_shift_right(T92,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T90 = primitive_machine_word_shift_left_signal_overflow(T87,T91);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              mxF85 = T90;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T82 = shiftF81;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T86 = mxF85;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T95 = primitive_cast_integer_as_raw(T82);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T94 = primitive_machine_word_shift_right(T95,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T93 = primitive_machine_word_shift_left_signal_overflow(T86,T94);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T96 = primitive_machine_word_logior(T93,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T97 = primitive_machine_word_subtract_signal_overflow(T96,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T98 = primitive_machine_word_logand(T80,T97);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T99 = primitive_machine_word_logior(T98,5);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T100 = primitive_cast_raw_as_integer(T99);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T101 = SLOT_VALUE_INITD(new_d_, 0);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T102 = primitive_cast_integer_as_raw(T101);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T103 = primitive_machine_word_shift_right(T102,6);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T104 = primitive_machine_word_logand(T103,-4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T105 = primitive_machine_word_logior(T104,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            shiftF106 = (D) 33;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            mxF110 = 4;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T109 = shiftF106;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T113 = primitive_cast_integer_as_raw(T109);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T114 = primitive_machine_word_equalQ(T113,257);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T114 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              shiftF106 = (D) 129;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T108 = shiftF106;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T112 = mxF110;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T117 = primitive_cast_integer_as_raw(T108);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T116 = primitive_machine_word_shift_right(T117,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T115 = primitive_machine_word_shift_left_signal_overflow(T112,T116);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              mxF110 = T115;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T107 = shiftF106;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T111 = mxF110;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T120 = primitive_cast_integer_as_raw(T107);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T119 = primitive_machine_word_shift_right(T120,2);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T118 = primitive_machine_word_shift_left_signal_overflow(T111,T119);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T121 = primitive_machine_word_logior(T118,1);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T122 = primitive_machine_word_subtract_signal_overflow(T121,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T123 = primitive_machine_word_logand(T105,T122);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T124 = primitive_cast_raw_as_integer(T123);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T51 = Khashed_class_keyed_discriminator_log2sizeYdispatch_engine_internalVdylanI(T56);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T52 = Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T100, T124, T51, T60);
            T54 = T52;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          Kcopy_class_keyed_discriminator_attributesYdispatch_engine_internalVdylanI(new_d_, T54);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          iF193T = 1;
          ndF194T = T54;
        L1: ;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            iF193 = iF193T;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            ndF194 = ndF194T;
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T189 = primitive_machine_word_equalQ(iF193,T49);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T189 != &KPfalseVKi) {
              T196 = ndF194;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T190 = primitive_machine_word_add_signal_overflow(iF193,8);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T208 = REPEATED_D_SLOT_VALUE_TAGGED(new_d_, 6, iF193);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T191 = primitive_machine_word_add_signal_overflow(iF193,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T209 = REPEATED_D_SLOT_VALUE_TAGGED(new_d_, 6, T191);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T188 = Kckd_addXYdispatch_engine_internalVdylanI(ndF194, T208, T209);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              iF193T = T190;
              ndF194T = T188;
              goto L1;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T195 = T192;
              T196 = T195;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T45 = Kckd_addXYdispatch_engine_internalVdylanI(T196, T43, T44);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T202 = T45;
          T206 = T202;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T210 = REPEATED_D_SLOT_VALUE_TAGGED(new_d_, 6, iF201);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T46 = Dckd_emptyVKg;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T47 = primitive_idQ(T210,T46);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          if (T47 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T197 = primitive_machine_word_add_signal_overflow(iF201,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T44, new_d_, 6, T197);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T43, new_d_, 6, iF201);
            T205 = new_d_;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T211 = REPEATED_D_SLOT_VALUE_TAGGED(new_d_, 6, iF201);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T48 = primitive_idQ(T211,T43);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            if (T48 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T198 = primitive_machine_word_add_signal_overflow(iF201,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T44, new_d_, 6, T198);
              T204 = new_d_;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T199 = primitive_machine_word_add_signal_overflow(iF201,8);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              iF201T = T199;
              goto L0;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
              T203 = T200;
              T204 = T203;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
            T205 = T204;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
          T206 = T205;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1041
      T11_0 = Kckd_addXYdispatch_engine_internalVdylanI(T206, key_, value_);
      T12_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1029
    T13_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1029
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1025
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kgrounded_hckd_addXYdispatch_engine_internalVdylanI (D d_, D key_, D value_) {
  D dF3;
  D T4_0;
  D T5;
  D T6;
  D stepF7;
  D maskF8;
  D T9;
  D T10_0;
  D T10_1;
  D T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D shiftF16;
  D T17;
  D T18;
  D T19;
  DWORD mxF20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  D shiftF51;
  D T52;
  D T53;
  D T54;
  DWORD mxF55;
  DWORD T56;
  DWORD T57;
  D T58;
  D T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  D T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  DWORD T69;
  DWORD T70;
  DSINT T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  D T75;
  D T76;
  DWORD T77;
  DWORD T78;
  DWORD T79;
  D T80;
  DWORD T81;
  DWORD T82;
  DWORD T83;
  DWORD T84;
  D shiftF85;
  D T86;
  D T87;
  D T88;
  DWORD mxF89;
  DWORD T90;
  DWORD T91;
  D T92;
  D T93;
  DWORD T94;
  D T95;
  DWORD T96;
  DWORD T97;
  DWORD T98;
  DWORD T99;
  DWORD T100;
  DWORD T101;
  DWORD T102;
  DWORD T103;
  DWORD T104;
  DWORD T105;
  D T106;
  D T107_0;
  D T107_1;
  DWORD T108;
  DWORD T109;
  D T110;
  D T111;
  D T112;
  D T113;
  D T114;
  D T115;
  D T116;
  D T117;
  DWORD T118;
  DWORD T119;
  DWORD T120;
  DWORD T121;
  DWORD T122;
  DWORD T123;
  DWORD T124;
  D T125;
  DWORD iF126T, iF126;
  DWORD nprobesF127T, nprobesF127;
  D T128;
  D ndF129;
  D T130_0;
  D T131;
  DWORD T132;
  DWORD T133;
  DWORD T134;
  DWORD T135;
  D shiftF136;
  D T137;
  D T138;
  D T139;
  DWORD mxF140;
  DWORD T141;
  DWORD T142;
  DWORD T143;
  D T144;
  DWORD T145;
  DWORD T146;
  DWORD T147;
  DWORD T148;
  DWORD T149;
  DWORD T150;
  DWORD T151;
  DWORD T152;
  DWORD T153;
  D shiftF154;
  D T155;
  D T156;
  DWORD mxF157;
  DWORD T158;
  DWORD T159;
  DWORD T160;
  D T161;
  DWORD T162;
  DWORD T163;
  DWORD T164;
  D T165;
  DWORD T166;
  DWORD T167;
  D T168;
  D T169;
  D shiftF170;
  D T171;
  D T172;
  D T173;
  DWORD mxF174;
  DWORD T175;
  DWORD T176;
  DWORD T177;
  DWORD T178;
  DWORD T179;
  D T180;
  DWORD T181;
  DWORD T182;
  DWORD T183;
  DWORD T184;
  DWORD T185;
  DWORD T186;
  DWORD T187;
  D shiftF188;
  D T189;
  D T190;
  D T191;
  DWORD mxF192;
  DWORD T193;
  DWORD T194;
  DWORD T195;
  D T196;
  DWORD T197;
  DWORD T198;
  DWORD T199;
  DWORD T200;
  DWORD T201;
  DWORD T202;
  DWORD T203;
  DWORD T204;
  DWORD T205;
  D T206;
  D T207;
  DWORD T208;
  DWORD T209;
  DWORD T210;
  DWORD T211;
  D shiftF212;
  D T213;
  D T214;
  D T215;
  DWORD mxF216;
  DWORD T217;
  DWORD T218;
  DWORD T219;
  D T220;
  DWORD T221;
  DWORD T222;
  DWORD T223;
  DWORD T224;
  DWORD T225;
  DWORD T226;
  DWORD T227;
  DWORD T228;
  DWORD T229;
  D T230;
  DWORD T231;
  D T232;
  D T233;
  D T234;
  D T235;
  D T236;
  D T237;
  D T238;
  D T239;
  DWORD T240;
  D T241;
  DWORD iF242;
  D ndF243;
  DWORD T244;
  DWORD T245;
  D T246;
  DWORD iF247T, iF247;
  D ndF248T, ndF248;
  D T249;
  DWORD T250;
  D T251;
  D T252;
  DWORD T253;
  D T254;
  DWORD T255;
  DWORD T256;
  DWORD T257;
  D T258;
  DWORD T259;
  DWORD T260;
  DWORD T261;
  D T262;
  D T263;
  DWORD T264;
  D T265;
  D T266;
  D T267;
  DWORD T268;
  DWORD T269;
  D T270;
  DWORD iF271T, iF271;
  DWORD cntF272T, cntF272;
  D T273;
  D T274;
  D T275;
  D T276;
  D T277;
  D T278;
  D T279;
  DWORD T280;
  DWORD T281;
  D T282;
  D T283;
  D T284;
  D T285;
  D T286;
  D dF287;
  D T288;
  D keyF289;
  D T290;
  D valueF291;
  D T292;
  D stepF293;
  D maskF294;
  D T295;
  D T296_0;
  D T296_1;
  D T297;
  DWORD T298;
  DWORD T299;
  DWORD T300;
  DWORD T301;
  D shiftF302;
  D T303;
  D T304;
  D T305;
  DWORD mxF306;
  DWORD T307;
  DWORD T308;
  DWORD T309;
  D T310;
  DWORD T311;
  DWORD T312;
  DWORD T313;
  DWORD T314;
  DWORD T315;
  DWORD T316;
  DWORD T317;
  DWORD T318;
  DWORD T319;
  D T320;
  DWORD T321;
  DWORD T322;
  DWORD T323;
  D T324;
  D T325;
  DWORD T326;
  DWORD T327;
  DWORD T328;
  D T329;
  DWORD T330;
  DWORD T331;
  DWORD T332;
  DWORD T333;
  DWORD T334;
  DWORD T335;
  D T336;
  D shiftF337;
  D T338;
  D T339;
  D T340;
  DWORD mxF341;
  DWORD T342;
  DWORD T343;
  D T344;
  D T345;
  DWORD T346;
  DWORD T347;
  DWORD T348;
  D T349;
  DWORD T350;
  DWORD T351;
  DWORD T352;
  DWORD T353;
  DWORD T354;
  DWORD T355;
  DWORD T356;
  DSINT T357;
  DWORD T358;
  DWORD T359;
  DWORD T360;
  D T361;
  D T362;
  DWORD T363;
  DWORD T364;
  DWORD T365;
  D T366;
  DWORD T367;
  DWORD T368;
  DWORD T369;
  DWORD T370;
  D shiftF371;
  D T372;
  D T373;
  D T374;
  DWORD mxF375;
  DWORD T376;
  DWORD T377;
  D T378;
  D T379;
  DWORD T380;
  D T381;
  DWORD T382;
  DWORD T383;
  DWORD T384;
  DWORD T385;
  DWORD T386;
  DWORD T387;
  DWORD T388;
  DWORD T389;
  DWORD T390;
  DWORD T391;
  D T392;
  D T393_0;
  D T393_1;
  DWORD T394;
  DWORD T395;
  D T396;
  D T397;
  D T398;
  D T399;
  D T400;
  D T401;
  D T402;
  D T403;
  DWORD T404;
  DWORD T405;
  DWORD T406;
  DWORD T407;
  DWORD T408;
  DWORD T409;
  DWORD T410;
  D T411;
  DWORD iF412T, iF412;
  DWORD nprobesF413T, nprobesF413;
  D T414;
  D ndF415;
  D T416_0;
  D T417;
  DWORD T418;
  DWORD T419;
  DWORD T420;
  DWORD T421;
  D shiftF422;
  D T423;
  D T424;
  D T425;
  DWORD mxF426;
  DWORD T427;
  DWORD T428;
  DWORD T429;
  D T430;
  DWORD T431;
  DWORD T432;
  DWORD T433;
  DWORD T434;
  DWORD T435;
  DWORD T436;
  DWORD T437;
  DWORD T438;
  DWORD T439;
  D shiftF440;
  D T441;
  D T442;
  DWORD mxF443;
  DWORD T444;
  DWORD T445;
  DWORD T446;
  D T447;
  DWORD T448;
  DWORD T449;
  DWORD T450;
  D T451;
  DWORD T452;
  DWORD T453;
  D T454;
  D T455;
  D shiftF456;
  D T457;
  D T458;
  D T459;
  DWORD mxF460;
  DWORD T461;
  DWORD T462;
  DWORD T463;
  DWORD T464;
  DWORD T465;
  D T466;
  DWORD T467;
  DWORD T468;
  DWORD T469;
  DWORD T470;
  DWORD T471;
  DWORD T472;
  DWORD T473;
  D shiftF474;
  D T475;
  D T476;
  D T477;
  DWORD mxF478;
  DWORD T479;
  DWORD T480;
  DWORD T481;
  D T482;
  DWORD T483;
  DWORD T484;
  DWORD T485;
  DWORD T486;
  DWORD T487;
  DWORD T488;
  DWORD T489;
  DWORD T490;
  DWORD T491;
  D T492;
  D T493;
  DWORD T494;
  DWORD T495;
  DWORD T496;
  DWORD T497;
  D shiftF498;
  D T499;
  D T500;
  D T501;
  DWORD mxF502;
  DWORD T503;
  DWORD T504;
  DWORD T505;
  D T506;
  DWORD T507;
  DWORD T508;
  DWORD T509;
  DWORD T510;
  DWORD T511;
  DWORD T512;
  DWORD T513;
  DWORD T514;
  DWORD T515;
  D T516;
  DWORD T517;
  D T518;
  D T519;
  D T520;
  D T521;
  D T522;
  D T523;
  D T524;
  D T525;
  DWORD T526;
  D T527;
  DWORD iF528;
  D ndF529;
  DWORD T530;
  DWORD T531;
  D T532;
  DWORD iF533T, iF533;
  D ndF534T, ndF534;
  D T535;
  DWORD T536;
  D T537;
  D T538;
  DWORD T539;
  D T540;
  DWORD T541;
  DWORD T542;
  DWORD T543;
  D T544;
  DWORD T545;
  DWORD T546;
  DWORD T547;
  D T548;
  D T549;
  DWORD T550;
  D T551;
  D T552;
  D T553;
  DWORD T554;
  DWORD T555;
  D T556;
  DWORD iF557T, iF557;
  DWORD cntF558T, cntF558;
  D T559;
  D T560;
  D T561;
  D T562;
  D T563;
  D T564;
  D T565;
  DWORD T566;
  DWORD T567;
  D T568;
  D T569;
  D T570;
  D T571;
  D T572;
  D dF573T, dF573;
  D keyF574T, keyF574;
  D valueF575T, valueF575;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1100
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
  dF573T = d_;
  keyF574T = key_;
  valueF575T = value_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    dF573 = dF573T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    keyF574 = keyF574T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    valueF575 = valueF575T;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    dF287 = dF573;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    T288 = dF287;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    keyF289 = keyF574;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    T290 = keyF289;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    valueF291 = valueF575;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
    T292 = valueF291;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1103
    T6 = primitive_instanceQ(T288,&KLhashed_by_singleton_class_discriminatorGVKg);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1103
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1017
      T5 = T288;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T11 = SLOT_VALUE_INITD(T5, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T12 = primitive_cast_integer_as_raw(T11);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T13 = primitive_machine_word_shift_right(T12,23);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T14 = primitive_machine_word_logand(T13,-4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T15 = primitive_machine_word_logior(T14,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      shiftF16 = (D) 21;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      mxF20 = 4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T19 = shiftF16;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T23 = primitive_cast_integer_as_raw(T19);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T24 = primitive_machine_word_equalQ(T23,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        shiftF16 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T18 = shiftF16;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T22 = mxF20;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T27 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T26 = primitive_machine_word_shift_right(T27,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T25 = primitive_machine_word_shift_left_signal_overflow(T22,T26);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        mxF20 = T25;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T17 = shiftF16;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T21 = mxF20;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T30 = primitive_cast_integer_as_raw(T17);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T29 = primitive_machine_word_shift_right(T30,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T28 = primitive_machine_word_shift_left_signal_overflow(T21,T29);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T31 = primitive_machine_word_logior(T28,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T32 = primitive_machine_word_subtract_signal_overflow(T31,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T33 = primitive_machine_word_logand(T15,T32);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T34 = primitive_cast_raw_as_integer(T33);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T9 = KPsecond_hash_valuesVKgI();
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T35 = primitive_machine_word_logxor(T33,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T36 = primitive_machine_word_negative_signal_overflow(T35);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T37 = primitive_machine_word_logior(T36,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T38 = primitive_cast_raw_as_integer(T37);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T39 = primitive_machine_word_less_thanQ(T37,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      if (T39 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T40 = primitive_machine_word_logxor(T37,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T41 = primitive_machine_word_negative_signal_overflow(T40);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T42 = primitive_machine_word_logior(T41,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T43 = primitive_machine_word_less_thanQ(T42,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T43 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T44 = primitive_cast_integer_as_raw(T290);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T46 = primitive_machine_word_shift_right(T41,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T45 = primitive_machine_word_shift_right(T44,T46);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T47 = primitive_machine_word_logand(T45,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T48 = primitive_machine_word_logior(T47,1);
          T72 = T48;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T49 = primitive_cast_integer_as_raw(T290);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T50 = primitive_machine_word_less_thanQ(T49,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          if (T50 != &KPfalseVKi) {
            T71 = -3;
          } else {
            T71 = 1;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T72 = T71;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T73 = T72;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T59 = primitive_machine_word_less_thanQ(T37,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T59 != &KPfalseVKi) {
          T58 = T38;
        } else {
          T58 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        shiftF51 = T58;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T60 = primitive_cast_integer_as_raw(T290);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T61 = primitive_machine_word_logxor(T60,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        mxF55 = T61;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T54 = shiftF51;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T62 = primitive_cast_integer_as_raw(T54);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T63 = primitive_machine_word_equalQ(T62,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T63 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          shiftF51 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T53 = shiftF51;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T57 = mxF55;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T66 = primitive_cast_integer_as_raw(T53);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T65 = primitive_machine_word_shift_right(T66,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T64 = primitive_machine_word_shift_left_signal_overflow(T57,T65);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          mxF55 = T64;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T52 = shiftF51;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T56 = mxF55;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T69 = primitive_cast_integer_as_raw(T52);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T68 = primitive_machine_word_shift_right(T69,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T67 = primitive_machine_word_shift_left_signal_overflow(T56,T68);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T70 = primitive_machine_word_logior(T67,1);
        T73 = T70;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T74 = primitive_machine_word_logand(T73,61);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T75 = REPEATED_D_SLOT_VALUE_TAGGED(T9, 1, T74);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T76 = primitive_machine_word_less_thanQ(T33,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      if (T76 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T77 = primitive_machine_word_logxor(T33,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T78 = primitive_machine_word_negative_signal_overflow(T77);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T79 = primitive_machine_word_logior(T78,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T80 = primitive_machine_word_less_thanQ(T79,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T80 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T82 = primitive_machine_word_shift_right(T78,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T81 = primitive_machine_word_shift_right(5,T82);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T83 = primitive_machine_word_logand(T81,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T84 = primitive_machine_word_logior(T83,1);
          T103 = T84;
        } else {
          T103 = 1;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T104 = T103;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T93 = primitive_machine_word_less_thanQ(T33,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T93 != &KPfalseVKi) {
          T92 = T34;
        } else {
          T92 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        shiftF85 = T92;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        mxF89 = 4;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T88 = shiftF85;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T94 = primitive_cast_integer_as_raw(T88);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T95 = primitive_machine_word_equalQ(T94,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T95 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          shiftF85 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T87 = shiftF85;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T91 = mxF89;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T98 = primitive_cast_integer_as_raw(T87);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T97 = primitive_machine_word_shift_right(T98,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T96 = primitive_machine_word_shift_left_signal_overflow(T91,T97);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          mxF89 = T96;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T86 = shiftF85;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T90 = mxF89;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T101 = primitive_cast_integer_as_raw(T86);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T100 = primitive_machine_word_shift_right(T101,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T99 = primitive_machine_word_shift_left_signal_overflow(T90,T100);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T102 = primitive_machine_word_logior(T99,1);
        T104 = T102;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T105 = primitive_machine_word_subtract_signal_overflow(T104,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T106 = primitive_cast_raw_as_integer(T105);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T107_0 = T75;
      T107_1 = T106;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T10_0 = T107_0;
      T10_1 = T107_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      stepF7 = T10_0;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T119 = primitive_cast_integer_as_raw(stepF7);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T120 = primitive_machine_word_logxor(T119,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      maskF8 = T10_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T122 = primitive_cast_integer_as_raw(maskF8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T279 = SLOT_VALUE_INITD(T5, 6);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T280 = primitive_cast_integer_as_raw(T279);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T281 = primitive_machine_word_subtract_signal_overflow(T280,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T108 = primitive_cast_integer_as_raw(T290);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T109 = primitive_machine_word_logand(T108,T281);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      iF126T = T109;
      nprobesF127T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        iF126 = iF126T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        nprobesF127 = nprobesF127T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T282 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, iF126);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T110 = primitive_idQ(T282,T290);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T110 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T118 = primitive_machine_word_add_signal_overflow(iF126,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T292, T5, 7, T118);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T111 = T5;
          MV_SET_ELT(0, T5);
          MV_SET_COUNT(1);
          T117 = T111;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T112 = Dckd_emptyVKg;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T113 = primitive_idQ(T282,T112);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          if (T113 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            iF271T = 1;
            cntF272T = 1;
          L2: ;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              iF271 = iF271T;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T273 = primitive_cast_raw_as_integer(iF271);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              cntF272 = cntF272T;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T254 = primitive_idQ(T273,T279);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T254 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T255 = primitive_machine_word_shift_right(T280,3);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T256 = primitive_machine_word_logand(T255,-4);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T257 = primitive_machine_word_logior(T256,1);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T258 = primitive_machine_word_less_thanQ(T257,cntF272);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                if (T258 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T259 = primitive_machine_word_shift_right(T280,2);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T260 = primitive_machine_word_logand(T259,-4);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T261 = primitive_machine_word_logior(T260,1);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T262 = primitive_machine_word_less_thanQ(T261,cntF272);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  if (T262 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T264 = primitive_machine_word_add_signal_overflow(T257,T260);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T266 = primitive_machine_word_less_thanQ(cntF272,T264);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T265 = primitive_not(T266);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    if (T266 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                      T267 = primitive_machine_word_less_thanQ(17,nprobesF127);
                      T274 = T267;
                    } else {
                      T274 = T265;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T275 = T274;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T263 = primitive_machine_word_less_thanQ(29,nprobesF127);
                    T275 = T263;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T276 = T275;
                } else {
                  T276 = &KPfalseVKi;
                }
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T278 = T276;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T268 = primitive_machine_word_add_signal_overflow(iF271,8);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T283 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, iF271);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T251 = Dckd_emptyVKg;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T252 = KEEVKdI(T283, T251);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                if (T252 != &KPfalseVKi) {
                  T253 = cntF272;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T269 = primitive_machine_word_add_signal_overflow(cntF272,4);
                  T253 = T269;
                }
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                iF271T = T268;
                cntF272T = T253;
                goto L2;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T277 = T270;
                T278 = T277;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            if (T278 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T131 = SLOT_VALUE_INITD(T5, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T132 = primitive_cast_integer_as_raw(T131);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T133 = primitive_machine_word_shift_right(T132,23);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T134 = primitive_machine_word_logand(T133,-4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T135 = primitive_machine_word_logior(T134,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF136 = (D) 21;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF140 = 4;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T139 = shiftF136;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T143 = primitive_cast_integer_as_raw(T139);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T144 = primitive_machine_word_equalQ(T143,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T144 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF136 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T138 = shiftF136;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T142 = mxF140;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T147 = primitive_cast_integer_as_raw(T138);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T146 = primitive_machine_word_shift_right(T147,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T145 = primitive_machine_word_shift_left_signal_overflow(T142,T146);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF140 = T145;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T137 = shiftF136;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T141 = mxF140;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T150 = primitive_cast_integer_as_raw(T137);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T149 = primitive_machine_word_shift_right(T150,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T148 = primitive_machine_word_shift_left_signal_overflow(T141,T149);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T151 = primitive_machine_word_logior(T148,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T152 = primitive_machine_word_subtract_signal_overflow(T151,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T153 = primitive_machine_word_logand(T135,T152);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF154 = (D) 5;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T159 = primitive_machine_word_logxor(T280,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF157 = T159;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T156 = shiftF154;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T160 = primitive_cast_integer_as_raw(T156);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T161 = primitive_machine_word_equalQ(T160,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T161 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF154 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T155 = shiftF154;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T158 = mxF157;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T164 = primitive_cast_integer_as_raw(T155);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T163 = primitive_machine_word_shift_right(T164,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T162 = primitive_machine_word_shift_left_signal_overflow(T158,T163);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF157 = T162;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF154;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF157;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T165 = SLOT_VALUE_INITD(T5, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T166 = primitive_cast_integer_as_raw(T165);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T167 = primitive_machine_word_logand(T166,33488897);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T168 = primitive_cast_raw_as_integer(T167);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T169 = SLOT_VALUE_INITD(T5, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF170 = (D) 1;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T177 = primitive_cast_integer_as_raw(T169);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T178 = primitive_machine_word_logxor(T177,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF174 = T178;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T173 = shiftF170;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T179 = primitive_cast_integer_as_raw(T173);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T180 = primitive_machine_word_equalQ(T179,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T180 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF170 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T172 = shiftF170;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T176 = mxF174;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T183 = primitive_cast_integer_as_raw(T172);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T182 = primitive_machine_word_shift_right(T183,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T181 = primitive_machine_word_shift_left_signal_overflow(T176,T182);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF174 = T181;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T171 = shiftF170;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T175 = mxF174;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T186 = primitive_cast_integer_as_raw(T171);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T185 = primitive_machine_word_shift_right(T186,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T184 = primitive_machine_word_shift_left_signal_overflow(T175,T185);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T187 = primitive_machine_word_logior(T184,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF188 = (D) 25;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF192 = 4;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T191 = shiftF188;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T195 = primitive_cast_integer_as_raw(T191);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T196 = primitive_machine_word_equalQ(T195,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T196 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF188 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T190 = shiftF188;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T194 = mxF192;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T199 = primitive_cast_integer_as_raw(T190);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T198 = primitive_machine_word_shift_right(T199,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T197 = primitive_machine_word_shift_left_signal_overflow(T194,T198);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF192 = T197;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T189 = shiftF188;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T193 = mxF192;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T202 = primitive_cast_integer_as_raw(T189);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T201 = primitive_machine_word_shift_right(T202,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T200 = primitive_machine_word_shift_left_signal_overflow(T193,T201);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T203 = primitive_machine_word_logior(T200,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T204 = primitive_machine_word_subtract_signal_overflow(T203,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T205 = primitive_machine_word_logand(T187,T204);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T206 = primitive_cast_raw_as_integer(T205);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T207 = SLOT_VALUE_INITD(T5, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T208 = primitive_cast_integer_as_raw(T207);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T209 = primitive_machine_word_shift_right(T208,6);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T210 = primitive_machine_word_logand(T209,-4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T211 = primitive_machine_word_logior(T210,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF212 = (D) 33;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF216 = 4;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T215 = shiftF212;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T219 = primitive_cast_integer_as_raw(T215);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T220 = primitive_machine_word_equalQ(T219,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T220 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF212 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T214 = shiftF212;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T218 = mxF216;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T223 = primitive_cast_integer_as_raw(T214);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T222 = primitive_machine_word_shift_right(T223,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T221 = primitive_machine_word_shift_left_signal_overflow(T218,T222);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF216 = T221;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T213 = shiftF212;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T217 = mxF216;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T226 = primitive_cast_integer_as_raw(T213);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T225 = primitive_machine_word_shift_right(T226,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T224 = primitive_machine_word_shift_left_signal_overflow(T217,T225);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T227 = primitive_machine_word_logior(T224,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T228 = primitive_machine_word_subtract_signal_overflow(T227,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T229 = primitive_machine_word_logand(T211,T228);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T230 = primitive_cast_raw_as_integer(T229);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T231 = primitive_machine_word_add_signal_overflow(T153,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T232 = primitive_cast_raw_as_integer(T231);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T128 = Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T206, T230, T232, T168);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              ndF129 = T128;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              Kcopy_class_keyed_discriminator_attributesYdispatch_engine_internalVdylanI(T5, ndF129);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              iF247T = 1;
              ndF248T = ndF129;
            L3: ;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                iF247 = iF247T;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                ndF248 = ndF248T;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                iF242 = iF247;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                ndF243 = ndF248;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T239 = primitive_machine_word_equalQ(iF242,T280);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                if (T239 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T233 = ndF243;
                  MV_SET_ELT(0, ndF243);
                  MV_SET_COUNT(1);
                  T238 = T233;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T284 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, iF242);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T234 = Dckd_emptyVKg;
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T235 = primitive_idQ(T284,T234);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  if (T235 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T240 = primitive_machine_word_add_signal_overflow(iF242,8);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    iF247T = T240;
                    ndF248T = ndF248;
                    goto L3;
                    T237 = T241;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T244 = primitive_machine_word_add_signal_overflow(iF242,8);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T245 = primitive_machine_word_add_signal_overflow(iF242,4);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T285 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 7, T245);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T236 = Kckd_addXYdispatch_engine_internalVdylanI(ndF243, T284, T285);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    iF247T = T244;
                    ndF248T = T236;
                    goto L3;
                    T237 = T246;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T238 = T237;
                }
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T130_0 = T238;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T249 = T130_0;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              dF573T = T249;
              keyF574T = keyF574;
              valueF575T = valueF575;
              goto L0;
              T115 = T286;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T250 = primitive_machine_word_add_signal_overflow(iF126,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T292, T5, 7, T250);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T290, T5, 7, iF126);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T114 = T5;
              MV_SET_ELT(0, T5);
              MV_SET_COUNT(1);
              T115 = T114;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T116 = T115;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T121 = primitive_machine_word_add_signal_overflow(iF126,T120);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T123 = primitive_machine_word_logand(T121,T122);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T124 = primitive_machine_word_add_signal_overflow(nprobesF127,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            iF126T = T123;
            nprobesF127T = T124;
            goto L1;
            T116 = T125;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T117 = T116;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T4_0 = T117;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1103
      dF3 = T288;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T297 = SLOT_VALUE_INITD(dF3, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T298 = primitive_cast_integer_as_raw(T297);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T299 = primitive_machine_word_shift_right(T298,23);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T300 = primitive_machine_word_logand(T299,-4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T301 = primitive_machine_word_logior(T300,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      shiftF302 = (D) 21;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      mxF306 = 4;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T305 = shiftF302;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T309 = primitive_cast_integer_as_raw(T305);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T310 = primitive_machine_word_equalQ(T309,257);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      if (T310 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        shiftF302 = (D) 129;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T304 = shiftF302;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T308 = mxF306;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T313 = primitive_cast_integer_as_raw(T304);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T312 = primitive_machine_word_shift_right(T313,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T311 = primitive_machine_word_shift_left_signal_overflow(T308,T312);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        mxF306 = T311;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T303 = shiftF302;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T307 = mxF306;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T316 = primitive_cast_integer_as_raw(T303);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T315 = primitive_machine_word_shift_right(T316,2);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T314 = primitive_machine_word_shift_left_signal_overflow(T307,T315);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T317 = primitive_machine_word_logior(T314,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T318 = primitive_machine_word_subtract_signal_overflow(T317,4);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T319 = primitive_machine_word_logand(T301,T318);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T320 = primitive_cast_raw_as_integer(T319);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T295 = KPsecond_hash_valuesVKgI();
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T321 = primitive_machine_word_logxor(T319,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T322 = primitive_machine_word_negative_signal_overflow(T321);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T323 = primitive_machine_word_logior(T322,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T324 = primitive_cast_raw_as_integer(T323);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T325 = primitive_machine_word_less_thanQ(T323,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      if (T325 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T326 = primitive_machine_word_logxor(T323,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T327 = primitive_machine_word_negative_signal_overflow(T326);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T328 = primitive_machine_word_logior(T327,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T329 = primitive_machine_word_less_thanQ(T328,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T329 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T330 = primitive_cast_integer_as_raw(T290);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T332 = primitive_machine_word_shift_right(T327,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T331 = primitive_machine_word_shift_right(T330,T332);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T333 = primitive_machine_word_logand(T331,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T334 = primitive_machine_word_logior(T333,1);
          T358 = T334;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T335 = primitive_cast_integer_as_raw(T290);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T336 = primitive_machine_word_less_thanQ(T335,1);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          if (T336 != &KPfalseVKi) {
            T357 = -3;
          } else {
            T357 = 1;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T358 = T357;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T359 = T358;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T345 = primitive_machine_word_less_thanQ(T323,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T345 != &KPfalseVKi) {
          T344 = T324;
        } else {
          T344 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        shiftF337 = T344;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T346 = primitive_cast_integer_as_raw(T290);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T347 = primitive_machine_word_logxor(T346,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        mxF341 = T347;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T340 = shiftF337;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T348 = primitive_cast_integer_as_raw(T340);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T349 = primitive_machine_word_equalQ(T348,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T349 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          shiftF337 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T339 = shiftF337;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T343 = mxF341;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T352 = primitive_cast_integer_as_raw(T339);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T351 = primitive_machine_word_shift_right(T352,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T350 = primitive_machine_word_shift_left_signal_overflow(T343,T351);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          mxF341 = T350;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T338 = shiftF337;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T342 = mxF341;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T355 = primitive_cast_integer_as_raw(T338);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T354 = primitive_machine_word_shift_right(T355,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T353 = primitive_machine_word_shift_left_signal_overflow(T342,T354);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T356 = primitive_machine_word_logior(T353,1);
        T359 = T356;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T360 = primitive_machine_word_logand(T359,61);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T361 = REPEATED_D_SLOT_VALUE_TAGGED(T295, 1, T360);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T362 = primitive_machine_word_less_thanQ(T319,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      if (T362 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T363 = primitive_machine_word_logxor(T319,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T364 = primitive_machine_word_negative_signal_overflow(T363);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T365 = primitive_machine_word_logior(T364,1);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T366 = primitive_machine_word_less_thanQ(T365,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T366 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T368 = primitive_machine_word_shift_right(T364,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T367 = primitive_machine_word_shift_right(5,T368);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T369 = primitive_machine_word_logand(T367,-4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T370 = primitive_machine_word_logior(T369,1);
          T389 = T370;
        } else {
          T389 = 1;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T390 = T389;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T379 = primitive_machine_word_less_thanQ(T319,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T379 != &KPfalseVKi) {
          T378 = T320;
        } else {
          T378 = (D) 257;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        shiftF371 = T378;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        mxF375 = 4;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T374 = shiftF371;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T380 = primitive_cast_integer_as_raw(T374);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T381 = primitive_machine_word_equalQ(T380,257);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T381 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          shiftF371 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T373 = shiftF371;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T377 = mxF375;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T384 = primitive_cast_integer_as_raw(T373);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T383 = primitive_machine_word_shift_right(T384,2);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T382 = primitive_machine_word_shift_left_signal_overflow(T377,T383);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          mxF375 = T382;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T372 = shiftF371;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T376 = mxF375;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T387 = primitive_cast_integer_as_raw(T372);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T386 = primitive_machine_word_shift_right(T387,2);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T385 = primitive_machine_word_shift_left_signal_overflow(T376,T386);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T388 = primitive_machine_word_logior(T385,1);
        T390 = T388;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T391 = primitive_machine_word_subtract_signal_overflow(T390,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T392 = primitive_cast_raw_as_integer(T391);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T393_0 = T361;
      T393_1 = T392;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T296_0 = T393_0;
      T296_1 = T393_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      stepF293 = T296_0;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T405 = primitive_cast_integer_as_raw(stepF293);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T406 = primitive_machine_word_logxor(T405,1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      maskF294 = T296_1;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T408 = primitive_cast_integer_as_raw(maskF294);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T565 = SLOT_VALUE_INITD(dF3, 5);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T566 = primitive_cast_integer_as_raw(T565);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T567 = primitive_machine_word_subtract_signal_overflow(T566,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T394 = primitive_cast_integer_as_raw(T290);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T395 = primitive_machine_word_logand(T394,T567);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      iF412T = T395;
      nprobesF413T = 1;
    L4: ;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        iF412 = iF412T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        nprobesF413 = nprobesF413T;
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T568 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, iF412);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        T396 = primitive_idQ(T568,T290);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        if (T396 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T404 = primitive_machine_word_add_signal_overflow(iF412,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T292, dF3, 6, T404);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T397 = dF3;
          MV_SET_ELT(0, dF3);
          MV_SET_COUNT(1);
          T403 = T397;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T398 = Dckd_emptyVKg;
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T399 = primitive_idQ(T568,T398);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          if (T399 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            iF557T = 1;
            cntF558T = 1;
          L5: ;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              iF557 = iF557T;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T559 = primitive_cast_raw_as_integer(iF557);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              cntF558 = cntF558T;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T540 = primitive_idQ(T559,T565);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T540 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T541 = primitive_machine_word_shift_right(T566,3);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T542 = primitive_machine_word_logand(T541,-4);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T543 = primitive_machine_word_logior(T542,1);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T544 = primitive_machine_word_less_thanQ(T543,cntF558);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                if (T544 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T545 = primitive_machine_word_shift_right(T566,2);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T546 = primitive_machine_word_logand(T545,-4);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T547 = primitive_machine_word_logior(T546,1);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T548 = primitive_machine_word_less_thanQ(T547,cntF558);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  if (T548 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T550 = primitive_machine_word_add_signal_overflow(T543,T546);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T552 = primitive_machine_word_less_thanQ(cntF558,T550);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T551 = primitive_not(T552);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    if (T552 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                      T553 = primitive_machine_word_less_thanQ(17,nprobesF413);
                      T560 = T553;
                    } else {
                      T560 = T551;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T561 = T560;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T549 = primitive_machine_word_less_thanQ(29,nprobesF413);
                    T561 = T549;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T562 = T561;
                } else {
                  T562 = &KPfalseVKi;
                }
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T564 = T562;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T554 = primitive_machine_word_add_signal_overflow(iF557,8);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T569 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, iF557);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T537 = Dckd_emptyVKg;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T538 = KEEVKdI(T569, T537);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                if (T538 != &KPfalseVKi) {
                  T539 = cntF558;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T555 = primitive_machine_word_add_signal_overflow(cntF558,4);
                  T539 = T555;
                }
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                iF557T = T554;
                cntF558T = T539;
                goto L5;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T563 = T556;
                T564 = T563;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            if (T564 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T417 = SLOT_VALUE_INITD(dF3, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T418 = primitive_cast_integer_as_raw(T417);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T419 = primitive_machine_word_shift_right(T418,23);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T420 = primitive_machine_word_logand(T419,-4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T421 = primitive_machine_word_logior(T420,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF422 = (D) 21;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF426 = 4;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T425 = shiftF422;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T429 = primitive_cast_integer_as_raw(T425);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T430 = primitive_machine_word_equalQ(T429,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T430 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF422 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T424 = shiftF422;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T428 = mxF426;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T433 = primitive_cast_integer_as_raw(T424);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T432 = primitive_machine_word_shift_right(T433,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T431 = primitive_machine_word_shift_left_signal_overflow(T428,T432);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF426 = T431;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T423 = shiftF422;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T427 = mxF426;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T436 = primitive_cast_integer_as_raw(T423);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T435 = primitive_machine_word_shift_right(T436,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T434 = primitive_machine_word_shift_left_signal_overflow(T427,T435);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T437 = primitive_machine_word_logior(T434,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T438 = primitive_machine_word_subtract_signal_overflow(T437,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T439 = primitive_machine_word_logand(T421,T438);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF440 = (D) 5;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T445 = primitive_machine_word_logxor(T566,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF443 = T445;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T442 = shiftF440;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T446 = primitive_cast_integer_as_raw(T442);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T447 = primitive_machine_word_equalQ(T446,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T447 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF440 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T441 = shiftF440;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T444 = mxF443;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T450 = primitive_cast_integer_as_raw(T441);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T449 = primitive_machine_word_shift_right(T450,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T448 = primitive_machine_word_shift_left_signal_overflow(T444,T449);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF443 = T448;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF440;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF443;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T451 = SLOT_VALUE_INITD(dF3, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T452 = primitive_cast_integer_as_raw(T451);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T453 = primitive_machine_word_logand(T452,33488897);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T454 = primitive_cast_raw_as_integer(T453);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T455 = SLOT_VALUE_INITD(dF3, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF456 = (D) 1;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T463 = primitive_cast_integer_as_raw(T455);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T464 = primitive_machine_word_logxor(T463,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF460 = T464;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T459 = shiftF456;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T465 = primitive_cast_integer_as_raw(T459);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T466 = primitive_machine_word_equalQ(T465,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T466 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF456 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T458 = shiftF456;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T462 = mxF460;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T469 = primitive_cast_integer_as_raw(T458);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T468 = primitive_machine_word_shift_right(T469,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T467 = primitive_machine_word_shift_left_signal_overflow(T462,T468);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF460 = T467;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T457 = shiftF456;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T461 = mxF460;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T472 = primitive_cast_integer_as_raw(T457);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T471 = primitive_machine_word_shift_right(T472,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T470 = primitive_machine_word_shift_left_signal_overflow(T461,T471);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T473 = primitive_machine_word_logior(T470,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF474 = (D) 25;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF478 = 4;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T477 = shiftF474;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T481 = primitive_cast_integer_as_raw(T477);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T482 = primitive_machine_word_equalQ(T481,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T482 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF474 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T476 = shiftF474;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T480 = mxF478;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T485 = primitive_cast_integer_as_raw(T476);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T484 = primitive_machine_word_shift_right(T485,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T483 = primitive_machine_word_shift_left_signal_overflow(T480,T484);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF478 = T483;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T475 = shiftF474;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T479 = mxF478;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T488 = primitive_cast_integer_as_raw(T475);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T487 = primitive_machine_word_shift_right(T488,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T486 = primitive_machine_word_shift_left_signal_overflow(T479,T487);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T489 = primitive_machine_word_logior(T486,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T490 = primitive_machine_word_subtract_signal_overflow(T489,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T491 = primitive_machine_word_logand(T473,T490);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T492 = primitive_cast_raw_as_integer(T491);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T493 = SLOT_VALUE_INITD(dF3, 0);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T494 = primitive_cast_integer_as_raw(T493);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T495 = primitive_machine_word_shift_right(T494,6);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T496 = primitive_machine_word_logand(T495,-4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T497 = primitive_machine_word_logior(T496,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              shiftF498 = (D) 33;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              mxF502 = 4;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T501 = shiftF498;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T505 = primitive_cast_integer_as_raw(T501);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T506 = primitive_machine_word_equalQ(T505,257);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              if (T506 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                shiftF498 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T500 = shiftF498;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T504 = mxF502;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T509 = primitive_cast_integer_as_raw(T500);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T508 = primitive_machine_word_shift_right(T509,2);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T507 = primitive_machine_word_shift_left_signal_overflow(T504,T508);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                mxF502 = T507;
              }
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T499 = shiftF498;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T503 = mxF502;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T512 = primitive_cast_integer_as_raw(T499);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T511 = primitive_machine_word_shift_right(T512,2);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T510 = primitive_machine_word_shift_left_signal_overflow(T503,T511);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T513 = primitive_machine_word_logior(T510,1);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T514 = primitive_machine_word_subtract_signal_overflow(T513,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T515 = primitive_machine_word_logand(T497,T514);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T516 = primitive_cast_raw_as_integer(T515);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T517 = primitive_machine_word_add_signal_overflow(T439,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T518 = primitive_cast_raw_as_integer(T517);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T414 = Kmake_hashed_class_keyed_discriminatorYdispatch_engine_internalVdylanI(T492, T516, T518, T454);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              ndF415 = T414;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              Kcopy_class_keyed_discriminator_attributesYdispatch_engine_internalVdylanI(dF3, ndF415);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              iF533T = 1;
              ndF534T = ndF415;
            L6: ;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                iF533 = iF533T;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                ndF534 = ndF534T;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                iF528 = iF533;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                ndF529 = ndF534;
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                T525 = primitive_machine_word_equalQ(iF528,T566);
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                if (T525 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T519 = ndF529;
                  MV_SET_ELT(0, ndF529);
                  MV_SET_COUNT(1);
                  T524 = T519;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T570 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, iF528);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T520 = Dckd_emptyVKg;
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T521 = primitive_idQ(T570,T520);
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  if (T521 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T526 = primitive_machine_word_add_signal_overflow(iF528,8);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    iF533T = T526;
                    ndF534T = ndF534;
                    goto L6;
                    T523 = T527;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T530 = primitive_machine_word_add_signal_overflow(iF528,8);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T531 = primitive_machine_word_add_signal_overflow(iF528,4);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T571 = REPEATED_D_SLOT_VALUE_TAGGED(dF3, 6, T531);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    T522 = Kckd_addXYdispatch_engine_internalVdylanI(ndF529, T570, T571);
                    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                    iF533T = T530;
                    ndF534T = T522;
                    goto L6;
                    T523 = T532;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                  T524 = T523;
                }
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
                // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T416_0 = T524;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T535 = T416_0;
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              dF573T = T535;
              keyF574T = T290;
              valueF575T = T292;
              goto L0;
              T401 = T572;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T536 = primitive_machine_word_add_signal_overflow(iF412,4);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T292, dF3, 6, T536);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T290, dF3, 6, iF412);
              // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
              T400 = dF3;
              MV_SET_ELT(0, dF3);
              MV_SET_COUNT(1);
              T401 = T400;
            }
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T402 = T401;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T407 = primitive_machine_word_add_signal_overflow(iF412,T406);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T409 = primitive_machine_word_logand(T407,T408);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            T410 = primitive_machine_word_add_signal_overflow(nprobesF413,4);
            // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
            iF412T = T409;
            nprobesF413T = T410;
            goto L4;
            T402 = T411;
          }
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
          T403 = T402;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
      T4_0 = T403;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1103
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1104
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1100
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kcopy_class_keyed_discriminator_attributesYdispatch_engine_internalVdylanI (D d_, D nd_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:681
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:684
  T7 = primitive_instanceQ(d_,&KLby_singleton_class_discriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:684
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:642
    T6 = d_;
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:685
    T2 = Kgrounded_class_keyed_discriminator_defaultVKgI(T6);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:685
    Kgrounded_class_keyed_discriminator_default_setterYdispatch_engine_internalVdylanI(T2, nd_);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:685
    T3 = &KPfalseVKi;
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:684
    T4 = &KPfalseVKi;
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:684
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:681
  MV_SET_COUNT(0);
  return(T5);
}

D Kmake_monomorphic_by_class_discriminatorVKgI (D argnum_, D gf_) {
  D T2;
  D T3;
  D d_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1168
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1173
  T2 = Kstandard_discriminator_bitsVKgI(gf_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1172
  T3 = Kbootstrap_allocate_discriminatorVKgI((D) 169, argnum_, T2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1171
  d_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1174
  T5 = Dckd_emptyVKg;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1174
  SLOT_VALUE_SETTER(T5, d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1178
  primitive_initialize_discriminator(d_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1179
  T6_0 = d_;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1168
  MV_SET_COUNT(1);
  return(T6_0);
}

D KdispresultYdispatch_engine_internalVdylanI (D r_, D ds_) {
  D T2;
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1451
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1452
  T4 = SLOT_VALUE_INITD(ds_, 7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1452
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1453
    T5 = KerrorVKdMM1I(&K124, &KPempty_vectorVKi);
    T3 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1455
    SLOT_VALUE_SETTER(r_, ds_, 7);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1455
    T2 = &KPfalseVKi;
    T3 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1452
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1451
  MV_SET_COUNT(0);
  return(T3);
}

D KLdispatch_stateGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1417
  T3 = primitive_object_allocate_filled(11,&KLdispatch_stateGYdispatch_engine_internalVdylanW,10,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 0);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 1);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 2);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 3);
  SLOT_VALUE_SETTER(&KPempty_listVKi, T3, 4);
  SLOT_VALUE_SETTER(&KPunboundVKi, T3, 5);
  SLOT_VALUE_SETTER(&KPfalseVKi, T3, 6);
  SLOT_VALUE_SETTER(&KPfalseVKi, T3, 7);
  SLOT_VALUE_SETTER(&KPempty_listVKi, T3, 8);
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, T3, 9);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1417
  MV_SET_COUNT(1);
  return(T4_0);
}

D Khandle_missed_dispatchVKgI (D d_, D parent_, D args_) {
  D ds_;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D Utmp_;
  D T11;
  D T12;
  D what_;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  D T25_0;
  D T26;
  D T27_0;
  D T28;
  DWORD T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  DWORD T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1464
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T18 = SLOT_VALUE(&KLdispatch_stateGYdispatch_engine_internalVdylan, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T20 = SLOT_VALUE_INITD(T18, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T21 = primitive_cast_integer_as_raw(T20);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T22 = primitive_machine_word_logand(T21,262140);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T23 = primitive_machine_word_add_signal_overflow(5,T22);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T24 = primitive_machine_word_shift_right(T23,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T26 = SLOT_VALUE_INITD(T18, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T27_0 = T26;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T25_0 = T27_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T28 = T25_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T29 = primitive_machine_word_shift_right(T22,2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  T19 = primitive_object_allocate_filled(T24,T28,T29,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1467
  ds_ = T19;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1468
  T30 = primitive_idQ(d_,Dabsent_engine_nodeVKg);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1468
  if (T30 != &KPfalseVKi) {
    T4 = parent_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1468
    T31 = d_;
    T4 = T31;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1468
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1469
  T5 = Kparent_gfVKgI(T4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1470
  SLOT_VALUE_SETTER(T4, ds_, 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1471
  SLOT_VALUE_SETTER(T5, ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1472
  SLOT_VALUE_SETTER(args_, ds_, 2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1473
  T6 = Kmake_argnum_setYdispatch_engine_internalVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1473
  SLOT_VALUE_SETTER(T6, ds_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1474
  SLOT_VALUE_SETTER(&KPempty_listVKi, ds_, 4);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1475
  SLOT_VALUE_SETTER(&KPempty_listVKi, ds_, 8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1476
  SLOT_VALUE_SETTER(&KPfalseVKi, ds_, 7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1477
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, ds_, 9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  T32 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  SLOT_VALUE_SETTER(T5, T32, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  SLOT_VALUE_SETTER(&KPfalseVKi, T32, 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  T33 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  SLOT_VALUE_SETTER(T32, T33, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  SLOT_VALUE_SETTER(&KPempty_listVKi, T33, 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  ENTER_UNWIND_FRAME(T7);
  if (!nlx_setjmp(FRAME_DEST(T7))) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
    Kbegin_locking_multiple_objectsYdispatch_engine_internalVdylanI(T33, T33);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1481
    T34 = SLOT_VALUE_INITD(T5, 2);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1482
    if (T34 != &KPfalseVKi) {
      T8 = T34;
    } else {
      T8 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1482
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1482
    SLOT_VALUE_SETTER(T8, ds_, 6);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    T36 = primitive_instanceQ(T5,&KLincremental_generic_functionGVKe);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    T37 = primitive_not(T36);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T38 = SLOT_VALUE_INITD(T5, 9);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T39 = primitive_cast_integer_as_raw(T38);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T40 = primitive_machine_word_logbitQ(4,T39);
      T35 = T40;
    } else {
      T35 = T37;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T41 = SLOT_VALUE_INITD(T5, 1);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T42 = SLOT_VALUE_INITD(T41, 0);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T43 = primitive_cast_integer_as_raw(T42);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T44 = primitive_machine_word_logbitQ(25,T43);
      T45 = T44;
    } else {
      T45 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    if (T45 != &KPfalseVKi) {
      Utmp_ = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
      T9 = Kcall_to_type_incomplete_genericVKeI(T5, args_);
      Utmp_ = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    if (Utmp_ != &KPfalseVKi) {
      T12 = Utmp_;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1485
      T11 = Kcompute_dispatch_engineYdispatch_engine_internalVdylanI(ds_);
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1483
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
    FALL_THROUGH_UNWIND(T12);
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  Kend_locking_multiple_objectsYdispatch_engine_internalVdylanI(T33, T33);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1480
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1488
  T46 = SLOT_VALUE_INITD(ds_, 8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1488
  Kbletch_stackVKgI(T46);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1489
  T47 = SLOT_VALUE_INITD(ds_, 7);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1489
  if (T47 != &KPfalseVKi) {
    what_ = T47;
  } else {
    what_ = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1489
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1490
  if (what_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1491
    T48 = primitive_instanceQ(what_,&KLconditionGVKd);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1491
    if (T48 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:433
      T17 = what_;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1492
      CONGRUENT_CALL_PROLOG(&KbletchVKg, 1);
      T14 = CONGRUENT_CALL1(T17);
      T15 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1494
      T49 = primitive_engine_node_apply_with_optionals(what_,T4,args_);
      T15 = T49;
    }
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1491
    T16 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1499
    T50 = SLOT_VALUE_INITD(T5, 5);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1499
    T51 = primitive_engine_node_apply_with_optionals(T50,T5,args_);
    T16 = T51;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1490
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1464
  return(T16);
}

D Kvalue_object_linear_singleton_discriminator_elementVKgI (D d_, D key_, D default_) {
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14_0;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  DWORD iF32T, iF32;
  DWORD T33;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1318
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1320
  T6 = SLOT_VALUE_INITD(d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1321
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1322
  T8 = SLOT_VALUE_INITD(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1323
  T10 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1323
  T9 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T10);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1324
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T4 = CONGRUENT_CALL2(T9, key_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1324
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1325
    T11 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1325
    T12 = primitive_machine_word_add_signal_overflow(T11,4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1325
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T12);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1325
    T14_0 = T13;
    T5_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1328
    T33 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1338
    iF32T = T33;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1338
      iF32 = iF32T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1328
      T21 = primitive_machine_word_add_signal_overflow(iF32,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1328
      T22 = primitive_cast_raw_as_integer(T21);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1329
      T23 = primitive_idQ(T22,T7);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1329
      if (T23 != &KPfalseVKi) {
        T15 = 1;
      } else {
        T15 = T21;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1329
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1333
      T26 = primitive_cast_raw_as_integer(T15);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1330
      T24 = primitive_idQ(T26,T8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1330
      if (T24 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1331
        T16 = default_;
        MV_SET_ELT(0, default_);
        MV_SET_COUNT(1);
        T20 = T16;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1333
        T25 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T15);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1334
        T27 = primitive_idQ(T25,Dabsent_engine_nodeVKg);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1334
        if (T27 != &KPfalseVKi) {
          T18 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1334
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T17 = CONGRUENT_CALL2(T25, key_);
          T18 = T17;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1334
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1334
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1335
          SLOT_VALUE_SETTER(T26, d_, 5);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1336
          T28 = primitive_machine_word_add_signal_overflow(T15,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1336
          T29 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T28);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1336
          T30 = T29;
          MV_SET_ELT(0, T29);
          MV_SET_COUNT(1);
          T19 = T30;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1338
          iF32T = T15;
          goto L0;
          T19 = T31;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1334
        T20 = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1330
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1338
    T5_0 = T20;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1324
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1318
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kimmediate_linear_singleton_discriminator_elementVKgI (D d_, D key_, D default_) {
  D T4;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14_0;
  DWORD T15;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  DWORD iF30T, iF30;
  DWORD T31;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1268
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1270
  T6 = SLOT_VALUE_INITD(d_, 3);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1271
  T7 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1272
  T8 = SLOT_VALUE_INITD(d_, 5);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1273
  T10 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1273
  T9 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T10);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1274
  T4 = primitive_idQ(T9,key_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1274
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1275
    T11 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1275
    T12 = primitive_machine_word_add_signal_overflow(T11,4);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1275
    T13 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T12);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1275
    T14_0 = T13;
    T5_0 = T14_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1278
    T31 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1288
    iF30T = T31;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1288
      iF30 = iF30T;
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1278
      T20 = primitive_machine_word_add_signal_overflow(iF30,8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1278
      T21 = primitive_cast_raw_as_integer(T20);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1279
      T22 = primitive_idQ(T21,T7);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1279
      if (T22 != &KPfalseVKi) {
        T15 = 1;
      } else {
        T15 = T20;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1279
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1283
      T25 = primitive_cast_raw_as_integer(T15);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1280
      T23 = primitive_idQ(T25,T8);
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1280
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1281
        T16 = default_;
        MV_SET_ELT(0, default_);
        MV_SET_COUNT(1);
        T19 = T16;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1283
        T24 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T15);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1284
        T17 = primitive_idQ(T24,key_);
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1284
        if (T17 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1285
          SLOT_VALUE_SETTER(T25, d_, 5);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1286
          T26 = primitive_machine_word_add_signal_overflow(T15,4);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1286
          T27 = REPEATED_D_SLOT_VALUE_TAGGED(T6, 1, T26);
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1286
          T28 = T27;
          MV_SET_ELT(0, T27);
          MV_SET_COUNT(1);
          T18 = T28;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1288
          iF30T = T15;
          goto L0;
          T18 = T29;
        }
        // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1284
        T19 = T18;
      }
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1280
      // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1288
    T5_0 = T19;
  }
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1274
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:1268
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPckd_maskVKgI (D ckd_) {
  D T1;
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:597
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:598
  CONGRUENT_CALL_PROLOG(&Kclass_keyed_discriminator_table_sizeVKg, 1);
  T1 = CONGRUENT_CALL1(ckd_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:598
  CONGRUENT_CALL_PROLOG(&K_VKd, 2);
  T2_0 = CONGRUENT_CALL2(T1, (D) 9);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:597
  T3_0 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:597
  MV_SET_COUNT(1);
  return(T3_0);
}

D KPckd_sizeVKgI (D ckd_) {
  D T1_0;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:592
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:594
  CONGRUENT_CALL_PROLOG(&Kclass_keyed_discriminator_table_sizeVKg, 1);
  T1_0 = CONGRUENT_CALL1(ckd_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:592
  T2_0 = T1_0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:592
  MV_SET_COUNT(1);
  return(T2_0);
}

D KPckd_ref_setterVKgI (D value_, D ckd_, D idx_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:587
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:589
  ENGINE_NODE_CALL_PROLOG(&Kclass_keyed_discriminator_table_element_setterVKg, &K303, 3);
  ENGINE_NODE_CALL3(&K303, value_, ckd_, idx_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:589
  T3 = value_;
  MV_SET_ELT(0, value_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:587
  return(T3);
}

D KPckd_refVKgI (D ckd_, D idx_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:582
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:584
  ENGINE_NODE_CALL_PROLOG(&Kclass_keyed_discriminator_table_elementVKg, &K306, 2);
  T2 = ENGINE_NODE_CALL2(&K306, ckd_, idx_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:582
  return(T2);
}

D Kmake_ambiguous_methods_next_methodVKgI (D ordered_, D ambig_, D gf_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:465
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:468
  T3 = Kmake_ambiguous_methods_engine_nodeVKgI(ordered_, ambig_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:468
  T4 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:468
  SLOT_VALUE_SETTER(T3, T4, 0);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:468
  SLOT_VALUE_SETTER(gf_, T4, 1);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:468
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:465
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kbootstrap_allocate_and_initialize_engine_nodeVKgI (D entry_type_, D root_bits_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:76
  T2 = Kbootstrap_allocate_engine_nodeVKgI(entry_type_, root_bits_);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:77
  primitive_initialize_engine_node(T2);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:78
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:73
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_new_dispatch_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmeth_);
    if (T0 != &KJmeth_) {
      primitive_repeated_slot_value_setter(T0, &K63, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K57, 1, 0);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdata_);
    if (T0 != &KJdata_) {
      primitive_repeated_slot_value_setter(T0, &K311, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K310, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K63, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K57, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJTemptyT_);
    if (T0 != &KJTemptyT_) {
      primitive_slot_value_setter(T0, &K293, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_new_dispatch_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:179
  T0 = Kmake_simple_lockYthreads_primitivesVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:178
  Dobject_lock_notification_lockYdispatch_engine_internalVdylan = T0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:178
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:182
  T0 = Kmake_notificationYthreads_primitivesVdylanI(Dobject_lock_notification_lockYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:181
  Dobject_lock_notificationYdispatch_engine_internalVdylan = T0;
  // /opt/opendylan-2013.1/sources/dylan/new-dispatch.dylan:181
  T1 = &KPfalseVKi;
  goto I1;
}
I1:

  return;
}


/* eof */
