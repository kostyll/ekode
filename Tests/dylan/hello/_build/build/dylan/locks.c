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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(7);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

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
} _KLintegerGVKd;

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
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(30);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(37);

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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

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
  D handle1_;
  D synchronization_name_;
  D associated_lock_;
} _KLnotificationGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLsynchronizationGYthreadsVdylan;

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D handle1_;
} _KLportable_containerGYthreads_primitivesVdylan;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

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
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D lock_;
} _KLnot_owned_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D lock_;
} _KLcount_exceeded_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_;
} _KLunexpected_synchronization_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D lock_;
} _KLalready_owned_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lock_iGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLexclusive_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
} _KLlockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLsimple_lock_iGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
  D internal_monitor_;
  D rw_lock_state_;
} _KLread_write_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
} _KLrecursive_lockGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
  D initial_count_;
  D maximum_count_;
} _KLsemaphoreGYthreadsVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D synchronization_name_;
  D initial_count_;
  D maximum_count_;
} _KLsemaphore_iGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D synchronization_name_;
  D internal_monitor_;
  D rw_lock_state_;
} _KLread_write_lock_iGYthreads_internalVdylan;


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
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_0;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJread_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJwrite_;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KmemberQVKdMM3I (D, D, D, D);
extern _KLsymbolGVKd KJlock_;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsealed_generic_functionGVKe Kassociated_lockYthreadsVdylan;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe Kwait_forYthreadsVdylan;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsymbolGVKd KJtimeout_;
D Kcurrent_threadYthreadsVdylanI ();
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLincremental_generic_functionGVKe KreleaseYthreadsVdylan;
extern _KLsymbolGVKd KJsynchronization_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D, D);
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJmode_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLkeyword_methodGVKe Kdefault_class_constructorVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLthreadGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLthreadGYthreadsVdylanW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLnotificationGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLnotificationGYthreadsVdylanW;
extern _KLclassGVKd KLsynchronizationGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLsynchronizationGYthreadsVdylanW;
extern _KLinstance_slot_descriptorGVKe Ksynchronization_nameYthreadsVdylanHLsynchronizationG;
D Kclass_instanceQ_rcpl_single_smallVKiI (D, D);
extern _KLmoduleGVKe Kthreads_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsealed_generic_functionGVKe KmillisecsYthreads_internalVdylan;
extern _KLinstance_slot_descriptorGVKe Khandle1Ythreads_primitivesVdylanHLportable_containerG;
extern _KLclassGVKd KLportable_containerGYthreads_primitivesVdylan;
extern _KLmm_wrapperGVKi_1 KLportable_containerGYthreads_primitivesVdylanW;
extern _KLsymbolGVKd KJmaximum_count_;
extern _KLsymbolGVKd KJinitial_count_;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_0;
D Krelease_allYthreadsVdylanI (D notif_, D Urest_);
extern _KLincremental_generic_functionGVKe K_VKd;
D Kcheck_synchronization_finalizationYthreads_internalVdylanI (D, D);
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
D Kclass_instanceQ_initialVKiI (D, D);
extern _KLmoduleGVKe Kthreads_internal_moduleYdylan_userVdylan;
extern _KLunionGVKe KLoptional_nameGYthreads_primitivesVdylan;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_73;
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_45;
extern _KLincremental_generic_functionGVKe Ksynchronization_nameYthreadsVdylan;
D Kdrain_finalization_queueYfinalizationVdylanI ();
D Kcheck_synchronization_creationYthreads_internalVdylanI (D, D);
D Kfinalize_when_unreachableYfinalizationVdylanI (D);
extern _KLclassGVKd KLnot_owned_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLnot_owned_errorGYthreadsVdylanW;
D KerrorVKdMM0I (D, D);
extern _KLclassGVKd KLcount_exceeded_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLcount_exceeded_errorGYthreadsVdylanW;
extern _KLclassGVKd KLunexpected_synchronization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLunexpected_synchronization_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLalready_owned_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLalready_owned_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;

/* Defined object declarations */

