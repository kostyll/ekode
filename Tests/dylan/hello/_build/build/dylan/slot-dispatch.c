#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(2);
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
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(122);
define__KLbyte_stringGVKd(45);
define__KLbyte_stringGVKd(33);
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(31);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(24);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

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
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLengine_nodeGVKg;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLany_instance_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D slot_descriptor_properties_;
  D init_data_slot_;
  D slot_owner_;
  D init_keyword_;
  D slot_getter_;
  D slot_setter_;
  D slot_type_;
} _KLany_class_slot_descriptorGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLslot_access_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D slot_engine_node_size_offset_;
} _KLrepeated_slot_access_engine_nodeGVKg;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLboxed_class_slot_setter_engine_nodeGVKg;

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
} _KLboxed_class_slot_getter_engine_nodeGVKg;

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
  D method_slot_descriptor_;
} _KLaccessor_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;


/* Typedefs for defined classes */

typedef struct {
  D wrapper;
  D engine_node_table_;
} _KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan;


/* Referenced object declarations */

D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D Kelement_range_errorVKeI (D collection_, D key_);
D Kmake_simple_lockYthreads_primitivesVdylanI ();
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLincremental_generic_functionGVKe KinitializeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern _KLclassGVKd KLinstance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLinstance_slot_descriptorGVKeW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
D Kclass_instanceQ_initialVKiI (D obj_, D cls_);
extern _KLmoduleGVKe Kdispatch_engine_internal_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsymbolGVKd KJcode_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLsetter_accessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsetter_accessor_methodGVKeW;
extern _KLclassGVKd KLslot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLslot_descriptorGVKeW;
extern _KLclassGVKd KLrepeated_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_descriptorGVKeW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLclassGVKd KLengine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLengine_nodeGVKgW;
extern _KLclassGVKd KLany_instance_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLany_instance_slot_descriptorGVKeW;
extern _KLclassGVKd KLany_class_slot_descriptorGVKe;
extern _KLmm_wrapperGVKi_0 KLany_class_slot_descriptorGVKeW;
D KerrorVKdMM1I (D string_, D arguments_);
D KmemberQVKdMM3I (D value_, D list_, D Urest_, D test_);
extern _KLsymbolGVKd KJlock_;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D Klock_wait_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
D KPmake_simple_vectorVKgI (D, D);
D Klock_release_result_errorYthreads_internalVdylanMM0I (D lock_, D prim_res_);
extern _KLsymbolGVKd KJsynchronization_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtimeout_expiredGYthreadsVdylan;
extern _KLmm_wrapperGVKi_0 KLtimeout_expiredGYthreadsVdylanW;
D KsignalVKdMM0I (D condition_, D noise_);
D Kcurrent_threadYthreadsVdylanI ();
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D Kbootstrap_allocate_engine_nodeVKgI (D, D);
extern _KLclassGVKd KLslot_access_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLslot_access_engine_nodeGVKgW;
D Kassertion_failureVKiI (D, D);
extern _KLclassGVKd KLrepeated_slot_access_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLrepeated_slot_access_engine_nodeGVKgW;
D Kslot_offset_iVKeI (D slot_descriptor_, D in_iclass_);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_59;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
D Kobject_classVKdI (D);
extern _KLclassGVKd KLboxed_class_slot_setter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_class_slot_setter_engine_nodeGVKgW;
extern _KLunionGVKe KLdispatch_starterGVKg;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunbound_class_slotVKeI (D inst_, D offset_);
extern _KLclassGVKd KLboxed_class_slot_getter_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLboxed_class_slot_getter_engine_nodeGVKgW;
extern _KLclassGVKd KLdispatch_stateGYdispatch_engine_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLdispatch_stateGYdispatch_engine_internalVdylanW;
extern _KLclassGVKd KLaccessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLaccessor_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern D Ddirect_object_mm_wrappersVKi;
extern D Dabsent_engine_nodeVKg;
extern D TdebuggingQTVKi;
extern D Tdebug_partsTVKi;
extern D Tdebug_out_functionTVKi;
extern D Tengine_node_callbacksTVKg;

/* Defined object declarations */

