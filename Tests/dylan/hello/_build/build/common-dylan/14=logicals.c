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
define__KLbyte_stringGVKd(7);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(16);
define__KLbyte_stringGVKd(17);
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
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);

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
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Labstract_integerG_typesVKi;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Kinvalid_bit_indexYcommon_dylan_internalsVcommon_dylanI (D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;

/* Defined object declarations */

D KPlogandYmachine_wordsVcommon_dylanI (D);
D KPlogiorYmachine_wordsVcommon_dylanI (D);
static _KLmachine_wordGVKe K2;
extern _KLsealed_generic_functionGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylan;
extern _KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM0;
D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM1;
D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM2;
D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM3;
D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K12;
static _KLpairGVKd K13;
static _KLpairGVKd K14;
static _KLpairGVKd K15;
static _KLsignatureAvaluesGVKi K16;
static _KLbyte_stringGVKd_14 K17;
static _KLsignatureAvaluesGVKi K18;
static _KLsignatureAvaluesGVKi K19;
static _KLsimple_object_vectorGVKd_2 K20;
static _KLsignatureAvaluesGVKi K21;
static _KLsimple_object_vectorGVKd_2 K22;
static _KLsignatureAvaluesGVKi K23;
static _KLmachine_wordGVKe K24;
extern _KLsealed_generic_functionGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylan;
extern _KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM0;
D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM1;
D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM2;
D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM3;
D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K34;
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLpairGVKd K37;
static _KLbyte_stringGVKd_14 K38;
extern _KLsealed_generic_functionGVKe KPcount_high_zerosYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPcount_high_zerosYmachine_wordsVcommon_dylanMM0;
D KPcount_high_zerosYmachine_wordsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KPcount_high_zerosYmachine_wordsVcommon_dylanMM1;
D KPcount_high_zerosYmachine_wordsVcommon_dylanMM1I (D x_);
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLsignatureAvaluesGVKi K46;
static _KLbyte_stringGVKd_17 K47;
static _KLsignatureAvaluesGVKi K48;
static _KLsignatureAvaluesGVKi K49;
extern _KLsealed_generic_functionGVKe KPcount_low_zerosYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPcount_low_zerosYmachine_wordsVcommon_dylanMM0;
D KPcount_low_zerosYmachine_wordsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KPcount_low_zerosYmachine_wordsVcommon_dylanMM1;
D KPcount_low_zerosYmachine_wordsVcommon_dylanMM1I (D x_);
static _KLpairGVKd K55;
static _KLpairGVKd K56;
static _KLbyte_stringGVKd_16 K57;
extern _KLsealed_generic_functionGVKe KPlogbitQYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPlogbitQYmachine_wordsVcommon_dylanMM0;
D KPlogbitQYmachine_wordsVcommon_dylanMM0I (D index_, D m_);
extern _KLsimple_methodGVKe KPlogbitQYmachine_wordsVcommon_dylanMM1;
D KPlogbitQYmachine_wordsVcommon_dylanMM1I (D, D);
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLsignatureAvaluesGVKi K65;
static _KLbyte_stringGVKd_8 K66;
static _KLsimple_object_vectorGVKd_2 K67;
static _KLsignatureAvaluesGVKi K68;
static _KLsimple_object_vectorGVKd_2 K69;
static _KLsignatureAvaluesGVKi K70;
static _KLsimple_object_vectorGVKd_2 K71;
extern _KLsealed_generic_functionGVKe KPlognotYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPlognotYmachine_wordsVcommon_dylanMM0;
D KPlognotYmachine_wordsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KPlognotYmachine_wordsVcommon_dylanMM1;
D KPlognotYmachine_wordsVcommon_dylanMM1I (D x_);
static _KLpairGVKd K77;
static _KLpairGVKd K78;
static _KLsignatureAvaluesGVKi K79;
static _KLbyte_stringGVKd_7 K80;
static _KLsignatureAvaluesGVKi K81;
static _KLsignatureAvaluesGVKi K82;
extern _KLsimple_methodGVKe KPlogandYmachine_wordsVcommon_dylan;
static _KLsignatureAvaluesGVKi K84;
extern _KLsimple_methodGVKe KPlogxorYmachine_wordsVcommon_dylan;
D KPlogxorYmachine_wordsVcommon_dylanI (D);
static _KLmachine_wordGVKe K87;
extern _KLsealed_generic_functionGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylan;
extern _KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM0;
D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM1;
D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM2;
D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM3;
D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K97;
static _KLpairGVKd K98;
static _KLpairGVKd K99;
static _KLpairGVKd K100;
static _KLbyte_stringGVKd_14 K101;
extern _KLsimple_methodGVKe KPlogiorYmachine_wordsVcommon_dylan;

/* Indirection variables */


/* Variables */

D PlogiorYmachine_wordsVcommon_dylan = &KPlogiorYmachine_wordsVcommon_dylan;
D PlogxorYmachine_wordsVcommon_dylan = &KPlogxorYmachine_wordsVcommon_dylan;
D PlogandYmachine_wordsVcommon_dylan = &KPlogandYmachine_wordsVcommon_dylan;
D PlognotYmachine_wordsVcommon_dylan = &KPlognotYmachine_wordsVcommon_dylan;
D PlogbitQYmachine_wordsVcommon_dylan = &KPlogbitQYmachine_wordsVcommon_dylan;
D Pcount_low_zerosYmachine_wordsVcommon_dylan = &KPcount_low_zerosYmachine_wordsVcommon_dylan;
D Pcount_high_zerosYmachine_wordsVcommon_dylan = &KPcount_high_zerosYmachine_wordsVcommon_dylan;

/* Objects */

static _KLmachine_wordGVKe K2 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

_KLsealed_generic_functionGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K16,
  (D) 1,
  &K17,
  &K12,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K19,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM2I
};

