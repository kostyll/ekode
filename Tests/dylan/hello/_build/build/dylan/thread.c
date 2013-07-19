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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D handle1_;
} _KLportable_containerGYthreads_primitivesVdylan;

typedef struct {
  D wrapper;
  D handle1_;
  D handle2_;
} _KLportable_double_containerGYthreads_primitivesVdylan;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(23);

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
  D thread_;
} _KLthread_finalization_errorGYthreads_internalVdylan;

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
  D thread_;
} _KLthread_priority_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLunexpected_thread_errorGYthreads_internalVdylan;

typedef struct {
  D wrapper;
  D thread_;
} _KLthread_creation_errorGYthreadsVdylan;

typedef struct {
  D wrapper;
  DWORD mps_w0_;
  DWORD mps_w1_;
} _KLhash_stateGVKe;

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
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D thread_;
} _KLduplicate_join_errorGYthreadsVdylan;


/* Typedefs for defined classes */

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
  D handle1_;
  D handle2_;
  D priority_;
  D thread_name_;
  D function_;
  D function_results_;
} _KLsynchronous_threadGYthreadsVdylan;


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
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLportable_containerGYthreads_primitivesVdylan;
extern _KLmm_wrapperGVKi_1 KLportable_containerGYthreads_primitivesVdylanW;
extern _KLclassGVKd KLportable_double_containerGYthreads_primitivesVdylan;
extern _KLmm_wrapperGVKi_1 KLportable_double_containerGYthreads_primitivesVdylanW;
extern _KLsymbolGVKd KJfunction_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
D KerrorVKdMM1I (D string_, D arguments_);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLunionGVKe KLoptional_nameGYthreads_primitivesVdylan;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLkeyword_methodGVKe KinitializeVKdMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsymbolGVKd KJpriority_;
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLinstance_slot_descriptorGVKe Khandle1Ythreads_primitivesVdylanHLportable_containerG;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLinstance_slot_descriptorGVKe Khandle2Ythreads_primitivesVdylanHLportable_double_containerG;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kthreads_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
D Kclass_instanceQ_rcpl_single_smallVKiI (D obj_, D cls_);
extern _KLsymbolGVKd KJthread_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLthread_finalization_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_finalization_errorGYthreads_internalVdylanW;
D KerrorVKdMM0I (D condition_, D noise_);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsealed_generic_functionGVKe KmillisecsYthreads_internalVdylan;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLstandalone_domainGVKe_1 KinitializeVKdRD_dylanRD_34;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
D Kdrain_finalization_queueYfinalizationVdylanI ();
extern _KLclassGVKd KLthread_priority_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_priority_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLunexpected_thread_errorGYthreads_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLunexpected_thread_errorGYthreads_internalVdylanW;
extern _KLclassGVKd KLthread_creation_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLthread_creation_errorGYthreadsVdylanW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
D Kfinalize_when_unreachableYfinalizationVdylanI (D object_);
D KLhash_stateGZ32ZconstructorVKiMM0I (D class_, D init_args_);
extern _KLclassGVKd KLhash_stateGVKe;
extern _KLmm_wrapperGVKi_1 KLhash_stateGVKeW;
D KasVKdMM41I (D class_, D collection_);
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LrealG_typesVKi;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_methodGVKe KvectorVKd;
D KapplyVKdI (D, D);
extern _KLsimple_methodGVKe KvaluesVKd;
extern _KLclassGVKd KLduplicate_join_errorGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLduplicate_join_errorGYthreadsVdylanW;
extern D Ddefault_hash_stateVKi;

/* Defined object declarations */

