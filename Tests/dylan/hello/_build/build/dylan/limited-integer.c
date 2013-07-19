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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
  D scu_alist_;
  D scu_converter_;
} _KLsubjunctive_class_universeGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
} _KLfunctionGVKd;


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
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Llimited_integerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLsymbolGVKd KJmin_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJmax_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
D KsubiclassQVKiI (D, D, D, D);
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D Kscu_entryQVKeI (D, D);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
extern _KLsimple_methodGVKe KGEVKd;
extern _KLsimple_methodGVKe KLEVKd;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern D Dempty_subjunctive_class_universeVKe;

/* Defined object declarations */

D KsubtypeQVKdMM11I (D, D);
extern _KLsimple_methodGVKe KlimitsVKiMM2;
D KlimitsVKiMM2I (D limint_);
extern _KLsimple_methodGVKe Khas_instancesQVKeMM3;
D Khas_instancesQVKeMM3I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM13;
D Ksubjunctive_subtypeQVKiMM13I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM12;
D Ksubjunctive_subtypeQVKiMM12I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM11;
D Ksubjunctive_subtypeQVKiMM11I (D, D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM11;
extern _KLsimple_methodGVKe KsubtypeQVKdMM12;
D KsubtypeQVKdMM12I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM13;
D KsubtypeQVKdMM13I (D, D);
extern _KLkeyword_methodGVKe KlimitedVKdMM16;
D KlimitedVKdMM16I (D, D, D, D);
extern _KLsimple_methodGVKe KinstanceQ_functionVKeMM0;
D KinstanceQ_functionVKeMM0I (D);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM5;
D Kdisjoint_types_1QVKeMM5I (D, D, D, D);
static _KLsignatureAvaluesGVKi K22;
static _KLsimple_object_vectorGVKd_4 K23;
extern _KLsimple_methodGVKe Klimited_integer_instanceQ_functionVKi;
D Klimited_integer_instanceQ_functionVKiI (D, D);
static _KLsignatureAvaluesGVKi K26;
static _KLsimple_object_vectorGVKd_2 K27;
static _KLsignatureAvaluesGVKi K28;
static _KLkeyword_signatureAvaluesGVKi K29;
static _KLsimple_object_vectorGVKd_4 K30;
static _KLsimple_object_vectorGVKd_1 K31;
static _KLsimple_object_vectorGVKd_2 K32;
static _KLsingletonGVKd K33;
static _KLsignatureAvaluesGVKi K34;
static _KLsimple_object_vectorGVKd_2 K35;
static _KLsignatureAvaluesGVKi K36;
static _KLsimple_object_vectorGVKd_2 K37;
static _KLsimple_object_vectorGVKd_1 K38;
static _KLsingletonGVKd K39;
static _KLsignatureAvaluesGVKi K40;
static _KLsignatureAvaluesGVKi K41;
static _KLsimple_object_vectorGVKd_3 K42;
static _KLsignatureAvaluesGVKi K43;
static _KLsimple_object_vectorGVKd_3 K44;
static _KLsignatureAvaluesGVKi K45;
static _KLsimple_object_vectorGVKd_3 K46;
static _KLsignatureAvaluesGVKi K47;
static _KLsimple_object_vectorGVKd_2 K48;
static _KLsignatureAvaluesGVKi K49;
static D Ksatisifies_boundF51I (D, D, D);

/* Indirection variables */


/* Variables */

D limited_integer_instanceQ_functionVKi = &Klimited_integer_instanceQ_functionVKi;

/* Objects */

_KLsimple_methodGVKe KlimitsVKiMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K49,
  &KlimitsVKiMM2I
};

_KLsimple_methodGVKe Khas_instancesQVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K47,
  &Khas_instancesQVKeMM3I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K45,
  &Ksubjunctive_subtypeQVKiMM13I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K43,
  &Ksubjunctive_subtypeQVKiMM12I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K41,
  &Ksubjunctive_subtypeQVKiMM11I
};

_KLsimple_methodGVKe KsubtypeQVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K40,
  &KsubtypeQVKdMM11I
};

_KLsimple_methodGVKe KsubtypeQVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K36,
  &KsubtypeQVKdMM12I
};

