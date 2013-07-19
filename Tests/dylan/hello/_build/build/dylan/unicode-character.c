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
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
} _KLunicode_characterGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D singleton_object_;
} _KLsingletonGVKd;

typedef struct {
  D wrapper;
} _KLbyte_characterGVKe;

typedef struct {
  D wrapper;
  D instanceQ_iep_;
  D limited_integer_min_;
  D limited_integer_max_;
} _KLlimited_integerGVKe;

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

typedef struct {
  D wrapper;
} _KLintegerGVKd;

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

#define  define__KLstandalone_domainGVKe(nrepeated) \
  typedef struct { \
    D wrapper; \
    D domain_library_; \
    D domain_next_; \
    D domain_number_required_; \
    D domain_type_[nrepeated+1]; \
  } _KLstandalone_domainGVKe_##nrepeated;
define__KLstandalone_domainGVKe(1);


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
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_50;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_characterG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLclassGVKd KLunicode_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLunicode_characterGVKeW;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D x_, D s_);
extern _KLclassGVKd KLbyte_characterGVKe;
extern _KLmm_wrapperGVKi_0 KLbyte_characterGVKeW;
extern _KLlimited_integerGVKe KLdouble_byteGVKe;
extern _KLclassGVKd KLlimited_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLlimited_integerGVKeW;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJcode_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLstandalone_domainGVKe_1 KmakeVKdRD_dylanRD_55;
extern _KLclassGVKd KLstandalone_domainGVKe;
extern _KLmm_wrapperGVKi_0 KLstandalone_domainGVKeW;

/* Defined object declarations */

extern _KLmethod_domainGVKe KasVKdRD_dylanRD_56;
extern _KLmethod_domainGVKe KmakeVKdRD_dylanRD_56;
extern _KLkeyword_methodGVKe KmakeVKdMM6;
D KmakeVKdMM6I (D class_, D Urest_, D code_);
extern _KLsimple_methodGVKe KasVKdMM10;
D KasVKdMM10I (D class_, D integer_);
extern _KLsimple_methodGVKe KasVKdMM11;
D KasVKdMM11I (D class_, D character_);
extern _KLsimple_methodGVKe KasVKdMM12;
D KasVKdMM12I (D type_, D character_);
extern _KLsimple_methodGVKe KasVKdMM19;
D KasVKdMM19I (D class_, D character_);
extern _KLsimple_methodGVKe KasVKdMM20;
D KasVKdMM20I (D class_, D character_);
extern _KLsimple_methodGVKe KasVKdMM21;
D KasVKdMM21I (D class_, D character_);
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_51;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_52;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_53;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_54;
extern _KLmethod_domainGVKe KasVKdRD_dylanRD_55;
static _KLsignatureAvaluesGVKi K21;
static _KLsimple_object_vectorGVKd_2 K22;
static _KLsingletonGVKd K23;
static _KLsignatureAvaluesGVKi K24;
static _KLsimple_object_vectorGVKd_2 K25;
static _KLsimple_object_vectorGVKd_1 K26;
static _KLsingletonGVKd K27;
static _KLsignatureAvaluesGVKi K28;
static _KLsimple_object_vectorGVKd_2 K29;
static _KLsimple_object_vectorGVKd_1 K30;
static _KLsingletonGVKd K31;
static _KLsignatureAvaluesGVKi K32;
static _KLsimple_object_vectorGVKd_2 K33;
static _KLsignatureAvaluesGVKi K34;
static _KLsimple_object_vectorGVKd_2 K35;
static _KLsingletonGVKd K36;
static _KLsignatureAvaluesGVKi K37;
static _KLsimple_object_vectorGVKd_2 K38;
static _KLkeyword_signatureAvaluesGVKi K39;
static _KLsimple_object_vectorGVKd_2 K40;
static _KLsimple_object_vectorGVKd_1 K41;
static _KLsimple_object_vectorGVKd_1 K42;

/* Indirection variables */


/* Variables */


/* Objects */

_KLmethod_domainGVKe KasVKdRD_dylanRD_56 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_55,
  &KasVKdMM19
};

_KLmethod_domainGVKe KmakeVKdRD_dylanRD_56 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KmakeVKdRD_dylanRD_55,
  &KmakeVKdMM6
};

_KLkeyword_methodGVKe KmakeVKdMM6 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K39,
  &key_mep_3,
  &KmakeVKdMM6I,
  &K40
};

_KLsimple_methodGVKe KasVKdMM10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K37,
  &KasVKdMM10I
};

_KLsimple_methodGVKe KasVKdMM11 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K34,
  &KasVKdMM11I
};

_KLsimple_methodGVKe KasVKdMM12 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K32,
  &KasVKdMM12I
};

_KLsimple_methodGVKe KasVKdMM19 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K28,
  &KasVKdMM19I
};

_KLsimple_methodGVKe KasVKdMM20 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K24,
  &KasVKdMM20I
};

_KLsimple_methodGVKe KasVKdMM21 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_2,
  &K21,
  &KasVKdMM21I
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_51 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_50,
  &KasVKdMM21
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_52 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_51,
  &KasVKdMM20
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_53 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_52,
  &KasVKdMM10
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_54 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_53,
  &KasVKdMM11
};