D Kmake_first_threadYthreads_internalVdylanI ();
D Kcurrent_threadYthreadsVdylanI ();
extern _KLsimple_methodGVKe Kdebug_nameVKeMM2;
D Kdebug_nameVKeMM2I (D);
extern _KLkeyword_methodGVKe KinitializeVKdMM0;
D KinitializeVKdMM0I (D, D);
extern _KLmethod_domainGVKe KinitializeVKdRD_dylanRD_35;
D KsleepYthreadsVdylanI (D);
extern _KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM0;
D KfinalizeYfinalizationVdylanMM0I (D);
extern _KLclassGVKd KLthreadGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLthreadGYthreadsVdylanW;
extern _KLclassGVKd KLsynchronous_threadGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsynchronous_threadGYthreadsVdylanW;
static _KLimplementation_classGVKe K15;
static _KLsimple_object_vectorGVKd_6 K16;
extern _KLkeyword_methodGVKe KLsynchronous_threadGZ32ZconstructorYthreads_internalVdylanMM0;
D KLsynchronous_threadGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K19;
static _KLsimple_object_vectorGVKd_6 K20;
static _KLbyte_stringGVKd_23 K21;
static _KLpairGVKd K22;
static _KLkeyword_signatureAvaluesGVKi K23;
static _KLsimple_object_vectorGVKd_6 K24;
static _KLsimple_object_vectorGVKd_3 K25;
static _KLsimple_object_vectorGVKd_1 K26;
extern _KLinstance_slot_descriptorGVKe KpriorityYthreads_internalVdylanHLthreadG;
extern _KLinstance_slot_descriptorGVKe Kthread_nameYthreadsVdylanHLthreadG;
extern _KLinstance_slot_descriptorGVKe KfunctionYthreads_internalVdylanHLthreadG;
extern _KLinstance_slot_descriptorGVKe Kfunction_resultsYthreads_internalVdylanHLthreadG;
extern _KLsealed_generic_functionGVKe Kfunction_resultsYthreads_internalVdylan;
extern _KLsealed_generic_functionGVKe Kfunction_results_setterYthreads_internalVdylan;
extern _KLsetter_methodGVKi Kfunction_results_setterYthreads_internalVdylanMM0;
static _KLpairGVKd K34;
static _KLbyte_stringGVKd_23 K35;
extern _KLgetter_methodGVKi Kfunction_resultsYthreads_internalVdylanMM0;
static _KLpairGVKd K37;
static _KLbyte_stringGVKd_16 K38;
extern _KLsealed_generic_functionGVKe KfunctionYthreads_internalVdylan;
extern _KLgetter_methodGVKi KfunctionYthreads_internalVdylanMM0;
static _KLpairGVKd K41;
static _KLbyte_stringGVKd_8 K42;
extern _KLsealed_generic_functionGVKe Kthread_nameYthreadsVdylan;
extern _KLgetter_methodGVKi Kthread_nameYthreadsVdylanMM0;
static _KLpairGVKd K45;
static _KLbyte_stringGVKd_11 K46;
extern _KLsealed_generic_functionGVKe KpriorityYthreads_internalVdylan;
extern _KLgetter_methodGVKi KpriorityYthreads_internalVdylanMM0;
static _KLpairGVKd K49;
static _KLbyte_stringGVKd_8 K50;
static _KLbyte_stringGVKd_20 K51;
static _KLimplementation_classGVKe K52;
extern _KLkeyword_methodGVKe KLthreadGZ32ZconstructorYthreads_internalVdylanMM0;
D KLthreadGZ32ZconstructorYthreads_internalVdylanMM0I (D, D, D, D, D);
static _KLsimple_object_vectorGVKd_1 K55;
static _KLsimple_object_vectorGVKd_6 K56;
static _KLsimple_object_vectorGVKd_4 K57;
static _KLkeyword_signatureAvaluesGVKi K58;
static _KLbyte_stringGVKd_8 K59;
static _KLsignatureGVKe K60;
extern _KLsimple_methodGVKe Kspecial_thread_functionYthreads_internalVdylan;
D Kspecial_thread_functionYthreads_internalVdylanI ();
D Ktrampoline_functionYthreads_internalVdylanI (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_trampoline_functionF66;
static D Kanonymous_of_trampoline_functionF66I ();
static _KLsignatureGVKe K67;
static _KLkeyword_signatureGVKe K68;
static _KLsignatureGVKe K69;
extern _KLsimple_methodGVKe KsleepYthreadsVdylan;
static _KLsignatureGVKe K71;
extern _KLsimple_methodGVKe Kcurrent_threadYthreadsVdylan;
static _KLsignatureAvaluesGVKi K73;
extern _KLsimple_methodGVKe Kthread_yieldYthreadsVdylan;
D Kthread_yieldYthreadsVdylanI ();
extern _KLsimple_methodGVKe Kjoin_threadYthreadsVdylan;
D Kjoin_threadYthreadsVdylanI (D, D);
static D Kanonymous_of_join_threadF79I (D, D);
static _KLsignatureAvaluesGVKi K80;
extern _KLsimple_methodGVKe Kmake_foreign_threadYthreads_primitivesVdylan;
D Kmake_foreign_threadYthreads_primitivesVdylanI ();
static _KLbyte_stringGVKd_14 K83;
static _KLbyte_stringGVKd_13 K84;
static _KLpairGVKd K85;

/* Indirection variables */


/* Variables */

D thread_nameYthreadsVdylan = &Kthread_nameYthreadsVdylan;
D Dlow_priorityYthreadsVdylan = (D) -3999;
D Dbackground_priorityYthreadsVdylan = (D) -1999;
D Dnormal_priorityYthreadsVdylan = (D) 1;
D Dinteractive_priorityYthreadsVdylan = (D) 2001;
D Dhigh_priorityYthreadsVdylan = (D) 4001;
D LthreadGYthreadsVdylan = &KLthreadGYthreadsVdylan;
D Lsynchronous_threadGYthreadsVdylan = &KLsynchronous_threadGYthreadsVdylan;
D Tmaster_threadTYthreads_internalVdylan = &KPfalseVKi;
D make_foreign_threadYthreads_primitivesVdylan = &Kmake_foreign_threadYthreads_primitivesVdylan;
D join_threadYthreadsVdylan = &Kjoin_threadYthreadsVdylan;
D thread_yieldYthreadsVdylan = &Kthread_yieldYthreadsVdylan;
D current_threadYthreadsVdylan = &Kcurrent_threadYthreadsVdylan;
D sleepYthreadsVdylan = &KsleepYthreadsVdylan;

/* Objects */

_KLsimple_methodGVKe Kdebug_nameVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K69,
  &Kdebug_nameVKeMM2I
};

