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
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(7);

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

/* Defined object declarations */

extern _KLsealed_generic_functionGVKe KPdivideYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM0;
D KPdivideYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM1;
D KPdivideYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM2;
D KPdivideYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM3;
D KPdivideYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_);
static _KLpairGVKd K9;
static _KLpairGVKd K10;
static _KLpairGVKd K11;
static _KLpairGVKd K12;
static _KLsignatureAvaluesGVKi K13;
static _KLbyte_stringGVKd_7 K14;
static _KLsignatureAvaluesGVKi K15;
static _KLsignatureAvaluesGVKi K16;
static _KLsimple_object_vectorGVKd_2 K17;
static _KLsignatureAvaluesGVKi K18;
static _KLsimple_object_vectorGVKd_2 K19;
static _KLsignatureAvaluesGVKi K20;
extern _KLsealed_generic_functionGVKe KPtruncateSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM0;
D KPtruncateSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM1;
D KPtruncateSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM2;
D KPtruncateSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM3;
D KPtruncateSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_);
static _KLpairGVKd K30;
static _KLpairGVKd K31;
static _KLpairGVKd K32;
static _KLpairGVKd K33;
static _KLbyte_stringGVKd_10 K34;
extern _KLsealed_generic_functionGVKe KProundSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM0;
D KProundSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM1;
D KProundSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM2;
D KProundSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM3;
D KProundSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_);
static _KLpairGVKd K44;
static _KLpairGVKd K45;
static _KLpairGVKd K46;
static _KLpairGVKd K47;
static _KLbyte_stringGVKd_7 K48;
extern _KLsealed_generic_functionGVKe KPceilingSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM0;
D KPceilingSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM1;
D KPceilingSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM2;
D KPceilingSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM3;
D KPceilingSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_);
static _KLpairGVKd K58;
static _KLpairGVKd K59;
static _KLpairGVKd K60;
static _KLpairGVKd K61;
static _KLbyte_stringGVKd_9 K62;
extern _KLsealed_generic_functionGVKe KPfloorSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM0;
D KPfloorSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM1;
D KPfloorSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM2;
D KPfloorSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_);
extern _KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM3;
D KPfloorSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_);
static _KLpairGVKd K72;
static _KLpairGVKd K73;
static _KLpairGVKd K74;
static _KLpairGVKd K75;
static _KLbyte_stringGVKd_7 K76;

/* Indirection variables */


/* Variables */

D PfloorSYmachine_wordsVcommon_dylan = &KPfloorSYmachine_wordsVcommon_dylan;
D PceilingSYmachine_wordsVcommon_dylan = &KPceilingSYmachine_wordsVcommon_dylan;
D ProundSYmachine_wordsVcommon_dylan = &KProundSYmachine_wordsVcommon_dylan;
D PtruncateSYmachine_wordsVcommon_dylan = &KPtruncateSYmachine_wordsVcommon_dylan;
D PdivideYmachine_wordsVcommon_dylan = &KPdivideYmachine_wordsVcommon_dylan;

/* Objects */

_KLsealed_generic_functionGVKe KPdivideYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K13,
  &KPfalseVKi,
  &K14,
  &K9,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K20,
  &KPdivideYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &KPdivideYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K16,
  &KPdivideYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KPdivideYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K15,
  &KPdivideYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K9 = {
  &KLpairGVKdW /* wrapper */,
  &KPdivideYmachine_wordsVcommon_dylanMM0,
  &K10
};

static _KLpairGVKd K10 = {
  &KLpairGVKdW /* wrapper */,
  &KPdivideYmachine_wordsVcommon_dylanMM1,
  &K11
};

static _KLpairGVKd K11 = {
  &KLpairGVKdW /* wrapper */,
  &KPdivideYmachine_wordsVcommon_dylanMM2,
  &K12
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &KPdivideYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K13 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_7 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "%divide"
};

static _KLsignatureAvaluesGVKi K15 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K16 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K17,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &K19,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K19 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K20 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556489,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsealed_generic_functionGVKe KPtruncateSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K13,
  &KPfalseVKi,
  &K34,
  &K30,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K20,
  &KPtruncateSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &KPtruncateSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K16,
  &KPtruncateSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KPtruncateSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K15,
  &KPtruncateSYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &KPtruncateSYmachine_wordsVcommon_dylanMM0,
  &K31
};

static _KLpairGVKd K31 = {
  &KLpairGVKdW /* wrapper */,
  &KPtruncateSYmachine_wordsVcommon_dylanMM1,
  &K32
};

static _KLpairGVKd K32 = {
  &KLpairGVKdW /* wrapper */,
  &KPtruncateSYmachine_wordsVcommon_dylanMM2,
  &K33
};

static _KLpairGVKd K33 = {
  &KLpairGVKdW /* wrapper */,
  &KPtruncateSYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K34 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "%truncate/"
};

_KLsealed_generic_functionGVKe KProundSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K13,
  &KPfalseVKi,
  &K48,
  &K44,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K20,
  &KProundSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &KProundSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K16,
  &KProundSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KProundSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K15,
  &KProundSYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K44 = {
  &KLpairGVKdW /* wrapper */,
  &KProundSYmachine_wordsVcommon_dylanMM0,
  &K45
};

