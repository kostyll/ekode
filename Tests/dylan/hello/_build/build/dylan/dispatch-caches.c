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
define__KLsimple_object_vectorGVKd(5);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);

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
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_warningGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(24);
define__KLbyte_stringGVKd(64);
define__KLbyte_stringGVKd(17);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(71);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(32);

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D gf_cache_info_users_;
} _KLgf_cache_infoGVKg;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D gf_cache_info_users_;
  D simple_typechecked_gf_cache_info_entries_;
  D simple_typechecked_gf_cache_info_argmask_;
} _KLsimple_typechecked_gf_cache_infoGVKg;

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
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLmethodGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLdiscriminatorGVKg;

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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLcommon_root_cache_header_engine_nodeGVKg;

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;


/* Typedefs for defined classes */


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
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsimple_warningGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_warningGVKdW;
D KdispwarnYdispatch_engine_internalVdylanI (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
D Kcompute_headed_methodsYdispatch_engine_internalVdylanI (D);
D Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI (D, D, D);
extern _KLsimple_methodGVKe Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D KEEVKdI (D x_, D y_);
D Ksubst_engine_node_1Ydispatch_engine_internalVdylanI (D, D, D);
D KPmake_simple_vectorVKgI (D, D);
extern _KLclassGVKd KLgf_cache_infoGVKg;
extern _KLmm_wrapperGVKi_0 KLgf_cache_infoGVKgW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KerrorVKdMM1I (D string_, D arguments_);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLsimple_typechecked_gf_cache_infoGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_gf_cache_infoGVKgW;
D Kcompress_maskVKgI (D, D);
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsealed_generic_functionGVKe Ksimple_typechecked_gf_cache_info_entries_setterVKg;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
D Kgeneric_function_sealedQVKeI (D g_);
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
extern _KLclassGVKd KLmethodGVKd;
extern _KLmm_wrapperGVKi_0 KLmethodGVKdW;
D KPmethod_specializerVKgI (D, D);
D Ksame_specializerQVKgI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLsealed_generic_functionGVKe Kgf_cache_info_users_setterVKg;
D KelementVKdMM11I (D vector_, D index_, D Urest_, D default_);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLsealed_generic_functionGVKe KheadVKd;
D Kmake_typecheck_discriminatorVKgI (D, D, D, D);
D Kelement_range_errorVKeI (D collection_, D key_);
D KlistVKdI (D objects_);
D Kcompute_dispatch_from_rootYdispatch_engine_internalVdylanI (D, D);
extern _KLclassGVKd KLdiscriminatorGVKg;
extern _KLmm_wrapperGVKi_0 KLdiscriminatorGVKgW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLdispatch_stateGYdispatch_engine_internalVdylan;
extern _KLmm_wrapperGVKi_0 KLdispatch_stateGYdispatch_engine_internalVdylanW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
D Kreconstruct_args_from_mepargsVKeI (D, D);
extern _KLclassGVKd KLpartial_dispatch_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLpartial_dispatch_cache_header_engine_nodeGVKgW;
D Kdomain_number_requiredVKeMM4I (D d_);
D Kdomain_typeVKeMM4I (D d_, D i_);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
D Kdomain_disjointQVKeMM5I (D d1_, D d2_, D scu_, D dep_);
extern _KLclassGVKd KLcommon_root_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLcommon_root_cache_header_engine_nodeGVKgW;
D Kbootstrap_typed_allocate_engine_nodeVKgI (D, D, D);
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdispatch_engine_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern D Dabsent_engine_nodeVKg;
extern D Dempty_subjunctive_class_universeVKe;

/* Defined object declarations */

D Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI (D, D, D);
D Kcache_header_puntYdispatch_engine_internalVdylanI (D, D, D);
D Kcompute_argument_precheck_maskYdispatch_engine_internalVdylanI (D, D);
D Khandle_partial_dispatch_cache_headYdispatch_engine_internalVdylanI (D, D, D);
D Khandle_simple_typechecked_cache_headYdispatch_engine_internalVdylanI (D, D, D);
D Khandle_simple_call_site_cache_headYdispatch_engine_internalVdylanI (D, D, D);
D Khandle_profiling_call_site_cache_headYdispatch_engine_internalVdylanI (D, D, D);
D Khandle_unknown_cache_headYdispatch_engine_internalVdylanI (D, D, D);
static _KLbyte_stringGVKd_32 K8;
D Khandle_simple_call_site_cache_head_methods_computedYdispatch_engine_internalVdylanI (D, D, D);
D Kupgrade_to_basic_gf_cache_infoYdispatch_engine_internalVdylanI (D, D);
D Ktrack_cache_header_engine_nodeYdispatch_engine_internalVdylanI (D, D);
D Kupgrade_gf_cache_infoXYdispatch_engine_internalVdylanI (D, D, D);
D Kupgrade_to_simple_typechecked_gf_cache_infoYdispatch_engine_internalVdylanI (D, D);
static _KLbyte_stringGVKd_22 K14;
static _KLsingletonGVKd K15;
D Kupgrade_simple_typechecked_gf_cache_infoXYdispatch_engine_internalVdylanI (D, D, D, D, D);
static _KLbyte_stringGVKd_32 K17;
D Kcompute_typecheckable_argument_maskYdispatch_engine_internalVdylanI (D, D);
D Kensure_engine_for_simple_typechecked_gf_cacheYdispatch_engine_internalVdylanI (D, D);
static _KLbyte_stringGVKd_19 K20;
D Kfind_or_install_simple_typechecked_cacheYdispatch_engine_internalVdylanI (D, D, D, D, D, D);
static _KLbyte_stringGVKd_71 K22;
static _KLbyte_stringGVKd_15 K23;
static _KLsimple_closure_methodGVKi_0 KloseF33;
static D KloseF33I (D, D, D, D, D);
static _KLsimple_closure_methodGVKi_0 KwalkF28;
static D KwalkF28I (D, D, D);
static _KLbyte_stringGVKd_20 K29;
static _KLbyte_stringGVKd_17 K30;
static _KLsignatureGVKe K31;
static _KLsimple_object_vectorGVKd_3 K32;
static _KLbyte_stringGVKd_64 K34;
static _KLsignatureGVKe K35;
static _KLsimple_object_vectorGVKd_5 K36;
D Kcompute_headed_methods_under_domainYdispatch_engine_internalVdylanI (D, D);
D Kfind_shareable_partial_dispatch_cache_headerYdispatch_engine_internalVdylanI (D, D);
static _KLunionGVKe K39;
D Kfind_or_create_common_cache_headerYdispatch_engine_internalVdylanI (D);
extern _KLsimple_methodGVKe Kprofile_all_terminal_engine_nodesQ_setterVKg;
D Kprofile_all_terminal_engine_nodesQ_setterVKgI (D);
extern _KLsimple_methodGVKe Kprofile_all_terminal_engine_nodesQVKg;
D Kprofile_all_terminal_engine_nodesQVKgI ();
static _KLsignatureGVKe K45;
extern _KLsimple_methodGVKe Kpartial_dispatch_megamorphic_puntQ_setterVKg;
D Kpartial_dispatch_megamorphic_puntQ_setterVKgI (D wellQ_);
extern _KLsimple_methodGVKe Kpartial_dispatch_megamorphic_puntQVKg;
D Kpartial_dispatch_megamorphic_puntQVKgI ();
extern _KLsimple_methodGVKe Ksharing_partial_dispatch_cache_headersQ_setterVKg;
D Ksharing_partial_dispatch_cache_headersQ_setterVKgI (D wellQ_);
extern _KLsimple_methodGVKe Ksharing_partial_dispatch_cache_headersQVKg;
D Ksharing_partial_dispatch_cache_headersQVKgI ();
extern _KLincremental_generic_functionGVKe Kpartial_dispatchQ_setterVKg;
extern _KLsimple_methodGVKe Kpartial_dispatchQ_setterVKgMM0;
D Kpartial_dispatchQ_setterVKgMM0I (D, D);
static _KLpairGVKd K57;
static _KLbyte_stringGVKd_24 K58;
static _KLsignatureGVKe K59;
static _KLsimple_object_vectorGVKd_2 K60;
extern _KLsimple_methodGVKe Kcall_site_caches_enabledQ_setterVKg;
D Kcall_site_caches_enabledQ_setterVKgI (D);
extern _KLsimple_methodGVKe Kcall_site_caches_enabledQVKg;
D Kcall_site_caches_enabledQVKgI ();
extern _KLsimple_methodGVKe Kpartial_dispatchQVKgMM0;
D Kpartial_dispatchQVKgMM0I (D);
static _KLsignatureGVKe K67;

/* Indirection variables */


/* Variables */

D partial_dispatchQVKg = &Kpartial_dispatchQVKgMM0;
D Tcall_site_caches_enabledQTYdispatch_engine_internalVdylan = &KPtrueVKi;
D call_site_caches_enabledQVKg = &Kcall_site_caches_enabledQVKg;
D call_site_caches_enabledQ_setterVKg = &Kcall_site_caches_enabledQ_setterVKg;
D Tpartial_dispatchQTYdispatch_engine_internalVdylan = &KPtrueVKi;
D partial_dispatchQ_setterVKg = &Kpartial_dispatchQ_setterVKg;
D Tsharing_partial_dispatch_cache_headersQTYdispatch_engine_internalVdylan = &KPfalseVKi;
D sharing_partial_dispatch_cache_headersQVKg = &Ksharing_partial_dispatch_cache_headersQVKg;
D sharing_partial_dispatch_cache_headersQ_setterVKg = &Ksharing_partial_dispatch_cache_headersQ_setterVKg;
D Tpartial_dispatch_megamorphic_puntQTYdispatch_engine_internalVdylan = &KPfalseVKi;
D partial_dispatch_megamorphic_puntQVKg = &Kpartial_dispatch_megamorphic_puntQVKg;
D partial_dispatch_megamorphic_puntQ_setterVKg = &Kpartial_dispatch_megamorphic_puntQ_setterVKg;
D Tprofile_all_terminal_engine_nodesQTYdispatch_engine_internalVdylan = &KPfalseVKi;
D profile_all_terminal_engine_nodesQVKg = &Kprofile_all_terminal_engine_nodesQVKg;
D profile_all_terminal_engine_nodesQ_setterVKg = &Kprofile_all_terminal_engine_nodesQ_setterVKg;

/* Objects */

static _KLbyte_stringGVKd_32 K8 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Unhandled g.f. cache for %= - %="
};

