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
define__KLbyte_stringGVKd(2);
define__KLbyte_stringGVKd(9);
define__KLbyte_stringGVKd(4);

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
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(256);

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
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Labstract_integerG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe KPabsYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPabsYmachine_wordsVcommon_dylanMM0;
D KPabsYmachine_wordsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KPabsYmachine_wordsVcommon_dylanMM1;
D KPabsYmachine_wordsVcommon_dylanMM1I (D x_);
static _KLpairGVKd K5;
static _KLpairGVKd K6;
static _KLsignatureAvaluesGVKi K7;
static _KLbyte_stringGVKd_4 K8;
static _KLsimple_object_vectorGVKd_2 K9;
static _KLsignatureAvaluesGVKi K10;
static _KLsignatureAvaluesGVKi K11;
extern _KLsealed_generic_functionGVKe KPnegativeYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPnegativeYmachine_wordsVcommon_dylanMM0;
D KPnegativeYmachine_wordsVcommon_dylanMM0I (D x_);
extern _KLsimple_methodGVKe KPnegativeYmachine_wordsVcommon_dylanMM1;
D KPnegativeYmachine_wordsVcommon_dylanMM1I (D x_);
static _KLpairGVKd K17;
static _KLpairGVKd K18;
static _KLbyte_stringGVKd_9 K19;
extern _KLsealed_generic_functionGVKe KPTYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM0;
D KPTYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM1;
D KPTYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM2;
D KPTYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM3;
D KPTYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLpairGVKd K32;
static _KLsignatureAvaluesGVKi K33;
static _KLbyte_stringGVKd_2 K34;
static _KLsimple_object_vectorGVKd_3 K35;
static _KLsignatureAvaluesGVKi K36;
static _KLsignatureAvaluesGVKi K37;
static _KLsimple_object_vectorGVKd_2 K38;
static _KLsignatureAvaluesGVKi K39;
static _KLsimple_object_vectorGVKd_2 K40;
static _KLsignatureAvaluesGVKi K41;
extern _KLsealed_generic_functionGVKe KP_Ymachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM0;
D KP_Ymachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM1;
D KP_Ymachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM2;
D KP_Ymachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM3;
D KP_Ymachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K51;
static _KLpairGVKd K52;
static _KLpairGVKd K53;
static _KLpairGVKd K54;
static _KLsignatureAvaluesGVKi K55;
static _KLbyte_stringGVKd_2 K56;
static _KLsignatureAvaluesGVKi K57;
static _KLsignatureAvaluesGVKi K58;
static _KLsignatureAvaluesGVKi K59;
static _KLsignatureAvaluesGVKi K60;
extern _KLsealed_generic_functionGVKe KPAYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM0;
D KPAYmachine_wordsVcommon_dylanMM0I (D x_, D y_);
extern _KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM1;
D KPAYmachine_wordsVcommon_dylanMM1I (D x_, D y_);
extern _KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM2;
D KPAYmachine_wordsVcommon_dylanMM2I (D x_, D y_);
extern _KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM3;
D KPAYmachine_wordsVcommon_dylanMM3I (D x_, D y_);
static _KLpairGVKd K70;
static _KLpairGVKd K71;
static _KLpairGVKd K72;
static _KLpairGVKd K73;
static _KLbyte_stringGVKd_2 K74;

/* Indirection variables */


/* Variables */

D PAYmachine_wordsVcommon_dylan = &KPAYmachine_wordsVcommon_dylan;
D P_Ymachine_wordsVcommon_dylan = &KP_Ymachine_wordsVcommon_dylan;
D PTYmachine_wordsVcommon_dylan = &KPTYmachine_wordsVcommon_dylan;
D PnegativeYmachine_wordsVcommon_dylan = &KPnegativeYmachine_wordsVcommon_dylan;
D PabsYmachine_wordsVcommon_dylan = &KPabsYmachine_wordsVcommon_dylan;

/* Objects */