_KLmethod_domainGVKe KasVKdRD_dylanRD_55 = {
  &KLmethod_domainGVKeW /* wrapper */,
  &Kdylan_libraryYdylan_userVdylan,
  &KasVKdRD_dylanRD_54,
  &KasVKdMM12
};

static _KLsignatureAvaluesGVKi K21 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K22,
  &KDsignature_Lbyte_characterG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K23,
  &KLunicode_characterGVKe
};

static _KLsingletonGVKd K23 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLbyte_characterGVKe
};

static _KLsignatureAvaluesGVKi K24 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K25,
  &K26
};

static _KLsimple_object_vectorGVKd_2 K25 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K27,
  &KLbyte_characterGVKe
};

static _KLsimple_object_vectorGVKd_1 K26 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLunicode_characterGVKe
};

static _KLsingletonGVKd K27 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLunicode_characterGVKe
};

static _KLsignatureAvaluesGVKi K28 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K29,
  &K30
};

static _KLsimple_object_vectorGVKd_2 K29 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K31,
  &KLunicode_characterGVKe
};

static _KLsimple_object_vectorGVKd_1 K30 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KLdouble_byteGVKe
};

static _KLsingletonGVKd K31 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLabstract_integerGVKe
};

static _KLsignatureAvaluesGVKi K32 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K33,
  &K30
};

static _KLsimple_object_vectorGVKd_2 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLlimited_integerGVKe,
  &KLunicode_characterGVKe
};

static _KLsignatureAvaluesGVKi K34 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K35,
  &KDsignature_LintegerG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K35 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K36,
  &KLunicode_characterGVKe
};

static _KLsingletonGVKd K36 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLintegerGVKd
};

static _KLsignatureAvaluesGVKi K37 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555465,
  &K38,
  &K26
};

static _KLsimple_object_vectorGVKd_2 K38 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &K27,
  &KLintegerGVKd
};

static _KLkeyword_signatureAvaluesGVKi K39 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K41,
  &K42,
  &K30,
  &K26
};

static _KLsimple_object_vectorGVKd_2 K40 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJcode_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K41 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K27
};

static _KLsimple_object_vectorGVKd_1 K42 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJcode_
};

/* Code */

D KmakeVKdMM6I (D class_, D Urest_, D code_) {
  D codeF4;
  D T5;
  D T6_0;
  DWORD T7;
  DWORD T8;

  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  primitive_type_check(code_, &KLdouble_byteGVKe);
  codeF4 = code_;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T8 = primitive_cast_integer_as_raw(codeF4);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T7 = primitive_machine_word_shift_right(T8,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T5 = primitive_raw_as_unicode_character(T7);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T6_0 = T5;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  MV_SET_COUNT(1);
  return(T6_0);
}

D KasVKdMM10I (D class_, D integer_) {
  D T3;
  D T4_0;
  DWORD T5;
  DWORD T6;

  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T6 = primitive_cast_integer_as_raw(integer_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T5 = primitive_machine_word_shift_right(T6,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T3 = primitive_raw_as_unicode_character(T5);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  MV_SET_COUNT(1);
  return(T4_0);
}

D KasVKdMM11I (D class_, D character_) {
  DSINT T3;
  DWORD T4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T3 = primitive_unicode_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T4 = primitive_machine_word_shift_left_signal_overflow(T3,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T5 = primitive_machine_word_logior(T4,1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T6 = primitive_cast_raw_as_integer(T5);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  MV_SET_COUNT(1);
  return(T7_0);
}

D KasVKdMM12I (D type_, D character_) {
  D T3_0;
  DSINT T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T4 = primitive_unicode_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T5 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM19I (D class_, D character_) {
  D T3_0;
  DSINT T4;
  DWORD T5;
  DWORD T6;
  D T7;
  D T8_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T4 = primitive_unicode_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T5 = primitive_machine_word_shift_left_signal_overflow(T4,2);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T6 = primitive_machine_word_logior(T5,1);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T7 = primitive_cast_raw_as_integer(T6);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T8_0 = T7;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  T3_0 = T8_0;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:9
  MV_SET_COUNT(1);
  return(T3_0);
}

D KasVKdMM20I (D class_, D character_) {
  DSINT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:13
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:16
  T3 = primitive_byte_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:16
  T4 = primitive_raw_as_unicode_character(T3);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:16
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:13
  MV_SET_COUNT(1);
  return(T5_0);
}

D KasVKdMM21I (D class_, D character_) {
  DSINT T3;
  D T4;
  D T5_0;

  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:19
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:22
  T3 = primitive_unicode_character_as_raw(character_);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:22
  T4 = primitive_raw_as_byte_character(T3);
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:22
  T5_0 = T4;
  // /opt/opendylan-2013.1/sources/dylan/unicode-character.dylan:19
  MV_SET_COUNT(1);
  return(T5_0);
}


/* SYSTEM INIT CODE */

void _Init_dylan__X_unicode_character_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_dylan__X_unicode_character_for_user () {
  return;
}


/* eof */
