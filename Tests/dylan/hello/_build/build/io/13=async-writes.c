#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
  D element_type_;
  D representation_;
} _KLobject_dequeGVKe;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(14);
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(9);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lock_iGYthreads_internalVdylan;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

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
  D handle1_;
  D synchronization_name_;
  D associated_lock_;
} _KLnotificationGYthreadsVdylan;

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
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
} _KLerrorGVKd;

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
  D synchronization_;
} _KLtimeout_expiredGYthreadsVdylan;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(27);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(31);

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
} _KLexternal_stream_accessorGYstreams_internalsVio;

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
} _KLintegerGVKd;

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
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

#define  define__KLbufferGYstreamsVio(nrepeated) \
  typedef struct { \
    D wrapper; \
    D buffer_next_; \
    D buffer_end_; \
    D buffer_position_; \
    D buffer_dirtyQ_; \
    D buffer_start_; \
    D buffer_on_page_bits_; \
    D buffer_off_page_bits_; \
    D buffer_use_count_; \
    D buffer_owning_stream_; \
    D size_; \
    char buffer_element_[nrepeated+1]; \
  } _KLbufferGYstreamsVio_##nrepeated;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D handle1_;
  D handle2_;
  D priority_;
  D thread_name_;
  D function_;
  D function_results_;
} _KLthreadGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handler_type_;
  D handler_function_;
  D handler_test_;
  D handler_init_arguments_;
} _KLhandlerGVKi;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D pending_operation_;
  D pending_status_;
  D pending_stream_;
  D pending_accessor_;
} _KLpending_operationGYstreams_internalsVio;

typedef struct {
  D wrapper;
  D pending_operation_;
  D pending_status_;
  D pending_stream_;
  D pending_accessor_;
  D pending_file_offset_;
  D pending_buffer_;
  D pending_pool_bufferQ_;
  D pending_count_;
  D pending_buffer_offset_;
} _KLpending_writeGYstreams_internalsVio;


/* Referenced object declarations */

D KPadd_classVKeI (D);
D KLobject_dequeGZ32ZconstructorVKiMM0I (D, D, D);
extern _KLclassGVKd KLobject_dequeGVKe;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLobject_dequeGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
D KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLsimple_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLsimple_lock_iGYthreads_internalVdylanW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLsymbolGVKd KJlock_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLnotificationGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLnotificationGYthreadsVdylanW;
D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D KmakeVKdMM35I (D, D, D, D);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLerrorGVKd;
extern _KLmm_wrapperGVKi_0 KLerrorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsimple_methodGVKe KEEVKd;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D, D);
D KgethashVKiI (D, D, D, D);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D, D);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
D Kcurrent_threadYthreadsVdylanI ();
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLexternal_stream_accessorGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLexternal_stream_accessorGYstreams_internalsVioW;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
D Kwait_forYthreadsVdylanMM4I (D, D, D);
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLbufferGYstreamsVio;
extern _KLmm_wrapperGVKi_0 KLbufferGYstreamsVioW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJoperation_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kstreams_internals_moduleYdylan_userVio;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLincremental_generic_functionGVKe KaccessorYstreams_internalsVio;
extern _KLincremental_generic_functionGVKe Kaccessor_preferred_buffer_sizeYstreams_internalsVio;
extern _KLsymbolGVKd KJsize_;
D Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I (D, D, D, D);
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLthreadGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLthreadGYthreadsVdylanW;
extern _KLincremental_generic_functionGVKe Kpush_lastVKd;
D Krelease_allYthreadsVdylanI (D, D);
extern _KLsymbolGVKd KJtype_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJinit_arguments_;
D KLhandlerGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
extern _KLincremental_generic_functionGVKe KpopVKd;
extern _KLincremental_generic_functionGVKe KemptyQVKd;
extern _KLsealed_generic_functionGVKe KfirstVKd;
extern _KLsymbolGVKd KJvalue_;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
D KputhashVKiI (D, D, D);
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Tcurrent_handlersTVKi;

/* Defined object declarations */

extern _KLclassGVKd KLpending_operationGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLpending_operationGYstreams_internalsVioW;
extern _KLsimple_methodGVKe Kasync_check_for_errorsYstreams_internalsVio;
D Kasync_check_for_errorsYstreams_internalsVioI (D);
D Kasync_get_errorYstreams_internalsVioI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_get_errorF28;
static D Kanonymous_of_async_get_errorF28I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_get_errorF26;
static D Kanonymous_of_async_get_errorF26I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_get_errorF23;
static D Kanonymous_of_async_get_errorF23I ();
static _KLunionGVKe K21;
static _KLsingletonGVKd K22;
static _KLbyte_stringGVKd_31 K24;
static _KLsignatureGVKe K25;
static _KLbyte_stringGVKd_33 K27;
static _KLbyte_stringGVKd_45 K29;
static _KLsignatureGVKe K30;
static _KLsimple_object_vectorGVKd_1 K31;
extern _KLsimple_methodGVKe Kasync_wait_for_overlapping_write_completionYstreams_internalsVio;
D Kasync_wait_for_overlapping_write_completionYstreams_internalsVioI (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_overlapping_write_completionF136;
static D Kanonymous_of_async_wait_for_overlapping_write_completionF136I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_overlapping_write_completionF135;
static D Kanonymous_of_async_wait_for_overlapping_write_completionF135I ();
static _KLsimple_closure_methodGVKi_0 KoverlapQF43;
static D KoverlapQF43I (D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_overlapping_write_completionF42;
static D Kanonymous_of_async_wait_for_overlapping_write_completionF42I ();
extern _KLclassGVKd KLpending_writeGYstreams_internalsVio;
extern _KLmm_wrapperGVKi_0 KLpending_writeGYstreams_internalsVioW;
extern _KLsealed_generic_functionGVKe Kpending_file_offsetYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kpending_countYstreams_internalsVio;
extern _KLgetter_methodGVKi Kpending_countYstreams_internalsVioMM0;
static _KLpairGVKd K49;
static _KLbyte_stringGVKd_13 K50;
extern _KLinstance_slot_descriptorGVKe Kpending_countYstreams_internalsVioHLpending_writeG;
extern _KLgetter_methodGVKi Kpending_file_offsetYstreams_internalsVioMM0;
static _KLpairGVKd K53;
static _KLbyte_stringGVKd_19 K54;
extern _KLinstance_slot_descriptorGVKe Kpending_file_offsetYstreams_internalsVioHLpending_writeG;
static _KLsymbolGVKd KJfile_offset_;
static _KLbyte_stringGVKd_11 K57;
static _KLimplementation_classGVKe K58;
static _KLsimple_object_vectorGVKd_9 K59;
extern _KLkeyword_methodGVKe KLpending_writeGZ32ZconstructorYstreams_internalsVioMM0;
D KLpending_writeGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K62;
static _KLsimple_object_vectorGVKd_6 K63;
static _KLsimple_object_vectorGVKd_5 K64;
extern _KLinstance_slot_descriptorGVKe Kpending_bufferYstreams_internalsVioHLpending_writeG;
extern _KLinstance_slot_descriptorGVKe Kpending_pool_bufferQYstreams_internalsVioHLpending_writeG;
extern _KLinstance_slot_descriptorGVKe Kpending_buffer_offsetYstreams_internalsVioHLpending_writeG;
static _KLsymbolGVKd KJbuffer_offset_;
extern _KLsealed_generic_functionGVKe Kpending_buffer_offsetYstreams_internalsVio;
extern _KLgetter_methodGVKi Kpending_buffer_offsetYstreams_internalsVioMM0;
static _KLpairGVKd K71;
static _KLbyte_stringGVKd_21 K72;
static _KLbyte_stringGVKd_13 K73;
extern _KLsealed_generic_functionGVKe Kpending_pool_bufferQYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kpending_pool_bufferQ_setterYstreams_internalsVio;
extern _KLsetter_methodGVKi Kpending_pool_bufferQ_setterYstreams_internalsVioMM0;
static _KLpairGVKd K77;
static _KLbyte_stringGVKd_27 K78;
extern _KLgetter_methodGVKi Kpending_pool_bufferQYstreams_internalsVioMM0;
static _KLpairGVKd K80;
static _KLbyte_stringGVKd_20 K81;
static _KLsymbolGVKd KJbuffer_;
extern _KLsealed_generic_functionGVKe Kpending_bufferYstreams_internalsVio;
extern _KLgetter_methodGVKi Kpending_bufferYstreams_internalsVioMM0;
static _KLpairGVKd K85;
static _KLbyte_stringGVKd_14 K86;
static _KLbyte_stringGVKd_6 K87;
static _KLkeyword_signatureAvaluesGVKi K88;
static _KLsimple_object_vectorGVKd_14 K89;
static _KLsymbolGVKd KJstream_;
static _KLsymbolGVKd KJaccessor_;
static _KLbyte_stringGVKd_8 K92;
static _KLbyte_stringGVKd_6 K93;
static _KLsimple_object_vectorGVKd_7 K94;
static _KLsimple_object_vectorGVKd_1 K95;
extern _KLinstance_slot_descriptorGVKe Kpending_operationYstreams_internalsVioHLpending_operationG;
extern _KLinstance_slot_descriptorGVKe Kpending_statusYstreams_internalsVioHLpending_operationG;
extern _KLinstance_slot_descriptorGVKe Kpending_streamYstreams_internalsVioHLpending_operationG;
extern _KLinstance_slot_descriptorGVKe Kpending_accessorYstreams_internalsVioHLpending_operationG;
extern _KLsealed_generic_functionGVKe Kpending_accessorYstreams_internalsVio;
extern _KLgetter_methodGVKi Kpending_accessorYstreams_internalsVioMM0;
static _KLpairGVKd K102;
static _KLbyte_stringGVKd_16 K103;
extern _KLsealed_generic_functionGVKe Kpending_streamYstreams_internalsVio;
extern _KLgetter_methodGVKi Kpending_streamYstreams_internalsVioMM0;
static _KLpairGVKd K106;
static _KLbyte_stringGVKd_14 K107;
extern _KLsealed_generic_functionGVKe Kpending_statusYstreams_internalsVio;
extern _KLsealed_generic_functionGVKe Kpending_status_setterYstreams_internalsVio;
static _KLunionGVKe K110;
static _KLunionGVKe K111;
static _KLsingletonGVKd K112;
static _KLsymbolGVKd KJcomplete_;
static _KLbyte_stringGVKd_8 K114;
static _KLunionGVKe K115;
static _KLsingletonGVKd K116;
static _KLsymbolGVKd KJin_progress_;
static _KLbyte_stringGVKd_11 K118;
static _KLsingletonGVKd K119;
static _KLsymbolGVKd KJin_queue_;
static _KLbyte_stringGVKd_8 K121;
extern _KLsetter_methodGVKi Kpending_status_setterYstreams_internalsVioMM0;
static _KLpairGVKd K123;
static _KLbyte_stringGVKd_21 K124;
extern _KLgetter_methodGVKi Kpending_statusYstreams_internalsVioMM0;
static _KLpairGVKd K126;
static _KLbyte_stringGVKd_14 K127;
extern _KLsealed_generic_functionGVKe Kpending_operationYstreams_internalsVio;
extern _KLgetter_methodGVKi Kpending_operationYstreams_internalsVioMM0;
static _KLpairGVKd K130;
static _KLbyte_stringGVKd_17 K131;
static _KLbyte_stringGVKd_15 K132;
static _KLsignatureAvaluesGVKi K133;
static _KLsimple_object_vectorGVKd_4 K134;
static _KLsignatureGVKe K137;
static _KLsimple_object_vectorGVKd_3 K138;
extern _KLsimple_methodGVKe Kenqueue_writeYstreams_internalsVio;
D Kenqueue_writeYstreams_internalsVioI (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF236;
static D Kanonymous_of_enqueue_writeF236I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF235;
static D Kanonymous_of_enqueue_writeF235I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF234;
static D Kanonymous_of_enqueue_writeF234I ();
D Kenqueue_operationYstreams_internalsVioI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF167;
static D Kanonymous_of_enqueue_writeF167I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF166;
static D Kanonymous_of_enqueue_writeF166I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF165;
static D Kanonymous_of_enqueue_writeF165I ();
static _KLsymbolGVKd KJknown_power_of_two_sizeQ_;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF163;
static D Kanonymous_of_enqueue_writeF163I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF162;
static D Kanonymous_of_enqueue_writeF162I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF161;
static D Kanonymous_of_enqueue_writeF161I ();
static _KLbyte_stringGVKd_24 K164;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF232;
static D Kanonymous_of_enqueue_operationF232I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF231;
static D Kanonymous_of_enqueue_operationF231I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF230;
static D Kanonymous_of_enqueue_operationF230I ();
extern _KLsimple_methodGVKe Kasync_io_handlerYstreams_internalsVio;
D Kasync_io_handlerYstreams_internalsVioI ();
static _KLbyte_stringGVKd_24 K176;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF185;
static D Kanonymous_of_enqueue_operationF185I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF184;
static D Kanonymous_of_enqueue_operationF184I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF183;
static D Kanonymous_of_enqueue_operationF183I ();
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF217;
static D KUhandler_functionUF217I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF216;
static D Kanonymous_of_async_io_handlerF216I ();
D Kget_opYstreams_internalsVioI ();
extern _KLsealed_generic_functionGVKe Kasync_post_operationYstreams_internalsVio;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF197;
static D Kanonymous_of_async_io_handlerF197I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF196;
static D Kanonymous_of_async_io_handlerF196I ();
extern _KLsimple_methodGVKe Kasync_post_operationYstreams_internalsVioMM0;
D Kasync_post_operationYstreams_internalsVioMM0I (D);
extern _KLsimple_methodGVKe Kasync_post_operationYstreams_internalsVioMM1;
D Kasync_post_operationYstreams_internalsVioMM1I (D);
static _KLpairGVKd K202;
static _KLpairGVKd K203;
static _KLsignatureGVKe K204;
static _KLbyte_stringGVKd_20 K205;
static _KLsignatureGVKe K206;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_opF215;
static D Kanonymous_of_get_opF215I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_opF214;
static D Kanonymous_of_get_opF214I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_opF213;
static D Kanonymous_of_get_opF213I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF226;
static D Kanonymous_of_async_io_handlerF226I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF225;
static D Kanonymous_of_async_io_handlerF225I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF224;
static D Kanonymous_of_async_io_handlerF224I ();
static _KLsignatureGVKe K227;
static _KLsimple_object_vectorGVKd_2 K228;
static _KLsignatureGVKe K229;
static _KLunionGVKe K233;
static _KLsignatureAvaluesGVKi K237;
static _KLsimple_object_vectorGVKd_2 K238;
static _KLsimple_object_vectorGVKd_1 K239;
extern _KLsimple_methodGVKe Kenqueue_operationYstreams_internalsVio;
static _KLimplementation_classGVKe K241;
static _KLsimple_object_vectorGVKd_4 K242;
extern _KLkeyword_methodGVKe KLpending_operationGZ32ZconstructorYstreams_internalsVioMM0;
D KLpending_operationGZ32ZconstructorYstreams_internalsVioMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K245;
static _KLsimple_object_vectorGVKd_6 K246;
static _KLkeyword_signatureAvaluesGVKi K247;
static _KLsimple_object_vectorGVKd_6 K248;
static _KLsimple_object_vectorGVKd_3 K249;
static _KLbyte_stringGVKd_19 K250;
extern _KLsimple_methodGVKe Kasync_wait_for_completionYstreams_internalsVioMM0;
D Kasync_wait_for_completionYstreams_internalsVioMM0I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_completionF266;
static D Kanonymous_of_async_wait_for_completionF266I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_completionF265;
static D Kanonymous_of_async_wait_for_completionF265I ();
static _KLsimple_closure_methodGVKi_0 KsameQF262;
static D KsameQF262I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_completionF261;
static D Kanonymous_of_async_wait_for_completionF261I ();
static _KLsignatureAvaluesGVKi K263;
static _KLsimple_object_vectorGVKd_2 K264;
static _KLpairGVKd K267;

/* Indirection variables */

static D IKJfile_offset_ = &KJfile_offset_;
static D IKJbuffer_offset_ = &KJbuffer_offset_;
static D IKJbuffer_ = &KJbuffer_;
static D IKJstream_ = &KJstream_;
static D IKJaccessor_ = &KJaccessor_;
static D IKJcomplete_ = &KJcomplete_;
static D IKJin_progress_ = &KJin_progress_;
static D IKJin_queue_ = &KJin_queue_;
static D IKJknown_power_of_two_sizeQ_ = &KJknown_power_of_two_sizeQ_;

/* Variables */

D async_wait_for_completionYstreams_internalsVio = &Kasync_wait_for_completionYstreams_internalsVioMM0;
D pending_file_offsetYstreams_internalsVio = &Kpending_file_offsetYstreams_internalsVio;
D pending_bufferYstreams_internalsVio = &Kpending_bufferYstreams_internalsVio;
D pending_countYstreams_internalsVio = &Kpending_countYstreams_internalsVio;
D pending_buffer_offsetYstreams_internalsVio = &Kpending_buffer_offsetYstreams_internalsVio;
D pending_streamYstreams_internalsVio = &Kpending_streamYstreams_internalsVio;
D pending_accessorYstreams_internalsVio = &Kpending_accessorYstreams_internalsVio;
D Lpending_operationGYstreams_internalsVio = &KLpending_operationGYstreams_internalsVio;
D Lpending_writeGYstreams_internalsVio = &KLpending_writeGYstreams_internalsVio;
D Tpending_operationsTYstreams_internalsVio = &KPunboundVKi;
D Tpending_operations_lockTYstreams_internalsVio = &KPunboundVKi;
D Tpending_operations_add_notificationTYstreams_internalsVio = &KPunboundVKi;
D Tpending_operations_remove_notificationTYstreams_internalsVio = &KPunboundVKi;
D Tasync_error_tableTYstreams_internalsVio = &KPunboundVKi;
D Tasync_error_lockTYstreams_internalsVio = &KPunboundVKi;
D Twriter_thread_lockTYstreams_internalsVio = &KPunboundVKi;
D Tbuffer_poolTYstreams_internalsVio = &KPunboundVKi;
D Tbuffer_pool_lockTYstreams_internalsVio = &KPunboundVKi;
D enqueue_operationYstreams_internalsVio = &Kenqueue_operationYstreams_internalsVio;
D enqueue_writeYstreams_internalsVio = &Kenqueue_writeYstreams_internalsVio;
D async_wait_for_overlapping_write_completionYstreams_internalsVio = &Kasync_wait_for_overlapping_write_completionYstreams_internalsVio;
D async_check_for_errorsYstreams_internalsVio = &Kasync_check_for_errorsYstreams_internalsVio;
D Twriter_threadTYstreams_internalsVio = &KPfalseVKi;

/* Objects */

_KLclassGVKd KLpending_operationGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K250,
  &K241,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLpending_operationGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K241,
  (D) 1,
  17,
  33554439,
  (D) 1
};

_KLsimple_methodGVKe Kasync_check_for_errorsYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K30,
  &Kasync_check_for_errorsYstreams_internalsVioI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_get_errorF28 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_get_errorF28I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_get_errorF26 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_get_errorF26I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_get_errorF23 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_get_errorF23I,
  (D) 1
};

static _KLunionGVKe K21 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K22,
  &KLerrorGVKd
};

