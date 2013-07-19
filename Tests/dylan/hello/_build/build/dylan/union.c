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
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(256);
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
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(11);
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
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;

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
  D properties_;
  D engine_node_callback_;
  D engine_node_entry_point_;
} _KLabsent_engine_nodeGVKg;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

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
  D symbol_name_;
} _KLsymbolGVKd;

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
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LunionG_typesVKi;
extern _KLsealed_generic_functionGVKe Kdisjoint_typesQVKe;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLclassGVKd KLsimple_typechecked_cache_header_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLsimple_typechecked_cache_header_engine_nodeGVKgW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLsubjunctive_class_universeGVKe;
extern _KLmm_wrapperGVKi_0 KLsubjunctive_class_universeGVKeW;
extern _KLsealed_generic_functionGVKe Ktype_completeQVKe;
extern _KLsealed_generic_functionGVKe Kreduce_incomplete_classesVKi;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LmethodG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
extern _KLsealed_generic_functionGVKe KsubtypeQVKd;
extern _KLsealed_generic_functionGVKe Ksubjunctive_subtypeQVKi;
extern _KLsealed_generic_functionGVKe Khas_instancesQVKe;
extern _KLsealed_generic_functionGVKe Kmap_congruency_classesVKi;
D KsingletonVKdMM0I (D);
D Kobject_classVKdI (D);
extern _KLsealed_generic_functionGVKe Kmap_as_oneVKi;
extern _KLsimple_methodGVKe KsingletonVKdMM0;
extern _KLincremental_generic_functionGVKe KreduceVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsymbolGVKd KJtype1_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJtype2_;
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LtypeG_typesVKi;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;

/* Defined object declarations */

