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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(8);
define__KLsimple_object_vectorGVKd(6);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(256);
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
} _KLsealed_generic_functionGVKe;

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

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(11);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

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
} _KLvectorGVKd;

typedef struct {
  D wrapper;
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
  D cache_header_engine_node_next_;
  D cache_header_engine_node_parent_;
} _KLsimple_typechecked_cache_header_engine_nodeGVKg;

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
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;


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
extern _KLsymbolGVKd KJtest_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Kelement_range_errorVKeI (D, D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLincremental_generic_functionGVKe KLVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_checkVKe;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_3VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLincremental_generic_functionGVKe Kelement_no_bounds_check_setterVKe;
extern _KLclassGVKd KLvectorGVKd;
extern _KLmm_wrapperGVKi_0 KLvectorGVKdW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_4VKi;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LvectorG_typesVKi;
D KmakeVKdMM23I (D class_, D Urest_, D fill_, D size_);
extern _KLsymbolGVKd KJstable_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLincremental_generic_functionGVKe KasVKd;
extern _KLincremental_generic_functionGVKe Ktype_for_copyVKd;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;

/* Defined object declarations */

extern _KLkeyword_methodGVKe KsortXVKdMM1;
D KsortXVKdMM1I (D, D, D, D);
extern _KLkeyword_methodGVKe KsortXVKdMM0;
D KsortXVKdMM0I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kmerge_sortXVKi;
extern _KLsealed_generic_functionGVKe Kquick_sortXVKi;
extern _KLkeyword_methodGVKe Kquick_sortXVKiMM0;
D Kquick_sortXVKiMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kquick_sortXVKiMM1;
D Kquick_sortXVKiMM1I (D, D, D, D, D);
static _KLpairGVKd K10;
static _KLpairGVKd K11;
static _KLkeyword_signatureGVKe K12;
static _KLbyte_stringGVKd_11 K13;
D Kinsertion_sortXVKiMM1I (D, D, D, D, D);
D KpartitionXVKiMM1I (D, D, D, D, D);
D Kmedian_of_threeVKiMM1I (D, D, D, D);
static _KLkeyword_signatureGVKe K17;
static _KLsimple_object_vectorGVKd_6 K18;
static _KLsimple_object_vectorGVKd_3 K19;
static _KLsimple_object_vectorGVKd_3 K20;
extern _KLsealed_generic_functionGVKe Kinsertion_sortXVKi;
extern _KLsealed_generic_functionGVKe KpartitionXVKi;
extern _KLkeyword_methodGVKe KpartitionXVKiMM0;
D KpartitionXVKiMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe KpartitionXVKiMM1;
static _KLpairGVKd K26;
static _KLpairGVKd K27;
static _KLbyte_stringGVKd_10 K28;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K29;
extern _KLsealed_generic_functionGVKe Kmedian_of_threeVKi;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K31;
extern _KLsealed_generic_functionGVKe Kswap_elementsXVKi;
extern _KLsimple_methodGVKe Kswap_elementsXVKiMM0;
D Kswap_elementsXVKiMM0I (D vector_, D key1_, D key2_);
extern _KLsimple_methodGVKe Kswap_elementsXVKiMM1;
D Kswap_elementsXVKiMM1I (D vector_, D key1_, D key2_);
static _KLpairGVKd K37;
static _KLpairGVKd K38;
static _KLbyte_stringGVKd_14 K39;
static _KLsignatureGVKe K40;
static _KLsimple_object_vectorGVKd_3 K41;
static _KLsignatureGVKe K42;
static _KLsimple_object_vectorGVKd_3 K43;
extern _KLsimple_methodGVKe Kmedian_of_threeVKiMM0;
D Kmedian_of_threeVKiMM0I (D, D, D, D);
extern _KLsimple_methodGVKe Kmedian_of_threeVKiMM1;
static _KLpairGVKd K47;
static _KLpairGVKd K48;
static _KLbyte_stringGVKd_15 K49;
static _KLsignatureAvaluesGVKi K50;
static _KLsimple_object_vectorGVKd_4 K51;
static _KLsignatureAvaluesGVKi K52;
static _KLsimple_object_vectorGVKd_4 K53;
static _KLkeyword_signatureGVKe K54;
extern _KLkeyword_methodGVKe Kinsertion_sortXVKiMM0;
D Kinsertion_sortXVKiMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kinsertion_sortXVKiMM1;
static _KLpairGVKd K58;
static _KLpairGVKd K59;
static _KLbyte_stringGVKd_15 K60;
extern _KLkeyword_methodGVKe Kmerge_sortXVKiMM0;
D Kmerge_sortXVKiMM0I (D, D, D, D, D);
extern _KLkeyword_methodGVKe Kmerge_sortXVKiMM1;
D Kmerge_sortXVKiMM1I (D, D, D, D, D);
static _KLpairGVKd K65;
static _KLpairGVKd K66;
static _KLbyte_stringGVKd_11 K67;
D KmergeXVKiMM1I (D, D, D, D, D, D);
static _KLsymbolGVKd KJmiddle_;
extern _KLsealed_generic_functionGVKe KmergeXVKi;
extern _KLkeyword_methodGVKe KmergeXVKiMM0;
D KmergeXVKiMM0I (D, D, D, D, D, D);
extern _KLkeyword_methodGVKe KmergeXVKiMM1;
static _KLpairGVKd K74;
static _KLpairGVKd K75;
static _KLbyte_stringGVKd_6 K76;
static _KLkeyword_signatureGVKe K77;
static _KLsimple_object_vectorGVKd_8 K78;
static _KLsimple_object_vectorGVKd_4 K79;
static _KLsimple_object_vectorGVKd_4 K80;
static _KLkeyword_signatureGVKe K81;
static _KLbyte_stringGVKd_6 K82;
static _KLkeyword_signatureAvaluesGVKi K83;
static _KLsimple_object_vectorGVKd_4 K84;
static _KLsimple_object_vectorGVKd_2 K85;
static _KLkeyword_signatureAvaluesGVKi K86;

/* Indirection variables */

static D IKJmiddle_ = &KJmiddle_;

/* Variables */


/* Objects */

_KLkeyword_methodGVKe KsortXVKdMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K86,
  &key_mep_4,
  &KsortXVKdMM1I,
  &K84
};

_KLkeyword_methodGVKe KsortXVKdMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K83,
  &key_mep_4,
  &KsortXVKdMM0I,
  &K84
};

_KLsealed_generic_functionGVKe Kmerge_sortXVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K12,
  (D) 1,
  &K67,
  &K65,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe Kquick_sortXVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K12,
  (D) 1,
  &K13,
  &K10,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe Kquick_sortXVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K54,
  &key_mep_5,
  &Kquick_sortXVKiMM0I,
  &K18
};

_KLkeyword_methodGVKe Kquick_sortXVKiMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K17,
  &key_mep_5,
  &Kquick_sortXVKiMM1I,
  &K18
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &Kquick_sortXVKiMM0,
  &K11
};

static _KLpairGVKd K11 = {
  &KLpairGVKdW /* wrapper */,
  &Kquick_sortXVKiMM1,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K12 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_11 K13 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "quick-sort!"
};

static _KLkeyword_signatureGVKe K17 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_Lsimple_object_vectorG_typesVKi,
  &K19,
  &K20
};

