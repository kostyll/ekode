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
  D head_;
  D tail_;
} _KLempty_listGVKd;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

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

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D subclass_class_;
} _KLsubclassGVKe;

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
  D singleton_object_;
} _KLsingletonGVKd;

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
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLsubclassGVKe;
extern _KLmm_wrapperGVKi_0 KLsubclassGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsubclassG_typesVKi;
D Kdisjoint_types_1QVKeMM4I (D, D, D, D);
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
D Kreduce_incomplete_classesVKiMM10I (D, D, D);
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
D KsubtypeQVKdMM10I (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
D Kscu_entryQVKeI (D, D);
extern _KLclassGVKd KLimplementation_classGVKe;
extern _KLmm_wrapperGVKi_0 KLimplementation_classGVKeW;
D KsubiclassQVKiI (D, D, D, D);
extern _KLsymbolGVKd KJclass_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LclassG_typesVKi;
extern D Dempty_subjunctive_class_universeVKe;

/* Defined object declarations */

D Ksubclass_instanceQVKiI (D, D);
extern _KLsimple_methodGVKe KlimitsVKiMM3;
D KlimitsVKiMM3I (D subc_);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM11;
D Kmap_congruency_classesVKiMM11I (D, D);
extern _KLsimple_methodGVKe Khas_instancesQVKeMM5;
D Khas_instancesQVKeMM5I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM23;
D Ksubjunctive_subtypeQVKiMM23I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM22;
D Ksubjunctive_subtypeQVKiMM22I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM21;
D Ksubjunctive_subtypeQVKiMM21I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM20;
D Ksubjunctive_subtypeQVKiMM20I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM19;
D Ksubjunctive_subtypeQVKiMM19I (D, D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM19;
D KsubtypeQVKdMM19I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM20;
D KsubtypeQVKdMM20I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM21;
D KsubtypeQVKdMM21I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM22;
D KsubtypeQVKdMM22I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM23;
D KsubtypeQVKdMM23I (D, D);
extern _KLsimple_methodGVKe KinstanceQ_functionVKeMM2;
D KinstanceQ_functionVKeMM2I (D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM12;
D Kreduce_incomplete_classesVKiMM12I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM9;
D Ktype_completeQVKeMM9I (D);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM8;
D Kdisjoint_types_1QVKeMM8I (D, D, D, D);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM7;
D Kdisjoint_types_1QVKeMM7I (D, D, D, D);
extern _KLsimple_methodGVKe Kdisjoint_types_1QVKeMM6;
D Kdisjoint_types_1QVKeMM6I (D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM23;
D KinitializeVKdMM23I (D, D);
static _KLbyte_stringGVKd_15 K41;
extern _KLsimple_methodGVKe Ksubclass_instanceQVKi;
static _KLsignatureAvaluesGVKi K43;
static _KLsimple_object_vectorGVKd_2 K44;
static _KLkeyword_signatureGVKe K45;
static _KLsignatureAvaluesGVKi K46;
static _KLsimple_object_vectorGVKd_4 K47;
static _KLsignatureAvaluesGVKi K48;
static _KLsimple_object_vectorGVKd_4 K49;
static _KLsignatureAvaluesGVKi K50;
static _KLsimple_object_vectorGVKd_4 K51;
static _KLsignatureAvaluesGVKi K52;
static _KLsignatureGVKe K53;
static _KLsimple_object_vectorGVKd_3 K54;
static _KLsignatureAvaluesGVKi K55;
static _KLsignatureAvaluesGVKi K56;
static _KLsimple_object_vectorGVKd_2 K57;
static _KLsignatureAvaluesGVKi K58;
static _KLsimple_object_vectorGVKd_2 K59;
static _KLsignatureAvaluesGVKi K60;
static _KLsimple_object_vectorGVKd_2 K61;
static _KLsignatureAvaluesGVKi K62;
static _KLsimple_object_vectorGVKd_2 K63;
static _KLsimple_object_vectorGVKd_1 K64;
static _KLsingletonGVKd K65;
static _KLsignatureAvaluesGVKi K66;
static _KLsignatureAvaluesGVKi K67;
static _KLsimple_object_vectorGVKd_3 K68;
static _KLsignatureAvaluesGVKi K69;
static _KLsimple_object_vectorGVKd_3 K70;
static _KLsignatureAvaluesGVKi K71;
static _KLsimple_object_vectorGVKd_3 K72;
static _KLsignatureAvaluesGVKi K73;
static _KLsimple_object_vectorGVKd_3 K74;
static _KLsignatureAvaluesGVKi K75;
static _KLsimple_object_vectorGVKd_3 K76;
static _KLsignatureAvaluesGVKi K77;
static _KLsignatureGVKe K78;
static _KLsimple_object_vectorGVKd_2 K79;
static _KLsignatureAvaluesGVKi K80;
static _KLsimple_object_vectorGVKd_1 K81;
static _KLsingletonGVKd K82;
extern _KLsimple_methodGVKe KsubclassVKeMM0;
D KsubclassVKeMM0I (D);
static _KLsignatureGVKe K85;

/* Indirection variables */


/* Variables */

D subclassVKe = &KsubclassVKeMM0;
D subclass_instanceQVKi = &Ksubclass_instanceQVKi;

/* Objects */

_KLsimple_methodGVKe KlimitsVKiMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K80,
  &KlimitsVKiMM3I
};

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K78,
  &Kmap_congruency_classesVKiMM11I
};

_KLsimple_methodGVKe Khas_instancesQVKeMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K77,
  &Khas_instancesQVKeMM5I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K75,
  &Ksubjunctive_subtypeQVKiMM23I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K73,
  &Ksubjunctive_subtypeQVKiMM22I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K71,
  &Ksubjunctive_subtypeQVKiMM21I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K69,
  &Ksubjunctive_subtypeQVKiMM20I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K67,
  &Ksubjunctive_subtypeQVKiMM19I
};

_KLsimple_methodGVKe KsubtypeQVKdMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K66,
  &KsubtypeQVKdMM19I
};

