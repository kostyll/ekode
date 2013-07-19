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
  DWORD Pmachine_word_data_;
} _KLmachine_wordGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D value_class_comparitor_;
} _KLvalue_classGVKi;

typedef struct {
  D wrapper;
  DWORD PPdouble_integer_low_;
  DWORD PPdouble_integer_high_;
} _KLdouble_integerGVKe;

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
  DDFLT Pdouble_float_data_;
} _KLdouble_floatGVKd;

typedef struct {
  D wrapper;
} _KLfloatGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;


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
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLvalue_classGVKi KLdouble_integerGVKe;
extern _KLmm_wrapperGVKi_1 KLdouble_integerGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsymbolGVKd KJlow_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJhigh_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Ldouble_integerG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_50;
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_1;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_1;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_11;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_4;
extern _KLincremental_generic_functionGVKe KLVKd;

/* Defined object declarations */

extern _KLsimple_methodGVKe KLVKdMM0;
D KLVKdMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KLVKdMM1;
D KLVKdMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KLVKdMM8;
D KLVKdMM8I (D x_, D y_);
extern _KLsimple_methodGVKe KLVKdMM9;
D KLVKdMM9I (D x_, D y_);
extern _KLsimple_methodGVKe KLVKdMM10;
D KLVKdMM10I (D x_, D y_);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_5;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_6;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_7;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_8;
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_9;
extern _KLsimple_methodGVKe KEVKdMM0;
D KEVKdMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KEVKdMM1;
D KEVKdMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KEVKdMM9;
D KEVKdMM9I (D x_, D y_);
extern _KLsimple_methodGVKe KEVKdMM10;
D KEVKdMM10I (D x_, D y_);
extern _KLsimple_methodGVKe KEVKdMM11;
D KEVKdMM11I (D x_, D y_);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_12;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_13;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_14;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_15;
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_16;
extern _KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KnegativeQVKdMM1;
D KnegativeQVKdMM1I (D x_);
extern _KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KpositiveQVKdMM1;
D KpositiveQVKdMM1I (D x_);
extern _KLmethod_domainGVKe KzeroQVKdRD_dylanRD_2;
extern _KLsimple_methodGVKe KzeroQVKdMM1;
D KzeroQVKdMM1I (D x_);
extern _KLsimple_methodGVKe KevenQVKdMM1;
D KevenQVKdMM1I (D x_);
extern _KLmethod_domainGVKe KevenQVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KoddQVKdMM1;
D KoddQVKdMM1I (D x_);
extern _KLmethod_domainGVKe KoddQVKdRD_dylanRD_0;
extern _KLsimple_methodGVKe KintegralQVKdMM1;
D KintegralQVKdMM1I (D x_);
extern _KLmethod_domainGVKe KintegralQVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_51;
extern _KLkeyword_methodGVKe KmakeVKdMM8;
D KmakeVKdMM8I (D class_, D Urest_, D low_, D high_);
static _KLkeyword_signatureAvaluesGVKi K51;
static _KLsimple_object_vectorGVKd_4 K52;
static _KLsimple_object_vectorGVKd_1 K53;
static _KLsimple_object_vectorGVKd_2 K54;
static _KLsingletonGVKd K55;
static _KLsignatureAvaluesGVKi K56;
static _KLsignatureAvaluesGVKi K57;
static _KLsimple_object_vectorGVKd_2 K58;
static _KLsignatureAvaluesGVKi K59;
static _KLsimple_object_vectorGVKd_2 K60;
static _KLsignatureAvaluesGVKi K61;
static _KLsignatureAvaluesGVKi K62;
static _KLsimple_object_vectorGVKd_2 K63;
static _KLsignatureAvaluesGVKi K64;
static _KLsimple_object_vectorGVKd_2 K65;

/* Indirection variables */


/* Variables */


/* Objects */

_KLsimple_methodGVKe KLVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K64,
  &KLVKdMM0I
};

_KLsimple_methodGVKe KLVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K62,
  &KLVKdMM1I
};

_KLsimple_methodGVKe KLVKdMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K61,
  &KLVKdMM8I
};

_KLsimple_methodGVKe KLVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K59,
  &KLVKdMM9I
};

_KLsimple_methodGVKe KLVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KLVKdMM10I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_5 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_4,
  &KLVKdMM0
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_6 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_5,
  &KLVKdMM10
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_7 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_6,
  &KLVKdMM1
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_8 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_7,
  &KLVKdMM9
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_9 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_8,
  &KLVKdMM8
};

_KLsimple_methodGVKe KEVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K64,
  &KEVKdMM0I
};

_KLsimple_methodGVKe KEVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K62,
  &KEVKdMM1I
};

_KLsimple_methodGVKe KEVKdMM9 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K61,
  &KEVKdMM9I
};

_KLsimple_methodGVKe KEVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K59,
  &KEVKdMM10I
};

_KLsimple_methodGVKe KEVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KEVKdMM11I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_12 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_11,
  &KEVKdMM0
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_13 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_12,
  &KEVKdMM11
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_14 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_13,
  &KEVKdMM1
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_14,
  &KEVKdMM10
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_16 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_15,
  &KEVKdMM9
};

