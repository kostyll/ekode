#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(12);

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
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

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
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

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
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
} _KLcharacterGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(2);

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

D KmakeVKdMM33I (D class_, D Urest_, D fill_, D size_);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
D Kelement_range_errorVKeI (D collection_, D key_);
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_56;
extern _KLlimited_integerGVKe KLbyteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLcharacterGVKd;
extern _KLmm_wrapperGVKi_0 KLcharacterGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_characterG_typesVKi;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_56;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJcode_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLstandalone_domainGVKe_2 KEVKdRD_dylanRD_21;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLstandalone_domainGVKe_2 KLVKdRD_dylanRD_14;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLsimple_methodGVKe Kas_lowercaseVKdMM2;
extern _KLsimple_methodGVKe Kas_lowercaseVKdMM3;
extern _KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_1;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe Kas_uppercaseVKdMM1;
extern _KLsimple_methodGVKe Kas_uppercaseVKdMM2;
extern _KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_1;

/* Defined object declarations */

extern _KLsimple_methodGVKe KLVKdMM4;
D KLVKdMM4I (D character_1_, D character_2_);
extern _KLmethod_domainGVKe KLVKdRD_dylanRD_15;
extern _KLsimple_methodGVKe KEVKdMM5;
D KEVKdMM5I (D character_1_, D character_2_);
extern _KLmethod_domainGVKe KEVKdRD_dylanRD_22;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_58;
D Kas_uppercaseVKdMM0I (D);
D Kas_lowercaseVKdMM0I (D);
extern _KLkeyword_methodGVKe KmakeVKdMM4;
D KmakeVKdMM4I (D class_, D Urest_, D code_);
extern _KLkeyword_methodGVKe KmakeVKdMM5;
D KmakeVKdMM5I (D class_, D Urest_, D code_);
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_57;
extern _KLsimple_methodGVKe KasVKdMM13;
D KasVKdMM13I (D class_, D integer_);
extern _KLsimple_methodGVKe KasVKdMM14;
D KasVKdMM14I (D class_, D character_);
extern _KLsimple_methodGVKe KasVKdMM15;
D KasVKdMM15I (D type_, D character_);
extern _KLsimple_methodGVKe KasVKdMM17;
D KasVKdMM17I (D class_, D integer_);
extern _KLsimple_methodGVKe KasVKdMM18;
D KasVKdMM18I (D class_, D character_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_57;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_58;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_59;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_60;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_61;
static _KLsignatureAvaluesGVKi K31;
static _KLsimple_object_vectorGVKd_2 K32;
static _KLsimple_object_vectorGVKd_1 K33;
static _KLsingletonGVKd K34;
static _KLsignatureGVKe K35;
static _KLsimple_object_vectorGVKd_2 K36;
static _KLsingletonGVKd K37;
static _KLsignatureAvaluesGVKi K38;
static _KLsimple_object_vectorGVKd_2 K39;
static _KLsignatureAvaluesGVKi K40;
static _KLsimple_object_vectorGVKd_2 K41;
static _KLsingletonGVKd K42;
static _KLsignatureAvaluesGVKi K43;
static _KLsimple_object_vectorGVKd_2 K44;
static _KLsingletonGVKd K45;
static _KLkeyword_signatureAvaluesGVKi K46;
static _KLsimple_object_vectorGVKd_2 K47;
static _KLsimple_object_vectorGVKd_1 K48;
static _KLsimple_object_vectorGVKd_1 K49;
static _KLkeyword_signatureAvaluesGVKi K50;
static _KLsimple_object_vectorGVKd_1 K51;
static _KLsignatureAvaluesGVKi K52;
static _KLsimple_object_vectorGVKd_2 K53;
extern _KLincremental_generic_functionGVKe Kas_lowercaseVKd;
extern _KLsimple_methodGVKe Kas_lowercaseVKdMM0;
extern _KLsimple_methodGVKe Kas_lowercaseVKdMM1;
D Kas_lowercaseVKdMM1I (D character_);
extern _KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_2;
extern _KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_3;
static _KLpairGVKd K60;
static _KLpairGVKd K61;
static _KLpairGVKd K62;
static _KLpairGVKd K63;
static _KLsignatureGVKe K64;
static _KLbyte_stringGVKd_12 K65;
static _KLsignatureAvaluesGVKi K66;
static _KLsignatureAvaluesGVKi K67;
static _KLsimple_object_vectorGVKd_1 K68;
extern _KLincremental_generic_functionGVKe Kas_uppercaseVKd;
extern _KLsimple_methodGVKe Kas_uppercaseVKdMM0;
extern _KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_2;
static _KLpairGVKd K72;
static _KLpairGVKd K73;
static _KLpairGVKd K74;
static _KLbyte_stringGVKd_12 K75;

/* Indirection variables */


/* Variables */

D as_uppercaseVKd = &Kas_uppercaseVKd;
D as_lowercaseVKd = &Kas_lowercaseVKd;
D Dlowercase_asciiVKi = &KPunboundVKi;

/* Objects */

_KLsimple_methodGVKe KLVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K52,
  &KLVKdMM4I
};