_KLsimple_methodGVKe Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM3I
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM0,
  &K13
};

static _KLpairGVKd K13 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM1,
  &K14
};

static _KLpairGVKd K14 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM2,
  &K15
};

static _KLpairGVKd K15 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K16 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_14 K17 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "binary-%logior"
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K19 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K20,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K22,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K23 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLmachine_wordGVKe K24 = {
  &KLmachine_wordGVKeW /* wrapper */,
  -1
};

_KLsealed_generic_functionGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K16,
  (D) 1,
  &K38,
  &K34,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K19,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM2I
};

_KLsimple_methodGVKe Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM3I
};

static _KLpairGVKd K34 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM0,
  &K35
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM1,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM2,
  &K37
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "binary-%logand"
};

_KLsealed_generic_functionGVKe KPcount_high_zerosYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K46,
  &KPfalseVKi,
  &K47,
  &K44,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPcount_high_zerosYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K49,
  &KPcount_high_zerosYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPcount_high_zerosYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K48,
  &KPcount_high_zerosYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &KPcount_high_zerosYmachine_wordsVcommon_dylanMM0,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &KPcount_high_zerosYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K46 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_17 K47 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 69,
  "%count-high-zeros"
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K49 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsealed_generic_functionGVKe KPcount_low_zerosYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K46,
  &KPfalseVKi,
  &K57,
  &K55,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPcount_low_zerosYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K49,
  &KPcount_low_zerosYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPcount_low_zerosYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K48,
  &KPcount_low_zerosYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K55 = {
  &KLpairGVKdW /* wrapper */,
  &KPcount_low_zerosYmachine_wordsVcommon_dylanMM0,
  &K56
};

static _KLpairGVKd K56 = {
  &KLpairGVKdW /* wrapper */,
  &KPcount_low_zerosYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_16 K57 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 65,
  "%count-low-zeros"
};

_KLsealed_generic_functionGVKe KPlogbitQYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K65,
  &KPfalseVKi,
  &K66,
  &K63,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPlogbitQYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K70,
  &KPlogbitQYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPlogbitQYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K68,
  &KPlogbitQYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &KPlogbitQYmachine_wordsVcommon_dylanMM0,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &KPlogbitQYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K65 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K67,
  &KDsignature_LbooleanG_typesVKi
};

