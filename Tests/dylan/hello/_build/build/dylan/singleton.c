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
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);

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
  D singleton_object_;
} _KLsingletonGVKd;

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
define__KLbyte_stringGVKd(15);

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
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;


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
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsingletonG_typesVKi;
extern _KLsymbolGVKd KJobject_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
D KEEVKdI (D, D);
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
D Kobject_classVKdI (D);
D Kscu_entryQVKeI (D c_, D scu_);
D Khas_instancesQVKeMM2I (D class_1_, D class_2_, D scu_);
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern D Dempty_subjunctive_class_universeVKe;

/* Defined object declarations */

D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLsimple_methodGVKe KEVKdMM34;
D KEVKdMM34I (D, D);
extern _KLsimple_methodGVKe KlimitsVKiMM1;
D KlimitsVKiMM1I (D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM7;
D Kmap_congruency_classesVKiMM7I (D, D);
extern _KLsimple_methodGVKe Khas_instancesQVKeMM1;
D Khas_instancesQVKeMM1I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM9;
D Ksubjunctive_subtypeQVKiMM9I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM8;
D Ksubjunctive_subtypeQVKiMM8I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM7;
D Ksubjunctive_subtypeQVKiMM7I (D, D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM7;
D KsubtypeQVKdMM7I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM8;
D KsubtypeQVKdMM8I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM9;
D KsubtypeQVKdMM9I (D, D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM8;
D Kreduce_incomplete_classesVKiMM8I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM5;
D Ktype_completeQVKeMM5I (D);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM3;
D Kdisjoint_types_1QVKeMM3I (D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM11;
D KinitializeVKdMM11I (D, D);
D KsingletonVKdMM0I (D);
extern _KLsimple_methodGVKe KsingletonVKdMM0;
static _KLsignatureAvaluesGVKi K31;
static _KLbyte_stringGVKd_15 K32;
extern _KLsimple_methodGVKe Ksingleton_value_object_instanceQVKi;
D Ksingleton_value_object_instanceQVKiI (D, D);
extern _KLsimple_methodGVKe Ksingleton_pointer_idQ_instanceQVKi;
static _KLsignatureAvaluesGVKi K36;
static _KLsimple_object_vectorGVKd_2 K37;
static _KLkeyword_signatureGVKe K38;
static _KLsignatureAvaluesGVKi K39;
static _KLsimple_object_vectorGVKd_4 K40;
static _KLsignatureAvaluesGVKi K41;
static _KLsignatureGVKe K42;
static _KLsimple_object_vectorGVKd_3 K43;
static _KLsignatureAvaluesGVKi K44;
static _KLsimple_object_vectorGVKd_2 K45;
static _KLsignatureAvaluesGVKi K46;
static _KLsimple_object_vectorGVKd_2 K47;
static _KLsignatureAvaluesGVKi K48;
static _KLsignatureAvaluesGVKi K49;
static _KLsimple_object_vectorGVKd_3 K50;
static _KLsignatureAvaluesGVKi K51;
static _KLsimple_object_vectorGVKd_3 K52;
static _KLsignatureAvaluesGVKi K53;
static _KLsimple_object_vectorGVKd_3 K54;
static _KLsignatureAvaluesGVKi K55;
static _KLsimple_object_vectorGVKd_3 K56;
static _KLsignatureGVKe K57;
static _KLsimple_object_vectorGVKd_2 K58;
static _KLsignatureAvaluesGVKi K59;
extern _KLsimple_methodGVKe Ksingleton_instanceQVKi;
D Ksingleton_instanceQVKiI (D, D);

/* Indirection variables */


/* Variables */

D singletonVKd = &KsingletonVKdMM0;
D singleton_instanceQVKi = &Ksingleton_instanceQVKi;
D singleton_pointer_idQ_instanceQVKi = &Ksingleton_pointer_idQ_instanceQVKi;
D singleton_value_object_instanceQVKi = &Ksingleton_value_object_instanceQVKi;

/* Objects */

_KLsimple_methodGVKe KEVKdMM34 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K48,
  &KEVKdMM34I
};

_KLsimple_methodGVKe KlimitsVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K59,
  &KlimitsVKiMM1I
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &Kmap_congruency_classesVKiMM7I
};

_KLsimple_methodGVKe Khas_instancesQVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K55,
  &Khas_instancesQVKeMM1I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K53,
  &Ksubjunctive_subtypeQVKiMM9I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K51,
  &Ksubjunctive_subtypeQVKiMM8I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K49,
  &Ksubjunctive_subtypeQVKiMM7I
};

_KLsimple_methodGVKe KsubtypeQVKdMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K48,
  &KsubtypeQVKdMM7I
};

_KLsimple_methodGVKe KsubtypeQVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K46,
  &KsubtypeQVKdMM8I
};