static _KLpairGVKd K45 = {
  &KLpairGVKdW /* wrapper */,
  &KProundSYmachine_wordsVcommon_dylanMM1,
  &K46
};

static _KLpairGVKd K46 = {
  &KLpairGVKdW /* wrapper */,
  &KProundSYmachine_wordsVcommon_dylanMM2,
  &K47
};

static _KLpairGVKd K47 = {
  &KLpairGVKdW /* wrapper */,
  &KProundSYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K48 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "%round/"
};

_KLsealed_generic_functionGVKe KPceilingSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K13,
  &KPfalseVKi,
  &K62,
  &K58,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K20,
  &KPceilingSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &KPceilingSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K16,
  &KPceilingSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KPceilingSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K15,
  &KPceilingSYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &KPceilingSYmachine_wordsVcommon_dylanMM0,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &KPceilingSYmachine_wordsVcommon_dylanMM1,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &KPceilingSYmachine_wordsVcommon_dylanMM2,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &KPceilingSYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_9 K62 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 37,
  "%ceiling/"
};

_KLsealed_generic_functionGVKe KPfloorSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K13,
  &KPfalseVKi,
  &K76,
  &K72,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K20,
  &KPfloorSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K18,
  &KPfloorSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K16,
  &KPfloorSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KPfloorSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K15,
  &KPfloorSYmachine_wordsVcommon_dylanMM3I
};

static _KLpairGVKd K72 = {
  &KLpairGVKdW /* wrapper */,
  &KPfloorSYmachine_wordsVcommon_dylanMM0,
  &K73
};

static _KLpairGVKd K73 = {
  &KLpairGVKdW /* wrapper */,
  &KPfloorSYmachine_wordsVcommon_dylanMM1,
  &K74
};

static _KLpairGVKd K74 = {
  &KLpairGVKdW /* wrapper */,
  &KPfloorSYmachine_wordsVcommon_dylanMM2,
  &K75
};

static _KLpairGVKd K75 = {
  &KLpairGVKdW /* wrapper */,
  &KPfloorSYmachine_wordsVcommon_dylanMM3,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_7 K76 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 29,
  "%floor/"
};

/* Code */

D KPdivideYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_) {
  DWORD raw_dividend_;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T5_0 = primitive_machine_word_divide_byref(raw_dividend_,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPdivideYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_dividend_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T3 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T5_0 = primitive_machine_word_divide_byref(raw_dividend_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPdivideYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T5_0 = primitive_machine_word_divide_byref(T3,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPdivideYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T5_0 = primitive_machine_word_divide_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:55
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPtruncateSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_) {
  DWORD raw_dividend_;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T5_0 = primitive_machine_word_truncateS_byref(raw_dividend_,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPtruncateSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_dividend_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T3 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T5_0 = primitive_machine_word_truncateS_byref(raw_dividend_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPtruncateSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T5_0 = primitive_machine_word_truncateS_byref(T3,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPtruncateSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T5_0 = primitive_machine_word_truncateS_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:54
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KProundSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_) {
  DWORD raw_dividend_;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T5_0 = primitive_machine_word_roundS_byref(raw_dividend_,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KProundSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_dividend_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T3 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T5_0 = primitive_machine_word_roundS_byref(raw_dividend_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KProundSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T5_0 = primitive_machine_word_roundS_byref(T3,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KProundSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T5_0 = primitive_machine_word_roundS_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:53
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPceilingSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_) {
  DWORD raw_dividend_;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T5_0 = primitive_machine_word_ceilingS_byref(raw_dividend_,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPceilingSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_dividend_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T3 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T5_0 = primitive_machine_word_ceilingS_byref(raw_dividend_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPceilingSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T5_0 = primitive_machine_word_ceilingS_byref(T3,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPceilingSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T5_0 = primitive_machine_word_ceilingS_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:52
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPfloorSYmachine_wordsVcommon_dylanMM0I (D dividend_, D divisor_) {
  DWORD raw_dividend_;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T5_0 = primitive_machine_word_floorS_byref(raw_dividend_,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPfloorSYmachine_wordsVcommon_dylanMM1I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_dividend_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T3 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  raw_dividend_ = primitive_unwrap_machine_word(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T5_0 = primitive_machine_word_floorS_byref(raw_dividend_,T3,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPfloorSYmachine_wordsVcommon_dylanMM2I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD raw_divisor_;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  raw_divisor_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T5_0 = primitive_machine_word_floorS_byref(T3,raw_divisor_,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}

D KPfloorSYmachine_wordsVcommon_dylanMM3I (D dividend_, D divisor_) {
  DWORD T3;
  DWORD T4;
  DWORD T5_0;
  DWORD T5_1;
  DWORD quotient_;
  DWORD remainder_;
  D T8;
  D T9;
  D T10_0;
  D T10_1;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T3 = primitive_unwrap_abstract_integer(dividend_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T5_0 = primitive_machine_word_floorS_byref(T3,T4,(DWORD*)&T5_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  quotient_ = T5_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  remainder_ = T5_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T8 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T9 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  T10_0 = T8;
  T10_1 = T9;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/division.dylan:51
  MV_SET_ELT(1, T10_1);
  MV_SET_COUNT(2);
  return(T10_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_16Edivision_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_16Edivision_for_user () {
  return;
}


/* eof */