_KLsimple_methodGVKe KsubtypeQVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K34,
  &KsubtypeQVKdMM13I
};

_KLkeyword_methodGVKe KlimitedVKdMM16 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K29,
  &key_mep_4,
  &KlimitedVKdMM16I,
  &K30
};

_KLsimple_methodGVKe KinstanceQ_functionVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K28,
  &KinstanceQ_functionVKeMM0I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K22,
  &Kdisjoint_types_1QVKeMM5I
};

static _KLsignatureAvaluesGVKi K22 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K23,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLlimited_integerGVKe,
  &KLlimited_integerGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

_KLsimple_methodGVKe Klimited_integer_instanceQ_functionVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K26,
  &Klimited_integer_instanceQ_functionVKiI
};

static _KLsignatureAvaluesGVKi K26 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K27,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLlimited_integerGVKe
};

static _KLsignatureAvaluesGVKi K28 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Llimited_integerG_typesVKi,
  &KDsignature_LmethodG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K29 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K31,
  &K32,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJmin_,
  &KPfalseVKi,
  &KJmax_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K33
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJmin_,
  &KJmax_
};

static _KLsingletonGVKd K33 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K34 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K35,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_integerGVKe,
  &KLclassGVKd
};

static _KLsignatureAvaluesGVKi K36 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K37,
  &K38
};

static _KLsimple_object_vectorGVKd_2 K37 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLlimited_integerGVKe
};

static _KLsimple_object_vectorGVKd_1 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K39
};

static _KLsingletonGVKd K39 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K40 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Llimited_integerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K41 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K42,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlimited_integerGVKe,
  &KLlimited_integerGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K43 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K44,
  &K38
};

static _KLsimple_object_vectorGVKd_3 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLlimited_integerGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K45 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K46,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K46 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlimited_integerGVKe,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K47 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K44,
  &K48
};

static _KLsimple_object_vectorGVKd_2 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLbooleanGVKd,
  &K39
};

static _KLsignatureAvaluesGVKi K49 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Llimited_integerG_typesVKi,
  &K31
};

/* Code */

