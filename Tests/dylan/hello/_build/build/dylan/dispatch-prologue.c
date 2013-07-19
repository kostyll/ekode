#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

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
} _KLbooleanGVKd;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLinapplicable_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D single_method_engine_node_method_;
  D single_method_engine_node_data_;
} _KLunkeyed_single_method_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D single_method_engine_node_method_;
  D single_method_engine_node_data_;
} _KLimplicit_keyed_single_method_engine_nodeGVKg;

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
  D single_method_engine_node_method_;
  D single_method_engine_node_data_;
} _KLunrestricted_keyed_single_method_engine_nodeGVKg;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

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
  D typecheck_discriminator_type_;
  D typecheck_discriminator_next_;
} _KLtypecheck_discriminatorGVKg;

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
} _KLboxed_instance_slot_getter_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLboxed_instance_slot_setter_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLboxed_class_slot_getter_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLboxed_class_slot_setter_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D slot_engine_node_size_offset_;
} _KLboxed_repeated_instance_slot_getter_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D slot_engine_node_size_offset_;
} _KLboxed_repeated_instance_slot_setter_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D slot_engine_node_size_offset_;
} _KLrepeated_byte_slot_getter_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D slot_engine_node_size_offset_;
} _KLrepeated_byte_slot_setter_engine_nodeGVKg;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(32);

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
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLaccessor_methodGVKe;

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
  D xep_;
  D method_slot_descriptor_;
} _KLsingle_accessor_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_accessor_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLlambdaGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_accessor_methodGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_accessor_methodGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLengine_nodeGVKg;

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
} _KLdiscriminatorGVKg;

typedef struct {
  D wrapper;
  D xep_;
} _KLmethodGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
D Kmake_simple_lockYthreads_primitivesVdylanI ();
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_absentVKg;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLinapplicable_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLinapplicable_engine_nodeGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_inapplicableVKg;
extern _KLclassGVKd KLunkeyed_single_method_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLunkeyed_single_method_engine_nodeGVKgW;
extern _KLclassGVKd KLimplicit_keyed_single_method_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLimplicit_keyed_single_method_engine_nodeGVKgW;
extern _KLclassGVKd KLexplicit_keyed_single_method_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLexplicit_keyed_single_method_engine_nodeGVKgW;
extern _KLclassGVKd KLunrestricted_keyed_single_method_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLunrestricted_keyed_single_method_engine_nodeGVKgW;
extern _KLclassGVKd KLambiguous_methods_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLambiguous_methods_engine_nodeGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_ambiguous_methodsVKg;
extern _KLclassGVKd KLprofiling_call_site_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLprofiling_call_site_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLclassGVKd KLlinear_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLlinear_by_class_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylan;
extern _KLclassGVKd KLhashed_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLhashed_by_class_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylan;
extern _KLclassGVKd KLlinear_by_singleton_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLlinear_by_singleton_class_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylan;
extern _KLclassGVKd KLhashed_by_singleton_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLhashed_by_singleton_class_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylan;
extern _KLclassGVKd KLtypecheck_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLtypecheck_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_typecheckVKg;
extern _KLclassGVKd KLif_type_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLif_type_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_if_typeVKg;
extern _KLclassGVKd KLimmediate_linear_singleton_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLimmediate_linear_singleton_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_immediate_linear_singletonVKg;
extern _KLclassGVKd KLvalue_object_linear_singleton_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLvalue_object_linear_singleton_discriminatorGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_value_object_linear_singletonVKg;
extern _KLclassGVKd KLmonomorphic_by_class_discriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLmonomorphic_by_class_discriminatorGVKgW;
extern _KLclassGVKd KLboxed_instance_slot_getter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_instance_slot_getter_engine_nodeGVKgW;
extern _KLclassGVKd KLboxed_instance_slot_setter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_instance_slot_setter_engine_nodeGVKgW;
extern _KLclassGVKd KLboxed_class_slot_getter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_class_slot_getter_engine_nodeGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylan;
extern _KLclassGVKd KLboxed_class_slot_setter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_class_slot_setter_engine_nodeGVKgW;
extern _KLsimple_methodGVKe KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylan;
extern _KLclassGVKd KLboxed_repeated_instance_slot_getter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_repeated_instance_slot_getter_engine_nodeGVKgW;
extern _KLclassGVKd KLboxed_repeated_instance_slot_setter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_repeated_instance_slot_setter_engine_nodeGVKgW;
extern _KLclassGVKd KLrepeated_byte_slot_getter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLrepeated_byte_slot_getter_engine_nodeGVKgW;
extern _KLclassGVKd KLrepeated_byte_slot_setter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLrepeated_byte_slot_setter_engine_nodeGVKgW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLsimple_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsimple_lockGYthreadsVdylanW;
D KmemberQVKdMM3I (D value_, D list_, D Urest_, D test_);
extern _KLsymbolGVKd KJlock_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsimple_methodGVKe KEEVKd;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
D KerrorVKdMM1I (D string_, D arguments_);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D condition_, D noise_);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLaccessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLaccessor_methodGVKeW;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
extern _KLclassGVKd KLsingle_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsingle_accessor_methodGVKeW;
extern _KLclassGVKd KLgetter_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLgetter_accessor_methodGVKeW;
extern _KLfunction_classGVKi KLlambdaGVKe;
extern _KLmm_wrapperGVKi_0 KLlambdaGVKeW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLrepeated_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_accessor_methodGVKeW;
extern _KLclassGVKd KLsetter_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsetter_accessor_methodGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLfunction_classGVKi KLgeneric_functionGVKd;
extern _KLmm_wrapperGVKi_0 KLgeneric_functionGVKdW;
extern _KLclassGVKd KLcache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLcache_header_engine_nodeGVKgW;
D Kelement_range_errorVKeI (D collection_, D key_);
extern _KLclassGVKd KLengine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLengine_nodeGVKgW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLdiscriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLdiscriminatorGVKgW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Limplementation_classG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lgeneric_functionG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Ddirect_object_mm_wrappersVKi;

/* Defined object declarations */

static D KeassignF35I (D, D, D, D, D);
static D KdassignF34I (D, D, D, D, D);
extern _KLunionGVKe KLdispatch_starterGVKg;
D Kmake_argnum_setYdispatch_engine_internalVdylanI ();
D Kadd_argnumYdispatch_engine_internalVdylanI (D, D);
D KPmake_simple_vectorVKgI (D, D);
D KPmethod_number_requiredVKgI (D);
D KPmethod_specializerVKgI (D, D);
D Knext_free_argnumYdispatch_engine_internalVdylanI (D, D);
D Kargnum_consideredQYdispatch_engine_internalVdylanI (D, D);
D Kcompress_maskVKgI (D, D);
D Kinitialize_class_dispatch_keysVKgI (D);
D Kinitialize_class_dispatch_keys_vectoredVKgI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initialize_class_dispatch_keys_vectoredF30;
static D Kanonymous_of_initialize_class_dispatch_keys_vectoredF30I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initialize_class_dispatch_keys_vectoredF28;
static D Kanonymous_of_initialize_class_dispatch_keys_vectoredF28I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initialize_class_dispatch_keys_vectoredF25;
static D Kanonymous_of_initialize_class_dispatch_keys_vectoredF25I ();
D Kensure_key_to_iclass_storageVKgI (D);
static _KLbyte_stringGVKd_32 K24;
static _KLbyte_stringGVKd_31 K26;
static _KLsignatureGVKe K27;
static _KLbyte_stringGVKd_45 K29;
static _KLbyte_stringGVKd_33 K31;
static D Kloop2F33I (D, D);
extern _KLsimple_methodGVKe KPrestart_dispatchVKg;
D KPrestart_dispatchVKgI (D, D);
static _KLsignatureGVKe K38;
static _KLsimple_object_vectorGVKd_2 K39;
extern _KLsimple_methodGVKe KPinvoke_generic_functionVKg;
D KPinvoke_generic_functionVKgI (D gf_, D args_);
static _KLsignatureGVKe K42;
static _KLsimple_object_vectorGVKd_2 K43;
extern _KLsimple_methodGVKe KPinvoke_generic_function_mepizedVKg;
D KPinvoke_generic_function_mepizedVKgI (D gf_, D args_);
extern _KLsimple_methodGVKe KPinvoke_engine_nodeVKg;
D KPinvoke_engine_nodeVKgI (D d_, D gf_, D args_);
static _KLsignatureGVKe K48;
static _KLsimple_object_vectorGVKd_3 K49;
extern _KLsimple_methodGVKe Kengine_node_function_codeVKg;
D Kengine_node_function_codeVKgI (D d_);
static _KLsignatureGVKe K52;
static _KLsimple_object_vectorGVKd_1 K53;
extern _KLsimple_methodGVKe Kdiscriminator_argnumVKg;
D Kdiscriminator_argnumVKgI (D d_);
static _KLsignatureAvaluesGVKi K56;
static _KLsimple_object_vectorGVKd_1 K57;
extern _KLsimple_methodGVKe Kexpand_maskVKg;
D Kexpand_maskVKgI (D, D);
static _KLsignatureAvaluesGVKi K60;
extern _KLsimple_methodGVKe Kcompress_maskVKg;
extern _KLsimple_methodGVKe Kengine_node_raw_integer_setterVKg;
D Kengine_node_raw_integer_setterVKgI (D v_, D e_);
static _KLsignatureAvaluesGVKi K64;
static _KLsimple_object_vectorGVKd_2 K65;
extern _KLsimple_methodGVKe Kengine_node_raw_integerVKg;
D Kengine_node_raw_integerVKgI (D e_);
static _KLsignatureAvaluesGVKi K68;
extern _KLsimple_methodGVKe Kinitialize_class_dispatch_keys_vectoredVKg;
static _KLsignatureGVKe K70;
extern _KLsimple_methodGVKe Kinitialize_class_dispatch_keysVKg;
static _KLsignatureGVKe K72;
extern _KLsimple_methodGVKe Kensure_key_to_iclass_storageVKg;
static _KLsignatureAvaluesGVKi K74;
extern _KLsimple_methodGVKe Kiclass_key_to_numberVKg;
D Kiclass_key_to_numberVKgI (D k_);
static _KLsignatureAvaluesGVKi K77;
extern _KLsimple_methodGVKe Kiclass_number_to_keyVKg;
D Kiclass_number_to_keyVKgI (D n_);
extern _KLsimple_methodGVKe Kimplementation_class_from_keyVKg;
D Kimplementation_class_from_keyVKgI (D);
static _KLsignatureAvaluesGVKi K82;
extern _KLsimple_methodGVKe Kobject_class_unique_keyVKg;
D Kobject_class_unique_keyVKgI (D x_);
static _KLsignatureAvaluesGVKi K85;
extern _KLsimple_methodGVKe Kclass_unique_keyVKg;
D Kclass_unique_keyVKgI (D c_);
static _KLsignatureAvaluesGVKi K88;
extern _KLsimple_methodGVKe Kiclass_unique_keyVKg;
D Kiclass_unique_keyVKgI (D ic_);
static _KLsignatureAvaluesGVKi K91;
extern _KLsimple_methodGVKe KPgf_number_requiredVKg;
D KPgf_number_requiredVKgI (D g_);
static _KLsignatureAvaluesGVKi K94;
extern _KLsimple_methodGVKe KPmethod_number_requiredVKg;
static _KLsignatureAvaluesGVKi K96;
extern _KLsimple_methodGVKe KPmethod_specializerVKg;
static _KLsignatureAvaluesGVKi K98;
static _KLsimple_object_vectorGVKd_2 K99;
extern _KLsimple_methodGVKe KPload_byteVKg;
D KPload_byteVKgI (D p_, D s_, D n_);
static _KLsignatureAvaluesGVKi K102;
extern _KLsimple_methodGVKe KPmake_simple_vectorVKg;
static _KLsignatureAvaluesGVKi K104;
static _KLsimple_object_vectorGVKd_2 K105;
extern _KLsimple_methodGVKe KdbgVKg;
D KdbgVKgI (D str_, D args_);
static _KLsignatureGVKe K108;