static _KLsingletonGVKd K22 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_31 K24 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K25 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_33 K27 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLbyte_stringGVKd_45 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLsignatureGVKe K30 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K31
};

static _KLsimple_object_vectorGVKd_1 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

_KLsimple_methodGVKe Kasync_wait_for_overlapping_write_completionYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K137,
  &Kasync_wait_for_overlapping_write_completionYstreams_internalsVioI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_overlapping_write_completionF136 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_wait_for_overlapping_write_completionF136I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_overlapping_write_completionF135 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_wait_for_overlapping_write_completionF135I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KoverlapQF43 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &K133,
  &KoverlapQF43I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_overlapping_write_completionF42 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_wait_for_overlapping_write_completionF42I,
  (D) 1
};

_KLclassGVKd KLpending_writeGYstreams_internalsVio = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K132,
  &K58,
  (D) 1,
  &Kstreams_internals_moduleYdylan_userVio
};

_KLmm_wrapperGVKi_0 KLpending_writeGYstreams_internalsVioW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K58,
  (D) 1,
  37,
  33554439,
  (D) 1
};

_KLsealed_generic_functionGVKe Kpending_file_offsetYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K54,
  &K53,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpending_countYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K50,
  &K49,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpending_countYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_countYstreams_internalsVioHLpending_writeG
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_countYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "pending-count"
};

_KLinstance_slot_descriptorGVKe Kpending_countYstreams_internalsVioHLpending_writeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLpending_writeGYstreams_internalsVio,
  &KJcount_,
  &Kpending_countYstreams_internalsVio,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLgetter_methodGVKi Kpending_file_offsetYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_file_offsetYstreams_internalsVioHLpending_writeG
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_file_offsetYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_19 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "pending-file-offset"
};

_KLinstance_slot_descriptorGVKe Kpending_file_offsetYstreams_internalsVioHLpending_writeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLpending_writeGYstreams_internalsVio,
  &KJfile_offset_,
  &Kpending_file_offsetYstreams_internalsVio,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJfile_offset_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K57
};

static _KLbyte_stringGVKd_11 K57 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "file-offset"
};

static _KLimplementation_classGVKe K58 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433765,
  &KLpending_writeGYstreams_internalsVio,
  &KLpending_writeGYstreams_internalsVioW,
  &KPfalseVKi,
  &K59,
  (D) -3,
  &KLpending_writeGZ32ZconstructorYstreams_internalsVioMM0,
  &K62,
  &K63,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K64,
  &K59,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_9 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 37,
  &Kpending_operationYstreams_internalsVioHLpending_operationG,
  &Kpending_statusYstreams_internalsVioHLpending_operationG,
  &Kpending_streamYstreams_internalsVioHLpending_operationG,
  &Kpending_accessorYstreams_internalsVioHLpending_operationG,
  &Kpending_file_offsetYstreams_internalsVioHLpending_writeG,
  &Kpending_bufferYstreams_internalsVioHLpending_writeG,
  &Kpending_pool_bufferQYstreams_internalsVioHLpending_writeG,
  &Kpending_countYstreams_internalsVioHLpending_writeG,
  &Kpending_buffer_offsetYstreams_internalsVioHLpending_writeG
};

_KLkeyword_methodGVKe KLpending_writeGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_9,
  &K88,
  &key_mep_2,
  &KLpending_writeGZ32ZconstructorYstreams_internalsVioMM0I,
  &K89
};

static _KLsimple_object_vectorGVKd_1 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLpending_operationGYstreams_internalsVio
};

static _KLsimple_object_vectorGVKd_6 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLpending_operationGYstreams_internalsVio,
  &KLpending_writeGYstreams_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_5 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &Kpending_file_offsetYstreams_internalsVioHLpending_writeG,
  &Kpending_bufferYstreams_internalsVioHLpending_writeG,
  &Kpending_pool_bufferQYstreams_internalsVioHLpending_writeG,
  &Kpending_countYstreams_internalsVioHLpending_writeG,
  &Kpending_buffer_offsetYstreams_internalsVioHLpending_writeG
};

_KLinstance_slot_descriptorGVKe Kpending_bufferYstreams_internalsVioHLpending_writeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLpending_writeGYstreams_internalsVio,
  &KJbuffer_,
  &Kpending_bufferYstreams_internalsVio,
  &KPfalseVKi,
  &KLbufferGYstreamsVio
};

_KLinstance_slot_descriptorGVKe Kpending_pool_bufferQYstreams_internalsVioHLpending_writeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLpending_writeGYstreams_internalsVio,
  &KPfalseVKi,
  &Kpending_pool_bufferQYstreams_internalsVio,
  &Kpending_pool_bufferQ_setterYstreams_internalsVio,
  &KLbooleanGVKd
};

_KLinstance_slot_descriptorGVKe Kpending_buffer_offsetYstreams_internalsVioHLpending_writeG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLpending_writeGYstreams_internalsVio,
  &KJbuffer_offset_,
  &Kpending_buffer_offsetYstreams_internalsVio,
  &KPfalseVKi,
  &KLintegerGVKd
};

static _KLsymbolGVKd KJbuffer_offset_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K73
};

_KLsealed_generic_functionGVKe Kpending_buffer_offsetYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K72,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpending_buffer_offsetYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_buffer_offsetYstreams_internalsVioHLpending_writeG
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_buffer_offsetYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "pending-buffer-offset"
};

static _KLbyte_stringGVKd_13 K73 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "buffer-offset"
};

