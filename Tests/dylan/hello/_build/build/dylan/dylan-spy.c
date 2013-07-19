#include "run-time.h"

/* Typedefs for referenced classes */

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
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
} _KLobjectGVKd;

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
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(44);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(48);
define__KLbyte_stringGVKd(19);

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
} _KLrestartGVKd;

typedef struct {
  D wrapper;
} _KLabortGVKd;

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
  D xep_;
} _KLfunctionGVKd;

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
} _KLobject_signatureGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D handler_type_;
  D handler_function_;
  D handler_test_;
  D handler_init_arguments_;
} _KLhandlerGVKi;

typedef struct {
  D wrapper;
  D handle1_;
  D handle2_;
  D priority_;
  D thread_name_;
  D function_;
  D function_results_;
} _KLsynchronous_threadGYthreadsVdylan;

typedef struct {
  D wrapper;
  D condition_format_string_;
  D condition_format_arguments_;
} _KLsimple_restartGVKd;

typedef struct {
  D wrapper;
  D handle1_;
  D handle2_;
  D priority_;
  D thread_name_;
  D function_;
  D function_results_;
} _KLthreadGYthreadsVdylan;


/* Typedefs for defined classes */


/* Referenced object declarations */

D KLobject_tableGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLobject_tableGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLobject_tableGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLsimple_methodGVKe Kdefault_grow_sizeVKe;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KputhashVKiI (D, D, D);
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
D KgethashVKiI (D, D, D, D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
D Kremove_keyXVKdMM0I (D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D Kdo_handlersVKdMM0I (D);
D KerrorVKdMM1I (D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsealed_generic_functionGVKe KsubtypeQVKd;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLrestartGVKd;
extern _KLmm_wrapperGVKi_0 KLrestartGVKdW;
extern _KLclassGVKd KLabortGVKd;
extern _KLmm_wrapperGVKi_0 KLabortGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D KapplyVKdI (D, D);
extern _KLincremental_generic_functionGVKe Krestart_queryVKd;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_4VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLsymbolGVKd KJformat_string_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJformat_arguments_;
extern _KLsymbolGVKd KJtype_;
extern _KLsymbolGVKd KJfunction_;
extern _KLsymbolGVKd KJtest_;
extern _KLsymbolGVKd KJinit_arguments_;
D KLhandlerGZ32ZconstructorVKiMM0I (D, D, D, D, D, D);
extern _KLclassGVKd KLhandlerGVKi;
extern _KLmm_wrapperGVKi_0 KLhandlerGVKiW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_2VKi;
D KmakeVKdMM59I (D, D, D);
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLsymbolGVKd KJname_;
extern _KLclassGVKd KLsynchronous_threadGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLsynchronous_threadGYthreadsVdylanW;
D KlistVKdI (D);
extern _KLclassGVKd KLsimple_restartGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_restartGVKdW;
D KPbreakVKiMM1I (D, D);
extern _KLclassGVKd KLthreadGYthreadsVdylan;
extern _KLmm_wrapperGVKi_1 KLthreadGYthreadsVdylanW;
extern D Tcurrent_handlersTVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kspy_register_remote_objectVKiMM0;
D Kspy_register_remote_objectVKiMM0I (D);
static _KLsignatureAvaluesGVKi K5;
extern _KLsimple_methodGVKe Kspy_register_weak_remote_objectVKiMM0;
D Kspy_register_weak_remote_objectVKiMM0I (D);
extern _KLsimple_methodGVKe Kspy_remote_object_valueVKiMM0;
D Kspy_remote_object_valueVKiMM0I (D);
static _KLsignatureGVKe K10;
extern _KLsimple_methodGVKe Kspy_weak_remote_object_valueVKiMM0;
D Kspy_weak_remote_object_valueVKiMM0I (D);
extern _KLsimple_methodGVKe Kspy_free_remote_objectVKiMM0;
D Kspy_free_remote_objectVKiMM0I (D);
static _KLsignatureGVKe K15;
extern _KLsimple_methodGVKe Kspy_weak_free_remote_objectVKiMM0;
D Kspy_weak_free_remote_objectVKiMM0I (D);
extern _KLsimple_methodGVKe Kspy_invoke_numbered_restartVKiMM0;
D Kspy_invoke_numbered_restartVKiMM0I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_spy_invoke_numbered_restartF23;
static D Kanonymous_of_spy_invoke_numbered_restartF23I (D, D, D, D);
static _KLbyte_stringGVKd_19 K22;
extern _KLsimple_methodGVKe Kspy_restart_decline_continuationVKiMM0;
D Kspy_restart_decline_continuationVKiMM0I (D);
static _KLbyte_stringGVKd_48 K26;
static _KLsignatureGVKe K27;
extern _KLsimple_methodGVKe Kspy_invoke_dylan_under_coded_restartVKiMM0;
D Kspy_invoke_dylan_under_coded_restartVKiMM0I (D, D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_spy_invoke_dylan_under_coded_restartF33;
static D Kanonymous_of_spy_invoke_dylan_under_coded_restartF33I (D, D);
static _KLbyte_stringGVKd_26 K32;
static _KLsignatureGVKe K34;
static _KLsimple_object_vectorGVKd_2 K35;
extern _KLsimple_methodGVKe Kspy_resolve_keywordVKiMM0;
D Kspy_resolve_keywordVKiMM0I (D);
static _KLsignatureAvaluesGVKi K38;
static _KLsimple_object_vectorGVKd_1 K39;
extern _KLsimple_methodGVKe Kspy_format_string_keywordVKiMM0;
D Kspy_format_string_keywordVKiMM0I ();
static _KLsignatureAvaluesGVKi K42;
extern _KLsimple_methodGVKe Kspy_format_arguments_keywordVKiMM0;
D Kspy_format_arguments_keywordVKiMM0I ();
extern _KLsimple_methodGVKe Kspy_create_application_threadVKiMM0;
D Kspy_create_application_threadVKiMM0I (D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_spy_create_application_threadF49;
static D Kanonymous_of_spy_create_application_threadF49I ();
static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF55;
static D KUhandler_functionUF55I (D, D);
static _KLbyte_stringGVKd_12 K52;
static _KLbyte_stringGVKd_12 K53;
static _KLbyte_stringGVKd_44 K54;
static _KLsignatureGVKe K56;
static _KLsimple_object_vectorGVKd_2 K57;
static _KLsignatureGVKe K58;
static _KLsignatureAvaluesGVKi K59;
static _KLsimple_object_vectorGVKd_1 K60;

/* Indirection variables */


/* Variables */

D spy_create_application_threadVKi = &Kspy_create_application_threadVKiMM0;
D spy_format_arguments_keywordVKi = &Kspy_format_arguments_keywordVKiMM0;
D spy_format_string_keywordVKi = &Kspy_format_string_keywordVKiMM0;
D spy_resolve_keywordVKi = &Kspy_resolve_keywordVKiMM0;
D spy_invoke_dylan_under_coded_restartVKi = &Kspy_invoke_dylan_under_coded_restartVKiMM0;
D spy_invoke_numbered_restartVKi = &Kspy_invoke_numbered_restartVKiMM0;
D spy_weak_free_remote_objectVKi = &Kspy_weak_free_remote_objectVKiMM0;
D spy_free_remote_objectVKi = &Kspy_free_remote_objectVKiMM0;
D spy_weak_remote_object_valueVKi = &Kspy_weak_remote_object_valueVKiMM0;
D spy_remote_object_valueVKi = &Kspy_remote_object_valueVKiMM0;
D spy_register_weak_remote_objectVKi = &Kspy_register_weak_remote_objectVKiMM0;
D spy_register_remote_objectVKi = &Kspy_register_remote_objectVKiMM0;
D Tspy_strongly_registered_objectsTVKi = &KPunboundVKi;
D Tspy_weakly_registered_objectsTVKi = &KPunboundVKi;
D Tcurrent_interactor_levelTVKi = &KPunboundVKi;
D Tspy_global_registration_cookieTVKi = (D) 1;

/* Objects */

_KLsimple_methodGVKe Kspy_register_remote_objectVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K5,
  &Kspy_register_remote_objectVKiMM0I
};

static _KLsignatureAvaluesGVKi K5 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kspy_register_weak_remote_objectVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K5,
  &Kspy_register_weak_remote_objectVKiMM0I
};

_KLsimple_methodGVKe Kspy_remote_object_valueVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &Kspy_remote_object_valueVKiMM0I
};

static _KLsignatureGVKe K10 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kspy_weak_remote_object_valueVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &Kspy_weak_remote_object_valueVKiMM0I
};

_KLsimple_methodGVKe Kspy_free_remote_objectVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Kspy_free_remote_objectVKiMM0I
};