_KLsimple_methodGVKe KsubtypeQVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K44,
  &KsubtypeQVKdMM9I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K42,
  &Kreduce_incomplete_classesVKiMM8I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K41,
  &Ktype_completeQVKeMM5I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K39,
  &Kdisjoint_types_1QVKeMM3I
};

_KLkeyword_methodGVKe KinitializeVKdMM11 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K38,
  &key_mep_2,
  &KinitializeVKdMM11I,
  &KPempty_vectorVKi
};

_KLsimple_methodGVKe KsingletonVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K31,
  &KsingletonVKdMM0I
};

static _KLsignatureAvaluesGVKi K31 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsingletonG_typesVKi
};

static _KLbyte_stringGVKd_15 K32 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

_KLsimple_methodGVKe Ksingleton_value_object_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K36,
  &Ksingleton_value_object_instanceQVKiI
};

_KLsimple_methodGVKe Ksingleton_pointer_idQ_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K36,
  &Ksingleton_pointer_idQ_instanceQVKiI
};

static _KLsignatureAvaluesGVKi K36 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K37,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K37 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLsingletonGVKd
};

static _KLkeyword_signatureGVKe K38 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46923781,
  &KDsignature_LsingletonG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K39 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K40,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLsingletonGVKd,
  &KLsingletonGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K41 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsingletonG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K42 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K43
};

static _KLsimple_object_vectorGVKd_3 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsingletonGVKd,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K44 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K45,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLsingletonGVKd
};

static _KLsignatureAvaluesGVKi K46 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K47,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingletonGVKd,
  &KLtypeGVKd
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LsingletonG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K49 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K50,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingletonGVKd,
  &KLsingletonGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K51 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K52,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingletonGVKd,
  &KLtypeGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K53 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K54,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &KLsingletonGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K55 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K56,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K56 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLsingletonGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureGVKe K57 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K58
};

static _KLsimple_object_vectorGVKd_2 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsingletonGVKd
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsingletonG_typesVKi,
  &KDsignature_LclassG_typesVKi
};

_KLsimple_methodGVKe Ksingleton_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K36,
  &Ksingleton_instanceQVKiI
};

/* Code */

