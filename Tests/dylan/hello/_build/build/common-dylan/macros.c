#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(51);
define__KLbyte_stringGVKd(20);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(21);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(19);
define__KLbyte_stringGVKd(0);

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
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

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
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

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
  D condition_format_string_;
  D condition_format_arguments_;
  D type_error_value_;
  D type_error_expected_type_;
} _KLtype_errorGVKd;

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
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
} _KLstringGVKd;

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
} _KLintegerGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Ksimple_profiling_moduleYdylan_userVcommon_dylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsymbolGVKd KJallocation_;
D KgethashVKiI (D, D, D, D);
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsymbolGVKd KJvalue_;
extern _KLsymbolGVKd KJtype_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLclassGVKd KLtype_errorGVKd;
extern _KLmm_wrapperGVKi_0 KLtype_errorGVKdW;
extern _KLsealed_generic_functionGVKe KerrorVKd;
D KputhashVKiI (D, D, D);
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern int write (int, DBSTR, unsigned long);
extern int fsync (int);
extern _KLclassGVKd KLstringGVKd;
extern _KLmm_wrapperGVKi_0 KLstringGVKdW;
D KmakeVKdMM33I (D, D, D, D);
D Kformat_outYsimple_ioVcommon_dylanI (D format_string_, D format_arguments_);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern D Dtable_entry_emptyVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kdo_with_profilingYcommon_dylan_internalsVcommon_dylan;
D Kdo_with_profilingYcommon_dylan_internalsVcommon_dylanI (D, D, D);
D Kstart_profilingYcommon_dylan_internalsVcommon_dylanI (D);
D Kstop_profilingYcommon_dylan_internalsVcommon_dylanI (D, D);
extern _KLincremental_generic_functionGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylan;
extern _KLsimple_methodGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylanMM0;
D Kstop_profiling_typeYsimple_profilingVcommon_dylanMM0I (D, D);
extern _KLsimple_methodGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylanMM1;
D Kstop_profiling_typeYsimple_profilingVcommon_dylanMM1I (D, D);
extern _KLsimple_methodGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylanMM2;
D Kstop_profiling_typeYsimple_profilingVcommon_dylanMM2I (D, D);
static _KLpairGVKd K12;
static _KLpairGVKd K13;
static _KLpairGVKd K14;
static _KLsignatureGVKe K15;
static _KLbyte_stringGVKd_19 K16;
static _KLsimple_object_vectorGVKd_2 K17;
static _KLsignatureGVKe K18;
static _KLsimple_object_vectorGVKd_2 K19;
static _KLsingletonGVKd K20;
static _KLsymbolGVKd KJallocation_stats_;
static _KLbyte_stringGVKd_16 K22;
static _KLsignatureGVKe K23;
static _KLsimple_object_vectorGVKd_2 K24;
static _KLsingletonGVKd K25;
static _KLsymbolGVKd KJcpu_profiling_;
static _KLsymbolGVKd KJcpu_time_seconds_;
static _KLsymbolGVKd KJcpu_time_microseconds_;
static _KLbyte_stringGVKd_21 K29;
static _KLbyte_stringGVKd_16 K30;
static _KLbyte_stringGVKd_13 K31;
static _KLsignatureGVKe K32;
static _KLsimple_object_vectorGVKd_2 K33;
extern _KLunionGVKe KLcpu_profiling_typeGYcommon_dylan_internalsVcommon_dylan;
static _KLsingletonGVKd K35;
static _KLsingletonGVKd K36;
extern _KLincremental_generic_functionGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylan;
extern _KLsimple_methodGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylanMM0;
D Kstart_profiling_typeYsimple_profilingVcommon_dylanMM0I (D, D);
extern _KLsimple_methodGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylanMM1;
D Kstart_profiling_typeYsimple_profilingVcommon_dylanMM1I (D, D);
extern _KLsimple_methodGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylanMM2;
D Kstart_profiling_typeYsimple_profilingVcommon_dylanMM2I (D, D);
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLpairGVKd K46;
static _KLbyte_stringGVKd_20 K47;
static _KLsignatureGVKe K48;
static _KLsimple_object_vectorGVKd_3 K49;
extern _KLincremental_generic_functionGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylan;
extern _KLkeyword_methodGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylanMM0;
D Kprofiling_type_resultYsimple_profilingVcommon_dylanMM0I (D, D, D);
extern _KLkeyword_methodGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylanMM1;
D Kprofiling_type_resultYsimple_profilingVcommon_dylanMM1I (D, D, D);
extern _KLkeyword_methodGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylanMM2;
D Kprofiling_type_resultYsimple_profilingVcommon_dylanMM2I (D, D, D, D);
static _KLpairGVKd K57;
static _KLpairGVKd K58;
static _KLpairGVKd K59;
static _KLkeyword_signatureGVKe K60;
static _KLbyte_stringGVKd_21 K61;
static _KLbyte_stringGVKd_51 K62;
static D Kinteger_as_rawF64I (D x_);
static _KLkeyword_signatureGVKe K65;
static _KLsimple_object_vectorGVKd_2 K66;
static _KLsymbolGVKd KJdescription_;
static _KLbyte_stringGVKd_11 K68;
static _KLsimple_object_vectorGVKd_1 K69;
static _KLkeyword_signatureAvaluesGVKi K70;
static _KLkeyword_signatureAvaluesGVKi K71;

