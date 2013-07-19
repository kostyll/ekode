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
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(13);

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
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
} _KLfunction_classGVKi;

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

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
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI (D);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Labstract_integerG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe KuPshift_rightYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuPshift_rightYmachine_wordsVcommon_dylanMM0;
D KuPshift_rightYmachine_wordsVcommon_dylanMM0I (D m_, D count_);
extern _KLsimple_methodGVKe KuPshift_rightYmachine_wordsVcommon_dylanMM1;
D KuPshift_rightYmachine_wordsVcommon_dylanMM1I (D m_, D count_);
static _KLpairGVKd K5;
static _KLpairGVKd K6;
static _KLsignatureAvaluesGVKi K7;
static _KLbyte_stringGVKd_13 K8;
static _KLsimple_object_vectorGVKd_2 K9;
static _KLsignatureAvaluesGVKi K10;
static _KLsimple_object_vectorGVKd_2 K11;
static _KLsignatureAvaluesGVKi K12;
static _KLsimple_object_vectorGVKd_2 K13;
extern _KLsealed_generic_functionGVKe KuPshift_leftYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuPshift_leftYmachine_wordsVcommon_dylanMM0;
D KuPshift_leftYmachine_wordsVcommon_dylanMM0I (D m_, D count_);
extern _KLsimple_methodGVKe KuPshift_leftYmachine_wordsVcommon_dylanMM1;
D KuPshift_leftYmachine_wordsVcommon_dylanMM1I (D m_, D count_);
static _KLpairGVKd K19;
static _KLpairGVKd K20;
static _KLbyte_stringGVKd_12 K21;
extern _KLsealed_generic_functionGVKe KuProtate_rightYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuProtate_rightYmachine_wordsVcommon_dylanMM0;
D KuProtate_rightYmachine_wordsVcommon_dylanMM0I (D m_, D count_);
extern _KLsimple_methodGVKe KuProtate_rightYmachine_wordsVcommon_dylanMM1;
D KuProtate_rightYmachine_wordsVcommon_dylanMM1I (D m_, D count_);
static _KLpairGVKd K27;
static _KLpairGVKd K28;
static _KLbyte_stringGVKd_14 K29;
extern _KLsealed_generic_functionGVKe KuProtate_leftYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuProtate_leftYmachine_wordsVcommon_dylanMM0;
D KuProtate_leftYmachine_wordsVcommon_dylanMM0I (D m_, D count_);
extern _KLsimple_methodGVKe KuProtate_leftYmachine_wordsVcommon_dylanMM1;
D KuProtate_leftYmachine_wordsVcommon_dylanMM1I (D m_, D count_);
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLbyte_stringGVKd_13 K37;
extern _KLsealed_generic_functionGVKe KuPdivideYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM0;
D KuPdivideYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM1;
D KuPdivideYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM2;
D KuPdivideYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM3;
D KuPdivideYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K47;
static _KLpairGVKd K48;
static _KLpairGVKd K49;
static _KLpairGVKd K50;
static _KLsignatureAvaluesGVKi K51;
static _KLbyte_stringGVKd_8 K52;
static _KLsignatureAvaluesGVKi K53;
static _KLsignatureAvaluesGVKi K54;
static _KLsimple_object_vectorGVKd_2 K55;
static _KLsignatureAvaluesGVKi K56;
static _KLsimple_object_vectorGVKd_2 K57;
static _KLsignatureAvaluesGVKi K58;
extern _KLsealed_generic_functionGVKe KuPTYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM0;
D KuPTYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM1;
D KuPTYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM2;
D KuPTYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM3;
D KuPTYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K68;
static _KLpairGVKd K69;
static _KLpairGVKd K70;
static _KLpairGVKd K71;
static _KLbyte_stringGVKd_3 K72;
extern _KLsealed_generic_functionGVKe KuP_Ymachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM0;
D KuP_Ymachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM1;
D KuP_Ymachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM2;
D KuP_Ymachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM3;
D KuP_Ymachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K82;
static _KLpairGVKd K83;
static _KLpairGVKd K84;
static _KLpairGVKd K85;
static _KLbyte_stringGVKd_3 K86;
extern _KLsealed_generic_functionGVKe KuPAYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM0;
D KuPAYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM1;
D KuPAYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM2;
D KuPAYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM3;
D KuPAYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K96;
static _KLpairGVKd K97;
static _KLpairGVKd K98;
static _KLpairGVKd K99;
static _KLbyte_stringGVKd_3 K100;
extern _KLsealed_generic_functionGVKe KuPLYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM0;
D KuPLYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM1;
D KuPLYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM2;
D KuPLYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM3;
D KuPLYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K110;
static _KLpairGVKd K111;
static _KLpairGVKd K112;
static _KLpairGVKd K113;
static _KLsignatureAvaluesGVKi K114;
static _KLbyte_stringGVKd_3 K115;
static _KLsignatureAvaluesGVKi K116;
static _KLsignatureAvaluesGVKi K117;
static _KLsignatureAvaluesGVKi K118;
static _KLsignatureAvaluesGVKi K119;

