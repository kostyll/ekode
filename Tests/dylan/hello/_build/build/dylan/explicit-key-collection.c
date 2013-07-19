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
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  D signature_values_;
} _KLsignatureAvaluesGVKi;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(2);

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
extern _KLincremental_generic_functionGVKe Kforward_iteration_protocolVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
D KreverseXVKdMM2I (D l_);
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_Lexplicit_key_collectionG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LsequenceG_typesVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;

/* Defined object declarations */

extern _KLsimple_methodGVKe Kmaximum_sequence_keyVKiMM0;
D Kmaximum_sequence_keyVKiMM0I (D);
extern _KLsimple_methodGVKe Kkey_sequenceVKdMM0;
D Kkey_sequenceVKdMM0I (D);
static _KLsignatureAvaluesGVKi K4;
static _KLsignatureAvaluesGVKi K5;

/* Indirection variables */


/* Variables */


/* Objects */

_KLsimple_methodGVKe Kmaximum_sequence_keyVKiMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K5,
  &Kmaximum_sequence_keyVKiMM0I
};

_KLsimple_methodGVKe Kkey_sequenceVKdMM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K4,
  &Kkey_sequenceVKdMM0I
};

static _KLsignatureAvaluesGVKi K4 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lexplicit_key_collectionG_typesVKi,
  &KDsignature_LsequenceG_typesVKi
};

static _KLsignatureAvaluesGVKi K5 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lexplicit_key_collectionG_typesVKi,
  &KDsignature_LintegerG_typesVKi
};

/* Code */

D Kmaximum_sequence_keyVKiMM0I (D collection_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9T, T9;
  D T10;
  D k_;
  D T12;
  D T13_0;
  D max_key_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  DWORD T20;
  DWORD T21;
  D T22;

  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:38
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:40
  max_key_ = (D) -3;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T2 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  T3 = T2;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  T4 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  T5 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  T6 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  T7 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  T9T = T3;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
    T9 = T9T;
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
    T10 = CALL3(T6, collection_, T9, T4);
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
    if (T10 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
      CALL2(T8, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
      k_ = CALL2(T7, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
      T18 = primitive_instanceQ(k_,&KLintegerGVKd);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
      if (T18 != &KPfalseVKi) {
        T17 = k_;
        // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
        T16 = max_key_;
        // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
        T20 = primitive_cast_integer_as_raw(T16);
        // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
        T21 = primitive_cast_integer_as_raw(T17);
        // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
        T22 = primitive_machine_word_less_thanQ(T20,T21);
        // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
        if (T22 != &KPfalseVKi) {
          T19 = T17;
        } else {
          T19 = T16;
        }
        // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
        // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
        max_key_ = T19;
      }
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:42
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
      T12 = CALL2(T5, collection_, T9);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
      T9T = T12;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:41
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:44
  T15 = max_key_;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:44
  T13_0 = T15;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:38
  MV_SET_COUNT(1);
  return(T13_0);
}

D Kkey_sequenceVKdMM0I (D collection_) {
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D keys_T, keys_;
  D T10T, T10;
  D T11;
  D k_;
  D T13;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:24
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  CONGRUENT_CALL_PROLOG(&Kforward_iteration_protocolVKd, 1);
  T2 = CONGRUENT_CALL1(collection_);
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  T3 = T2;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  T4 = MV_GET_ELT(1);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  T5 = MV_GET_ELT(2);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  T6 = MV_GET_ELT(3);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  T7 = MV_GET_ELT(4);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  T8 = MV_GET_ELT(5);
;
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  keys_T = &KPempty_listVKi;
  T10T = T3;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
    keys_ = keys_T;
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
    T10 = T10T;
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
    T11 = CALL3(T6, collection_, T10, T4);
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
    if (T11 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
      CALL2(T8, collection_, T10);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
      k_ = CALL2(T7, collection_, T10);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
      T14 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
      SLOT_VALUE_SETTER(k_, T14, 0);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
      SLOT_VALUE_SETTER(keys_, T14, 1);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
      T13 = CALL2(T5, collection_, T10);
      // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
      keys_T = T14;
      T10T = T13;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:29
    T15_0 = KreverseXVKdMM2I(keys_);
    // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:26
  // /opt/opendylan-2013.1/sources/dylan/explicit-key-collection.dylan:24
  MV_SET_COUNT(1);
  return(T15_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_explicit_key_collection_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_explicit_key_collection_for_user () {
  return;
}


/* eof */