D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_) {
  D T2;
  D T3_0;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:75
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:76
  T4 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:76
  T2 = primitive_idQ(x_,T4);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:76
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:75
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM34I (D singleton_1_, D singleton_2_) {
  D T3_0;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:26
  T4 = SLOT_VALUE_INITD(singleton_1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:26
  T5 = SLOT_VALUE_INITD(singleton_2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:26
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(T4, T5);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:24
  MV_SET_COUNT(1);
  return(T3_0);
}

D KlimitsVKiMM1I (D s_) {
  D T2_0;
  D T3;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:30
  T3 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:30
  T2_0 = Kobject_classVKdI(T3);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:29
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmap_congruency_classesVKiMM7I (D f_, D t_) {
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:42
  T4 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:42
  T3 = Kobject_classVKdI(T4);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:42
  T5 = CALL1(f_, T3);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:41
  MV_SET_COUNT(0);
  return(T5);
}

D Khas_instancesQVKeMM1I (D class_, D s_, D scu_) {
  D T4;
  D T5;
  D someQ_;
  D T7_0;
  D T7_1;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:151
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:156
  T5 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:156
  T4 = Kobject_classVKdI(T5);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:156
  someQ_ = Khas_instancesQVKeMM2I(T4, class_, scu_);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:157
  T7_0 = someQ_;
  T7_1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:151
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

D Ksubjunctive_subtypeQVKiMM9I (D t_, D s_, D scu_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:127
  T4_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:124
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubjunctive_subtypeQVKiMM8I (D s_, D t_, D scu_) {
  D T4_0;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:112
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:117
  T10 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:117
  T11 = primitive_instanceQ(T10,t_);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:117
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:118
    T12 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:118
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:118
      T4_0 = T12;
      T7_0 = T4_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:120
      T5 = Kobject_classVKdI(T10);
      // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:120
      T6 = Kscu_entryQVKeI(T5, scu_);
      // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:120
      T14 = primitive_not(T6);
      // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:120
      T13_0 = T14;
      T7_0 = T13_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:118
    T9_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:117
    T8_0 = &KPfalseVKi;
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:117
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:112
  MV_SET_COUNT(1);
  return(T9_0);
}

D Ksubjunctive_subtypeQVKiMM7I (D s1_, D s2_, D scu_) {
  D T4_0;
  D T5;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:109
  T5 = SLOT_VALUE_INITD(s1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:109
  T6 = SLOT_VALUE_INITD(s2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:109
  T4_0 = KEEVKdI(T5, T6);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:106
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsubtypeQVKdMM7I (D s1_, D s2_) {
  D T3_0;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:90
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:92
  T4 = SLOT_VALUE_INITD(s1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:92
  T5 = SLOT_VALUE_INITD(s2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:92
  T3_0 = KEEVKdI(T4, T5);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:90
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsubtypeQVKdMM8I (D s_, D t_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:97
  T3 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:97
  T4 = primitive_instanceQ(T3,t_);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:97
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:95
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsubtypeQVKdMM9I (D t_, D s_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:100
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:102
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:100
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kreduce_incomplete_classesVKiMM8I (D f_, D t_, D ans_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:47
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:49
  T4_0 = ans_;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:47
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ktype_completeQVKeMM5I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:37
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:36
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdisjoint_types_1QVKeMM3I (D t1_, D t2_, D scu_, D dep_) {
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:131
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:135
  T5 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:135
  T6 = SLOT_VALUE_INITD(t2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:135
  T7 = KEEVKdI(T5, T6);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:135
  T9 = primitive_not(T7);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:135
  T8_0 = T9;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:131
  MV_SET_COUNT(1);
  return(T8_0);
}

D KinitializeVKdMM11I (D x_, D Urest_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  DADDR T8;
  DWORD T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:13
  T4 = primitive_copy_vector(Urest_);
  T3 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:14
  T5 = primitive_idQ(T3,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:14
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:14
    KerrorVKdMM1I(&K32, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:14
    T6 = SLOT_VALUE_INITD(T3, 0);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:14
    T7 = SLOT_VALUE_INITD(T3, 1);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:14
    MEP_CALL_PROLOG(T6, T7, 2);
    MEP_CALL2(T6, x_, T4);
  }
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  T13 = SLOT_VALUE_INITD(x_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  T8 = primitive_cast_pointer_as_raw(T13);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  T9 = primitive_machine_word_logand(T8,3);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  T10 = primitive_machine_word_equalQ(T9,0);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  if (T10 != &KPfalseVKi) {
    T11 = &Ksingleton_value_object_instanceQVKi;
  } else {
    T11 = &Ksingleton_pointer_idQ_instanceQVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  T14 = SLOT_VALUE(T11, 2);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  SLOT_VALUE_SETTER(T14, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:15
  T12 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:13
  MV_SET_COUNT(0);
  return(T12);
}

D KsingletonVKdMM0I (D object_) {
  D T2_0;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:21
  T3.vector_element_[0] = &KJobject_;
  T3.vector_element_[1] = object_;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:21
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2_0 = CONGRUENT_CALL2(&KLsingletonGVKd, &T3);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:20
  MV_SET_COUNT(1);
  return(T2_0);
}

D Ksingleton_value_object_instanceQVKiI (D x_, D s_) {
  DADDR T3;
  DWORD T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11;
  D T12;
  D mm_wrapperF13;
  D T14;
  D T15;
  D T16;
  D mm_wrapperF17;
  D T18;
  D T19;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:80
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:81
  T11 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
  T3 = primitive_cast_pointer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
  T4 = primitive_machine_word_logand(T3,3);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
  T5 = primitive_machine_word_equalQ(T4,0);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    T12 = primitive_element(x_,0,0);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    mm_wrapperF13 = T12;
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    T14 = SLOT_VALUE_INITD(mm_wrapperF13, 0);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    T15 = SLOT_VALUE_INITD(T14, 1);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    T16 = primitive_element(T11,0,0);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    mm_wrapperF17 = T16;
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    T18 = SLOT_VALUE_INITD(mm_wrapperF17, 0);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    T19 = SLOT_VALUE_INITD(T18, 1);
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:83
    T6 = primitive_idQ(T15,T19);
    T7 = T6;
  } else {
    T7 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:84
    CONGRUENT_CALL_PROLOG(&KEVKd, 2);
    T8_0 = CONGRUENT_CALL2(x_, T11);
    T10_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
    T9_0 = &KPfalseVKi;
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:80
  MV_SET_COUNT(1);
  return(T10_0);
}

D Ksingleton_instanceQVKiI (D x_, D s_) {
  D T2;
  D T3_0;
  DADDR T4;
  DWORD T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:69
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  T8 = SLOT_VALUE_INITD(x_, 1);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  T4 = primitive_cast_pointer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  T5 = primitive_machine_word_logand(T4,3);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  T6 = primitive_machine_word_equalQ(T5,0);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  if (T6 != &KPfalseVKi) {
    T7 = &Ksingleton_value_object_instanceQVKi;
  } else {
    T7 = &Ksingleton_pointer_idQ_instanceQVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  T9 = SLOT_VALUE(T7, 2);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:70
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:71
  T2 = primitive_instanceQ(x_,s_);
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:71
  T3_0 = T2;
  // /opt/opendylan-2013.1/sources/dylan/singleton.dylan:69
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_singleton_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_singleton_for_user () {
  return;
}


/* eof */