/* Indirection variables */


/* Variables */

D uPLYmachine_wordsVcommon_dylan = &KuPLYmachine_wordsVcommon_dylan;
D uPAYmachine_wordsVcommon_dylan = &KuPAYmachine_wordsVcommon_dylan;
D uP_Ymachine_wordsVcommon_dylan = &KuP_Ymachine_wordsVcommon_dylan;
D uPTYmachine_wordsVcommon_dylan = &KuPTYmachine_wordsVcommon_dylan;
D uPdivideYmachine_wordsVcommon_dylan = &KuPdivideYmachine_wordsVcommon_dylan;
D uProtate_leftYmachine_wordsVcommon_dylan = &KuProtate_leftYmachine_wordsVcommon_dylan;
D uProtate_rightYmachine_wordsVcommon_dylan = &KuProtate_rightYmachine_wordsVcommon_dylan;
D uPshift_leftYmachine_wordsVcommon_dylan = &KuPshift_leftYmachine_wordsVcommon_dylan;
D uPshift_rightYmachine_wordsVcommon_dylan = &KuPshift_rightYmachine_wordsVcommon_dylan;

/* Objects */

_KLsealed_generic_functionGVKe KuPshift_rightYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K7,
  &KPfalseVKi,
  &K8,
  &K5,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuPshift_rightYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K12,
  &KuPshift_rightYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuPshift_rightYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K10,
  &KuPshift_rightYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K5 = {
  &KLpairGVKdW /* wrapper */,
  &KuPshift_rightYmachine_wordsVcommon_dylanMM0,
  &K6
};

static _KLpairGVKd K6 = {
  &KLpairGVKdW /* wrapper */,
  &KuPshift_rightYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K7 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K9,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_13 K8 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "u%shift-right"
};

static _KLsimple_object_vectorGVKd_2 K9 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K10 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K11,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K11 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K12 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K13,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K13 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe KuPshift_leftYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K7,
  &KPfalseVKi,
  &K21,
  &K19,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuPshift_leftYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K12,
  &KuPshift_leftYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuPshift_leftYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K10,
  &KuPshift_leftYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &KuPshift_leftYmachine_wordsVcommon_dylanMM0,
  &K20
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &KuPshift_leftYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "u%shift-left"
};

_KLsealed_generic_functionGVKe KuProtate_rightYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K7,
  &KPfalseVKi,
  &K29,
  &K27,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuProtate_rightYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K12,
  &KuProtate_rightYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuProtate_rightYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K10,
  &KuProtate_rightYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K27 = {
  &KLpairGVKdW /* wrapper */,
  &KuProtate_rightYmachine_wordsVcommon_dylanMM0,
  &K28
};

static _KLpairGVKd K28 = {
  &KLpairGVKdW /* wrapper */,
  &KuProtate_rightYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K29 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "u%rotate-right"
};

_KLsealed_generic_functionGVKe KuProtate_leftYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K7,
  &KPfalseVKi,
  &K37,
  &K35,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuProtate_leftYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K12,
  &KuProtate_leftYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuProtate_leftYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K10,
  &KuProtate_leftYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &KuProtate_leftYmachine_wordsVcommon_dylanMM0,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &KuProtate_leftYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "u%rotate-left"
};

