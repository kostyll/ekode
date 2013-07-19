#include "run-time.h"

/* Typedefs for referenced classes */

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  DDFLT Pdouble_float_data_;
} _KLdouble_floatGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D debug_name_;
  D class_implementation_class_;
  D class_subtype_bit_;
  D class_module_;
  D value_class_comparitor_;
} _KLvalue_classGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
  DSFLT Psingle_float_data_;
} _KLsingle_floatGVKd;

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
} _KLabsent_engine_nodeGVKg;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(34);
define__KLbyte_stringGVKd(26);
define__KLbyte_stringGVKd(11);
define__KLbyte_stringGVKd(12);
define__KLbyte_stringGVKd(15);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

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
} _KLfloatGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;


/* Typedefs for defined classes */


/* Referenced object declarations */

extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLvalue_classGVKi KLdouble_floatGVKd;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLdouble_floatGVKdW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
D KPlogandYmachine_wordsVcommon_dylanI (D machine_words_);
D KPlogiorYmachine_wordsVcommon_dylanI (D machine_words_);
extern _KLvalue_classGVKi KLsingle_floatGVKd;
extern _KLmm_wrapperGVKi_1 KLsingle_floatGVKdW;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfloatG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Ldouble_floatG_typesVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsingle_floatG_typesVKi;
extern _KLclassGVKd KLfloatGVKd;
extern _KLmm_wrapperGVKi_0 KLfloatGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D KerrorVKdMM1I (D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Labstract_integerG_typesVKi;

/* Defined object declarations */

D Kscale_floatYcommon_extensionsVcommon_dylanMM0I (D, D);
static _KLsingle_floatGVKd K3;
D Kscale_floatYcommon_extensionsVcommon_dylanMM1I (D, D);
static _KLdouble_floatGVKd K6;
D KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM1I (D);
static _KLdouble_floatGVKd K8;
static _KLdouble_floatGVKd K9;
D KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM0I (D);
static _KLsingle_floatGVKd K11;
static _KLsingle_floatGVKd K12;
extern _KLsealed_generic_functionGVKe Kfloat_precisionYcommon_extensionsVcommon_dylan;
extern _KLsimple_methodGVKe Kfloat_precisionYcommon_extensionsVcommon_dylanMM0;
D Kfloat_precisionYcommon_extensionsVcommon_dylanMM0I (D float_);
extern _KLsimple_methodGVKe Kfloat_precisionYcommon_extensionsVcommon_dylanMM1;
D Kfloat_precisionYcommon_extensionsVcommon_dylanMM1I (D float_);
static _KLpairGVKd K18;
static _KLpairGVKd K19;
static _KLsignatureAvaluesGVKi K20;
static _KLbyte_stringGVKd_15 K21;
static _KLsignatureAvaluesGVKi K22;
static _KLsignatureAvaluesGVKi K23;
extern _KLsealed_generic_functionGVKe Kfloat_digitsYcommon_extensionsVcommon_dylan;
extern _KLsimple_methodGVKe Kfloat_digitsYcommon_extensionsVcommon_dylanMM0;
D Kfloat_digitsYcommon_extensionsVcommon_dylanMM0I (D float_);
extern _KLsimple_methodGVKe Kfloat_digitsYcommon_extensionsVcommon_dylanMM1;
D Kfloat_digitsYcommon_extensionsVcommon_dylanMM1I (D float_);
static _KLpairGVKd K29;
static _KLpairGVKd K30;
static _KLbyte_stringGVKd_12 K31;
extern _KLsimple_methodGVKe Kfloat_radixYcommon_extensionsVcommon_dylan;
D Kfloat_radixYcommon_extensionsVcommon_dylanI (D);
extern _KLsealed_generic_functionGVKe Kscale_floatYcommon_extensionsVcommon_dylan;
extern _KLsimple_methodGVKe Kscale_floatYcommon_extensionsVcommon_dylanMM0;
extern _KLsimple_methodGVKe Kscale_floatYcommon_extensionsVcommon_dylanMM1;
static _KLpairGVKd K37;
static _KLpairGVKd K38;
static _KLsignatureAvaluesGVKi K39;
static _KLbyte_stringGVKd_11 K40;
static _KLsimple_object_vectorGVKd_2 K41;
static _KLsignatureAvaluesGVKi K42;
static _KLsimple_object_vectorGVKd_2 K43;
static _KLsignatureAvaluesGVKi K44;
static _KLsimple_object_vectorGVKd_2 K45;
extern _KLsealed_generic_functionGVKe Kdecode_floatYcommon_extensionsVcommon_dylan;
extern _KLsimple_methodGVKe Kdecode_floatYcommon_extensionsVcommon_dylanMM0;
D Kdecode_floatYcommon_extensionsVcommon_dylanMM0I (D);
extern _KLsimple_methodGVKe Kdecode_floatYcommon_extensionsVcommon_dylanMM1;
D Kdecode_floatYcommon_extensionsVcommon_dylanMM1I (D);
static _KLpairGVKd K51;
static _KLpairGVKd K52;
static _KLsignatureAvaluesGVKi K53;
static _KLbyte_stringGVKd_12 K54;
static _KLsimple_object_vectorGVKd_3 K55;
static _KLdouble_floatGVKd K56;
static _KLdouble_floatGVKd K57;
static _KLdouble_floatGVKd K58;
static _KLbyte_stringGVKd_26 K59;
static _KLbyte_stringGVKd_34 K60;
static _KLsignatureAvaluesGVKi K61;
static _KLsimple_object_vectorGVKd_3 K62;
static _KLsingle_floatGVKd K63;
static _KLsingle_floatGVKd K64;
static _KLsingle_floatGVKd K65;
static _KLsignatureAvaluesGVKi K66;
static _KLsimple_object_vectorGVKd_3 K67;
extern _KLsealed_generic_functionGVKe Kinteger_lengthYcommon_extensionsVcommon_dylan;
extern _KLsimple_methodGVKe Kinteger_lengthYcommon_extensionsVcommon_dylanMM0;
D Kinteger_lengthYcommon_extensionsVcommon_dylanMM0I (D);
static _KLpairGVKd K71;
static _KLsignatureAvaluesGVKi K72;
static _KLbyte_stringGVKd_14 K73;
static _KLsignatureAvaluesGVKi K74;

/* Indirection variables */


/* Variables */

D integer_lengthYcommon_extensionsVcommon_dylan = &Kinteger_lengthYcommon_extensionsVcommon_dylan;
D decode_floatYcommon_extensionsVcommon_dylan = &Kdecode_floatYcommon_extensionsVcommon_dylan;
D scale_floatYcommon_extensionsVcommon_dylan = &Kscale_floatYcommon_extensionsVcommon_dylan;
D float_radixYcommon_extensionsVcommon_dylan = &Kfloat_radixYcommon_extensionsVcommon_dylan;
D float_digitsYcommon_extensionsVcommon_dylan = &Kfloat_digitsYcommon_extensionsVcommon_dylan;
D float_precisionYcommon_extensionsVcommon_dylan = &Kfloat_precisionYcommon_extensionsVcommon_dylan;
D Dminimum_single_float_exponentYcommon_extensionsVcommon_dylan = (D) -499;
D Dmaximum_single_float_exponentYcommon_extensionsVcommon_dylan = (D) 513;
D Dsign_bit_maskYcommon_dylan_internalsVcommon_dylan = &KPunboundVKi;
D Dsingle_float_epsilonYcommon_extensionsVcommon_dylan = &KPunboundVKi;
D Dminimum_double_float_exponentYcommon_extensionsVcommon_dylan = (D) -4083;
D Dmaximum_double_float_exponentYcommon_extensionsVcommon_dylan = (D) 4097;
D Ddouble_float_epsilonYcommon_extensionsVcommon_dylan = &KPunboundVKi;

/* Objects */

static _KLsingle_floatGVKd K3 = {
  &KLsingle_floatGVKdW /* wrapper */,
  1.0000000
};

static _KLdouble_floatGVKd K6 = {
  &KLdouble_floatGVKdW /* wrapper */,
  1.0000000e0
};

static _KLdouble_floatGVKd K8 = {
  &KLdouble_floatGVKdW /* wrapper */,
  1.0000000e0
};

static _KLdouble_floatGVKd K9 = {
  &KLdouble_floatGVKdW /* wrapper */,
  1.0000000e0
};

static _KLsingle_floatGVKd K11 = {
  &KLsingle_floatGVKdW /* wrapper */,
  1.0000000
};

static _KLsingle_floatGVKd K12 = {
  &KLsingle_floatGVKdW /* wrapper */,
  1.0000000
};

_KLsealed_generic_functionGVKe Kfloat_precisionYcommon_extensionsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K20,
  &KPfalseVKi,
  &K21,
  &K18,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kfloat_precisionYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K23,
  &Kfloat_precisionYcommon_extensionsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kfloat_precisionYcommon_extensionsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K22,
  &Kfloat_precisionYcommon_extensionsVcommon_dylanMM1I
};