_KLsealed_generic_functionGVKe Kpending_pool_bufferQYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K81,
  &K80,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpending_pool_bufferQ_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K78,
  &K77,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kpending_pool_bufferQ_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpending_pool_bufferQYstreams_internalsVioHLpending_writeG
};

static _KLpairGVKd K77 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_pool_bufferQ_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_27 K78 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 109,
  "pending-pool-buffer?-setter"
};

_KLgetter_methodGVKi Kpending_pool_bufferQYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_pool_bufferQYstreams_internalsVioHLpending_writeG
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_pool_bufferQYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K81 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "pending-pool-buffer?"
};

static _KLsymbolGVKd KJbuffer_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K87
};

_KLsealed_generic_functionGVKe Kpending_bufferYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K86,
  &K85,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpending_bufferYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_bufferYstreams_internalsVioHLpending_writeG
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_bufferYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "pending-buffer"
};

static _KLbyte_stringGVKd_6 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "buffer"
};

static _KLkeyword_signatureAvaluesGVKi K88 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K94,
  &KDsignature_LobjectG_typesVKi,
  &K95
};

static _KLsimple_object_vectorGVKd_14 K89 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 57,
  &KJoperation_,
  &KPunboundVKi,
  &KJstream_,
  &KPunboundVKi,
  &KJaccessor_,
  &KPunboundVKi,
  &KJfile_offset_,
  &KPunboundVKi,
  &KJbuffer_,
  &KPunboundVKi,
  &KJcount_,
  &KPunboundVKi,
  &KJbuffer_offset_,
  &KPunboundVKi
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K93
};

static _KLsymbolGVKd KJaccessor_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K92
};

static _KLbyte_stringGVKd_8 K92 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "accessor"
};

static _KLbyte_stringGVKd_6 K93 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLsimple_object_vectorGVKd_7 K94 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KJoperation_,
  &KJstream_,
  &KJaccessor_,
  &KJfile_offset_,
  &KJbuffer_,
  &KJcount_,
  &KJbuffer_offset_
};

static _KLsimple_object_vectorGVKd_1 K95 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLpending_writeGYstreams_internalsVio
};

_KLinstance_slot_descriptorGVKe Kpending_operationYstreams_internalsVioHLpending_operationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLpending_operationGYstreams_internalsVio,
  &KJoperation_,
  &Kpending_operationYstreams_internalsVio,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Kpending_statusYstreams_internalsVioHLpending_operationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLpending_operationGYstreams_internalsVio,
  &KPfalseVKi,
  &Kpending_statusYstreams_internalsVio,
  &Kpending_status_setterYstreams_internalsVio,
  &K110
};

_KLinstance_slot_descriptorGVKe Kpending_streamYstreams_internalsVioHLpending_operationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLpending_operationGYstreams_internalsVio,
  &KJstream_,
  &Kpending_streamYstreams_internalsVio,
  &KPfalseVKi,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

_KLinstance_slot_descriptorGVKe Kpending_accessorYstreams_internalsVioHLpending_operationG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 129,
  &KPfalseVKi,
  &KLpending_operationGYstreams_internalsVio,
  &KJaccessor_,
  &Kpending_accessorYstreams_internalsVio,
  &KPfalseVKi,
  &KLexternal_stream_accessorGYstreams_internalsVio
};

_KLsealed_generic_functionGVKe Kpending_accessorYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K103,
  &K102,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpending_accessorYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_accessorYstreams_internalsVioHLpending_operationG
};

static _KLpairGVKd K102 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_accessorYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K103 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "pending-accessor"
};

_KLsealed_generic_functionGVKe Kpending_streamYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K107,
  &K106,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpending_streamYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_streamYstreams_internalsVioHLpending_operationG
};

static _KLpairGVKd K106 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_streamYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K107 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "pending-stream"
};

_KLsealed_generic_functionGVKe Kpending_statusYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K127,
  &K126,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kpending_status_setterYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K124,
  &K123,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLunionGVKe K110 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K111,
  &K112
};

static _KLunionGVKe K111 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K115,
  &K116
};

static _KLsingletonGVKd K112 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJcomplete_
};

static _KLsymbolGVKd KJcomplete_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K114
};

static _KLbyte_stringGVKd_8 K114 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "complete"
};

static _KLunionGVKe K115 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K22,
  &K119
};

static _KLsingletonGVKd K116 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJin_progress_
};

static _KLsymbolGVKd KJin_progress_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K118
};

static _KLbyte_stringGVKd_11 K118 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "in-progress"
};

static _KLsingletonGVKd K119 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJin_queue_
};

static _KLsymbolGVKd KJin_queue_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K121
};

static _KLbyte_stringGVKd_8 K121 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "in-queue"
};

_KLsetter_methodGVKi Kpending_status_setterYstreams_internalsVioMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kpending_statusYstreams_internalsVioHLpending_operationG
};

static _KLpairGVKd K123 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_status_setterYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K124 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "pending-status-setter"
};

_KLgetter_methodGVKi Kpending_statusYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_statusYstreams_internalsVioHLpending_operationG
};

static _KLpairGVKd K126 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_statusYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K127 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "pending-status"
};

_KLsealed_generic_functionGVKe Kpending_operationYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K131,
  &K130,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kpending_operationYstreams_internalsVioMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kpending_operationYstreams_internalsVioHLpending_operationG
};

static _KLpairGVKd K130 = {
  &KLpairGVKdW /* wrapper */,
  &Kpending_operationYstreams_internalsVioMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K131 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "pending-operation"
};

static _KLbyte_stringGVKd_15 K132 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<pending-write>"
};

static _KLsignatureAvaluesGVKi K133 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K134,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K134 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLpending_operationGYstreams_internalsVio
};

static _KLsignatureGVKe K137 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943053,
  &K138
};

static _KLsimple_object_vectorGVKd_3 K138 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLexternal_stream_accessorGYstreams_internalsVio,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kenqueue_writeYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K237,
  &Kenqueue_writeYstreams_internalsVioI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF236 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF236I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF235 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF235I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF234 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF234I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF167 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF167I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF166 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF166I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF165 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF165I,
  (D) 1
};

static _KLsymbolGVKd KJknown_power_of_two_sizeQ_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K164
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF163 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF163I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF162 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF162I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_writeF161 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_writeF161I,
  (D) 1
};

static _KLbyte_stringGVKd_24 K164 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "known-power-of-two-size?"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF232 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_operationF232I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF231 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_operationF231I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF230 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_operationF230I,
  (D) 1
};

_KLsimple_methodGVKe Kasync_io_handlerYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K229,
  &Kasync_io_handlerYstreams_internalsVioI
};

static _KLbyte_stringGVKd_24 K176 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "asynchronous I/O handler"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF185 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_operationF185I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF184 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_operationF184I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_enqueue_operationF183 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_enqueue_operationF183I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF217 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K227,
  &KUhandler_functionUF217I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF216 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_io_handlerF216I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kasync_post_operationYstreams_internalsVio = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K204,
  (D) 1,
  &K205,
  &K202,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF197 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_io_handlerF197I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF196 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_io_handlerF196I,
  (D) 1
};

_KLsimple_methodGVKe Kasync_post_operationYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K204,
  &Kasync_post_operationYstreams_internalsVioMM0I
};

_KLsimple_methodGVKe Kasync_post_operationYstreams_internalsVioMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K206,
  &Kasync_post_operationYstreams_internalsVioMM1I
};

static _KLpairGVKd K202 = {
  &KLpairGVKdW /* wrapper */,
  &Kasync_post_operationYstreams_internalsVioMM0,
  &K203
};

static _KLpairGVKd K203 = {
  &KLpairGVKdW /* wrapper */,
  &Kasync_post_operationYstreams_internalsVioMM1,
  &KPempty_listVKi
};

static _KLsignatureGVKe K204 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K62
};

static _KLbyte_stringGVKd_20 K205 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "async-post-operation"
};

static _KLsignatureGVKe K206 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K95
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_opF215 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_get_opF215I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_opF214 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_get_opF214I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_opF213 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_get_opF213I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF226 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_io_handlerF226I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF225 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_io_handlerF225I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_io_handlerF224 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_io_handlerF224I,
  (D) 1
};

static _KLsignatureGVKe K227 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K228
};

static _KLsimple_object_vectorGVKd_2 K228 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLerrorGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K229 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

static _KLunionGVKe K233 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K22,
  &KLthreadGYthreadsVdylan
};

static _KLsignatureAvaluesGVKi K237 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K238,
  &K239
};

static _KLsimple_object_vectorGVKd_2 K238 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLpending_writeGYstreams_internalsVio,
  &KLbooleanGVKd
};

static _KLsimple_object_vectorGVKd_1 K239 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbufferGYstreamsVio
};

_KLsimple_methodGVKe Kenqueue_operationYstreams_internalsVio = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K204,
  &Kenqueue_operationYstreams_internalsVioI
};

static _KLimplementation_classGVKe K241 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433745,
  &KLpending_operationGYstreams_internalsVio,
  &KLpending_operationGYstreams_internalsVioW,
  &KPfalseVKi,
  &K242,
  (D) -3,
  &KLpending_operationGZ32ZconstructorYstreams_internalsVioMM0,
  &K245,
  &K246,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K267,
  &KPempty_vectorVKi,
  &K242,
  &K242,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K242 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Kpending_operationYstreams_internalsVioHLpending_operationG,
  &Kpending_statusYstreams_internalsVioHLpending_operationG,
  &Kpending_streamYstreams_internalsVioHLpending_operationG,
  &Kpending_accessorYstreams_internalsVioHLpending_operationG
};

_KLkeyword_methodGVKe KLpending_operationGZ32ZconstructorYstreams_internalsVioMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K247,
  &key_mep_2,
  &KLpending_operationGZ32ZconstructorYstreams_internalsVioMM0I,
  &K248
};

static _KLsimple_object_vectorGVKd_1 K245 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K246 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLpending_operationGYstreams_internalsVio,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K247 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K249,
  &KDsignature_LobjectG_typesVKi,
  &K62
};

static _KLsimple_object_vectorGVKd_6 K248 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJoperation_,
  &KPunboundVKi,
  &KJstream_,
  &KPunboundVKi,
  &KJaccessor_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K249 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJoperation_,
  &KJstream_,
  &KJaccessor_
};

static _KLbyte_stringGVKd_19 K250 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<pending-operation>"
};

_KLsimple_methodGVKe Kasync_wait_for_completionYstreams_internalsVioMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K30,
  &Kasync_wait_for_completionYstreams_internalsVioMM0I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_completionF266 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_wait_for_completionF266I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_completionF265 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_wait_for_completionF265I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KsameQF262 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K263,
  &KsameQF262I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_async_wait_for_completionF261 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K25,
  &Kanonymous_of_async_wait_for_completionF261I,
  (D) 1
};

static _KLsignatureAvaluesGVKi K263 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K264,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K264 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLpending_operationGYstreams_internalsVio
};

static _KLpairGVKd K267 = {
  &KLpairGVKdW /* wrapper */,
  &KLpending_writeGYstreams_internalsVio,
  &KPempty_listVKi
};

/* Code */