D Kunion_instanceQVKiI (D, D);
extern _KLsimple_methodGVKe Kmap_congruency_classesVKiMM10;
D Kmap_congruency_classesVKiMM10I (D, D);
extern _KLsimple_methodGVKe Khas_instancesQVKeMM4;
D Khas_instancesQVKeMM4I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM18;
D Ksubjunctive_subtypeQVKiMM18I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM17;
D Ksubjunctive_subtypeQVKiMM17I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM16;
D Ksubjunctive_subtypeQVKiMM16I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM15;
D Ksubjunctive_subtypeQVKiMM15I (D, D, D);
extern _KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM14;
D Ksubjunctive_subtypeQVKiMM14I (D, D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM14;
D KsubtypeQVKdMM14I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM15;
D KsubtypeQVKdMM15I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM16;
D KsubtypeQVKdMM16I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM17;
D KsubtypeQVKdMM17I (D, D);
extern _KLsimple_methodGVKe KsubtypeQVKdMM18;
D KsubtypeQVKdMM18I (D, D);
extern _KLsimple_methodGVKe KinstanceQ_functionVKeMM1;
D KinstanceQ_functionVKeMM1I (D);
extern _KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM11;
D Kreduce_incomplete_classesVKiMM11I (D, D, D);
extern _KLsimple_methodGVKe Ktype_completeQVKeMM8;
D Ktype_completeQVKeMM8I (D);
extern _KLsimple_methodGVKe Kdisjoint_typesQVKeMM1;
D Kdisjoint_typesQVKeMM1I (D, D, D, D);
extern _KLsimple_methodGVKe Kdisjoint_typesQVKeMM2;
D Kdisjoint_typesQVKeMM2I (D, D, D, D);
extern _KLsimple_methodGVKe Kdisjoint_typesQVKeMM3;
D Kdisjoint_typesQVKeMM3I (D, D, D, D);
extern _KLkeyword_methodGVKe KinitializeVKdMM22;
D KinitializeVKdMM22I (D, D);
static _KLbyte_stringGVKd_15 K39;
extern _KLsimple_methodGVKe Kunion_instanceQVKi;
static _KLsignatureAvaluesGVKi K41;
static _KLsimple_object_vectorGVKd_2 K42;
static _KLkeyword_signatureGVKe K43;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K44;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K45;
static _KLsignatureAvaluesGVKi K46;
static _KLsimple_object_vectorGVKd_4 K47;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K48;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K49;
static _KLsignatureAvaluesGVKi K50;
static _KLsimple_object_vectorGVKd_4 K51;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K52;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K53;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K54;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K55;
static _KLsignatureAvaluesGVKi K56;
static _KLsimple_object_vectorGVKd_4 K57;
static _KLsignatureAvaluesGVKi K58;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K59;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K60;
static _KLsignatureGVKe K61;
static _KLsimple_object_vectorGVKd_3 K62;
static _KLsignatureAvaluesGVKi K63;
static _KLsignatureAvaluesGVKi K64;
static _KLsimple_object_vectorGVKd_2 K65;
static _KLsignatureAvaluesGVKi K66;
static _KLsimple_object_vectorGVKd_2 K67;
static _KLsignatureAvaluesGVKi K68;
static _KLsimple_object_vectorGVKd_2 K69;
static _KLsignatureAvaluesGVKi K70;
static _KLsimple_object_vectorGVKd_2 K71;
static _KLsignatureAvaluesGVKi K72;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K73;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K74;
static _KLsignatureAvaluesGVKi K75;
static _KLsimple_object_vectorGVKd_3 K76;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K77;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K78;
static _KLsignatureAvaluesGVKi K79;
static _KLsimple_object_vectorGVKd_3 K80;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K81;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K82;
static _KLsignatureAvaluesGVKi K83;
static _KLsimple_object_vectorGVKd_3 K84;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K85;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K86;
static _KLsignatureAvaluesGVKi K87;
static _KLsimple_object_vectorGVKd_3 K88;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K89;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K90;
static _KLsignatureAvaluesGVKi K91;
static _KLsimple_object_vectorGVKd_3 K92;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K93;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K94;
static _KLsignatureAvaluesGVKi K95;
static _KLsimple_object_vectorGVKd_3 K96;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K97;
static _KLsimple_typechecked_cache_header_engine_nodeGVKg K98;
static _KLsignatureGVKe K99;
static _KLsimple_object_vectorGVKd_2 K100;
extern _KLsimple_methodGVKe Kone_ofVKe;
D Kone_ofVKeI (D first_, D rest_);
extern _KLsimple_methodGVKe Ktype_unionVKd;
D Ktype_unionVKdI (D, D);
D Kmerge_typesVKeMM0I (D, D);
static _KLsignatureAvaluesGVKi K106;
static _KLsignatureGVKe K107;
extern _KLsimple_methodGVKe Kfalse_orVKe;
D Kfalse_orVKeI (D types_);
static _KLsingletonGVKd K110;
static _KLsignatureAvaluesGVKi K111;
extern _KLsealed_generic_functionGVKe Kmerge_typesVKe;
extern _KLsimple_methodGVKe Kmerge_typesVKeMM0;
static _KLpairGVKd K114;
static _KLsignatureAvaluesGVKi K115;
static _KLbyte_stringGVKd_11 K116;

/* Indirection variables */


/* Variables */

D type_unionVKd = &Ktype_unionVKd;
D merge_typesVKe = &Kmerge_typesVKe;
D union_instanceQVKi = &Kunion_instanceQVKi;
D false_orVKe = &Kfalse_orVKe;
D one_ofVKe = &Kone_ofVKe;

/* Objects */

_KLsimple_methodGVKe Kmap_congruency_classesVKiMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K99,
  &Kmap_congruency_classesVKiMM10I
};

_KLsimple_methodGVKe Khas_instancesQVKeMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K95,
  &Khas_instancesQVKeMM4I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K91,
  &Ksubjunctive_subtypeQVKiMM18I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K87,
  &Ksubjunctive_subtypeQVKiMM17I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K83,
  &Ksubjunctive_subtypeQVKiMM16I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K79,
  &Ksubjunctive_subtypeQVKiMM15I
};

_KLsimple_methodGVKe Ksubjunctive_subtypeQVKiMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K75,
  &Ksubjunctive_subtypeQVKiMM14I
};

_KLsimple_methodGVKe KsubtypeQVKdMM14 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K72,
  &KsubtypeQVKdMM14I
};