static _KLsimple_object_vectorGVKd_6 K18 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 25,
  &KJtest_,
  &KLVKd,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_3 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KJtest_,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_3 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kinsertion_sortXVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K12,
  (D) 1,
  &K60,
  &K58,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsealed_generic_functionGVKe KpartitionXVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K12,
  (D) 1,
  &K28,
  &K26,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KpartitionXVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K54,
  &key_mep_5,
  &KpartitionXVKiMM0I,
  &K18
};

_KLkeyword_methodGVKe KpartitionXVKiMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K17,
  &key_mep_5,
  &KpartitionXVKiMM1I,
  &K18
};

static _KLpairGVKd K26 = {
  &KLpairGVKdW /* wrapper */,
  &KpartitionXVKiMM0,
  &K27
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &KpartitionXVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K28 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "partition!"
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K29 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 917561,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmedian_of_threeVKi
};

_KLsealed_generic_functionGVKe Kmedian_of_threeVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_4,
  &KDsignature_LobjectG_object_rest_value_4VKi,
  (D) 57,
  &K49,
  &K47,
  &RSINGULAR_Labsent_engine_nodeG
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K31 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 393273,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kswap_elementsXVKi
};

_KLsealed_generic_functionGVKe Kswap_elementsXVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &KDsignature_LobjectG_object_rest_value_3VKi,
  (D) 25,
  &K39,
  &K37,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kswap_elementsXVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K42,
  &Kswap_elementsXVKiMM0I
};

_KLsimple_methodGVKe Kswap_elementsXVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K40,
  &Kswap_elementsXVKiMM1I
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Kswap_elementsXVKiMM0,
  &K38
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &Kswap_elementsXVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K39 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "swap-elements!"
};

static _KLsignatureGVKe K40 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K41
};

static _KLsimple_object_vectorGVKd_3 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLsignatureGVKe K42 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040205,
  &K43
};

static _KLsimple_object_vectorGVKd_3 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLvectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

_KLsimple_methodGVKe Kmedian_of_threeVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K52,
  &Kmedian_of_threeVKiMM0I
};

_KLsimple_methodGVKe Kmedian_of_threeVKiMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K50,
  &Kmedian_of_threeVKiMM1I
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &Kmedian_of_threeVKiMM0,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Kmedian_of_threeVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K49 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "median-of-three"
};

static _KLsignatureAvaluesGVKi K50 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K51,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K51 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLsimple_object_vectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLfunctionGVKd
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K53,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLvectorGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLfunctionGVKd
};

static _KLkeyword_signatureGVKe K54 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_LvectorG_typesVKi,
  &K19,
  &K20
};

_KLkeyword_methodGVKe Kinsertion_sortXVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K54,
  &key_mep_5,
  &Kinsertion_sortXVKiMM0I,
  &K18
};

_KLkeyword_methodGVKe Kinsertion_sortXVKiMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K17,
  &key_mep_5,
  &Kinsertion_sortXVKiMM1I,
  &K18
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &Kinsertion_sortXVKiMM0,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &Kinsertion_sortXVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_15 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "insertion-sort!"
};

_KLkeyword_methodGVKe Kmerge_sortXVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K54,
  &key_mep_5,
  &Kmerge_sortXVKiMM0I,
  &K18
};

_KLkeyword_methodGVKe Kmerge_sortXVKiMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K17,
  &key_mep_5,
  &Kmerge_sortXVKiMM1I,
  &K18
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &Kmerge_sortXVKiMM0,
  &K66
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &Kmerge_sortXVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K67 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "merge-sort!"
};

static _KLsymbolGVKd KJmiddle_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K82
};

_KLsealed_generic_functionGVKe KmergeXVKi = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K12,
  (D) 1,
  &K76,
  &K74,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLkeyword_methodGVKe KmergeXVKiMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K81,
  &key_mep_6,
  &KmergeXVKiMM0I,
  &K78
};

_KLkeyword_methodGVKe KmergeXVKiMM1 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_6,
  &K77,
  &key_mep_6,
  &KmergeXVKiMM1I,
  &K78
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &KmergeXVKiMM0,
  &K75
};

static _KLpairGVKd K75 = {
  &KLpairGVKdW /* wrapper */,
  &KmergeXVKiMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_6 K76 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "merge!"
};

static _KLkeyword_signatureGVKe K77 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_Lsimple_object_vectorG_typesVKi,
  &K79,
  &K80
};

static _KLsimple_object_vectorGVKd_8 K78 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 33,
  &KJtest_,
  &KLVKd,
  &KJstart_,
  &KPfalseVKi,
  &KJmiddle_,
  &KPfalseVKi,
  &KJend_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_4 K79 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KJstart_,
  &KJmiddle_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_4 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLfunctionGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd,
  &KLintegerGVKd
};

static _KLkeyword_signatureGVKe K81 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 44302341,
  &KDsignature_LvectorG_typesVKi,
  &K79,
  &K80
};

static _KLbyte_stringGVKd_6 K82 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "middle"
};

static _KLkeyword_signatureAvaluesGVKi K83 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LvectorG_typesVKi,
  &K85,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KLVKd,
  &KJstable_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K85 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJstable_
};

static _KLkeyword_signatureAvaluesGVKi K86 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_LsequenceG_typesVKi,
  &K85,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

/* Code */

