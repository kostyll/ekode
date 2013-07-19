#include "run-time.h"

/* Typedefs for referenced classes */

#define  define__KLbyte_stringGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    char string_element_[nrepeated+1]; \
  } _KLbyte_stringGVKd_##nrepeated;
define__KLbyte_stringGVKd(4);
define__KLbyte_stringGVKd(8);
define__KLbyte_stringGVKd(6);
define__KLbyte_stringGVKd(15);
define__KLbyte_stringGVKd(14);
define__KLbyte_stringGVKd(0);

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

#define  define__KLsimple_object_vectorGVKd(nrepeated) \
  typedef struct { \
    D wrapper; \
    D size_; \
    D vector_element_[nrepeated+1]; \
  } _KLsimple_object_vectorGVKd_##nrepeated;
define__KLsimple_object_vectorGVKd(3);
define__KLsimple_object_vectorGVKd(4);
define__KLsimple_object_vectorGVKd(1);
define__KLsimple_object_vectorGVKd(2);
define__KLsimple_object_vectorGVKd(16);
define__KLsimple_object_vectorGVKd(0);

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLempty_listGVKd;

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

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
} _KLsignatureGVKe;

typedef struct {
  D wrapper;
  D symbol_name_;
} _KLsymbolGVKd;

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
} _KLkeyword_methodGVKe;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_keys_;
  D signature_key_types_;
} _KLkeyword_signatureGVKe;

typedef struct {
  D wrapper;
  D stretchy_representation_;
} _KLstretchy_object_vectorGVKe;

typedef struct {
  D wrapper;
  D head_;
  D tail_;
} _KLpairGVKd;

#define  define__KLsimple_closure_methodGVKi(nrepeated) \
  typedef struct { \
    D wrapper; \
    D xep_; \
    D function_signature_; \
    D mep_; \
    D environment_size_; \
    D environment_element_[nrepeated+1]; \
  } _KLsimple_closure_methodGVKi_##nrepeated;
define__KLsimple_closure_methodGVKi(0);

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
} _KLsignatureAvaluesGVKi;

typedef struct {
  D wrapper;
  D signature_properties_;
  D signature_required_;
  D signature_values_;
  D signature_rest_value_;
} _KLsignatureAvaluesArest_valueGVKi;

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

D KmakeVKdMM33I (D, D, D, D);
extern _KLclassGVKd KLbyte_stringGVKd;
extern _KLclassGVKd KLclassGVKd;
extern _KLmm_wrapperGVKi_0 KLclassGVKdW;
extern _KLclassGVKd KLmm_wrapperGVKi;
extern _KLmm_wrapperGVKi_1 KLmm_wrapperGVKiW;
extern _KLmm_wrapperGVKi_0 KLbyte_stringGVKdW;
extern _KLsimple_object_vectorGVKd_0 KPempty_vectorVKi;
extern _KLclassGVKd KLsimple_object_vectorGVKd;
extern _KLmm_wrapperGVKi_0 KLsimple_object_vectorGVKdW;
extern _KLempty_listGVKd KPempty_listVKi;
extern _KLclassGVKd KLempty_listGVKd;
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
extern long time (void*);
D Kelement_range_errorVKeI (D, D);
extern int write (int, DBSTR, unsigned long);
extern int fsync (int);
extern _KLclassGVKd KLintegerGVKd;
extern _KLmm_wrapperGVKi_0 KLintegerGVKdW;
extern _KLincremental_generic_functionGVKe KsizeVKd;
extern _KLfunction_classGVKi KLincremental_generic_functionGVKe;
extern _KLclassGVKd KLfunction_classGVKi;
extern _KLmm_wrapperGVKi_0 KLfunction_classGVKiW;
extern _KLmm_wrapperGVKi_0 KLincremental_generic_functionGVKeW;
extern _KLfunction_classGVKi KLsimple_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLsimple_methodGVKeW;
extern _KLclassGVKd KLsignatureGVKe;
extern _KLmm_wrapperGVKi_0 KLsignatureGVKeW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_LintegerG_typesVKi;
extern _KLclassGVKd KLsymbolGVKd;
extern _KLmm_wrapperGVKi_0 KLsymbolGVKdW;
extern _KLclassGVKd KLunionGVKe;
extern _KLmm_wrapperGVKi_0 KLunionGVKeW;
D Kunion_instanceQVKiI (D, D);
extern _KLclassGVKd KLsingletonGVKd;
extern _KLmm_wrapperGVKi_0 KLsingletonGVKdW;
D Ksingleton_pointer_idQ_instanceQVKiI (D, D);
extern _KLfunction_classGVKi KLkeyword_methodGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_methodGVKeW;
extern _KLsymbolGVKd KJend_;
extern _KLclassGVKd KLkeyword_signatureGVKe;
extern _KLmm_wrapperGVKi_0 KLkeyword_signatureGVKeW;
extern _KLsimple_object_vectorGVKd_2 KDsignature_LstringG_typesVKi;
extern int write (int, DBSTR, unsigned long);
extern int fsync (int);
D Kformat_to_stringYcommon_extensionsVcommon_dylanI (D format_string_, D format_arguments_);
D KLstretchy_object_vectorGZ32ZconstructorVKiMM0I (D, D);
extern _KLclassGVKd KLstretchy_object_vectorGVKe;
extern _KLmm_wrapperGVKi_0 KLstretchy_object_vectorGVKeW;
extern _KLincremental_generic_functionGVKe KaddXVKd;
extern _KLincremental_generic_functionGVKe KreverseXVKd;
D KapplyVKdI (D, D);
extern _KLsimple_methodGVKe KvaluesVKd;
D Ksize_setterVKdMM1I (D, D);
D KaddXVKdMM3I (D, D);
extern _KLincremental_generic_functionGVKe KEVKd;
D Kconcatenate_asVKdMM1I (D, D, D);
extern _KLclassGVKd KLpairGVKd;
extern _KLmm_wrapperGVKi_0 KLpairGVKdW;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM0;
extern _KLfunction_classGVKi KLsimple_closure_methodGVKi;
extern _KLmm_wrapperGVKi_0 KLsimple_closure_methodGVKiW;
extern _KLclassGVKd KLsignatureAvaluesGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesGVKiW;
extern _KLclassGVKd KLsignatureAvaluesArest_valueGVKi;
extern _KLmm_wrapperGVKi_0 KLsignatureAvaluesArest_valueGVKiW;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lbyte_stringG_typesVKi;
extern int getpid ();
extern int open (DBSTR, int, int);
extern int read (int, DBSTR, unsigned long);
extern int close (int);
extern int getpid ();
extern int readlink (DBSTR, DBSTR, unsigned long);
D Kinteger_to_stringYcommon_extensionsVcommon_dylanI (D integer_, D Urest_, D base_, D string_size_, D fill_);
D Kconcatenate_asVKdMM3I (D, D, D);
extern _KLbyte_stringGVKd_0 KPempty_stringVKi;
D Kcopy_sequenceVKdMM3I (D, D, D, D);
D KpositionYcommon_extensionsVcommon_dylanMM3I (D, D, D, D, D, D, D, D);
D Kcopy_sequenceVKdMM1I (D, D, D, D);
extern _KLsealed_generic_functionGVKe Kunsupplied_objectVKi;
extern _KLclassGVKd KLsealed_generic_functionGVKe;
extern _KLmm_wrapperGVKi_0 KLsealed_generic_functionGVKeW;
extern _KLsimple_methodGVKe KvectorVKd;
extern _KLsimple_methodGVKe Kconcatenate_asVKdMM1;
extern _KLsimple_object_vectorGVKd_16 KDsignature_Lsimple_object_vectorG_typesVKi;
extern int getpid ();
extern int open (DBSTR, int, int);
extern int read (int, DBSTR, unsigned long);
extern int close (int);
extern int getpid ();
extern int readlink (DBSTR, DBSTR, unsigned long);
extern int getpid ();
extern int open (DBSTR, int, int);
extern int read (int, DBSTR, unsigned long);
extern int close (int);
extern int getpid ();
extern int readlink (DBSTR, DBSTR, unsigned long);

/* Defined object declarations */