_KLsimple_methodGVKe KsubtypeQVKdMM15 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K70,
  &KsubtypeQVKdMM15I
};

_KLsimple_methodGVKe KsubtypeQVKdMM16 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K68,
  &KsubtypeQVKdMM16I
};

_KLsimple_methodGVKe KsubtypeQVKdMM17 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K66,
  &KsubtypeQVKdMM17I
};

_KLsimple_methodGVKe KsubtypeQVKdMM18 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K64,
  &KsubtypeQVKdMM18I
};

_KLsimple_methodGVKe KinstanceQ_functionVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K63,
  &KinstanceQ_functionVKeMM1I
};

_KLsimple_methodGVKe Kreduce_incomplete_classesVKiMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K61,
  &Kreduce_incomplete_classesVKiMM11I
};

_KLsimple_methodGVKe Ktype_completeQVKeMM8 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K58,
  &Ktype_completeQVKeMM8I
};

_KLsimple_methodGVKe Kdisjoint_typesQVKeMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K56,
  &Kdisjoint_typesQVKeMM1I
};

_KLsimple_methodGVKe Kdisjoint_typesQVKeMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K50,
  &Kdisjoint_typesQVKeMM2I
};

_KLsimple_methodGVKe Kdisjoint_typesQVKeMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_4,
  &K46,
  &Kdisjoint_typesQVKeMM3I
};

_KLkeyword_methodGVKe KinitializeVKdMM22 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K43,
  &key_mep_2,
  &KinitializeVKdMM22I,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_15 K39 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "No next method."
};

_KLsimple_methodGVKe Kunion_instanceQVKi = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K41,
  &Kunion_instanceQVKiI
};

static _KLsignatureAvaluesGVKi K41 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K42,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLunionGVKe
};

static _KLkeyword_signatureGVKe K43 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 46923781,
  &KDsignature_LunionG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K44 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K45 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
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
  &KLtypeGVKd,
  &KLunionGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K48 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K49 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
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
  &KLunionGVKe,
  &KLtypeGVKd,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K52 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K53 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K54 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K55 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_4,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdisjoint_typesQVKe
};

static _KLsignatureAvaluesGVKi K56 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555473,
  &K57,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KLunionGVKe,
  &KLunionGVKe,
  &KLsubjunctive_class_universeGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K58 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LunionG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K59 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K60 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kreduce_incomplete_classesVKi
};

static _KLsignatureGVKe K61 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944077,
  &K62
};

static _KLsimple_object_vectorGVKd_3 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfunctionGVKd,
  &KLunionGVKe,
  &KLobjectGVKd
};

static _KLsignatureAvaluesGVKi K63 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LunionG_typesVKi,
  &KDsignature_LmethodG_typesVKi
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
  &KLsingletonGVKd,
  &KLunionGVKe
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K67,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLunionGVKe,
  &KLsingletonGVKd
};

static _KLsignatureAvaluesGVKi K68 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K69,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K69 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLtypeGVKd,
  &KLunionGVKe
};

static _KLsignatureAvaluesGVKi K70 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K71,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLunionGVKe,
  &KLtypeGVKd
};

static _KLsignatureAvaluesGVKi K72 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LunionG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K73 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K74 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
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
  &KLunionGVKe,
  &KLunionGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K77 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K78 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsignatureAvaluesGVKi K79 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K80,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K80 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLunionGVKe,
  &KLtypeGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K81 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K82 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsignatureAvaluesGVKi K83 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K84,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K84 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLtypeGVKd,
  &KLunionGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K85 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K86 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsignatureAvaluesGVKi K87 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K88,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K88 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLunionGVKe,
  &KLsingletonGVKd,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K89 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K90 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 262201,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Ksubjunctive_subtypeQVKi
};

static _KLsignatureAvaluesGVKi K91 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K92,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K92 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingletonGVKd,
  &KLunionGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K93 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 327737,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Khas_instancesQVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K94 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 327737,
  &KPfalseVKi,
  &cache_header_engine_3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Khas_instancesQVKe
};