_KLsealed_generic_functionGVKe KuPdivideYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K51,
  &KPfalseVKi,
  &K52,
  &K47,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &KuPdivideYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K56,
  &KuPdivideYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K54,
  &KuPdivideYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KuPdivideYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K53,
  &KuPdivideYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &KuPdivideYmachine_wordsVcommon_dylanMM0,
  &K48
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &KuPdivideYmachine_wordsVcommon_dylanMM1,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &KuPdivideYmachine_wordsVcommon_dylanMM2,
  &K50
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &KuPdivideYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K51 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_8 K52 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "u%divide"
};

static _KLsignatureAvaluesGVKi K53 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K54 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K55,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K56 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K57,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K57 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K58 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsealed_generic_functionGVKe KuPTYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K51,
  &KPfalseVKi,
  &K72,
  &K68,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &KuPTYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K56,
  &KuPTYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K54,
  &KuPTYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KuPTYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K53,
  &KuPTYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K68 = {
  &KLpairGVKdW /* wrapper */,
  &KuPTYmachine_wordsVcommon_dylanMM0,
  &K69
};

static _KLpairGVKd K69 = {
  &KLpairGVKdW /* wrapper */,
  &KuPTYmachine_wordsVcommon_dylanMM1,
  &K70
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &KuPTYmachine_wordsVcommon_dylanMM2,
  &K71
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &KuPTYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K72 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "u%*"
};

_KLsealed_generic_functionGVKe KuP_Ymachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K51,
  &KPfalseVKi,
  &K86,
  &K82,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &KuP_Ymachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K56,
  &KuP_Ymachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K54,
  &KuP_Ymachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KuP_Ymachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K53,
  &KuP_Ymachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K82 = {
  &KLpairGVKdW /* wrapper */,
  &KuP_Ymachine_wordsVcommon_dylanMM0,
  &K83
};

static _KLpairGVKd K83 = {
  &KLpairGVKdW /* wrapper */,
  &KuP_Ymachine_wordsVcommon_dylanMM1,
  &K84
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &KuP_Ymachine_wordsVcommon_dylanMM2,
  &K85
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &KuP_Ymachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K86 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "u%-"
};

_KLsealed_generic_functionGVKe KuPAYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K51,
  &KPfalseVKi,
  &K100,
  &K96,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &KuPAYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K56,
  &KuPAYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K54,
  &KuPAYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KuPAYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K53,
  &KuPAYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K96 = {
  &KLpairGVKdW /* wrapper */,
  &KuPAYmachine_wordsVcommon_dylanMM0,
  &K97
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &KuPAYmachine_wordsVcommon_dylanMM1,
  &K98
};

static _KLpairGVKd K98 = {
  &KLpairGVKdW /* wrapper */,
  &KuPAYmachine_wordsVcommon_dylanMM2,
  &K99
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &KuPAYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_3 K100 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "u%+"
};

_KLsealed_generic_functionGVKe KuPLYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K114,
  &KPfalseVKi,
  &K115,
  &K110,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K119,
  &KuPLYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K118,
  &KuPLYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K117,
  &KuPLYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KuPLYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K116,
  &KuPLYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &KuPLYmachine_wordsVcommon_dylanMM0,
  &K111
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &KuPLYmachine_wordsVcommon_dylanMM1,
  &K112
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &KuPLYmachine_wordsVcommon_dylanMM2,
  &K113
};

static _KLpairGVKd K113 = {
  &KLpairGVKdW /* wrapper */,
  &KuPLYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K114 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_3 K115 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "u%<"
};

static _KLsignatureAvaluesGVKi K116 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K117 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K55,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K118 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K57,
  &KDsignature_LbooleanG_typesVKi
};

static _KLsignatureAvaluesGVKi K119 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

/* Code */