D Kmake_simple_lockYthreads_primitivesVdylanI ();
extern _KLclassGVKd KLsimple_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsimple_lockGYthreadsVdylanW;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D, D);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D, D);
D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW;
extern _KLkeyword_methodGVKe KinitializeVKdMM24;
D KinitializeVKdMM24I (D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM25;
D KinitializeVKdMM25I (D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM26;
D KinitializeVKdMM26I (D, D);
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_46;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_47;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_48;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_49;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_83;
extern _KLkeyword_methodGVKe KmakeVKdMM52;
D KmakeVKdMM52I (D class_, D keys_);
extern _KLkeyword_methodGVKe KmakeVKdMM53;
D KmakeVKdMM53I (D class_, D keys_);
extern _KLkeyword_methodGVKe KmakeVKdMM54;
D KmakeVKdMM54I (D class_, D keys_);
extern _KLkeyword_methodGVKe KmakeVKdMM55;
D KmakeVKdMM55I (D class_, D keys_);
extern _KLkeyword_methodGVKe KmakeVKdMM56;
D KmakeVKdMM56I (D class_, D keys_);
extern _KLkeyword_methodGVKe KmakeVKdMM57;
D KmakeVKdMM57I (D class_, D keys_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_74;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_75;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_76;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_77;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_78;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_79;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_80;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_81;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_82;
extern _KLclassGVKd KLexclusive_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLexclusive_lockGYthreadsVdylanW;
extern _KLclassGVKd KLlockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW;
D KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
extern _KLclassGVKd KLsimple_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLsimple_lock_iGYthreads_internalVdylanW;
extern _KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_0;
extern _KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_1;
extern _KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_2;
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM4;
D KfinalizeYfinalizationVdylanMM4I (D);
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM3;
D KfinalizeYfinalizationVdylanMM3I (D);
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM2;
D KfinalizeYfinalizationVdylanMM2I (D);
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM0;
D KreleaseYthreadsVdylanMM0I (D lock_, D Urest_);
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM1;
D KreleaseYthreadsVdylanMM1I (D lock_, D Urest_);
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM2;
D KreleaseYthreadsVdylanMM2I (D lock_, D Urest_);
extern _KLkeyword_methodGVKe KreleaseYthreadsVdylanMM3;
D KreleaseYthreadsVdylanMM3I (D, D);
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_1;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_2;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_3;
extern _KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_4;
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM0;
D Kwait_forYthreadsVdylanMM0I (D lock_, D Urest_, D timeout_);
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM1;
D Kwait_forYthreadsVdylanMM1I (D lock_, D Urest_, D timeout_);
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM2;
D Kwait_forYthreadsVdylanMM2I (D lock_, D Urest_, D timeout_);
extern _KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM3;
D Kwait_forYthreadsVdylanMM3I (D, D, D, D);
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_1;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_2;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_3;
extern _KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_4;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF93;
static D Kanonymous_of_wait_forF93I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF92;
static D Kanonymous_of_wait_forF92I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF89;
static D Kanonymous_of_wait_forF89I ();
extern _KLsealed_generic_functionGVKe Krw_lock_state_setterYthreads_internalVdylan;
static _KLbyte_stringGVKd_37 K87;
static _KLbyte_stringGVKd_20 K88;
static _KLbyte_stringGVKd_30 K90;
static _KLsignatureGVKe K91;
static _KLbyte_stringGVKd_33 K94;
static _KLkeyword_signatureGVKe K95;
static _KLsimple_object_vectorGVKd_4 K96;
static _KLsimple_object_vectorGVKd_1 K97;
static _KLsimple_object_vectorGVKd_2 K98;
extern _KLclassGVKd KLread_write_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLread_write_lockGYthreadsVdylanW;
static _KLimplementation_classGVKe K101;
static _KLsimple_object_vectorGVKd_3 K102;
static _KLsimple_object_vectorGVKd_1 K103;
static _KLsimple_object_vectorGVKd_6 K104;
static _KLsimple_object_vectorGVKd_2 K105;
extern _KLinstance_slot_descriptorGVKe Kinternal_monitorYthreads_internalVdylanHLread_write_lockG;
extern _KLinstance_slot_descriptorGVKe Krw_lock_stateYthreads_internalVdylanHLread_write_lockG;
extern _KLsealed_generic_functionGVKe Krw_lock_stateYthreads_internalVdylan;
extern _KLunionGVKe KLlock_stateGYthreads_internalVdylan;
extern _KLgetter_methodGVKi Krw_lock_stateYthreads_internalVdylanMM0;
static _KLpairGVKd K111;
static _KLbyte_stringGVKd_13 K112;
static _KLsimple_closure_methodGVKi_0 K119;
static D K119I ();
extern _KLsealed_generic_functionGVKe Kinternal_monitorYthreads_internalVdylan;
extern _KLgetter_methodGVKi Kinternal_monitorYthreads_internalVdylanMM0;
static _KLpairGVKd K117;
static _KLbyte_stringGVKd_16 K118;
static _KLsignatureGVKe K120;
static _KLbyte_stringGVKd_17 K121;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF128;
static D Kanonymous_of_wait_forF128I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF126;
static D Kanonymous_of_wait_forF126I ();
static _KLbyte_stringGVKd_45 K127;
static _KLkeyword_signatureGVKe K129;
static _KLsimple_object_vectorGVKd_2 K130;
static _KLsimple_object_vectorGVKd_1 K131;
static _KLsimple_object_vectorGVKd_1 K132;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF138;
static D Kanonymous_of_wait_forF138I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF137;
static D Kanonymous_of_wait_forF137I ();
static _KLkeyword_signatureGVKe K139;
static _KLsimple_object_vectorGVKd_1 K140;
extern _KLclassGVKd KLrecursive_lockGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLrecursive_lockGYthreadsVdylanW;
static _KLimplementation_classGVKe K143;
static _KLsimple_object_vectorGVKd_2 K144;
static _KLsimple_object_vectorGVKd_2 K145;
static _KLsimple_object_vectorGVKd_6 K146;
static _KLsimple_object_vectorGVKd_2 K147;
static _KLbyte_stringGVKd_16 K148;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF154;
static D Kanonymous_of_wait_forF154I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF153;
static D Kanonymous_of_wait_forF153I ();
static _KLkeyword_signatureGVKe K155;
static _KLsimple_object_vectorGVKd_1 K156;
extern _KLclassGVKd KLsemaphoreGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsemaphoreGYthreadsVdylanW;
static _KLimplementation_classGVKe K159;
static _KLsimple_object_vectorGVKd_4 K160;
static _KLsimple_object_vectorGVKd_2 K161;
static _KLsimple_object_vectorGVKd_6 K162;
static _KLsimple_object_vectorGVKd_2 K163;
static _KLsimple_object_vectorGVKd_4 K164;
extern _KLinstance_slot_descriptorGVKe Kinitial_countYthreads_internalVdylanHLsemaphoreG;
extern _KLinstance_slot_descriptorGVKe Kmaximum_countYthreads_internalVdylanHLsemaphoreG;
extern _KLsealed_generic_functionGVKe Kmaximum_countYthreads_internalVdylan;
extern _KLgetter_methodGVKi Kmaximum_countYthreads_internalVdylanMM0;
static _KLpairGVKd K169;
static _KLbyte_stringGVKd_13 K170;
extern _KLsealed_generic_functionGVKe Kinitial_countYthreads_internalVdylan;
extern _KLgetter_methodGVKi Kinitial_countYthreads_internalVdylanMM0;
static _KLpairGVKd K173;
static _KLbyte_stringGVKd_13 K174;
static _KLbyte_stringGVKd_11 K175;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF178;
static D Kanonymous_of_releaseF178I ();
static _KLbyte_stringGVKd_31 K179;
static _KLkeyword_signatureGVKe K180;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF183;
static D Kanonymous_of_releaseF183I ();
static _KLkeyword_signatureGVKe K184;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF187;
static D Kanonymous_of_releaseF187I ();
static _KLkeyword_signatureGVKe K188;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF191;
static D Kanonymous_of_releaseF191I ();
static _KLkeyword_signatureGVKe K192;
static _KLsignatureGVKe K193;
static _KLsignatureGVKe K194;
static _KLsignatureGVKe K195;
static _KLimplementation_classGVKe K196;
extern _KLkeyword_methodGVKe KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0;
static _KLsimple_object_vectorGVKd_7 K198;
static _KLkeyword_signatureAvaluesGVKi K199;
static _KLsimple_object_vectorGVKd_2 K200;
static _KLsimple_object_vectorGVKd_1 K201;
static _KLsimple_object_vectorGVKd_1 K202;
static _KLbyte_stringGVKd_15 K203;
static _KLpairGVKd K204;
static _KLimplementation_classGVKe K205;
static _KLsimple_object_vectorGVKd_1 K206;
static _KLsimple_object_vectorGVKd_1 K207;
static _KLsimple_object_vectorGVKd_6 K208;
static _KLbyte_stringGVKd_6 K209;
static _KLimplementation_classGVKe K210;
static _KLsimple_object_vectorGVKd_1 K211;
static _KLsimple_object_vectorGVKd_6 K212;
static _KLbyte_stringGVKd_16 K213;
static _KLsingletonGVKd K214;
extern _KLclassGVKd KLsemaphore_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_1 KLsemaphore_iGYthreads_internalVdylanW;
static _KLimplementation_classGVKe K217;
extern _KLkeyword_methodGVKe KLsemaphore_iGZ32ZconstructorYthreads_internalVdylanMM0;
D KLsemaphore_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_6 K220;
static _KLkeyword_signatureAvaluesGVKi K221;
static _KLsimple_object_vectorGVKd_6 K222;
static _KLsimple_object_vectorGVKd_3 K223;
static _KLsimple_object_vectorGVKd_1 K224;
static _KLbyte_stringGVKd_13 K225;
static _KLsingletonGVKd K226;
static _KLsingletonGVKd K227;
static _KLsingletonGVKd K228;
extern _KLclassGVKd KLread_write_lock_iGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLread_write_lock_iGYthreads_internalVdylanW;
static _KLimplementation_classGVKe K231;
extern _KLkeyword_methodGVKe KLread_write_lock_iGZ32ZconstructorYthreads_internalVdylanMM0;
D KLread_write_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D);
static _KLsimple_object_vectorGVKd_6 K234;
static D K236I ();
static _KLkeyword_signatureAvaluesGVKi K237;
static _KLsimple_object_vectorGVKd_1 K238;
static _KLbyte_stringGVKd_19 K239;
static _KLkeyword_signatureAvaluesGVKi K240;
static _KLsimple_object_vectorGVKd_1 K241;
static _KLsingletonGVKd K242;
static _KLkeyword_signatureAvaluesGVKi K243;
static _KLsimple_object_vectorGVKd_1 K244;
static _KLsingletonGVKd K245;
extern _KLkeyword_methodGVKe KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0;
static _KLkeyword_signatureAvaluesGVKi K247;
static _KLsimple_object_vectorGVKd_1 K248;
static _KLkeyword_signatureAvaluesGVKi K249;
static _KLsimple_object_vectorGVKd_1 K250;
static _KLsingletonGVKd K251;
static _KLkeyword_signatureAvaluesGVKi K252;
static _KLsimple_object_vectorGVKd_1 K253;
static _KLsingletonGVKd K254;
static _KLkeyword_signatureAvaluesGVKi K255;
static _KLsimple_object_vectorGVKd_1 K256;
static _KLsingletonGVKd K257;
static _KLkeyword_signatureAvaluesGVKi K258;
static _KLsimple_object_vectorGVKd_1 K259;
static _KLsingletonGVKd K260;
static _KLbyte_stringGVKd_15 K261;
D Kinitialize_simple_lockYthreads_internalVdylanI (D, D);
static _KLkeyword_signatureGVKe K263;
static _KLkeyword_signatureGVKe K264;
static _KLkeyword_signatureGVKe K265;
static _KLimplementation_classGVKe K266;
static _KLsimple_object_vectorGVKd_7 K267;
static _KLbyte_stringGVKd_18 K268;
static _KLimplementation_classGVKe K269;
static _KLsimple_object_vectorGVKd_6 K270;
static _KLbyte_stringGVKd_13 K271;
extern _KLsimple_methodGVKe Kmake_simple_lockYthreads_primitivesVdylan;
static _KLsignatureAvaluesGVKi K273;
extern _KLincremental_generic_functionGVKe KownedQYthreadsVdylan;
extern _KLsimple_methodGVKe KownedQYthreadsVdylanMM0;
D KownedQYthreadsVdylanMM0I (D);
extern _KLsimple_methodGVKe KownedQYthreadsVdylanMM1;
D KownedQYthreadsVdylanMM1I (D);
extern _KLsimple_methodGVKe KownedQYthreadsVdylanMM2;
D KownedQYthreadsVdylanMM2I (D);
extern _KLmethod_domainGVKe KownedQYthreadsVdylanRD_dylanRD_0;
extern _KLmethod_domainGVKe KownedQYthreadsVdylanRD_dylanRD_1;
extern _KLmethod_domainGVKe KownedQYthreadsVdylanRD_dylanRD_2;
static _KLpairGVKd K284;
static _KLpairGVKd K285;
static _KLpairGVKd K286;
static _KLsignatureAvaluesGVKi K287;
static _KLbyte_stringGVKd_6 K288;
static _KLsignatureAvaluesGVKi K289;
static _KLsignatureAvaluesGVKi K290;
static _KLsignatureAvaluesGVKi K291;
extern _KLsimple_methodGVKe Kowned_for_readingQYthreadsVdylanMM0;
D Kowned_for_readingQYthreadsVdylanMM0I (D);
extern _KLsetter_methodGVKi Krw_lock_state_setterYthreads_internalVdylanMM0;
static _KLpairGVKd K295;
static _KLpairGVKd K296;
static _KLpairGVKd K297;
static _KLpairGVKd K298;
static _KLpairGVKd K299;
static _KLpairGVKd K300;
static _KLpairGVKd K301;
static _KLpairGVKd K302;
static _KLpairGVKd K303;
static _KLpairGVKd K304;

/* Indirection variables */


/* Variables */

D owned_for_readingQYthreadsVdylan = &Kowned_for_readingQYthreadsVdylanMM0;
D LlockGYthreadsVdylan = &KLlockGYthreadsVdylan;
D Dsemaphore_maximum_count_limitYthreadsVdylan = (D) 4000001;
D LsemaphoreGYthreadsVdylan = &KLsemaphoreGYthreadsVdylan;
D Lsemaphore_iGYthreads_internalVdylan = &KLsemaphore_iGYthreads_internalVdylan;
D Lexclusive_lockGYthreadsVdylan = &KLexclusive_lockGYthreadsVdylan;
D ownedQYthreadsVdylan = &KownedQYthreadsVdylan;
D Lrecursive_lockGYthreadsVdylan = &KLrecursive_lockGYthreadsVdylan;
D Lrecursive_lock_iGYthreads_internalVdylan = &KLrecursive_lock_iGYthreads_internalVdylan;
D Lsimple_lockGYthreadsVdylan = &KLsimple_lockGYthreadsVdylan;
D Lsimple_lock_iGYthreads_internalVdylan = &KLsimple_lock_iGYthreads_internalVdylan;
D make_simple_lockYthreads_primitivesVdylan = &Kmake_simple_lockYthreads_primitivesVdylan;
D Lread_write_lockGYthreadsVdylan = &KLread_write_lockGYthreadsVdylan;
D Lread_write_lock_iGYthreads_internalVdylan = &KLread_write_lock_iGYthreads_internalVdylan;

/* Objects */

_KLclassGVKd KLsimple_lockGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K271,
  &K269,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLsimple_lockGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K269,
  (D) 1,
  10,
  33554439,
  (D) 5,
  2
};

_KLclassGVKd KLrecursive_lock_iGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K268,
  &K266,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLrecursive_lock_iGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K266,
  (D) 1,
  10,
  33554439,
  (D) 5,
  2
};