D Kformat_outYsimple_ioVcommon_dylanI (D, D);
extern _KLkeyword_methodGVKe Kwrite_consoleYcommon_dylan_internalsVcommon_dylan;
D Kwrite_consoleYcommon_dylan_internalsVcommon_dylanI (D string_, D Urest_, D Uend_, D stream_);
D Kdefault_random_seedYcommon_dylan_internalsVcommon_dylanI ();
static _KLunionGVKe K5;
static _KLsymbolGVKd KJstandard_output_;
static _KLsymbolGVKd KJstandard_error_;
static _KLsimple_methodGVKe Kinteger_as_rawF10;
static D Kinteger_as_rawF10I (D x_);
static _KLsignatureGVKe K11;
static _KLbyte_stringGVKd_14 K12;
static _KLbyte_stringGVKd_15 K13;
static _KLsingletonGVKd K14;
static _KLsingletonGVKd K15;
static _KLkeyword_signatureGVKe K16;
static _KLsimple_object_vectorGVKd_4 K17;
static _KLsymbolGVKd KJstream_;
static _KLbyte_stringGVKd_6 K19;
static _KLsimple_object_vectorGVKd_2 K20;
static _KLsimple_object_vectorGVKd_2 K21;
static D Kinteger_as_rawF23I (D x_);
extern _KLsimple_methodGVKe Ktokenize_command_lineYcommon_extensionsVcommon_dylan;
D Ktokenize_command_lineYcommon_extensionsVcommon_dylanI (D);
static _KLsimple_closure_methodGVKi_0 Knext_tokenF28;
static D Knext_tokenF28I (D, D, D);
static _KLpairGVKd K29;
static _KLunionGVKe K30;
static _KLsingletonGVKd K31;
static _KLsignatureAvaluesGVKi K32;
static _KLsimple_object_vectorGVKd_3 K33;
static _KLsimple_object_vectorGVKd_1 K34;
static _KLsignatureAvaluesArest_valueGVKi K35;
extern _KLsimple_methodGVKe Kapplication_argumentsYcommon_extensionsVcommon_dylan;
D Kapplication_argumentsYcommon_extensionsVcommon_dylanI ();
static _KLbyte_stringGVKd_8 K38;
static _KLbyte_stringGVKd_6 K39;
static _KLpairGVKd K40;
static _KLbyte_stringGVKd_4 K41;
static _KLsignatureAvaluesGVKi K42;
extern _KLsimple_methodGVKe Kapplication_filenameYcommon_extensionsVcommon_dylan;
D Kapplication_filenameYcommon_extensionsVcommon_dylanI ();
static _KLsignatureAvaluesGVKi K45;
extern _KLsimple_methodGVKe Kapplication_nameYcommon_extensionsVcommon_dylan;
D Kapplication_nameYcommon_extensionsVcommon_dylanI ();
static _KLsignatureAvaluesGVKi K48;
extern _KLsimple_methodGVKe Kformat_outYsimple_ioVcommon_dylan;
static _KLsignatureGVKe K50;

/* Indirection variables */

static D IKJstandard_output_ = &KJstandard_output_;
static D IKJstandard_error_ = &KJstandard_error_;
static D IKJstream_ = &KJstream_;

/* Variables */

D format_outYsimple_ioVcommon_dylan = &Kformat_outYsimple_ioVcommon_dylan;
D write_consoleYcommon_dylan_internalsVcommon_dylan = &Kwrite_consoleYcommon_dylan_internalsVcommon_dylan;
D Ttime_bufferTYcommon_dylan_internalsVcommon_dylan = &KPunboundVKi;
D application_nameYcommon_extensionsVcommon_dylan = &Kapplication_nameYcommon_extensionsVcommon_dylan;
D application_filenameYcommon_extensionsVcommon_dylan = &Kapplication_filenameYcommon_extensionsVcommon_dylan;
D application_argumentsYcommon_extensionsVcommon_dylan = &Kapplication_argumentsYcommon_extensionsVcommon_dylan;
D tokenize_command_lineYcommon_extensionsVcommon_dylan = &Ktokenize_command_lineYcommon_extensionsVcommon_dylan;
D Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = &KPfalseVKi;
D Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = &KPempty_vectorVKi;
D Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = &KPfalseVKi;

/* Objects */

_KLkeyword_methodGVKe Kwrite_consoleYcommon_dylan_internalsVcommon_dylan = {
  &KLkeyword_methodGVKeW /* wrapper */,
  &rest_key_xep_4,
  &K16,
  &key_mep_4,
  &Kwrite_consoleYcommon_dylan_internalsVcommon_dylanI,
  &K17
};

static _KLunionGVKe K5 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K14,
  &K15
};

static _KLsymbolGVKd KJstandard_output_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K13
};

static _KLsymbolGVKd KJstandard_error_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K12
};

static _KLsimple_methodGVKe Kinteger_as_rawF10 = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K11,
  &Kinteger_as_rawF10I
};

static _KLsignatureGVKe K11 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 44040197,
  &KDsignature_LintegerG_typesVKi
};

static _KLbyte_stringGVKd_14 K12 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 57,
  "standard-error"
};

static _KLbyte_stringGVKd_15 K13 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 61,
  "standard-output"
};

static _KLsingletonGVKd K14 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJstandard_output_
};

static _KLsingletonGVKd K15 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KJstandard_error_
};

static _KLkeyword_signatureGVKe K16 = {
  &KLkeyword_signatureGVKeW /* wrapper */,
  (D) 42205189,
  &KDsignature_LstringG_typesVKi,
  &K20,
  &K21
};

static _KLsimple_object_vectorGVKd_4 K17 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 17,
  &KJend_,
  &KPfalseVKi,
  &KJstream_,
  &KJstandard_output_
};

static _KLsymbolGVKd KJstream_ = {
  &KLsymbolGVKdW /* wrapper */,
  &K19
};

static _KLbyte_stringGVKd_6 K19 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "stream"
};

static _KLsimple_object_vectorGVKd_2 K20 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KJend_,
  &KJstream_
};

static _KLsimple_object_vectorGVKd_2 K21 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 9,
  &KLobjectGVKd,
  &K5
};

_KLsimple_methodGVKe Ktokenize_command_lineYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_1,
  &K35,
  &Ktokenize_command_lineYcommon_extensionsVcommon_dylanI
};

static _KLsimple_closure_methodGVKi_0 Knext_tokenF28 = {
  &KLsimple_closure_methodGVKiW /* wrapper */,
  &xep_3,
  &K32,
  &Knext_tokenF28I,
  (D) 1
};

static _KLpairGVKd K29 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM0,
  &KPempty_listVKi
};

static _KLunionGVKe K30 = {
  &KLunionGVKeW /* wrapper */,
  &Kunion_instanceQVKiI,
  &K31,
  &KLbyte_stringGVKd
};

static _KLsingletonGVKd K31 = {
  &KLsingletonGVKdW /* wrapper */,
  &Ksingleton_pointer_idQ_instanceQVKiI,
  &KPfalseVKi
};

static _KLsignatureAvaluesGVKi K32 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555469,
  &K33,
  &K34
};

static _KLsimple_object_vectorGVKd_3 K33 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 13,
  &KLobjectGVKd,
  &KLobjectGVKd,
  &KLobjectGVKd
};

static _KLsimple_object_vectorGVKd_1 K34 = {
  &KLsimple_object_vectorGVKdW /* wrapper */,
  (D) 5,
  &K30
};

static _KLsignatureAvaluesArest_valueGVKi K35 = {
  &KLsignatureAvaluesArest_valueGVKiW /* wrapper */,
  (D) 35652613,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KDsignature_Lbyte_stringG_typesVKi,
  &KLbyte_stringGVKd
};

_KLsimple_methodGVKe Kapplication_argumentsYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K42,
  &Kapplication_argumentsYcommon_extensionsVcommon_dylanI
};

static _KLbyte_stringGVKd_8 K38 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 33,
  "/cmdline"
};

static _KLbyte_stringGVKd_6 K39 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 25,
  "/proc/"
};

static _KLpairGVKd K40 = {
  &KLpairGVKdW /* wrapper */,
  &Kconcatenate_asVKdMM1,
  &K29
};

static _KLbyte_stringGVKd_4 K41 = {
  &KLbyte_stringGVKdW /* wrapper */,
  (D) 17,
  "/exe"
};

static _KLsignatureAvaluesGVKi K42 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_Lsimple_object_vectorG_typesVKi
};

_KLsimple_methodGVKe Kapplication_filenameYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K45,
  &Kapplication_filenameYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K45 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &K34
};

_KLsimple_methodGVKe Kapplication_nameYcommon_extensionsVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &xep_0,
  &K48,
  &Kapplication_nameYcommon_extensionsVcommon_dylanI
};

