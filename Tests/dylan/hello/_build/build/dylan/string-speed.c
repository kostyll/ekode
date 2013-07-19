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
  D xep_;
} _KLfunctionGVKd;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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
} _KLsimple_methodGVKe;

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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
  D iep_;
  D keyword_specifiers_;
} _KLkeyword_methodGVKe;

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
  D instanceQ_iep_;
  D union_type1_;
  D union_type2_;
} _KLunionGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

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
extern _KLclassGVKd KLmethod_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLmethod_domainGVKeW;
extern _KLlibraryGVKe Kdylan_libraryYdylan_userVdylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLclassGVKd KLfunctionGVKd;
extern _KLmm_wrapperGVKi_0 KLfunctionGVKdW;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
D Kelement_range_errorVKeI (D, D);
extern _KLincremental_generic_functionGVKe KEVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLsimple_methodGVKe KEEVKd;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
D KmakeVKdMM23I (D, D, D, D);
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
extern _KLmm_wrapperGVKi_0 KLempty_listGVKdW;
D KelementVKdMM11I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLincremental_generic_functionGVKe KAVKd;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJtest_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLsymbolGVKd KJcount_;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D x_, D u_);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
D Kconcatenate_asVKdMM1I (D, D, D);
extern _KLincremental_generic_functionGVKe KsizeVKd;
D KmakeVKdMM33I (D, D, D, D);
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM0;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
D Kcheck_start_compute_endVKeMM0I (D, D, D);
extern _KLsymbolGVKd KJstart_;
extern _KLsymbolGVKd KJend_;
extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_2;

/* Defined object declarations */

extern _KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_3;
extern _KLkeyword_methodGVKe Kcopy_sequenceVKdMM3;
D Kcopy_sequenceVKdMM3I (D, D, D, D);
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM3;
D Kconcatenate_asVKdMM3I (D, D, D);
extern _KLkeyword_methodGVKe Ksubsequence_positionVKdMM2;
D Ksubsequence_positionVKdMM2I (D, D, D, D, D);
extern _KLmethod_domainGVKe Ksubsequence_positionVKdRD_dylanRD_0;
static _KLkeyword_signatureAvaluesGVKi K8;
static _KLsimple_object_vectorGVKd_4 K9;
static _KLsimple_object_vectorGVKd_2 K10;
static _KLsimple_object_vectorGVKd_2 K11;
static _KLsimple_object_vectorGVKd_1 K12;
static _KLunionGVKe K13;
static _KLsingletonGVKd K14;
static _KLpairGVKd K15;
static _KLsignatureAvaluesGVKi K16;
static _KLsimple_object_vectorGVKd_2 K17;
static _KLsingletonGVKd K18;
static _KLkeyword_signatureAvaluesGVKi K19;
static _KLsimple_object_vectorGVKd_4 K20;
static _KLsimple_object_vectorGVKd_2 K21;
static _KLsimple_object_vectorGVKd_2 K22;

/* Indirection variables */


/* Variables */


/* Objects */

_KLmethod_domainGVKe Kcopy_sequenceVKdRD_dylanRD_3 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &Kcopy_sequenceVKdRD_dylanRD_2,
  &Kcopy_sequenceVKdMM3
};

_KLkeyword_methodGVKe Kcopy_sequenceVKdMM3 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K19,
  &key_mep_4,
  &Kcopy_sequenceVKdMM3I,
  &K20
};

_KLsimple_methodGVKe Kconcatenate_asVKdMM3 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_2,
  &K16,
  &Kconcatenate_asVKdMM3I
};

_KLkeyword_methodGVKe Ksubsequence_positionVKdMM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_5,
  &K8,
  &key_mep_5,
  &Ksubsequence_positionVKdMM2I,
  &K9
};

_KLmethod_domainGVKe Ksubsequence_positionVKdRD_dylanRD_0 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KPfalseVKi,
  &Ksubsequence_positionVKdMM2
};

static _KLkeyword_signatureAvaluesGVKi K8 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817609,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K10,
  &K11,
  &K12
};

static _KLsimple_object_vectorGVKd_4 K9 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJtest_,
  &KEEVKd,
  &KJcount_,
  (D) 5
};

static _KLsimple_object_vectorGVKd_2 K10 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJtest_,
  &KJcount_
};

static _KLsimple_object_vectorGVKd_2 K11 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLfunctionGVKd,
  &KLintegerGVKd
};

static _KLsimple_object_vectorGVKd_1 K12 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K13
};

static _KLunionGVKe K13 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K14,
  &KLintegerGVKd
};

static _KLsingletonGVKd K14 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLpairGVKd K15 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM0,
  &KPempty_listVKi
};

