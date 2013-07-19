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
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLobject_signatureGVKe;

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
define__KLbyte_stringGVKd(22);
define__KLbyte_stringGVKd(3);
define__KLbyte_stringGVKd(18);
define__KLbyte_stringGVKd(21);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLsetter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLgetter_methodGVKi;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_setter_methodGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLrepeated_getter_methodGVKi;

typedef struct {
  D wrapper;
} _KLsequenceGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
} _KLtypeGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D xep_;
  D method_slot_descriptor_;
} _KLaccessor_methodGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;


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
extern _KLsimple_methodGVKe Kfunction_specializersVKdMM5;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLobject_signatureGVKe KDsignature_LobjectG_object_rest_value_1VKi;
extern _KLclassGVKd KLobject_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLobject_signatureGVKeW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsealed_generic_functionGVKe Kslot_typeVKe;
extern _KLsealed_generic_functionGVKe Kslot_ownerVKe;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLclassGVKd KLsetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsetter_methodGVKiW;
extern _KLclassGVKd KLgetter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLgetter_methodGVKiW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLrepeated_setter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_setter_methodGVKiW;
extern _KLclassGVKd KLrepeated_getter_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLrepeated_getter_methodGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LfunctionG_typesVKi;
extern _KLsealed_generic_functionGVKe Kfunction_signatureVKe;
extern _KLsealed_generic_functionGVKe Ksignature_requiredVKe;
D Kcopy_sequenceVKdMM2I (D, D, D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsealed_generic_functionGVKe Ksignature_valuesVKi;
extern _KLsealed_generic_functionGVKe Ksignature_rest_valueVKi;
extern _KLclassGVKd KLsequenceGVKd;
extern _KLmm_wrapperGVKi_0 KLsequenceGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLtypeGVKd;
extern _KLmm_wrapperGVKi_0 KLtypeGVKdW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
D Kfunction_number_requiredVKiMM2I (D f_);
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLaccessor_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLaccessor_methodGVKeW;
extern _KLsealed_generic_functionGVKe Ksignature_keysVKi;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsimple_methodGVKe Kfunction_return_valuesVKdMM2;

/* Defined object declarations */

D Kfunction_return_valuesVKdMM0I (D);
D Kfunction_specializersVKdMM0I (D);
extern _KLsealed_generic_functionGVKe Kfunction_specializersVKd;
extern _KLsimple_methodGVKe Kfunction_specializersVKdMM0;
extern _KLsimple_methodGVKe Kfunction_specializersVKdMM1;
D Kfunction_specializersVKdMM1I (D);
extern _KLsimple_methodGVKe Kfunction_specializersVKdMM2;
D Kfunction_specializersVKdMM2I (D);
extern _KLsimple_methodGVKe Kfunction_specializersVKdMM3;
D Kfunction_specializersVKdMM3I (D);
extern _KLsimple_methodGVKe Kfunction_specializersVKdMM4;
D Kfunction_specializersVKdMM4I (D);
static _KLpairGVKd K12;
static _KLpairGVKd K13;
static _KLpairGVKd K14;
static _KLpairGVKd K15;
static _KLpairGVKd K16;
static _KLpairGVKd K17;
static _KLbyte_stringGVKd_21 K18;
static _KLsignatureGVKe K19;
static _KLsimple_object_vectorGVKd_1 K20;
static _KLsignatureGVKe K21;
static _KLsimple_object_vectorGVKd_1 K22;
static _KLsignatureGVKe K23;
static _KLsimple_object_vectorGVKd_1 K24;
static _KLsignatureGVKe K25;
static _KLsimple_object_vectorGVKd_1 K26;
static _KLsignatureGVKe K27;
static _KLunionGVKe K28;
static _KLsingletonGVKd K29;
extern _KLsealed_generic_functionGVKe Kfunction_argumentsVKd;
extern _KLsimple_methodGVKe Kfunction_argumentsVKdMM0;
D Kfunction_argumentsVKdMM0I (D);
extern _KLsimple_methodGVKe Kfunction_argumentsVKdMM1;
D Kfunction_argumentsVKdMM1I (D);
static _KLpairGVKd K35;
static _KLpairGVKd K36;
static _KLbyte_stringGVKd_18 K37;
static _KLsignatureAvaluesGVKi K38;
static _KLsimple_object_vectorGVKd_1 K39;
static _KLsimple_object_vectorGVKd_3 K40;
static _KLsymbolGVKd KJall_;
static _KLbyte_stringGVKd_3 K42;
static _KLsignatureAvaluesGVKi K43;
extern _KLsealed_generic_functionGVKe Kfunction_return_valuesVKd;
extern _KLsimple_methodGVKe Kfunction_return_valuesVKdMM0;
extern _KLsimple_methodGVKe Kfunction_return_valuesVKdMM1;
D Kfunction_return_valuesVKdMM1I (D);
static _KLpairGVKd K48;
static _KLpairGVKd K49;
static _KLpairGVKd K50;
static _KLbyte_stringGVKd_22 K51;
static _KLsignatureAvaluesGVKi K52;
static _KLsimple_object_vectorGVKd_2 K53;
static _KLsignatureAvaluesGVKi K54;

/* Indirection variables */

static D IKJall_ = &KJall_;

/* Variables */

D function_return_valuesVKd = &Kfunction_return_valuesVKd;
D function_argumentsVKd = &Kfunction_argumentsVKd;
D function_specializersVKd = &Kfunction_specializersVKd;

/* Objects */

_KLsealed_generic_functionGVKe Kfunction_specializersVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  (D) 1,
  &K18,
  &K12,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kfunction_specializersVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K27,
  &Kfunction_specializersVKdMM0I
};