_KLkeyword_methodGVKe KinitializeVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K68,
  &key_mep_2,
  &KinitializeVKdMM0I,
  &KPempty_vectorVKi
};

_KLmethod_domainGVKe KinitializeVKdRD_dylanRD_35 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KinitializeVKdRD_dylanRD_34,
  &KinitializeVKdMM0
};

_KLsimple_methodGVKe KfinalizeYfinalizationVdylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K60,
  &KfinalizeYfinalizationVdylanMM0I
};

_KLclassGVKd KLthreadGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_rcpl_single_smallVKiI,
  &K59,
  &K52,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLthreadGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K52,
  (D) 1,
  26,
  33554439,
  (D) 5,
  62
};

_KLclassGVKd KLsynchronous_threadGYthreadsVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K51,
  &K15,
  (D) 1,
  &Kthreads_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_1 KLsynchronous_threadGYthreadsVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K15,
  (D) 1,
  26,
  33554439,
  (D) 5,
  62
};

static _KLimplementation_classGVKe K15 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 477102105,
  &KLsynchronous_threadGYthreadsVdylan,
  &KLsynchronous_threadGYthreadsVdylanW,
  &KPfalseVKi,
  &K16,
  (D) 6249,
  &KLsynchronous_threadGZ32ZconstructorYthreads_internalVdylanMM0,
  &K19,
  &K20,
  (D) 17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K16,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_6 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &Khandle1Ythreads_primitivesVdylanHLportable_containerG,
  &Khandle2Ythreads_primitivesVdylanHLportable_double_containerG,
  &KpriorityYthreads_internalVdylanHLthreadG,
  &Kthread_nameYthreadsVdylanHLthreadG,
  &KfunctionYthreads_internalVdylanHLthreadG,
  &Kfunction_resultsYthreads_internalVdylanHLthreadG
};