/* Indirection variables */

static D IKJallocation_stats_ = &KJallocation_stats_;
static D IKJcpu_profiling_ = &KJcpu_profiling_;
static D IKJcpu_time_seconds_ = &KJcpu_time_seconds_;
static D IKJcpu_time_microseconds_ = &KJcpu_time_microseconds_;
static D IKJdescription_ = &KJdescription_;

/* Variables */

D Lprofiling_stateGYsimple_profilingVcommon_dylan = &KLobject_tableGVKd;
D start_profiling_typeYsimple_profilingVcommon_dylan = &Kstart_profiling_typeYsimple_profilingVcommon_dylan;
D stop_profiling_typeYsimple_profilingVcommon_dylan = &Kstop_profiling_typeYsimple_profilingVcommon_dylan;
D profiling_type_resultYsimple_profilingVcommon_dylan = &Kprofiling_type_resultYsimple_profilingVcommon_dylan;
D do_with_profilingYcommon_dylan_internalsVcommon_dylan = &Kdo_with_profilingYcommon_dylan_internalsVcommon_dylan;
D dylan_string_bufferYcommon_dylan_internalsVcommon_dylan = &KPunboundVKi;

/* Objects */

_KLsimple_methodGVKe Kdo_with_profilingYcommon_dylan_internalsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K48,
  &Kdo_with_profilingYcommon_dylan_internalsVcommon_dylanI
};

_KLincremental_generic_functionGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K15,
  (D) 1,
  &K16,
  &K12,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksimple_profiling_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K32,
  &Kstop_profiling_typeYsimple_profilingVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Kstop_profiling_typeYsimple_profilingVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kstop_profiling_typeYsimple_profilingVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &Kstop_profiling_typeYsimple_profilingVcommon_dylanMM2I
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &Kstop_profiling_typeYsimple_profilingVcommon_dylanMM0,
  &K13
};

static _KLpairGVKd K13 = {
  &KLpairGVKdW /* wrapper */,
  &Kstop_profiling_typeYsimple_profilingVcommon_dylanMM1,
  &K14
};

static _KLpairGVKd K14 = {
  &KLpairGVKdW /* wrapper */,
  &Kstop_profiling_typeYsimple_profilingVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLsignatureGVKe K15 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K17
};

static _KLbyte_stringGVKd_19 K16 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "stop-profiling-type"
};

static _KLsimple_object_vectorGVKd_2 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_tableGVKd,
  &KLsymbolGVKd
};

static _KLsignatureGVKe K18 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K19
};

static _KLsimple_object_vectorGVKd_2 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_tableGVKd,
  &K20
};

static _KLsingletonGVKd K20 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJallocation_stats_
};

static _KLsymbolGVKd KJallocation_stats_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K22
};

static _KLbyte_stringGVKd_16 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "allocation-stats"
};

static _KLsignatureGVKe K23 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K24
};

static _KLsimple_object_vectorGVKd_2 K24 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_tableGVKd,
  &K25
};

static _KLsingletonGVKd K25 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJallocation_
};

static _KLsymbolGVKd KJcpu_profiling_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K31
};

static _KLsymbolGVKd KJcpu_time_seconds_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K30
};

static _KLsymbolGVKd KJcpu_time_microseconds_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K29
};

static _KLbyte_stringGVKd_21 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "cpu-time-microseconds"
};

static _KLbyte_stringGVKd_16 K30 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "cpu-time-seconds"
};

static _KLbyte_stringGVKd_13 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "cpu-profiling"
};