static _KLsignatureGVKe K15 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943045,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kspy_weak_free_remote_objectVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Kspy_weak_free_remote_objectVKiMM0I
};

_KLsimple_methodGVKe Kspy_invoke_numbered_restartVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Kspy_invoke_numbered_restartVKiMM0I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_spy_invoke_numbered_restartF23 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_4,
  &KDsignature_LobjectG_object_rest_value_4VKi,
  &Kanonymous_of_spy_invoke_numbered_restartF23I,
  (D) 1
};

static _KLbyte_stringGVKd_19 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 77,
  "Internal SPY error."
};

_KLsimple_methodGVKe Kspy_restart_decline_continuationVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K27,
  &Kspy_restart_decline_continuationVKiMM0I
};

static _KLbyte_stringGVKd_48 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 193,
  "The debugger did not expect a restart to decline"
};

static _KLsignatureGVKe K27 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991617,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe Kspy_invoke_dylan_under_coded_restartVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K34,
  &Kspy_invoke_dylan_under_coded_restartVKiMM0I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_spy_invoke_dylan_under_coded_restartF33 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &KDsignature_LobjectG_object_rest_value_2VKi,
  &Kanonymous_of_spy_invoke_dylan_under_coded_restartF33I,
  (D) 1
};

static _KLbyte_stringGVKd_26 K32 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "Abort interactive level %d"
};