_KLkeyword_methodGVKe KinitializeVKdMM24 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K265,
  &key_mep_2,
  &KinitializeVKdMM24I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KinitializeVKdMM25 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K264,
  &key_mep_2,
  &KinitializeVKdMM25I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KinitializeVKdMM26 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K263,
  &key_mep_2,
  &KinitializeVKdMM26I,
  &KPempty_vectorVKi
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_46 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_45,
  (D) 5,
  &KLread_write_lock_iGYthreads_internalVdylan
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_47 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_46,
  (D) 5,
  &KLsimple_lock_iGYthreads_internalVdylan
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_48 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_47,
  (D) 5,
  &KLrecursive_lock_iGYthreads_internalVdylan
};

_KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_49 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_48,
  (D) 5,
  &KLsemaphore_iGYthreads_internalVdylan
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_83 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_82,
  &KmakeVKdMM52
};

_KLkeyword_methodGVKe KmakeVKdMM52 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K258,
  &key_mep_2,
  &KmakeVKdMM52I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM53 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K255,
  &key_mep_2,
  &KmakeVKdMM53I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM54 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K252,
  &key_mep_2,
  &KmakeVKdMM54I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM55 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K249,
  &key_mep_2,
  &KmakeVKdMM55I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM56 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K243,
  &key_mep_2,
  &KmakeVKdMM56I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KmakeVKdMM57 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K240,
  &key_mep_2,
  &KmakeVKdMM57I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_74 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_73,
  &KmakeVKdMM57
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_75 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_74,
  (D) 5,
  &K228
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_76 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_75,
  &KmakeVKdMM56
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_77 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_76,
  (D) 5,
  &K227
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_78 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_77,
  &KmakeVKdMM55
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_79 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_78,
  (D) 5,
  &K226
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_80 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_79,
  &KmakeVKdMM54
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_81 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_80,
  &KmakeVKdMM53
};

_KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_82 = {
  &KLstandalone_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_81,
  (D) 5,
  &K214
};

_KLclassGVKd KLexclusive_lockGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K213,
  &K210,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLexclusive_lockGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K210,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLlockGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K209,
  &K205,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLlockGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K205,
  (D) 1,
  5,
  33554439,
  (D) 1
};

_KLclassGVKd KLsimple_lock_iGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K203,
  &K196,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLsimple_lock_iGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K196,
  (D) 1,
  10,
  33554439,
  (D) 5,
  2
};

_KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KfinalizeYfinalizationVdylanMM4
};

_KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfinalizeYfinalizationVdylanRD_dylanRD_0,
  &KfinalizeYfinalizationVdylanMM3
};

_KLmethod_domainGVKe KfinalizeYfinalizationVdylanRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KfinalizeYfinalizationVdylanRD_dylanRD_1,
  &KfinalizeYfinalizationVdylanMM2
};

_KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K195,
  &KfinalizeYfinalizationVdylanMM4I
};

_KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K194,
  &KfinalizeYfinalizationVdylanMM3I
};

_KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K193,
  &KfinalizeYfinalizationVdylanMM2I
};

_KLkeyword_methodGVKe KreleaseYthreadsVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K192,
  &key_mep_2,
  &KreleaseYthreadsVdylanMM0I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KreleaseYthreadsVdylanMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K188,
  &key_mep_2,
  &KreleaseYthreadsVdylanMM1I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KreleaseYthreadsVdylanMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K184,
  &key_mep_2,
  &KreleaseYthreadsVdylanMM2I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KreleaseYthreadsVdylanMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K180,
  &key_mep_2,
  &KreleaseYthreadsVdylanMM3I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreleaseYthreadsVdylanRD_dylanRD_0,
  &KreleaseYthreadsVdylanMM3
};

_KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreleaseYthreadsVdylanRD_dylanRD_1,
  &KreleaseYthreadsVdylanMM2
};

_KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreleaseYthreadsVdylanRD_dylanRD_2,
  &KreleaseYthreadsVdylanMM1
};

_KLmethod_domainGVKe KreleaseYthreadsVdylanRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KreleaseYthreadsVdylanRD_dylanRD_3,
  &KreleaseYthreadsVdylanMM0
};

_KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K155,
  &key_mep_3,
  &Kwait_forYthreadsVdylanMM0I,
  &K130
};

_KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K139,
  &key_mep_3,
  &Kwait_forYthreadsVdylanMM1I,
  &K130
};

_KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K129,
  &key_mep_3,
  &Kwait_forYthreadsVdylanMM2I,
  &K130
};

_KLkeyword_methodGVKe Kwait_forYthreadsVdylanMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K95,
  &key_mep_4,
  &Kwait_forYthreadsVdylanMM3I,
  &K96
};

_KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kwait_forYthreadsVdylanRD_dylanRD_0,
  &Kwait_forYthreadsVdylanMM3
};

_KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kwait_forYthreadsVdylanRD_dylanRD_1,
  &Kwait_forYthreadsVdylanMM2
};

_KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kwait_forYthreadsVdylanRD_dylanRD_2,
  &Kwait_forYthreadsVdylanMM1
};

_KLmethod_domainGVKe Kwait_forYthreadsVdylanRD_dylanRD_4 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kwait_forYthreadsVdylanRD_dylanRD_3,
  &Kwait_forYthreadsVdylanMM0
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF93 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF93I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF92 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF92I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF89 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF89I,
  (D) 1
};

_KLsealed_generic_functionGVKe Krw_lock_state_setterYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K88,
  &K295,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLbyte_stringGVKd_37 K87 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 149,
  "Unknown mode for waiting for lock: %="
};

static _KLbyte_stringGVKd_20 K88 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "rw-lock-state-setter"
};

static _KLbyte_stringGVKd_30 K90 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 121,
  "Acquired lock %= in thread %=\n"
};

static _KLsignatureGVKe K91 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_33 K94 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLkeyword_signatureGVKe K95 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K97,
  &K98,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtimeout_,
  &KPfalseVKi,
  &KJmode_,
  &KJread_
};

static _KLsimple_object_vectorGVKd_1 K97 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLread_write_lockGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_2 K98 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtimeout_,
  &KJmode_
};

_KLclassGVKd KLread_write_lockGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K121,
  &K101,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLread_write_lockGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K101,
  (D) 1,
  13,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K101 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845005,
  &KLread_write_lockGYthreadsVdylan,
  &KLread_write_lockGYthreadsVdylanW,
  &KPfalseVKi,
  &K102,
  (D) 7273,
  &Kdefault_class_constructorVKi,
  &K103,
  &K104,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K304,
  &KPempty_vectorVKi,
  &K105,
  &K102,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_3 K102 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG,
  &Kinternal_monitorYthreads_internalVdylanHLread_write_lockG,
  &Krw_lock_stateYthreads_internalVdylanHLread_write_lockG
};

static _KLsimple_object_vectorGVKd_1 K103 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLexclusive_lockGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K104 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylan,
  &KLread_write_lockGYthreadsVdylan,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K105 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kinternal_monitorYthreads_internalVdylanHLread_write_lockG,
  &Krw_lock_stateYthreads_internalVdylanHLread_write_lockG
};

_KLinstance_slot_descriptorGVKe Kinternal_monitorYthreads_internalVdylanHLread_write_lockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 149,
  &K119,
  &KLread_write_lockGYthreadsVdylan,
  &KPfalseVKi,
  &Kinternal_monitorYthreads_internalVdylan,
  &KPfalseVKi,
  &KLobjectGVKd
};

_KLinstance_slot_descriptorGVKe Krw_lock_stateYthreads_internalVdylanHLread_write_lockG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLread_write_lockGYthreadsVdylan,
  &KPfalseVKi,
  &Krw_lock_stateYthreads_internalVdylan,
  &Krw_lock_state_setterYthreads_internalVdylan,
  &KLlock_stateGYthreads_internalVdylan
};

_KLsealed_generic_functionGVKe Krw_lock_stateYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K112,
  &K111,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLunionGVKe KLlock_stateGYthreads_internalVdylan = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &KLthreadGYthreadsVdylan,
  &KLintegerGVKd
};

_KLgetter_methodGVKi Krw_lock_stateYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Krw_lock_stateYthreads_internalVdylanHLread_write_lockG
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &Krw_lock_stateYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K112 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "rw-lock-state"
};

static _KLsimple_closure_methodGVKi_0 K119 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K120,
  &K119I,
  (D) 1
};

_KLsealed_generic_functionGVKe Kinternal_monitorYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K118,
  &K117,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kinternal_monitorYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kinternal_monitorYthreads_internalVdylanHLread_write_lockG
};

static _KLpairGVKd K117 = {
  &KLpairGVKdW /* wrapper */,
  &Kinternal_monitorYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K118 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "internal-monitor"
};

static _KLsignatureGVKe K120 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_17 K121 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "<read-write-lock>"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF128 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF128I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF126 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF126I,
  (D) 1
};

static _KLbyte_stringGVKd_45 K127 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLkeyword_signatureGVKe K129 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K131,
  &K132,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K130 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtimeout_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K131 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_lockGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_1 K132 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJtimeout_
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF138 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF138I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF137 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF137I,
  (D) 1
};

static _KLkeyword_signatureGVKe K139 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K140,
  &K132,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K140 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrecursive_lockGYthreadsVdylan
};

_KLclassGVKd KLrecursive_lockGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K148,
  &K143,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLrecursive_lockGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K143,
  (D) 1,
  10,
  33554439,
  (D) 5,
  2
};

static _KLimplementation_classGVKe K143 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845001,
  &KLrecursive_lockGYthreadsVdylan,
  &KLrecursive_lockGYthreadsVdylanW,
  &KPfalseVKi,
  &K144,
  (D) 7241,
  &Kdefault_class_constructorVKi,
  &K145,
  &K146,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K302,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_2 K144 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG
};

