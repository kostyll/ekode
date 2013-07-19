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
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(13);
define__KLbyte_stringGVKd(14);

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

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe KudPshift_rightYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM0;
D KudPshift_rightYmachine_wordsVcommon_dylanMM0I (D low_, D high_, D count_);
extern _KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM1;
D KudPshift_rightYmachine_wordsVcommon_dylanMM1I (D low_, D high_, D count_);
extern _KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM2;
D KudPshift_rightYmachine_wordsVcommon_dylanMM2I (D low_, D high_, D count_);
extern _KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM3;
D KudPshift_rightYmachine_wordsVcommon_dylanMM3I (D low_, D high_, D count_);
static _KLpairGVKd K9;
static _KLpairGVKd K10;
static _KLpairGVKd K11;
static _KLpairGVKd K12;
static _KLsignatureAvaluesGVKi K13;
static _KLbyte_stringGVKd_14 K14;
static _KLsimple_object_vectorGVKd_3 K15;
static _KLsignatureAvaluesGVKi K16;
static _KLsimple_object_vectorGVKd_3 K17;
static _KLsignatureAvaluesGVKi K18;
static _KLsimple_object_vectorGVKd_3 K19;
static _KLsignatureAvaluesGVKi K20;
static _KLsimple_object_vectorGVKd_3 K21;
static _KLsignatureAvaluesGVKi K22;
static _KLsimple_object_vectorGVKd_3 K23;
extern _KLsealed_generic_functionGVKe KudPshift_leftYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM0;
D KudPshift_leftYmachine_wordsVcommon_dylanMM0I (D low_, D high_, D count_);
extern _KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM1;
D KudPshift_leftYmachine_wordsVcommon_dylanMM1I (D low_, D high_, D count_);
extern _KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM2;
D KudPshift_leftYmachine_wordsVcommon_dylanMM2I (D low_, D high_, D count_);
extern _KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM3;
D KudPshift_leftYmachine_wordsVcommon_dylanMM3I (D low_, D high_, D count_);
static _KLpairGVKd K33;
static _KLpairGVKd K34;
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLbyte_stringGVKd_13 K37;
extern _KLsealed_generic_functionGVKe KudPdivideYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM0;
D KudPdivideYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM1;
D KudPdivideYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM2;
D KudPdivideYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM3;
D KudPdivideYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM4;
D KudPdivideYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM5;
D KudPdivideYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM6;
D KudPdivideYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM7;
D KudPdivideYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_);
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLpairGVKd K57;
static _KLpairGVKd K58;
static _KLpairGVKd K59;
static _KLpairGVKd K60;
static _KLpairGVKd K61;
static _KLpairGVKd K62;
static _KLsignatureAvaluesGVKi K63;
static _KLbyte_stringGVKd_9 K64;
static _KLsignatureAvaluesGVKi K65;
static _KLsignatureAvaluesGVKi K66;
static _KLsimple_object_vectorGVKd_3 K67;
static _KLsignatureAvaluesGVKi K68;
static _KLsimple_object_vectorGVKd_3 K69;
static _KLsignatureAvaluesGVKi K70;
static _KLsimple_object_vectorGVKd_3 K71;
static _KLsignatureAvaluesGVKi K72;
static _KLsimple_object_vectorGVKd_3 K73;
static _KLsignatureAvaluesGVKi K74;
static _KLsimple_object_vectorGVKd_3 K75;
static _KLsignatureAvaluesGVKi K76;
static _KLsimple_object_vectorGVKd_3 K77;
static _KLsignatureAvaluesGVKi K78;

/* Indirection variables */


/* Variables */

D udPdivideYmachine_wordsVcommon_dylan = &KudPdivideYmachine_wordsVcommon_dylan;
D udPshift_leftYmachine_wordsVcommon_dylan = &KudPshift_leftYmachine_wordsVcommon_dylan;
D udPshift_rightYmachine_wordsVcommon_dylan = &KudPshift_rightYmachine_wordsVcommon_dylan;

/* Objects */

_KLsealed_generic_functionGVKe KudPshift_rightYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K13,
  &KPfalseVKi,
  &K14,
  &K9,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K22,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K20,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K18,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KudPshift_rightYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K16,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K9 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM0,
  &K10
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM1,
  &K11
};

static _KLpairGVKd K11 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM2,
  &K12
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_rightYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K13 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K15,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_14 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "ud%shift-right"
};

static _KLsimple_object_vectorGVKd_3 K15 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K16 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K17,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLabstract_integerGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K19,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K20 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K21,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K21 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K22 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K23,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLmachine_wordGVKe,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe KudPshift_leftYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K13,
  &KPfalseVKi,
  &K37,
  &K33,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K22,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K20,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K18,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KudPshift_leftYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K16,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM0,
  &K34
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM1,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM2,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &KudPshift_leftYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_13 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 53,
  "ud%shift-left"
};

_KLsealed_generic_functionGVKe KudPdivideYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K63,
  &KPfalseVKi,
  &K64,
  &K55,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K78,
  &KudPdivideYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K76,
  &KudPdivideYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K74,
  &KudPdivideYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K72,
  &KudPdivideYmachine_wordsVcommon_dylanMM3I
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K70,
  &KudPdivideYmachine_wordsVcommon_dylanMM4I
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K68,
  &KudPdivideYmachine_wordsVcommon_dylanMM5I
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K66,
  &KudPdivideYmachine_wordsVcommon_dylanMM6I
};

