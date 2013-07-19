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
  D domain_library_;
  D domain_next_;
  D domain_method_;
} _KLmethod_domainGVKe;

typedef struct {
  D wrapper;
  D namespace_name_;
  D library_major_version_;
  D library_minor_version_;
  D library_build_count_;
  D used_libraries_;
  D all_used_libraries_;
  D runtime_module_;
  D library_defined_generics_;
  D library_number_static_dispatches_;
  D library_number_dynamic_dispatches_;
} _KLlibraryGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLlistGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
} _KLsimple_copy_down_methodGVKi;

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
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(0);
define__KLsimple_object_vectorGVKd(256);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D mep_;
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_copy_down_methodGVKi;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
  D signature_values_;
} _KLkeyword_signatureAvaluesGVKi;

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
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D xep_;
  D function_signature_;
  D Pgf_cache_;
  D debug_name_;
  D generic_function_methods_;
  D discriminator_;
} _KLsealed_generic_functionGVKe;


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
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLclassGVKd KLlistGVKd;
extern _KLmm_wrapperGVKi_0 KLlistGVKdW;
D KreverseXVKdMM2I (D);
extern _KLclassGVKd KLsimple_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_copy_down_methodGVKiW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lempty_listG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LlistG_typesVKi;
extern _KLclassGVKd KLpairGVKd;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLkeyword_copy_down_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_copy_down_methodGVKiW;
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_256 KDsignature_LobjectG_typesVKi;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsymbolGVKd KJskip_;
extern _KLsymbolGVKd KJfailure_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
D Kcopy_sequenceVKdMM4I (D, D, D, D);
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;

/* Defined object declarations */

extern _KLsimple_copy_down_methodGVKi Kshallow_copyVKdMM6;
D Kshallow_copyVKdMM6I (D);
extern _KLmethod_domainGVKe Kshallow_copyVKdRD_dylanRD_0;
extern _KLkeyword_copy_down_methodGVKi Kfind_keyVKdMM2;
D Kfind_keyVKdMM2I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kfind_keyVKdRD_dylanRD_0;
extern _KLkeyword_copy_down_methodGVKi Kreplace_elementsXVKdMM2;
D Kreplace_elementsXVKdMM2I (D, D, D, D, D);
extern _KLmethod_domainGVKe Kreplace_elementsXVKdRD_dylanRD_0;
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM6;
D KchooseVKdMM6I (D, D);
extern _KLsimple_copy_down_methodGVKi KchooseVKdMM7;
D KchooseVKdMM7I (D, D);
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_0;
extern _KLmethod_domainGVKe KchooseVKdRD_dylanRD_1;
static _KLsignatureAvaluesGVKi K15;
static _KLsimple_object_vectorGVKd_2 K16;
static _KLsignatureAvaluesGVKi K17;
static _KLsimple_object_vectorGVKd_2 K18;
static _KLunionGVKe K19;
static _KLsingletonGVKd K20;
static _KLkeyword_signatureAvaluesGVKi K21;
static _KLsimple_object_vectorGVKd_2 K22;
static _KLsimple_object_vectorGVKd_3 K23;
static _KLsimple_object_vectorGVKd_1 K24;
static _KLkeyword_signatureGVKe K25;
static _KLsimple_object_vectorGVKd_4 K26;
static _KLsimple_object_vectorGVKd_2 K27;
static _KLsimple_object_vectorGVKd_2 K28;
static _KLsignatureAvaluesGVKi K29;

/* Indirection variables */


/* Variables */


/* Objects */

_KLsimple_copy_down_methodGVKi Kshallow_copyVKdMM6 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_1,
  &K29,
  &Kshallow_copyVKdMM6I
};

_KLmethod_domainGVKe Kshallow_copyVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kshallow_copyVKdMM6
};

_KLkeyword_copy_down_methodGVKi Kfind_keyVKdMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K25,
  &key_mep_5,
  &Kfind_keyVKdMM2I,
  &K26
};

_KLmethod_domainGVKe Kfind_keyVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kfind_keyVKdMM2
};

_KLkeyword_copy_down_methodGVKi Kreplace_elementsXVKdMM2 = {
  &KLkeyword_copy_down_methodGVKiW /* wrapper */,
  &rest_key_xep_5,
  &K21,
  &key_mep_5,
  &Kreplace_elementsXVKdMM2I,
  &K22
};

_KLmethod_domainGVKe Kreplace_elementsXVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Kreplace_elementsXVKdMM2
};

_KLsimple_copy_down_methodGVKi KchooseVKdMM6 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K17,
  &KchooseVKdMM6I
};

_KLsimple_copy_down_methodGVKi KchooseVKdMM7 = {
  &KLsimple_copy_down_methodGVKiW /* wrapper */,
  &xep_2,
  &K15,
  &KchooseVKdMM7I
};