static _KLsignatureAvaluesGVKi K16 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 38798345,
  &K17,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K18,
  &KLbyte_stringGVKd
};

static _KLsingletonGVKd K18 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_stringGVKd
};

static _KLkeyword_signatureAvaluesGVKi K19 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &KDsignature_Lbyte_stringG_typesVKi,
  &K21,
  &K22,
  &KDsignature_Lbyte_stringG_typesVKi
};

static _KLsimple_object_vectorGVKd_4 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJstart_,
  (D) 1,
  &KJend_,
  &KPunboundVKi
};

static _KLsimple_object_vectorGVKd_2 K21 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJstart_,
  &KJend_
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLintegerGVKd,
  &KLobjectGVKd
};

/* Code */

D Kcopy_sequenceVKdMM3I (D source_, D Urest_, D first_, D last_) {
  D firstF5;
  D T6;
  D lastF7;
  D T8;
  DSINT T9;
  D T10_0;
  D T11;
  D T12;
  DWORD T13;
  DWORD T14;
  DWORD T15;
  DWORD T16;
  D T17;
  D T18;
  DWORD T19;
  DWORD T20;
  DWORD T21;

  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:103
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:103
  primitive_type_check(first_, &KLintegerGVKd);
  firstF5 = first_;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:103
  T11 = primitive_idQ(last_,&KPunboundVKi);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:103
  if (T11 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:105
    T12 = SLOT_VALUE_INITD(source_, 0);
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:103
    T6 = T12;
    lastF7 = T6;
  } else {
    lastF7 = last_;
  }
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:103
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:107
  T8 = Kcheck_start_compute_endVKeMM0I(source_, firstF5, lastF7);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:108
  T13 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:108
  T14 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:108
  T15 = primitive_machine_word_logxor(T14,1);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:108
  T16 = primitive_machine_word_subtract_signal_overflow(T13,T15);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:108
  T17 = primitive_cast_raw_as_integer(T16);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:109
  T18 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T17);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:111
  T9 = primitive_repeated_slot_offset(T18);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:112
  T20 = primitive_cast_integer_as_raw(firstF5);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:112
  T19 = primitive_machine_word_shift_right(T20,2);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:113
  T21 = primitive_machine_word_shift_right(T16,2);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:110
  primitive_replace_bytesX(T18,T9,0,source_,2,T19,T21);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:114
  T10_0 = T18;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:103
  MV_SET_COUNT(1);
  return(T10_0);
}