static _KLsignatureGVKe K32 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K33
};

static _KLsimple_object_vectorGVKd_2 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobject_tableGVKd,
  &KLcpu_profiling_typeGYcommon_dylan_internalsVcommon_dylan
};

_KLunionGVKe KLcpu_profiling_typeGYcommon_dylan_internalsVcommon_dylan = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K35,
  &K36
};

static _KLsingletonGVKd K35 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJcpu_time_seconds_
};

static _KLsingletonGVKd K36 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJcpu_time_microseconds_
};

_KLincremental_generic_functionGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K15,
  (D) 1,
  &K47,
  &K44,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksimple_profiling_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K32,
  &Kstart_profiling_typeYsimple_profilingVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Kstart_profiling_typeYsimple_profilingVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kstart_profiling_typeYsimple_profilingVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &Kstart_profiling_typeYsimple_profilingVcommon_dylanMM2I
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &Kstart_profiling_typeYsimple_profilingVcommon_dylanMM0,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &Kstart_profiling_typeYsimple_profilingVcommon_dylanMM1,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &Kstart_profiling_typeYsimple_profilingVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_20 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 81,
  "start-profiling-type"
};

static _KLsignatureGVKe K48 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K49
};

static _KLsimple_object_vectorGVKd_3 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsequenceGVKd,
  &KLfunctionGVKd
};

_KLincremental_generic_functionGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylan = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_2,
  &K60,
  &KPfalseVKi,
  &K61,
  &K57,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksimple_profiling_moduleYdylan_userVcommon_dylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylanMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K71,
  &key_mep_3,
  &Kprofiling_type_resultYsimple_profilingVcommon_dylanMM0I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylanMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K70,
  &key_mep_3,
  &Kprofiling_type_resultYsimple_profilingVcommon_dylanMM1I,
  &KPempty_vectorVKi
};

_KLkeyword_methodGVKe Kprofiling_type_resultYsimple_profilingVcommon_dylanMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K65,
  &key_mep_4,
  &Kprofiling_type_resultYsimple_profilingVcommon_dylanMM2I,
  &K66
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &Kprofiling_type_resultYsimple_profilingVcommon_dylanMM0,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Kprofiling_type_resultYsimple_profilingVcommon_dylanMM1,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Kprofiling_type_resultYsimple_profilingVcommon_dylanMM2,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K60 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42730505,
  &K17,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_21 K61 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "profiling-type-result"
};

static _KLbyte_stringGVKd_51 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 205,
  "\nProfiling Results: Heap Allocation Statistics: %s\n"
};

static _KLkeyword_signatureGVKe K65 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K19,
  &K69,
  &KDsignature_LstringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K66 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJdescription_,
  &KPempty_stringVKi
};

static _KLsymbolGVKd KJdescription_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K68
};

static _KLbyte_stringGVKd_11 K68 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "description"
};

static _KLsimple_object_vectorGVKd_1 K69 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJdescription_
};