static _KLsignatureAvaluesGVKi K95 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K96,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K96 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLclassGVKd,
  &KLunionGVKe,
  &KLsubjunctive_class_universeGVKe
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K97 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsimple_typechecked_cache_header_engine_nodeGVKg K98 = {
  &KLsimple_typechecked_cache_header_engine_nodeGVKgW /* wrapper */,
  (D) 65593,
  &KPfalseVKi,
  &cache_header_engine_2,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kmap_congruency_classesVKi
};

static _KLsignatureGVKe K99 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41943049,
  &K100
};

static _KLsimple_object_vectorGVKd_2 K100 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLunionGVKe
};

_KLsimple_methodGVKe Kone_ofVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K107,
  &Kone_ofVKeI
};

_KLsimple_methodGVKe Ktype_unionVKd = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K106,
  &Ktype_unionVKdI
};

static _KLsignatureAvaluesGVKi K106 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604037,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLsignatureGVKe K107 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 45088773,
  &KDsignature_LobjectG_typesVKi
};

_KLsimple_methodGVKe Kfalse_orVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K111,
  &Kfalse_orVKeI
};

static _KLsingletonGVKd K110 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K111 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604033,
  &KPempty_vectorVKi,
  &KDsignature_LtypeG_typesVKi
};

_KLsealed_generic_functionGVKe Kmerge_typesVKe = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K115,
  &KPfalseVKi,
  &K116,
  &K114,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kmerge_typesVKeMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K115,
  &Kmerge_typesVKeMM0I
};

static _KLpairGVKd K114 = {
  &KLpairGVKdW /* wrapper */,
  &Kmerge_typesVKeMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K115 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LtypeG_typesVKi,
  &KDsignature_LtypeG_typesVKi
};

static _KLbyte_stringGVKd_11 K116 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "merge-types"
};

/* Code */

D Kunion_instanceQVKiI (D x_, D u_) {
  D Utmp_;
  D T4_0;
  D T5;
  D T6_0;
  D T7_0;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:61
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
  T8 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
  Utmp_ = primitive_instanceQ(x_,T8);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
    T4_0 = Utmp_;
    T7_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
    T9 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
    T5 = primitive_instanceQ(x_,T9);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
    T6_0 = T5;
    T7_0 = T6_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:61
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kmap_congruency_classesVKiMM10I (D f_, D t_) {
  D T3;
  D T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:166
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:167
  T3 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:167
  ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K97, 2);
  ENGINE_NODE_CALL2(&K97, f_, T3);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:168
  T4 = SLOT_VALUE_INITD(t_, 2);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:168
  ENGINE_NODE_CALL_PROLOG(&Kmap_congruency_classesVKi, &K98, 2);
  T5 = ENGINE_NODE_CALL2(&K98, f_, T4);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:166
  MV_SET_COUNT(0);
  return(T5);
}