_KLsealed_generic_functionGVKe KPabsYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K7,
  &KPfalseVKi,
  &K8,
  &K5,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPabsYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K11,
  &KPabsYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPabsYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &KPabsYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K5 = {
  &KLpairGVKdW /* wrapper */,
  &KPabsYmachine_wordsVcommon_dylanMM0,
  &K6
};

static _KLpairGVKd K6 = {
  &KLpairGVKdW /* wrapper */,
  &KPabsYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K7 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_LobjectG_typesVKi,
  &K9
};

static _KLbyte_stringGVKd_4 K8 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "%abs"
};

static _KLsimple_object_vectorGVKd_2 K9 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLbooleanGVKd
};

static _KLsignatureAvaluesGVKi K10 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_Labstract_integerG_typesVKi,
  &K9
};

static _KLsignatureAvaluesGVKi K11 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_Lmachine_wordG_typesVKi,
  &K9
};

_KLsealed_generic_functionGVKe KPnegativeYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K7,
  &KPfalseVKi,
  &K19,
  &K17,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPnegativeYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K11,
  &KPnegativeYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPnegativeYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K10,
  &KPnegativeYmachine_wordsVcommon_dylanMM1I
};

static _KLpairGVKd K17 = {
  &KLpairGVKdW /* wrapper */,
  &KPnegativeYmachine_wordsVcommon_dylanMM0,
  &K18
};

static _KLpairGVKd K18 = {
  &KLpairGVKdW /* wrapper */,
  &KPnegativeYmachine_wordsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K19 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "%negative"
};

_KLsealed_generic_functionGVKe KPTYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K33,
  &KPfalseVKi,
  &K34,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K41,
  &KPTYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K39,
  &KPTYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K37,
  &KPTYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KPTYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K36,
  &KPTYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &KPTYmachine_wordsVcommon_dylanMM0,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &KPTYmachine_wordsVcommon_dylanMM1,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &KPTYmachine_wordsVcommon_dylanMM2,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &KPTYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K33 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &KDsignature_LobjectG_typesVKi,
  &K35
};

static _KLbyte_stringGVKd_2 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "%*"
};

static _KLsimple_object_vectorGVKd_3 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLmachine_wordGVKe,
  &KLbooleanGVKd
};

static _KLsignatureAvaluesGVKi K36 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &KDsignature_Labstract_integerG_typesVKi,
  &K35
};

static _KLsignatureAvaluesGVKi K37 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &K38,
  &K35
};

static _KLsimple_object_vectorGVKd_2 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K39 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &K40,
  &K35
};

static _KLsimple_object_vectorGVKd_2 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K41 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557513,
  &KDsignature_Lmachine_wordG_typesVKi,
  &K35
};

_KLsealed_generic_functionGVKe KP_Ymachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K55,
  &KPfalseVKi,
  &K56,
  &K51,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K60,
  &KP_Ymachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K59,
  &KP_Ymachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &KP_Ymachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KP_Ymachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KP_Ymachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &KP_Ymachine_wordsVcommon_dylanMM0,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &KP_Ymachine_wordsVcommon_dylanMM1,
  &K53
};

static _KLpairGVKd K53 = {
  &KLpairGVKdW /* wrapper */,
  &KP_Ymachine_wordsVcommon_dylanMM2,
  &K54
};

static _KLpairGVKd K54 = {
  &KLpairGVKdW /* wrapper */,
  &KP_Ymachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K55 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_LobjectG_typesVKi,
  &K9
};

static _KLbyte_stringGVKd_2 K56 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "%-"
};

static _KLsignatureAvaluesGVKi K57 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Labstract_integerG_typesVKi,
  &K9
};

static _KLsignatureAvaluesGVKi K58 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K38,
  &K9
};

static _KLsignatureAvaluesGVKi K59 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K40,
  &K9
};

static _KLsignatureAvaluesGVKi K60 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Lmachine_wordG_typesVKi,
  &K9
};

