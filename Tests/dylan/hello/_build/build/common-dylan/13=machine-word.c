#include "run-time.h"

/* Typedefs for referenced classes */

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
} _KLbooleanGVKd;

typedef struct {
  D wrapper;
} _KLobjectGVKd;

typedef struct {
  D wrapper;
} _KLunboundGVKe;

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
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);

typedef struct {
  D wrapper;
} _KLabstract_integerGVKe;

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
  D singleton_object_;
} _KLsingletonGVKd;

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

D KPadd_a_methodVKnI (D, D, D, D, D, D);
extern _KLincremental_generic_functionGVKe KmakeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLlibraryGVKe Kcommon_dylan_libraryYdylan_userVcommon_dylan;
extern _KLclassGVKd KLlibraryGVKe;
extern _KLmm_wrapperGVKi_0 KLlibraryGVKeW;
extern _KLbooleanGVKd KPfalseVKi;
extern _KLclassGVKd KLbooleanGVKd;
extern _KLmm_wrapperGVKi_0 KLbooleanGVKdW;
extern _KLbooleanGVKd KPtrueVKi;
extern _KLincremental_generic_functionGVKe KoddQVKd;
extern _KLincremental_generic_functionGVKe KevenQVKd;
extern _KLincremental_generic_functionGVKe KzeroQVKd;
extern _KLincremental_generic_functionGVKe KpositiveQVKd;
extern _KLincremental_generic_functionGVKe KnegativeQVKd;
extern _KLclassGVKd KLobjectGVKd;
extern _KLmm_wrapperGVKi_0 KLobjectGVKdW;
extern _KLunboundGVKe KPunboundVKi;
extern _KLclassGVKd KLunboundGVKe;
extern _KLmm_wrapperGVKi_0 KLunboundGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lmachine_wordG_typesVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LbooleanG_typesVKi;
extern _KLclassGVKd KLabstract_integerGVKe;
extern _KLmm_wrapperGVKi_0 KLabstract_integerGVKeW;
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJvalue_;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLkeyword_signatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureAvaluesGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Labstract_integerG_typesVKi;
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLvalue_classGVKi KLmachine_wordGVKe;
extern _KLclassGVKd KLvalue_classGVKi;
extern _KLmm_wrapperGVKi_0 KLvalue_classGVKiW;
extern _KLmm_wrapperGVKi_1 KLmachine_wordGVKeW;

/* Defined object declarations */

extern _KLkeyword_methodGVKe KmakeVKdMcommon_dylanM2;
D KmakeVKdMcommon_dylanM2I (D t_, D Urest_, D value_);
extern _KLsimple_methodGVKe KoddQVKdMcommon_dylanM0;
D KoddQVKdMcommon_dylanM0I (D m_);
extern _KLsimple_methodGVKe KevenQVKdMcommon_dylanM0;
D KevenQVKdMcommon_dylanM0I (D m_);
extern _KLsimple_methodGVKe KzeroQVKdMcommon_dylanM0;
D KzeroQVKdMcommon_dylanM0I (D m_);
extern _KLsimple_methodGVKe KpositiveQVKdMcommon_dylanM0;
D KpositiveQVKdMcommon_dylanM0I (D m_);
extern _KLsimple_methodGVKe KnegativeQVKdMcommon_dylanM0;
D KnegativeQVKdMcommon_dylanM0I (D m_);
static _KLsignatureAvaluesGVKi K18;
static _KLkeyword_signatureAvaluesGVKi K19;
static _KLsimple_object_vectorGVKd_2 K20;
static _KLsimple_object_vectorGVKd_1 K21;
static _KLsimple_object_vectorGVKd_1 K22;
static _KLsingletonGVKd K23;

/* Indirection variables */


/* Variables */


/* Objects */

_KLkeyword_methodGVKe KmakeVKdMcommon_dylanM2 = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_3,
  &K19,
  &key_mep_3,
  &KmakeVKdMcommon_dylanM2I,
  &K20
};

_KLsimple_methodGVKe KoddQVKdMcommon_dylanM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K18,
  &KoddQVKdMcommon_dylanM0I
};

_KLsimple_methodGVKe KevenQVKdMcommon_dylanM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K18,
  &KevenQVKdMcommon_dylanM0I
};

_KLsimple_methodGVKe KzeroQVKdMcommon_dylanM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K18,
  &KzeroQVKdMcommon_dylanM0I
};