static _KLbyte_stringGVKd_22 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "Bogus gf cache info %="
};

static _KLsingletonGVKd K15 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLbyte_stringGVKd_32 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLbyte_stringGVKd_19 K20 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "gf caching is hosed"
};

static _KLbyte_stringGVKd_71 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 285,
  "Find-or-install-simple-typechecked-cache didn\'t find all-checked state!"
};

static _KLbyte_stringGVKd_15 K23 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "I\'m in trouble!"
};

static _KLsimple_closure_methodGVKi_0 KloseF33 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_5,
  &K35,
  &KloseF33I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KwalkF28 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K31,
  &KwalkF28I,
  (D) 1
};

static _KLbyte_stringGVKd_20 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "discriminator on arg"
};

static _KLbyte_stringGVKd_17 K30 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "non-discriminator"
};

static _KLsignatureGVKe K31 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K32
};

static _KLsimple_object_vectorGVKd_3 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdispatch_stateGYdispatch_engine_internalVdylan,
  &KLobjectGVKd,
  &KLfunctionGVKd
};

static _KLbyte_stringGVKd_64 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 257,
  "For dispatch on %= with args %=, encountered %s %= unexpectedly."
};

static _KLsignatureGVKe K35 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040213,
  &K36
};

static _KLsimple_object_vectorGVKd_5 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 21,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLunionGVKe K39 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K15,
  &KLpartial_dispatch_cache_header_engine_nodeGVKg
};

_KLsimple_methodGVKe Kprofile_all_terminal_engine_nodesQ_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kprofile_all_terminal_engine_nodesQ_setterVKgI
};

_KLsimple_methodGVKe Kprofile_all_terminal_engine_nodesQVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K45,
  &Kprofile_all_terminal_engine_nodesQVKgI
};

static _KLsignatureGVKe K45 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944065,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kpartial_dispatch_megamorphic_puntQ_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kpartial_dispatch_megamorphic_puntQ_setterVKgI
};

_KLsimple_methodGVKe Kpartial_dispatch_megamorphic_puntQVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K45,
  &Kpartial_dispatch_megamorphic_puntQVKgI
};

_KLsimple_methodGVKe Ksharing_partial_dispatch_cache_headersQ_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Ksharing_partial_dispatch_cache_headersQ_setterVKgI
};

_KLsimple_methodGVKe Ksharing_partial_dispatch_cache_headersQVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K45,
  &Ksharing_partial_dispatch_cache_headersQVKgI
};

_KLincremental_generic_functionGVKe Kpartial_dispatchQ_setterVKg = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &KPfalseVKi,
  &K58,
  &K57,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdispatch_engine_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kpartial_dispatchQ_setterVKgMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K59,
  &Kpartial_dispatchQ_setterVKgMM0I
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Kpartial_dispatchQ_setterVKgMM0,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_24 K58 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 97,
  "partial-dispatch?-setter"
};

static _KLsignatureGVKe K59 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K60
};

static _KLsimple_object_vectorGVKd_2 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kcall_site_caches_enabledQ_setterVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kcall_site_caches_enabledQ_setterVKgI
};

_KLsimple_methodGVKe Kcall_site_caches_enabledQVKg = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K45,
  &Kcall_site_caches_enabledQVKgI
};

_KLsimple_methodGVKe Kpartial_dispatchQVKgMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K67,
  &Kpartial_dispatchQVKgMM0I
};