D Kconcatenate_asVKdMM3I (D class_, D vector_, D more_vectors_) {
  D returnPexit_19_;
  D T5;
  D T6;
  DWORD T7T, T7;
  D T8;
  D sz_;
  D T10;
  DWORD i_T, i_;
  D T12;
  D T13;
  D T14;
  DSINT T15;
  DWORD T16T, T16;
  D v_;
  DSINT T18;
  DWORD T19;
  DSINT T20;
  D T21;
  D T22;
  D T23;
  D T24_0;
  D T25_0;
  D T26;
  D total_sz_;
  D T28;
  D T29;
  D T30;
  D num_non_empty_;
  D T32;
  D T33;
  DSINT result_index_;
  DWORD T35;
  DWORD T36;
  D T37;
  DWORD T38;
  D T39;
  D T40;
  DWORD T41;
  D T42;
  D T43;
  D T44;
  D T45;
  D T46;
  _KLsimple_object_vectorGVKd_1 T47 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T48;
  DWORD T49;
  D T50;
  DWORD T51;
  DWORD T52;
  DWORD T53;
  DWORD T54;
  D T55;
  DWORD T56;
  DWORD T57;
  D T58;
  DWORD T59;
  D T60;
  D T61;
  D T62;
  DWORD T63;
  D T64;
  D T65;
  D T66;
  D T67;
  DWORD T68;
  D T69;
  D result_;
  DWORD T71;
  DWORD T72;
  D T73;
  D T74;
  D T75;
  DWORD T76;
  DWORD T77;
  DWORD T78;

  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:121
  T26 = primitive_copy_vector(more_vectors_);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:125
  T37 = SLOT_VALUE_INITD(vector_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:125
  total_sz_ = T37;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:126
  T30 = total_sz_;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:126
  T38 = primitive_cast_integer_as_raw(T30);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:126
  T39 = primitive_machine_word_equalQ(T38,1);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:126
  if (T39 != &KPfalseVKi) {
    T6 = (D) 1;
  } else {
    T6 = (D) 5;
  }
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:126
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:126
  num_non_empty_ = T6;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
  T40 = SLOT_VALUE_INITD(T26, 0);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
  T41 = primitive_cast_integer_as_raw(T40);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
  T7T = 1;
L0: ;
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
    T7 = T7T;
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
    T42 = primitive_machine_word_equalQ(T7,T41);
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
    if (T42 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
      T43 = REPEATED_D_SLOT_VALUE_TAGGED(T26, 1, T7);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:129
      T44 = primitive_instanceQ(T43,&KLbyte_stringGVKd);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:129
      if (T44 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:129
        MIEP_CALL_PROLOG(&K15);
        T45 = Kconcatenate_asVKdMM1I(class_, vector_, T26);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:129
        T46 = T45;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:129
        T47.vector_element_[0] = T46;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:124
        T48 = MV_SET_REST_AT(&T47, 0);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:124
        T24_0 = T48;
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:129
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:130
      CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
      T8 = CONGRUENT_CALL1(T43);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:129
      sz_ = T8;
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:131
      T49 = primitive_cast_integer_as_raw(sz_);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:131
      T50 = primitive_machine_word_equalQ(T49,1);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:131
      if (T50 == &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:132
        T29 = total_sz_;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:132
        T51 = primitive_cast_integer_as_raw(T29);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:132
        T52 = primitive_cast_integer_as_raw(sz_);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:132
        T53 = primitive_machine_word_logxor(T52,1);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:132
        T54 = primitive_machine_word_add_signal_overflow(T51,T53);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:132
        T55 = primitive_cast_raw_as_integer(T54);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:132
        total_sz_ = T55;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:133
        T33 = num_non_empty_;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:133
        T56 = primitive_cast_integer_as_raw(T33);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:133
        T57 = primitive_machine_word_add_signal_overflow(T56,4);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:133
        T58 = primitive_cast_raw_as_integer(T57);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:133
        num_non_empty_ = T58;
      }
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:131
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
      T59 = primitive_machine_word_add_signal_overflow(T7,4);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
      T7T = T59;
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:128
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:137
  T32 = num_non_empty_;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:137
  T60 = primitive_idQ(T32,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:137
  if (T60 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:138
    T61 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), (D) 1);
    T23 = T61;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:137
    T62 = primitive_idQ(T32,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:137
    if (T62 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:139
      T63 = primitive_cast_integer_as_raw(T37);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:139
      T64 = primitive_machine_word_less_thanQ(1,T63);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:139
      if (T64 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:139
        T10 = vector_;
        MV_SET_ELT(0, vector_);
        MV_SET_COUNT(1);
        T14 = T10;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
        i_T = 1;
      L2: ;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
          i_ = i_T;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
          T66 = primitive_cast_raw_as_integer(i_);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
          T65 = primitive_machine_word_less_thanQ(i_,T41);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
          if (T65 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:142
            T67 = KelementVKdMM11I(T26, T66, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:142
            CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
            T12 = CONGRUENT_CALL1(T67);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:142
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T13 = CONGRUENT_CALL2(T12, (D) 1);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
            if (T13 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
              T68 = primitive_machine_word_add_signal_overflow(i_,4);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
              i_T = T68;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
          }
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:142
          T69 = KelementVKdMM11I(T26, T66, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:141
        T14 = T69;
      }
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:139
      T22 = T14;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:145
      T28 = total_sz_;
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:145
      result_ = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C(' '), T28);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:147
      T72 = primitive_cast_integer_as_raw(T37);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:147
      T71 = primitive_machine_word_shift_right(T72,2);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:149
      T15 = primitive_repeated_slot_offset(result_);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:148
      primitive_replace_bytesX(result_,T15,0,vector_,2,0,T71);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:148
      result_index_ = T71;
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
      T16T = 1;
    L3: ;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
        T16 = T16T;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
        T73 = primitive_machine_word_equalQ(T16,T41);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
        if (T73 == &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
          T74 = REPEATED_D_SLOT_VALUE_TAGGED(T26, 1, T16);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
          v_ = T74;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:153
          T75 = SLOT_VALUE_INITD(v_, 0);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:153
          T77 = primitive_cast_integer_as_raw(T75);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:153
          T76 = primitive_machine_word_shift_right(T77,2);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:155
          T18 = primitive_repeated_slot_offset(result_);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:154
          T36 = result_index_;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:154
          primitive_replace_bytesX(result_,T18,T36,v_,2,0,T76);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:157
          T35 = result_index_;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:157
          T19 = primitive_machine_word_add(T35,T76);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:157
          T20 = T19;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:157
          result_index_ = T20;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
          T78 = primitive_machine_word_add_signal_overflow(T16,4);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
          T16T = T78;
          goto L3;
        }
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:152
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:159
      T21 = result_;
      MV_SET_ELT(0, result_);
      MV_SET_COUNT(1);
      T22 = T21;
    }
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:137
    T23 = T22;
  }
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:137
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:124
  T24_0 = T23;
  L1: ;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:124
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:121
  T25_0 = T24_0;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:121
  MV_SET_COUNT(1);
  return(T25_0);
}

D Ksubsequence_positionVKdMM2I (D big_, D pat_, D Urest_, D test_, D count_) {
  D testF6;
  D countF7;
  DWORD keyF8T, keyF8;
  D T9;
  D T10;
  D T11_0;
  D T12_0;
  D T13_0;
  DWORD keyF14T, keyF14;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19_0;
  D T20_0;
  D T21_0;
  DWORD i_T, i_;
  D T23_0;
  D T24_0;
  D T25_0;
  D T26_0;
  D countF27;
  D T28;
  D T29;
  D T30;
  D T31;
  D T32;
  D T33;
  D T34;
  D T35;
  DWORD T36;
  DWORD T37;
  D T38;
  D T39_0;
  D T40;
  D T41_0;
  DWORD T42;
  D T43;
  DBCHR T44;
  D T45;
  D T46;
  D T47;
  DWORD T48;
  D T49;
  D T50;
  D T51_0;
  D T52;
  DBCHR T53;
  D T54;
  D T55;
  D T56;
  DWORD T57;
  DWORD T58;
  D T59;
  D T60;
  D T61;
  DWORD T62;
  D T63;
  D T64_0;
  DWORD T65;
  D T66;
  DBCHR T67;
  D T68;
  D T69;
  D T70;
  D T71_0;
  D T72;
  DBCHR T73;
  D T74;
  D T75;
  D T76;
  DWORD T77;
  DWORD T78;
  D T79;
  D T80;
  D T81_0;
  D T82;
  DBCHR T83;
  D T84;
  D T85;
  D T86;
  DWORD T87;
  D T88;
  D T89_0;
  D T90;
  DBCHR T91;
  D T92;
  D T93;
  D T94;
  DWORD T95;
  DWORD T96;
  D T97;
  D T98;
  D T99;
  DWORD T100;
  D T101;
  D T102;
  D T103;
  D T104;
  D T105;
  D T106;
  D T107;
  D T108;
  DWORD T109;
  D T110;
  D T111;
  DWORD T112;
  DWORD T113;
  D T114;
  DWORD indexF115;
  DWORD big_keyF116;
  DWORD pat_keyF117;
  DWORD countF118;
  DWORD T119;
  D T120;
  D T121_0;
  D T122;
  DBCHR T123;
  D T124;
  D T125;
  D T126;
  D T127_0;
  D T128;
  DBCHR T129;
  D T130;
  D T131;
  D T132;
  DWORD T133;
  DWORD T134;
  D T135;
  DWORD indexF136;
  DWORD big_keyF137;
  DWORD pat_keyF138;
  DWORD countF139;
  DWORD T140;
  D T141;
  DWORD indexF142T, indexF142;
  DWORD big_keyF143T, big_keyF143;
  DSINT pat_keyF144T, pat_keyF144;
  DWORD countF145T, countF145;
  D T146;
  D T147;
  D T148;
  DWORD T149;
  DWORD T150;
  DWORD T151;
  D T152;
  D T153_0;
  D T154;
  DBCHR T155;
  D T156;
  D T157;
  D T158;
  D T159_0;
  D T160;
  D T161;
  D T162;
  DWORD T163;
  DWORD T164;
  D T165;
  D T166_0;
  D T167;
  DBCHR T168;
  D T169;
  DBCHR T170;
  DWORD T171;
  DWORD T172;
  D T173;
  DSINT T174;
  D T175;
  DWORD T176;
  D T177;
  D T178;
  D T179;
  D T180;
  DWORD T181;
  DWORD T182;
  D T183;
  D T184_0;
  DWORD T185;
  D T186;
  DBCHR T187;
  D T188;
  DBCHR T189;
  D T190;
  DWORD T191;
  DWORD T192;
  DWORD T193;
  D T194;
  D T195;
  D T196;
  D T197;
  D T198;
  D T199;
  DWORD T200;
  DWORD T201;
  D T202;
  DWORD T203;
  D T204_0;
  D T205;
  DBCHR T206;
  D T207;
  D T208;
  D T209;
  D T210_0;
  D T211;
  DBCHR T212;
  D T213;
  D T214;
  D T215;
  D T216;
  DWORD T217;
  DWORD T218;
  D T219;
  DWORD indexF220T, indexF220;
  DWORD big_keyF221T, big_keyF221;
  DWORD pat_keyF222T, pat_keyF222;
  DWORD countF223T, countF223;
  DWORD T224;
  DWORD T225;
  D T226;
  D T227;
  D indexF228;
  D T229;
  DWORD countF230;
  D T231;
  D indexF232;
  DWORD countF233;
  DWORD T234;
  DWORD T235;
  D T236;
  DSINT T237;
  D T238;
  D T239;
  D T240;
  D indexF241T, indexF241;
  DWORD countF242T, countF242;
  D T243;
  DWORD T244;
  D T245;
  DWORD T246;
  D T247;

  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:12
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:12
  primitive_type_check(test_, &KLfunctionGVKd);
  testF6 = test_;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:12
  primitive_type_check(count_, &KLintegerGVKd);
  countF7 = count_;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:12
  countF27 = countF7;
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:16
  T33 = SLOT_VALUE_INITD(big_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:17
  T34 = SLOT_VALUE_INITD(pat_, 0);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
  T35 = primitive_idQ(T34,(D) 1);
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
  if (T35 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:21
    T32 = countF27;
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:21
    T36 = primitive_cast_integer_as_raw(T32);
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:21
    T37 = primitive_machine_word_subtract_signal_overflow(T36,4);
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:21
    T38 = primitive_cast_raw_as_integer(T37);
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:21
    T39_0 = T38;
    T26_0 = T39_0;
  } else {
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
    T40 = primitive_idQ(T34,(D) 5);
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
    if (T40 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
      T42 = primitive_cast_integer_as_raw(T34);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
      T43 = primitive_machine_word_unsigned_less_thanQ(1,T42);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
      if (T43 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
        T44 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(pat_, 1, 1);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
        T45 = primitive_raw_as_byte_character(T44);
        T47 = T45;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
        T41_0 = Kelement_range_errorVKeI(pat_, (D) 1);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
        T46 = T41_0;
        T47 = T46;
      }
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:23
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
      keyF8T = 1;
    L0: ;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
        keyF8 = keyF8T;
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
        T50 = primitive_cast_raw_as_integer(keyF8);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
        T48 = primitive_cast_integer_as_raw(T33);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
        T49 = primitive_machine_word_less_thanQ(keyF8,T48);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
        if (T49 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
          T52 = primitive_machine_word_unsigned_less_thanQ(keyF8,T48);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
          if (T52 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T53 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(big_, 1, keyF8);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T54 = primitive_raw_as_byte_character(T53);
            T56 = T54;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T51_0 = Kelement_range_errorVKeI(big_, T50);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T55 = T51_0;
            T56 = T55;
          }
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
          T9 = CALL2(testF6, T56, T47);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
          if (T9 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T31 = countF27;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T57 = primitive_cast_integer_as_raw(T31);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T58 = primitive_machine_word_subtract_signal_overflow(T57,4);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T59 = primitive_cast_raw_as_integer(T58);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            countF27 = T59;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T61 = primitive_machine_word_less_thanQ(1,T58);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
            T60 = primitive_not(T61);
            T10 = T60;
          } else {
            T10 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:25
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
          if (T10 == &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
            T62 = primitive_machine_word_add_signal_overflow(keyF8,4);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
            keyF8T = T62;
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
        }
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:27
        if (T49 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:27
          T11_0 = T50;
          T13_0 = T11_0;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:27
          T12_0 = &KPfalseVKi;
          T13_0 = T12_0;
        }
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:27
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:24
      T25_0 = T13_0;
    } else {
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
      T63 = primitive_idQ(T34,(D) 9);
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
      if (T63 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
        T65 = primitive_cast_integer_as_raw(T34);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
        T66 = primitive_machine_word_unsigned_less_thanQ(1,T65);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
        if (T66 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
          T67 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(pat_, 1, 1);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
          T68 = primitive_raw_as_byte_character(T67);
          T70 = T68;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
          T64_0 = Kelement_range_errorVKeI(pat_, (D) 1);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
          T69 = T64_0;
          T70 = T69;
        }
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:30
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:31
        T72 = primitive_machine_word_unsigned_less_thanQ(5,T65);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:31
        if (T72 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:31
          T73 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(pat_, 1, 5);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:31
          T74 = primitive_raw_as_byte_character(T73);
          T76 = T74;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:31
          T71_0 = Kelement_range_errorVKeI(pat_, (D) 5);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:31
          T75 = T71_0;
          T76 = T75;
        }
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:31
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
        T77 = primitive_cast_integer_as_raw(T33);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
        T78 = primitive_machine_word_subtract_signal_overflow(T77,4);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
        keyF14T = 1;
      L1: ;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
          keyF14 = keyF14T;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
          T80 = primitive_cast_raw_as_integer(keyF14);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
          T79 = primitive_machine_word_less_thanQ(keyF14,T78);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
          if (T79 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            T82 = primitive_machine_word_unsigned_less_thanQ(keyF14,T77);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            if (T82 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T83 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(big_, 1, keyF14);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T84 = primitive_raw_as_byte_character(T83);
              T86 = T84;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T81_0 = Kelement_range_errorVKeI(big_, T80);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T85 = T81_0;
              T86 = T85;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            T15 = CALL2(testF6, T86, T70);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            if (T15 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T87 = primitive_machine_word_add_signal_overflow(keyF14,4);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T88 = primitive_cast_raw_as_integer(T87);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T90 = primitive_machine_word_unsigned_less_thanQ(T87,T77);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              if (T90 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
                T91 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(big_, 1, T87);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
                T92 = primitive_raw_as_byte_character(T91);
                T94 = T92;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
                T89_0 = Kelement_range_errorVKeI(big_, T88);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
                T93 = T89_0;
                T94 = T93;
              }
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
              T16 = CALL2(testF6, T94, T76);
              T17 = T16;
            } else {
              T17 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            if (T17 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:34
              T30 = countF27;
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:34
              T95 = primitive_cast_integer_as_raw(T30);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:34
              T96 = primitive_machine_word_subtract_signal_overflow(T95,4);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:34
              T97 = primitive_cast_raw_as_integer(T96);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:34
              countF27 = T97;
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:34
              T99 = primitive_machine_word_less_thanQ(1,T96);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:34
              T98 = primitive_not(T99);
              T18 = T98;
            } else {
              T18 = &KPfalseVKi;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:33
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
            if (T18 == &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
              T100 = primitive_machine_word_add_signal_overflow(keyF14,4);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
              keyF14T = T100;
              goto L1;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
          }
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:36
          if (T79 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:36
            T19_0 = T80;
            T21_0 = T19_0;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:36
            T20_0 = &KPfalseVKi;
            T21_0 = T20_0;
          }
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:36
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:32
        T24_0 = T21_0;
      } else {
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:39
        CONGRUENT_CALL_PROLOG(&KEVKd, 2);
        T101 = CONGRUENT_CALL2(testF6, &KEEVKd);
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:39
        if (T101 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:60
          T150 = primitive_cast_integer_as_raw(T34);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:60
          T151 = primitive_machine_word_subtract_signal_overflow(T150,4);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:60
          T152 = primitive_cast_raw_as_integer(T151);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:61
          T154 = primitive_machine_word_unsigned_less_thanQ(T151,T150);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:61
          if (T154 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:61
            T155 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(pat_, 1, T151);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:61
            T156 = primitive_raw_as_byte_character(T155);
            T158 = T156;
          } else {
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:61
            T153_0 = Kelement_range_errorVKeI(pat_, T152);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:61
            T157 = T153_0;
            T158 = T157;
          }
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:61
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:63
          T159_0 = KmakeVKdMM23I(&KLsimple_object_vectorGVKd, &KPempty_vectorVKi, T34, (D) 1025);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:63
          T160 = T159_0;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
          i_T = 1;
        L2: ;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
            i_ = i_T;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
            T162 = primitive_cast_raw_as_integer(i_);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
            T161 = primitive_machine_word_less_thanQ(i_,T151);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
            if (T161 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T163 = primitive_machine_word_logxor(i_,1);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T164 = primitive_machine_word_subtract_signal_overflow(T151,T163);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T165 = primitive_cast_raw_as_integer(T164);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T167 = primitive_machine_word_unsigned_less_thanQ(i_,T150);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              if (T167 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
                T168 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(pat_, 1, i_);
                T170 = T168;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
                T166_0 = Kelement_range_errorVKeI(pat_, T162);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
                T169 = T166_0;
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
                T174 = primitive_byte_character_as_raw(T169);
                T170 = T174;
              }
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T171 = primitive_machine_word_shift_left_signal_overflow(T170,2);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T172 = primitive_machine_word_logior(T171,1);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T173 = primitive_cast_raw_as_integer(T172);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              T175 = primitive_machine_word_unsigned_less_thanQ(T172,1025);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              if (T175 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
                REPEATED_D_SLOT_VALUE_TAGGED_SETTER(T165, T160, 1, T172);
              } else {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
                Kelement_range_errorVKeI(T160, T173);
              }
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:65
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
              T176 = primitive_machine_word_add_signal_overflow(i_,4);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
              i_T = T176;
              goto L2;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:64
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:94
          T28 = countF27;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:85
          T244 = primitive_cast_integer_as_raw(T28);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
          indexF241T = T152;
          countF242T = T244;
        L3: ;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
            indexF241 = indexF241T;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
            countF242 = countF242T;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:91
            indexF232 = indexF241;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:91
            countF233 = countF242;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
            indexF228 = indexF232;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
            T229 = indexF228;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
            countF230 = countF233;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:68
            T181 = primitive_cast_integer_as_raw(T229);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:68
            T182 = primitive_cast_integer_as_raw(T33);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:68
            T183 = primitive_machine_word_less_thanQ(T181,T182);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:68
            if (T183 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:71
              T185 = primitive_cast_integer_as_raw(T229);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:71
              T186 = primitive_machine_word_unsigned_less_thanQ(T185,T182);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:71
              if (T186 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:71
                T187 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(big_, 1, T185);
                T189 = T187;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:71
                T184_0 = Kelement_range_errorVKeI(big_, T229);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:71
                T188 = T184_0;
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
                T237 = primitive_byte_character_as_raw(T188);
                T189 = T237;
              }
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:71
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
              T238 = primitive_raw_as_byte_character(T189);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:72
              T190 = primitive_idQ(T238,T158);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:72
              if (T190 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:73
                T191 = primitive_cast_integer_as_raw(T229);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:73
                T192 = primitive_machine_word_logxor(T151,1);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:73
                T193 = primitive_machine_word_subtract_signal_overflow(T191,T192);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                T246 = primitive_cast_integer_as_raw(T229);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                indexF220T = T193;
                big_keyF221T = T246;
                pat_keyF222T = T151;
                countF223T = countF230;
              L4: ;
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                  indexF220 = indexF220T;
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
                  T245 = primitive_cast_raw_as_integer(indexF220);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                  big_keyF221 = big_keyF221T;
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                  T247 = primitive_cast_raw_as_integer(big_keyF221);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                  pat_keyF222 = pat_keyF222T;
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:84
                  T243 = primitive_cast_raw_as_integer(pat_keyF222);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                  countF223 = countF223T;
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:84
                  T198 = primitive_machine_word_less_thanQ(pat_keyF222,1);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:83
                  if (T198 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:85
                    T199 = primitive_machine_word_equalQ(countF223,5);
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:85
                    if (T199 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:85
                      T194 = T245;
                      MV_SET_ELT(0, T245);
                      MV_SET_COUNT(1);
                      T195 = T194;
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
                      T200 = primitive_machine_word_logxor(T150,1);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
                      T201 = primitive_machine_word_add_signal_overflow(indexF220,T200);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
                      T202 = primitive_cast_raw_as_integer(T201);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
                      T203 = primitive_machine_word_subtract_signal_overflow(countF223,4);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
                      indexF241T = T202;
                      countF242T = T203;
                      goto L3;
                      T195 = T227;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:85
                    T197 = T195;
                  } else {
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                    T205 = primitive_machine_word_unsigned_less_thanQ(big_keyF221,T182);
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                    if (T205 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T206 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(big_, 1, big_keyF221);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T207 = primitive_raw_as_byte_character(T206);
                      T209 = T207;
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T204_0 = Kelement_range_errorVKeI(big_, T247);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T208 = T204_0;
                      T209 = T208;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                    T211 = primitive_machine_word_unsigned_less_thanQ(pat_keyF222,T150);
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                    if (T211 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T212 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(pat_, 1, pat_keyF222);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T213 = primitive_raw_as_byte_character(T212);
                      T215 = T213;
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T210_0 = Kelement_range_errorVKeI(pat_, T243);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                      T214 = T210_0;
                      T215 = T214;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:88
                    T216 = primitive_idQ(T209,T215);
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:83
                    if (T216 != &KPfalseVKi) {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                      T217 = primitive_machine_word_subtract_signal_overflow(big_keyF221,4);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                      T218 = primitive_machine_word_subtract_signal_overflow(pat_keyF222,4);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                      indexF220T = T193;
                      big_keyF221T = T217;
                      pat_keyF222T = T218;
                      countF223T = countF230;
                      goto L4;
                      T196 = T219;
                    } else {
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:91
                      T224 = primitive_machine_word_logxor(T150,1);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:91
                      T225 = primitive_machine_word_add_signal_overflow(indexF220,T224);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:91
                      T226 = primitive_cast_raw_as_integer(T225);
                      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:91
                      indexF241T = T226;
                      countF242T = countF223;
                      goto L3;
                      T196 = T231;
                    }
                    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:83
                    T197 = T196;
                  }
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:83
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:89
                T179 = T197;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
                T234 = primitive_machine_word_shift_left_signal_overflow(T189,2);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
                T235 = primitive_machine_word_logior(T234,1);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
                T236 = primitive_cast_raw_as_integer(T235);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
                T239 = KelementVKdMM11I(T160, T236, &KPempty_vectorVKi, &Kunsupplied_objectVKi);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
                CONGRUENT_CALL_PROLOG(&KAVKd, 2);
                T178 = CONGRUENT_CALL2(T229, T239);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:75
                indexF241T = T178;
                countF242T = countF230;
                goto L3;
                T179 = T240;
              }
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:72
              T180 = T179;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:69
              T177 = &KPfalseVKi;
              MV_SET_ELT(0, &KPfalseVKi);
              MV_SET_COUNT(1);
              T180 = T177;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:68
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:86
          T23_0 = T180;
        } else {
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:57
          T29 = countF27;
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:46
          T149 = primitive_cast_integer_as_raw(T29);
          // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
          indexF142T = 1;
          big_keyF143T = 1;
          pat_keyF144T = 1;
          countF145T = T149;
        L5: ;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:54
            indexF142 = indexF142T;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:54
            big_keyF143 = big_keyF143T;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:54
            pat_keyF144 = pat_keyF144T;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:54
            countF145 = countF145T;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:52
            indexF136 = indexF142;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:52
            big_keyF137 = big_keyF143;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:52
            pat_keyF138 = pat_keyF144;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:52
            countF139 = countF145;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
            indexF115 = indexF136;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:54
            T148 = primitive_cast_raw_as_integer(indexF115);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
            big_keyF116 = big_keyF137;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:49
            T147 = primitive_cast_raw_as_integer(big_keyF116);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
            pat_keyF117 = pat_keyF138;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:45
            T146 = primitive_cast_raw_as_integer(pat_keyF117);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
            countF118 = countF139;
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:45
            T109 = primitive_cast_integer_as_raw(T34);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:45
            T110 = primitive_machine_word_less_thanQ(pat_keyF117,T109);
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:44
            if (T110 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:49
              T119 = primitive_cast_integer_as_raw(T33);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:49
              T120 = primitive_machine_word_equalQ(big_keyF116,T119);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:44
              if (T120 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:50
                T104 = &KPfalseVKi;
                MV_SET_ELT(0, &KPfalseVKi);
                MV_SET_COUNT(1);
                T107 = T104;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                T122 = primitive_machine_word_unsigned_less_thanQ(big_keyF116,T119);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                if (T122 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T123 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(big_, 1, big_keyF116);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T124 = primitive_raw_as_byte_character(T123);
                  T126 = T124;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T121_0 = Kelement_range_errorVKeI(big_, T147);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T125 = T121_0;
                  T126 = T125;
                }
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                T128 = primitive_machine_word_unsigned_less_thanQ(pat_keyF117,T109);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                if (T128 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T129 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(pat_, 1, pat_keyF117);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T130 = primitive_raw_as_byte_character(T129);
                  T132 = T130;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T127_0 = Kelement_range_errorVKeI(pat_, T146);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                  T131 = T127_0;
                  T132 = T131;
                }
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:51
                T105 = CALL2(testF6, T126, T132);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:44
                if (T105 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:52
                  T133 = primitive_machine_word_add_signal_overflow(big_keyF116,4);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:52
                  T134 = primitive_machine_word_add_signal_overflow(pat_keyF117,4);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:52
                  indexF142T = indexF115;
                  big_keyF143T = T133;
                  pat_keyF144T = T134;
                  countF145T = countF118;
                  goto L5;
                  T106 = T135;
                } else {
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:54
                  T140 = primitive_machine_word_add_signal_overflow(indexF115,4);
                  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:54
                  indexF142T = T140;
                  big_keyF143T = T140;
                  pat_keyF144T = 1;
                  countF145T = countF118;
                  goto L5;
                  T106 = T141;
                }
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:44
                T107 = T106;
              }
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:44
              T108 = T107;
            } else {
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:46
              T111 = primitive_machine_word_equalQ(countF118,5);
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:46
              if (T111 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:46
                T102 = T148;
                MV_SET_ELT(0, T148);
                MV_SET_COUNT(1);
                T103 = T102;
              } else {
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
                T112 = primitive_machine_word_add_signal_overflow(indexF115,4);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
                T113 = primitive_machine_word_subtract_signal_overflow(countF118,4);
                // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
                indexF142T = T112;
                big_keyF143T = T112;
                pat_keyF144T = 1;
                countF145T = T113;
                goto L5;
                T103 = T114;
              }
              // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:46
              T108 = T103;
            }
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:44
            // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:47
          T23_0 = T108;
        }
        // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:39
        T24_0 = T23_0;
      }
      // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
      T25_0 = T24_0;
    }
    // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
    T26_0 = T25_0;
  }
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:19
  // /opt/opendylan-2013.1/sources/dylan/string-speed.dylan:12
  MV_SET_COUNT(1);
  return(T26_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_string_speed_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_string_speed_for_user () {
  return;
}


/* eof */