static _KLsimple_object_vectorGVKd_2 K145 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLexclusive_lockGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K146 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylan,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLrecursive_lockGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_2 K147 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG
};

static _KLbyte_stringGVKd_16 K148 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<recursive-lock>"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF154 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF154I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_wait_forF153 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_wait_forF153I,
  (D) 1
};

static _KLkeyword_signatureGVKe K155 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206213,
  &K156,
  &K132,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K156 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsemaphoreGYthreadsVdylan
};

_KLclassGVKd KLsemaphoreGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K175,
  &K159,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLsemaphoreGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K159,
  (D) 1,
  18,
  33554439,
  (D) 5,
  14
};

static _KLimplementation_classGVKe K159 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845009,
  &KLsemaphoreGYthreadsVdylan,
  &KLsemaphoreGYthreadsVdylanW,
  &KPfalseVKi,
  &K160,
  (D) 7217,
  &Kdefault_class_constructorVKi,
  &K161,
  &K162,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K298,
  &KPempty_vectorVKi,
  &K163,
  &K164,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_4 K160 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG,
  &Kinitial_countYthreads_internalVdylanHLsemaphoreG,
  &Kmaximum_countYthreads_internalVdylanHLsemaphoreG
};

static _KLsimple_object_vectorGVKd_2 K161 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLlockGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K162 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLsemaphoreGYthreadsVdylan,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K163 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &Kinitial_countYthreads_internalVdylanHLsemaphoreG,
  &Kmaximum_countYthreads_internalVdylanHLsemaphoreG
};

static _KLsimple_object_vectorGVKd_4 K164 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG,
  &Kinitial_countYthreads_internalVdylanHLsemaphoreG,
  &Kmaximum_countYthreads_internalVdylanHLsemaphoreG
};

_KLinstance_slot_descriptorGVKe Kinitial_countYthreads_internalVdylanHLsemaphoreG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLsemaphoreGYthreadsVdylan,
  &KJinitial_count_,
  &Kinitial_countYthreads_internalVdylan,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kmaximum_countYthreads_internalVdylanHLsemaphoreG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 4000001,
  &KLsemaphoreGYthreadsVdylan,
  &KJmaximum_count_,
  &Kmaximum_countYthreads_internalVdylan,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kmaximum_countYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K170,
  &K169,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kmaximum_countYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kmaximum_countYthreads_internalVdylanHLsemaphoreG
};

static _KLpairGVKd K169 = {
  &KLpairGVKdW /* wrapper */,
  &Kmaximum_countYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K170 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "maximum-count"
};

_KLsealed_generic_functionGVKe Kinitial_countYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K174,
  &K173,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kinitial_countYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kinitial_countYthreads_internalVdylanHLsemaphoreG
};

static _KLpairGVKd K173 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitial_countYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K174 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "initial-count"
};

static _KLbyte_stringGVKd_11 K175 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "<semaphore>"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF178 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_releaseF178I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K179 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLkeyword_signatureGVKe K180 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K97,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF183 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_releaseF183I,
  (D) 1
};

static _KLkeyword_signatureGVKe K184 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K131,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF187 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_releaseF187I,
  (D) 1
};

static _KLkeyword_signatureGVKe K188 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K140,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_releaseF191 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K91,
  &Kanonymous_of_releaseF191I,
  (D) 1
};

static _KLkeyword_signatureGVKe K192 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &K156,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsignatureGVKe K193 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K156
};

static _KLsignatureGVKe K194 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K140
};

static _KLsignatureGVKe K195 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K131
};

static _KLimplementation_classGVKe K196 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLsimple_lock_iGYthreads_internalVdylan,
  &KLsimple_lock_iGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K144,
  (D) 7265,
  &KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0,
  &K131,
  &K198,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K199,
  &key_mep_2,
  &KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K200
};

static _KLsimple_object_vectorGVKd_7 K198 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylan,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLsimple_lockGYthreadsVdylan,
  &KLsimple_lock_iGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K199 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K201,
  &KDsignature_LobjectG_typesVKi,
  &K202
};

static _KLsimple_object_vectorGVKd_2 K200 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJname_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K201 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJname_
};

static _KLsimple_object_vectorGVKd_1 K202 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsimple_lock_iGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_15 K203 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "<simple-lock-i>"
};

static _KLpairGVKd K204 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

static _KLimplementation_classGVKe K205 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989061,
  &KLlockGYthreadsVdylan,
  &KLlockGYthreadsVdylanW,
  &KPfalseVKi,
  &K206,
  (D) 7209,
  &Kdefault_class_constructorVKi,
  &K207,
  &K208,
  (D) 9,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K296,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K206,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K206 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Ksynchronization_nameYthreadsVdylanHLsynchronizationG
};

static _KLsimple_object_vectorGVKd_1 K207 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsynchronizationGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K208 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_6 K209 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "<lock>"
};

static _KLimplementation_classGVKe K210 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 274989061,
  &KLexclusive_lockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylanW,
  &KPfalseVKi,
  &K206,
  (D) 7233,
  &Kdefault_class_constructorVKi,
  &K211,
  &K212,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K299,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K206,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K211 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLlockGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K212 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylan,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_16 K213 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "<exclusive-lock>"
};

static _KLsingletonGVKd K214 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsemaphore_iGYthreads_internalVdylan
};

_KLclassGVKd KLsemaphore_iGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K225,
  &K217,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLsemaphore_iGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K217,
  (D) 1,
  18,
  33554439,
  (D) 5,
  14
};

static _KLimplementation_classGVKe K217 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102097,
  &KLsemaphore_iGYthreads_internalVdylan,
  &KLsemaphore_iGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K160,
  (D) 7225,
  &KLsemaphore_iGZ32ZconstructorYthreads_internalVdylanMM0,
  &K156,
  &K220,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K164,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLsemaphore_iGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K221,
  &key_mep_2,
  &KLsemaphore_iGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K222
};

static _KLsimple_object_vectorGVKd_6 K220 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLsemaphoreGYthreadsVdylan,
  &KLsemaphore_iGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K221 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K223,
  &KDsignature_LobjectG_typesVKi,
  &K224
};

static _KLsimple_object_vectorGVKd_6 K222 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJname_,
  &KPfalseVKi,
  &KJinitial_count_,
  (D) 1,
  &KJmaximum_count_,
  (D) 4000001
};

static _KLsimple_object_vectorGVKd_3 K223 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJname_,
  &KJinitial_count_,
  &KJmaximum_count_
};

static _KLsimple_object_vectorGVKd_1 K224 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsemaphore_iGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_13 K225 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "<semaphore-i>"
};

static _KLsingletonGVKd K226 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLrecursive_lock_iGYthreads_internalVdylan
};

static _KLsingletonGVKd K227 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_lock_iGYthreads_internalVdylan
};

static _KLsingletonGVKd K228 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLread_write_lock_iGYthreads_internalVdylan
};

_KLclassGVKd KLread_write_lock_iGYthreads_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K239,
  &K231,
  (D) 1,
  &Kthreads_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLread_write_lock_iGYthreads_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K231,
  (D) 1,
  13,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K231 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102093,
  &KLread_write_lock_iGYthreads_internalVdylan,
  &KLread_write_lock_iGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K102,
  (D) 7281,
  &KLread_write_lock_iGZ32ZconstructorYthreads_internalVdylanMM0,
  &K97,
  &K234,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K102,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLread_write_lock_iGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K237,
  &key_mep_2,
  &KLread_write_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K200
};

static _KLsimple_object_vectorGVKd_6 K234 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylan,
  &KLread_write_lockGYthreadsVdylan,
  &KLread_write_lock_iGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K237 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K201,
  &KDsignature_LobjectG_typesVKi,
  &K238
};

static _KLsimple_object_vectorGVKd_1 K238 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLread_write_lock_iGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_19 K239 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "<read-write-lock-i>"
};

static _KLkeyword_signatureAvaluesGVKi K240 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K241,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K238
};

static _KLsimple_object_vectorGVKd_1 K241 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K242
};

static _KLsingletonGVKd K242 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLread_write_lockGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K243 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K244,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K202
};

static _KLsimple_object_vectorGVKd_1 K244 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K245
};

static _KLsingletonGVKd K245 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsimple_lockGYthreadsVdylan
};

_KLkeyword_methodGVKe KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K247,
  &key_mep_2,
  &KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K200
};

static _KLkeyword_signatureAvaluesGVKi K247 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K201,
  &KDsignature_LobjectG_typesVKi,
  &K248
};

static _KLsimple_object_vectorGVKd_1 K248 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrecursive_lock_iGYthreads_internalVdylan
};

static _KLkeyword_signatureAvaluesGVKi K249 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K250,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K248
};

static _KLsimple_object_vectorGVKd_1 K250 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K251
};

static _KLsingletonGVKd K251 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLrecursive_lockGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K252 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K253,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K131
};

static _KLsimple_object_vectorGVKd_1 K253 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K254
};

static _KLsingletonGVKd K254 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLexclusive_lockGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K255 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K256,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K224
};

static _KLsimple_object_vectorGVKd_1 K256 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K257
};

static _KLsingletonGVKd K257 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLsemaphoreGYthreadsVdylan
};

static _KLkeyword_signatureAvaluesGVKi K258 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &K259,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K131
};

static _KLsimple_object_vectorGVKd_1 K259 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K260
};

static _KLsingletonGVKd K260 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLlockGYthreadsVdylan
};

static _KLbyte_stringGVKd_15 K261 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