/* Indirection variables */


/* Variables */

D Tengine_node_classesTYdispatch_engine_internalVdylan = &KPunboundVKi;
D engine_nodeDk_absentVKg = (D) 1;
D engine_nodeDk_inapplicableVKg = (D) 5;
D engine_nodeDk_unkeyed_single_methodVKg = (D) 9;
D engine_nodeDk_implicit_keyed_single_methodVKg = (D) 13;
D engine_nodeDk_explicit_keyed_single_methodVKg = (D) 17;
D engine_nodeDk_unrestricted_keyed_single_methodVKg = (D) 21;
D engine_nodeDk_reserved_terminal_n_aVKg = (D) 25;
D engine_nodeDk_reserved_terminal_n_bVKg = (D) 29;
D engine_nodeDk_reserved_terminal_n_cVKg = (D) 33;
D engine_nodeDk_reserved_terminal_n_dVKg = (D) 37;
D engine_nodeDk_reserved_terminal_n_eVKg = (D) 41;
D engine_nodeDk_reserved_terminal_n_fVKg = (D) 45;
D engine_nodeDk_reserved_terminal_n_gVKg = (D) 49;
D engine_nodeDk_profiling_cache_headerVKg = (D) 53;
D engine_nodeDk_cache_headerVKg = (D) 57;
D engine_nodeDk_ambiguous_methodsVKg = (D) 61;
D engine_nodeDk_first_slot_engine_nodeVKg = (D) 65;
D engine_nodeDk_boxed_instance_slot_getterVKg = (D) 65;
D engine_nodeDk_boxed_instance_slot_setterVKg = (D) 69;
D engine_nodeDk_boxed_repeated_instance_slot_getterVKg = (D) 73;
D engine_nodeDk_boxed_repeated_instance_slot_setterVKg = (D) 77;
D engine_nodeDk_boxed_class_slot_getterVKg = (D) 81;
D engine_nodeDk_boxed_class_slot_setterVKg = (D) 85;
D engine_nodeDk_raw_byte_repeated_instance_slot_getterVKg = (D) 89;
D engine_nodeDk_raw_byte_repeated_instance_slot_setterVKg = (D) 93;
D engine_nodeDk_reserved_slot_a_getterVKg = (D) 97;
D engine_nodeDk_reserved_slot_a_setterVKg = (D) 101;
D engine_nodeDk_reserved_slot_b_getterVKg = (D) 105;
D engine_nodeDk_reserved_slot_b_setterVKg = (D) 109;
D engine_nodeDk_reserved_repeated_slot_a_getterVKg = (D) 113;
D engine_nodeDk_reserved_repeated_slot_a_setterVKg = (D) 117;
D engine_nodeDk_reserved_repeated_slot_b_getterVKg = (D) 121;
D engine_nodeDk_reserved_repeated_slot_b_setterVKg = (D) 125;
D engine_nodeDk_slot_engine_node_countVKg = (D) 65;
D engine_nodeDk_typecheckVKg = (D) 129;
D engine_nodeDk_if_typeVKg = (D) 133;
D engine_nodeDk_linear_by_classVKg = (D) 137;
D engine_nodeDk_hashed_by_classVKg = (D) 141;
D engine_nodeDk_linear_by_singleton_classVKg = (D) 145;
D engine_nodeDk_hashed_by_singleton_classVKg = (D) 149;
D engine_nodeDk_immediate_linear_singletonVKg = (D) 153;
D engine_nodeDk_immediate_hashed_noreloc_singletonVKg = (D) 157;
D engine_nodeDk_immediate_hashed_singletonVKg = (D) 161;
D engine_nodeDk_value_object_linear_singletonVKg = (D) 165;
D engine_nodeDk_monomorphic_by_classVKg = (D) 169;
D engine_nodeDk_reserved_discriminator_aVKg = (D) 173;
D engine_nodeDk_reserved_discriminator_bVKg = (D) 177;
D engine_nodeDk_reserved_discriminator_cVKg = (D) 181;
D engine_nodeDk_reserved_discriminator_dVKg = (D) 185;
D engine_nodeDk_reserved_discriminator_eVKg = (D) 189;
D engine_nodeDk_reserved_discriminator_fVKg = (D) 193;
D engine_nodeDk_reserved_discriminator_gVKg = (D) 197;
D engine_nodeDk_reserved_discriminator_hVKg = (D) 201;
D engine_nodeDk_reserved_discriminator_iVKg = (D) 205;
D engine_nodeDk_reserved_discriminator_jVKg = (D) 209;
D engine_nodeDk_reserved_discriminator_kVKg = (D) 213;
D engine_nodeDk_reserved_discriminator_lVKg = (D) 217;
D engine_nodeDk_reserved_discriminator_mVKg = (D) 221;
D engine_nodeDk_reserved_discriminator_nVKg = (D) 225;
D engine_nodeDk_reserved_discriminator_oVKg = (D) 229;
D engine_nodeDk_reserved_discriminator_pVKg = (D) 233;
D engine_nodeDk_reserved_discriminator_qVKg = (D) 237;
D engine_nodeDk_reserved_discriminator_rVKg = (D) 241;
D engine_nodeDk_reserved_discriminator_sVKg = (D) 245;
D engine_nodeDk_reserved_discriminator_tVKg = (D) 249;
D engine_nodeDk_reserved_discriminator_uVKg = (D) 253;
D dbgVKg = &KdbgVKg;
D Pmake_simple_vectorVKg = &KPmake_simple_vectorVKg;
D Pload_byteVKg = &KPload_byteVKg;
D Pmethod_specializerVKg = &KPmethod_specializerVKg;
D Pmethod_number_requiredVKg = &KPmethod_number_requiredVKg;
D Pgf_number_requiredVKg = &KPgf_number_requiredVKg;
D Ddispatch_key_lockVKg = &KPunboundVKi;
D Tnext_unique_dispatch_keyTVKg = (D) 1;
D Timplementation_classes_by_keyTVKg = &KPempty_vectorVKi;
D iclass_unique_keyVKg = &Kiclass_unique_keyVKg;
D class_unique_keyVKg = &Kclass_unique_keyVKg;
D object_class_unique_keyVKg = &Kobject_class_unique_keyVKg;
D implementation_class_from_keyVKg = &Kimplementation_class_from_keyVKg;
D iclass_number_to_keyVKg = &Kiclass_number_to_keyVKg;
D iclass_key_to_numberVKg = &Kiclass_key_to_numberVKg;
D ensure_key_to_iclass_storageVKg = &Kensure_key_to_iclass_storageVKg;
D initialize_class_dispatch_keysVKg = &Kinitialize_class_dispatch_keysVKg;
D initialize_class_dispatch_keys_vectoredVKg = &Kinitialize_class_dispatch_keys_vectoredVKg;
D engine_node_raw_integerVKg = &Kengine_node_raw_integerVKg;
D engine_node_raw_integer_setterVKg = &Kengine_node_raw_integer_setterVKg;
D propertiesDm_entry_typeVKg = (D) 253;
D propertiesDs_entry_typeVKg = (D) 25;
D propertiesDv_entry_typeVKg = (D) 1;
D propertiesDv_dataVKg = (D) 25;
D engine_nodeDv_data_startVKg = (D) 57;
D smenDv_nrequiredVKg = (D) 25;
D smenDs_nrequiredVKg = (D) 33;
D smenDm_nrequiredVKg = (D) 65281;
D smenDv_restpVKg = (D) 57;
D smenDm_restpVKg = (D) 65537;
D smenDv_data_startVKg = (D) 61;
D Dsimple_typechecked_cache_arguments_limitVKg = (D) 33;
D stchenDv_checkedmaskVKg = (D) 57;
D stchenDs_checkedmaskVKg = (D) 33;
D stchenDm_checkedmaskVKg = (D) 16711681;
D Dpartial_dispatch_arguments_limitVKg = (D) 33;
D pdispDv_typemaskVKg = (D) 57;
D pdispDs_typemaskVKg = (D) 33;
D pdispDm_typemaskVKg = (D) 16711681;
D compress_maskVKg = &Kcompress_maskVKg;
D expand_maskVKg = &Kexpand_maskVKg;
D discriminatorDv_argnumVKg = (D) 25;
D discriminatorDs_argnumVKg = (D) 33;
D discriminatorDm_argnumVKg = (D) 65281;
D discriminatorDv_nrequiredVKg = (D) 57;
D discriminatorDs_nrequiredVKg = (D) 33;
D discriminatorDm_nrequiredVKg = (D) 16711681;
D discriminatorDv_restpVKg = (D) 89;
D discriminatorDm_restpVKg = (D) 16777217;
D discriminatorDv_data_startVKg = (D) 93;
D discriminator_argnumVKg = &Kdiscriminator_argnumVKg;
D Tengine_node_callbacksTVKg = &KPunboundVKi;
D engine_node_function_codeVKg = &Kengine_node_function_codeVKg;
D Ldispatch_starterGVKg = &KLdispatch_starterGVKg;
D Pinvoke_engine_nodeVKg = &KPinvoke_engine_nodeVKg;
D Pinvoke_generic_function_mepizedVKg = &KPinvoke_generic_function_mepizedVKg;
D Pinvoke_generic_functionVKg = &KPinvoke_generic_functionVKg;
D Prestart_dispatchVKg = &KPrestart_dispatchVKg;
D Tdispatch_profiling_enabledQTVKe = &KPfalseVKi;