_KLmethod_domainGVKe KnegativeQVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KnegativeQVKdRD_dylanRD_1,
  &KnegativeQVKdMM1
};

_KLsimple_methodGVKe KnegativeQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &KnegativeQVKdMM1I
};

_KLmethod_domainGVKe KpositiveQVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KpositiveQVKdRD_dylanRD_1,
  &KpositiveQVKdMM1
};

_KLsimple_methodGVKe KpositiveQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &KpositiveQVKdMM1I
};

_KLmethod_domainGVKe KzeroQVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KzeroQVKdRD_dylanRD_1,
  &KzeroQVKdMM1
};

_KLsimple_methodGVKe KzeroQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &KzeroQVKdMM1I
};

_KLsimple_methodGVKe KevenQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &KevenQVKdMM1I
};

_KLmethod_domainGVKe KevenQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KevenQVKdMM1
};

_KLsimple_methodGVKe KoddQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &KoddQVKdMM1I
};

_KLmethod_domainGVKe KoddQVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KoddQVKdMM1
};

_KLsimple_methodGVKe KintegralQVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K56,
  &KintegralQVKdMM1I
};

_KLmethod_domainGVKe KintegralQVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KintegralQVKdRD_dylanRD_1,
  &KintegralQVKdMM1
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_51 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_50,
  &KmakeVKdMM8
};

_KLkeyword_methodGVKe KmakeVKdMM8 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K51,
  &key_mep_4,
  &KmakeVKdMM8I,
  &K52
};

static _KLkeyword_signatureAvaluesGVKi K51 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K53,
  &K54,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Ldouble_integerG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJlow_,
  &KPfalseVKi,
  &KJhigh_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K55
};

static _KLsimple_object_vectorGVKd_2 K54 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJlow_,
  &KJhigh_
};

static _KLsingletonGVKd K55 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLdouble_integerGVKe
};

static _KLsignatureAvaluesGVKi K56 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ldouble_integerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K57 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K58,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K58 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfloatGVKd,
  &KLdouble_integerGVKe
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K60,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K60 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLdouble_integerGVKe
};

static _KLsignatureAvaluesGVKi K61 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Ldouble_integerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K62 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K63,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K63 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_integerGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K64 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K65,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K65 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_integerGVKe,
  &KLfloatGVKd
};

/* Code */

D KLVKdMM0I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4_0 = CONGRUENT_CALL2(&KLdouble_floatGVKd, x_);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  T6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T3_0 = CONGRUENT_CALL2(T6, y_);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  MV_SET_COUNT(1);
  return(T3_0);
}