static _KLsignatureGVKe K34 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088777,
  &K35
};

static _KLsimple_object_vectorGVKd_2 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLfunctionGVKd
};

_KLsimple_methodGVKe Kspy_resolve_keywordVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K38,
  &Kspy_resolve_keywordVKiMM0I
};

static _KLsignatureAvaluesGVKi K38 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K39
};

static _KLsimple_object_vectorGVKd_1 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsymbolGVKd
};

_KLsimple_methodGVKe Kspy_format_string_keywordVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K42,
  &Kspy_format_string_keywordVKiMM0I
};

static _KLsignatureAvaluesGVKi K42 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &K39
};

_KLsimple_methodGVKe Kspy_format_arguments_keywordVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K42,
  &Kspy_format_arguments_keywordVKiMM0I
};

_KLsimple_methodGVKe Kspy_create_application_threadVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K59,
  &Kspy_create_application_threadVKiMM0I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_spy_create_application_threadF49 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_0,
  &K58,
  &Kanonymous_of_spy_create_application_threadF49I,
  (D) 1
};

static _KLsimple_closure_methodGVKi_0 KUhandler_functionUF55 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_2,
  &K56,
  &KUhandler_functionUF55I,
  (D) 1
};

static _KLbyte_stringGVKd_12 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "Terminate %="
};

static _KLbyte_stringGVKd_12 K53 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "Beginning %="
};

static _KLbyte_stringGVKd_44 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 177,
  "Unexpected continuation on special thread %="
};