D Kmake_slot_access_engine_repositoryYdispatch_engine_internalVdylanI (D);
extern _KLsimple_methodGVKe KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylan;
D KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylan;
D KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylanI (D, D, D, D);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_60;
D Kmake_slot_accessing_next_method_chainVKgI (D, D);
D Kmake_slot_access_engine_nodeYdispatch_engine_internalVdylanI (D, D);
extern _KLkeyword_methodGVKe KmakeVKdMM2;
D KmakeVKdMM2I (D c_, D Urest_, D code_);
extern _KLclassGVKd KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLslot_access_engine_repositoryGYdispatch_engine_internalVdylanW;
static _KLimplementation_classGVKe K14;
static _KLsimple_object_vectorGVKd_1 K15;
extern _KLkeyword_methodGVKe KLslot_access_engine_repositoryGZ32ZconstructorYdispatch_engine_internalVdylanMM0;
D KLslot_access_engine_repositoryGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D, D);
static _KLsimple_object_vectorGVKd_1 K18;
static _KLsimple_object_vectorGVKd_6 K19;
static _KLkeyword_signatureAvaluesGVKi K20;
static _KLsimple_object_vectorGVKd_1 K21;
extern _KLinstance_slot_descriptorGVKe Kengine_node_tableYdispatch_engine_internalVdylanHLslot_access_engine_repositoryG;
extern _KLsealed_generic_functionGVKe Kengine_node_tableYdispatch_engine_internalVdylan;
extern _KLsealed_generic_functionGVKe Kengine_node_table_setterYdispatch_engine_internalVdylan;
extern _KLsetter_methodGVKi Kengine_node_table_setterYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K26;
static _KLbyte_stringGVKd_24 K27;
extern _KLgetter_methodGVKi Kengine_node_tableYdispatch_engine_internalVdylanMM0;
static _KLpairGVKd K29;
static _KLbyte_stringGVKd_17 K30;
static _KLbyte_stringGVKd_31 K31;
static _KLkeyword_signatureAvaluesGVKi K32;
static _KLsimple_object_vectorGVKd_2 K33;
static _KLsimple_object_vectorGVKd_1 K34;
static _KLsimple_object_vectorGVKd_1 K35;
static _KLsingletonGVKd K36;
D Kslot_locationVKgI (D, D, D);
D Kget_repeated_slot_access_engine_nodeYdispatch_engine_internalVdylanI (D, D, D, D, D, D);
static _KLbyte_stringGVKd_32 K39;
D Kget_slot_access_engine_nodeYdispatch_engine_internalVdylanI (D, D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_slot_access_engine_nodeF57;
static D Kanonymous_of_get_slot_access_engine_nodeF57I ();
D Kget_from_repositoryYdispatch_engine_internalVdylanI (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_from_repositoryF55;
static D Kanonymous_of_get_from_repositoryF55I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_from_repositoryF53;
static D Kanonymous_of_get_from_repositoryF53I ();
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_from_repositoryF50;
static D Kanonymous_of_get_from_repositoryF50I ();
static _KLbyte_stringGVKd_31 K51;
static _KLsignatureGVKe K52;
static _KLbyte_stringGVKd_33 K54;
static _KLbyte_stringGVKd_45 K56;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_repeated_slot_access_engine_nodeF64;
static D Kanonymous_of_get_repeated_slot_access_engine_nodeF64I ();
static _KLbyte_stringGVKd_122 K60;
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_repeated_slot_access_engine_nodeF63;
static D Kanonymous_of_get_repeated_slot_access_engine_nodeF63I ();
static _KLsignatureGVKe K65;
static _KLsimple_object_vectorGVKd_4 K66;
static _KLsignatureGVKe K67;
static _KLsimple_object_vectorGVKd_3 K68;
extern _KLsimple_methodGVKe Kmake_slot_accessing_next_method_chainVKg;
static _KLsignatureGVKe K70;
static _KLsimple_object_vectorGVKd_2 K71;
extern _KLsimple_methodGVKe Kslot_locationVKg;
static _KLsignatureAvaluesGVKi K73;
static _KLsimple_object_vectorGVKd_3 K74;
static _KLsimple_object_vectorGVKd_3 K75;
extern _KLsimple_methodGVKe Kcallback_slot_engine_node_offsetVKg;
D Kcallback_slot_engine_node_offsetVKgI (D e_);
static _KLsignatureAvaluesGVKi K78;
static _KLsimple_object_vectorGVKd_1 K79;

/* Indirection variables */


/* Variables */

D callback_slot_engine_node_offsetVKg = &Kcallback_slot_engine_node_offsetVKg;
D Pgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylan = &KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylan;
D Pgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylan = &KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylan;
D slot_locationVKg = &Kslot_locationVKg;
D Lslot_access_engine_repositoryGYdispatch_engine_internalVdylan = &KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan;
D Tslot_access_engine_repositoriesTYdispatch_engine_internalVdylan = &KPunboundVKi;
D Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan = &KPunboundVKi;
D make_slot_accessing_next_method_chainVKg = &Kmake_slot_accessing_next_method_chainVKg;

/* Objects */

_KLsimple_methodGVKe KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K67,
  &KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylanI
};

_KLsimple_methodGVKe KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K65,
  &KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylanI
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_60 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_59,
  &KmakeVKdMM2
};

_KLkeyword_methodGVKe KmakeVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K32,
  &key_mep_3,
  &KmakeVKdMM2I,
  &K33
};

_KLclassGVKd KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan = {
  &KLclassGVKdW /* wrapper */,
  &Kclass_instanceQ_initialVKiI,
  &K31,
  &K14,
  (D) 1,
  &Kdispatch_engine_internal_moduleYdylan_userVdylan
};

_KLmm_wrapperGVKi_0 KLslot_access_engine_repositoryGYdispatch_engine_internalVdylanW = {
  &KLmm_wrapperGVKiW /* wrapper */,
  &K14,
  (D) 1,
  5,
  33554439,
  (D) 1
};

static _KLimplementation_classGVKe K14 = {
  &KLimplementation_classGVKeW /* wrapper */,
  (D) 527958021,
  &KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan,
  &KLslot_access_engine_repositoryGYdispatch_engine_internalVdylanW,
  &KPfalseVKi,
  &K15,
  (D) 6209,
  &KLslot_access_engine_repositoryGZ32ZconstructorYdispatch_engine_internalVdylanMM0,
  &K18,
  &K19,
  (D) 5,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_listVKi,
  &KPempty_vectorVKi,
  &K15,
  &K15,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &Kengine_node_tableYdispatch_engine_internalVdylanHLslot_access_engine_repositoryG
};

_KLkeyword_methodGVKe KLslot_access_engine_repositoryGZ32ZconstructorYdispatch_engine_internalVdylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K20,
  &key_mep_2,
  &KLslot_access_engine_repositoryGZ32ZconstructorYdispatch_engine_internalVdylanMM0I,
  &KPempty_vectorVKi
};