static _KLpairGVKd K18 = {
  &KLpairGVKdW /* wrapper */,
  &Kfloat_precisionYcommon_extensionsVcommon_dylanMM0,
  &K19
};

static _KLpairGVKd K19 = {
  &KLpairGVKdW /* wrapper */,
  &Kfloat_precisionYcommon_extensionsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K20 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LfloatG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_15 K21 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "float-precision"
};

static _KLsignatureAvaluesGVKi K22 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Ldouble_floatG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLsignatureAvaluesGVKi K23 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lsingle_floatG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsealed_generic_functionGVKe Kfloat_digitsYcommon_extensionsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K20,
  &KPfalseVKi,
  &K31,
  &K29,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kfloat_digitsYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K23,
  &Kfloat_digitsYcommon_extensionsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kfloat_digitsYcommon_extensionsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K22,
  &Kfloat_digitsYcommon_extensionsVcommon_dylanMM1I
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kfloat_digitsYcommon_extensionsVcommon_dylanMM0,
  &K30
};

static _KLpairGVKd K30 = {
  &KLpairGVKdW /* wrapper */,
  &Kfloat_digitsYcommon_extensionsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_12 K31 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "float-digits"
};

_KLsimple_methodGVKe Kfloat_radixYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K20,
  &Kfloat_radixYcommon_extensionsVcommon_dylanI
};

_KLsealed_generic_functionGVKe Kscale_floatYcommon_extensionsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_2,
  &K39,
  &KPfalseVKi,
  &K40,
  &K37,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kscale_floatYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K44,
  &Kscale_floatYcommon_extensionsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kscale_floatYcommon_extensionsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K42,
  &Kscale_floatYcommon_extensionsVcommon_dylanMM1I
};

static _KLpairGVKd K37 = {
  &KLpairGVKdW /* wrapper */,
  &Kscale_floatYcommon_extensionsVcommon_dylanMM0,
  &K38
};

static _KLpairGVKd K38 = {
  &KLpairGVKdW /* wrapper */,
  &Kscale_floatYcommon_extensionsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K39 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K41,
  &KDsignature_LfloatG_typesVKi
};