D Kasync_check_for_errorsYstreams_internalsVioI (D accessor_) {
  D err_;
  D T3;
  D T4;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:196
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:198
  err_ = Kasync_get_errorYstreams_internalsVioI(accessor_);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:199
  if (err_ != &KPfalseVKi) {
    T6 = err_;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:200
    CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
    T3 = CONGRUENT_CALL2(T6, &KPempty_vectorVKi);
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:199
    T4 = &KPfalseVKi;
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:199
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:196
  MV_SET_COUNT(0);
  return(T5);
}

D Kasync_get_errorYstreams_internalsVioI (D accessor_) {
  D T1;
  D T2;
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12_0;
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
  D T26_0;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D res_;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40_0;
  D T41;
  D T42;
  D T43;
  D T44;
  _KLsimple_object_vectorGVKd_2 T45 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T46_0;
  D T47_0;
  D T48_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:186
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T7 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T8 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T9 = primitive_idQ(T8,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T10 = primitive_not(T9);
    T6 = T10;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T11 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T12_0 = KmemberQVKdMM3I(&KJlock_, T11, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T13 = T12_0;
    T14 = T13;
  } else {
    T14 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T15 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    CALL1(T15, &Kanonymous_of_async_get_errorF26);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T4 = primitive_wait_for_simple_lock(Tasync_error_lockTYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T17 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T18 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T19 = primitive_idQ(T18,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T20 = primitive_not(T19);
    T16 = T20;
  } else {
    T16 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T21 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T22_0 = KmemberQVKdMM3I(&KJlock_, T21, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T23 = T22_0;
    T24 = T23;
  } else {
    T24 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T25 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T5 = MAKE_CLOSURE_INITD(&Kanonymous_of_async_get_errorF28, 1, T4);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    CALL1(T25, T5);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T27 = primitive_idQ(T4,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T27 != &KPfalseVKi) {
    T31 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T28 = primitive_idQ(T4,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    if (T28 != &KPfalseVKi) {
      T30 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T26_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tasync_error_lockTYstreams_internalsVio, T4);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T29 = T26_0;
      T30 = T29;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T31 = T30;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    ENTER_UNWIND_FRAME(T1);
    if (!nlx_setjmp(FRAME_DEST(T1))) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:189
      T32_0 = KgethashVKiI(Tasync_error_tableTYstreams_internalsVio, accessor_, &KPfalseVKi, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      FALL_THROUGH_UNWIND(T32_0);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T35 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T36 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T37 = primitive_idQ(T36,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T38 = primitive_not(T37);
      T34 = T38;
    } else {
      T34 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    if (T34 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T39 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T40_0 = KmemberQVKdMM3I(&KJlock_, T39, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T41 = T40_0;
      T42 = T41;
    } else {
      T42 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    if (T42 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      T43 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      CALL1(T43, &Kanonymous_of_async_get_errorF23);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    res_ = primitive_release_simple_lock(Tasync_error_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T44 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    if (T44 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
      Klock_release_result_errorYthreads_internalVdylanMM0I(Tasync_error_lockTYstreams_internalsVio, res_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:189
    T47_0 = T32_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T32_0);
      primitive_type_check(T47_0, &K21);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T3_0 = T47_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T45.vector_element_[0] = &KJsynchronization_;
    T45.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T2 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T45);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T46_0 = KsignalVKdMM0I(T2, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T48_0 = T46_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T46_0);
      primitive_type_check(T48_0, &K21);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T3_0 = T48_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:186
  MV_SET_COUNT(1);
  return(T3_0);
}

static D Kanonymous_of_async_get_errorF28I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_get_errorF26I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_get_errorF23I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:188
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kasync_wait_for_overlapping_write_completionYstreams_internalsVioI (D accessor_, D offset_, D size_) {
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
  D T15_0;
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
  D T28;
  D T29_0;
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
  D T41T, T41;
  D result_T, result_;
  D T43;
  D T44;
  D T45;
  D T46;
  D res_;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53;
  D T54_0;
  D T55;
  D T56;
  D T57;
  D T58;
  _KLsimple_object_vectorGVKd_2 T59 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T60;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:153
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T10 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T11 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T12 = primitive_idQ(T11,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T13 = primitive_not(T12);
    T9 = T13;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T15_0 = KmemberQVKdMM3I(&KJlock_, T14, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T16 = T15_0;
    T17 = T16;
  } else {
    T17 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T18 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    CALL1(T18, &Kanonymous_of_async_wait_for_overlapping_write_completionF135);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T7 = primitive_wait_for_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T20 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T21 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T22 = primitive_idQ(T21,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T23 = primitive_not(T22);
    T19 = T23;
  } else {
    T19 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T25_0 = KmemberQVKdMM3I(&KJlock_, T24, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T26 = T25_0;
    T27 = T26;
  } else {
    T27 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T28 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T8 = MAKE_CLOSURE_INITD(&Kanonymous_of_async_wait_for_overlapping_write_completionF136, 1, T7);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    CALL1(T28, T8);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T30 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T30 != &KPfalseVKi) {
    T34 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T31 = primitive_idQ(T7,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    if (T31 != &KPfalseVKi) {
      T33 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T29_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, T7);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T32 = T29_0;
      T33 = T32;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T34 = T33;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    ENTER_UNWIND_FRAME(T3);
    if (!nlx_setjmp(FRAME_DEST(T3))) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
    L0: ;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
        T35 = CONGRUENT_CALL1(Tpending_operationsTYstreams_internalsVio);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        T36 = T35;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        T37 = MV_GET_ELT(1);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        T38 = MV_GET_ELT(2);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        T39 = MV_GET_ELT(3);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        T40 = MV_GET_ELT(5);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        T41T = T36;
        result_T = &KPfalseVKi;
      L1: ;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
          T41 = T41T;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
          result_ = result_T;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
          T43 = CALL3(T39, Tpending_operationsTYstreams_internalsVio, T41, T37);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
          if (T43 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
            T44 = CALL2(T40, Tpending_operationsTYstreams_internalsVio, T41);
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
            if (result_ == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
              T45 = CALL2(T38, Tpending_operationsTYstreams_internalsVio, T41);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
              T46 = CALL4(&KoverlapQF43, size_, offset_, accessor_, T44);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
              T41T = T45;
              result_T = T46;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
          }
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        if (result_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:165
          Kwait_forYthreadsVdylanMM4I(Tpending_operations_remove_notificationTYstreams_internalsVio, &KPempty_vectorVKi, &KPfalseVKi);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:164
      T4 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      FALL_THROUGH_UNWIND(T4);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T49 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    if (T49 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T50 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T51 = primitive_idQ(T50,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T52 = primitive_not(T51);
      T48 = T52;
    } else {
      T48 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    if (T48 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T53 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T54_0 = KmemberQVKdMM3I(&KJlock_, T53, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T55 = T54_0;
      T56 = T55;
    } else {
      T56 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    if (T56 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      T57 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      CALL1(T57, &Kanonymous_of_async_wait_for_overlapping_write_completionF42);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    res_ = primitive_release_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T58 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    if (T58 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
      Klock_release_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, res_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    CONTINUE_UNWIND();
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T59.vector_element_[0] = &KJsynchronization_;
    T59.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T59);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T60 = KsignalVKdMM0I(T5, &KPempty_vectorVKi);
    T6 = T60;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:153
  MV_SET_COUNT(0);
  return(T6);
}

static D Kanonymous_of_async_wait_for_overlapping_write_completionF136I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_wait_for_overlapping_write_completionF135I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  MV_SET_COUNT(1);
  return(T6_0);
}

static D KoverlapQF43I (D size_, D offset_, D accessor_, D op_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
  D T24;
  D T25_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:156
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
  T12 = primitive_instanceQ(op_,&KLpending_writeGYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
  if (T12 != &KPfalseVKi) {
    T11 = op_;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
    T13 = SLOT_VALUE(T11, 3);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
    T14 = primitive_idQ(T13,accessor_);
    T4 = T14;
  } else {
    T4 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:158
    T5 = CALL1(&Kpending_file_offsetYstreams_internalsVio, op_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:158
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T15_0 = CONGRUENT_CALL2(T5, offset_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:158
    T16 = T15_0;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:158
    if (T16 != &KPfalseVKi) {
      T17 = offset_;
    } else {
      T17 = T5;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:158
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    T18 = primitive_cast_integer_as_raw(offset_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    T19 = primitive_cast_integer_as_raw(size_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    T20 = primitive_machine_word_logxor(T19,1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    T21 = primitive_machine_word_add_signal_overflow(T18,T20);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    T22 = primitive_cast_raw_as_integer(T21);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    T6 = CALL1(&Kpending_file_offsetYstreams_internalsVio, op_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    T7 = CALL1(&Kpending_countYstreams_internalsVio, op_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T8 = CONGRUENT_CALL2(T6, T7);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T23 = CONGRUENT_CALL2(T22, T8);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    if (T23 != &KPfalseVKi) {
      T24 = T22;
    } else {
      T24 = T8;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:159
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:160
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T25_0 = CONGRUENT_CALL2(T17, T24);
    T10_0 = T25_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
    T9_0 = &KPfalseVKi;
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:157
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:156
  MV_SET_COUNT(1);
  return(T10_0);
}

static D Kanonymous_of_async_wait_for_overlapping_write_completionF42I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:163
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLpending_writeGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_pending_operation_, D Uunique_pending_stream_, D Uunique_pending_accessor_, D Uunique_pending_file_offset_, D Uunique_pending_buffer_, D Uunique_pending_count_, D Uunique_pending_buffer_offset_) {
  D T10;
  D Uunique_pending_operationF11;
  D Uunique_pending_operationF12;
  D Uunique_pending_streamF13;
  D Uunique_pending_streamF14;
  D Uunique_pending_accessorF15;
  D Uunique_pending_accessorF16;
  D Uunique_pending_file_offsetF17;
  D Uunique_pending_file_offsetF18;
  D Uunique_pending_bufferF19;
  D Uunique_pending_bufferF20;
  D Uunique_pending_countF21;
  D Uunique_pending_countF22;
  D Uunique_pending_buffer_offsetF23;
  D Uunique_pending_buffer_offsetF24;
  D T25_0;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:39
  T10 = primitive_object_allocate_filled(10,&KLpending_writeGYstreams_internalsVioW,9,&KPunboundVKi,0,0,&KPunboundVKi);
  T26 = primitive_idQ(Uunique_pending_operation_,&KPunboundVKi);
  if (T26 != &KPfalseVKi) {
    Uunique_pending_operationF12 = Uunique_pending_operation_;
  } else {
    primitive_type_check(Uunique_pending_operation_, &KLfunctionGVKd);
    Uunique_pending_operationF11 = Uunique_pending_operation_;
    Uunique_pending_operationF12 = Uunique_pending_operationF11;
  }
  SLOT_VALUE_SETTER(Uunique_pending_operationF12, T10, 0);
  SLOT_VALUE_SETTER(&KPfalseVKi, T10, 1);
  T27 = primitive_idQ(Uunique_pending_stream_,&KPunboundVKi);
  if (T27 != &KPfalseVKi) {
    Uunique_pending_streamF14 = Uunique_pending_stream_;
  } else {
    primitive_type_check(Uunique_pending_stream_, &KLstreamGYcommon_extensionsVcommon_dylan);
    Uunique_pending_streamF13 = Uunique_pending_stream_;
    Uunique_pending_streamF14 = Uunique_pending_streamF13;
  }
  SLOT_VALUE_SETTER(Uunique_pending_streamF14, T10, 2);
  T28 = primitive_idQ(Uunique_pending_accessor_,&KPunboundVKi);
  if (T28 != &KPfalseVKi) {
    Uunique_pending_accessorF16 = Uunique_pending_accessor_;
  } else {
    primitive_type_check(Uunique_pending_accessor_, &KLexternal_stream_accessorGYstreams_internalsVio);
    Uunique_pending_accessorF15 = Uunique_pending_accessor_;
    Uunique_pending_accessorF16 = Uunique_pending_accessorF15;
  }
  SLOT_VALUE_SETTER(Uunique_pending_accessorF16, T10, 3);
  T29 = primitive_idQ(Uunique_pending_file_offset_,&KPunboundVKi);
  if (T29 != &KPfalseVKi) {
    Uunique_pending_file_offsetF18 = Uunique_pending_file_offset_;
  } else {
    primitive_type_check(Uunique_pending_file_offset_, &KLintegerGVKd);
    Uunique_pending_file_offsetF17 = Uunique_pending_file_offset_;
    Uunique_pending_file_offsetF18 = Uunique_pending_file_offsetF17;
  }
  SLOT_VALUE_SETTER(Uunique_pending_file_offsetF18, T10, 4);
  T30 = primitive_idQ(Uunique_pending_buffer_,&KPunboundVKi);
  if (T30 != &KPfalseVKi) {
    Uunique_pending_bufferF20 = Uunique_pending_buffer_;
  } else {
    primitive_type_check(Uunique_pending_buffer_, &KLbufferGYstreamsVio);
    Uunique_pending_bufferF19 = Uunique_pending_buffer_;
    Uunique_pending_bufferF20 = Uunique_pending_bufferF19;
  }
  SLOT_VALUE_SETTER(Uunique_pending_bufferF20, T10, 5);
  SLOT_VALUE_SETTER(&KPfalseVKi, T10, 6);
  T31 = primitive_idQ(Uunique_pending_count_,&KPunboundVKi);
  if (T31 != &KPfalseVKi) {
    Uunique_pending_countF22 = Uunique_pending_count_;
  } else {
    primitive_type_check(Uunique_pending_count_, &KLintegerGVKd);
    Uunique_pending_countF21 = Uunique_pending_count_;
    Uunique_pending_countF22 = Uunique_pending_countF21;
  }
  SLOT_VALUE_SETTER(Uunique_pending_countF22, T10, 7);
  T32 = primitive_idQ(Uunique_pending_buffer_offset_,&KPunboundVKi);
  if (T32 != &KPfalseVKi) {
    Uunique_pending_buffer_offsetF24 = Uunique_pending_buffer_offset_;
  } else {
    primitive_type_check(Uunique_pending_buffer_offset_, &KLintegerGVKd);
    Uunique_pending_buffer_offsetF23 = Uunique_pending_buffer_offset_;
    Uunique_pending_buffer_offsetF24 = Uunique_pending_buffer_offsetF23;
  }
  SLOT_VALUE_SETTER(Uunique_pending_buffer_offsetF24, T10, 8);
  APPLY2(&KinitializeVKd, T10, init_args_);
  T25_0 = T10;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:39
  MV_SET_COUNT(1);
  return(T25_0);
}

D Kenqueue_writeYstreams_internalsVioI (D op_, D return_fresh_bufferQ_) {
  volatile D T2;
  volatile D preferred_buffer_size_;
  volatile D T4;
  volatile D T5;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10;
  volatile D T11;
  volatile D T12_0;
  volatile D T13_0;
  volatile D T14_0;
  volatile D T15;
  volatile D T16_0;
  volatile D T17_0;
  volatile D T18;
  volatile D T19;
  volatile D T20_0;
  volatile D T21;
  volatile D T22;
  volatile D T23;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile D T30;
  volatile D T31;
  volatile D T32;
  volatile D T33_0;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D T38;
  volatile D T39;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile D T43_0;
  volatile D T44;
  volatile D T45;
  volatile D T46;
  volatile D T47_0;
  volatile D T48;
  volatile D T49;
  volatile D T50;
  volatile D T51;
  volatile D T52;
  volatile D T53;
  volatile D T54;
  volatile D T55;
  volatile D T56;
  volatile D T57;
  volatile D T58;
  volatile D T59;
  volatile D T60;
  volatile D T61;
  volatile D T62_0;
  volatile D T63;
  volatile D T64;
  volatile D T65;
  volatile D T66;
  volatile D T67;
  volatile D T68;
  volatile D T69;
  volatile D T70;
  volatile D T71;
  volatile D T72_0;
  volatile D T73;
  volatile D T74;
  volatile D T75;
  volatile D T76_0;
  volatile D T77;
  volatile D T78;
  volatile D T79;
  volatile D T80;
  volatile D T81;
  volatile D T82;
  volatile D resF83;
  volatile D T84;
  volatile D T85;
  volatile D T86;
  volatile D T87;
  volatile D T88;
  volatile D T89;
  volatile D T90_0;
  volatile D T91;
  volatile D T92;
  volatile D T93;
  volatile D T94;
  volatile _KLsimple_object_vectorGVKd_2 T95 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T96;
  volatile D T97;
  volatile _KLsimple_object_vectorGVKd_4 T98 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D resF99;
  volatile D T100;
  volatile D T101;
  volatile D T102;
  volatile D T103;
  volatile D T104;
  volatile D T105;
  volatile D T106_0;
  volatile D T107;
  volatile D T108;
  volatile D T109;
  volatile D T110;
  volatile _KLsimple_object_vectorGVKd_2 T111 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T112_0;
  volatile D T113_0;
  volatile D T114;
  volatile D T115;
  volatile D T116;
  volatile D T117;
  volatile D T118;
  volatile D T119;
  volatile D T120;
  volatile D T121;
  volatile D T122_0;
  volatile D T123;
  volatile D T124;
  volatile D T125;
  volatile D T126;
  volatile D T127;
  volatile D T128;
  volatile D T129;
  volatile D T130;
  volatile D T131;
  volatile D T132_0;
  volatile D T133;
  volatile D T134;
  volatile D T135;
  volatile D T136_0;
  volatile D T137;
  volatile D T138;
  volatile D T139;
  volatile D T140;
  volatile D T141;
  volatile D T142;
  volatile D T143;
  volatile D resF144;
  volatile D T145;
  volatile D T146;
  volatile D T147;
  volatile D T148;
  volatile D T149;
  volatile D T150;
  volatile D T151_0;
  volatile D T152;
  volatile D T153;
  volatile D T154;
  volatile D T155;
  volatile _KLsimple_object_vectorGVKd_2 T156 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T157_0;
  volatile D T158_0;
  volatile D T159_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:104
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:108
  T21 = SLOT_VALUE(op_, 2);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:108
  T2 = CALL1(&KaccessorYstreams_internalsVio, T21);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:108
  preferred_buffer_size_ = CALL1(&Kaccessor_preferred_buffer_sizeYstreams_internalsVio, T2);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:109
  T22 = SLOT_VALUE(op_, 5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:109
  T23 = SLOT_VALUE_INITD(T22, 9);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:109
  T24 = primitive_idQ(T23,preferred_buffer_size_);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:109
  if (T24 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:114
    SLOT_VALUE_SETTER(return_fresh_bufferQ_, op_, 6);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:117
    Kenqueue_operationYstreams_internalsVioI(op_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:119
    if (return_fresh_bufferQ_ != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      T28 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T29 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T30 = primitive_idQ(T29,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T31 = primitive_not(T30);
        T27 = T31;
      } else {
        T27 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T27 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T32 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T33_0 = KmemberQVKdMM3I(&KJlock_, T32, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T34 = T33_0;
        T35 = T34;
      } else {
        T35 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T35 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T36 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        CALL1(T36, &Kanonymous_of_enqueue_writeF167);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      T25 = primitive_wait_for_simple_lock(Tbuffer_pool_lockTYstreams_internalsVio);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      T38 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T38 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T39 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T40 = primitive_idQ(T39,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T41 = primitive_not(T40);
        T37 = T41;
      } else {
        T37 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T37 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T42 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T43_0 = KmemberQVKdMM3I(&KJlock_, T42, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T44 = T43_0;
        T45 = T44;
      } else {
        T45 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T46 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T26 = MAKE_CLOSURE_INITD(&Kanonymous_of_enqueue_writeF236, 1, T25);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        CALL1(T46, T26);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      T48 = primitive_idQ(T25,(D) 1);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T48 != &KPfalseVKi) {
        T52 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T49 = primitive_idQ(T25,(D) 5);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        if (T49 != &KPfalseVKi) {
          T51 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T47_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tbuffer_pool_lockTYstreams_internalsVio, T25);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T50 = T47_0;
          T51 = T50;
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T52 = T51;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      if (T52 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        ENTER_UNWIND_FRAME(T4);
        if (!nlx_setjmp(FRAME_DEST(T4))) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:122
          T5 = Tbuffer_poolTYstreams_internalsVio;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:122
          T53 = primitive_idQ(T5,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:122
          if (T53 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            T57 = TdebuggingQTVKi;
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T57 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T58 = Tdebug_partsTVKi;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T59 = primitive_idQ(T58,&KPempty_listVKi);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T60 = primitive_not(T59);
              T56 = T60;
            } else {
              T56 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T56 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T61 = Tdebug_partsTVKi;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T62_0 = KmemberQVKdMM3I(&KJlock_, T61, &KPempty_vectorVKi, &KEEVKd);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T63 = T62_0;
              T64 = T63;
            } else {
              T64 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T64 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T65 = Tdebug_out_functionTVKi;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              CALL1(T65, &Kanonymous_of_enqueue_writeF166);
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            T54 = primitive_wait_for_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            T67 = TdebuggingQTVKi;
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T67 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T68 = Tdebug_partsTVKi;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T69 = primitive_idQ(T68,&KPempty_listVKi);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T70 = primitive_not(T69);
              T66 = T70;
            } else {
              T66 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T66 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T71 = Tdebug_partsTVKi;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T72_0 = KmemberQVKdMM3I(&KJlock_, T71, &KPempty_vectorVKi, &KEEVKd);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T73 = T72_0;
              T74 = T73;
            } else {
              T74 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T74 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T75 = Tdebug_out_functionTVKi;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T55 = MAKE_CLOSURE_INITD(&Kanonymous_of_enqueue_writeF235, 1, T54);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              CALL1(T75, T55);
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            T77 = primitive_idQ(T54,(D) 1);
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T77 != &KPfalseVKi) {
              T81 = &KPtrueVKi;
            } else {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T78 = primitive_idQ(T54,(D) 5);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              if (T78 != &KPfalseVKi) {
                T80 = &KPfalseVKi;
              } else {
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T76_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, T54);
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T79 = T76_0;
                T80 = T79;
              }
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T81 = T80;
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
            if (T81 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              ENTER_UNWIND_FRAME(T6);
              if (!nlx_setjmp(FRAME_DEST(T6))) {
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:124
              L0: ;
                  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:124
                  T7 = Tbuffer_poolTYstreams_internalsVio;
                  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:124
                  T82 = primitive_idQ(T7,&KPempty_listVKi);
                  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:124
                  if (T82 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:125
                    Kwait_forYthreadsVdylanMM4I(Tpending_operations_remove_notificationTYstreams_internalsVio, &KPempty_vectorVKi, &KPfalseVKi);
                    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:124
                    goto L0;
                  }
                  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:124
                  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:124
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                FALL_THROUGH_UNWIND(&KPfalseVKi);
              }
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T85 = TdebuggingQTVKi;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              if (T85 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T86 = Tdebug_partsTVKi;
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T87 = primitive_idQ(T86,&KPempty_listVKi);
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T88 = primitive_not(T87);
                T84 = T88;
              } else {
                T84 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              if (T84 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T89 = Tdebug_partsTVKi;
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T90_0 = KmemberQVKdMM3I(&KJlock_, T89, &KPempty_vectorVKi, &KEEVKd);
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T91 = T90_0;
                T92 = T91;
              } else {
                T92 = &KPfalseVKi;
              }
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              if (T92 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                T93 = Tdebug_out_functionTVKi;
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                CALL1(T93, &Kanonymous_of_enqueue_writeF165);
              }
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              resF83 = primitive_release_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T94 = primitive_idQ(resF83,(D) 1);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              if (T94 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
                Klock_release_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, resF83);
              }
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              CONTINUE_UNWIND();
            } else {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              T95.vector_element_[0] = &KJsynchronization_;
              T95.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
              T8 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T95);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
              KsignalVKdMM0I(T8, &KPempty_vectorVKi);
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
          }
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:122
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:129
          T9 = Tbuffer_poolTYstreams_internalsVio;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:129
          T96 = SLOT_VALUE_INITD(T9, 0);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:130
          T10 = Tbuffer_poolTYstreams_internalsVio;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:130
          T97 = SLOT_VALUE_INITD(T10, 1);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:130
          primitive_type_check(T97, &KLlistGVKd);
          T11 = T97;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:130
          Tbuffer_poolTYstreams_internalsVio = T11;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:132
          if (T96 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:132
            T12_0 = T96;
            T14_0 = T12_0;
          } else {
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:132
            T98.vector_element_[0] = IKJknown_power_of_two_sizeQ_;
            T98.vector_element_[1] = &KPtrueVKi;
            T98.vector_element_[2] = &KJsize_;
            T98.vector_element_[3] = preferred_buffer_size_;
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:132
            T13_0 = Kmake_Lpower_of_two_bufferGYstreams_internalsVioMM0I(&T98, &KPtrueVKi, preferred_buffer_size_, C('\x0'));
            T14_0 = T13_0;
          }
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:132
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          FALL_THROUGH_UNWIND(T14_0);
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T101 = TdebuggingQTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        if (T101 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T102 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T103 = primitive_idQ(T102,&KPempty_listVKi);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T104 = primitive_not(T103);
          T100 = T104;
        } else {
          T100 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        if (T100 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T105 = Tdebug_partsTVKi;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T106_0 = KmemberQVKdMM3I(&KJlock_, T105, &KPempty_vectorVKi, &KEEVKd);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T107 = T106_0;
          T108 = T107;
        } else {
          T108 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        if (T108 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          T109 = Tdebug_out_functionTVKi;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          CALL1(T109, &Kanonymous_of_enqueue_writeF163);
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        resF99 = primitive_release_simple_lock(Tbuffer_pool_lockTYstreams_internalsVio);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T110 = primitive_idQ(resF99,(D) 1);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        if (T110 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
          Klock_release_result_errorYthreads_internalVdylanMM0I(Tbuffer_pool_lockTYstreams_internalsVio, resF99);
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        CONTINUE_UNWIND();
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:132
        T158_0 = T14_0;
        {
          MV_CHECK_TYPE_PROLOGUE(T14_0);
          primitive_type_check(T158_0, &KLbufferGYstreamsVio);
          MV_CHECK_TYPE_EPILOGUE();
        }
        T16_0 = T158_0;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T111.vector_element_[0] = &KJsynchronization_;
        T111.vector_element_[1] = Tbuffer_pool_lockTYstreams_internalsVio;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T15 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T111);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T112_0 = KsignalVKdMM0I(T15, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
        T159_0 = T112_0;
        {
          MV_CHECK_TYPE_PROLOGUE(T112_0);
          primitive_type_check(T159_0, &KLbufferGYstreamsVio);
          MV_CHECK_TYPE_EPILOGUE();
        }
        T16_0 = T159_0;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
      T17_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:137
      T113_0 = T22;
      T17_0 = T113_0;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:119
    T20_0 = T17_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:140
    Kenqueue_operationYstreams_internalsVioI(op_);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T117 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T117 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T118 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T119 = primitive_idQ(T118,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T120 = primitive_not(T119);
      T116 = T120;
    } else {
      T116 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T116 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T121 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T122_0 = KmemberQVKdMM3I(&KJlock_, T121, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T123 = T122_0;
      T124 = T123;
    } else {
      T124 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T124 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T125 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      CALL1(T125, &Kanonymous_of_enqueue_writeF162);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T114 = primitive_wait_for_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T127 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T127 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T128 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T129 = primitive_idQ(T128,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T130 = primitive_not(T129);
      T126 = T130;
    } else {
      T126 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T126 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T131 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T132_0 = KmemberQVKdMM3I(&KJlock_, T131, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T133 = T132_0;
      T134 = T133;
    } else {
      T134 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T134 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T135 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T115 = MAKE_CLOSURE_INITD(&Kanonymous_of_enqueue_writeF234, 1, T114);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      CALL1(T135, T115);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T137 = primitive_idQ(T114,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T137 != &KPfalseVKi) {
      T141 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T138 = primitive_idQ(T114,(D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      if (T138 != &KPfalseVKi) {
        T140 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T136_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, T114);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T139 = T136_0;
        T140 = T139;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T141 = T140;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    if (T141 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      ENTER_UNWIND_FRAME(T18);
      if (!nlx_setjmp(FRAME_DEST(T18))) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:142
      L1: ;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:142
          T142 = SLOT_VALUE_INITD(op_, 1);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:142
          CONGRUENT_CALL_PROLOG(&KEVKd, 2);
          T143 = CONGRUENT_CALL2(T142, IKJcomplete_);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:142
          if (T143 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:143
            Kwait_forYthreadsVdylanMM4I(Tpending_operations_remove_notificationTYstreams_internalsVio, &KPempty_vectorVKi, &KPfalseVKi);
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:142
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:142
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:142
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        FALL_THROUGH_UNWIND(&KPfalseVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T146 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      if (T146 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T147 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T148 = primitive_idQ(T147,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T149 = primitive_not(T148);
        T145 = T149;
      } else {
        T145 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      if (T145 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T150 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T151_0 = KmemberQVKdMM3I(&KJlock_, T150, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T152 = T151_0;
        T153 = T152;
      } else {
        T153 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      if (T153 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        T154 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        CALL1(T154, &Kanonymous_of_enqueue_writeF161);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      resF144 = primitive_release_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T155 = primitive_idQ(resF144,(D) 1);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      if (T155 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
        Klock_release_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, resF144);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      CONTINUE_UNWIND();
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      T156.vector_element_[0] = &KJsynchronization_;
      T156.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T19 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T156);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
      KsignalVKdMM0I(T19, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:146
    T157_0 = T22;
    T20_0 = T157_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:109
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:104
  MV_SET_COUNT(1);
  return(T20_0);
}

static D Kanonymous_of_enqueue_writeF236I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tbuffer_pool_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_writeF235I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_writeF234I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kenqueue_operationYstreams_internalsVioI (D op_) {
  volatile D T1;
  volatile D T2;
  volatile D T3;
  volatile D T4;
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
  volatile D T15;
  volatile D T16;
  volatile D T17;
  volatile D T18_0;
  volatile D T19;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile D T23;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28_0;
  volatile D T29;
  volatile D T30;
  volatile D T31;
  volatile D T32_0;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile _KLsimple_object_vectorGVKd_4 T38 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D resF39;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile D T43;
  volatile D T44;
  volatile D T45;
  volatile D T46_0;
  volatile D T47;
  volatile D T48;
  volatile D T49;
  volatile D T50;
  volatile _KLsimple_object_vectorGVKd_2 T51 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T52;
  volatile D T53;
  volatile D T54;
  volatile D T55;
  volatile D T56;
  volatile D T57;
  volatile D T58;
  volatile D T59;
  volatile D T60_0;
  volatile D T61;
  volatile D T62;
  volatile D T63;
  volatile D T64;
  volatile D T65;
  volatile D T66;
  volatile D T67;
  volatile D T68;
  volatile D T69;
  volatile D T70_0;
  volatile D T71;
  volatile D T72;
  volatile D T73;
  volatile D T74_0;
  volatile D T75;
  volatile D T76;
  volatile D T77;
  volatile D T78;
  volatile D T79;
  volatile D resF80;
  volatile D T81;
  volatile D T82;
  volatile D T83;
  volatile D T84;
  volatile D T85;
  volatile D T86;
  volatile D T87_0;
  volatile D T88;
  volatile D T89;
  volatile D T90;
  volatile D T91;
  volatile _KLsimple_object_vectorGVKd_2 T92 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T93;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:85
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:86
  T1 = Twriter_threadTYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:86
  if (T1 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T13 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T14 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T15 = primitive_idQ(T14,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T16 = primitive_not(T15);
      T12 = T16;
    } else {
      T12 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T17 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T18_0 = KmemberQVKdMM3I(&KJlock_, T17, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T19 = T18_0;
      T20 = T19;
    } else {
      T20 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T21 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      CALL1(T21, &Kanonymous_of_enqueue_operationF230);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T10 = primitive_wait_for_simple_lock(Twriter_thread_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T23 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T23 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T24 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T25 = primitive_idQ(T24,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T26 = primitive_not(T25);
      T22 = T26;
    } else {
      T22 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T27 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T28_0 = KmemberQVKdMM3I(&KJlock_, T27, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T29 = T28_0;
      T30 = T29;
    } else {
      T30 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T30 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T31 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_enqueue_operationF232, 1, T10);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      CALL1(T31, T11);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T33 = primitive_idQ(T10,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T33 != &KPfalseVKi) {
      T37 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T34 = primitive_idQ(T10,(D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      if (T34 != &KPfalseVKi) {
        T36 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Twriter_thread_lockTYstreams_internalsVio, T10);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T35 = T32_0;
        T36 = T35;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T37 = T36;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    if (T37 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      ENTER_UNWIND_FRAME(T2);
      if (!nlx_setjmp(FRAME_DEST(T2))) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:88
        T3 = Twriter_threadTYstreams_internalsVio;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:88
        if (T3 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:89
          T38.vector_element_[0] = &KJfunction_;
          T38.vector_element_[1] = &Kasync_io_handlerYstreams_internalsVio;
          T38.vector_element_[2] = &KJname_;
          T38.vector_element_[3] = &K176;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:89
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T4 = CONGRUENT_CALL2(&KLthreadGYthreadsVdylan, &T38);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:89
          Twriter_threadTYstreams_internalsVio = T4;
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:88
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        FALL_THROUGH_UNWIND(&KPfalseVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T41 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      if (T41 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T42 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T43 = primitive_idQ(T42,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T44 = primitive_not(T43);
        T40 = T44;
      } else {
        T40 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T45 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T46_0 = KmemberQVKdMM3I(&KJlock_, T45, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T47 = T46_0;
        T48 = T47;
      } else {
        T48 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      if (T48 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        T49 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        CALL1(T49, &Kanonymous_of_enqueue_operationF185);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      resF39 = primitive_release_simple_lock(Twriter_thread_lockTYstreams_internalsVio);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T50 = primitive_idQ(resF39,(D) 1);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      if (T50 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
        Klock_release_result_errorYthreads_internalVdylanMM0I(Twriter_thread_lockTYstreams_internalsVio, resF39);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      CONTINUE_UNWIND();
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      T51.vector_element_[0] = &KJsynchronization_;
      T51.vector_element_[1] = Twriter_thread_lockTYstreams_internalsVio;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T5 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T51);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
      KsignalVKdMM0I(T5, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:86
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T55 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T55 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T56 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T57 = primitive_idQ(T56,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T58 = primitive_not(T57);
    T54 = T58;
  } else {
    T54 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T54 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T59 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T60_0 = KmemberQVKdMM3I(&KJlock_, T59, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T61 = T60_0;
    T62 = T61;
  } else {
    T62 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T62 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T63 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    CALL1(T63, &Kanonymous_of_enqueue_operationF184);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T52 = primitive_wait_for_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T65 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T65 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T66 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T67 = primitive_idQ(T66,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T68 = primitive_not(T67);
    T64 = T68;
  } else {
    T64 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T64 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T69 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T70_0 = KmemberQVKdMM3I(&KJlock_, T69, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T71 = T70_0;
    T72 = T71;
  } else {
    T72 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T72 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T73 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T53 = MAKE_CLOSURE_INITD(&Kanonymous_of_enqueue_operationF231, 1, T52);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    CALL1(T73, T53);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T75 = primitive_idQ(T52,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T75 != &KPfalseVKi) {
    T79 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T76 = primitive_idQ(T52,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    if (T76 != &KPfalseVKi) {
      T78 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T74_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, T52);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T77 = T74_0;
      T78 = T77;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T79 = T78;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T79 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    ENTER_UNWIND_FRAME(T6);
    if (!nlx_setjmp(FRAME_DEST(T6))) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:95
      CONGRUENT_CALL_PROLOG(&Kpush_lastVKd, 2);
      CONGRUENT_CALL2(Tpending_operationsTYstreams_internalsVio, op_);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:96
      SLOT_VALUE_SETTER(IKJin_queue_, op_, 1);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:97
      T7 = Krelease_allYthreadsVdylanI(Tpending_operations_add_notificationTYstreams_internalsVio, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      FALL_THROUGH_UNWIND(T7);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T82 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    if (T82 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T83 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T84 = primitive_idQ(T83,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T85 = primitive_not(T84);
      T81 = T85;
    } else {
      T81 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    if (T81 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T86 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T87_0 = KmemberQVKdMM3I(&KJlock_, T86, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T88 = T87_0;
      T89 = T88;
    } else {
      T89 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    if (T89 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      T90 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      CALL1(T90, &Kanonymous_of_enqueue_operationF183);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    resF80 = primitive_release_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T91 = primitive_idQ(resF80,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    if (T91 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
      Klock_release_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, resF80);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    CONTINUE_UNWIND();
    T9 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T92.vector_element_[0] = &KJsynchronization_;
    T92.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T8 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T92);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T93 = KsignalVKdMM0I(T8, &KPempty_vectorVKi);
    T9 = T93;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:85
  MV_SET_COUNT(0);
  return(T9);
}

static D Kanonymous_of_enqueue_writeF167I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tbuffer_pool_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_writeF166I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_writeF165I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:123
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_writeF163I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tbuffer_pool_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:121
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_writeF162I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_writeF161I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:141
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_operationF232I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Twriter_thread_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_operationF231I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_operationF230I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Twriter_thread_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kasync_io_handlerYstreams_internalsVioI () {
  volatile D T0;
  volatile D Uunwind_exceptionUPexit_48_;
  volatile D Uoriginal_handlersU_;
  volatile D T3;
  volatile D T4;
  volatile D T5;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile D T9;
  volatile D T10_0;
  volatile _KLsimple_object_vectorGVKd_8 T11 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D T15;
  volatile D T16;
  volatile D T17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile D T21;
  volatile D T22;
  volatile D T23_0;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile D T30;
  volatile D T31;
  volatile D T32;
  volatile D T33_0;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37_0;
  volatile D T38;
  volatile D T39;
  volatile D T40;
  volatile D T41;
  volatile D T42;
  volatile D res_;
  volatile D T44;
  volatile D T45;
  volatile D T46;
  volatile D T47;
  volatile D T48;
  volatile D T49;
  volatile D T50_0;
  volatile D T51;
  volatile D T52;
  volatile D T53;
  volatile D T54;
  volatile _KLsimple_object_vectorGVKd_2 T55 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:219
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:220
L0: ;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:223
    T0 = Kget_opYstreams_internalsVioI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
    ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_48_);
    if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_48_))) {
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      T3 = MAKE_CLOSURE_INITD(&KUhandler_functionUF217, 3, Uoriginal_handlersU_, Uunwind_exceptionUPexit_48_, T0);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      T11.vector_element_[0] = &KJtype_;
      T11.vector_element_[1] = &KLerrorGVKd;
      T11.vector_element_[2] = &KJfunction_;
      T11.vector_element_[3] = T3;
      T11.vector_element_[4] = &KJtest_;
      T11.vector_element_[5] = &KPfalseVKi;
      T11.vector_element_[6] = &KJinit_arguments_;
      T11.vector_element_[7] = &KPempty_vectorVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      T10_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T11, &KLerrorGVKd, T3, &KPfalseVKi, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      T12 = T10_0;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      T4 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      T13 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      SLOT_VALUE_SETTER(T12, T13, 0);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      SLOT_VALUE_SETTER(T4, T13, 1);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      primitive_write_thread_variable(Tcurrent_handlersTVKi, T13);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      ENTER_UNWIND_FRAME(T5);
      if (!nlx_setjmp(FRAME_DEST(T5))) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:227
        T14 = SLOT_VALUE(T0, 0);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:227
        T6 = CALL1(T14, T0);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
        FALL_THROUGH_UNWIND(T6);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      CONTINUE_UNWIND();
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
      /* invalidate Uunwind_exceptionUPexit_48_ */
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:236
    CONGRUENT_CALL_PROLOG(&Kasync_post_operationYstreams_internalsVio, 1);
    CONGRUENT_CALL1(T0);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T18 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T19 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T20 = primitive_idQ(T19,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T21 = primitive_not(T20);
      T17 = T21;
    } else {
      T17 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T22 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T23_0 = KmemberQVKdMM3I(&KJlock_, T22, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T24 = T23_0;
      T25 = T24;
    } else {
      T25 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T26 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      CALL1(T26, &Kanonymous_of_async_io_handlerF197);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T15 = primitive_wait_for_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T28 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T29 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T30 = primitive_idQ(T29,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T31 = primitive_not(T30);
      T27 = T31;
    } else {
      T27 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T32 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T33_0 = KmemberQVKdMM3I(&KJlock_, T32, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T34 = T33_0;
      T35 = T34;
    } else {
      T35 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T36 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T16 = MAKE_CLOSURE_INITD(&Kanonymous_of_async_io_handlerF216, 1, T15);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      CALL1(T36, T16);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T38 = primitive_idQ(T15,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T38 != &KPfalseVKi) {
      T42 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T39 = primitive_idQ(T15,(D) 5);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      if (T39 != &KPfalseVKi) {
        T41 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T37_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, T15);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T40 = T37_0;
        T41 = T40;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T42 = T41;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    if (T42 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      ENTER_UNWIND_FRAME(T7);
      if (!nlx_setjmp(FRAME_DEST(T7))) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:240
        SLOT_VALUE_SETTER(IKJcomplete_, T0, 1);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:241
        CONGRUENT_CALL_PROLOG(&KpopVKd, 1);
        CONGRUENT_CALL1(Tpending_operationsTYstreams_internalsVio);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:242
        Krelease_allYthreadsVdylanI(Tpending_operations_remove_notificationTYstreams_internalsVio, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        FALL_THROUGH_UNWIND(&KPfalseVKi);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T45 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      if (T45 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T46 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T47 = primitive_idQ(T46,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T48 = primitive_not(T47);
        T44 = T48;
      } else {
        T44 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      if (T44 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T49 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T50_0 = KmemberQVKdMM3I(&KJlock_, T49, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T51 = T50_0;
        T52 = T51;
      } else {
        T52 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      if (T52 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        T53 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        CALL1(T53, &Kanonymous_of_async_io_handlerF196);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      res_ = primitive_release_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T54 = primitive_idQ(res_,(D) 1);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      if (T54 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
        Klock_release_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, res_);
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      CONTINUE_UNWIND();
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      T55.vector_element_[0] = &KJsynchronization_;
      T55.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T8 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T55);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
      KsignalVKdMM0I(T8, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:220
    goto L0;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:220
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:220
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:219
  MV_SET_COUNT(0);
  return(T9);
}

static D Kanonymous_of_enqueue_operationF185I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Twriter_thread_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:87
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_operationF184I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_enqueue_operationF183I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:94
  MV_SET_COUNT(1);
  return(T6_0);
}

static D KUhandler_functionUF217I (D e_, D Unext_handlerU_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D all_values_;
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
  D T38;
  D T39_0;
  D T40;
  D T41;
  D T42;
  _KLsimple_object_vectorGVKd_4 T43 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T44;
  D res_;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52_0;
  D T53;
  D T54;
  D T55;
  D T56;
  _KLsimple_object_vectorGVKd_2 T57 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T58;
  D T59;
  D T60;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T13 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T15 = primitive_idQ(T14,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T16 = primitive_not(T15);
    T12 = T16;
  } else {
    T12 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T17 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T18_0 = KmemberQVKdMM3I(&KJlock_, T17, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T19 = T18_0;
    T20 = T19;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T21 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    CALL1(T21, &Kanonymous_of_async_io_handlerF225);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T10 = primitive_wait_for_simple_lock(Tasync_error_lockTYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T23 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T25 = primitive_idQ(T24,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T26 = primitive_not(T25);
    T22 = T26;
  } else {
    T22 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T27 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T28_0 = KmemberQVKdMM3I(&KJlock_, T27, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T29 = T28_0;
    T30 = T29;
  } else {
    T30 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T30 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T31 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_async_io_handlerF226, 1, T10);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    CALL1(T31, T11);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T33 = primitive_idQ(T10,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T33 != &KPfalseVKi) {
    T37 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T34 = primitive_idQ(T10,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    if (T34 != &KPfalseVKi) {
      T36 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tasync_error_lockTYstreams_internalsVio, T10);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T35 = T32_0;
      T36 = T35;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T37 = T36;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    ENTER_UNWIND_FRAME(T3);
    if (!nlx_setjmp(FRAME_DEST(T3))) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:230
      T38 = SLOT_VALUE(CREF(2), 3);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:230
      T39_0 = KgethashVKiI(Tasync_error_tableTYstreams_internalsVio, T38, &KPfalseVKi, &KPtrueVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:230
      T40 = T39_0;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:230
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:230
        T5 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        T6 = T5;
      } else {
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
        T41 = SLOT_VALUE_INITD(Tasync_error_tableTYstreams_internalsVio, 0);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
        T44 = primitive_instanceQ(e_,T41);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
        if (T44 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
          T43.vector_element_[0] = &KJvalue_;
          T43.vector_element_[1] = e_;
          T43.vector_element_[2] = &KJtype_;
          T43.vector_element_[3] = T41;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
          CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
          T42 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T43);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
          CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
          CONGRUENT_CALL2(T42, &KPempty_vectorVKi);
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
        KputhashVKiI(e_, Tasync_error_tableTYstreams_internalsVio, T38);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:232
        T4 = e_;
        MV_SET_ELT(0, e_);
        MV_SET_COUNT(1);
        T6 = T4;
      }
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:230
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      FALL_THROUGH_UNWIND(T6);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T47 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    if (T47 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T48 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T49 = primitive_idQ(T48,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T50 = primitive_not(T49);
      T46 = T50;
    } else {
      T46 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    if (T46 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T51 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T52_0 = KmemberQVKdMM3I(&KJlock_, T51, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T53 = T52_0;
      T54 = T53;
    } else {
      T54 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    if (T54 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      T55 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      CALL1(T55, &Kanonymous_of_async_io_handlerF224);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    res_ = primitive_release_simple_lock(Tasync_error_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T56 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    if (T56 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
      Klock_release_result_errorYthreads_internalVdylanMM0I(Tasync_error_lockTYstreams_internalsVio, res_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    CONTINUE_UNWIND();
    T8 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T57.vector_element_[0] = &KJsynchronization_;
    T57.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T7 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T57);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T58 = KsignalVKdMM0I(T7, &KPempty_vectorVKi);
    T8 = T58;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
  all_values_ = MV_GET_REST_AT(T8, 0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
  T59 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
  T60 = NLX(CREF(1), T59);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:226
  return(T60);
}

static D Kanonymous_of_async_io_handlerF216I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kget_opYstreams_internalsVioI () {
  D T0;
  D T1;
  D T2;
  D op_;
  D T4_0;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15_0;
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
  D T28;
  D T29_0;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D res_;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42_0;
  D T43;
  D T44;
  D T45;
  D T46;
  _KLsimple_object_vectorGVKd_2 T47 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T48_0;
  D T49_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:208
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T10 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T11 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T12 = primitive_idQ(T11,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T13 = primitive_not(T12);
    T9 = T13;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T14 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T15_0 = KmemberQVKdMM3I(&KJlock_, T14, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T16 = T15_0;
    T17 = T16;
  } else {
    T17 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T18 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    CALL1(T18, &Kanonymous_of_get_opF214);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T7 = primitive_wait_for_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T20 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T21 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T22 = primitive_idQ(T21,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T23 = primitive_not(T22);
    T19 = T23;
  } else {
    T19 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T24 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T25_0 = KmemberQVKdMM3I(&KJlock_, T24, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T26 = T25_0;
    T27 = T26;
  } else {
    T27 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T28 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T8 = MAKE_CLOSURE_INITD(&Kanonymous_of_get_opF215, 1, T7);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    CALL1(T28, T8);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T30 = primitive_idQ(T7,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T30 != &KPfalseVKi) {
    T34 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T31 = primitive_idQ(T7,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    if (T31 != &KPfalseVKi) {
      T33 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T29_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, T7);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T32 = T29_0;
      T33 = T32;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T34 = T33;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    ENTER_UNWIND_FRAME(T0);
    if (!nlx_setjmp(FRAME_DEST(T0))) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:210
    L0: ;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:210
        CONGRUENT_CALL_PROLOG(&KemptyQVKd, 1);
        T1 = CONGRUENT_CALL1(Tpending_operationsTYstreams_internalsVio);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:210
        if (T1 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:211
          Kwait_forYthreadsVdylanMM4I(Tpending_operations_add_notificationTYstreams_internalsVio, &KPempty_vectorVKi, &KPfalseVKi);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:210
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:210
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:210
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:213
      CONGRUENT_CALL_PROLOG(&KfirstVKd, 2);
      T2 = CONGRUENT_CALL2(Tpending_operationsTYstreams_internalsVio, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:210
      primitive_type_check(T2, &KLpending_operationGYstreams_internalsVio);
      op_ = T2;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:214
      SLOT_VALUE_SETTER(IKJin_progress_, op_, 1);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:215
      T4_0 = op_;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      FALL_THROUGH_UNWIND(T4_0);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T37 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    if (T37 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T38 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T39 = primitive_idQ(T38,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T40 = primitive_not(T39);
      T36 = T40;
    } else {
      T36 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T41 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T42_0 = KmemberQVKdMM3I(&KJlock_, T41, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T43 = T42_0;
      T44 = T43;
    } else {
      T44 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    if (T44 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      T45 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      CALL1(T45, &Kanonymous_of_get_opF213);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    res_ = primitive_release_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T46 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    if (T46 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
      Klock_release_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, res_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    CONTINUE_UNWIND();
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T47.vector_element_[0] = &KJsynchronization_;
    T47.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T5 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T47);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T48_0 = KsignalVKdMM0I(T5, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T49_0 = T48_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T48_0);
      primitive_type_check(T49_0, &KLpending_operationGYstreams_internalsVio);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T6_0 = T49_0;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:208
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_io_handlerF197I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_io_handlerF196I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:239
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kasync_post_operationYstreams_internalsVioMM0I (D operation_) {
  D T2;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:254
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:254
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:254
  MV_SET_COUNT(0);
  return(T2);
}

D Kasync_post_operationYstreams_internalsVioMM1I (D operation_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:257
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:258
  T6 = SLOT_VALUE_INITD(operation_, 6);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:258
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:261
    T7 = SLOT_VALUE(operation_, 5);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:261
    T2 = Tbuffer_poolTYstreams_internalsVio;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:261
    T8 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:261
    SLOT_VALUE_SETTER(T7, T8, 0);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:261
    SLOT_VALUE_SETTER(T2, T8, 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:261
    Tbuffer_poolTYstreams_internalsVio = T8;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:261
    T3 = &KPfalseVKi;
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:258
    T4 = &KPfalseVKi;
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:258
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:257
  MV_SET_COUNT(0);
  return(T5);
}

static D Kanonymous_of_get_opF215I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_get_opF214I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_get_opF213I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:209
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_io_handlerF226I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_io_handlerF225I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_io_handlerF224I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tasync_error_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:229
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLpending_operationGZ32ZconstructorYstreams_internalsVioMM0I (D class_, D init_args_, D Uunique_pending_operation_, D Uunique_pending_stream_, D Uunique_pending_accessor_) {
  D T6;
  D Uunique_pending_operationF7;
  D Uunique_pending_operationF8;
  D Uunique_pending_streamF9;
  D Uunique_pending_streamF10;
  D Uunique_pending_accessorF11;
  D Uunique_pending_accessorF12;
  D T13_0;
  D T14;
  D T15;
  D T16;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:18
  T6 = primitive_object_allocate_filled(5,&KLpending_operationGYstreams_internalsVioW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  T14 = primitive_idQ(Uunique_pending_operation_,&KPunboundVKi);
  if (T14 != &KPfalseVKi) {
    Uunique_pending_operationF8 = Uunique_pending_operation_;
  } else {
    primitive_type_check(Uunique_pending_operation_, &KLfunctionGVKd);
    Uunique_pending_operationF7 = Uunique_pending_operation_;
    Uunique_pending_operationF8 = Uunique_pending_operationF7;
  }
  SLOT_VALUE_SETTER(Uunique_pending_operationF8, T6, 0);
  SLOT_VALUE_SETTER(&KPfalseVKi, T6, 1);
  T15 = primitive_idQ(Uunique_pending_stream_,&KPunboundVKi);
  if (T15 != &KPfalseVKi) {
    Uunique_pending_streamF10 = Uunique_pending_stream_;
  } else {
    primitive_type_check(Uunique_pending_stream_, &KLstreamGYcommon_extensionsVcommon_dylan);
    Uunique_pending_streamF9 = Uunique_pending_stream_;
    Uunique_pending_streamF10 = Uunique_pending_streamF9;
  }
  SLOT_VALUE_SETTER(Uunique_pending_streamF10, T6, 2);
  T16 = primitive_idQ(Uunique_pending_accessor_,&KPunboundVKi);
  if (T16 != &KPfalseVKi) {
    Uunique_pending_accessorF12 = Uunique_pending_accessor_;
  } else {
    primitive_type_check(Uunique_pending_accessor_, &KLexternal_stream_accessorGYstreams_internalsVio);
    Uunique_pending_accessorF11 = Uunique_pending_accessor_;
    Uunique_pending_accessorF12 = Uunique_pending_accessorF11;
  }
  SLOT_VALUE_SETTER(Uunique_pending_accessorF12, T6, 3);
  APPLY2(&KinitializeVKd, T6, init_args_);
  T13_0 = T6;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:18
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kasync_wait_for_completionYstreams_internalsVioMM0I (D accessor_) {
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
  D T13;
  D T14_0;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25;
  D T26;
  D T27;
  D T28_0;
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
  D T40T, T40;
  D result_T, result_;
  D T42;
  D T43;
  D T44;
  D T45;
  D res_;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  D T52;
  D T53_0;
  D T54;
  D T55;
  D T56;
  D T57;
  _KLsimple_object_vectorGVKd_2 T58 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T59;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:173
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T9 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T10 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T11 = primitive_idQ(T10,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T12 = primitive_not(T11);
    T8 = T12;
  } else {
    T8 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T13 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T14_0 = KmemberQVKdMM3I(&KJlock_, T13, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T15 = T14_0;
    T16 = T15;
  } else {
    T16 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T17 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    CALL1(T17, &Kanonymous_of_async_wait_for_completionF265);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T6 = primitive_wait_for_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T19 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T20 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T21 = primitive_idQ(T20,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T22 = primitive_not(T21);
    T18 = T22;
  } else {
    T18 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T23 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T24_0 = KmemberQVKdMM3I(&KJlock_, T23, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T25 = T24_0;
    T26 = T25;
  } else {
    T26 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T26 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T27 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T7 = MAKE_CLOSURE_INITD(&Kanonymous_of_async_wait_for_completionF266, 1, T6);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    CALL1(T27, T7);
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T29 = primitive_idQ(T6,(D) 1);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T29 != &KPfalseVKi) {
    T33 = &KPtrueVKi;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T30 = primitive_idQ(T6,(D) 5);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    if (T30 != &KPfalseVKi) {
      T32 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T28_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, T6);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T31 = T28_0;
      T32 = T31;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T33 = T32;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T33 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    ENTER_UNWIND_FRAME(T2);
    if (!nlx_setjmp(FRAME_DEST(T2))) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
    L0: ;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
        T34 = CONGRUENT_CALL1(Tpending_operationsTYstreams_internalsVio);
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        T35 = T34;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        T36 = MV_GET_ELT(1);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        T37 = MV_GET_ELT(2);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        T38 = MV_GET_ELT(3);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        T39 = MV_GET_ELT(5);
;
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        T40T = T35;
        result_T = &KPfalseVKi;
      L1: ;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
          T40 = T40T;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
          result_ = result_T;
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
          T42 = CALL3(T38, Tpending_operationsTYstreams_internalsVio, T40, T36);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
          if (T42 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
            T43 = CALL2(T39, Tpending_operationsTYstreams_internalsVio, T40);
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
            if (result_ == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
              T44 = CALL2(T37, Tpending_operationsTYstreams_internalsVio, T40);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
              T45 = CALL2(&KsameQF262, accessor_, T43);
              // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
              T40T = T44;
              result_T = T45;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
          }
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        if (result_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:180
          Kwait_forYthreadsVdylanMM4I(Tpending_operations_remove_notificationTYstreams_internalsVio, &KPempty_vectorVKi, &KPfalseVKi);
          // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
        // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:179
      T3 = &KPfalseVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      FALL_THROUGH_UNWIND(T3);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T48 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    if (T48 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T49 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T50 = primitive_idQ(T49,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T51 = primitive_not(T50);
      T47 = T51;
    } else {
      T47 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    if (T47 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T52 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T53_0 = KmemberQVKdMM3I(&KJlock_, T52, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T54 = T53_0;
      T55 = T54;
    } else {
      T55 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    if (T55 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      T56 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      CALL1(T56, &Kanonymous_of_async_wait_for_completionF261);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    res_ = primitive_release_simple_lock(Tpending_operations_lockTYstreams_internalsVio);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T57 = primitive_idQ(res_,(D) 1);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    if (T57 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
      Klock_release_result_errorYthreads_internalVdylanMM0I(Tpending_operations_lockTYstreams_internalsVio, res_);
    }
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    CONTINUE_UNWIND();
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T58.vector_element_[0] = &KJsynchronization_;
    T58.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T4 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T58);
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T59 = KsignalVKdMM0I(T4, &KPempty_vectorVKi);
    T5 = T59;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:173
  MV_SET_COUNT(0);
  return(T5);
}

static D Kanonymous_of_async_wait_for_completionF266I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T5.vector_element_[0] = &K29;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_async_wait_for_completionF265I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T5.vector_element_[0] = &K27;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  MV_SET_COUNT(1);
  return(T6_0);
}

static D KsameQF262I (D accessor_, D op_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:175
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:176
  T2 = SLOT_VALUE(op_, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:176
  T3 = primitive_idQ(T2,accessor_);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:176
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:175
  MV_SET_COUNT(1);
  return(T4_0);
}

static D Kanonymous_of_async_wait_for_completionF261I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T5.vector_element_[0] = &K24;
  T5.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:178
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_io__X_13Easync_writes_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJfile_offset_);
    if (T0 != &KJfile_offset_) {
      primitive_repeated_slot_value_setter(T0, &K94, 1, 3);
      primitive_repeated_slot_value_setter(T0, &K89, 1, 6);
      primitive_slot_value_setter(T0, &Kpending_file_offsetYstreams_internalsVioHLpending_writeG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_offset_);
    if (T0 != &KJbuffer_offset_) {
      primitive_repeated_slot_value_setter(T0, &K94, 1, 6);
      primitive_repeated_slot_value_setter(T0, &K89, 1, 12);
      primitive_slot_value_setter(T0, &Kpending_buffer_offsetYstreams_internalsVioHLpending_writeG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJbuffer_);
    if (T0 != &KJbuffer_) {
      primitive_repeated_slot_value_setter(T0, &K94, 1, 4);
      primitive_repeated_slot_value_setter(T0, &K89, 1, 8);
      primitive_slot_value_setter(T0, &Kpending_bufferYstreams_internalsVioHLpending_writeG, 3);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      primitive_repeated_slot_value_setter(T0, &K249, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K248, 1, 2);
      primitive_slot_value_setter(T0, &Kpending_streamYstreams_internalsVioHLpending_operationG, 3);
      primitive_repeated_slot_value_setter(T0, &K94, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K89, 1, 2);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJaccessor_);
    if (T0 != &KJaccessor_) {
      primitive_repeated_slot_value_setter(T0, &K249, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K248, 1, 4);
      primitive_slot_value_setter(T0, &Kpending_accessorYstreams_internalsVioHLpending_operationG, 3);
      primitive_repeated_slot_value_setter(T0, &K94, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K89, 1, 4);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcomplete_);
    if (T0 != &KJcomplete_) {
      IKJcomplete_ = T0;
      primitive_slot_value_setter(T0, &K112, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJin_progress_);
    if (T0 != &KJin_progress_) {
      IKJin_progress_ = T0;
      primitive_slot_value_setter(T0, &K116, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJin_queue_);
    if (T0 != &KJin_queue_) {
      IKJin_queue_ = T0;
      primitive_slot_value_setter(T0, &K119, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJknown_power_of_two_sizeQ_);
    if (T0 != &KJknown_power_of_two_sizeQ_) {
      IKJknown_power_of_two_sizeQ_ = T0;
    }
  }
{
  D T0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:18
  T0 = KPadd_classVKeI(&KLpending_operationGYstreams_internalsVio);
  goto I0;
}
I0:

  return;
}

/* USER INIT CODE */

void _Init_io__X_13Easync_writes_for_user () {
{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:62
  T2_0 = KLobject_dequeGZ32ZconstructorVKiMM0I(&KLobject_dequeGVKe, &KPempty_vectorVKi, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:62
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:62
  Tpending_operationsTYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:62
  T0 = &KPfalseVKi;
  goto I3;
}
I3:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:64
  T2_0 = KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLsimple_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:64
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:63
  Tpending_operations_lockTYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:63
  T0 = &KPfalseVKi;
  goto I4;
}
I4:

{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_2 T2 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:66
  T2.vector_element_[0] = &KJlock_;
  T2.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:66
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLnotificationGYthreadsVdylan, &T2);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:65
  Tpending_operations_add_notificationTYstreams_internalsVio = T0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:65
  T1 = &KPfalseVKi;
  goto I5;
}
I5:

{
  D T0;
  D T1;
  _KLsimple_object_vectorGVKd_2 T2 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:68
  T2.vector_element_[0] = &KJlock_;
  T2.vector_element_[1] = Tpending_operations_lockTYstreams_internalsVio;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:68
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0 = CONGRUENT_CALL2(&KLnotificationGYthreadsVdylan, &T2);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:67
  Tpending_operations_remove_notificationTYstreams_internalsVio = T0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:67
  T1 = &KPfalseVKi;
  goto I6;
}
I6:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:71
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:71
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:71
  Tasync_error_tableTYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:71
  T0 = &KPfalseVKi;
  goto I7;
}
I7:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:72
  T2_0 = KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLsimple_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:72
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:72
  Tasync_error_lockTYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:72
  T0 = &KPfalseVKi;
  goto I8;
}
I8:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:76
  T2_0 = KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLsimple_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:76
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:76
  Twriter_thread_lockTYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:76
  T0 = &KPfalseVKi;
  goto I9;
}
I9:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:79
  T1 = KmakeVKdMM35I(&KLlistGVKd, &KPempty_vectorVKi, (D) 65, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:79
  Tbuffer_poolTYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:79
  T0 = &KPfalseVKi;
  goto I10;
}
I10:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:80
  T2_0 = KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLsimple_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:80
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:80
  Tbuffer_pool_lockTYstreams_internalsVio = T1;
  // /opt/opendylan-2013.1/sources/io/streams/async-writes.dylan:80
  T0 = &KPfalseVKi;
  goto I11;
}
I11:

  return;
}


/* eof */