_KLmethod_domainGVKe KLVKdRD_dylanRD_15 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KLVKdRD_dylanRD_14,
  &KLVKdMM4
};

_KLsimple_methodGVKe KEVKdMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K52,
  &KEVKdMM5I
};

_KLmethod_domainGVKe KEVKdRD_dylanRD_22 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KEVKdRD_dylanRD_21,
  &KEVKdMM5
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_58 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_57,
  &KmakeVKdMM4
};

_KLkeyword_methodGVKe KmakeVKdMM4 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K50,
  &key_mep_3,
  &KmakeVKdMM4I,
  &K47
};

_KLkeyword_methodGVKe KmakeVKdMM5 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K46,
  &key_mep_3,
  &KmakeVKdMM5I,
  &K47
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_57 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_56,
  &KmakeVKdMM5
};

_KLsimple_methodGVKe KasVKdMM13 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K43,
  &KasVKdMM13I
};

_KLsimple_methodGVKe KasVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K40,
  &KasVKdMM14I
};

_KLsimple_methodGVKe KasVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K38,
  &KasVKdMM15I
};

_KLsimple_methodGVKe KasVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K35,
  &KasVKdMM17I
};

_KLsimple_methodGVKe KasVKdMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K31,
  &KasVKdMM18I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_57 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_56,
  &KasVKdMM13
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_58 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_57,
  &KasVKdMM14
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_59 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_58,
  &KasVKdMM15
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_60 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_59,
  &KasVKdMM18
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_61 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_60,
  &KasVKdMM17
};

static _KLsignatureAvaluesGVKi K31 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K32,
  &K33
};

static _KLsimple_object_vectorGVKd_2 K32 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K34,
  &KLbyte_characterGVKe
};

static _KLsimple_object_vectorGVKd_1 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLbyteGVKe
};

static _KLsingletonGVKd K34 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLabstract_integerGVKe
};

static _KLsignatureGVKe K35 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944073,
  &K36
};

static _KLsimple_object_vectorGVKd_2 K36 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K37,
  &KLabstract_integerGVKe
};

static _KLsingletonGVKd K37 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLcharacterGVKd
};

static _KLsignatureAvaluesGVKi K38 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K39,
  &K33
};

static _KLsimple_object_vectorGVKd_2 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_integerGVKe,
  &KLbyte_characterGVKe
};

static _KLsignatureAvaluesGVKi K40 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K41,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K42,
  &KLbyte_characterGVKe
};

static _KLsingletonGVKd K42 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K43 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K44,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K44 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K45,
  &KLintegerGVKd
};

static _KLsingletonGVKd K45 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_characterGVKe
};

static _KLkeyword_signatureAvaluesGVKi K46 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K48,
  &K49,
  &K33,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K47 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcode_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K48 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K45
};

static _KLsimple_object_vectorGVKd_1 K49 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJcode_
};

static _KLkeyword_signatureAvaluesGVKi K50 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K51,
  &K49,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_1 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K37
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K53,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLcharacterGVKd,
  &KLcharacterGVKd
};

_KLincremental_generic_functionGVKe Kas_lowercaseVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K64,
  &KPfalseVKi,
  &K65,
  &K60,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kas_lowercaseVKdRD_dylanRD_3,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kas_lowercaseVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K67,
  &Kas_lowercaseVKdMM0I
};

_KLsimple_methodGVKe Kas_lowercaseVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K66,
  &Kas_lowercaseVKdMM1I
};

_KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kas_lowercaseVKdRD_dylanRD_1,
  &Kas_lowercaseVKdMM1
};

_KLmethod_domainGVKe Kas_lowercaseVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kas_lowercaseVKdRD_dylanRD_2,
  &Kas_lowercaseVKdMM0
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_lowercaseVKdMM0,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_lowercaseVKdMM1,
  &K62
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_lowercaseVKdMM2,
  &K63
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_lowercaseVKdMM3,
  &KPempty_listVKi
};

static _KLsignatureGVKe K64 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LobjectG_typesVKi
};

static _KLbyte_stringGVKd_12 K65 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "as-lowercase"
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lbyte_characterG_typesVKi,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsignatureAvaluesGVKi K67 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &K68,
  &K68
};

static _KLsimple_object_vectorGVKd_1 K68 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLcharacterGVKd
};

_KLincremental_generic_functionGVKe Kas_uppercaseVKd = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K64,
  &KPfalseVKi,
  &K75,
  &K72,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_moduleYdylan_userVdylan,
  &Kas_uppercaseVKdRD_dylanRD_2,
  &KPempty_vectorVKi,
  (D) 25
};

_KLsimple_methodGVKe Kas_uppercaseVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K67,
  &Kas_uppercaseVKdMM0I
};

_KLmethod_domainGVKe Kas_uppercaseVKdRD_dylanRD_2 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kas_uppercaseVKdRD_dylanRD_1,
  &Kas_uppercaseVKdMM0
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_uppercaseVKdMM0,
  &K73
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_uppercaseVKdMM1,
  &K74
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &Kas_uppercaseVKdMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K75 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "as-uppercase"
};

/* Code */