static _KLkeyword_signatureGVKe K263 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K131,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureGVKe K264 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K140,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureGVKe K265 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K156,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLimplementation_classGVKe K266 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102089,
  &KLrecursive_lock_iGYthreads_internalVdylan,
  &KLrecursive_lock_iGYthreads_internalVdylanW,
  &KPfalseVKi,
  &K144,
  (D) 7249,
  &KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0,
  &K140,
  &K267,
  (D) 25,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_7 K267 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 29,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylan,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLrecursive_lockGYthreadsVdylan,
  &KLrecursive_lock_iGYthreads_internalVdylan
};

static _KLbyte_stringGVKd_18 K268 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "<recursive-lock-i>"
};

static _KLimplementation_classGVKe K269 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 325845001,
  &KLsimple_lockGYthreadsVdylan,
  &KLsimple_lockGYthreadsVdylanW,
  &KPfalseVKi,
  &K144,
  (D) 7257,
  &Kdefault_class_constructorVKi,
  &K145,
  &K270,
  (D) 21,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K303,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K147,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K270 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLsynchronizationGYthreadsVdylan,
  &KLlockGYthreadsVdylan,
  &KLexclusive_lockGYthreadsVdylan,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLsimple_lockGYthreadsVdylan
};

static _KLbyte_stringGVKd_13 K271 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "<simple-lock>"
};

_KLsimple_methodGVKe Kmake_simple_lockYthreads_primitivesVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K273,
  &Kmake_simple_lockYthreads_primitivesVdylanI
};

static _KLsignatureAvaluesGVKi K273 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &K131
};

_KLincremental_generic_functionGVKe KownedQYthreadsVdylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K287,
  &KPfalseVKi,
  &K288,
  &K284,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kthreads_moduleYdylan_userVdylan,
  &KownedQYthreadsVdylanRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe KownedQYthreadsVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K291,
  &KownedQYthreadsVdylanMM0I
};

_KLsimple_methodGVKe KownedQYthreadsVdylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K290,
  &KownedQYthreadsVdylanMM1I
};

_KLsimple_methodGVKe KownedQYthreadsVdylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K289,
  &KownedQYthreadsVdylanMM2I
};

_KLmethod_domainGVKe KownedQYthreadsVdylanRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KownedQYthreadsVdylanMM2
};

_KLmethod_domainGVKe KownedQYthreadsVdylanRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KownedQYthreadsVdylanRD_dylanRD_0,
  &KownedQYthreadsVdylanMM1
};

_KLmethod_domainGVKe KownedQYthreadsVdylanRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KownedQYthreadsVdylanRD_dylanRD_1,
  &KownedQYthreadsVdylanMM0
};

static _KLpairGVKd K284 = {
  &KLpairGVKdW /* wrapper */,
  &KownedQYthreadsVdylanMM0,
  &K285
};

static _KLpairGVKd K285 = {
  &KLpairGVKdW /* wrapper */,
  &KownedQYthreadsVdylanMM1,
  &K286
};

static _KLpairGVKd K286 = {
  &KLpairGVKdW /* wrapper */,
  &KownedQYthreadsVdylanMM2,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K287 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K103,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_6 K288 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "owned?"
};

static _KLsignatureAvaluesGVKi K289 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K97,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K290 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K131,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K291 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K140,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kowned_for_readingQYthreadsVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K289,
  &Kowned_for_readingQYthreadsVdylanMM0I
};

_KLsetter_methodGVKi Krw_lock_state_setterYthreads_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Krw_lock_stateYthreads_internalVdylanHLread_write_lockG
};