static _KLsignatureGVKe K67 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI (D old_, D next_, D gf_) {
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:84
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:89
  primitive_synchronize_side_effects();
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:91
  SLOT_VALUE_SETTER(next_, old_, 3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:91
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:84
  MV_SET_COUNT(0);
  return(T3);
}

D Kcache_header_puntYdispatch_engine_internalVdylanI (D ds_, D cache_, D e_) {
  D T3;
  D root_;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:442
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:444
  T3 = Kupgrade_to_basic_gf_cache_infoYdispatch_engine_internalVdylanI(cache_, ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:445
  Ktrack_cache_header_engine_nodeYdispatch_engine_internalVdylanI(e_, T3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:446
  T6 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:446
  root_ = Kfind_or_create_common_cache_headerYdispatch_engine_internalVdylanI(T6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:447
  T7 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:447
  T5 = Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(e_, root_, T7);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:442
  MV_SET_COUNT(0);
  return(T5);
}

D Kcompute_argument_precheck_maskYdispatch_engine_internalVdylanI (D ds_, D cache_) {
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
  D T14;
  D T15;
  D T16;
  D T17;
  _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:290
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:293
  if (cache_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:298
    T13 = primitive_instanceQ(cache_,&KLintegerGVKd);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:293
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:293
      T16 = cache_;
      T4 = T16;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:301
      T14 = primitive_instanceQ(cache_,&KLsimple_typechecked_gf_cache_infoGVKg);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:293
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:120
        T10 = cache_;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:303
        T15 = SLOT_VALUE_INITD(T10, 2);
        T3 = T15;
      } else {
        T3 = (D) 1;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:293
      T4 = T3;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:293
    T5 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:296
    T11 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:297
    T12 = SLOT_VALUE(ds_, 5);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:297
    T2 = Kcompute_typecheckable_argument_maskYdispatch_engine_internalVdylanI(T11, T12);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:297
    SLOT_VALUE_SETTER(T2, T11, 2);
    T5 = T2;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:293
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
  T17 = primitive_idQ(T5,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
    T8 = &KPfalseVKi;
    T9 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
    T18.vector_element_[0] = T5;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
    T6 = KlistVKdI(&T18);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
    SLOT_VALUE_SETTER(T6, ds_, 4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
    T7 = &KPfalseVKi;
    T9 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:307
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:290
  MV_SET_COUNT(0);
  return(T9);
}

D Khandle_partial_dispatch_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_) {
  D T4;
  D oengine_;
  D T6;
  D T7;
  D other_;
  D T9;
  D T10_0;
  D nengine_;
  D current_next_;
  D T13_0;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  D T18_0;
  D T19;
  D T20;
  D T21_0;
  D T22;
  D T23_0;
  D T24_0;
  D T25;
  D T26_0;
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
  D T37;
  D T38;
  D T39;
  D T40;
  D T41;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:374
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
  T22 = Tcall_site_caches_enabledQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
  T23_0 = T22;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
  T24_0 = T23_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
  T25 = T24_0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
    T20 = Tpartial_dispatchQTYdispatch_engine_internalVdylan;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
    T21_0 = T20;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
    T26_0 = T21_0;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
    T27 = T26_0;
    T28 = T27;
  } else {
    T28 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:377
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:378
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:379
    Kcompute_headed_methods_under_domainYdispatch_engine_internalVdylanI(ds_, old_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:381
    Kcompute_headed_methodsYdispatch_engine_internalVdylanI(ds_);
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:378
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:383
  T4 = Kupgrade_to_basic_gf_cache_infoYdispatch_engine_internalVdylanI(cache_, ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:385
  Ktrack_cache_header_engine_nodeYdispatch_engine_internalVdylanI(old_, T4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:386
  T29 = SLOT_VALUE_INITD(old_, 3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:386
  if (T29 != &KPfalseVKi) {
    oengine_ = T29;
  } else {
    oengine_ = Dabsent_engine_nodeVKg;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:386
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:387
  T30 = primitive_idQ(oengine_,Dabsent_engine_nodeVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:387
  if (T30 != &KPfalseVKi) {
    T6 = T28;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:387
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:387
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:387
    T7 = Kfind_shareable_partial_dispatch_cache_headerYdispatch_engine_internalVdylanI(old_, T4);
    other_ = T7;
  } else {
    other_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:387
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:388
  if (other_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:94
    T19 = other_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:388
    T32 = primitive_idQ(T19,old_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:388
    T31 = primitive_not(T32);
    T9 = T31;
  } else {
    T9 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:388
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:388
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:389
    T33 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:389
    Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(old_, other_, T33);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:390
    T10_0 = other_;
    T18_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:392
    nengine_ = Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI(ds_, oengine_, &Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:393
    T34 = KEEVKdI(oengine_, nengine_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:393
    if (T34 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:403
      T16_0 = nengine_;
      T17_0 = T16_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:394
      T35 = SLOT_VALUE_INITD(old_, 3);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:394
      if (T35 != &KPfalseVKi) {
        current_next_ = T35;
      } else {
        current_next_ = Dabsent_engine_nodeVKg;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:394
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:395
      T36 = KEEVKdI(current_next_, oengine_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:395
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:398
        T37 = SLOT_VALUE(ds_, 0);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:398
        Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(old_, nengine_, T37);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
        T38 = primitive_idQ(nengine_,oengine_);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
        if (T38 != &KPfalseVKi) {
          T39 = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
          T41 = primitive_idQ(oengine_,Dabsent_engine_nodeVKg);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
          T40 = primitive_not(T41);
          T39 = T40;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
        if (T39 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
          Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(nengine_, oengine_, ds_);
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:399
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:400
        T14_0 = nengine_;
        T15_0 = T14_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:396
        T13_0 = current_next_;
        T15_0 = T13_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:395
      T17_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:393
    T18_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:388
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:374
  MV_SET_COUNT(1);
  return(T18_0);
}

D Khandle_simple_typechecked_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  D shiftF14;
  D T15;
  D T16;
  D T17;
  DWORD mx_;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  DWORD T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  DWORD T31;
  D T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39;
  D T40;
  D Utmp_;
  DWORD T42;
  DWORD T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:468
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:471
  Kcompute_headed_methodsYdispatch_engine_internalVdylanI(ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:473
  T3 = Kupgrade_to_simple_typechecked_gf_cache_infoYdispatch_engine_internalVdylanI(cache_, ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T9 = SLOT_VALUE_INITD(old_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T10 = primitive_cast_integer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T11 = primitive_machine_word_shift_right(T10,14);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T12 = primitive_machine_word_logand(T11,-4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T13 = primitive_machine_word_logior(T12,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  shiftF14 = (D) 33;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  mx_ = 4;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T17 = shiftF14;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T21 = primitive_cast_integer_as_raw(T17);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T22 = primitive_machine_word_equalQ(T21,257);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
    shiftF14 = (D) 129;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
    T16 = shiftF14;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
    T20 = mx_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
    T25 = primitive_cast_integer_as_raw(T16);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
    T24 = primitive_machine_word_shift_right(T25,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
    T23 = primitive_machine_word_shift_left_signal_overflow(T20,T24);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
    mx_ = T23;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T15 = shiftF14;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T19 = mx_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T28 = primitive_cast_integer_as_raw(T15);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T27 = primitive_machine_word_shift_right(T28,2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T26 = primitive_machine_word_shift_left_signal_overflow(T19,T27);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T29 = primitive_machine_word_logior(T26,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T30 = primitive_machine_word_subtract_signal_overflow(T29,4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T31 = primitive_machine_word_logand(T13,T30);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:474
  T32 = primitive_cast_raw_as_integer(T31);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:475
  T33 = SLOT_VALUE_INITD(T3, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:476
  T4 = Kcompress_maskVKgI(T33, T32);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:477
  T34 = SLOT_VALUE_INITD(T3, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:478
  T35 = SLOT_VALUE_INITD(T34, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:479
  T36 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:479
  T37 = primitive_machine_word_add_signal_overflow(T36,4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:479
  T38 = primitive_cast_raw_as_integer(T37);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:479
  T39 = primitive_idQ(T38,T35);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:479
  if (T39 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:479
    Ktrack_cache_header_engine_nodeYdispatch_engine_internalVdylanI(old_, T3);
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:479
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:480
  T40 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:483
  Utmp_ = KelementVKdMM11I(T34, T4, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:483
  if (Utmp_ != &KPfalseVKi) {
    T7 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:485
    T42 = primitive_cast_integer_as_raw(T35);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:485
    T43 = primitive_machine_word_subtract_signal_overflow(T42,4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:485
    T44 = primitive_cast_raw_as_integer(T43);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:485
    T45 = KelementVKdMM11I(T34, T44, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:485
    if (T45 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:486
      Kensure_engine_for_simple_typechecked_gf_cacheYdispatch_engine_internalVdylanI(T32, ds_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:487
      T46 = KelementVKdMM11I(T34, T44, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:487
      if (T46 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:487
        KerrorVKdMM1I(&K20, &KPempty_vectorVKi);
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:487
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:485
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:491
    T47 = SLOT_VALUE(ds_, 5);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:491
    T48 = SLOT_VALUE_INITD(T47, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:491
    T5 = CALL1(&KheadVKd, T48);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:489
    T6 = Kfind_or_install_simple_typechecked_cacheYdispatch_engine_internalVdylanI(T4, T33, T32, T34, T5, T40);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:483
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:481
  T8 = Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(old_, T7, T40);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:468
  MV_SET_COUNT(0);
  return(T8);
}

D Khandle_simple_call_site_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:327
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:330
  Kcompute_headed_methodsYdispatch_engine_internalVdylanI(ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:331
  T3_0 = Khandle_simple_call_site_cache_head_methods_computedYdispatch_engine_internalVdylanI(ds_, cache_, old_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:327
  MV_SET_COUNT(1);
  return(T3_0);
}

D Khandle_profiling_call_site_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:336
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:339
  Kcompute_headed_methodsYdispatch_engine_internalVdylanI(ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:340
  T3_0 = Khandle_simple_call_site_cache_head_methods_computedYdispatch_engine_internalVdylanI(ds_, cache_, old_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:336
  MV_SET_COUNT(1);
  return(T3_0);
}

D Khandle_unknown_cache_headYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_) {
  D T3;
  D T4;
  D T5;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T7;
  _KLsimple_object_vectorGVKd_4 T8 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:413
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:418
  T5 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:418
  T6.vector_element_[0] = T5;
  T6.vector_element_[1] = old_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:418
  T7 = primitive_copy_vector(&T6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:416
  T8.vector_element_[0] = &KJformat_string_;
  T8.vector_element_[1] = &K8;
  T8.vector_element_[2] = &KJformat_arguments_;
  T8.vector_element_[3] = T7;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:416
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3 = CONGRUENT_CALL2(&KLsimple_warningGVKd, &T8);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:416
  KdispwarnYdispatch_engine_internalVdylanI(T3, ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:420
  T4 = Kcache_header_puntYdispatch_engine_internalVdylanI(ds_, cache_, old_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:413
  MV_SET_COUNT(0);
  return(T4);
}

D Khandle_simple_call_site_cache_head_methods_computedYdispatch_engine_internalVdylanI (D ds_, D cache_, D old_) {
  D T3;
  D oengine_;
  D nengine_;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:313
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:316
  T3 = Kupgrade_to_basic_gf_cache_infoYdispatch_engine_internalVdylanI(cache_, ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:317
  Ktrack_cache_header_engine_nodeYdispatch_engine_internalVdylanI(old_, T3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:318
  T7 = SLOT_VALUE_INITD(old_, 3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:318
  if (T7 != &KPfalseVKi) {
    oengine_ = T7;
  } else {
    oengine_ = Dabsent_engine_nodeVKg;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:318
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:319
  nengine_ = Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI(ds_, oengine_, &Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylan);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:320
  T8 = KEEVKdI(oengine_, nengine_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:320
  if (T8 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:321
    T9 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:321
    Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(old_, nengine_, T9);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
    T10 = primitive_idQ(nengine_,oengine_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
    if (T10 != &KPfalseVKi) {
      T11 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
      T13 = primitive_idQ(oengine_,Dabsent_engine_nodeVKg);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
      T12 = primitive_not(T13);
      T11 = T12;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
    if (T11 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
      Ksubst_engine_node_1Ydispatch_engine_internalVdylanI(nengine_, oengine_, ds_);
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:322
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:320
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:324
  T6_0 = nengine_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:313
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kupgrade_to_basic_gf_cache_infoYdispatch_engine_internalVdylanI (D old_, D ds_) {
  D T3;
  D new_;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22_0;
  D T23;
  D T24_0;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  D T29;
  _KLsimple_object_vectorGVKd_1 T30 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T31_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:208
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:211
  T13 = primitive_not(old_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:211
  if (old_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:211
    T14 = primitive_idQ(old_,(D) 1);
    T3 = T14;
  } else {
    T3 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:211
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:210
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T15 = SLOT_VALUE(&KLgf_cache_infoGVKg, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T17 = SLOT_VALUE_INITD(T15, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T18 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T19 = primitive_machine_word_logand(T18,262140);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T20 = primitive_machine_word_add_signal_overflow(5,T19);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T21 = primitive_machine_word_shift_right(T20,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T23 = SLOT_VALUE_INITD(T15, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T24_0 = T23;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T22_0 = T24_0;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T25 = T22_0;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T26 = primitive_machine_word_shift_right(T19,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:213
    T16 = primitive_object_allocate_filled(T21,T25,T26,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:212
    new_ = T16;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:214
    Kupgrade_gf_cache_infoXYdispatch_engine_internalVdylanI(new_, ds_, &KPfalseVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:215
    T27 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:215
    SLOT_VALUE_SETTER(new_, T27, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:215
    T5_0 = new_;
    T10_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:216
    T28 = primitive_instanceQ(old_,&KLintegerGVKd);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:210
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:316
      T11 = old_;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:217
      T6_0 = Kupgrade_to_simple_typechecked_gf_cache_infoYdispatch_engine_internalVdylanI(T11, ds_);
      T9_0 = T6_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:218
      T29 = primitive_instanceQ(old_,&KLgf_cache_infoGVKg);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:210
      if (T29 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:316
        T12 = old_;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:219
        T7_0 = T12;
        T8_0 = T7_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:221
        T30.vector_element_[0] = old_;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:221
        T31_0 = KerrorVKdMM1I(&K14, &T30);
        T8_0 = T31_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:210
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:210
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:210
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:208
  MV_SET_COUNT(1);
  return(T10_0);
}

D Ktrack_cache_header_engine_nodeYdispatch_engine_internalVdylanI (D e_, D c_) {
  D T2;
  D T3;
  D nv_;
  DWORD iF5T, iF5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD iF16T, iF16;
  D T17;
  D T18;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:110
  T2 = SLOT_VALUE_INITD(c_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:111
  T3 = SLOT_VALUE_INITD(T2, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:123
  iF16T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:123
    iF16 = iF16T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:119
    T18 = primitive_cast_raw_as_integer(iF16);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:113
    T6 = primitive_idQ(T18,T3);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:113
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:114
      T7 = primitive_cast_integer_as_raw(T3);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:114
      T8 = primitive_machine_word_add_signal_overflow(T7,16);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:114
      T9 = primitive_cast_raw_as_integer(T8);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:114
      nv_ = KPmake_simple_vectorVKgI(T9, &KPfalseVKi);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
      iF5T = 1;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
        iF5 = iF5T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
        T10 = primitive_machine_word_less_thanQ(iF5,T7);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
        if (T10 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
          T11 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 1, iF5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T11, nv_, 1, iF5);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
          T12 = primitive_machine_word_add_signal_overflow(iF5,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
          iF5T = T12;
          goto L1;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:115
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:116
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(e_, nv_, 1, T7);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:117
      SLOT_VALUE_SETTER(nv_, c_, 0);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:119
      T13 = REPEATED_D_SLOT_VALUE_TAGGED(T2, 1, iF16);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:120
      if (T13 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:122
        T14 = primitive_idQ(T13,e_);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:120
        if (T14 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:123
          T15 = primitive_machine_word_add_signal_overflow(iF16,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:123
          iF16T = T15;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:120
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:121
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(e_, T2, 1, iF16);
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:120
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:113
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:123
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:127
  T17 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:108
  MV_SET_COUNT(0);
  return(T17);
}

D Kupgrade_gf_cache_infoXYdispatch_engine_internalVdylanI (D new_, D ds_, D users_) {
  D T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:199
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:203
  if (users_ != &KPfalseVKi) {
    T3 = users_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:203
    T5_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, (D) 17);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:203
    T6 = T5_0;
    T3 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:203
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:203
  CALL2(&Kgf_cache_info_users_setterVKg, T3, new_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:204
  SLOT_VALUE_SETTER(new_, ds_, 6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:204
  T4 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:199
  MV_SET_COUNT(0);
  return(T4);
}

D Kupgrade_to_simple_typechecked_gf_cache_infoYdispatch_engine_internalVdylanI (D old_, D ds_) {
  D T2_0;
  D new_;
  D T4;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16_0;
  D T17;
  D T18_0;
  D T19;
  DWORD T20;
  D T21;
  D T22;
  _KLsimple_object_vectorGVKd_1 T23 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:242
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:244
  T8 = primitive_instanceQ(old_,&KLsimple_typechecked_gf_cache_infoGVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:244
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:217
    T7 = old_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:245
    T2_0 = T7;
    T6_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T9 = SLOT_VALUE(&KLsimple_typechecked_gf_cache_infoGVKg, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T11 = SLOT_VALUE_INITD(T9, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T12 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T13 = primitive_machine_word_logand(T12,262140);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T14 = primitive_machine_word_add_signal_overflow(5,T13);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T15 = primitive_machine_word_shift_right(T14,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T17 = SLOT_VALUE_INITD(T9, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T18_0 = T17;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T16_0 = T18_0;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T19 = T16_0;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T20 = primitive_machine_word_shift_right(T13,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:248
    T10 = primitive_object_allocate_filled(T15,T19,T20,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:247
    new_ = T10;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
    T21 = primitive_instanceQ(old_,&KLintegerGVKd);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
    if (T21 != &KPfalseVKi) {
      T4 = T21;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
      T22 = primitive_instanceQ(old_,&K15);
      T4 = T22;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:251
      Kupgrade_simple_typechecked_gf_cache_infoXYdispatch_engine_internalVdylanI(new_, ds_, old_, &KPfalseVKi, &KPfalseVKi);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
      T23.vector_element_[0] = old_;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
      KerrorVKdMM1I(&K17, &T23);
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:249
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:253
    T24 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:253
    SLOT_VALUE_SETTER(new_, T24, 2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:253
    T5_0 = new_;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:244
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:242
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kupgrade_simple_typechecked_gf_cache_infoXYdispatch_engine_internalVdylanI (D new_, D ds_, D argmask_, D entries_, D users_) {
  D T5;
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
  D T16;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:226
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:232
  Kupgrade_gf_cache_infoXYdispatch_engine_internalVdylanI(new_, ds_, users_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:233
  if (argmask_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:232
    T12 = argmask_;
    T6 = T12;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:233
    T10 = SLOT_VALUE(ds_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:233
    T11 = SLOT_VALUE(ds_, 5);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:233
    T5 = Kcompute_typecheckable_argument_maskYdispatch_engine_internalVdylanI(T10, T11);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:233
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:234
  SLOT_VALUE_SETTER(T6, new_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:236
  if (entries_ != &KPfalseVKi) {
    T8 = entries_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:237
    T7 = Kcompress_maskVKgI(T6, T6);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:237
    T13 = primitive_cast_integer_as_raw(T7);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:237
    T14 = primitive_machine_word_logxor(T13,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:237
    T15 = primitive_machine_word_add_signal_overflow(5,T14);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:237
    T16 = primitive_cast_raw_as_integer(T15);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:236
    T17 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T16);
    T8 = T17;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:236
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:235
  CALL2(&Ksimple_typechecked_gf_cache_info_entries_setterVKg, T8, new_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:235
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:226
  MV_SET_COUNT(0);
  return(T9);
}

D Kcompute_typecheckable_argument_maskYdispatch_engine_internalVdylanI (D gf_, D headed_methods_) {
  D T2;
  D T3;
  D T4;
  D T5_0;
  D meths_;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D mF23;
  D next_lF24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  D T33;
  DWORD argnumF34;
  DWORD bitzF35;
  D mF36;
  D next_lF37;
  D T38;
  D T39;
  D T40;
  D T41;
  D T42;
  DWORD T43;
  D T44;
  DWORD T45;
  DWORD T46;
  DWORD T47;
  D T48;
  DWORD T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  D shiftF53;
  D T54;
  D T55;
  D T56;
  DWORD mx_;
  DWORD T58;
  DWORD T59;
  D T60;
  D T61;
  DWORD T62;
  D T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  DWORD T69;
  DWORD T70;
  DWORD T71;
  DWORD T72;
  DWORD T73;
  D T74;
  D T75;
  D T76;
  D lF77T, lF77;
  DWORD T78;
  D T79;
  DWORD argnumF80;
  DWORD bitzF81;
  D T82;
  DWORD argnumF83T, argnumF83;
  DWORD bitzF84T, bitzF84;
  D T85;
  D T86;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:154
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
  T2 = Tcall_site_caches_enabledQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
  T10 = primitive_not(T2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
    T3 = Kgeneric_function_sealedQVKeI(gf_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
    T11 = primitive_not(T3);
    T4 = T11;
  } else {
    T4 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:157
    T5_0 = (D) 1;
    T9_0 = T5_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:159
    T12 = SLOT_VALUE_INITD(headed_methods_, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:159
    meths_ = T12;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    T13 = SLOT_VALUE_INITD(gf_, 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    T14 = SLOT_VALUE_INITD(T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    T15 = primitive_cast_integer_as_raw(T14);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    T16 = primitive_machine_word_logand(T15,1020);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    T17 = primitive_machine_word_logior(T16,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    T18 = primitive_cast_raw_as_integer(T17);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    T20 = primitive_machine_word_less_thanQ(T17,33);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    if (T20 != &KPfalseVKi) {
      T19 = T18;
    } else {
      T19 = (D) 33;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:160
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:162
    T21 = primitive_idQ(meths_,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:162
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:163
      T7_0 = (D) 1;
      T8_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:173
      argnumF83T = 1;
      bitzF84T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:184
        argnumF83 = argnumF83T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:184
        bitzF84 = bitzF84T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
        argnumF80 = argnumF83;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
        bitzF81 = bitzF84;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:173
        argnumF34 = argnumF80;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:173
        T85 = primitive_cast_raw_as_integer(argnumF34);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:173
        bitzF35 = bitzF81;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
        T86 = primitive_cast_raw_as_integer(bitzF35);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:166
        T28 = primitive_idQ(T85,T19);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:166
        if (T28 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:167
          T22 = T86;
          MV_SET_ELT(0, T86);
          MV_SET_COUNT(1);
          T27 = T22;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:169
          T29 = SLOT_VALUE_INITD(meths_, 0);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:169
          mF23 = T29;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:170
          T30 = SLOT_VALUE_INITD(meths_, 1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:170
          next_lF24 = T30;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:171
          T25 = KPmethod_specializerVKgI(mF23, T85);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:172
          T31 = primitive_idQ(T25,&KLobjectGVKd);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:172
          if (T31 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:173
            T32 = primitive_machine_word_add_signal_overflow(argnumF34,4);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:173
            argnumF83T = T32;
            bitzF84T = bitzF81;
            goto L0;
            T26 = T33;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:182
            lF77T = next_lF24;
          L1: ;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:182
              lF77 = lF77T;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:176
              T42 = primitive_idQ(lF77,&KPempty_listVKi);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:176
              if (T42 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                T43 = primitive_machine_word_add_signal_overflow(argnumF34,4);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                T44 = primitive_machine_word_less_thanQ(argnumF34,1);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                if (T44 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T45 = primitive_machine_word_logxor(argnumF34,1);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T46 = primitive_machine_word_negative_signal_overflow(T45);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T47 = primitive_machine_word_logior(T46,1);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T48 = primitive_machine_word_less_thanQ(T47,257);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  if (T48 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T50 = primitive_machine_word_shift_right(T46,2);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T49 = primitive_machine_word_shift_right(5,T50);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T51 = primitive_machine_word_logand(T49,-4);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T52 = primitive_machine_word_logior(T51,1);
                    T71 = T52;
                  } else {
                    T71 = 1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T72 = T71;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T61 = primitive_machine_word_less_thanQ(argnumF34,257);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  if (T61 != &KPfalseVKi) {
                    T60 = T85;
                  } else {
                    T60 = (D) 257;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  shiftF53 = T60;
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  mx_ = 4;
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T56 = shiftF53;
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T62 = primitive_cast_integer_as_raw(T56);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T63 = primitive_machine_word_equalQ(T62,257);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  if (T63 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    shiftF53 = (D) 129;
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T55 = shiftF53;
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T59 = mx_;
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T66 = primitive_cast_integer_as_raw(T55);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T65 = primitive_machine_word_shift_right(T66,2);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    T64 = primitive_machine_word_shift_left_signal_overflow(T59,T65);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                    mx_ = T64;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T54 = shiftF53;
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T58 = mx_;
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T69 = primitive_cast_integer_as_raw(T54);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T68 = primitive_machine_word_shift_right(T69,2);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T67 = primitive_machine_word_shift_left_signal_overflow(T58,T68);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                  T70 = primitive_machine_word_logior(T67,1);
                  T72 = T70;
                }
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                T73 = primitive_machine_word_logior(T72,bitzF35);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:177
                argnumF83T = T43;
                bitzF84T = T73;
                goto L0;
                T41 = T79;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:179
                T74 = SLOT_VALUE_INITD(lF77, 0);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:179
                mF36 = T74;
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:180
                T75 = SLOT_VALUE_INITD(lF77, 1);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:180
                next_lF37 = T75;
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:181
                T38 = KPmethod_specializerVKgI(mF36, T85);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:181
                T39 = Ksame_specializerQVKgI(T25, T38);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:181
                if (T39 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:182
                  lF77T = next_lF37;
                  goto L1;
                  T40 = T76;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:184
                  T78 = primitive_machine_word_add_signal_overflow(argnumF34,4);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:184
                  argnumF83T = T78;
                  bitzF84T = bitzF35;
                  goto L0;
                  T40 = T82;
                }
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:181
                T41 = T40;
              }
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:176
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:182
            T26 = T41;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:172
          T27 = T26;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:166
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:173
      T8_0 = T27;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:162
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:156
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:154
  MV_SET_COUNT(1);
  return(T9_0);
}

D Kensure_engine_for_simple_typechecked_gf_cacheYdispatch_engine_internalVdylanI (D checkedmask_, D ds_) {
  D cache_;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D masque_so_far_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  _KLsimple_object_vectorGVKd_1 T15 = {&KLsimple_object_vectorGVKdW, (D) 5};
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  _KLsimple_object_vectorGVKd_2 T23 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T24;
  D T25;
  D T26;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:541
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:543
  T10 = SLOT_VALUE_INITD(ds_, 6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:543
  cache_ = T10;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:544
  T11 = SLOT_VALUE_INITD(cache_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:545
  T12 = SLOT_VALUE_INITD(cache_, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:546
  T13 = SLOT_VALUE_INITD(T12, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:548
  T14 = primitive_idQ(T11,checkedmask_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:548
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:549
    T15.vector_element_[0] = T11;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:549
    T3 = KlistVKdI(&T15);
    T5 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T16 = primitive_cast_integer_as_raw(checkedmask_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T17 = primitive_machine_word_lognot(T16);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T18 = primitive_machine_word_logand(T17,-4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T19 = primitive_machine_word_logior(T18,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T20 = primitive_cast_integer_as_raw(T11);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T21 = primitive_machine_word_logand(T20,T19);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T22 = primitive_cast_raw_as_integer(T21);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T23.vector_element_[0] = checkedmask_;
    T23.vector_element_[1] = T22;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:551
    T4 = KlistVKdI(&T23);
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:548
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:547
  SLOT_VALUE_SETTER(T5, ds_, 4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:553
  T24 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:553
  Kcompute_dispatch_from_rootYdispatch_engine_internalVdylanI(ds_, T24);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:547
  T6 = &KloseF33;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:547
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:564
  masque_so_far_ = MAKE_D_CELL((D) 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:565
  T7 = MAKE_CLOSURE(&KwalkF28, 6);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:565
  INIT_CLOSURE(T7, 6, T13, T12, T11, masque_so_far_, T6, ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:587
  T25 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:587
  T26 = SLOT_VALUE_INITD(T25, 5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:587
  get_teb()->function = T7;
  T8 = KwalkF28I(ds_, T26, T7);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:541
  return(T8);
}

D Kfind_or_install_simple_typechecked_cacheYdispatch_engine_internalVdylanI (D idx_, D argmask_, D checkedmask_, D cachev_, D proto_, D gf_) {
  D T7;
  D target_;
  D argnum_;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D Utmp_;
  D T16;
  D T17;
  DWORD T18;
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
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D shiftF39;
  D T40;
  D T41;
  D T42;
  DWORD mxF43;
  DWORD T44;
  DWORD T45;
  D T46;
  D T47;
  DWORD T48;
  D T49;
  DWORD T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
  D T61;
  DWORD T62;
  DWORD T63;
  D T64;
  D T65;
  D T66;
  DWORD T67;
  DWORD T68;
  D T69;
  DWORD T70;
  D T71;
  D T72;
  DWORD T73;
  DWORD T74;
  DWORD T75;
  D T76;
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
  D T88;
  D T89;
  DWORD T90;
  D T91;
  DWORD T92;
  DWORD T93;
  DWORD T94;
  DWORD T95;
  DWORD T96;
  DWORD T97;
  DWORD T98;
  DWORD T99;
  DWORD T100;
  DWORD T101;
  DWORD T102;
  D T103;
  D eQ_;
  D T105;
  DWORD T106;
  DWORD T107;
  DWORD T108;
  DWORD T109;
  D T110;
  DWORD mF111;
  DWORD bitnumF112;
  D firstargnumF113;
  DWORD T114;
  DWORD T115;
  DWORD T116;
  DWORD T117;
  D T118;
  DWORD mF119T, mF119;
  DWORD bitnumF120T, bitnumF120;
  D firstargnumF121T, firstargnumF121;
  D T122;
  DWORD T123;
  D T124;
  D T125;
  DWORD T126;
  DWORD T127;
  D T128;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:497
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:503
  Utmp_ = KelementVKdMM11I(cachev_, idx_, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:503
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:503
    T7 = Utmp_;
    MV_SET_ELT(0, Utmp_);
    MV_SET_COUNT(1);
    T14 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:505
    T16 = primitive_idQ(argmask_,checkedmask_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:505
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:506
      T17 = KerrorVKdMM1I(&K22, &KPempty_vectorVKi);
      T12 = T17;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
      T123 = primitive_cast_integer_as_raw(argmask_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
      mF119T = T123;
      bitnumF120T = 1;
      firstargnumF121T = &KPfalseVKi;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
        mF119 = mF119T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
        bitnumF120 = bitnumF120T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
        firstargnumF121 = firstargnumF121T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
        mF111 = mF119;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
        T122 = primitive_cast_raw_as_integer(mF111);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
        bitnumF112 = bitnumF120;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
        T124 = primitive_cast_raw_as_integer(bitnumF112);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
        firstargnumF113 = firstargnumF121;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:515
        T27 = primitive_idQ(T122,(D) 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:515
        if (T27 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:516
          if (firstargnumF113 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:516
            T29 = firstargnumF113;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T59 = primitive_cast_integer_as_raw(T29);
            T18 = T59;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:516
            T28 = KerrorVKdMM1I(&K23, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T60 = primitive_cast_integer_as_raw(T28);
            T18 = T60;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:516
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
          T61 = primitive_cast_raw_as_integer(T18);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
          T30 = primitive_machine_word_less_thanQ(T18,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
          if (T30 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T31 = primitive_machine_word_logxor(T18,1);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T32 = primitive_machine_word_negative_signal_overflow(T31);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T33 = primitive_machine_word_logior(T32,1);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T34 = primitive_machine_word_less_thanQ(T33,257);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            if (T34 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T36 = primitive_machine_word_shift_right(T32,2);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T35 = primitive_machine_word_shift_right(5,T36);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T37 = primitive_machine_word_logand(T35,-4);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T38 = primitive_machine_word_logior(T37,1);
              T57 = T38;
            } else {
              T57 = 1;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T58 = T57;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T47 = primitive_machine_word_less_thanQ(T18,257);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            if (T47 != &KPfalseVKi) {
              T46 = T61;
            } else {
              T46 = (D) 257;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            shiftF39 = T46;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            mxF43 = 4;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T42 = shiftF39;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T48 = primitive_cast_integer_as_raw(T42);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T49 = primitive_machine_word_equalQ(T48,257);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            if (T49 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              shiftF39 = (D) 129;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T41 = shiftF39;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T45 = mxF43;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T52 = primitive_cast_integer_as_raw(T41);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T51 = primitive_machine_word_shift_right(T52,2);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              T50 = primitive_machine_word_shift_left_signal_overflow(T45,T51);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
              mxF43 = T50;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T40 = shiftF39;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T44 = mxF43;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T55 = primitive_cast_integer_as_raw(T40);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T54 = primitive_machine_word_shift_right(T55,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T53 = primitive_machine_word_shift_left_signal_overflow(T44,T54);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
            T56 = primitive_machine_word_logior(T53,1);
            T58 = T56;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
          T62 = primitive_cast_integer_as_raw(checkedmask_);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
          T63 = primitive_machine_word_logior(T58,T62);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:517
          T64 = primitive_cast_raw_as_integer(T63);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:518
          T19 = Kcompress_maskVKgI(argmask_, T64);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:519
          T20 = Kfind_or_install_simple_typechecked_cacheYdispatch_engine_internalVdylanI(T19, argmask_, T64, cachev_, proto_, gf_);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:519
          T65 = T20;
          MV_SET_ELT(0, T20);
          MV_SET_ELT(1, T61);
          MV_SET_COUNT(2);
          T26 = T65;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
          T66 = primitive_machine_word_logbitQ(2,mF111);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
          if (T66 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
            T67 = primitive_machine_word_add_signal_overflow(bitnumF112,8);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
            T68 = primitive_cast_integer_as_raw(checkedmask_);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
            T70 = primitive_machine_word_shift_right(T67,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
            T69 = primitive_machine_word_logbitQ(T70,T68);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
            T71 = primitive_not(T69);
            T21 = T71;
          } else {
            T21 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:522
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:515
          if (T21 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
            T72 = primitive_machine_word_less_thanQ(bitnumF112,1);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
            if (T72 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T73 = primitive_machine_word_logxor(bitnumF112,1);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T74 = primitive_machine_word_negative_signal_overflow(T73);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T75 = primitive_machine_word_logior(T74,1);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T76 = primitive_machine_word_less_thanQ(T75,257);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              if (T76 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T78 = primitive_machine_word_shift_right(T74,2);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T77 = primitive_machine_word_shift_right(5,T78);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T79 = primitive_machine_word_logand(T77,-4);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T80 = primitive_machine_word_logior(T79,1);
                T99 = T80;
              } else {
                T99 = 1;
              }
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T100 = T99;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T89 = primitive_machine_word_less_thanQ(bitnumF112,257);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              if (T89 != &KPfalseVKi) {
                T88 = T124;
              } else {
                T88 = (D) 257;
              }
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              shiftF81 = T88;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              mxF85 = 4;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T84 = shiftF81;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T90 = primitive_cast_integer_as_raw(T84);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T91 = primitive_machine_word_equalQ(T90,257);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              if (T91 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                shiftF81 = (D) 129;
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T83 = shiftF81;
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T87 = mxF85;
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T94 = primitive_cast_integer_as_raw(T83);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T93 = primitive_machine_word_shift_right(T94,2);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                T92 = primitive_machine_word_shift_left_signal_overflow(T87,T93);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
                mxF85 = T92;
              }
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T82 = shiftF81;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T86 = mxF85;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T97 = primitive_cast_integer_as_raw(T82);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T96 = primitive_machine_word_shift_right(T97,2);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T95 = primitive_machine_word_shift_left_signal_overflow(T86,T96);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
              T98 = primitive_machine_word_logior(T95,1);
              T100 = T98;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
            T101 = primitive_cast_integer_as_raw(checkedmask_);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
            T102 = primitive_machine_word_logior(T100,T101);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:524
            T103 = primitive_cast_raw_as_integer(T102);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:523
            T22 = Kcompress_maskVKgI(argmask_, T103);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:523
            eQ_ = KelementVKdMM11I(cachev_, T22, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:525
            if (eQ_ != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:526
              T105 = eQ_;
              MV_SET_ELT(0, eQ_);
              MV_SET_ELT(1, T124);
              MV_SET_COUNT(2);
              T24 = T105;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
              T106 = primitive_machine_word_shift_right(mF111,1);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
              T107 = primitive_machine_word_logand(T106,-4);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
              T108 = primitive_machine_word_logior(T107,1);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
              T109 = primitive_machine_word_add_signal_overflow(bitnumF112,4);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
              if (firstargnumF113 != &KPfalseVKi) {
                T23 = firstargnumF113;
              } else {
                T23 = T124;
              }
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
              mF119T = T108;
              bitnumF120T = T109;
              firstargnumF121T = T23;
              goto L0;
              T24 = T110;
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:525
            T25 = T24;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
            T114 = primitive_machine_word_shift_right(mF111,1);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
            T115 = primitive_machine_word_logand(T114,-4);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
            T116 = primitive_machine_word_logior(T115,1);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
            T117 = primitive_machine_word_add_signal_overflow(bitnumF112,4);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:531
            mF119T = T116;
            bitnumF120T = T117;
            firstargnumF121T = firstargnumF113;
            goto L0;
            T25 = T118;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:515
          T26 = T25;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:515
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:528
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:512
      target_ = T26;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:512
      argnum_ = MV_GET_ELT(1);
;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:536
      T10 = KPmethod_specializerVKgI(proto_, argnum_);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:536
      T11 = Kmake_typecheck_discriminatorVKgI(argnum_, gf_, T10, target_);
      T12 = T11;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:505
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
    T125 = SLOT_VALUE_INITD(cachev_, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
    T126 = primitive_cast_integer_as_raw(idx_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
    T127 = primitive_cast_integer_as_raw(T125);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
    T128 = primitive_machine_word_unsigned_less_thanQ(T126,T127);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
    if (T128 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T12, cachev_, 1, T126);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
      Kelement_range_errorVKeI(cachev_, idx_);
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:504
    T13 = T12;
    MV_SET_ELT(0, T12);
    MV_SET_COUNT(1);
    T14 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:503
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:497
  return(T14);
}

static D KloseF33I (D implicit_argumentF27, D implicit_argumentF26, D ds_, D desc_, D datum_) {
  D i_T, i_;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  DWORD T12;
  DWORD T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  D T18;
  DWORD T19;
  D T20;
  D T21;
  _KLsimple_object_vectorGVKd_4 T22 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T23;
  _KLsimple_object_vectorGVKd_4 T24 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:547
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:555
  T10 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:556
  T11 = SLOT_VALUE_INITD(T10, 5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
  i_T = (D) 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
    T12 = primitive_cast_integer_as_raw(i_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
    T13 = primitive_cast_integer_as_raw(implicit_argumentF27);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
    T14 = primitive_machine_word_less_thanQ(T12,T13);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
      T15 = KelementVKdMM11I(implicit_argumentF26, i_, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
      if (T15 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
        T16 = SLOT_VALUE_INITD(implicit_argumentF26, 0);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
        T17 = primitive_cast_integer_as_raw(T16);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
        T18 = primitive_machine_word_unsigned_less_thanQ(T12,T17);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
        if (T18 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T11, implicit_argumentF26, 1, T12);
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
          Kelement_range_errorVKeI(implicit_argumentF26, i_);
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
      T19 = primitive_machine_word_add_signal_overflow(T12,4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
      T20 = primitive_cast_raw_as_integer(T19);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
      i_T = T20;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:557
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:560
  T21 = SLOT_VALUE(ds_, 2);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:560
  T7 = Kreconstruct_args_from_mepargsVKeI(T10, T21);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:560
  T22.vector_element_[0] = T10;
  T22.vector_element_[1] = T7;
  T22.vector_element_[2] = desc_;
  T22.vector_element_[3] = datum_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:560
  T23 = primitive_copy_vector(&T22);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:558
  T24.vector_element_[0] = &KJformat_string_;
  T24.vector_element_[1] = &K34;
  T24.vector_element_[2] = &KJformat_arguments_;
  T24.vector_element_[3] = T23;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:558
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T8 = CONGRUENT_CALL2(&KLsimple_warningGVKd, &T24);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:558
  T9 = KdispwarnYdispatch_engine_internalVdylanI(T8, ds_);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:547
  return(T9);
}

static D KwalkF28I (D ds_, D x_, D callback_) {
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
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23;
  D shiftF24;
  D T25;
  D T26;
  D T27;
  DWORD mxF28;
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
  DWORD T40;
  DWORD T41;
  D T42;
  D T43;
  DWORD T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  D T52;
  DWORD T53;
  DWORD T54;
  DWORD T55;
  D T56;
  DWORD T57;
  DWORD T58;
  DWORD T59;
  DWORD T60;
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
  DWORD T79;
  DWORD T80;
  DWORD T81;
  DWORD T82;
  D T83;
  D T84;
  D T85;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:565
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:566
  T12 = GET_D_CELL_VAL(CREF(3));
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
  T3 = Kcompress_maskVKgI(CREF(2), T12);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
  T14 = SLOT_VALUE_INITD(CREF(1), 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
  T15 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
  T16 = primitive_cast_integer_as_raw(T14);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
  T17 = primitive_machine_word_unsigned_less_thanQ(T15,T16);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(x_, CREF(1), 1, T15);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
    Kelement_range_errorVKeI(CREF(1), T3);
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:567
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:570
  T18 = primitive_instanceQ(x_,&KLdiscriminatorGVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:570
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:486
    T13 = x_;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T19 = SLOT_VALUE_INITD(T13, 0);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T20 = primitive_cast_integer_as_raw(T19);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T21 = primitive_machine_word_shift_right(T20,6);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T22 = primitive_machine_word_logand(T21,-4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T23 = primitive_machine_word_logior(T22,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    shiftF24 = (D) 33;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    mxF28 = 4;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T27 = shiftF24;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T31 = primitive_cast_integer_as_raw(T27);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T32 = primitive_machine_word_equalQ(T31,257);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
      shiftF24 = (D) 129;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
      T26 = shiftF24;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
      T30 = mxF28;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
      T35 = primitive_cast_integer_as_raw(T26);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
      T34 = primitive_machine_word_shift_right(T35,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
      T33 = primitive_machine_word_shift_left_signal_overflow(T30,T34);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
      mxF28 = T33;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T25 = shiftF24;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T29 = mxF28;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T38 = primitive_cast_integer_as_raw(T25);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T37 = primitive_machine_word_shift_right(T38,2);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T36 = primitive_machine_word_shift_left_signal_overflow(T29,T37);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T39 = primitive_machine_word_logior(T36,1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T40 = primitive_machine_word_subtract_signal_overflow(T39,4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T41 = primitive_machine_word_logand(T23,T40);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:572
    T42 = primitive_cast_raw_as_integer(T41);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
    T43 = primitive_machine_word_less_thanQ(T41,33);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
    if (T43 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
      T44 = primitive_machine_word_add_signal_overflow(T41,8);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
      T45 = primitive_cast_integer_as_raw(CREF(2));
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
      T47 = primitive_machine_word_shift_right(T44,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
      T46 = primitive_machine_word_logbitQ(T47,T45);
      T4 = T46;
    } else {
      T4 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
      T48 = primitive_machine_word_add_signal_overflow(T41,8);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
      T49 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
      T51 = primitive_machine_word_shift_right(T48,2);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
      T50 = primitive_machine_word_logbitQ(T51,T49);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
      if (T50 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
        T52 = primitive_machine_word_less_thanQ(T41,1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
        if (T52 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T53 = primitive_machine_word_logxor(T41,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T54 = primitive_machine_word_negative_signal_overflow(T53);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T55 = primitive_machine_word_logior(T54,1);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T56 = primitive_machine_word_less_thanQ(T55,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          if (T56 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T58 = primitive_machine_word_shift_right(T54,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T57 = primitive_machine_word_shift_right(5,T58);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T59 = primitive_machine_word_logand(T57,-4);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T60 = primitive_machine_word_logior(T59,1);
            T79 = T60;
          } else {
            T79 = 1;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T80 = T79;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T69 = primitive_machine_word_less_thanQ(T41,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          if (T69 != &KPfalseVKi) {
            T68 = T42;
          } else {
            T68 = (D) 257;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          shiftF61 = T68;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          mxF65 = 4;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T64 = shiftF61;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T70 = primitive_cast_integer_as_raw(T64);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T71 = primitive_machine_word_equalQ(T70,257);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          if (T71 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            shiftF61 = (D) 129;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T63 = shiftF61;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T67 = mxF65;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T74 = primitive_cast_integer_as_raw(T63);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T73 = primitive_machine_word_shift_right(T74,2);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            T72 = primitive_machine_word_shift_left_signal_overflow(T67,T73);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
            mxF65 = T72;
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T62 = shiftF61;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T66 = mxF65;
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T77 = primitive_cast_integer_as_raw(T62);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T76 = primitive_machine_word_shift_right(T77,2);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T75 = primitive_machine_word_shift_left_signal_overflow(T66,T76);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
          T78 = primitive_machine_word_logior(T75,1);
          T80 = T78;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
        T81 = primitive_cast_integer_as_raw(T12);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
        T82 = primitive_machine_word_logior(T81,T80);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
        T83 = primitive_cast_raw_as_integer(T82);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
        SET_D_CELL_VAL(CREF(3), T83);
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:574
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:575
      T5 = Kwalk_existing_dispatch_engineYdispatch_engine_internalVdylanI(ds_, T13, callback_);
      T9 = T5;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:576
      T84 = primitive_idQ(T12,CREF(2));
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
      if (T84 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:580
        T7 = T13;
        MV_SET_ELT(0, T13);
        MV_SET_COUNT(1);
        T8 = T7;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:577
        KloseF33I(CREF(0), CREF(1), CREF(5), &K29, T42);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:578
        T6 = T13;
        MV_SET_ELT(0, T13);
        MV_SET_COUNT(1);
        T8 = T6;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
      T9 = T8;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:573
    T11 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:583
    T85 = primitive_idQ(T12,CREF(2));
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:583
    if (T85 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:583
      KloseF33I(CREF(0), CREF(1), CREF(5), &K30, x_);
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:583
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:584
    T10 = x_;
    MV_SET_ELT(0, x_);
    MV_SET_COUNT(1);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:570
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:565
  return(T11);
}

D Kcompute_headed_methods_under_domainYdispatch_engine_internalVdylanI (D ds_, D dom_) {
  D scu_;
  D T3T, T3;
  D m_;
  D T5;
  DWORD i_T, i_;
  D T7;
  D ptr_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17_0;
  D T18;
  D T19_0;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30;
  DWORD T31;
  D T32;
  DWORD T33;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:131
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:134
  T10 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:134
  SLOT_VALUE_SETTER(&KPfalseVKi, T10, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:134
  SLOT_VALUE_SETTER(&KPempty_listVKi, T10, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:135
  ptr_ = T10;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:136
  T11 = SLOT_VALUE(ds_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:137
  scu_ = Dempty_subjunctive_class_universeVKe;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
  T12 = SLOT_VALUE_INITD(T11, 4);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
  T3T = T12;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
    T3 = T3T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
    T13 = primitive_idQ(T3,&KPempty_listVKi);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
      T14 = SLOT_VALUE_INITD(T3, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
      m_ = T14;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:139
      T15 = Kdomain_disjointQVKeMM5I(dom_, m_, scu_, T11);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:139
      if (T15 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:140
        T16 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:140
        SLOT_VALUE_SETTER(m_, T16, 0);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:140
        SLOT_VALUE_SETTER(&KPempty_listVKi, T16, 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:141
        T9 = ptr_;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:141
        SLOT_VALUE_SETTER(T16, T9, 1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:142
        ptr_ = T16;
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:139
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
      T18 = SLOT_VALUE_INITD(T3, 1);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
      T19_0 = T18;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
      T17_0 = T19_0;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
      T20 = T17_0;
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
      T3T = T20;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:145
  SLOT_VALUE_SETTER(T10, ds_, 5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:146
  T21 = SLOT_VALUE_INITD(T11, 1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:146
  T22 = SLOT_VALUE_INITD(T21, 0);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:146
  T23 = primitive_cast_integer_as_raw(T22);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:146
  T24 = primitive_machine_word_logand(T23,1020);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:146
  T25 = primitive_machine_word_logior(T24,1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:146
  T26 = primitive_cast_raw_as_integer(T25);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:147
  T5 = KPmake_simple_vectorVKgI(T26, &KLobjectGVKd);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
  i_T = 1;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
    T28 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
    T27 = primitive_machine_word_less_thanQ(i_,T25);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      T29 = Kdomain_typeVKeMM4I(dom_, T28);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      T30 = SLOT_VALUE_INITD(T5, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      T31 = primitive_cast_integer_as_raw(T30);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      T32 = primitive_machine_word_unsigned_less_thanQ(i_,T31);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      if (T32 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T29, T5, 1, i_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
        Kelement_range_errorVKeI(T5, T28);
      }
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      T33 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
      i_T = T33;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:148
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:149
  SLOT_VALUE_SETTER(T5, ds_, 9);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:149
  T7 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:131
  MV_SET_COUNT(0);
  return(T7);
}

D Kfind_shareable_partial_dispatch_cache_headerYdispatch_engine_internalVdylanI (D old_, D cache_) {
  volatile D returnPexit_7_;
  volatile D T3;
  volatile DWORD T4T, T4;
  volatile D puntPexit_8_;
  volatile DWORD i_T, i_;
  volatile D T7;
  volatile D T8;
  volatile D T9_0;
  volatile D T10_0;
  volatile D T11_0;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile D T15;
  volatile DWORD T16;
  volatile D T17;
  volatile D T18;
  volatile D T19;
  volatile D T20;
  volatile _KLsimple_object_vectorGVKd_1 T21 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T22;
  volatile D T23;
  volatile DWORD T24;
  volatile D T25;
  volatile D T26;
  volatile D T27;
  volatile D T28;
  volatile _KLsimple_object_vectorGVKd_1 T29 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T30;
  volatile DWORD T31;
  volatile _KLsimple_object_vectorGVKd_1 T32 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T33;
  volatile DWORD T34;
  volatile D T35_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:345
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:348
  T13 = Tsharing_partial_dispatch_cache_headersQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:348
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:349
    ENTER_EXIT_FRAME(returnPexit_7_);
    if (nlx_setjmp(FRAME_DEST(returnPexit_7_))) {
        T9_0 = FRAME_RETVAL(returnPexit_7_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
      T14 = SLOT_VALUE_INITD(cache_, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
      T15 = SLOT_VALUE_INITD(T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
      T16 = primitive_cast_integer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
      T4T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
        T4 = T4T;
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
        T17 = primitive_machine_word_equalQ(T4,T16);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
        if (T17 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
          T18 = REPEATED_D_SLOT_VALUE_TAGGED(T14, 1, T4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:351
          T19 = primitive_instanceQ(T18,&KLpartial_dispatch_cache_header_engine_nodeGVKg);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:351
          if (T19 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:387
            T12 = T18;
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:353
            T20 = primitive_idQ(T12,old_);
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:353
            if (T20 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:354
              T21.vector_element_[0] = old_;
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:354
              T22 = MV_SET_REST_AT(&T21, 0);
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:354
              NLX(returnPexit_7_, T22);
            } else {
              // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:356
              ENTER_EXIT_FRAME(puntPexit_8_);
              if (nlx_setjmp(FRAME_DEST(puntPexit_8_))) {
              } else {
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                T23 = Kdomain_number_requiredVKeMM4I(T12);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                T24 = primitive_cast_integer_as_raw(T23);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                i_T = 1;
              L1: ;
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                  i_ = i_T;
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                  T26 = primitive_cast_raw_as_integer(i_);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                  T25 = primitive_machine_word_less_thanQ(i_,T24);
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                  if (T25 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:358
                    T27 = Kdomain_typeVKeMM4I(T12, T26);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:358
                    T28 = Kdomain_typeVKeMM4I(old_, T26);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:358
                    T7 = Ksame_specializerQVKgI(T27, T28);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:358
                    if (T7 == &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:359
                      T29.vector_element_[0] = &KPfalseVKi;
                      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:356
                      T30 = MV_SET_REST_AT(&T29, 0);
                      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:356
                      NLX(puntPexit_8_, T30);
                    }
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:358
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                    T31 = primitive_machine_word_add_signal_overflow(i_,4);
                    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                    i_T = T31;
                    goto L1;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:357
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:362
                T32.vector_element_[0] = T12;
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:349
                T33 = MV_SET_REST_AT(&T32, 0);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:349
                NLX(returnPexit_7_, T33);
                // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:356
                /* invalidate puntPexit_8_ */
              }
            }
            // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:353
          }
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:351
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
          T34 = primitive_machine_word_add_signal_overflow(T4,4);
          // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
          T4T = T34;
          goto L0;
        }
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
        T8 = &KPfalseVKi;
        MV_SET_ELT(0, &KPfalseVKi);
        MV_SET_COUNT(1);
        // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:350
      // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:349
    T9_0 = T8;
      /* invalidate returnPexit_7_ */
    }
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:349
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:349
    T35_0 = T9_0;
    T11_0 = T35_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:369
    T10_0 = &KPfalseVKi;
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:348
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:345
  MV_SET_COUNT(1);
  return(T11_0);
}

D Kfind_or_create_common_cache_headerYdispatch_engine_internalVdylanI (D gf_) {
  D T2_0;
  D T3;
  D new_;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:424
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:426
  T8 = SLOT_VALUE_INITD(gf_, 5);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:427
  T9 = primitive_instanceQ(T8,&KLcommon_root_cache_header_engine_nodeGVKg);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:427
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:446
    T7 = T8;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:428
    T2_0 = T7;
    T6_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:431
    T3 = Kbootstrap_typed_allocate_engine_nodeVKgI(&KLcommon_root_cache_header_engine_nodeGVKg, (D) 57, (D) 1);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:430
    new_ = T3;
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:434
    primitive_initialize_engine_node(new_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:435
    SLOT_VALUE_SETTER(gf_, new_, 4);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:436
    Kinstall_cache_header_engine_node_nextYdispatch_engine_internalVdylanI(new_, T8, gf_);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:437
    SLOT_VALUE_SETTER(new_, gf_, 5);
    // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:438
    T5_0 = new_;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:427
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:424
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kprofile_all_terminal_engine_nodesQ_setterVKgI (D wellQ_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:626
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:627
  T1 = Tprofile_all_terminal_engine_nodesQTYdispatch_engine_internalVdylan = wellQ_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:627
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:626
  return(T2);
}

D Kprofile_all_terminal_engine_nodesQVKgI () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:622
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:623
  T0 = Tprofile_all_terminal_engine_nodesQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:623
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:622
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kpartial_dispatch_megamorphic_puntQ_setterVKgI (D wellQ_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:59
  T1 = Tpartial_dispatch_megamorphic_puntQTYdispatch_engine_internalVdylan = wellQ_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:59
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:58
  return(T2);
}

D Kpartial_dispatch_megamorphic_puntQVKgI () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:54
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:55
  T0 = Tpartial_dispatch_megamorphic_puntQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:55
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:54
  MV_SET_COUNT(1);
  return(T1_0);
}

D Ksharing_partial_dispatch_cache_headersQ_setterVKgI (D wellQ_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:49
  T1 = Tsharing_partial_dispatch_cache_headersQTYdispatch_engine_internalVdylan = wellQ_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:49
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:48
  return(T2);
}

D Ksharing_partial_dispatch_cache_headersQVKgI () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:44
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:45
  T0 = Tsharing_partial_dispatch_cache_headersQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:45
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:44
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kpartial_dispatchQ_setterVKgMM0I (D value_, D x_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:34
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:35
  T3 = Tpartial_dispatchQTYdispatch_engine_internalVdylan = value_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:35
  T4 = T3;
  MV_SET_ELT(0, T3);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:34
  return(T4);
}

D Kcall_site_caches_enabledQ_setterVKgI (D wellQ_) {
  D T1;
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:15
  T1 = Tcall_site_caches_enabledQTYdispatch_engine_internalVdylan = wellQ_;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:15
  T2 = T1;
  MV_SET_ELT(0, T1);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:14
  return(T2);
}

D Kcall_site_caches_enabledQVKgI () {
  D T0;
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:11
  T0 = Tcall_site_caches_enabledQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:11
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:10
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kpartial_dispatchQVKgMM0I (D x_) {
  D T2;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:31
  T2 = Tpartial_dispatchQTYdispatch_engine_internalVdylan;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:31
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/dispatch-caches.dylan:30
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_dispatch_caches_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_dispatch_caches_for_user () {
  return;
}


/* eof */