_KLmethod_domainGVKe KchooseVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &KchooseVKdMM7
};

_KLmethod_domainGVKe KchooseVKdRD_dylanRD_1 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KchooseVKdRD_dylanRD_0,
  &KchooseVKdMM6
};

static _KLsignatureAvaluesGVKi K15 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K16,
  &KDsignature_Lempty_listG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K16 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLempty_listGVKd
};

static _KLsignatureAvaluesGVKi K17 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K18,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K18 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLpairGVKd
};

static _KLunionGVKe K19 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K20,
  &KLintegerGVKd
};

static _KLsingletonGVKd K20 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLkeyword_signatureAvaluesGVKi K21 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817613,
  &K23,
  &K24,
  &KDsignature_LobjectG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcount_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_3 K23 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLlistGVKd,
  &KLfunctionGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_1 K24 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJcount_
};

static _KLkeyword_signatureGVKe K25 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42206217,
  &K27,
  &K28,
  &KDsignature_LobjectG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJskip_,
  (D) 1,
  &KJfailure_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_2 K27 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlistGVKd,
  &KLfunctionGVKd
};

static _KLsimple_object_vectorGVKd_2 K28 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJskip_,
  &KJfailure_
};

static _KLsignatureAvaluesGVKi K29 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_LlistG_typesVKi,
  &KDsignature_LlistG_typesVKi
};

/* Code */

D Kshallow_copyVKdMM6I (D coll_) {
  D T2_0;

  // /opt/opendylan-2013.1/sources/dylan/list-speed.dylan:18
  T2_0 = Kcopy_sequenceVKdMM4I(coll_, &KPempty_vectorVKi, (D) 1, &Kunsupplied_objectVKi);
  MV_SET_COUNT(1);
  return(T2_0);
}

D Kfind_keyVKdMM2I (D coll_, D test_, D Urest_, D skip_, D failure_) {
  D skipF6;
  D T7T, T7;
  D found_T, found_;
  D index_T, index_;
  D T10;
  D T11;
  D T12;
  D T13_0;
  D T14_0;
  D T15_0;
  D skipF16;
  D T17;
  DWORD T18;
  DWORD T19;
  D T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25;
  D T26_0;
  D T27;

  // /opt/opendylan-2013.1/sources/dylan/list-speed.dylan:13
  primitive_type_check(skip_, &KLintegerGVKd);
  skipF6 = skip_;
  skipF16 = skipF6;
  T7T = coll_;
  found_T = &KPfalseVKi;
  index_T = (D) -3;
L0: ;
    T7 = T7T;
    found_ = found_T;
    index_ = index_T;
    T22 = primitive_idQ(T7,&KPempty_listVKi);
    if (T22 == &KPfalseVKi) {
      T23 = SLOT_VALUE_INITD(T7, 0);
      if (found_ == &KPfalseVKi) {
        T25 = SLOT_VALUE_INITD(T7, 1);
        T26_0 = T25;
        T24_0 = T26_0;
        T27 = T24_0;
        T10 = CALL1(test_, T23);
        if (T10 != &KPfalseVKi) {
          T17 = skipF16;
          T18 = primitive_cast_integer_as_raw(T17);
          T19 = primitive_machine_word_subtract_signal_overflow(T18,4);
          T20 = primitive_cast_raw_as_integer(T19);
          skipF16 = T20;
          T21 = primitive_machine_word_less_thanQ(T19,1);
          T11 = T21;
        } else {
          T11 = &KPfalseVKi;
        }
        CONGRUENT_CALL_PROLOG(&KAVKd, 2);
        T12 = CONGRUENT_CALL2(index_, (D) 5);
        T7T = T27;
        found_T = T11;
        index_T = T12;
        goto L0;
      }
    }
    if (found_ != &KPfalseVKi) {
      T13_0 = index_;
      T15_0 = T13_0;
    } else {
      T14_0 = failure_;
      T15_0 = T14_0;
    }
  MV_SET_COUNT(1);
  return(T15_0);
}