_KLsealed_generic_functionGVKe KPAYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K55,
  &KPfalseVKi,
  &K74,
  &K70,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K60,
  &KPAYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K59,
  &KPAYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K58,
  &KPAYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KPAYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K57,
  &KPAYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K70 = {
  &KLpairGVKdW /* wrapper */,
  &KPAYmachine_wordsVcommon_dylanMM0,
  &K71
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &KPAYmachine_wordsVcommon_dylanMM1,
  &K72
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &KPAYmachine_wordsVcommon_dylanMM2,
  &K73
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &KPAYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_2 K74 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 9,
  "%+"
};

/* Code */

D KPabsYmachine_wordsVcommon_dylanMM0I (D x_) {
  DWORD raw_x_;
  DWORD T3_0;
  D T3_1;
  DWORD result_;
  D overflowQ_;
  D T6;
  D T7_0;
  D T7_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  T3_0 = primitive_machine_word_abs_with_overflow_byref(raw_x_,(D*)&T3_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  result_ = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  overflowQ_ = T3_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  T6 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  T7_0 = T6;
  T7_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

D KPabsYmachine_wordsVcommon_dylanMM1I (D x_) {
  DWORD T2;
  DWORD T3_0;
  D T3_1;
  DWORD result_;
  D overflowQ_;
  D T6;
  D T7_0;
  D T7_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  T2 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  T3_0 = primitive_machine_word_abs_with_overflow_byref(T2,(D*)&T3_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  result_ = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  overflowQ_ = T3_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  T6 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  T7_0 = T6;
  T7_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:99
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

D KPnegativeYmachine_wordsVcommon_dylanMM0I (D x_) {
  DWORD raw_x_;
  DWORD T3_0;
  D T3_1;
  DWORD result_;
  D overflowQ_;
  D T6;
  D T7_0;
  D T7_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  T3_0 = primitive_machine_word_negative_with_overflow_byref(raw_x_,(D*)&T3_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  result_ = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  overflowQ_ = T3_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  T6 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  T7_0 = T6;
  T7_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

D KPnegativeYmachine_wordsVcommon_dylanMM1I (D x_) {
  DWORD T2;
  DWORD T3_0;
  D T3_1;
  DWORD result_;
  D overflowQ_;
  D T6;
  D T7_0;
  D T7_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  T2 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  T3_0 = primitive_machine_word_negative_with_overflow_byref(T2,(D*)&T3_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  result_ = T3_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  overflowQ_ = T3_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  T6 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  T7_0 = T6;
  T7_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:98
  MV_SET_ELT(1, T7_1);
  MV_SET_COUNT(2);
  return(T7_0);
}

D KPTYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  D T5_2;
  DWORD low_;
  DWORD high_;
  D overflowQ_;
  D T9;
  D T10;
  D T11_0;
  D T11_1;
  D T11_2;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:52
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  T5_0 = primitive_machine_word_multiply_with_overflow_byref(raw_x_,raw_y_,(DWORD*)&T5_1,(D*)&T5_2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  low_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  high_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  overflowQ_ = T5_2;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  T9 = primitive_wrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  T10 = primitive_wrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:54
  T11_0 = T9;
  T11_1 = T10;
  T11_2 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:52
  MV_SET_ELT(1, T11_1);
  MV_SET_ELT(2, T11_2);
  MV_SET_COUNT(3);
  return(T11_0);
}

D KPTYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5_0;
  DWORD T5_1;
  D T5_2;
  DWORD low_;
  DWORD high_;
  D overflowQ_;
  D T9;
  D T10;
  D T11_0;
  D T11_1;
  D T11_2;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:57
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:60
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  T5_0 = primitive_machine_word_multiply_with_overflow_byref(raw_x_,T3,(DWORD*)&T5_1,(D*)&T5_2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  low_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  high_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  overflowQ_ = T5_2;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  T9 = primitive_wrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  T10 = primitive_wrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:59
  T11_0 = T9;
  T11_1 = T10;
  T11_2 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:57
  MV_SET_ELT(1, T11_1);
  MV_SET_ELT(2, T11_2);
  MV_SET_COUNT(3);
  return(T11_0);
}

D KPTYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5_0;
  DWORD T5_1;
  D T5_2;
  DWORD low_;
  DWORD high_;
  D overflowQ_;
  D T9;
  D T10;
  D T11_0;
  D T11_1;
  D T11_2;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:63
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:66
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  T5_0 = primitive_machine_word_multiply_with_overflow_byref(T3,raw_y_,(DWORD*)&T5_1,(D*)&T5_2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  low_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  high_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  overflowQ_ = T5_2;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  T9 = primitive_wrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  T10 = primitive_wrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:65
  T11_0 = T9;
  T11_1 = T10;
  T11_2 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:63
  MV_SET_ELT(1, T11_1);
  MV_SET_ELT(2, T11_2);
  MV_SET_COUNT(3);
  return(T11_0);
}

D KPTYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  D T5_2;
  DWORD low_;
  DWORD high_;
  D overflowQ_;
  D T9;
  D T10;
  D T11_0;
  D T11_1;
  D T11_2;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:69
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:72
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:73
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:71
  T5_0 = primitive_machine_word_multiply_with_overflow_byref(T3,T4,(DWORD*)&T5_1,(D*)&T5_2);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:71
  low_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:71
  high_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:71
  overflowQ_ = T5_2;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:71
  T9 = primitive_wrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:71
  T10 = primitive_wrap_machine_word(high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:71
  T11_0 = T9;
  T11_1 = T10;
  T11_2 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:69
  MV_SET_ELT(1, T11_1);
  MV_SET_ELT(2, T11_2);
  MV_SET_COUNT(3);
  return(T11_0);
}

D KP_Ymachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T5_0 = primitive_machine_word_subtract_with_overflow_byref(raw_x_,raw_y_,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D KP_Ymachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T5_0 = primitive_machine_word_subtract_with_overflow_byref(raw_x_,T3,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D KP_Ymachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T5_0 = primitive_machine_word_subtract_with_overflow_byref(T3,raw_y_,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D KP_Ymachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T5_0 = primitive_machine_word_subtract_with_overflow_byref(T3,T4,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:43
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D KPAYmachine_wordsVcommon_dylanMM0I (D x_, D y_) {
  DWORD raw_x_;
  DWORD raw_y_;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T5_0 = primitive_machine_word_add_with_overflow_byref(raw_x_,raw_y_,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D KPAYmachine_wordsVcommon_dylanMM1I (D x_, D y_) {
  DWORD T3;
  DWORD raw_x_;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T3 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  raw_x_ = primitive_unwrap_machine_word(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T5_0 = primitive_machine_word_add_with_overflow_byref(raw_x_,T3,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D KPAYmachine_wordsVcommon_dylanMM2I (D x_, D y_) {
  DWORD T3;
  DWORD raw_y_;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  raw_y_ = primitive_unwrap_machine_word(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T5_0 = primitive_machine_word_add_with_overflow_byref(T3,raw_y_,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}

D KPAYmachine_wordsVcommon_dylanMM3I (D x_, D y_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  D T5_1;
  DWORD result_;
  D overflowQ_;
  D T8;
  D T9_0;
  D T9_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T3 = primitive_unwrap_abstract_integer(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T4 = primitive_unwrap_abstract_integer(y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T5_0 = primitive_machine_word_add_with_overflow_byref(T3,T4,(D*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  result_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  overflowQ_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T8 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  T9_0 = T8;
  T9_1 = overflowQ_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/arithmetic.dylan:42
  MV_SET_ELT(1, T9_1);
  MV_SET_COUNT(2);
  return(T9_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_15Earithmetic_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_15Earithmetic_for_user () {
  return;
}


/* eof */