static _KLpairGVKd K295 = {
  &KLpairGVKdW /* wrapper */,
  &Krw_lock_state_setterYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLpairGVKd K296 = {
  &KLpairGVKdW /* wrapper */,
  &KLexclusive_lockGYthreadsVdylan,
  &K297
};

static _KLpairGVKd K297 = {
  &KLpairGVKdW /* wrapper */,
  &KLsemaphoreGYthreadsVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K298 = {
  &KLpairGVKdW /* wrapper */,
  &KLsemaphore_iGYthreads_internalVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K299 = {
  &KLpairGVKdW /* wrapper */,
  &KLread_write_lockGYthreadsVdylan,
  &K300
};

static _KLpairGVKd K300 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_lockGYthreadsVdylan,
  &K301
};

static _KLpairGVKd K301 = {
  &KLpairGVKdW /* wrapper */,
  &KLrecursive_lockGYthreadsVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K302 = {
  &KLpairGVKdW /* wrapper */,
  &KLrecursive_lock_iGYthreads_internalVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K303 = {
  &KLpairGVKdW /* wrapper */,
  &KLsimple_lock_iGYthreads_internalVdylan,
  &KPempty_listVKi
};

static _KLpairGVKd K304 = {
  &KLpairGVKdW /* wrapper */,
  &KLread_write_lock_iGYthreads_internalVdylan,
  &KPempty_listVKi
};

/* Code */

D Kmake_simple_lockYthreads_primitivesVdylanI () {
  D instance_;
  D T1_0;
  D T2;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  D T9_0;
  D T10;
  D T11_0;
  D T12;
  DWORD T13;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:246
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T2 = SLOT_VALUE(&KLsimple_lock_iGYthreads_internalVdylan, 2);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T4 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T6 = primitive_machine_word_logand(T5,262140);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T7 = primitive_machine_word_add_signal_overflow(5,T6);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T8 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T10 = SLOT_VALUE_INITD(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T11_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T9_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T12 = T9_0;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T13 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:248
  T3 = primitive_object_allocate_filled(T8,T12,T13,&KPfalseVKi,0,0,&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:247
  instance_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:249
  Kinitialize_simple_lockYthreads_internalVdylanI(instance_, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:250
  T1_0 = instance_;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:246
  MV_SET_COUNT(1);
  return(T1_0);
}

D Klock_wait_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_) {
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_2 T13 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T14_0;
  _KLsimple_object_vectorGVKd_2 T15 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T16_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
  T10 = primitive_idQ(prim_res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:38
    T3_0 = &KPtrueVKi;
    T9_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
    T11 = primitive_idQ(prim_res_,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:39
      T4_0 = &KPfalseVKi;
      T8_0 = T4_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
      T12 = primitive_idQ(prim_res_,(D) 9);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
      if (T12 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:40
        T13.vector_element_[0] = &KJlock_;
        T13.vector_element_[1] = lock_;
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:40
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T5 = CONGRUENT_CALL2(&KLalready_owned_errorGYthreads_internalVdylan, &T13);
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:40
        T14_0 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
        T7_0 = T14_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:41
        T15.vector_element_[0] = &KJsynchronization_;
        T15.vector_element_[1] = lock_;
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:41
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T6 = CONGRUENT_CALL2(&KLunexpected_synchronization_errorGYthreads_internalVdylan, &T15);
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:41
        T16_0 = KerrorVKdMM0I(T6, &KPempty_vectorVKi);
        T7_0 = T16_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:35
  MV_SET_COUNT(1);
  return(T9_0);
}

D Klock_release_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  _KLsimple_object_vectorGVKd_2 T9 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T13;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:57
  T8 = primitive_idQ(prim_res_,(D) 9);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:57
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:58
    T9.vector_element_[0] = &KJlock_;
    T9.vector_element_[1] = lock_;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:58
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLnot_owned_errorGYthreadsVdylan, &T9);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:58
    T10 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
    T7 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:57
    T11 = primitive_idQ(prim_res_,(D) 13);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:57
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:59
      T12.vector_element_[0] = &KJlock_;
      T12.vector_element_[1] = lock_;
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:59
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T4 = CONGRUENT_CALL2(&KLcount_exceeded_errorGYthreadsVdylan, &T12);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:59
      T13 = KerrorVKdMM0I(T4, &KPempty_vectorVKi);
      T6 = T13;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:60
      T14.vector_element_[0] = &KJsynchronization_;
      T14.vector_element_[1] = lock_;
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:60
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T5 = CONGRUENT_CALL2(&KLunexpected_synchronization_errorGYthreads_internalVdylan, &T14);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:60
      T15 = KerrorVKdMM0I(T5, &KPempty_vectorVKi);
      T6 = T15;
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:57
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:55
  MV_SET_COUNT(0);
  return(T7);
}

D KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_name_) {
  D T4;
  D Uunique_synchronization_nameF5;
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:168
  T7 = primitive_copy_vector(init_args_);
  T4 = primitive_object_allocate_filled(3,&KLrecursive_lock_iGYthreads_internalVdylanW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T4, 0);
  Uunique_synchronization_nameF5 = Uunique_synchronization_name_;
  SLOT_VALUE_SETTER(Uunique_synchronization_nameF5, T4, 1);
  MIEP_CALL_PROLOG(&K204);
  KinitializeVKdMM25I(T4, T7);
  T6_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:168
  MV_SET_COUNT(1);
  return(T6_0);
}

D KinitializeVKdMM24I (D lock_, D Urest_) {
  D T3;
  D res_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:98
  T7 = primitive_copy_vector(Urest_);
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:99
  Kdrain_finalization_queueYfinalizationVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:100
  T8 = primitive_idQ(T6,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:100
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:100
    KerrorVKdMM1I(&K261, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:100
    T9 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:100
    T10 = SLOT_VALUE_INITD(T6, 1);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:100
    MEP_CALL_PROLOG(T9, T10, 2);
    MEP_CALL2(T9, lock_, T7);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:100
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:102
  CONGRUENT_CALL_PROLOG(&Ksynchronization_nameYthreadsVdylan, 1);
  T3 = CONGRUENT_CALL1(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:103
  T11 = SLOT_VALUE_INITD(lock_, 2);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:104
  T12 = SLOT_VALUE_INITD(lock_, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:101
  res_ = primitive_make_semaphore(lock_,T3,T11,T12);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:105
  Kcheck_synchronization_creationYthreads_internalVdylanI(lock_, res_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:106
  T5 = Kfinalize_when_unreachableYfinalizationVdylanI(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:98
  MV_SET_COUNT(0);
  return(T5);
}

D KinitializeVKdMM25I (D lock_, D Urest_) {
  D T3;
  D res_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:182
  T7 = primitive_copy_vector(Urest_);
  T6 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:183
  Kdrain_finalization_queueYfinalizationVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:184
  T8 = primitive_idQ(T6,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:184
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:184
    KerrorVKdMM1I(&K261, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:184
    T9 = SLOT_VALUE_INITD(T6, 0);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:184
    T10 = SLOT_VALUE_INITD(T6, 1);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:184
    MEP_CALL_PROLOG(T9, T10, 2);
    MEP_CALL2(T9, lock_, T7);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:184
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:185
  CONGRUENT_CALL_PROLOG(&Ksynchronization_nameYthreadsVdylan, 1);
  T3 = CONGRUENT_CALL1(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:185
  res_ = primitive_make_recursive_lock(lock_,T3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:186
  Kcheck_synchronization_creationYthreads_internalVdylanI(lock_, res_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:187
  T5 = Kfinalize_when_unreachableYfinalizationVdylanI(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:182
  MV_SET_COUNT(0);
  return(T5);
}

D KinitializeVKdMM26I (D lock_, D Urest_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:269
  T6 = primitive_copy_vector(Urest_);
  T5 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:270
  T7 = primitive_idQ(T5,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:270
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:270
    KerrorVKdMM1I(&K261, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:270
    T8 = SLOT_VALUE_INITD(T5, 0);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:270
    T9 = SLOT_VALUE_INITD(T5, 1);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:270
    MEP_CALL_PROLOG(T8, T9, 2);
    MEP_CALL2(T8, lock_, T6);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:270
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:271
  CONGRUENT_CALL_PROLOG(&Ksynchronization_nameYthreadsVdylan, 1);
  T3 = CONGRUENT_CALL1(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:271
  T4 = Kinitialize_simple_lockYthreads_internalVdylanI(lock_, T3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:269
  MV_SET_COUNT(0);
  return(T4);
}

D KmakeVKdMM52I (D class_, D keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:19
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:21
  T3_0 = APPLY2(&KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0, &KLsimple_lock_iGYthreads_internalVdylan, keys_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:19
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM53I (D class_, D keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:94
  T3_0 = APPLY2(&KLsemaphore_iGZ32ZconstructorYthreads_internalVdylanMM0, &KLsemaphore_iGYthreads_internalVdylan, keys_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:91
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM54I (D class_, D keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:150
  T3_0 = APPLY2(&KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0, &KLsimple_lock_iGYthreads_internalVdylan, keys_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:147
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM55I (D class_, D keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:175
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:178
  T3_0 = APPLY2(&KLrecursive_lock_iGZ32ZconstructorYthreads_internalVdylanMM0, &KLrecursive_lock_iGYthreads_internalVdylan, keys_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:175
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM56I (D class_, D keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:262
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:265
  T3_0 = APPLY2(&KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0, &KLsimple_lock_iGYthreads_internalVdylan, keys_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:262
  MV_SET_COUNT(1);
  return(T3_0);
}

D KmakeVKdMM57I (D class_, D keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:343
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:346
  T3_0 = APPLY2(&KLread_write_lock_iGZ32ZconstructorYthreads_internalVdylanMM0, &KLread_write_lock_iGYthreads_internalVdylan, keys_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:343
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_name_) {
  D T4;
  D Uunique_synchronization_nameF5;
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:236
  T7 = primitive_copy_vector(init_args_);
  T4 = primitive_object_allocate_filled(3,&KLsimple_lock_iGYthreads_internalVdylanW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T4, 0);
  Uunique_synchronization_nameF5 = Uunique_synchronization_name_;
  SLOT_VALUE_SETTER(Uunique_synchronization_nameF5, T4, 1);
  MIEP_CALL_PROLOG(&K204);
  KinitializeVKdMM26I(T4, T7);
  T6_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:236
  MV_SET_COUNT(1);
  return(T6_0);
}

D KfinalizeYfinalizationVdylanMM4I (D lock_) {
  D res_;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:303
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:304
  res_ = primitive_destroy_simple_lock(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:305
  T3 = Kcheck_synchronization_finalizationYthreads_internalVdylanI(lock_, res_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:303
  MV_SET_COUNT(0);
  return(T3);
}

D KfinalizeYfinalizationVdylanMM3I (D lock_) {
  D res_;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:219
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:220
  res_ = primitive_destroy_recursive_lock(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:221
  T3 = Kcheck_synchronization_finalizationYthreads_internalVdylanI(lock_, res_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:219
  MV_SET_COUNT(0);
  return(T3);
}

D KfinalizeYfinalizationVdylanMM2I (D lock_) {
  D res_;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:132
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:133
  res_ = primitive_destroy_semaphore(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:134
  T3 = Kcheck_synchronization_finalizationYthreads_internalVdylanI(lock_, res_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:132
  MV_SET_COUNT(0);
  return(T3);
}

D KreleaseYthreadsVdylanMM0I (D lock_, D Urest_) {
  D T3;
  D res_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:110
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  T6 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T7 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T8 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T9 = primitive_not(T8);
    T5 = T9;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T10 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T11_0 = KmemberQVKdMM3I(&KJlock_, T10, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T12 = T11_0;
    T13 = T12;
  } else {
    T13 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T14 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_releaseF191, 1, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
    CALL1(T14, T3);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:113
  res_ = primitive_release_semaphore(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:114
  T18 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:114
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:114
    T16 = &KPfalseVKi;
    T17 = T16;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:114
    T15 = Klock_release_result_errorYthreads_internalVdylanMM0I(lock_, res_);
    T17 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:110
  MV_SET_COUNT(0);
  return(T17);
}

D KreleaseYthreadsVdylanMM1I (D lock_, D Urest_) {
  D T3;
  D res_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:191
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  T6 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T7 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T8 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T9 = primitive_not(T8);
    T5 = T9;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T10 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T11_0 = KmemberQVKdMM3I(&KJlock_, T10, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T12 = T11_0;
    T13 = T12;
  } else {
    T13 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T14 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_releaseF187, 1, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
    CALL1(T14, T3);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:194
  res_ = primitive_release_recursive_lock(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:195
  T18 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:195
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:195
    T16 = &KPfalseVKi;
    T17 = T16;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:195
    T15 = Klock_release_result_errorYthreads_internalVdylanMM0I(lock_, res_);
    T17 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:195
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:191
  MV_SET_COUNT(0);
  return(T17);
}

D KreleaseYthreadsVdylanMM2I (D lock_, D Urest_) {
  D T3;
  D res_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:275
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  T6 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T7 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T8 = primitive_idQ(T7,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T9 = primitive_not(T8);
    T5 = T9;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T10 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T11_0 = KmemberQVKdMM3I(&KJlock_, T10, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T12 = T11_0;
    T13 = T12;
  } else {
    T13 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T14 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_releaseF183, 1, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
    CALL1(T14, T3);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:278
  res_ = primitive_release_simple_lock(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:279
  T18 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:279
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:279
    T16 = &KPfalseVKi;
    T17 = T16;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:279
    T15 = Klock_release_result_errorYthreads_internalVdylanMM0I(lock_, res_);
    T17 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:279
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:275
  MV_SET_COUNT(0);
  return(T17);
}

D KreleaseYthreadsVdylanMM3I (D lock_, D Urest_) {
  D T3;
  D inner_lock_;
  D T5;
  D T6;
  D new_state_;
  D T8;
  D T9;
  D T10;
  D res_;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  D T33;
  D T34;
  _KLsimple_object_vectorGVKd_2 T35 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:350
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  T16 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T17 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T18 = primitive_idQ(T17,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T19 = primitive_not(T18);
    T15 = T19;
  } else {
    T15 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T20 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T21_0 = KmemberQVKdMM3I(&KJlock_, T20, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T22 = T21_0;
    T23 = T22;
  } else {
    T23 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T24 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    T3 = MAKE_CLOSURE_INITD(&Kanonymous_of_releaseF178, 1, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
    CALL1(T24, T3);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:353
  T25 = SLOT_VALUE_INITD(lock_, 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:354
  inner_lock_ = CALL1(&Kassociated_lockYthreadsVdylan, T25);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
  T5 = CALL1(&Kwait_forYthreadsVdylan, inner_lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
    ENTER_UNWIND_FRAME(T6);
    if (!nlx_setjmp(FRAME_DEST(T6))) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:357
      T26 = SLOT_VALUE_INITD(lock_, 2);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:359
      T27 = Kcurrent_threadYthreadsVdylanI();
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:359
      T28 = primitive_idQ(T26,T27);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:359
      if (T28 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:360
        SLOT_VALUE_SETTER((D) 1, lock_, 2);
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:361
        Krelease_allYthreadsVdylanI(T25, &KPempty_vectorVKi);
        T9 = &KPtrueVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:364
        T30 = primitive_instanceQ(T26,&KLintegerGVKd);
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:364
        if (T30 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:364
          T29 = T26;
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:364
          T31 = primitive_cast_integer_as_raw(T29);
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:364
          T32 = primitive_machine_word_less_thanQ(1,T31);
          T33 = T32;
        } else {
          T33 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:364
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:359
        if (T33 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:365
          CONGRUENT_CALL_PROLOG(&K_VKd, 2);
          new_state_ = CONGRUENT_CALL2(T26, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:366
          CALL2(&Krw_lock_state_setterYthreads_internalVdylan, new_state_, lock_);
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:367
          T34 = primitive_idQ(new_state_,(D) 1);
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:367
          if (T34 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:368
            Krelease_allYthreadsVdylanI(T25, &KPempty_vectorVKi);
          }
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:367
          T8 = &KPtrueVKi;
        } else {
          T8 = &KPfalseVKi;
        }
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:359
        T9 = T8;
      }
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:359
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
      FALL_THROUGH_UNWIND(T9);
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
    CALL1(&KreleaseYthreadsVdylan, inner_lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
    CONTINUE_UNWIND();
    res_ = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
    T35.vector_element_[0] = &KJsynchronization_;
    T35.vector_element_[1] = inner_lock_;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T10 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T35);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
    T36 = KsignalVKdMM0I(T10, &KPempty_vectorVKi);
    res_ = T36;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:356
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:376
  if (res_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:376
    T13 = &KPfalseVKi;
    T14 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:377
    T12 = Klock_release_result_errorYthreads_internalVdylanMM0I(lock_, (D) 9);
    T14 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:376
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:350
  MV_SET_COUNT(0);
  return(T14);
}

D Kwait_forYthreadsVdylanMM0I (D lock_, D Urest_, D timeout_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D res_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
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
  D T26_0;
  D T27;
  D T28;
  D T29;
  D T30_0;
  D T31_0;
  D T32_0;
  D T33_0;
  D T34_0;
  D T35;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  T11 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T12 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T13 = primitive_idQ(T12,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T14 = primitive_not(T13);
    T10 = T14;
  } else {
    T10 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T15 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T16_0 = KmemberQVKdMM3I(&KJlock_, T15, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T17 = T16_0;
    T18 = T17;
  } else {
    T18 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T19 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF154, 1, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
    CALL1(T19, T4);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:121
  if (timeout_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:122
    T5 = CALL1(&KmillisecsYthreads_internalVdylan, timeout_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:122
    T6 = primitive_wait_for_semaphore_timed(lock_,T5);
    res_ = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:124
    T7 = primitive_wait_for_semaphore(lock_);
    res_ = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  T21 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T22 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T23 = primitive_idQ(T22,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T24 = primitive_not(T23);
    T20 = T24;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T25 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T26_0 = KmemberQVKdMM3I(&KJlock_, T25, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T27 = T26_0;
    T28 = T27;
  } else {
    T28 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T29 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF153, 2, res_, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
    CALL1(T29, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
  T35 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
    T30_0 = &KPtrueVKi;
    T34_0 = T30_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
    T36 = primitive_idQ(res_,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
      T31_0 = &KPfalseVKi;
      T33_0 = T31_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
      T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(lock_, res_);
      T33_0 = T32_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
    T34_0 = T33_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:118
  MV_SET_COUNT(1);
  return(T34_0);
}

D Kwait_forYthreadsVdylanMM1I (D lock_, D Urest_, D timeout_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D res_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
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
  D T26_0;
  D T27;
  D T28;
  D T29;
  D T30_0;
  D T31_0;
  D T32_0;
  D T33_0;
  D T34_0;
  D T35;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:199
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  T11 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T12 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T13 = primitive_idQ(T12,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T14 = primitive_not(T13);
    T10 = T14;
  } else {
    T10 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T15 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T16_0 = KmemberQVKdMM3I(&KJlock_, T15, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T17 = T16_0;
    T18 = T17;
  } else {
    T18 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T19 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF138, 1, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
    CALL1(T19, T4);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:203
  if (timeout_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:204
    T5 = CALL1(&KmillisecsYthreads_internalVdylan, timeout_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:204
    T6 = primitive_wait_for_recursive_lock_timed(lock_,T5);
    res_ = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:206
    T7 = primitive_wait_for_recursive_lock(lock_);
    res_ = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:203
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  T21 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T22 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T23 = primitive_idQ(T22,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T24 = primitive_not(T23);
    T20 = T24;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T25 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T26_0 = KmemberQVKdMM3I(&KJlock_, T25, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T27 = T26_0;
    T28 = T27;
  } else {
    T28 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T29 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF137, 2, res_, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
    CALL1(T29, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
  T35 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
    T30_0 = &KPtrueVKi;
    T34_0 = T30_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
    T36 = primitive_idQ(res_,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
      T31_0 = &KPfalseVKi;
      T33_0 = T31_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
      T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(lock_, res_);
      T33_0 = T32_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
    T34_0 = T33_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:210
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:199
  MV_SET_COUNT(1);
  return(T34_0);
}

D Kwait_forYthreadsVdylanMM2I (D lock_, D Urest_, D timeout_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D res_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
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
  D T26_0;
  D T27;
  D T28;
  D T29;
  D T30_0;
  D T31_0;
  D T32_0;
  D T33_0;
  D T34_0;
  D T35;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:283
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  T11 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T12 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T13 = primitive_idQ(T12,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T14 = primitive_not(T13);
    T10 = T14;
  } else {
    T10 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T15 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T16_0 = KmemberQVKdMM3I(&KJlock_, T15, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T17 = T16_0;
    T18 = T17;
  } else {
    T18 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T19 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    T4 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF128, 1, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
    CALL1(T19, T4);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:287
  if (timeout_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:288
    T5 = CALL1(&KmillisecsYthreads_internalVdylan, timeout_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:288
    T6 = primitive_wait_for_simple_lock_timed(lock_,T5);
    res_ = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:290
    T7 = primitive_wait_for_simple_lock(lock_);
    res_ = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:287
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  T21 = TdebuggingQTVKi;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T22 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T23 = primitive_idQ(T22,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T24 = primitive_not(T23);
    T20 = T24;
  } else {
    T20 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T25 = Tdebug_partsTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T26_0 = KmemberQVKdMM3I(&KJlock_, T25, &KPempty_vectorVKi, &KEEVKd);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T27 = T26_0;
    T28 = T27;
  } else {
    T28 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T29 = Tdebug_out_functionTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    T9 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF126, 2, res_, lock_);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
    CALL1(T29, T9);
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
  T35 = primitive_idQ(res_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
    T30_0 = &KPtrueVKi;
    T34_0 = T30_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
    T36 = primitive_idQ(res_,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
      T31_0 = &KPfalseVKi;
      T33_0 = T31_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
      T32_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(lock_, res_);
      T33_0 = T32_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
    T34_0 = T33_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:294
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:283
  MV_SET_COUNT(1);
  return(T34_0);
}

D Kwait_forYthreadsVdylanMM3I (D lock_, D Urest_, D timeout_, D mode_) {
  volatile D T5;
  volatile D T6;
  volatile D inner_lock_;
  volatile D exitPexit_31_;
  volatile D T9;
  volatile D T10;
  volatile D T11;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D T15;
  volatile D T16;
  volatile D T17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile D T21_0;
  volatile D T22_0;
  volatile D T23;
  volatile D T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile D T29;
  volatile D T30;
  volatile D T31_0;
  volatile D T32;
  volatile D T33;
  volatile D T34;
  volatile D T35;
  volatile D T36;
  volatile D T37;
  volatile D T38;
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
  volatile _KLsimple_object_vectorGVKd_1 T49 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T50;
  volatile D T51;
  volatile D T52;
  volatile D T53;
  volatile D T54;
  volatile D T55;
  volatile D T56;
  volatile D T57;
  volatile D T58;
  volatile D T59_0;
  volatile D T60;
  volatile D T61;
  volatile D T62;
  volatile _KLsimple_object_vectorGVKd_1 T63 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T64;
  volatile D T65;
  volatile _KLsimple_object_vectorGVKd_2 T66 = {&KLsimple_object_vectorGVKdW, (D) 9};
  volatile D T67;
  volatile _KLsimple_object_vectorGVKd_1 T68 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T69_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:382
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:384
  T23 = primitive_idQ(mode_,&KJread_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:384
  if (T23 != &KPfalseVKi) {
    T5 = T23;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:384
    T24 = primitive_idQ(mode_,&KJwrite_);
    T5 = T24;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:384
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:384
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
    T26 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T27 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T28 = primitive_idQ(T27,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T29 = primitive_not(T28);
      T25 = T29;
    } else {
      T25 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T30 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T31_0 = KmemberQVKdMM3I(&KJlock_, T30, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T32 = T31_0;
      T33 = T32;
    } else {
      T33 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
    if (T33 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T34 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      T6 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF93, 1, lock_);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
      CALL1(T34, T6);
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:387
    T35 = SLOT_VALUE_INITD(lock_, 1);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:388
    inner_lock_ = CALL1(&Kassociated_lockYthreadsVdylan, T35);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:389
    ENTER_EXIT_FRAME(exitPexit_31_);
    if (nlx_setjmp(FRAME_DEST(exitPexit_31_))) {
        T21_0 = FRAME_RETVAL(exitPexit_31_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
      T10 = CALL1(&Kwait_forYthreadsVdylan, inner_lock_);
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
        ENTER_UNWIND_FRAME(T11);
        if (!nlx_setjmp(FRAME_DEST(T11))) {
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:392
          T36 = primitive_idQ(mode_,&KJwrite_);
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:392
          if (T36 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:393
          L0: ;
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:393
              T37 = SLOT_VALUE_INITD(lock_, 2);
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:393
              T38 = primitive_idQ(T37,(D) 1);
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:393
              if (T38 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:394
                T12 = CALL3(&Kwait_forYthreadsVdylan, T35, &KJtimeout_, timeout_);
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:394
                if (T12 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                  T40 = TdebuggingQTVKi;
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                  if (T40 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T41 = Tdebug_partsTVKi;
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T42 = primitive_idQ(T41,&KPempty_listVKi);
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T43 = primitive_not(T42);
                    T39 = T43;
                  } else {
                    T39 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                  if (T39 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T44 = Tdebug_partsTVKi;
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T45_0 = KmemberQVKdMM3I(&KJlock_, T44, &KPempty_vectorVKi, &KEEVKd);
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T46 = T45_0;
                    T47 = T46;
                  } else {
                    T47 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                  if (T47 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T48 = Tdebug_out_functionTVKi;
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    T13 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF92, 1, lock_);
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                    CALL1(T48, T13);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:397
                  T49.vector_element_[0] = &KPfalseVKi;
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:397
                  T50 = MV_SET_REST_AT(&T49, 0);
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:397
                  NLX(exitPexit_31_, T50);
                }
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:394
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:393
                goto L0;
              }
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:393
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:393
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:400
            T14 = Kcurrent_threadYthreadsVdylanI();
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:400
            SLOT_VALUE_SETTER(T14, lock_, 2);
          } else {
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:403
          L1: ;
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:403
              T51 = SLOT_VALUE_INITD(lock_, 2);
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:403
              T52 = primitive_instanceQ(T51,&KLintegerGVKd);
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:403
              if (T52 == &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:404
                T15 = CALL3(&Kwait_forYthreadsVdylan, T35, &KJtimeout_, timeout_);
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:404
                if (T15 == &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                  T54 = TdebuggingQTVKi;
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                  if (T54 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T55 = Tdebug_partsTVKi;
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T56 = primitive_idQ(T55,&KPempty_listVKi);
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T57 = primitive_not(T56);
                    T53 = T57;
                  } else {
                    T53 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                  if (T53 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T58 = Tdebug_partsTVKi;
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T59_0 = KmemberQVKdMM3I(&KJlock_, T58, &KPempty_vectorVKi, &KEEVKd);
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T60 = T59_0;
                    T61 = T60;
                  } else {
                    T61 = &KPfalseVKi;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                  if (T61 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T62 = Tdebug_out_functionTVKi;
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    T16 = MAKE_CLOSURE_INITD(&Kanonymous_of_wait_forF89, 1, lock_);
                    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                    CALL1(T62, T16);
                  }
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:407
                  T63.vector_element_[0] = &KPfalseVKi;
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:389
                  T64 = MV_SET_REST_AT(&T63, 0);
                  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:389
                  NLX(exitPexit_31_, T64);
                }
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:404
                // /opt/opendylan-2013.1/sources/dylan/locks.dylan:403
                goto L1;
              }
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:403
              // /opt/opendylan-2013.1/sources/dylan/locks.dylan:403
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:410
            T65 = SLOT_VALUE_INITD(lock_, 2);
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:410
            CONGRUENT_CALL_PROLOG(&KAVKd, 2);
            T17 = CONGRUENT_CALL2(T65, (D) 5);
            // /opt/opendylan-2013.1/sources/dylan/locks.dylan:410
            CALL2(&Krw_lock_state_setterYthreads_internalVdylan, T17, lock_);
          }
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:392
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:413
          T18 = &KPtrueVKi;
          MV_SET_ELT(0, &KPtrueVKi);
          MV_SET_COUNT(1);
          // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
          FALL_THROUGH_UNWIND(T18);
        }
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
        CALL1(&KreleaseYthreadsVdylan, inner_lock_);
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
        CONTINUE_UNWIND();
        T20 = T18;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
        T66.vector_element_[0] = &KJsynchronization_;
        T66.vector_element_[1] = inner_lock_;
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
        CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
        T19 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T66);
        // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
        T67 = KsignalVKdMM0I(T19, &KPempty_vectorVKi);
        T20 = T67;
      }
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:390
      // /opt/opendylan-2013.1/sources/dylan/locks.dylan:389
    T21_0 = T20;
      /* invalidate exitPexit_31_ */
    }
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:389
    T22_0 = T21_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:418
    T68.vector_element_[0] = mode_;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:418
    T69_0 = KerrorVKdMM1I(&K87, &T68);
    T22_0 = T69_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:384
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:382
  MV_SET_COUNT(1);
  return(T22_0);
}

static D Kanonymous_of_wait_forF93I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:386
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:386
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:386
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:386
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:386
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:386
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
  T5.vector_element_[0] = &K94;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:385
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_wait_forF92I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:396
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:396
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:396
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:396
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:396
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:396
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
  T5.vector_element_[0] = &K90;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:395
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_wait_forF89I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:406
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:406
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:406
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:406
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:406
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:406
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
  T5.vector_element_[0] = &K90;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:405
  MV_SET_COUNT(1);
  return(T6_0);
}

static D K119I () {
  D init_value_;
  D T2_0;
  D T3;
  D T4_0;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:330
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:330
  T4_0 = KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLsimple_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:330
  T3 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:330
  T5.vector_element_[0] = &KJlock_;
  T5.vector_element_[1] = T3;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:330
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  init_value_ = CONGRUENT_CALL2(&KLnotificationGYthreadsVdylan, &T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:330
  T2_0 = init_value_;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:330
  MV_SET_COUNT(1);
  return(T2_0);
}

static D Kanonymous_of_wait_forF128I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:286
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:286
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:286
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:286
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:286
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:286
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  T5.vector_element_[0] = &K94;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:285
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_wait_forF126I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:293
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:293
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:293
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:293
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:293
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:293
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  T5.vector_element_[0] = &K127;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:292
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_wait_forF138I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:202
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:202
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:202
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:202
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:202
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:202
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  T5.vector_element_[0] = &K94;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:201
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_wait_forF137I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:209
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:209
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:209
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:209
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:209
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:209
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  T5.vector_element_[0] = &K127;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:208
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_wait_forF154I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:120
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:120
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:120
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:120
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:120
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  T5.vector_element_[0] = &K94;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:119
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_wait_forF153I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:127
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:127
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:127
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:127
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:127
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:127
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  T5.vector_element_[0] = &K127;
  T5.vector_element_[1] = CREF(1);
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:126
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_releaseF178I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:352
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:352
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:352
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:352
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:352
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:352
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  T5.vector_element_[0] = &K179;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:351
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_releaseF183I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:277
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:277
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:277
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:277
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:277
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:277
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  T5.vector_element_[0] = &K179;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:276
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_releaseF187I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:193
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:193
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:193
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:193
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:193
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:193
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  T5.vector_element_[0] = &K179;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:192
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_releaseF191I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:112
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:112
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:112
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:112
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:112
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  T5.vector_element_[0] = &K179;
  T5.vector_element_[1] = CREF(0);
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:111
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLsemaphore_iGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_name_, D Uunique_initial_count_, D Uunique_maximum_count_) {
  D T6;
  D Uunique_synchronization_nameF7;
  D Uunique_initial_countF8;
  D Uunique_maximum_countF9;
  D T10_0;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:84
  T11 = primitive_copy_vector(init_args_);
  T6 = primitive_object_allocate_filled(5,&KLsemaphore_iGYthreads_internalVdylanW,4,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T6, 0);
  Uunique_synchronization_nameF7 = Uunique_synchronization_name_;
  SLOT_VALUE_SETTER(Uunique_synchronization_nameF7, T6, 1);
  Uunique_initial_countF8 = Uunique_initial_count_;
  SLOT_VALUE_SETTER(Uunique_initial_countF8, T6, 2);
  Uunique_maximum_countF9 = Uunique_maximum_count_;
  SLOT_VALUE_SETTER(Uunique_maximum_countF9, T6, 3);
  MIEP_CALL_PROLOG(&K204);
  KinitializeVKdMM24I(T6, T11);
  T10_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:84
  MV_SET_COUNT(1);
  return(T10_0);
}

D KLread_write_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_synchronization_name_) {
  D T4;
  D Uunique_synchronization_nameF5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:335
  T4 = primitive_object_allocate_filled(4,&KLread_write_lock_iGYthreads_internalVdylanW,3,&KPunboundVKi,0,0,&KPunboundVKi);
  Uunique_synchronization_nameF5 = Uunique_synchronization_name_;
  SLOT_VALUE_SETTER(Uunique_synchronization_nameF5, T4, 0);
  T6 = K236I();
  SLOT_VALUE_SETTER(T6, T4, 1);
  SLOT_VALUE_SETTER((D) 1, T4, 2);
  T7_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:335
  MV_SET_COUNT(1);
  return(T7_0);
}

static D K236I () {
  D init_value_;
  D T2_0;
  D T3;
  D T4_0;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};

  T4_0 = KLsimple_lock_iGZ32ZconstructorYthreads_internalVdylanMM0I(&KLsimple_lock_iGYthreads_internalVdylan, &KPempty_vectorVKi, &KPfalseVKi);
  T3 = T4_0;
  T5.vector_element_[0] = &KJlock_;
  T5.vector_element_[1] = T3;
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  init_value_ = CONGRUENT_CALL2(&KLnotificationGYthreadsVdylan, &T5);
  T2_0 = init_value_;
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kinitialize_simple_lockYthreads_internalVdylanI (D lock_, D name_) {
  D res_;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:253
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:254
  Kdrain_finalization_queueYfinalizationVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:255
  res_ = primitive_make_simple_lock(lock_,name_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:256
  Kcheck_synchronization_creationYthreads_internalVdylanI(lock_, res_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:257
  T4 = Kfinalize_when_unreachableYfinalizationVdylanI(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:253
  MV_SET_COUNT(0);
  return(T4);
}

D KownedQYthreadsVdylanMM0I (D lock_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:214
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:215
  T2 = primitive_owned_recursive_lock(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:215
  T3 = primitive_idQ(T2,(D) 5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:215
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:214
  MV_SET_COUNT(1);
  return(T4_0);
}

D KownedQYthreadsVdylanMM1I (D lock_) {
  D T2;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:298
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:299
  T2 = primitive_owned_simple_lock(lock_);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:299
  T3 = primitive_idQ(T2,(D) 5);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:299
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:298
  MV_SET_COUNT(1);
  return(T4_0);
}

D KownedQYthreadsVdylanMM2I (D lock_) {
  D T2;
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:423
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:424
  T2 = SLOT_VALUE_INITD(lock_, 2);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:424
  T3 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:424
  T4 = primitive_idQ(T2,T3);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:424
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:423
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kowned_for_readingQYthreadsVdylanMM0I (D lock_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
  T2 = SLOT_VALUE_INITD(lock_, 2);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
  T6 = primitive_instanceQ(T2,&KLintegerGVKd);
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
    T5 = T2;
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
    T7 = primitive_cast_integer_as_raw(T5);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
    T8 = primitive_machine_word_less_thanQ(1,T7);
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
    T9_0 = T8;
    T4_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:428
  // /opt/opendylan-2013.1/sources/dylan/locks.dylan:427
  MV_SET_COUNT(1);
  return(T4_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_locks_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_locks_for_user () {
  return;
}


/* eof */