D KLVKdMM4I (D character_1_, D character_2_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:28
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:30
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLintegerGVKd, character_1_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:30
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLintegerGVKd, character_2_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:30
  CONGRUENT_CALL_PROLOG(&KLVKd, 2);
  T5_0 = CONGRUENT_CALL2(T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:28
  MV_SET_COUNT(1);
  return(T5_0);
}

D KEVKdMM5I (D character_1_, D character_2_) {
  D T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:23
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:25
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3 = CONGRUENT_CALL2(&KLintegerGVKd, character_1_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:25
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T4 = CONGRUENT_CALL2(&KLintegerGVKd, character_2_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:25
  CONGRUENT_CALL_PROLOG(&KEVKd, 2);
  T5_0 = CONGRUENT_CALL2(T3, T4);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:23
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kas_uppercaseVKdMM0I (D character_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D code_;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T7 = CONGRUENT_CALL2(&KLintegerGVKd, character_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  code_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  T9 = primitive_cast_integer_as_raw(code_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  T10 = primitive_machine_word_less_thanQ(T9,389);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  if (T10 != &KPfalseVKi) {
    T14 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
    T12 = primitive_cast_integer_as_raw(code_);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
    T13 = primitive_machine_word_less_thanQ(489,T12);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
    T11 = primitive_not(T13);
    T14 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:37
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T2 = CONGRUENT_CALL2(&KLintegerGVKd, character_);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:37
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T3 = CONGRUENT_CALL2(T2, (D) -127);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:36
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4_0 = CONGRUENT_CALL2(&KLcharacterGVKd, T3);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:36
    T15_0 = T4_0;
    T6_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:39
    T5_0 = character_;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:33
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kas_lowercaseVKdMM0I (D character_) {
  D T2;
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D code_;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:53
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T7 = CONGRUENT_CALL2(&KLintegerGVKd, character_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  code_ = T7;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  T9 = primitive_cast_integer_as_raw(code_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  T10 = primitive_machine_word_less_thanQ(T9,261);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  if (T10 != &KPfalseVKi) {
    T14 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    T12 = primitive_cast_integer_as_raw(code_);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    T13 = primitive_machine_word_less_thanQ(361,T12);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    T11 = primitive_not(T13);
    T14 = T11;
  }
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  if (T14 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T2 = CONGRUENT_CALL2(&KLintegerGVKd, character_);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    CONGRUENT_CALL_PROLOG(&KAVKd, 2);
    T3 = CONGRUENT_CALL2(T2, (D) 129);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    CONGRUENT_CALL_PROLOG(&KasVKd, 2);
    T4_0 = CONGRUENT_CALL2(&KLcharacterGVKd, T3);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    T15_0 = T4_0;
    T6_0 = T15_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
    T5_0 = character_;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:53
  MV_SET_COUNT(1);
  return(T6_0);
}

D KmakeVKdMM4I (D class_, D Urest_, D code_) {
  D codeF4;
  D T5;
  D T6_0;
  DWORD T7;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:10
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:12
  primitive_type_check(code_, &KLbyteGVKe);
  codeF4 = code_;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:12
  T8 = primitive_cast_integer_as_raw(codeF4);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:12
  T7 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:12
  T5 = primitive_raw_as_byte_character(T7);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:12
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:10
  MV_SET_COUNT(1);
  return(T6_0);
}

D KmakeVKdMM5I (D class_, D Urest_, D code_) {
  D codeF4;
  D T5;
  D T6_0;
  DWORD T7;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  primitive_type_check(code_, &KLbyteGVKe);
  codeF4 = code_;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T8 = primitive_cast_integer_as_raw(codeF4);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T7 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T5 = primitive_raw_as_byte_character(T7);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  MV_SET_COUNT(1);
  return(T6_0);
}

D KasVKdMM13I (D class_, D integer_) {
  D T3;
  D T4_0;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T6 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T3 = primitive_raw_as_byte_character(T5);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM14I (D class_, D character_) {
  DSINT T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T3 = primitive_byte_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T4 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  MV_SET_COUNT(1);
  return(T7_0);
}

D KasVKdMM15I (D type_, D character_) {
  D T3_0;
  DSINT T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T4 = primitive_byte_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T5 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM17I (D class_, D integer_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:20
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLbyte_characterGVKe, integer_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:18
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM18I (D class_, D character_) {
  D T3_0;
  DSINT T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T4 = primitive_byte_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T5 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:121
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kas_lowercaseVKdMM1I (D character_) {
  DSINT T2;
  DWORD T3;
  DWORD T4;
  DBCHR T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:135
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:138
  T2 = primitive_byte_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:138
  T3 = primitive_machine_word_shift_left_signal_overflow(T2,2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:138
  T4 = primitive_machine_word_logior(T3,1);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:138
  T5 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(Dlowercase_asciiVKi, 1, T4);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:138
  T6 = primitive_raw_as_byte_character(T5);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:138
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:135
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_character_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_character_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:126
  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1025);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:125
  Dlowercase_asciiVKi = T1;
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:125
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  DWORD i_T, i_;
  D T1;
  D T2;
  DWORD T3;
  D T4;
  D T5;
  DWORD T6;
  D T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16;
  DWORD T17;

  // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
  T2 = SLOT_VALUE_INITD(Dlowercase_asciiVKi, 0);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
  T3 = primitive_cast_integer_as_raw(T2);
  // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
  i_T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
    i_ = i_T;
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
    T5 = primitive_cast_raw_as_integer(i_);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
    T4 = primitive_machine_word_less_thanQ(i_,T3);
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
    if (T4 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:129
      T6 = primitive_machine_word_shift_right(i_,2);
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      T12 = primitive_machine_word_shift_left_signal_overflow(T6,2);
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      T13 = primitive_machine_word_logior(T12,1);
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      T7 = primitive_machine_word_less_thanQ(T13,261);
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      if (T7 != &KPfalseVKi) {
        T10 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
        T9 = primitive_machine_word_less_thanQ(361,T13);
        // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
        T8 = primitive_not(T9);
        T10 = T8;
      }
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      if (T10 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
        T14 = primitive_machine_word_add_signal_overflow(T13,128);
        // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
        T15 = primitive_machine_word_shift_right(T14,2);
        T11 = T15;
      } else {
        T11 = T6;
      }
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      T16 = primitive_machine_word_unsigned_less_thanQ(i_,T3);
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      if (T16 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
        REPEATED_DBCHR_SLOT_VALUE_TAGGED_SETTER(T11, Dlowercase_asciiVKi, 1, i_);
      } else {
        // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
        Kelement_range_errorVKeI(Dlowercase_asciiVKi, T5);
      }
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:130
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
      T17 = primitive_machine_word_add_signal_overflow(i_,4);
      // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
      i_T = T17;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
    T1 = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/dylan/character.dylan:128
  goto I1;
}
I1:

  return;
}


/* eof */