static _KLbyte_stringGVKd_11 K40 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 45,
  "scale-float"
};

static _KLsimple_object_vectorGVKd_2 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfloatGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K42 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K43,
  &KDsignature_Ldouble_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K43 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLdouble_floatGVKd,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K44 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K45,
  &KDsignature_Lsingle_floatG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K45 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsingle_floatGVKd,
  &KLintegerGVKd
};

_KLsealed_generic_functionGVKe Kdecode_floatYcommon_extensionsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K53,
  &KPfalseVKi,
  &K54,
  &K51,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kdecode_floatYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K66,
  &Kdecode_floatYcommon_extensionsVcommon_dylanMM0I
};

_KLsimple_methodGVKe Kdecode_floatYcommon_extensionsVcommon_dylanMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K61,
  &Kdecode_floatYcommon_extensionsVcommon_dylanMM1I
};

static _KLpairGVKd K51 = {
  &KLpairGVKdW /* wrapper */,
  &Kdecode_floatYcommon_extensionsVcommon_dylanMM0,
  &K52
};

static _KLpairGVKd K52 = {
  &KLpairGVKdW /* wrapper */,
  &Kdecode_floatYcommon_extensionsVcommon_dylanMM1,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K53 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557509,
  &KDsignature_LfloatG_typesVKi,
  &K55
};

static _KLbyte_stringGVKd_12 K54 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 49,
  "decode-float"
};

static _KLsimple_object_vectorGVKd_3 K55 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLfloatGVKd,
  &KLintegerGVKd,
  &KLfloatGVKd
};

static _KLdouble_floatGVKd K56 = {
  &KLdouble_floatGVKdW /* wrapper */,
  -1.0000000e0
};

static _KLdouble_floatGVKd K57 = {
  &KLdouble_floatGVKdW /* wrapper */,
  1.0000000e0
};

static _KLdouble_floatGVKd K58 = {
  &KLdouble_floatGVKdW /* wrapper */,
  0.0e0
};

static _KLbyte_stringGVKd_26 K59 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 105,
  "Not handling denormals yet"
};

static _KLbyte_stringGVKd_34 K60 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 137,
  "Can\'t decode-float infinity or NaN"
};

static _KLsignatureAvaluesGVKi K61 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557509,
  &KDsignature_Ldouble_floatG_typesVKi,
  &K62
};

static _KLsimple_object_vectorGVKd_3 K62 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLdouble_floatGVKd,
  &KLintegerGVKd,
  &KLdouble_floatGVKd
};

static _KLsingle_floatGVKd K63 = {
  &KLsingle_floatGVKdW /* wrapper */,
  -1.0000000
};

static _KLsingle_floatGVKd K64 = {
  &KLsingle_floatGVKdW /* wrapper */,
  1.0000000
};

static _KLsingle_floatGVKd K65 = {
  &KLsingle_floatGVKdW /* wrapper */,
  0.0
};

static _KLsignatureAvaluesGVKi K66 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557509,
  &KDsignature_Lsingle_floatG_typesVKi,
  &K67
};

static _KLsimple_object_vectorGVKd_3 K67 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLsingle_floatGVKd,
  &KLintegerGVKd,
  &KLsingle_floatGVKd
};

_KLsealed_generic_functionGVKe Kinteger_lengthYcommon_extensionsVcommon_dylan = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &K72,
  &KPfalseVKi,
  &K73,
  &K71,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kinteger_lengthYcommon_extensionsVcommon_dylanMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K74,
  &Kinteger_lengthYcommon_extensionsVcommon_dylanMM0I
};

static _KLpairGVKd K71 = {
  &KLpairGVKdW /* wrapper */,
  &Kinteger_lengthYcommon_extensionsVcommon_dylanMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K72 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_14 K73 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "integer-length"
};