static _KLkeyword_signatureAvaluesGVKi K70 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K24,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K71 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &K33,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D Kdo_with_profilingYcommon_dylan_internalsVcommon_dylanI (D body_, D keywords_, D result_function_) {
  D state_;
  D T5;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:120
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:123
  state_ = Kstart_profilingYcommon_dylan_internalsVcommon_dylanI(keywords_);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:125
  T5 = CALL0(body_);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:124
  T6 = MV_SPILL(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:127
  Kstop_profilingYcommon_dylan_internalsVcommon_dylanI(state_, keywords_);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:128
  CALL1(result_function_, state_);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:124
  T7 = MV_UNSPILL(T6);
  T7 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:120
  return(T7);
}

D Kstart_profilingYcommon_dylan_internalsVcommon_dylanI (D keywords_) {
  D T2_0;
  D state_;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11T, T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:110
  T4_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:110
  state_ = T4_0;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T5 = CONGRUENT_CALL1(keywords_);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  T6 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  T7 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  T8 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  T9 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  T10 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  T11T = T6;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
    T11 = T11T;
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
    T12 = CALL3(T9, keywords_, T11, T7);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
    if (T12 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
      T13 = CALL2(T10, keywords_, T11);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
      CONGRUENT_CALL_PROLOG(&Kstart_profiling_typeYsimple_profilingVcommon_dylan, 2);
      CONGRUENT_CALL2(state_, T13);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
      T14 = CALL2(T8, keywords_, T11);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
      T11T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:111
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:112
  T2_0 = state_;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:108
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kstop_profilingYcommon_dylan_internalsVcommon_dylanI (D state_, D keywords_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10T, T10;
  D T11;
  D T12;
  D T13;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T4 = CONGRUENT_CALL1(keywords_);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  T5 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  T6 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  T7 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  T8 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  T9 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  T10T = T5;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
    T10 = T10T;
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
    T11 = CALL3(T8, keywords_, T10, T6);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
      T12 = CALL2(T9, keywords_, T10);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
      CONGRUENT_CALL_PROLOG(&Kstop_profiling_typeYsimple_profilingVcommon_dylan, 2);
      CONGRUENT_CALL2(state_, T12);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
      T13 = CALL2(T7, keywords_, T10);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
      T10T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:117
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:115
  MV_SET_COUNT(0);
  return(T3);
}

D Kstop_profiling_typeYsimple_profilingVcommon_dylanMM0I (D state_, D keyword_) {
  D elapsed_time_;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_4 T16 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T17;
  D T18;
  _KLsimple_object_vectorGVKd_4 T19 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T20;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:152
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:154
  T7_0 = KgethashVKiI(state_, IKJcpu_profiling_, &KPfalseVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:154
  T8 = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:154
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:155
    elapsed_time_ = primitive_stop_timer();
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
    T9 = KelementVKdMM11I(elapsed_time_, (D) 1, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
    T10 = SLOT_VALUE_INITD(state_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
    T13 = primitive_instanceQ(T9,T10);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
    if (T13 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
      T12.vector_element_[0] = &KJvalue_;
      T12.vector_element_[1] = T9;
      T12.vector_element_[2] = &KJtype_;
      T12.vector_element_[3] = T10;
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T11 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T12);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T11, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:156
    KputhashVKiI(T9, state_, IKJcpu_time_seconds_);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
    T14 = KelementVKdMM11I(elapsed_time_, (D) 5, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
    T17 = primitive_instanceQ(T14,T10);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
    if (T17 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
      T16.vector_element_[0] = &KJvalue_;
      T16.vector_element_[1] = T14;
      T16.vector_element_[2] = &KJtype_;
      T16.vector_element_[3] = T10;
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T15 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T16);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T15, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:157
    KputhashVKiI(T14, state_, IKJcpu_time_microseconds_);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
    T20 = primitive_instanceQ(&KPfalseVKi,T10);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
    if (T20 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
      T19.vector_element_[0] = &KJvalue_;
      T19.vector_element_[1] = &KPfalseVKi;
      T19.vector_element_[2] = &KJtype_;
      T19.vector_element_[3] = T10;
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T18 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T19);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T18, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
    KputhashVKiI(&KPfalseVKi, state_, IKJcpu_profiling_);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:158
    T4 = &KPfalseVKi;
    T6 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:154
    T5 = &KPfalseVKi;
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:152
  MV_SET_COUNT(0);
  return(T6);
}

D Kstop_profiling_typeYsimple_profilingVcommon_dylanMM1I (D state_, D keyword_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:171
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:173
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:171
  MV_SET_COUNT(0);
  return(T3);
}

D Kstop_profiling_typeYsimple_profilingVcommon_dylanMM2I (D state_, D keyword_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:193
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:195
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:193
  MV_SET_COUNT(0);
  return(T3);
}

D Kstart_profiling_typeYsimple_profilingVcommon_dylanMM0I (D state_, D keyword_) {
  D T3;
  D T4;
  D T5;
  D T6_0;
  D T7;
  D T8;
  D T9;
  _KLsimple_object_vectorGVKd_4 T10 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T11;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:144
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:146
  T6_0 = KgethashVKiI(state_, IKJcpu_profiling_, &KPfalseVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:146
  T7 = T6_0;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:146
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:146
    T4 = &KPfalseVKi;
    T5 = T4;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:147
    primitive_start_timer();
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
    T8 = SLOT_VALUE_INITD(state_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
    T11 = primitive_instanceQ(&KPtrueVKi,T8);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
      T10.vector_element_[0] = &KJvalue_;
      T10.vector_element_[1] = &KPtrueVKi;
      T10.vector_element_[2] = &KJtype_;
      T10.vector_element_[3] = T8;
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
      CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
      T9 = CONGRUENT_CALL2(&KLtype_errorGVKd, &T10);
      // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
      CONGRUENT_CALL_PROLOG(&KerrorVKd, 2);
      CONGRUENT_CALL2(T9, &KPempty_vectorVKi);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
    KputhashVKiI(&KPtrueVKi, state_, IKJcpu_profiling_);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:148
    T3 = &KPfalseVKi;
    T5 = T3;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:146
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:144
  MV_SET_COUNT(0);
  return(T5);
}

D Kstart_profiling_typeYsimple_profilingVcommon_dylanMM1I (D state_, D keyword_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:165
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:168
  primitive_initialize_allocation_count();
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:168
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:165
  MV_SET_COUNT(0);
  return(T3);
}

D Kstart_profiling_typeYsimple_profilingVcommon_dylanMM2I (D state_, D keyword_) {
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:188
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:190
  primitive_begin_heap_alloc_stats();
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:190
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:188
  MV_SET_COUNT(0);
  return(T3);
}

D Kprofiling_type_resultYsimple_profilingVcommon_dylanMM0I (D state_, D keyword_, D Urest_) {
  D T4_0;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:138
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:141
  T5 = Dtable_entry_emptyVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:141
  T6_0 = KgethashVKiI(state_, keyword_, T5, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:138
  T4_0 = T6_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T6_0);
    primitive_type_check(T4_0, &KLintegerGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:138
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kprofiling_type_resultYsimple_profilingVcommon_dylanMM1I (D state_, D keyword_, D Urest_) {
  DSINT T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:176
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:179
  T4 = primitive_allocation_count();
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:179
  T5 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:179
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:179
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:179
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:176
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kprofiling_type_resultYsimple_profilingVcommon_dylanMM2I (D state_, D keyword_, D Urest_, D description_) {
  D descriptionF5;
  D T6;
  D T7;
  DBSTR T8;
  DSINT T9;
  D T10;
  D T11_0;
  D T12;
  DWORD T13;
  D T14;
  D T15;
  _KLsimple_object_vectorGVKd_1 T16 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T17;
  DBSTR T18;
  D T19;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:198
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:198
  primitive_type_check(description_, &KLstringGVKd);
  descriptionF5 = description_;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:202
  T6 = primitive_read_thread_variable(dylan_string_bufferYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:202
  T12 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:202
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:202
  T14 = primitive_machine_word_equalQ(T13,1);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:202
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:203
    T15 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 32769);
    // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:203
    primitive_write_thread_variable(dylan_string_bufferYcommon_dylan_internalsVcommon_dylan, T15);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:202
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:206
  T7 = primitive_read_thread_variable(dylan_string_bufferYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:206
  T8 = primitive_string_as_raw(T7);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:206
  T9 = primitive_end_heap_alloc_stats(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  T16.vector_element_[0] = descriptionF5;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  Kformat_outYsimple_ioVcommon_dylanI(&K62, &T16);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:208
  T10 = primitive_read_thread_variable(dylan_string_bufferYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:208
  T17 = Kinteger_as_rawF64I((D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:208
  T18 = primitive_string_as_raw(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:208
  write(T17, T18, T9);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:208
  T19 = Kinteger_as_rawF64I((D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:208
  fsync(T19);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:209
  T11_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:198
  MV_SET_COUNT(1);
  return(T11_0);
}

static D Kinteger_as_rawF64I (D x_) {
  DWORD T1;
  DWORD T2;
  DWORD T3;

  T3 = primitive_cast_integer_as_raw(x_);
  T2 = primitive_machine_word_shift_right(T3,2);
  T1 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  return(T1);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_macros_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJallocation_stats_);
    if (T0 != &KJallocation_stats_) {
      primitive_slot_value_setter(T0, &K20, 1);
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcpu_profiling_);
    if (T0 != &KJcpu_profiling_) {
      IKJcpu_profiling_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcpu_time_seconds_);
    if (T0 != &KJcpu_time_seconds_) {
      primitive_slot_value_setter(T0, &K35, 1);
      IKJcpu_time_seconds_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJcpu_time_microseconds_);
    if (T0 != &KJcpu_time_microseconds_) {
      primitive_slot_value_setter(T0, &K36, 1);
      IKJcpu_time_microseconds_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJdescription_);
    if (T0 != &KJdescription_) {
      primitive_repeated_slot_value_setter(T0, &K69, 1, 0);
      primitive_repeated_slot_value_setter(T0, &K66, 1, 0);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_macros_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:186
  dylan_string_bufferYcommon_dylan_internalsVcommon_dylan = primitive_allocate_thread_variable(&KPempty_stringVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:186
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