_KLsimple_methodGVKe KsubtypeQVKdMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K62,
  &KsubtypeQVKdMM20I
};

_KLsimple_methodGVKe KsubtypeQVKdMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K60,
  &KsubtypeQVKdMM21I
};

_KLsimple_methodGVKe KsubtypeQVKdMM22 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &KsubtypeQVKdMM22I
};

_KLsimple_methodGVKe KsubtypeQVKdMM23 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K56,
  &KsubtypeQVKdMM23I
};

_KLsimple_methodGVKe KinstanceQ_functionVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K55,
  &KinstanceQ_functionVKeMM2I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K53,
  &Kreduce_incomplete_classesVKiMM12I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K52,
  &Ktype_completeQVKeMM9I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K50,
  &Kdisjoint_types_1QVKeMM8I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K48,
  &Kdisjoint_types_1QVKeMM7I
};

_KLsimple_methodGVKe Kdisjoint_types_1QVKeMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K46,
  &Kdisjoint_types_1QVKeMM6I
};

_KLkeyword_methodGVKe KinitializeVKdMM23 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K45,
  &key_mep_2,
  &KinitializeVKdMM23I,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_15 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

_KLsimple_methodGVKe Ksubclass_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K43,
  &Ksubclass_instanceQVKiI
};

static _KLsignatureAvaluesGVKi K43 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K44,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLsubclassGVKe
};

static _KLkeyword_signatureGVKe K45 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46923781,
  &KDsignature_LsubclassG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsignatureAvaluesGVKi K46 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K47,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLsubclassGVKe,
  &KLsubclassGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K49,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLsubclassGVKe,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K50 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K51,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLclassGVKd,
  &KLsubclassGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsubclassG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K53 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K54
};

static _KLsimple_object_vectorGVKd_3 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLsubclassGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K55 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsubclassG_typesVKi,
  &KDsignature_LmethodG_typesVKi
};

static _KLsignatureAvaluesGVKi K56 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K57,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLclassGVKd,
  &KLsubclassGVKe
};

static _KLsignatureAvaluesGVKi K58 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K59,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K59 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsubclassGVKe,
  &KLclassGVKd
};

static _KLsignatureAvaluesGVKi K60 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K61,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K61 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingletonGVKd,
  &KLsubclassGVKe
};

static _KLsignatureAvaluesGVKi K62 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K63,
  &K64
};

static _KLsimple_object_vectorGVKd_2 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsubclassGVKe,
  &KLsingletonGVKd
};

static _KLsimple_object_vectorGVKd_1 K64 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K65
};

static _KLsingletonGVKd K65 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LsubclassG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K67 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K68,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsubclassGVKe,
  &KLsubclassGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K69 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K70,
  &K64
};

static _KLsimple_object_vectorGVKd_3 K70 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsubclassGVKe,
  &KLsingletonGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K71 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K72,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K72 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingletonGVKd,
  &KLsubclassGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K73 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K74,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K74 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsubclassGVKe,
  &KLclassGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K75 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K76,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K76 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLsubclassGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsignatureAvaluesGVKi K77 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K76,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureGVKe K78 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K79
};

static _KLsimple_object_vectorGVKd_2 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLsubclassGVKe
};