_KLsimple_methodGVKe KpositiveQVKdMcommon_dylanM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K18,
  &KpositiveQVKdMcommon_dylanM0I
};

_KLsimple_methodGVKe KnegativeQVKdMcommon_dylanM0 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K18,
  &KnegativeQVKdMcommon_dylanM0I
};

static _KLsignatureAvaluesGVKi K18 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555461,
  &KDsignature_Lmachine_wordG_typesVKi,
  &KDsignature_LbooleanG_typesVKi
};

static _KLkeyword_signatureAvaluesGVKi K19 = {
  &KLkeyword_signatureAvaluesGVKiW /* wrapper */,
  (D) 33817605,
  &K21,
  &K22,
  &KDsignature_Labstract_integerG_typesVKi,
  &KDsignature_Lmachine_wordG_typesVKi
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJvalue_,
  &KPfalseVKi
};

static _KLsimple_object_vectorGVKd_1 K21 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K23
};

static _KLsimple_object_vectorGVKd_1 K22 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &KJvalue_
};

static _KLsingletonGVKd K23 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KLmachine_wordGVKe
};

/* Code */

D KmakeVKdMcommon_dylanM2I (D t_, D Urest_, D value_) {
  D valueF4;
  DWORD T5;
  D T6;
  D T7_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:10
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:10
  primitive_type_check(value_, &KLabstract_integerGVKe);
  valueF4 = value_;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:14
  T5 = primitive_unwrap_abstract_integer(valueF4);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:14
  T6 = primitive_wrap_machine_word(T5);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:14
  T7_0 = T6;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:10
  MV_SET_COUNT(1);
  return(T7_0);
}

D KoddQVKdMcommon_dylanM0I (D m_) {
  DWORD raw_x_;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:20
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:22
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:22
  T3 = primitive_machine_word_logbitQ(0,raw_x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:22
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:20
  MV_SET_COUNT(1);
  return(T4_0);
}

D KevenQVKdMcommon_dylanM0I (D m_) {
  DWORD raw_x_;
  D T3;
  D T4_0;
  D T5;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:25
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:27
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:27
  T3 = primitive_machine_word_logbitQ(0,raw_x_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:27
  T5 = primitive_not(T3);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:27
  T4_0 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:25
  MV_SET_COUNT(1);
  return(T4_0);
}

D KzeroQVKdMcommon_dylanM0I (D m_) {
  DWORD raw_x_;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:33
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:35
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:35
  T3 = primitive_machine_word_equalQ(raw_x_,0);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:35
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:33
  MV_SET_COUNT(1);
  return(T4_0);
}

D KpositiveQVKdMcommon_dylanM0I (D m_) {
  DWORD raw_y_;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:38
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:40
  raw_y_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:40
  T3 = primitive_machine_word_less_thanQ(0,raw_y_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:40
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:38
  MV_SET_COUNT(1);
  return(T4_0);
}

D KnegativeQVKdMcommon_dylanM0I (D m_) {
  DWORD raw_x_;
  D T3;
  D T4_0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:43
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:45
  raw_x_ = primitive_unwrap_machine_word(m_);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:45
  T3 = primitive_machine_word_less_thanQ(raw_x_,0);
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:45
  T4_0 = T3;
  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:43
  MV_SET_COUNT(1);
  return(T4_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_13Emachine_word_for_system () {
  extern D KPresolve_symbolVKiI(D);
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_13Emachine_word_for_user () {
{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:10
  T0 = KPadd_a_methodVKnI(&KmakeVKd, &KmakeVKdMcommon_dylanM2, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I2;
}
I2:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:20
  T0 = KPadd_a_methodVKnI(&KoddQVKd, &KoddQVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I5;
}
I5:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:25
  T0 = KPadd_a_methodVKnI(&KevenQVKd, &KevenQVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I8;
}
I8:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:33
  T0 = KPadd_a_methodVKnI(&KzeroQVKd, &KzeroQVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I11;
}
I11:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:38
  T0 = KPadd_a_methodVKnI(&KpositiveQVKd, &KpositiveQVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I14;
}
I14:

{
  D T0;

  // /opt/opendylan-2013.1/sources/common-dylan/machine-words/machine-word.dylan:43
  T0 = KPadd_a_methodVKnI(&KnegativeQVKd, &KnegativeQVKdMcommon_dylanM0, &Kcommon_dylan_libraryYdylan_userVcommon_dylan, &KPfalseVKi, &KPtrueVKi, &KPtrueVKi);
  goto I17;
}
I17:

  return;
}


/* eof */