_KLsimple_methodGVKe KudPdivideYmachine_wordsVcommon_dylanMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K65,
  &KudPdivideYmachine_wordsVcommon_dylanMM7I
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM0,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM1,
  &K57
};

static _KLpairGVKd K57 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM2,
  &K58
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM3,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM4,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM5,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM6,
  &K62
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &KudPdivideYmachine_wordsVcommon_dylanMM7,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K63 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_9 K64 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "ud%divide"
};

static _KLsignatureAvaluesGVKi K65 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K67,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K68 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K69,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K69 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K70 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K71,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K71 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K72 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K73,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K73 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K74 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K75,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K75 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K76 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K77,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K77 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K78 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

/* Code */

D KudPshift_rightYmachine_wordsVcommon_dylanMM0I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD raw_low_;
  DWORD raw_high_;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  raw_low_ = primitive_unwrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  raw_high_ = primitive_unwrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T10_0 = primitive_machine_word_unsigned_double_shift_right_byref(raw_low_,raw_high_,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPshift_rightYmachine_wordsVcommon_dylanMM1I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD raw_low_;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T8 = primitive_unwrap_abstract_integer(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  raw_low_ = primitive_unwrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T10_0 = primitive_machine_word_unsigned_double_shift_right_byref(raw_low_,T8,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPshift_rightYmachine_wordsVcommon_dylanMM2I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD raw_high_;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T8 = primitive_unwrap_abstract_integer(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  raw_high_ = primitive_unwrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T10_0 = primitive_machine_word_unsigned_double_shift_right_byref(T8,raw_high_,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPshift_rightYmachine_wordsVcommon_dylanMM3I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T8 = primitive_unwrap_abstract_integer(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T9 = primitive_unwrap_abstract_integer(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T10_0 = primitive_machine_word_unsigned_double_shift_right_byref(T8,T9,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:155
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPshift_leftYmachine_wordsVcommon_dylanMM0I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD raw_low_;
  DWORD raw_high_;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  raw_low_ = primitive_unwrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  raw_high_ = primitive_unwrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T10_0 = primitive_machine_word_unsigned_double_shift_left_byref(raw_low_,raw_high_,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPshift_leftYmachine_wordsVcommon_dylanMM1I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD raw_low_;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T8 = primitive_unwrap_abstract_integer(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  raw_low_ = primitive_unwrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T10_0 = primitive_machine_word_unsigned_double_shift_left_byref(raw_low_,T8,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPshift_leftYmachine_wordsVcommon_dylanMM2I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD raw_high_;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T8 = primitive_unwrap_abstract_integer(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  raw_high_ = primitive_unwrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T10_0 = primitive_machine_word_unsigned_double_shift_left_byref(T8,raw_high_,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPshift_leftYmachine_wordsVcommon_dylanMM3I (D low_, D high_, D count_) {
  DWORD T4;
  D T5;
  D T6;
  D T7;
  DWORD T8;
  DWORD T9;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  DWORD highF12;
  D T13;
  D T14;
  DWORD T15;
  D T16_0;
  D T16_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T4 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T5 = primitive_machine_word_less_thanQ(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T5 != &KPfalseVKi) {
    T7 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    T6 = primitive_machine_word_less_thanQ(T4,257);
    T7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  if (T7 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T8 = primitive_unwrap_abstract_integer(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T9 = primitive_unwrap_abstract_integer(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T15 = primitive_machine_word_shift_right(T4,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T10_0 = primitive_machine_word_unsigned_double_shift_left_byref(T8,T9,T15,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  highF12 = T10_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T13 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T14 = primitive_wrap_machine_word(highF12);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  T16_0 = T13;
  T16_1 = T14;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:154
  MV_SET_ELT(1, T16_1);
  MV_SET_COUNT(2);
  return(T16_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD raw_low_;
  DWORD raw_high_;
  DWORD raw_div_;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:18
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(raw_low_,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:22
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:18
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD T4;
  DWORD raw_low_;
  DWORD raw_high_;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:28
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:35
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(raw_low_,raw_high_,T4,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:32
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:28
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD T4;
  DWORD raw_low_;
  DWORD raw_div_;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:38
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:44
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(raw_low_,T4,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:42
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:38
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD T4;
  DWORD T5;
  DWORD raw_low_;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:48
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:54
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:55
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:52
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:52
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(raw_low_,T4,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:52
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:52
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:52
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:52
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:52
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:48
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD T4;
  DWORD raw_high_;
  DWORD raw_div_;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:58
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:63
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(T4,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:62
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:58
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD T4;
  DWORD T5;
  DWORD raw_high_;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:68
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:73
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:75
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:72
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:72
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(T4,raw_high_,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:72
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:72
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:72
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:72
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:72
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:68
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD T4;
  DWORD T5;
  DWORD raw_div_;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:83
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:84
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:82
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:82
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(T4,T5,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:82
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:82
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:82
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:82
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:82
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:78
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KudPdivideYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_) {
  DWORD T4;
  DWORD T5;
  DWORD T6;
  DWORD T7_0;
  DWORD T7_1;
  DWORD quotient_;
  DWORD remainder_;
  D T10;
  D T11;
  D T12_0;
  D T12_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:88
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:93
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:94
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:95
  T6 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:92
  T7_0 = primitive_machine_word_unsigned_double_divide_byref(T4,T5,T6,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:92
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:92
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:92
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:92
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:92
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/unsigned-double.dylan:88
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_21Eunsigned_double_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_21Eunsigned_double_for_user () {
  return;
}


/* eof */