static _KLbyte_stringGVKd_8 K66 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "%logbit?"
};

static _KLsimple_object_vectorGVKd_2 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
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
  &KLintegerGVKd,
  &KLabstract_integerGVKe
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
  &KLintegerGVKd,
  &KLmachine_wordGVKe
};

_KLsealed_generic_functionGVKe KPlognotYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K79,
  &KPfalseVKi,
  &K80,
  &K77,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPlognotYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K82,
  &KPlognotYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPlognotYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K81,
  &KPlognotYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K77 = {
  &KLpairGVKdW /* wrapper */,
  &KPlognotYmachine_wordsVcommon_dylanMM0,
  &K78
};

static _KLpairGVKd K78 = {
  &KLpairGVKdW /* wrapper */,
  &KPlognotYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K79 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_7 K80 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "%lognot"
};

static _KLsignatureAvaluesGVKi K81 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K82 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsimple_methodGVKe KPlogandYmachine_wordsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K84,
  &KPlogandYmachine_wordsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K84 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 34604033,
  &KPempty_vectorVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsimple_methodGVKe KPlogxorYmachine_wordsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K84,
  &KPlogxorYmachine_wordsVcommon_dylanI
};

static _KLmachine_wordGVKe K87 = {
  &KLmachine_wordGVKeW /* wrapper */,
  0
};

_KLsealed_generic_functionGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K16,
  (D) 1,
  &K101,
  &K97,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K23,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM1I
};

_KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K19,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM2I
};

_KLsimple_methodGVKe Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM3I
};

static _KLpairGVKd K97 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM0,
  &K98
};

static _KLpairGVKd K98 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM1,
  &K99
};

static _KLpairGVKd K99 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM2,
  &K100
};

static _KLpairGVKd K100 = {
  &KLpairGVKdW /* wrapper */,
  &Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_14 K101 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "binary-%logxor"
};

_KLsimple_methodGVKe KPlogiorYmachine_wordsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_0,
  &K84,
  &KPlogiorYmachine_wordsVcommon_dylanI
};

/* Code */