/* Objects */

_KLunionGVKe KLdispatch_starterGVKg = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLgeneric_functionGVKd,
  &KLcache_header_engine_nodeGVKg
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initialize_class_dispatch_keys_vectoredF30 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K27,
  &Kanonymous_of_initialize_class_dispatch_keys_vectoredF30I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initialize_class_dispatch_keys_vectoredF28 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K27,
  &Kanonymous_of_initialize_class_dispatch_keys_vectoredF28I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_initialize_class_dispatch_keys_vectoredF25 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K27,
  &Kanonymous_of_initialize_class_dispatch_keys_vectoredF25I,
  (D) 1
};

static _KLbyte_stringGVKd_32 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_31 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K27 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_45 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLbyte_stringGVKd_33 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

_KLsimple_methodGVKe KPrestart_dispatchVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K38,
  &KPrestart_dispatchVKgI
};

static _KLsignatureGVKe K38 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K39
};

static _KLsimple_object_vectorGVKd_2 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdispatch_starterGVKg,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe KPinvoke_generic_functionVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K42,
  &KPinvoke_generic_functionVKgI
};

static _KLsignatureGVKe K42 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K43
};

static _KLsimple_object_vectorGVKd_2 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLgeneric_functionGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe KPinvoke_generic_function_mepizedVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K42,
  &KPinvoke_generic_function_mepizedVKgI
};

_KLsimple_methodGVKe KPinvoke_engine_nodeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K48,
  &KPinvoke_engine_nodeVKgI
};

static _KLsignatureGVKe K48 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K49
};

static _KLsimple_object_vectorGVKd_3 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLgeneric_functionGVKd,
  &KLsimple_object_vectorGVKd
};

_KLsimple_methodGVKe Kengine_node_function_codeVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K52,
  &Kengine_node_function_codeVKgI
};

static _KLsignatureGVKe K52 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K53
};

static _KLsimple_object_vectorGVKd_1 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLengine_nodeGVKg
};

_KLsimple_methodGVKe Kdiscriminator_argnumVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &Kdiscriminator_argnumVKgI
};

static _KLsignatureAvaluesGVKi K56 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K57,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdiscriminatorGVKg
};

_KLsimple_methodGVKe Kexpand_maskVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K60,
  &Kexpand_maskVKgI
};

static _KLsignatureAvaluesGVKi K60 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kcompress_maskVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K60,
  &Kcompress_maskVKgI
};

_KLsimple_methodGVKe Kengine_node_raw_integer_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K64,
  &Kengine_node_raw_integer_setterVKgI
};

static _KLsignatureAvaluesGVKi K64 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K65,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLengine_nodeGVKg
};

_KLsimple_methodGVKe Kengine_node_raw_integerVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K68,
  &Kengine_node_raw_integerVKgI
};

static _KLsignatureAvaluesGVKi K68 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K53,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kinitialize_class_dispatch_keys_vectoredVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K70,
  &Kinitialize_class_dispatch_keys_vectoredVKgI
};

static _KLsignatureGVKe K70 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kinitialize_class_dispatch_keysVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K72,
  &Kinitialize_class_dispatch_keysVKgI
};

static _KLsignatureGVKe K72 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991617,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kensure_key_to_iclass_storageVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K74,
  &Kensure_key_to_iclass_storageVKgI
};

static _KLsignatureAvaluesGVKi K74 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kiclass_key_to_numberVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K77,
  &Kiclass_key_to_numberVKgI
};

static _KLsignatureAvaluesGVKi K77 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kiclass_number_to_keyVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K77,
  &Kiclass_number_to_keyVKgI
};

_KLsimple_methodGVKe Kimplementation_class_from_keyVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K82,
  &Kimplementation_class_from_keyVKgI
};

static _KLsignatureAvaluesGVKi K82 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_Limplementation_classG_typesVKi
};

_KLsimple_methodGVKe Kobject_class_unique_keyVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K85,
  &Kobject_class_unique_keyVKgI
};

static _KLsignatureAvaluesGVKi K85 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kclass_unique_keyVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K88,
  &Kclass_unique_keyVKgI
};

static _KLsignatureAvaluesGVKi K88 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LclassG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kiclass_unique_keyVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K91,
  &Kiclass_unique_keyVKgI
};

static _KLsignatureAvaluesGVKi K91 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Limplementation_classG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe KPgf_number_requiredVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K94,
  &KPgf_number_requiredVKgI
};

static _KLsignatureAvaluesGVKi K94 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lgeneric_functionG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe KPmethod_number_requiredVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K96,
  &KPmethod_number_requiredVKgI
};

static _KLsignatureAvaluesGVKi K96 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LmethodG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe KPmethod_specializerVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K98,
  &KPmethod_specializerVKgI
};

static _KLsignatureAvaluesGVKi K98 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K99,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K99 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmethodGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe KPload_byteVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K102,
  &KPload_byteVKgI
};

static _KLsignatureAvaluesGVKi K102 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe KPmake_simple_vectorVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K104,
  &KPmake_simple_vectorVKgI
};

static _KLsignatureAvaluesGVKi K104 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K105,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

_KLsimple_methodGVKe KdbgVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K108,
  &KdbgVKgI
};

static _KLsignatureGVKe K108 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991621,
  &KDsignature_LobjectG_typesVKi
};

/* Code */