_KLsimple_methodGVKe Kfunction_specializersVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K25,
  &Kfunction_specializersVKdMM1I
};

_KLsimple_methodGVKe Kfunction_specializersVKdMM2 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K23,
  &Kfunction_specializersVKdMM2I
};

_KLsimple_methodGVKe Kfunction_specializersVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K21,
  &Kfunction_specializersVKdMM3I
};

_KLsimple_methodGVKe Kfunction_specializersVKdMM4 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K19,
  &Kfunction_specializersVKdMM4I
};

static _KLpairGVKd K12 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_specializersVKdMM0,
  &K13
};

static _KLpairGVKd K13 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_specializersVKdMM1,
  &K14
};

static _KLpairGVKd K14 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_specializersVKdMM2,
  &K15
};

static _KLpairGVKd K15 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_specializersVKdMM3,
  &K16
};

static _KLpairGVKd K16 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_specializersVKdMM4,
  &K17
};

static _KLpairGVKd K17 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_specializersVKdMM5,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_21 K18 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 85,
  "function-specializers"
};

static _KLsignatureGVKe K19 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K20
};

static _KLsimple_object_vectorGVKd_1 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLsetter_methodGVKi
};

static _KLsignatureGVKe K21 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K22
};

static _KLsimple_object_vectorGVKd_1 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLgetter_methodGVKi
};

static _KLsignatureGVKe K23 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K24
};

static _KLsimple_object_vectorGVKd_1 K24 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrepeated_setter_methodGVKi
};

static _KLsignatureGVKe K25 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &K26
};

static _KLsimple_object_vectorGVKd_1 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLrepeated_getter_methodGVKi
};

static _KLsignatureGVKe K27 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LfunctionG_typesVKi
};

static _KLunionGVKe K28 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K29,
  &KLtypeGVKd
};

static _KLsingletonGVKd K29 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

_KLsealed_generic_functionGVKe Kfunction_argumentsVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K37,
  &K35,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kfunction_argumentsVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K43,
  &Kfunction_argumentsVKdMM0I
};

_KLsimple_methodGVKe Kfunction_argumentsVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K38,
  &Kfunction_argumentsVKdMM1I
};

static _KLpairGVKd K35 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_argumentsVKdMM0,
  &K36
};

static _KLpairGVKd K36 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_argumentsVKdMM1,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_18 K37 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 73,
  "function-arguments"
};

static _KLsignatureAvaluesGVKi K38 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557509,
  &K39,
  &K40
};

static _KLsimple_object_vectorGVKd_1 K39 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLaccessor_methodGVKe
};

static _KLsimple_object_vectorGVKd_3 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLintegerGVKd,
  &KLbooleanGVKd,
  &KLobjectGVKd
};

static _KLsymbolGVKd KJall_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K42
};

static _KLbyte_stringGVKd_3 K42 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 13,
  "all"
};

static _KLsignatureAvaluesGVKi K43 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33557509,
  &KDsignature_LfunctionG_typesVKi,
  &K40
};

_KLsealed_generic_functionGVKe Kfunction_return_valuesVKd = {
  &KLsealed_generic_functionGVKeW /* wrapper */,
  &gf_xep_1,
  &KDsignature_LobjectG_object_rest_value_1VKi,
  &KPfalseVKi,
  &K51,
  &K48,
  &RSINGULAR_Labsent_engine_nodeG
};