D KPlogandYmachine_wordsVcommon_dylanI (D machine_words_) {
  DWORD T2T, T2;
  D result_T, result_;
  D T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T6 = SLOT_VALUE_INITD(machine_words_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T2T = 1;
  result_T = &K24;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
    T8 = primitive_machine_word_equalQ(T2,T7);
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(machine_words_, 1, T2);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
      T10 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
      CONGRUENT_CALL_PROLOG(&Kbinary_PlogandYcommon_dylan_internalsVcommon_dylan, 2);
      T4 = CONGRUENT_CALL2(result_, T9);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
      T2T = T10;
      result_T = T4;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPlogiorYmachine_wordsVcommon_dylanI (D machine_words_) {
  DWORD T2T, T2;
  D result_T, result_;
  D T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T6 = SLOT_VALUE_INITD(machine_words_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T2T = 1;
  result_T = &K2;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
    T8 = primitive_machine_word_equalQ(T2,T7);
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(machine_words_, 1, T2);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
      T10 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
      CONGRUENT_CALL_PROLOG(&Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylan, 2);
      T4 = CONGRUENT_CALL2(result_, T9);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
      T2T = T10;
      result_T = T4;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T5 = primitive_machine_word_logior(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T5 = primitive_machine_word_logior(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T5 = primitive_machine_word_logior(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogiorYcommon_dylan_internalsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T5 = primitive_machine_word_logior(T3,T4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:53
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T5 = primitive_machine_word_logand(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T5 = primitive_machine_word_logand(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T5 = primitive_machine_word_logand(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogandYcommon_dylan_internalsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T5 = primitive_machine_word_logand(T3,T4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:55
  MV_SET_COUNT(1);
  return(T7_0);
}

D KPcount_high_zerosYmachine_wordsVcommon_dylanMM0I (D x_) {
  DWORD raw_xF2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  raw_xF2 = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T3 = primitive_machine_word_count_high_zeros(raw_xF2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T4 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  MV_SET_COUNT(1);
  return(T7_0);
}

D KPcount_high_zerosYmachine_wordsVcommon_dylanMM1I (D x_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T2 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T3 = primitive_machine_word_count_high_zeros(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T4 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:112
  MV_SET_COUNT(1);
  return(T7_0);
}

D KPcount_low_zerosYmachine_wordsVcommon_dylanMM0I (D x_) {
  DWORD raw_xF2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  raw_xF2 = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T3 = primitive_machine_word_count_low_zeros(raw_xF2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T4 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  MV_SET_COUNT(1);
  return(T7_0);
}

D KPcount_low_zerosYmachine_wordsVcommon_dylanMM1I (D x_) {
  DWORD T2;
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T2 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T3 = primitive_machine_word_count_low_zeros(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T4 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:111
  MV_SET_COUNT(1);
  return(T7_0);
}

D KPlogbitQYmachine_wordsVcommon_dylanMM0I (D index_, D m_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD raw_x_;
  D T8;
  D T9_0;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:80
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
  T3 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
    Kinvalid_bit_indexYcommon_dylan_internalsVcommon_dylanI(index_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:82
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:83
  T10 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:83
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:83
  T8 = primitive_machine_word_logbitQ(T10,raw_x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:83
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:80
  MV_SET_COUNT(1);
  return(T9_0);
}

D KPlogbitQYmachine_wordsVcommon_dylanMM1I (D index_, D m_) {
  DWORD T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  D T8;
  D T9_0;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:86
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
  T3 = primitive_cast_integer_as_raw(index_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
  if (T4 != &KPfalseVKi) {
    T6 = &KPfalseVKi;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
    T5 = primitive_machine_word_less_thanQ(T3,257);
    T6 = T5;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
  if (T6 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
    Kinvalid_bit_indexYcommon_dylan_internalsVcommon_dylanI(index_);
  }
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:88
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:89
  T7 = primitive_unwrap_abstract_integer(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:89
  T10 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:89
  T8 = primitive_machine_word_logbitQ(T10,T7);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:89
  T9_0 = T8;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:86
  MV_SET_COUNT(1);
  return(T9_0);
}

D KPlognotYmachine_wordsVcommon_dylanMM0I (D x_) {
  DWORD T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:64
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:66
  T2 = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:66
  T3 = primitive_machine_word_lognot(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:66
  T4 = primitive_wrap_machine_word(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:66
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:64
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPlognotYmachine_wordsVcommon_dylanMM1I (D x_) {
  DWORD T2;
  DWORD T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:69
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:71
  T2 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:71
  T3 = primitive_machine_word_lognot(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:71
  T4 = primitive_wrap_machine_word(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:71
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:69
  MV_SET_COUNT(1);
  return(T5_0);
}

D KPlogxorYmachine_wordsVcommon_dylanI (D machine_words_) {
  DWORD T2T, T2;
  D result_T, result_;
  D T4;
  D T5_0;
  D T6;
  DWORD T7;
  D T8;
  D T9;
  DWORD T10;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T6 = SLOT_VALUE_INITD(machine_words_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T2T = 1;
  result_T = &K87;
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
    T2 = T2T;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
    result_ = result_T;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
    T8 = primitive_machine_word_equalQ(T2,T7);
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
    if (T8 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
      T9 = REPEATED_D_SLOT_VALUE_TAGGED(machine_words_, 1, T2);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
      T10 = primitive_machine_word_add_signal_overflow(T2,4);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
      CONGRUENT_CALL_PROLOG(&Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylan, 2);
      T4 = CONGRUENT_CALL2(result_, T9);
      // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
      T2T = T10;
      result_T = T4;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
    T5_0 = result_;
    // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T5 = primitive_machine_word_logxor(raw_x_,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T5 = primitive_machine_word_logxor(raw_x_,T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T5 = primitive_machine_word_logxor(T3,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  MV_SET_COUNT(1);
  return(T7_0);
}

D Kbinary_PlogxorYcommon_dylan_internalsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T5 = primitive_machine_word_logxor(T3,T4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/logicals.dylan:54
  MV_SET_COUNT(1);
  return(T7_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_14Elogicals_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_14Elogicals_for_user () {
  return;
}


/* eof */
