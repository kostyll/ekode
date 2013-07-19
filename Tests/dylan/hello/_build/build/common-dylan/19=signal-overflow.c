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
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(6);
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

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe KsoPshift_leftYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KsoPshift_leftYmachine_wordsVcommon_dylanMM0;
D KsoPshift_leftYmachine_wordsVcommon_dylanMM0I (D, D);
extern _KLsimple_methodGVKe KsoPshift_leftYmachine_wordsVcommon_dylanMM1;
D KsoPshift_leftYmachine_wordsVcommon_dylanMM1I (D, D);
static _KLpairGVKd K5;
static _KLpairGVKd K6;
static _KLsignatureAvaluesGVKi K7;
static _KLbyte_stringGVKd_13 K8;
static _KLsimple_object_vectorGVKd_2 K9;
static _KLsignatureAvaluesGVKi K10;
static _KLsimple_object_vectorGVKd_2 K11;
static _KLsignatureAvaluesGVKi K12;
static _KLsimple_object_vectorGVKd_2 K13;
extern _KLsealed_generic_functionGVKe KsoPabsYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KsoPabsYmachine_wordsVcommon_dylanMM0;
D KsoPabsYmachine_wordsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KsoPabsYmachine_wordsVcommon_dylanMM1;
D KsoPabsYmachine_wordsVcommon_dylanMM1I (D x_);
static _KLpairGVKd K19;
static _KLpairGVKd K20;
static _KLsignatureAvaluesGVKi K21;
static _KLbyte_stringGVKd_6 K22;
static _KLsignatureAvaluesGVKi K23;
static _KLsignatureAvaluesGVKi K24;
extern _KLsealed_generic_functionGVKe KsoPnegativeYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KsoPnegativeYmachine_wordsVcommon_dylanMM0;
D KsoPnegativeYmachine_wordsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KsoPnegativeYmachine_wordsVcommon_dylanMM1;
D KsoPnegativeYmachine_wordsVcommon_dylanMM1I (D x_);
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLbyte_stringGVKd_11 K32;
extern _KLsealed_generic_functionGVKe KsoPTYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM0;
D KsoPTYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM1;
D KsoPTYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM2;
D KsoPTYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM3;
D KsoPTYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K42;
static _KLpairGVKd K43;
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLsignatureAvaluesGVKi K46;
static _KLbyte_stringGVKd_4 K47;
static _KLsignatureAvaluesGVKi K48;
static _KLsignatureAvaluesGVKi K49;
static _KLsimple_object_vectorGVKd_2 K50;
static _KLsignatureAvaluesGVKi K51;
static _KLsimple_object_vectorGVKd_2 K52;
static _KLsignatureAvaluesGVKi K53;
extern _KLsealed_generic_functionGVKe KsoP_Ymachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM0;
D KsoP_Ymachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM1;
D KsoP_Ymachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM2;
D KsoP_Ymachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM3;
D KsoP_Ymachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLpairGVKd K65;
static _KLpairGVKd K66;
static _KLbyte_stringGVKd_4 K67;
extern _KLsealed_generic_functionGVKe KsoPAYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM0;
D KsoPAYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM1;
D KsoPAYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM2;
D KsoPAYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM3;
D KsoPAYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K77;
static _KLpairGVKd K78;
static _KLpairGVKd K79;
static _KLpairGVKd K80;
static _KLbyte_stringGVKd_4 K81;

/* Indirection variables */


/* Variables */

D soPAYmachine_wordsVcommon_dylan = &KsoPAYmachine_wordsVcommon_dylan;
D soP_Ymachine_wordsVcommon_dylan = &KsoP_Ymachine_wordsVcommon_dylan;
D soPTYmachine_wordsVcommon_dylan = &KsoPTYmachine_wordsVcommon_dylan;
D soPnegativeYmachine_wordsVcommon_dylan = &KsoPnegativeYmachine_wordsVcommon_dylan;
D soPabsYmachine_wordsVcommon_dylan = &KsoPabsYmachine_wordsVcommon_dylan;
D soPshift_leftYmachine_wordsVcommon_dylan = &KsoPshift_leftYmachine_wordsVcommon_dylan;

/* Objects */

_KLsealed_generic_functionGVKe KsoPshift_leftYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K7,
  &KPfalseVKi,
  &K8,
  &K5,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KsoPshift_leftYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K12,
  &KsoPshift_leftYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsoPshift_leftYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K10,
  &KsoPshift_leftYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K5 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPshift_leftYmachine_wordsVcommon_dylanMM0,
  &K6
};

static _KLpairGVKd K6 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPshift_leftYmachine_wordsVcommon_dylanMM1,
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
  "so%shift-left"
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

_KLsealed_generic_functionGVKe KsoPabsYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K21,
  &KPfalseVKi,
  &K22,
  &K19,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KsoPabsYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K24,
  &KsoPabsYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsoPabsYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K23,
  &KsoPabsYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPabsYmachine_wordsVcommon_dylanMM0,
  &K20
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPabsYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_6 K22 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "so%abs"
};

static _KLsignatureAvaluesGVKi K23 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsealed_generic_functionGVKe KsoPnegativeYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K21,
  &KPfalseVKi,
  &K32,
  &K30,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KsoPnegativeYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K24,
  &KsoPnegativeYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsoPnegativeYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K23,
  &KsoPnegativeYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPnegativeYmachine_wordsVcommon_dylanMM0,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPnegativeYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K32 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "so%negative"
};