static _KLsignatureAvaluesGVKi K48 = {
  &KLsignatureAvaluesGVKiW /* wrapper */,
  (D) 33555457,
  &KPempty_vectorVKi,
  &KDsignature_Lbyte_stringG_typesVKi
};

_KLsimple_methodGVKe Kformat_outYsimple_ioVcommon_dylan = {
  &KLsimple_methodGVKeW /* wrapper */,
  &rest_xep_1,
  &K50,
  &Kformat_outYsimple_ioVcommon_dylanI
};

static _KLsignatureGVKe K50 = {
  &KLsignatureGVKeW /* wrapper */,
  (D) 42991621,
  &KDsignature_LstringG_typesVKi
};

/* Code */

D Kformat_outYsimple_ioVcommon_dylanI (D format_string_, D format_arguments_) {
  D T3;
  D T4;
  D T5;
  D T6;
  DBSTR T7;
  D T8;
  D T9;
  D T10;
  DWORD T11;
  DWORD T12;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:9
  T3 = primitive_copy_vector(format_arguments_);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:10
  T4 = Kformat_to_stringYcommon_extensionsVcommon_dylanI(format_string_, T3);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
  T5 = CONGRUENT_CALL1(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  primitive_type_check(T5, &KLintegerGVKd);
  T10 = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T12 = primitive_cast_integer_as_raw(T10);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T6 = Kinteger_as_rawF23I((D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T7 = primitive_string_as_raw(T4);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T11 = primitive_machine_word_shift_right(T12,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  write(T6, T7, T11);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T8 = Kinteger_as_rawF23I((D) 5);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  fsync(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T9 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:9
  MV_SET_COUNT(0);
  return(T9);
}

D Kwrite_consoleYcommon_dylan_internalsVcommon_dylanI (D string_, D Urest_, D Uend_, D stream_) {
  D streamF5;
  D T6;
  D streamF7;
  D T8;
  DWORD T9;
  D T10;
  DBSTR T11;
  D T12;
  D T13;
  D T14;
  D T15;
  D T16;
  D T17;
  DWORD T18;
  DWORD T19;
  DWORD T20;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:14
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:14
  primitive_type_check(stream_, &K5);
  streamF5 = stream_;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
  T14 = primitive_idQ(streamF5,IKJstandard_output_);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
  if (T14 != &KPfalseVKi) {
    streamF7 = (D) 5;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:21
    T15 = primitive_idQ(streamF5,IKJstandard_error_);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
    if (T15 != &KPfalseVKi) {
      T6 = (D) 9;
    } else {
      T6 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
    streamF7 = T6;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:19
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
  if (Uend_ != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
    primitive_type_check(Uend_, &KLintegerGVKd);
    T16 = Uend_;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
    T19 = primitive_cast_integer_as_raw(T16);
    T9 = T19;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
    CONGRUENT_CALL_PROLOG(&KsizeVKd, 1);
    T8 = CONGRUENT_CALL1(string_);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
    primitive_type_check(T8, &KLintegerGVKd);
    T17 = T8;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
    T20 = primitive_cast_integer_as_raw(T17);
    T9 = T20;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:24
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
  T10 = CALL1(&Kinteger_as_rawF10, streamF7);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
  T11 = primitive_string_as_raw(string_);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:28
  T18 = primitive_machine_word_shift_right(T9,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:25
  write(T10, T11, T18);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:32
  T12 = CALL1(&Kinteger_as_rawF10, streamF7);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:31
  fsync(T12);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:31
  T13 = &KPfalseVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:14
  MV_SET_COUNT(0);
  return(T13);
}

D Kdefault_random_seedYcommon_dylan_internalsVcommon_dylanI () {
  D T0;
  DBSTR T1;
  D T2;
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8;
  DWORD T9;
  D T10;
  DBCHR T11;
  D T12;
  DBCHR T13;
  DWORD T14;
  DWORD T15;
  DSINT T16;
  D T17_0;
  D T18;
  DWORD T19;
  D T20;
  DBCHR T21;
  D T22;
  DBCHR T23;
  DWORD T24;
  DSINT T25;
  D shiftF26;
  D T27;
  D T28;
  D T29;
  DWORD mxF30;
  DWORD T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DWORD T35;
  DWORD T36;
  DWORD T37;
  DWORD T38;
  DWORD T39;
  DWORD T40;
  DWORD T41;
  D T42_0;
  D T43;
  DWORD T44;
  D T45;
  DBCHR T46;
  D T47;
  DBCHR T48;
  DWORD T49;
  DSINT T50;
  D shiftF51;
  D T52;
  D T53;
  D T54;
  DWORD mxF55;
  DWORD T56;
  DWORD T57;
  DWORD T58;
  D T59;
  DWORD T60;
  DWORD T61;
  DWORD T62;
  DWORD T63;
  DWORD T64;
  DWORD T65;
  DWORD T66;
  DWORD T67;
  DWORD T68;
  D T69_0;
  D T70;
  DWORD T71;
  D T72;
  DBCHR T73;
  D T74;
  DBCHR T75;
  DWORD T76;
  DSINT T77;
  DWORD T78;
  D T79;
  D T80_0;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:40
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:43
  T0 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:43
  T1 = primitive_string_as_raw(T0);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:43
  T2 = primitive_cast_raw_as_pointer(T1);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:41
  time(T2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T3 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T8 = SLOT_VALUE_INITD(T3, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T9 = primitive_cast_integer_as_raw(T8);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T10 = primitive_machine_word_unsigned_less_thanQ(1,T9);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  if (T10 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T11 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T3, 1, 1);
    T13 = T11;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T7_0 = Kelement_range_errorVKeI(T3, (D) 1);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T12 = T7_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
    T16 = primitive_byte_character_as_raw(T12);
    T13 = T16;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T14 = primitive_machine_word_shift_left_signal_overflow(T13,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T15 = primitive_machine_word_logior(T14,1);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T4 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T18 = SLOT_VALUE_INITD(T4, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T19 = primitive_cast_integer_as_raw(T18);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T20 = primitive_machine_word_unsigned_less_thanQ(5,T19);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  if (T20 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T21 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T4, 1, 5);
    T23 = T21;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T17_0 = Kelement_range_errorVKeI(T4, (D) 5);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T22 = T17_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T25 = primitive_byte_character_as_raw(T22);
    T23 = T25;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T24 = primitive_machine_word_shift_left_signal_overflow(T23,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  shiftF26 = (D) 33;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  mxF30 = T24;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T29 = shiftF26;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T33 = primitive_cast_integer_as_raw(T29);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T34 = primitive_machine_word_equalQ(T33,257);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  if (T34 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    shiftF26 = (D) 129;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T28 = shiftF26;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T32 = mxF30;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T37 = primitive_cast_integer_as_raw(T28);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T36 = primitive_machine_word_shift_right(T37,2);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    T35 = primitive_machine_word_shift_left_signal_overflow(T32,T36);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
    mxF30 = T35;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T27 = shiftF26;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T31 = mxF30;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T40 = primitive_cast_integer_as_raw(T27);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T39 = primitive_machine_word_shift_right(T40,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T38 = primitive_machine_word_shift_left_signal_overflow(T31,T39);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:46
  T41 = primitive_machine_word_logior(T38,1);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T5 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T43 = SLOT_VALUE_INITD(T5, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T44 = primitive_cast_integer_as_raw(T43);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T45 = primitive_machine_word_unsigned_less_thanQ(9,T44);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  if (T45 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T46 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T5, 1, 9);
    T48 = T46;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T42_0 = Kelement_range_errorVKeI(T5, (D) 9);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T47 = T42_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T50 = primitive_byte_character_as_raw(T47);
    T48 = T50;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T49 = primitive_machine_word_shift_left_signal_overflow(T48,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  shiftF51 = (D) 65;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  mxF55 = T49;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T54 = shiftF51;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T58 = primitive_cast_integer_as_raw(T54);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T59 = primitive_machine_word_equalQ(T58,257);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  if (T59 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    shiftF51 = (D) 129;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T53 = shiftF51;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T57 = mxF55;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T62 = primitive_cast_integer_as_raw(T53);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T61 = primitive_machine_word_shift_right(T62,2);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    T60 = primitive_machine_word_shift_left_signal_overflow(T57,T61);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
    mxF55 = T60;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T52 = shiftF51;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T56 = mxF55;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T65 = primitive_cast_integer_as_raw(T52);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T64 = primitive_machine_word_shift_right(T65,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T63 = primitive_machine_word_shift_left_signal_overflow(T56,T64);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:47
  T66 = primitive_machine_word_logior(T63,1);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T67 = primitive_machine_word_logior(T15,T41);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T68 = primitive_machine_word_logior(T67,T66);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T6 = primitive_read_thread_variable(Ttime_bufferTYcommon_dylan_internalsVcommon_dylan);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T70 = SLOT_VALUE_INITD(T6, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T71 = primitive_cast_integer_as_raw(T70);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T72 = primitive_machine_word_unsigned_less_thanQ(13,T71);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  if (T72 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T73 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(T6, 1, 13);
    T75 = T73;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T69_0 = Kelement_range_errorVKeI(T6, (D) 13);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T74 = T69_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
    T77 = primitive_byte_character_as_raw(T74);
    T75 = T77;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:48
  T76 = primitive_machine_word_shift_left_signal_overflow(T75,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T78 = primitive_machine_word_add_signal_overflow(T68,T76);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T79 = primitive_cast_raw_as_integer(T78);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:45
  T80_0 = T79;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:40
  MV_SET_COUNT(1);
  return(T80_0);
}

static D Kinteger_as_rawF10I (D x_) {
  DWORD T1;
  DWORD T2;
  DWORD T3;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T2 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  T1 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:11
  return(T1);
}

static D Kinteger_as_rawF23I (D x_) {
  DWORD T1;
  DWORD T2;
  DWORD T3;

  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  T3 = primitive_cast_integer_as_raw(x_);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  T2 = primitive_machine_word_shift_right(T3,2);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  T1 = T2;
  MV_SET_ELT(0, T2);
  MV_SET_COUNT(1);
  // /opt/opendylan-2013.1/sources/common-dylan/macros.dylan:207
  return(T1);
}

D Ktokenize_command_lineYcommon_extensionsVcommon_dylanI (D line_) {
  D T2;
  D tokenF3;
  D T4;
  D T5;
  D T6_0;
  D T6;
  D T7_0;
  D T7;
  D tokens_;
  D T9;
  D T10;
  D Ustart_;
  D T12;
  D T13;
  D T14_0;
  D tokenF15;
  DWORD T16;
  DWORD T17;
  D T18;
  _KLsimple_object_vectorGVKd_1 T19 = {&KLsimple_object_vectorGVKdW, (D) 5};

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:119
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:121
  tokens_ = &KPempty_listVKi;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:122
  Ustart_ = MAKE_D_CELL((D) 1);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:123
  T13 = SLOT_VALUE_INITD(line_, 0);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:124
  T14_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:124
  tokenF15 = T14_0;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:125
  T2 = MAKE_CLOSURE_INITD(&Knext_tokenF28, 1, Ustart_);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T12 = GET_D_CELL_VAL(Ustart_);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T16 = primitive_cast_integer_as_raw(T12);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T17 = primitive_cast_integer_as_raw(T13);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    T18 = primitive_machine_word_less_thanQ(T16,T17);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    if (T18 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:159
      get_teb()->function = T2;
      tokenF3 = Knext_tokenF28I(tokenF15, T13, line_);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:160
      if (tokenF3 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:161
        T10 = tokens_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:161
        CONGRUENT_CALL_PROLOG(&KaddXVKd, 2);
        T4 = CONGRUENT_CALL2(T10, tokenF3);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:161
        tokens_ = T4;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:160
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:158
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T9 = tokens_;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T5 = CALL1(&KreverseXVKd, T9);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T19.vector_element_[0] = T5;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:164
  T6_0 = KapplyVKdI(&KvaluesVKd, &T19);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:119
  T7_0 = MV_CHECK_TYPE_REST(T6_0, &KLbyte_stringGVKd, 1, &KLbyte_stringGVKd);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:119
  return(T7_0);
}

static D Knext_tokenF28I (D token_, D implicit_argument_, D line_) {
  D T3;
  D T4;
  D T5;
  D T6;
  D T7_0;
  D T8_0;
  D escapedQ_;
  D T10;
  D quotedQ_;
  D T12;
  D T13;
  D doneQ_;
  D T15;
  D T16;
  D T17;
  D T18;
  D T19;
  D T20;
  D T21;
  D UstartF22;
  D T23;
  D T24;
  D T25;
  D T26;
  DWORD T27;
  DWORD T28;
  D T29;
  D T30_0;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  DBCHR T35;
  D T36;
  DBCHR T37;
  D UtmpF38;
  D T39;
  DWORD T40;
  DWORD T41;
  DSINT T42;
  D T43;
  DWORD T44;
  DWORD T45;
  D T46;
  DWORD T47;
  DWORD T48;
  D T49;
  DWORD T50;
  DWORD T51;
  D T52;
  DWORD T53;
  DWORD T54;
  D T55;
  DWORD T56;
  D T57;
  D T58;
  D T59_0;
  D T60;
  DWORD T61;
  DWORD T62;
  D T63;
  DBCHR T64;
  D T65;
  DBCHR T66;
  D UtmpF67;
  D T68;
  DWORD T69;
  DWORD T70;
  DSINT T71;
  D T72;
  D T73;
  DWORD T74;
  DWORD T75;
  D T76;
  DWORD T77;
  DWORD T78;
  D T79;
  DWORD T80;
  DWORD T81;
  D T82;
  DWORD T83;
  DWORD T84;
  D T85;
  DWORD T86;
  DWORD T87;
  D T88;
  D UtmpF89;
  D T90;
  DWORD T91;
  DWORD T92;
  D T93;
  DWORD T94;
  DWORD T95;
  D T96;
  DWORD T97;
  DWORD T98;
  D T99;
  DWORD T100;
  DWORD T101;
  D T102;
  D T103_0;
  D T104_0;
  CAPTURE_ENVIRONMENT

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:125
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  T20 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  UstartF22 = T20;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
L0: ;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T25 = UstartF22;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T27 = primitive_cast_integer_as_raw(T25);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T28 = primitive_cast_integer_as_raw(implicit_argument_);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    T29 = primitive_machine_word_less_thanQ(T27,T28);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    if (T29 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T24 = UstartF22;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T31 = SLOT_VALUE_INITD(line_, 0);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T32 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T33 = primitive_cast_integer_as_raw(T31);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T34 = primitive_machine_word_unsigned_less_thanQ(T32,T33);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      if (T34 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T35 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(line_, 1, T32);
        T37 = T35;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T30_0 = Kelement_range_errorVKeI(line_, T24);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T36 = T30_0;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T42 = primitive_byte_character_as_raw(T36);
        T37 = T42;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T40 = primitive_machine_word_shift_left_signal_overflow(T37,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T41 = primitive_machine_word_logior(T40,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T43 = primitive_machine_word_equalQ(T41,129);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      if (T43 != &KPfalseVKi) {
        UtmpF38 = T43;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T44 = primitive_machine_word_shift_left_signal_overflow(T37,2);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T45 = primitive_machine_word_logior(T44,1);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T46 = primitive_machine_word_equalQ(T45,37);
        UtmpF38 = T46;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      if (UtmpF38 != &KPfalseVKi) {
        T39 = UtmpF38;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T47 = primitive_machine_word_shift_left_signal_overflow(T37,2);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T48 = primitive_machine_word_logior(T47,1);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
        T49 = primitive_machine_word_equalQ(T48,41);
        T39 = T49;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T21 = T39;
    } else {
      T21 = &KPfalseVKi;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    if (T21 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T26 = UstartF22;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T50 = primitive_cast_integer_as_raw(T26);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T51 = primitive_machine_word_add_signal_overflow(T50,4);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      T52 = primitive_cast_raw_as_integer(T51);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      UstartF22 = T52;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
      goto L0;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  T23 = UstartF22;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:126
  SET_D_CELL_VAL(CREF(0), T23);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T19 = GET_D_CELL_VAL(CREF(0));
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T53 = primitive_cast_integer_as_raw(T19);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T54 = primitive_cast_integer_as_raw(implicit_argument_);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  T55 = primitive_machine_word_less_thanQ(T53,T54);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  if (T55 != &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:128
    escapedQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:129
    quotedQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:130
    doneQ_ = &KPfalseVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:131
    Ksize_setterVKdMM1I((D) 1, token_);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
  L1: ;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      T16 = GET_D_CELL_VAL(CREF(0));
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      T56 = primitive_cast_integer_as_raw(T16);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      T57 = primitive_machine_word_less_thanQ(T56,T54);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      if (T57 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
        T15 = doneQ_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
        T58 = primitive_not(T15);
        T6 = T58;
      } else {
        T6 = &KPfalseVKi;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      if (T6 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T18 = GET_D_CELL_VAL(CREF(0));
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T60 = SLOT_VALUE_INITD(line_, 0);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T61 = primitive_cast_integer_as_raw(T18);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T62 = primitive_cast_integer_as_raw(T60);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        T63 = primitive_machine_word_unsigned_less_thanQ(T61,T62);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        if (T63 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
          T64 = REPEATED_DBCHR_SLOT_VALUE_TAGGED(line_, 1, T61);
          T66 = T64;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
          T59_0 = Kelement_range_errorVKeI(line_, T18);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
          T65 = T59_0;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          T71 = primitive_byte_character_as_raw(T65);
          T66 = T71;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:133
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
        T72 = primitive_raw_as_byte_character(T66);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        T10 = escapedQ_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        if (T10 != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:136
          KaddXVKdMM3I(token_, T72);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:137
          escapedQ_ = &KPfalseVKi;
        } else {
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          T13 = quotedQ_;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          if (T13 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T69 = primitive_machine_word_shift_left_signal_overflow(T66,2);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T70 = primitive_machine_word_logior(T69,1);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T73 = primitive_machine_word_equalQ(T70,129);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            if (T73 != &KPfalseVKi) {
              UtmpF67 = T73;
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T74 = primitive_machine_word_shift_left_signal_overflow(T66,2);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T75 = primitive_machine_word_logior(T74,1);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T76 = primitive_machine_word_equalQ(T75,37);
              UtmpF67 = T76;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            if (UtmpF67 != &KPfalseVKi) {
              T68 = UtmpF67;
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T77 = primitive_machine_word_shift_left_signal_overflow(T66,2);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T78 = primitive_machine_word_logior(T77,1);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
              T79 = primitive_machine_word_equalQ(T78,41);
              T68 = T79;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
            T3 = T68;
          } else {
            T3 = &KPfalseVKi;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:138
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
          if (T3 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:139
            KaddXVKdMM3I(token_, T72);
          } else {
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:140
            T12 = quotedQ_;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:140
            CONGRUENT_CALL_PROLOG(&KEVKd, 2);
            T4 = CONGRUENT_CALL2(T12, T72);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
            if (T4 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:141
              quotedQ_ = &KPfalseVKi;
            } else {
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:142
              T80 = primitive_machine_word_shift_left_signal_overflow(T66,2);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:142
              T81 = primitive_machine_word_logior(T80,1);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:142
              T82 = primitive_machine_word_equalQ(T81,369);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
              if (T82 != &KPfalseVKi) {
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:143
                escapedQ_ = &KPtrueVKi;
              } else {
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                T83 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                T84 = primitive_machine_word_logior(T83,1);
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                T85 = primitive_machine_word_equalQ(T84,137);
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                if (T85 != &KPfalseVKi) {
                  T5 = T85;
                } else {
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                  T86 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                  T87 = primitive_machine_word_logior(T86,1);
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                  T88 = primitive_machine_word_equalQ(T87,157);
                  T5 = T88;
                }
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:144
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
                if (T5 != &KPfalseVKi) {
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:145
                  quotedQ_ = T72;
                } else {
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  T91 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  T92 = primitive_machine_word_logior(T91,1);
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  T93 = primitive_machine_word_equalQ(T92,129);
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  if (T93 != &KPfalseVKi) {
                    UtmpF89 = T93;
                  } else {
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T94 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T95 = primitive_machine_word_logior(T94,1);
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T96 = primitive_machine_word_equalQ(T95,37);
                    UtmpF89 = T96;
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  if (UtmpF89 != &KPfalseVKi) {
                    T90 = UtmpF89;
                  } else {
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T97 = primitive_machine_word_shift_left_signal_overflow(T66,2);
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T98 = primitive_machine_word_logior(T97,1);
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                    T99 = primitive_machine_word_equalQ(T98,41);
                    T90 = T99;
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:146
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
                  if (T90 != &KPfalseVKi) {
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:147
                    doneQ_ = &KPtrueVKi;
                  } else {
                    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:149
                    KaddXVKdMM3I(token_, T72);
                  }
                  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
                }
                // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
              }
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
            }
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
          }
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        }
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:134
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T17 = GET_D_CELL_VAL(CREF(0));
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T100 = primitive_cast_integer_as_raw(T17);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T101 = primitive_machine_word_add_signal_overflow(T100,4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        T102 = primitive_cast_raw_as_integer(T101);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:151
        SET_D_CELL_VAL(CREF(0), T102);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:132
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:153
    MIEP_CALL_PROLOG(&K29);
    T103_0 = Kconcatenate_asVKdMM1I(&KLbyte_stringGVKd, token_, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:153
    T104_0 = T103_0;
    {
      MV_CHECK_TYPE_PROLOGUE(T103_0);
      primitive_type_check(T104_0, &K30);
      MV_CHECK_TYPE_EPILOGUE();
    }
    T8_0 = T104_0;
  } else {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:155
    T7_0 = &KPfalseVKi;
    T8_0 = T7_0;
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:127
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:125
  MV_SET_COUNT(1);
  return(T8_0);
}

D Kapplication_argumentsYcommon_extensionsVcommon_dylanI () {
  D T0;
  D T1_0;
  D T2;
  DWORD T3;
  D T4;
  D T5;
  D T6;
  D Ustart_;
  D T8;
  D T9;
  D Uskip_;
  D T11;
  D T12;
  int T13;
  D T14;
  D T15;
  DBSTR T16;
  int T17;
  DBSTR T18;
  int T19;
  D cmdline_fd_;
  D T21;
  D T22;
  D T23;
  D T24;
  D cmdline_;
  D T26;
  D T27;
  D count_;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  D cmdline_path_;
  _KLsimple_object_vectorGVKd_2 T36 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T37_0;
  DWORD T38;
  DWORD T39;
  D T40;
  DWORD T41;
  D T42;
  DWORD T43;
  D T44;
  D bufferF45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  D T52;
  D T53;
  D T54;
  _KLsimple_object_vectorGVKd_1 T55 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T56_0;
  DWORD T57;
  D T58;
  DWORD T59;
  DWORD T60;
  D T61_0;
  D tokens_;
  D T63;
  DWORD T64;
  DWORD T65;
  D T66;
  D Utmp_;
  D T68;
  D T69;
  DWORD T70;
  D T71;
  DWORD T72;
  D T73;
  DWORD T74;
  DWORD T75;
  D T76;
  D T77_0;
  D T78;
  D T79;
  DWORD T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  _KLsimple_object_vectorGVKd_1 T86 = {&KLsimple_object_vectorGVKdW, (D) 5};
  int T87;
  D T88;
  DBSTR T89;
  DBSTR T90;
  int T91;
  DWORD T92;
  DWORD T93;
  D T94;
  D exe_path_;
  _KLsimple_object_vectorGVKd_2 T96 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T97_0;
  D bufferF98;
  DWORD T99;
  DWORD T100;
  D T101;
  D T102;
  D T103_0;
  D T104;
  D T105;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:96
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  T2 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  if (T2 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T13 = getpid();
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T32 = primitive_machine_word_shift_left_signal_overflow(T13,2);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T33 = primitive_machine_word_logior(T32,1);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T34 = primitive_cast_raw_as_integer(T33);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T14 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T34, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T36.vector_element_[0] = T14;
    T36.vector_element_[1] = &K38;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    MIEP_CALL_PROLOG(&K40);
    T37_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, &K39, &T36);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    cmdline_path_ = T37_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    cmdline_fd_ = (D) -3;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    cmdline_ = &KPempty_stringVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    ENTER_UNWIND_FRAME(T15);
    if (!nlx_setjmp(FRAME_DEST(T15))) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T16 = primitive_string_as_raw(cmdline_path_);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T17 = open(T16, 0, 0);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T38 = primitive_machine_word_shift_left_signal_overflow(T17,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T39 = primitive_machine_word_logior(T38,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T40 = primitive_cast_raw_as_integer(T39);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      cmdline_fd_ = T40;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T24 = cmdline_fd_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T41 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T42 = primitive_machine_word_less_thanQ(1,T41);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      if (T42 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        count_ = (D) 5;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      L0: ;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T29 = count_;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T43 = primitive_cast_integer_as_raw(T29);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T44 = primitive_machine_word_less_thanQ(1,T43);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          if (T44 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            bufferF45 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 32769);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T23 = cmdline_fd_;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T47 = primitive_cast_integer_as_raw(T23);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T46 = primitive_machine_word_shift_right(T47,2);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T18 = primitive_string_as_raw(bufferF45);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T19 = read(T46, T18, 8192);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T48 = primitive_machine_word_shift_left_signal_overflow(T19,2);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T49 = primitive_machine_word_logior(T48,1);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T50 = primitive_cast_raw_as_integer(T49);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            count_ = T50;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T31 = count_;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T51 = primitive_cast_integer_as_raw(T31);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            T52 = primitive_machine_word_less_thanQ(1,T51);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            if (T52 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T30 = count_;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T53 = Kcopy_sequenceVKdMM3I(bufferF45, &KPempty_vectorVKi, (D) 1, T30);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T27 = cmdline_;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T55.vector_element_[0] = T53;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              MIEP_CALL_PROLOG(&K40);
              T56_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, T27, &T55);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              T54 = T56_0;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
              cmdline_ = T54;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      FALL_THROUGH_UNWIND(&KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T22 = cmdline_fd_;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T57 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T58 = primitive_machine_word_less_thanQ(1,T57);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    if (T58 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T21 = cmdline_fd_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T60 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T59 = primitive_machine_word_shift_right(T60,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      close(T59);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T26 = cmdline_;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T61_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    tokens_ = T61_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    Ustart_ = (D) 1;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T63 = SLOT_VALUE_INITD(T26, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T65 = primitive_cast_integer_as_raw(T63);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    Uskip_ = (D) 1;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  L1: ;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T8 = Ustart_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T64 = primitive_cast_integer_as_raw(T8);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T66 = primitive_machine_word_less_thanQ(T64,T65);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      if (T66 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T12 = Uskip_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        Utmp_ = KpositionYcommon_extensionsVcommon_dylanMM3I(T26, C('\x0'), &KPempty_vectorVKi, &KEVKd, (D) 1, &KPunboundVKi, T12, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        if (Utmp_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          primitive_type_check(Utmp_, &KLintegerGVKd);
          T68 = Utmp_;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
          T72 = primitive_cast_integer_as_raw(T68);
          T3 = T72;
        } else {
          T3 = T65;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T73 = primitive_cast_raw_as_integer(T3);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T9 = Ustart_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T69 = Kcopy_sequenceVKdMM3I(T26, &KPempty_vectorVKi, T9, T73);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        KaddXVKdMM3I(tokens_, T69);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T70 = primitive_machine_word_add_signal_overflow(T3,4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T71 = primitive_cast_raw_as_integer(T70);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        Ustart_ = T71;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T11 = Uskip_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T74 = primitive_cast_integer_as_raw(T11);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T75 = primitive_machine_word_add_signal_overflow(T74,4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T76 = primitive_cast_raw_as_integer(T75);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        Uskip_ = T76;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T78 = SLOT_VALUE_INITD(tokens_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T79 = SLOT_VALUE_INITD(T78, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T80 = primitive_cast_integer_as_raw(T79);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T81 = primitive_machine_word_unsigned_less_thanQ(1,T80);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    if (T81 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T82 = REPEATED_D_SLOT_VALUE_TAGGED(T78, 2, 1);
      T84 = T82;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T77_0 = Kelement_range_errorVKeI(tokens_, (D) 1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T83 = T77_0;
      T84 = T83;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T85 = Kcopy_sequenceVKdMM1I(tokens_, &KPempty_vectorVKi, (D) 5, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T86.vector_element_[0] = T85;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T4 = KapplyVKdI(&KvectorVKd, &T86);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = T84;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    primitive_type_check(T4, &KLsimple_object_vectorGVKd);
    T5 = T4;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    T6 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
    if (T6 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T87 = getpid();
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T92 = primitive_machine_word_shift_left_signal_overflow(T87,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T93 = primitive_machine_word_logior(T92,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T94 = primitive_cast_raw_as_integer(T93);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T88 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T94, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T96.vector_element_[0] = T88;
      T96.vector_element_[1] = &K41;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      MIEP_CALL_PROLOG(&K40);
      T97_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, &K39, &T96);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      exe_path_ = T97_0;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      bufferF98 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 32769);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T89 = primitive_string_as_raw(exe_path_);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T90 = primitive_string_as_raw(bufferF98);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T91 = readlink(T89, T90, 8192);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T99 = primitive_machine_word_shift_left_signal_overflow(T91,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T100 = primitive_machine_word_logior(T99,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T101 = primitive_cast_raw_as_integer(T100);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      T102 = primitive_machine_word_equalQ(T100,-3);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      if (T102 != &KPfalseVKi) {
        T105 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T103_0 = Kcopy_sequenceVKdMM3I(bufferF98, &KPempty_vectorVKi, (D) 1, T101);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
        T104 = T103_0;
        T105 = T104;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T105;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:97
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:98
  T0 = Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:98
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:96
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kapplication_filenameYcommon_extensionsVcommon_dylanI () {
  D T0;
  D T1_0;
  D T2;
  DWORD T3;
  D T4;
  D T5;
  D T6;
  D Ustart_;
  D T8;
  D T9;
  D Uskip_;
  D T11;
  D T12;
  int T13;
  D T14;
  D T15;
  DBSTR T16;
  int T17;
  DBSTR T18;
  int T19;
  D cmdline_fd_;
  D T21;
  D T22;
  D T23;
  D T24;
  D cmdline_;
  D T26;
  D T27;
  D count_;
  D T29;
  D T30;
  D T31;
  DWORD T32;
  DWORD T33;
  D T34;
  D cmdline_path_;
  _KLsimple_object_vectorGVKd_2 T36 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T37_0;
  DWORD T38;
  DWORD T39;
  D T40;
  DWORD T41;
  D T42;
  DWORD T43;
  D T44;
  D bufferF45;
  DWORD T46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  D T50;
  DWORD T51;
  D T52;
  D T53;
  D T54;
  _KLsimple_object_vectorGVKd_1 T55 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T56_0;
  DWORD T57;
  D T58;
  DWORD T59;
  DWORD T60;
  D T61_0;
  D tokens_;
  D T63;
  DWORD T64;
  DWORD T65;
  D T66;
  D Utmp_;
  D T68;
  D T69;
  DWORD T70;
  D T71;
  DWORD T72;
  D T73;
  DWORD T74;
  DWORD T75;
  D T76;
  D T77_0;
  D T78;
  D T79;
  DWORD T80;
  D T81;
  D T82;
  D T83;
  D T84;
  D T85;
  _KLsimple_object_vectorGVKd_1 T86 = {&KLsimple_object_vectorGVKdW, (D) 5};
  int T87;
  D T88;
  DBSTR T89;
  DBSTR T90;
  int T91;
  DWORD T92;
  DWORD T93;
  D T94;
  D exe_path_;
  _KLsimple_object_vectorGVKd_2 T96 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T97_0;
  D bufferF98;
  DWORD T99;
  DWORD T100;
  D T101;
  D T102;
  D T103_0;
  D T104;
  D T105;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:91
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  T2 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  if (T2 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T13 = getpid();
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T32 = primitive_machine_word_shift_left_signal_overflow(T13,2);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T33 = primitive_machine_word_logior(T32,1);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T34 = primitive_cast_raw_as_integer(T33);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T14 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T34, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T36.vector_element_[0] = T14;
    T36.vector_element_[1] = &K38;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    MIEP_CALL_PROLOG(&K40);
    T37_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, &K39, &T36);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    cmdline_path_ = T37_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    cmdline_fd_ = (D) -3;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    cmdline_ = &KPempty_stringVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    ENTER_UNWIND_FRAME(T15);
    if (!nlx_setjmp(FRAME_DEST(T15))) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T16 = primitive_string_as_raw(cmdline_path_);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T17 = open(T16, 0, 0);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T38 = primitive_machine_word_shift_left_signal_overflow(T17,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T39 = primitive_machine_word_logior(T38,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T40 = primitive_cast_raw_as_integer(T39);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      cmdline_fd_ = T40;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T24 = cmdline_fd_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T41 = primitive_cast_integer_as_raw(T24);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T42 = primitive_machine_word_less_thanQ(1,T41);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      if (T42 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        count_ = (D) 5;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      L0: ;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T29 = count_;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T43 = primitive_cast_integer_as_raw(T29);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T44 = primitive_machine_word_less_thanQ(1,T43);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          if (T44 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            bufferF45 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 32769);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T23 = cmdline_fd_;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T47 = primitive_cast_integer_as_raw(T23);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T46 = primitive_machine_word_shift_right(T47,2);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T18 = primitive_string_as_raw(bufferF45);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T19 = read(T46, T18, 8192);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T48 = primitive_machine_word_shift_left_signal_overflow(T19,2);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T49 = primitive_machine_word_logior(T48,1);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T50 = primitive_cast_raw_as_integer(T49);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            count_ = T50;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T31 = count_;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T51 = primitive_cast_integer_as_raw(T31);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            T52 = primitive_machine_word_less_thanQ(1,T51);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            if (T52 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T30 = count_;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T53 = Kcopy_sequenceVKdMM3I(bufferF45, &KPempty_vectorVKi, (D) 1, T30);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T27 = cmdline_;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T55.vector_element_[0] = T53;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              MIEP_CALL_PROLOG(&K40);
              T56_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, T27, &T55);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              T54 = T56_0;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
              cmdline_ = T54;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      FALL_THROUGH_UNWIND(&KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T22 = cmdline_fd_;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T57 = primitive_cast_integer_as_raw(T22);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T58 = primitive_machine_word_less_thanQ(1,T57);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    if (T58 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T21 = cmdline_fd_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T60 = primitive_cast_integer_as_raw(T21);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T59 = primitive_machine_word_shift_right(T60,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      close(T59);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T26 = cmdline_;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T61_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    tokens_ = T61_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    Ustart_ = (D) 1;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T63 = SLOT_VALUE_INITD(T26, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T65 = primitive_cast_integer_as_raw(T63);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    Uskip_ = (D) 1;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  L1: ;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T8 = Ustart_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T64 = primitive_cast_integer_as_raw(T8);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T66 = primitive_machine_word_less_thanQ(T64,T65);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      if (T66 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T12 = Uskip_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        Utmp_ = KpositionYcommon_extensionsVcommon_dylanMM3I(T26, C('\x0'), &KPempty_vectorVKi, &KEVKd, (D) 1, &KPunboundVKi, T12, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        if (Utmp_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          primitive_type_check(Utmp_, &KLintegerGVKd);
          T68 = Utmp_;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
          T72 = primitive_cast_integer_as_raw(T68);
          T3 = T72;
        } else {
          T3 = T65;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T73 = primitive_cast_raw_as_integer(T3);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T9 = Ustart_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T69 = Kcopy_sequenceVKdMM3I(T26, &KPempty_vectorVKi, T9, T73);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        KaddXVKdMM3I(tokens_, T69);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T70 = primitive_machine_word_add_signal_overflow(T3,4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T71 = primitive_cast_raw_as_integer(T70);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        Ustart_ = T71;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T11 = Uskip_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T74 = primitive_cast_integer_as_raw(T11);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T75 = primitive_machine_word_add_signal_overflow(T74,4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T76 = primitive_cast_raw_as_integer(T75);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        Uskip_ = T76;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T78 = SLOT_VALUE_INITD(tokens_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T79 = SLOT_VALUE_INITD(T78, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T80 = primitive_cast_integer_as_raw(T79);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T81 = primitive_machine_word_unsigned_less_thanQ(1,T80);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    if (T81 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T82 = REPEATED_D_SLOT_VALUE_TAGGED(T78, 2, 1);
      T84 = T82;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T77_0 = Kelement_range_errorVKeI(tokens_, (D) 1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T83 = T77_0;
      T84 = T83;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T85 = Kcopy_sequenceVKdMM1I(tokens_, &KPempty_vectorVKi, (D) 5, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T86.vector_element_[0] = T85;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T4 = KapplyVKdI(&KvectorVKd, &T86);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = T84;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    primitive_type_check(T4, &KLsimple_object_vectorGVKd);
    T5 = T4;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    T6 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
    if (T6 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T87 = getpid();
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T92 = primitive_machine_word_shift_left_signal_overflow(T87,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T93 = primitive_machine_word_logior(T92,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T94 = primitive_cast_raw_as_integer(T93);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T88 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T94, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T96.vector_element_[0] = T88;
      T96.vector_element_[1] = &K41;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      MIEP_CALL_PROLOG(&K40);
      T97_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, &K39, &T96);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      exe_path_ = T97_0;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      bufferF98 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 32769);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T89 = primitive_string_as_raw(exe_path_);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T90 = primitive_string_as_raw(bufferF98);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T91 = readlink(T89, T90, 8192);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T99 = primitive_machine_word_shift_left_signal_overflow(T91,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T100 = primitive_machine_word_logior(T99,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T101 = primitive_cast_raw_as_integer(T100);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      T102 = primitive_machine_word_equalQ(T100,-3);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      if (T102 != &KPfalseVKi) {
        T105 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T103_0 = Kcopy_sequenceVKdMM3I(bufferF98, &KPempty_vectorVKi, (D) 1, T101);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
        T104 = T103_0;
        T105 = T104;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T105;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:92
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:93
  T0 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:93
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:91
  MV_SET_COUNT(1);
  return(T1_0);
}

D Kapplication_nameYcommon_extensionsVcommon_dylanI () {
  D T0;
  D T1_0;
  D T2_0;
  D T3;
  DWORD T4;
  D T5;
  D T6;
  D T7;
  D Ustart_;
  D T9;
  D T10;
  D Uskip_;
  D T12;
  D T13;
  int T14;
  D T15;
  D T16;
  DBSTR T17;
  int T18;
  DBSTR T19;
  int T20;
  D cmdline_fd_;
  D T22;
  D T23;
  D T24;
  D T25;
  D cmdline_;
  D T27;
  D T28;
  D count_;
  D T30;
  D T31;
  D T32;
  DWORD T33;
  DWORD T34;
  D T35;
  D cmdline_path_;
  _KLsimple_object_vectorGVKd_2 T37 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T38_0;
  DWORD T39;
  DWORD T40;
  D T41;
  DWORD T42;
  D T43;
  DWORD T44;
  D T45;
  D bufferF46;
  DWORD T47;
  DWORD T48;
  DWORD T49;
  DWORD T50;
  D T51;
  DWORD T52;
  D T53;
  D T54;
  D T55;
  _KLsimple_object_vectorGVKd_1 T56 = {&KLsimple_object_vectorGVKdW, (D) 5};
  D T57_0;
  DWORD T58;
  D T59;
  DWORD T60;
  DWORD T61;
  D T62_0;
  D tokens_;
  D T64;
  DWORD T65;
  DWORD T66;
  D T67;
  D Utmp_;
  D T69;
  D T70;
  DWORD T71;
  D T72;
  DWORD T73;
  D T74;
  DWORD T75;
  DWORD T76;
  D T77;
  D T78_0;
  D T79;
  D T80;
  DWORD T81;
  D T82;
  D T83;
  D T84;
  D T85;
  D T86;
  _KLsimple_object_vectorGVKd_1 T87 = {&KLsimple_object_vectorGVKdW, (D) 5};
  int T88;
  D T89;
  DBSTR T90;
  DBSTR T91;
  int T92;
  DWORD T93;
  DWORD T94;
  D T95;
  D exe_path_;
  _KLsimple_object_vectorGVKd_2 T97 = {&KLsimple_object_vectorGVKdW, (D) 9};
  D T98_0;
  D bufferF99;
  DWORD T100;
  DWORD T101;
  D T102;
  D T103;
  D T104_0;
  D T105;
  D T106;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:86
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  T3 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  if (T3 == &KPfalseVKi) {
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T14 = getpid();
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T33 = primitive_machine_word_shift_left_signal_overflow(T14,2);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T34 = primitive_machine_word_logior(T33,1);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T35 = primitive_cast_raw_as_integer(T34);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T15 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T35, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T37.vector_element_[0] = T15;
    T37.vector_element_[1] = &K38;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    MIEP_CALL_PROLOG(&K40);
    T38_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, &K39, &T37);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    cmdline_path_ = T38_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    cmdline_fd_ = (D) -3;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    cmdline_ = &KPempty_stringVKi;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    ENTER_UNWIND_FRAME(T16);
    if (!nlx_setjmp(FRAME_DEST(T16))) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T17 = primitive_string_as_raw(cmdline_path_);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T18 = open(T17, 0, 0);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T39 = primitive_machine_word_shift_left_signal_overflow(T18,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T40 = primitive_machine_word_logior(T39,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T41 = primitive_cast_raw_as_integer(T40);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      cmdline_fd_ = T41;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T25 = cmdline_fd_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T42 = primitive_cast_integer_as_raw(T25);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T43 = primitive_machine_word_less_thanQ(1,T42);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      if (T43 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        count_ = (D) 5;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      L0: ;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T30 = count_;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T44 = primitive_cast_integer_as_raw(T30);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T45 = primitive_machine_word_less_thanQ(1,T44);
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          if (T45 != &KPfalseVKi) {
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            bufferF46 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 32769);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T24 = cmdline_fd_;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T48 = primitive_cast_integer_as_raw(T24);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T47 = primitive_machine_word_shift_right(T48,2);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T19 = primitive_string_as_raw(bufferF46);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T20 = read(T47, T19, 8192);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T49 = primitive_machine_word_shift_left_signal_overflow(T20,2);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T50 = primitive_machine_word_logior(T49,1);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T51 = primitive_cast_raw_as_integer(T50);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            count_ = T51;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T32 = count_;
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T52 = primitive_cast_integer_as_raw(T32);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            T53 = primitive_machine_word_less_thanQ(1,T52);
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            if (T53 != &KPfalseVKi) {
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T31 = count_;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T54 = Kcopy_sequenceVKdMM3I(bufferF46, &KPempty_vectorVKi, (D) 1, T31);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T28 = cmdline_;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T56.vector_element_[0] = T54;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              MIEP_CALL_PROLOG(&K40);
              T57_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, T28, &T56);
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              T55 = T57_0;
              // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
              cmdline_ = T55;
            }
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
            goto L0;
          }
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      FALL_THROUGH_UNWIND(&KPfalseVKi);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T23 = cmdline_fd_;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T58 = primitive_cast_integer_as_raw(T23);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T59 = primitive_machine_word_less_thanQ(1,T58);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    if (T59 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T22 = cmdline_fd_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T61 = primitive_cast_integer_as_raw(T22);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T60 = primitive_machine_word_shift_right(T61,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      close(T60);
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    CONTINUE_UNWIND();
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T27 = cmdline_;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T62_0 = KLstretchy_object_vectorGZ32ZconstructorVKiMM0I(&KLstretchy_object_vectorGVKe, &KPempty_vectorVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    tokens_ = T62_0;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    Ustart_ = (D) 1;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T64 = SLOT_VALUE_INITD(T27, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T66 = primitive_cast_integer_as_raw(T64);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    Uskip_ = (D) 1;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  L1: ;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T9 = Ustart_;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T65 = primitive_cast_integer_as_raw(T9);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T67 = primitive_machine_word_less_thanQ(T65,T66);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      if (T67 != &KPfalseVKi) {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T13 = Uskip_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        Utmp_ = KpositionYcommon_extensionsVcommon_dylanMM3I(T27, C('\x0'), &KPempty_vectorVKi, &KEVKd, (D) 1, &KPunboundVKi, T13, &KPfalseVKi);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        if (Utmp_ != &KPfalseVKi) {
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          primitive_type_check(Utmp_, &KLintegerGVKd);
          T69 = Utmp_;
          // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
          T73 = primitive_cast_integer_as_raw(T69);
          T4 = T73;
        } else {
          T4 = T66;
        }
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T74 = primitive_cast_raw_as_integer(T4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T10 = Ustart_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T70 = Kcopy_sequenceVKdMM3I(T27, &KPempty_vectorVKi, T10, T74);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        KaddXVKdMM3I(tokens_, T70);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T71 = primitive_machine_word_add_signal_overflow(T4,4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T72 = primitive_cast_raw_as_integer(T71);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        Ustart_ = T72;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T12 = Uskip_;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T75 = primitive_cast_integer_as_raw(T12);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T76 = primitive_machine_word_add_signal_overflow(T75,4);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T77 = primitive_cast_raw_as_integer(T76);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        Uskip_ = T77;
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        goto L1;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T79 = SLOT_VALUE_INITD(tokens_, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T80 = SLOT_VALUE_INITD(T79, 0);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T81 = primitive_cast_integer_as_raw(T80);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T82 = primitive_machine_word_unsigned_less_thanQ(1,T81);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    if (T82 != &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T83 = REPEATED_D_SLOT_VALUE_TAGGED(T79, 2, 1);
      T85 = T83;
    } else {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T78_0 = Kelement_range_errorVKeI(tokens_, (D) 1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T84 = T78_0;
      T85 = T84;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T86 = Kcopy_sequenceVKdMM1I(tokens_, &KPempty_vectorVKi, (D) 5, &Kunsupplied_objectVKi);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T87.vector_element_[0] = T86;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T5 = KapplyVKdI(&KvectorVKd, &T87);
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    Tapplication_nameTYcommon_dylan_internalsVcommon_dylan = T85;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    primitive_type_check(T5, &KLsimple_object_vectorGVKd);
    T6 = T5;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    Tapplication_argumentsTYcommon_dylan_internalsVcommon_dylan = T6;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    T7 = Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan;
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
    if (T7 == &KPfalseVKi) {
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T88 = getpid();
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T93 = primitive_machine_word_shift_left_signal_overflow(T88,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T94 = primitive_machine_word_logior(T93,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T95 = primitive_cast_raw_as_integer(T94);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T89 = Kinteger_to_stringYcommon_extensionsVcommon_dylanI(T95, &KPempty_vectorVKi, (D) 41, (D) 1, C('0'));
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T97.vector_element_[0] = T89;
      T97.vector_element_[1] = &K41;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      MIEP_CALL_PROLOG(&K40);
      T98_0 = Kconcatenate_asVKdMM3I(&KLbyte_stringGVKd, &K39, &T97);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      exe_path_ = T98_0;
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      bufferF99 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 32769);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T90 = primitive_string_as_raw(exe_path_);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T91 = primitive_string_as_raw(bufferF99);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T92 = readlink(T90, T91, 8192);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T100 = primitive_machine_word_shift_left_signal_overflow(T92,2);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T101 = primitive_machine_word_logior(T100,1);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T102 = primitive_cast_raw_as_integer(T101);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      T103 = primitive_machine_word_equalQ(T101,-3);
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      if (T103 != &KPfalseVKi) {
        T106 = &KPfalseVKi;
      } else {
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T104_0 = Kcopy_sequenceVKdMM3I(bufferF99, &KPempty_vectorVKi, (D) 1, T102);
        // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
        T105 = T104_0;
        T106 = T105;
      }
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
      Tapplication_filenameTYcommon_dylan_internalsVcommon_dylan = T106;
    }
    // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:87
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:88
  T0 = Tapplication_nameTYcommon_dylan_internalsVcommon_dylan;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:88
  T1_0 = T0;
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:86
  T2_0 = T1_0;
  {
    MV_CHECK_TYPE_PROLOGUE(T1_0);
    primitive_type_check(T2_0, &KLbyte_stringGVKd);
    MV_CHECK_TYPE_EPILOGUE();
  }
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:86
  MV_SET_COUNT(1);
  return(T2_0);
}


/* SYSTEM INIT CODE */

void _Init_common_dylan__X_unix_common_extensions_for_system () {
  extern D KPresolve_symbolVKiI(D);
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstandard_output_);
    if (T0 != &KJstandard_output_) {
      primitive_repeated_slot_value_setter(T0, &K17, 1, 3);
      primitive_slot_value_setter(T0, &K14, 1);
      IKJstandard_output_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstandard_error_);
    if (T0 != &KJstandard_error_) {
      primitive_slot_value_setter(T0, &K15, 1);
      IKJstandard_error_ = T0;
    }
  }
  {
    D T0;

    T0 = KPresolve_symbolVKiI(&KJstream_);
    if (T0 != &KJstream_) {
      primitive_repeated_slot_value_setter(T0, &K20, 1, 1);
      primitive_repeated_slot_value_setter(T0, &K17, 1, 2);
    }
  }
  return;
}

/* USER INIT CODE */

void _Init_common_dylan__X_unix_common_extensions_for_user () {
{
  D T0;
  D T1;

  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:38
  T1 = KmakeVKdMM33I(&KLbyte_stringGVKd, &KPempty_vectorVKi, C('\x0'), (D) 33);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:37
  Ttime_bufferTYcommon_dylan_internalsVcommon_dylan = primitive_allocate_thread_variable(T1);
  // /opt/opendylan-2013.1/sources/common-dylan/unix-common-extensions.dylan:37
  T0 = &KPfalseVKi;
  goto I0;
}
I0:

  return;
}


/* eof */