D Khas_instancesQVKeMM4I (D class_, D u_, D scu_) {
  D some1Q_;
  D all1Q_;
  D some2Q_;
  D all2Q_;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T11_1;
  D T12;
  D T13_0;
  D T13_1;
  D T14_0;
  D T14_1;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:181
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:184
  T10 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:184
  ENGINE_NODE_CALL_PROLOG(&Khas_instancesQVKe, &K93, 3);
  T11_0 = ENGINE_NODE_CALL3(&K93, class_, T10, scu_);
  T11_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:184
  some1Q_ = T11_0;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:184
  all1Q_ = T11_1;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:185
  T12 = SLOT_VALUE_INITD(u_, 2);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:185
  ENGINE_NODE_CALL_PROLOG(&Khas_instancesQVKe, &K94, 3);
  T13_0 = ENGINE_NODE_CALL3(&K94, class_, T12, scu_);
  T13_1 = MV_GET_ELT(1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:185
  some2Q_ = T13_0;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:185
  all2Q_ = T13_1;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:186
  if (some1Q_ != &KPfalseVKi) {
    T8 = some1Q_;
  } else {
    T8 = some2Q_;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:186
  if (all1Q_ != &KPfalseVKi) {
    T9 = all1Q_;
  } else {
    T9 = all2Q_;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:186
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:186
  T14_0 = T8;
  T14_1 = T9;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:181
  MV_SET_ELT(1, T14_1);
  MV_SET_COUNT(2);
  return(T14_0);
}

D Ksubjunctive_subtypeQVKiMM18I (D t_, D u_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D Utmp_;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:122
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:125
  T6 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:125
  ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K89, 3);
  Utmp_ = ENGINE_NODE_CALL3(&K89, t_, T6, scu_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:125
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:125
    T4_0 = Utmp_;
    T5_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:125
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:125
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K90, 3);
    T9_0 = ENGINE_NODE_CALL3(&K90, t_, T8, scu_);
    T5_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:125
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:122
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM17I (D u_, D t_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:116
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:119
  T6 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:119
  ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K85, 3);
  T7 = ENGINE_NODE_CALL3(&K85, T6, t_, scu_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:119
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:119
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:119
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K86, 3);
    T9_0 = ENGINE_NODE_CALL3(&K86, T8, t_, scu_);
    T5_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:119
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:119
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:116
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM16I (D t_, D u_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D Utmp_;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:101
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:104
  T6 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:104
  ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K81, 3);
  Utmp_ = ENGINE_NODE_CALL3(&K81, t_, T6, scu_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:104
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:104
    T4_0 = Utmp_;
    T5_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:104
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:104
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K82, 3);
    T9_0 = ENGINE_NODE_CALL3(&K82, t_, T8, scu_);
    T5_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:104
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:101
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM15I (D u_, D t_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:95
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:98
  T6 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:98
  ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K77, 3);
  T7 = ENGINE_NODE_CALL3(&K77, T6, t_, scu_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:98
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:98
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:98
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K78, 3);
    T9_0 = ENGINE_NODE_CALL3(&K78, T8, t_, scu_);
    T5_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:98
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:98
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:95
  MV_SET_COUNT(1);
  return(T5_0);
}

D Ksubjunctive_subtypeQVKiMM14I (D u1_, D u2_, D scu_) {
  D T4_0;
  D T5_0;
  D T6;
  D T7;
  D T8;
  D T9_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:76
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:81
  T6 = SLOT_VALUE_INITD(u1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:81
  ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K73, 3);
  T7 = ENGINE_NODE_CALL3(&K73, T6, u2_, scu_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:81
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:81
    T8 = SLOT_VALUE_INITD(u1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:81
    ENGINE_NODE_CALL_PROLOG(&Ksubjunctive_subtypeQVKi, &K74, 3);
    T9_0 = ENGINE_NODE_CALL3(&K74, T8, u2_, scu_);
    T5_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:81
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:81
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:76
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsubtypeQVKdMM14I (D u1_, D u2_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:70
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:73
  T7 = SLOT_VALUE_INITD(u1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:73
  CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
  T3 = CONGRUENT_CALL2(T7, u2_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:73
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:73
    T8 = SLOT_VALUE_INITD(u1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:73
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T4_0 = CONGRUENT_CALL2(T8, u2_);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:73
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:73
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:70
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsubtypeQVKdMM15I (D u_, D t_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:86
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:87
  T7 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:87
  CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
  T3 = CONGRUENT_CALL2(T7, t_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:87
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:87
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:87
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T4_0 = CONGRUENT_CALL2(T8, t_);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:87
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:87
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:86
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsubtypeQVKdMM16I (D t_, D u_) {
  D Utmp_;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:90
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:91
  T7 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:91
  CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
  Utmp_ = CONGRUENT_CALL2(t_, T7);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:91
  if (Utmp_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:91
    T4_0 = Utmp_;
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:91
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:91
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T5_0 = CONGRUENT_CALL2(t_, T8);
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:91
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:90
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsubtypeQVKdMM17I (D u_, D t_) {
  D T3;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:107
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:108
  T7 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:108
  CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
  T3 = CONGRUENT_CALL2(T7, t_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:108
  if (T3 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:108
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:108
    CONGRUENT_CALL_PROLOG(&KsubtypeQVKd, 2);
    T4_0 = CONGRUENT_CALL2(T8, t_);
    T6_0 = T4_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:108
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:108
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:107
  MV_SET_COUNT(1);
  return(T6_0);
}

D KsubtypeQVKdMM18I (D t_, D u_) {
  D T3_0;
  D T4_0;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:111
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:112
  T5 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
  T6 = SLOT_VALUE_INITD(u_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
  T7 = primitive_instanceQ(T5,T6);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
    T3_0 = T7;
    T4_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
    T8 = SLOT_VALUE_INITD(u_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
    T9 = primitive_instanceQ(T5,T8);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
    T10_0 = T9;
    T4_0 = T10_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:113
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:111
  MV_SET_COUNT(1);
  return(T4_0);
}

D KinstanceQ_functionVKeMM1I (D t_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:56
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:57
  T2_0 = &Kunion_instanceQVKi;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:56
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kreduce_incomplete_classesVKiMM11I (D f_, D t_, D ans_) {
  D T4;
  D T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:172
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:174
  T4 = SLOT_VALUE_INITD(t_, 2);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:175
  T5 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:175
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K59, 3);
  T6 = ENGINE_NODE_CALL3(&K59, f_, T5, ans_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:174
  ENGINE_NODE_CALL_PROLOG(&Kreduce_incomplete_classesVKi, &K60, 3);
  T7_0 = ENGINE_NODE_CALL3(&K60, f_, T4, T6);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:172
  MV_SET_COUNT(1);
  return(T7_0);
}

D Ktype_completeQVKeMM8I (D t_) {
  D T2;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:161
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:162
  T6 = SLOT_VALUE_INITD(t_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:162
  CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
  T2 = CONGRUENT_CALL1(T6);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:162
  if (T2 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:162
    T7 = SLOT_VALUE_INITD(t_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:162
    CONGRUENT_CALL_PROLOG(&Ktype_completeQVKe, 1);
    T3_0 = CONGRUENT_CALL1(T7);
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:162
    T4_0 = &KPfalseVKi;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:162
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:161
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kdisjoint_typesQVKeMM1I (D t1_, D t2_, D scu_, D dep_) {
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  D T18_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:132
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  T9 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  T10 = SLOT_VALUE_INITD(t2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K52, 4);
  T11 = ENGINE_NODE_CALL4(&K52, T9, T10, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:137
    T12 = SLOT_VALUE_INITD(t2_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:137
    ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K53, 4);
    T13 = ENGINE_NODE_CALL4(&K53, T9, T12, scu_, dep_);
    T5 = T13;
  } else {
    T5 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:138
    T14 = SLOT_VALUE_INITD(t1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:138
    ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K54, 4);
    T15 = ENGINE_NODE_CALL4(&K54, T14, T10, scu_, dep_);
    T6 = T15;
  } else {
    T6 = &KPfalseVKi;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:139
    T16 = SLOT_VALUE_INITD(t1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:139
    T17 = SLOT_VALUE_INITD(t2_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:139
    ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K55, 4);
    T18_0 = ENGINE_NODE_CALL4(&K55, T16, T17, scu_, dep_);
    T8_0 = T18_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:136
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:132
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kdisjoint_typesQVKeMM2I (D t1_, D t2_, D scu_, D dep_) {
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:143
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:147
  T7 = SLOT_VALUE_INITD(t1_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:147
  ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K48, 4);
  T8 = ENGINE_NODE_CALL4(&K48, T7, t2_, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:147
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:148
    T9 = SLOT_VALUE_INITD(t1_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:148
    ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K49, 4);
    T10_0 = ENGINE_NODE_CALL4(&K49, T9, t2_, scu_, dep_);
    T6_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:147
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:147
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:143
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kdisjoint_typesQVKeMM3I (D t1_, D t2_, D scu_, D dep_) {
  D T5_0;
  D T6_0;
  D T7;
  D T8;
  D T9;
  D T10_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:152
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:156
  T7 = SLOT_VALUE_INITD(t2_, 1);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:156
  ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K44, 4);
  T8 = ENGINE_NODE_CALL4(&K44, t1_, T7, scu_, dep_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:156
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:157
    T9 = SLOT_VALUE_INITD(t2_, 2);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:157
    ENGINE_NODE_CALL_PROLOG(&Kdisjoint_typesQVKe, &K45, 4);
    T10_0 = ENGINE_NODE_CALL4(&K45, t1_, T9, scu_, dep_);
    T6_0 = T10_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:156
    T5_0 = &KPfalseVKi;
    T6_0 = T5_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:156
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:152
  MV_SET_COUNT(1);
  return(T6_0);
}

D KinitializeVKdMM22I (D x_, D Urest_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:17
  T5 = primitive_copy_vector(Urest_);
  T4 = primitive_next_methods_parameter();
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:18
  T6 = primitive_idQ(T4,&KPempty_listVKi);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:18
  if (T6 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:18
    KerrorVKdMM1I(&K39, &KPempty_vectorVKi);
  } else {
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:18
    T7 = SLOT_VALUE_INITD(T4, 0);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:18
    T8 = SLOT_VALUE_INITD(T4, 1);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:18
    MEP_CALL_PROLOG(T7, T8, 2);
    MEP_CALL2(T7, x_, T5);
  }
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:18
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:19
  T9 = SLOT_VALUE(&Kunion_instanceQVKi, 2);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:19
  SLOT_VALUE_SETTER(T9, x_, 0);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:19
  T3 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:17
  MV_SET_COUNT(0);
  return(T3);
}

D Kone_ofVKeI (D first_, D rest_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:197
  T5 = primitive_copy_vector(rest_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:198
  T3 = KsingletonVKdMM0I(first_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:198
  T7_0 = Kobject_classVKdI(T5);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:198
  T8 = T7_0;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:198
  T6 = CALL3(&Kmap_as_oneVKi, T8, &KsingletonVKdMM0, T5);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:198
  CONGRUENT_CALL_PROLOG(&KreduceVKd, 3);
  T4 = CONGRUENT_CALL3(&Ktype_unionVKd, T3, T6);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:197
  return(T4);
}

D Ktype_unionVKdI (D type_, D more_types_) {
  D result_T, result_;
  DWORD T4T, T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13;
  DWORD T14;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
  T6 = SLOT_VALUE_INITD(more_types_, 0);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
  result_T = type_;
  T4T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
    T4 = T4T;
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
    T8 = primitive_machine_word_equalQ(T4,T7);
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(more_types_, 1, T4);
      // /opt/opendylan-2013.1/sources/dylan/union.dylan:26
      T10 = primitive_idQ(result_,T9);
      // /opt/opendylan-2013.1/sources/dylan/union.dylan:25
      if (T10 != &KPfalseVKi) {
        T13 = result_;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/union.dylan:38
        T11_0 = Kmerge_typesVKeMM0I(result_, T9);
        // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
        T12 = T11_0;
        T13 = T12;
      }
      // /opt/opendylan-2013.1/sources/dylan/union.dylan:25
      // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
      T14 = primitive_machine_word_add_signal_overflow(T4,4);
      // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
      result_T = T13;
      T4T = T14;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/dylan/union.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:22
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kmerge_typesVKeMM0I (D t1_, D t2_) {
  D T3_0;
  _KLsimple_object_vectorGVKd_4 T4 = {&KLsimple_object_vectorGVKdW, (D) 17};

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:50
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:51
  T4.vector_element_[0] = &KJtype1_;
  T4.vector_element_[1] = t1_;
  T4.vector_element_[2] = &KJtype2_;
  T4.vector_element_[3] = t2_;
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:51
  CONGRUENT_CALL_PROLOG(&KmakeVKd, 2);
  T3_0 = CONGRUENT_CALL2(&KLunionGVKe, &T4);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:50
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kfalse_orVKeI (D types_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/union.dylan:191
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:192
  T2_0 = Ktype_unionVKdI(&K110, types_);
  // /opt/opendylan-2013.1/sources/dylan/union.dylan:191
  MV_SET_COUNT(1);
  return(T2_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_union_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_union_for_user () {
  return;
}


/* eof */
