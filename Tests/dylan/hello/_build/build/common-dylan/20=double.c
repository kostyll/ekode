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
define__KLbyte_stringGVKd(10);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(8);

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

extern _KLsealed_generic_functionGVKe KdPdivideYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM0;
D KdPdivideYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM1;
D KdPdivideYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM2;
D KdPdivideYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM3;
D KdPdivideYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM4;
D KdPdivideYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM5;
D KdPdivideYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM6;
D KdPdivideYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM7;
D KdPdivideYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_);
static _KLpairGVKd K17;
static _KLpairGVKd K18;
static _KLpairGVKd K19;
static _KLpairGVKd K20;
static _KLpairGVKd K21;
static _KLpairGVKd K22;
static _KLpairGVKd K23;
static _KLpairGVKd K24;
static _KLsignatureAvaluesGVKi K25;
static _KLbyte_stringGVKd_8 K26;
static _KLsignatureAvaluesGVKi K27;
static _KLsignatureAvaluesGVKi K28;
static _KLsimple_object_vectorGVKd_3 K29;
static _KLsignatureAvaluesGVKi K30;
static _KLsimple_object_vectorGVKd_3 K31;
static _KLsignatureAvaluesGVKi K32;
static _KLsimple_object_vectorGVKd_3 K33;
static _KLsignatureAvaluesGVKi K34;
static _KLsimple_object_vectorGVKd_3 K35;
static _KLsignatureAvaluesGVKi K36;
static _KLsimple_object_vectorGVKd_3 K37;
static _KLsignatureAvaluesGVKi K38;
static _KLsimple_object_vectorGVKd_3 K39;
static _KLsignatureAvaluesGVKi K40;
extern _KLsealed_generic_functionGVKe KdPtruncateSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM0;
D KdPtruncateSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM1;
D KdPtruncateSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM2;
D KdPtruncateSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM3;
D KdPtruncateSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM4;
D KdPtruncateSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM5;
D KdPtruncateSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM6;
D KdPtruncateSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM7;
D KdPtruncateSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_);
static _KLpairGVKd K58;
static _KLpairGVKd K59;
static _KLpairGVKd K60;
static _KLpairGVKd K61;
static _KLpairGVKd K62;
static _KLpairGVKd K63;
static _KLpairGVKd K64;
static _KLpairGVKd K65;
static _KLbyte_stringGVKd_11 K66;
extern _KLsealed_generic_functionGVKe KdProundSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM0;
D KdProundSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM1;
D KdProundSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM2;
D KdProundSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM3;
D KdProundSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM4;
D KdProundSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM5;
D KdProundSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM6;
D KdProundSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM7;
D KdProundSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_);
static _KLpairGVKd K84;
static _KLpairGVKd K85;
static _KLpairGVKd K86;
static _KLpairGVKd K87;
static _KLpairGVKd K88;
static _KLpairGVKd K89;
static _KLpairGVKd K90;
static _KLpairGVKd K91;
static _KLbyte_stringGVKd_8 K92;
extern _KLsealed_generic_functionGVKe KdPceilingSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM0;
D KdPceilingSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM1;
D KdPceilingSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM2;
D KdPceilingSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM3;
D KdPceilingSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM4;
D KdPceilingSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM5;
D KdPceilingSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM6;
D KdPceilingSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM7;
D KdPceilingSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_);
static _KLpairGVKd K110;
static _KLpairGVKd K111;
static _KLpairGVKd K112;
static _KLpairGVKd K113;
static _KLpairGVKd K114;
static _KLpairGVKd K115;
static _KLpairGVKd K116;
static _KLpairGVKd K117;
static _KLbyte_stringGVKd_10 K118;
extern _KLsealed_generic_functionGVKe KdPfloorSYmachine_wordsVcommon_dylan;
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM0;
D KdPfloorSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM1;
D KdPfloorSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM2;
D KdPfloorSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM3;
D KdPfloorSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM4;
D KdPfloorSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM5;
D KdPfloorSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM6;
D KdPfloorSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_);
extern _KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM7;
D KdPfloorSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_);
static _KLpairGVKd K136;
static _KLpairGVKd K137;
static _KLpairGVKd K138;
static _KLpairGVKd K139;
static _KLpairGVKd K140;
static _KLpairGVKd K141;
static _KLpairGVKd K142;
static _KLpairGVKd K143;
static _KLbyte_stringGVKd_8 K144;

/* Indirection variables */


/* Variables */

D dPfloorSYmachine_wordsVcommon_dylan = &KdPfloorSYmachine_wordsVcommon_dylan;
D dPceilingSYmachine_wordsVcommon_dylan = &KdPceilingSYmachine_wordsVcommon_dylan;
D dProundSYmachine_wordsVcommon_dylan = &KdProundSYmachine_wordsVcommon_dylan;
D dPtruncateSYmachine_wordsVcommon_dylan = &KdPtruncateSYmachine_wordsVcommon_dylan;
D dPdivideYmachine_wordsVcommon_dylan = &KdPdivideYmachine_wordsVcommon_dylan;

