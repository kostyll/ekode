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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(4);

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
} _KLconditionGVKd;

typedef struct {
  D wrapper;
} _KLstreamGYcommon_extensionsVcommon_dylan;


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
extern _KLincremental_generic_functionGVKe Kcondition_to_stringYcommon_extensionsVcommon_dylan;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
D Kdo_printing_objectYprintVioMM0I (D, D, D, D, D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLincremental_generic_functionGVKe KwriteYstreams_protocolVcommon_dylan;
extern _KLsealed_generic_functionGVKe KformatYformatVio;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLconditionGVKd;
extern _KLmm_wrapperGVKi_0 KLconditionGVKdW;
extern _KLclassGVKd KLstreamGYcommon_extensionsVcommon_dylan;
extern _KLmm_wrapperGVKi_0 KLstreamGYcommon_extensionsVcommon_dylanW;
extern D Tprint_escapeQTYprintVio;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kprint_objectYprintVioMM20;
D Kprint_objectYprintVioMM20I (D, D);
static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF4;
static D Kanonymous_of_print_objectF4I (D);
static _KLbyte_stringGVKd_4 K5;
static _KLsignatureGVKe K6;
static _KLsimple_object_vectorGVKd_2 K7;

/* Indirection variables */


/* Variables */


/* Objects */

_KLsimple_methodGVKe Kprint_objectYprintVioMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K6,
  &Kprint_objectYprintVioMM20I
};

static _KLsimple_closure_methodGVKi_0 Kanonymous_of_print_objectF4 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &Kanonymous_of_print_objectF4I,
  (D) 1
};

static _KLbyte_stringGVKd_4 K5 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  ": %s"
};

static _KLsignatureGVKe K6 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K7
};

static _KLsimple_object_vectorGVKd_2 K7 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLconditionGVKd,
  &KLstreamGYcommon_extensionsVcommon_dylan
};

/* Code */

D Kprint_objectYprintVioMM20I (D c_, D s_) {
  D message_;
  D Utmp_;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:9
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:10
  CONGRUENT_CALL_PROLOG(&Kcondition_to_stringYcommon_extensionsVcommon_dylan, 1);
  message_ = CONGRUENT_CALL1(c_);
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:11
  Utmp_ = primitive_read_thread_variable(Tprint_escapeQTYprintVio);
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:11
  if (Utmp_ != &KPfalseVKi) {
    T5 = Utmp_;
  } else {
    // /opt/opendylan-2013.1/sources/io/format-condition.dylan:11
    T10 = primitive_not(message_);
    T5 = T10;
  }
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:11
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:11
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/io/format-condition.dylan:12
    T6 = MAKE_CLOSURE_INITD(&Kanonymous_of_print_objectF4, 1, message_);
    // /opt/opendylan-2013.1/sources/io/format-condition.dylan:12
    T7 = Kdo_printing_objectYprintVioMM0I(c_, s_, T6, &KPempty_vectorVKi, &KPtrueVKi, &KPtrueVKi);
    T9 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/io/format-condition.dylan:18
    CONGRUENT_CALL_PROLOG(&KwriteYstreams_protocolVcommon_dylan, 3);
    T8 = CONGRUENT_CALL3(s_, message_, &KPempty_vectorVKi);
    T9 = T8;
  }
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:11
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:9
  MV_SET_COUNT(0);
  return(T9);
}

static D Kanonymous_of_print_objectF4I (D s_) {
  D T1;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:12
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:14
  T1 = CALL3(&KformatYformatVio, s_, &K5, CREF(0));
  // /opt/opendylan-2013.1/sources/io/format-condition.dylan:12
  return(T1);
}


/* SYSTEM INIT CODE */

void _Init_io__X_format_condition_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_io__X_format_condition_for_user () {
  return;
}


/* eof */