_KLsimple_methodGVKe Kfunction_return_valuesVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K54,
  &Kfunction_return_valuesVKdMM0I
};

_KLsimple_methodGVKe Kfunction_return_valuesVKdMM1 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K52,
  &Kfunction_return_valuesVKdMM1I
};

static _KLpairGVKd K48 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_return_valuesVKdMM0,
  &K49
};

static _KLpairGVKd K49 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_return_valuesVKdMM1,
  &K50
};

static _KLpairGVKd K50 = {
  &KLpairGVKdW /* wrapper */,
  &Kfunction_return_valuesVKdMM2,
  &KPempty_listVKi
};

static _KLbyte_stringGVKd_22 K51 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 89,
  "function-return-values"
};

static _KLsignatureAvaluesGVKi K52 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &K39,
  &K53
};

static _KLsimple_object_vectorGVKd_2 K53 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLsequenceGVKd,
  &K28
};

static _KLsignatureAvaluesGVKi K54 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33556485,
  &KDsignature_LfunctionG_typesVKi,
  &K53
};

/* Code */

D Kfunction_return_valuesVKdMM0I (D function_) {
  D sig_;
  D T3;
  D T4;
  D T5_0;
  D T5_1;
  D T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  DWORD T10;
  D T11;
  D T12;
  DWORD T13;
  D T14;
  D T15_0;
  D T16;
  D T17;
  D T18_0;
  D T18_1;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:55
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:57
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  sig_ = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  CONGRUENT_CALL_PROLOG(&Ksignature_valuesVKi, 1);
  T3 = CONGRUENT_CALL1(sig_);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T6 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T8 = primitive_machine_word_bit_field_extract(8,10,T7);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T9 = primitive_machine_word_logand(T8,-4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T10 = primitive_machine_word_logior(T9,1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T11 = primitive_cast_raw_as_integer(T10);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T12 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T13 = primitive_cast_integer_as_raw(T12);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T14 = primitive_machine_word_equalQ(T10,T13);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  if (T14 != &KPfalseVKi) {
    T17 = T3;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
    T15_0 = Kcopy_sequenceVKdMM2I(T3, &KPempty_vectorVKi, (D) 1, T11);
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
    T16 = T15_0;
    T17 = T16;
  }
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:59
  CONGRUENT_CALL_PROLOG(&Ksignature_rest_valueVKi, 1);
  T4 = CONGRUENT_CALL1(sig_);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:58
  T18_0 = T17;
  T18_1 = T4;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:55
  T5_0 = T18_0;
  T5_1 = T18_1;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:55
  MV_SET_ELT(1, T5_1);
  MV_SET_COUNT(2);
  return(T5_0);
}

D Kfunction_specializersVKdMM0I (D f_) {
  D sig_;
  D T3;
  D T4;
  DWORD T5;
  DWORD T6;
  DWORD T7;
  D T8;
  D T9_0;
  D T10_0;
  D T11;
  DWORD T12;
  D T13;
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:15
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:16
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  sig_ = CONGRUENT_CALL1(f_);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T3 = CALL1(&Ksignature_requiredVKe, sig_);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T4 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T5 = primitive_cast_integer_as_raw(T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T6 = primitive_machine_word_logand(T5,1020);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T7 = primitive_machine_word_logior(T6,1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T8 = primitive_cast_raw_as_integer(T7);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T11 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  T13 = primitive_machine_word_equalQ(T7,T12);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  if (T13 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
    T9_0 = T3;
    T10_0 = T9_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
    T14_0 = Kcopy_sequenceVKdMM2I(T3, &KPempty_vectorVKi, (D) 1, T8);
    T10_0 = T14_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:17
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:15
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kfunction_specializersVKdMM1I (D f_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_2 T4 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:21
  T3 = SLOT_VALUE_INITD(f_, 1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:21
  T2 = CALL1(&Kslot_ownerVKe, T3);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:21
  T4.vector_element_[0] = T2;
  T4.vector_element_[1] = &KLintegerGVKd;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:21
  T6 = primitive_copy_vector(&T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:21
  T5_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:20
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kfunction_specializersVKdMM2I (D f_) {
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_3 T5 = {&KLsimple_object_vectorGVKdW, (D) 13};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:25
  T4 = SLOT_VALUE_INITD(f_, 1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:26
  T2 = CALL1(&Kslot_typeVKe, T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:26
  T3 = CALL1(&Kslot_ownerVKe, T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:26
  T5.vector_element_[0] = T2;
  T5.vector_element_[1] = T3;
  T5.vector_element_[2] = &KLintegerGVKd;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:26
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:26
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:24
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kfunction_specializersVKdMM3I (D f_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:29
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:30
  T3 = SLOT_VALUE_INITD(f_, 1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:30
  T2 = CALL1(&Kslot_ownerVKe, T3);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:30
  T4.vector_element_[0] = T2;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:30
  T6 = primitive_copy_vector(&T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:30
  T5_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:29
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kfunction_specializersVKdMM4I (D f_) {
  D T2;
  D T3;
  D T4;
  _KLsimple_object_vectorGVKd_2 T5 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T6_0;
  D T7;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:33
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:34
  T4 = SLOT_VALUE_INITD(f_, 1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:35
  T2 = CALL1(&Kslot_typeVKe, T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:35
  T3 = CALL1(&Kslot_ownerVKe, T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:35
  T5.vector_element_[0] = T2;
  T5.vector_element_[1] = T3;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:35
  T7 = primitive_copy_vector(&T5);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:35
  T6_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:33
  MV_SET_COUNT(1);
  return(T6_0);
}

D Kfunction_argumentsVKdMM0I (D function_) {
  D sig_;
  D T3;
  D T4;
  D T5;
  D T6;
  DWORD T7;
  DWORD T8;
  DWORD T9;
  D T10;
  D T11;
  DWORD T12;
  D T13;
  D T14;
  DWORD T15;
  D T16;
  D T17;
  DWORD T18;
  D T19;
  D T20_0;
  D T20_1;
  D T20_2;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:40
  CONGRUENT_CALL_PROLOG(&Kfunction_signatureVKe, 1);
  sig_ = CONGRUENT_CALL1(function_);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:41
  T6 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:41
  T7 = primitive_cast_integer_as_raw(T6);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:41
  T8 = primitive_machine_word_logand(T7,1020);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:41
  T9 = primitive_machine_word_logior(T8,1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:41
  T10 = primitive_cast_raw_as_integer(T9);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:42
  T11 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:42
  T12 = primitive_cast_integer_as_raw(T11);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:42
  T13 = primitive_machine_word_logbitQ(20,T12);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:43
  T14 = SLOT_VALUE_INITD(sig_, 0);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:43
  T15 = primitive_cast_integer_as_raw(T14);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:43
  T16 = primitive_machine_word_logbitQ(19,T15);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:43
  if (T16 != &KPfalseVKi) {
    T5 = IKJall_;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:46
    T17 = SLOT_VALUE_INITD(sig_, 0);
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:46
    T18 = primitive_cast_integer_as_raw(T17);
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:46
    T19 = primitive_machine_word_logbitQ(18,T18);
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:46
    if (T19 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/function.dylan:46
      CONGRUENT_CALL_PROLOG(&Ksignature_keysVKi, 1);
      T3 = CONGRUENT_CALL1(sig_);
      T4 = T3;
    } else {
      T4 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/dylan/function.dylan:46
    T5 = T4;
  }
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:43
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:41
  T20_0 = T10;
  T20_1 = T13;
  T20_2 = T5;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:38
  MV_SET_ELT(1, T20_1);
  MV_SET_ELT(2, T20_2);
  MV_SET_COUNT(3);
  return(T20_0);
}

D Kfunction_argumentsVKdMM1I (D function_) {
  D T2;
  D T3_0;
  D T3_1;
  D T3_2;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:50
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:52
  T2 = Kfunction_number_requiredVKiMM2I(function_);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:52
  T3_0 = T2;
  T3_1 = &KPfalseVKi;
  T3_2 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:50
  MV_SET_ELT(1, T3_1);
  MV_SET_ELT(2, T3_2);
  MV_SET_COUNT(3);
  return(T3_0);
}

D Kfunction_return_valuesVKdMM1I (D function_) {
  D T2;
  D T3;
  _KLsimple_object_vectorGVKd_1 T4 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T5;
  D T6_0;
  D T6_1;

  // /opt/opendylan-2013.1/sources/dylan/function.dylan:62
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:64
  T3 = SLOT_VALUE_INITD(function_, 1);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:64
  T2 = CALL1(&Kslot_typeVKe, T3);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:64
  T4.vector_element_[0] = T2;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:64
  T5 = primitive_copy_vector(&T4);
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:64
  T6_0 = T5;
  T6_1 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/function.dylan:62
  MV_SET_ELT(1, T6_1);
  MV_SET_COUNT(2);
  return(T6_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_function_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJall_);
    if (T0 != &KJall_) {
      IKJall_ = T0;
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_function_for_user () {
  return;
}


/* eof */