_KLkeyword_methodGVKe KLsynchronous_threadGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K23,
  &key_mep_2,
  &KLsynchronous_threadGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K24
};

static _KLsimple_object_vectorGVKd_1 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLthreadGYthreadsVdylan
};

static _KLsimple_object_vectorGVKd_6 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLportable_double_containerGYthreads_primitivesVdylan,
  &KLthreadGYthreadsVdylan,
  &KLsynchronous_threadGYthreadsVdylan,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_23 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "Missing init keyword %="
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &KinitializeVKdMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureAvaluesGVKi K23 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K25,
  &KDsignature_LobjectG_typesVKi,
  &K26
};

static _KLsimple_object_vectorGVKd_6 K24 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJpriority_,
  (D) 1,
  &KJname_,
  &KPfalseVKi,
  &KJfunction_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJpriority_,
  &KJname_,
  &KJfunction_
};

static _KLsimple_object_vectorGVKd_1 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsynchronous_threadGYthreadsVdylan
};

_KLinstance_slot_descriptorGVKe KpriorityYthreads_internalVdylanHLthreadG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  (D) 1,
  &KLthreadGYthreadsVdylan,
  &KJpriority_,
  &KpriorityYthreads_internalVdylan,
  &KPfalseVKi,
  &KLintegerGVKd
};

_KLinstance_slot_descriptorGVKe Kthread_nameYthreadsVdylanHLthreadG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPfalseVKi,
  &KLthreadGYthreadsVdylan,
  &KJname_,
  &Kthread_nameYthreadsVdylan,
  &KPfalseVKi,
  &KLoptional_nameGYthreads_primitivesVdylan
};

_KLinstance_slot_descriptorGVKe KfunctionYthreads_internalVdylanHLthreadG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 193,
  &KPfalseVKi,
  &KLthreadGYthreadsVdylan,
  &KJfunction_,
  &KfunctionYthreads_internalVdylan,
  &KPfalseVKi,
  &KLfunctionGVKd
};

_KLinstance_slot_descriptorGVKe Kfunction_resultsYthreads_internalVdylanHLthreadG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_vectorVKi,
  &KLthreadGYthreadsVdylan,
  &KPfalseVKi,
  &Kfunction_resultsYthreads_internalVdylan,
  &Kfunction_results_setterYthreads_internalVdylan,
  &KLsimple_object_vectorGVKd
};

_KLsealed_generic_functionGVKe Kfunction_resultsYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K38,
  &K37,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kfunction_results_setterYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K35,
  &K34,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kfunction_results_setterYthreads_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kfunction_resultsYthreads_internalVdylanHLthreadG
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_results_setterYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_23 K35 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "function-results-setter"
};

_KLgetter_methodGVKi Kfunction_resultsYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kfunction_resultsYthreads_internalVdylanHLthreadG
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_resultsYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "function-results"
};

_KLsealed_generic_functionGVKe KfunctionYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K42,
  &K41,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KfunctionYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KfunctionYthreads_internalVdylanHLthreadG
};

static _KLpairGVKd K41 = {
  &KLpairGVKdW /* wrapper */,
  &KfunctionYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "function"
};

_KLsealed_generic_functionGVKe Kthread_nameYthreadsVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K46,
  &K45,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi Kthread_nameYthreadsVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kthread_nameYthreadsVdylanHLthreadG
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kthread_nameYthreadsVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K46 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "thread-name"
};

_KLsealed_generic_functionGVKe KpriorityYthreads_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K50,
  &K49,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLgetter_methodGVKi KpriorityYthreads_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &KpriorityYthreads_internalVdylanHLthreadG
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &KpriorityYthreads_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K50 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "priority"
};

