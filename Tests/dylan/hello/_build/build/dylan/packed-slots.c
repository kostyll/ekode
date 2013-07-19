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
  D incremental_gf_module_;
  D incremental_gf_domain_info_;
  D incremental_gf_method_libraries_;
  D incremental_gf_properties_;
} _KLincremental_generic_functionGVKe;

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
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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

typedef struct {
  D wrapper;
  D namespace_name_;
  D home_library_;
} _KLmoduleGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(0);

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(32);
define__KLbyte_stringGVKd(23);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;


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
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM1;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM2;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM3;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM4;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM5;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM6;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLabsent_engine_nodeGVKg RSINGULAR_Labsent_engine_nodeG;
extern _KLclassGVKd KLabsent_engine_nodeGVKg;
extern _KLmm_wrapperGVKi_0 KLabsent_engine_nodeGVKgW;
extern _KLmoduleGVKe Kdylan_extensions_moduleYdylan_userVdylan;
extern _KLclassGVKd KLmoduleGVKe;
extern _KLmm_wrapperGVKi_0 KLmoduleGVKeW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsymbolGVKd KJunknown_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJprocessing_;
D KerrorVKdMM1I (D string_, D arguments_);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;

/* Defined object declarations */

extern _KLincremental_generic_functionGVKe Kinitialize_packed_slotsVKe;
extern _KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM0;
D Kinitialize_packed_slotsVKeMM0I (D, D);
static _KLpairGVKd K3;
static _KLpairGVKd K4;
static _KLpairGVKd K5;
static _KLpairGVKd K6;
static _KLpairGVKd K7;
static _KLpairGVKd K8;
static _KLpairGVKd K9;
static _KLkeyword_signatureGVKe K10;
static _KLbyte_stringGVKd_23 K11;
extern _KLsimple_methodGVKe Kunpack_quadstateVKe;
D Kunpack_quadstateVKeI (D x_);
static _KLbyte_stringGVKd_32 K14;
static _KLsignatureGVKe K15;
extern _KLsimple_methodGVKe Kpack_quadstateVKe;
D Kpack_quadstateVKeI (D x_);
static _KLsignatureAvaluesGVKi K18;
extern _KLsimple_methodGVKe Kunpack_tristateVKe;
D Kunpack_tristateVKeI (D x_);
extern _KLsimple_methodGVKe Kpack_tristateVKe;
D Kpack_tristateVKeI (D x_);
extern _KLsimple_methodGVKe Kunpack_booleanVKe;
D Kunpack_booleanVKeI (D x_);
static _KLsignatureAvaluesGVKi K25;
extern _KLsimple_methodGVKe Kpack_booleanVKe;
D Kpack_booleanVKeI (D x_);
static _KLsignatureAvaluesGVKi K28;

/* Indirection variables */


/* Variables */

D packed_slots_end_countVKe = (D) 5;
D compute_initial_packed_slotVKe = (D) 9;
D Dend_count_LobjectGVKe = (D) 1;
D initialize_packed_slotsVKe = &Kinitialize_packed_slotsVKe;
D pack_booleanVKe = &Kpack_booleanVKe;
D unpack_booleanVKe = &Kunpack_booleanVKe;
D pack_tristateVKe = &Kpack_tristateVKe;
D unpack_tristateVKe = &Kunpack_tristateVKe;
D pack_quadstateVKe = &Kpack_quadstateVKe;
D unpack_quadstateVKe = &Kunpack_quadstateVKe;

/* Objects */

_KLincremental_generic_functionGVKe Kinitialize_packed_slotsVKe = {
  &KLincremental_generic_functionGVKeW /* wrapper */,
  &gf_optional_xep_1,
  &K10,
  &KPfalseVKi,
  &K11,
  &K3,
  &RSINGULAR_Labsent_engine_nodeG,
  &Kdylan_extensions_moduleYdylan_userVdylan,
  &KPfalseVKi,
  &KPempty_vectorVKi,
  (D) 25
};

_KLkeyword_methodGVKe Kinitialize_packed_slotsVKeMM0 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_2,
  &K10,
  &key_mep_2,
  &Kinitialize_packed_slotsVKeMM0I,
  &KPempty_vectorVKi
};

static _KLpairGVKd K3 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitialize_packed_slotsVKeMM0,
  &K4
};

static _KLpairGVKd K4 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitialize_packed_slotsVKeMM1,
  &K5
};

static _KLpairGVKd K5 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitialize_packed_slotsVKeMM2,
  &K6
};

static _KLpairGVKd K6 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitialize_packed_slotsVKeMM3,
  &K7
};

static _KLpairGVKd K7 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitialize_packed_slotsVKeMM4,
  &K8
};

static _KLpairGVKd K8 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitialize_packed_slotsVKeMM5,
  &K9
};

static _KLpairGVKd K9 = {
  &KLpairGVKdW /* wrapper */,
  &Kinitialize_packed_slotsVKeMM6,
  &KPempty_listVKi
};

static _KLkeyword_signatureGVKe K10 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 45875205,
  &KDsignature_LobjectG_typesVKi,
  &KPempty_vectorVKi,
  &KPempty_vectorVKi
};

static _KLbyte_stringGVKd_23 K11 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 93,
  "initialize-packed-slots"
};