static _KLsignatureAvaluesGVKi K80 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LsubclassG_typesVKi,
  &K81
};

static _KLsimple_object_vectorGVKd_1 K81 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K82
};

static _KLsingletonGVKd K82 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLclassGVKd
};

_KLsimple_methodGVKe KsubclassVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K85,
  &KsubclassVKeMM0I
};

static _KLsignatureGVKe K85 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LclassG_typesVKi
};

/* Code */

D Ksubclass_instanceQVKiI (D x_, D sc_) {
  D T2_0;
  D T3_0;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:34
  T5 = primitive_instanceQ(x_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:34
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:15
    T4 = x_;
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:36
    T6 = SLOT_VALUE_INITD(sc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:36
    T8 = SLOT_VALUE(T4, 2);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:36
    T9 = SLOT_VALUE(T6, 2);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:36
    T7_0 = KsubiclassQVKiI(T8, T4, T9, T6);
    T3_0 = T7_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:38
    T2_0 = &KPfalseVKi;
    T3_0 = T2_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:34
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:33
  MV_SET_COUNT(1);
  return(T3_0);
}

D KlimitsVKiMM3I (D subc_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:23
  T2_0 = &KLclassGVKd;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:22
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kmap_congruency_classesVKiMM11I (D f_, D t_) {
  D T3;
  D T4;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:158
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:159
  T3 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:159
  T4 = CALL1(f_, T3);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:158
  MV_SET_COUNT(0);
  return(T4);
}

D Khas_instancesQVKeMM5I (D class_, D subc_, D scu_) {
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
  D T17;
  D T18;
  D T19;
  D T20_0;
  D T20_1;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:171
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  T9 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  if (T9 != &KPfalseVKi) {
    UtmpF7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
    T6 = Kscu_entryQVKeI(class_, scu_);
    UtmpF7 = T6;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  if (UtmpF7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
    T8 = UtmpF7;
    T11 = T8;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
    T10 = SLOT_VALUE(class_, 2);
    T11 = T10;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  if (T9 != &KPfalseVKi) {
    UtmpF13 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
    T12 = Kscu_entryQVKeI(&KLclassGVKd, scu_);
    UtmpF13 = T12;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  if (UtmpF13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
    T14 = UtmpF13;
    T16 = T14;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
    T15 = SLOT_VALUE(&KLclassGVKd, 2);
    T16 = T15;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  T5_0 = KsubiclassQVKiI(T11, class_, T16, &KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:174
  T17 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:175
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:175
    T18 = SLOT_VALUE_INITD(subc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:175
    T19 = primitive_idQ(T18,&KLobjectGVKd);
    T4 = T19;
  } else {
    T4 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:175
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:175
  T20_0 = T17;
  T20_1 = T4;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:171
  MV_SET_ELT(1, T20_1);
  MV_SET_COUNT(2);
  return(T20_0);
}

D Ksubjunctive_subtypeQVKiMM23I (D c_, D subc_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:118
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:121
  T6 = primitive_idQ(c_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:121
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:121
    T7 = SLOT_VALUE_INITD(subc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:121
    T8 = primitive_idQ(T7,&KLclassGVKd);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:121
    T9_0 = T8;
    T5_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:121
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:118
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM22I (D subc_, D c_, D scu_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:115
  T4_0 = KsubtypeQVKdMM10I(&KLclassGVKd, c_);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:111
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubjunctive_subtypeQVKiMM21I (D s_, D subc_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:84
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:87
  T7 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:88
  T8 = primitive_instanceQ(T7,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:88
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/type.dylan:450
    T6 = T7;
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:90
    T9 = SLOT_VALUE_INITD(subc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:90
    T10_0 = KsubtypeQVKdMM10I(T6, T9);
    T5_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:92
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:84
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM20I (D subc1_, D s_, D scu_) {
  D T4_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:78
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:81
  T4_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:78
  MV_SET_COUNT(1);
  return(T4_0);
}

D Ksubjunctive_subtypeQVKiMM19I (D subc1_, D subc2_, D scu_) {
  D T4;
  D T5;
  D T6_0;
  D T7;
  D UtmpF8;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D UtmpF14;
  D T15;
  D T16;
  D T17;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:53
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  T4 = SLOT_VALUE_INITD(subc1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  T5 = SLOT_VALUE_INITD(subc2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  T10 = primitive_idQ(scu_,Dempty_subjunctive_class_universeVKe);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  if (T10 != &KPfalseVKi) {
    UtmpF8 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
    T7 = Kscu_entryQVKeI(T4, scu_);
    UtmpF8 = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  if (UtmpF8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
    T9 = UtmpF8;
    T12 = T9;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
    T11 = SLOT_VALUE(T4, 2);
    T12 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  if (T10 != &KPfalseVKi) {
    UtmpF14 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
    T13 = Kscu_entryQVKeI(T5, scu_);
    UtmpF14 = T13;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  if (UtmpF14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
    T15 = UtmpF14;
    T17 = T15;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
    T16 = SLOT_VALUE(T5, 2);
    T17 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:56
  T6_0 = KsubiclassQVKiI(T12, T4, T17, T5);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:53
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsubtypeQVKdMM19I (D subc1_, D subc2_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:47
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:49
  T3 = SLOT_VALUE_INITD(subc1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:49
  T4 = SLOT_VALUE_INITD(subc2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:49
  T5_0 = KsubtypeQVKdMM10I(T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:47
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsubtypeQVKdMM20I (D subc1_, D s_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:64
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:62
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsubtypeQVKdMM21I (D s_, D subc_) {
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:67
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:69
  T6 = SLOT_VALUE_INITD(s_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:70
  T7 = primitive_instanceQ(T6,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:70
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/discrimination.dylan:1241
    T5 = T6;
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:72
    T8 = SLOT_VALUE_INITD(subc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:72
    T9_0 = KsubtypeQVKdMM10I(T5, T8);
    T4_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:74
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:67
  MV_SET_COUNT(1);
  return(T4_0);
}

D KsubtypeQVKdMM22I (D subc_, D c_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:99
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:102
  T3_0 = KsubtypeQVKdMM10I(&KLclassGVKd, c_);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:99
  MV_SET_COUNT(1);
  return(T3_0);
}

D KsubtypeQVKdMM23I (D c_, D subc_) {
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:105
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:107
  T5 = primitive_idQ(c_,&KLclassGVKd);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:107
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:107
    T6 = SLOT_VALUE_INITD(subc_, 1);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:107
    T7 = primitive_idQ(T6,&KLclassGVKd);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:107
    T8_0 = T7;
    T4_0 = T8_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:107
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:105
  MV_SET_COUNT(1);
  return(T4_0);
}

D KinstanceQ_functionVKeMM2I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:29
  T2_0 = &Ksubclass_instanceQVKi;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:28
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kreduce_incomplete_classesVKiMM12I (D f_, D t_, D ans_) {
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:163
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:165
  T4 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:165
  T5_0 = Kreduce_incomplete_classesVKiMM10I(f_, T4, ans_);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:163
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ktype_completeQVKeMM9I (D t_) {
  D T2;
  D T3;
  D T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:153
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:154
  T2 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:154
  T3 = SLOT_VALUE(T2, 2);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:154
  T4 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:154
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:154
  T6 = primitive_machine_word_logbitQ(21,T5);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:154
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:153
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kdisjoint_types_1QVKeMM8I (D t1_, D t2_, D scu_, D dep_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:144
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:148
  T5_0 = Kdisjoint_types_1QVKeMM4I(&KLclassGVKd, t1_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:144
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdisjoint_types_1QVKeMM7I (D t1_, D t2_, D scu_, D dep_) {
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:136
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:140
  T5_0 = Kdisjoint_types_1QVKeMM4I(&KLclassGVKd, t2_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:136
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdisjoint_types_1QVKeMM6I (D t1_, D t2_, D scu_, D dep_) {
  D T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:132
  T5 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:132
  T6 = SLOT_VALUE_INITD(t2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:132
  T7_0 = Kdisjoint_types_1QVKeMM4I(T5, T6, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:128
  MV_SET_COUNT(1);
  return(T7_0);
}

D KinitializeVKdMM23I (D x_, D Urest_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:13
  T5 = primitive_copy_vector(Urest_);
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:14
  T6 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:14
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:14
    KerrorVKdMM1I(&K41, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:14
    T7 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:14
    T8 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:14
    MEP_CALL_PROLOG(T7, T8, 2);
    MEP_CALL2(T7, x_, T5);
  }
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:14
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:15
  T9 = SLOT_VALUE(&Ksubclass_instanceQVKi, 2);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:15
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:15
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:13
  MV_SET_COUNT(0);
  return(T3);
}

D KsubclassVKeMM0I (D class_) {
  D T2;
  _KLsimple_object_vectorGVKd_2 T3 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:19
  T3.vector_element_[0] = &KJclass_;
  T3.vector_element_[1] = class_;
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:19
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T2 = CONGRUENT_CALL2(&KLsubclassGVKe, &T3);
  // /opt/opendylan-2013.1/sources/dylan/subclass.dylan:18
  return(T2);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_subclass_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_subclass_for_user () {
  return;
}


/* eof */