static _KLbyte_stringGVKd_20 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "<synchronous-thread>"
};

static _KLimplementation_classGVKe K52 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527433753,
  &KLthreadGYthreadsVdylan,
  &KLthreadGYthreadsVdylanW,
  &KPfalseVKi,
  &K16,
  (D) 6241,
  &KLthreadGZ32ZconstructorYthreads_internalVdylanMM0,
  &K55,
  &K56,
  (D) 13,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &K85,
  &KPempty_vectorVKi,
  &K57,
  &K16,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe KLthreadGZ32ZconstructorYthreads_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K58,
  &key_mep_2,
  &KLthreadGZ32ZconstructorYthreads_internalVdylanMM0I,
  &K24
};

static _KLsimple_object_vectorGVKd_1 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLportable_double_containerGYthreads_primitivesVdylan
};

static _KLsimple_object_vectorGVKd_6 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLportable_containerGYthreads_primitivesVdylan,
  &KLportable_double_containerGYthreads_primitivesVdylan,
  &KLthreadGYthreadsVdylan,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KpriorityYthreads_internalVdylanHLthreadG,
  &Kthread_nameYthreadsVdylanHLthreadG,
  &KfunctionYthreads_internalVdylanHLthreadG,
  &Kfunction_resultsYthreads_internalVdylanHLthreadG
};

static _KLkeyword_signatureAvaluesGVKi K58 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &K25,
  &KDsignature_LobjectG_typesVKi,
  &K19
};

static _KLbyte_stringGVKd_8 K59 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "<thread>"
};

static _KLsignatureGVKe K60 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &K19
};

_KLsimple_methodGVKe Kspecial_thread_functionYthreads_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K67,
  &Kspecial_thread_functionYthreads_internalVdylanI
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_trampoline_functionF66 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K67,
  &Kanonymous_of_trampoline_functionF66I,
  (D) 1
};

static _KLsignatureGVKe K67 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943041,
  &KPempty_vectorVKi
};

static _KLkeyword_signatureGVKe K68 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46399493,
  &K19,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsignatureGVKe K69 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K19
};

_KLsimple_methodGVKe KsleepYthreadsVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K71,
  &KsleepYthreadsVdylanI
};

static _KLsignatureGVKe K71 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LrealG_typesVKi
};

_KLsimple_methodGVKe Kcurrent_threadYthreadsVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K73,
  &Kcurrent_threadYthreadsVdylanI
};

static _KLsignatureAvaluesGVKi K73 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &K19
};

_KLsimple_methodGVKe Kthread_yieldYthreadsVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K67,
  &Kthread_yieldYthreadsVdylanI
};

_KLsimple_methodGVKe Kjoin_threadYthreadsVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K80,
  &Kjoin_threadYthreadsVdylanI
};

static _KLsignatureAvaluesGVKi K80 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 36701189,
  &K19,
  &K19
};

_KLsimple_methodGVKe Kmake_foreign_threadYthreads_primitivesVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K73,
  &Kmake_foreign_threadYthreads_primitivesVdylanI
};

static _KLbyte_stringGVKd_14 K83 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "Foreign thread"
};

static _KLbyte_stringGVKd_13 K84 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "Master thread"
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &KLsynchronous_threadGYthreadsVdylan,
  &KPempty_listVKi
};

/* Code */

D Kmake_first_threadYthreads_internalVdylanI () {
  D T0_0;
  _KLsimple_object_vectorGVKd_4 T1 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:94
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:95
  T1.vector_element_[0] = &KJname_;
  T1.vector_element_[1] = &K84;
  T1.vector_element_[2] = &KJfunction_;
  T1.vector_element_[3] = &Kspecial_thread_functionYthreads_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:95
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T0_0 = CONGRUENT_CALL2(&KLthreadGYthreadsVdylan, &T1);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:94
  MV_SET_COUNT(1);
  return(T0_0);
}