_KLsealed_generic_functionGVKe KsoPTYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K46,
  &KPfalseVKi,
  &K47,
  &K42,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K53,
  &KsoPTYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K51,
  &KsoPTYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K49,
  &KsoPTYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KsoPTYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K48,
  &KsoPTYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K42 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPTYmachine_wordsVcommon_dylanMM0,
  &K43
};

static _KLpairGVKd K43 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPTYmachine_wordsVcommon_dylanMM1,
  &K44
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPTYmachine_wordsVcommon_dylanMM2,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPTYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K46 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_4 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "so%*"
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K49 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K50,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K50 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K51 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K52,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K52 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K53 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsealed_generic_functionGVKe KsoP_Ymachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K46,
  &KPfalseVKi,
  &K67,
  &K63,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K53,
  &KsoP_Ymachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K51,
  &KsoP_Ymachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K49,
  &KsoP_Ymachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KsoP_Ymachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K48,
  &KsoP_Ymachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &KsoP_Ymachine_wordsVcommon_dylanMM0,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &KsoP_Ymachine_wordsVcommon_dylanMM1,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &KsoP_Ymachine_wordsVcommon_dylanMM2,
  &K66
};

static _KLpairGVKd K66 = {
  &KLpairGVKdW /* wrapper */,
  &KsoP_Ymachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K67 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "so%-"
};

_KLsealed_generic_functionGVKe KsoPAYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K46,
  &KPfalseVKi,
  &K81,
  &K77,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K53,
  &KsoPAYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K51,
  &KsoPAYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K49,
  &KsoPAYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KsoPAYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K48,
  &KsoPAYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K77 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPAYmachine_wordsVcommon_dylanMM0,
  &K78
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPAYmachine_wordsVcommon_dylanMM1,
  &K79
};

static _KLpairGVKd K79 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPAYmachine_wordsVcommon_dylanMM2,
  &K80
};

static _KLpairGVKd K80 = {
  &KLpairGVKdW /* wrapper */,
  &KsoPAYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_4 K81 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "so%+"
};

/* Code */

D KsoPshift_leftYmachine_wordsVcommon_dylanMM0I (D x_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:80
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:82
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:83
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:83
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:83
  T8 = primitive_machine_word_shift_left_signal_overflow(raw_x_,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:83
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:83
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:80
  MV_SET_COUNT(1);
  return(T10_0);
}

D KsoPshift_leftYmachine_wordsVcommon_dylanMM1I (D x_, D count_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  D T9;
  D T10_0;
  DWORD T11;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:86
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
  T3 = primitive_cast_integer_as_raw(count_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
    Kinvalid_shift_quantityYcommon_dylan_internalsVcommon_dylanI(count_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:88
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:90
  T7 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:89
  T11 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:89
  T8 = primitive_machine_word_shift_left_signal_overflow(T7,T11);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:89
  T9 = primitive_wrap_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:89
  T10_0 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:86
  MV_SET_COUNT(1);
  return(T10_0);
}

D KsoPabsYmachine_wordsVcommon_dylanMM0I (D x_) {
  DWORD raw_x_;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  T3 = primitive_machine_word_abs_signal_overflow(raw_x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  T4 = primitive_wrap_machine_word(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsoPabsYmachine_wordsVcommon_dylanMM1I (D x_) {
  DWORD T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  T2 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  T3 = primitive_machine_word_abs_signal_overflow(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  T4 = primitive_wrap_machine_word(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:71
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsoPnegativeYmachine_wordsVcommon_dylanMM0I (D x_) {
  DWORD raw_x_;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  T3 = primitive_machine_word_negative_signal_overflow(raw_x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  T4 = primitive_wrap_machine_word(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsoPnegativeYmachine_wordsVcommon_dylanMM1I (D x_) {
  DWORD T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  T2 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  T3 = primitive_machine_word_negative_signal_overflow(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  T4 = primitive_wrap_machine_word(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:70
  MV_SET_COUNT(1);
  return(T5_0);
}

D KsoPTYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T5 = primitive_machine_word_multiply_signal_overflow(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoPTYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T5 = primitive_machine_word_multiply_signal_overflow(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoPTYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T5 = primitive_machine_word_multiply_signal_overflow(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoPTYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T5 = primitive_machine_word_multiply_signal_overflow(T3,T4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:46
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoP_Ymachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T5 = primitive_machine_word_subtract_signal_overflow(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoP_Ymachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T5 = primitive_machine_word_subtract_signal_overflow(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoP_Ymachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T5 = primitive_machine_word_subtract_signal_overflow(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoP_Ymachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T5 = primitive_machine_word_subtract_signal_overflow(T3,T4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:45
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoPAYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T5 = primitive_machine_word_add_signal_overflow(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoPAYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T5 = primitive_machine_word_add_signal_overflow(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoPAYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T5 = primitive_machine_word_add_signal_overflow(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  MV_SET_COUNT(1);
  return(T7_0);
}

D KsoPAYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T5 = primitive_machine_word_add_signal_overflow(T3,T4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/signal-overflow.dylan:44
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_19Esignal_overflow_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_19Esignal_overflow_for_user () {
  return;
}


/* eof */