D Kreplace_elementsXVKdMM2I (D coll_, D predicate_, D new_val_fn_, D Urest_, D count_) {
  D countF6;
  D stateF7T, stateF7;
  D T8;
  D T9;
  D T10;
  D stateF11T, stateF11;
  D T12;
  D T13;
  D T14_0;
  D countF15;
  D T16;
  D T17;
  D T18;
  DWORD T19;
  D T20;
  DWORD T21;
  DWORD T22;
  D T23;
  D T24;
  D T25;
  D T26_0;
  D T27;
  D T28_0;
  D T29;
  D T30;
  D T31;
  D T32_0;
  D T33;
  D T34_0;
  D T35;
  D T36;

  // /opt/opendylan-2013.1/sources/dylan/list-speed.dylan:15
  primitive_type_check(count_, &K19);
  countF6 = count_;
  if (countF6 != &KPfalseVKi) {
    T36 = countF6;
    T18 = T36;
    countF15 = T18;
    stateF7T = coll_;
  L0: ;
      stateF7 = stateF7T;
      T16 = countF15;
      T19 = primitive_cast_integer_as_raw(T16);
      T20 = primitive_machine_word_equalQ(T19,1);
      if (T20 != &KPfalseVKi) {
        T10 = T20;
      } else {
        T24 = primitive_idQ(stateF7,&KPempty_listVKi);
        T10 = T24;
      }
      if (T10 == &KPfalseVKi) {
        T25 = SLOT_VALUE_INITD(stateF7, 0);
        T8 = CALL1(predicate_, T25);
        if (T8 != &KPfalseVKi) {
          T9 = CALL1(new_val_fn_, T25);
          SLOT_VALUE_SETTER(T9, stateF7, 0);
          T17 = countF15;
          T21 = primitive_cast_integer_as_raw(T17);
          T22 = primitive_machine_word_subtract_signal_overflow(T21,4);
          T23 = primitive_cast_raw_as_integer(T22);
          countF15 = T23;
        }
        T27 = SLOT_VALUE_INITD(stateF7, 1);
        T28_0 = T27;
        T26_0 = T28_0;
        T29 = T26_0;
        stateF7T = T29;
        goto L0;
      }
  } else {
    stateF11T = coll_;
  L1: ;
      stateF11 = stateF11T;
      T30 = primitive_idQ(stateF11,&KPempty_listVKi);
      if (T30 == &KPfalseVKi) {
        T31 = SLOT_VALUE_INITD(stateF11, 0);
        T12 = CALL1(predicate_, T31);
        if (T12 != &KPfalseVKi) {
          T13 = CALL1(new_val_fn_, T31);
          SLOT_VALUE_SETTER(T13, stateF11, 0);
        }
        T33 = SLOT_VALUE_INITD(stateF11, 1);
        T34_0 = T33;
        T32_0 = T34_0;
        T35 = T32_0;
        stateF11T = T35;
        goto L1;
      }
  }
  T14_0 = coll_;
  MV_SET_COUNT(1);
  return(T14_0);
}

D KchooseVKdMM6I (D test_, D sequence_) {
  D result_T, result_;
  D T4T, T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/list-speed.dylan:8
  result_T = &KPempty_listVKi;
  T4T = sequence_;
L0: ;
    result_ = result_T;
    T4 = T4T;
    T9 = primitive_idQ(T4,&KPempty_listVKi);
    if (T9 == &KPfalseVKi) {
      T10 = SLOT_VALUE_INITD(T4, 0);
      T5 = CALL1(test_, T10);
      if (T5 != &KPfalseVKi) {
        T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        SLOT_VALUE_SETTER(T10, T7, 0);
        SLOT_VALUE_SETTER(result_, T7, 1);
        T6 = T7;
      } else {
        T6 = result_;
      }
      T12 = SLOT_VALUE_INITD(T4, 1);
      T13_0 = T12;
      T11_0 = T13_0;
      T14 = T11_0;
      result_T = T6;
      T4T = T14;
      goto L0;
    }
    T8 = KreverseXVKdMM2I(result_);
    T15_0 = T8;
  MV_SET_COUNT(1);
  return(T15_0);
}

D KchooseVKdMM7I (D test_, D sequence_) {
  D result_T, result_;
  D T4T, T4;
  D T5;
  D T6;
  D T7;
  D T8;
  D T9;
  D T10;
  D T11_0;
  D T12;
  D T13_0;
  D T14;
  D T15_0;

  // /opt/opendylan-2013.1/sources/dylan/list-speed.dylan:10
  result_T = &KPempty_listVKi;
  T4T = sequence_;
L0: ;
    result_ = result_T;
    T4 = T4T;
    T9 = primitive_idQ(T4,&KPempty_listVKi);
    if (T9 == &KPfalseVKi) {
      T10 = SLOT_VALUE_INITD(T4, 0);
      T5 = CALL1(test_, T10);
      if (T5 != &KPfalseVKi) {
        T7 = primitive_object_allocate_filled(3,&KLpairGVKdW,2,&KPunboundVKi,0,0,&KPunboundVKi);
        SLOT_VALUE_SETTER(T10, T7, 0);
        SLOT_VALUE_SETTER(result_, T7, 1);
        T6 = T7;
      } else {
        T6 = result_;
      }
      T12 = SLOT_VALUE_INITD(T4, 1);
      T13_0 = T12;
      T11_0 = T13_0;
      T14 = T11_0;
      result_T = T6;
      T4T = T14;
      goto L0;
    }
    T8 = KreverseXVKdMM2I(result_);
    T15_0 = T8;
  MV_SET_COUNT(1);
  return(T15_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_list_speed_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_list_speed_for_user () {
  return;
}


/* eof */