D KsortXVKdMM1I (D sequence_, D Urest_, D test_, D stable_) {
  D vector_;
  D T6;
  D T7;
  D result_;
  D T9;
  D T10_0;
  D T11_0;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T13 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:474
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:476
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  vector_ = CONGRUENT_CALL2(&KLvectorGVKd, sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:477
  if (stable_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:477
    T12.vector_element_[0] = &KJtest_;
    T12.vector_element_[1] = test_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:477
    CONGRUENT_CALL_PROLOG(&Kmerge_sortXVKi, 2);
    T6 = CONGRUENT_CALL2(vector_, &T12);
    result_ = T6;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:478
    T13.vector_element_[0] = &KJtest_;
    T13.vector_element_[1] = test_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:478
    CONGRUENT_CALL_PROLOG(&Kquick_sortXVKi, 2);
    T7 = CONGRUENT_CALL2(vector_, &T13);
    result_ = T7;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:477
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:480
  CONGRUENT_CALL_PROLOG(&Ktype_for_copyVKd, 1);
  T9 = CONGRUENT_CALL1(sequence_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:480
  CONGRUENT_CALL_PROLOG(&KasVKd, 2);
  T10_0 = CONGRUENT_CALL2(T9, result_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:474
  T11_0 = T10_0;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:474
  MV_SET_COUNT(1);
  return(T11_0);
}

D KsortXVKdMM0I (D vector_, D Urest_, D test_, D stable_) {
  D T5_0;
  _KLsimple_object_vectorGVKd_2 T6 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:463
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:465
  if (stable_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:466
    T6.vector_element_[0] = &KJtest_;
    T6.vector_element_[1] = test_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:466
    CONGRUENT_CALL_PROLOG(&Kmerge_sortXVKi, 2);
    CONGRUENT_CALL2(vector_, &T6);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:468
    T7.vector_element_[0] = &KJtest_;
    T7.vector_element_[1] = test_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:468
    CONGRUENT_CALL_PROLOG(&Kquick_sortXVKi, 2);
    CONGRUENT_CALL2(vector_, &T7);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:465
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:470
  T5_0 = vector_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:463
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kquick_sortXVKiMM0I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  D T9;
  DWORD UendF10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD UendF16;
  D T17;
  D middle_;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  DWORD T24;
  D T25;
  DWORD T26;
  D T27;
  D T28;
  DWORD T29;
  D T30;
  DWORD T31;
  D T32;
  DWORD T33;
  DWORD T34;
  DWORD T35;
  D T36;
  _KLsimple_object_vectorGVKd_6 T37 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T38;
  _KLsimple_object_vectorGVKd_6 T39 = {&KLsimple_object_vectorGVKdW, (D) 25};
  _KLsimple_object_vectorGVKd_6 T40 = {&KLsimple_object_vectorGVKdW, (D) 25};
  _KLsimple_object_vectorGVKd_6 T41 = {&KLsimple_object_vectorGVKdW, (D) 25};
  DWORD T42;
  DWORD T43;
  D T44;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
  T11 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:447
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T8 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
    T9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
    primitive_type_check(T9, &KLintegerGVKd);
    T12 = T9;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T42 = primitive_cast_integer_as_raw(T12);
    UendF10 = T42;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
    primitive_type_check(Uend_, &KLintegerGVKd);
    T13 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T43 = primitive_cast_integer_as_raw(T13);
    UendF10 = T43;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T44 = primitive_cast_raw_as_integer(UendF10);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T20 = primitive_idQ(T44,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T14 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T15 = T14;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    primitive_type_check(T15, &KLintegerGVKd);
    T21 = T15;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T31 = primitive_cast_integer_as_raw(T21);
    UendF16 = T31;
  } else {
    UendF16 = UendF10;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T32 = primitive_cast_raw_as_integer(UendF16);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T17 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T24 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T25 = primitive_machine_word_less_thanQ(T24,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  if (T25 != &KPfalseVKi) {
    T22 = T25;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T26 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T27 = primitive_machine_word_less_thanQ(T26,T24);
    T22 = T27;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    Kelement_range_errorVKeI(vector_, UstartF7);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T28 = primitive_machine_word_less_thanQ(UendF16,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  if (T28 != &KPfalseVKi) {
    T23 = T28;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T29 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T30 = primitive_machine_word_less_thanQ(T29,UendF16);
    T23 = T30;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  if (T23 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    Kelement_range_errorVKeI(vector_, T32);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T33 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T34 = primitive_machine_word_logxor(T33,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T35 = primitive_machine_word_subtract_signal_overflow(UendF16,T34);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T36 = primitive_machine_word_less_thanQ(T35,41);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  if (T36 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T37.vector_element_[0] = &KJtest_;
    T37.vector_element_[1] = testF6;
    T37.vector_element_[2] = &KJstart_;
    T37.vector_element_[3] = UstartF7;
    T37.vector_element_[4] = &KJend_;
    T37.vector_element_[5] = T32;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    CONGRUENT_CALL_PROLOG(&Kinsertion_sortXVKi, 2);
    CONGRUENT_CALL2(vector_, &T37);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    T38 = primitive_machine_word_less_thanQ(5,T35);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
    if (T38 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
      T39.vector_element_[0] = &KJtest_;
      T39.vector_element_[1] = testF6;
      T39.vector_element_[2] = &KJstart_;
      T39.vector_element_[3] = UstartF7;
      T39.vector_element_[4] = &KJend_;
      T39.vector_element_[5] = T32;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
      CONGRUENT_CALL_PROLOG(&KpartitionXVKi, 2);
      middle_ = CONGRUENT_CALL2(vector_, &T39);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
      T40.vector_element_[0] = &KJtest_;
      T40.vector_element_[1] = testF6;
      T40.vector_element_[2] = &KJstart_;
      T40.vector_element_[3] = UstartF7;
      T40.vector_element_[4] = &KJend_;
      T40.vector_element_[5] = middle_;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
      CONGRUENT_CALL_PROLOG(&Kquick_sortXVKi, 2);
      CONGRUENT_CALL2(vector_, &T40);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
      T41.vector_element_[0] = &KJtest_;
      T41.vector_element_[1] = testF6;
      T41.vector_element_[2] = &KJstart_;
      T41.vector_element_[3] = middle_;
      T41.vector_element_[4] = &KJend_;
      T41.vector_element_[5] = T32;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
      CONGRUENT_CALL_PROLOG(&Kquick_sortXVKi, 2);
      CONGRUENT_CALL2(vector_, &T41);
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:448
  T19 = vector_;
  MV_SET_ELT(0, vector_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:443
  return(T19);
}

D Kquick_sortXVKiMM1I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  DWORD UendF9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD UendF14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  DWORD T24;
  D T25;
  DWORD T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31;
  D T32;
  D T33;
  DWORD T34;
  DWORD T35;
  D T36;
  D T37;
  D middle_;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
  T10 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:457
    T11 = SLOT_VALUE_INITD(vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
    T8 = T11;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T34 = primitive_cast_integer_as_raw(T8);
    UendF9 = T34;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
    primitive_type_check(Uend_, &KLintegerGVKd);
    T12 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T35 = primitive_cast_integer_as_raw(T12);
    UendF9 = T35;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T36 = primitive_cast_raw_as_integer(UendF9);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T16 = primitive_idQ(T36,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T33 = SLOT_VALUE_INITD(vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T13 = T33;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T26 = primitive_cast_integer_as_raw(T13);
    UendF14 = T26;
  } else {
    UendF14 = UendF9;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T27 = primitive_cast_raw_as_integer(UendF14);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T37 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T19 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T20 = primitive_machine_word_less_thanQ(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  if (T20 != &KPfalseVKi) {
    T17 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T21 = primitive_cast_integer_as_raw(T37);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T22 = primitive_machine_word_less_thanQ(T21,T19);
    T17 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    Kelement_range_errorVKeI(vector_, UstartF7);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T23 = primitive_machine_word_less_thanQ(UendF14,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  if (T23 != &KPfalseVKi) {
    T18 = T23;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T24 = primitive_cast_integer_as_raw(T37);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T25 = primitive_machine_word_less_thanQ(T24,UendF14);
    T18 = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    Kelement_range_errorVKeI(vector_, T27);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T28 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T29 = primitive_machine_word_logxor(T28,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T30 = primitive_machine_word_subtract_signal_overflow(UendF14,T29);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T31 = primitive_machine_word_less_thanQ(T30,41);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    Kinsertion_sortXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, UstartF7, T27);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    T32 = primitive_machine_word_less_thanQ(5,T30);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
      middle_ = KpartitionXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, UstartF7, T27);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
      Kquick_sortXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, UstartF7, middle_);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
      Kquick_sortXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, middle_, T27);
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:458
  T15 = vector_;
  MV_SET_ELT(0, vector_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:453
  return(T15);
}

D Kinsertion_sortXVKiMM1I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  DWORD UendF9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD UendF14;
  DWORD current_key_T, current_key_;
  DWORD insert_key_T, insert_key_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  DWORD T22;
  D T23;
  DWORD T24;
  D T25;
  D T26;
  DWORD T27;
  D T28;
  DWORD T29;
  D T30;
  DWORD T31;
  DWORD T32;
  D T33;
  DWORD T34;
  DWORD T35;
  D T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  D T41;
  DWORD T42;
  DWORD T43;
  D T44;
  D T45;
  D T46;
  D T47;
  D T48;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
  T10 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:142
    T11 = SLOT_VALUE_INITD(vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
    T8 = T11;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T42 = primitive_cast_integer_as_raw(T8);
    UendF9 = T42;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
    primitive_type_check(Uend_, &KLintegerGVKd);
    T12 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T43 = primitive_cast_integer_as_raw(T12);
    UendF9 = T43;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T44 = primitive_cast_raw_as_integer(UendF9);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T19 = primitive_idQ(T44,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T41 = SLOT_VALUE_INITD(vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T13 = T41;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T29 = primitive_cast_integer_as_raw(T13);
    UendF14 = T29;
  } else {
    UendF14 = UendF9;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T30 = primitive_cast_raw_as_integer(UendF14);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T45 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T22 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T23 = primitive_machine_word_less_thanQ(T22,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  if (T23 != &KPfalseVKi) {
    T20 = T23;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T24 = primitive_cast_integer_as_raw(T45);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T25 = primitive_machine_word_less_thanQ(T24,T22);
    T20 = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    Kelement_range_errorVKeI(vector_, UstartF7);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T26 = primitive_machine_word_less_thanQ(UendF14,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  if (T26 != &KPfalseVKi) {
    T21 = T26;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T27 = primitive_cast_integer_as_raw(T45);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T28 = primitive_machine_word_less_thanQ(T27,UendF14);
    T21 = T28;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    Kelement_range_errorVKeI(vector_, T30);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T31 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T32 = primitive_machine_word_add_signal_overflow(T31,4);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  current_key_T = T32;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    current_key_ = current_key_T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    T33 = primitive_machine_word_less_thanQ(current_key_,UendF14);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    if (T33 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
      T46 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, current_key_);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
      T34 = primitive_machine_word_subtract_signal_overflow(current_key_,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
      insert_key_T = T34;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        insert_key_ = insert_key_T;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        T35 = primitive_cast_integer_as_raw(UstartF7);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        T36 = primitive_machine_word_less_thanQ(insert_key_,T35);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        if (T36 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
          T47 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, insert_key_);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
          T17 = CALL2(testF6, T46, T47);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
          if (T17 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
            T48 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, insert_key_);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
            T37 = primitive_machine_word_add_signal_overflow(insert_key_,4);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T48, vector_, 1, T37);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
            T38 = primitive_machine_word_add_signal_overflow(insert_key_,0xFFFFFFFFFFFFFFFCL);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
            insert_key_T = T38;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        }
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        T39 = primitive_machine_word_add_signal_overflow(insert_key_,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T46, vector_, 1, T39);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
      T40 = primitive_machine_word_add_signal_overflow(current_key_,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
      current_key_T = T40;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:143
  T18 = vector_;
  MV_SET_ELT(0, vector_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:138
  return(T18);
}

D KpartitionXVKiMM1I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  DWORD UendF9;
  D T10;
  D T11;
  D T12;
  D breakPexit_14_;
  D T14;
  D T15;
  D T16;
  D small_key_;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D large_key_;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  D T37;
  DWORD T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  DWORD T43;
  D T44;
  DWORD T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  D T51;
  DWORD T52;
  D T53;
  DWORD T54;
  D T55;
  DWORD T56;
  D T57;
  DWORD T58;
  D T59;
  DWORD T60;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
  T10 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:408
    T11 = SLOT_VALUE_INITD(vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
    T8 = T11;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T48 = primitive_cast_integer_as_raw(T8);
    UendF9 = T48;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
    primitive_type_check(Uend_, &KLintegerGVKd);
    T12 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T49 = primitive_cast_integer_as_raw(T12);
    UendF9 = T49;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  T30 = primitive_machine_word_subtract_signal_overflow(UendF9,4);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  T31 = primitive_cast_raw_as_integer(T30);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  T50 = Kmedian_of_threeVKiMM1I(vector_, UstartF7, T31, testF6);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  small_key_ = UstartF7;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  large_key_ = T31;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  T52 = primitive_cast_integer_as_raw(T50);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  T51 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T52);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T22 = small_key_;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T54 = primitive_cast_integer_as_raw(T22);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T53 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T54);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T14 = CALL2(testF6, T53, T51);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      if (T14 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T23 = small_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T32 = primitive_cast_integer_as_raw(T23);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T33 = primitive_machine_word_add_signal_overflow(T32,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T34 = primitive_cast_raw_as_integer(T33);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        small_key_ = T34;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  L2: ;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T28 = large_key_;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T56 = primitive_cast_integer_as_raw(T28);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T55 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T56);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T15 = CALL2(testF6, T51, T55);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      if (T15 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T29 = large_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T35 = primitive_cast_integer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T36 = primitive_machine_word_subtract_signal_overflow(T35,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        T37 = primitive_cast_raw_as_integer(T36);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        large_key_ = T37;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T21 = small_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T27 = large_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T38 = primitive_cast_integer_as_raw(T21);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T39 = primitive_cast_integer_as_raw(T27);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T40 = primitive_machine_word_less_thanQ(T38,T39);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    if (T40 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T41 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
      T41;
      goto L3;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T20 = small_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T26 = large_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T58 = primitive_cast_integer_as_raw(T20);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T57 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T58);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T60 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T59 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T60);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T59, vector_, 1, T58);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T57, vector_, 1, T60);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T19 = small_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T42 = primitive_cast_integer_as_raw(T19);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T43 = primitive_machine_word_add_signal_overflow(T42,4);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T44 = primitive_cast_raw_as_integer(T43);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    small_key_ = T44;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T25 = large_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T45 = primitive_cast_integer_as_raw(T25);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T46 = primitive_machine_word_subtract_signal_overflow(T45,4);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    T47 = primitive_cast_raw_as_integer(T46);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    large_key_ = T47;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
    goto L0;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  L3: ;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  T18 = small_key_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:409
  T16 = T18;
  MV_SET_ELT(0, T18);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:404
  return(T16);
}

D Kmedian_of_threeVKiMM1I (D vector_, D Ustart_, D Uend_, D less_than_) {
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  D T10;
  D T11_0;
  D T12_0;
  D T13_0;
  D T14_0;
  DWORD T15;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20_0;
  DWORD T20_1;
  DWORD quotient_;
  DWORD T22;
  DWORD T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  D T28;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:346
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T15 = primitive_cast_integer_as_raw(Ustart_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T16 = primitive_cast_integer_as_raw(Uend_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T17 = primitive_machine_word_logxor(T16,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T18 = primitive_machine_word_add_signal_overflow(T15,T17);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T19 = primitive_machine_word_shift_right(T18,2);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T20_0 = primitive_machine_word_truncateS_byref(T19,2,(DWORD*)&T20_1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  quotient_ = T20_0;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T22 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T23 = primitive_machine_word_logior(T22,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T24 = primitive_cast_raw_as_integer(T23);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T26 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T15);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T25 = primitive_machine_word_subtract_signal_overflow(T16,4);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T27 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T25);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T28 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T23);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  T5 = CALL2(less_than_, T26, T27);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
    T6 = CALL2(less_than_, T28, T27);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
      T7_0 = T24;
      T9_0 = T7_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
      T8_0 = Uend_;
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
    T14_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
    T10 = CALL2(less_than_, T28, T26);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
      T11_0 = T24;
      T13_0 = T11_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
      T12_0 = Ustart_;
      T13_0 = T12_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
    T14_0 = T13_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:350
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:346
  MV_SET_COUNT(1);
  return(T14_0);
}

D KpartitionXVKiMM0I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  D T9;
  DWORD UendF10;
  D T11;
  D T12;
  D T13;
  D pivot_key_;
  D pivot_element_;
  D breakPexit_14_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D small_key_;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D large_key_;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  DWORD T35;
  D T36;
  D T37;
  DWORD T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DWORD T44;
  DWORD T45;
  D T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  DWORD T52;
  D T53;
  DWORD T54;
  DWORD T55;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
  T11 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:400
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T8 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
    T9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
    primitive_type_check(T9, &KLintegerGVKd);
    T12 = T9;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T54 = primitive_cast_integer_as_raw(T12);
    UendF10 = T54;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
    primitive_type_check(Uend_, &KLintegerGVKd);
    T13 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T55 = primitive_cast_integer_as_raw(T13);
    UendF10 = T55;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  T35 = primitive_machine_word_subtract_signal_overflow(UendF10,4);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  T36 = primitive_cast_raw_as_integer(T35);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  ENGINE_NODE_CALL_PROLOG(&Kmedian_of_threeVKi, &K29, 4);
  T37 = ENGINE_NODE_CALL4(&K29, vector_, UstartF7, T36, testF6);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  pivot_key_ = T37;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  small_key_ = UstartF7;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  large_key_ = T36;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
  pivot_element_ = CONGRUENT_CALL3(vector_, pivot_key_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  L1: ;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      T27 = small_key_;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      T17 = CONGRUENT_CALL3(vector_, T27, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      T18 = CALL2(testF6, T17, pivot_element_);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      if (T18 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T28 = small_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T38 = primitive_cast_integer_as_raw(T28);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T39 = primitive_machine_word_add_signal_overflow(T38,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T40 = primitive_cast_raw_as_integer(T39);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        small_key_ = T40;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  L2: ;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      T33 = large_key_;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      T19 = CONGRUENT_CALL3(vector_, T33, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      T20 = CALL2(testF6, pivot_element_, T19);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      if (T20 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T34 = large_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T41 = primitive_cast_integer_as_raw(T34);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T42 = primitive_machine_word_subtract_signal_overflow(T41,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        T43 = primitive_cast_raw_as_integer(T42);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        large_key_ = T43;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
        goto L2;
      }
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T26 = small_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T32 = large_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T44 = primitive_cast_integer_as_raw(T26);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T45 = primitive_cast_integer_as_raw(T32);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T46 = primitive_machine_word_less_thanQ(T44,T45);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    if (T46 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      T47 = MV_SET_REST_AT(&KPempty_vectorVKi, 0);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
      T47;
      goto L3;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T25 = small_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T31 = large_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    ENGINE_NODE_CALL_PROLOG(&Kswap_elementsXVKi, &K31, 3);
    ENGINE_NODE_CALL3(&K31, vector_, T25, T31);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T24 = small_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T48 = primitive_cast_integer_as_raw(T24);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T49 = primitive_machine_word_add_signal_overflow(T48,4);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T50 = primitive_cast_raw_as_integer(T49);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    small_key_ = T50;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T30 = large_key_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T51 = primitive_cast_integer_as_raw(T30);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T52 = primitive_machine_word_subtract_signal_overflow(T51,4);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    T53 = primitive_cast_raw_as_integer(T52);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    large_key_ = T53;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
    goto L0;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  L3: ;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  T23 = small_key_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:401
  T21 = T23;
  MV_SET_ELT(0, T23);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:396
  return(T21);
}

D Kswap_elementsXVKiMM0I (D vector_, D key1_, D key2_) {
  D elt1_;
  D elt2_;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:88
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:90
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
  elt1_ = CONGRUENT_CALL3(vector_, key1_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:90
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
  elt2_ = CONGRUENT_CALL3(vector_, key2_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:90
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
  CONGRUENT_CALL3(elt2_, vector_, key1_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:90
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
  CONGRUENT_CALL3(elt1_, vector_, key2_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:90
  T6 = elt1_;
  MV_SET_ELT(0, elt1_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:88
  return(T6);
}

D Kswap_elementsXVKiMM1I (D vector_, D key1_, D key2_) {
  D T4;
  D T5;
  DWORD T6;
  D T7;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:93
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:95
  T6 = primitive_cast_integer_as_raw(key1_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:95
  T5 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T6);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:95
  T8 = primitive_cast_integer_as_raw(key2_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:95
  T7 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:95
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T7, vector_, 1, T6);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:95
  REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T5, vector_, 1, T8);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:95
  T4 = T5;
  MV_SET_ELT(0, T5);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:93
  return(T4);
}

D Kmedian_of_threeVKiMM0I (D vector_, D Ustart_, D Uend_, D less_than_) {
  D start_elt_;
  D end_elt_;
  D middle_elt_;
  D T8;
  D T9;
  D T10_0;
  D T11_0;
  D T12_0;
  D T13;
  D T14_0;
  D T15_0;
  D T16_0;
  D T17_0;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  DWORD T22;
  DWORD T23_0;
  DWORD T23_1;
  DWORD quotient_;
  DWORD T25;
  DWORD T26;
  D T27;
  DWORD T28;
  D T29;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:339
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T18 = primitive_cast_integer_as_raw(Ustart_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T19 = primitive_cast_integer_as_raw(Uend_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T20 = primitive_machine_word_logxor(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T21 = primitive_machine_word_add_signal_overflow(T18,T20);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T22 = primitive_machine_word_shift_right(T21,2);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T23_0 = primitive_machine_word_truncateS_byref(T22,2,(DWORD*)&T23_1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  quotient_ = T23_0;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T25 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T26 = primitive_machine_word_logior(T25,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T27 = primitive_cast_raw_as_integer(T26);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
  start_elt_ = CONGRUENT_CALL3(vector_, Ustart_, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T28 = primitive_machine_word_subtract_signal_overflow(T19,4);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T29 = primitive_cast_raw_as_integer(T28);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
  end_elt_ = CONGRUENT_CALL3(vector_, T29, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
  middle_elt_ = CONGRUENT_CALL3(vector_, T27, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  T8 = CALL2(less_than_, start_elt_, end_elt_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
    T9 = CALL2(less_than_, middle_elt_, end_elt_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
    if (T9 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
      T10_0 = T27;
      T12_0 = T10_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
      T11_0 = Uend_;
      T12_0 = T11_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
    T17_0 = T12_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
    T13 = CALL2(less_than_, middle_elt_, start_elt_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
    if (T13 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
      T14_0 = T27;
      T16_0 = T14_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
      T15_0 = Ustart_;
      T16_0 = T15_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
    T17_0 = T16_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:343
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:339
  MV_SET_COUNT(1);
  return(T17_0);
}

D Kinsertion_sortXVKiMM0I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  D T9;
  DWORD UendF10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD UendF16;
  D T17;
  DWORD current_key_T, current_key_;
  D current_element_;
  DWORD insert_key_T, insert_key_;
  D T21;
  D T22;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  DWORD T29;
  D T30;
  DWORD T31;
  D T32;
  D T33;
  DWORD T34;
  D T35;
  DWORD T36;
  D T37;
  DWORD T38;
  DWORD T39;
  D T40;
  D T41;
  DWORD T42;
  DWORD T43;
  D T44;
  D T45;
  DWORD T46;
  D T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  D T54;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
  T11 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:132
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T8 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
    T9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
    primitive_type_check(T9, &KLintegerGVKd);
    T12 = T9;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T52 = primitive_cast_integer_as_raw(T12);
    UendF10 = T52;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
    primitive_type_check(Uend_, &KLintegerGVKd);
    T13 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T53 = primitive_cast_integer_as_raw(T13);
    UendF10 = T53;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T54 = primitive_cast_raw_as_integer(UendF10);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T25 = primitive_idQ(T54,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  if (T25 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T14 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T15 = T14;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    primitive_type_check(T15, &KLintegerGVKd);
    T26 = T15;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T36 = primitive_cast_integer_as_raw(T26);
    UendF16 = T36;
  } else {
    UendF16 = UendF10;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T37 = primitive_cast_raw_as_integer(UendF16);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T17 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T29 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T30 = primitive_machine_word_less_thanQ(T29,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  if (T30 != &KPfalseVKi) {
    T27 = T30;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T31 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T32 = primitive_machine_word_less_thanQ(T31,T29);
    T27 = T32;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  if (T27 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    Kelement_range_errorVKeI(vector_, UstartF7);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T33 = primitive_machine_word_less_thanQ(UendF16,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  if (T33 != &KPfalseVKi) {
    T28 = T33;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T34 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T35 = primitive_machine_word_less_thanQ(T34,UendF16);
    T28 = T35;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  if (T28 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    Kelement_range_errorVKeI(vector_, T37);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T38 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T39 = primitive_machine_word_add_signal_overflow(T38,4);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  current_key_T = T39;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    current_key_ = current_key_T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T41 = primitive_cast_raw_as_integer(current_key_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    T40 = primitive_machine_word_less_thanQ(current_key_,UendF16);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    if (T40 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
      current_element_ = CONGRUENT_CALL3(vector_, T41, &KPempty_vectorVKi);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
      T42 = primitive_machine_word_subtract_signal_overflow(current_key_,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
      insert_key_T = T42;
    L1: ;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        insert_key_ = insert_key_T;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        T45 = primitive_cast_raw_as_integer(insert_key_);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        T43 = primitive_cast_integer_as_raw(UstartF7);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        T44 = primitive_machine_word_less_thanQ(insert_key_,T43);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        if (T44 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
          CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
          T22 = CONGRUENT_CALL3(vector_, T45, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
          T23 = CALL2(testF6, current_element_, T22);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
          if (T23 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
            CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
            T21 = CONGRUENT_CALL3(vector_, T45, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
            T46 = primitive_machine_word_add_signal_overflow(insert_key_,4);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
            T47 = primitive_cast_raw_as_integer(T46);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
            CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
            CONGRUENT_CALL3(T21, vector_, T47);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
            T48 = primitive_machine_word_add_signal_overflow(insert_key_,0xFFFFFFFFFFFFFFFCL);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
            insert_key_T = T48;
            goto L1;
          }
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        }
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        T49 = primitive_machine_word_add_signal_overflow(insert_key_,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        T50 = primitive_cast_raw_as_integer(T49);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
        CONGRUENT_CALL3(current_element_, vector_, T50);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
      T51 = primitive_machine_word_add_signal_overflow(current_key_,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
      current_key_T = T51;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:133
  T24 = vector_;
  MV_SET_ELT(0, vector_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:128
  return(T24);
}

D Kmerge_sortXVKiMM0I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  D T9;
  DWORD UendF10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  DWORD UendF16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  DWORD T23;
  D T24;
  DWORD T25;
  D T26;
  D T27;
  DWORD T28;
  D T29;
  DWORD T30;
  D T31;
  DWORD T32;
  DWORD T33;
  DWORD T34;
  D T35;
  _KLsimple_object_vectorGVKd_6 T36 = {&KLsimple_object_vectorGVKdW, (D) 25};
  D T37;
  DWORD T38;
  DWORD T39_0;
  DWORD T39_1;
  DWORD quotient_;
  DWORD T41;
  DWORD T42;
  DWORD T43;
  D T44;
  _KLsimple_object_vectorGVKd_6 T45 = {&KLsimple_object_vectorGVKdW, (D) 25};
  _KLsimple_object_vectorGVKd_6 T46 = {&KLsimple_object_vectorGVKdW, (D) 25};
  _KLsimple_object_vectorGVKd_8 T47 = {&KLsimple_object_vectorGVKdW, (D) 33};
  DWORD T48;
  DWORD T49;
  D T50;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
  T11 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:280
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T8 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
    T9 = T8;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
    primitive_type_check(T9, &KLintegerGVKd);
    T12 = T9;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T48 = primitive_cast_integer_as_raw(T12);
    UendF10 = T48;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
    primitive_type_check(Uend_, &KLintegerGVKd);
    T13 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T49 = primitive_cast_integer_as_raw(T13);
    UendF10 = T49;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T50 = primitive_cast_raw_as_integer(UendF10);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T19 = primitive_idQ(T50,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  if (T19 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T14 = CONGRUENT_CALL1(vector_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T15 = T14;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    primitive_type_check(T15, &KLintegerGVKd);
    T20 = T15;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T30 = primitive_cast_integer_as_raw(T20);
    UendF16 = T30;
  } else {
    UendF16 = UendF10;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T31 = primitive_cast_raw_as_integer(UendF16);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T17 = CONGRUENT_CALL1(vector_);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T23 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T24 = primitive_machine_word_less_thanQ(T23,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  if (T24 != &KPfalseVKi) {
    T21 = T24;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T25 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T26 = primitive_machine_word_less_thanQ(T25,T23);
    T21 = T26;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    Kelement_range_errorVKeI(vector_, UstartF7);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T27 = primitive_machine_word_less_thanQ(UendF16,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  if (T27 != &KPfalseVKi) {
    T22 = T27;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T28 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T29 = primitive_machine_word_less_thanQ(T28,UendF16);
    T22 = T29;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    Kelement_range_errorVKeI(vector_, T31);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T32 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T33 = primitive_machine_word_logxor(T32,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T34 = primitive_machine_word_subtract_signal_overflow(UendF16,T33);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T35 = primitive_machine_word_less_thanQ(T34,41);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T36.vector_element_[0] = &KJtest_;
    T36.vector_element_[1] = testF6;
    T36.vector_element_[2] = &KJstart_;
    T36.vector_element_[3] = UstartF7;
    T36.vector_element_[4] = &KJend_;
    T36.vector_element_[5] = T31;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    CONGRUENT_CALL_PROLOG(&Kinsertion_sortXVKi, 2);
    CONGRUENT_CALL2(vector_, &T36);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    T37 = primitive_machine_word_less_thanQ(5,T34);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
    if (T37 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T38 = primitive_machine_word_shift_right(T34,2);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T39_0 = primitive_machine_word_floorS_byref(T38,2,(DWORD*)&T39_1);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      quotient_ = T39_0;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T41 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T42 = primitive_cast_integer_as_raw(UstartF7);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T43 = primitive_machine_word_add_signal_overflow(T42,T41);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T44 = primitive_cast_raw_as_integer(T43);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T45.vector_element_[0] = &KJtest_;
      T45.vector_element_[1] = testF6;
      T45.vector_element_[2] = &KJstart_;
      T45.vector_element_[3] = UstartF7;
      T45.vector_element_[4] = &KJend_;
      T45.vector_element_[5] = T44;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      CONGRUENT_CALL_PROLOG(&Kmerge_sortXVKi, 2);
      CONGRUENT_CALL2(vector_, &T45);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T46.vector_element_[0] = &KJtest_;
      T46.vector_element_[1] = testF6;
      T46.vector_element_[2] = &KJstart_;
      T46.vector_element_[3] = T44;
      T46.vector_element_[4] = &KJend_;
      T46.vector_element_[5] = T31;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      CONGRUENT_CALL_PROLOG(&Kmerge_sortXVKi, 2);
      CONGRUENT_CALL2(vector_, &T46);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      T47.vector_element_[0] = &KJstart_;
      T47.vector_element_[1] = UstartF7;
      T47.vector_element_[2] = IKJmiddle_;
      T47.vector_element_[3] = T44;
      T47.vector_element_[4] = &KJend_;
      T47.vector_element_[5] = T31;
      T47.vector_element_[6] = &KJtest_;
      T47.vector_element_[7] = testF6;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
      CONGRUENT_CALL_PROLOG(&KmergeXVKi, 2);
      CONGRUENT_CALL2(vector_, &T47);
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:281
  T18 = vector_;
  MV_SET_ELT(0, vector_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:276
  return(T18);
}

D Kmerge_sortXVKiMM1I (D vector_, D Urest_, D test_, D Ustart_, D Uend_) {
  D testF6;
  D UstartF7;
  D T8;
  DWORD UendF9;
  D T10;
  D T11;
  D T12;
  D T13;
  DWORD UendF14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  DWORD T21;
  D T22;
  D T23;
  DWORD T24;
  D T25;
  DWORD T26;
  D T27;
  DWORD T28;
  DWORD T29;
  DWORD T30;
  D T31;
  D T32;
  DWORD T33;
  DWORD T34_0;
  DWORD T34_1;
  DWORD quotient_;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  D T39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  D T44;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF7 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
  T10 = primitive_idQ(Uend_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:290
    T11 = SLOT_VALUE_INITD(vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
    T8 = T11;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T41 = primitive_cast_integer_as_raw(T8);
    UendF9 = T41;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
    primitive_type_check(Uend_, &KLintegerGVKd);
    T12 = Uend_;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T42 = primitive_cast_integer_as_raw(T12);
    UendF9 = T42;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T43 = primitive_cast_raw_as_integer(UendF9);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T16 = primitive_idQ(T43,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  if (T16 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T40 = SLOT_VALUE_INITD(vector_, 0);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T13 = T40;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T26 = primitive_cast_integer_as_raw(T13);
    UendF14 = T26;
  } else {
    UendF14 = UendF9;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T27 = primitive_cast_raw_as_integer(UendF14);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T44 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T19 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T20 = primitive_machine_word_less_thanQ(T19,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  if (T20 != &KPfalseVKi) {
    T17 = T20;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T21 = primitive_cast_integer_as_raw(T44);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T22 = primitive_machine_word_less_thanQ(T21,T19);
    T17 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  if (T17 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    Kelement_range_errorVKeI(vector_, UstartF7);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T23 = primitive_machine_word_less_thanQ(UendF14,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  if (T23 != &KPfalseVKi) {
    T18 = T23;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T24 = primitive_cast_integer_as_raw(T44);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T25 = primitive_machine_word_less_thanQ(T24,UendF14);
    T18 = T25;
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  if (T18 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    Kelement_range_errorVKeI(vector_, T27);
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T28 = primitive_cast_integer_as_raw(UstartF7);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T29 = primitive_machine_word_logxor(T28,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T30 = primitive_machine_word_subtract_signal_overflow(UendF14,T29);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T31 = primitive_machine_word_less_thanQ(T30,41);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  if (T31 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    Kinsertion_sortXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, UstartF7, T27);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    T32 = primitive_machine_word_less_thanQ(5,T30);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
    if (T32 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      T33 = primitive_machine_word_shift_right(T30,2);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      T34_0 = primitive_machine_word_floorS_byref(T33,2,(DWORD*)&T34_1);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      quotient_ = T34_0;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      T36 = primitive_machine_word_shift_left_signal_overflow(quotient_,2);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      T37 = primitive_cast_integer_as_raw(UstartF7);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      T38 = primitive_machine_word_add_signal_overflow(T37,T36);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      T39 = primitive_cast_raw_as_integer(T38);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      Kmerge_sortXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, UstartF7, T39);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      Kmerge_sortXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, T39, T27);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
      KmergeXVKiMM1I(vector_, &KPempty_vectorVKi, testF6, UstartF7, T39, T27);
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  }
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:291
  T15 = vector_;
  MV_SET_ELT(0, vector_);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:286
  return(T15);
}

D KmergeXVKiMM1I (D vector_, D Urest_, D test_, D Ustart_, D middle_, D Uend_) {
  D testF7;
  D UstartF8;
  D middleF9;
  D UendF10;
  DWORD merge_keyF11T, merge_keyF11;
  D T12;
  DWORD merge_keyF13T, merge_keyF13;
  DWORD copy_key_T, copy_key_;
  D T15;
  D start_key_;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D T22;
  D middle_key_;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D T29;
  DWORD T30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  D T35_0;
  D T36;
  D T37;
  DWORD T38;
  DWORD T39;
  D T40;
  DWORD T41;
  DWORD T42;
  D T43;
  DWORD T44;
  D T45;
  DWORD T46;
  DWORD T47;
  D T48;
  DWORD T49;
  DWORD T50;
  D T51;
  DWORD T52;
  DWORD T53;
  D T54;
  DWORD T55;
  D T56;
  D T57;
  DWORD T58;
  DWORD T59;
  D T60;
  DWORD T61;
  D T62;
  DWORD T63;
  D T64;
  DWORD T65;
  D T66;
  DWORD T67;
  D T68;
  DWORD T69;
  D T70;
  DWORD T71;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:230
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:230
  primitive_type_check(test_, &KLfunctionGVKd);
  testF7 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:230
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF8 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:230
  primitive_type_check(middle_, &KLintegerGVKd);
  middleF9 = middle_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:230
  primitive_type_check(Uend_, &KLintegerGVKd);
  UendF10 = Uend_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  T30 = primitive_cast_integer_as_raw(UendF10);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  T31 = primitive_cast_integer_as_raw(UstartF8);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  T32 = primitive_machine_word_logxor(T31,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  T33 = primitive_machine_word_subtract_signal_overflow(T30,T32);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  T34 = primitive_cast_raw_as_integer(T33);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  start_key_ = UstartF8;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  middle_key_ = middleF9;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  T35_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T34);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  T36 = T35_0;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  merge_keyF11T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    merge_keyF11 = merge_keyF11T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    T37 = primitive_machine_word_less_thanQ(merge_keyF11,T33);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    if (T37 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T22 = start_key_;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T38 = primitive_cast_integer_as_raw(T22);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T39 = primitive_cast_integer_as_raw(middleF9);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T40 = primitive_machine_word_less_thanQ(T38,T39);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      if (T40 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T27 = middle_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T44 = primitive_cast_integer_as_raw(T27);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T45 = primitive_machine_word_less_thanQ(T44,T30);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        if (T45 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T26 = middle_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T61 = primitive_cast_integer_as_raw(T26);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T60 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T61);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T19 = start_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T63 = primitive_cast_integer_as_raw(T19);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T62 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T63);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T12 = CALL2(testF7, T60, T62);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          if (T12 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T25 = middle_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T65 = primitive_cast_integer_as_raw(T25);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T64 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T65);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T64, T36, 1, merge_keyF11);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T24 = middle_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T49 = primitive_cast_integer_as_raw(T24);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T50 = primitive_machine_word_add_signal_overflow(T49,4);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T51 = primitive_cast_raw_as_integer(T50);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            middle_key_ = T51;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T18 = start_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T67 = primitive_cast_integer_as_raw(T18);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T66 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T67);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T66, T36, 1, merge_keyF11);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T17 = start_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T52 = primitive_cast_integer_as_raw(T17);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T53 = primitive_machine_word_add_signal_overflow(T52,4);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            T54 = primitive_cast_raw_as_integer(T53);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
            start_key_ = T54;
          }
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        } else {
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T21 = start_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T69 = primitive_cast_integer_as_raw(T21);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T68 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T69);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T68, T36, 1, merge_keyF11);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T20 = start_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T46 = primitive_cast_integer_as_raw(T20);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T47 = primitive_machine_word_add_signal_overflow(T46,4);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          T48 = primitive_cast_raw_as_integer(T47);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
          start_key_ = T48;
        }
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      } else {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T29 = middle_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T71 = primitive_cast_integer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T70 = REPEATED_D_SLOT_VALUE_TAGGED(vector_, 1, T71);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T70, T36, 1, merge_keyF11);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T28 = middle_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T41 = primitive_cast_integer_as_raw(T28);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T42 = primitive_machine_word_add_signal_overflow(T41,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        T43 = primitive_cast_raw_as_integer(T42);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
        middle_key_ = T43;
      }
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T55 = primitive_machine_word_add_signal_overflow(merge_keyF11,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      merge_keyF11T = T55;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  merge_keyF13T = 1;
  copy_key_T = T31;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    merge_keyF13 = merge_keyF13T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    copy_key_ = copy_key_T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    T56 = primitive_machine_word_less_thanQ(merge_keyF13,T33);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    if (T56 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T57 = REPEATED_D_SLOT_VALUE_TAGGED(T36, 1, merge_keyF13);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T57, vector_, 1, copy_key_);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T58 = primitive_machine_word_add_signal_overflow(merge_keyF13,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      T59 = primitive_machine_word_add_signal_overflow(copy_key_,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
      merge_keyF13T = T58;
      copy_key_T = T59;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
    T15 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:236
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:230
  return(T15);
}

D KmergeXVKiMM0I (D vector_, D Urest_, D test_, D Ustart_, D middle_, D Uend_) {
  D testF7;
  D UstartF8;
  D middleF9;
  D UendF10;
  DWORD merge_keyF11T, merge_keyF11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18;
  DWORD merge_keyF19T, merge_keyF19;
  DWORD copy_key_T, copy_key_;
  D T21;
  D start_key_;
  D T23;
  D T24;
  D T25;
  D T26;
  D T27;
  D T28;
  D middle_key_;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  D T40;
  D T41_0;
  D T42;
  D T43;
  DWORD T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;
  DWORD T50;
  D T51;
  DWORD T52;
  DWORD T53;
  D T54;
  DWORD T55;
  DWORD T56;
  D T57;
  DWORD T58;
  DWORD T59;
  D T60;
  DWORD T61;
  D T62;
  D T63;
  DWORD T64;
  DWORD T65;
  D T66;

  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:221
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:221
  primitive_type_check(test_, &KLfunctionGVKd);
  testF7 = test_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:221
  primitive_type_check(Ustart_, &KLintegerGVKd);
  UstartF8 = Ustart_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:221
  primitive_type_check(middle_, &KLintegerGVKd);
  middleF9 = middle_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:221
  primitive_type_check(Uend_, &KLintegerGVKd);
  UendF10 = Uend_;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  T36 = primitive_cast_integer_as_raw(UendF10);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  T37 = primitive_cast_integer_as_raw(UstartF8);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  T38 = primitive_machine_word_logxor(T37,1);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  T39 = primitive_machine_word_subtract_signal_overflow(T36,T38);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  T40 = primitive_cast_raw_as_integer(T39);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  start_key_ = UstartF8;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  middle_key_ = middleF9;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  T41_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, &KPfalseVKi, T40);
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  T42 = T41_0;
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  merge_keyF11T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    merge_keyF11 = merge_keyF11T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    T43 = primitive_machine_word_less_thanQ(merge_keyF11,T39);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    if (T43 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T28 = start_key_;
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T44 = primitive_cast_integer_as_raw(T28);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T45 = primitive_cast_integer_as_raw(middleF9);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T46 = primitive_machine_word_less_thanQ(T44,T45);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      if (T46 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T33 = middle_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T50 = primitive_cast_integer_as_raw(T33);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T51 = primitive_machine_word_less_thanQ(T50,T36);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        if (T51 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T32 = middle_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
          T14 = CONGRUENT_CALL3(vector_, T32, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T25 = start_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
          T15 = CONGRUENT_CALL3(vector_, T25, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T16 = CALL2(testF7, T14, T15);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          if (T16 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T31 = middle_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
            T17 = CONGRUENT_CALL3(vector_, T31, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T17, T42, 1, merge_keyF11);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T30 = middle_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T55 = primitive_cast_integer_as_raw(T30);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T56 = primitive_machine_word_add_signal_overflow(T55,4);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T57 = primitive_cast_raw_as_integer(T56);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            middle_key_ = T57;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T24 = start_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
            T18 = CONGRUENT_CALL3(vector_, T24, &KPempty_vectorVKi);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T18, T42, 1, merge_keyF11);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T23 = start_key_;
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T58 = primitive_cast_integer_as_raw(T23);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T59 = primitive_machine_word_add_signal_overflow(T58,4);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            T60 = primitive_cast_raw_as_integer(T59);
            // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
            start_key_ = T60;
          }
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        } else {
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T27 = start_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
          T13 = CONGRUENT_CALL3(vector_, T27, &KPempty_vectorVKi);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T13, T42, 1, merge_keyF11);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T26 = start_key_;
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T52 = primitive_cast_integer_as_raw(T26);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T53 = primitive_machine_word_add_signal_overflow(T52,4);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          T54 = primitive_cast_raw_as_integer(T53);
          // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
          start_key_ = T54;
        }
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      } else {
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T35 = middle_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_checkVKe, 3);
        T12 = CONGRUENT_CALL3(vector_, T35, &KPempty_vectorVKi);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T12, T42, 1, merge_keyF11);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T34 = middle_key_;
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T47 = primitive_cast_integer_as_raw(T34);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T48 = primitive_machine_word_add_signal_overflow(T47,4);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        T49 = primitive_cast_raw_as_integer(T48);
        // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
        middle_key_ = T49;
      }
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T61 = primitive_machine_word_add_signal_overflow(merge_keyF11,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      merge_keyF11T = T61;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  merge_keyF19T = 1;
  copy_key_T = T37;
L1: ;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    merge_keyF19 = merge_keyF19T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    copy_key_ = copy_key_T;
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    T66 = primitive_cast_raw_as_integer(copy_key_);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    T62 = primitive_machine_word_less_thanQ(merge_keyF19,T39);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    if (T62 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T63 = REPEATED_D_SLOT_VALUE_TAGGED(T42, 1, merge_keyF19);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      CONGRUENT_CALL_PROLOG(&Kelement_no_bounds_check_setterVKe, 3);
      CONGRUENT_CALL3(T63, vector_, T66);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T64 = primitive_machine_word_add_signal_overflow(merge_keyF19,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      T65 = primitive_machine_word_add_signal_overflow(copy_key_,4);
      // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
      merge_keyF19T = T64;
      copy_key_T = T65;
      goto L1;
    }
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
    T21 = &KPfalseVKi;
    MV_SET_ELT(0, &KPfalseVKi);
    MV_SET_COUNT(1);
    // /opt/opendylan-2013.1/sources/dylan/sort.dylan:227
  // /opt/opendylan-2013.1/sources/dylan/sort.dylan:221
  return(T21);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_sort_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJmiddle_);
    if (T0 != &KJmiddle_) {
      primitive_repeated_slot_value_setter(T0, &K79, 1, 2);
      primitive_repeated_slot_value_setter(T0, &K78, 1, 4);
      IKJmiddle_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_sort_for_user () {
  return;
}


/* eof */