static _KLsignatureAvaluesGVKi K74 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D Kscale_floatYcommon_extensionsVcommon_dylanMM0I (D float_, D scale_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8_0;
  D T9_0;
  D T10_0;
  DSFLT T11;
  DWORD T12;
  D T13;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D exponent_;
  DWORD T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  D T21;
  D T22;
  DSFLT T23;
  DSFLT T24;
  D T25;
  D T26_0;
  D T27;
  _KLsimple_object_vectorGVKd_2 T28 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T29;
  D T30;
  _KLsimple_object_vectorGVKd_2 T31 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T32;
  DSFLT T33;
  D T34;
  D T35_0;
  D T36;
  DWORD T37;
  D T38;
  D T39;
  D T40;
  DSFLT T41;
  DSFLT T42;
  DSFLT T43;
  D T44;
  D T45_0;
  _KLsimple_object_vectorGVKd_2 T46 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T47;
  D T48;
  DWORD T49;
  DWORD T50;
  D T51;
  _KLsimple_object_vectorGVKd_3 T52 = {&KLsimple_object_vectorGVKdW, (D) 13};
  DWORD T53;
  DSFLT T54;
  D T55;
  D T56_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:98
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:101
  T11 = primitive_single_float_as_raw(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:101
  T12 = primitive_cast_single_float_as_machine_word(T11);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:101
  T13 = primitive_wrap_machine_word(T12);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:102
  T14.vector_element_[0] = T13;
  T14.vector_element_[1] = (D) 33554429;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:102
  T3 = KPlogandYmachine_wordsVcommon_dylanI(&T14);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:103
  exponent_ = KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM0I(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:104
  T16 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:104
  T17 = primitive_cast_integer_as_raw(scale_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:104
  T18 = primitive_machine_word_logxor(T17,1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:104
  T19 = primitive_machine_word_add_signal_overflow(T16,T18);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:107
  T20 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:107
  T21 = primitive_machine_word_less_thanQ(T20,-499);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:106
  if (T21 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:109
    T22 = Kscale_floatYcommon_extensionsVcommon_dylanMM0I(&K11, scale_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:109
    T23 = primitive_single_float_as_raw(T22);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:109
    T24 = primitive_single_float_multiply(T11,T23);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:109
    T25 = primitive_raw_as_single_float(T24);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:109
    T26_0 = T25;
    T10_0 = T26_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:111
    T27 = primitive_machine_word_less_thanQ(513,T19);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:106
    if (T27 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:114
      T28.vector_element_[0] = T13;
      T28.vector_element_[1] = Dsign_bit_maskYcommon_dylan_internalsVcommon_dylan;
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:114
      T4 = KPlogandYmachine_wordsVcommon_dylanI(&T28);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:115
      T29 = primitive_machine_word_unsigned_double_shift_left_high(0,255,23);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:115
      T30 = primitive_wrap_machine_word(T29);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:114
      T31.vector_element_[0] = T4;
      T31.vector_element_[1] = T30;
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:114
      T5 = KPlogiorYmachine_wordsVcommon_dylanI(&T31);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:116
      T32 = primitive_unwrap_machine_word(T5);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:116
      T33 = primitive_cast_machine_word_as_single_float(T32);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:116
      T34 = primitive_raw_as_single_float(T33);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:116
      T35_0 = T34;
      T9_0 = T35_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:118
      T36 = primitive_machine_word_less_thanQ(T19,-499);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:106
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T37 = primitive_machine_word_subtract_signal_overflow(T17,0xFFFFFFFFFFFFFE08L);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T38 = primitive_cast_raw_as_integer(T37);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T39 = Kscale_floatYcommon_extensionsVcommon_dylanMM0I(float_, T38);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:121
        T40 = Kscale_floatYcommon_extensionsVcommon_dylanMM0I(&K12, (D) -503);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T41 = primitive_single_float_as_raw(T39);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T42 = primitive_single_float_as_raw(T40);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T43 = primitive_single_float_multiply(T41,T42);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T44 = primitive_raw_as_single_float(T43);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:120
        T45_0 = T44;
        T8_0 = T45_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:125
        T46.vector_element_[0] = T13;
        T46.vector_element_[1] = Dsign_bit_maskYcommon_dylan_internalsVcommon_dylan;
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:125
        T6 = KPlogandYmachine_wordsVcommon_dylanI(&T46);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:126
        T47 = primitive_machine_word_add_signal_overflow(T19,504);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:126
        T48 = primitive_cast_raw_as_integer(T47);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:126
        T49 = primitive_unwrap_abstract_integer(T48);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:126
        T50 = primitive_machine_word_unsigned_double_shift_left_high(0,T49,23);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:126
        T51 = primitive_wrap_machine_word(T50);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:125
        T52.vector_element_[0] = T6;
        T52.vector_element_[1] = T51;
        T52.vector_element_[2] = T3;
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:125
        T7 = KPlogiorYmachine_wordsVcommon_dylanI(&T52);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:130
        T53 = primitive_unwrap_machine_word(T7);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:130
        T54 = primitive_cast_machine_word_as_single_float(T53);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:130
        T55 = primitive_raw_as_single_float(T54);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:130
        T56_0 = T55;
        T8_0 = T56_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:106
      T9_0 = T8_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:106
    T10_0 = T9_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:106
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:98
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kscale_floatYcommon_extensionsVcommon_dylanMM1I (D float_, D scale_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D T9_0;
  DDFLT T10;
  DWORD T11_0;
  DWORD T11_1;
  DWORD lowF12;
  DWORD highF13;
  D T14;
  D T15;
  D exponent_;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;
  D T22;
  D T23;
  DDFLT T24;
  DDFLT T25;
  D T26;
  D T27_0;
  D T28;
  _KLsimple_object_vectorGVKd_2 T29 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T30;
  D T31;
  _KLsimple_object_vectorGVKd_2 T32 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DDFLT T33;
  D T34;
  D T35_0;
  D T36;
  DWORD T37;
  D T38;
  D T39;
  D T40;
  DDFLT T41;
  DDFLT T42;
  DDFLT T43;
  D T44;
  D T45_0;
  DWORD T46_0;
  DWORD T46_1;
  D T46_2;
  DWORD lowF47;
  DWORD T48_0;
  D T48_1;
  DWORD result_;
  D T50;
  _KLsimple_object_vectorGVKd_2 T51 = {&KLsimple_object_vectorGVKdW, (D) 9};
  _KLsimple_object_vectorGVKd_2 T52 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T53;
  D T54;
  DWORD T55;
  DWORD T56;
  D T57;
  _KLsimple_object_vectorGVKd_3 T58 = {&KLsimple_object_vectorGVKdW, (D) 13};
  DWORD T59;
  DDFLT T60;
  D T61;
  D T62_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:247
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:251
  T10 = primitive_double_float_as_raw(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:251
  T11_0 = primitive_cast_double_float_as_machine_words_byref(T10,(DWORD*)&T11_1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:251
  lowF12 = T11_0;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:251
  highF13 = T11_1;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:251
  T14 = primitive_wrap_machine_word(lowF12);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:251
  T15 = primitive_wrap_machine_word(highF13);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:252
  exponent_ = KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM1I(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:253
  T17 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:253
  T18 = primitive_cast_integer_as_raw(scale_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:253
  T19 = primitive_machine_word_logxor(T18,1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:253
  T20 = primitive_machine_word_add_signal_overflow(T17,T19);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:256
  T21 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:256
  T22 = primitive_machine_word_less_thanQ(T21,-4083);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:255
  if (T22 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:258
    T23 = Kscale_floatYcommon_extensionsVcommon_dylanMM1I(&K8, scale_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:258
    T24 = primitive_double_float_as_raw(T23);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:258
    T25 = primitive_double_float_multiply(T10,T24);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:258
    T26 = primitive_raw_as_double_float(T25);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:258
    T27_0 = T26;
    T9_0 = T27_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:260
    T28 = primitive_machine_word_less_thanQ(4097,T20);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:255
    if (T28 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:270
      T29.vector_element_[0] = T15;
      T29.vector_element_[1] = Dsign_bit_maskYcommon_dylan_internalsVcommon_dylan;
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:270
      T3 = KPlogandYmachine_wordsVcommon_dylanI(&T29);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:271
      T30 = primitive_machine_word_unsigned_double_shift_left_high(0,2047,52);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:271
      T31 = primitive_wrap_machine_word(T30);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:270
      T32.vector_element_[0] = T3;
      T32.vector_element_[1] = T31;
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:270
      KPlogiorYmachine_wordsVcommon_dylanI(&T32);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:273
      T33 = primitive_cast_machine_words_as_double_float(0,0);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:273
      T34 = primitive_raw_as_double_float(T33);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:273
      T35_0 = T34;
      T8_0 = T35_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:276
      T36 = primitive_machine_word_less_thanQ(T20,-4083);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:255
      if (T36 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T37 = primitive_machine_word_subtract_signal_overflow(T18,0xFFFFFFFFFFFFF008L);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T38 = primitive_cast_raw_as_integer(T37);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T39 = Kscale_floatYcommon_extensionsVcommon_dylanMM1I(float_, T38);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:279
        T40 = Kscale_floatYcommon_extensionsVcommon_dylanMM1I(&K9, (D) -4087);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T41 = primitive_double_float_as_raw(T39);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T42 = primitive_double_float_as_raw(T40);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T43 = primitive_double_float_multiply(T41,T42);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T44 = primitive_raw_as_double_float(T43);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:278
        T45_0 = T44;
        T7_0 = T45_0;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:295
        T46_0 = primitive_machine_word_shift_left_with_overflow_byref(1,52,(DWORD*)&T46_1,(D*)&T46_2);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:295
        lowF47 = T46_0;
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:295
        T48_0 = primitive_machine_word_subtract_with_overflow_byref(lowF47,1,(D*)&T48_1);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:295
        result_ = T48_0;
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:295
        T50 = primitive_wrap_machine_word(result_);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:294
        T51.vector_element_[0] = T14;
        T51.vector_element_[1] = T50;
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:294
        T4 = KPlogandYmachine_wordsVcommon_dylanI(&T51);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:297
        T52.vector_element_[0] = T15;
        T52.vector_element_[1] = Dsign_bit_maskYcommon_dylan_internalsVcommon_dylan;
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:297
        T5 = KPlogandYmachine_wordsVcommon_dylanI(&T52);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:298
        T53 = primitive_machine_word_add_signal_overflow(T20,4088);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:298
        T54 = primitive_cast_raw_as_integer(T53);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:298
        T55 = primitive_unwrap_abstract_integer(T54);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:298
        T56 = primitive_machine_word_unsigned_double_shift_left_high(0,T55,52);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:298
        T57 = primitive_wrap_machine_word(T56);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:297
        T58.vector_element_[0] = T5;
        T58.vector_element_[1] = T57;
        T58.vector_element_[2] = T4;
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:297
        T6 = KPlogiorYmachine_wordsVcommon_dylanI(&T58);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:302
        T59 = primitive_unwrap_machine_word(T6);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:302
        T60 = primitive_cast_machine_words_as_double_float(T59,0);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:302
        T61 = primitive_raw_as_double_float(T60);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:302
        T62_0 = T61;
        T7_0 = T62_0;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:255
      T8_0 = T7_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:255
    T9_0 = T8_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:255
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:247
  MV_SET_COUNT(1);
  return(T9_0);
}

D KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM1I (D float_) {
  D T2;
  DDFLT T3;
  DWORD T4_0;
  DWORD T4_1;
  DWORD low_;
  DWORD T6;
  D T7;
  _KLsimple_object_vectorGVKd_2 T8 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD raw_x_;
  DWORD T10;
  DWORD T11;
  DWORD T12;
  D T13;
  D T14_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:171
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:175
  T3 = primitive_double_float_as_raw(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:175
  T4_0 = primitive_cast_double_float_as_machine_words_byref(T3,(DWORD*)&T4_1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:175
  low_ = T4_0;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:183
  T6 = primitive_machine_word_unsigned_shift_right(low_,52);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:183
  T7 = primitive_wrap_machine_word(T6);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:183
  T8.vector_element_[0] = T7;
  T8.vector_element_[1] = (D) 8189;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:183
  T2 = KPlogandYmachine_wordsVcommon_dylanI(&T8);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:186
  raw_x_ = primitive_unwrap_machine_word(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:186
  T10 = primitive_machine_word_shift_left_signal_overflow(raw_x_,2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:186
  T11 = primitive_machine_word_logior(T10,1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:186
  T12 = primitive_machine_word_subtract_signal_overflow(T11,4088);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:186
  T13 = primitive_cast_raw_as_integer(T12);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:186
  T14_0 = T13;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:171
  MV_SET_COUNT(1);
  return(T14_0);
}

D KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM0I (D float_) {
  D T2;
  DSFLT T3;
  DWORD T4;
  DWORD T5;
  D T6;
  _KLsimple_object_vectorGVKd_2 T7 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD raw_x_;
  DWORD T9;
  DWORD T10;
  DWORD T11;
  D T12;
  D T13_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:60
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:63
  T3 = primitive_single_float_as_raw(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:63
  T4 = primitive_cast_single_float_as_machine_word(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:65
  T5 = primitive_machine_word_unsigned_shift_right(T4,23);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:65
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:65
  T7.vector_element_[0] = T6;
  T7.vector_element_[1] = (D) 1021;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:65
  T2 = KPlogandYmachine_wordsVcommon_dylanI(&T7);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:66
  raw_x_ = primitive_unwrap_machine_word(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:66
  T9 = primitive_machine_word_shift_left_signal_overflow(raw_x_,2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:66
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:66
  T11 = primitive_machine_word_subtract_signal_overflow(T10,504);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:66
  T12 = primitive_cast_raw_as_integer(T11);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:66
  T13_0 = T12;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:60
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kfloat_precisionYcommon_extensionsVcommon_dylanMM0I (D float_) {
  D T2_0;
  D T3;
  D T4_0;
  D exponent_;
  DWORD T6;
  D T7;
  DSFLT T8;
  DWORD T9;
  D T10;
  _KLsimple_object_vectorGVKd_2 T11 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD raw_xF12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  D T16;
  D T17_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:139
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:141
  exponent_ = KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM0I(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:142
  T6 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:142
  T7 = primitive_machine_word_less_thanQ(-499,T6);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:142
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:143
    T2_0 = (D) 97;
    T4_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:145
    T8 = primitive_single_float_as_raw(float_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:145
    T9 = primitive_cast_single_float_as_machine_word(T8);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:145
    T10 = primitive_wrap_machine_word(T9);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:146
    T11.vector_element_[0] = T10;
    T11.vector_element_[1] = (D) 33554429;
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:146
    T3 = KPlogandYmachine_wordsVcommon_dylanI(&T11);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:147
    raw_xF12 = primitive_unwrap_machine_word(T3);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:147
    T13 = primitive_machine_word_count_high_zeros(raw_xF12);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:147
    T14 = primitive_machine_word_shift_left_signal_overflow(T13,2);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:147
    T15 = primitive_machine_word_subtract_signal_overflow(257,T14);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:147
    T16 = primitive_cast_raw_as_integer(T15);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:147
    T17_0 = T16;
    T4_0 = T17_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:142
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:139
  MV_SET_COUNT(1);
  return(T4_0);
}

D Kfloat_precisionYcommon_extensionsVcommon_dylanMM1I (D float_) {
  D T2_0;
  D T3;
  D T4_0;
  D T5_0;
  D exponent_;
  DWORD T7;
  D T8;
  DDFLT T9;
  DWORD T10_0;
  DWORD T10_1;
  DWORD low_;
  DWORD high_;
  D T13;
  _KLsimple_object_vectorGVKd_2 T14 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD raw_xF15;
  D T16;
  DWORD T17;
  DWORD T18;
  DWORD T19;
  D T20;
  D T21_0;
  DWORD raw_xF22;
  DWORD T23;
  DWORD T24;
  DWORD T25;
  DWORD T26;
  D T27;
  D T28_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:312
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:314
  exponent_ = KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM1I(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:315
  T7 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:315
  T8 = primitive_machine_word_less_thanQ(-4083,T7);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:315
  if (T8 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:316
    T2_0 = (D) 213;
    T5_0 = T2_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:319
    T9 = primitive_double_float_as_raw(float_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:319
    T10_0 = primitive_cast_double_float_as_machine_words_byref(T9,(DWORD*)&T10_1);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:319
    low_ = T10_0;
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:319
    high_ = T10_1;
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:319
    T13 = primitive_wrap_machine_word(high_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:321
    T14.vector_element_[0] = T13;
    T14.vector_element_[1] = (D) 4194301;
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:321
    T3 = KPlogandYmachine_wordsVcommon_dylanI(&T14);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:322
    raw_xF15 = primitive_unwrap_machine_word(T3);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:322
    T16 = primitive_machine_word_equalQ(raw_xF15,0);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:322
    if (T16 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:323
      T17 = primitive_machine_word_count_high_zeros(low_);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:323
      T18 = primitive_machine_word_shift_left_signal_overflow(T17,2);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:323
      T19 = primitive_machine_word_subtract_signal_overflow(257,T18);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:323
      T20 = primitive_cast_raw_as_integer(T19);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:323
      T21_0 = T20;
      T4_0 = T21_0;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:325
      raw_xF22 = primitive_unwrap_machine_word(T3);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:325
      T23 = primitive_machine_word_count_high_zeros(raw_xF22);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:325
      T24 = primitive_machine_word_shift_left_signal_overflow(T23,2);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:325
      T25 = primitive_machine_word_subtract_signal_overflow(257,T24);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:325
      T26 = primitive_machine_word_add_signal_overflow(T25,128);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:325
      T27 = primitive_cast_raw_as_integer(T26);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:325
      T28_0 = T27;
      T4_0 = T28_0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:322
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:315
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:312
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kfloat_digitsYcommon_extensionsVcommon_dylanMM0I (D float_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:134
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:136
  T2_0 = (D) 97;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:134
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kfloat_digitsYcommon_extensionsVcommon_dylanMM1I (D float_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:307
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:309
  T2_0 = (D) 213;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:307
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kfloat_radixYcommon_extensionsVcommon_dylanI (D float_) {
  D T1_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:34
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:35
  T1_0 = (D) 9;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:34
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kdecode_floatYcommon_extensionsVcommon_dylanMM0I (D float_) {
  D T2;
  D T3;
  D T4_0;
  D T4_1;
  D T4_2;
  D T5;
  D T6_0;
  D T6_1;
  D T6_2;
  D T7_0;
  D T7_1;
  D T7_2;
  DSFLT T8;
  D T9;
  DWORD T10;
  D T11;
  _KLsimple_object_vectorGVKd_2 T12 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D exponent_;
  DWORD T14;
  D T15;
  DWORD raw_x_;
  D T17;
  D T18_0;
  D T18_1;
  D T18_2;
  D T19_0;
  D T19_1;
  D T19_2;
  DWORD T20;
  D T21;
  D T22;
  D T23;
  DSFLT T24;
  D T25;
  D T26_0;
  D T26_1;
  D T26_2;
  DWORD T27;
  D T28;
  _KLsimple_object_vectorGVKd_2 T29 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T30;
  DSFLT T31;
  D T32;
  D T33_0;
  D T33_1;
  D T33_2;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:69
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:73
  T8 = primitive_single_float_as_raw(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:73
  T9 = primitive_single_float_less_thanQ(T8,0.0);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:73
  if (T9 != &KPfalseVKi) {
    T2 = &K63;
  } else {
    T2 = &K64;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:73
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:74
  T10 = primitive_cast_single_float_as_machine_word(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:74
  T11 = primitive_wrap_machine_word(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:75
  T12.vector_element_[0] = T11;
  T12.vector_element_[1] = (D) 33554429;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:75
  T3 = KPlogandYmachine_wordsVcommon_dylanI(&T12);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:77
  exponent_ = KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM0I(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:79
  T14 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:79
  T15 = primitive_machine_word_less_thanQ(T14,-499);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:78
  if (T15 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:80
    raw_x_ = primitive_unwrap_machine_word(T3);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:80
    T17 = primitive_machine_word_equalQ(raw_x_,0);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:80
    if (T17 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:81
      T18_0 = &K65;
      T18_1 = (D) 1;
      T18_2 = T2;
      T4_0 = T18_0;
      T4_1 = T18_1;
      T4_2 = T18_2;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:83
      T19_0 = KerrorVKdMM1I(&K59, &KPempty_vectorVKi);
      T19_1 = MV_GET_ELT(1);
      T19_2 = MV_GET_ELT(2);
      T4_0 = T19_0;
      T4_1 = T19_1;
      T4_2 = T19_2;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:80
    T7_0 = T4_0;
    T7_1 = T4_1;
    T7_2 = T4_2;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:86
    T20 = primitive_cast_integer_as_raw(exponent_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:86
    T21 = primitive_machine_word_less_thanQ(513,T20);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:78
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:87
      T23 = primitive_single_float_less_thanQ(T8,0.0);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:87
      if (T23 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:87
        T24 = primitive_single_float_negate(T8);
        // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:87
        T25 = primitive_raw_as_single_float(T24);
        T22 = T25;
      } else {
        T22 = float_;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:87
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:87
      T26_0 = T22;
      T26_1 = (D) 1;
      T26_2 = T2;
      T6_0 = T26_0;
      T6_1 = T26_1;
      T6_2 = T26_2;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:91
      T27 = primitive_machine_word_unsigned_double_shift_left_high(0,126,23);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:91
      T28 = primitive_wrap_machine_word(T27);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:91
      T29.vector_element_[0] = T28;
      T29.vector_element_[1] = T3;
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:91
      T5 = KPlogiorYmachine_wordsVcommon_dylanI(&T29);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:94
      T30 = primitive_unwrap_machine_word(T5);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:94
      T31 = primitive_cast_machine_word_as_single_float(T30);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:94
      T32 = primitive_raw_as_single_float(T31);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:94
      T33_0 = T32;
      T33_1 = exponent_;
      T33_2 = T2;
      T6_0 = T33_0;
      T6_1 = T33_1;
      T6_2 = T33_2;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:78
    T7_0 = T6_0;
    T7_1 = T6_1;
    T7_2 = T6_2;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:78
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:69
  MV_SET_ELT(1, T7_1);
  MV_SET_ELT(2, T7_2);
  MV_SET_COUNT(3);
  return(T7_0);
}

D Kdecode_floatYcommon_extensionsVcommon_dylanMM1I (D float_) {
  D T2;
  D T3;
  D T4_0;
  D T4_1;
  D T4_2;
  D T5_0;
  D T5_1;
  D T5_2;
  D T6_0;
  D T6_1;
  D T6_2;
  DDFLT T7;
  D T8;
  D exponent_;
  DWORD T10_0;
  DWORD T10_1;
  DWORD lowF11;
  D T12;
  DWORD T13_0;
  DWORD T13_1;
  D T13_2;
  DWORD lowF14;
  DWORD T15_0;
  D T15_1;
  DWORD result_;
  D T17;
  _KLsimple_object_vectorGVKd_2 T18 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DWORD T19;
  D T20;
  DWORD raw_x_;
  D T22;
  D T23_0;
  D T23_1;
  D T23_2;
  D T24_0;
  D T24_1;
  D T24_2;
  DWORD T25;
  D T26;
  D T27_0;
  D T27_1;
  D T27_2;
  DWORD T28;
  D T29;
  _KLsimple_object_vectorGVKd_2 T30 = {&KLsimple_object_vectorGVKdW, (D) 9};
  DDFLT T31;
  D T32;
  D T33_0;
  D T33_1;
  D T33_2;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:189
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:193
  T7 = primitive_double_float_as_raw(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:193
  T8 = primitive_double_float_less_thanQ(T7,0.0e0);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:193
  if (T8 != &KPfalseVKi) {
    T2 = &K56;
  } else {
    T2 = &K57;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:193
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:194
  exponent_ = KPfloat_exponentYcommon_dylan_internalsVcommon_dylanMM1I(float_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:196
  T10_0 = primitive_cast_double_float_as_machine_words_byref(T7,(DWORD*)&T10_1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:196
  lowF11 = T10_0;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:196
  T12 = primitive_wrap_machine_word(lowF11);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:224
  T13_0 = primitive_machine_word_shift_left_with_overflow_byref(1,52,(DWORD*)&T13_1,(D*)&T13_2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:224
  lowF14 = T13_0;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:224
  T15_0 = primitive_machine_word_subtract_with_overflow_byref(lowF14,1,(D*)&T15_1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:224
  result_ = T15_0;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:224
  T17 = primitive_wrap_machine_word(result_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:223
  T18.vector_element_[0] = T12;
  T18.vector_element_[1] = T17;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:223
  T3 = KPlogandYmachine_wordsVcommon_dylanI(&T18);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:226
  T19 = primitive_cast_integer_as_raw(exponent_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:226
  T20 = primitive_machine_word_less_thanQ(T19,-4083);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:225
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:227
    raw_x_ = primitive_unwrap_machine_word(T3);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:227
    T22 = primitive_machine_word_equalQ(raw_x_,0);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:227
    if (T22 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:228
      T23_0 = &K58;
      T23_1 = (D) 1;
      T23_2 = T2;
      T4_0 = T23_0;
      T4_1 = T23_1;
      T4_2 = T23_2;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:230
      T24_0 = KerrorVKdMM1I(&K59, &KPempty_vectorVKi);
      T24_1 = MV_GET_ELT(1);
      T24_2 = MV_GET_ELT(2);
      T4_0 = T24_0;
      T4_1 = T24_1;
      T4_2 = T24_2;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:227
    T6_0 = T4_0;
    T6_1 = T4_1;
    T6_2 = T4_2;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:233
    T25 = primitive_cast_integer_as_raw(exponent_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:233
    T26 = primitive_machine_word_less_thanQ(4097,T25);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:225
    if (T26 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:234
      T27_0 = KerrorVKdMM1I(&K60, &KPempty_vectorVKi);
      T27_1 = MV_GET_ELT(1);
      T27_2 = MV_GET_ELT(2);
      T5_0 = T27_0;
      T5_1 = T27_1;
      T5_2 = T27_2;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:238
      T28 = primitive_machine_word_unsigned_double_shift_left_high(0,1022,52);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:238
      T29 = primitive_wrap_machine_word(T28);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:238
      T30.vector_element_[0] = T29;
      T30.vector_element_[1] = T3;
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:238
      KPlogiorYmachine_wordsVcommon_dylanI(&T30);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:241
      T31 = primitive_cast_machine_words_as_double_float(lowF11,0);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:241
      T32 = primitive_raw_as_double_float(T31);
      // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:241
      T33_0 = T32;
      T33_1 = exponent_;
      T33_2 = T2;
      T5_0 = T33_0;
      T5_1 = T33_1;
      T5_2 = T33_2;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:225
    T6_0 = T5_0;
    T6_1 = T5_1;
    T6_2 = T5_2;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:225
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:189
  MV_SET_ELT(1, T6_1);
  MV_SET_ELT(2, T6_2);
  MV_SET_COUNT(3);
  return(T6_0);
}

D Kinteger_lengthYcommon_extensionsVcommon_dylanMM0I (D integer_) {
  DWORD T2;
  DWORD T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12_0;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:13
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:16
  T3 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:16
  T4 = primitive_machine_word_less_thanQ(T3,1);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:16
  if (T4 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:17
    T5 = primitive_unwrap_abstract_integer(integer_);
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:17
    T6 = primitive_machine_word_lognot(T5);
    T2 = T6;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:19
    T7 = primitive_unwrap_abstract_integer(integer_);
    T2 = T7;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:16
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:21
  T8 = primitive_machine_word_count_high_zeros(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:21
  T9 = primitive_machine_word_shift_left_signal_overflow(T8,2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:21
  T10 = primitive_machine_word_subtract_signal_overflow(257,T9);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:21
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:21
  T12_0 = T11;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:13
  MV_SET_COUNT(1);
  return(T12_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_numerics_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_numerics_for_user () {
{
  D T0;
  DWORD T1_0;
  DWORD T1_1;
  D T1_2;
  DWORD low_;
  D T3;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:58
  T1_0 = primitive_machine_word_shift_left_with_overflow_byref(1,31,(DWORD*)&T1_1,(D*)&T1_2);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:58
  low_ = T1_0;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:58
  T3 = primitive_wrap_machine_word(low_);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:58
  Dsign_bit_maskYcommon_dylan_internalsVcommon_dylan = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:58
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:152
  T1 = Kscale_floatYcommon_extensionsVcommon_dylanMM0I(&K3, (D) -91);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:151
  Dsingle_float_epsilonYcommon_extensionsVcommon_dylan = T1;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:151
  T0 = &KPfalseVKi;
  goto I1;
}
I1:

{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:331
  T1 = Kscale_floatYcommon_extensionsVcommon_dylanMM1I(&K6, (D) -207);
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:330
  Ddouble_float_epsilonYcommon_extensionsVcommon_dylan = T1;
  // /opt/opendylan-2013.1/sources/common-dylan/numerics.dylan:330
  T0 = &KPfalseVKi;
  goto I4;
}
I4:

  return;
}


/* eof */