static _KLsimple_object_vectorGVKd_1 K18 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_6 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KLobjectGVKd,
  &KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K20 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 35390469,
  &KDsignature_LclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &K21
};

static _KLsimple_object_vectorGVKd_1 K21 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan
};

_KLinstance_slot_descriptorGVKe Kengine_node_tableYdispatch_engine_internalVdylanHLslot_access_engine_repositoryG = {
  &KLinstance_slot_descriptorGVKeW /* wrapper */,
  (D) 157,
  &KPempty_vectorVKi,
  &KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan,
  &KPfalseVKi,
  &Kengine_node_tableYdispatch_engine_internalVdylan,
  &Kengine_node_table_setterYdispatch_engine_internalVdylan,
  &KLsimple_object_vectorGVKd
};

_KLsealed_generic_functionGVKe Kengine_node_tableYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K30,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kengine_node_table_setterYdispatch_engine_internalVdylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K27,
  &K26,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsetter_methodGVKi Kengine_node_table_setterYdispatch_engine_internalVdylanMM0 = {
  &KLsetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_setter_xep,
  &Kengine_node_tableYdispatch_engine_internalVdylanHLslot_access_engine_repositoryG
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &Kengine_node_table_setterYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_24 K27 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "engine-node-table-setter"
};

_KLgetter_methodGVKi Kengine_node_tableYdispatch_engine_internalVdylanMM0 = {
  &KLgetter_methodGVKiW /* wrapper */,
  &slotacc_single_q_instance_getter_xep,
  &Kengine_node_tableYdispatch_engine_internalVdylanHLslot_access_engine_repositoryG
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kengine_node_tableYdispatch_engine_internalVdylanMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_17 K30 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "engine-node-table"
};

static _KLbyte_stringGVKd_31 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "<slot-access-engine-repository>"
};

static _KLkeyword_signatureAvaluesGVKi K32 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K34,
  &K35,
  &KDsignature_LobjectG_typesVKi,
  &K21
};

static _KLsimple_object_vectorGVKd_2 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcode_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K36
};

static _KLsimple_object_vectorGVKd_1 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJcode_
};

static _KLsingletonGVKd K36 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan
};

static _KLbyte_stringGVKd_32 K39 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_slot_access_engine_nodeF57 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K52,
  &Kanonymous_of_get_slot_access_engine_nodeF57I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_from_repositoryF55 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K52,
  &Kanonymous_of_get_from_repositoryF55I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_from_repositoryF53 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K52,
  &Kanonymous_of_get_from_repositoryF53I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_from_repositoryF50 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K52,
  &Kanonymous_of_get_from_repositoryF50I,
  (D) 1
};

static _KLbyte_stringGVKd_31 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 125,
  "Releasing lock %= in thread %=\n"
};

static _KLsignatureGVKe K52 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_33 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 133,
  "Waiting for lock %= in thread %=\n"
};

static _KLbyte_stringGVKd_45 K56 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 181,
  "Waiting for lock %= in thread %= returned %=\n"
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_repeated_slot_access_engine_nodeF64 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K52,
  &Kanonymous_of_get_repeated_slot_access_engine_nodeF64I,
  (D) 1
};

static _KLbyte_stringGVKd_122 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 489,
  "get-repeated-slot-access-engine-node: negative diff-index %= code %= index %= integer-data %= size-index %= size-offset %="
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_get_repeated_slot_access_engine_nodeF63 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K52,
  &Kanonymous_of_get_repeated_slot_access_engine_nodeF63I,
  (D) 1
};

static _KLsignatureGVKe K65 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040209,
  &K66
};

static _KLsimple_object_vectorGVKd_4 K66 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLboxed_class_slot_setter_engine_nodeGVKg,
  &KLdispatch_starterGVKg
};

static _KLsignatureGVKe K67 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K68
};

static _KLsimple_object_vectorGVKd_3 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLboxed_class_slot_getter_engine_nodeGVKg,
  &KLdispatch_starterGVKg
};

_KLsimple_methodGVKe Kmake_slot_accessing_next_method_chainVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K70,
  &Kmake_slot_accessing_next_method_chainVKgI
};

static _KLsignatureGVKe K70 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K71
};

static _KLsimple_object_vectorGVKd_2 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KLaccessor_methodGVKe
};

_KLsimple_methodGVKe Kslot_locationVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K73,
  &Kslot_locationVKgI
};

static _KLsignatureAvaluesGVKi K73 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557517,
  &K74,
  &K75
};

static _KLsimple_object_vectorGVKd_3 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLslot_descriptorGVKe,
  &KLimplementation_classGVKe,
  &KLdispatch_stateGYdispatch_engine_internalVdylan
};

static _KLsimple_object_vectorGVKd_3 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLbooleanGVKd
};

_KLsimple_methodGVKe Kcallback_slot_engine_node_offsetVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K78,
  &Kcallback_slot_engine_node_offsetVKgI
};

static _KLsignatureAvaluesGVKi K78 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K79,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLslot_access_engine_nodeGVKg
};

/* Code */