/* Objects */

_KLsealed_generic_functionGVKe KdPdivideYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K25,
  &KPfalseVKi,
  &K26,
  &K17,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K40,
  &KdPdivideYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K38,
  &KdPdivideYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K36,
  &KdPdivideYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K34,
  &KdPdivideYmachine_wordsVcommon_dylanMM3I
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K32,
  &KdPdivideYmachine_wordsVcommon_dylanMM4I
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K30,
  &KdPdivideYmachine_wordsVcommon_dylanMM5I
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K28,
  &KdPdivideYmachine_wordsVcommon_dylanMM6I
};

_KLsimple_methodGVKe KdPdivideYmachine_wordsVcommon_dylanMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K27,
  &KdPdivideYmachine_wordsVcommon_dylanMM7I
};

static _KLpairGVKd K17 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM0,
  &K18
};

static _KLpairGVKd K18 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM1,
  &K19
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM2,
  &K20
};

static _KLpairGVKd K20 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM3,
  &K21
};

static _KLpairGVKd K21 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM4,
  &K22
};

static _KLpairGVKd K22 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM5,
  &K23
};

static _KLpairGVKd K23 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM6,
  &K24
};

static _KLpairGVKd K24 = {
  &KLpairGVKdW /* wrapper */,
  &KdPdivideYmachine_wordsVcommon_dylanMM7,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K25 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLbyte_stringGVKd_8 K26 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "d%divide"
};

static _KLsignatureAvaluesGVKi K27 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsignatureAvaluesGVKi K28 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K29,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K30 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K31,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K31 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K32 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K33,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K34 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K35,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K36 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K37,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K37 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe,
  &KLmachine_wordGVKe
};

static _KLsignatureAvaluesGVKi K38 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &K39,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_3 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLmachine_wordGVKe,
  &KLmachine_wordGVKe,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K40 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556493,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

_KLsealed_generic_functionGVKe KdPtruncateSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K25,
  &KPfalseVKi,
  &K66,
  &K58,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K40,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K38,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K36,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K34,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM3I
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K32,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM4I
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K30,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM5I
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K28,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM6I
};

_KLsimple_methodGVKe KdPtruncateSYmachine_wordsVcommon_dylanMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K27,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM7I
};

static _KLpairGVKd K58 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM0,
  &K59
};

static _KLpairGVKd K59 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM1,
  &K60
};

static _KLpairGVKd K60 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM2,
  &K61
};

static _KLpairGVKd K61 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM3,
  &K62
};

static _KLpairGVKd K62 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM4,
  &K63
};

static _KLpairGVKd K63 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM5,
  &K64
};

static _KLpairGVKd K64 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM6,
  &K65
};

static _KLpairGVKd K65 = {
  &KLpairGVKdW /* wrapper */,
  &KdPtruncateSYmachine_wordsVcommon_dylanMM7,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_11 K66 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "d%truncate/"
};

_KLsealed_generic_functionGVKe KdProundSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K25,
  &KPfalseVKi,
  &K92,
  &K84,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K40,
  &KdProundSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K38,
  &KdProundSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K36,
  &KdProundSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K34,
  &KdProundSYmachine_wordsVcommon_dylanMM3I
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K32,
  &KdProundSYmachine_wordsVcommon_dylanMM4I
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K30,
  &KdProundSYmachine_wordsVcommon_dylanMM5I
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K28,
  &KdProundSYmachine_wordsVcommon_dylanMM6I
};

_KLsimple_methodGVKe KdProundSYmachine_wordsVcommon_dylanMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K27,
  &KdProundSYmachine_wordsVcommon_dylanMM7I
};

static _KLpairGVKd K84 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM0,
  &K85
};

static _KLpairGVKd K85 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM1,
  &K86
};

static _KLpairGVKd K86 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM2,
  &K87
};

static _KLpairGVKd K87 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM3,
  &K88
};

static _KLpairGVKd K88 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM4,
  &K89
};

static _KLpairGVKd K89 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM5,
  &K90
};

static _KLpairGVKd K90 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM6,
  &K91
};

static _KLpairGVKd K91 = {
  &KLpairGVKdW /* wrapper */,
  &KdProundSYmachine_wordsVcommon_dylanMM7,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K92 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "d%round/"
};

_KLsealed_generic_functionGVKe KdPceilingSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K25,
  &KPfalseVKi,
  &K118,
  &K110,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K40,
  &KdPceilingSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K38,
  &KdPceilingSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K36,
  &KdPceilingSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K34,
  &KdPceilingSYmachine_wordsVcommon_dylanMM3I
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K32,
  &KdPceilingSYmachine_wordsVcommon_dylanMM4I
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K30,
  &KdPceilingSYmachine_wordsVcommon_dylanMM5I
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K28,
  &KdPceilingSYmachine_wordsVcommon_dylanMM6I
};

_KLsimple_methodGVKe KdPceilingSYmachine_wordsVcommon_dylanMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K27,
  &KdPceilingSYmachine_wordsVcommon_dylanMM7I
};