D KLVKdMM1I (D x_, D y_) {
  D T3;
  DADDR T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T3 = primitive_initialized_slot_value(x_,1);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T4 = primitive_cast_pointer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T5 = primitive_machine_word_less_thanQ(T4,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLVKdMM8I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  DADDR T8;
  D T9;
  DADDR T10;
  D T11;
  D T12;
  D T13;
  DADDR T14;
  D T15;
  DADDR T16;
  D T17;
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:96
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
  T7 = primitive_initialized_slot_value(x_,1);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
  T8 = primitive_cast_pointer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
  T9 = primitive_initialized_slot_value(y_,1);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
  T10 = primitive_cast_pointer_as_raw(T9);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
  T11 = primitive_machine_word_less_thanQ(T8,T10);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
    T3_0 = T11;
    T6_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:99
    T12 = primitive_machine_word_equalQ(T8,T10);
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:99
    if (T12 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:100
      T13 = primitive_initialized_slot_value(x_,0);
      // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:100
      T14 = primitive_cast_pointer_as_raw(T13);
      // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:100
      T15 = primitive_initialized_slot_value(y_,0);
      // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:100
      T16 = primitive_cast_pointer_as_raw(T15);
      // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:100
      T17 = primitive_machine_word_unsigned_less_thanQ(T14,T16);
      // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:100
      T18_0 = T17;
      T5_0 = T18_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:99
      T4_0 = &KPfalseVKi;
      T5_0 = T4_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:99
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:96
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLVKdMM9I (D x_, D y_) {
  D T3;
  DADDR T4;
  D T5;
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T3 = primitive_initialized_slot_value(y_,1);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T4 = primitive_cast_pointer_as_raw(T3);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T5 = primitive_machine_word_less_thanQ(T4,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T7 = primitive_not(T5);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:107
  MV_SET_COUNT(1);
  return(T6_0);
}

D KLVKdMM10I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4_0 = CONGRUENT_CALL2(&KLdouble_floatGVKd, y_);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  T6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T3_0 = CONGRUENT_CALL2(x_, T6);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:108
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM0I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4_0 = CONGRUENT_CALL2(&KLdouble_floatGVKd, x_);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  T6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(T6, y_);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM1I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:93
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:93
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM9I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5;
  DADDR T6;
  D T7;
  DADDR T8;
  D T9;
  D T10;
  DADDR T11;
  D T12;
  DADDR T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:86
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
  T5 = primitive_initialized_slot_value(x_,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
  T6 = primitive_cast_pointer_as_raw(T5);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
  T7 = primitive_initialized_slot_value(y_,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
  T8 = primitive_cast_pointer_as_raw(T7);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
  T9 = primitive_machine_word_equalQ(T6,T8);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:89
    T10 = primitive_initialized_slot_value(x_,1);
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:89
    T11 = primitive_cast_pointer_as_raw(T10);
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:89
    T12 = primitive_initialized_slot_value(y_,1);
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:89
    T13 = primitive_cast_pointer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:89
    T14 = primitive_machine_word_equalQ(T11,T13);
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:89
    T15_0 = T14;
    T4_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
    T3_0 = &KPfalseVKi;
    T4_0 = T3_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:86
  MV_SET_COUNT(1);
  return(T4_0);
}

D KEVKdMM10I (D x_, D y_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:93
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:93
  MV_SET_COUNT(1);
  return(T3_0);
}

D KEVKdMM11I (D x_, D y_) {
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4_0 = CONGRUENT_CALL2(&KLdouble_floatGVKd, y_);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  T5_0 = T4_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  T6 = T5_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T3_0 = CONGRUENT_CALL2(x_, T6);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:94
  MV_SET_COUNT(1);
  return(T3_0);
}

D KnegativeQVKdMM1I (D x_) {
  D T2;
  DADDR T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:129
  T2 = primitive_initialized_slot_value(x_,1);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:129
  T3 = primitive_cast_pointer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:129
  T4 = primitive_machine_word_less_thanQ(T3,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:129
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:128
  MV_SET_COUNT(1);
  return(T5_0);
}

D KpositiveQVKdMM1I (D x_) {
  D T2;
  DADDR T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:125
  T2 = primitive_initialized_slot_value(x_,1);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:125
  T3 = primitive_cast_pointer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:125
  T4 = primitive_machine_word_less_thanQ(T3,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:125
  T6 = primitive_not(T4);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:125
  T5_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:124
  MV_SET_COUNT(1);
  return(T5_0);
}

D KzeroQVKdMM1I (D x_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:120
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:121
  T2_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:120
  MV_SET_COUNT(1);
  return(T2_0);
}

D KevenQVKdMM1I (D x_) {
  D T2;
  DADDR T3;
  D T4;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:114
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:115
  T2 = primitive_initialized_slot_value(x_,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:115
  T3 = primitive_cast_pointer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:115
  T4 = primitive_machine_word_logbitQ(0,T3);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:115
  T6 = primitive_not(T4);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:115
  T5_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:114
  MV_SET_COUNT(1);
  return(T5_0);
}

D KoddQVKdMM1I (D x_) {
  D T2;
  DADDR T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:110
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:111
  T2 = primitive_initialized_slot_value(x_,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:111
  T3 = primitive_cast_pointer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:111
  T4 = primitive_machine_word_logbitQ(0,T3);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:111
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:110
  MV_SET_COUNT(1);
  return(T5_0);
}

D KintegralQVKdMM1I (D x_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:132
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:133
  T2_0 = &KPtrueVKi;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:132
  MV_SET_COUNT(1);
  return(T2_0);
}

D KmakeVKdMM8I (D class_, D Urest_, D low_, D high_) {
  D lowF5;
  D highF6;
  D T7_0;
  D T8_0;
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
  DWORD T21;
  D T22;
  DWORD T23;
  D T24;

  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:36
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:36
  primitive_type_check(low_, &KLmachine_wordGVKe);
  lowF5 = low_;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:36
  primitive_type_check(high_, &KLmachine_wordGVKe);
  highF6 = high_;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T9 = SLOT_VALUE(&KLdouble_integerGVKe, 2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T11 = SLOT_VALUE_INITD(T9, 0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T13 = primitive_machine_word_logand(T12,262140);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T14 = primitive_machine_word_add_signal_overflow(5,T13);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T15 = primitive_machine_word_shift_right(T14,2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T17 = SLOT_VALUE_INITD(T9, 2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T18_0 = T17;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T16_0 = T18_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T19 = T16_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T20 = primitive_machine_word_shift_right(T13,2);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:39
  T10 = primitive_object_allocate_filled(T15,T19,T20,&KPunboundVKi,0,0,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:40
  T21 = primitive_unwrap_machine_word(lowF5);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:40
  T22 = primitive_cast_raw_as_pointer(T21);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:40
  primitive_slot_value_setter(T22,T10,0);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:41
  T23 = primitive_unwrap_machine_word(highF6);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:41
  T24 = primitive_cast_raw_as_pointer(T23);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:41
  primitive_slot_value_setter(T24,T10,1);
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:42
  T7_0 = T10;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:36
  T8_0 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/double-integer-basics.dylan:36
  MV_SET_COUNT(1);
  return(T8_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_double_integer_basics_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_double_integer_basics_for_user () {
  return;
}


/* eof */