static _KLsignatureGVKe K56 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040201,
  &K57
};

static _KLsimple_object_vectorGVKd_2 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsimple_restartGVKd,
  &KLobjectGVKd
};

static _KLsignatureGVKe K58 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040193,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K60
};

static _KLsimple_object_vectorGVKd_1 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLthreadGYthreadsVdylan
};

/* Code */

D Kspy_register_remote_objectVKiMM0I (D x_) {
  D T2;
  D T3;
  D T4_0;
  DWORD T5;
  DWORD T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:66
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:67
  T2 = Tspy_global_registration_cookieTVKi;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:69
  T3 = Tspy_global_registration_cookieTVKi;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:69
  T5 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:69
  T6 = primitive_machine_word_add_signal_overflow(T5,4);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:69
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:68
  Tspy_global_registration_cookieTVKi = T7;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:71
  KputhashVKiI(x_, Tspy_strongly_registered_objectsTVKi, T2);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:72
  T4_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:66
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kspy_register_weak_remote_objectVKiMM0I (D x_) {
  D T2;
  D T3;
  D T4_0;
  DWORD T5;
  DWORD T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:80
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:82
  T2 = Tspy_global_registration_cookieTVKi;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:84
  T3 = Tspy_global_registration_cookieTVKi;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:84
  T5 = primitive_cast_integer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:84
  T6 = primitive_machine_word_add_signal_overflow(T5,4);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:84
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:83
  Tspy_global_registration_cookieTVKi = T7;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:86
  KputhashVKiI(x_, Tspy_weakly_registered_objectsTVKi, T2);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:87
  T4_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:80
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kspy_remote_object_valueVKiMM0I (D i_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:94
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:96
  T2_0 = KgethashVKiI(Tspy_strongly_registered_objectsTVKi, i_, &KPfalseVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:94
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kspy_weak_remote_object_valueVKiMM0I (D i_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:103
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:105
  T2_0 = KgethashVKiI(Tspy_weakly_registered_objectsTVKi, i_, &KPfalseVKi, &KPtrueVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:103
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kspy_free_remote_objectVKiMM0I (D i_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:113
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:114
  T2 = Kremove_keyXVKdMM0I(Tspy_strongly_registered_objectsTVKi, i_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:113
  MV_SET_COUNT(0);
  return(T2);
}

D Kspy_weak_free_remote_objectVKiMM0I (D i_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:123
  T2 = Kremove_keyXVKdMM0I(Tspy_weakly_registered_objectsTVKi, i_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:122
  MV_SET_COUNT(0);
  return(T2);
}

D Kspy_invoke_numbered_restartVKiMM0I (D index_) {
  D T2;
  D this_index_;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:141
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:142
  this_index_ = MAKE_D_CELL((D) 5);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:144
  T2 = MAKE_CLOSURE_INITD(&Kanonymous_of_spy_invoke_numbered_restartF23, 2, this_index_, index_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:143
  Kdo_handlersVKdMM0I(T2);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:166
  T4 = KerrorVKdMM1I(&K22, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:141
  MV_SET_COUNT(0);
  return(T4);
}

static D Kanonymous_of_spy_invoke_numbered_restartF23I (D type_, D test_, D handling_function_, D init_arguments_) {
  D T4;
  D T5;
  D T6;
  D T7;
  D restart_instance_;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  _KLsimple_object_vectorGVKd_2 T17 = {&KLsimple_object_vectorGVKdW, (D) 9};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:144
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:145
  T4 = CALL2(&KsubtypeQVKd, type_, &KLrestartGVKd);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:145
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:146
    T15 = GET_D_CELL_VAL(CREF(0));
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:146
    T16 = primitive_idQ(T15,CREF(1));
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:146
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:148
      T5 = CALL2(&KsubtypeQVKd, type_, &KLabortGVKd);
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:148
      if (T5 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:149
        T6 = CALL1(&KmakeVKd, type_);
        restart_instance_ = T6;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:151
        T17.vector_element_[0] = type_;
        T17.vector_element_[1] = init_arguments_;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:151
        T7 = KapplyVKdI(&KmakeVKd, &T17);
        restart_instance_ = T7;
      }
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:148
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:153
      CONGRUENT_CALL_PROLOG(&Krestart_queryVKd, 1);
      CONGRUENT_CALL1(restart_instance_);
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:154
      T9 = handling_function_;
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:154
      CALL2(T9, restart_instance_, &Kspy_restart_decline_continuationVKiMM0);
    }
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:146
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:157
    T14 = GET_D_CELL_VAL(CREF(0));
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:157
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T10 = CONGRUENT_CALL2(T14, (D) 5);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:157
    SET_D_CELL_VAL(CREF(0), T10);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:157
    T11 = T10;
    MV_SET_ELT(0, T10);
    MV_SET_COUNT(1);
    T13 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:145
    T12 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    T13 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:145
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:144
  return(T13);
}

D Kspy_restart_decline_continuationVKiMM0I (D arguments_) {
  D T2;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:131
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:133
  T2 = KerrorVKdMM1I(&K26, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:131
  MV_SET_COUNT(0);
  return(T2);
}

D Kspy_invoke_dylan_under_coded_restartVKiMM0I (D interactor_level_, D func_, D arguments_) {
  volatile D T4;
  volatile D new_level_;
  volatile D Pold_valueP_;
  volatile D T7;
  volatile D exitPexit_39_;
  volatile D T9;
  volatile D Uoriginal_handlersU_;
  volatile D T11;
  volatile D T12;
  volatile D T13;
  volatile D T14;
  volatile DWORD T15;
  volatile D T16;
  volatile DWORD T17;
  volatile DWORD T18;
  volatile D T19;
  volatile _KLsimple_object_vectorGVKd_1 T20 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile D T21;
  volatile _KLsimple_object_vectorGVKd_4 T22 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T23;
  volatile D T24_0;
  volatile _KLsimple_object_vectorGVKd_8 T25 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T26;
  volatile D T27;
  volatile D T28;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:188
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:192
  T15 = primitive_cast_integer_as_raw(interactor_level_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:192
  T16 = primitive_machine_word_less_thanQ(T15,1);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:192
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:193
    T4 = primitive_read_thread_variable(Tcurrent_interactor_levelTVKi);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:193
    T17 = primitive_cast_integer_as_raw(T4);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:193
    T18 = primitive_machine_word_add_signal_overflow(T17,4);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:193
    T19 = primitive_cast_raw_as_integer(T18);
    new_level_ = T19;
  } else {
    new_level_ = interactor_level_;
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:192
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:196
  Pold_valueP_ = primitive_read_thread_variable(Tcurrent_interactor_levelTVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:196
  ENTER_UNWIND_FRAME(T7);
  if (!nlx_setjmp(FRAME_DEST(T7))) {
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:196
    primitive_write_thread_variable(Tcurrent_interactor_levelTVKi, new_level_);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:197
    ENTER_EXIT_FRAME(exitPexit_39_);
    if (nlx_setjmp(FRAME_DEST(exitPexit_39_))) {
        T14 = FRAME_RETVAL(exitPexit_39_);
    } else {
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
      Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
      ENTER_UNWIND_FRAME(T11);
      if (!nlx_setjmp(FRAME_DEST(T11))) {
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:207
        T12 = MAKE_CLOSURE_INITD(&Kanonymous_of_spy_invoke_dylan_under_coded_restartF33, 1, exitPexit_39_);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:206
        T20.vector_element_[0] = new_level_;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:206
        T21 = primitive_copy_vector(&T20);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:205
        T22.vector_element_[0] = &KJformat_string_;
        T22.vector_element_[1] = &K32;
        T22.vector_element_[2] = &KJformat_arguments_;
        T22.vector_element_[3] = T21;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:205
        T23 = primitive_copy_vector(&T22);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        T25.vector_element_[0] = &KJtype_;
        T25.vector_element_[1] = &KLabortGVKd;
        T25.vector_element_[2] = &KJfunction_;
        T25.vector_element_[3] = T12;
        T25.vector_element_[4] = &KJtest_;
        T25.vector_element_[5] = &KPfalseVKi;
        T25.vector_element_[6] = &KJinit_arguments_;
        T25.vector_element_[7] = T23;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        T24_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T25, &KLabortGVKd, T12, &KPfalseVKi, T23);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        T26 = T24_0;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        T13 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        T27 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        SLOT_VALUE_SETTER(T26, T27, 0);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        SLOT_VALUE_SETTER(T13, T27, 1);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        primitive_write_thread_variable(Tcurrent_handlersTVKi, T27);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:211
        T28 = APPLY1(func_, arguments_);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
        FALL_THROUGH_UNWIND(T28);
      }
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
      primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:203
      CONTINUE_UNWIND();
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:197
    T14 = T28;
      /* invalidate exitPexit_39_ */
    }
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:197
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:196
    FALL_THROUGH_UNWIND(T14);
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:196
  primitive_write_thread_variable(Tcurrent_interactor_levelTVKi, Pold_valueP_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:196
  CONTINUE_UNWIND();
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:188
  return(T14);
}

static D Kanonymous_of_spy_invoke_dylan_under_coded_restartF33I (D condition_, D nxt_) {
  D T3;
  D T4;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:207
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:197
  T3 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:197
  T4 = NLX(CREF(0), T3);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:207
  return(T4);
}

D Kspy_resolve_keywordVKiMM0I (D keyword_string_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:220
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:222
  T2_0 = KmakeVKdMM59I(&KLsymbolGVKd, &KPempty_vectorVKi, keyword_string_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:220
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kspy_format_string_keywordVKiMM0I () {
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:230
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:231
  T1_0 = &KJformat_string_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:230
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kspy_format_arguments_keywordVKiMM0I () {
  D T1_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:239
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:240
  T1_0 = &KJformat_arguments_;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:239
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kspy_create_application_threadVKiMM0I (D name_) {
  D T2;
  D T3_0;
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:254
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:259
  T2 = MAKE_CLOSURE_INITD(&Kanonymous_of_spy_create_application_threadF49, 1, name_);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:257
  T4.vector_element_[0] = &KJname_;
  T4.vector_element_[1] = name_;
  T4.vector_element_[2] = &KJfunction_;
  T4.vector_element_[3] = T2;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:257
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLsynchronous_threadGYthreadsVdylan, &T4);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:254
  MV_SET_COUNT(1);
  return(T3_0);
}

static D Kanonymous_of_spy_create_application_threadF49I () {
  volatile D Uunwind_exceptionUPexit_40_;
  volatile D T1;
  volatile D Uoriginal_handlersU_;
  volatile D T3;
  volatile D T4;
  volatile D T5;
  volatile D T6;
  volatile D T7;
  volatile D T8;
  volatile D message_;
  volatile D T10;
  volatile _KLsimple_object_vectorGVKd_1 T11 = {&KLsimple_object_vectorGVKdW, (D) 5};
  volatile _KLsimple_object_vectorGVKd_4 T12 = {&KLsimple_object_vectorGVKdW, (D) 17};
  volatile D T13;
  volatile D T14_0;
  volatile _KLsimple_object_vectorGVKd_8 T15 = {&KLsimple_object_vectorGVKdW, (D) 33};
  volatile D T16;
  volatile D T17;
  volatile _KLsimple_object_vectorGVKd_1 T18 = {&KLsimple_object_vectorGVKdW, (D) 5};
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:259
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  ENTER_EXIT_FRAME(Uunwind_exceptionUPexit_40_);
  if (nlx_setjmp(FRAME_DEST(Uunwind_exceptionUPexit_40_))) {
    T8 = FRAME_RETVAL(Uunwind_exceptionUPexit_40_);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    Uoriginal_handlersU_ = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    T3 = MAKE_CLOSURE_INITD(&KUhandler_functionUF55, 2, Uoriginal_handlersU_, Uunwind_exceptionUPexit_40_);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:270
    T11.vector_element_[0] = CREF(0);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:270
    T4 = KlistVKdI(&T11);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:269
    T12.vector_element_[0] = &KJformat_string_;
    T12.vector_element_[1] = &K52;
    T12.vector_element_[2] = &KJformat_arguments_;
    T12.vector_element_[3] = T4;
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:269
    T13 = primitive_copy_vector(&T12);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    T15.vector_element_[0] = &KJtype_;
    T15.vector_element_[1] = &KLsimple_restartGVKd;
    T15.vector_element_[2] = &KJfunction_;
    T15.vector_element_[3] = T3;
    T15.vector_element_[4] = &KJtest_;
    T15.vector_element_[5] = &KPfalseVKi;
    T15.vector_element_[6] = &KJinit_arguments_;
    T15.vector_element_[7] = T13;
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    T14_0 = KLhandlerGZ32ZconstructorVKiMM0I(&KLhandlerGVKi, &T15, &KLsimple_restartGVKd, T3, &KPfalseVKi, T13);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    T16 = T14_0;
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    T5 = primitive_read_thread_variable(Tcurrent_handlersTVKi);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    T17 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    SLOT_VALUE_SETTER(T16, T17, 0);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    SLOT_VALUE_SETTER(T5, T17, 1);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    primitive_write_thread_variable(Tcurrent_handlersTVKi, T17);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    ENTER_UNWIND_FRAME(T6);
    if (!nlx_setjmp(FRAME_DEST(T6))) {
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:261
      message_ = &K53;
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:262
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:263
        T10 = message_;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:263
        T18.vector_element_[0] = CREF(0);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:263
        KPbreakVKiMM1I(T10, &T18);
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:264
        message_ = &K54;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:262
        goto L0;
        // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:262
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:262
      T7 = &KPfalseVKi;
      MV_SET_COUNT(0);
      // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
      FALL_THROUGH_UNWIND(T7);
    }
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    primitive_write_thread_variable(Tcurrent_handlersTVKi, Uoriginal_handlersU_);
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  T8 = T7;
    /* invalidate Uunwind_exceptionUPexit_40_ */
  }
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:259
  return(T8);
}

static D KUhandler_functionUF55I (D UdummyU_, D Unext_handlerU_) {
  D T3_0;
  D all_values_;
  D T5;
  D T6;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  primitive_write_thread_variable(Tcurrent_handlersTVKi, CREF(0));
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  all_values_ = MV_GET_REST_AT(T3_0, 0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  T5 = MV_SET_REST_AT(all_values_, 0);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  T6 = NLX(CREF(1), T5);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:260
  return(T6);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_dylan_spy_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_dylan_spy_for_user () {
{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:41
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:41
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:41
  Tspy_strongly_registered_objectsTVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:41
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:47
  T2_0 = KLobject_tableGZ32ZconstructorVKiMM0I(&KLobject_tableGVKd, &KPempty_vectorVKi, &KLobjectGVKd, (D) 41, &Kdefault_grow_sizeVKe, &KPfalseVKi);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:47
  T1 = T2_0;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:47
  Tspy_weakly_registered_objectsTVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:47
  T0 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T0;

  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:174
  Tcurrent_interactor_levelTVKi = primitive_allocate_thread_variable((D) 1);
  // /opt/opendylan-2013.1/sources/dylan/dylan-spy.dylan:174
  T0 = &KPfalseVKi;
  goto I2;
}
I2:

  return;
}


/* eof */