static _KLpairGVKd K110 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM0,
  &K111
};

static _KLpairGVKd K111 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM1,
  &K112
};

static _KLpairGVKd K112 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM2,
  &K113
};

static _KLpairGVKd K113 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM3,
  &K114
};

static _KLpairGVKd K114 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM4,
  &K115
};

static _KLpairGVKd K115 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM5,
  &K116
};

static _KLpairGVKd K116 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM6,
  &K117
};

static _KLpairGVKd K117 = {
  &KLpairGVKdW /* wrapper */,
  &KdPceilingSYmachine_wordsVcommon_dylanMM7,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_10 K118 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 41,
  "d%ceiling/"
};

_KLsealed_generic_functionGVKe KdPfloorSYmachine_wordsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_3,
  &K25,
  &KPfalseVKi,
  &K144,
  &K136,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K40,
  &KdPfloorSYmachine_wordsVcommon_dylanMM0I
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K38,
  &KdPfloorSYmachine_wordsVcommon_dylanMM1I
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K36,
  &KdPfloorSYmachine_wordsVcommon_dylanMM2I
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K34,
  &KdPfloorSYmachine_wordsVcommon_dylanMM3I
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K32,
  &KdPfloorSYmachine_wordsVcommon_dylanMM4I
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM5 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K30,
  &KdPfloorSYmachine_wordsVcommon_dylanMM5I
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM6 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K28,
  &KdPfloorSYmachine_wordsVcommon_dylanMM6I
};

_KLsimple_methodGVKe KdPfloorSYmachine_wordsVcommon_dylanMM7 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_3,
  &K27,
  &KdPfloorSYmachine_wordsVcommon_dylanMM7I
};

static _KLpairGVKd K136 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM0,
  &K137
};

static _KLpairGVKd K137 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM1,
  &K138
};

static _KLpairGVKd K138 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM2,
  &K139
};

static _KLpairGVKd K139 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM3,
  &K140
};

static _KLpairGVKd K140 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM4,
  &K141
};

static _KLpairGVKd K141 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM5,
  &K142
};

static _KLpairGVKd K142 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM6,
  &K143
};

static _KLpairGVKd K143 = {
  &KLpairGVKdW /* wrapper */,
  &KdPfloorSYmachine_wordsVcommon_dylanMM7,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_8 K144 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "d%floor/"
};

/* Code */

D KdPdivideYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(raw_low_,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPdivideYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(raw_low_,raw_high_,T4,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPdivideYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(raw_low_,T4,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPdivideYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(raw_low_,T4,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPdivideYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(T4,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPdivideYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(T4,raw_high_,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPdivideYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(T4,T5,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPdivideYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T6 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T7_0 = primitive_machine_word_double_divide_byref(T4,T5,T6,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:109
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(raw_low_,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(raw_low_,raw_high_,T4,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(raw_low_,T4,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(raw_low_,T4,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(T4,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(T4,raw_high_,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(T4,T5,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPtruncateSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T6 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T7_0 = primitive_machine_word_double_truncateS_byref(T4,T5,T6,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:108
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(raw_low_,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(raw_low_,raw_high_,T4,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(raw_low_,T4,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(raw_low_,T4,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(T4,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(T4,raw_high_,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(T4,T5,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdProundSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T6 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T7_0 = primitive_machine_word_double_roundS_byref(T4,T5,T6,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:107
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(raw_low_,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(raw_low_,raw_high_,T4,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(raw_low_,T4,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(raw_low_,T4,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(T4,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(T4,raw_high_,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(T4,T5,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPceilingSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T6 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T7_0 = primitive_machine_word_double_ceilingS_byref(T4,T5,T6,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:106
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM0I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(raw_low_,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM1I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T4 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(raw_low_,raw_high_,T4,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM2I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(raw_low_,T4,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM3I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T4 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_low_ = primitive_unwrap_machine_word(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(raw_low_,T4,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM4I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(T4,raw_high_,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM5I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T5 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_high_ = primitive_unwrap_machine_word(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(T4,raw_high_,T5,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM6I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  raw_div_ = primitive_unwrap_machine_word(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(T4,T5,raw_div_,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}

D KdPfloorSYmachine_wordsVcommon_dylanMM7I (D dividend_low_, D dividend_high_, D divisor_) {
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

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T4 = primitive_unwrap_abstract_integer(dividend_low_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T5 = primitive_unwrap_abstract_integer(dividend_high_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T6 = primitive_unwrap_abstract_integer(divisor_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T7_0 = primitive_machine_word_double_floorS_byref(T4,T5,T6,(DWORD*)&T7_1);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  quotient_ = T7_0;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  remainder_ = T7_1;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T10 = primitive_wrap_machine_word(quotient_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T11 = primitive_wrap_machine_word(remainder_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  T12_0 = T10;
  T12_1 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/double.dylan:105
  MV_SET_ELT(1, T12_1);
  MV_SET_COUNT(2);
  return(T12_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_20Edouble_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_20Edouble_for_user () {
  return;
}


/* eof */