static D KeassignF35I (D implicit_argumentF14, D implicit_argumentF13, D i_, D c_, D f_) {
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10;
  DWORD T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:859
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
  T6 = SLOT_VALUE_INITD(implicit_argumentF13, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
  T7 = primitive_cast_integer_as_raw(i_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
  T8 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
  T9 = primitive_machine_word_unsigned_less_thanQ(T7,T8);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(c_, implicit_argumentF13, 1, T7);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
    Kelement_range_errorVKeI(implicit_argumentF13, i_);
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:860
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
  T10 = SLOT_VALUE_INITD(implicit_argumentF14, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
  T11 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
  T12 = primitive_machine_word_unsigned_less_thanQ(T7,T11);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(f_, implicit_argumentF14, 1, T7);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
    Kelement_range_errorVKeI(implicit_argumentF14, i_);
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:861
  T5 = f_;
  MV_SET_ELT(0, f_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:859
  return(T5);
}

static D KdassignF34I (D implicit_argumentF7, D implicit_argumentF6, D i_, D c_, D f_) {
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:863
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:864
  T5 = KeassignF35I(implicit_argumentF7, implicit_argumentF6, i_, c_, f_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:863
  return(T5);
}

D Kmake_argnum_setYdispatch_engine_internalVdylanI () {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:175
  T1 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:175
  SLOT_VALUE_SETTER((D) 1, T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:175
  SLOT_VALUE_SETTER(&KPempty_listVKi, T1, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:175
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:174
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kadd_argnumYdispatch_engine_internalVdylanI (D argnum_, D argnum_set_) {
  D firstone_;
  D T3_0;
  D T4;
  D oldcountF5;
  D oargnum_;
  D oldcountF7;
  D nxt_;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  DWORD T24;
  D T25;
  D T26;
  D prevF27T, prevF27;
  D T28;
  D lF29T, lF29;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:204
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:225
  T4 = SLOT_VALUE_INITD(argnum_set_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:225
  firstone_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:220
  prevF27T = argnum_set_;
  lF29T = firstone_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:220
    prevF27 = prevF27T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:220
    T28 = prevF27;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:220
    lF29 = lF29T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:207
    T9 = primitive_idQ(lF29,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:207
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:208
      T10 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:208
      SLOT_VALUE_SETTER(argnum_, T10, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:208
      SLOT_VALUE_SETTER(&KPempty_listVKi, T10, 1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:208
      SLOT_VALUE_SETTER(T10, T28, 1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:209
      T11 = SLOT_VALUE_INITD(argnum_set_, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:208
      oldcountF5 = T11;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:210
      T12 = primitive_cast_integer_as_raw(oldcountF5);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:210
      T13 = primitive_machine_word_add_signal_overflow(T12,4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:210
      T14 = primitive_cast_raw_as_integer(T13);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:210
      SLOT_VALUE_SETTER(T14, argnum_set_, 0);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:212
      T15 = SLOT_VALUE_INITD(lF29, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:212
      oargnum_ = T15;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:213
      T16 = primitive_idQ(oargnum_,argnum_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:213
      if (T16 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:214
        T17 = primitive_cast_integer_as_raw(argnum_);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:214
        T18 = primitive_cast_integer_as_raw(oargnum_);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:214
        T19 = primitive_machine_word_less_thanQ(T17,T18);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:214
        if (T19 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:215
          T20 = SLOT_VALUE_INITD(T28, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:215
          T21 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:215
          SLOT_VALUE_SETTER(argnum_, T21, 0);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:215
          SLOT_VALUE_SETTER(T20, T21, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:215
          SLOT_VALUE_SETTER(T21, T28, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:216
          T22 = SLOT_VALUE_INITD(argnum_set_, 0);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:215
          oldcountF7 = T22;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:217
          T23 = primitive_cast_integer_as_raw(oldcountF7);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:217
          T24 = primitive_machine_word_add_signal_overflow(T23,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:217
          T25 = primitive_cast_raw_as_integer(T24);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:217
          SLOT_VALUE_SETTER(T25, argnum_set_, 0);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:219
          T26 = SLOT_VALUE_INITD(lF29, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:219
          nxt_ = T26;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:220
          prevF27T = lF29;
          lF29T = nxt_;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:214
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:213
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:207
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:220
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:227
  T3_0 = argnum_set_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:204
  MV_SET_COUNT(1);
  return(T3_0);
}

D KPmake_simple_vectorVKgI (D n_, D v_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:342
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:344
  T2_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, v_, n_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:342
  MV_SET_COUNT(1);
  return(T2_0);
}

D KPmethod_number_requiredVKgI (D m_) {
  D T1_0;
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D mF8;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;
  D T21_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:446
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:447
  T11 = primitive_instanceQ(m_,&KLaccessor_methodGVKe);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:447
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:449
    T12 = primitive_instanceQ(m_,&KLrepeated_accessor_methodGVKe);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:449
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:46
      T10 = m_;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:450
      T13 = primitive_instanceQ(T10,&KLsetter_accessor_methodGVKe);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:450
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:450
        T1_0 = (D) 13;
        T3_0 = T1_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:450
        T2_0 = (D) 9;
        T3_0 = T2_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:450
      T7_0 = T3_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:452
      T14 = primitive_instanceQ(m_,&KLsetter_accessor_methodGVKe);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:452
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:452
        T4_0 = (D) 9;
        T6_0 = T4_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:452
        T5_0 = (D) 5;
        T6_0 = T5_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:452
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:449
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:455
    mF8 = m_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:456
    T15 = SLOT_VALUE_INITD(mF8, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:456
    T16 = SLOT_VALUE_INITD(T15, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:456
    T17 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:456
    T18 = primitive_machine_word_logand(T17,1020);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:456
    T19 = primitive_machine_word_logior(T18,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:456
    T20 = primitive_cast_raw_as_integer(T19);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:456
    T21_0 = T20;
    T9_0 = T21_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:447
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:446
  MV_SET_COUNT(1);
  return(T9_0);
}

D KPmethod_specializerVKgI (D m_, D i_) {
  D mF2;
  D sd_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16_0;
  D mF17;
  D T18_0;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26_0;
  _KLsimple_object_vectorGVKd_1 T27 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T28_0;
  D T29;
  D T30;
  D T31_0;
  D T32;
  D T33;
  D T34_0;
  _KLsimple_object_vectorGVKd_1 T35 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T36_0;
  D T37;
  D T38;
  D T39;
  D T40_0;
  D T41;
  _KLsimple_object_vectorGVKd_1 T42 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T43_0;
  D T44;
  D T45;
  D T46_0;
  D T47;
  D T48;
  D T49_0;
  D T50;
  _KLsimple_object_vectorGVKd_1 T51 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T52_0;
  D T53;
  D T54;
  D T55;
  D T56_0;
  DWORD T57;
  D T58_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:419
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:420
  T20 = primitive_instanceQ(m_,&KLaccessor_methodGVKe);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:420
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:422
    mF2 = m_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:423
    T21 = SLOT_VALUE_INITD(mF2, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:423
    sd_ = T21;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:424
    T22 = primitive_instanceQ(mF2,&KLsingle_accessor_methodGVKe);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:424
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/domain.dylan:60
      T19 = mF2;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:425
      T23 = primitive_instanceQ(T19,&KLgetter_accessor_methodGVKe);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:425
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:426
        T24 = primitive_idQ(i_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:426
        if (T24 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:426
          T25 = SLOT_VALUE_INITD(sd_, 2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:426
          T26_0 = T25;
          T4_0 = T26_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:426
          T27.vector_element_[0] = i_;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:426
          T28_0 = KerrorVKdMM1I(&K24, &T27);
          T4_0 = T28_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:426
        T7_0 = T4_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
        T29 = primitive_idQ(i_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
        if (T29 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
          T30 = SLOT_VALUE_INITD(sd_, 6);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
          T31_0 = T30;
          T6_0 = T31_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
          T32 = primitive_idQ(i_,(D) 5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
          if (T32 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
            T33 = SLOT_VALUE_INITD(sd_, 2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
            T34_0 = T33;
            T5_0 = T34_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
            T35.vector_element_[0] = i_;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
            T36_0 = KerrorVKdMM1I(&K24, &T35);
            T5_0 = T36_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
          T6_0 = T5_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:428
        T7_0 = T6_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:425
      T16_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:431
      T37 = primitive_instanceQ(mF2,&KLgetter_accessor_methodGVKe);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:431
      if (T37 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
        T38 = primitive_idQ(i_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
        if (T38 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
          T39 = SLOT_VALUE_INITD(sd_, 2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
          T40_0 = T39;
          T10_0 = T40_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
          T41 = primitive_idQ(i_,(D) 5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
          if (T41 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
            T8_0 = &KLintegerGVKd;
            T9_0 = T8_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
            T42.vector_element_[0] = i_;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
            T43_0 = KerrorVKdMM1I(&K24, &T42);
            T9_0 = T43_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
          T10_0 = T9_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:432
        T15_0 = T10_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
        T44 = primitive_idQ(i_,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
        if (T44 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
          T45 = SLOT_VALUE_INITD(sd_, 6);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
          T46_0 = T45;
          T14_0 = T46_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
          T47 = primitive_idQ(i_,(D) 5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
          if (T47 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
            T48 = SLOT_VALUE_INITD(sd_, 2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
            T49_0 = T48;
            T13_0 = T49_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
            T50 = primitive_idQ(i_,(D) 9);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
            if (T50 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
              T11_0 = &KLintegerGVKd;
              T12_0 = T11_0;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
              T51.vector_element_[0] = i_;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
              T52_0 = KerrorVKdMM1I(&K24, &T51);
              T12_0 = T52_0;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
            T13_0 = T12_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
          T14_0 = T13_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:434
        T15_0 = T14_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:431
      T16_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:424
    T18_0 = T16_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:438
    mF17 = m_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:439
    T53 = SLOT_VALUE_INITD(mF17, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:440
    T54 = SLOT_VALUE_INITD(T53, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:441
    T57 = primitive_cast_integer_as_raw(i_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:441
    T55 = REPEATED_D_SLOT_VALUE_TAGGED(T54, 1, T57);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:441
    T56_0 = T55;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:441
    T58_0 = T56_0;
    T18_0 = T58_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:420
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:419
  MV_SET_COUNT(1);
  return(T18_0);
}

D Knext_free_argnumYdispatch_engine_internalVdylanI (D previous_, D argnum_set_) {
  D argnums_;
  D T3_0;
  D T4;
  D T5;
  D n_;
  D T7;
  D nextl_;
  D T9;
  D T10;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  D T15;
  D T16;
  D T17;
  D lF18T, lF18;
  D T19_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:238
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:262
  T4 = SLOT_VALUE_INITD(argnum_set_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:262
  argnums_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:249
  lF18T = argnums_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:249
    lF18 = lF18T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:241
    T11 = primitive_idQ(lF18,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:241
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:242
      T5 = Kloop2F33I(previous_, lF18);
      T10 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:244
      T12 = SLOT_VALUE_INITD(lF18, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:244
      n_ = T12;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:245
      T13 = primitive_cast_integer_as_raw(previous_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:245
      T14 = primitive_cast_integer_as_raw(n_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:245
      T15 = primitive_machine_word_less_thanQ(T13,T14);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:245
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:246
        T7 = Kloop2F33I(previous_, lF18);
        T9 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:248
        T16 = SLOT_VALUE_INITD(lF18, 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:248
        nextl_ = T16;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:249
        lF18T = nextl_;
        goto L0;
        T9 = T17;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:245
      T10 = T9;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:241
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:249
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:263
  T19_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:238
  T3_0 = T19_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:238
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kargnum_consideredQYdispatch_engine_internalVdylanI (D argnum_, D argnum_set_) {
  D args_;
  D T3;
  D T4;
  D oargnum_;
  D T6;
  D T7;
  D lF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  D lF20T, lF20;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:183
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:184
  T3 = SLOT_VALUE_INITD(argnum_set_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:184
  args_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:196
  lF20T = args_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:196
    lF20 = lF20T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:186
    T12 = primitive_idQ(lF20,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:186
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:187
      T4 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T11 = T4;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:189
      T13 = SLOT_VALUE_INITD(lF20, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:189
      oargnum_ = T13;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:190
      T14 = primitive_idQ(oargnum_,argnum_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:190
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:191
        T6 = &KPtrueVKi;
        MV_SET_ELT(0, &KPtrueVKi);
        MV_SET_COUNT(1);
        T10 = T6;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:192
        T15 = primitive_cast_integer_as_raw(argnum_);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:192
        T16 = primitive_cast_integer_as_raw(oargnum_);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:192
        T17 = primitive_machine_word_less_thanQ(T15,T16);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:190
        if (T17 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:193
          T7 = &KPfalseVKi;
          MV_SET_ELT(0, &KPfalseVKi);
          MV_SET_COUNT(1);
          T9 = T7;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:195
          T18 = SLOT_VALUE_INITD(lF20, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:195
          lF8 = T18;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:196
          lF20T = lF8;
          goto L0;
          T9 = T19;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:190
        T10 = T9;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:190
      T11 = T10;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:186
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:196
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:183
  return(T11);
}

D Kcompress_maskVKgI (D argmask_, D checkedmask_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  D shiftF17;
  D T18;
  D T19;
  D T20;
  DWORD mxF21;
  DWORD T22;
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
  D T33;
  DWORD amaskF34;
  DWORD cmaskF35;
  DWORD ansF36;
  DWORD shiftbitF37;
  D T38;
  D shiftF39;
  D T40;
  D T41;
  D T42;
  DWORD mxF43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
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
  DWORD amaskF57;
  DWORD cmaskF58;
  DWORD ansF59;
  DWORD shiftbitF60;
  D T61;
  DWORD amaskF62T, amaskF62;
  DWORD cmaskF63T, cmaskF63;
  DWORD ansF64T, ansF64;
  DWORD shiftbitF65T, shiftbitF65;
  D T66;
  DWORD T67;
  DWORD T68;
  D T69;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:745
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:752
  T67 = primitive_cast_integer_as_raw(argmask_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:753
  T68 = primitive_cast_integer_as_raw(checkedmask_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
  amaskF62T = T67;
  cmaskF63T = T68;
  ansF64T = 1;
  shiftbitF65T = 5;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:759
    amaskF62 = amaskF62T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:759
    cmaskF63 = cmaskF63T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:759
    ansF64 = ansF64T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:759
    shiftbitF65 = shiftbitF65T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
    amaskF57 = amaskF62;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
    cmaskF58 = cmaskF63;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
    ansF59 = ansF64;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
    shiftbitF60 = shiftbitF65;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
    amaskF34 = amaskF57;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:752
    T66 = primitive_cast_raw_as_integer(amaskF34);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
    cmaskF35 = cmaskF58;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
    ansF36 = ansF59;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
    T69 = primitive_cast_raw_as_integer(ansF36);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
    shiftbitF37 = shiftbitF60;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:749
    T7 = primitive_idQ(T66,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:749
    if (T7 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:750
      T3 = T69;
      MV_SET_ELT(0, T69);
      MV_SET_COUNT(1);
      T6 = T3;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:752
      T8 = primitive_machine_word_shift_right(amaskF34,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:752
      T9 = primitive_machine_word_logand(T8,-4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:752
      T10 = primitive_machine_word_logior(T9,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:753
      T11 = primitive_machine_word_shift_right(cmaskF35,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:753
      T12 = primitive_machine_word_logand(T11,-4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:753
      T13 = primitive_machine_word_logior(T12,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:754
      T14 = primitive_machine_word_logbitQ(2,cmaskF35);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:754
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T15 = primitive_machine_word_logxor(shiftbitF37,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T16 = primitive_machine_word_add_signal_overflow(ansF36,T15);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        shiftF17 = (D) 5;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        mxF21 = T15;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T20 = shiftF17;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T24 = primitive_cast_integer_as_raw(T20);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T25 = primitive_machine_word_equalQ(T24,257);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        if (T25 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
          shiftF17 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
          T19 = shiftF17;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
          T23 = mxF21;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
          T28 = primitive_cast_integer_as_raw(T19);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
          T27 = primitive_machine_word_shift_right(T28,2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
          T26 = primitive_machine_word_shift_left_signal_overflow(T23,T27);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
          mxF21 = T26;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T18 = shiftF17;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T22 = mxF21;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T31 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T30 = primitive_machine_word_shift_right(T31,2);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T29 = primitive_machine_word_shift_left_signal_overflow(T22,T30);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        T32 = primitive_machine_word_logior(T29,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
        amaskF62T = T10;
        cmaskF63T = T13;
        ansF64T = T16;
        shiftbitF65T = T32;
        goto L0;
        T5 = T33;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:756
        T38 = primitive_machine_word_logbitQ(2,amaskF34);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:754
        if (T38 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          shiftF39 = (D) 5;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T46 = primitive_machine_word_logxor(shiftbitF37,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          mxF43 = T46;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T42 = shiftF39;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T47 = primitive_cast_integer_as_raw(T42);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T48 = primitive_machine_word_equalQ(T47,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          if (T48 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
            shiftF39 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
            T41 = shiftF39;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
            T45 = mxF43;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
            T51 = primitive_cast_integer_as_raw(T41);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
            T50 = primitive_machine_word_shift_right(T51,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
            T49 = primitive_machine_word_shift_left_signal_overflow(T45,T50);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
            mxF43 = T49;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T40 = shiftF39;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T44 = mxF43;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T54 = primitive_cast_integer_as_raw(T40);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T53 = primitive_machine_word_shift_right(T54,2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T52 = primitive_machine_word_shift_left_signal_overflow(T44,T53);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          T55 = primitive_machine_word_logior(T52,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:757
          amaskF62T = T10;
          cmaskF63T = T13;
          ansF64T = ansF36;
          shiftbitF65T = T55;
          goto L0;
          T4 = T56;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:759
          amaskF62T = T10;
          cmaskF63T = T13;
          ansF64T = ansF36;
          shiftbitF65T = shiftbitF37;
          goto L0;
          T4 = T61;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:754
        T5 = T4;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:754
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:749
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:755
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:745
  return(T6);
}

D Kinitialize_class_dispatch_keysVKgI (D v_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:601
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:602
  T2 = Kinitialize_class_dispatch_keys_vectoredVKgI(v_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:601
  MV_SET_COUNT(0);
  return(T2);
}

D Kinitialize_class_dispatch_keys_vectoredVKgI (D v_) {
  D lk_;
  D T2;
  D T3;
  D T4;
  DWORD T5T, T5;
  DWORD k_T, k_;
  D c_;
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
  D T34;
  D T35;
  D T36_0;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  DWORD T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  _KLsimple_object_vectorGVKd_1 T53 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T54;
  D T55;
  DWORD T56;
  D shiftF57;
  D T58;
  D T59;
  D T60;
  DWORD mx_;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  D T66;
  DWORD T67;
  DWORD T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  D T75;
  DWORD T76;
  DWORD T77;
  D T78;
  D res_;
  D T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86_0;
  D T87;
  D T88;
  D T89;
  D T90;
  _KLsimple_object_vectorGVKd_2 T91 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T92;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:606
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:607
  lk_ = Ddispatch_key_lockVKg;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T17 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T18 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T19 = primitive_idQ(T18,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T20 = primitive_not(T19);
    T16 = T20;
  } else {
    T16 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T21 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T22_0 = KmemberQVKdMM3I(&KJlock_, T21, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T23 = T22_0;
    T24 = T23;
  } else {
    T24 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T25 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_initialize_class_dispatch_keys_vectoredF30, 1, lk_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    CALL1(T25, T13);
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T14 = primitive_wait_for_simple_lock(lk_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T27 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T28 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T29 = primitive_idQ(T28,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T30 = primitive_not(T29);
    T26 = T30;
  } else {
    T26 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T31 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T32_0 = KmemberQVKdMM3I(&KJlock_, T31, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T33 = T32_0;
    T34 = T33;
  } else {
    T34 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T35 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T15 = MAKE_CLOSURE_INITD(&Kanonymous_of_initialize_class_dispatch_keys_vectoredF28, 2, T14, lk_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    CALL1(T35, T15);
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T37 = primitive_idQ(T14,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T37 != &KPfalseVKi) {
    T41 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T38 = primitive_idQ(T14,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    if (T38 != &KPfalseVKi) {
      T40 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T36_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(lk_, T14);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T39 = T36_0;
      T40 = T39;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T41 = T40;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T41 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:609
      T42 = SLOT_VALUE_INITD(v_, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:610
      Kensure_key_to_iclass_storageVKgI(T42);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:611
      T3 = Timplementation_classes_by_keyTVKg;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:612
      T4 = Tnext_unique_dispatch_keyTVKg;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:613
      T43 = primitive_cast_integer_as_raw(T4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:613
      T44 = primitive_cast_integer_as_raw(T42);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:613
      T45 = primitive_machine_word_logxor(T44,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:613
      T46 = primitive_machine_word_add_signal_overflow(T43,T45);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:613
      T47 = primitive_cast_raw_as_integer(T46);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:613
      Tnext_unique_dispatch_keyTVKg = T47;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:622
      T56 = primitive_cast_integer_as_raw(T4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
      T5T = 1;
      k_T = T56;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
        T5 = T5T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
        k_ = k_T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
        T48 = primitive_machine_word_equalQ(T5,T44);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
        if (T48 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
          T49 = REPEATED_D_SLOT_VALUE_TAGGED(v_, 1, T5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
          T50 = primitive_instanceQ(T49,&KLclassGVKd);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
          if (T50 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:617
            c_ = T49;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:618
            T51 = SLOT_VALUE(c_, 2);
            T9 = T51;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
            T52 = primitive_instanceQ(T49,&KLimplementation_classGVKe);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
            if (T52 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
              T55 = T49;
              T8 = T55;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
              T53.vector_element_[0] = T49;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
              T54 = KerrorVKdMM1I(&K24, &T53);
              T8 = T54;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
            T9 = T8;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:615
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:622
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T9, T3, 1, k_);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          shiftF57 = (D) 5;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T64 = primitive_machine_word_logxor(k_,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          mx_ = T64;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T60 = shiftF57;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T65 = primitive_cast_integer_as_raw(T60);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T66 = primitive_machine_word_equalQ(T65,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          if (T66 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
            shiftF57 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
            T59 = shiftF57;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
            T63 = mx_;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
            T69 = primitive_cast_integer_as_raw(T59);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
            T68 = primitive_machine_word_shift_right(T69,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
            T67 = primitive_machine_word_shift_left_signal_overflow(T63,T68);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
            mx_ = T67;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T58 = shiftF57;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T62 = mx_;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T72 = primitive_cast_integer_as_raw(T58);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T71 = primitive_machine_word_shift_right(T72,2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T70 = primitive_machine_word_shift_left_signal_overflow(T62,T71);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T73 = primitive_machine_word_logior(T70,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T74 = primitive_machine_word_add_signal_overflow(T73,4000);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          T75 = primitive_cast_raw_as_integer(T74);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:623
          SLOT_VALUE_SETTER(T75, T9, 5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
          T76 = primitive_machine_word_add_signal_overflow(T5,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
          T77 = primitive_machine_word_add_signal_overflow(k_,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
          T5T = T76;
          k_T = T77;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
        T10 = &KPfalseVKi;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:614
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      FALL_THROUGH_UNWIND(T10);
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T81 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    if (T81 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T82 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T83 = primitive_idQ(T82,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T84 = primitive_not(T83);
      T80 = T84;
    } else {
      T80 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    if (T80 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T85 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T86_0 = KmemberQVKdMM3I(&KJlock_, T85, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T87 = T86_0;
      T88 = T87;
    } else {
      T88 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    if (T88 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T89 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      T78 = MAKE_CLOSURE_INITD(&Kanonymous_of_initialize_class_dispatch_keys_vectoredF25, 1, lk_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      CALL1(T89, T78);
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    res_ = primitive_release_simple_lock(lk_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T90 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    if (T90 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
      Klock_release_result_errorYthreads_internalVdylanMM0I(lk_, res_);
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    CONTINUE_UNWIND();
    T12 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T91.vector_element_[0] = &KJsynchronization_;
    T91.vector_element_[1] = lk_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T11 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T91);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T92 = KsignalVKdMM0I(T11, &KPempty_vectorVKi);
    T12 = T92;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:606
  MV_SET_COUNT(0);
  return(T12);
}

static D Kanonymous_of_initialize_class_dispatch_keys_vectoredF30I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T5.vector_element_[0] = &K31;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_initialize_class_dispatch_keys_vectoredF28I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_initialize_class_dispatch_keys_vectoredF25I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T5.vector_element_[0] = &K26;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:608
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kensure_key_to_iclass_storageVKgI (D ninc_) {
  D T1;
  D T2;
  D T3_0;
  D T4_0;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9;
  DWORD T10;
  D T11;
  D shiftF12;
  D T13;
  D T14;
  D T15;
  DWORD mxF16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  DWORD T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D shiftF33;
  D T34;
  D T35;
  D T36;
  DWORD mxF37;
  DWORD T38;
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
  D T50;
  DWORD new_nkeyedF51T, new_nkeyedF51;
  D T52;
  D T53;
  D T54;
  DWORD T55;
  DWORD iF56T, iF56;
  D T57;
  D T58;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:572
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:573
  T1 = Tnext_unique_dispatch_keyTVKg;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:574
  T5 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:574
  T6 = primitive_cast_integer_as_raw(ninc_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:574
  T7 = primitive_machine_word_logxor(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:574
  T8 = primitive_machine_word_add_signal_overflow(T5,T7);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:575
  T2 = Timplementation_classes_by_keyTVKg;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:576
  T9 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:577
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:577
  T11 = primitive_machine_word_less_thanQ(T8,T10);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:577
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:596
    T3_0 = T2;
    T4_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    shiftF12 = (D) 5;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T19 = primitive_machine_word_logxor(T10,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    mxF16 = T19;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T15 = shiftF12;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T20 = primitive_cast_integer_as_raw(T15);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T21 = primitive_machine_word_equalQ(T20,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
      shiftF12 = (D) 129;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
      T14 = shiftF12;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
      T18 = mxF16;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
      T24 = primitive_cast_integer_as_raw(T14);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
      T23 = primitive_machine_word_shift_right(T24,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
      T22 = primitive_machine_word_shift_left_signal_overflow(T18,T23);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
      mxF16 = T22;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T13 = shiftF12;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T17 = mxF16;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T27 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T26 = primitive_machine_word_shift_right(T27,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T25 = primitive_machine_word_shift_left_signal_overflow(T17,T26);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:594
    T28 = primitive_machine_word_logior(T25,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
    new_nkeyedF51T = T28;
  L0: ;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
      new_nkeyedF51 = new_nkeyedF51T;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:579
      T58 = primitive_cast_raw_as_integer(new_nkeyedF51);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:579
      T32 = primitive_machine_word_less_thanQ(T8,new_nkeyedF51);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:579
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:583
        T52 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T58);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:587
        iF56T = 1;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:587
          iF56 = iF56T;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:586
          T57 = primitive_cast_raw_as_integer(iF56);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:585
          T53 = primitive_idQ(T57,T9);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:585
          if (T53 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:586
            T54 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 1, iF56);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:586
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T54, T52, 1, iF56);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:587
            T55 = primitive_machine_word_add_signal_overflow(iF56,4);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:587
            iF56T = T55;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:585
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:587
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:591
        T29 = Timplementation_classes_by_keyTVKg = T52;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:591
        T30 = T29;
        MV_SET_ELT(0, T29);
        MV_SET_COUNT(1);
        T31 = T30;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        shiftF33 = (D) 5;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T40 = primitive_machine_word_logxor(new_nkeyedF51,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        mxF37 = T40;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T36 = shiftF33;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T41 = primitive_cast_integer_as_raw(T36);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T42 = primitive_machine_word_equalQ(T41,257);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        if (T42 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
          shiftF33 = (D) 129;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
          T35 = shiftF33;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
          T39 = mxF37;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
          T45 = primitive_cast_integer_as_raw(T35);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
          T44 = primitive_machine_word_shift_right(T45,2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
          T43 = primitive_machine_word_shift_left_signal_overflow(T39,T44);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
          mxF37 = T43;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T34 = shiftF33;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T38 = mxF37;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T48 = primitive_cast_integer_as_raw(T34);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T47 = primitive_machine_word_shift_right(T48,2);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T46 = primitive_machine_word_shift_left_signal_overflow(T38,T47);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        T49 = primitive_machine_word_logior(T46,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
        new_nkeyedF51T = T49;
        goto L0;
        T31 = T50;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:579
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:580
    T4_0 = T31;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:577
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:572
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kloop2F33I (D prev_, D l_) {
  D T3;
  D T4;
  D nextl_;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D prevF16T, prevF16;
  D T17;
  D lF18T, lF18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:240
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:259
  prevF16T = prev_;
  lF18T = l_;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:259
    prevF16 = prevF16T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:259
    T17 = prevF16;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:259
    lF18 = lF18T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:259
    T19 = lF18;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:254
    T7 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:254
    T8 = primitive_machine_word_add_signal_overflow(T7,4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:254
    T9 = primitive_cast_raw_as_integer(T8);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
    T10 = primitive_idQ(T19,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
    if (T10 != &KPfalseVKi) {
      T3 = T10;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
      T11 = SLOT_VALUE_INITD(T19, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
      T13 = primitive_idQ(T11,T9);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
      T12 = primitive_not(T13);
      T3 = T12;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:256
      T4 = T9;
      MV_SET_ELT(0, T9);
      MV_SET_COUNT(1);
      T6 = T4;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:258
      T14 = SLOT_VALUE_INITD(T19, 1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:258
      nextl_ = T14;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:259
      prevF16T = T9;
      lF18T = nextl_;
      goto L0;
      T6 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:255
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:259
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:240
  return(T6);
}

D KPrestart_dispatchVKgI (D from_, D mepized_args_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:843
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:845
  T4 = primitive_instanceQ(from_,&KLgeneric_functionGVKd);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:845
  if (T4 != &KPfalseVKi) {
    T3 = from_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:847
    T5 = SLOT_VALUE_INITD(T3, 5);
    T2 = T5;
  } else {
    T2 = from_;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:845
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:845
  T6 = primitive_engine_node_apply_with_optionals(T2,from_,mepized_args_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:843
  return(T6);
}

D KPinvoke_generic_functionVKgI (D gf_, D args_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:838
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:839
  T2 = APPLY1(gf_, args_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:838
  return(T2);
}

D KPinvoke_generic_function_mepizedVKgI (D gf_, D args_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:832
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:834
  T2 = SLOT_VALUE_INITD(gf_, 5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:834
  T3 = primitive_engine_node_apply_with_optionals(T2,gf_,args_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:832
  return(T3);
}

D KPinvoke_engine_nodeVKgI (D d_, D gf_, D args_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:825
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:828
  T3 = primitive_engine_node_apply_with_optionals(d_,gf_,args_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:825
  return(T3);
}

D Kengine_node_function_codeVKgI (D d_) {
  D T1;
  D shiftF2;
  D T3;
  D T4;
  D T5;
  DWORD mxF6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
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
  D T37_0;
  DWORD T38;
  D T39;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:814
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:817
  T1 = SLOT_VALUE_INITD(d_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  shiftF2 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T9 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T10 = primitive_machine_word_logxor(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  mxF6 = T10;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T5 = shiftF2;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T11 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T12 = primitive_machine_word_equalQ(T11,257);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    shiftF2 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T4 = shiftF2;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T8 = mxF6;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T15 = primitive_cast_integer_as_raw(T4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T14 = primitive_machine_word_shift_right(T15,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T13 = primitive_machine_word_shift_left_signal_overflow(T8,T14);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    mxF6 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T3 = shiftF2;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T7 = mxF6;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T18 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T17 = primitive_machine_word_shift_right(T18,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T16 = primitive_machine_word_shift_left_signal_overflow(T7,T17);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T19 = primitive_machine_word_logior(T16,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  shiftF20 = (D) 25;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  mxF24 = 4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T23 = shiftF20;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T27 = primitive_cast_integer_as_raw(T23);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T28 = primitive_machine_word_equalQ(T27,257);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    shiftF20 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T22 = shiftF20;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T26 = mxF24;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T31 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T30 = primitive_machine_word_shift_right(T31,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    T29 = primitive_machine_word_shift_left_signal_overflow(T26,T30);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
    mxF24 = T29;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T21 = shiftF20;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T25 = mxF24;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T34 = primitive_cast_integer_as_raw(T21);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T33 = primitive_machine_word_shift_right(T34,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T32 = primitive_machine_word_shift_left_signal_overflow(T25,T33);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T35 = primitive_machine_word_logior(T32,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T36 = primitive_machine_word_subtract_signal_overflow(T35,4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T38 = primitive_machine_word_logand(T19,T36);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T39 = primitive_cast_raw_as_integer(T38);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:815
  T37_0 = T39;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:814
  MV_SET_COUNT(1);
  return(T37_0);
}

D Kdiscriminator_argnumVKgI (D d_) {
  D T1;
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D shiftF6;
  D T7;
  D T8;
  D T9;
  DWORD mx_;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  D T23_0;
  DWORD T24;
  D T25;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:804
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T1 = SLOT_VALUE_INITD(d_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T2 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T3 = primitive_machine_word_shift_right(T2,6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T4 = primitive_machine_word_logand(T3,-4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  shiftF6 = (D) 33;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  mx_ = 4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T9 = shiftF6;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T13 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T14 = primitive_machine_word_equalQ(T13,257);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
    shiftF6 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
    T8 = shiftF6;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
    T12 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
    T17 = primitive_cast_integer_as_raw(T8);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
    T16 = primitive_machine_word_shift_right(T17,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
    T15 = primitive_machine_word_shift_left_signal_overflow(T12,T16);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
    mx_ = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T7 = shiftF6;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T11 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T20 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T19 = primitive_machine_word_shift_right(T20,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T18 = primitive_machine_word_shift_left_signal_overflow(T11,T19);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T21 = primitive_machine_word_logior(T18,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T22 = primitive_machine_word_subtract_signal_overflow(T21,4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T24 = primitive_machine_word_logand(T5,T22);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T25 = primitive_cast_raw_as_integer(T24);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:805
  T23_0 = T25;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:804
  MV_SET_COUNT(1);
  return(T23_0);
}

D Kexpand_maskVKgI (D argmask_, D idx_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D shiftF28;
  D T29;
  D T30;
  D T31;
  DWORD mx_;
  DWORD T33;
  DWORD T34;
  D T35;
  D T36;
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
  DSINT T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  D T52;
  DWORD amaskF53;
  DWORD idxF54;
  DWORD ansF55;
  DWORD shiftbitF56;
  D T57;
  DWORD amaskF58T, amaskF58;
  DWORD idxF59T, idxF59;
  DWORD ansF60T, ansF60;
  DWORD shiftbitF61T, shiftbitF61;
  D T62;
  DWORD T63;
  D T64;
  D T65;
  DWORD T66;
  D T67;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:767
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:773
  T63 = primitive_cast_integer_as_raw(argmask_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
  T66 = primitive_cast_integer_as_raw(idx_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
  amaskF58T = T63;
  idxF59T = T66;
  ansF60T = 1;
  shiftbitF61T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:778
    amaskF58 = amaskF58T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:778
    idxF59 = idxF59T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:778
    ansF60 = ansF60T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:778
    shiftbitF61 = shiftbitF61T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
    amaskF53 = amaskF58;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:773
    T62 = primitive_cast_raw_as_integer(amaskF53);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
    idxF54 = idxF59;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
    T65 = primitive_cast_raw_as_integer(idxF54);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
    ansF55 = ansF60;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
    T67 = primitive_cast_raw_as_integer(ansF55);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
    shiftbitF56 = shiftbitF61;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:774
    T64 = primitive_cast_raw_as_integer(shiftbitF56);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:770
    T7 = primitive_idQ(T62,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:770
    if (T7 != &KPfalseVKi) {
      T3 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:770
      T8 = primitive_idQ(T65,(D) 1);
      T3 = T8;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:770
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:770
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:771
      T4 = T67;
      MV_SET_ELT(0, T67);
      MV_SET_COUNT(1);
      T6 = T4;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:773
      T9 = primitive_machine_word_shift_right(amaskF53,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:773
      T10 = primitive_machine_word_logand(T9,-4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:773
      T11 = primitive_machine_word_logior(T10,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:774
      T12 = primitive_machine_word_add_signal_overflow(shiftbitF56,4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:775
      T13 = primitive_machine_word_logbitQ(2,amaskF53);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:775
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        T14 = primitive_machine_word_shift_right(idxF54,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        T15 = primitive_machine_word_logand(T14,-4);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        T16 = primitive_machine_word_logior(T15,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        T17 = primitive_machine_word_logand(idxF54,5);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        T18 = primitive_machine_word_less_thanQ(shiftbitF56,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T19 = primitive_machine_word_logxor(shiftbitF56,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T20 = primitive_machine_word_negative_signal_overflow(T19);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T21 = primitive_machine_word_logior(T20,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T22 = primitive_machine_word_less_thanQ(T21,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          if (T22 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T24 = primitive_machine_word_shift_right(T20,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T23 = primitive_machine_word_shift_right(T17,T24);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T25 = primitive_machine_word_logand(T23,-4);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T26 = primitive_machine_word_logior(T25,1);
            T48 = T26;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T27 = primitive_machine_word_less_thanQ(T17,1);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            if (T27 != &KPfalseVKi) {
              T47 = -3;
            } else {
              T47 = 1;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T48 = T47;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T49 = T48;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T36 = primitive_machine_word_less_thanQ(shiftbitF56,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          if (T36 != &KPfalseVKi) {
            T35 = T64;
          } else {
            T35 = (D) 257;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          shiftF28 = T35;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T37 = primitive_machine_word_logxor(T17,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          mx_ = T37;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T31 = shiftF28;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T38 = primitive_cast_integer_as_raw(T31);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T39 = primitive_machine_word_equalQ(T38,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          if (T39 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            shiftF28 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T30 = shiftF28;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T34 = mx_;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T42 = primitive_cast_integer_as_raw(T30);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T41 = primitive_machine_word_shift_right(T42,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            T40 = primitive_machine_word_shift_left_signal_overflow(T34,T41);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
            mx_ = T40;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T29 = shiftF28;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T33 = mx_;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T45 = primitive_cast_integer_as_raw(T29);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T44 = primitive_machine_word_shift_right(T45,2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T43 = primitive_machine_word_shift_left_signal_overflow(T33,T44);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
          T46 = primitive_machine_word_logior(T43,1);
          T49 = T46;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        T50 = primitive_machine_word_logxor(T49,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        T51 = primitive_machine_word_add_signal_overflow(ansF55,T50);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
        amaskF58T = T11;
        idxF59T = T16;
        ansF60T = T51;
        shiftbitF61T = T12;
        goto L0;
        T5 = T52;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:778
        amaskF58T = T11;
        idxF59T = idxF54;
        ansF60T = ansF55;
        shiftbitF61T = T12;
        goto L0;
        T5 = T57;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:775
      T6 = T5;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:770
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:776
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:767
  return(T6);
}

D Kengine_node_raw_integer_setterVKgI (D v_, D e_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:658
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:661
  SLOT_VALUE_SETTER(v_, e_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:662
  T2_0 = v_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:658
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kengine_node_raw_integerVKgI (D e_) {
  D T1_0;
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:652
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:655
  T2 = SLOT_VALUE(e_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:655
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:652
  T1_0 = T3_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:652
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kiclass_key_to_numberVKgI (D k_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:566
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:567
  T2 = primitive_cast_integer_as_raw(k_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:567
  T3 = primitive_machine_word_subtract_signal_overflow(T2,4000);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:568
  T4 = primitive_machine_word_shift_right(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:568
  T5 = primitive_machine_word_logand(T4,-4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:568
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:568
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:568
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:566
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kiclass_number_to_keyVKgI (D n_) {
  D shiftF2;
  D T3;
  D T4;
  D T5;
  DWORD mx_;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:561
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  shiftF2 = (D) 5;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T9 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T10 = primitive_machine_word_logxor(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  mx_ = T10;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T5 = shiftF2;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T11 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T12 = primitive_machine_word_equalQ(T11,257);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
    shiftF2 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
    T4 = shiftF2;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
    T8 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
    T15 = primitive_cast_integer_as_raw(T4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
    T14 = primitive_machine_word_shift_right(T15,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
    T13 = primitive_machine_word_shift_left_signal_overflow(T8,T14);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
    mx_ = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T3 = shiftF2;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T7 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T18 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T17 = primitive_machine_word_shift_right(T18,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T16 = primitive_machine_word_shift_left_signal_overflow(T7,T17);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:562
  T19 = primitive_machine_word_logior(T16,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:563
  T20 = primitive_machine_word_add_signal_overflow(T19,4000);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:563
  T21 = primitive_cast_raw_as_integer(T20);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:563
  T22_0 = T21;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:561
  MV_SET_COUNT(1);
  return(T22_0);
}

D Kimplementation_class_from_keyVKgI (D n_) {
  D mm_wrapper_;
  DSINT T3;
  D T4;
  D T5_0;
  D T6_0;
  DWORD T7;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:525
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:528
  T7 = primitive_cast_integer_as_raw(n_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:528
  T8 = primitive_machine_word_logxor(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:527
  mm_wrapper_ = primitive_cast_raw_as_pointer(T8);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:529
  T3 = primitive_header_size();
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:529
  T4 = primitive_element(mm_wrapper_,0,T3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:529
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:525
  T6_0 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:525
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kobject_class_unique_keyVKgI (D x_) {
  DADDR T2;
  DWORD bitsF3;
  D T4;
  D T5;
  D mm_wrapperF6;
  D T7;
  D mm_wrapperF8;
  DADDR T9;
  D T10;
  D T11_0;
  DWORD T12;
  DWORD T13;
  DADDR T14;
  DADDR T15;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:521
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  T2 = primitive_cast_pointer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  bitsF3 = primitive_machine_word_logand(T2,3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  T4 = primitive_machine_word_equalQ(bitsF3,0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
    T5 = primitive_element(x_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
    mm_wrapperF6 = T5;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
    T14 = primitive_cast_pointer_as_raw(mm_wrapperF6);
    T9 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
    T7 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF3,0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
    mm_wrapperF8 = T7;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
    T15 = primitive_cast_pointer_as_raw(mm_wrapperF8);
    T9 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  T12 = primitive_machine_word_logand(T9,-4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  T10 = primitive_cast_raw_as_integer(T13);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:522
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:521
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kclass_unique_keyVKgI (D c_) {
  D T1;
  D T2;
  DADDR T3;
  D T4;
  D T5_0;
  DWORD T6;
  DWORD T7;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:516
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:517
  T1 = SLOT_VALUE(c_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:517
  T2 = SLOT_VALUE_INITD(T1, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:517
  T3 = primitive_cast_pointer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:517
  T6 = primitive_machine_word_logand(T3,-4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:517
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:517
  T4 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:517
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:516
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kiclass_unique_keyVKgI (D ic_) {
  D T1;
  DADDR T2;
  D T3;
  D T4_0;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:512
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:513
  T1 = SLOT_VALUE_INITD(ic_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:513
  T2 = primitive_cast_pointer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:513
  T5 = primitive_machine_word_logand(T2,-4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:513
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:513
  T3 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:513
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:512
  MV_SET_COUNT(1);
  return(T4_0);
}

D KPgf_number_requiredVKgI (D g_) {
  D T1;
  D T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:461
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:462
  T1 = SLOT_VALUE_INITD(g_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:462
  T2 = SLOT_VALUE_INITD(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:462
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:462
  T4 = primitive_machine_word_logand(T3,1020);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:462
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:462
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:462
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:461
  MV_SET_COUNT(1);
  return(T7_0);
}

D KPload_byteVKgI (D p_, D s_, D n_) {
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;
  D shiftF21;
  D T22;
  D T23;
  D T24;
  DWORD mxF25;
  DWORD T26;
  DWORD T27;
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
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DSINT T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  D T45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  D T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  D shiftF54;
  D T55;
  D T56;
  D T57;
  DWORD mxF58;
  DWORD T59;
  DWORD T60;
  D T61;
  D T62;
  DWORD T63;
  D T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  DWORD T73;
  DWORD T74;
  D T75_0;
  DWORD T76;
  D T77;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:355
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:357
  T4 = primitive_cast_integer_as_raw(p_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:357
  T5 = primitive_machine_word_logxor(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:357
  T6 = primitive_machine_word_negative_signal_overflow(T5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:357
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:357
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
  T9 = primitive_machine_word_less_thanQ(T7,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T10 = primitive_machine_word_logxor(T7,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T11 = primitive_machine_word_negative_signal_overflow(T10);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T12 = primitive_machine_word_logior(T11,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T13 = primitive_machine_word_less_thanQ(T12,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T14 = primitive_cast_integer_as_raw(n_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T16 = primitive_machine_word_shift_right(T11,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T15 = primitive_machine_word_shift_right(T14,T16);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T17 = primitive_machine_word_logand(T15,-4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T18 = primitive_machine_word_logior(T17,1);
      T42 = T18;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T19 = primitive_cast_integer_as_raw(n_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T20 = primitive_machine_word_less_thanQ(T19,1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      if (T20 != &KPfalseVKi) {
        T41 = -3;
      } else {
        T41 = 1;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T42 = T41;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T43 = T42;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T29 = primitive_machine_word_less_thanQ(T7,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    if (T29 != &KPfalseVKi) {
      T28 = T8;
    } else {
      T28 = (D) 257;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    shiftF21 = T28;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T30 = primitive_cast_integer_as_raw(n_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T31 = primitive_machine_word_logxor(T30,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    mxF25 = T31;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T24 = shiftF21;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T32 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T33 = primitive_machine_word_equalQ(T32,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    if (T33 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      shiftF21 = (D) 129;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T23 = shiftF21;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T27 = mxF25;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T36 = primitive_cast_integer_as_raw(T23);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T35 = primitive_machine_word_shift_right(T36,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      T34 = primitive_machine_word_shift_left_signal_overflow(T27,T35);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
      mxF25 = T34;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T22 = shiftF21;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T26 = mxF25;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T39 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T38 = primitive_machine_word_shift_right(T39,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T37 = primitive_machine_word_shift_left_signal_overflow(T26,T38);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
    T40 = primitive_machine_word_logior(T37,1);
    T43 = T40;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:358
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
  T44 = primitive_cast_integer_as_raw(s_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
  T45 = primitive_machine_word_less_thanQ(T44,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
  if (T45 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T46 = primitive_machine_word_logxor(T44,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T47 = primitive_machine_word_negative_signal_overflow(T46);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T48 = primitive_machine_word_logior(T47,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T49 = primitive_machine_word_less_thanQ(T48,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    if (T49 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T51 = primitive_machine_word_shift_right(T47,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T50 = primitive_machine_word_shift_right(5,T51);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T52 = primitive_machine_word_logand(T50,-4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T53 = primitive_machine_word_logior(T52,1);
      T72 = T53;
    } else {
      T72 = 1;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T73 = T72;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T62 = primitive_machine_word_less_thanQ(T44,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    if (T62 != &KPfalseVKi) {
      T61 = s_;
    } else {
      T61 = (D) 257;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    shiftF54 = T61;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    mxF58 = 4;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T57 = shiftF54;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T63 = primitive_cast_integer_as_raw(T57);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T64 = primitive_machine_word_equalQ(T63,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    if (T64 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      shiftF54 = (D) 129;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T56 = shiftF54;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T60 = mxF58;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T67 = primitive_cast_integer_as_raw(T56);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T66 = primitive_machine_word_shift_right(T67,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      T65 = primitive_machine_word_shift_left_signal_overflow(T60,T66);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
      mxF58 = T65;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T55 = shiftF54;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T59 = mxF58;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T70 = primitive_cast_integer_as_raw(T55);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T69 = primitive_machine_word_shift_right(T70,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T68 = primitive_machine_word_shift_left_signal_overflow(T59,T69);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
    T71 = primitive_machine_word_logior(T68,1);
    T73 = T71;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:359
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:360
  T74 = primitive_machine_word_subtract_signal_overflow(T73,4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:361
  T76 = primitive_machine_word_logand(T43,T74);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:361
  T77 = primitive_cast_raw_as_integer(T76);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:361
  T75_0 = T77;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:355
  MV_SET_COUNT(1);
  return(T75_0);
}

D KdbgVKgI (D str_, D args_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:335
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:335
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:335
  MV_SET_COUNT(0);
  return(T3);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_dispatch_prologue_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_dispatch_prologue_for_user () {
{
  D Tengine_node_classesT_tmp_;
  D T1;
  D T2;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10_0;
  D T11;
  D T12_0;
  D mm_wrapper_;
  DWORD T14;
  DWORD T15;
  DWORD T16;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T2 = SLOT_VALUE(&KLsimple_object_vectorGVKd, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T4 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T6 = primitive_machine_word_logand(T5,262140);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T8 = primitive_machine_word_add_signal_overflow(5,T6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T9 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T11 = SLOT_VALUE_INITD(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T10_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  mm_wrapper_ = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T14 = primitive_machine_word_subtract_signal_overflow(T7,4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T16 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:9
  T3 = primitive_object_allocate_filled(T9,mm_wrapper_,T15,&KPfalseVKi,64,T16,&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:8
  Tengine_node_classesT_tmp_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:8
  Tengine_node_classesTYdispatch_engine_internalVdylan = Tengine_node_classesT_tmp_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:8
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:469
  T0 = Kmake_simple_lockYthreads_primitivesVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:468
  Ddispatch_key_lockVKg = T0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:468
  T1 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:810
  T1 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 257);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:809
  Tengine_node_callbacksTVKg = T1;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:809
  T0 = &KPfalseVKi;
  goto I2;
}
I2:

{
  D T0;
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:857
  T0 = Tengine_node_classesTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:858
  T1 = Tengine_node_callbacksTVKg;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:866
  KeassignF35I(T1, T0, (D) 1, &KLabsent_engine_nodeGVKg, &KPgf_dispatch_absentVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:869
  KeassignF35I(T1, T0, (D) 5, &KLinapplicable_engine_nodeGVKg, &KPgf_dispatch_inapplicableVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:872
  KeassignF35I(T1, T0, (D) 9, &KLunkeyed_single_method_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:875
  KeassignF35I(T1, T0, (D) 13, &KLimplicit_keyed_single_method_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:878
  KeassignF35I(T1, T0, (D) 17, &KLexplicit_keyed_single_method_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:881
  KeassignF35I(T1, T0, (D) 21, &KLunrestricted_keyed_single_method_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:884
  KeassignF35I(T1, T0, (D) 61, &KLambiguous_methods_engine_nodeGVKg, &KPgf_dispatch_ambiguous_methodsVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:888
  KeassignF35I(T1, T0, (D) 53, &KLprofiling_call_site_cache_header_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:892
  KeassignF35I(T1, T0, (D) 57, &KLsimple_typechecked_cache_header_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:897
  KdassignF34I(T1, T0, (D) 137, &KLlinear_by_class_discriminatorGVKg, &KPgf_dispatch_linear_by_classYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:900
  KdassignF34I(T1, T0, (D) 141, &KLhashed_by_class_discriminatorGVKg, &KPgf_dispatch_hashed_by_classYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:903
  KdassignF34I(T1, T0, (D) 145, &KLlinear_by_singleton_class_discriminatorGVKg, &KPgf_dispatch_linear_by_singleton_classYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:906
  KdassignF34I(T1, T0, (D) 149, &KLhashed_by_singleton_class_discriminatorGVKg, &KPgf_dispatch_hashed_by_singleton_classYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:909
  KdassignF34I(T1, T0, (D) 129, &KLtypecheck_discriminatorGVKg, &KPgf_dispatch_typecheckVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:912
  KdassignF34I(T1, T0, (D) 133, &KLif_type_discriminatorGVKg, &KPgf_dispatch_if_typeVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:915
  KdassignF34I(T1, T0, (D) 153, &KLimmediate_linear_singleton_discriminatorGVKg, &KPgf_dispatch_immediate_linear_singletonVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:918
  KdassignF34I(T1, T0, (D) 165, &KLvalue_object_linear_singleton_discriminatorGVKg, &KPgf_dispatch_value_object_linear_singletonVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:922
  KdassignF34I(T1, T0, (D) 169, &KLmonomorphic_by_class_discriminatorGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:926
  KeassignF35I(T1, T0, (D) 65, &KLboxed_instance_slot_getter_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:929
  KeassignF35I(T1, T0, (D) 69, &KLboxed_instance_slot_setter_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:932
  KeassignF35I(T1, T0, (D) 81, &KLboxed_class_slot_getter_engine_nodeGVKg, &KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:935
  KeassignF35I(T1, T0, (D) 85, &KLboxed_class_slot_setter_engine_nodeGVKg, &KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:938
  KeassignF35I(T1, T0, (D) 73, &KLboxed_repeated_instance_slot_getter_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:941
  KeassignF35I(T1, T0, (D) 77, &KLboxed_repeated_instance_slot_setter_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:944
  KeassignF35I(T1, T0, (D) 89, &KLrepeated_byte_slot_getter_engine_nodeGVKg, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-prologue.dylan:947
  T2 = KeassignF35I(T1, T0, (D) 93, &KLrepeated_byte_slot_setter_engine_nodeGVKg, &KPfalseVKi);
  goto I3;
}
I3:

  return;
}


/* eof */