_KLsimple_methodGVKe Kunpack_quadstateVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Kunpack_quadstateVKeI
};

static _KLbyte_stringGVKd_32 K14 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 129,
  "Fell through select cases on %=."
};

static _KLsignatureGVKe K15 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 41944069,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kpack_quadstateVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K18,
  &Kpack_quadstateVKeI
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

_KLsimple_methodGVKe Kunpack_tristateVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K15,
  &Kunpack_tristateVKeI
};

_KLsimple_methodGVKe Kpack_tristateVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K18,
  &Kpack_tristateVKeI
};

_KLsimple_methodGVKe Kunpack_booleanVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K25,
  &Kunpack_booleanVKeI
};

static _KLsignatureAvaluesGVKi K25 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LintegerG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

_KLsimple_methodGVKe Kpack_booleanVKe = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K28,
  &Kpack_booleanVKeI
};

static _KLsignatureAvaluesGVKi K28 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LbooleanG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D Kinitialize_packed_slotsVKeMM0I (D instance_, D all_keys_) {
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:16
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:16
  T3_0 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:16
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kunpack_quadstateVKeI (D x_) {
  D T1_0;
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  D T12;
  _KLsimple_object_vectorGVKd_1 T13 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T14_0;

  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:47
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
  T9 = primitive_idQ(x_,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:49
    T1_0 = &KJunknown_;
    T8_0 = T1_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
    T10 = primitive_idQ(x_,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:50
      T2_0 = &KJprocessing_;
      T7_0 = T2_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
      T11 = primitive_idQ(x_,(D) 9);
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
      if (T11 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:51
        T3_0 = &KPfalseVKi;
        T6_0 = T3_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
        T12 = primitive_idQ(x_,(D) 13);
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
        if (T12 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:52
          T4_0 = &KPtrueVKi;
          T5_0 = T4_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
          T13.vector_element_[0] = x_;
          // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
          T14_0 = KerrorVKdMM1I(&K14, &T13);
          T5_0 = T14_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
        T6_0 = T5_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:48
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:47
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kpack_quadstateVKeI (D x_) {
  D T1_0;
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6_0;
  D T7_0;
  D T8_0;
  D T9;
  D T10;
  D T11;
  _KLsimple_object_vectorGVKd_1 T12 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T13_0;

  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
  T9 = primitive_idQ(x_,&KJunknown_);
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
  if (T9 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:40
    T1_0 = (D) 1;
    T8_0 = T1_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
    T10 = primitive_idQ(x_,&KJprocessing_);
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
    if (T10 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:41
      T2_0 = (D) 5;
      T7_0 = T2_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
      if (x_ != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
        T11 = primitive_idQ(x_,&KPtrueVKi);
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
        if (T11 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:43
          T4_0 = (D) 13;
          T5_0 = T4_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
          T12.vector_element_[0] = x_;
          // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
          T13_0 = KerrorVKdMM1I(&K14, &T12);
          T5_0 = T13_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
        T6_0 = T5_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:42
        T3_0 = (D) 9;
        T6_0 = T3_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
      T7_0 = T6_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:39
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:38
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kunpack_tristateVKeI (D x_) {
  D T1_0;
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  DWORD T6;
  D T7;
  D T8;

  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:34
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
  T6 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
  T7 = primitive_machine_word_equalQ(T6,9);
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
  if (T7 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
    T1_0 = &KPtrueVKi;
    T5_0 = T1_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
    T8 = primitive_machine_word_equalQ(T6,5);
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
    if (T8 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
      T2_0 = &KPfalseVKi;
      T4_0 = T2_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
      T3_0 = &KJunknown_;
      T4_0 = T3_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:35
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:34
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kpack_tristateVKeI (D x_) {
  D T1_0;
  D T2_0;
  D T3_0;
  D T4_0;
  D T5_0;
  D T6;

  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:30
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
  if (x_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
    T6 = primitive_idQ(x_,&KJunknown_);
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
    if (T6 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
      T1_0 = (D) 1;
      T3_0 = T1_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
      T2_0 = (D) 9;
      T3_0 = T2_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
    T5_0 = T3_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
    T4_0 = (D) 5;
    T5_0 = T4_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:31
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:30
  MV_SET_COUNT(1);
  return(T5_0);
}

D Kunpack_booleanVKeI (D x_) {
  D T1_0;
  D T2_0;
  D T3_0;
  DWORD T4;
  D T5;

  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:25
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:27
  T4 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:27
  T5 = primitive_machine_word_equalQ(T4,5);
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:27
  if (T5 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:27
    T1_0 = &KPtrueVKi;
    T3_0 = T1_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:27
    T2_0 = &KPfalseVKi;
    T3_0 = T2_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:27
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:25
  MV_SET_COUNT(1);
  return(T3_0);
}

D Kpack_booleanVKeI (D x_) {
  D T1_0;
  D T2_0;
  D T3_0;

  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:20
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:22
  if (x_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:22
    T1_0 = (D) 5;
    T3_0 = T1_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:22
    T2_0 = (D) 1;
    T3_0 = T2_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:22
  // /opt/opendylan-2013.1/sources/dylan/packed-slots.dylan:20
  MV_SET_COUNT(1);
  return(T3_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_packed_slots_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_packed_slots_for_user () {
  return;
}


/* eof */