D Kmake_slot_access_engine_repositoryYdispatch_engine_internalVdylanI (D code_) {
  D t_;
  D T2;
  D T3;
  D T4;
  D T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10_0;
  D T11;
  D T12_0;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:306
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T3 = SLOT_VALUE(&KLslot_access_engine_repositoryGYdispatch_engine_internalVdylan, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T5 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T6 = primitive_cast_integer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T7 = primitive_machine_word_logand(T6,262140);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T8 = primitive_machine_word_add_signal_overflow(5,T7);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T9 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T11 = SLOT_VALUE_INITD(T3, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T10_0 = T12_0;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T13 = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T14 = primitive_machine_word_shift_right(T7,2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:308
  T4 = primitive_object_allocate_filled(T9,T13,T14,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:307
  t_ = T4;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:313
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, t_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:314
  T2 = t_;
  MV_SET_ELT(0, t_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:306
  return(T2);
}

D KPgf_dispatch_boxed_class_slot_getterYdispatch_engine_internalVdylanI (D inst_, D e_, D parent_) {
  D T3;
  D eF4;
  D T5;
  D T6;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:209
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:211
  T8 = SLOT_VALUE_INITD(e_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:211
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:211
  T10 = primitive_machine_word_shift_right(T9,14);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:211
  T11 = primitive_machine_word_logand(T10,-4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:211
  T12 = primitive_machine_word_logior(T11,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:211
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:212
  T3 = Kobject_classVKdI(inst_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:213
  T14 = SLOT_VALUE(T3, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:213
  T15 = SLOT_VALUE_INITD(T14, 22);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:214
  T16 = REPEATED_D_SLOT_VALUE_TAGGED(T15, 1, T12);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:214
  eF4 = T16;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:215
  T17 = SLOT_VALUE_INITD(eF4, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:216
  T18 = primitive_idQ(T17,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:216
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:217
    T5 = Kunbound_class_slotVKeI(inst_, T13);
    T7 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:219
    T6 = T17;
    MV_SET_ELT(0, T17);
    MV_SET_COUNT(1);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:216
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:209
  return(T7);
}

D KPgf_dispatch_boxed_class_slot_setterYdispatch_engine_internalVdylanI (D val_, D inst_, D e_, D parent_) {
  D T4;
  D eF5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:225
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:227
  T7 = SLOT_VALUE_INITD(e_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:227
  T8 = primitive_cast_integer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:227
  T9 = primitive_machine_word_shift_right(T8,14);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:227
  T10 = primitive_machine_word_logand(T9,-4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:227
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:228
  T4 = Kobject_classVKdI(inst_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:229
  T12 = SLOT_VALUE(T4, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:229
  T13 = SLOT_VALUE_INITD(T12, 22);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:230
  T14 = REPEATED_D_SLOT_VALUE_TAGGED(T13, 1, T11);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:230
  eF5 = T14;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:231
  SLOT_VALUE_SETTER(val_, eF5, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:231
  T6 = val_;
  MV_SET_ELT(0, val_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:225
  return(T6);
}

D Kmake_slot_accessing_next_method_chainVKgI (D ds_, D m_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:432
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:433
  T2 = Kmake_slot_access_engine_nodeYdispatch_engine_internalVdylanI(m_, ds_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
  T5 = primitive_idQ(T2,Dabsent_engine_nodeVKg);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
    T3 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T4 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
    T6 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
    T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
    SLOT_VALUE_SETTER(T2, T7, 0);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
    SLOT_VALUE_SETTER(T6, T7, 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
    T8_0 = T7;
    T4 = T8_0;
    MV_SET_COUNT(1);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:434
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:432
  return(T4);
}

D Kmake_slot_access_engine_nodeYdispatch_engine_internalVdylanI (D meth_, D ds_) {
  D sd_;
  DSINT T4;
  D T5_0;
  D T5_1;
  D T5_2;
  D index_;
  D location_;
  D successQ_;
  D T9_0;
  D sizesd_;
  D T11_0;
  D T11_1;
  D size_index_;
  D size_location_;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18_0;
  D T19_0;
  D T20_0;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  DADDR T26;
  DWORD bitsF27;
  D T28;
  D T29;
  D mm_wrapperF30;
  D T31;
  D T32;
  D mm_wrapperF33;
  D T34;
  D T35;
  D T36;
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;
  _KLsimple_object_vectorGVKd_1 T42 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T43;
  D T44_0;
  D T45_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:255
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:257
  T22 = primitive_instanceQ(meth_,&KLsetter_accessor_methodGVKe);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:258
  T23 = SLOT_VALUE_INITD(meth_, 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:258
  sd_ = T23;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  T24 = SLOT_VALUE(ds_, 2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  if (T22 != &KPfalseVKi) {
    T4 = 5;
  } else {
    T4 = 1;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  T25 = REPEATED_D_SLOT_VALUE_TAGGED(T24, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  T26 = primitive_cast_pointer_as_raw(T25);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  bitsF27 = primitive_machine_word_logand(T26,3);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  T28 = primitive_machine_word_equalQ(bitsF27,0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
    T29 = primitive_element(T25,0,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
    mm_wrapperF30 = T29;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
    T31 = SLOT_VALUE_INITD(mm_wrapperF30, 0);
    T35 = T31;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
    T32 = primitive_element(Ddirect_object_mm_wrappersVKi,bitsF27,0);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
    mm_wrapperF33 = T32;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
    T34 = SLOT_VALUE_INITD(mm_wrapperF33, 0);
    T35 = T34;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:260
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:262
  T5_0 = Kslot_locationVKgI(sd_, T35, ds_);
  T5_1 = MV_GET_ELT(1);
  T5_2 = MV_GET_ELT(2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:261
  index_ = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:261
  location_ = T5_1;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:261
  successQ_ = T5_2;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:263
  if (successQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:265
    T36 = primitive_instanceQ(sd_,&KLrepeated_slot_descriptorGVKe);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:263
    if (T36 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:762
      T21 = sd_;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:267
      T37 = SLOT_VALUE(T21, 7);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:267
      sizesd_ = T37;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:269
      T11_0 = Kslot_locationVKgI(sizesd_, T35, ds_);
      T11_1 = MV_GET_ELT(1);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:268
      size_index_ = T11_0;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:268
      size_location_ = T11_1;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:273
      T38 = SLOT_VALUE_INITD(T21, 6);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:273
      T39 = primitive_idQ(T38,&KLbyte_characterGVKe);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:273
      if (T39 != &KPfalseVKi) {
        T14 = (D) 89;
      } else {
        T14 = (D) 73;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:273
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:270
      T15_0 = Kget_repeated_slot_access_engine_nodeYdispatch_engine_internalVdylanI(T14, T22, index_, location_, size_index_, size_location_);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:270
      T44_0 = T15_0;
      T19_0 = T44_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
      T40 = primitive_instanceQ(sd_,&KLany_instance_slot_descriptorGVKe);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
      if (T40 != &KPfalseVKi) {
        T17 = (D) 65;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
        T41 = primitive_instanceQ(sd_,&KLany_class_slot_descriptorGVKe);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
        if (T41 != &KPfalseVKi) {
          T16 = (D) 81;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
          T42.vector_element_[0] = sd_;
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
          T43 = KerrorVKdMM1I(&K39, &T42);
          T16 = T43;
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
        T17 = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
      T18_0 = Kget_slot_access_engine_nodeYdispatch_engine_internalVdylanI(T17, T22, index_, location_);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:283
      T45_0 = T18_0;
      T19_0 = T45_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:263
    T20_0 = T19_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:264
    T9_0 = Dabsent_engine_nodeVKg;
    T20_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:263
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:255
  MV_SET_COUNT(1);
  return(T20_0);
}

D KmakeVKdMM2I (D c_, D Urest_, D code_) {
  D T4_0;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:301
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:303
  T4_0 = Kmake_slot_access_engine_repositoryYdispatch_engine_internalVdylanI(code_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:301
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:301
  MV_SET_COUNT(1);
  return(T5_0);
}

D KLslot_access_engine_repositoryGZ32ZconstructorYdispatch_engine_internalVdylanMM0I (D class_, D init_args_) {
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:295
  T3 = primitive_object_allocate_filled(2,&KLslot_access_engine_repositoryGYdispatch_engine_internalVdylanW,1,&KPunboundVKi,0,0,&KPunboundVKi);
  SLOT_VALUE_SETTER(&KPempty_vectorVKi, T3, 0);
  APPLY2(&KinitializeVKd, T3, init_args_);
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:295
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kslot_locationVKgI (D sd_, D icls_, D ds_) {
  D T3;
  D off_;
  D T5_0;
  D T5_1;
  D T5_2;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:235
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:239
  T3 = Kslot_offset_iVKeI(sd_, icls_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:239
  off_ = T3;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:241
  T5_0 = off_;
  T5_1 = off_;
  T5_2 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:235
  MV_SET_ELT(1, T5_1);
  MV_SET_ELT(2, T5_2);
  MV_SET_COUNT(3);
  return(T5_0);
}

D Kget_repeated_slot_access_engine_nodeYdispatch_engine_internalVdylanI (D code_, D setterQ_, D index_, D integer_data_, D size_index_, D size_offset_) {
  DWORD T6;
  D T7;
  D repository_;
  D T9;
  D r2_;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  D T24;
  D T25;
  _KLsimple_object_vectorGVKd_6 T26 = {&KLsimple_object_vectorGVKdW, (D) 25};

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:368
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:372
  if (setterQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:372
    T13 = primitive_cast_integer_as_raw(code_);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:372
    T14 = primitive_machine_word_add_signal_overflow(T13,4);
    T6 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:373
    T16 = primitive_cast_integer_as_raw(code_);
    T6 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:372
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:373
  T17 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:373
  T15 = primitive_machine_word_subtract_signal_overflow(T6,64);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:374
  T7 = Tslot_access_engine_repositoriesTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:375
  T18 = REPEATED_D_SLOT_VALUE_TAGGED(T7, 1, T15);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:375
  repository_ = T18;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:376
  T19 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:376
  T20 = primitive_cast_integer_as_raw(size_index_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:376
  T21 = primitive_machine_word_logxor(T20,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:376
  T22 = primitive_machine_word_subtract_signal_overflow(T19,T21);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:376
  T23 = primitive_machine_word_subtract_signal_overflow(T22,4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:376
  T24 = primitive_cast_raw_as_integer(T23);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:378
  T25 = primitive_machine_word_less_thanQ(T23,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:378
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:378
    T26.vector_element_[0] = T24;
    T26.vector_element_[1] = T17;
    T26.vector_element_[2] = index_;
    T26.vector_element_[3] = integer_data_;
    T26.vector_element_[4] = size_index_;
    T26.vector_element_[5] = size_offset_;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:378
    Kassertion_failureVKiI(&K60, &T26);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:378
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:382
  T9 = Kget_from_repositoryYdispatch_engine_internalVdylanI(repository_, index_, &Kanonymous_of_get_repeated_slot_access_engine_nodeF63);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:378
  r2_ = T9;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:384
  T11 = MAKE_CLOSURE_INITD(&Kanonymous_of_get_repeated_slot_access_engine_nodeF64, 3, T17, size_offset_, integer_data_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:383
  T12 = Kget_from_repositoryYdispatch_engine_internalVdylanI(r2_, T24, T11);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:368
  return(T12);
}

D Kget_slot_access_engine_nodeYdispatch_engine_internalVdylanI (D code_, D setterQ_, D index_, D integer_data_) {
  DWORD T4;
  D T5;
  D repository_;
  D T7;
  D T8;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:351
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:354
  if (setterQ_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:354
    T9 = primitive_cast_integer_as_raw(code_);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:354
    T10 = primitive_machine_word_add_signal_overflow(T9,4);
    T4 = T10;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:355
    T12 = primitive_cast_integer_as_raw(code_);
    T4 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:354
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:355
  T13 = primitive_cast_raw_as_integer(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:355
  T11 = primitive_machine_word_subtract_signal_overflow(T4,64);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:356
  T5 = Tslot_access_engine_repositoriesTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:357
  T14 = REPEATED_D_SLOT_VALUE_TAGGED(T5, 1, T11);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:357
  repository_ = T14;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:359
  T7 = MAKE_CLOSURE_INITD(&Kanonymous_of_get_slot_access_engine_nodeF57, 2, T13, integer_data_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:358
  T8 = Kget_from_repositoryYdispatch_engine_internalVdylanI(repository_, index_, T7);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:351
  return(T8);
}

static D Kanonymous_of_get_slot_access_engine_nodeF57I () {
  D T0;
  D eF1;
  D T2;
  D T3;
  D T4;
  D shiftF5;
  D T6;
  D T7;
  D T8;
  DWORD mxF9;
  DWORD T10;
  DWORD T11;
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
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D shiftF27;
  D T28;
  D T29;
  D T30;
  DWORD mxF31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  D T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:359
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:361
  T0 = Kbootstrap_allocate_engine_nodeVKgI(CREF(0), (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:360
  eF1 = T0;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T4 = SLOT_VALUE_INITD(eF1, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  shiftF5 = (D) 57;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T12 = primitive_cast_integer_as_raw(CREF(1));
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T13 = primitive_machine_word_logxor(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  mxF9 = T13;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T8 = shiftF5;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T14 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T15 = primitive_machine_word_equalQ(T14,257);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    shiftF5 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T7 = shiftF5;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T11 = mxF9;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T18 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T17 = primitive_machine_word_shift_right(T18,2);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T16 = primitive_machine_word_shift_left_signal_overflow(T11,T17);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    mxF9 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T6 = shiftF5;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T10 = mxF9;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T21 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T20 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T19 = primitive_machine_word_shift_left_signal_overflow(T10,T20);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T22 = primitive_machine_word_logior(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T23 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T24 = primitive_machine_word_logand(T23,65533);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T25 = primitive_machine_word_logior(T22,T24);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T26 = primitive_cast_raw_as_integer(T25);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  SLOT_VALUE_SETTER(T26, eF1, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T3 = Tengine_node_callbacksTVKg;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  shiftF27 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T34 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T35 = primitive_machine_word_logxor(T34,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  mxF31 = T35;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T30 = shiftF27;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T36 = primitive_cast_integer_as_raw(T30);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T37 = primitive_machine_word_equalQ(T36,257);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    shiftF27 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T29 = shiftF27;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T33 = mxF31;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T40 = primitive_cast_integer_as_raw(T29);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T39 = primitive_machine_word_shift_right(T40,2);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    T38 = primitive_machine_word_shift_left_signal_overflow(T33,T39);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    mxF31 = T38;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T28 = shiftF27;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T32 = mxF31;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T43 = primitive_cast_integer_as_raw(T28);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T42 = primitive_machine_word_shift_right(T43,2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T41 = primitive_machine_word_shift_left_signal_overflow(T32,T42);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T44 = primitive_machine_word_logior(T41,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T45 = primitive_machine_word_logand(T44,253);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  T46 = REPEATED_D_SLOT_VALUE_TAGGED(T3, 1, T45);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  if (T46 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
    SLOT_VALUE_SETTER(CREF(1), eF1, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:362
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:363
  primitive_initialize_engine_node(eF1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:364
  T2 = eF1;
  MV_SET_ELT(0, eF1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:359
  return(T2);
}

D Kget_from_repositoryYdispatch_engine_internalVdylanI (D repository_, D index_, D create_new_one_) {
  D Utmp_;
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
  DWORD T18;
  DWORD T19;
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
  D T30_0;
  D T31;
  D T32;
  D T33;
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
  D T44_0;
  D T45;
  D T46;
  D T47;
  D T48;
  D T49;
  D T50;
  D T51;
  DWORD T52;
  D T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  D T57;
  D T58;
  DWORD T59;
  D T60;
  D T61;
  DWORD iF62T, iF62;
  D T63;
  D T64;
  D T65;
  D T66;
  D res_;
  D T68;
  D T69;
  D T70;
  D T71;
  D T72;
  D T73;
  D T74_0;
  D T75;
  D T76;
  D T77;
  D T78;
  _KLsimple_object_vectorGVKd_2 T79 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T80;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:395
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:397
  T16 = SLOT_VALUE_INITD(repository_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:398
  T17 = SLOT_VALUE_INITD(T16, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
  T18 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
  T19 = primitive_cast_integer_as_raw(T17);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
  T20 = primitive_machine_word_less_thanQ(T18,T19);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
    T21 = REPEATED_D_SLOT_VALUE_TAGGED(T16, 1, T18);
    Utmp_ = T21;
  } else {
    Utmp_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
    T5 = Utmp_;
    MV_SET_ELT(0, Utmp_);
    MV_SET_COUNT(1);
    T15 = T5;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T25 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T26 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T27 = primitive_idQ(T26,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T28 = primitive_not(T27);
      T24 = T28;
    } else {
      T24 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T24 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T29 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T30_0 = KmemberQVKdMM3I(&KJlock_, T29, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T31 = T30_0;
      T32 = T31;
    } else {
      T32 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T33 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      CALL1(T33, &Kanonymous_of_get_from_repositoryF53);
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T22 = primitive_wait_for_simple_lock(Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T35 = TdebuggingQTVKi;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T35 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T36 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T37 = primitive_idQ(T36,&KPempty_listVKi);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T38 = primitive_not(T37);
      T34 = T38;
    } else {
      T34 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T34 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T39 = Tdebug_partsTVKi;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T40_0 = KmemberQVKdMM3I(&KJlock_, T39, &KPempty_vectorVKi, &KEEVKd);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T41 = T40_0;
      T42 = T41;
    } else {
      T42 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T42 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T43 = Tdebug_out_functionTVKi;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T23 = MAKE_CLOSURE_INITD(&Kanonymous_of_get_from_repositoryF55, 1, T22);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      CALL1(T43, T23);
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T45 = primitive_idQ(T22,(D) 1);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T45 != &KPfalseVKi) {
      T49 = &KPtrueVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T46 = primitive_idQ(T22,(D) 5);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      if (T46 != &KPfalseVKi) {
        T48 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T44_0 = Klock_wait_result_errorYthreads_internalVdylanMM0I(Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan, T22);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T47 = T44_0;
        T48 = T47;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T49 = T48;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    if (T49 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      ENTER_UNWIND_FRAME(T6);
      if (!nlx_setjmp(FRAME_DEST(T6))) {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:404
        T50 = SLOT_VALUE_INITD(repository_, 0);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:405
        T51 = SLOT_VALUE_INITD(T50, 0);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:406
        T52 = primitive_cast_integer_as_raw(T51);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:406
        T53 = primitive_machine_word_less_thanQ(T18,T52);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:406
        if (T53 != &KPfalseVKi) {
          T8 = T50;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:410
          T54 = primitive_machine_word_add_signal_overflow(T18,60);
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:410
          T55 = primitive_machine_word_add_signal_overflow(T54,4);
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:410
          T56 = primitive_machine_word_logand(T55,-63);
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:410
          T57 = primitive_cast_raw_as_integer(T56);
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:410
          T7 = KPmake_simple_vectorVKgI(T57, &KPfalseVKi);
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:417
          iF62T = T52;
        L0: ;
            // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:417
            iF62 = iF62T;
            // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:415
            T65 = primitive_cast_raw_as_integer(iF62);
            // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:412
            T58 = primitive_idQ(T65,(D) 1);
            // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:412
            if (T58 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:413
              SLOT_VALUE_SETTER(T7, repository_, 0);
              T64 = T7;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:415
              T59 = primitive_machine_word_subtract_signal_overflow(iF62,4);
              // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:416
              T60 = REPEATED_D_SLOT_VALUE_TAGGED(T50, 1, T59);
              // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:416
              REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T60, T7, 1, T59);
              // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:417
              iF62T = T59;
              goto L0;
              // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:420
              T63 = T61;
              T64 = T63;
            }
            // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:412
            // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:417
          T8 = T64;
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:406
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:423
        T66 = REPEATED_D_SLOT_VALUE_TAGGED(T8, 1, T18);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:423
        if (T66 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:423
          T9 = T66;
          MV_SET_ELT(0, T66);
          MV_SET_COUNT(1);
          T12 = T9;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:425
          T10 = CALL0(create_new_one_);
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:425
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T10, T8, 1, T18);
          // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:425
          T11 = T10;
          MV_SET_ELT(0, T10);
          MV_SET_COUNT(1);
          T12 = T11;
        }
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:423
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        FALL_THROUGH_UNWIND(T12);
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T69 = TdebuggingQTVKi;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      if (T69 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T70 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T71 = primitive_idQ(T70,&KPempty_listVKi);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T72 = primitive_not(T71);
        T68 = T72;
      } else {
        T68 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      if (T68 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T73 = Tdebug_partsTVKi;
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T74_0 = KmemberQVKdMM3I(&KJlock_, T73, &KPempty_vectorVKi, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T75 = T74_0;
        T76 = T75;
      } else {
        T76 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      if (T76 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        T77 = Tdebug_out_functionTVKi;
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        CALL1(T77, &Kanonymous_of_get_from_repositoryF50);
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      res_ = primitive_release_simple_lock(Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T78 = primitive_idQ(res_,(D) 1);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      if (T78 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
        Klock_release_result_errorYthreads_internalVdylanMM0I(Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan, res_);
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      CONTINUE_UNWIND();
      T14 = T12;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T79.vector_element_[0] = &KJsynchronization_;
      T79.vector_element_[1] = Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan;
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T13 = CONGRUENT_CALL2(&KLtimeout_expiredGYthreadsVdylan, &T79);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
      T80 = KsignalVKdMM0I(T13, &KPempty_vectorVKi);
      T14 = T80;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:399
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:395
  return(T15);
}

static D Kanonymous_of_get_from_repositoryF55I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_4 T5 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T6_0;
  D T7;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T5.vector_element_[0] = &K56;
  T5.vector_element_[1] = Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  T5.vector_element_[3] = CREF(0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_get_from_repositoryF53I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T5.vector_element_[0] = &K54;
  T5.vector_element_[1] = Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_get_from_repositoryF50I () {
  D T0;
  D T1_0;
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T0 = Kcurrent_threadYthreadsVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T2 = SLOT_VALUE_INITD(T0, 3);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  if (T2 != &KPfalseVKi) {
    T4 = T2;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T1_0 = Kcurrent_threadYthreadsVdylanI();
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
    T3 = T1_0;
    T4 = T3;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T5.vector_element_[0] = &K51;
  T5.vector_element_[1] = Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan;
  T5.vector_element_[2] = T4;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:401
  MV_SET_COUNT(1);
  return(T6_0);
}

static D Kanonymous_of_get_repeated_slot_access_engine_nodeF64I () {
  D T0;
  D eF1;
  D T2;
  D T3;
  D T4;
  D shiftF5;
  D T6;
  D T7;
  D T8;
  DWORD mxF9;
  DWORD T10;
  DWORD T11;
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
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D shiftF27;
  D T28;
  D T29;
  D T30;
  DWORD mxF31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  DWORD T36;
  D T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  DWORD T44;
  DWORD T45;
  D T46;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:384
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:386
  T0 = Kbootstrap_allocate_engine_nodeVKgI(CREF(0), (D) 1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:385
  eF1 = T0;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T4 = SLOT_VALUE_INITD(eF1, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  shiftF5 = (D) 57;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T12 = primitive_cast_integer_as_raw(CREF(2));
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T13 = primitive_machine_word_logxor(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  mxF9 = T13;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T8 = shiftF5;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T14 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T15 = primitive_machine_word_equalQ(T14,257);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    shiftF5 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T7 = shiftF5;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T11 = mxF9;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T18 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T17 = primitive_machine_word_shift_right(T18,2);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T16 = primitive_machine_word_shift_left_signal_overflow(T11,T17);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    mxF9 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T6 = shiftF5;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T10 = mxF9;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T21 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T20 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T19 = primitive_machine_word_shift_left_signal_overflow(T10,T20);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T22 = primitive_machine_word_logior(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T23 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T24 = primitive_machine_word_logand(T23,65533);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T25 = primitive_machine_word_logior(T22,T24);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T26 = primitive_cast_raw_as_integer(T25);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  SLOT_VALUE_SETTER(T26, eF1, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T3 = Tengine_node_callbacksTVKg;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  shiftF27 = (D) 1;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T34 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T35 = primitive_machine_word_logxor(T34,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  mxF31 = T35;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T30 = shiftF27;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T36 = primitive_cast_integer_as_raw(T30);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T37 = primitive_machine_word_equalQ(T36,257);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  if (T37 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    shiftF27 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T29 = shiftF27;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T33 = mxF31;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T40 = primitive_cast_integer_as_raw(T29);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T39 = primitive_machine_word_shift_right(T40,2);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    T38 = primitive_machine_word_shift_left_signal_overflow(T33,T39);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    mxF31 = T38;
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T28 = shiftF27;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T32 = mxF31;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T43 = primitive_cast_integer_as_raw(T28);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T42 = primitive_machine_word_shift_right(T43,2);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T41 = primitive_machine_word_shift_left_signal_overflow(T32,T42);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T44 = primitive_machine_word_logior(T41,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T45 = primitive_machine_word_logand(T44,253);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  T46 = REPEATED_D_SLOT_VALUE_TAGGED(T3, 1, T45);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  if (T46 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
    SLOT_VALUE_SETTER(CREF(2), eF1, 1);
  }
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:387
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:388
  SLOT_VALUE_SETTER(CREF(1), eF1, 3);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:389
  primitive_initialize_engine_node(eF1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:390
  T2 = eF1;
  MV_SET_ELT(0, eF1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:384
  return(T2);
}

static D Kanonymous_of_get_repeated_slot_access_engine_nodeF63I () {
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:382
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:382
  T0 = Kmake_slot_access_engine_repositoryYdispatch_engine_internalVdylanI(&KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:382
  return(T0);
}

D Kcallback_slot_engine_node_offsetVKgI (D e_) {
  D T1;
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:50
  T1 = SLOT_VALUE_INITD(e_, 0);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:50
  T2 = primitive_cast_integer_as_raw(T1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:50
  T3 = primitive_machine_word_shift_right(T2,14);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:50
  T4 = primitive_machine_word_logand(T3,-4);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:50
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:50
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:50
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:48
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_slot_dispatch_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_slot_dispatch_for_user () {
{
  D T0;
  D T1;
  D T2;
  D T3;
  DWORD T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD iF8T, iF8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:321
  T1 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 65);
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:325
  iF8T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:325
    iF8 = iF8T;
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:323
    T9 = primitive_cast_raw_as_integer(iF8);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:323
    T3 = primitive_machine_word_less_thanQ(iF8,65);
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:323
    if (T3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
      T4 = primitive_machine_word_add_signal_overflow(iF8,64);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
      T5 = primitive_cast_raw_as_integer(T4);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
      T2 = Kmake_slot_access_engine_repositoryYdispatch_engine_internalVdylanI(T5);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
      T6 = primitive_machine_word_unsigned_less_thanQ(iF8,65);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T2, T1, 1, iF8);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
        Kelement_range_errorVKeI(T1, T9);
      }
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:324
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:325
      T7 = primitive_machine_word_add_signal_overflow(iF8,4);
      // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:325
      iF8T = T7;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:323
    // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:325
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:318
  Tslot_access_engine_repositoriesTYdispatch_engine_internalVdylan = T1;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:318
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:333
  T0 = Kmake_simple_lockYthreads_primitivesVdylanI();
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:332
  Dslot_access_engine_repository_lockYdispatch_engine_internalVdylan = T0;
  // /opt/opendylan-2013.1/sources/dylan/slot-dispatch.dylan:332
  T1 = &KPfalseVKi;
  goto I2;
}
I2:

  return;
}


/* eof */