D KuPshift_rightYmachine_wordsVcommon_dylanMM0I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T8 = primitive_machine_word_unsigned_shift_right(raw_x_,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuPshift_rightYmachine_wordsVcommon_dylanMM1I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T7 = primitive_unwrap_abstract_integer(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T8 = primitive_machine_word_unsigned_shift_right(T7,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:116
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuPshift_leftYmachine_wordsVcommon_dylanMM0I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T8 = primitive_machine_word_unsigned_double_shift_left_high(0,raw_x_,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuPshift_leftYmachine_wordsVcommon_dylanMM1I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T7 = primitive_unwrap_abstract_integer(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T8 = primitive_machine_word_unsigned_double_shift_left_high(0,T7,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:115
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuProtate_rightYmachine_wordsVcommon_dylanMM0I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T8 = primitive_machine_word_unsigned_rotate_right(raw_x_,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuProtate_rightYmachine_wordsVcommon_dylanMM1I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T7 = primitive_unwrap_abstract_integer(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T8 = primitive_machine_word_unsigned_rotate_right(T7,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:114
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuProtate_leftYmachine_wordsVcommon_dylanMM0I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T8 = primitive_machine_word_unsigned_rotate_left(raw_x_,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuProtate_leftYmachine_wordsVcommon_dylanMM1I (D m_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T7 = primitive_unwrap_abstract_integer(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T8 = primitive_machine_word_unsigned_rotate_left(T7,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:113
  MV_SET_COUNT(1);
  return(T10_0);
}

D KuPdivideYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T5_0 = primitive_machine_word_unsigned_divide_byref(raw_x_,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPdivideYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T5_0 = primitive_machine_word_unsigned_divide_byref(raw_x_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPdivideYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T5_0 = primitive_machine_word_unsigned_divide_byref(T3,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPdivideYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T5_0 = primitive_machine_word_unsigned_divide_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:81
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPTYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T5_0 = primitive_machine_word_unsigned_multiply_byref(raw_x_,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPTYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T5_0 = primitive_machine_word_unsigned_multiply_byref(raw_x_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPTYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T5_0 = primitive_machine_word_unsigned_multiply_byref(T3,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPTYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T5_0 = primitive_machine_word_unsigned_multiply_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:80
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuP_Ymachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T5_0 = primitive_machine_word_unsigned_subtract_with_borrow_byref(raw_x_,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuP_Ymachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T5_0 = primitive_machine_word_unsigned_subtract_with_borrow_byref(raw_x_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuP_Ymachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T5_0 = primitive_machine_word_unsigned_subtract_with_borrow_byref(T3,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuP_Ymachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T5_0 = primitive_machine_word_unsigned_subtract_with_borrow_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:79
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPAYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T5_0 = primitive_machine_word_unsigned_add_with_carry_byref(raw_x_,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPAYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T5_0 = primitive_machine_word_unsigned_add_with_carry_byref(raw_x_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPAYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T5_0 = primitive_machine_word_unsigned_add_with_carry_byref(T3,raw_y_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPAYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD v1_;
  DWORD v2_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T5_0 = primitive_machine_word_unsigned_add_with_carry_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v1_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  v2_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T8 = primitive_wrap_machine_word(v1_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T9 = primitive_wrap_machine_word(v2_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:78
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KuPLYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:13
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:15
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:15
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:15
  T5 = primitive_machine_word_unsigned_less_thanQ(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:15
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:13
  MV_SET_COUNT(1);
  return(T6_0);
}

D KuPLYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:18
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:21
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:20
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:20
  T5 = primitive_machine_word_unsigned_less_thanQ(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:20
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:18
  MV_SET_COUNT(1);
  return(T6_0);
}

D KuPLYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:24
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:27
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:26
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:26
  T5 = primitive_machine_word_unsigned_less_thanQ(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:26
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:24
  MV_SET_COUNT(1);
  return(T6_0);
}

D KuPLYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  D T5;
  D T6_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:30
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:33
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:34
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:32
  T5 = primitive_machine_word_unsigned_less_thanQ(T3,T4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:32
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned.dylan:30
  MV_SET_COUNT(1);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_18Eunsigned_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_18Eunsigned_for_user () {
  return;
}


/* eof */