D Kcurrent_threadYthreadsVdylanI () {
  D T0;
  D T1_0;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:151
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:152
  T0 = primitive_current_thread();
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:152
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:151
  T2_0 = T1_0;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:151
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdebug_nameVKeMM2I (D thread_) {
  D T2;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:37
  T2 = SLOT_VALUE_INITD(thread_, 3);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:37
  T3 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:36
  return(T3);
}

D KinitializeVKdMM0I (D thr_, D Urest_) {
  D T3;
  DBOOL T4;
  D res_;
  D T6;
  D class_;
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
  D T18;
  _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:71
  Kdrain_finalization_queueYfinalizationVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:73
  T10 = SLOT_VALUE_INITD(thr_, 4);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:73
  T11 = primitive_idQ(T10,&Kspecial_thread_functionYthreads_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:73
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:74
    primitive_initialize_special_thread(thr_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:77
    T12 = SLOT_VALUE_INITD(thr_, 3);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:77
    T13 = SLOT_VALUE_INITD(thr_, 2);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:78
    T3 = Ktrampoline_functionYthreads_internalVdylanI(thr_);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:80
    T14 = primitive_instanceQ(thr_,&KLsynchronous_threadGYthreadsVdylan);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:79
    T4 = primitive_boolean_as_raw(T14);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:77
    res_ = primitive_make_thread(thr_,T12,T13,T3,T4);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:81
    T15 = primitive_cast_integer_as_raw(res_);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:81
    T16 = primitive_machine_word_equalQ(T15,1);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:81
    if (T16 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:82
      T17 = primitive_idQ(res_,(D) 5);
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:82
      if (T17 != &KPfalseVKi) {
        class_ = &KLthread_creation_errorGYthreadsVdylan;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/thread.dylan:82
        T18 = primitive_idQ(res_,(D) 9);
        // /opt/opendylan-2013.1/sources/dylan/thread.dylan:82
        if (T18 != &KPfalseVKi) {
          T6 = &KLthread_priority_errorGYthreads_internalVdylan;
        } else {
          T6 = &KLunexpected_thread_errorGYthreads_internalVdylan;
        }
        // /opt/opendylan-2013.1/sources/dylan/thread.dylan:82
        class_ = T6;
      }
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:82
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:87
      T19.vector_element_[0] = &KJthread_;
      T19.vector_element_[1] = thr_;
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:87
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T8 = CONGRUENT_CALL2(class_, &T19);
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:87
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T8, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:81
  }
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:90
  T9 = Kfinalize_when_unreachableYfinalizationVdylanI(thr_);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:70
  MV_SET_COUNT(0);
  return(T9);
}

D KsleepYthreadsVdylanI (D secs_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:159
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:160
  CONGRUENT_CALL_PROLOG(&KmillisecsYthreads_internalVdylan, 1);
  T1 = CONGRUENT_CALL1(secs_);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:160
  primitive_sleep(T1);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:160
  T2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:159
  MV_SET_COUNT(0);
  return(T2);
}

D KfinalizeYfinalizationVdylanMM0I (D thread_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:40
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:41
  T2 = primitive_destroy_thread(thread_);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:41
  T6 = primitive_idQ(T2,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:41
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:41
    T4 = &KPfalseVKi;
    T5 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:42
    T7.vector_element_[0] = &KJthread_;
    T7.vector_element_[1] = thread_;
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:42
    CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
    T3 = CONGRUENT_CALL2(&KLthread_finalization_errorGYthreads_internalVdylan, &T7);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:42
    T8 = KerrorVKdMM0I(T3, &KPempty_vectorVKi);
    T5 = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:40
  MV_SET_COUNT(0);
  return(T5);
}

D KLsynchronous_threadGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_priority_, D Uunique_thread_name_, D Uunique_function_) {
  D T6;
  D Uunique_functionF7;
  D T8;
  D Uunique_priorityF9;
  D Uunique_thread_nameF10;
  D Uunique_functionF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:33
  T13 = primitive_idQ(Uunique_function_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:33
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = &KJfunction_;
    T15 = KerrorVKdMM1I(&K21, &T14);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:33
    T6 = T15;
    Uunique_functionF7 = T6;
  } else {
    Uunique_functionF7 = Uunique_function_;
  }
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:33
  T8 = primitive_object_allocate_filled(7,&KLsynchronous_threadGYthreadsVdylanW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T8, 0);
  SLOT_VALUE_SETTER(&KPunboundVKi, T8, 1);
  Uunique_priorityF9 = Uunique_priority_;
  SLOT_VALUE_SETTER(Uunique_priorityF9, T8, 2);
  Uunique_thread_nameF10 = Uunique_thread_name_;
  SLOT_VALUE_SETTER(Uunique_thread_nameF10, T8, 3);
  Uunique_functionF11 = Uunique_functionF7;
  SLOT_VALUE_SETTER(Uunique_functionF11, T8, 4);
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, T8, 5);
  MIEP_CALL_PROLOG(&K22);
  KinitializeVKdMM0I(T8, init_args_);
  T12_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:33
  MV_SET_COUNT(1);
  return(T12_0);
}

D KLthreadGZ32ZconstructorYthreads_internalVdylanMM0I (D class_, D init_args_, D Uunique_priority_, D Uunique_thread_name_, D Uunique_function_) {
  D T6;
  D Uunique_functionF7;
  D T8;
  D Uunique_priorityF9;
  D Uunique_thread_nameF10;
  D Uunique_functionF11;
  D T12_0;
  D T13;
  _KLsimple_object_vectorGVKd_1 T14 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:18
  T13 = primitive_idQ(Uunique_function_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:18
  if (T13 != &KPfalseVKi) {
    T14.vector_element_[0] = &KJfunction_;
    T15 = KerrorVKdMM1I(&K21, &T14);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:18
    T6 = T15;
    Uunique_functionF7 = T6;
  } else {
    Uunique_functionF7 = Uunique_function_;
  }
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:18
  T8 = primitive_object_allocate_filled(7,&KLthreadGYthreadsVdylanW,6,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPunboundVKi, T8, 0);
  SLOT_VALUE_SETTER(&KPunboundVKi, T8, 1);
  Uunique_priorityF9 = Uunique_priority_;
  SLOT_VALUE_SETTER(Uunique_priorityF9, T8, 2);
  Uunique_thread_nameF10 = Uunique_thread_name_;
  SLOT_VALUE_SETTER(Uunique_thread_nameF10, T8, 3);
  Uunique_functionF11 = Uunique_functionF7;
  SLOT_VALUE_SETTER(Uunique_functionF11, T8, 4);
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, T8, 5);
  MIEP_CALL_PROLOG(&K22);
  KinitializeVKdMM0I(T8, init_args_);
  T12_0 = T8;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:18
  MV_SET_COUNT(1);
  return(T12_0);
}

D Kspecial_thread_functionYthreads_internalVdylanI () {
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:66
  T0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:66
  MV_SET_COUNT(0);
  return(T0);
}

D Ktrampoline_functionYthreads_internalVdylanI (D thread_) {
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:47
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:48
  T1 = MAKE_CLOSURE_INITD(&Kanonymous_of_trampoline_functionF66, 1, thread_);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:48
  T2_0 = T1;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:47
  MV_SET_COUNT(1);
  return(T2_0);
}

static D Kanonymous_of_trampoline_functionF66I () {
  DBOOL T0;
  D T1;
  D results_;
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:51
  T4 = primitive_instanceQ(CREF(0),&KLsynchronous_threadGYthreadsVdylan);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:51
  T0 = primitive_boolean_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:49
  primitive_initialize_current_thread(CREF(0),T0);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:52
  T6_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:52
  T5 = T6_0;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:52
  primitive_write_thread_variable(Ddefault_hash_stateVKi, T5);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:53
  T7 = SLOT_VALUE_INITD(CREF(0), 4);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:53
  T1 = CALL0(T7);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:49
  results_ = MV_GET_REST_AT(T1, 0);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:54
  T8 = KasVKdMM41I(&KLsimple_object_vectorGVKd, results_);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:54
  CALL2(&Kfunction_results_setterYthreads_internalVdylan, T8, CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:55
  primitive_detach_thread(CREF(0));
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:55
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:48
  MV_SET_COUNT(0);
  return(T3);
}

D Kthread_yieldYthreadsVdylanI () {
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:146
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:147
  primitive_thread_yield();
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:147
  T0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:146
  MV_SET_COUNT(0);
  return(T0);
}

D Kjoin_threadYthreadsVdylanI (D thread1_, D more_threads_) {
  D resF3;
  D T4;
  D T5;
  D resF6;
  D T7;
  D T8;
  D joined_thread_;
  D T10;
  D T11_0;
  D T11;
  D T12_0;
  D T12;
  D T13;
  DWORD T14;
  D T15;
  D T16;
  D thread_vec_;
  D T18;
  _KLsimple_object_vectorGVKd_2 T19 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:126
  T13 = SLOT_VALUE_INITD(more_threads_, 0);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:126
  T14 = primitive_cast_integer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:126
  T15 = primitive_machine_word_equalQ(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:126
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:128
    resF3 = primitive_thread_join_single(thread1_);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:129
    T16 = primitive_idQ(resF3,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:129
    if (T16 != &KPfalseVKi) {
      T5 = thread1_;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:131
      T4 = Kanonymous_of_join_threadF79I(resF3, thread1_);
      T5 = T4;
    }
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:129
    joined_thread_ = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:135
    thread_vec_ = APPLY2(&KvectorVKd, thread1_, more_threads_);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:136
    resF6 = primitive_thread_join_multiple(thread_vec_);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:137
    T18 = primitive_instanceQ(resF6,&KLthreadGYthreadsVdylan);
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:137
    if (T18 != &KPfalseVKi) {
      T8 = resF6;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/thread.dylan:139
      T7 = Kanonymous_of_join_threadF79I(resF6, thread_vec_);
      T8 = T7;
    }
    // /opt/opendylan-2013.1/sources/dylan/thread.dylan:137
    joined_thread_ = T8;
  }
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:142
  T10 = CALL1(&Kfunction_resultsYthreads_internalVdylan, joined_thread_);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:142
  T19.vector_element_[0] = joined_thread_;
  T19.vector_element_[1] = T10;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:142
  T11_0 = KapplyVKdI(&KvaluesVKd, &T19);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:119
  T12_0 = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:119
  return(T12_0);
}

static D Kanonymous_of_join_threadF79I (D res_, D thread_) {
  D T2;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:123
  T3.vector_element_[0] = &KJthread_;
  T3.vector_element_[1] = thread_;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:123
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2 = CONGRUENT_CALL2(&KLduplicate_join_errorGYthreadsVdylan, &T3);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:123
  T4 = KerrorVKdMM0I(T2, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:122
  return(T4);
}

D Kmake_foreign_threadYthreads_primitivesVdylanI () {
  D thread_;
  D T2_0;
  _KLsimple_object_vectorGVKd_4 T3 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:113
  T3.vector_element_[0] = &KJname_;
  T3.vector_element_[1] = &K83;
  T3.vector_element_[2] = &KJfunction_;
  T3.vector_element_[3] = &Kspecial_thread_functionYthreads_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:113
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  thread_ = CONGRUENT_CALL2(&KLthreadGYthreadsVdylan, &T3);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:115
  T5_0 = KLhash_stateGZ32ZconstructorVKiMM0I(&KLhash_stateGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:115
  T4 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:115
  primitive_write_thread_variable(Ddefault_hash_stateVKi, T4);
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:116
  T2_0 = thread_;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:112
  MV_SET_COUNT(1);
  return(T2_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_thread_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_thread_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:104
  T0 = Kmake_first_threadYthreads_internalVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:104
  Tmaster_threadTYthreads_internalVdylan = T0;
  // /opt/opendylan-2013.1/sources/dylan/thread.dylan:104
  T1 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