D KsubtypeQVKdMM11I (D limint1_, D limint2_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:57
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:68
  T7 = SLOT_VALUE_INITD(limint1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:68
  T8 = SLOT_VALUE_INITD(limint2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:68
  T3 = Ksatisifies_boundF51I(T7, T8, &KGEVKd);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:68
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:69
    T9 = SLOT_VALUE_INITD(limint1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:69
    T10 = SLOT_VALUE_INITD(limint2_, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:69
    T4_0 = Ksatisifies_boundF51I(T9, T10, &KLEVKd);
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:69
    T11_0 = T4_0;
    T6_0 = T11_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:68
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:68
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:57
  MV_SET_COUNT(1);
  return(T6_0);
}

D KlimitsVKiMM2I (D limint_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:30
  T2_0 = &KLintegerGVKd;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:29
  MV_SET_COUNT(1);
  return(T2_0);
}

D Khas_instancesQVKeMM3I (D class_, D limint_, D scu_) {
  D T4;
  D T5_0;
  D T6;
  D UtmpF7;
  D T8;
  D T9;
  D T10;
  D T11;
  D T12;
  D UtmpF13;
  D T14;
  D T15;
  D T16;
  D UtmpF17;
  D T18_0;
  D T19;
  D UtmpF20;
  D T21;
  D T22;
  D T23;
  D T24;
  D UtmpF25;
  D T26;
  D T27;
  D T28;
  D T29;
  D T30_0;
  D T30_1;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:127
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  T9 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  if (T9 != &KPfalseVKi) {
    UtmpF7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T6 = Kscu_entryQVKeI(&KLintegerGVKd, scu_);
    UtmpF7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  if (UtmpF7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T8 = UtmpF7;
    T11 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T10 = SLOT_VALUE(&KLintegerGVKd, 2);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  if (T9 != &KPfalseVKi) {
    UtmpF13 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T12 = Kscu_entryQVKeI(class_, scu_);
    UtmpF13 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  if (UtmpF13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T14 = UtmpF13;
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T15 = SLOT_VALUE(class_, 2);
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  T5_0 = KsubiclassQVKiI(T11, &KLintegerGVKd, T16, class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  UtmpF17 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  if (UtmpF17 != &KPfalseVKi) {
    T4 = UtmpF17;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    if (T9 != &KPfalseVKi) {
      UtmpF20 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
      T19 = Kscu_entryQVKeI(class_, scu_);
      UtmpF20 = T19;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    if (UtmpF20 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
      T21 = UtmpF20;
      T23 = T21;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
      T22 = SLOT_VALUE(class_, 2);
      T23 = T22;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    if (T9 != &KPfalseVKi) {
      UtmpF25 = &KPfalseVKi;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
      T24 = Kscu_entryQVKeI(&KLintegerGVKd, scu_);
      UtmpF25 = T24;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    if (UtmpF25 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
      T26 = UtmpF25;
      T28 = T26;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
      T27 = SLOT_VALUE(&KLintegerGVKd, 2);
      T28 = T27;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T18_0 = KsubiclassQVKiI(T23, class_, T28, &KLintegerGVKd);
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
    T29 = T18_0;
    T4 = T29;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:130
  T30_0 = T4;
  T30_1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:127
  MV_SET_ELT(1, T30_1);
  MV_SET_COUNT(2);
  return(T30_0);
}

D Ksubjunctive_subtypeQVKiMM13I (D limint_, D class_, D scu_) {
  D T4_0;
  D T5;
  D UtmpF6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11;
  D UtmpF12;
  D T13;
  D T14;
  D T15;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  T8 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  if (T8 != &KPfalseVKi) {
    UtmpF6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
    T5 = Kscu_entryQVKeI(&KLintegerGVKd, scu_);
    UtmpF6 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  if (UtmpF6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
    T7 = UtmpF6;
    T10 = T7;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
    T9 = SLOT_VALUE(&KLintegerGVKd, 2);
    T10 = T9;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  if (T8 != &KPfalseVKi) {
    UtmpF12 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
    T11 = Kscu_entryQVKeI(class_, scu_);
    UtmpF12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  if (UtmpF12 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
    T13 = UtmpF12;
    T15 = T13;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
    T14 = SLOT_VALUE(class_, 2);
    T15 = T14;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:101
  T4_0 = KsubiclassQVKiI(T10, &KLintegerGVKd, T15, class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:98
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubjunctive_subtypeQVKiMM12I (D class_, D limint_, D scu_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:92
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:95
  T4_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:92
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubjunctive_subtypeQVKiMM11I (D limint1_, D limint2_, D scu_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:72
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:75
  T4_0 = KsubtypeQVKdMM11I(limint1_, limint2_);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:72
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsubtypeQVKdMM12I (D class_, D limint_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:82
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:84
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:82
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsubtypeQVKdMM13I (D limint_, D class_) {
  D T3_0;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:89
  T4 = SLOT_VALUE(&KLintegerGVKd, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:89
  T5 = SLOT_VALUE(class_, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:89
  T3_0 = KsubiclassQVKiI(T4, &KLintegerGVKd, T5, class_);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:87
  MV_SET_COUNT(1);
  return(T3_0);
}

D KlimitedVKdMM16I (D class_, D Urest_, D min_, D max_) {
  D minF5;
  D maxF6;
  D T7;
  D T8_0;
  _KLsimple_object_vectorGVKd_4 T9 = {&KLsimple_object_vectorGVKdW, (D) 17};
  D T10;
  D T11;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:13
  primitive_type_check(min_, &KLintegerGVKd);
  minF5 = min_;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:13
  primitive_type_check(max_, &KLintegerGVKd);
  maxF6 = max_;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:19
  T9.vector_element_[0] = &KJmin_;
  T9.vector_element_[1] = minF5;
  T9.vector_element_[2] = &KJmax_;
  T9.vector_element_[3] = maxF6;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:19
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T7 = CONGRUENT_CALL2(&KLlimited_integerGVKe, &T9);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:20
  T10 = SLOT_VALUE_INITD(T7, 0);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:20
  if (T10 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:21
    T11 = SLOT_VALUE(&Klimited_integer_instanceQ_functionVKi, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:21
    SLOT_VALUE_SETTER(T11, T7, 0);
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:23
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:13
  MV_SET_COUNT(1);
  return(T8_0);
}

D KinstanceQ_functionVKeMM0I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:49
  T2_0 = &Klimited_integer_instanceQ_functionVKi;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:48
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kdisjoint_types_1QVKeMM5I (D t1_, D t2_, D scu_, D dep_) {
  D T5;
  D T6;
  D Utmp_;
  D T8_0;
  D T9;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14;
  D T15;
  D T16;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:106
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:110
  T14 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:111
  T15 = SLOT_VALUE_INITD(t1_, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:112
  T16 = SLOT_VALUE_INITD(t2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:113
  T17 = SLOT_VALUE_INITD(t2_, 2);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
  if (T15 != &KPfalseVKi) {
    T5 = T16;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
    CONGRUENT_CALL_PROLOG(&KLVKd, 2);
    T6 = CONGRUENT_CALL2(T15, T16);
    Utmp_ = T6;
  } else {
    Utmp_ = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
    T8_0 = Utmp_;
    T13_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:119
    if (T14 != &KPfalseVKi) {
      T9 = T17;
    } else {
      T9 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:119
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:119
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:119
      CONGRUENT_CALL_PROLOG(&KLVKd, 2);
      T10_0 = CONGRUENT_CALL2(T17, T14);
      T12_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:119
      T11_0 = &KPfalseVKi;
      T12_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:119
    T13_0 = T12_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:115
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:106
  MV_SET_COUNT(1);
  return(T13_0);
}

D Klimited_integer_instanceQ_functionVKiI (D i_, D limint_) {
  D min_;
  D T4;
  D max_;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10_0;
  D T11_0;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  DWORD T17;
  DWORD T18;
  D T19;
  D T20_0;
  D T21;
  DWORD T22;
  DWORD T23;
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:37
  T13 = primitive_instanceQ(i_,&KLintegerGVKd);
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:37
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:21
    T12 = i_;
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:39
    T14 = SLOT_VALUE_INITD(limint_, 1);
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:40
    T15 = SLOT_VALUE_INITD(limint_, 2);
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
    if (T14 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
      min_ = T14;
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
      T17 = primitive_cast_integer_as_raw(T12);
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
      T18 = primitive_cast_integer_as_raw(min_);
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
      T19 = primitive_machine_word_less_thanQ(T17,T18);
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
      T16 = primitive_not(T19);
      T4 = T16;
    } else {
      T4 = &KPtrueVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
        max_ = T15;
        // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
        T22 = primitive_cast_integer_as_raw(max_);
        // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
        T23 = primitive_cast_integer_as_raw(T12);
        // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
        T24 = primitive_machine_word_less_thanQ(T22,T23);
        // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
        T21 = primitive_not(T24);
        // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
        T20_0 = T21;
        T7_0 = T20_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
        T6_0 = &KPtrueVKi;
        T7_0 = T6_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:42
      T9_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
      T8_0 = &KPfalseVKi;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:41
    T11_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:44
    T10_0 = &KPfalseVKi;
    T11_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:37
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:35
  MV_SET_COUNT(1);
  return(T11_0);
}

static D Ksatisifies_boundF51I (D value_, D bound_, D satisfiedQ_) {
  D valueF3;
  D boundF4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;

  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:60
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:60
  valueF3 = value_;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:60
  boundF4 = bound_;
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:62
  if (boundF4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:65
    if (valueF3 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:65
      T6 = satisfiedQ_;
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:65
      T7 = CALL2(T6, valueF3, boundF4);
      T9 = T7;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:65
      T8 = &KPfalseVKi;
      MV_SET_ELT(0, &KPfalseVKi);
      MV_SET_COUNT(1);
      T9 = T8;
    }
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:65
    T10 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:63
    T5 = &KPtrueVKi;
    MV_SET_ELT(0, &KPtrueVKi);
    MV_SET_COUNT(1);
    T10 = T5;
  }
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/limited-integer.dylan:60
  return(T10);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_limited_integer_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_limited_integer_for_user () {
  return;
}


/* eof */
